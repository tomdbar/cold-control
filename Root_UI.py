#!/usr/bin/python

import Tkinter as tk
import tkMessageBox
import os
import Styles

from DAQ_UI import DAQ_UI
from Sequence_UI import Sequence_UI
from Camera_UI import Camera_UI
from Experimental_UI import Experimental_UI
from Labbook_UI import Labbook_UI
from Config import ConfigReader

class ColdControl_UI(tk.Frame):
    '''
    The ColdControl_UI is the main tkinter frame into which assorted UI's are inset.
    Each if these UI's is responsible for creating, running and closing there own
    element of experimental control.  Namely:
    
        DAQ_UI: Interfaces with the DAQ cards that control static voltages to
                setup the system and play sequences to run experiments.
                
        Sequence_UI: Allows the user to load and edit the experimental sequence.
        
        Camera_UI: Runs the inbuilt camera for monitoring the experiment.
        
        Labook_UI: Provides access to read and write into the labbooks to document
                   the experiment.
    '''

    def __init__(self, parent):
        tk.Frame.__init__(self, parent)
        
        self.config_reader = ConfigReader(os.getcwd() + '/configs/rootConfig')
        self.development_mode = self.config_reader.is_development_mode()
        
        self.master.wm_title("Cold Control Heavy")
        self.addMenu()
        self.title = tk.Label(self, text="Cold Control Heavy", font=("Helvetica", 24))

        '''Load DAQ channels and cards from the config file.  Set up the DAQ_controller with these.'''
        self.daq_config_fname = self.config_reader.get_daq_config_fname()   
        self.daq_UI = DAQ_UI(self, self.daq_config_fname, development_mode=self.development_mode)

        '''Load a sequence and start the sequence UI (though it is hidden by default)'''
        self.sequence_fname = self.config_reader.get_sequence_fname()
        self.sequence_ui = Sequence_UI(self, self.sequence_fname, self.daq_UI.daq_controller.getChannelNumberNameDict(onlyVisable=False),
                                       self.daq_UI.daq_controller.getChannelCalibrationDict(), hidden=True)
        
        
        '''Start up the camera UI.'''
        self.camera_UI = Camera_UI(self, ic_imaging_control = None)
        
        '''Set up the experimental UI with pre-configured defaults from the appropriate config files.'''
        self.absorbtion_imaging_config_fname = self.config_reader.get_absorbtion_imaging_config_fname()
        self.photon_production_config_fname = self.config_reader.get_photon_production_config_fname()
        self.experimental_UI = Experimental_UI(self,
                                               self.daq_UI,
                                               self.sequence_ui, 
                                               self.photon_production_config_fname,
                                               self.absorbtion_imaging_config_fname,
                                               ic_imaging_control=self.camera_UI.ic_ic)
        
        '''Initialise the labook UI'''
        self.labbook_UI = Labbook_UI(self)

        '''Configure the interface and place the displays for each UI appropriately.'''
        self.grid_columnconfigure(0, weight=1, pad=3, uniform='cols')
        self.grid_columnconfigure(1, weight=1, pad=3, uniform='cols')
        self.grid_columnconfigure(2, weight=1, pad=3, uniform='cols')
        self.grid_columnconfigure(3, weight=1, pad=3, uniform='cols')
        
        gridOpts = {'padx': 10, 'pady':10}
        
        self.title.grid(row=0,column=0,columnspan=3, **gridOpts)
        self.daq_UI.grid(row=1,column=1,columnspan=2, sticky=tk.N+tk.E+tk.W, **gridOpts)
        self.experimental_UI.grid(row=2,column=1,columnspan=2, sticky=tk.N)
        self.camera_UI.grid(row=1,column=0, sticky=tk.N+tk.E+tk.W)
        self.labbook_UI.grid(row=1, column=3, sticky=tk.N+tk.E+tk.W)
               
        '''Bind closing the app to a clean up method.'''
        root.protocol( "WM_DELETE_WINDOW", self.onExit)
    
    def addMenu(self):
        '''Create a pulldown menu, and add it to the menu bar'''
        menubar = tk.Menu(self.master)

        filemenu = tk.Menu(menubar, tearoff=0)
        filemenu.add_command(label="Open", command=None)
        filemenu.add_command(label="Save", command=None)
        filemenu.add_separator()
        filemenu.add_command(label="Exit", command=self.onExit)
        menubar.add_cascade(label="File", menu=filemenu)
    
        self.master.config(menu=menubar)
        
    def onExit(self):
        '''
        Called on closing ColdControl.  Confirms the exit and safely closes the various UI's.
        '''
        
        exitConfirmation = tkMessageBox.askquestion("Please confirm exit",\
                                                    "Are you sure you want to close Cold Control?\nThis will release all DAQ cards and exit the program - unsaved information will be lost?",
                                                    icon='warning')
        if exitConfirmation == 'yes':
            print 'Closing camera connections...'
            self.camera_UI.closeCameras()
            print '...all camera connections closed.'
            print 'Releasing DAQ cards...'
            if not self.development_mode: self.daq_UI.daq_controller.releaseAll()
            print '...all cards released.'
            print 'Saving labbook...'
            self.labbook_UI.write()
            print '...labbook saved'
            root.destroy()
            print 'Cold Control closed - bye!'
 
if __name__ == "__main__":
    
    root = tk.Tk()
    root.geometry("1600x800")
    Styles.configureStyles()
    ColdControl_UI(root).pack(fill="both", expand=True)
    root.mainloop()
