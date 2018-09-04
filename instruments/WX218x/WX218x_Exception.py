# -*- coding: utf-8 -*-

class WX218x_Exception(Exception):
    """
    An exception for the WX128X software. It contains a message property which is a string indicating what went wrong.
    
    :param errorCode: Error code to be used to look up error message.
    """

    @property
    def message(self):
        return self._error_codes[self.error_code]
            
    @property
    def error_code(self):
        return self._error_code
        
    _error_codes = {    
                    -1074135040 : 'ERROR_CANNOT_RECOVER', #Failure cannot recover. 
                    -1074135039 : 'ERROR_INSTRUMENT_STATUS', #Instrument error detected. Use ErrorQuery() to determine the error(s). 
                    -1074135038 : 'ERROR_CANNOT_OPEN_FILE', #Cannot open file. 
                    -1074135037 : 'ERROR_READING_FILE', #Error reading file. 
                    -1074135036 : 'ERROR_WRITING_FILE', #Error writing file. 
                    -1074135029 : 'ERROR_INVALID_PATHNAME', #The pathname is invalid. 
                    -1074135024 : 'ERROR_INVALID_VALUE', #Invalid value (%1) for method %2, parameter %3. 
                    -1074135023 : 'ERROR_FUNCTION_NOT_SUPPORTED', #Does not support this class-compliant feature: method %1 
                    -1074135022 : 'ERROR_ATTRIBUTE_NOT_SUPPORTED', #Does not support this class-compliant feature: property %1. 
                    -1074135021 : 'ERROR_VALUE_NOT_SUPPORTED', #Does not support this class-compliant feature: (enumeration) value %1 passed as the value for parameter %2 in method %3. 
                    -1074135011 : 'ERROR_NOT_INITIALIZED', #A connection to the instrument has not been established. 
                    -1074135008 : 'ERROR_UNKNOWN_CHANNEL_NAME', #Unknown channel name. 
                    -1074135005 : 'ERROR_TOO_MANY_OPEN_FILES', #Too many files are open. 
                    -1074134972 : 'ERROR_CHANNEL_NAME_REQUIRED', #A channel name is required. 
                    -1074134967 : 'ERROR_MISSING_OPTION_NAME', #The option string is missing an option name. 
                    -1074134966 : 'ERROR_MISSING_OPTION_VALUE', #The option string is missing an option value. 
                    -1074134965 : 'ERROR_BAD_OPTION_NAME', #The %1 name in the option string is unknown. 
                    -1074134964 : 'ERROR_BAD_OPTION_VALUE', #The %1 value in the option string is unknown. 
                    -1074134954 : 'ERROR_OUT_OF_MEMORY', #Could not allocate necessary memory. 
                    -1074134953 : 'ERROR_OPERATION_PENDING', #Operation in progress. 
                    -1074134952 : 'ERROR_NULL_POINTER', #Null pointer passed for method %1, parameter %2. 
                    -1074134951 : 'ERROR_UNEXPECTED_RESPONSE', #Unexpected response from instrument. 
                    -1074134949 : 'ERROR_FILE_NOT_FOUND', #File not found. 
                    -1074134948 : 'ERROR_INVALID_FILE_FORMAT', #Invalid file format. 
                    -1074134947 : 'ERROR_STATUS_NOT_AVAILABLE', #The instrument status is not available. 
                    -1074134946 : 'ERROR_ID_QUERY_FAILED', #Instrument ID query failed. 
                    -1074134945 : 'ERROR_RESET_FAILED', #Instrument reset failed. 
                    -1074134944 : 'ERROR_RESOURCE_UNKNOWN', #Unknown resource. 
                    -1074134943 : 'ERROR_ALREADY_INITIALIZED', #The driver is already initialized. 
                    -1074134942 : 'ERROR_CANNOT_CHANGE_SIMULATION_STATE', #The simulation state cannot be changed. 
                    -1074134941 : 'ERROR_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR', #The number of levels in the selector is not valid for the %1 repeated capability. 
                    -1074134940 : 'ERROR_INVALID_RANGE_IN_SELECTOR', #The range %1 is not valid for the repeated capability %2. 
                    -1074134939 : 'ERROR_UNKOWN_NAME_IN_SELECTOR', #Unknown name in selector. 
                    -1074134938 : 'ERROR_BADLY_FORMED_SELECTOR', #The repeated capability selector is badly-formed. 
                    -1074134937 : 'ERROR_UNKNOWN_PHYSICAL_IDENTIFIER', #Unknown physical repeated capability selector. 
                    -1074130943 : 'ERROR_TRIGGER_NOT_SOFTWARE', #The trigger source is not set to software trigger. 
                    -1074126844 : 'ERROR_NO_WFMS_AVAILABLE', #The function generator's waveform memory is full. 
                    -1074126840 : 'ERROR_WFM_IN_USE', #The waveform is currently in use. 
                    -1074126839 : 'ERROR_NO_SEQS_AVAILABLE', #The function generator sequence memory is full. 
                    -1074126835 : 'ERROR_SEQ_IN_USE', #The sequence is currently in use. 
                    -1074118127 : 'ERROR_PERSONALITY_NOT_ACTIVE', #Personality is not active. 
                    -1074118126 : 'ERROR_PERSONALITY_NOT_INSTALLED', #Personality is not installed. 
                    -1074118125 : 'ERROR_PERSONALITY_NOT_LICENSED', #Personality is not licensed. 
                    -1074118124 : 'ERROR_IO_GENERAL', #I/O error. 
                    -1074118123 : 'ERROR_IO_TIMEOUT', #I/O timeout error. 
                    -1074118122 : 'ERROR_MODEL_NOT_SUPPORTED', #Instrument model does not support this feature. 
                    -1074118121 : 'ERROR_START_PHASE', #
                    -1074118120 : 'ERROR_INVALID_CONFIGURATION', #
                    -1074118119 : 'ERROR_HANDLE_CHANNEL_NOT_EXIST', #
                    -1074118118 : 'ERROR_HANDLE_LOOP_NOT_EQUAL', #
                    -1074118117 : 'ERROR_HANDLE_LOOP_JUMP_NOT_EQUAL', #
                    -1074118116 : 'ERROR_ELEMENT_ARRAY_NOT_VALID', #
                    -1074118115 : 'ERROR_LBOUND_ARRAY_EQUAL', #
                    -1074118114 : 'ERROR_UBOUND_ARRAY_EQUAL', #
                    -1074118113 : 'ERROR_LBOUND_ARRAY_ZERO', #
                    -1074118112 : 'ERROR_MAX_COUNT_SEGMENTS', #
                    -1074118111 : 'ERROR_NO_AVAILABLE_MEMORY', #
                    -1074118110 : 'ERROR_UPPER_BOUND_ZERO', #
                    -1074118109 : 'ERROR_FEATURE_NOT_SUPPORTED', #
                    -1074118108 : 'ERROR_SIZE_ARRAY_NOT_EQUAL', #
                    -1074118107 : 'ERROR_DATA_ARRAY_EMPTY', #
                    -1074118106 : 'ERROR_SEGSIZE_ARBDIG_NOTEQUAL', #
                    -1074118105 : 'ERROR_SEGSIZE_DIG_NOTEQUAL', #
                    -1074118104 : 'ERROR_SEGMENT_NOT_EMPTY', #
                    -1074118103 : 'ERROR_INVALID_FILE_DATA', #
                    -1074118102 : 'ERROR_DIG_POD_NOT_PRESENT', #
                    -1074118101 : 'ERROR_INVALID_FILE_LENGTH', #
                    -1074118100 : 'ERROR_TRACE_MODE_NORMAL', #
                    -1074118099 : 'ERROR_TRACE_MODE_DUPLICATE', #
                    -1074118098 : 'ERROR_FILE_SIZE_NOT_EQUAL', #
                    -1074118097 : 'ERROR_TRACE_MODE_DUPLICATE_FILE', #
                    -1074118096 : 'ERROR_TRACE_MODE_NORMAL_FILE', #
                    -1074118095 : 'ERROR_NOT_SUPPORTED_TRACE_MODE', #
                    -1074118094 : 'ERROR_DIG_POD_NOT_EXIST', #
                    -1074118093 : 'ERROR_SEG_NOT_EXIST', #
                    -1074118092 : 'ERROR_COUNT_SEG_NOT_EQUAL', #
                    -1074118091 : 'ERROR_DIG_PORT_BIT_INDEX', #
                    -1074118090 : 'ERROR_SIZE_NOT_EQUAL', #
                    -1074118090 : 'ERROR_TRACE_MODE_NOT_SUPP', #
                    -1074118089 : 'ERROR_COMMAND_EMPTY', #
                    
                    -100        : 'ERROR CODE NOT SPECIFIED IN DOCUMENTATION'
                   }
    
    def __init__(self, error_code):
        # if error code does not match expected codes then assign invalid code
        if error_code in self._error_codes:
            self._error_code = error_code
        else:
            self._error_code = -100


