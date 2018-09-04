# -*- coding: utf-8 -*-

class WX218x_Warning(Exception):
    """
    An warning for the WX1284 software. It contains a message property which is a string indicating the cause.
    
    :param warning_code: Warning code to be used to look up warning message.
    """

    @property
    def message(self):
        return self._warning_codes[self.warning_code]
            
    @property
    def warning_code(self):
        return self._warning_code
        
    _warning_codes = {    
                      0          : 'SUCCESS', #Success. 
                      1073348709 : 'WARN_NSUP_ID_QUERY', #ID Query is not supported by this instrument. 
                      1073348710 : 'WARN_NSUP_RESET', #Reset is not supported by this instrument. 
                      1073348711 : 'WARN_NSUP_SELF_TEST',  #Self test is not supported by this instrument. 
                      1073348712 : 'WARN_NSUP_ERROR_QUERY',  #Error query is not supported by this instrument. 
                      1073348713 : 'WARN_NSUP_REV_QUERY',   #Firmware revision query is not supported by this instrument. 
                    
                      -100        : 'WARNING CODE NOT SPECIFIED IN DOCUMENTATION'
                   }
    
    def __init__(self, warning_code):
        # if error code does not match expected codes then assign invalid code
        if warning_code in self._warning_codes:
            self._warning_code = warning_code
        else:
            self._warning_code = -100


