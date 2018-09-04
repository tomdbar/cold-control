'''
Created on 13 Aug 2016

@author: apc
'''

import Tkinter as tk
import ttk
import tkMessageBox
import math
# import matlab.engine
import numpy as np
import copy
import re
import os

from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2TkAgg
import matplotlib.pyplot as plt

from Config import AbsorbtionImagingReader, PhotonProductionReader, ExperimentalAutomationReader
from ToolTip_UI import ToolTip
from PIL import Image, ImageTk
from DAQ import DaqPlayException
from ExperiementalRunner import PhotonProductionExperiment, AbsorbtionImagingExperiment, ExperimentalAutomationRunner
from _abcoll import Sequence
from atom.event import Event
from win32inetcon import STICKY_CACHE_ENTRY
from _hotshot import resolution
from instruments.pyicic.IC_ImagingControl import IC_ImagingControl
from instruments.WX218x.WX218x_awg import WX218x_awg, Channel
from instruments.WX218x.WX218x_DLL import WX218x_OutputMode, WX218x_OperationMode, WX218x_Waveform 
from Tkinter import StringVar
from ScrolledText import ScrolledText

import threading
import Queue
import time
from msilib import init_database

import tkFileDialog


class Experimental_UI(tk.LabelFrame):

    def __init__(self, parent, daq_ui, sequence_ui, photon_produciton_configuration_fname, absorbtion_imaging_config_fname,
                 ic_imaging_control=None, text="Experimental Actions", font=("Helvetica", 16), development_mode=False, **kwargs):
        tk.LabelFrame.__init__(self, parent, text=text, font=font, **kwargs)
        
        self.parent = parent
        self.daq_ui = daq_ui
        self.sequence_ui = sequence_ui
        self.absorbtion_imaging_config = AbsorbtionImagingReader(absorbtion_imaging_config_fname).get_absorbtion_imaging_configuration()
        self.photon_production_config = PhotonProductionReader(photon_produciton_configuration_fname).get_photon_production_configuration()
        self.ic_ic = ic_imaging_control
        
        '''Add buttons to set and run the experimental sequence'''
        butt_opts = {'font': ("Helvetica", 12), 'height':25, 'width':150, 'compound': tk.LEFT}
        grid_opts = {'padx':5, 'pady':2, 'sticky':tk.E+tk.W}
        
        icon = Image.open("icons/graph_icon.png").resize((30,30))
        icon = ImageTk.PhotoImage(icon)
        self.set_seq_button = tk.Button(self, image=icon, text="Set sequence", command=self.openSeqWindow, background='green4', **butt_opts)
        self.set_seq_button.image = icon # store the image as a variable in the widget to prevent garbage collection.
        
        icon = Image.open("icons/play_icon.png").resize((30,30))
        icon = ImageTk.PhotoImage(icon)
        self.run_seq_button = tk.Button(self, image=icon, text="Run sequence", command=self.runSeq,  background='green2', **butt_opts)
        self.run_seq_button.image = icon # store the image as a variable in the widget to prevent garbage collection.
        
        self.run_auto_exp_button = tk.Button(self, image=icon, text="Run automated exp.", command=self.runAutomatedExp,  background='green1', **butt_opts)
        self.run_auto_exp_button.image = icon # store the image as a variable in the widget to prevent garbage collection.
        
        icon = Image.open("icons/config_icon.png").resize((30,30))
        icon = ImageTk.PhotoImage(icon)
        self.configure_photon_production_button = tk.Button(self, image=icon, width=25, height=25, command=self.photonProductionConfigButton, background='green2')
        self.configure_photon_production_button.image = icon
        
        self.total_iterations_frame = Frame_ExperimentalParam(self, 'Num. iterations', initVal=self.photon_production_config.iterations, dataType=int,
                                                       helpText='The number of times the experimental sequence will be run.',
                                                       action = lambda entry_value: self.photon_production_config.set_iterations(entry_value))
        self.reload_time_frame = Frame_ExperimentalParam(self, 'MOT reload time (ms):', initVal = self.photon_production_config.mot_reload*10**-3, dataType=float,
                                                       helpText='The delay between sucsessive iterations.',
                                                       action = lambda entry_value: self.photon_production_config.set_mot_reload(entry_value*10**3))
        
        icon = Image.open("icons/play_icon.png").resize((30,30))
        icon = ImageTk.PhotoImage(icon)
        self.run_abs_img_button = tk.Button(self, image=icon, text="Run abs. imaging", command=self.runAbsorbtionImaging, background='deep sky blue', **butt_opts)
        self.test_bkg_button = tk.Button(self, image=icon, text="Test background", command=lambda: self.runAbsorbtionImaging(bkg_test=True), background='light sky blue', **butt_opts)
        
        icon = Image.open("icons/config_icon.png").resize((30,30))
        icon = ImageTk.PhotoImage(icon)
        self.configure_abs_img_button = tk.Button(self, image=icon, width=25, height=25, command=self.absorbtionImagingConfigButton, background='deep sky blue')
        self.configure_abs_img_button.image = icon
        
        self.set_seq_button.grid(row=0,column=0,**grid_opts)
        self.run_seq_button.grid(row=1,column=0,**grid_opts)
        self.run_auto_exp_button.grid(row=2,column=0,**grid_opts)
        
        self.configure_photon_production_button.grid(row=1,column=1,**grid_opts)
        self.total_iterations_frame.grid(row=3,column=0,**grid_opts)
        self.reload_time_frame.grid(row=4,column=0,**grid_opts)
        
        self.test_bkg_button.grid(row=0,column=2, **grid_opts)
        self.run_abs_img_button.grid(row=1,column=2, **grid_opts)
        self.configure_abs_img_button.grid(row=1,column=3)
        
        self.grid_columnconfigure(0, weight=1, uniform='button_col')
        self.grid_columnconfigure(1, weight=1)
        self.grid_columnconfigure(2, weight=1, uniform='button_col')
        self.grid_columnconfigure(3, weight=1)
        self.grid_columnconfigure(4, weight=1)
        
#         self.test_abs_imaging_review_ui_button = tk.Button(self, text="Test abs img review", command=self.testAbsorbtionImagingReviewUI, background='deep sky blue')
        # Create a placeholder to store an awg object for running run tones.
#         self.run_tone_awg = None
#         self.run_tone_freq = 75.25*10**6
#         def set_run_tone_freq(freq):
#             self.run_tone_freq=freq*10**6
#         self.toggle_run_tone_button = tk.Button(self, text="Send run tone", command=self.toggleRunTone, background='red')
#         
#         self.run_tone_freq_frame = Frame_ExperimentalParam(self, 'Run tone freq (MHz)', initVal=self.run_tone_freq*10**-6, dataType=float,
#                                                     helpText='The run tone frequency in MHz.',
#                                                     action = lambda entry_value, f=set_run_tone_freq: f(entry_value))
#         
#         
# #         self.test_abs_imaging_review_ui_button.grid(row=0,column=3, **grid_opts)
#         self.toggle_run_tone_button.grid(row=1,column=4, **grid_opts)
#         self.run_tone_freq_frame.grid(row=2,column=4, **grid_opts)
        
        self.run_tones_frame = rtf = tk.LabelFrame(self,text="Run tones", font=("Helvetica", 12))
        
        rtf_butt_opts = {'font': ("Helvetica", 12), 'height':25, 'width':150, 'compound': tk.LEFT}
        rtf_grid_opts = {'padx':5, 'pady':2, 'sticky':tk.E+tk.W}
        
        self.run_tone_awg = None
        self.run_tone_freqs = [75.25*10**6, 106*10**6, 125.75*10**6, 75.25*10**6]
        self.run_tone_output_states= [False, False, False, False]
        self.run_tone_buttons = []
        
        self.on_icon = ImageTk.PhotoImage(Image.open("icons/toggle_on_icon.png").resize((25,20)))
        self.off_icon = ImageTk.PhotoImage(Image.open("icons/toggle_off_icon.png").resize((25,20)))
        
        def set_run_tone_freq(ch, freq):
            self.run_tone_freqs[ch]=freq*10**6
        
        for i in range(4):
            run_tone_freq_frame = Frame_ExperimentalParam(rtf, 'channel{0} freq(MHz)'.format(i+1), initVal=self.run_tone_freqs[i]*10**-6, dataType=float,
                                                               helpText='The run tone frequency in MHz.',
                                                               action = lambda entry_value, ch=i, f=set_run_tone_freq: f(ch, entry_value))
            toggle_run_tone_button = tk.Button(rtf, image=self.off_icon, background='red', relief=tk.RAISED, width=28)
            toggle_run_tone_button.config(command=lambda button=toggle_run_tone_button, i_ch=i: self.toggleRunTone(button, i_ch))
            self.run_tone_buttons.append(toggle_run_tone_button)
            
            run_tone_freq_frame.grid(row=i, column=0, **rtf_grid_opts)
            toggle_run_tone_button.grid(row=i, column=1, **rtf_grid_opts)
            
        rtf.grid_columnconfigure(0, weight=1)
        rtf.grid_columnconfigure(1, weight=1)
            
        rtf.grid(row=0, column=4, rowspan=3,  **grid_opts)
        
    def openSeqWindow(self):
        if self.sequence_ui.configured_channel_labels != self.daq_ui.daq_controller.getChannelNumberNameDict(onlyVisable=False):
            self.sequence_ui.configureForNewChannelLabels(self.daq_ui.daq_controller.getChannelNumberNameDict(onlyVisable=False))
        if self.sequence_ui.configured_channel_calibrations != self.daq_ui.daq_controller.getChannelCalibrationDict():
            self.sequence_ui.configureForNewChannelCalibrations(self.daq_ui.daq_controller.getChannelCalibrationDict())
        self.sequence_ui.openWindow()
        
    def runExperiment(self, photon_production_experiment, liveUI=True, autoCloseLiveUI=False):
        '''
        Run a photon production experiment. There is a some layered architecture here to be aware of if you
        change code (threading can cause very confused computers if done wrong...).  Basically we create two
        objects:
            1. PhotonProductionExperiment - this runner knows nothing about the UI, it simply configures the
                instruments (.configure()), runs the experiment (.run()/.run_in_thread()), and tidies up after
                itself (.close()).  If we use .run() the program holds until the run() method returns (i.e. we
                can not stop the experiment, poll it on-the-fly etc).  run_in_thead runs the same code in a
                separate thread, releasing the main thread (this one!) to keep going.  In this case it is vital
                we wait for the experimental thread to terminate before we try to close the experiment.  This
                is done with the <Thread object>.join() method.
            2. Photon_produduction_live_UI - this is a top level window for on the fly control/analysis of
                an experiment.  It takes a PhotonProductionExperiment in order to either
                    - tell it to stop running / change the number of iterations to run
                    - poll it for new data, then use this to update the UI.
        Note for completeness: to avoid timing issues between taking/saving the data, the PhotonProductionExperiment
        spawns a new thread to save every iterations data to file.
        '''
        photon_production_experiment.configure()
        
        if liveUI: experiment_live_ui = Photon_produduction_live_UI(self,
                                                                    photon_produciton_experiment=photon_production_experiment,
                                                                    auto_close=autoCloseLiveUI)
        
        experiment_thread = photon_production_experiment.run_in_thread()
        
        # Small delay to ensure the photon_production_experiment is flagged as live before the UI starts polling it.
        # Otherwise the UI can think it's already over and not update!
        time.sleep(0.1)
        if liveUI:
            experiment_live_ui.poll_live_data()
            # Wait for the live window to close!
            self.winfo_toplevel().wait_window(experiment_live_ui)
            
            
        # Wait for the experimental thread to finish - though if the window is
        # shut the photon_production_experiment really should be done!
        experiment_thread.join()
        
#         photon_production_experiment.close()
        
#         experiment_live_ui.closeWindow()

    def runSeq(self, liveUI=True, autoCloseLiveUI=False):
        # If run tone is on, turn it off!
        for state, button in zip(self.run_tone_output_states, self.run_tone_buttons):
            if state:
                button.invoke()
                        
        experiment = PhotonProductionExperiment(daq_controller=self.daq_ui.daq_controller,
                                                sequence=self.sequence_ui.sequence,
                                                photon_production_configuration=self.photon_production_config)
        
        self.runExperiment(experiment, liveUI, autoCloseLiveUI)
        
    def runAutomatedExp(self, liveUI=True):
        fname = tkFileDialog.askopenfilename(master=self, title="Choose an Experimental Automation Configuration",
                                             initialdir=os.path.join(os.getcwd(),"/configs/experimental automation"))
        
        # Check for empty filenames (i.e. when the user cancelled the action)
        if fname!= '':
            
            experimental_automation_configuration = ExperimentalAutomationReader(fname).get_experimental_automation_configuration()
            
            # Note we pass a copy of the photon production configuration so every different experiement can
            # edit the parameters without effecting the top level settings.
            automated_experiment = ExperimentalAutomationRunner(daq_controller=self.daq_ui.daq_controller,
                                                                experimental_automation_configuration=experimental_automation_configuration,
                                                                photon_production_configuration=copy.copy(self.photon_production_config))
             
            start_automated_experiment = tkMessageBox.askyesno('Start automated experiment',\
                                                               'Please confirm whether you would like to start an automated experiment.\n' + \
                                                               'This will consist of {0} independent sequences and a total of {1} MOT throws'.\
                                                                format(automated_experiment.experiements_to_run,
                                                                       automated_experiment.get_total_iterations()),
                                                               parent = self)
            
            # Confirm the user wishes to run the automated experiment
            if start_automated_experiment in (None, False):
                    return
            elif start_automated_experiment:
                # If run tone is on, turn it off!
                if self.run_tone_awg:
                    self.toggle_run_tone_button()
                    
                automated_experiment.write_to_summary_file('\nStarting automated experiment at {0}\n\n'.format(time.strftime("%H-%M-%S")))
                
                run_next_experiment = True
                # Run all the queued experiements until we are done or one is manually stopped
                while automated_experiment.has_next_experiment() and run_next_experiment:
                     
                    # Get and run next experiment                       
                    experiment, seq_fname, modulation_frequencies = automated_experiment.get_next_experiment()
                    self.runExperiment(experiment, liveUI, autoCloseLiveUI=True)
                    run_next_experiment = not experiment.forced_stop
                    
                    # Log experiment
                    automated_experiment.write_to_summary_file(
                        ('Experiment {0}:\n' +
                        '    time: {1}\n' +
                        '    sequence: {2}\n' +
                        '    iterations: {3}\n' +
                        '    mot reload: {4}\n' +
                        '    modulation frequencies: {5}\n').\
                            format(automated_experiment.experiements_iter,
                                   experiment.data_saver.experiment_time,
                                   seq_fname,
                                   experiment.iterations,
                                   experiment.mot_reload_time,
                                   modulation_frequencies))
        
                automated_experiment.close()
                print 'Finished automated experiment.'
                automated_experiment.write_to_summary_file('\nFinished automated experiment at {0}\n\n'.format(time.strftime("%H-%M-%S")))
        
            
    def runAbsorbtionImaging(self, bkg_test=False):
        experiment = AbsorbtionImagingExperiment(daq_controller = self.daq_ui.daq_controller, 
                                                sequence = self.sequence_ui.sequence,
                                                absorbtion_imaging_configuration=self.absorbtion_imaging_config,
                                                ic_imaging_control=self.ic_ic)
        experiment.run(bkg_test=bkg_test)
        if self.absorbtion_imaging_config.review_processed_images or bkg_test:
            absorbtion_imaging_review_UI = Absorbtion_imaging_review_UI(self, experiment)
            self.winfo_toplevel().wait_window(absorbtion_imaging_review_UI)
        
    def testAbsorbtionImagingReviewUI(self):
        
        import glob
        import os
        import re
        dir = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\data\Absorbtion images\22-08-16\17-42-39'
        # dir = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\data\Absorbtion images\26-08-16\15-12-27\raw'
        
        img_arrs, bkg_arrs, img_labels, bkg_labels = [],[],[],[]
        
        for filename in sorted(glob.glob(os.path.join(dir, '*.bmp')), key=lambda x: int(re.findall(r'\d+', x)[-1])):
            img_labels.append(os.path.split(filename)[1])
        #     img_arrs.append(np.array(Image.open(filename)))
            img_arrs.append(np.array(Image.open(filename).convert('L')))
            
        for directory in sorted(glob.glob(os.path.join(dir, '*-backgrounds')), key=lambda x: int(re.findall(r'\d+', x)[-1])):
            bkgs = []
            bkg_labels.append(os.path.split(directory)[1])
            for filename in glob.glob(os.path.join(directory, '*.bmp')):
        #         bkgs.append(np.array(Image.open(filename)))
                bkgs.append(np.array(Image.open(filename).convert('L')))
            bkg_arrs.append(bkgs)
        
        bkg_aves = [sum([b.astype(np.float)/len(bkgs) for b in bkgs]) for bkgs in bkg_arrs]
        unscaled_corr_imgs = [np.clip(np.round(bkg.astype(np.float) - img.astype(np.float)),0,255) for img, bkg in zip(img_arrs, bkg_aves)]
        corr_imgs = [(arr * 255.0/arr.max()).astype(np.uint8) for arr in unscaled_corr_imgs]
            
        class MockAbsImgExperiment(object):
            
            def __init__(self, img_arrs, bkg_arrs, sequence_labels):
                print 'Performed mock photon_production_experiment, genrating {0} images, each with dimensions {1}.'.format(len(img_arrs), img_arrs[0].shape)
                self.img_arrs = img_arrs
                self.bkg_arrs = bkg_arrs
                self.sequence_labels = sequence_labels
                self.results_ready = True
                
            def getResults(self):
                return self.img_arrs, self.bkg_arrs, self.sequence_labels
                
            def saveProcessedImages(self, notes=None):
                if notes:
                    print 'Save notes:', notes
                print 'Saved processed images.'
        
        mock = MockAbsImgExperiment(corr_imgs, bkg_aves, img_labels)
        
        absorbtion_imaging_review_UI = Absorbtion_imaging_review_UI(self, mock)
        self.winfo_toplevel().wait_window(absorbtion_imaging_review_UI)

    def toggleRunTone(self, button, i_ch):
        # No run_tone_awg configured, so make one and start the run tone
        channel = Channel.values()[i_ch]

        if self.run_tone_output_states[i_ch] == False:
            
            if self.run_tone_awg == None:
                self.run_tone_awg = awg = WX218x_awg()
                awg.open(reset=False)
                awg.configure_sample_rate(1.25*10**9)
                
                awg.configure_output_mode(WX218x_OutputMode.FUNCTION)
            else:
                awg = self.run_tone_awg
            
            freq = self.run_tone_freqs[i_ch]
            print 'Sending run tone to {0} at {1}MHz'.format(channel, freq*10**-6)

            awg.configure_standard_waveform(channel, WX218x_Waveform.SINE, frequency=freq, amplitude=2)
            awg.configure_operation_mode(channel, WX218x_OperationMode.CONTINUOUS)
            awg.enable_channel(channel)
            
            self.run_tone_output_states[i_ch] = True
            
            button.configure(bg='green', image=self.on_icon, relief=tk.SUNKEN)

        else:
            print 'Turning off run tone on {0}'.format(channel)
            self.run_tone_awg.disable_channel(channel)
            self.run_tone_output_states[i_ch] = False
            
            if True not in self.run_tone_output_states:
                # Reset the awg operation mode - this is required for sequences to run properly after using a run tone.
                for channel in Channel.values():
                    self.run_tone_awg.configure_operation_mode(channel, WX218x_OperationMode.BURST)
                
                self.run_tone_awg.close()
                print 'Connection to AWG closed.'
                self.run_tone_awg = None
                
            button.configure(bg='red', image=self.off_icon, relief=tk.RAISED)
    
    def photonProductionConfigButton(self):
        config_UI = Photon_production_configuration_UI(self,
                                                       photon_production_configuration=self.photon_production_config
                                                    )
        self.winfo_toplevel().wait_window(config_UI.top)
        # If the user asked for their changes to be applied, set the absorbtion imaging config accordingly.
        if config_UI.apply_changes:
            self.photon_production_config = config_UI.photon_production_config
            
        self.total_iterations_frame.entryWid.delete(0, tk.END)
        self.total_iterations_frame.entryWid.insert(0, self.photon_production_config.iterations)
        self.reload_time_frame.entryWid.delete(0, tk.END)
        self.reload_time_frame.entryWid.insert(0, self.photon_production_config.mot_reload*10**-3)
           
    def absorbtionImagingConfigButton(self):
        config_UI = Absorbtion_imaging_configuration_UI(self,
                                                        absorbtion_imaging_configuration=self.absorbtion_imaging_config,
                                                        daq_controller=self.daq_ui.daq_controller,
                                                        sequence_length = self.sequence_ui.sequence.getLength(),
                                                        sequence_t_step = self.sequence_ui.sequence.t_step
                                                        )
        self.winfo_toplevel().wait_window(config_UI.top)
        # If the user asked for their changes to be applied, set the absorbtion imaging config accordingly.
        if config_UI.apply_changes:
            self.absorbtion_imaging_config = config_UI.config
        
#     def openMotTempGUI(self):
#         eng = matlab.engine.start_matlab()
#         eng.addpath(eng.genpath(r'externals'), nargout=0)
#         eng.motTempGUI()
#         eng.quit()
        
class Frame_ExperimentalParam(tk.Frame):
    '''
    A sub-class of a Tkinter.Frame to create entry widgets and decorations for setting experimental numerical values.
        label - The text to label the entry widget with
        initVal - The initial value of the entry
        dataType - The type expected by the entry (used for validation).
        helpText - The info displayed when the user hovers the mouse.
        action - A function called with the value of the widget as it's only arg, when a valid entry
                 is made. If no function is to be called, set action to None.
                 e.g. action = lambda entry_value: myAction(entry_value)
    '''
    def __init__(self, parent, label, initVal=1, dataType=int, helpText=None, action=None, state=tk.NORMAL, **kwargs):             
        tk.Frame.__init__(self, parent, **kwargs)
    
        self.label = label
        self.dataType = dataType
#             
#         if not self.dataType in [int, float, str]:
#             raise Exception('Invalid number type specified.')
#         
        self.value = initVal
            
        self.entryWid = tk.Entry(self, width=7)
        self.entryWid.insert(0, self.value)
        self.entryWid.configure(state=state)
    
        self.labelWid = tk.Label(self, width=20, text=self.label, anchor='w')
        
        self.entryWid.bind("<FocusOut>", self.validate)
        self.entryWid.bind("<Return>", self.validate)
        self.entryWid.bind("<Up>", self.arrowKey)
        self.entryWid.bind("<Down>", self.arrowKey)
        
        self.labelWid.grid(row=0,column=0)
        self.entryWid.grid(row=0,column=1)
        
        self.grid_columnconfigure(0, weight=0)
        self.grid_columnconfigure(1, weight=1, pad=2)
        
        if helpText != None:
            self.tooltip = ToolTip(self, helpText)
            
        self.action = action
            
    def updateEntry(self, value):
        entryState = self.entryWid.cget('state')
        self.entryWid.configure(state=tk.NORMAL)
        self.entryWid.delete(0, tk.END)
        self.entryWid.insert(0, value)
        self.entryWid.configure(state=entryState)
        self.validate()
            
    def validate(self, params=None):
        '''
        Ensure the widget value is in the right number form - if so update the frames value,
        otherwise revert to the last valid entry and flash red to show an error.
        '''
        try:
            self.value = self.dataType(self.entryWid.get())
            self.flash('green')
            # Call the action function if one is configured.
            if self.action:
                self.action(self.value)
        except (ValueError, NameError):
            self.entryWid.delete(0, tk.END)
            self.entryWid.insert(0, self.value)
            self.flash('red')
    
    def flash(self, col, length=500):
        '''
        Flashes the background of the entry widget a colour (col) for a length of time (length) in ms.
        Usually used during validation to indicate whether the new value entered is valid.
        '''
        self.entryWid.config(bg=col)
        self.entryWid.after(length, lambda: self.entryWid.configure(bg='white'))
        
    def arrowKey(self, event):
        '''
        Called when the Up or Down arrow key is pressed.
        Increments the value on the DAQ channel accordingly.
        '''
        if self.dataType in (int, float):
    #       Count the number of places between the decimal place in the float and the cursor index
    #       to calculate the order of the incrementation, i.e 0.01,0.1,1,10,...ect.
    #       Try/Except to handle the case when there is no decimal point shown.
            try:
                decimalIndex = self.entryWid.get().index('.')
            except ValueError:
                decimalIndex = len(self.entryWid.get())
            cursorIndex = self.entryWid.index(tk.INSERT)
            incrementOrder = decimalIndex - cursorIndex
            
            # If the increment order is -1 the cursor is on the decimal point so do nothing.
            if incrementOrder != -1:
                if incrementOrder < -1:
                    incrementOrder += 1
                # Caculate the amount to change the value by.  The sign is determined by the key pressed.
                iterator = math.pow(10, incrementOrder) if event.keysym == "Up" \
                           else -1 * math.pow(10, incrementOrder)
                
                currentValue = self.entryWid.get()
                # We have to count the number of decimal points of the number and found the iterated
                # value back to this level due to Python's imprecision with floats.
                ndp = currentValue[::-1].find('.')
                if ndp < 0: ndp=0
                                                    
                self.entryWid.delete(0, tk.END)
                self.entryWid.insert(0, self.dataType(round(float(currentValue) + iterator, ndp)))
                self.validate(event)
                self.entryWid.icursor(cursorIndex)
 
             
class Photon_production_configuration_UI(object):

    def __init__(self, parent, photon_production_configuration):
        '''This object presents for editing the settings for photon production experiments.  It takes and edits a
        copy of the Photon Production Configuration.  A flag then exists to indicate whether the user wants these
        edits to be applied or not when the window is closed.'''
        
        self
        
        # A flag that denotes is the user confirms or cancels edits they make in this window when exiting.    
        self.apply_changes = False
        
        self.photon_production_config = self.php_c = copy.copy(photon_production_configuration)
        self.tdc_config = self.tdc_c = copy.copy(photon_production_configuration.tdc_configuration)
        self.awg_config = self.awg_c = copy.copy(photon_production_configuration.awg_configuration)
      
        self.top = self.configureWindow(parent)
    
        self.top.wm_title("Photon production configuration")
        self.top.grab_set()     
        # Changes the close button to call my close function.
        self.top.protocol('WM_DELETE_WINDOW', self.closeWindow);
        
    def configureWindow(self, parent):
        '''
        Build all the widget enteries for this UI.
        '''
        top = tk.Toplevel(parent)
        frame = tk.Frame(top)
        
        label_frame_font_opts = ("Helvetica", 12, "bold", "italic")
        gen_frame = tk.LabelFrame(top, text="General", font=label_frame_font_opts)
        awg_frame = tk.LabelFrame(top, text="AWG", font=label_frame_font_opts)
        tdc_frame = tk.LabelFrame(top, text="TDC", font=label_frame_font_opts)
        wfm_frame = tk.LabelFrame(top, text="Waveform", font=label_frame_font_opts)
        
        gen_widgets, awg_widgets, tdc_widgets, wfm_widgets = [], [], [], []
        
        ##############################################################################
        # GENERAL
        ##############################################################################
        
        gen_widgets.append(Frame_ExperimentalParam(gen_frame,
                                                   label='Save location:',
                                                   initVal=self.php_c.save_location,
                                                   dataType=str,
                                                   helpText='Save location of experimental data.',
                                                   action=None,
                                                   state=tk.DISABLED))
        gen_widgets.append(Frame_ExperimentalParam(gen_frame,
                                                   label='Iterations:',
                                                   initVal=self.php_c.iterations,
                                                   dataType=int,
                                                   helpText='Total number of iterations the experiment is run for.',
                                                   action= lambda entry_value: self.php_c.set_iterations(entry_value)))
        gen_widgets.append(Frame_ExperimentalParam(gen_frame,
                                                   label='MOT reload (ms):',
                                                   initVal=self.php_c.mot_reload*10**-3,
                                                   dataType=float,
                                                   helpText='How long the MOT is loaded for.',
                                                   action= lambda entry_value: self.php_c.set_mot_reload(entry_value*10**3)))
        
        
        ##############################################################################
        # AWG
        ##############################################################################

        awg_widgets.append(Frame_ExperimentalParam(awg_frame,
                                                   label='Burst count:',
                                                   initVal=self.awg_c.burst_count,
                                                   dataType=int,
                                                   helpText='How many times the loaded waveform is output from the AWG per trigger pulse.',
                                                   action= lambda entry_value: self.awg_c.set_burst_count(entry_value)))
        
        awg_widgets.append(Frame_ExperimentalParam(awg_frame,
                                                   label='Sample rate (GHz):',
                                                   initVal=self.awg_c.sample_rate*10**-9,
                                                   dataType=float,
                                                   helpText='The sample rate of the AWG.  1.25GHz is the maximum allowed.',
                                                   action= lambda entry_value: self.awg_c.set_sample_rate(entry_value*10**9)))

        # TODO add waveform window

        ##############################################################################
        # TDC
        ##############################################################################
        
#         self.counter_channels = counter_channels
#         self.marker_channel = marker_channel
        
        tdc_widgets.append(Frame_ExperimentalParam(tdc_frame,
                                                   label='Counter channels:',
                                                   initVal=[x+1 for x in self.tdc_c.counter_channels],
                                                   dataType=lambda entry: map(int, list(eval(entry))),
                                                   helpText='Channels with SPCM\'s connected.\n' +\
                                                            'Channels 1-8 on box correspond to 0-7 in config files.\n' +\
                                                            'Please use the numbering convention 1-8 in this field.',
                                                   action= lambda entry_value: self.tdc_c.set_counter_channels([x-1 for x in entry_value])
                                                   ))
        
        tdc_widgets.append(Frame_ExperimentalParam(tdc_frame,
                                                   label='Marker channel:',
                                                   initVal=self.tdc_c.marker_channel,
                                                   dataType=int,
                                                   helpText='The channel into which a marker pulse for each photon generation pulse is input.\n' +\
                                                            'Channels 1-8 on box correspond to 0-7 in config files.\n' +\
                                                            'Please use the numbering convention 1-8 in this field.',
                                                   action= lambda entry_value: self.tdc_c.set_marker_channel(entry_value)
                                                   ))
        
        ##############################################################################
        # Waveforms
        ##############################################################################
        
        wfm_widgets.append(Frame_ExperimentalParam(wfm_frame,
                                                   label='Waveform sequence:',
                                                   initVal=self.php_c.waveform_sequence,
                                                   dataType=list,
                                                   helpText='The order of waveforms through which the AWG will cycle.',
                                                   action=None,
                                                   state=tk.DISABLED
                                                   ))
        
        gen_widgets.append(Frame_ExperimentalParam(gen_frame,
                                                   label='Interleave waveforms:',
                                                   initVal=str(bool(self.php_c.interleave_waveforms)),
                                                   dataType=str,
                                                   helpText='Whether the waveforms are interleaved on alternate channels, one at a a time.',
                                                   action=None,
                                                   state=tk.DISABLED))
        
        wfm_label_frame_font_opts = ("Helvetica", 10, "italic")
        
        for i, wfm in [(i, self.php_c.waveforms[i]) for i in range(len(self.php_c.waveforms))]:
            frame = tk.LabelFrame(wfm_frame, text="{0}".format(i), font=label_frame_font_opts)
            
            wfm_fname_frame = tk.Frame(frame)
            
            wfm_fname_wid = Frame_ExperimentalParam(wfm_fname_frame,
                                                    label='Waveform location:',
                                                    initVal=wfm.fname,
                                                    dataType=str,
                                                    helpText='Loaction of the waveform data',
                                                    action=None,
                                                    state=tk.DISABLED)
            wfm_fname_wid.pack(side=tk.LEFT)
            
            icon = Image.open("icons/folder_icon.png").resize((20,20))
            icon = ImageTk.PhotoImage(icon)
            load_wfm_button = tk.Button(wfm_fname_frame, image=icon,
                                    command = lambda wfm=wfm, wid=wfm_fname_wid : self.loadWaveform(wfm, wid),
                                    height=16, width=16)
            load_wfm_button.image = icon # store the image as a variable in the widget to prevent garbage collection.
            load_wfm_button.pack(side=tk.RIGHT)
            
            wfm_mod_freq_wid = Frame_ExperimentalParam(frame,
                                                       label='Mod. frequency (MHz):',
                                                       initVal=wfm.get_mod_frequency()*10**-6,
                                                       dataType=float,
                                                       helpText='The frequency with which to modulate the waveform.',
                                                       action= lambda entry_value, wfm=wfm: wfm.set_mod_frequency(entry_value*10**6))
            
            wfm_fname_frame.pack()
            wfm_mod_freq_wid.pack()
            
            wfm_widgets.append(frame)
        
        for wid in gen_widgets + awg_widgets + tdc_widgets + wfm_widgets:
            wid.pack()
        
        button_frame = tk.Frame(top)
        
        apply_button = tk.Button(button_frame, text='Apply', command=self.apply, width=15, bg='green')
        cancel_button = tk.Button(button_frame, text='Cancel', command=self.cancel, width=15, bg='red')
        apply_button.grid(row=0, column=0, sticky=tk.E)
        cancel_button.grid(row=1, column=0, sticky=tk.E)
        
        r=1
        for frame in [gen_frame, awg_frame, wfm_frame, tdc_frame, button_frame]:
            frame.grid(row=r, column=0, sticky=tk.E+tk.W)
            r += 1
    
        return top

    def loadWaveform(self, wfm, wfm_fname_wid):
        fname = tkFileDialog.askopenfilename(master=self.top, title="Load a sequence", initialdir="waveforms")
        
        # Check for empty filenames (i.e. when the user cancelled the action)
        if fname!= '':
            wfm.set_fname(fname)
            wfm_fname_wid.updateEntry(fname)
            
        # Seems to be a tkinter bug that the parent is shown on top after a file dialog - so let's fix that
        self.top.lift(self.top.master)
    
    
    def displayWarning(self, message, delay=4000):
        '''Create an unobtrusive warning label that disappears after a delay.'''
        n_col, n_row =  self.top.grid_size()
        warningLabel = tk.Label(self.top, text=message, bg='yellow', height=1)
        warningLabel.grid(row=n_row,column=0,columnspan=n_col, sticky=tk.N+tk.E+tk.W+tk.S)
        self.top.after(delay, warningLabel.destroy)
    
    def apply(self):
        self.apply_changes = True
        self.closeWindow(False)
        
    def cancel(self):
        self.apply_changes = False
        self.closeWindow(False)
    
    def closeWindow(self, ask_to_apply_changes = True):
        """Close the top window."""
        if ask_to_apply_changes:
            apply_on_exit = tkMessageBox.askyesnocancel('Confirm exit',\
                                                      'Would you like to apply your changes before you exit?',
                                                      parent = self.top)
            if apply_on_exit == None:
                    return
            elif apply_on_exit:
                self.apply_changes = True
        
        self.php_c.awg_configuration = self.awg_c
        self.php_c.tdc_configuration = self.tdc_c        
        
        self.top.grab_release()
        for wid in self.top.winfo_children():
            wid.destroy()
        self.top.destroy()
            
class Absorbtion_imaging_configuration_UI(object):

    def __init__(self, parent, absorbtion_imaging_configuration, daq_controller, sequence_length, sequence_t_step):
        '''This object presents for editing the settings for absorbtion imaging experiments.  It takes and edits a
        copy of the Absorbtion Imaging Configuration.  A flag then exists to indicate whether the user wants these
        edits to be applied or not when the window is closed.'''
        
        # A flag that denotes is the user confirms or cancels edits they make in this window when exiting.    
        self.apply_changes = False
        
        self.config = self.c = copy.copy(absorbtion_imaging_configuration)
        self.daq_controller = daq_controller
        self.sequence_length = sequence_length
        self.sequence_t_step = sequence_t_step
    
        self.top = self.configureWindow(parent)
    
        self.top.wm_title("Absorbtion imaging configuration")
        self.top.grab_set()     
        # Changes the close button to call my close function.
        self.top.protocol('WM_DELETE_WINDOW', self.closeWindow);
        
    def configureWindow(self, parent):
        '''
        Build all the widget enteries for this UI.
        '''
        top = tk.Toplevel(parent)
        frame = tk.Frame(top)
        
        labels, widgets, fns_to_bind = [], [], []
        
        controller_channels = self.daq_controller.getChannels()      
        channel_opts_dict = dict(zip([self.getChannelDropdownLabel(ch.chNum, ch.chName) for ch in sorted(controller_channels, key=lambda x: x.chNum)],
                                     [x.chNum for x in controller_channels]))
        channel_opts = sorted(channel_opts_dict.keys(), key=channel_opts_dict.__getitem__)
        
        labels.append('Camera trigger channel:')
        self.c.camera_trig_ch_var = var = tk.StringVar()
        var.set((key for key,value in channel_opts_dict.items() if value==self.c.camera_trig_ch).next())
        camera_trig_ch_dropdown = tk.OptionMenu(frame, var, *channel_opts, 
                                                           command=lambda x=var: self.update_camera_trig_ch(camera_trig_levs_wid,
                                                                                                            n_bkg_wid,
                                                                                                            (ch for ch in controller_channels if ch.chNum == channel_opts_dict[x]).next()))
        widgets.append(camera_trig_ch_dropdown)
        fns_to_bind.append(None)
        
        labels.append('Imaging power channel:')
        self.c.imag_power_ch_var = var = tk.StringVar()
        var.set((key for key,value in channel_opts_dict.items() if value==self.c.imag_power_ch).next())
        imag_power_ch_dropdown = tk.OptionMenu(frame, var, *channel_opts, 
                                                           command=lambda x=var: self.update_imag_power_ch(imag_power_levs_wid,
                                                                                                            n_bkg_wid,
                                                                                                            (ch for ch in controller_channels if ch.chNum == channel_opts_dict[x]).next()))
        widgets.append(imag_power_ch_dropdown)
        fns_to_bind.append(None)
        
        labels.append('Camera trigger levels:')
        camera_trig_levs_wid = e = tk.Entry(frame)
        camera_trig_levs_wid.insert(0, '{0}, {1}'.format(*self.c.camera_trig_levs))
        widgets.append(camera_trig_levs_wid)
        
        def update_cam_trigger_levs(new_levs):
            self.c.camera_trig_levs = new_levs
        fns_to_bind.append(lambda event: self.trig_levs_focus_out(event.widget, (ch for ch in controller_channels if ch.chNum == self.c.camera_trig_ch).next(),
                                                                  lambda new_levs, f=update_cam_trigger_levs: f(new_levs)))
        
        labels.append('Imaging power levels:')
        imag_power_levs_wid = e = tk.Entry(frame)
        imag_power_levs_wid.insert(0, '{0}, {1}'.format(*self.c.imag_power_levs))
        widgets.append(imag_power_levs_wid)
        
        def update_imag_power_levs(new_levs):
            self.c.imag_power_levs = new_levs
        fns_to_bind.append(lambda event: self.trig_levs_focus_out(event.widget, (ch for ch in controller_channels if ch.chNum == self.c.imag_power_ch).next(),
                                                                  lambda new_levs, f=update_imag_power_levs: f(new_levs)))
                
        labels.append(u'Camera pulse width (\u03bcs):')
        camera_pulse_width_wid = e = tk.Entry(frame)
        e.insert(0, self.c.camera_pulse_width)
        widgets.append(e)
        fns_to_bind.append(lambda event: self.camera_pulse_width_focus_out(event.widget))
        
        labels.append(u'Imaging flash width (\u03bcs):')
        imag_pulse_width_wid = e = tk.Entry(frame)
        e.insert(0, self.c.imag_pulse_width)
        widgets.append(e)
        fns_to_bind.append(lambda event: self.imag_pulse_width_focus_out(event.widget))
        
        labels.append(u't images (\u03bcs):')
        t_imag_wid = e = tk.Entry(frame)
        e.insert(0, self.c.t_imgs)
        widgets.append(e)
        fns_to_bind.append(lambda event: self.t_img_focus_out(event.widget))
        
        labels.append(u'MOT reload time (ms):')
        mot_reload_time_wid = e = tk.Entry(frame)
        e.insert(0, self.c.mot_reload_time * 10**-3) # convert from us to ms
        widgets.append(e)
        fns_to_bind.append(lambda event: self.mot_reload_time_focus_out(event.widget))
        
        labels.append('# backgrounds:')
        n_bkg_wid = e = tk.Entry(frame)
        e.insert(0, self.c.n_backgrounds)
        widgets.append(e)
        fns_to_bind.append(lambda event: self.n_backgrounds_focus_out(event.widget))
        
        labels.append('Background off channels:')
        bkg_off_channels_wid = e = tk.Entry(frame)
        e.insert(0, self.c.bkg_off_channels)
        widgets.append(e)
        fns_to_bind.append(lambda event: self.bkg_off_channels_focus_out(event.widget))
        
        labels.append('Save location:')
        save_location_wid = e = tk.Label(frame, text=self.c.save_location)
        widgets.append(e)
        fns_to_bind.append(None)
        
        labels.append('Auto-save options:')
        save_options_wid = e = tk.Frame(frame)
        
        check_frames = []
        checkbuttons = []
        check_vars = []
        for check_label in ['Save raw images:', 'Save processed images:', 'Review processed images:']:
            check_frame = tk.Frame(e)
            
            lab = tk.Label(check_frame, text=check_label)
            var = tk.IntVar()
            checkbutton = tk.Checkbutton(check_frame, variable=var)
            
            check_frames.append(check_frame)
            checkbuttons.append(checkbutton)
            check_vars.append(var)
            
            lab.pack(side=tk.LEFT)
            checkbutton.pack(side=tk.RIGHT)
        
        # Bind methods to checkbuttons
        checkbuttons[0].configure(command = lambda var=check_vars[0]: self.save_raw_checkbutton(var))
        checkbuttons[1].configure(command = lambda var=check_vars[1]: self.save_processed_checkbutton(var))
        checkbuttons[2].configure(command = lambda var=check_vars[2], save_var=check_vars[1], save_wid=checkbuttons[1]: self.review_imgs_checkbutton(var, save_var, save_wid))
        
        # Set checkbuttons initial values and invoke bound methods (so the buttons are consistent, e.g. save_processed_images is disabled if review_processed images is selected).
        for button, var, init_val in zip(checkbuttons, check_vars, [self.c.save_raw_images, self.c.save_processed_images, self.c.review_processed_images]):
            var.set(init_val)
        if check_vars[2].get(): 
            self.review_imgs_checkbutton(check_vars[2], check_vars[1], checkbuttons[1])
        
        for check_frame in check_frames:
            check_frame.pack(side=tk.LEFT)
        
        widgets.append(e)
        fns_to_bind.append(None)
        
        labels.append('Camera gain:')
        cam_gain_frame = tk.Frame(frame)
        cam_gain_entry_wid = e = tk.Entry(cam_gain_frame)
        cam_gain_slider_wid = s = tk.Scale(cam_gain_frame, from_=self.c.cam_gain_lims[0], to=self.c.cam_gain_lims[1],
                                           command = lambda value: self.cam_gain_slider_focus_out(value, cam_gain_entry_wid),
                                           orient=tk.HORIZONTAL, showvalue=0)   
        e.bind("<FocusOut>", lambda event: self.cam_gain_entry_focus_out(event.widget, cam_gain_slider_wid))
        e.bind("<Return>", lambda event: self.cam_gain_entry_focus_out(event.widget, cam_gain_slider_wid))    
        e.insert(0, self.c.cam_gain)
        s.set(self.c.cam_gain)
        
        e.grid(row=0,column=0)
        s.grid(row=0,column=1, sticky=tk.E+tk.W)
        cam_gain_frame.grid_columnconfigure(0, weight=0)
        cam_gain_frame.grid_columnconfigure(1, weight=1, pad=5)
        cam_gain_frame.grid(row=0,column=1,sticky=tk.N+tk.W+tk.E)
        
        widgets.append(cam_gain_frame)
        fns_to_bind.append(None)
        
        labels.append('Camera exposure (s):')
        cam_exposure_frame = tk.Frame(frame)
        cam_exposure_entry_wid = e = tk.Entry(cam_exposure_frame)
        cam_exposure_slider_wid = s = tk.Scale(cam_exposure_frame, from_=self.c.cam_exposure_lims[1], to=self.c.cam_exposure_lims[0], 
                                           command = lambda value: self.cam_exposure_slider_focus_out(value, cam_exposure_entry_wid),
                                           orient=tk.HORIZONTAL, showvalue=0)   
        e.bind("<FocusOut>", lambda event: self.cam_exposure_entry_focus_out(event.widget, cam_exposure_slider_wid))
        e.bind("<Return>", lambda event: self.cam_exposure_entry_focus_out(event.widget, cam_exposure_slider_wid))   
        e.insert(0, self.exposure_to_string(1/self.c.cam_exposure))
        s.set(self.c.cam_exposure)
        
        e.grid(row=0,column=0)
        s.grid(row=0,column=1, sticky=tk.E+tk.W)
        cam_exposure_frame.grid_columnconfigure(0, weight=0)
        cam_exposure_frame.grid_columnconfigure(1, weight=1, pad=5)
        cam_exposure_frame.grid(row=0,column=1,sticky=tk.N+tk.W+tk.E)
        
        widgets.append(cam_exposure_frame)
        fns_to_bind.append(None)
        
        labels.append('Scan imaging freq:')
        scan_img_freqs_var = tk.IntVar()
        scan_img_freqs_var.set(self.c.scan_abs_img_freq)
        scan_img_freqs_checkbutton = tk.Checkbutton(frame, variable=scan_img_freqs_var)
        widgets.append(scan_img_freqs_checkbutton)
        fns_to_bind.append(None)
    
        labels.append('Imaging freq. channel:')
        self.c.abs_img_freq_ch_var = var = tk.StringVar()
        var.set((key for key,value in channel_opts_dict.items() if value==self.c.abs_img_freq_ch).next())
        abs_img_freq_ch_dropdown = tk.OptionMenu(frame, var, *channel_opts, 
                                                           command=lambda x=var: self.update_imaging_freq_ch(abs_img_freqs_entry_wid,
                                                                                                             (ch for ch in controller_channels if ch.chNum == channel_opts_dict[x]).next()))
        fns_to_bind.append(None)
        widgets.append(abs_img_freq_ch_dropdown)
        
        try:
            calib_units,_,fromVFunc = self.daq_controller.getChannelCalibrationDict()[self.c.abs_img_freq_ch]
        except KeyError:
            calib_units,_,fromVFunc = 'V', None, lambda x: x
        
        labels.append('Imaging freqs ({0}):'.format(calib_units))
        abs_img_freqs_entry_wid = e = tk.Entry(frame)
        e.insert(0, [fromVFunc(freq) for freq in self.c.abs_img_freqs])
        widgets.append(e)
        fns_to_bind.append(lambda event: self.imaging_freqs_focus_out(event.widget, (ch for ch in controller_channels if ch.chNum == self.c.abs_img_freq_ch).next()))
        
        scan_img_freqs_checkbutton.configure(command = lambda var=scan_img_freqs_var: self.scan_imaging_freqs_checkbutton(var, [abs_img_freq_ch_dropdown, abs_img_freqs_entry_wid]))
        
        if not self.c.scan_abs_img_freq:
            abs_img_freq_ch_dropdown.configure(state=tk.DISABLED)
            abs_img_freqs_entry_wid.configure(state=tk.DISABLED)
        
        lab_grid_opts = {'sticky':tk.W}
        wid_grid_opts = {'sticky':tk.E+tk.W}
        lab_config = {'font':("Helvetica", 10, "bold"), 'padx':5}
        r=0
        for lab, wid, fn in zip(labels, widgets, fns_to_bind):
            tk.Label(frame, text=lab, **lab_config).grid(row=r, column=0, **lab_grid_opts)
            wid.grid(row=r, column=1, **wid_grid_opts)
            if fn != None:
                wid.bind("<FocusOut>", fn)
                wid.bind("<Return>", fn)  
            r+=1
        
        frame.grid_columnconfigure(0, weight=1)
        frame.grid_columnconfigure(1, weight=1, pad=5)
        frame.grid(row=0,column=0,sticky=tk.N+tk.W+tk.E)
        
        button_frame = tk.Frame(top)
        
        apply_button = tk.Button(button_frame, text='Apply', command=self.apply, width=15, bg='green')
        cancel_button = tk.Button(button_frame, text='Cancel', command=self.cancel, width=15, bg='red')
        apply_button.grid(row=0, column=0, sticky=tk.E)
        cancel_button.grid(row=1, column=0, sticky=tk.E)
        
        button_frame.grid(row=1,column=0,sticky=tk.E)
        
        return top

    def scan_imaging_freqs_checkbutton(self, var, linked_wids):
        scan_abs_img_freqs = bool(var.get())
        self.c.scan_abs_img_freq = scan_abs_img_freqs
        linked_wids_state = tk.NORMAL if scan_abs_img_freqs else tk.DISABLED
        for wid in linked_wids:
            wid.configure(state=linked_wids_state)

    def update_imaging_freq_ch(self, img_freqs_wid, new_img_freq_ch):
        self.c.abs_img_freq_ch = new_img_freq_ch.chNum
        
        self.imaging_freqs_focus_out(img_freqs_wid, new_img_freq_ch)

    def imaging_freqs_focus_out(self, imaging_freqs_widget, configured_imaging_freq_channel):
        try:
            flash_col = 'green'
            try:
                entered_freqs = list(map(float, eval(imaging_freqs_widget.get())))
            except TypeError:
                # If a single value is entered, map() will throw a TypeError as the second arg is not iterable.
                entered_freqs = [float(eval(imaging_freqs_widget.get()))]
            # Check only two levels were entered
            if len(entered_freqs) == 0:
                raise ValueError
            new_entered_freqs = tuple(map(lambda x: np.clip(x, 
                                                        *configured_imaging_freq_channel.chLimits if not configured_imaging_freq_channel.isCalibrated \
                                                        else configured_imaging_freq_channel.calibrationFromVFunc(configured_imaging_freq_channel.chLimits)),
                                                        entered_freqs))
            # If we reach this point, everything was succesful so update the stored values.
            self.c.abs_img_freqs = new_entered_freqs if not configured_imaging_freq_channel.isCalibrated \
                                   else list(map(configured_imaging_freq_channel.calibrationToVFunc, new_entered_freqs))
        # If there was an error while converting the entered text to the correct form, catch it and flash red.
        except (NameError, ValueError, SyntaxError):
            flash_col = 'red'
        # Update the display text and flash the widget accordingly.
        imaging_freqs_widget.delete(0, tk.END)
        imaging_freqs_widget.insert(0, self.c.abs_img_freqs if not configured_imaging_freq_channel.isCalibrated \
                                   else list(map(configured_imaging_freq_channel.calibrationFromVFunc, self.c.abs_img_freqs)))
        imaging_freqs_widget.config(bg=flash_col)
        imaging_freqs_widget.after(500, lambda: imaging_freqs_widget.configure(bg='white'))

    def update_camera_trig_ch(self, trig_levs_wid, bkg_off_channels_wid, new_trig_ch):
        # Update the stored values and trigger an update of the trigger level widget.
        self.c.camera_trig_ch=new_trig_ch.chNum
        
        def update_cam_trigger_levs(new_levs):
            self.c.camera_trig_levs = new_levs
        
        self.trig_levs_focus_out(trig_levs_wid, new_trig_ch, lambda new_levs, f=update_cam_trigger_levs: f(new_levs))
        self.bkg_off_channels_focus_out(bkg_off_channels_wid)
        
    def update_imag_power_ch(self, trig_levs_widget, bkg_off_channels_wid, new_power_ch):
        # Update the stored values and trigger an update of the trigger level widget.
        self.c.imag_power_ch=new_power_ch.chNum
        
        def update_image_power_levs(new_levs):
            self.c.imag_power_levs = new_levs
            
        self.trig_levs_focus_out(trig_levs_widget, new_power_ch, lambda new_levs, f=update_image_power_levs: f(new_levs))
        self.bkg_off_channels_focus_out(bkg_off_channels_wid)
    
    def trig_levs_focus_out(self, trig_levs_widget, configured_trigger_channel, update_levs_func):
        '''
        Handles updates to the trigger level enteries.
        '''
        
#         print 'configured:', configured_trigger_channel
        
        # If the entered values can be converted to the correct form, do so and update the stored values.
        try:
            flash_col = 'green'
            entered_trig_levs = tuple(map(float, eval(trig_levs_widget.get())))
            # Check only two levels were entered
            if len(entered_trig_levs) != 2:
                raise ValueError
            new_trig_levs = tuple(map(lambda x: np.clip(x, 
                                                        *configured_trigger_channel.chLimits if not configured_trigger_channel.isCalibrated \
                                                        else configured_trigger_channel.calibrationFromVFunc(configured_trigger_channel.chLimits)),
                                                        entered_trig_levs))
            #If the values were clipped to fit to the channel limits, flash the widget yellow as a warning.
            if new_trig_levs != entered_trig_levs:
                flash_col = 'yellow'
            # If we reach this point, everything was sucessful so update the stored values.
            update_levs_func(new_trig_levs)
        # If there was an error whilst converting the entered text to the correct form, catch it and flash red.
        except (NameError, ValueError, SyntaxError, TypeError):
            flash_col = 'red'
        # Update the display text and flash the widget accordingly.
        trig_levs_widget.delete(0, tk.END)
        trig_levs_widget.insert(0, '{0}, {1}'.format(*new_trig_levs))
        trig_levs_widget.config(bg=flash_col)
        trig_levs_widget.after(500, lambda: trig_levs_widget.configure(bg='white'))
        
    def pulse_width_focus_out(self, default_value, widget):
        '''
        Ensure that any pulse width entered is at least as long as the smallest time step in the sequence and shorter
        than the total sequence length.
        '''
        new_width = default_value
        try:
            flash_col = 'green'
            info_msg = None
            new_width = float(widget.get())
            if new_width < self.sequence_t_step:
                info_msg = u'A step change in the sequence must be longer than the smallest time step of the sequence (currently {0}\u03bcs).'.format(self.sequence_t_step)
                flash_col = 'yellow'
                new_width = self.sequence_t_step
            if new_width > self.sequence_length:
                info_msg = u'A step change in the sequence must be shorter than the total sequence length (currently {0}\u03bcs).'.format(self.sequence_length)
                flash_col = 'red'
                new_width = self.sequence_t_step
        except ValueError:
            flash_col = 'red'
        # Update the display text and flash the widget accordingly.
        widget.delete(0, tk.END)
        widget.insert(0, new_width)
        widget.config(bg=flash_col)
        widget.after(500,lambda: widget.configure(bg='white'))
        if info_msg != None: self.displayWarning(info_msg)
        return new_width
    
    def camera_pulse_width_focus_out(self, widget):
        self.c.camera_pulse_width = self.pulse_width_focus_out(self.c.camera_pulse_width, widget)
        
    def imag_pulse_width_focus_out(self, widget):
        self.c.imag_pulse_width = self.pulse_width_focus_out(self.c.imag_pulse_width, widget)
        
    def t_img_focus_out(self, widget):
        '''
        Ensure that all the times request for images are valid inputs and within the length of the sequence.
        '''
        try:
            flash_col = 'green'
            info_msg = None
            try:
                entered_t_imgs = list(map(float, eval(widget.get())))
            except TypeError:
                # If a single value is entered, map() will throw a TypeError as the second arg is not iterable.
                entered_t_imgs = [float(eval(widget.get()))]
            new_t_imgs = [t for t in entered_t_imgs if 0 <= t <= self.sequence_length]
            #If the values were removed to fit the sequence length, flash the widget yellow as a warning.
            if entered_t_imgs != new_t_imgs:
                info_msg = u'You can only take images with the length of the currently configured sequence (which is {0}\u03bcs).'.format(self.sequence_length)
                flash_col = 'yellow'
            # If we reach this point, everything was sucessful so update the stored values.
            self.c.t_imgs = new_t_imgs
        # If there was an error while converting the entered text to the correct form, catch it and flash red.
        except (NameError, ValueError, SyntaxError):
            flash_col = 'red'
        # Update the display text and flash the widget accordingly.
        widget.delete(0, tk.END)
        widget.insert(0, self.c.t_imgs)
        widget.config(bg=flash_col)
        widget.after(500, lambda: widget.configure(bg='white'))
        if info_msg != None: self.displayWarning(info_msg)
    
    def mot_reload_time_focus_out(self, widget):
        '''
        Enforce the a positive number or zero is set for the mot reload time.
        '''
        try:
            flash_col = 'green'
            new_mot_reload_time = float(widget.get())
            if new_mot_reload_time < 0:
                raise ValueError
            # If we reach this point, everything was sucessful so update the stored values.
            self.c.mot_reload_time = new_mot_reload_time* 10**3 #convert from ms to us
        # If there was an error while converting the entered text to the correct form, catch it and flash red.
        except (NameError, ValueError, SyntaxError, TypeError):
            flash_col = 'red'
        # Update the display text and flash the widget accordingly.
        widget.delete(0, tk.END)
        widget.insert(0, self.c.mot_reload_time*10**-3) #convert from us to ms
        widget.config(bg=flash_col)
        widget.after(500, lambda: widget.configure(bg='white'))
        
    def n_backgrounds_focus_out(self, widget):
        '''
        Enforce that a positive integer is set for the number of backgrounds to take.
        '''
        try:
            flash_col = 'green'
            new_n_backgrounds = int(widget.get())
            if new_n_backgrounds <= 0:
                raise ValueError
            # If we reach this point, everything was sucessful so update the stored values.
            self.c.n_backgrounds = new_n_backgrounds
        # If there was an error while converting the entered text to the correct form, catch it and flash red.
        except (NameError, ValueError, SyntaxError, TypeError):
            flash_col = 'red'
        # Update the display text and flash the widget accordingly.
        widget.delete(0, tk.END)
        widget.insert(0, self.c.n_backgrounds)
        widget.config(bg=flash_col)
        widget.after(500, lambda: widget.configure(bg='white'))
        
    def bkg_off_channels_focus_out(self, widget):
        '''
        Ensure that a list of valid channel numbers is entered and that the camera trigger and imaging flash channels are not turned off.
        '''
        try:
            flash_col = 'green'
            info_msgs = []
            # Try to convert the entered string into a list of channel numbers
            try:
                entered_bkg_off_channels = list(map(int, eval(widget.get())))
            except TypeError:
                # A type error can be thrown when converting a single interger as a string to a list. Add a comma to avoid this,
                # i.e. list(eval('7')) -> TypeError, list(eval('7,')) = [7]
                entered_bkg_off_channels = list(map(int, eval(widget.get() + ',')))
            new_bkg_off_channels = [x for x in entered_bkg_off_channels if x in [ch.chNum for ch in self.daq_controller.getChannels()]]
            if new_bkg_off_channels != entered_bkg_off_channels:
                flash_col = 'yellow'
                info_msgs.append('Unrecognised channel numbers have been removed.')
            if self.c.camera_trig_ch in new_bkg_off_channels:
                flash_col = 'yellow'
                info_msgs.append('The camera trigger channel (channel {0}) cannot be turned off when taking background images.'.format(self.c.camera_trig_ch))
                new_bkg_off_channels.remove(self.c.camera_trig_ch)
            if self.c.imag_power_ch in new_bkg_off_channels:
                flash_col = 'yellow'
                info_msgs.append('The imaging flash channel (channel {0}) cannot be turned off when taking background images.'.format(self.c.imag_power_ch))
                new_bkg_off_channels.remove(self.c.imag_power_ch)
            if new_bkg_off_channels == []:
                flash_col = 'yellow'
                info_msgs.append('No channels are turned off when taking a background image.\nTo take a background image I suggest at least turning off the MOT repump.')
            # If we reach this point, everything was sucessful so update the stored values.
            self.c.bkg_off_channels = new_bkg_off_channels
        except (NameError, ValueError, SyntaxError, TypeError):
            flash_col = 'red'
        # Update the display text and flash the widget accordingly.
        widget.delete(0, tk.END)
        widget.insert(0, self.c.bkg_off_channels)
        widget.config(bg=flash_col)
        widget.after(500, lambda: widget.configure(bg='white'))
        for info_msg in info_msgs:
            self.displayWarning(info_msg)
     
    def save_raw_checkbutton(self, var):
        self.c.save_raw_images = bool(var.get())
        
    def save_processed_checkbutton(self, var):
        self.c.save_processed_images = bool(var.get())
        
    def review_imgs_checkbutton(self, var, save_processed_var, save_processed_wid):
        state = bool(var.get())
        
        # If the review processed images checkbutton is selected, deselect and disable
        # the auto-saving of processed images (as autosaving before reviewing is daft).
        if state:
            save_processed_var.set(False)
            self.save_processed_checkbutton(save_processed_var)
            save_processed_wid.configure(state=tk.DISABLED)
        else:
            save_processed_wid.configure(state=tk.NORMAL)
            
        self.c.review_processed_images = state
             
    def cam_gain_entry_focus_out(self, entry_wid, slider_wid):
        try:
            flash_col = 'green'
            entered_cam_gain = float(entry_wid.get())
            new_cam_gain = np.clip(entered_cam_gain,*self.c.cam_gain_lims)
            if new_cam_gain != entered_cam_gain:
                flash_col = 'yellow'
            
            # If we reach this point, everything was sucessful so update the stored values.
            self.c.cam_gain = int(new_cam_gain)
        except ValueError:
            flash_col = 'red'
        
        # Update the display and flash the widget accordingly.
        entry_wid.delete(0, tk.END)
        entry_wid.insert(0, self.c.cam_gain)
        slider_wid.set(self.c.cam_gain)
        
        entry_wid.config(bg=flash_col)
        entry_wid.after(500, lambda: entry_wid.configure(bg='white'))
      
    def cam_gain_slider_focus_out(self, slider_value, entry_wid):
        # Slider doesn't not allow invalid values to be set.
        self.c.cam_gain = int(slider_value)
        # Update entry widget
        entry_wid.delete(0, tk.END)
        entry_wid.insert(0, self.c.cam_gain)
        
    def cam_exposure_entry_focus_out(self, entry_wid, slider_wid):
        try:
            flash_col = 'green'
            parsed_entered_cam_exposure = entry_wid.get().split('/')
            if len(parsed_entered_cam_exposure) == 1:
                # A fraction wasn't entered so the entered exposure is 1/x where x is the entered exposure time.
                entered_cam_exposure = int(1/float(parsed_entered_cam_exposure[0]))
            elif len(parsed_entered_cam_exposure) == 2:
                # A fraction was entred so take it's reciprocal.
                entered_cam_exposure = int(float(parsed_entered_cam_exposure[1])/float(parsed_entered_cam_exposure[0]))
            else:
                # Can't parse this into a number, raise an exception.
                raise ValueError
#             entered_cam_exposure = 1./float(entry_wid.get())
            new_cam_exposure = int(np.clip(entered_cam_exposure,*sorted(self.c.cam_exposure_lims)))
            if new_cam_exposure != entered_cam_exposure:
                flash_col = 'yellow'
            # If we reach this point, everything was sucessful so update the stored values.
            self.c.cam_exposure = new_cam_exposure
        except ValueError:
            flash_col = 'red'
        
        print self.c.cam_exposure
        # Update the display and flash the widget accordingly.
        entry_wid.delete(0, tk.END)
        entry_wid.insert(0, self.exposure_to_string(1./self.c.cam_exposure))
        slider_wid.set(self.c.cam_exposure)
        
        entry_wid.config(bg=flash_col)
        entry_wid.after(500, lambda: entry_wid.configure(bg='white'))
      
    def cam_exposure_slider_focus_out(self, slider_value, entry_wid):
        # Slider doesn't not allow invalid values to be set.
        self.c.cam_exposure = int(slider_value)
        # Update entry widget
        entry_wid.delete(0, tk.END)
        entry_wid.insert(0, self.exposure_to_string(1./self.c.cam_exposure))
        
    def exposure_to_string(self, exposure_time):
        '''
        Converts a camera exposure to a string for presenting in the UI. The time will be
        put into the form 1/x and, if necessary, rounded so that x is an integer.
        '''
        if exposure_time != 0:
            return '1/{0}'.format(int(1./exposure_time)) if exposure_time != 1 else '1'   
        else:
            return str(1/self.c.cam_exposure_lims[0])
        
    def displayWarning(self, message, delay=4000):
        '''Create an unobtrusive warning label that disappears after a delay.'''
        n_col, n_row =  self.top.grid_size()
        warningLabel = tk.Label(self.top, text=message, bg='yellow', height=1)
        warningLabel.grid(row=n_row,column=0,columnspan=n_col, sticky=tk.N+tk.E+tk.W+tk.S)
        self.top.after(delay, warningLabel.destroy)
    
    def getChannelDropdownLabel(self, chNum, chName):
        return "Ch {0}: {1}".format(str(chNum), chName)
    
    def apply(self):
        self.apply_changes = True
        self.closeWindow(False)
        
    def cancel(self):
        self.apply_changes = False
        self.closeWindow(False)
    
    def closeWindow(self, ask_to_apply_changes = True):
        """Close the top window."""
        if ask_to_apply_changes:
            apply_on_exit = tkMessageBox.askyesnocancel('Confirm exit',\
                                                      'Would you like to apply your changes before you exit?',
                                                      parent = self.top)
            if apply_on_exit == None:
                    return
            elif apply_on_exit:
                self.apply_changes = True
        self.top.grab_release()
        for wid in self.top.winfo_children():
            wid.destroy()
        self.top.destroy()

class Photon_produduction_live_UI(tk.Toplevel):
      
    def __init__(self, parent, photon_produciton_experiment, auto_close=False, **kwargs):
        '''
        This object the abosrbtion images taken and offers the user the chance to save them with notes or discard them.
        '''
        tk.Toplevel.__init__(self, parent, **kwargs)
        
        self.auto_close = auto_close
        
        self.photon_production_experiment = photon_produciton_experiment
#         self.data_hander = Photon_production_live_analysis(t_stirap_length=photon_produciton_experiment.waveform_length*10**6)
        self.data_hander = Photon_production_buffered_data_handler(t_stirap_length = 0.5 * photon_produciton_experiment.waveform_length*10**6)

        # Configure the push function in the experimental runner so we can get data on the fly.
        self.photon_production_experiment.configure_data_queue(self.data_hander.data_queue)
        self.UI_update_started = False
        
        self.wm_title("Photon production - Live")
        self.grab_set()     
        # Changes the close button to call my close function.
        self.protocol('WM_DELETE_WINDOW', self.close_window)
        
        butt_opts = {'font': ("Helvetica", 12), 'height':25, 'width':150, 'compound': tk.LEFT}
        grid_opts = {'padx':5, 'pady':2, 'sticky':tk.E+tk.W}
        
        # add STOP button
        icon = Image.open("icons/stop_icon.png").resize((30,30))
        icon = ImageTk.PhotoImage(icon)
        self.stop_button = tk.Button(self, image=icon, text="Stop experiment", command=self.stop_experiment, background='red', **butt_opts)
        self.stop_button.image = icon # prevent garbage collection

        # add CLOSE button
        icon = Image.open("icons/delete_icon.png").resize((30,30))
        icon = ImageTk.PhotoImage(icon)
        self.close_button = tk.Button(self, image=icon, text="Exit", command=self.close_window, background='red', state=tk.DISABLED, **butt_opts)
        self.close_button.image = icon # prevent garbage collection
        
        # Add a completed iterations counter
        self.completed_iterations_frame = f = tk.Frame(self)
        self.completed_iterations_entry = tk.Entry(f, width=7)
        self.completed_iterations_entry.insert(0, '0')
        self.completed_iterations_entry.configure(state=tk.DISABLED)
        
        self.completed_iterations_label = tk.Label(f, width=20, text="Completed iterations", anchor='w')
        
        self.completed_iterations_label.grid(row=0,column=0)
        self.completed_iterations_entry.grid(row=0,column=1)
            
        self.grid_columnconfigure(0, weight=0)
        self.grid_columnconfigure(1, weight=1, pad=2)

        # add iterations entry
        self.total_iterations_frame = Frame_ExperimentalParam(self, 'Total iterations',
                                                        initVal=photon_produciton_experiment.iterations,
                                                        dataType=int,
                                                        helpText='The number of times the experimental sequence will be run.',
                                                        action = lambda n_iters: self.photon_production_experiment.set_iterations(n_iters))

        # add MOT time entry
        self.reload_time_frame = Frame_ExperimentalParam(self, 'MOT reload time (s):',
                                                         initVal = self.photon_production_experiment.mot_reload_time,
                                                         dataType=float,
                                                         helpText='The delay between sucsessive iterations.')
#                                                          action = lambda reload_time: self.photon_production_experiment.set_mot_reload_time(reload_time))

        # add basic analytics (e.g. count rate)
        self.count_rate_wid = tk.Entry(self, width=10, font = "Helvetica 44 bold")
        self.count_rate_wid.insert(0, 'N/A')
        
        self.count_rate_plot = Count_rate_plot_live(self, n_lines=2, line_labels=['Count rate', 'half Count rate'])
        
        self.stirap_hist_plot = Stirap_hist_plot_live(self,
                                                      hist_values=self.data_hander.hist_stirap,
                                                      bin_edges = self.data_hander.hist_stirap_bin_edges,
                                                      width = self.data_hander.t_stirap_length/self.data_hander.n_hist_bins)
#         
        self.completed_iterations_frame.pack()
        self.total_iterations_frame.pack()
        self.reload_time_frame.pack()
        self.count_rate_wid.pack()        
        self.stop_button.pack()
        self.close_button.pack()
        self.count_rate_plot.pack(side=tk.LEFT)
        self.stirap_hist_plot.pack(side=tk.RIGHT)

    def poll_live_data(self, delay_ms=1, final_update_timeout_ms=5000, timeout_start_time=None):
        '''
        Poll the data_handler for new data. When it is found, update the UI.
        '''
        if self.data_hander.new_data_waiting and not self.UI_update_started:
            self.update_display()
        # If the photon_production_experiment is still running, keep polling for data
        if self.photon_production_experiment.is_live:
            self.after(delay_ms, lambda: self.poll_live_data(delay_ms, final_update_timeout_ms))
        # If the photon_production_experiment has finished, wait for any final data to be analysed and 
        # poll once for any final data, then stop.
        else:
            if timeout_start_time==None:
                timeout_start_time = time.time()
            if (int(self.completed_iterations_entry.get()) != self.total_iterations_frame.value and
               time.time() - timeout_start_time < final_update_timeout_ms*10**-3):
                    self.after(delay_ms, lambda: self.poll_live_data(delay_ms, timeout_start_time=timeout_start_time))
            else:
                if time.time() - timeout_start_time < final_update_timeout_ms*10**-3:
                    print 'Final UI update timed out after {0} seconds'.format(final_update_timeout_ms*10**-3)
                self.data_hander.stop_polling_queue()
                self.update_for_finished_experiment()
            
    def update_display(self):
        print 'Updating the display'
#         if self.data_hander.new_data_waiting:
        self.UI_update_started = True     
        self.data_hander.new_data_waiting = False  

#         t1=time.time()
        
        focussed_wid = self.focus_get()
#         self.count_rate_wid.delete(0, tk.END)
#         try:
#             self.count_rate_wid.insert(0, str(self.data_hander.get_last_count_rate()))
#         except IndexError:
#             self.count_rate_wid.insert(0, 'N/A')
#          
        n_iters = self.data_hander.get_completed_iterations()
#         self.completed_iterations_entry.configure(state=tk.NORMAL)
#         self.completed_iterations_entry.delete(0, tk.END)
#         self.completed_iterations_entry.insert(0, n_iters)
#         self.completed_iterations_entry.configure(state=tk.DISABLED)
      
        self.count_rate_plot.update([self.data_hander.count_rate], n_iters)
        self.stirap_hist_plot.update(self.data_hander.hist_stirap)
         
        if focussed_wid != None: focussed_wid.focus_set()
        
#         t2=time.time()
#         print 'Update UI time:', t2-t1 
        self.UI_update_started = False
#         
    def update_for_finished_experiment(self):
        if self.auto_close and not self.photon_production_experiment.forced_stop:
            'Auto-closing live UI window.'
            self.close_window()
        else:
            self.stop_button.configure(state=tk.DISABLED)
            self.close_button.configure(state=tk.ACTIVE)

    def stop_experiment(self):
        self.photon_production_experiment.is_live = False
        self.photon_production_experiment.forced_stop = True
        self.update_for_finished_experiment()
        
    def close_window(self):
        '''
        Check if exp is live - if so confirm exit as it will have to end experiment.
        '''
        if self.photon_production_experiment.is_live:
#             confirmed_exit = tkMessageBox.askyesno('Confirm exit',\
#                                                          'The photon_production_experiment is still running, if you exit now it will be stopped.\nAre you sure you want to exit?',
#                                                          parent = self)
#             if confirmed_exit in (None, False):
#                     return
#             elif confirmed_exit:
#                 self.stop_experiment()
#                 time.sleep(self.photon_production_experiment.mot_reload_time*2)
            return
        plt.close('all')
        self.__destroy()
    
    def __destroy(self):
        self.grab_release()
        for wid in self.winfo_children():
            wid.destroy()
        self.destroy()
    
# class Photon_production_live_analysis(object):
#     
#     def __init__(self, n_hist_bins=10, t_stirap_length=800):
#         self.new_data_waiting = False
#         self.completed_iterations = 0
#         self.count_rate = [0]
#         self.last_count_rate = self.count_rate[-1]
#         
#         # Configure the stirap histogram: n_bins and total length (in microseconds).
#         self.n_hist_bins = n_hist_bins
#         self.t_stirap_length = t_stirap_length
#         
#         self.hist_stirap, self.hist_stirap_bin_edges = np.histogram([],bins=self.n_hist_bins,range=(0,t_stirap_length))
#     
#     def add_data(self, data):
#         '''
#         Data will be tuple of (throw_number, [(channel, t_Stirap, t_mot, pulse_number),...])
#         '''
#         if self.new_data_waiting:
#             print 'WARNING - DATA OVERFLOW'
#         self.completed_iterations = data[0]
#         self.count_rate.append(len(data[1]))
#         self.last_count_rate = self.count_rate[-1]
#         
#         # Get histogram contributions from new data.  List slicing is to get t_Stirap only
#         # and *10**6 converts from picoseconds to microseconds.
#         self.hist_stirap += np.histogram(np.array(data[1])[:,1]*10**-6,
#                                          bins=self.n_hist_bins,
#                                          range=(0,self.t_stirap_length))[0]
# 
#         self.new_data_waiting = True
#     
#     def get_last_count_rate(self):
#         #TODO: thread safety with reading lock
#         return self.last_count_rate
#     
#     def get_completed_iterations(self):
#         return self.completed_iterations

class Photon_production_buffered_data_handler(object):
    
    def __init__(self, n_hist_bins=30, t_stirap_length=800):
        
        self.data_queue = Queue.Queue()      # A buffer for data to be added to waiting to be analysed.
        self.analysis_buffer = []  # A buffer for the next analysis loop to analyse.
        self.data_analysis_thread = threading.Thread()
        
        self.new_data_waiting = False
        self.completed_iterations = 0
        self.count_rate = [0]
        
        # Configure the stirap histogram: n_bins and total length (in microseconds).
        self.n_hist_bins = n_hist_bins
        self.t_stirap_length = t_stirap_length
        
        self.hist_stirap, self.hist_stirap_bin_edges = np.histogram([],bins=self.n_hist_bins,range=(0,t_stirap_length))
        
        self.keep_polling_queue = True
        self.polling_thread = self.start_polling_queue()
    
    def poll_queue(self, delay_ms=1):
        '''
        Data will be tuple of (throw_number, [(channel, t_Stirap, t_mot, pulse_number),...])
        '''
        if not self.data_analysis_thread.is_alive():
            # Pull all queuded data into analysis buffer
            self.analysis_buffer = []
            if not self.data_queue.empty():
                try:
                    self.analysis_buffer.append(self.data_queue.get_nowait())
                except Queue.Empty:
                    pass
                self.data_analysis_thread = threading.Thread(name='Photon_production_buffered_data_handler.__analyse_buffer',
                                                             target=self.__analyse_buffer())
                 
                self.data_analysis_thread.start()
      
    def start_polling_queue(self, delay_ms=1):
        
        def poll_loop():
            while self.keep_polling_queue:
                self.poll_queue()
                time.sleep(delay_ms*10**-3)
        
        thread = threading.Thread(name='Photon_production_buffered_data_handler.__poll_queue',
                                  target=poll_loop)
        thread.start()
        return thread
            
    def stop_polling_queue(self):
        self.keep_polling_queue = False

    def __analyse_buffer(self):

        self.completed_iterations = self.analysis_buffer[-1][0]
        self.count_rate += [len(data[1]) for data in self.analysis_buffer]
        
        # Get histogram contributions from new data.  List slicing is to get t_Stirap only
        # and *10**6 converts from picoseconds to microseconds.
        if self.analysis_buffer != []:
            t_stiraps = np.concatenate([np.array(data[1])[:,1] if data[1] != [] else np.array([]) for data in self.analysis_buffer])*10**-6
            self.hist_stirap += np.histogram(t_stiraps,
                                             bins=self.n_hist_bins,
                                             range=(0,self.t_stirap_length))[0]
            self.new_data_waiting = True
        else:
            print 'No detections on counter channels in buffer.'
#         for item in self.analysis_buffer:
#             item.task_done()
        
    def get_last_count_rate(self):
        #TODO: thread safety with reading lock
        return self.count_rate[-1]
    
    def get_completed_iterations(self):
        print 'returning comp iters:', self.completed_iterations
        return self.completed_iterations
   
class Absorbtion_imaging_review_UI(tk.Toplevel):
      
    def __init__(self, parent, absorbtion_imaging_experiment, **kwargs):
        '''
        This object the abosrbtion images taken and offers the user the chance to save them with notes or discard them.
        '''
        tk.Toplevel.__init__(self, parent, **kwargs)
        
        self.absorbtion_imaging_experiment = absorbtion_imaging_experiment
        
        if not self.absorbtion_imaging_experiment.results_ready:
            raise Exception('The abosrbtion imaging experiment has not been run yet. There are no results to review.')
        
        self.wm_title("Absorbtion imaging review")
        self.grab_set()     
        # Changes the close button to call my close function.
        self.protocol('WM_DELETE_WINDOW', self.closeWindow)
        
        img_arrs, bkg_arrs, labels = self.absorbtion_imaging_experiment.getResults()
        
        if img_arrs == None and bkg_arrs == None:
            raise Exception('There are no images to review')
        
        self.image_types = []
        self.images_frames_dict = {}
        self.image_frame_opts =  {'bd':2, 'relief':tk.SUNKEN, 'font':("Helvetica", 16), 'img_dims':(480,360),'img_buffer':30}
        if img_arrs != None:
            self.image_types.append("Processed images")
            self.images_frames_dict[self.image_types[-1]] = self.__get_images_frame(img_arrs, labels, text=self.image_types[-1], **self.image_frame_opts)
        if bkg_arrs != None:
            self.image_types.append("Average backrounds")
            self.images_frames_dict[self.image_types[-1]] = self.__get_images_frame(bkg_arrs, labels, text=self.image_types[-1], **self.image_frame_opts)

#         for image_type in self.image_types:
#             print image_type
#             self.images_frames_dict[image_type] = self.__get_images_frame(img_arrs, labels, text=image_type, **self.image_frame_opts)
#         self.images_frames_dict[self.image_types[0]] = self.__get_images_frame(img_arrs, labels, text=self.image_types[0], **self.image_frame_opts)
#         self.images_frames_dict[self.image_types[1]] = self.__get_images_frame(bkg_arrs, labels, text=self.image_types[1], **self.image_frame_opts)
        
        self.images_frames_dropdown = self.__get_image_type_dropdown()
        
        self.save_notes_frame, self.save_notes_wid = self.__get_save_notes_frame(text='Notes', font=("Helvetica", 16))
        
        self.buttons_frame = self.__get_buttons_frame()
        
        self.image_frame_grid_opts = {'row':0,'column':0,'columnspan':3,'sticky':tk.N+tk.S+tk.E+tk.W}
        
        self.images_frames_dict[self.image_types[0]].grid(**self.image_frame_grid_opts)
        self.displayed_images_frame_key = self.image_types[0]
        
        self.images_frames_dropdown.grid(row=1,column=0, sticky=tk.N)
        self.save_notes_frame.grid(row=1,column=1, sticky=tk.N+tk.S+tk.E+tk.W)
        self.buttons_frame.grid(row=1, column=2, sticky=tk.N)
        
        self.rowconfigure(0, weight=0)
        self.rowconfigure(1, weight=1)
        self.columnconfigure(0, weight=2)
        self.columnconfigure(1, weight=3)
        self.columnconfigure(2, weight=2)
        
        self.grid_propagate(False)
        self.configure(width=3*self.image_frame_opts['img_dims'][0] + 2*self.image_frame_opts['img_buffer'], height=1.5*self.image_frame_opts['img_dims'][1])
        
    def __get_images_frame(self, img_arrs, labels, img_dims = (480,360), img_buffer = 30, **kwargs):
        '''
        Returns a scrollable frame that contains all the images from img_arrs stacked horizontally.
            img_arrs - The images to display as arrays of pixel values.
            img_dims - The dimensions (width, height) in pixels to display the images in.
            img_buffer - How many pixels to leave between images.
            kwargs - Keyword arguments that are passed straight through to the returned LabelFrame.
        '''
        images_frame = tk.LabelFrame(self,**kwargs)
        images_frame.grid_rowconfigure(0, weight=1)
        images_frame.grid_columnconfigure(0, weight=1)
        
        x_scrollbar = tk.Scrollbar(images_frame, orient=tk.HORIZONTAL)
        x_scrollbar.grid(row=1, column=0, sticky=tk.E+tk.W)
        
        images_canvas = tk.Canvas(images_frame, bd=0,
                        xscrollcommand=x_scrollbar.set)
         
         
        images_canvas.grid(row=0, column=0, sticky=tk.N+tk.S+tk.E+tk.W)
        x_scrollbar.config(command=images_canvas.xview)

        i = 0
        images_canvas._image_cache = []
        canvas_img_items = []
        for img_arr, label in sorted(zip(img_arrs, labels),
                                      key=lambda x: int(re.findall(r'\d+', str(x[1]))[-1])):
            
            x_coord, y_coord = 0.5*img_dims[0]+i*(img_dims[0]+img_buffer),img_dims[1]
            
            img = ImageTk.PhotoImage(Image.fromarray(img_arr).resize(img_dims))
            canvas_img_items.append(images_canvas.create_image(x_coord,y_coord,anchor=tk.S, image=img, tags=label))
            images_canvas._image_cache.append(img)  # avoid garbage collection
            
            images_canvas.create_text(x_coord,y_coord,anchor=tk.N, text=label)
            
            i+=1
        
        images_canvas.config(scrollregion=images_canvas.bbox(tk.ALL))
        images_canvas.configure(height=images_canvas.bbox(tk.ALL)[-1])

        return images_frame

    def __get_image_type_dropdown(self):
        '''
        Get a dropdown of all available images frames.
        '''
        self.image_type_var = var = tk.StringVar()
        var.set(self.images_frames_dict.keys()[0])
        
        return tk.OptionMenu(self, var, *self.images_frames_dict.keys(), command=lambda x=var: self.__image_type_dropdown_selected(x))
    
    def __image_type_dropdown_selected(self, key):
        '''
        Hide any widgets that are currently displayed where we want the images to be, then display the images frame.
        '''
        # Remove current frame and display selected frame
        self.images_frames_dict.get(self.displayed_images_frame_key).grid_remove()
        self.images_frames_dict.get(key).grid(**self.image_frame_grid_opts)
        self.displayed_images_frame_key = key
        
    def __get_save_notes_frame(self, **kwargs):
        '''
        Returns a frame containing a user editable text field.  Notes entered into this field will be saved along with the images.
        '''
        save_notes_frame = tk.LabelFrame(self, **kwargs)
        save_notes_wid = ScrolledText(save_notes_frame)
        save_notes_wid.pack(expand=1)
        return save_notes_frame, save_notes_wid
    
    def __get_buttons_frame(self):
        '''
        A frame containing the action buttons for the UI.
        '''
        buttons_frame = tk.Frame(self)
        
        button_opts = {'width':25, 'padx':3, 'pady':3}
        save_button = tk.Button(buttons_frame, text='Save', command=self.save, bg='green', **button_opts)
        discard_button = tk.Button(buttons_frame, text='Discard', command=lambda: self.closeWindow(ask_to_save_images=False), bg='red', **button_opts)
        
        save_button.pack(side=tk.TOP)
        discard_button.pack(side=tk.BOTTOM)        
        return buttons_frame
    
    def save(self):
        '''
        Save the images and close the UI.
        '''
        self.absorbtion_imaging_experiment.saveProcessedImages(notes=self.save_notes_wid.get(1.0, tk.END))
        self.closeWindow(ask_to_save_images=False)
                                                                          
    def closeWindow(self, ask_to_save_images = True):
        """Close the top window."""
        if ask_to_save_images:
            save_on_exit = tkMessageBox.askyesnocancel('Confirm exit',\
                                                      'Would you like to save these images?')
            if save_on_exit == None:
                    # A bug that puts the parent back on top even though it doesn't have focus - fixed here
                    self.lift()
                    return
            elif save_on_exit:
                self.save()
        self.grab_release()
        for wid in self.winfo_children():
            wid.destroy()
        self.destroy()
        
class Stirap_hist_plot_live(tk.LabelFrame):
    
    def __init__(self, parent, hist_values, bin_edges, width, xlabel='t (us)', ylabel='counts',
                 text="Stirap hist.", font=("Helvetica", 16),**kwargs):
        tk.LabelFrame.__init__(self, parent, text=text, font=font, **kwargs)

        self.bin_edges = bin_edges
        self.bin_centers = np.array([bin_edges[i]+bin_edges[i+1] for i in xrange(len(bin_edges)-1)])
        self.width = width
        
        self.fig, self.ax = plt.subplots()

#        self.fake_data = [5]*30
        self.rects = self.ax.bar(self.bin_edges[:-1], hist_values, self.width, color='blue')
#        self.rects = self.ax.bar(self.bin_edges[:-1], self.fake_data, self.width, color='blue')

#         self.fig.canvas.draw()   
        self.canvas = FigureCanvasTkAgg(self.fig, master=self)
        self.canvas.show()
        self.canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

    def update(self, hist_values):
        '''Each plot with new data.'''
        # TODO: speed this up - something is leaking into memory, can we delete the whole
        # rect container before re-plotting? Or Animate the graph?
#        t1 = time.time()
        [rect.set_height(hist_values[i]) for i, rect in enumerate(self.rects)]
        #self.rects = self.ax.bar(self.bin_centers, hist_values, self.width, color='blue')
#        self.rects = self.ax.bar(self.bin_edges[:-1], self.fake_data, self.width, color='blue')
#         for rect in self.rects:
#             self.ax.draw_artist(rect)
# #         self.canvas.update()
# #         self.canvas.flush_events()
        #t2 = time.time()
        #self.canvas.show()
        self.ax.set_ylim(0., (max(hist_values) + 9) // 10 * 10)
        self.canvas.draw()
#        t2 = time.time()
#        print 'Draw update time', t2-t1
#        print 'Hist update time', t2-t1
#             self.canvas.update()
#             self.canvas.flush_events()

class Count_rate_plot_live(tk.LabelFrame):
    
    def __init__(self, parent, n_lines=1, line_labels=['Count rate'],
                 text="Count rate", font=("Helvetica", 16), n_iters_update_buffer=10,
                 **kwargs):
        tk.LabelFrame.__init__(self, parent, text=text, font=font, **kwargs)

        self.fig, self.ax = plt.subplots()
        
        self.y_max = 1
        self.n_iters_update_buffer=n_iters_update_buffer
        self.n_iters_update_counter=0
        
        # A dictionary to store the 2dLine matplotlib objects relating to each plotted channel
        self.lines = []
        
        for label in line_labels[:n_lines]:
            line, = self.ax.plot([0], [0], label=label)
            self.lines.append(line)
            
        self.ax.set_xlim([0,self.n_iters_update_buffer])
        self.ax.set_ylim([0,self.y_max])

#         # Always cut the plot tight on the time axis and with a 10% buffer on the value axis
#         self.ax.locator_params(axis='x', tight=True)
#         self.ax.margins(y=0.1)
#         self.rescale_view()
        
#         self.fig.canvas.draw()   
        self.canvas = FigureCanvasTkAgg(self.fig, master=self)
        self.canvas.show()
        self.canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

    def update(self, lines_data, n_iters):
        '''Each plot with new data.'''
        # TODO: speed this up
        x_data = xrange(n_iters+1)
        for data, line in zip(lines_data, self.lines):
            if max(data) > self.y_max:
                self.y_max = max(data)
                self.ax.set_ylim([0,self.y_max*1.05])
            
            line.set_ydata(data)
            line.set_xdata(x_data)
        
            if self.n_iters_update_counter >= self.n_iters_update_buffer:
                self.ax.set_xlim([0,len(x_data)+self.n_iters_update_buffer])
                self.n_iters_update_counter=0
            else:
                self.n_iters_update_counter+=1
            try:
                self.canvas.show()
            except RuntimeError as err:
                # Sometimes data gets out of sync and the plot fails.
                # Just print a message and move on - hopefully it will re-sync!
                print 'Runtime error caught and ignored:', str(err)
                pass
#             self.canvas.update()
#             self.canvas.flush_events()
        

