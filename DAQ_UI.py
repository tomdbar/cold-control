'''
Created on 25 Mar 2016

@author: tombarrett
'''
import Tkinter as tk
import ttk
import ToolTip_UI as tooltip
from PIL import Image, ImageTk
from DAQ import DAQ_controller, DAQ_channel
import copy
import tkMessageBox
import numpy as np
import math
import tkFileDialog
from Config import DaqReader, DaqWriter

class DAQ_UI(tk.Frame):

    def __init__(self, parent, config_fname, font=("Helvetica", 16), development_mode=False, **kwargs):
        tk.Frame.__init__(self, parent, **kwargs)
        
        self.parent = parent
        self.reader = DaqReader(config_fname)
        if not development_mode:
            self.daq_controller = self.reader.load_DAQ_controller()
        else:
            print "Running in development mode...\nLoading Dummy DAQ cards"
            self.daq_controller = self.reader.load_dummy_DAQ_controller()
        
        self.Frame_Channels = tk.LabelFrame(self, text="DAQ channels", font=font)
        self.Frame_DIOs = tk.LabelFrame(self, text = "Digital outputs", font=font)
        
        self.channelFrames = []
        
        for channel in self.daq_controller.getChannels(onlyVisable=True):
            self.channelFrames.append(Frame_DAQchannel(self.Frame_Channels, channel, self.daq_controller))

        # Lay out all the tk obects created
        numCols = np.ceil(len(self.channelFrames)/8.0)
 
        gridConfig = {'padx':5, 'pady':2}
 
        c = 0
        for column in [self.channelFrames[i:i + (len(self.channelFrames)/int(numCols))] 
                       for i in xrange(0, len(self.channelFrames)+1, int(np.ceil(len(self.channelFrames)/numCols)))]:
            r = 0
            for ch in column:
                ch.grid(row=r, column=c, **gridConfig)
                r+=1
            c+=1
            
        gridSize = self.Frame_Channels.grid_size()
            
        icon = Image.open("icons/config_icon.png").resize((20,20))
        icon = ImageTk.PhotoImage(icon)
        self.configButton = tk.Button(self.Frame_Channels, image=icon, command=self.daqConfigButton, height=20, width=20)
        self.configButton.image = icon # store the image as a variable in the widget to prevent garbage collection.
        self.configButton.grid(row=gridSize[1], column=gridSize[0]-1, sticky=tk.E+tk.S,  **gridConfig)
        tooltip.createToolTip(self.configButton, 'Configure DAQ channels', openDelay=2000)
         
        icon = Image.open("icons/power_icon.png").resize((20,20))
        icon = ImageTk.PhotoImage(icon)
        self.daqOutputButton = tk.Button(self.Frame_Channels, image=icon, bg='red', command=self.toggleDAQbutton, height=20, width=20)
        self.daqOutputButton.image = icon # store the image as a variable in the widget to prevent garbage collection.
        self.daqOutputButton.grid(row=gridSize[1], column=0, sticky=tk.W+tk.S,  **gridConfig)
        tooltip.createToolTip(self.configButton, 'Start/stop DAQ channels', openDelay=2000)    
            
        cols, rows = self.Frame_Channels.grid_size()
        for c in range(0,cols):
            self.Frame_Channels.grid_columnconfigure(c, weight=1, pad=3, uniform='cols')
        for r in range(0, rows):
            self.Frame_Channels.grid_rowconfigure(r, weight=0, pad=0, uniform='rows')   
           
#         self.dioFrames = []
#         r = 0   
#         for dio in sorted(self.daq_controller.getDIOs(), key=lambda dio: dio.dio_num):
#             frame = Frame_DIOline(self.Frame_DIOs, dio)
#             self.dioFrames.append(frame)
#             frame.grid(row=r, column=0, **gridConfig)
#             r+=1
#             
#         c = 0
        
        self.dioFrames = [Frame_DIOline(self.Frame_DIOs, dio) for dio in 
                          sorted(self.daq_controller.getDIOs(), key=lambda dio: dio.dio_num)]
        for row in [self.dioFrames[i:i + c+1] 
                       for i in xrange(0, len(self.dioFrames), c+1)]:
            c = 0
            for dioFrame in row:
                dioFrame.grid(row=r, column=c, **gridConfig)
                c+=1
            r+=1  
        
        cols, _ = self.Frame_DIOs.grid_size()
        for c in range(0,cols):
            self.Frame_DIOs.grid_columnconfigure(c, weight=1, pad=3, uniform='cols')
        
        self.Frame_Channels.pack(side=tk.TOP, fill=tk.X)
        self.Frame_DIOs.pack(side=tk.BOTTOM, fill=tk.X)  
            
    def updateForNewDaqConfig(self):
            for chFrame in self.channelFrames:
                chFrame.reload()
            
    def toggleDAQbutton(self):
        self.daq_controller.toggleContinuousOutput()
        if self.daq_controller.continuousOutput:
            self.daqOutputButton.configure(bg = 'green')
        else:
            self.daqOutputButton.configure(bg = 'red')
            
    def daqConfigButton(self):
        daqConfigurationUI = DAQ_configuration_UI(self, self.daq_controller)
        self.winfo_toplevel().wait_window(daqConfigurationUI.top)
        self.daq_controller = daqConfigurationUI.controller
        if daqConfigurationUI.triggerDAQUpdates:
            self.updateForNewDaqConfig()
            '''TODO : NOT WORKING'''
            if self.daq_controller.continuousOutput:
                self.daq_controller.writeChannelValues()

class Frame_DAQchannel(tk.Frame):
    '''
    A sub-class of a Tkinter.Frame to create entry widgets and decorations for setting DAQ channels.
    '''

    def __init__(self, parent, DAQ_channel, DAQ_controller):
        '''
        Constructor
        '''
        tk.Frame.__init__(self, parent)
        
        self.DAQchannel = DAQ_channel
        self.DAQcontroller = DAQ_controller 
        self.frame = tk.Frame(self)
        
        self.addEntry()
                 
        self.frame.pack(fill=tk.X, padx=5, pady=5)
        
        self.tooltip = tooltip.createToolTip(self, self.DAQchannel.getHelpText(),openDelay=2000)
    
    def addEntry(self):
        self.entry = Entry_DAQchannel(self.frame, self.DAQcontroller, self.DAQchannel)
        self.lab = tk.Label(self.frame, width=20, text=self.DAQchannel.chName, anchor='w')
        self.entry.pack(side=tk.RIGHT, fill=tk.X)
        self.lab.pack(side=tk.LEFT)
    
    def reload(self):
        self.entry.destroy()
        self.lab.destroy()
        self.addEntry()
        self.tooltip.text = self.DAQchannel.getHelpText()

class Frame_DIOline(tk.Frame):
    '''
    A sub-class of a Tkinter.Frame to create entry widgets and decorations for setting Digital IO lines.
    '''

    def __init__(self, parent, DAQ_dio):
        '''
        Constructor
        '''
        tk.Frame.__init__(self, parent)
        
        self.daq_dio = DAQ_dio
        
        self.lab = tk.Label(self, width=22, text=self.daq_dio.dio_name, anchor='w')
    
        self.on_icon = ImageTk.PhotoImage(Image.open("icons/toggle_on_icon.png").resize((25,20)))
        self.off_icon = ImageTk.PhotoImage(Image.open("icons/toggle_off_icon.png").resize((25,20)))

        self.button = tk.Button(self, command=self.toggleButton, height=20, width=30)
        self.daq_dio.write(not self.daq_dio.enabled_state)
        self.update_button_icon(self.daq_dio.read())
        
        self.button.pack(side=tk.RIGHT)
        self.lab.pack(side=tk.LEFT, fill=tk.X)
                         
        self.tooltip = tooltip.createToolTip(self, self.daq_dio.get_help_text(), openDelay=2000)
        
    def toggleButton(self):
        new_state = self.daq_dio.toggle_state(return_state=True)
        self.update_button_icon(new_state)
            
    def update_button_icon(self, new_state):
        if new_state==self.daq_dio.enabled_state:
            self.button.configure(image=self.on_icon, bg = 'green', relief=tk.SUNKEN)
        else:
            self.button.configure(image=self.off_icon, bg = 'red', relief=tk.RAISED)
            
            
class Entry_DAQchannel(tk.Entry):
    '''
    A sub-class of a Tkinter.Entry to create entry widgets for setting DAQ channels.
    '''

    def __init__(self, parent, DAQ_controller, DAQchannel):
        '''
        Constructor
        '''
        tk.Entry.__init__(self, parent)
        
        self.controller = DAQ_controller
        self.channel = DAQchannel
        
        self.chLimits = self.channel.chLimits if not self.channel.isCalibrated \
                        else sorted(self.channel.calibrationFromVFunc(self.channel.chLimits))
        self.defaultValue = self.channel.defaultValue if not self.channel.isCalibrated \
                        else self.channel.calibrationFromVFunc(self.channel.defaultValue)
        if not self.chLimits[0] <= self.defaultValue <= self.chLimits[1] :
            print 'WARNING: Default value for DAQ channel of', self.defaultValue, 'is not within set limits of', self.chLimits, \
                   '\nChannel will be set to mid-range of limits'
            self.defaultValue = sum(self.chLimits)/2
        self.chValue = float(self.defaultValue)
        
        self.widget = tk.Entry(self,justify=tk.CENTER)
        
        self.widget.insert(0, self.chValue)
        self.widget.bind("<FocusOut>", self.focusOut)
        self.widget.bind("<Return>",self.focusOut)
        self.widget.bind("<Up>", self.arrowKey)
        self.widget.bind("<Down>", self.arrowKey)
        self.widget.pack()
        
    def flash(self, col, length=500):
        '''
        Flashes the background of the entry widget a colour (col) for a length of time (length) in ms.
        Usually used during validation to indicate whether the new value entered is valid.
        '''
        self.widget.config(bg=col)
        self.widget.after(length,lambda: self.widget.configure(bg='white'))
        
    def arrowKey(self, event):
        '''
        Called when the Up or Down arrow key is pressed.
        Increments the value on the DAQ channel accordingly.
        '''
        
#       Count the number of places between the decimal place in the float and the cursor index
#       to calculate the order of the incrementation, i.e 0.01,0.1,1,10,...ect
        decimalIndex = self.widget.get().index('.')
        cursorIndex = self.widget.index(tk.INSERT)
        incrementOrder = decimalIndex - cursorIndex
        
        # If the increment order is -1 the cursor is on the decimal point so do nothing.
        if incrementOrder != -1:
            if incrementOrder < -1:
                incrementOrder += 1
            # Caculate the amount to change the value by.  The sign is determined by the key pressed.
            iterator = math.pow(10, incrementOrder) if event.keysym == "Up" \
                       else -1*math.pow(10, incrementOrder)
            
            currentValue = self.widget.get()
            # We have to count the number of decimal points of the number and found the iterated
            # value back to this level due to Python's imprecision with floats.
            ndp = currentValue[::-1].find('.')
            
            self.widget.delete(0, tk.END)
            self.widget.insert(0, round(float(currentValue) + iterator, ndp))
            self.focusOut(event)
            self.widget.icursor(cursorIndex)
  
    def focusOut(self, params):
        flashCol = None
        try:
            if self.chLimits[0] <= float(self.widget.get()) <= self.chLimits[1]:
                if self.chValue != float(self.widget.get()):
                    self.chValue = float(self.widget.get())
                    flashCol = 'green'
            else:
                flashCol = 'red'
        except ValueError:
            flashCol = 'red'
        finally:
            self.widget.delete(0, tk.END)
            self.widget.insert(0, self.chValue)
         
        if flashCol: self.flash(flashCol) 
        # Update channel value (after converting it to a voltage if the channel is calibrated)
        self.controller.updateChannelValue(self.channel.chNum,
                                           self.chValue if not self.channel.isCalibrated else self.channel.calibrationToVFunc(self.chValue)) 
            
class DAQ_configuration_UI(object):
        
    def __init__(self, parent, DAQ_controller):
        '''This object creates a copy of the DAQ controller as backup and then a top level window to edit the origional.
        On exit from the top level window the changes are either kept or we revert to the original controller.  The
        edited controller must then be fetched from this object by code that wishes to use it.'''
        self.controllerOrig = copy.deepcopy(DAQ_controller)
        self.controller = DAQ_controller
        # A flag for whether the rest of the UI needs to update due to changes made.
        self.triggerDAQUpdates = False
        
        self.top = tk.Toplevel(parent)
        self.top.wm_title("DAQ configuration")
        self.top.columnconfigure(0, weight=1)
        
        self.configureForCurrentController()
        
        # Changes the close button to call my close function.
        self.top.protocol('WM_DELETE_WINDOW', self.closeWindow);
        
        self.top.grab_set()
        
    def configureForCurrentController(self):
        '''This method creates, configures and draws all the elements of the UI that are dependent on the currently loaded DAQ controller
        Primarily it is just an extension of the __init__ for the class however this section of code needs to be run to re-configure the 
        UI for a new DAQ config if one is loaded.'''
        # Destroy any widgets that have already been created (i.e. clear the frame before re-drawing)
        for wid in self.top.winfo_children():
            wid.destroy()
            
        frameConfig = {'font':("Helvetica", 16)}
        labelConfig = {'font':("Helvetica", 10, "bold"), 'padx':5}
        
        self.cardsFrame = self.getCardsFrame(frameConfig, labelConfig)
        self.channelsFrame, self.channels = self.getChannelsFrame(frameConfig, labelConfig)
        self.buttonsFrame = self.getButtonsFrame()
        
        self.cardsFrame.grid(row=0,column=0,sticky=tk.N+tk.E+tk.S+tk.W)
        self.channelsFrame.grid(row=1,column=0,sticky=tk.N+tk.E+tk.S+tk.W)
        self.buttonsFrame.grid(row=2,column=0, sticky=tk.E)
        
        self.top.grid_columnconfigure(0, weight=1, pad=5)
        
    def getCardsFrame(self, frameConfig={}, labelConfig={}):
        cardFrame = tk.LabelFrame(self.top, text='DAQ cards', **frameConfig)
        
        tk.Label(cardFrame, text='Card Number', **labelConfig).grid(row=0, column=0)
        tk.Label(cardFrame, text='Master', **labelConfig).grid(row=0, column=1)
        tk.Label(cardFrame, text='Channels', **labelConfig).grid(row=0, column=2)
        
        for card in [self.controller.master] + self.controller.slaves:
            r = cardFrame.grid_size()[1]
            tk.Label(cardFrame, text=card.card).grid(row=r, column=0)
            
            # It's worth noting these checkbuttons are currently not coded to do anything.
            # They display which card is the master and offer the possibility of changing
            # this if I decided that's relevant at some point...
            var = tk.IntVar()
            checkbutton = tk.Checkbutton(cardFrame, variable=var)
            checkbutton.configure(command = lambda wid=checkbutton, num=card.card, var=var: self.masterSelected(wid, num, var))
            checkbutton.grid(row = r, column=1)
            # Select the checkbutton for the first card row darwn (i.e. the master)
            if r==1:
                checkbutton.select()
            checkbutton.configure(state=tk.DISABLED)
            
            tk.Label(cardFrame, text=str([ch.chNum for ch in card.channels]), font=("Helvetica", 10)).grid(row = r, column=2)
    
#         cardFrame.grid_configure(ipadx=20)
        
        return cardFrame
        
    def getChannelsFrame(self, frameConfig={}, labelConfig={}):
        channelsFrame = tk.LabelFrame(self.top, text='Channels', **frameConfig)
                
        controllerChannels = self.controller.getChannels()
                
        channelOptions = [self.getChannelDropdownLabel(ch.chNum, ch.chName) for ch in sorted(controllerChannels, key=lambda x: x.chNum)]
        self.dropdownVar = tk.StringVar()
        self.dropdownVar.set(channelOptions[0])
        self.dropdown = tk.OptionMenu(channelsFrame, self.dropdownVar, *channelOptions, command=lambda var=self.dropdownVar: self.channelSelected(var))

        channels={}
        chLabGridOpts = {'sticky':tk.W}
        chWidGridOpts = {'sticky':tk.E+tk.W}

        for ch in controllerChannels:
            frame = tk.Frame(channelsFrame)
            
            channels[self.getChannelDropdownLabel(ch.chNum, ch.chName)] = frame
            
            r=0
            
            tk.Label(frame, text='Channel number:', **labelConfig).grid(row=r, column=0, **chLabGridOpts)
            chNumWid = tk.Label(frame, text=ch.chNum).grid(row=r, column=1, **chWidGridOpts)
            r+=1
            
            tk.Label(frame, text='Channel name:', **labelConfig).grid(row=r, column=0, **chLabGridOpts)
            chNameWid = e = tk.Entry(frame)
            e.insert(0, ch.chName)
            e.grid(row=r, column=1, **chWidGridOpts)
            r+=1
            
            tk.Label(frame, text='Lower limit (V):', **labelConfig).grid(row=r, column=0, **chLabGridOpts)
            chLowLimWid = e = tk.Entry(frame)
            e.insert(0, ch.chLimits[0])
            e.grid(row=r, column=1, **chWidGridOpts)
            r+=1
            
            tk.Label(frame, text='Upper limit (V):', **labelConfig).grid(row=r, column=0, **chLabGridOpts)
            chUppLimWid = e = tk.Entry(frame)
            e.insert(0, ch.chLimits[1])
            e.grid(row=r, column=1, **chWidGridOpts)
            r+=1
            
            chDefValLab = tk.Label(frame, text='Default value ({0}):'.format('V' if not ch.isCalibrated else ch.calibrationUnits), **labelConfig)
            chDefValLab.grid(row=r, column=0, **chLabGridOpts)
            chDefValWid = e = tk.Entry(frame)
            e.insert(0, ch.defaultValue if not ch.isCalibrated else ch.calibrationFromVFunc(ch.defaultValue))
            e.grid(row=r, column=1, **chWidGridOpts)
            r+=1
            
            tk.Label(frame, text='UI visable:', **labelConfig).grid(row=r, column=0, **chLabGridOpts)
            cbVar = tk.IntVar()
            c = tk.Checkbutton(frame, variable=cbVar, command=lambda ch=ch, var=cbVar: self.chUIVisUpdated(ch, var))
            if ch.isUIVisable:
                c.select()
            c.grid(row=r, column=1, **chWidGridOpts)
            
            tk.Label(frame, text='Calibration file:', **labelConfig).grid(row=r, column=0, **chLabGridOpts)
            
            calibFrame = tk.Frame(frame)
            
            calibFnameWid = e = tk.Entry(calibFrame)
            e.insert(0, ch.calibrationFname if ch.isCalibrated else 'None')
            e.pack(side=tk.LEFT)
            
            icon = Image.open("icons/delete_icon.png").resize((20,20))
            icon = ImageTk.PhotoImage(icon)
            removeCalibButton = tk.Button(calibFrame, image=icon,
                                    command = lambda ch=ch, wid=calibFnameWid, defValLab=chDefValLab, defValWid=chDefValWid : self.removeCalibFileButton(ch, wid, defValLab, defValWid),
                                    height=16, width=16)
            removeCalibButton.image = icon # store the image as a variable in the widget to prevent garbage collection.
            removeCalibButton.pack(side=tk.RIGHT)
            
            icon = Image.open("icons/folder_icon.png").resize((20,20))
            icon = ImageTk.PhotoImage(icon)
            addCalibButton = tk.Button(calibFrame, image=icon,
                                    command = lambda ch=ch, wid=calibFnameWid, defValLab=chDefValLab, defValWid=chDefValWid : self.selectCalibFileButton(ch, wid, defValLab, defValWid),
                                    height=16, width=16)
            addCalibButton.image = icon # store the image as a variable in the widget to prevent garbage collection.
            addCalibButton.pack(side=tk.RIGHT)

            calibFrame.grid(row=r, column=1, **chWidGridOpts)
            
            chNameWid.bind("<FocusOut>", lambda event, ch=ch, wid=chNameWid: self.chNameUpdated(event, ch, wid))
            chNameWid.bind("<Return>", lambda event, ch=ch, wid=chNameWid: self.chNameUpdated(event, ch, wid))
            
            chLowLimWid.bind("<FocusOut>", lambda event, ch=ch, limWids=[chLowLimWid,chUppLimWid], dVwid=chDefValWid: self.chLimitsUpdated(event, ch, limWids, dVwid))
            chLowLimWid.bind("<Return>", lambda event, ch=ch, limWids=[chLowLimWid,chUppLimWid], dVwid=chDefValWid: self.chLimitsUpdated(event, ch, limWids, dVwid))
            
            chUppLimWid.bind("<FocusOut>", lambda event, ch=ch, limWids=[chLowLimWid,chUppLimWid], dVwid=chDefValWid: self.chLimitsUpdated(event, ch, limWids, dVwid))
            chUppLimWid.bind("<Return>", lambda event, ch=ch, limWids=[chLowLimWid,chUppLimWid], dVwid=chDefValWid: self.chLimitsUpdated(event, ch, limWids, dVwid))

            chDefValWid.bind("<FocusOut>", lambda event, ch=ch, wid=chDefValWid: self.chDefValUpdated(event, ch, wid))
            chDefValWid.bind("<Return>", lambda event, ch=ch, wid=chDefValWid: self.chDefValUpdated(event, ch, wid))

            calibFnameWid.bind("<FocusOut>", lambda event, ch=ch, wid=calibFnameWid, defValLab=chDefValLab, defValWid=chDefValWid: self.chCalibFileUpdated(event, ch, wid, defValLab, defValWid))
            calibFnameWid.bind("<Return>", lambda event, ch=ch, wid=calibFnameWid, defValLab=chDefValLab, defValWid=chDefValWid: self.chCalibFileUpdated(event, ch, wid, defValLab, defValWid))
        
            frame.grid_columnconfigure(0, weight=1)
            frame.grid_columnconfigure(1, weight=1, pad=5)
            frame.grid(row=0,column=1,sticky=tk.N+tk.W+tk.E)
            frame.grid_remove()
        
        self.dropdown.grid(row=0,column=0,sticky=tk.N+tk.W)
        
        channels[self.getChannelDropdownLabel(controllerChannels[0].chNum, controllerChannels[0].chName)].grid()
        
        channelsFrame.grid_columnconfigure(0, weight=0)
        channelsFrame.grid_columnconfigure(1, weight=1)
        
        return channelsFrame, channels

    def getButtonsFrame(self):
        buttonsFrame = tk.Frame(self.top)
        applyButton = tk.Button(buttonsFrame, text='Apply', command=self.apply, width=15, bg='green')
        cancelButton = tk.Button(buttonsFrame, text='Cancel', command=self.cancel, width=15, bg='red')
        applyButton.grid(row=0, column=1, sticky=tk.E)
        cancelButton.grid(row=1, column=1, sticky=tk.E)

        return buttonsFrame

    def _updateChannelDropdown(self, options, initialVal=None):
        '''reset the values in the option menu'''
        menu = self.dropdown["menu"]
        menu.delete(0, "end")
        callback=lambda var=self.dropdownVar: self.channelSelected(var)
        for v in options:
            menu.add_command(label=v, 
                             command=tk._setit(self.dropdownVar, v, callback))
        if initialVal is not None:
            self.dropdownVar.set(initialVal)
            
    def masterSelected(self, widget, cardNumber, state):
        '''Function called when a 'master' checkbox is selected/deselected.
            widget - the checkbox widget clicked on
            cardNumber - the card number assosiated with the widget
            state - 0/1, checkbox is now deselected/selected'''
        print widget, cardNumber, state.get()

    def channelSelected(self, channelLabel):
        for _,wid in self.channels.items():
            wid.grid_remove()                 
        self.channels[channelLabel].grid()
    
    def getChannelDropdownLabel(self, chNum, chName):
        return "Ch {0}: {1}".format(str(chNum), chName)
                                
    def chNameUpdated(self, event, ch, wid):
        '''Updates the channel dictionary and the channel dropdown with the new channel name'''
        oldChLabel = self.getChannelDropdownLabel(ch.chNum, ch.chName) 
        ch.chName = wid.get()
        newChLabel = self.getChannelDropdownLabel(ch.chNum, ch.chName) 
        self.channels[newChLabel]=self.channels.pop(oldChLabel)
        self._updateChannelDropdown([self.getChannelDropdownLabel(ch.chNum, ch.chName) for ch in sorted(self.controller.getChannels(), key=lambda x: x.chNum)],
                                     newChLabel)
        self.channelSelected(newChLabel)
        self._flash(wid,'green')
        
    def chLimitsUpdated(self, event, ch, limWids, dVwid):
        oldLimits = ch.chLimits
        valid = True
        flash_col='green'
        # Check the new limits are valid (can be floats and min <= max)
        try:
            newLimits = map(lambda x: float(x.get()), limWids)
        except ValueError:
            valid = False
            flash_col='red'
        if valid:
            if newLimits[0] >= newLimits[1]:
                valid = False
                flash_col='red'
        # If valid update channel
        if valid:
            ch.chLimits = newLimits
            if not newLimits[0] <= ch.defaultValue <= newLimits[1]:
                dVwid.delete(0, tk.END)
                dVwid.insert(0, np.clip(ch.defaultValue, *newLimits))
                self.chDefValUpdated(None, ch, dVwid)
        # revert changes
        else:
            for i in [0,1]:
                limWids[i].delete(0,tk.END)
                limWids[i].insert(0,oldLimits[i])
        for wid in limWids:
            self._flash(wid, flash_col)
        
    def chDefValUpdated(self, event, ch, wid):
        oldDefVal = ch.defaultValue
        valid = True
        flash_col='green'
        try:
            # Get the new value - it must be in V to be stored in the DAQ Channel so perform the conversion
            # if the channel is calibrated.
            newDefVal = float(wid.get()) if not ch.isCalibrated else ch.calibrationToVFunc(float(wid.get()))
            if not ch.chLimits[0] <= newDefVal <= ch.chLimits[1]:
                valid = False
                flash_col='red'
        except ValueError:
            valid = False
            flash_col='red'
            
        if valid:
            ch.defaultValue = newDefVal
            # if the channel is calibrated then the new value may have been clipped to the calibrated limits
            # so update the widget to show this
            if ch.isCalibrated:
                wid.delete(0, tk.END)
                wid.insert(0, ch.calibrationFromVFunc(newDefVal)) 
        else:
            wid.delete(0, tk.END)
            if ch.isCalibrated:
                wid.delete(0, tk.END)
                wid.insert(0, ch.calibrationFromVFunc(oldDefVal))
            else:
                wid.insert(0, oldDefVal)
        self._flash(wid, flash_col)
    
    def chUIVisUpdated(self, ch, var):
        ch.isUIVisable = var.get()
        
    def chCalibFileUpdated(self, event, ch, wid, defValLab, defValWid):
        # Get the old value of the widget to restore it if the calibration fails.
        oldWidValue = ch.calibrationFname if ch.isCalibrated else 'None'
        try:
            ch.calibrate(wid.get())
            defValLab.configure(text = 'Default value ({0}):'.format(ch.calibrationUnits))
            defValWid.delete(0, tk.END)
            defValWid.insert(0, ch.calibrationFromVFunc(ch.defaultValue))
            flash_col='green'
        except IOError:
            # If the calibration failed as a bad file was selected, reset the widget to it's previous state
            wid.delete(0, tk.END)
            wid.insert(0, oldWidValue)
            flash_col='red'
        self._flash(wid, flash_col)
            
    def _flash(self, wid, flash_col, delay=500):
        wid.config(bg=flash_col)
        wid.after(delay, lambda: wid.configure(bg='white'))
         
    def selectCalibFileButton(self, ch, wid, defValLab, defValWid):
        fname = tkFileDialog.askopenfilename(master=self.top, title="Select a calibration file", initialdir="")
        # Seems to be a tkinter bug that the parent is shown on top after a file dialog - so let's fix that
        self.top.lift()
    
        # Check for empty filenames (i.e. when the user cancelled the action)
        if fname != '':
            wid.delete(0, tk.END)
            wid.insert(0, fname)
            self.chCalibFileUpdated(None, ch, wid, defValLab, defValWid)
     
    def removeCalibFileButton(self, ch, wid, defValLab, defValWid):
        '''Remove the calibration from the channel and re-set the relevant UI labels and entries'''
        ch.removeCalibration()
        wid.delete(0, tk.END)
        wid.insert(0, 'None')
        defValLab.configure(text = 'Default value (V):')
        defValWid.delete(0, tk.END)
        defValWid.insert(0, ch.defaultValue)
        
    def apply(self):
        self.triggerDAQUpdates = True
        self.closeWindow(False)
        
    def cancel(self):
        self.revertChanges()
        self.triggerDAQUpdates = False
        self.closeWindow(False)
        
#     def save(self):
#         fname = tkFileDialog.asksaveasfilename(title="Save a DAQ configuration")
#         # Check for empyy filenames (i.e. when the user cancelled the acion)
#         if fname!= '':
#             writer = DaqWriter(fname)
#             writer.save(self.controller.master, *self.controller.slaves)
#         
#         # Seems to be a tkinter bug that the parent is shown on top after a file dialog - so let's fix that
#         self.top.lift()
#     
#     def load(self):
#         fname = tkFileDialog.askopenfilename(master=self, title="Load a DAQ configuration", initialdir="")
#         
#         # Check for empty filenames (i.e. when the user cancelled the action)
#         if fname!= '':
#             self.controller.releaseAll()
#             self.controller = DaqReader(fname).load_DAQ_controller()
#             
#             self.configureForCurrentController()
#             
#         # Seems to be a tkinter bug that the parent is shown on top after a file dialog - so let's fix that
#         self.top.lift()
    
    def revertChanges(self):
        self.controller = self.controllerOrig
    
    def closeWindow(self, askToApplyChanges=True):
        """Close the window."""
        if askToApplyChanges:
            applyOnExit = tkMessageBox.askyesnocancel('Confirm exit',\
                                                      'Would you like to apply your changes before you exit?',
                                                      parent = self.top)
            if applyOnExit == None:
                    return
            elif not applyOnExit:
                self.revertChanges()
        self.top.grab_release()
        self.top.destroy()
