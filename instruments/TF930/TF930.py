'''
A wrapper class for using a TF930 frequency counter
via a serial port.

Created on 7 May 2016

@author: Tom Barrett
'''

import serial
import time
import re
import threading

class TF930(serial.Serial):
    
    def __init__(self, port='COM5', timeout=3, **kwargs):
        
        print 'Opening serial connection to TF930 on port {0}...'.format(port)
        serial.Serial.__init__(
                            self,
                            port=port,
                            baudrate=115200,
                            parity=serial.PARITY_NONE,
                            stopbits=serial.STOPBITS_ONE,
                            bytesize=serial.EIGHTBITS,
                            timeout = timeout,
                        )
        print '...connection {0}'.format('successful' if self.is_open else 'failed')
       
    def query_frequency(self, read_delay=0.5):
        
        output = self.query('N?', delay=0.5)
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
            
        return freq, units
            
    def write(self, string):
        return serial.Serial.write(self, string + '\n')
    
    def read(self, size=1):
        out=''
        while self.inWaiting() > 0:
            out += serial.Serial.read(self, size=size)
        return out
    
    def query(self, string, delay=1):
        '''Write a query and return the result after a designated delay (1s by default).'''
        self.write(string)
        time.sleep(delay)
        return self.read()
    
    def close(self):
        serial.Serial.close(self)
        print 'Serial connection to TF930 closed'