'''
A wrapper class for talking to the nanowires SIM900 module
via a serial port.

Created on 7 May 2016

@author: Tom Barrett
'''

import serial
import time
from __main__ import port

class Nanowires_SIM900m_mainframe(serial.Serial):
    
    def __init__(self, port='COM1', detector_ports=xrange(1,9), timeout=3, **kwargs):
        
        print 'Opening serial connection to nanowires (SIM900m) mainframe on port {0}...'.format(port)
        serial.Serial.__init__(
                            self,
                            port=port,
                            baudrate=9600,
                            parity=serial.PARITY_NONE,
                            stopbits=serial.STOPBITS_ONE,
                            bytesize=serial.EIGHTBITS,
                            timeout = timeout,
                        )
        print '...connection {0}'.format('successful' if self.is_open else 'failed')
        
    def _write(self, string):
        return serial.Serial.write(self, string + '\r\n')
    
    def _read(self, size=1):
        out=''
        while self.inWaiting() > 0:
            out += serial.Serial.read(self, size=size)
        return out
    
    def _query(self, string, delay=1):
        '''Write a query and return the result after a designated delay (1s by default).'''
        self.write(string)
        time.sleep(delay)
        return self.read()
    
    def _close(self):
        serial.Serial.close(self)
        print 'Serial connection to nanowires (SIM900m) mainframe closed'
        
class Nanowire_detector_SIM928m(serial.Serial):
    
    def __init__(self, port, status=None, voltage=None):
        
        self.port = port
        self.status = status
        self.voltage = voltage
        
#(Command, queryed, args)

class Serial_Device_Commands(object):
    # Interface Commands
    IDENTITY = '*IDN', True, None
    
    def generate(self, command, query=False, *args):
        cmd = str(command[0])
        
        if not command[1] in (query, None):
            raise Serial_Command_Exception("Command {0} {1} be queried."\
                                           .format(cmd,
                                                   'can' if command[1] else 'can not'))
            
        if query: cmd+='?'   
            
        if command[2] and not args:
            raise Serial_Command_Exception("Command {0} requires arguments".format(cmd))
        if not command[2] and args!=[]:
            raise Serial_Command_Exception("Command {0} can not take arguments".format(cmd))
        
        if args!=[]: cmd+= ' ', ','.join(map(str, args))
        
        return cmd 
        
class Nanowires_SIM900m_Mainframe_Commands(Serial_Device_Commands):
    # Communication commands
    SEND_TO_PORT_TERMINATED = 'SNDT', False, True
    SEND_TO_PORT = 'SEND', False, True
    BROADCAST_TO_ALL_PORTS = 'BRDC', False, True
    BROADCAST_TO_ALL_PORTS_TERMINATED = 'BRDT', False, True
    GET_BYTES_FROM_PORT = 'GETN', True, True
    
    # Configuration commands
    BROADCAST_ENABLE = 'BRER', None, True
    INPUT_BYTES_WAITING_ON_PORT = 'NINP', True, True
    OUTPUT_BYTES_WAITING_ON_PORT = 'NOUT', True, True

class Nanowire_Detector_SIM928m_Commands(Serial_Device_Commands):
    # Output commands
    VOLTAGE = 'VOLT', None, None
    OUTPUT_ON = 'OPON', False, False
    OUTPUT_OFF = 'OPOF', False, False
    EXCITATION = 'EXON', None, None 
    
class Serial_Command_Exception(Exception):
    def __init__(self, value):
        self.value = value
    def __str__(self):
            return repr(self.value)
    