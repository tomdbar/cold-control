'''
Created on 26 Sep 2016

@author: Tom Barrett
'''
from ctypes import *
import visa
import numpy as np

from WX218x_DLL import WX218x_DLL, WX218x_MarkerSource
from WX218x_Exception import WX218x_Exception
from WX218x_Warning import WX218x_Warning
from esky.slaveproc import ctypes
from docutils.utils.math.latex2mathml import functions

class Channel(object):
    CHANNEL_1 = 'channel1'
    CHANNEL_2 = 'channel2'
    CHANNEL_3 = 'channel3'
    CHANNEL_4 = 'channel4'
    
    @staticmethod
    def values():
        return [Channel.CHANNEL_1, Channel.CHANNEL_2, Channel.CHANNEL_3, Channel.CHANNEL_4]
    

class WX218x_awg(object):
    '''
    todo
    '''
    MANUFACTURER_ID = '0x168C'
    
    def __init__(self, name=None):
        '''
        Name is an IVI logical name or an instrument specific string that 
        identifies the address of the instrument, such as a VISA resources
        descriptor string.
        If no name is specificed we find the first instrument connected with
        the appropiate manafacturer id.
        '''
        if name:
            self.name = name
        else:
            resources = visa.ResourceManager().list_resources()
            try:
                self.name = next(r for r in resources if self.MANUFACTURER_ID in r)
            except StopIteration as err:
                print 'No AWG instrument can be found. Currently connected instruments are', resources
                raise err
        self.vi_session = c_uint()
        
    #////////////////////////////////////////////////////////////////////////////#
    # Functions below are direct (or almost direct) implementations of functions #
    # from the import WX218x_DLL.                                                #
    #////////////////////////////////////////////////////////////////////////////#
        
    def open(self, verify_id=False, reset=False, options_string=None):
        '''
        Open a connection to the AWG. With flags to determine whether
        to verify the id of the instrument, reset it and an optional
        string of start-up options.
        Gory details are described in the DLL documentation for the called
        functions.
        '''
        if not options_string:
            self._validate_response(WX218x_DLL.init(self.name, verify_id, reset, byref(self.vi_session)))
        else:
            self._validate_response(WX218x_DLL.init_with_options(self.name, verify_id, reset, options_string, byref(self.vi_session)))
        print 'Connection opened to AWG instrument', self.name
        
    def close(self):
        '''
        Close the connection.
        '''
        self._validate_response(WX218x_DLL.close(self.vi_session))
        
    def reset(self):
        '''
        Places the instrument in a known state.
        '''
        print "Resetting AWG..."
        self._validate_response(WX218x_DLL.reset(self.vi_session))
        print "...completed"
        
    def enable_channel(self, channel_name):
        '''
        Enable output on channel_name.
        '''
        self._validate_response(WX218x_DLL.configure_output_enabled(self.vi_session, channel_name, True))
        
    def disable_channel(self, channel_name):
        '''
        Disable output on channel_name.
        '''
        self._validate_response(WX218x_DLL.configure_output_enabled(self.vi_session, channel_name, False))
        
    def configure_output_mode(self, output_mode):
        self._validate_response(WX218x_DLL.configure_output_mode(self.vi_session, output_mode))
        
    def configure_operation_mode(self, channel_name, operation_mode):
        self._validate_response(WX218x_DLL.configure_operation_mode(self.vi_session, channel_name, operation_mode))
    
    def configure_standard_waveform(self,
                                    channel_name,
                                    waveform,
                                    amplitude=1,
                                    dc_offset=0,
                                    frequency=10**6,
                                    start_phase=0):
        #TODO: validate attributes
        self._validate_response(
            WX218x_DLL.configure(
                self.vi_session,
                channel_name,
                waveform,
                amplitude,
                dc_offset,
                frequency,
                start_phase
                )
                                )
    
    def initiate_generation(self):
        self._validate_response(WX218x_DLL.initiate_generation_2(self.vi_session))
        
    def abort_generation(self):
        self._validate_response(WX218x_DLL.abort_generation(self.vi_session))
        
    def set_active_channel(self, channel_name):
        '''
        Sets the active channel for programming.
        '''
        self._validate_response(WX218x_DLL.set_active_channel(self.vi_session, len(channel_name), channel_name))
    
    def configure_sample_rate(self, sample_rate):
        '''
        Configures the function generator's sample rate.
            sample_rate: The sample rate in samples/second.
        '''
        self._validate_response(WX218x_DLL.configure_sample_rate(self.vi_session, sample_rate))
        
    def load_arbitrary_waveform_from_file(self, filename, channel_name):
        '''
        Loads an arbitrary waveform from a ".wav", ".asc" or ".txt" file
        onto a specified channel.
        Returns the handle that identifies the waveform.
        '''
        import os
        waveform_handle = c_int32()
        if os.path.splitext(filename)[1] == '.csv':
            # TODO: csv file still not working
            load_function = WX218x_DLL.load_csv_file
        else:
            load_function = WX218x_DLL.load_arb_wfm_from_file
        # TODO: What does the buffer size of filename argument do?
        self._validate_response(load_function(self.vi_session,
                                              channel_name,
                                              len(filename),
                                              filename,
                                              byref(waveform_handle)))
        return waveform_handle
    
    def create_arbitrary_waveform(self, data):
        '''
        Creates a arbitrary waveform from a list of data points with (-1,1).
        '''
        waveform_handle = c_int32()
        
#         from bitstring import BitArray
#         data14bin = ["{0:014b}".format(x) for x in [int(d*8191) for d in data]]
#         data14bit = [BitArray(bin=x).int for x in data14bin]
#         
# #         data = list(map(lambda x:('{0:16b}'.format(ord(x))), data))
#         print data14bin
#         print data14bit
# #         print list(map(lambda x: int(x, 16), data14bit))
# 
#         data_p = (c_double*len(data))()
#         for i in xrange(len(data)):
#             data_p[i] = data[i]

        self._validate_response(WX218x_DLL.create_arbitrary_waveform(self.vi_session,
                                                                     len(data),
                                                                     data,
                                                                     byref(waveform_handle)))
        return waveform_handle
        
    def create_arbitrary_waveform_custom(self, data):
        '''
        Creates a arbitrary waveform from a list of data points.
            data: list of values between (-1,1)
        '''
        waveform_handle = c_int32()
        
        def format_data(data):
            data_p = (c_short*len(data))()
            for i in xrange(len(data)):
                data_p[i] = int(np.round((1+data[i])*8191))
#             print [x for x in data_p]
            return data_p        

        self._validate_response(WX218x_DLL.create_arbitrary_waveform_custom(self.vi_session,
                                                                            len(data),
                                                                            format_data(data),
                                                                            byref(waveform_handle)))
        return waveform_handle    
        
    def create_custom_adv(self, data1, data2):
        '''
        Creates a arbitrary waveform of channel_X with the data in dataX.
            data1, data2: lists of values between (-1,1).
        '''
        waveform1_handle = c_int32()
        waveform2_handle = c_int32()
        
        def format_data(data):
            data_p = (c_short*len(data))()
            for i in xrange(len(data)):
                data_p[i] = int(np.round((1+data[i])*8191))
#             print [x for x in data_p]
            return data_p
        
        self._validate_response(WX218x_DLL.create_custom_adv(self.vi_session,
                                                             len(data1),
                                                             format_data(data1),
                                                             len(data2),
                                                             format_data(data2),
                                                             byref(waveform1_handle),
                                                             byref(waveform2_handle)))
        return waveform1_handle, waveform2_handle
    
    def clear_arbitrary_waveform(self, waveform_handle=-1):
        '''
        If waveform_handle = -1, delete all sequences.
        '''
        self._validate_response(WX218x_DLL.clear_arbitrary_waveform(self.vi_session,
                                                                    waveform_handle))
    
    def configure_arb_gain(self, channel_name, gain):
        '''
        Specifies the factor by which the function generator scales the arbitrary waveforms.
        Gain must be 50E-3 to 2 for WX2184C.
        '''
        self._validate_response(WX218x_DLL.configure_arb_gain(self.vi_session,
                                                              channel_name,
                                                              gain))
    
    def create_sequence_adv(self, waveform_handles, loop_count, jump_flag=None):
        sequence_handle = c_int32()
#         waveform_handles_p = np.array([x.value for x in data]).ctypes.data_as(POINTER(c_int32))
#         print  waveform_handles_p[:10]
        
#         loop_count_p = np.array(loop_count).ctypes.data_as(POINTER(c_int32))
#         if not jump_flag: jump_flag = [0]*len(data)
#         jump_flag_p  = np.array(jump_flag).ctypes.data_as(POINTER(c_char))
        
        waveform_handles_p = (c_int32*len(waveform_handles))()
        for i in xrange(len(waveform_handles)):
            waveform_handles_p[i] = waveform_handles[i]
             
        loop_count_p = (c_int32*len(loop_count))()
        for i in xrange(len(loop_count)):
            loop_count_p[i] = loop_count[i]
             
        jump_flag_p = (c_int32*len(jump_flag))()
        for i in xrange(len(jump_flag)):
            jump_flag_p[i] = jump_flag[i]
        
        self._validate_response(WX218x_DLL.create_sequence_adv1(self.vi_session,
                                                               len(waveform_handles),
                                                               waveform_handles_p,
                                                               len(loop_count),
                                                               loop_count_p,
                                                               len(jump_flag),
                                                               jump_flag_p,
                                                               byref(sequence_handle)))
        return sequence_handle

    def clear_arbitrary_sequence(self, sequence_handle=-1):
        '''
        If sequence_handle = -1, delete all sequences.
        '''
        self._validate_response(WX218x_DLL.clear_arbitrary_sequence(self.vi_session,
                                                                    sequence_handle))
    
    def configure_arb_wave_trace_mode(self, trace_mode):
        '''
        Use this method to configure the trace mode (option enunerated in
        the WX218x_TraceMode enum).
        '''
        self._validate_response(WX218x_DLL.configure_arb_wave_trace_mode(self.vi_session,
                                                                         trace_mode))
    
    def configure_once_count(self, channel_name, count):
        '''
        Sets advance sequence once count. Only used if we are in
        WX218x_SequenceAdvanceMode.ONCE mode. This is configured from the
        configure_advance_mode function.
        
        NOTE: The is not for Advanced Sequences (that would be configure_once_count2
        which is also in WX218x_DLL), but for sequences in advanced mode. Yes, those
        are different things - don't shoot the messenger.
        '''
        self._validate_response(WX218x_DLL.configure_once_count(self.vi_session,
                                                                  channel_name,
                                                                  count))
    
    def configure_advance_mode(self, channel_name, advance_mode):
        '''
        Selects the sequence advance mode. Valid modes are enumerated in the
        WX218x_SequenceAdvanceMode object.
        '''
        self._validate_response(WX218x_DLL.configure_advance_mode(self.vi_session,
                                                                  channel_name,
                                                                  advance_mode))
    
    def configure_trigger_source(self, channel_name, source):
        '''
        Configure the source of the trigger. See WX218x_TriggerMode for valid
        source parameters.
        '''
        self._validate_response(WX218x_DLL.configure_trig_source(self.vi_session,
                                                                 channel_name,
                                                                 source))
    
    def configure_trigger_level(self, channel_name, level):
        '''
        Use this method to program the threshold level for the trigger input signals.
        Valid range is -5V to 5V. The default level is 1.6V.
        '''
        self._validate_response(WX218x_DLL.configure2(self.vi_session,
                                                      channel_name,
                                                      level))
        
    def configure_trigger_slope(self, channel_name, slope):
        '''
        Use this method to define the edge that will affect the trigger input.
        Valid slopes are enumerated in the WX218x_TriggerSlope object.
        '''
        self._validate_response(WX218x_DLL.configure_trig_slope(self.vi_session,
                                                                channel_name,
                                                                slope))
        
    def configure_trigger_impedance(self, trigger_impedance):
        '''
        Use this method to configure Trigger Impedance (only for WX218xC,WX128xC models).
        Valid impedance values are enumerated in the WX218x_TriggerImpedance object.
        '''
        self._validate_response(WX218x_DLL.configure_trigger_impedance(self.vi_session,
                                                                       trigger_impedance))
        
    def send_software_trigger(self):
        '''
        This method sends a command to trigger the function generator.
        '''
        self._validate_response(WX218x_DLL.send_software_trigger_2(self.vi_session))
        
    def configure_burst_count(self, channel_name, count):
        '''
        Use this method to set the burst counter setting.
        '''
        self._validate_response(WX218x_DLL.configure_burst_count_2(self.vi_session,
                                                                   channel_name,
                                                                   count))

    def configure_marker(self, 
                         channel_name, 
                         index, 
                         source=WX218x_MarkerSource.WAVE,
                         position=0,
                         levels=(0,1.2),
                         delay=0,
                         width=64):
        
        self.configure_marker_index(channel_name, index)
        self.configure_marker_source(channel_name, source)
        self.configure_marker_position(channel_name, index, position)
        self.configure_marker_low_level(channel_name, levels[0])
        self.configure_marker_high_level(channel_name, levels[1])
        self.configure_marker_delay(channel_name, index, delay)
        self.configure_marker_width(channel_name, index, width)
# #         self.set_marker_width(channel_name, index, width)
        self.configure_marker_enabled(channel_name, index, True)
#         self.marker_refresh(channel_name)
        
    def configure_marker_enabled(self, channel_name, index, enabled):
        self._validate_response(WX218x_DLL.configure_marker_enabled(self.vi_session,
                                                                    channel_name,
                                                                    index,
                                                                    enabled))
        
    def configure_marker_source(self, channel_name, source):
        '''
        Valid values for source are enumerated in the WX218x_MarkerSource enum.
        ''' 
        self._validate_response(WX218x_DLL.configure_marker_source(self.vi_session,
                                                                   channel_name,
                                                                   source))

    def configure_marker_position(self, channel_name, index, position):
        self._validate_response(WX218x_DLL.configure_marker_position(self.vi_session,
                                                                     channel_name,
                                                                     index,
                                                                     position))

    def configure_marker_high_level(self, channel_name, level):
        self._validate_response(WX218x_DLL.configure_marker_high_level_4_ch(self.vi_session,
                                                                            channel_name,
                                                                            level))
     
    def configure_marker_low_level(self, channel_name, level):    
        self._validate_response(WX218x_DLL.configure_marker_low_level_4_ch( self.vi_session,
                                                                            channel_name,
                                                                            level))
    
    def configure_marker_delay(self, channel_name, index, delay):
        self._validate_response(WX218x_DLL.configure_marker_delay(self.vi_session,
                                                                     channel_name,
                                                                     index,
                                                                     delay))
        
    def configure_marker_width(self, channel_name, index, width):
        self._validate_response(WX218x_DLL.configure_marker_width(self.vi_session,
                                                                     channel_name,
                                                                     index,
                                                                     width))
        
    def set_marker_width(self, channel_name, index, width):
        self._validate_response(WX218x_DLL.set_marker_width(self.vi_session,
                                                                     channel_name,
                                                                     index,
                                                                     width))

    def marker_refresh(self, channel_name):
        self._validate_response(WX218x_DLL.marker_refresh_2(self.vi_session,
                                                            channel_name))
        
    def configure_marker_index(self, channel_name, index):
        self._validate_response(WX218x_DLL.configure_marker_index(self.vi_session,
                                                                     channel_name,
                                                                     index))
        
    def configure_dig_patt_delay_mode(self, channel_name, delay_mode):
        self._validate_response(WX218x_DLL.configure_dig_patt_delay_mode(self.vi_session,
                                                                         channel_name,
                                                                         delay_mode))
        
    def configure_couple_enabled(self, enabled):
        self._validate_response(WX218x_DLL.configure_couple_enabled(self.vi_session,
                                                                         enabled))

    def _validate_response(self, response_code):
        '''
        Validate the code returned by almost every function call in the DLL.
        Do nothing if the code indicates success, otherwise create an exception
        or warning as appropriate.
        '''
        if response_code==0:
            return
        elif response_code < 0:
            err =  WX218x_Exception(response_code)
        elif response_code > 0:
            err =  WX218x_Warning(response_code)
            
#         error_message = create_string_buffer(256)
#         WX218x_DLL.error_message(self.vi_session, response_code, error_message)
#         print 'ERR: ', error_message.value
        
        error_code = c_int32()
        error_message = create_string_buffer(256)
        WX218x_DLL.get_error(self.vi_session, byref(error_code), 256, error_message)
        print 'Last retrieved error description:'.upper(), error_message.value
        
        raise err