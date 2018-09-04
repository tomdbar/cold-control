'''
Created on 8 Feb 2017

@author: Tom Barrett
'''
import serial
import time

from instruments.GammaVacuumDigitalSPC import GammaVacuumDigitalSPC

try:
    ionPump = GammaVacuumDigitalSPC.GammaVacuumDigitalSPC(port='COM1')
except serial.serialutil.SerialException as err:
    print 'Pump could not be found'
    raise err
# 
# print ionPump.query(r'7e 20 30 35 20 30 31 20 30 30 0D')
# print ionPump.query(r'~ 00 01 00\r')
print ionPump.query('VOLT?')

ionPump.close()
print '...finished!'
