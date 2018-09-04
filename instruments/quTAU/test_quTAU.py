'''
Created on 22 Sep 2016

@author: apc
'''

from TDC_quTAU import TDC_quTAU
from TDC_BaseDLL import TDC_SimType
from time import sleep
import matplotlib.pyplot as plt

qutau = TDC_quTAU()
print 'Opening connection..'
qutau.open()
print '...opened'
print 'Version is: ', qutau.get_version()
print 'Device type is: ', qutau.get_dev_type()
print 'Parameters are: ', qutau.get_device_params()
timebase_ps = qutau.get_timebase()*10**12
print 'Timebase is {0}ps'.format(timebase_ps)
print 'Enabling channels'
qutau.set_enabled_channels([0,2,7])

qutau.switch_termination(False)

qutau.set_timestamp_buffer_size(1000000)
print 'Buffer size is:', qutau.get_timestamp_buffer_size()

qutau.enable_tdc_input(True)
sleep(1)
qutau.enable_tdc_input(False)

# print 'Generating timestamps.'
# qutau.generate_timestamps(TDC_SimType.SIM_FLAT, (500,10), 50000)

# print 'Reading timestamps...'
# timestamps, channels, valid =  qutau.get_timestamps(True)
# print '...timestamps read'
# print timestamps, channels, valid

print 'Closing connection...'
qutau.close()
print '...closed'

# print 'Analysing...'
# timestamps, channels = [x*timebase_ps for x in timestamps if x >= 0], [x for x in channels if x >= 0]
# print 'Number of valid events:', valid
# print 'Channels detected on:', list(set(channels))
# events = sorted(list(zip(timestamps, channels)))
# data = []
# for ch in set(channels):
#     ts = [e[0] for e in events if e[1]==ch]
#     data.append((ch, ts))
#     
# n, bins, patches = plt.hist(data[0][1], 50, normed=1, facecolor='green', alpha=0.75)
# plt.xlabel('Time (ps)')
# plt.ylabel('Counts')
# plt.show()
# 
# print '...analysis finished'
