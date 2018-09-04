'''
Created on 25 Mar 2016

@author: tombarrett
'''
import Tkinter as tk
import ttk
import tkFont

import tkFileDialog
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2TkAgg
import matplotlib.pyplot as plt
from Config import SequenceReader, SequenceWriter
from Sequence import IntervalStyle, MultipleInvalidSequenceChannelException, InvalidSequenceChannelException
import tkMessageBox
from IPython.core.display import display
from Tkconstants import ANCHOR
from PIL import Image, ImageTk
import ToolTip_UI as tooltip
import numpy as np

import wx

'''
TODO - 
1. Be able to add/remove sequence channels
2. Provide 'sort' option for time channel - sort when re-loading channel to look at it / provide sort button to remove incomplete lines and reorder
3. Implement channel wrapper (e.g. V <--> Hz for AOMs)
4. Sequence: update interval --> sequence speed
'''

class Sequence_UI(tk.Toplevel):
        
    '''Seqeuence UI to look after the sequence plotting/editing/loading/saving.'''
    def __init__(self, parent, sequence_fname, configured_channel_labels={}, configured_channel_calibrations={}, hidden=True):
        '''parent - parent widget
           sequence - initial sequence to be configured with
           configured_channel_labels - dict. of {channel number:channel label} as currently configured.
           configured_channel_calibrations= - dict. of {channel number:(calibrationUnits, calibrationToVFunc, calibrationFromVFunc)} as currently configured.
           
           Note - the sequecnce_UI doen't validate that the configured sequence matches the configured DAQ channels
           (for channel limits etc.) as a) sequence validation is performed by the DAQ_controller before it is run
           and b) sequences could be run with different config files.''' 
        tk.Toplevel.__init__(self, parent)
                
        if hidden:
            self.withdraw()
        
        self.parent=parent
        self.sequence_fname = sequence_fname
        self.sequence_reader = SequenceReader(self.sequence_fname)
        self.sequence = self.sequence_reader.loadSequence()
        self.configured_channel_labels = configured_channel_labels
        self.configured_channel_calibrations = configured_channel_calibrations
                
        self.wm_title("Set sequence")
        
        self.configureForCurrentSequence()
        
        # Changes the close button to call my close function.
        self.protocol('WM_DELETE_WINDOW', self.closeWindow);
        
    def configureForCurrentSequence(self):
        '''This method creates, configures and draws all the elements of the UI that are dependent on the currently loaded sequence (as
        defined by the class variables self.sequence, self.sequence_reader...  Primarily it is just an extension of the __init__ for the
        class however this section of code needs to be run to re-configure the UI for a new sequence if one is loaded.'''
        # Destroy any widgets that have already been created (i.e. clear the frame before re-drawing)
        for wid in self.winfo_children():
            wid.destroy()
        
        self.sequence_channel_labels = self.getChannelLabels(self.configured_channel_labels)
        
        self.tabs = ttk.Notebook(self)
        self.tabs.enable_traversal()
        
        self.buttons = self.getActionButtons()
        self.seqPlot = SequencePlot_UI(self, self.sequence, self.sequence_channel_labels)
        self.seqEditor = SequenceEditor_UI(self, self.sequence_reader)
        self.chEditor = ChannelEditor_UI(self, self.sequence, self.sequence_reader, self.sequence_channel_labels, self.configured_channel_calibrations)
        self.notesFrame = Notes_UI(self, self.sequence_reader)
        
        self.tabs.add(self.seqEditor, text='Sequence')
        self.tabs.add(self.chEditor, text='Channels')
        self.tabs.add(self.notesFrame, text='Notes')
        self.tabs.select(self.chEditor)
            
        self.seqPlot.grid(row=0,column=0,columnspan=2, sticky=tk.N+tk.E+tk.S+tk.W)
        self.tabs.grid(row=1,column=0, sticky=tk.N+tk.E+tk.S+tk.W)
        self.buttons.grid(row=1,column=1,sticky=tk.N+tk.E+tk.S+tk.W)
        
        # Make some rows and columns change size as the window is resized.
        self.grid_columnconfigure(0, weight=4, pad=15)
        self.grid_columnconfigure(1, weight=1, pad=15)
        self.grid_rowconfigure(0, weight=1, pad=5)
        self.grid_rowconfigure(1, weight=1, pad=5)
        self.grid_rowconfigure(2, weight=1, pad=5)
        
    def configureForNewChannelLabels(self, configured_channel_labels):
        '''Redraws all the elements that use the names of the currently configured channel in the UI.  The intended
        use of this function is to update the UI visually if the use has changed the names of the configured channels.'''
        self.configured_channel_labels = configured_channel_labels
        self.sequence_channel_labels = self.getChannelLabels(self.configured_channel_labels)
        
        self.seqPlot.updateChLabels(self.sequence_channel_labels)
        self.chEditor.updateChannelLabels(self.sequence_channel_labels)
        
    def configureForNewChannelCalibrations(self, configured_channel_calibrations):
        '''Redraws all the elements that use the calibrations of the currently configured channel in the UI.  The intended
        use of this function is to update the UI visually if the use has changed the calibrations of the configured channels.'''
        self.configured_channel_calibrations = configured_channel_calibrations
        
        self.chEditor.updateChannelCalibrations(self.configured_channel_calibrations)

    def getChannelLabels(self, configured_channel_labels):
        '''This method takes a dictionary of channel number:labels and matches them to the channel numbers
        expected on the current sequence.  If a channel number is expected but not found, a label is automatically
        created.  If a channel number is given but not expected it is removed from the list.'''
        sequence_channel_labels = {}
        
        for chNum in self.sequence.getChannelNums():
            try:
                chLab = configured_channel_labels[chNum]
            except KeyError:
                chLab = 'Unconfigured channel'
            
            sequence_channel_labels[chNum] = chLab
            
        return sequence_channel_labels
            
    def getActionButtons(self):
        buttons = tk.Frame(self)
        
        self.CloseButton = tk.Button(buttons, text="Close", command=self.closeWindow)
        self.CloseButton.grid(row=1,column=0, padx=5, pady=5, sticky=tk.S+tk.E)
        
        self.saveLoadButtons = tk.Frame(buttons)
        self.LoadButton = tk.Button(self.saveLoadButtons,  text="Load sequence", command=self.loadSeq)
        self.SaveButton = tk.Button(self.saveLoadButtons, text="Save sequence", command=self.saveSeq)
        self.LoadButton.pack(side=tk.TOP, padx=5, pady=5)
        self.SaveButton.pack(side=tk.TOP, padx=5, pady=5)
        self.saveLoadButtons.grid(row=0 , column=0, padx=5, pady=5, sticky=tk.N+tk.E)  
        
        return buttons
    
    def loadSeq(self):
        fname = tkFileDialog.askopenfilename(master=self, title="Load a sequence", initialdir="")
        
        # Check for empty filenames (i.e. when the user cancelled the action)
        if fname!= '':
            self.sequence_reader = SequenceReader(fname)
            self.sequence = self.sequence_reader.loadSequence()
            
            self.configureForCurrentSequence()
            
        # Seems to be a tkinter bug that the parent is shown on top after a file dialog - so let's fix that
        self.lift(self.parent)
        
    def saveSeq(self):
        fname = tkFileDialog.asksaveasfilename(title="Save a sequence")
        # Check for empyy filenames (i.e. when the user cancelled the acion)
        if fname!= '':
            writer = SequenceWriter(fname)
            writer.save(self.sequence, self.sequence_channel_labels, self.seqEditor.global_timings, self.notesFrame.getUserNotes())
        
        # Seems to be a tkinter bug that the parent is shown on top after a file dialog - so let's fix that
        self.lift(self.parent)
        
    def openWindow(self):
        '''Open the window.'''
        self.deiconify()
        self.grab_set()
#         self.wm_attributes("-topmost", True)
    
    def closeWindow(self):
        """Close the window."""
        self.grab_release()
        self.parent.focus_set()
        self.withdraw()
        
    def updateLiveSequenceChannel(self):
        '''The update method triggered by changes in the ChannelEditor_UI'''
        liveChNum= self.chEditor.liveChNum
        tV_pairs, interval_styles = self.chEditor.getChannelSequence(liveChNum)
        try:
            self.sequence.updateChannel(liveChNum, tV_pairs, interval_styles)
            self.seqPlot.updateChPlot(liveChNum)
        except InvalidSequenceChannelException as err:
            # The new sequence was invalid and the update rejected - refresh the rows
            # for the live channel to reverse the changes made.
            self.chEditor.refreshRows(liveChNum)
            
            # Create a warning label explaining why the change was rejected.
            self.displayWarning(err.message, 3000)
            
    def updateGlobalTimings(self):
        self.chEditor.global_timings = self.seqEditor.global_timings
        for chNum in self.sequence.getChannelNums():
            self.chEditor.refreshRows(chNum)
        
    def updateSequenceSamplingConfiguration(self):
        
        def resetChanges():
            '''local convenience function to simply reset the changes in the Sequence_Editor_UI'''
            n_samples, t_step = self.sequence_reader.get_sequence_init_args()
            self.seqEditor.set_n_samples(n_samples)
            self.seqEditor.set_t_step(t_step)
            self.displayWarning("Changes not applied - reverted to the values in the sequence file", 3000)
            
        
        # If t_new > t_old: ask if you want to extend sequence, if so just add FLAT intervals at end
        # If t_new < t_old: ask if you want to crop sequence.
        newSeqLength = (self.seqEditor.n_samples - 1) * self.seqEditor.t_step
        
        # Depending on how long the new sequence is, channels may need to be manually changed.  These changes will be entered in this
        # dictionary to be passed to the update function later.
        channelsToUpdate = {}
        if newSeqLength > self.sequence.getLength():
            result = tkMessageBox.askquestion(
                    "Please confirm changes",                        
                    "Sequence length will be increased from {0} to {1}. Channels will be set as constant from their current end values to compensate.".format(self.sequence.getLength(), newSeqLength) +
                    "\nIs that ok?",
                    icon='warning')
            # Seems to be a tkinter bug that the parent is shown on top after this message dialog
            self.lift(self.parent) 
            if result == 'yes':
                for chNum in self.sequence.getChannelNums():
                    # fill in channelsToUpdate dict.
                    tV_pairs, interval_styles = self.sequence.get_tV_pairs(chNum), self.sequence.get_V_intervalStyles(chNum)
                    # If there are more value pairs than interval styles, the last pair was on the final time step of the old sequence.
                    # For the new (longer) sequence this would be invalid, so add another interval style to take this final value and
                    # set it as a constant.
                    if len(tV_pairs) > len(interval_styles):
                        interval_styles.append(IntervalStyle.FLAT)
                        channelsToUpdate[chNum] = (tV_pairs, interval_styles)
            else:
                resetChanges()
                return
                
        elif newSeqLength < self.sequence.getLength():
            result = tkMessageBox.askquestion(
                    "Please confirm changes",                        
                    "Sequence length will be decreased from {0} to {1}. Channels will be cropped with there last time interval being made constant to compensate.".format(self.sequence.getLength(), newSeqLength) +
                    "\nIs that ok?",
                    icon='warning')  
            # Seems to be a tkinter bug that the parent is shown on top after this message dialog
            self.lift(self.parent)   
            if result == 'yes':
                for chNum in self.sequence.getChannelNums():
                    tV_pairs, interval_styles = self.chEditor.getChannelSequence(chNum)
                    # Cut any tV pairs that are not outside the sequence length
                    tV_pairs = sorted([x for x in tV_pairs if x[0] <= newSeqLength],key=lambda x: x[0])
                    # If of the remaining pairs, the last pair in on the last timestep of the new sequence,
                    # then the channel is fully specified by just cropping the interval_styles list accordingly.
                    # If not, we need to add a final interval style to be constant in order to make the sequence valid.
                    if tV_pairs[-1][0] == newSeqLength:
                        interval_styles = interval_styles[0:len(tV_pairs)-1]
                    else:
                        interval_styles = interval_styles[0:len(tV_pairs)-1] + [IntervalStyle.FLAT]
                    # fill in channelsToUpdate dict.
                    channelsToUpdate[chNum] = (tV_pairs, interval_styles)
   
            else:
                resetChanges()
                return
        
        # Try to update the timing variables on the sequence
        try:
            self.sequence.updateTimeSteps(self.seqEditor.n_samples, self.seqEditor.t_step, channelsToUpdate=channelsToUpdate)
            self.seqPlot.reloadPlotData()
            self.chEditor.refreshRows(self.chEditor.liveChNum)
            
        # Catch validation errors, reset the variables in the UI and display an appropriate warning message
        except MultipleInvalidSequenceChannelException as mulErr:
            errMsg = mulErr.message + "\n"
            for i in range(0,len(mulErr.errors)):
                errMsg += '\nChannel {0} - {1}'.format(mulErr.errorChannels[i], mulErr.errors[i].message)
                print mulErr.errorChannels[i], mulErr.errors[i].message
            
            tkMessageBox.showwarning('Unable to applySamplingConfiguration changes', errMsg)
            # Seems to be a tkinter bug that the parent is shown on top after this message dialog
            self.lift(self.parent)
            
            # reset the changes made and explain what has happened
            resetChanges()
    
    def displayWarning(self, message, delay=3000):
        '''Create an unobtrusive warning label that disappears after a delay.'''
        warningLabel = tk.Label(self, text=message, bg='yellow', height=1)
        warningLabel.grid(row=2, column=0,columnspan=2, sticky=tk.N+tk.E+tk.W+tk.S)
        self.after(delay, warningLabel.destroy)
            
class Notes_UI(tk.Frame):
    
    def __init__(self, parent, sequence_reader):
        tk.Frame.__init__(self, parent)
        self.sequence_reader = sequence_reader
        
        self.seqNotes,  self.seqNotesFrame  = self.createSeqNotes()
        self.userNotes, self.userNotesFrame = self.createUserNotes()
        
        self.pack_propagate(False)
        self.seqNotesFrame.pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        self.userNotesFrame.pack(side=tk.BOTTOM, fill=tk.BOTH, expand=1)
        
    def createSeqNotes(self):
        seqNotesFrame = tk.LabelFrame(self, text='Sequence notes', height=100)
        seqNotesFrame.pack_propagate(False)
        
        scrollbar = tk.Scrollbar(seqNotesFrame)
        scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
        
        # Setting the width just enables the widget size to change - the actual size is determined
        # by the frame
        seqNotes = tk.Text(seqNotesFrame, wrap=tk.WORD, yscrollcommand=scrollbar.set, width=1)
        notes = 'sequence name: {0}\nlast saved: {1} on {2}\n\nThe channel assignments when this sequence was last saved were:\n'.\
                format(self.sequence_reader.get_name(), self.sequence_reader.get_time(), self.sequence_reader.get_date())
        
        for x in self.sequence_reader.get_channel_assignment_notes():
            notes += 'Ch {0}: {1}\n'.format(x[0], x[1])
                    
        seqNotes.insert(tk.END, notes)
        scrollbar.config(command=seqNotes.yview)
        seqNotes.pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        
        seqNotes.config(state=tk.DISABLED)
        
        return seqNotes, seqNotesFrame
    
    def createUserNotes(self):
        userNotesFrame = tk.LabelFrame(self, text='User notes')
        scrollbar = tk.Scrollbar(userNotesFrame)
        scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
        
        # Setting the width just enables the widget size to change - the actual size is determined
        # by the frame
        userNotes = tk.Text(userNotesFrame, wrap=tk.WORD, yscrollcommand=scrollbar.set, width=1)
        
        notes = self.sequence_reader.get_user_notes()

        userNotes.insert(tk.END, notes)
        scrollbar.config(command=userNotes.yview)
        userNotes.pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        
        return userNotes, userNotesFrame
    
    def getUserNotes(self):
        return self.userNotes.get(1.0, tk.END)

class SequenceEditor_UI(tk.Frame):
    
    def __init__(self, parent, sequence_reader):
        tk.Frame.__init__(self, parent)
        self.sequence_reader = sequence_reader
        self.n_samples, self.t_step = self.sequence_reader.get_sequence_init_args()
        self.global_timings = self.sequence_reader.get_global_timings()
        
        samplingConfigFrame = tk.LabelFrame(self, text='Sampling configuration', font=("Helvetica", 12))
    
        labelOpts = {'font':("Helvetica",10), 'anchor':tk.E, 'justify':tk.RIGHT}
        
        self.applyButton = tk.Button(samplingConfigFrame, text='Apply', command=self.applySamplingConfiguration, state=tk.DISABLED)
        
        self.samVar = tk.IntVar()
        self.samVar.set(self.n_samples)
        # %P = value of the entry if the edit is allowed
        vcmdSam = (self.register(self.validateSamVar),'%P')
    
        samlabel = tk.Label(samplingConfigFrame, text='Num. samples:', **labelOpts)
        self.samWid = tk.Entry(samplingConfigFrame, validate='key', textvariable=self.samVar, vcmd=vcmdSam)
        
        self.tStepVar = tk.DoubleVar()
        self.tStepVar.set(self.t_step) 
        # %P = value of the entry if the edit is allowed
        vcmdtStep = (self.register(self.validate_t_step),'%P')

        tSteplabel = tk.Label(samplingConfigFrame, text=u'time step (\u03bcs):', **labelOpts)
        self.tStepWid = tk.Entry(samplingConfigFrame, validate='key', textvariable=self.tStepVar, vcmd=vcmdtStep)

        self.gridOpts = {'padx':5, 'pady':5}

        samlabel.grid(row=0, column=0, **self.gridOpts)
        self.samWid.grid(row=0, column=1, **self.gridOpts)
       
        tSteplabel.grid(row=1,column=0, **self.gridOpts)
        self.tStepWid.grid(row=1,column=1, **self.gridOpts)
        self.tStepTooltip = tooltip.createToolTip(self.tStepWid,
                                                  '{0}kHz rep. rate'.format( 10**3 / float(self.tStepWid.get()) ),
                                                  openDelay=500)
        self.tStepWid.bind('<FocusOut>', lambda event: self.tStepTooltip.updateText('{0}kHz rep. rate'.format(10**3 / float(self.tStepWid.get()))))
        
        self.applyButton.grid(row=0, column=2, rowspan=2, **self.gridOpts)
        
        samplingConfigFrame.pack(side=tk.TOP, padx=15, pady=15, fill=tk.X, expand=1)
        
        globalTimingFrame = tk.LabelFrame(self, text='Global timings', font=("Helvetica", 12))
        
        self.globalTimingRows = []
        
        for timing in self.global_timings:
            self.globalTimingRows.append(Frame_GlobalTimingRow(globalTimingFrame, *timing))
                
        i=0
        for row in self.globalTimingRows:
            row.grid(row=i, column=0, sticky=tk.W, **self.gridOpts)
            i+=1
            
        icon = Image.open("icons/add_icon.png").resize((12,12))
        icon = ImageTk.PhotoImage(icon)
        self.addButton = tk.Button(globalTimingFrame, image=icon, command= lambda: self.addRow(globalTimingFrame), height=12, width=12)
        self.addButton.image = icon # store the image as a variable in the widget to prevent garbage collection.
        self.addButton.grid(row=i, column=0, sticky=tk.W,  padx=10, pady=10)
        
        globalTimingFrame.pack(side=tk.BOTTOM, padx=15, pady=15, fill=tk.BOTH, expand=1)
        
        self.bind('<FocusOut>', self.updateGlobalTimings)
        self.bind('<Leave>', self.updateGlobalTimings)
    
    def addRow(self, rowFrame):
        _ , nRows = rowFrame.grid_size()
        self.addButton.grid(row=nRows, column=0, sticky=tk.W, padx=10, pady=10)
        
        namePopup = PopupEntry(self, 
                               'Create global timing',
                               'Please enter the name of the new global timing - this cannot be edited after this point.')
        # wait for the popup window to be destroyed before continuing
        self.winfo_toplevel().wait_window(namePopup.top)
        
        newRow = Frame_GlobalTimingRow(rowFrame, time='', name=namePopup.value)
        self.globalTimingRows.append(newRow)
        newRow.grid(row=nRows-1, column=0, sticky=tk.W, **self.gridOpts)    
        
    def validateSamVar(self, newValue):
        '''Check the input is an integer and enable the applySamplingConfiguration button if the new value is not that
        which is currently set on the sequence'''
        try:
            int(newValue)
        except ValueError:
            return False
        if int(newValue) != self.n_samples:
            self.applyButton.config(state=tk.NORMAL)
        else:
            self.applyButton.config(state=tk.DISABLED)
        return True
    
    def validate_t_step(self, newValue):
        '''Check the input is an float and enable the applySamplingConfiguration button if the new value is not that
        which is currently set on the sequence'''
        try:
            float(newValue)
        except ValueError:
            return False
        if float(newValue) != self.t_step:
            self.applyButton.config(state=tk.NORMAL)
        else:
            self.applyButton.config(state=tk.DISABLED)
        return True
    
    def set_n_samples(self, n_samples):
        self.samVar.set(n_samples)
        
    def set_t_step(self, t_step):
        self.tStepVar.set(t_step)
        
    def updateGlobalTimings(self, event):
        self.global_timings = [(x.time, x.name) for x in self.globalTimingRows if x.isComplete() and x.isActive()]
        self.winfo_toplevel().updateGlobalTimings()
      
    def applySamplingConfiguration(self):
        '''Update self.n_samples and self.t_step
        call up to Sequence_UI to update the sequence
        Sequence validates or rejects changes
        catch rejections: display message why & reset self.n_samples and self.t_step
        otherwise force updates to the res of the UI'''        
        self.n_samples = self.samVar.get()
        self.t_step = self.tStepVar.get()
        self.winfo_toplevel().updateSequenceSamplingConfiguration()
 
class Frame_GlobalTimingRow(tk.Frame):
    
    def __init__(self, parent, time='', name='', **kwargs):             
        tk.Frame.__init__(self, parent, **kwargs)

        self.time = time
        self.name = name
        self.active=True
        
        self.timeWid = tk.Entry(self)
        if self.time != None:
            self.timeWid.insert(0, self.time)
            
        self.timeWid.bind("<FocusOut>", self.validateTime)
            
        self.nameWid = tk.Entry(self)
        if self.name != None:
            self.nameWid.insert(0, self.name)
        self.nameWid.configure(state=tk.DISABLED)
        
        icon = Image.open("icons/delete_icon.png").resize((12,12))
        icon = ImageTk.PhotoImage(icon)
        self.deleteButton = tk.Button(self, image=icon, command=self.delete, height=12, width=12)
        self.deleteButton.image = icon # store the image as a variable in the widget to prevent garbage collection.
        
        self.grid_columnconfigure(0, weight=1, pad=3, uniform='cols')
        self.grid_columnconfigure(1, weight=1, pad=3, uniform='cols')
        self.grid_columnconfigure(2, weight=0, pad=3, uniform='cols')
        
        self.nameWid.grid(row=0,column=0,padx=5)
        self.timeWid.grid(row=0,column=1,sticky=tk.W, padx=5)
        self.deleteButton.grid(row=0,column=2,sticky=tk.W, padx=5)
            
    def validateTime(self, params):
        if self.timeWid.get().strip() == '':
            self.time = self.timeWid.get()
        else:
            try:
                self.time = float(self.timeWid.get())
            except ValueError:
                self.timeWid.delete(0, tk.END)
                self.timeWid.insert(0, self.time)
    
#     def validateName(self, params):
#         self.name = self.nameWid.get()
    def isActive(self):
        return self.active
        
    def isComplete(self):
        return self.time != '' and self.name != ''
    
    def delete(self):
        self.active=False
        self.destroy()
        
        
class PopupEntry(object):
    
    def __init__(self, parent, title, message, **kwargs):        
        self.value = ''

        top=self.top=tk.Toplevel(parent, **kwargs)
        self.centerWindow()
        top.grab_set()
        top.title(title)
        
        tk.Message(top, text=message, aspect=300).grid(row=0, column=0, columnspan=2)
        
        self.entry= tk.Entry(top)
        self.entry.grid(row=1, column=0, columnspan=2)
        
        tk.Button(top, text="Confirm", command=self.Confirm).grid(row=2, column=0)
        tk.Button(top, text="Cancel", command=self.Destroy).grid(row=2, column=1)
    
    def centerWindow(self):
        '''Centers the popup window on it's parent'''
        self.top.update_idletasks()
        
        topSize =  [int(x) for x in self.top.geometry().split('+')[0].split('x')]
        parentSize =  [int(x) for x in self.top.master.winfo_toplevel().winfo_geometry().split('+')[0].split('x')]
        xParent, yParent = [int(x) for x in self.top.master.winfo_toplevel().winfo_geometry().split('+')[1:]]
        xTop, yTop = xParent + parentSize[0]/2 - topSize[0]/2, yParent  + parentSize[1]/2 - topSize[1]/2

        self.top.geometry("%dx%d%+d%+d" % tuple(topSize + [xTop] + [yTop]))
    
    def Confirm(self):
        self.value = self.entry.get()
        self.Destroy()
    
    def Destroy(self):
        self.top.grab_release()
        self.top.master.focus_set()
        self.top.destroy()
        
class SequencePlot_UI(tk.LabelFrame):
    
    def __init__(self, parent, sequence, sequence_channel_labels, text="Sequence preview", font=("Helvetica", 16), **kwargs):
        tk.LabelFrame.__init__(self, parent, text=text, font=font, **kwargs)

        self.sequence=sequence

        self.fig, self.ax = plt.subplots()
        self.t = self.sequence.getTimeSteps()
        # A dictionary to store the 2dLine matplotlib objects relating to each plotted channel
        self.chPlots = {}
        for chNum in sequence.getChannelNums():
            chPlot, = self.ax.plot(self.t, self.sequence.getChannelValArray(chNum), label=self.getLegLabel(chNum, sequence_channel_labels[chNum]))
            self.chPlots[chNum] = chPlot
            
        # Always cut the plot tight on the time axis and with a 10% buffer on the value axis
        self.ax.locator_params(axis='x', tight=True)
        self.ax.margins(y=0.1)
        self.rescale_view()

        self.interactiveLegend = self.getInteractiveLegend()
        self.interactiveLegend.show()
        
    def drawLegend(self):
        self.ax.legend(loc='upper left', bbox_to_anchor=(1.05, 1), ncol=1, borderaxespad=0, fontsize=12)
        self.fig.subplots_adjust(left=0.05, bottom=0.06, right=0.68, top=0.96)
        
        self.interactiveLegend = self.getInteractiveLegend()
        self.interactiveLegend.show()
        
    def getLegLabel(self, chNum, chLabel):
        '''Convert a channel number and label into a string to be dsiplayed in the plot legend.'''
        return "Ch {0}: {1}".format(chNum, chLabel)
        
    def updateChLabels(self, sequence_channel_labels):
        for chNum in self.sequence.getChannelNums():
            self.chPlots[chNum].set_label(self.getLegLabel(chNum, sequence_channel_labels[chNum]))
        self.interactiveLegend.destroy()
        self.interactiveLegend = self.getInteractiveLegend()
        self.interactiveLegend.show()
            
    def updateChPlot(self, chNum):
        '''Update one of the channel plots to show new y-data (the time data will be unchanged as that is
        set for the whole sequence rather than a single channel).'''
        self.chPlots[chNum].set_ydata(self.sequence.getChannelValArray(chNum))
        self.rescale_view()
        self.fig.canvas.draw()
        
    def reloadPlotData(self):
        '''Reload all plot data from the sequence - typically called after updating variables that affect all channels,
        e.g. update interval, n_samples etc.'''
        self.t = self.sequence.getTimeSteps()
        for chNum in self.sequence.getChannelNums():
            self.chPlots[chNum].set_data(self.t, self.sequence.getChannelValArray(chNum))
        self.rescale_view()
        self.fig.canvas.draw()
        
    def rescale_view(self):
#         self.ax.locator_params(axis='x', tight=True)
#         self.ax.locator_params(axis='y', tight=False) 
        self.ax.relim()
        self.ax.autoscale_view()
        
    def getInteractiveLegend(self, ax=None):
        self.ax.legend(loc='upper left', bbox_to_anchor=(1.05, 1), ncol=1, borderaxespad=0, fontsize=12)
        self.fig.subplots_adjust(left=0.05, bottom=0.06, right=0.68, top=0.96)    
        return _InteractiveLegend(self, self.ax.legend_)

class _InteractiveLegend(object):
    def __init__(self, master, legend):
        self.master = master
        self.legend = legend
        self.fig = legend.axes.figure
        self.canvas = FigureCanvasTkAgg(self.fig, master=self.master)

        '''Probably owe an explanation for this one...  Basically it's a monkey patch to overwrite the release
        method for the Navigation Toolbar.  Every time a button is released when navigating we need to deselect
        the toolbar action in order to still be able to click on the interactive legend.'''
        def release(toolbar, event):
            if toolbar._active == 'PAN': toolbar.pan()
            elif toolbar._active == 'ZOOM': toolbar.zoom()
        NavigationToolbar2TkAgg.release = release
        
        self.toolbar = NavigationToolbar2TkAgg(self.canvas, self.master)
        self.toolbar.update()

        self.lookup_artist, self.lookup_handle = self._build_lookups(legend)
        self._setup_connections()

        self.update()

    def _setup_connections(self):
        for artist in self.legend.texts + self.legend.legendHandles:
            artist.set_picker(10) # 10 points tolerance

        self.canvas.mpl_connect('pick_event', self.on_pick)
        self.canvas.mpl_connect('button_press_event', self.on_click)

    def _build_lookups(self, legend):
        labels = [t.get_text() for t in legend.texts]
        handles = legend.legendHandles
        label2handle = dict(zip(labels, handles))
        handle2text = dict(zip(handles, legend.texts))

        lookup_artist = {}
        lookup_handle = {}
        for artist in legend.axes.get_children():
            if artist.get_label() in labels:
                handle = label2handle[artist.get_label()]
                lookup_handle[artist] = handle
                lookup_artist[handle] = artist
                lookup_artist[handle2text[handle]] = artist

        lookup_handle.update(zip(handles, handles))
        lookup_handle.update(zip(legend.texts, handles))

        return lookup_artist, lookup_handle

    def on_pick(self, event):
        if self.toolbar._active == 'PAN': self.toolbar.pan()
        elif self.toolbar._active == 'ZOOM': self.toolbar.zoom()
        handle = event.artist
        if handle in self.lookup_artist:
            artist = self.lookup_artist[handle]
            artist.set_visible(not artist.get_visible())
            self.update()

    def on_click(self, event):
        if event.button == 3:
            visible = False
        elif event.button == 2:
            visible = True
        else:
            return

        for artist in self.lookup_artist.values():
            artist.set_visible(visible)
        self.update()

    def update(self):
        for artist in self.lookup_artist.values():
            handle = self.lookup_handle[artist]
            if artist.get_visible():
                handle.set_visible(True)
            else:
                handle.set_visible(False)
        self.fig.canvas.draw()

    def show(self):    
        self.canvas.show()
        self.canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        
    def destroy(self):
        self.canvas.get_tk_widget().destroy()
        self.toolbar.destroy()
         
#     def refresh(self):
#         '''So we destroy the canvases of the plot and get new ones.  Then we re-set up thr interactive legend
#         connections.  The tol bar will still be synced to the old canvas so we destroy and resfesh that too.
#         However in order to keep navigation history we make the _views and _positions stacks persist from the
#         old toolbar to the new one.'''
# #         self.canvas.get_tk_widget().destroy()
# #         
# #         self.canvas = FigureCanvasTkAgg(self.fig, master=self.master)
# # 
# #         self.lookup_artist, self.lookup_handle = self._build_lookups(self.legend)
# #         self._setup_connections()
# # 
# #         views, positions, active = self.toolbar._views,  self.toolbar._positions, self.toolbar._active
# #         self.toolbar.destroy()
# #         self.toolbar = NavigationToolbar2TkAgg(self.canvas, self.master)
# #         if active == 'PAN': self.toolbar.pan()
# #         elif active == 'ZOOM': self.toolbar.zoom()
# #         self.toolbar.update()
# #         self.toolbar._views, self.toolbar._positions = views, positions
# #             
# #         self.update()
# #         self.show()
         
class ChannelEditor_UI(tk.Frame):
    
    def __init__(self, parent, sequence, sequence_reader, sequence_channel_labels, configured_channel_calibrations, **kwargs):
        tk.Frame.__init__(self, parent, **kwargs)
        
        self.parent=parent
        self.sequence = sequence
        self.sequence_channel_labels = sequence_channel_labels
        self.configured_channel_calibrations = configured_channel_calibrations
        
        self.global_timings = sequence_reader.get_global_timings()
        self.liveChNum = 0 # Will be modified by the dropdown 
        
        # Before adding widgets lets configure the grid
        self.grid_columnconfigure(0, weight=0, pad=15, uniform='cols')
        self.grid_columnconfigure(1, weight=1, pad=15, uniform='cols')
        self.grid_columnconfigure(2, weight=1, pad=15, uniform='cols')
        self.grid_columnconfigure(3, weight=1, pad=15, uniform='cols')
        
        # Add the titles at the top of each column
        lab_font = ("Helvetica", 10)
        select_channel_label = tk.Label(self, text="Select channel", font=lab_font)
#         time_col_label  = tk.Label(self, text=u"Time (\u03bcs)", font=lab_font)
#         value_col_label  = tk.Label(self, text="Value (V)", font=lab_font)
#         interval_col_label  = tk.Label(self, text="Interval style", font=lab_font)
        select_channel_label.grid(row=0,column=0)
#         time_col_label.grid(row=0,column=1)
#         value_col_label.grid(row=0,column=2)
#         interval_col_label.grid(row=0,column=3)
        
        # Create all the row frames for the different channels
        self.rows, self.rowFrames = {}, {}
        for chNum in self.sequence.getChannelNums():
            self.rows[chNum], self.rowFrames[chNum] = self.createRowsFrame(chNum)
                    
        # Add the column select drop-down menu
        self.dropdown = self.createChannelDropdown()
        self.dropdown.grid(row=1,column=0,sticky=tk.N)
        
    def refreshRows(self,chNum):
        self.rowFrames[chNum].destroy()
        self.rows[chNum], self.rowFrames[chNum] = self.createRowsFrame(chNum)
        self.channelSelected(self.liveChannel)
    
#     def createRowsFrame(self, chNum):
#         tV_pairs = self.sequence.get_tV_pairs(chNum)
#         V_intervalStyes = self.sequence.get_V_intervalStyles(chNum)
#         
#         rowsFrame = tk.Frame(self)
#         rows = []
#         # Add a row for every configuer tV_pair on the sequence channel
#         for i in range(0,len(tV_pairs)):
#             try:
#                 rows.append(Frame_ChannelEditorRow(rowsFrame, tV_pairs[i], V_intervalStyes[i], self.global_timings))
#             # It is possible for there to be one fewer interval styles than pairs if the last pair is on the
#             # final step of the sequence - we presume that is the case here (if we are on the last pair of 
#             # course!) as validation is done when saving / loading the sequence.
#             except IndexError as err:
#                 if i != len(tV_pairs)-1:
#                     raise err
#                 
#         # Add one extra blank row    
#         rows.append(Frame_ChannelEditorRow(rowsFrame, global_timings=self.global_timings))
#         
#         for r in rows:
#             r.pack()
#           
#         return rows, rowsFrame
    
    def _onFrameConfigure(self, rowsCanvas):
        '''Reset the scroll region to encompass the inner frame for a channel rows canvas'''
        rowsCanvas.configure(scrollregion=rowsCanvas.bbox("all"))
    
    def createRowsFrame(self, chNum):
        tV_pairs = self.sequence.get_tV_pairs(chNum)
        V_intervalStyes = self.sequence.get_V_intervalStyles(chNum)
        
        topFrame = tk.Frame(self)
        
        # A load of jazz putting the frame in a canvas with a scrollbar just to get scrolling working
        rowsCanvas = tk.Canvas(topFrame, borderwidth=0)     
        scrollbar = tk.Scrollbar(topFrame, orient='vertical', command=rowsCanvas.yview)
        rowsCanvas.configure(yscrollcommand=scrollbar.set)
        
        rowsCanvas.pack(side=tk.LEFT , fill=tk.BOTH, expand=True)
        scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
        
        rowsFrame = tk.Frame(rowsCanvas)
        
        rowsCanvas.create_window((0,0), window=rowsFrame, anchor=tk.NW)
        rowsFrame.bind("<Configure>", lambda event, canvas=rowsCanvas: self._onFrameConfigure(canvas))
        
        # Get the channel calibration if it exists
        try:
            chCalibration = self.configured_channel_calibrations[chNum]
        except KeyError:
            chCalibration = None
            
        # Set up whether we are building rows for a configured channel or not.    
        valueUnits = chCalibration[0] if chCalibration else 'V'
        
        rows = []
        # Add a row for every configure tV_pair on the sequence channel
        for i in range(0,len(tV_pairs)):
            try:
                rows.append(Frame_ChannelEditorRow(rowsFrame, tV_pairs[i], V_intervalStyes[i], chCalibration, self.global_timings))
            # It is possible for there to be one fewer interval styles than pairs if the last pair is on the
            # final step of the sequence - we presume that is the case here (if we are on the last pair of 
            # course!) as validation is done when saving / loading the sequence.
            except IndexError as err:
                if i != len(tV_pairs)-1:
                    raise err
                
        # Add one extra blank row    
        rows.append(Frame_ChannelEditorRow(rowsFrame, interval_style=IntervalStyle.FLAT, channel_calibration = chCalibration, global_timings=self.global_timings))
        
        # Add column lables
        lab_font = ("Helvetica", 10)
        
        down_icon = Image.open("icons/down_icon.png").resize((12,12))
        down_icon = ImageTk.PhotoImage(down_icon)
        up_icon = Image.open("icons/up_icon.png").resize((12,12))
        up_icon = ImageTk.PhotoImage(up_icon)
        sortRowsButton = tk.Button(rowsFrame, text=u"Time (\u03bcs)", font=lab_font, image=down_icon, compound=tk.RIGHT, relief=tk.FLAT)
        sortRowsButton.down_icon = down_icon
        sortRowsButton.up_icon = up_icon
        sortRowsButton.downState = None
        sortRowsButton.configure(command=lambda sortButton=sortRowsButton, rows=rows: self.sortRows(sortButton, rows))
        
        value_col_label  = tk.Label(rowsFrame, text="Value ({0})".format(valueUnits), font=lab_font)
        interval_col_label  = tk.Label(rowsFrame, text="Interval style", font=lab_font)
        
        sortRowsButton.grid(row=0, column=0)
        value_col_label.grid(row=0, column=1)
        interval_col_label.grid(row=0, column=2)
        
        i = 1
        for r in rows:
            r.grid(row=i, column=0, columnspan=3)
            i+=1
            
        icon = Image.open("icons/add_icon.png").resize((12,12))
        icon = ImageTk.PhotoImage(icon)
        addRowButton = tk.Button(rowsFrame, image=icon)
        addRowButton.image = icon
        addRowButton.configure(command=lambda chNum=chNum, chCalibration=chCalibration: self.addRow(rowsFrame, chNum, chCalibration, addRowButton))
        addRowButton.grid(row=i, column=0, sticky=tk.W)
        
        return rows, topFrame
    
    def addRow(self, rowsFrame, chNum, chCalibration, addRowButton):
        '''Add another row for another time - value pair.'''
        _ , nRows = rowsFrame.grid_size()
        addRowButton.grid(row=nRows, column=0, sticky=tk.W)
        
        newRow = Frame_ChannelEditorRow(rowsFrame, interval_style=IntervalStyle.FLAT, channel_calibration = chCalibration, global_timings=self.global_timings)
        self.rows[chNum].append(newRow)
        newRow.grid(row=nRows-1, column=0, columnspan=3)
        
    def sortRows(self, sortButton, rows):
        '''The function called to sort the rows on a channel by time. Can either order in ascending or descending -
        will toggle between these functionalities on each call by toggling the .downState boolean on the button
        widget.  On the first call (i.e. before the rows have definatively been ordered) it will default to ascending.'''
        
        # Find out what order we are sorting the rows into (i.e. the opposite of the current ordering.
        # Note is sortButton.downState is None (i.e. what it is after initialisation) then newDownState is True.
        newDownState = not sortButton.downState
            
        rowsWithArgs = [(row, row.grid_info()) for row in rows]
        populatedRows = sorted( [x[1].pop('row') for x in rowsWithArgs] )
        
        def getTime(rowWithArgs, undefinedIsPositive):
            t = rowWithArgs[0].get_tV_pair()[0]
            # If t can't be converted to a float (i.e. the widget isn't fully filled in)
            # return infinity so it is ordered accordingly.
            try:
                float(t)
            except ValueError:
                t = np.inf if undefinedIsPositive else -np.inf
            return t
        
        rowsWithArgs = sorted(rowsWithArgs, key=lambda x: getTime(x, newDownState), reverse = not newDownState)
        
        for row, args in rowsWithArgs:
            row.grid_forget()
            row.grid(row=populatedRows.pop(0), **args)
        
        # Set the new state of the widget and configure the direction of the arrow accordingly.
        sortButton.downState = newDownState
        sortButton.configure(image=sortButton.down_icon if sortButton.downState else sortButton.up_icon)
        #print sortButton.state #AttributeError
        
    def createChannelDropdown(self):    
        
        channelOptions = []
        
        for chNum in self.sequence.getChannelNums():
            channelOptions.append(self.sequence_channel_labels[chNum])
        
        self.liveChannel = tk.StringVar(self)
        self.liveChannel.set(channelOptions[0]) # default value
        self.channelSelected(self.liveChannel)
        
#         dropdown = applySamplingConfiguration(tk.OptionMenu, (self, liveChannel) + tuple(channelOptions))
        dropdown = ttk.OptionMenu(self, self.liveChannel, channelOptions[0], *channelOptions, command=lambda x: self.channelSelected(self.liveChannel))
        return dropdown
    
    def channelSelected(self, liveChannel):
        self.rowFrames[self.liveChNum].grid_forget()
        self.liveChNum = next(x[0] for x in self.sequence_channel_labels.items() if x[1]==liveChannel.get())
        self.rowFrames[self.liveChNum].grid(row=1,column=1,columnspan=3, sticky=tk.N+tk.S+tk.W+tk.E)
        
    def updateChannelLabels(self, sequence_channel_labels):
        self.sequence_channel_labels = sequence_channel_labels
#         self.currentChannel get

        channelOptions = []
        for chNum in self.sequence.getChannelNums():
            channelOptions.append(self.sequence_channel_labels[chNum])
#             self.dropdown['menu'].add_command(label=channelOptions[-1], command=tk._setit(self.liveChannel, channelOptions[-1]))

        self.dropdown.set_menu(self.liveChannel if self.liveChannel in channelOptions else channelOptions[0],
                               *channelOptions)

#         if not self.liveChannel.get() in channelOptions:
#             self.liveChannel.set(channelOptions[0])

    def updateChannelCalibrations(self, configured_channel_calibrations):
        self.configured_channel_calibrations = configured_channel_calibrations
        
        for chNum in [k for k,_ in self.rows.items()]:
            self.refreshRows(chNum)
            
        
    def getChannelSequence(self, chNum):
        tV_pairs = []
        interval_styles = []
        
        for row in self.rows[chNum]:
            if row.isComplete():
                tV_pairs.append(row.get_tV_pair())
                interval_styles.append(row.get_interval_style())
            
        return tV_pairs, interval_styles

class Frame_ChannelEditorRow(tk.Frame):
    '''
    A sub-class of a Tkinter.Frame to create a row in the sequence editor and have all it's widgets/values
    persist..
    '''

    def __init__(self, parent, tV_pair=(None,None), interval_style=None, channel_calibration=None, global_timings=[], **kwargs):             
        tk.Frame.__init__(self, parent, **kwargs)

#         self.tV_pair = tV_pair
#         self.interval_style = interval_style
#         self.global_timings = global_timings
        
        self.tWid = TimeCombobox(self, tk.StringVar(), [x[0] for x in global_timings],
                                            ["{0} - {1}".format(x[0],x[1]) for x in global_timings])
        
        self.vWid = ValueEntry(self) if not channel_calibration else CalibratedValueEntry(self, *channel_calibration[1:3])
        self.intervalWid = IntervalStyleDropdown(self, tk.StringVar(), IntervalStyle.getAll())
#         self.intervalWid.configure('indicatoron'=False)
        
        # Set the initial values if a tV_pair was provided (no need to trigger an update as everything is being initialised)
        if tV_pair != (None,None):
            self.tWid.setValue(tV_pair[0], triggerUpdate=False)
            self.vWid.setValue(tV_pair[1], triggerUpdate=False)
        if interval_style != None:
            self.intervalWid.setValue(interval_style, triggerUpdate=False)
        
        self.tWid.grid(row=0,column=0)
        self.vWid.grid(row=0,column=1)
        self.intervalWid.grid(row=0,column=2, sticky=tk.N+tk.E+tk.S+tk.W)
        
        self.grid_columnconfigure(0, weight=1, pad=3, uniform='cols')
        self.grid_columnconfigure(1, weight=1, pad=3, uniform='cols')
        self.grid_columnconfigure(2, weight=1, pad=3, uniform='cols')
        
    def get_tV_pair(self):
            return (self.tWid.value, self.vWid.value)
        
    def get_interval_style(self):
            return self.intervalWid.value
        
    def isComplete(self):
        return '' not in self.get_tV_pair() and self.get_interval_style() != ''
           
class TimeCombobox(ttk.Combobox):
        
    def __init__(self, parent, variable, value_options, value_labels, **kwargs):
        ttk.Combobox.__init__(self, parent, textvariable=variable, values=value_labels, **kwargs)
        self.value_options = value_options
        self.value_labels= value_labels
        self.value = self.get()
            
        self.bind("<<ComboboxSelected>>", self.onValidate)
        self.bind("<FocusOut>", self.onValidate)
    
    def setValue(self, newValue, triggerUpdate=True):
        '''Set the stored widget value as an appropriate float and the displayed
         value as the appropriate label if one exists.'''
        # If the newValue is a value label - register the value as the corresponding value_option
        try:
            self.value = float(self.value_options[self.value_labels.index(newValue)])
        except ValueError:
            self.value = float(newValue) if newValue != '' else newValue
        # If the new value corresponds to a value_label, display the label instead of the value
        try:  
            self.set(self.value_labels[self.value_options.index(float(newValue))])
        except ValueError:
            self.set(newValue)
            
        if triggerUpdate:
            self.winfo_toplevel().updateLiveSequenceChannel()
            
    def onValidate(self, event):
        if self.doValidation(self.get()):
            self.setValue(self.get(), triggerUpdate=True)
        else:
            self.set(self.value)
        
    def doValidation(self, newValue):
        # Pre-configured options are automatically valid
        if newValue in self.value_labels or newValue.strip() == '':
            return True
        # otherwise make sure the entry can be converted to a float
        else:
            try:
                float(newValue)
                return True
            except ValueError:
                return False

class ValueEntry(ttk.Entry):
    
    def __init__(self, parent):
        '''
        Constructor
        '''
        tk.Entry.__init__(self, parent)
        
        self.bind("<FocusOut>", self.focusOut)
        self.value = self.get()
        
    def setValue(self, newValue, triggerUpdate=True):        
        self.value = newValue
        self.delete(0, tk.END)
        self.insert(0, self.value)
        
        if triggerUpdate:
            self.winfo_toplevel().updateLiveSequenceChannel()
        
    def focusOut(self, params):
        # If the entry can be converted to a float it is valid, otherwise do not update
        # the stored value
        try:
            self.setValue(float(self.get()), triggerUpdate=True)
        except ValueError:
            # A blank entry is allowed
            if self.get().strip() == '':
                self.setValue('')
            else:
                self.setValue(self.value)
                
class CalibratedValueEntry(ValueEntry):
    '''A value entry for a calibrated channel - subclasses ValueEntry but extends it
    to run user input values through a calibration function before storing/updating'''
    def __init__(self, parent, calibrationToValFunc, calibrationFromValFunc):
        self.calibrationToValFunc = calibrationToValFunc
        self.calibrationFromValFunc = calibrationFromValFunc
        ValueEntry.__init__(self, parent)
        
    def get(self):
        # If the entry is empty trying to run a calibration function is pointless
        if ValueEntry.get(self).strip() == '':
            return ''
        else:
            return self.calibrationToValFunc(float(ValueEntry.get(self)))
            
    def insert(self, index, val):
        ValueEntry.insert(self, index, self.calibrationFromValFunc(val))
    
class IntervalStyleDropdown(tk.OptionMenu):
    
    def __init__(self, parent, variable, value_options, **kwargs):
        tk.OptionMenu.__init__(self, parent, variable, *value_options, command=self.focusOut, **kwargs)
        self.variable = variable
        self.value = self.variable.get()
            
    def setValue(self, newValue, triggerUpdate=True):
        self.value = newValue
        self.variable.set(IntervalStyle.toString(newValue))
        
        if triggerUpdate:
            self.winfo_toplevel().updateLiveSequenceChannel()
    
    def focusOut(self, params):
        self.setValue(IntervalStyle.fromString(self.variable.get()), triggerUpdate=True)