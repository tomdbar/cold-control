import ctypes
import os, time, types
import numpy as np
# from instrument import Instrument

class QuTau(object):

    def __init__(self, name):
        # Load the dll
        self.qutools_dll = ctypes.windll.LoadLibrary('C:\\Users\\apc\\Documents\\Python Scripts\\Cold Control Heavy\\dlls\\quTAU\\userlib\\lib64\\tdcbase.dll')
        
#         self.dev_nr = 0
#         self.err_dict = {0 : 'No error', 
#                          1 : 'Receive timed out',
#                          2 : 'No connection was established',
#                          3 : 'Error accessing the USB driver',
#                          4 : 'Unknown Error',
#                          5 : 'Unknown Error',
#                          6 : 'Unknown Error',
#                          7 : 'Can''t connect device because already in use',
#                          8 : 'Unknown error',
#                          9 : 'Invalid device number used in call',
#                          10 : 'Parameter in fct. call is out of range',
#                          11 : 'Failed to open specified file'}
# 
# #         self.add_function('initialize')
# #         self.add_function('switch_termination')
# #         self.add_function('configure_selftest')
# #         self.add_function('get_histogram')
# #         self.add_function('get_last_timestamps')
# #         self.add_function('clear_all_histograms')
# #         self.add_function('freeze_buffers')
# #         self.add_function('start_write_timestamps')
# #         self.add_function('stop_write_timestamps')
# #         self.add_function('get_countrate')
# # 
# #         self.add_function('close')
# 
# #         self.add_parameter('device_params', 
# #                            type = types.TupleType, 
# #                            flags = Instrument.FLAG_GET)
# # 
# #         self.add_parameter('data_lost', 
# #                            type = types.IntType, 
# #                            flags = Instrument.FLAG_GET)
# # 
# #         self.add_parameter('histogram_params', 
# #                            type = types.TupleType, 
# #                            flags = Instrument.FLAG_GETSET)
# # 
# #         self.add_parameter('timebase', 
# #                            type = types.FloatType, 
# #                            flags = Instrument.FLAG_GET)
# # 
# #         self.add_parameter('version', 
# #                            type = types.FloatType, 
# #                            flags = Instrument.FLAG_GET)
# #         
# #         self.add_parameter('exposure_time', 
# #                            type = types.FloatType, 
# #                            flags = Instrument.FLAG_SET)
# # 
# #         self.add_parameter('coincidence_window', 
# #                            type = types.FloatType, 
# #                            flags = Instrument.FLAG_SET)
# # 
# #         self.add_parameter('active_channels', 
# #                            type = types.ListType,
# #                            flags = Instrument.FLAG_SET)
# # 
# #         self.add_parameter('buffer_size', 
# #                            type = types.IntType, 
# #                            flags = Instrument.FLAG_GETSET) 
# # 
# #         self.add_parameter('coincidence_counters', 
# #                            flags = Instrument.FLAG_GET)
# # 
# #         self.add_parameter('is_writing', 
# #                            type = types.BooleanType, 
# #                            flags = Instrument.FLAG_GETSET)
# 
#         #Open a connection    
#         self.initialize()
#         self.set_is_writing(False)
#         self.switch_termination(True)
#         
#         #Configure standard settings
#         self.set_exposure_time(100)
#         self.set_coincidence_window(10)
#         self.set_buffer_size(1E6)
#         self.set_active_channels(range(8))
#         
#         print "Initialized with QuTau DLL v%f"%(self.get_version())
# 
#     #################################
#     #################################
#     ### SUPPORTING FUNCTIONS ########
#     #################################
#     #################################
#     
#     def convert_channelmask(self, channels):
#         if len(channels) > 0:
#             bitstring = ''
#             for k in range(max(channels)+1):
#                 if k in channels:
#                     bitstring = '1' + bitstring
#                 else:
#                     bitstring = '0' + bitstring
#         else:
#             bitstring = '0'
#             
# 
#         return int(bitstring, 2)
# 
# 
#     def revert_channelmask(self, channelmask):
#         channels = list()
#     
#         chopped = bin(channelmask)[2:len(bin(channelmask))]
#         for k in range(len(chopped)):
#             if chopped[len(chopped)-(k+1)]  == '1':
#                 channels.append(k)
#     
#         return channels
# 
#     #################################
#     #################################
#     ###### ADDED   FUNCTIONS ########
#     #################################
#     #################################
# 
#     def initialize(self): #OK!
#         """
#         Initialize and Start.
#         The function initializes internal data and starts an event loop for 
#         data acquisition. It discovers devices connected to the computer, 
#         and connects to the first device that matches the given device ID. 
#         (The device ID is an identification number programmed by the user.)
#         The function should be called before any other TDC functions, except 
#         TDC_getVersion and TDC_getTimebase .
#         Input:
#         
#         deviceId    Identification number of the device to connect. 
#                     The special value -1 matches all devices.
#         
#         Returns:
#         
#         Error code
#         """
#         ans = self.qutools_dll.TDC_init(self.dev_nr)
#         qt.msleep(0.02)
#         return self.err_dict[ans]
# 
# #     def get_countrate():
# #         #self.initialize
# #         return 0
# 
#     def switch_termination(self, on): #OK!
#         """
#         Switch Input Termination.
#         Switches the 50-Ohm termination of input lines on or off.
#         Input:
#         True/False        Switch on (1) or off (0)
#         
#         Returns:
#         
#         Error code
#         """
#         ans = self.qutools_dll.TDC_switchTermination(on)
#         return self.err_dict[ans]
# 
# 
#     def configure_selftest(self, channels, period, burst_periods, burst_dist): #OK!
#         """
#         Input:
#         channels        List of channels, e.g. [0, 1, 2] for channels 1 to 3.
#         period             Period in seconds, Range = 40 ns ... 1200 ns
#         burst_periods     Number of periods in a burst, Range = 1 ... 65535
#         burst_dist     Distance between bursts in seconds, Range = 0 ns ... 0.8 ms
#         
#         Output:
#         Error code
#         """
#         
#         period = int(period/20E-9)
#         burst_periods = int(burst_periods)
#         burst_dist = int(burst_dist/80E-9)
# 
#         channelMask = ctypes.c_int32(self.convert_channelmask(channels))
#         Period = ctypes.c_int32(period)
#         BurstSize = ctypes.c_int32(burst_periods)
#         BurstDist = ctypes.c_int32(burst_dist)
# 
#         ans = self.qutools_dll.TDC_configureSelftest(channelMask, Period, 
#                 BurstSize, BurstDist)
# 
#         return self.err_dict[ans]
# 
# 
#     def get_histogram(self, chan_setup, hist_params, int_time, reset = True, 
#             do_plot = False, verbose = False): #OK!
#         """
#         Retreive Histogram.
#         Retreives one of the histgrams accumulated internally. 
#         One histogram is provided for the time differences of every event the 
#         device has detected (channel independent). 64 histograms are provided for 
#         the time differences of events detected on different channels. 
#         Events on the first channel reset the time counter, events on the second 
#         one integrate the current counter value in the Histogram.
#         Input:
#         
#         chan_setup is a size 2 tuple which specifies the channels to be used, e.g. (0,0)
#         chan_setup consists of (chanA, chanB) where: 
#         chanA         First TDC channel of the channel pair. Range 0...7 begins 
#                     with 0 for channel 1. If this parameter is out of range 
#                     (negative e.g.) the channel independent histogram is retreived.
#         chanB         Second TDC channel of the channel pair (0...7). If this 
#                     parameter is out of range (negative e.g.) the channel 
#                     independent histogram is retreived.
#         hist_params A tuple containing (BinWidth, BinCount)
#         int_time    Integration time in seconds.
#         reset         If the histogram should be cleared after retreiving.
#        
#         Output:
#         
#         dt          Time axis data
#         data         Histogram data. The array must have at least binCount 
#                     (see TDC_setHistogramParams ) elements. 
#         count         Total number of valid time diffs in the histogram. 
#         tooSmall    Number of time diffs that were smaller than the smallest histogram bin. 
#         tooLarge    Number of time diffs that were bigger than the biggest histogram bin. 
#         eventsA     Number of events detected on the first channel that contribute to the histogram. 
#         eventsB     Number of events detected on the second channel that contribute to the histogram. 
#         expTime     Total exposure time for the histogram: the time difference 
#                     between the first and the last event that contribute to the 
#                     histogram. In timebase units. A NULL pointer is allowed to 
#                     ignore the data.
#         
#         """
#         chanA = ctypes.c_int32(int(chan_setup[0]))
#         chanB = ctypes.c_int32(int(chan_setup[1]))
#         reset = ctypes.c_bool(reset)
#         
#         binWidth = int(hist_params[0])
#         binCount = int(hist_params[1])
#         self.set_histogram_params(hist_params)
#         self.clear_all_histograms()
# 
#         data = ctypes.ARRAY(ctypes.c_int32, binCount)()
#         count = ctypes.c_int32()
#         tooSmall = ctypes.c_int32()
#         tooLarge = ctypes.c_int32()
#         eventsA = ctypes.c_int32()
#         eventsB = ctypes.c_int32()
#         expTime = ctypes.c_int64()
#         
#         if verbose:
#             print "Integrating..."
# 
#         qt.msleep(int_time)
#         
#         ans = self.qutools_dll.TDC_getHistogram(chanA, chanB, reset, 
#                 ctypes.byref(data), ctypes.byref(count), 
#                 ctypes.byref(tooSmall), ctypes.byref(tooLarge), 
#                 ctypes.byref(eventsA), ctypes.byref(eventsB), 
#                 ctypes.byref(expTime))
# 
#         if ans != 0:
#             return self.err_dict[ans]
#         else:
#             Histogram = np.ctypeslib.as_array(data)
#             
#             if verbose:
#                 print 'Total counts in %.2f s integration time: %d.\n \
# Missed %d counts before first bin and %d counts after last bin.\n \
# Number of events on channel (%d, %d) = (%d, %d).'\
#                         %(expTime.value*self.get_timebase(), count.value, 
#                                 tooSmall.value, tooLarge.value, chanA.value, 
#                                 chanB.value, eventsA.value, eventsB.value)
# 
#             Dt = np.linspace(0,binCount*binWidth*self.get_timebase(), binCount)
# 
#             if do_plot:
#                 dataname = 'QuTau_hist_ch%d_ch%d'%(chanA.value, chanB.value)
#                 qtdata = qt.Data(name = dataname)
#                 qtdata.add_coordinate('Dt (s)')
#                 qtdata.add_value('Clicks')
#                 qtdata.create_file()
#                 dataplot = qt.Plot2D(qtdata, '-b', 
#                         name = dataname, coorddim = 0, valdim = 1, clear = True)
#                 qtdata.add_data_point(Dt, Histogram)
#                 qtdata.close_file()
#                 dataplot.update()
#                 #dataplot.save_png(os.path.join(qtdata.get_filepath(), dataname+'.png'))
# 
#             return Dt, Histogram, count.value, tooSmall.value, tooLarge.value, eventsA.value, eventsB.value, expTime.value*self.get_timebase()
# 
# 
#     def clear_all_histograms(self): #OK!
#         """
#         Clear Histograms.
#         Clears all internally generated histograms, i.e. all bins are set to 0.
#         Output:
#         Error code
#         """
#         ans = self.qutools_dll.TDC_clearAllHistograms()
#         return self.err_dict[ans]
# 
# 
#     def freeze_buffers(self, val): #OK!
#         """
#         Freeze internal Buffers.
#         The function can be used to freeze the internal buffers, allowing to 
#         retreive multiple histograms with the same integration time. 
#         When frozen, no more events are added to the built-in histograms and 
#         timestamp buffer. The coincidence counters are not affected. 
#         Initially, the buffers are not frozen.
#         Input:
#         True/False         freeze (1) or activate (0) the buffers
#         
#         Output:
#         Error code
#         """
#         
#         freeze = ctypes.c_bool(val)
#         ans = self.qutools_dll.TDC_freezeBuffers(freeze)
# 
#         return self.err_dict[ans]
# 
# 
#     def start_write_timestamps(self, filename, binary = True): #NOTE
#         """
#         Write Timestamp Values to File.
#         Starts or stops writing the timestamp values to a file continously. 
#         Timestamps come in base units, see TDC_getTimebase ; 
#         channel Numbers range from 1 to 8. Two file formats are available:
#         ASCII: Timestamp values (int base units) and channel numbers as 
#         decimal values in two comma separated columns.
#         binary: Records of 10 bytes, 8 bytes for the timestamp, 
#         2 for the channel number, Stored in little endian (Intel) byte order.
#         Writing in the ASCII format requires much more CPU power and about 
#         twice as much disk space than using the binary format. 
#         If the specified file exists it will be overwritten. The function 
#         checks if the file can be opened; write errors that occur later in the 
#         actual writing process (disk full e.g.) will not be reported.
#         Parameters:
#         filename     Name of the file to use. To stop writing, call the 
#                         function with an empty or null filename.
#         binary             Use binary (true) or ASCII (false) file format. 
#                         Meaningless if writing is to be stopped.
#         """
# 
#         #if os.path.exists(filename):
#             #fhandle = open(filename, 'w+')
#         #else:
#             #fhandle = open(filename, 'w+')
# 
#         time.sleep(1)
# 
#         #fhandle.close()
#         self.set_is_writing(True)
# 
#         binary = ctypes.c_bool(binary)
#         filename = ctypes.c_char_p(filename)
#         #filename = ctypes.create_string_buffer(filename)
# 
#         ans = self.qutools_dll.TDC_writeTimestamps(ctypes.byref(filename), binary)
# 
#         return self.err_dict[ans]
# 
# 
#     def stop_write_timestamps(self):
#         """
#         Stops writing timestamps into a file.
#         """
#         filename = None
#         binary = ctypes.c_bool(False)
#         ans = self.qutools_dll.TDC_writeTimestamps(filename, binary)
# 
#         self.set_is_writing(False)
# 
#         return self.err_dict[ans]
# 
# 
#     def close(self): #OK!
#         """
#         Disconnect and uninitialize.
#         Disconnects a connected device and stops the internal event loop.
#         """
#         ans = self.qutools_dll.TDC_deInit()
#         return self.err_dict[ans]
# 
#     #################################
#     #################################
#     ###### ADDED   PARAMETERS #######
#     #################################
#     #################################
# 
#     def do_get_device_params(self): #OK!
#         """
#         Read Back Device Parameters.
#         Reads the device parameters back from the device. All Parameters are 
#         output parameters but may be NULL-Pointers if the result is not required.
#         Output:
#         
#         tuple of the form (channelMask, coincWin, expTime) where:
#         channelMask     Enabled channels, see TDC_enableChannels
#         coincWin     Coincidence window, see TDC_setCoincidenceWindow
#         expTime     Exposure time, see TDC_setExposureTime
#         """
#         
#         channelMask = ctypes.c_int32()
#         coincWindow = ctypes.c_int32()
#         expTime = ctypes.c_int32() 
# 
#         ans = self.qutools_dll.TDC_getDeviceParams(ctypes.byref(channelMask),
#                 ctypes.byref(coincWindow), ctypes.byref(expTime))
#         
#         if ans != 0:
#             return self.err_dict[ans]
#         else:
#             return self.revert_channelmask(channelMask.value), \
#                     coincWindow.value, expTime.value
# 
# 
#     def do_get_data_lost(self): #OK!
#         """
#         Check for data loss.
#         Timestamps of events detected by the device can get lost if their rate 
#         is too high for the USB interface or if the PC is unable to receive 
#         the data in time. The TDC recognizes this situation and signals it to 
#         the PC (with high priority).
#         The function checks if a data loss situation is currently detected or
#         if it has been latched since the last call. If you are only interested 
#         in the current situation, call the function twice; 
#         the first call will delete the latch.
#         Output:
#         Current and latched data loss state.
#         """
#         lost = ctypes.c_bool()
# 
#         ans = self.qutools_dll.TDC_getDataLost(ctypes.byref(lost))
#         #print ans
#         
#         if ans != 0:
#             return self.err_dict[ans]
#         else:
#             return lost.value
# 
# 
#     def do_get_histogram_params(self): #OK!
#         """
#         Read back Histogram Parameters.
#         Reads back the histogram parameters that have been set with 
#         TDC_setHistogramParams or their default values, respectively.
#         Output:
#         (binWidth,binCount) where
#         binWidth     Width of the histograms bins in TDC Time Base 
#                         units, see TDC_getTimebase .
#         binCount     Number of bins in the histogram buffers.
#         """
#         
#         binWidth = ctypes.c_int32()
#         binCount = ctypes.c_int32()
# 
#         ans = self.qutools_dll.TDC_getHistogramParams(ctypes.byref(binWidth),
#                 ctypes.byref(binCount))
# 
#         if ans != 0:
#             return self.err_dict[ans]
#         else:
#             return binWidth.value, binCount.value
# 
# 
#     def do_set_histogram_params(self, hist_params): #OK!
#         """
#         Set Histogram Parameters.
#         Sets parameters for the internally generated histograms. If the function 
#         is not called, default values are in place. When the function is called, 
#         all collected histogram data are cleared.
#         Input:
#         "hist_params" is a size 2 tuple containing (binWidth, binCount), where:
#         binWidth    Width of the histograms bins in units of the TDC Time Base, 
#                     see TDC_getTimebase . Range = 1 ... 1000000, default = 1.
#         binCount    Number of bins in the histogram buffers. Range = 2 ... 1000000, 
#                     default = 10000.
#         
#         Output:
#         Error code
#         """
#         binWidth = ctypes.c_int32(int(hist_params[0]))
#         binCount = ctypes.c_int32(int(hist_params[1]))
# 
#         ans = self.qutools_dll.TDC_setHistogramParams(binWidth, binCount)
# 
#         return self.err_dict[ans]
# 
# 
#     def do_get_timebase(self): #Don't understand output...
#         """
#         Get Time Base.
#         Returns the time base (the resolution) of the TDC device. 
#         It is used as time unit by many other functions.
#         Output:
#         Time base in seconds
#         """
#         func = self.qutools_dll.TDC_getTimebase
#         func.restype = ctypes.c_double
#         ans = func()
# 
#         return ans
# 
# 
#     def do_get_version(self): #Don't understand output...
#         """
#         Get Library Version.
#         Returns the version number of the library. The integer part of the number 
#         denotes main releases, the fractional part Bugfixes without API change.
#         Output:
#         Version number
#         """
#         func = self.qutools_dll.TDC_getVersion
#         func.restype = ctypes.c_double
#         ans = func()
#         
#         return ans
# 
# 
#     def do_set_exposure_time(self, val): #OK!
#         """
#         Set Exposure Time.
#         Sets the exposure time (or integration time) of the internal coincidence counters.
#         Input:
#         
#         expTime     Exposure time in ms
#         
#         Output:
#         
#         Error code
#         """
#         val = ctypes.c_int32(int(val))
#         ans = self.qutools_dll.TDC_setExposureTime(val)
#         return self.err_dict[ans]
# 
#      
#     def do_set_coincidence_window(self, val): #OK!
#         """
#         Set Coincidence Window.
#         Sets the coincidence time window for the integrated coincidence counting.
#         Input:
#         
#         coincWin     Coincidence window in bins, see TDC_getTimebase
#         
#         Output:
#         
#         Error code
#         """
# 
#         val = ctypes.c_int32(int(val))
#         ans = self.qutools_dll.TDC_setCoincidenceWindow(val)
#         
#         return self.err_dict[ans]
#    
#     
#     def do_set_active_channels(self, Channels): #OK!
#         """
#         Enable TDC Channels.
#         Selects the channels that contribute to the output stream.
#         Input:
#         
#         Channels     List of channels, e.g. [0, 1, 2] for channels 1 to 3.
#         
#         Output:
#         Error code
#         """
# 
#         channelMask = ctypes.c_int32(self.convert_channelmask(Channels))
#         ans = self.qutools_dll.TDC_enableChannels(channelMask)
# 
#         return self.err_dict[ans]
# 
# 
#     def do_set_buffer_size(self, val): #OK!
#         """
#         Set Timestamp Buffersize.
#         Sets the size of a ring buffer that stores the timestamps of the last 
#         detected events. The buffer's contents can be retreived with 
#         TDC_getLastTimestamps. By default, the buffersize is 0. 
#         When the function is called, the buffer is cleared.
#         Input:
#         size     Buffersize; Range = 1 ... 1000000
#         
#         Output:
#         Error code
#         """
# 
#         size = ctypes.c_int32(int(val))
#         self._buffer_size=val
#         ans = self.qutools_dll.TDC_setTimestampBufferSize(size)
# 
#         return self.err_dict[ans]
# 
#     def do_get_buffer_size(self):
#         return self._buffer_size
# 
# 
#     def do_get_coincidence_counters(self): #OK!
#         """
#         Retreive Coincidence Counters.
#         Retreives the most recent values of the built-in coincidence counters.
#         The coincidence counters are not accumulated, i.e. the counter values 
#         for the last exposure (see TDC_setExposureTime ) are returned.
#         The array contains count rates for all 8 channels, and rates for two, 
#         three, and fourfold coincidences of events detected on different 
#         channels out of the first 4. Events are coincident if they happen 
#         within the coincidence window (see TDC_setCoincidenceWindow ).
#         Output: 
#         
#         Counter Values. The array must have at least 19 
#         elements. The Counters come in the following order: 
#         1, 2, 3, 4, 5, 6, 7, 8, 1/2, 1/3, 1/4, 2/3, 2/4, 3/4, 
#         1/2/3, 1/2/4, 1/3/4, 2/3/4, 1/2/3/4
#         """
# 
#         data = ctypes.ARRAY(ctypes.c_int32, 19)()
# 
#         ans = self.qutools_dll.TDC_getCoincCounters(ctypes.byref(data))
# 
#         if ans != 0:
#             return self.err_dict[ans]
#         else:
#             dat = np.zeros(19)
#             for idx, val in enumerate(data):
#                 dat[idx] = val
# 
#             return dat
# 
# 
#     def get_last_timestamps(self, reset=True): #OK!
#         """
#         Retreive Last Timestamp Values.
#         Retreives the timestamp values of the last n detected events on all 
#         TDC channels. The buffer size must have been set with 
#         TDC_setTimestampBufferSize , otherwise 0 data will be returned.
#         Input:
#         reset             If the data should be cleared after retreiving.
#         Output:
#         timestamps     Timestamps of the last events in base units, see 
#                         TDC_getTimebase . The array must have at least buffer_size 
#                         elements, see TDC_setTimestampBufferSize . 
#         channels     Numbers of the channels where the events have been detected. 
#                         Every array element belongs to the timestamp with the 
#                         same index. Range is 0...7 for channels 1...8. The array 
#                         must have at least size elements, see 
#                         TDC_setTimestampBufferSize . 
#         valid             Number of valid entries in the above arrays. 
#                         May be less than the buffer size if the buffer has been 
#                         cleared.
#         """
# 
#         reset = ctypes.c_bool(reset)
#         timestamps = np.zeros(int(self._buffer_size),dtype=np.int64)
#         #timestamps = ctypes.ARRAY(ctypes.c_int64, int(self._buffer_size))()
#         channels = np.zeros(int(self._buffer_size),dtype=np.int8)
#         #channels = ctypes.ARRAY(ctypes.c_int8, int(self._buffer_size))() 
#         valid = ctypes.c_int32()
# 
#         ans = self.qutools_dll.TDC_getLastTimestamps(reset, 
#                 timestamps.ctypes.data, channels.ctypes.data,
#                 ctypes.byref(valid))
# 
#         if ans != 0:
#             return self.err_dict[ans]
#         else:
# 
#             return timestamps, channels, valid.value
#             #return np.ctypeslib.as_array(timestamps), np.ctypeslib.as_array(channels), valid.value
#     
#     def do_get_is_writing(self):
#         """
#         Output:
#         Write state
#         """
#         return self.is_writing
# 
# 
#     def do_set_is_writing(self, val):
#         """
#         Input:
#         Write state
#         """
#         self.is_writing = val