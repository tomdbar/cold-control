'''
A convienince file of functions used to generate calibration files for

    - FAMO frequency as a fn of V input
    - Power on ThorLabs 100A as a fuction of V

Created on 6 May 2016

@author: apc
'''

import os
import serial
import time
import numpy as np
from Config import ConfigReader, DaqReader
import matplotlib.pyplot as plt
import re
from instruments.TF930 import TF930
from instruments.ThorlabsPM100 import ThorlabsPM100
import visa
# from sympy.physics.quantum.circuitplot import matplotlib
'''
Load required classes for awg driven AOM calibration
'''
from instruments.WX218x.WX218x_awg import WX218x_awg, Channel
from instruments.WX218x.WX218x_DLL import WX218x_OperationMode, WX218x_Waveform, WX218x_OutputMode
from ExperiementalRunner import Waveform
    
class CalibrationException(Exception):
    
    def __init__(self, message):
        # Call the base class constructor with the parameters it needs
        super(CalibrationException, self).__init__(message)

def get_default_calibration_Vstep():
    '''Returns the smallest resolvable voltage step a 4096 bit digital output corresponding to -10 to 10V can make.
    i.e. the voltage resolution of the DAQ-2502 cards.'''
    f = lambda x: np.interp(x, (0,4095), (-10,10))
    return f(1) - f(0)
    
def calibrate_frequency(daq_controller, chNum_to_calibrate, calibration_V_range = (0,10),
                        calibration_V_step = get_default_calibration_Vstep(), 
                        writeToQueryDelay=0.1, queryToReadDelay=0.3):
    '''Creates a calibration file between the voltage given to an AOM and the frequency output.
        daq_controller - a DAQ_controller object to un the DAQ cards.
        chNum_to_calibrate - The channel number which is attahed to the AOM input
        calibration_V_range - A voltage range to calibrate between of the form (V_min, V_max).
        calibration_V_step - The voltage step over between taking calibration measurements. The default is calculated to be
                             equivilent to increasing the digital output on a 4096-bit channel with a -10 to 10V output range.
        writeToQueryDelay - How long to wait between writing a new voltage and querying the frequency counter
        queryToReadDelay - How long to wait between querying the frequency counter and reading the output
                           NOTE: the shortest measurement time on the TF930 is 0.3s'''
    
    try:
        counter = TF930.TF930(port='COM5')
    except serial.serialutil.SerialException as err:
        print 'Calibration failed - frequency counter could not be found'
        raise err

    # Run through the voltages and record the TF930 output
    vData, calData = [], []
    print 'Running through voltages...might take a while...'
    for v in np.arange(calibration_V_range[0], calibration_V_range[1]+calibration_V_step, calibration_V_step):
#         print v
        daq_controller.updateChannelValue(chNum_to_calibrate, v)
        time.sleep(writeToQueryDelay)
        vData.append(v)
        calData.append(counter.query('N?', delay=queryToReadDelay))
    print '...finished!'
    # Parse the output, once for units and once for values  
    r = r'([\d|\.|e|\+]+)([a-zA-Z]*)\r\n'
    
    units = ''
    while units == '':
        for i in range(0, len(calData)):
            match = re.match(r, calData[i])
            if match:
                units = match.group(2)
                break
    
    parsedData = []
    nBadPoints = 0
    for i in range(0, len(calData)):
        match = re.match(r, calData[i])
        if match:
            parsedData.append(match.group(1))
        else:
            # If there was unexpected output (e.g. when the delays before reading are wrong)
            # then remove the corresponding data point from vData
            nBadPoints += 1
            vData.pop(i - nBadPoints)
        
    print 'Removed {0} bad data points'.format(nBadPoints)
    
    # Just a hack to convert Hz to MHz as it's nicer.    
    if units == 'Hz':
        parsedData = map(lambda x: float(x)/10**6, parsedData)
        units = 'MHz'
        
    return vData, parsedData, units

def calibrate_absolute_power(daq_controller, chNum_to_calibrate, calibration_V_range = (0,10), 
                    calibration_V_step = get_default_calibration_Vstep(), writeToQueryDelay=0.1,
                    nMeasurmentCounts = 1):
    '''Creates a calibration file between the voltage given to an AOM and absolute power output.
    daq_controller      - a DAQ_controller object to un the DAQ cards.
    chNum_to_calibrate  - The channel number which is attahed to the AOM input
    calibration_V_range - A voltage range to calibrate between of the form (V_min, V_max).
    calibration_V_step  - The voltage step over between taking calibration measurements. The default is calculated to be
                          equivilent to increasing the digital output on a 4096-bit channel with a -10 to 10V output range.
    writeToQueryDelay   - How long to wait between writing a new voltage and querying the frequency counter.
    nMeasurementCounts  - How many measurements to take and average over when reading a value from the power meter
                          (note 1 measurement is about 3ms).'''
    # Find and configure a power meter connected to the computer
    power_meter = get_power_meter()
    if power_meter == None:
        print 'Calibration failed - power meter could not be found'
        raise CalibrationException('Calibration failed - power meter could not be found')
    configure_power_meter(power_meter, nMeasurmentCounts=nMeasurmentCounts)
    
    # Run through the voltages and record the TF930 output
    vData, calData = [], []
    print 'Running through voltages...might take a while...'
    for v in np.arange(calibration_V_range[0], calibration_V_range[1]+calibration_V_step, calibration_V_step):
        print v
        daq_controller.updateChannelValue(chNum_to_calibrate, v)
        time.sleep(writeToQueryDelay)
        vData.append(v)
        calData.append(power_meter.read)
    print '...finished!'

    units = str( power_meter.sense.power.dc.unit.split('\n')[0] )
    print type(units), repr(units)
    # Just a hack to convert W to uW as it's nicer.    
    if units == 'W':
        calData = map(lambda x: float(x) * 10**6, calData)
        units = 'uW'
    
    '''Deleting the power_meter allows the garbage collector to delete the pyvisa connection.
    This way if we call get_power_meter() again (e.g. if we are recursivley creating calibration
    files) we don't throw an error due to an already open conneciton.'''    
    del power_meter
        
    return vData, calData, units

def calibrate_percentage_power(daq_controller, chNum_to_calibrate, calibration_V_range = (0,7), calibration_perc_lims = (0,0.9),
                    calibration_V_step = get_default_calibration_Vstep(), writeToQueryDelay=0.1,
                    nMeasurmentCounts = 3):
    '''Creates a calibration file between the voltage given to an AOM and percentage of the maximum power output.
    Note that for this to work you will want to check that the maximum power output from the AOM is given at a
    voltage within the calibration_V_range!
    daq_controller      - a DAQ_controller object to un the DAQ cards.
    chNum_to_calibrate  - The channel number which is attached to the AOM input
    calibration_V_range - A voltage range to calibrate between of the form (V_min, V_max).
    calibration_perc_lims - The percentage power range to allow calibration between.
                            i.e. (0,90) will only give the user access to 0 to 90% of the power.
                            This can be more stable if the calibation if very sensitive at the extreme ranges.
    calibration_V_step  - The voltage step over between taking calibration measurements. The default is calculated to be
                          equivilent to increasing the digital output on a 4096-bit channel with a -10 to 10V output range.
    writeToQueryDelay   - How long to wait between writing a new voltage and querying the frequency counter.
    nMeasurementCounts  - How many measurements to take and average over when reading a value from the power meter
                          (note 1 measurement is about 3ms).'''
    # Find and configure a power meter connected to the computer
    power_meter = get_power_meter()
    if power_meter == None:
        print 'Calibration failed - power meter could not be found'
        raise CalibrationException('Calibration failed - power meter could not be found')
    configure_power_meter(power_meter, nMeasurmentCounts=nMeasurmentCounts)
    
    # Run through the voltages and record the TF930 output
    vData, calData = [], []
    print 'Running through voltages...might take a while...'
    for v in np.arange(calibration_V_range[0], calibration_V_range[1]+calibration_V_step, calibration_V_step):
        print v
        daq_controller.updateChannelValue(chNum_to_calibrate, v)
        time.sleep(writeToQueryDelay)
        vData.append(v)
        calData.append(power_meter.read)
    print '...finished!'

    absMinIndex, absMaxIndex = calData.index(min(calData)),  calData.index(max(calData))
    
    calData=calData[:absMaxIndex+1]
    
    indexMin = min(range(len(calData)), key=lambda i: abs(calData[i]- (min(calData) + calibration_perc_lims[0]*max(calData)) ))
    indexMax = min(range(len(calData)), key=lambda i: abs(calData[i]- (max(calData)*calibration_perc_lims[1])) )
    
    print indexMin, indexMax
    
    vData, calData = vData[indexMin:indexMax+1], calData[indexMin:indexMax+1]

    def normalise(values):
        mi, ma = min(values),max(values)
        ran = ma - mi
        return [(l-mi)/ran for l in values]
    
    calData = [100*x for x in normalise(calData)]

    units = '%'
    
    '''Deleting the power_meter allows the garbage collector to delete the pyvisa connection.
    This way if we call get_power_meter() again (e.g. if we are recursivley creating calibration
    files) we don't throw an error due to an already open conneciton.'''    
    del power_meter
        
    return vData, calData, units
    
def get_power_meter():
    '''Finds a Thor Labs PM100A power_meter if one is connected and returns a ThorlabsPM100 instance
    for it.  If no power meter is found the function returns None'''
    rm = visa.ResourceManager()
    power_meter = None
    for resource in rm.list_resources():
        inst = rm.get_instrument(resource)
        print inst.query("*IDN?").split(',')
        if inst.query("*IDN?").split(',')[1] == 'PM100A':
            power_meter = ThorlabsPM100(inst)
            break # --> Thorlabs,PM100A,P1002563,2.3.0
    
    return power_meter

def configure_power_meter(power_meter, nMeasurmentCounts = 1):
    '''Configures the power meter, see https://pypi.python.org/pypi/ThorlabsPM100 for full details for a full list of commands.
    Most options are hard coded as I don't see any need to change them right now.
    
        power_meter = A ThorlabsPM100 instance to configure.
        nMeasurementCounts - How many measurements to take and average over when reading a value from the power meter
                             (note 1 measurement is about 3ms).
    
    '''
    power_meter.sense.correction.wavelength = 780
    power_meter.sense.power.dc.range.auto = 'ON'
    power_meter.sense.power.dc.unit = 'W'
    power_meter.sense.average.count = nMeasurmentCounts

def create_calibration_file(fname, levelData, parsedData, units, level_units='V'):
    
    fname = '{0}.txt'.format(fname)
    
    f = open(fname, 'a')
    print 'created: ', fname
    lineArgs =  [('V', units)]
    lineArgs += zip(levelData, parsedData)
    for args in lineArgs:
        f.write('{0}\t{1}\n'.format(*args))
    f.close()
    print 'written: ', fname
    
def save_calibration_plot(fname, vData, calData, units, title):
    
    fig = plt.figure()
    
    ax = fig.add_subplot(111)
    fig.subplots_adjust(top=0.85)
    ax.set_title(title)
    
    ax.set_xlabel('V')
    ax.set_ylabel(units)
    
    ax.plot(vData, calData)
    
    plt.savefig(fname)

    
def calibrate_awg_driven_aom_response(
                                  freqs,
                                  awg_channel = Channel.CHANNEL_1,
                                  level_step=0.1,
                                  nMeasurmentCounts=3,
                                  writeToQueryDelay=0.2,
                                  save_location = os.path.join(os.getcwd(), 'calibrations','new_awg_driven_aom_calib')):
    


    class testWaveform(Waveform):
        '''
        Subclass of waveform to enable us to easily generate rf signals of different amplitudes.
        Level is in (0,1) - it corresponds to the (-1,1) range that waveforms loaded into the
        awg are defined in.  Note that a negative level only flips the phase of the rf signal,
        hence why we only need to calibrate for positive levels.
        '''
        def __init__(self, level=1, mod_freq=75.25*10**6):
            self.mod_frequency = mod_freq
            self.phases = []
            self.t_step = 2*np.pi/sample_rate
            self.calib(level, self.mod_frequency)
            
        def calib(self, level, mod_freq):
            self.level = level
            self.data = [self.level]*800
            self.mod_frequency = mod_freq

    # Open and configure the AWG
    sample_rate = 1.25*10**9

    print 'Creating AWG instance'
    awg = WX218x_awg()
    print 'Connecting...'
    awg.open(reset=False)
    
    awg.configure_operation_mode(awg_channel, WX218x_OperationMode.CONTINUOUS)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    awg.configure_sample_rate(sample_rate)
    awg.configure_arb_gain(awg_channel, 2)
    
    power_meter = get_power_meter()
    if power_meter == None:
        print 'Calibration failed - power meter could not be found'
        raise CalibrationException('Calibration failed - power meter could not be found')
    configure_power_meter(power_meter, nMeasurmentCounts=nMeasurmentCounts)
    
    for freq in freqs:
        # Run through the voltages and record the TF930 output
        level = 0
        levelData, calData = [], []
        print 'Running through awg levels...might take a while...'
        while level <=1:
            
            print 'Level:', level
            
            wf = testWaveform(level=level, mod_freq=freq*10**6)
            awg.create_custom_adv(wf.get(sample_rate), wf.get(sample_rate))
             
            awg.enable_channel(awg_channel)
            time.sleep(writeToQueryDelay)
            levelData.append(level)
            calData.append(power_meter.read)
            
            print calData[-1]
            
            awg.disable_channel(awg_channel)
            level+=level_step
            
        print '...finished taking data'
        
        save_plot_location = os.path.join(save_location, 'plots')
        if not os.path.isdir(save_plot_location):
            os.makedirs(save_plot_location)
        
        save_calibration_plot(os.path.join(save_plot_location,'{0}MHz_abs_power.png'.format(freq)), levelData, calData, "W", "{0}MHz: Power vs level".format(freq))
        
        indexMin, indexMax = calData.index(min(calData)), calData.index(max(calData))
     
        levelData, calData = levelData[indexMin:indexMax+1], calData[indexMin:indexMax+1]
     
        def normalise(values):
            mi, ma = min(values),max(values)
            ran = ma - mi
            return [(l-mi)/ran for l in values]
         
        calData = [100*x for x in normalise(calData)]
     
        save_calibration_plot(os.path.join(save_location, 'plots','{0}MHz_rel_power.png'.format(freq)), levelData, calData, "%", "{0}MHz: % Power vs level".format(freq))
        create_calibration_file(os.path.join(save_location,'{0}MHz'.format(freq)), levelData, calData, units='%', level_units='level')
    
    print 'Resetting awg...',
    awg.reset()
    print 'calibration finished.'
    awg.close()

    '''Deleting the power_meter allows the garbage collector to delete the pyvisa connection.
    This way if we call get_power_meter() again (e.g. if we are recursivley creating calibration
    files) we don't throw an error due to an already open conneciton.'''    
    del power_meter
 
 
def calibrate_stirap_aom_response(freqs,
                                  level_step=0.1,
                                  nMeasurmentCounts=3,
                                  writeToQueryDelay=0.2,
                                  save_location = os.path.join(os.getcwd(), 'calibrations','stirap_awg')):
    
    '''
    Load required classes
    '''
    from instruments.WX218x.WX218x_awg import WX218x_awg, Channel
    from instruments.WX218x.WX218x_DLL import WX218x_OperationMode, WX218x_Waveform, WX218x_OutputMode
    from ExperiementalRunner import Waveform

    class testWaveform(Waveform):
        '''
        Subclass of waveform to enable us to easily generate rf signals of different amplitudes.
        Level is in (0,1) - it corresponds to the (-1,1) range that waveforms loaded into the
        awg are defined in.  Note that a negative level only flips the phase of the rf signal,
        hence why we only need to calibrate for positive levels.
        '''
        def __init__(self, level=1, mod_freq=75.25*10**6):
            self.mod_frequency = mod_freq
            self.phases = []
            self.t_step = 2*np.pi/sample_rate
            self.calib(level, self.mod_frequency)
            
        def calib(self, level, mod_freq):
            self.level = level
            self.data = [self.level]*800
            self.mod_frequency = mod_freq

    # Open and configure the AWG
    sample_rate = 1.25*10**9

    print 'Creating AWG instance'
    awg = WX218x_awg()
    print 'Connecting...'
    awg.open(reset=False)
    
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.CONTINUOUS)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    awg.configure_sample_rate(sample_rate)
    awg.configure_arb_gain(Channel.CHANNEL_1, 2)
    awg.configure_arb_gain(Channel.CHANNEL_2, 2)
    
    power_meter = get_power_meter()
    if power_meter == None:
        print 'Calibration failed - power meter could not be found'
        raise CalibrationException('Calibration failed - power meter could not be found')
    configure_power_meter(power_meter, nMeasurmentCounts=nMeasurmentCounts)
    
    for freq in freqs:
        # Run through the voltages and record the TF930 output
        level = 0
        levelData, calData = [], []
        print 'Running through awg levels...might take a while...'
        while level <=1:
            
            print 'Level:', level
            
            wf = testWaveform(level=level, mod_freq=freq*10**6)
            awg.create_custom_adv(wf.get(sample_rate), wf.get(sample_rate))
             
            awg.enable_channel(Channel.CHANNEL_1)
            time.sleep(writeToQueryDelay)
            levelData.append(level)
            calData.append(power_meter.read)
            
            print calData[-1]
            
            awg.disable_channel(Channel.CHANNEL_1)
            level+=level_step
            
        print '...finished!'
        
        save_plot_location = os.path.join(save_location, 'plots')
        if not os.path.isdir(save_plot_location):
            os.makedirs(save_plot_location)
        
        save_calibration_plot(os.path.join(save_plot_location,'{0}MHz_abs_power.png'.format(freq)), levelData, calData, "W", "{0}MHz: Power vs level".format(freq))
        
        indexMin, indexMax = calData.index(min(calData)), calData.index(max(calData))
     
        levelData, calData = levelData[indexMin:indexMax+1], calData[indexMin:indexMax+1]
     
        def normalise(values):
            mi, ma = min(values),max(values)
            ran = ma - mi
            return [(l-mi)/ran for l in values]
         
        calData = [100*x for x in normalise(calData)]
     
        save_calibration_plot(os.path.join(save_location, 'plots','{0}MHz_rel_power.png'.format(freq)), levelData, calData, "%", "{0}MHz: % Power vs level".format(freq))
        create_calibration_file(os.path.join(save_location,'{0}MHz'.format(freq)), levelData, calData, units='%', level_units='level')
        
    awg.close()

    '''Deleting the power_meter allows the garbage collector to delete the pyvisa connection.
    This way if we call get_power_meter() again (e.g. if we are recursivley creating calibration
    files) we don't throw an error due to an already open conneciton.'''    
    del power_meter
 
def test_stirap_aom_freq_response(level=0.5,
                                  freqs=xrange(60,90,1),
                                  nMeasurmentCounts=3,
                                  writeToQueryDelay=0.2):
    
    '''
    Load required classes
    '''
    from instruments.WX218x.WX218x_awg import WX218x_awg, Channel
    from instruments.WX218x.WX218x_DLL import WX218x_OperationMode, WX218x_Waveform, WX218x_OutputMode
    from ExperiementalRunner import Waveform

    class testWaveform(Waveform):
        '''
        Subclass of waveform to enable us to easily generate rf signals of different amplitudes.
        Level is in (0,1) - it corresponds to the (-1,1) range that waveforms loaded into the
        awg are defined in.  Note that a negative level only flips the phase of the rf signal,
        hence why we only need to calibrate for positive levels.
        '''
        def __init__(self, level=1, mod_freq=75.25*10**6):
            self.mod_frequency = mod_freq
            self.phases = []
            self.t_step = 2*np.pi/sample_rate
            self.calib(level, self.mod_frequency)
            
        def calib(self, level, mod_freq):
            self.level = level
            self.data = [self.level]*800
            self.mod_frequency = mod_freq

    # Open and configure the AWG
    sample_rate = 1.25*10**9

    print 'Creating AWG instance'
    awg = WX218x_awg()
    print 'Connecting...'
    awg.open(reset=False)
    
    awg.configure_operation_mode(Channel.CHANNEL_1, WX218x_OperationMode.CONTINUOUS)
    awg.configure_output_mode(WX218x_OutputMode.ARBITRARY)
    awg.configure_sample_rate(sample_rate)
    awg.configure_arb_gain(Channel.CHANNEL_1, 2)
    awg.configure_arb_gain(Channel.CHANNEL_2, 2)
    
    power_meter = get_power_meter()
    if power_meter == None:
        print 'Calibration failed - power meter could not be found'
        raise CalibrationException('Calibration failed - power meter could not be found')
    configure_power_meter(power_meter, nMeasurmentCounts=nMeasurmentCounts)
    
    calData = []
    
    for freq in freqs:
        # Run through the voltages and record the TF930 output
    
        print 'freq:', freq
        
        wf = testWaveform(level=level, mod_freq=freq*10**6)
        awg.create_custom_adv(wf.get(sample_rate), wf.get(sample_rate))
        
        awg.enable_channel(Channel.CHANNEL_1)
        time.sleep(writeToQueryDelay)
        calData.append(power_meter.read)
        
        print calData[-1]
        
        awg.disable_channel(Channel.CHANNEL_1)

    awg.reset()
    awg.close()

    '''Deleting the power_meter allows the garbage collector to delete the pyvisa connection.
    This way if we call get_power_meter() again (e.g. if we are recursivley creating calibration
    files) we don't throw an error due to an already open conneciton.'''    
    del power_meter
   
    fig = plt.figure()
    
    ax = fig.add_subplot(111)
    fig.subplots_adjust(top=0.85)
    
    ax.set_xlabel('freq')
    ax.set_ylabel('W')
    
    ax.plot(freqs, calData)
    
    plt.show()
    
if __name__ == "__main__":
#     test_stirap_aom_freq_response()
# [61.25,65.25,70.25,75.25,80.25,85.25,89.25]
#     calibrate_stirap_aom_response(freqs=[60.1,90.4], level_step=0.004, nMeasurmentCounts=5, writeToQueryDelay=0.3)
#     
    calibrate_awg_driven_aom_response(awg_channel=Channel.CHANNEL_1, freqs=[83.25,88.25,89.25], level_step=0.004, nMeasurmentCounts=5, writeToQueryDelay=0.3,
                                      save_location=os.path.join(os.getcwd(), 'calibrations','stirap_awg'))
    
    # AMP calib
   
#     def getCalibName(aom_name, freq):
#         return '{0}_amp_at_{1}MHz'.format(aom_name, freq)
#    
#  
#     aom_name = 'cool_lower'
#     amp_channel = 5
#     freq_ch = 1
#     freq_v = [6.473,6.104,5.16,4.2,3.24]
#     aom_freqs = [102,100,95,90,85]
#   
#     aom_name = 'cool_center'
#     amp_channel = 6
#     freq_ch = 2
# #     freq_v = [6.412,6.051,5.113,4.16,3.2087]
# #     aom_freqs = [102,100,95,90,85]
#     freq_v = [6.412]
#     aom_freqs = [102]
  
#     aom_freqs = [100]
    
#     
#     aom_name = 'cool_upper'
#     freq_ch = 0
#     amp_channel = 4
#     
#     freq_v = [6.1]
#     aom_freqs = [100]
#    
#     config_reader = ConfigReader(os.getcwd() + '/configs/rootConfig')
#     daq_config_fname = config_reader.get_daq_config_fname()
#       
#     daq_controller = DaqReader(daq_config_fname).load_DAQ_controller()
#     daq_controller.continuousOutput=True 
#     
#     for freq, v in zip(aom_freqs,freq_v):  
#        
#         calibName = '{0}_amp_at_{1}MHz_new'.format(aom_name, freq)
#                    
#         daq_controller.updateChannelValue(freq_ch, v)
#         time.sleep(3)
#         vData, calData, units = calibrate_percentage_power(daq_controller, amp_channel, (0,6.5),
#                                                            calibration_V_step = get_default_calibration_Vstep()*5,
#                                                            writeToQueryDelay = 0.5)
#            
#         create_calibration_file(os.getcwd() + '/calibrations/{0}/{1}'.format(aom_name, calibName), vData, calData, units)
#         save_calibration_plot(os.getcwd() + '/calibrations/{0}/{1}_plot.png'.format(aom_name, calibName), vData, calData, units, 'freq = {0}MHz'.format(freq))
#          
#     for freq, v in zip(aom_freqs,freq_v):  
#    
#         calibName = '{0}_abs_amp_at_{1}MHz'.format(aom_name, freq)
#                    
#         daq_controller.updateChannelValue(freq_ch, v)
#         time.sleep(3)
#         vData, calData, units = calibrate_absolute_power(daq_controller, amp_channel, (0,7), calibration_V_step=0.05, writeToQueryDelay=0.05)
#            
#         create_calibration_file(os.getcwd() + '/calibrations/{0}/{1}'.format(aom_name, calibName), vData, calData, units)
#         save_calibration_plot(os.getcwd() + '/calibrations/{0}/{1}_plot.png'.format(aom_name, calibName), vData, calData, units, 'freq = {0}MHz'.format(freq))
#           
#     daq_controller.releaseAll()
#      
    # Freq calib
    
#     aom_name = 'repump_offset_lock_vco'
#       
#     config_reader = ConfigReader(os.getcwd() + '/configs/rootConfig')
#     daq_config_fname = config_reader.get_daq_config_fname()   
#     daq_controller = DaqReader(daq_config_fname).load_DAQ_controller()
#     daq_controller.continuousOutput=True
#            
#     calibName = "{0}_freq".format(aom_name)   
#     vData, calData, units = calibrate_frequency(daq_controller, 21, (-10,10), calibration_V_step = get_default_calibration_Vstep())
#        
#     create_calibration_file(os.getcwd() + '/calibrations/{0}'.format(calibName), vData, calData, units)
#     save_calibration_plot(os.getcwd() + '/calibrations/{0}_plot.png'.format(calibName), vData, calData, units, '{0}_plot'.format(calibName))
#     daq_controller.releaseAll()
#     