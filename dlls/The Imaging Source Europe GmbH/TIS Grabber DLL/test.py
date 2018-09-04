from pyicic.IC_ImagingControl import *
import time

# open lib
ic_ic = IC_ImagingControl()
ic_ic.init_library()

# open first available camera device
cam_names = ic_ic.get_unique_device_names()
cam = ic_ic.get_device(cam_names[0])
cam.open()
#cam.show_property_dialog()

# change camera properties
print cam.list_property_names()         # ['gain', 'exposure', 'hue', etc...]
cam.gain.auto = True                    # enable auto gain
cam.exposure.auto = True
print cam.exposure.range                # (0, 10)
emin = cam.exposure.min                 # 0
emax = cam.exposure.max                 # 10
#cam.exposure.value = (emin + emax) / 2  # disables auto exposure and sets value to half of range
print cam.exposure.value                # 5

# change camera settings
formats = cam.list_video_formats()
print formats
cam.set_video_format(formats[0])        # use first available video format
cam.enable_continuous_mode(True)        # image in continuous mode
cam.start_live(show_display=True)       # start imaging


cam.enable_trigger(False)                # camera will wait for trigger
if not cam.callback_registered:
    cam.register_frame_ready_callback() # needed to wait for frame ready callback

for i in range(100):
    #cam.reset_frame_ready()                 # reset frame ready flag
    cam.snap_image(1000)
    #cam.wait_til_frame_ready(1000)              # wait for frame ready due to trigger


#for i in xrange(10):                        # take 10 shots
#    cam.reset_frame_ready()                 # reset frame ready flag
#
#    # send hardware trigger OR call cam.send_trigger() here
#    #cam.send_trigger()
#
#    cam.wait_til_frame_ready(1000)              # wait for frame ready due to trigger
#    cam.save_image(''.join(['image-',       # save image
#                            str(i),
#                            '.jpg']), 1)

cam.stop_live()
cam.close()

ic_ic.close_library()