'''
Created on 25 Mar 2016

@author: tombarrett
'''
import Tkinter as tk
from PIL import Image,ImageTk
import cv2
from instruments.pyicic.IC_ImagingControl import IC_ImagingControl
import tkMessageBox
import numpy as np

class Camera_UI(tk.LabelFrame):
    '''
    Allows the user to display a live stream from a camera.
    '''

    def __init__(self, parent, ic_imaging_control=None, video_dims = (320,240), text="Camera", font=("Helvetica", 16), **kwargs):
        tk.LabelFrame.__init__(self, parent, text=text, font=font, **kwargs)
        
        self.parent=parent
        
        if ic_imaging_control:
            self.ic_ic = ic_imaging_control
            if not self.ic_ic.initialised:
                self.ic_ic.init_library()
        else:
            self.ic_ic = IC_ImagingControl()
            self.ic_ic.init_library()
        
        # Calculate the aspect ratio of the requested video dimensions so we keep this when re-sizing the picture.
        self.video_dims = video_dims
        self.video_aspect_ratio = float(self.video_dims[0]) / float(self.video_dims[1])
                
        # Select the first available camera - TODO make camera dropdown
        self.cam_names = self.ic_ic.get_unique_device_names()
        self.cam = self.ic_ic.get_device(self.cam_names[0])
        self.is_live = False
        
        # Make a frame for the camera image.  By disabling pack_propagate and manually setting the height and width
        # we make the height and width in units of pixels - useful when dealing with images!
        self.video_frame = tk.Frame(self, height = self.video_dims[1], width = self.video_dims[0])
        self.video_frame.pack_propagate(False)
        
        self.img = tk.Label(self.video_frame)
        self.img.pack(fill=tk.BOTH, expand=1)
        
        self.button_frame = tk.Frame(self)
        self.startCameraButton = tk.Button(self.button_frame, text="Start camera", command=self.startCamera).pack(side=tk.LEFT)
        self.stopCameraButton = tk.Button(self.button_frame, text="Stop camera", command=self.stopCamera).pack(side=tk.RIGHT)
        icon = ImageTk.PhotoImage(Image.open("icons/config_icon.png").resize((30,30)))
        self.configure_camera_button = tk.Button(self.button_frame, image=icon, width=25, height=25, command=self.cameraConfigButton)
        self.configure_camera_button.pack(side=tk.RIGHT)
        self.configure_camera_button.image = icon # prevent garbage collection
        
        self.video_frame.grid(row=0,column=0, sticky=tk.N+tk.S+tk.E+tk.W)
        self.button_frame.grid(row=1, column=0)
        
        # As we don't automatically start streaming display a camera icon.
        self.updateDisplayedFrame(Image.open("icons/camera_icon.png").resize(self.video_dims))
        
        # This binding is trggered when the UI resizes and changes the video dimensions accordingly.
        self.bind('<Configure>', self._resize_image)
                
    def _resize_image(self, event):
        '''
        There is nothing below the camera UI in the root UI so e only concern ourselves with making the imagea as wide as possible
        and then correcting the height of the image to keep out pre-calcualted aspect ratio.
        ''' 
        new_width = event.width - 5 # Note the -5 is to account for the default padding when the video frame is packed into the Camera LabelFrame
        
        self.video_dims = (new_width, int(new_width/self.video_aspect_ratio))
        self.video_frame.configure(height = self.video_dims[1], width = self.video_dims[0])
        self.updateDisplayedFrame(self.img.pil_image_cache)
                
    def startCamera(self):
        '''
        Set up the camera, start streaming and start updating the displayed frame.
        ''' 
        self.prepareCamera(self.cam)
        
        if not self.cam.callback_registered:
                self.cam.register_frame_ready_callback()
        self.cam.start_live(show_display=False)
        self.is_live = True
                  
        self.takeFrame(1000)
        
    def prepareCamera(self, cam):
        '''
        Gets the camera ready to stream live.
        TODO - move these values into the UI and away from being hardcoded.
        '''
        self.cam.open()
        
        # change camera properties
        self.cam.gain.auto = True                    # enable auto gain
        self.cam.exposure.value = 60 # disables auto exposure and sets value to half of range
        
        # change camera settings
        formats = self.cam.list_video_formats()
        self.cam.set_video_format(formats[0])        # use first available video format
        self.cam.enable_continuous_mode(True)        # image in continuous mode
        
        self.cam.set_frame_rate(30.00)
        
        # Store frames per ms to stop us having to constantly poll the camera for it.
        self.cam_fpms = int(10.**3 / self.cam.get_frame_rate())
        
    def stopCamera(self):
        self.is_live = False
        self.after(self.cam_fpms, self.cam.stop_live())
        
    def takeFrame(self, cam_frame_timeout):        
        '''
        Wait until the camera has a fresh frame, poll for it, convert it to greyscale, rotate it to the correct orientation and display it
        '''
        self.cam.wait_til_frame_ready(cam_frame_timeout)    
        self.cam.reset_frame_ready()
        data = self.cam.get_image_data()
        img = Image.frombuffer('RGB', (data[1], data[2]), data[0], 'raw', 'RGB',0,1).convert('L').transpose(Image.FLIP_TOP_BOTTOM)
#       
        self.updateDisplayedFrame(img)
        
        if self.is_live:
            self.img.after(self.cam_fpms, lambda: self.takeFrame(1000))
            
    def updateDisplayedFrame(self, image):
        '''
        Resize the image to the current video dimensions and update the display.
        '''
        x = ImageTk.PhotoImage(image.resize(self.video_dims))
        self.img.configure(image=x)
        self.img._image_cache = x  # avoid garbage collection
        self.img.pil_image_cache = image # store the PIL image so we can resize it if the frame dimensions are changed
        self.update() 
            
    def cameraConfigButton(self):
        config_UI = Camera_configuration_UI(self, self.cam)
        self.winfo_toplevel().wait_window(config_UI)
        self.winfo_toplevel().focus_set()
            
    def closeCameras(self):
        '''
        Closes any live cameras.
        '''
        if self.is_live:
            self.cam.stop_live()
            self.cam.close()
        self.ic_ic.close_library()

class Camera_configuration_UI(tk.Toplevel):

    def __init__(self, parent, camera, **kwargs):
        '''This object allows the user to edit the properties of the currently selected camera.'''
        tk.Toplevel.__init__(self, parent, **kwargs)
        
        self.cam = camera
        
        if self.cam.is_open():
            self.return_cam_open = True
        else:
            self.return_cam_open = False
            self.cam.open()
        
        self.properties = []
        self.init_vals_info = []
        for prop in self.cam.list_property_names():
                cam_prop = getattr(self.cam, prop)
                if cam_prop.available:
                    self.properties.append((prop, cam_prop))
                    self.init_vals_info.append((cam_prop, cam_prop.auto if cam_prop.auto_available else None, cam_prop.value))
            
        r = 0
        for info in self.properties:
            label, entry, slider, auto_check = self.__get_property_wids(*info, inverse=True if info[0]=='exposure' else False)
            
            label.grid(row=r,column=0)
            entry.grid(row=r,column=1)
            slider.grid(row=r,column=2, sticky=tk.E+tk.W)
            if auto_check: auto_check.grid(row=r,column=3)
            
            r+=1
             
        self.grid_columnconfigure(0, weight=0)
        self.grid_columnconfigure(1, weight=1, pad=5)
        self.grid_columnconfigure(2, weight=4, pad=5)
        self.grid_columnconfigure(2, weight=0, pad=5)
        
        buttons_frame = self.__get_buttons_frame()
        buttons_frame.grid(row=r,column=0, columnspan=4)
        
        self.wm_title('Camera configuration')
        self.grab_set()     
        # Changes the close button to call my close function.
        self.protocol('WM_DELETE_WINDOW', self.closeWindow);
        
    def __get_property_wids(self, label, property, inverse = False):
        '''
        Build all the widget enteries for this UI.
        '''
        def scale_focus_out(value, property, entry_wid, inverse):
            # Slider doesn't not allow invalid values to be set.
            property.value = int(value)
            # Update entry widget
            entry_wid.delete(0, tk.END)
            if inverse:
                entry_wid.insert(0, '1/{0}'.format(property.value))
            else:
                entry_wid.insert(0, property.value)
            
        def entry_focus_out(property, entry_wid, slider_wid, inverse):
            try:
                flash_col = 'green'
                if inverse:
                    parsed_entered_val = entry_wid.get().split('/')
                    if len(parsed_entered_val) == 1:
                        # A fraction wasn't entered so the entered exposure is 1/x where x is the entered exposure time.
                        entered_val = 1/float(parsed_entered_val[0])
                    elif len(parsed_entered_val) == 2:
                        # A fraction was entred so take it's reciprocal.
                        entered_val = float(parsed_entered_val[1])/float(parsed_entered_val[0])
                    else:
                        # Can't parse this into a number, raise an exception.
                        raise ValueError
                else:
                    entered_val = float(entry_wid.get())
                
                new_val = np.clip(entered_val,*sorted(property.range))
                if new_val != entered_val:
                    flash_col = 'yellow'
                 
                # If we reach this point, everything was sucessful so update the stored values.
                property.value = int(new_val)
            except ValueError:
                flash_col = 'red'
             
            # Update the display and flash the widget accordingly.
            entry_wid.delete(0, tk.END)
            if inverse:
                entry_wid.insert(0, '1/{0}'.format(property.value))
            else:
                entry_wid.insert(0, property.value)
            slider_wid.set(property.value)
             
            entry_wid.config(bg=flash_col)
            entry_wid.after(500, lambda: entry_wid.configure(bg='white'))
            
        label = tk.Label(self, text=label)
        entry = tk.Entry(self)
        slider =tk.Scale(self, from_=property.range[0], to=property.range[1],
                                command = lambda value, f=scale_focus_out, prop=property, e_wid=entry, inv=inverse: f(value, prop, e_wid, inv),
                                orient=tk.HORIZONTAL, showvalue=0, width=15)   
        
        if property.auto_available:
            
            def checkbutton_focus_out(check_var, property, entry_wid, slider_wid):
                auto_enabled = bool(var.get())
                property.auto = auto_enabled
                
                def update_wids(property, entry_wid, slider_wid):
                    value = property.value
                    
                # Update the state and values of the entry and slider widgets depending on if auto is enabled or disabled.
                user_wid_state = tk.DISABLED if auto_enabled else tk.NORMAL
                if auto_enabled:
                    user_wid_state = tk.DISABLED
                else:
                    user_wid_state = tk.NORMAL
                    # Wait half a second then update the displayed values on the entry and slider to those which have been auto-calibrated
                    update_wids(property, entry_wid, slider_wid)
                entry_wid.configure(state=user_wid_state)
                slider_wid.configure(state=user_wid_state)
            
            var = tk.IntVar()
            checkbutton = tk.Checkbutton(self, variable=var)
            checkbutton.configure(command = lambda f=checkbutton_focus_out, var=var, prop=property, e_wid=entry, s_wid=slider:
                                            f(var, prop, e_wid, s_wid))
            var.set(property.auto)
            
        else:
            checkbutton = None
        
        entry.bind("<FocusOut>", lambda event, f=entry_focus_out, prop=property, s_wid=slider, inv=inverse: f(prop, event.widget, s_wid, inv))
        entry.bind("<Return>",   lambda event, f=entry_focus_out, prop=property, s_wid=slider, inv=inverse: f(prop, event.widget, s_wid, inv))  
          
        entry.insert(0, property.value)
        slider.set(property.value)
        
#         label.grid(row=0,column=0)
#         entry.grid(row=0,column=1)
#         slider.grid(row=0,column=2, sticky=tk.E+tk.W)
#         if checkbutton: checkbutton.grid(row=0,column=3)
#         
#         self.grid_columnconfigure(0, weight=0)
#         self.grid_columnconfigure(1, weight=1, pad=5)
#         self.grid_columnconfigure(2, weight=2, pad=5)

        return label, entry, slider, checkbutton
        
    def __get_buttons_frame(self):
        frame = tk.Frame(self)
        
        apply_button = tk.Button(frame, text='Apply', command=lambda: self.closeWindow(False), width=15, bg='green')
        cancel_button = tk.Button(frame, text='Cancel', command=self.cancel, width=15, bg='red')
        apply_button.grid(row=0, column=0, sticky=tk.E)
        cancel_button.grid(row=1, column=0, sticky=tk.E)
        
        return frame
        
    def cancel(self):
        '''
        Revert changes and close the window.
        '''
        self.revert()
        self.closeWindow(False)
        
    def revert(self):
        '''
        Revert the changes to the camera.
        '''
        for info in self.init_vals_info:
            prop, init_auto, init_val = info
            prop.value = init_val
            if init_auto != None:
                prop.auto = init_auto
                                                                          
    def closeWindow(self, ask_to_apply_changes = True):
        '''
        Close the top window.
        '''
        if ask_to_apply_changes:
            apply_on_exit = tkMessageBox.askyesnocancel('Confirm exit',\
                                                      'Would you like to apply these changes?',
                                                      parent = self)
            if apply_on_exit == None:
                    return
            if not apply_on_exit:
                self.revert()
        self.grab_release()
        for wid in self.winfo_children():
            wid.destroy()
        self.destroy()
