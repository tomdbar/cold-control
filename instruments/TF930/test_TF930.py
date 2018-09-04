'''
Created on 17 Feb 20167

@author: Tom Barrett
'''

import serial
from instruments.TF930 import TF930
import re
import time

targetFname = r'C:\Users\apc\Desktop\TF930monitoring.txt'

try:
    counter = TF930.TF930(port='COM5')
except serial.serialutil.SerialException as err:
    print 'Cannot find counter'
    raise err

i=0

f = open(targetFname, 'w+')

while i<1:
    
    output = counter.query('N?', delay=0.5)
    # Parse the output, once for units and once for values  
    r = r'([\d|\.|e|\+]+)([a-zA-Z]*)\r\n'
    freq, units = r'N/A', r'N/A'
    
    match = re.match(r, output)
    if match:
        freq, units = float(match.group(1)), match.group(2)
    
    # Just a hack to convert Hz to MHz as it's nicer.    
    if units == 'Hz':
        freq = freq/10**6
        units = 'MHz'
        
    print 'TF930 is reading {0}{1}'.format(freq, units)
    
    f.write('{0},{1}\n'.format(time.strftime('%X'),str(freq)))
    
    time.sleep(10)
    i+=1
    print i
    
f.close()
counter.close()