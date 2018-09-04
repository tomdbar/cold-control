#!/usr/bin/env python
# -*- coding: utf-8 -*-

'''
Created on 26 Sep 2016

@author: Tom Barrett
'''
from ctypes import *
from pyvisa.ctwrapper.functions import get_attribute
from jinja2._stringdefs import combine
from DAQ import High_Hysteresis

# #if defined(_VI_INT64_UINT64_DEFINED)
# typedef ViUInt64    _VI_PTR ViPUInt64;
# typedef ViUInt64    _VI_PTR ViAUInt64;
# typedef ViInt64     _VI_PTR ViPInt64;
# typedef ViInt64     _VI_PTR ViAInt64;
# #endif
#  
# #if defined(LONG_MAX) && (LONG_MAX > 0x7FFFFFFFL)
# typedef unsigned int        ViUInt32;
# typedef _VI_SIGNED int      ViInt32;
# #else
# typedef unsigned long       ViUInt32;
# typedef _VI_SIGNED long     ViInt32;
# #endif
#  
# typedef ViUInt32    _VI_PTR ViPUInt32;
# typedef ViUInt32    _VI_PTR ViAUInt32;
# typedef ViInt32     _VI_PTR ViPInt32;
# typedef ViInt32     _VI_PTR ViAInt32;
#  
# typedef unsigned short      ViUInt16;
# typedef ViUInt16    _VI_PTR ViPUInt16;
# typedef ViUInt16    _VI_PTR ViAUInt16;
#  
# typedef _VI_SIGNED short    ViInt16;
# typedef ViInt16     _VI_PTR ViPInt16;
# typedef ViInt16     _VI_PTR ViAInt16;
#  
# typedef unsigned char       ViUInt8;
# typedef ViUInt8     _VI_PTR ViPUInt8;
# typedef ViUInt8     _VI_PTR ViAUInt8;
#  
# typedef _VI_SIGNED char     ViInt8;
# typedef ViInt8      _VI_PTR ViPInt8;
# typedef ViInt8      _VI_PTR ViAInt8;
#  
# typedef char                ViChar;
# typedef ViChar      _VI_PTR ViPChar;
# typedef ViChar      _VI_PTR ViAChar;
#  
# typedef unsigned char       ViByte;
# typedef ViByte      _VI_PTR ViPByte;
# typedef ViByte      _VI_PTR ViAByte;
#  
# typedef void        _VI_PTR ViAddr;
# typedef ViAddr      _VI_PTR ViPAddr;
# typedef ViAddr      _VI_PTR ViAAddr;
#  
# typedef float               ViReal32;
# typedef ViReal32    _VI_PTR ViPReal32;
# typedef ViReal32    _VI_PTR ViAReal32;
#  
# typedef double              ViReal64;
# typedef ViReal64    _VI_PTR ViPReal64;
# typedef ViReal64    _VI_PTR ViAReal64;
#  
# typedef ViPByte             ViBuf;
# typedef ViPByte             ViPBuf;
# typedef ViPByte     _VI_PTR ViABuf;
#  
# typedef ViPChar             ViString;
# typedef ViPChar             ViPString;
# typedef ViPChar     _VI_PTR ViAString;
#  
# typedef ViString            ViRsrc;
# typedef ViString            ViPRsrc;
# typedef ViString    _VI_PTR ViARsrc;
#  
# typedef ViUInt16            ViBoolean;
# typedef ViBoolean   _VI_PTR ViPBoolean;
# typedef ViBoolean   _VI_PTR ViABoolean;
#  
# typedef ViInt32             ViStatus;
# typedef ViStatus    _VI_PTR ViPStatus;
# typedef ViStatus    _VI_PTR ViAStatus;
#  
# typedef ViUInt32            ViVersion;
# typedef ViVersion   _VI_PTR ViPVersion;
# typedef ViVersion   _VI_PTR ViAVersion;
#  
# typedef ViUInt32            ViObject;
# typedef ViObject    _VI_PTR ViPObject;
# typedef ViObject    _VI_PTR ViAObject;
#  
# typedef ViObject            ViSession;
# typedef ViSession   _VI_PTR ViPSession;
# typedef ViSession   _VI_PTR ViASession;
#  
# typedef ViUInt32             ViAttr;
#  
# #ifndef _VI_CONST_STRING_DEFINED
# typedef const ViChar * ViConstString;
# #define _VI_CONST_STRING_DEFINED
# #endif  
#  
# /*- Completion and Error Codes ----------------------------------------------*/
#  
# #define VI_SUCCESS          (0L)
#  
# /*- Other VISA Definitions --------------------------------------------------*/
#  
# #define VI_NULL             (0)
#  
# #define VI_TRUE             (1)
# #define VI_FALSE            (0)
#  
# #endif

# /*- VISA Types --------------------------------------------------------------*/ 
# typedef unsigned long       ViUInt32; 
#  
# typedef signed long         ViInt32; 
#  
# typedef unsigned short      ViUInt16; 
#  
# typedef signed short        ViInt16; 
#  
# typedef unsigned char       ViUInt8; 
#  
# typedef signed char         ViInt8; 
#  
# typedef char                ViChar; 
#  
# typedef unsigned char       ViByte; 
#  
# typedef void*               ViAddr; 
#  
# typedef float               ViReal32; 
#  
# typedef double              ViReal64; 
#  
# typedef ViByte*             ViBuf; 
#  
# typedef ViChar*             ViString; 
#  
# typedef ViString            ViRsrc; 
#  
# typedef ViUInt16            ViBoolean; 
#  
# typedef ViInt32             ViStatus; 
#  
# typedef ViUInt32            ViVersion; 
#  
# typedef ViUInt32            ViObject; 
#  
# typedef ViObject            ViSession; 
#  
# typedef ViUInt32            ViAttr; 
#  
# typedef const ViChar * ViConstString; 
#  
# /*- Other VISA Definitions --------------------------------------------------*/ 
# #define VI_SUCCESS          (0L) 
#  
# #define VI_NULL             (0) 
#  
# #define VI_TRUE             (1) 
#  
# #define VI_FALSE            (0) 
#  
# #endif 


#\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\#
# Some predefined mappings from Vi*** types to #
# the c_types these correspond to.             #
#\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\#
ViRsrc = c_char_p
ViBoolean = c_ushort
ViSession = c_uint
ViConstString = c_char_p
ViInt16 = c_short
ViInt32 = c_int32
ViReal64 = c_double
ViChar = c_char
ViStatus = c_int32

class WX218x_DigPatternDelayMode(object):
    (
     COMMON,   # Sets delay mode as Common for Digital Pattern Output.
     SEPARATE  # Sets delay mode as Separate for Digital Pattern Output.
     ) = map(c_int, xrange(2))

class WX218x_MarkerSource(object):
    (
     WAVE, # Wave marker source.
     USER  # User marker source.
     ) = map(c_int, xrange(2))

class WX218x_OperationMode(object):
    '''
    Commented out values are only in the WX218X_ATTR_OPERATION_MODE2 attribute
    which I don't use.
    '''
    (
    CONTINUOUS, # Generate output continuously.
    BURST,      # Generate a burst of waveforms when a trigger occurs.               
    TRIGGER,    # Trigger operation mode.   NOTE: THIS SEEMS TO BE THE MODE THAT RESPECTS THE BURST COUNT SETTINGS!         
    GATE        # Gate operation mode.
     ) = map(c_int, xrange(4))


class WX218x_OutputMode(object):
    '''
    Commented out values are only in the WX218X_ATTR_OUTPUT_MODE2 attribute
    which I don't use.
    '''
    (
    FUNCTION,    # Selects the standard waveform shapes.
    ARBITRARY,   # Selects the arbitrary waveform shapes.                
    SEQUENCE,    # Selects the sequenced waveform output. (Not for WS8351,WS8352)            
#     ASEQUENCE,   # Selects the advanced sequencing waveform output. (Not for WS8351,WS8352)
#     MODULATION,  # Selects the modulated waveforms.
#     PULSE,       # Selects the digital pulse function.
#     PATTERN      # Sets pattern output mode. (Not for WX2181,WX2182)
    ) = map(c_int, xrange(3))

class WX218x_SequenceAdvanceMode(object):
    (
     AUTO, # Specifies continuous advance where the generator steps continuously
           # to the end of the sequence table and repeats the sequence from the 
           # start.
     ONCE, # Selects the once sequence advance mode, where the generator steps 
           # through the sequence table automatically once except if the
           # seq:once:coun programmed a value greater than 1.
     STEP  # Specifies the stepped sequence advance mode, where the generator
           # steps to the next waveform only when a valid event signal has been
           # received.
     ) = map(c_int32, xrange(3))

class WX218x_TraceMode(object):
    (
     SINGLE,    # Selects the Single trace mode for download waveforms. 
     DUPLICATE, # Selects the Duplicate trace mode for download waveforms. 
     ZERO,      # Selects the Zero trace mode for download waveforms.
     COMBINE    # Selects the Combine trace mode for download waveforms.
     ) = map(c_int32, xrange(4))

class WX218x_TriggerImpedance(object):
    (
     LOW, # Sets the trigger impedance to 50 Ohms.
     HIGH # Sets the trigger impedance to 10k Ohms.
     ) = map(c_int32, xrange(2))
     
class WX218x_TriggerMode(object):
    (
     EXTERNAL, # Selects the TRIG IN connector as the input source. The manual
               # trigger can be used in case external triggers are not available.
               # All other inputs are ignored.
     SOFTWARE, # Selects the remote controller as the trigger source. Only
               # software commands are accepted; TRIG IN, Event IN and manual
               # triggers are ignored.
     TIMER,    # Activates the built in internal trigger generator. BUS and
               # external trigger are ignored. The period of the internal trigger
               # is programmable and can be used to replace an external trigger source.
     EVENT     # Selects the Event IN connector as the input source. All other inputs
               # are ignored.
     ) = map(c_int32, [1,2,4,5])
     
class WX218x_TriggerSlope(object):
    (
     POSITIVE, # Selects the positive going edge.
     NEGATIVE, # Selects the negative going edge.
     EITHER    # Selects both positive and negative going edges.Not supported for WX2184.
     ) = map(c_int32, xrange(3))
class WX218x_Waveform(object):
    (
     SINE,       # Configures the function generator to produce a sinusoid waveform.
     SQUARE,     # Configures the function generator to produce a square waveform.
     TRIANGLE,   # Configures the function generator to produce a triangle waveform.
     RAMP_UP,    # Configures the function generator to produce a ramp waveform.
     RAMP_DOWN,  # Configures the function generator to produce a ramp waveform.
     DC,         # Configures the function generator to produce a dc waveform.
     SINC,       # Configures the function generator to produce a sinc waveform.
     GAUSSIAN,   # Configures the function generator to produce a gaussian waveform.
     EXPONENTIAL,# Configures the function generator to produce a exponential waveform.
     NOISE       # Configures the function generator to produce a noise waveform.
     ) = map(c_int32, xrange(1,11))

class WX218x_DLL(object):
    """
    ctypes funcs to talk to wx218x.dll.
    """
    wx218x_dll = windll.LoadLibrary('C:\\Users\\apc\\Documents\\Python Scripts\\Cold Control Heavy\\dlls\\IVI Foundation\\IVI\\Bin\\wx218x_64.dll')
    
    # ///////////////////////////////////////////////////////////////////////////
    # /*!
    # Opens the I/O session to the instrument. Driver methods and properties that
    # access the instrument are only accessible after Initialize is called.
    # Initialize optionally performs a Reset and queries the instrument to 
    # validate the instrument model.
    # 
    # Parameters
    #     ResourceName 
    #         An IVI logical name or an instrument specific string that identifies
    #         the address of the instrument, such as a VISA resource descriptor
    #         string.
    #     IdQuery 
    #         Specifies whether to verify the ID of the instrument.
    #     Reset 
    #         Specifies whether to reset the instrument.
    #     Vi 
    #         Unique identifier for an IVI session.
    # 
    # Return Value
    #     Success or failure code.
    # */
    # ViStatus wx218x_init(
    #     ViRsrc ResourceName,
    #     ViBoolean IdQuery,
    #     ViBoolean Reset,
    #     ViSession* Vi
    # );
    init = wx218x_dll.wx218x_init
    init.restype = c_int
    init.argtypes = (ViRsrc, ViBoolean, ViBoolean, POINTER(ViSession))
    
    # ///////////////////////////////////////////////////////////////////////////
    # /*!
    # Opens the I/O session to the instrument. Driver methods and properties that 
    # access the instrument are only accessible after Initialize is called. 
    # Initialize optionally performs a Reset and queries the instrument to validate 
    # the instrument model.
    # 
    # Parameters
    #     ResourceName 
    #         An IVI logical name or an instrument specific string that identifies 
    #         the address of the instrument, such as a VISA resource descriptor 
    #         string.
    #     IdQuery 
    #         Specifies whether to verify the ID of the instrument.
    #     Reset 
    #         Specifies whether to reset the instrument.
    #     OptionsString 
    #         The user can use the OptionsString parameter to specify the initial
    #         values of certain IVI inherent attributes for the session. The
    #         format of an assignment in the OptionsString parameteris "Name=Value",
    #         where Name is one of: RangeCheck, QuerytInstrStatus, Cache, Simulate, 
    #         RecordCoercions, InterchangeCheck,or DriverSetup. Value is either true
    #         or false except for DriverSetup. If the Options String parameter 
    #         contains an assignment for the Driver Setup attribute, the Initialize 
    #         function assumes that everything following "DriverSetup=" is part of 
    #         the assignment.
    #     Vi 
    #         Unique identifier for an IVI session.
    # 
    # Return Value
    #     Success or failure code.
    # */ 
    # ViStatus wx218x_InitWithOptions(
    #     ViRsrc ResourceName,
    #     ViBoolean IdQuery,
    #     ViBoolean Reset,
    #     ViConstString OptionsString,
    #     ViSession* Vi
    # );
    init_with_options = wx218x_dll.wx218x_InitWithOptions
    init_with_options.restype = c_int
    init_with_options.argtypes = (ViRsrc, ViBoolean, ViBoolean, ViConstString, POINTER(ViSession))
    
    # ///////////////////////////////////////////////////////////////////////////
    # /*!
    # Closes the I/O session to the instrument. Driver methods and properties that 
    # access the instrument are not accessible after Close is called.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    # 
    # Return Value
    #     Success or failure code.
    # */
    # ViStatus wx218x_close(
    #     ViSession Vi
    # );
    close = wx218x_dll.wx218x_close
    close.restype = c_int32
    close.argtypes = (ViSession,)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Places the instrument in a known state and configures instrument options on
    # which the IVI specific driver depends (for example, enabling/disabling
    # headers). For an IEEE 488.2 instrument, Reset sends the command string
    # *RST to the instrument.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # ViStatus wx218x_reset(
    #     ViSession Vi
    # );
    reset = wx218x_dll.wx218x_reset
    reset.restype = c_int32
    reset.argtypes = (ViSession,)
        
    # ///////////////////////////////////////////////////////////////////////////
    # /*!
    # Closes the I/O session to the instrument. Driver methods and properties that 
    # access the instrument are not accessible after Close is called.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    #     ChannelName 
    #         The name of the channel to enable or disable.
    #     Enabled 
    #         Specifies whether the signal the function generator produces 
    #         appears at the channel's output connector.
    # 
    # Return Value
    #     Success or failure code.
    # */
    # ViStatus wx218x_ConfigureOutputEnabled(
    #    ViSession Vi,
    #    ViConstString ChannelName,
    #    ViBoolean Enabled
    # );
    '''
    Not working as expected last I tried - configure seems to do the same job
    (but actually do it).
    '''
    configure_output_enabled = wx218x_dll.wx218x_ConfigureOutputEnabled
    configure_output_enabled.restype = c_int
    configure_output_enabled.argtypes = (ViSession, ViConstString, ViBoolean)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Sets the output terminal impedance of one of the function generator's channels.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviFgen_init or
    #         IviFgen_InitWithOptions function. The handle identifies a particular
    #         instrument session.
    #     ChannelName 
    #         The name of the channel on which to configure the output impedance.
    #         For valid values, see the Channel repeated capability. 
    #     Impedance 
    #         Specifies the output terminal impedance. The driver uses this value
    #         to set the Output Impedance Attribute. See the attribute description
    #         for more details.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # */
    # ViStatus wx218x_ConfigureOutputImpedance(
    #     ViSession Vi,
    #     ViConstString ChannelName,
    #     ViReal64 Impedance
    # );
    configure_output_impedance = wx218x_dll.wx218x_ConfigureOutputImpedance
    configure_output_impedance.restype = c_int
    configure_output_impedance.argtypes = (ViSession, ViConstString, ViReal64)
    
    # ///////////////////////////////////////////////////////////////////////////
    # This method load waveform from file and create an arbitrary waveform.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a particular
    #         instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass VI_NULL if
    #         the operation does not apply to a repeated capability. You can also pass
    #         VI_NULL if the device only has a single channel.For valid values, see the
    #         Channel repeated capability. 
    #     FileNameBufferSize 
    #         Number of elements in FileName.
    #     FileName 
    #         Path of the arbitrary waveform you want to download with extension ".wav",
    #         ".asc" or ".txt"
    #     Val 
    #         Handle that identifies that waveform.
    # 
    # Return Value
    #     Success or failure code. 
    # 
    # */
    # ViStatus wx218x_LoadArbWfmFromFile(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 FileNameBufferSize,
    #     ViConstString FileName,
    #     ViInt32* Val
    # );
    load_arb_wfm_from_file = wx218x_dll.wx218x_LoadArbWfmFromFile
    load_arb_wfm_from_file.restype = c_int
    load_arb_wfm_from_file.argtypes = (ViSession, ViConstString, ViInt32, ViConstString, POINTER(ViInt32))
    
    # ///////////////////////////////////////////////////////////////////////////
    # This method load csv waveform from file and create an arbitrary
    # waveform.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init
    #         or IviDriver_InitWithOptions function. The handle identifies
    #         a particular instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass
    #         VI_NULL or empty string if operation does not apply to a
    #         repeated capability.For valid values, see the Channel
    #         repeated capability. 
    #     FileNameBufferSize 
    #         Number of elements in FileName.
    #     FileName 
    #         Path of the arbitrary waveform you want to download.
    #     Val 
    #         Handle that identifies that waveform.
    #
    # Return Value
    #     Success or failure code. 
    # 
    # */
    # ViStatus wx218x_LoadCSVFile(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 FileNameBufferSize,
    #     ViConstString FileName,
    #     ViInt32* Val
    # );
    load_csv_file = wx218x_dll.wx218x_LoadAsciiArbWfmFromFile
    load_csv_file.restype = c_int
    load_csv_file.argtypes = (ViSession, ViConstString, ViInt32, ViConstString, POINTER(ViInt32))
    
    # ///////////////////////////////////////////////////////////////////////////
    # This method creates an arbitrary waveform from array of Data values.
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Arbitrary\Waveform\Create Arbitrary Waveform 
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    #     DataBufferSize 
    #         Number of elements in Data.
    #     Data 
    #         Array of data you want to use for the new arbitrary waveform.
    #         You must normalize the data points in the array to be between
    #         -1.00 and +1.00.
    #     Val 
    #         Handle that identifies that waveform.
    # 
    # Return Value
    #     Success or failure code.   
    # */
    # ViStatus wx218x_CreateArbitraryWaveform(
    #     ViSession Vi,
    #     ViInt32 DataBufferSize,
    #     ViReal64[] Data,
    #     ViInt32* Val
    # );
    create_arbitrary_waveform = wx218x_dll.wx218x_CreateArbitraryWaveform
    create_arbitrary_waveform.restype = c_int
    create_arbitrary_waveform.argtypes = (ViSession, ViInt32, POINTER(ViReal64), POINTER(ViInt32)) 

    create_arbitrary_waveform_custom = wx218x_dll.wx218x_CreateArbitraryWaveformCustom
    create_arbitrary_waveform_custom.restype = c_int
    create_arbitrary_waveform_custom.argtypes = (ViSession, ViInt32, POINTER(ViInt16), POINTER(ViInt32)) 

    # ///////////////////////////////////////////////////////////////////////////
    # This method download an arbitrary waveform from arrays of Data
    # (short) values,that are already in range from 0 to 16383 in
    # to the both channels(Channel1 and Channel2,Channel3 and Channel4)
    # when trace mode is Double or Combine (only for 4Ch. models).
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Arbitrary\Waveform\Create Custom Adv 
    #  
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    #     Data1BufferSize 
    #         Number of elements in Data1.
    #     Data1 
    #         Array of data you want to use for the new arbitrary waveform.
    #         You must normalize the data points in the array to be between
    #         -1.00 and +1.00.
    #     Data2BufferSize 
    #         Number of elements in Data2.    
    #     Data2 
    #         Array of data you want to use for the new arbitrary waveform.
    #         You must normalize the data points in the array to be between
    #         -1.00 and +1.00.
    #     Handle1 
    #         Handle that identifies that waveform for the first channel set.
    #     Handle2 
    #         Handle that identifies that waveform for the second channel set.
    #         
    # Return Value
    #     Success or failure code.
    #     
    # */
    # ViStatus wx218x_CreateCustomAdv(
    #     ViSession Vi,
    #     ViInt32 Data1BufferSize,
    #     ViInt16[] Data1,
    #     ViInt32 Data2BufferSize,
    #     ViInt16[] Data2,
    #     ViInt32* Handle1,
    #     ViInt32* Handle2
    # );
    create_custom_adv = wx218x_dll.wx218x_CreateCustomAdv
    create_custom_adv.restype = c_int
    create_custom_adv.argtypes = (ViSession, ViInt32, POINTER(ViInt16), ViInt32, POINTER(ViInt16), POINTER(ViInt32), POINTER(ViInt32)) 
    
    # ///////////////////////////////////////////////////////////////////////////
    # Specifies the factor by which the function generator scales the arbitrary
    # waveforms.
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Arbitrary\Configure Arb Gain 
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass VI_NULL
    #         or empty string if operation does not apply to a repeated capability.
    #         For valid values, see the Channel repeated capability. 
    #     Gain 
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks 
    #     Gain Valid Range: 
    #         50E-3 to 2 (WX2181,WX2182,WX2181B,WX2182B,WX2182C,WX1281B,WX1282B,
    #                     WX2181B-D,WX2182B-D,WX1281B-D,WX1282B-D,WX2184,WX1284,
    #                     WX2184C,WX1284C)
    #         50E-3 to 4 (WS8351,WS8352)
    #*/
    # ViStatus wx218x_ConfigureArbGain(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViReal64 Gain
    # );
    configure_arb_gain = wx218x_dll.wx218x_ConfigureArbGain
    configure_arb_gain.restype = c_int
    configure_arb_gain.argtypes = (ViSession, ViConstString, ViReal64) 
    

    
    # ///////////////////////////////////////////////////////////////////////////
    # Configures how the function generator produces output on a channel.
    # 
    # Parameters
    # Vi 
    #     The ViSession handle that you obtain from the IviFgen_init or
    #     IviFgen_InitWithOptions function. The handle identifies a particular
    #     instrument session.
    # ChannelName 
    #     The name of the channel on which to configure the operation mode.
    #     For valid values, see the Channel repeated capability. 
    # OperationMode 
    #     Specifies how the function generator produces output. The driver uses
    #     this value to set the Operation Mode attribute. See the attributE
    #     description for more details.
    #     Tom note: see WX218x_OperationMode enum at top of class for options.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # ViStatus wx218x_ConfigureOperationMode(
    #     ViSession Vi,
    #     ViConstString ChannelName,
    #     ViInt32 OperationMode
    # );
    configure_operation_mode = wx218x_dll.wx218x_ConfigureOperationMode
    configure_operation_mode.restype = c_int
    configure_operation_mode.argtypes = (ViSession, ViConstString, ViInt32)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Configures the output mode of the function generator. The output mode determines
    # how the function generator produces waveforms.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviFgen_init or
    #         IviFgen_InitWithOptions function. The handle identifies a particular
    #         instrument session.
    #     OutputMode 
    #         Specifies the output mode. The driver uses this value to set the Output
    #         Mode attribute. See the attribute description for more details.
    #         Tom note: see WX218x_OutputMode enum at top of class for options.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Defined Values For Parameter OutputMode 
    #     WX218X_VAL_OUTPUT_FUNC:
    #         The driver uses the attributes and functions of the IviFgenStdFunc
    #         extension group to configure the function generator's output signal. 
    #     WX218X_VAL_OUTPUT_ARB:
    #         The driver uses the attributes and functions of the IviFgenArbWfm
    #         extension group to configure the function generator's output signal. 
    #     WX218X_VAL_OUTPUT_SEQ:
    #         The driver uses the attributes and functions of the IviFgenArbSeq
    #         extension group to configure the function generator's output signal. 
    # 
    # */
    # ViStatus wx218x_ConfigureOutputMode(
    #     ViSession Vi,
    #     ViInt32 OutputMode
    # );
    configure_output_mode = wx218x_dll.wx218x_ConfigureOutputMode
    configure_output_mode.restype = c_int
    configure_output_mode.argtypes = (ViSession, ViInt32)    
    
    # ///////////////////////////////////////////////////////////////////////////
    # Configures the function generator attributes that affect standard waveform generation.
    # When the Waveform parameter is set to Waveform DC, this function ignores the Amplitude,
    # Frequency, and Start Phase parameters.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviFgen_init or IviFgen_InitWithOptions
    #         function. The handle identifies a particular instrument session.
    #     ChannelName 
    #         The ChannelName parameter may be a string defined by the driver or supplied as a
    #         virtual name in the configuration store. For single output instruments, the driver
    #         may define the empty string as valid ChannelName.For valid values, see the Channel
    #         repeated capability. 
    #     Waveform 
    #         Specifies the standard waveform. This value sets the Waveform property
    #     Amplitude 
    #         Specifies the waveform amplitude. This value sets the Amplitude property
    #     DCOffset 
    #         Specifies the waveform's DC offset. Tthis value sets the DC Offset attribute.
    #     Frequency 
    #         Specifies the waveform frequency. Tthis value sets the Frequency attribute.
    #     StartPhase 
    #         Specifies the waveform start phase. This value sets the Start Phase attribute.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # */
    # ViStatus wx218x_ConfigureStandardWaveform(
    #     ViSession Vi,
    #     ViConstString ChannelName,
    #     ViInt32 Waveform,
    #     ViReal64 Amplitude,
    #     ViReal64 DCOffset,
    #     ViReal64 Frequency,
    #     ViReal64 StartPhase
    # );
    configure_standard_waveform = wx218x_dll.wx218x_ConfigureStandardWaveform
    configure_standard_waveform.restype = c_int
    configure_standard_waveform.argtypes = (ViSession, ViConstString, ViInt32, ViReal64, ViReal64, ViReal64, ViReal64)
    
    # ///////////////////////////////////////////////////////////////////////////
    # This method configures the parameters of the function generator that 
    # affect standard waveform generation.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a particular
    #         instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass VI_NULL
    #         if the operation does not apply to a repeated capability. You can
    #         also pass VI_NULL if the device only has a single channel.For valid
    #         values, see the Channel repeated capability. 
    #     Waveform 
    #         Selects the standard waveform that you want the function generator
    #         to produce.
    #     Amplitude 
    #         Sets the amplitude of the standard waveform.
    #     DCOffset 
    #         Sets the DC offset of the standard waveform.
    #     Frequency 
    #         Sets the frequency of the standard waveform.
    #     StartPhase 
    #         Sets the horizontal offset of the standard waveform.
    # Return Value
    #     Success or failure code.
    # 
    # Remarks
    # 
    #     The Waveform parameter can take on any value in the WX218xWaveform enum
    #     
    #     Amplitude 
    #         Valid Range: 
    #             50E-3 to 2 (WX2181,WX2182,WX2181B,WX2182B,WX2182C,WX1281B,WX1282B,
    #                         WX2181B-D,WX2182B-D,WX1281B-D,WX1282B-D,WX2184,WX1284,
    #                         WX2184C, WX1284C)
    #             50E-3 to 4 (WS8351, WS8352)
    #         Default Value: 0.5
    #     DC Offset
    #         Valid Range: 
    #             -1.0 to 1.0 (WX2184,WX1284,WX2184C,WX1284C) 
    #             -1.5 to 1.5 (other models)
    #         Default Value: 0
    #     Frequency 
    #         Valid Range: 
    #             WX2181,WX2182,WX2181B,WX2182B,WX2181C,WX2182C,WX2181B-D,WX2182B-D,
    #             WX2184,WX1284,WX2184C,WX1284C : 10.0E3 to 1.0E9
    #             WX1281B,WX1282B,WX1281B-D,WX1282B-D,WX1284,WX1281C,WX1282C : 
    #             10.0E3 to 500.0E6 
    #             WS8351B,WS8352B: 10.0E3 to 350.0E6
    #         Default Value: 10E6
    #     Start Phase
    #         Valid Range: 0 to 360.0 
    #         Default Value: 0
    # 
    # ViStatus wx218x_Configure(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 Waveform,
    #     ViReal64 Amplitude,
    #     ViReal64 DCOffset,
    #     ViReal64 Frequency,
    #     ViReal64 StartPhase
    # );
    configure = wx218x_dll.wx218x_Configure
    configure.restype = c_int
    configure.argtypes = (ViSession, ViConstString, ViInt32, ViReal64, ViReal64, ViReal64, ViReal64)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Use this method for an immediate and unconditional generation of the
    # selected output waveform.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a particular
    #         instrument session.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # */
    # ViStatus wx218x_InitiateGeneration2(
    #     ViSession Vi
    # );
    initiate_generation_2 = wx218x_dll.wx218x_InitiateGeneration2
    initiate_generation_2.restype = c_int
    initiate_generation_2.argtypes = (ViSession,)
    
    # ///////////////////////////////////////////////////////////////////////////
    # If the function generator is in the Output Generation State, this function
    # moves the function generator to the Configuration State. If the function 
    # generator is already in the Configuration State, the function does nothing
    # and returns Success.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviFgen_init or
    #         IviFgen_InitWithOptions function. The handle identifies a particular
    #         instrument session.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # ViStatus wx218x_AbortGeneration(
    #     ViSession Vi
    # );
    abort_generation = wx218x_dll.wx218x_AbortGeneration
    abort_generation.restype = c_int
    abort_generation.argtypes = (ViSession,)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Sets the active channel for programming.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init
    #         or IviDriver_InitWithOptions function. The handle identifies
    #         a particular instrument session.
    #     ChNameBufferSize 
    #         Number of elements in ChName.
    #     ChName 
    # 
    # Return Value
    #     Success or failure code.
    # */ 
    # ViStatus wx218x_SetActiveChannel(
    #     ViSession Vi,
    #     ViInt32 ChNameBufferSize,
    #     ViConstString ChName
    # );
    set_active_channel = wx218x_dll.wx218x_SetActiveChannel
    set_active_channel.restype = c_int
    set_active_channel.argtypes = (ViSession, ViInt32, ViConstString)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Configures the function generator's sample rate.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviFgen_init or
    #         IviFgen_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    #     SampleRate 
    #         Specifies the sample rate. The driver uses this value to set the
    #         Arbitrary Sample Rate attribute. See the attribute description for
    #         more details.
    # 
    # Return Value
    #     Success or failure code.
    # */
    # ViStatus wx218x_ConfigureSampleRate(
    #     ViSession Vi,
    #     ViReal64 SampleRate
    # );
    configure_sample_rate = wx218x_dll.wx218x_ConfigureSampleRate
    configure_sample_rate.restype = c_int
    configure_sample_rate.argtypes = (ViSession, ViReal64)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Use this method to configure the trace mode (only for 4Ch. models).
    # 
    # Parameters
    #     Vi
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    #     TraceMode 
    #         The TraceMode parameter can take on any value in the
    #         WX218xTraceMode enum
    #         Tom note: see WX218x_TraceMode enum for options.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Collapse imageRemarks 
    # */
    # ViStatus wx218x_ConfigureArbWaveTraceMode(
    #     ViSession Vi,
    #     ViInt32 TraceMode
    # );
    configure_arb_wave_trace_mode = wx218x_dll.wx218x_ConfigureArbWaveTraceMode
    configure_arb_wave_trace_mode.restype = c_int
    configure_arb_wave_trace_mode.argtypes = (ViSession, ViInt32)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Creates an arbitrary waveform sequence from an array of waveform handles
    # and a corresponding array of loop counts, and returns a handle that
    # identifies the sequence. The handle is used by the Configure, and
    # Clear methods.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviFgen_init or
    #         IviFgen_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    #     Length 
    #     WfmHandle 
    #         Specifies the array of waveform handles for the new arbitrary
    #         sequence. Each WfmHandle array element has a corresponding
    #         LoopCount array element that specifies how many times that
    #         waveform is repeated.
    #     LoopCount 
    #         Specifies the array of loop counts for the new arbitrary
    #         sequence. Each LoopCount array element corresponds to a
    #         WfmHandle array element and indicates how many times to repeat
    #         that waveform. Each element of the LoopCount array must be
    #         less than or equal to the maximum number of loop counts the
    #         function generator allows. The function generator's maximum
    #         loop count is stored in the Loop Count Max attribute.
    #     Handle 
    #         Returns the handle that identifies the new arbitrary sequence.
    # 
    # Return Value
    #     Success or failure code.
    # */
    # ViStatus wx218x_CreateArbSequence(
    #     ViSession Vi,
    #     ViInt32 Length,
    #     ViInt32[] WfmHandle,
    #     ViInt32[] LoopCount,
    #     ViInt32* Handle
    # );
    create_arb_sequence = wx218x_dll.wx218x_CreateArbSequence
    create_arb_sequence.restype = c_int
    create_arb_sequence.argtypes = (ViSession, ViInt32, POINTER(ViInt32), POINTER(ViInt32), POINTER(ViInt32))
    
    # ///////////////////////////////////////////////////////////////////////////
    # This method creates an arbitrary sequence from an array of waveform 
    # handles, array of corresponding loop counts and array of JumpFlag 
    # (not for WS8351,WS8352).
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init
    #         or IviDriver_InitWithOptions function. The handle identifies 
    #         a particular instrument session.
    #     WfmHandleBufferSize 
    #         Number of elements in WfmHandle.
    #     WfmHandle 
    #         Array of waveform handles.
    #     LoopCountBufferSize 
    #         Number of elements in LoopCount.
    #     LoopCount 
    #         Array of loop count.
    #     JumpFlagBufferSize 
    #         Number of elements in JumpFlag.
    #     JumpFlag 
    #         Array of jump flag.
    #     Val 
    #         Handle that identifies the new arbitrary sequence.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks
    #     Loop Count Valid Range:
    #         1 to 1048576 (WX2181, WX2182)
    #         1 to 16777216 (other models
    #     JumpFlag Valid Range: 0 or 1
    # */
    # ViStatus wx218x_CreateSequenceAdv(
    #     ViSession Vi,
    #     ViInt32 WfmHandleBufferSize,
    #     ViInt32[] WfmHandle,
    #     ViInt32 LoopCountBufferSize,
    #     ViInt32[] LoopCount,
    #     ViInt32 JumpFlagBufferSize,
    #     ViChar[] JumpFlag,
    #     ViInt32* Val
    # );
    create_sequence_adv = wx218x_dll.wx218x_CreateSequenceAdv
    create_sequence_adv.restype = c_int
    create_sequence_adv.argtypes = (ViSession, ViInt32, POINTER(ViInt32), ViInt32, POINTER(ViInt32), ViInt32, POINTER(ViChar), POINTER(ViInt32))

    create_sequence_adv1 = wx218x_dll.wx218x_CreateSequenceAdv1
    create_sequence_adv1.restype = c_int
    create_sequence_adv1.argtypes = (ViSession, ViInt32, POINTER(ViInt32), ViInt32, POINTER(ViInt32), ViInt32, POINTER(ViInt32), POINTER(ViInt32))
    
    # ///////////////////////////////////////////////////////////////////////////
    # Use this method to delete specified sequence or to delete all sequences and to free space
    # for fresh sequence tables (not for WS8351,WS8352).
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Arbitrary\Sequence\Clear Arbitrary Sequence 
    #  
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or IviDriver_InitWithOptions
    #         function. The handle identifies a particular instrument session.
    #     Handle 
    #         Sequence handle that will be deleted.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks 
    #     If Handle = -1, delete all sequences.
    # */
    # ViStatus wx218x_ClearArbitrarySequence(
    #     ViSession Vi,
    #     ViInt32 Handle
    # );
    clear_arbitrary_sequence = wx218x_dll.wx218x_ClearArbitrarySequence
    clear_arbitrary_sequence.restype = c_int
    clear_arbitrary_sequence.argtypes = (ViSession, ViInt32)
    
    # ///////////////////////////////////////////////////////////////////////////
    # This method will delete a predefined segment from the working memory or all
    # predefined segments and will clear the entire waveform memory space.
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Arbitrary\Waveform\Clear Arbitrary Waveform
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or IviDriver_InitWithOptions function. The handle identifies a particular instrument session.
    #     Handle 
    #         Waveform handle that will be deleted.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks 
    #     If Handle = -1, delete all waveforms.
    # */
    # ViStatus wx218x_ClearArbitraryWaveform(
    #     ViSession Vi,
    #     ViInt32 Handle
    # );
    clear_arbitrary_waveform = wx218x_dll.wx218x_ClearArbitraryWaveform
    clear_arbitrary_waveform.restype = c_int
    clear_arbitrary_waveform.argtypes = (ViSession, ViInt32)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Selects the sequence advance mode (not for WS8351,WS8352).
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Arbitrary\Sequence\Configure Advance Mode 
    #  
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init
    #         or IviDriver_InitWithOptions function. The handle identifies
    #         a particular instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass
    #         VI_NULL if the operation does not apply to a repeated capability.
    #         You can also pass VI_NULL if the device only has a single channel.
    #         For valid values, see the Channel repeated capability. 
    #     AdvanceMode 
    #         The AdvanceMode parameter can take on any value in the WX218xSequenceAdvanceMode enum.
    #         Tom note see WX218x_SequenceAdvanceMode object for valid options.
    #     
    # Return Value
    #     Success or failure code.
    # */
    # ViStatus wx218x_ConfigureAdvanceMode(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 AdvanceMode
    # );
    configure_advance_mode = wx218x_dll.wx218x_ConfigureAdvanceMode
    configure_advance_mode.restype = c_int
    configure_advance_mode.argtypes = (ViSession, ViConstString, ViInt32)
    
    # ViStatus wx218x_ConfigureOnceCount2(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 Count
    # );
    # Sets sequence once count (not for WS8351,WS8352).
    configure_once_count = wx218x_dll.wx218x_ConfigureOnceCount
    configure_once_count.restype = c_int
    configure_once_count.argtypes = (ViSession, ViConstString, ViInt32)
    
    # Sets advance sequence once count (not for WS8351,WS8352).
    configure_once_count_2 = wx218x_dll.wx218x_ConfigureOnceCount2
    configure_once_count_2.restype = c_int
    configure_once_count_2.argtypes = (ViSession, ViConstString, ViInt32)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Use this method to set the source of the trigger event that will stimulate
    # the instrument to generate waveforms.
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Trigger\Configure Trig Source 
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init
    #         or IviDriver_InitWithOptions function. The handle identifies
    #         a particular instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass
    #         VI_NULL if the operation does not apply to a repeated capability.
    #         You can also pass VI_NULL if the device only has a single channel.
    #         For valid values, see the Channel repeated capability. 
    #     Source 
    #         Sets the source of the trigger event. The parameter can take on
    #         any value in the WX218xTriggerSource enum.
    #         Tom note: see WX218x_TriggerMode enum for allowed values.
    # 
    # Return Value
    #     Success or failure code.
    # */
    # ViStatus wx218x_ConfigureTrigSource(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 Source
    # );
    configure_trig_source = wx218x_dll.wx218x_ConfigureTrigSource
    configure_trig_source.restype = c_int
    configure_trig_source.argtypes = (ViSession, ViConstString, ViInt32)
 
    # ///////////////////////////////////////////////////////////////////////////
    # Use this method to program the threshold level for the trigger input signals.
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Trigger\Configure2 
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass
    #         VI_NULL if the operation does not apply to a repeated capability.
    #         You can also pass VI_NULL if the device only has a single channel.
    #         For valid values, see the Channel repeated capability. 
    #     Level 
    #         Programs the threshold level for the trigger input signals.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks
    #     Valid Range: -5 to 5 
    #     Default Value: 1.6
    # */
    # ViStatus wx218x_Configure2(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViReal64 Level
    # );
    configure2 = wx218x_dll.wx218x_Configure2
    configure2.restype = c_int
    configure2.argtypes = (ViSession, ViConstString, ViReal64)

    # ///////////////////////////////////////////////////////////////////////////
    # Use this method to define the edge that will affect the trigger input.
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Trigger\Configure Trig Slope 
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass
    #         VI_NULL if the operation does not apply to a repeated capability.
    #         You can also pass VI_NULL if the device only has a single channel.
    #         For valid values, see the Channel repeated capability. 
    #     Slope 
    #         Defines the edge that will affect the trigger input.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks 
    #     The parameter can take on any value in the WX218xTriggerSlope enum
    # */
    # ViStatus wx218x_ConfigureTrigSlope(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 Slope
    # );
    configure_trig_slope = wx218x_dll.wx218x_ConfigureTrigSlope
    configure_trig_slope.restype = c_int
    configure_trig_slope.argtypes = (ViSession, ViConstString, ViInt32)

    # ///////////////////////////////////////////////////////////////////////////
    # Use this method to configure Trigger Impedance (only for WX218xC,WX128xC models).
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Trigger\Configure Trigger Impedance 
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    #     TriggerImpedance 
    #         Configures Trigger Impedance.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks 
    #     The parameter can take on any value in the WX218xTriggerImpedance enum
    # */
    # ViStatus wx218x_ConfigureTriggerImpedance(
    #     ViSession Vi,
    #     ViInt32 TriggerImpedance
    # );
    configure_trigger_impedance = wx218x_dll.wx218x_ConfigureTriggerImpedance
    configure_trigger_impedance.restype = c_int
    configure_trigger_impedance.argtypes = (ViSession, ViInt32)

    # ///////////////////////////////////////////////////////////////////////////
    # Programs the internal delayed trigger generator period in units of waveform points.
    # Program the value using integers divisible by 8.
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Trigger\Configure Trigger Timer Delay 
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or
    #         IviDriver_InitWithOptions function. The handle identifies a
    #         particular instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass
    #         VI_NULL if the operation does not apply to a repeated capability.
    #         You can also pass VI_NULL if the device only has a single channel.
    #         For valid values, see the Channel repeated capability. 
    #     TimerDelay 
    #         Programs the internal delayed trigger generator period in units
    #         of waveform points.
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks 
    #     Valid Range: 
    #         76 to 8E6 (integers divisible by 8, WS8351,WS8352) 
    #         152 to 4194304 (integers divisible by 8, WX2184,WX1284,WX2184C,WX1284C) 
    #         152 to 8E6 (integers divisible by 8, all other models) 
    #         80 to 8E6 (integers divisible by 4, all other models, 32M option) 
    #     Default Value: 32768
    # */
    # ViStatus wx218x_ConfigureTriggerTimerDelay(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 TimerDelay
    # );
    configure_trigger_timer_delay = wx218x_dll.wx218x_ConfigureTriggerTimerDelay
    configure_trigger_timer_delay.restype = c_int
    configure_trigger_timer_delay.argtypes = (ViSession, ViConstString, ViInt32)
    
    # ///////////////////////////////////////////////////////////////////////////
    # This method sends a command to trigger the function generator.
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Trigger\Send Software Trigger2 
    #  
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init
    #         or IviDriver_InitWithOptions function. The handle identifies
    #         a particular instrument session.
    # 
    # Return Value
    #     Success or failure code.
    # */
    # ViStatus wx218x_SendSoftwareTrigger2(
    #     ViSession Vi
    # );
    send_software_trigger_2 = wx218x_dll.wx218x_SendSoftwareTrigger2
    send_software_trigger_2.restype = c_int
    send_software_trigger_2.argtypes = (ViSession,)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Use this method to set the burst counter setting.
    # 
    # Function Tree Node: \WX218x\Instrument Specific\Trigger\Configure Burst Count2 
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init
    #         or IviDriver_InitWithOptions function. The handle identifies
    #         a particular instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass
    #         VI_NULL if the operation does not apply to a repeated capability.
    #         You can also pass VI_NULL if the device only has a single channel.
    #         For valid values, see the Channel repeated capability. 
    #     Count 
    #         Sets the burst counter setting.
    # 
    # Return Value
    #     Success or failure code.
    #
    # Remarks 
    #     Valid Range: 1 to 1000000 (WX2181,WX2182,WS8351,WS8352)
    #                  1 to 16777216 (WX2181B,WX2182B,WX2182C,WX1281B,WX1282B,
    #                                 WX2181B-D,WX2182B-D,WX1281B-D,WX1282B-D,
    #                                 WX2184,WX1284,WX2184C,WX1284C)
    #     Default Value: 1
    # */
    # ViStatus wx218x_ConfigureBurstCount2(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 Count
    # );
    configure_burst_count_2 = wx218x_dll.wx218x_ConfigureBurstCount2
    configure_burst_count_2.restype = c_int
    configure_burst_count_2.argtypes = (ViSession, ViConstString, ViInt32)
    
    configure_burst_count = wx218x_dll.wx218x_ConfigureBurstCount
    configure_burst_count.restype = c_int
    configure_burst_count.argtypes = (ViSession, ViConstString, ViInt32)

    # Marker functions
    # ///////////////////////////////////////
    # wx218x_ConfigureMarkerEnabled
    # wx218x_ConfigureMarkerPosition
    # wx218x_ConfigureMarkerSource
    # wx218x_ConfigureMarkerWidth
    # wx218x_MarkerRefresh2
    # 
    # wx218x_ConfigureMarkerIndex
    # wx218x_ConfigureMarkerHighLevel4Ch
    # wx218x_ConfigureMarkerLowLevel4Ch
    
#     ViStatus wx218x_ConfigureMarkerEnabled(
#     ViSession Vi,
#     ViConstString Channel,
#     ViInt32 Index,
#     ViBoolean Enabled
#     );
    configure_marker_enabled = wx218x_dll.wx218x_ConfigureMarkerEnabled
    configure_marker_enabled.restype = c_int
    configure_marker_enabled.argtypes = (ViSession, ViConstString, ViInt32, ViBoolean)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Sets marker position relative to the waveform start point in units of waveform
    # points (not for WS835x,WX218xB-D,WX128xB-D).
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or 
    #         IviDriver_InitWithOptions function. The handle identifies a particular
    #          instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass VI_NULL 
    #         if the operation does not apply to a repeated capability. You can also
    #          pass VI_NULL if the device only has a single channel.For valid values,
    #       see the Channel repeated capability. 
    #     Index 
    #         Marker Index (1 or 2).
    #     Position 
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks
    #     Marker Position Valid Range: 0 to n-4 (n=segment length) 
    #     Default Value: 0
    # 
    # */
    # ViStatus wx218x_ConfigureMarkerPosition(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 Index,
    #     ViInt32 Position
    # );
    configure_marker_position = wx218x_dll.wx218x_ConfigureMarkerPosition
    configure_marker_position.restype = c_int
    configure_marker_position.argtypes = (ViSession, ViConstString, ViInt32, ViInt32)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Use this method to set marker source (only for 4Ch. models).
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or 
    #         IviDriver_InitWithOptions function. The handle identifies a particular 
    #         instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass VI_NULL
    #         if the operation does not apply to a repeated capability. You can
    #         also pass VI_NULL if the device only has a single channel.For valid
    #         values, see the Channel repeated capability. 
    #     Source 
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks
    #     The Source parameter can take on any value in the WX218xMarkerSource enum
    # 
    # */
    # ViStatus wx218x_ConfigureMarkerSource(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 Source
    # );
    configure_marker_source = wx218x_dll.wx218x_ConfigureMarkerSource
    configure_marker_source.restype = c_int
    configure_marker_source.argtypes = (ViSession, ViConstString, ViInt32)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Sets the marker outputs on and off (not for WS835x, WX218xB-D,WX128xB-D).
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or 
    #         IviDriver_InitWithOptions function. The handle identifies a 
    #         particular instrument session.
    #     Channel 
    #         The    physical or virtual repeated capability identifier. Pass
    #          VI_NULL if the operation does not apply to a repeated capability. 
    #          You can also pass VI_NULL if the device only has a single channel.
    #          For valid values, see the Channel repeated capability. 
    #     Index 
    #         Marker Index (1 or 2).
    #     Enabled 
    # 
    # Return Value
    #     Success or failure code.
    # */
    # ViStatus wx218x_ConfigureMarkerEnabled(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 Index,
    #     ViBoolean Enabled
    # );
    configure_marker_enabled = wx218x_dll.wx218x_ConfigureMarkerEnabled
    configure_marker_enabled.restype = c_int
    configure_marker_enabled.argtypes = (ViSession, ViConstString, ViInt32, ViBoolean)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Sets marker width in units of waveform points (not for WS835x,WX218xB-D,WX128xB-D).
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or 
    #         IviDriver_InitWithOptions function. The handle identifies a particular
    #         instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass VI_NULL if 
    #         the operation does not apply to a repeated capability. You can also pass 
    #         VI_NULL if the device only has a single channel.For valid values, see the
    #         Channel repeated capability. 
    #     Index 
    #         Marker Index (1 or 2).
    #     Width
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks
    #     Marker Width Valid Range: 4 to n-4 (n=segment length) 
    #     Default Value: 64
    # 
    # */
    # ViStatus wx218x_ConfigureMarkerWidth(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 Index,
    #     ViInt32 Width
    # );
    configure_marker_width = wx218x_dll.wx218x_ConfigureMarkerWidth
    configure_marker_width.restype = c_int
    configure_marker_width.argtypes = (ViSession, ViConstString, ViInt32, ViInt32)
    
    set_marker_width = wx218x_dll.wx218x_ConfigureMarkerWidth
    set_marker_width.restype = c_int
    set_marker_width.argtypes = (ViSession, ViConstString, ViInt32, ViInt32)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Use this method to set the delay of the marker output (not for WS835x, WX218xB-D,WX128xB-D).
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or IviDriver_InitWithOptions function. 
    #         The handle identifies a particular instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass VI_NULL if the operation does not 
    #         apply to a repeated capability. You can also pass VI_NULL if the device only has a single channel.
    #         For valid values, see the Channel repeated capability. 
    #     Index 
    #         Marker Index (1 or 2).
    #     Delay 
    # 
    # Return Value
    #     Success or failure code.
    # 
    # Remarks
    #     Delay Valid Range: 0 to 3E-9 
    #     Default Value: 0
    # */
    # ViStatus wx218x_ConfigureMarkerDelay(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 Index,
    #     ViReal64 Delay
    # );
    configure_marker_delay = wx218x_dll.wx218x_ConfigureMarkerDelay
    configure_marker_delay.restype = c_int
    configure_marker_delay.argtypes = (ViSession, ViConstString, ViInt32, ViReal64)
    
#     ViStatus wx218x_MarkerRefresh2(
#     ViSession Vi,
#     ViConstString Channel
# );
    marker_refresh_2 = wx218x_dll.wx218x_MarkerRefresh2
    marker_refresh_2.restype = c_int
    marker_refresh_2.argtypes = (ViSession, ViConstString)
    
#     ViStatus wx218x_ConfigureMarkerIndex(
#     ViSession Vi,
#     ViConstString Channel,
#     ViInt32 Index
# );
    configure_marker_index = wx218x_dll.wx218x_ConfigureMarkerIndex
    configure_marker_index.restype = c_int
    configure_marker_index.argtypes = (ViSession, ViConstString, ViInt32)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Use this method to set the high level of the marker output for WX2184C, WX1284C models.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or 
    #         IviDriver_InitWithOptions function. The handle identifies a particular 
    #         instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass VI_NULL or empty 
    #         string if operation does not apply to a repeated capability.For valid values,
    #          see the Channel repeated capability. 
    #     HighLevel 
    # 
    #     Return Value
    #         Success or failure code.
    # 
    # Remarks
    #     High Level Valid Range: 0.5 to 1.25 
    #     Default Value: 0.5
    # 
    # */
    # ViStatus wx218x_ConfigureMarkerHighLevel4Ch(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViReal64 HighLevel
    # );
    configure_marker_high_level_4_ch = wx218x_dll.wx218x_ConfigureMarkerHighLevel4Ch
    configure_marker_high_level_4_ch.restype = c_int
    configure_marker_high_level_4_ch.argtypes = (ViSession, ViConstString, ViReal64)
    
    # ///////////////////////////////////////////////////////////////////////////
    # Use this method to set the low level of the marker output for WX2184C,WX1284C models.
    # 
    # Parameters
    #     Vi 
    #         The ViSession handle that you obtain from the IviDriver_init or 
    #         IviDriver_InitWithOptions function. The handle identifies a particular
    #          instrument session.
    #     Channel 
    #         The physical or virtual repeated capability identifier. Pass VI_NULL or empty
    #          string if operation does not apply to a repeated capability.For valid values,
    #           see the Channel repeated capability. 
    #         LowLevel 
    # 
    # Return Value
    # Success or failure code.
    # 
    # */
    # ViStatus wx218x_ConfigureMarkerLowLevel4Ch(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViReal64 LowLevel
    # );
    configure_marker_low_level_4_ch = wx218x_dll.wx218x_ConfigureMarkerLowLevel4Ch
    configure_marker_low_level_4_ch.restype = c_int
    configure_marker_low_level_4_ch.argtypes = (ViSession, ViConstString, ViReal64)

    # ViStatus wx218x_ConfigureDigPattDelayMode(
    #     ViSession Vi,
    #     ViConstString Channel,
    #     ViInt32 DelayMode
    # );
    configure_dig_patt_delay_mode = wx218x_dll.wx218x_ConfigureDigPattDelayMode
    configure_dig_patt_delay_mode.restype = c_int
    configure_dig_patt_delay_mode.argtypes = (ViSession, ViConstString, ViInt32)

    # ViStatus wx218x_ConfigureCoupleEnabled(
    #     ViSession Vi,
    #     ViBoolean Enabled
    # );
    configure_couple_enabled = wx218x_dll.wx218x_ConfigureCoupleEnabled
    configure_couple_enabled.restype = c_int
    configure_couple_enabled.argtypes = (ViSession, ViBoolean)

#     ViStatus wx218x_error_message(
#     ViSession Vi,
#     ViStatus ErrorCode,
#     ViChar[] ErrorMessage
#     );
    error_message = wx218x_dll.wx218x_error_message
    error_message.restype = c_int
    error_message.argtypes = (ViSession, ViStatus, POINTER(ViChar))
    
    #     ViStatus wx218x_GetError(
    #     ViSession Vi,
    #     ViStatus* ErrorCode,
    #     ViInt32 ErrorDescriptionBufferSize,
    #     ViChar[] ErrorDescription
    #     );
    get_error = wx218x_dll.wx218x_GetError
    get_error.restype = c_int
    get_error.argtypes = (ViSession, POINTER(ViStatus), ViInt32, POINTER(ViChar))

    def __init__(self):
        raise Exception("You probably don't want to instantiate this class!")
    