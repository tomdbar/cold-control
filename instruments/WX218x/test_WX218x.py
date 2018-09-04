'''
Created on 22 Sep 2016

@author: apc
'''

from WX218x_awg import WX218x_awg, Channel
from WX218x_DLL import WX218x_DigPatternDelayMode, WX218x_MarkerSource, WX218x_OutputMode, WX218x_OperationMode, WX218x_SequenceAdvanceMode, WX218x_TraceMode, WX218x_TriggerMode, WX218x_Waveform 
import time
import os
from ctypes import *

def test_channels():
    for ch in [Channel.CHANNEL_1, Channel.CHANNEL_2, Channel.CHANNEL_3, Channel.CHANNEL_4]:
        print 'Enabling {0}...'.format(ch)
        awg.enable_channel(ch)
        print '...enabled'
        print 'Disabling {0}...'.format(ch)
        awg.disable_channel(ch)
        print '...disabled'
        
def test_standard_waveform(channel=Channel.CHANNEL_1):
    awg.set_active_channel(channel)
    awg.configure_standard_waveform(channel, WX218x_Waveform.SQUARE)
    awg.configure_output_mode(WX218x_OutputMode.FUNCTION)
    awg.configure_operation_mode(channel, WX218x_OperationMode.CONTINUOUS)
    awg.enable_channel(channel)
    time.sleep(5)
    awg.disable_channel(channel)

def test_arbitrary_waveform():
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\dlls\IVI Foundation\IVI\Drivers\wx218x\Examples\Matlab\waves'
    waveform_file = r'pulse_2048.wav'
    waveform_filename = os.path.join(waveform_folder, waveform_file)

    awg.configure_sample_rate(1*10**9)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    wave1_handle = awg.load_arbitrary_waveform_from_file(waveform_filename, Channel.CHANNEL_1)
    awg.enable_channel(Channel.CHANNEL_1)
    time.sleep(5)
    awg.disable_channel(Channel.CHANNEL_1)
    
def test_sequence():
    awg.configure_sample_rate(0.5*10**9)
    awg.set_active_channel(len(Channel.CHANNEL_1), Channel.CHANNEL_1)
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\dlls\IVI Foundation\IVI\Drivers\wx218x\Examples\Matlab\waves'
    waveform1_file = r'sinc_8192.wav'
    waveform2_file = r'square_1024.wav'
    awg.configure_output_mode(WX218x_OutputMode.SEQUENCE)
    waveform1_filename = os.path.join(waveform_folder, waveform1_file)
    waveform2_filename = os.path.join(waveform_folder, waveform2_file)
    wave1_handle = awg.load_arbitrary_waveform_from_file(waveform1_filename, Channel.CHANNEL_1)
    wave2_handle = awg.load_arbitrary_waveform_from_file(waveform2_filename, Channel.CHANNEL_1)
    waveform_handles = [wave1_handle, wave2_handle]*2
    loop_count = [1,1]*2
    jump_flag = [0,0]*2
    sequence_handle = awg.create_sequence_adv(waveform_handles, loop_count, jump_flag)
    
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.CONTINUOUS)
    awg.enable_channel(Channel.CHANNEL_1)
    time.sleep(5)
    awg.disable_channel(Channel.CHANNEL_1)
    
def test_user_defined_arbitrary_waveform():
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\new\Sawtooth\832_long'
    waveform_file = r'sawtooth_832.csv'
    waveform_filename = os.path.join(waveform_folder, waveform_file)

    awg.configure_sample_rate(1*10**9)
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.CONTINUOUS)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    
    wave_handle = awg.load_arbitrary_waveform_from_file(waveform_filename, Channel.CHANNEL_1)
    awg.enable_channel(Channel.CHANNEL_1)
    time.sleep(5)
    awg.disable_channel(Channel.CHANNEL_1)
    
def test_triggered_user_defined_arbitrary_waveform():
    waveform_folder =  r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\new\Sawtooth\832_long'
    waveform_file = r'sawtooth_832.csv'
    waveform_filename = os.path.join(waveform_folder, waveform_file)

    awg.configure_sample_rate(1.25*10**9)
    awg.configure_burst_count(Channel.CHANNEL_1, 10000)
    # THIS SHOULD BE OperationMode.BURST but that seems to only output 1 burst!
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.BURST)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    awg.configure_trigger_source(Channel.CHANNEL_1,WX218x_TriggerMode.SOFTWARE)
        
    wave_handle = awg.load_arbitrary_waveform_from_file(waveform_filename, Channel.CHANNEL_1)
    awg.enable_channel(Channel.CHANNEL_1)
    print 'Output enabled'
    time.sleep(3)
    print 'Sending trigger'
    awg.send_software_trigger()
    time.sleep(5)
    awg.disable_channel(Channel.CHANNEL_1)
    
def test_triggered_user_defined_arbitrary_sequence():
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms'
    waveform_file1 = r'sin_squared_800.asc'
    waveform_file2 = r'zero_192.asc'
    waveform_file3 = r'double_hump_800.asc'
    waveform_filename1 = os.path.join(waveform_folder, waveform_file1)
    waveform_filename2 = os.path.join(waveform_folder, waveform_file2)
    waveform_filename3 = os.path.join(waveform_folder, waveform_file3)

    awg.configure_sample_rate(1*10**9)
#     awg.configure_burst_count(Channel.CHANNEL_1, 2)
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.BURST)
    awg.configure_output_mode(WX218x_OutputMode.SEQUENCE)
    awg.configure_trigger_source(Channel.CHANNEL_1,WX218x_TriggerMode.SOFTWARE)
    
    wave_handle1 = awg.load_arbitrary_waveform_from_file(waveform_filename1, Channel.CHANNEL_1)
    wave_handle2 = awg.load_arbitrary_waveform_from_file(waveform_filename2, Channel.CHANNEL_1)
    wave_handle3 = awg.load_arbitrary_waveform_from_file(waveform_filename3, Channel.CHANNEL_1)
    
    awg.configure_once_count(Channel.CHANNEL_1, 12500)
    awg.configure_advance_mode(Channel.CHANNEL_1, WX218x_SequenceAdvanceMode.ONCE)
    
    waveform_handles = [wave_handle1, wave_handle2, wave_handle3, wave_handle2]
    loop_count = [1,1,1,1]
    jump_flag = [0,0,0,0]
    sequence_handle = awg.create_sequence_adv(waveform_handles, loop_count, jump_flag)
    
    awg.enable_channel(Channel.CHANNEL_1)
    print 'Output enabled'
    time.sleep(3)
    print 'Sending trigger'
    awg.send_software_trigger()
    time.sleep(5)
    awg.disable_channel(Channel.CHANNEL_1)
    
def test_markers():
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms'
    waveform_file1 = r'sin_squared_800.asc'
    waveform_file2 = r'zero_192.asc'
    waveform_file3 = r'double_hump_800.asc'
    waveform_filename1 = os.path.join(waveform_folder, waveform_file1)
    waveform_filename2 = os.path.join(waveform_folder, waveform_file2)
    waveform_filename3 = os.path.join(waveform_folder, waveform_file3)

    awg.configure_sample_rate(1*10**9)
#     awg.configure_burst_count(Channel.CHANNEL_1, 2)
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.BURST)
    awg.configure_output_mode(WX218x_OutputMode.SEQUENCE)
    awg.configure_trigger_source(Channel.CHANNEL_1, WX218x_TriggerMode.SOFTWARE)
    
    awg.configure_arb_wave_trace_mode(WX218x_TraceMode.DUPLICATE)
    
    wave_handle1 = awg.load_arbitrary_waveform_from_file(waveform_filename1, Channel.CHANNEL_1)
    wave_handle2 = awg.load_arbitrary_waveform_from_file(waveform_filename2, Channel.CHANNEL_1)
    wave_handle3 = awg.load_arbitrary_waveform_from_file(waveform_filename3, Channel.CHANNEL_1)
    
    awg.configure_marker(Channel.CHANNEL_1,
                     index=1,
                     source=WX218x_MarkerSource.WAVE,
                     position=0,
                     levels=(0,0.5),
                     delay=0,
                     width=500)
    
    awg.configure_once_count(Channel.CHANNEL_1, 2)
    awg.configure_advance_mode(Channel.CHANNEL_1, WX218x_SequenceAdvanceMode.ONCE)
    
    waveform_handles = [wave_handle1, wave_handle2, wave_handle3, wave_handle2]
    loop_count = [1,1,1,1]
    jump_flag = [0,0,0,0]
    sequence_handle = awg.create_sequence_adv(waveform_handles, loop_count, jump_flag)

    
    awg.enable_channel(Channel.CHANNEL_1)
    awg.enable_channel(Channel.CHANNEL_2)
    print 'Output enabled'
    time.sleep(1)
    print 'Sending trigger'
    awg.send_software_trigger()
    time.sleep(1)
    awg.disable_channel(Channel.CHANNEL_1)
    awg.disable_channel(Channel.CHANNEL_2)

def test_arb_markers():
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\tests\arb con'
    waveform_file = r'sin_squared_800_marked.wav'
    waveform_filename = os.path.join(waveform_folder, waveform_file)

    awg.configure_sample_rate(1*10**9)
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.CONTINUOUS)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    
    awg.configure_marker_source(Channel.CHANNEL_1, WX218x_MarkerSource.USER)
    
    wave_handle = awg.load_arbitrary_waveform_from_file(waveform_filename, Channel.CHANNEL_1)
    awg.enable_channel(Channel.CHANNEL_1)
    time.sleep(5)
    awg.disable_channel(Channel.CHANNEL_1)

def test_working_asc_files():

    import bitstring

    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\tests'
    waveform_good = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\tests\arb con\0to9.asc'
    waveform_bad = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\tests\mine\0to9.asc'
    
    def get_data(filename, raw=False):
        
        data = bitstring.ConstBitStream(filename=filename)
        print data
        print data.read(14).uint
        print data.unpack('int:16')
        
#         file = open(filename, 'rb')
#         data = []
#         while file:
#             byte = file.read(1)
#             if not byte:
#                 break
#             if not raw:
#                 data.append(byte)
#             else:
#                 data.append('{0:16b}'.format(ord(byte)))
#                  
#             
#         return data
#     
    print get_data(waveform_good)
    print get_data(waveform_bad)
#     print get_data(waveform_good, raw=True)
#     print get_data(waveform_bad,  raw=True)
#         

def test_manual_load():
#     waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\tests\mine'
#     waveform_file = r'sin_squared_800_oli.csv'
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\tests\mine'
    waveform_file = r'sin_squared_800.csv'
    waveform_filename = os.path.join(waveform_folder, waveform_file)

    awg.configure_sample_rate(1*10**9)
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.CONTINUOUS)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    awg.configure_arb_wave_trace_mode(WX218x_TraceMode.DUPLICATE)
    
    import csv
    with open(waveform_filename, 'rb') as csvfile:
        reader = csv.reader(csvfile, delimiter=',')
        data = []
        for row in reader:
            data += list(map(float, row))
        print data
    wave_handle = awg.create_arbitrary_waveform(data)
    
    print 'turning channels on...'
    awg.enable_channel(Channel.CHANNEL_1)
    awg.enable_channel(Channel.CHANNEL_2)
    time.sleep(5)
    awg.disable_channel(Channel.CHANNEL_1)
    awg.disable_channel(Channel.CHANNEL_2)
    print '...turning channels off'

def test_manual_load_dual_channel():
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\oli_old'
    waveform_file1 = r'sin_squared_800.csv'
    waveform_file2 = r'double_hump_800.csv'
    waveform_filename1 = os.path.join(waveform_folder, waveform_file1)
    waveform_filename2 = os.path.join(waveform_folder, waveform_file2)

    awg.configure_sample_rate(1.25*10**9)
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.CONTINUOUS)
#     awg.configure_operation_mode(Channel.CHANNEL_2, WX218x_OperationMode.CONTINUOUS)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    
    import csv
    def read_data(fname):
        with open(fname, 'rb') as csvfile:
            reader = csv.reader(csvfile, delimiter=',')
            data = []
            for row in reader:
                data += list(map(float, row))
        print data
        return data
    
    wave1_handle, wave2_handle = awg.create_custom_adv(read_data(waveform_filename1),
                                                       read_data(waveform_filename2))
    
    print 'turning channels on...'
    awg.enable_channel(Channel.CHANNEL_1)
    awg.enable_channel(Channel.CHANNEL_2)
    time.sleep(2)
    awg.disable_channel(Channel.CHANNEL_1)
    awg.disable_channel(Channel.CHANNEL_2)
    print '...turning channels off'

def test_triggered_user_defined_arbitrary_sequence_dual_channel():
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\oli_old'
    waveform_file1 = r'sin_squared_800.csv'
    waveform_file2 = r'double_hump_800.csv'
    waveform_filename1 = os.path.join(waveform_folder, waveform_file1)
    waveform_filename2 = os.path.join(waveform_folder, waveform_file2)

    awg.configure_sample_rate(1.25*10**9)
#     awg.configure_burst_count(Channel.CHANNEL_1, 2)
# THIS SHOULD BE OperationMode.BURST but that seems to only output 1 burst!
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.BURST)
    awg.configure_burst_count(Channel.CHANNEL_1, 10)
    
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    
    awg.configure_trigger_source(Channel.CHANNEL_1,WX218x_TriggerMode.SOFTWARE)
    awg.configure_arb_gain(Channel.CHANNEL_1, 2)
    awg.configure_arb_gain(Channel.CHANNEL_2, 2)
     
    import csv
    def read_data(fname):
        with open(fname, 'rb') as csvfile:
            reader = csv.reader(csvfile, delimiter=',')
            data = []
            for row in reader:
                if len(row) > 1:
                    data += list(map(float, row))
                else:
                    data += float(row[0])
        return data
    
    import numpy as np
    def create_marker_data(data_length, marker_positions=[], marker_levels=(0,1), marker_width=50):
        data = np.array([marker_levels[0]]*data_length)
        for pos in marker_positions:
            width = pos+marker_width if pos+marker_width < data_length else data_length
            data[pos:pos+width] = marker_levels[1]
        # This is a big fix. If the first element of the sequence is 1 (i.e. max high level)
        # then the channel remains high at the end of the sequence. Don't know why...
        if data[0]==1:
            data[0]=0.99
        return data
    
    wave1_data = read_data(waveform_filename1)
    wave2_data = read_data(waveform_filename2)
    data1 = wave1_data + [0]*192 + wave2_data + [0]*192
#     data2 = create_marker_data(len(data1),
#                                marker_positions=[0, len(wave1_data)+192],
#                                marker_levels=[0,1],
#                                marker_width=200)
    data2 = create_marker_data(len(data1),
                               marker_positions=[1],
                               marker_levels=[0,1],
                               marker_width=50)
    
    data2[0] = 0.99
    print max(data1), min(data1)
    print max(data2), min(data2)
    
    wave1_handle, wave2_handle = awg.create_custom_adv(data1, data2)
    
    marker_offset = 1191
    marker_width = 50
    
    awg.configure_marker(Channel.CHANNEL_1, 
                     1, 
                     source=WX218x_MarkerSource.WAVE,
                     position=marker_offset-marker_width/2,
                     levels=(0,1.2),
                     delay=0.,
                     width=50)
    
    awg.configure_marker(Channel.CHANNEL_1, 
                     2, 
                     source=WX218x_MarkerSource.WAVE,
                     position=2*marker_offset + marker_width/2,
                     levels=(0,1.2),
                     delay=0.,
                     width=50)
    
#     awg.marker_refresh(Channel.CHANNEL_2)
    
    awg.enable_channel(Channel.CHANNEL_1)
    awg.enable_channel(Channel.CHANNEL_2)
    
    print 'Output enabled'
    time.sleep(1)
    print 'Sending trigger'
    awg.send_software_trigger()
    time.sleep(2)
    awg.disable_channel(Channel.CHANNEL_1)
    awg.disable_channel(Channel.CHANNEL_2)

def test_modulate_data():
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\oli_old'
    waveform_file = r'flat_800.csv'
    
    awg.configure_sample_rate(1*10**9)
#     awg.configure_burst_count(Channel.CHANNEL_1, 2)
    awg.configure_burst_count(Channel.CHANNEL_1, 5)
    # THIS SHOULD BE OperationMode.BURST but that seems to only output 1 burst!
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.TRIGGER)
    awg.configure_trigger_source(Channel.CHANNEL_1,WX218x_TriggerMode.SOFTWARE)
    awg.configure_operation_mode(Channel.CHANNEL_2, WX218x_OperationMode.TRIGGER)
    awg.configure_trigger_source(Channel.CHANNEL_2,WX218x_TriggerMode.SOFTWARE)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    
    
    awg.configure_arb_gain(Channel.CHANNEL_1, 2)
    awg.configure_arb_gain(Channel.CHANNEL_2, 2)
    
    import csv
    def read_data(fname):
        with open(fname, 'rb') as csvfile:
            reader = csv.reader(csvfile, delimiter=',')
            data = []
            for row in reader:
                if len(row) > 1:
                    data += list(map(float, row))
                else:
                    data += float(row[0])
        return data
    
    import os
    import numpy as np
    wave_data = read_data(os.path.join(waveform_folder, waveform_file))
    
    def modulate_data(data, freq=80*10**6, phases=[], sample_rate=1*10**9):
        '''
        phases = [(phase1, index1), (phase2, index2),...]
        '''
        # Copy data to new object. We do not want to mutate origional data.
        mod_data = data[:]
        t_step = 2*np.pi/sample_rate
        phi = 0.
        phases = sorted(phases, key=lambda x:x[1]) # Sort phases into the order that they need to be applied.
        phases = map(lambda x: (x[0]/2,x[1]), phases) # Diveded phases by two for double passed AOM.
        next_phi, next_i_flip = (None, None) if not phases else phases.pop(0)
        print next_phi, next_i_flip
        for i in xrange(len(mod_data)):
            if i==next_i_flip:
                phi=next_phi
                next_phi, next_i_flip = None, None if not phases else phases.pop(0)
            mod_data[i] = mod_data[i]*np.sin(i*t_step*freq + phi)
        return mod_data
            
    mod_data1 = modulate_data(wave_data, freq=10*10**6, phases=[(2*np.pi, len(wave_data)/2)])
    print wave_data[0:10]
    mod_data2 = modulate_data(wave_data, freq=10*10**6, phases=[])
    print wave_data[0:10]
    
    wave_handle, x = awg.create_custom_adv(mod_data1, mod_data2)
    
    print 'turning channels on...'
    awg.enable_channel(Channel.CHANNEL_1)
    awg.enable_channel(Channel.CHANNEL_2)
    time.sleep(2)
    print 'sending trigger...'
    awg.send_software_trigger()
    time.sleep(3)
    awg.disable_channel(Channel.CHANNEL_1)
    awg.disable_channel(Channel.CHANNEL_2)
    print '...turning channels off'
    
def test_run_tone(freq=70*10**6):
    awg.set_active_channel(Channel.CHANNEL_1)
    awg.configure_standard_waveform(Channel.CHANNEL_1, WX218x_Waveform.SINE, frequency=freq, amplitude=2)
    awg.configure_output_mode(WX218x_OutputMode.FUNCTION)
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.CONTINUOUS)
    awg.enable_channel(Channel.CHANNEL_1)
    time.sleep(5)
    awg.disable_channel(Channel.CHANNEL_1)
   

def test_triggered_user_defined_arbitrary_sequence_dual_channel_with_markers():
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\new'
    waveform_file1 = r'single_sin4_95_624.csv'
    waveform_file2 = r'single_sin4_80_512.csv'
    waveform_filename1 = os.path.join(waveform_folder, waveform_file1)
    waveform_filename2 = os.path.join(waveform_folder, waveform_file2)

    awg.configure_sample_rate(1.25*10**9)
#     awg.configure_burst_count(Channel.CHANNEL_1, 2)
    # THIS SHOULD BE OperationMode.BURST but that seems to only output 1 burst!
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.BURST)
    awg.configure_burst_count(Channel.CHANNEL_1, 10)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    awg.configure_trigger_source(Channel.CHANNEL_1,WX218x_TriggerMode.SOFTWARE)
    awg.configure_arb_gain(Channel.CHANNEL_1, 2)
    awg.configure_arb_gain(Channel.CHANNEL_2, 2)
    
    import csv
    def read_data(fname):
        with open(fname, 'rb') as csvfile:
            reader = csv.reader(csvfile, delimiter=',')
            data = []
            for row in reader:
                if len(row) > 1:
                    data += list(map(float, row))
                else:
                    data += float(row[0])
        return data
    
    import numpy as np
    def create_marker_data(data_length, marker_positions=[], marker_levels=(0,1), marker_width=50):
        data = np.array([marker_levels[0]]*data_length)
        for pos in marker_positions:
            width = pos+marker_width if pos+marker_width < data_length else data_length
            data[pos:pos+width] = marker_levels[1]
        # This is a big fix. If the first element of the sequence is 1 (i.e. max high level)
        # then the channel remains high at the end of the sequence. Don't know why...
        if data[0]==1:
            data[0]=0.99
        return data
    
    wave1_data = read_data(waveform_filename1)
    wave2_data = read_data(waveform_filename2)
    data1 = wave1_data + [0]*192 + wave2_data + [0]*192
#     data2 = create_marker_data(len(data1),
#                                marker_positions=[0, len(wave1_data)+192],
#                                marker_levels=[0,1],
#                                marker_width=200)
    data2 = create_marker_data(len(data1),
                               marker_positions=[1],
                               marker_levels=[0,1],
                               marker_width=100)
    
    data2[0] = 0.99
    print max(data1), min(data1)
    print max(data2), min(data2)
    
    awg.configure_marker(Channel.CHANNEL_1, 
                     1, 
                     source=WX218x_MarkerSource.USER,
                     position=50,
                     levels=(0,1.2),
                     delay=0.,
                     width=64)
    
    wave1_handle, wave2_handle = awg.create_custom_adv(data1, data2)
    
    awg.enable_channel(Channel.CHANNEL_1)
    awg.enable_channel(Channel.CHANNEL_2)
    print 'Output enabled'
    time.sleep(0.5)
    print 'Sending trigger'
    awg.send_software_trigger()
    time.sleep(1)
    awg.disable_channel(Channel.CHANNEL_1)
    awg.disable_channel(Channel.CHANNEL_2)

def test_triggered_user_defined_arbitrary_sequence_dual_channel_with_markers_3Ch():
    waveform_folder = r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\new'
    waveform_file1 = r'single_sin4_95_624.csv'
    waveform_file2 = r'single_sin4_80_512.csv'
    waveform_filename1 = os.path.join(waveform_folder, waveform_file1)
    waveform_filename2 = os.path.join(waveform_folder, waveform_file2)

    awg.configure_sample_rate(1.25*10**9)
#     awg.configure_burst_count(Channel.CHANNEL_1, 2)
    # THIS SHOULD BE OperationMode.BURST but that seems to only output 1 burst!
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.BURST)
    awg.configure_burst_count(Channel.CHANNEL_1, 10)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    awg.configure_trigger_source(Channel.CHANNEL_1,WX218x_TriggerMode.SOFTWARE)
    awg.configure_arb_gain(Channel.CHANNEL_1, 2)
    awg.configure_arb_gain(Channel.CHANNEL_2, 2)
#     
    awg.configure_operation_mode(Channel.CHANNEL_3, WX218x_OperationMode.BURST)
    awg.configure_burst_count(Channel.CHANNEL_3, 10)
    awg.configure_trigger_source(Channel.CHANNEL_3,WX218x_TriggerMode.SOFTWARE)
    awg.configure_arb_gain(Channel.CHANNEL_3, 2)
    awg.configure_arb_gain(Channel.CHANNEL_4, 2)
    
    import csv
    def read_data(fname):
        with open(fname, 'rb') as csvfile:
            reader = csv.reader(csvfile, delimiter=',')
            data = []
            for row in reader:
                if len(row) > 1:
                    data += list(map(float, row))
                else:
                    data += float(row[0])
        return data
    
    import numpy as np
    def create_marker_data(data_length, marker_positions=[], marker_levels=(0,1), marker_width=50):
        data = np.array([marker_levels[0]]*data_length)
        for pos in marker_positions:
            width = pos+marker_width if pos+marker_width < data_length else data_length
            data[pos:pos+width] = marker_levels[1]
        # This is a big fix. If the first element of the sequence is 1 (i.e. max high level)
        # then the channel remains high at the end of the sequence. Don't know why...
        if data[0]==1:
            data[0]=0.99
        return data
    
    wave1_data = read_data(waveform_filename1)
    wave2_data = read_data(waveform_filename2)
    data1 = wave1_data + [0]*192 + wave2_data + [0]*192
#     data2 = create_marker_data(len(data1),
#                                marker_positions=[0, len(wave1_data)+192],
#                                marker_levels=[0,1],
#                                marker_width=200)
    data2 = create_marker_data(len(data1),
                               marker_positions=[1],
                               marker_levels=[0,1],
                               marker_width=100)
    
    data2[0] = 0.99
    print max(data1), min(data1)
    print max(data2), min(data2)
    
    awg.configure_marker(Channel.CHANNEL_1, 
                     1, 
                     source=WX218x_MarkerSource.USER,
                     position=50,
                     levels=(0,1.2),
                     delay=0.,
                     width=64)
    

    
#     awg.configure_dig_patt_delay_mode(Channel.CHANNEL_1, WX218x_DigPatternDelayMode.COMMON)
#     wave1_handle, wave2_handle = awg.create_custom_adv(data1, data2)
#     awg.set_active_channel(Channel.CHANNEL_3)
    
    awg.configure_arb_wave_trace_mode(WX218x_TraceMode.SINGLE)
    awg.configure_couple_enabled(True)
    
    awg.create_arbitrary_waveform_custom(data1)
    awg.set_active_channel(Channel.CHANNEL_2)
    awg.create_arbitrary_waveform_custom(data2)
    awg.set_active_channel(Channel.CHANNEL_3)
    awg.create_arbitrary_waveform_custom(data1)
    
#     wave3_handle, wave4_handle = awg.create_custom_adv(data1, data2)
#
    awg.enable_channel(Channel.CHANNEL_1)
    awg.enable_channel(Channel.CHANNEL_2)
    awg.enable_channel(Channel.CHANNEL_3)
    print 'Output enabled'
    time.sleep(0.5)
    print 'Sending trigger'
    awg.send_software_trigger()
    time.sleep(1)
    awg.disable_channel(Channel.CHANNEL_1)
    awg.disable_channel(Channel.CHANNEL_2)
    awg.disable_channel(Channel.CHANNEL_3)
    
    
print 'Creating AWG instance'
awg = WX218x_awg()

print 'Connecting...'
awg.open(reset=False)
print '...connected'

# awg.clear_arbitrary_sequence()
# awg.clear_arbitrary_waveform()

# awg.reset()

# test_standard_waveform()
# test_standard_waveform(Channel.CHANNEL_3)
# test_triggered_user_defined_arbitrary_waveform()
# test_triggered_user_defined_arbitrary_sequence()
# test_arb_markers()
# test_markers()
# test_working_asc_files()
# test_manual_load()

# test_manual_load_dual_channel()
# time.sleep(1)
# test_triggered_user_defined_arbitrary_sequence_dual_channel()

# test_modulate_data()
# 
# awg.configure_standard_waveform(Channel.CHANNEL_1, WX218x_Waveform.SINE, frequency=80*10**6, amplitude=2)
# for f in [60,70,80,90]:
#     print 'freq:', f
#     test_run_tone(f*10**6)
#     time.sleep(1)
# test_triggered_user_defined_arbitrary_sequence_dual_channel()
test_triggered_user_defined_arbitrary_sequence_dual_channel_with_markers_3Ch()
'''
this one to un-fuck AWG
'''
# test_triggered_user_defined_arbitrary_sequence_dual_channel()

print 'Closing connection...'
awg.close()
print '...closed'
