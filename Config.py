'''
Created on 22 Apr 2016

@author: Tom Barrett
'''

from configobj import ConfigObj
from DAQ import DAQ_controller, DAQ_card, DAQ_channel, DAQ_dio, OUTPUT_LINE, INPUT_LINE, Channel_P1A, Channel_P1B, Channel_P1C, Channel_P1CL, Channel_P1CH,\
    Channel_P2A
from instruments.WX218x.WX218x_awg import Channel
from Sequence import Sequence
from ExperiementalRunner import AbsorbtionImagingConfiguration, PhotonProductionConfiguration, AwgConfiguration, TdcConfiguration, Waveform, ExperimentalAutomationConfiguration, AutomatedExperimentConfiguration
import time
import os
from mock import patch
import numpy as np

GLOB_TRUE_BOOL_STRINGS = ['true', 't', 'yes', 'y']

def toBool(string):
    return string.lower() in GLOB_TRUE_BOOL_STRINGS

class ConfigReader(object):
    
    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
        
    def get_sequence_fname(self):
        return self.config['sequence filename']
    
    def get_daq_config_fname(self):
        return self.config['daq config filename']
    
    def get_absorbtion_imaging_config_fname(self):
        return self.config['absorbtion images config filename']
    
    def get_photon_production_config_fname(self):
        return self.config['photon production config filename']
    
    def is_development_mode(self):
        return toBool(self.config['development mode'])
    
class ConfigWriter(object):
    
    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
    
    def save(self, sequence_fname, daq_config_fname, absorbtion_imaging_config_fname, photon_production_config_fname):
            
        self.config['date'] = time.strftime("%d/%m/%y")
        self.config['time'] = time.strftime("%H:%M:%S")
        
        self.config['sequence filename'] = sequence_fname
        self.config['daq config filename'] = daq_config_fname
        self.config['absorbtion images config filename'] = absorbtion_imaging_config_fname
        self.config['photon production config filename'] = photon_production_config_fname

        self.config.write()   

class DaqReader(object):

    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
        
    def load_DAQ_controller(self):
        '''Returns a DAQ controller object as configured in the config file.'''
        
        channels = []
        for _,v in self.config['DAQ channels'].items():
            channelArgs = map(lambda x,y:x(y), [int, str, lambda x: (float(x[0]), float(x[1])), float, eval, str],
                                 [v['chNum'],v['chName'],v['chLimits'],v['default value'],v['UIvisible'],v['calibrationFname']])
            channels.append(DAQ_channel(*channelArgs))

        dios = []
        for _,v in self.config['DIOs'].items():
            dio_name = str(v['dioName'])
            dio_num = int(v['dioNum'])
            
            if v['port'].upper() in [Channel_P1A, 'A']: port = Channel_P1A
            elif  v['port'].upper() in [Channel_P1B, 'B']: port = Channel_P1B
            elif  v['port'].upper() in [Channel_P1C, 'C']: port = Channel_P1C
            elif  v['port'].upper() in [Channel_P1CL, 'CL']: port = Channel_P1CL
            elif  v['port'].upper() in [Channel_P1CH, 'CH']: port = Channel_P1CH
            else: port = int(v['port'])
            
            line = int(v['line'])
            
            if   v['direction'].lower() in ('out', 'output', 'o'): direction = OUTPUT_LINE
            elif v['direction'].lower() in ('in',  'input',  'i'): direction = INPUT_LINE
            else: direction = int(v['direction'])
                
            if   v['enabled state'].lower() in ['high', '5', '5v', '1']: enabled_state = 1
            elif v['enabled state'].lower() in ['low',  '0', '0v']:      enabled_state = 0
            else: enabled_state = int(v['enabled state'])
                
            dios.append(DAQ_dio(dio_name, dio_num, port, line, direction, enabled_state))
                
        DAQ_master = DAQ_card(card_number=int(self.config['DAQ cards']['master']['card number']),
                              channels=[next(ch for ch in channels if ch.chNum==int(x)) for x in self.config['DAQ cards']['master']['channels']],
                              dios  =  [x for x in [next((dio for dio in dios if dio.dio_num==int(x)),None) for x in self.config['DAQ cards']['master']['dios']] if x!=None])
        DAQ_slaves = []
        for _,v in self.config['DAQ cards']['slaves'].items():
            try:
                DAQ_slaves.append(DAQ_card(card_number=int(v['card number']),
                                           channels=[next(ch for ch in channels if ch.chNum==int(x)) for x in v['channels']],
                                           dios  =  [x for x in [next((dio for dio in dios if dio.dio_num==int(x)),None) for x in v['dios']] if x!=None]))
            except StopIteration as err:
                print 'It looks like one of the DAQ cards has a channel expected that does not exist'
                print [ch.chNum for ch in channels]
                raise err
            
        return DAQ_controller(DAQ_master, DAQ_slaves)
    
    @patch('DAQ.DAQ2502')
    @patch('DAQ.DAQ_controller.enslave')
    def load_dummy_DAQ_controller(self, *varArgs):
        return self.load_DAQ_controller()
    
class DaqWriter(object):
    
    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
    
    def save(self, master, *slaves):
        
        self.config['DAQ cards'] = {}
    
        self.config['DAQ cards']['master'] = {'card number': master.card, 'channels': [ch.chNum for ch in master.channels]}
        self.config['DAQ cards']['slaves'] = {}
        for slave in slaves:
            self.config['DAQ cards']['slaves']['1'] = {'card number': slave.card, 'channels': [ch.chNum for ch in slave.channels]}

        self.config['DAQ channels'] = {}
    
        i = 0
        # Note sum(x,[]) is a cheeky way to flatten a list of lists (x).        
        for ch in sum( [card.channels for card in [master] + list(slaves)], []):
            self.config['DAQ channels'][str(i)] = {'chNum':ch.chNum,
                                                   'chName':ch.chName,
                                                   'chLimits':ch.chLimits,
                                                   'default value':ch.defaultValue,
                                                   'UIvisible':ch.isUIVisable,
                                                   'calibrationFname':ch.calibrationFname if ch.isCalibrated else ''}
            i += 1
            
        self.config.write()

class SequenceReader(object):
    
    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
        
    def loadSequence(self):
        seq = Sequence(*self.get_sequence_init_args())
        
        for _,v in self.config['sequence channels'].items():
            channelArgs = map(lambda x,y:x(y), [int, lambda x: [eval(y) for y in x], lambda x: [int(y) for y in x]],
                                 [v['chNum'],v['tV_pairs'],v['V_interval_styles']])
            seq.addChannelSeq(*channelArgs)
            
        return seq
    
    def get_sequence_init_args(self):
        return int(self.config['sequence']['n_samples']), float(self.config['sequence']['t_step'])
    
    def get_global_timings(self):
        return [eval(x) for x in self.config['sequence']['global_timings']]
    
    def get_name(self):
        return self.config.filename
    
    def get_time(self):
        return self.config['time']
    
    def get_date(self):
        return self.config['date']
    
    def get_channel_assignment_notes(self):
        return self.config['notes']['config_ch_assignments']
    
    def get_user_notes(self):
        return self.config['notes']['user']  
    
class SequenceWriter(object):
    
    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
    
#     writer.save(self.sequence, self.sequence_channel_labels, self.seqEditor.global_timings, self.notesFrame.getUserNotes())
    def save(self, sequence, sequence_channel_labels, global_timings, user_notes):
            
        self.config['date'] = time.strftime("%d/%m/%y")
        self.config['time'] = time.strftime("%H:%M:%S")
        
        self.config['notes'] = {}
        self.config['notes']['user'] = user_notes
        self.config['notes']['config_ch_assignments'] = [(k,v) for k,v in sequence_channel_labels.items()]
        
        self.config['sequence'] = {'n_samples': sequence.n_samples,
                                   't_step': sequence.t_step,
                                   'global_timings': global_timings}
        
        self.config['sequence channels'] = {}
        
        for chNum, ch in sequence.chSeqs.items():
            self.config['sequence channels'][str(chNum)] = {'chNum': chNum,
                                                        'tV_pairs': ch.tV_pairs,
                                                        'V_interval_styles': ch.V_interval_styles}
        
        self.config.write()


class PhotonProductionReader(object):

    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
    
    def get_photon_production_configuration(self):
        
        awg_config = AwgConfiguration(sample_rate = float(self.config['AWG']['sample rate']),
                                      burst_count = int(self.config['AWG']['burst count']),
                                      waveform_output_channels = list(self.config['AWG']['waveform output channels']),
                                      waveform_output_channel_lags = map(float, self.config['AWG']['waveform output channel lags']),
                                      marked_channels = list(self.config['AWG']['marked channels']),
                                      marker_width = eval(self.config['AWG']['marker width']),
                                      waveform_aom_calibrations_locations = list(self.config['AWG']['waveform aom calibrations locations']))

        tdc_config = TdcConfiguration(counter_channels = map(eval, self.config['TDC']['counter channels']),
                                      marker_channel = int(self.config['TDC']['marker channel']),
                                      timestamp_buffer_size = int(self.config['TDC']['timestamp buffer size']))
        
        waveforms = []
        for x,v in self.config['waveforms'].items():
            waveforms.append(Waveform(fname = v['filename'],
                                      mod_frequency= float(v['modulation frequency']),
                                      phases = map(float, v['phases'])))
        print self.config['waveform sequence']
        photon_production_config = PhotonProductionConfiguration(save_location = self.config['save location'],
                                                                 mot_reload  = eval(self.config['mot reload']),
                                                                 iterations = int(self.config['iterations']),
                                                                 waveform_sequence = list(eval(self.config['waveform sequence'])),
                                                                 waveforms = waveforms,
                                                                 waveform_stitch_delays = list(eval(self.config['waveform stitch delays'])),
                                                                 interleave_waveforms = toBool(self.config['interleave waveforms']),
                                                                 awg_configuration = awg_config,
                                                                 tdc_configuration = tdc_config)

        return photon_production_config
    
class PhotonProductionWriter(object):
    
    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
    
#     writer.save(self.sequence, self.sequence_channel_labels, self.seqEditor.global_timings, self.notesFrame.getUserNotes())
    def save(self, photon_producion_config):
            
        self.config['date'] = time.strftime("%d/%m/%y")
        self.config['time'] = time.strftime("%H:%M:%S")
        
        self.config['save location'] = photon_producion_config.save_location
        self.config['mot reload'] = photon_producion_config.mot_reload_time
        self.config['iterations'] = photon_producion_config.iteration
        
        self.config['waveform sequence'] = photon_producion_config.waveform_sequence
        self.config['waveforms'] = photon_producion_config.waveforms
        self.config['waveform stitch delays'] = photon_producion_config.waveform_stitch_delays
        self.config['waveform aom calibrations location'] = photon_producion_config.waveform_aom_calibrations_location
        self.config['marker levels'] = photon_producion_config.marker_levels
        self.config['marker width'] = photon_producion_config.marker_width
        self.config['marker delay']= photon_producion_config.marker_delay
        
        awg_config = photon_producion_config.awg_configuration
        
        self.config['AWG'] = {}
        self.config['AWG']['sample rate'] = awg_config.sample_rate
        self.config['AWG']['burst count'] = awg_config.burst_count
        self.config['AWG']['waveform output channel'] = awg_config.waveform_output_channel
        
        tdc_config = photon_producion_config.tdc_configuration
        
        self.config['TDC']['counter channels'] = tdc_config.counter_channels
        self.config['TDC']['marker channel'] = tdc_config.marker_channels
        self.config['TDC']['timestamp buffer size'] = tdc_config.timestamp_buffer_size
        
        self.config.write()

class AbsorbtionImagingReader(object):
    
    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
        
    def get_absorbtion_imaging_configuration(self):
        
        def toFloatTuple(arg):
            return tuple(map(float,arg))
        
        def toFloatList(arg):
            return list(map(float,arg))
        
        def toIntTuple(arg):
            return tuple(map(int,arg))
        
        def toIntList(arg):
            return list(map(int,arg))
                
        return AbsorbtionImagingConfiguration(
                 scan_abs_img_freq = eval(self.config['scan_abs_img_freq']),
                 abs_img_freq_ch = int(self.config['abs_img_freq_ch']),
                 abs_img_freqs = toFloatList(self.config['abs_img_freqs']),
                 camera_trig_ch = int(self.config['camera_trig_ch']), imag_power_ch = int(self.config['imag_power_ch']), 
                 camera_trig_levs = toFloatTuple(self.config['camera_trig_levs']), imag_power_levs = toFloatTuple(self.config['imag_power_levs']), 
                 camera_pulse_width = float(self.config['camera_pulse_width']), imag_pulse_width = float(self.config['imag_pulse_width']),
                 t_imgs = toFloatList(self.config['t_imgs']), 
                 mot_reload_time = float(self.config['mot_reload_time']), 
                 n_backgrounds = int(self.config['n_backgrounds']), bkg_off_channels = toIntList(self.config['bkg_off_channels']), 
                 cam_gain = int(self.config['cam_gain']), cam_exposure = int(self.config['cam_exposure']), 
                 cam_gain_lims = toIntTuple(self.config['cam_gain_lims']), cam_exposure_lims = toIntTuple(self.config['cam_exposure_lims']),
                 save_location = self.config['save_location'],
                 save_raw_images = toBool(self.config['save_raw_images']),
                 save_processed_images = toBool(self.config['save_processed_images']),
                 review_processed_images = toBool(self.config['review_processed_images']))
    
class AbsorbtionImagingWriter(object):
    
    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
    
    def save(self, sequence_fname, daq_config_fname, absorbtion_imaging_config_fname):
            
        #TODO
        
        self.config.write()   


class ExperimentalAutomationReader(object):

    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
    
    def get_experimental_automation_configuration(self):
        
        automated_experiment_configurations = []
        
        for _,v in sorted(self.config['experiments'].items()):
            automated_experiment_configurations.append(
                AutomatedExperimentConfiguration(
                    daq_channel_static_values =  map(lambda x: (int(eval(x)[0]), float(eval(x)[1])), v['daq_channel_static_values']
                                                                if v['daq_channel_static_values'] != []
                                                                else []),
                    sequence = SequenceReader(v['sequence_fname']).loadSequence(),
                    sequence_fname =  v['sequence_fname'],
                    iterations =  int(v['iterations']),
                    mot_reload =  eval(v['mot_reload']),
                    modulation_frequencies =  map(float, v['modulation_frequencies'] if v['modulation_frequencies'] != [] else [])))
            
        return ExperimentalAutomationConfiguration(
                    save_location = self.config['save_location'],
                    summary_fname = self.config['summary_fname'],
                    automated_experiment_configurations = automated_experiment_configurations,
                    daq_channel_update_steps = float(self.config['daq_channel_update_steps']),
                    daq_channel_update_delay = float(self.config['daq_channel_update_delay']))
    
class ExperimentalAutomationWriter(object):
    
    def __init__(self, fname):
        self.fname = fname
        self.config = ConfigObj(fname)
    
#     writer.save(self.sequence, self.sequence_channel_labels, self.seqEditor.global_timings, self.notesFrame.getUserNotes())
    def save(self, photon_producion_config):
        # TODO
        pass


def _makeRootConfig():
    config = ConfigObj()
    config.filename =  os.getcwd() + '/configs/rootConfig'
    
    config['sequence filename'] = os.getcwd() + '/configs/sequence/sequenceConfig2DAQ'
    config['daq config filename'] = os.getcwd() + '/configs/daq/configCalibs'
    config['absorbtion images config filename']= os.getcwd() + '/configs/absorbtion imaging/defaultAbsImgConfig'
    config['photon production config filename']= os.getcwd() + '/configs/photon production/defaultPhotonProductionConfig'
    config['development mode'] = False
    
    config.write()

def _makeDaqConfig():
    config = ConfigObj()
    config.filename =  os.getcwd() + '/configs/daq/configCalibs'
    
    config['DAQ cards'] = {}
    
    config['DAQ cards']['master'] = {'card number': 0, 'channels': [0,1,2,3,4,5,6,7]}
    config['DAQ cards']['slaves'] = {}
    config['DAQ cards']['slaves']['1'] = {'card number': 1, 'channels': [8,9,10,11,12,13,14,15]}
    config['DAQ cards']['slaves']['2'] = {'card number': 1, 'channels': [16,17,18,19,20,21,22,23]}
    
    config['DAQ channels'] = {}
    
    config['DAQ channels']['0'] = {'chNum':0,
                                  'chName':'MOT cooling 1 - freq',
                                  'chLimits':(-10,10),
                                  'default value':6.09035409035,
                                  'UIvisible':True,
                                  'calibrationFname':r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\calibrations\cool1_freq.txt'}
    config['DAQ channels']['1'] = {'chNum':1,
                                  'chName':'MOT cooling 1 - amp',
                                  'chLimits':(-10,10),
                                  'default value':3.66788766789,
                                  'UIvisible':True,
                                  'calibrationFname':r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\calibrations\cool1_amp_at_100MHz.txt'}
    config['DAQ channels']['2'] = {'chNum':2,
                                  'chName':'MOT cooling (upper)',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['3'] = {'chNum':3,
                                  'chName':'Absorbtion imaging',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['4'] = {'chNum':4,
                                  'chName':'ch 4',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['5'] = {'chNum':5,
                                  'chName':'ch 5',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['6'] = {'chNum':6,
                                  'chName':'ch 6',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['7'] = {'chNum':7,
                                  'chName':'ch 7',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    
    config['DAQ channels']['8'] = {'chNum':8,
                                  'chName':'8',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['9'] = {'chNum':9,
                                  'chName':'9',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['10'] = {'chNum':10,
                                  'chName':'10',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['11'] = {'chNum':11,
                                  'chName':'11',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['12'] = {'chNum':12,
                                  'chName':'12',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['13'] = {'chNum':13,
                                  'chName':'13',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['14'] = {'chNum':14,
                                  'chName':'14',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['15'] = {'chNum':15,
                                  'chName':'15',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['16'] = {'chNum':16,
                                  'chName':'16',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['17'] = {'chNum':17,
                                  'chName':'17',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['18'] = {'chNum':18,
                                  'chName':'18',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['19'] = {'chNum':19,
                                  'chName':'19',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['20'] = {'chNum':20,
                                  'chName':'20',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['21'] = {'chNum':21,
                                  'chName':'21',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['22'] = {'chNum':22,
                                  'chName':'22',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    config['DAQ channels']['23'] = {'chNum':23,
                                  'chName':'23',
                                  'chLimits':(-10,10),
                                  'default value':0,
                                  'UIvisible':True,
                                  'calibrationFname':''}
    
    config.write()
    
def _makePhotonProductionConfig():
    
    config = ConfigObj()
    config.filename = os.getcwd() + '/configs/photon production/freqScanPhotonProductionConfig'
    
    config['date'] = time.strftime("%d/%m/%y")
    config['time'] = time.strftime("%H:%M:%S")
    
    config['save location'] = 'Z:/Results017_New/data'
    config['mot reload'] = 300*10**3 # is us
    config['iterations'] = 100
    
    config['waveform sequence'] = [0,1,2,3,4,5,6]
    
    config['waveforms'] = {}
    config['waveforms']['0'] = {'filename': r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\oli_old\sin_squared_800.csv',
                                'modulation frequency': 60.25*10**6,
                                'phases': []}
    config['waveforms']['1'] = {'filename': r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\oli_old\sin_squared_800.csv',
                                'modulation frequency': 65.25*10**6,
                                'phases': []}
    config['waveforms']['2'] = {'filename': r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\oli_old\sin_squared_800.csv',
                                'modulation frequency': 70.25*10**6,
                                'phases': []}
    config['waveforms']['3'] = {'filename': r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\oli_old\sin_squared_800.csv',
                                'modulation frequency': 75.25*10**6,
                                'phases': []}
    config['waveforms']['4'] = {'filename': r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\oli_old\sin_squared_800.csv',
                                'modulation frequency': 80.25*10**6,
                                'phases': []}
    config['waveforms']['5'] = {'filename': r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\oli_old\sin_squared_800.csv',
                                'modulation frequency': 85.25*10**6,
                                'phases': []}
    config['waveforms']['6'] = {'filename': r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\waveforms\oli_old\sin_squared_800.csv',
                                'modulation frequency': 90.25*10**6,
                                'phases': []}
    
    config['waveform stitch delays'] = [192]*6+[192*10]
    config['waveform aom calibrations location'] = os.getcwd() + '/calibrations/stirap_awg'
    config['marker levels'] = (0,1)
    config['marker width'] = 50*10**-3 #us
    config['marker delay'] = 0.853 #us 
    
    config['AWG'] = {}
    config['AWG']['sample rate'] = 1.25*10**9
    config['AWG']['burst count'] = 12500
    config['AWG']['waveform output channel'] = Channel.CHANNEL_1
    
    config['TDC'] = {}
    config['TDC']['counter channels'] = [0]
    config['TDC']['marker channel'] = 7
    config['TDC']['timestamp buffer size'] = 1000000
    
    config.write()
    
def _makeSequenceConfig():
    config = ConfigObj()
    config.filename = os.getcwd() + '/configs/sequence/sequenceConfig3DAQ'
    
    config['date'] = time.strftime("%d/%m/%y")
    config['time'] = time.strftime("%H:%M:%S")
    
    config['notes'] = {}
    config['notes']['user'] = 'Default user notes...'
    config['notes']['config_ch_assignments'] = ['0 = MOT cool 1 (lower)\\n1 = MOT cool 2 (center)\\n2 = MOT cool 3 (upper)']
    
    config['sequence'] = {'n_samples': 1001,
                          't_step': 100,
                          'global_timings': [(1000.0, 'MOT launch'), (2000.0, 'Fire lasers'), (3000.0, 'Engage thrusters')]}
    
    config['sequence channels'] = {}
    
    config['sequence channels']['0']={'chNum': 0,
                                      'tV_pairs': [(0.0, 0.0), (10010.0, 3.0), (14000.0, 3.0), (20000.0, 3.0), (30000.0, 3.0), (34000.0, 3.0)],
                                      'V_interval_styles': [0, 1, 0, 1, 0, 0]}
    config['sequence channels']['1']={'chNum': 1,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['2']={'chNum': 2,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['3']={'chNum': 3,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['4']={'chNum': 4,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['5']={'chNum': 5,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['6']={'chNum': 6,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['7']={'chNum': 7,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    
    config['sequence channels']['8']={'chNum': 8,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['9']={'chNum': 9,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['10']={'chNum': 10,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['11']={'chNum': 11,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['12']={'chNum': 12,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['13']={'chNum': 13,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['14']={'chNum': 14,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['15']={'chNum': 15,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['16']={'chNum': 16,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['17']={'chNum': 17,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['18']={'chNum': 18,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['19']={'chNum': 19,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['20']={'chNum': 20,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['21']={'chNum': 21,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['22']={'chNum': 22,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    config['sequence channels']['23']={'chNum': 23,
                                      'tV_pairs': [(0.0, 0.0)],
                                      'V_interval_styles': [0]}
    
    config.write()
    
# if __name__ == "__main__":
#         
#     _makeRootConfig()
#     _makeDaqConfig()
#     _makeSequenceConfig()

def _makeAbsorbtionImagingConfig():
    config = ConfigObj()
    config.filename =  os.getcwd() + '/configs/absorbtion imaging/defaultAbsImgConfig'
    
    config['scan_abs_img_freq'] = False
    config['abs_img_freq_ch'] = 12
    config['abs_img_freqs'] = [5] 
    config['camera_trig_ch'] = 15
    config['imag_power_ch'] = 13
    config['camera_trig_levs'] = (0.,10.)
    config['imag_power_levs'] = (0.,1.6)
    config['camera_pulse_width'] = 100
    config['imag_pulse_width'] = 5
    config['t_imgs'] = [5000]
    config['mot_reload_time'] = 5000 * 10**3 # In us
    config['n_backgrounds'] = 3
    config['bkg_off_channels'] = [7]
    config['save_location'] = os.getcwd() + '/data/Absorbtion images/'
    config['save_raw_images'] = False
    config['save_processed_images'] = False
    config['review_processed_images'] = True
    config['cam_gain'] = 180
    config['cam_exposure'] = 4000 # In 1/seconds
    config['cam_gain_lims'] = (180,1023)
    config['cam_exposure_lims'] = (4000,1)
    
    config.write()
    
def _makeExperimentalAutomationConfig():
     
    seq_folder =  r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\configs\sequence\photon production\F1 line\cavity scans\-22.5 MHz offset'
    
    config = ConfigObj()
    config.filename =  os.getcwd() + '/configs/experimental automation/defaultExperimentalAutomationConfig'
    
    config['save_location'] = 'Z:/Results017_New/data'
    config['summary_fname'] = 'automated_experiments_summary'
    
    config['daq_channel_update_steps'] = 5
    config['daq_channel_update_delay'] = 1 # in seconds
    
    config['experiments'] = {}
    
    config['experiments']['0'] = {'daq_channel_static_values' : [(10, 75.25)],
                                  'sequence_fname' : os.path.join(seq_folder, 'cav_75_25'),
                                  'iterations' : 50,
                                  'mot_reload' : 1000*10**3, # in us
                                  'modulation_frequencies' : []}
    
    config['experiments']['1'] = {'daq_channel_static_values' : [(10, 75.75)],
                                  'sequence_fname' : os.path.join(seq_folder, 'cav_75_75'),
                                  'iterations' : 50,
                                  'mot_reload' : 1000*10**3,
                                  'modulation_frequencies' : []} # in us
    
    config['experiments']['2'] = {'daq_channel_static_values' : [(10, 76.25)],
                                  'sequence_fname' : os.path.join(seq_folder, 'cav_76_25'),
                                  'iterations' : 50,
                                  'mot_reload' : 1000*10**3,
                                  'modulation_frequencies' : []} # in us
    
    config.write()

def _makeExperimentalAutomationConfig_cavityScan(cavity_freqs=[], cav_daq_channel = 10, iterations=50, mot_reload = 1000*10**3):
     
    seq_folder =  r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\configs\sequence\photon production\F1 line\cavity scans'
    
    min_freq, max_freq = map(lambda x: str(x).replace('.','_'), [min(cavity_freqs), max(cavity_freqs)]) 
    
    config = ConfigObj()
    config.filename =  os.getcwd() + '/configs/experimental automation/resonant driving scans/scan_cav__{0}_to_{1}'.\
                                        format(min_freq, max_freq)
    
    config['save_location'] = 'Z:/Results017_New/data'
    config['summary_fname'] = 'automated_experiments_summary'
    
    config['daq_channel_update_steps'] = 5
    config['daq_channel_update_delay'] = 1 # in seconds
    
    config['experiments'] = {}
    
    i = 0
    for freq in sorted(cavity_freqs):
        
        config['experiments'][str(i)] = {'daq_channel_static_values' : [(cav_daq_channel, freq)],
                                      'sequence_fname' : os.path.join(seq_folder, 'cav_{0}'.format(str(freq).replace('.','_'))),
                                      'iterations' : iterations,
                                      'mot_reload' : mot_reload, # in us
                                      'modulation_frequencies' : []}
        
        i += 1
    
    config.write()

def _makeExperimentalAutomationConfig_xBiasScan(x_biases = [], iterations=50, mot_reload = 500*10**3,  n_repeat=1):
     
    seq_folder =  r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\configs\sequence\photon production\F1 line\x bias scans'
    
    min_bias, max_bias = map(lambda x: str(x).replace('.','_'), [min(x_biases), max(x_biases)])
    
    config = ConfigObj()

    config.filename =  os.getcwd() + '/configs/experimental automation/scans/x bias scan/scan_x_bias__{0}A_to_{1}A'.\
                                        format(min_bias, max_bias)
    
    
    config['save_location'] = 'Z:/Results017_New/data'
    config['summary_fname'] = 'automated_experiments_summary'
    
    config['daq_channel_update_steps'] = 5
    config['daq_channel_update_delay'] = 1 # in seconds
    
    config['experiments'] = {}
    
    i,j=0,0
    while j<n_repeat: 
        for bias in sorted(x_biases):
        
            config['experiments'][str(i)] = {'daq_channel_static_values' : [],
                                          'sequence_fname' : os.path.join(seq_folder, '{0}A_xBias'.format(str(bias).replace('.','_'))),
                                          'iterations' : iterations,
                                          'mot_reload' : mot_reload, # in us
                                          'modulation_frequencies' : []}
            
            i += 1
        j += 1
    
   
    config.write()


def _makeExperimentalAutomationConfig_yBiasScan(y_biases = [], iterations=50, mot_reload = 500*10**3,  n_repeat=1):
     
    seq_folder =  r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\configs\sequence\photon production\F1 line\y bias scans'
    
    min_bias, max_bias = map(lambda x: str(x).replace('.','_'), [min(y_biases), max(y_biases)])
    
    config = ConfigObj()

    config.filename =  os.getcwd() + '/configs/experimental automation/scans/y bias scan/scan_y_bias__{0}A_to_{1}A'.\
                                        format(min_bias, max_bias)
    
    
    config['save_location'] = 'Z:/Results017_New/data'
    config['summary_fname'] = 'automated_experiments_summary'
    
    config['daq_channel_update_steps'] = 5
    config['daq_channel_update_delay'] = 1 # in seconds
    
    config['experiments'] = {}
    
    i,j=0,0
    while j<n_repeat: 
        for bias in sorted(y_biases):
        
            config['experiments'][str(i)] = {'daq_channel_static_values' : [],
                                          'sequence_fname' : os.path.join(seq_folder, '{0}A_yBias'.format(str(bias).replace('.','_'))),
                                          'iterations' : iterations,
                                          'mot_reload' : mot_reload, # in us
                                          'modulation_frequencies' : []}
            
            i += 1
        j += 1
    
   
    config.write()

    
def _makeExperimentalAutomationConfig_zBiasScan(z_biases = [], iterations=500, mot_reload = 500*10**3, n_repeat=1):
     
    seq_folder =  r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\configs\sequence\photon production\F1 line\z bias scans'
    
    min_bias, max_bias = map(lambda x: str(x).replace('.','_'), [min(z_biases), max(z_biases)])
    
    config = ConfigObj()

    config.filename =  os.getcwd() + '/configs/experimental automation/scans/z bias scan/scan_z_bias__{0}A_to_{1}A'.\
                                        format(min_bias, max_bias)
    
    
    config['save_location'] = 'Z:/Results017_New/data'
    config['summary_fname'] = 'automated_experiments_summary'
    
    config['daq_channel_update_steps'] = 5
    config['daq_channel_update_delay'] = 1 # in seconds
    
    config['experiments'] = {}
    
    i,j=0,0
    while j<n_repeat: 
        for bias in sorted(z_biases):
        
            config['experiments'][str(i)] = {'daq_channel_static_values' : [],
                                          'sequence_fname' : os.path.join(seq_folder, '{0}A_zBias'.format(str(bias).replace('.','_'))),
                                          'iterations' : iterations,
                                          'mot_reload' : mot_reload, # in us
                                          'modulation_frequencies' : []}
            
            i += 1
        j += 1
    
   
    config.write()


def _makeExperimentalAutomationConfig_stirapFreqScan(stirap_freqs=[], iterations=100, mot_reload = 750*10**3):
     
    seq_loc =  r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\configs\sequence\photon production\seq170704'
    
    config = ConfigObj()
    config.filename =  os.getcwd() + '/configs/experimental automation/resonant driving scans/scan_stirap_freqs'
    
    config['save_location'] = 'Z:/Results017_New/data'
    config['summary_fname'] = 'automated_experiments_summary'
    
    config['daq_channel_update_steps'] = 5
    config['daq_channel_update_delay'] = 1 # in seconds
    
    config['experiments'] = {}
    
    i = 0
    print stirap_freqs
    for freqs in sorted(stirap_freqs):
        
        config['experiments'][str(i)] = {'daq_channel_static_values' : [],
                                         'sequence_fname' : seq_loc,
                                         'iterations' : iterations,
                                         'mot_reload' : mot_reload, # in us
                                         'modulation_frequencies' : freqs}
        
        i += 1
    
    config.write()
    print 'Done'
    
def __copy_scan_seq_params(channels_to_copy = [17],
                           seq_folder =  r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\configs\sequence\photon production\F1 line\cavity scans',
                           base_seq_fname = r'cav_75_25'):
  
    base_seq_reader = SequenceReader(os.path.join(seq_folder, base_seq_fname))
    
    seq = base_seq_reader.loadSequence()
    
    ch_settings = {}
    for ch in channels_to_copy:
        ch_settings[ch] =  (seq.get_tV_pairs(ch), seq.get_V_intervalStyles(ch))
      
    from os import listdir
    from os.path import isfile, join
     
    for fname in [join(seq_folder, f) for f in listdir(seq_folder) if isfile(join(seq_folder, f))]:
        print fname
        seq_reader = SequenceReader(fname)
        seq = seq_reader.loadSequence()
        
        for ch in channels_to_copy: 
            seq.updateChannel(ch, *ch_settings[ch])
         
        sequence_channel_labels={}
        for chNum in seq.getChannelNums():
            sequence_channel_labels[chNum] = 'Unconfigured channel'
         
        seq_writer = SequenceWriter(fname)
        seq_writer.save(seq,
                        sequence_channel_labels,
                        seq_reader.get_global_timings(),
                        seq_reader.get_user_notes())
    
if __name__ == "__main__":
  #  pass
#     _makeAbsorbtionImagingConfig()
#     _makeSequenceConfig()
#     _makePhotonProductionConfig()
#     _makeExperimentalAutomationConfig()
#     e = ExperimentalAutomationReader(os.getcwd() + '/configs/experimental automation/defaultExperimentalAutomationConfig')
#     e.get_experimental_automation_configuration()
# 

#     _makeExperimentalAutomationConfig_cavityScan(cavity_freqs=np.arange(90.25,100.24,1))
# #     _makeExperimentalAutomationConfig_cavityScan(cavity_freqs=[x for x in np.arange(92.75,100,0.5) if x not in (92.75, 93.25,97.75,98.25,98.75,99.25,99.75,93.75,94.25,94.75)])
#     
#     
#     __copy_cav_scan_seq_params(channels_to_copy=[17,21], base_seq_fname = r'cav_99_25')
#       
#     _makeExperimentalAutomationConfig_xBiasScan()
#     freqs=np.arange(59.5,90.5,1.75)*10**6
#     freqs=np.array([73.25,74.25,75.25,76.25,77.25])*10**6

    '''
    x bias scan
    '''
    x_biases = [3,4.5,6]
    _makeExperimentalAutomationConfig_xBiasScan(x_biases, iterations=500, mot_reload=400*10**3, n_repeat=2)
    
    '''
    y bias scan
    '''
#     y_biases = [0,1,2,3,4,5]
#     y_biases = [3.5,3.75,4.25,4.5]
#     _makeExperimentalAutomationConfig_yBiasScan(y_biases, iterations=333, mot_reload=500*10**3, n_repeat=3)
#  
#     __copy_scan_seq_params(channels_to_copy=[10,21],
#                            seq_folder=r'C:\Users\apc\Documents\Python Scripts\Cold Control Heavy\configs\sequence\photon production\F0 line\y bias scan',
#                            base_seq_fname=r'0A_yBias')

    '''
    z bias scan
    '''
#     z_biases = [3.1,3.2,3.3,3.4,3.5]
#     _makeExperimentalAutomationConfig_zBiasScan(z_biases, iterations=333, mot_reload=500*10**3, n_repeat=3)

    '''
    driving freq scan
    '''
#     freqs=np.linspace(72.25,78.25,7)*10**6
# #     freqs=np.linspace(70.25,80.25,5)*10**6
#     _makeExperimentalAutomationConfig_stirapFreqScan(stirap_freqs=zip(freqs,freqs), iterations=50, mot_reload = 500*10**3)
     
    
    print 'Done'