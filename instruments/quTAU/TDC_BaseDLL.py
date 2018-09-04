#!/usr/bin/env python
# -*- coding: utf-8 -*-

'''
Created on 22 Sep 2016

@author: Tom Barrett
'''
from ctypes import *

class TDC_DevType(object):
    (DEVTYPE_1A,                    
     DEVTYPE_1B,                    
     DEVTYPE_1C,                    
     DEVTYPE_NONE) = map(int, xrange(4))
     
class TDC_FileFormat(object):
    (FORMAT_ASCII,                  
     FORMAT_BINARY,                 
     FORMAT_COMPRESSED,             
     FORMAT_RAW,                    
     FORMAT_NONE) = map(c_int, xrange(5))
     
class TDC_SignalCond(object):
    (SCOND_TTL,                     
     SCOND_LVTTL,                   
     SCOND_NIM,                     
     SCOND_MISC,                    
     SCOND_NONE) = map(c_int, xrange(5))
     
class TDC_SimType(object):
    (SIM_FLAT,                      
     SIM_NORMAL,                    
     SIM_NONE) = map(c_int, xrange(3))
     
class TDC_BaseDLL(object):
    
    """
    ctypes funcs to talk to tdcbase.dll.
    """
    tdc_base_dll = windll.LoadLibrary('C:\\Users\\apc\\Documents\\Python Scripts\\Cold Control Heavy\\dlls\\quTAU\\userlib\\lib64\\tdcbase.dll')

    #//////////////////////////////////////////////////////////////////////////
    #/*! 
    #     Returns the time base (the resolution) of the TDC device.
    #     It is used as time unit by many other functions.
    # 
    #     Returns
    #        Time base in seconds 
    #*/
    # TDC_API double TDC_CC TDC_getTimebase    (        )    ;///<Get Time Base.
    getTimebase = tdc_base_dll.TDC_getTimebase
    getTimebase.restype = c_double
    getTimebase.argtypes = None

    #//////////////////////////////////////////////////////////////////////////
    #/*! 
    #     The function initializes internal data and starts an event loop for data acquisition. It discovers devices connected to the computer, and connects to the first device that matches the given device ID. (The device ID is an identification number programmed by the user.)
    #     The function should be called before any other TDC functions, except TDC_getVersion and TDC_getTimebase .
    #     If no device is found, the function returns TDC_NotConnected. If that error code is ignored, the library falls into a demo mode where all parameter setting and getting calls return without error.
    #     
    #     Parameters
    #         deviceId    Identification number of the device to connect. The special value -1 matches all devices.
    #     Returns
    #         Error code
    #*/
    # TDC_API int TDC_CC TDC_init( int deviceId );///<Initialize and Start.    
    init = tdc_base_dll.TDC_init
    init.restype = c_int
    init.argtypes = (c_int,)
    
    #//////////////////////////////////////////////////////////////////////////
    #/*! 
    #     Disconnects a connected device and stops the internal event loop.
    # 
    #     Returns
    #         TDC_Ok (never fails)
    #*/
    # TDC_API int TDC_CC TDC_deInit( );///<Disconnect and uninitialize.    
    deInit = tdc_base_dll.TDC_deInit
    deInit.restype = None
    deInit.argtypes = None
    
    #//////////////////////////////////////////////////////////////////////////
    #/*!
    #     Reads the device parameters back from the device.
    #     All Parameters are output parameters but may be NULL-Pointers if the
    #     result is not required.
    # 
    #     Parameters
    #         channelMask    Output: Enabled channels, see TDC_enableChannels
    #         coincWin    Output: Coincidence window, see TDC_setCoincidenceWindow
    #         expTime    Output: Exposure time, see TDC_setExposureTime
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_getDeviceParams(Int32 * channelMask,
    #                                        Int32 * coincWin,
    #                                        Int32 * expTime);///<Read Back Device Parameters.
    getDeviceParams = tdc_base_dll.TDC_getDeviceParams
    getDeviceParams.restype = c_int
    getDeviceParams.argtypes = (POINTER(c_int32), POINTER(c_int32), POINTER(c_int32))
    
    #//////////////////////////////////////////////////////////////////////////
    #/*!
    #     Checks if the HBT feature is available for the connected device. 
    #     This feature is necessary to use the functions of tdchbt.h.
    # 
    #     Returns
    #         If the feature is available (1) or not (0)
    #*/
    #TDC_API Bln32 TDC_CC TDC_checkFeatureHbt();///<Check for HBT Feature.
    checkFeatureHbt = tdc_base_dll.TDC_checkFeatureHbt
    checkFeatureHbt.restype = c_int
    checkFeatureHbt.argtypes = None
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Checks if the Lifetime feature is available for the connected device. 
    #     This feature is necessary to use the functions of tdclifetm.h .
    # 
    #     Returns
    #         If the feature is available (1) or not (0)
    # */
    # TDC_API Bln32 TDC_CC TDC_checkFeatureLifeTime ();///<Check for Lifetime Feature.
    checkFeatureLifeTime = tdc_base_dll.TDC_checkFeatureLifeTime
    checkFeatureLifeTime.restype = c_int
    checkFeatureLifeTime.argtypes = None
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Configures parameters for the cooling of the internal APDs if
    #     available. This function requires an 1C device, otherwise
    #     TDC_OutOfRange is returned.
    # 
    #     Parameters
    #         fanSpeed    Fan speed, unknown scale, Range 0 ... 50000
    #         temp        Temperature control setpoint, range 0 ... 65535 
    #                     The temperature scale is nonlinear, some sample 
    #                     points: 0: -31° 16384: -25° 32768: -18° 65535: 0°
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_configureApdCooling (Int32 fanSpeed,
    #                                             Int32 temp);///<Configure APD Cooling.
    configureApdCooling = tdc_base_dll.TDC_configureApdCooling
    configureApdCooling.restype = c_int
    configureApdCooling.argtypes = (c_int32, c_int32)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Configures parameters for the internal APDs if available. 
    #     This function requires an 1C device, otherwise TDC_OutOfRange is 
    #     returned.
    # 
    #     Parameters
    #         apd     Index of adressed APD, 0 or 1
    #         bias    Bias value [V], Range 0 ... 250. Internal resolution is 61mV.
    #         thrsh   Threshold value [V], Range 0 ... 2. Internal resolution is 0.5mV.
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_configureInternalApds (Int32 apd,
    #                                               double bias,
    #                                               double thrsh);///<Configure APD.
    configureInternalApds = tdc_base_dll.TDC_configureInternalApds
    configureInternalApds.restype = c_int
    configureInternalApds.argtypes = (c_int32, c_double, c_double)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     The function enables the internal generation of test signals that are
    #     input to the device. It is mainly used for testing.
    # 
    #     Parameters
    #         channelMask  Bitfield that selects the channels to be fired
    #                      internally (e.g. 5 means signal generation on 
    #                      channels 1 and 3)
    #         period       Period of all test singals in units of 20ns, 
    #                      Range = 2 ... 60
    #         burstSize    Number of periods in a burst, Range = 1 ... 65535
    #         burstDist    Distance between bursts in units of 80ns,
    #                      Range = 0 ... 10000
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_configureSelftest (Int32     channelMask,
    #                                           Int32     period,
    #                                           Int32     burstSize,
    #                                           Int32     burstDist);///<Configure Selftest.
    configureSelftest = tdc_base_dll.TDC_configureSelftest
    configureSelftest.restype = c_int
    configureSelftest.argtypes = (c_int32, c_int32, c_int32, c_int32)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Configures a channel's signal conditioning. The availability of signal
    #     conditioning electronics depends on the device type (TDC_getDevType);
    #     the function requires an 1B or 1C device. If it isn't present for the
    #     specified channel, TDC_OutOfRange is returned.
    # 
    #     Primarily, a conditioning type is selected. Depending on the type, the
    #     three detailed settings may be relevant or ignored by the function,
    #     see TDC_SignalCond. In particular, SCOND_TTL switches off the complete
    #     signal conditioning including the input divider (TDC_configureSyncDivider).
    #     For full access to the details use SCOND_MISC as type.
    # 
    #     Parameters
    #         channel      Number of the input channel to configure. For 1c
    #                      devices, use 0=Ext0, 1=Ext1, 2=Sync
    #         conditioning Type of signal conditioning. By default, the signal
    #                      conditioning is off (SCOND_TTL).
    #         edge         Selects the signal edge that is processed as an
    #                      event: rising (1) or falling (0)
    #         term         Switches the termination in the signal path on (1) or
    #                      off (0)
    #         threshold    Voltage threshold that is used to identify events, in
    #                      V. Allowed range is -2 ... 3V; internal resolution is 1.2mV
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_configureSignalConditioning (Int32 channel,
    #                                                     TDC_SignalCond conditioning,
    #                                                     Bln32     edge,
    #                                                     Bln32     term,
    #                                                     double     threshold);///<Configure Signal Conditioning.
    configure_signal_conditioning = tdc_base_dll.TDC_configureSignalConditioning
    configure_signal_conditioning.restype = c_int
    #TODO: enum
    configure_signal_conditioning.argtypes = (c_int32, c_int, c_int32, c_int32, c_double)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Configures the input divider of channel 0 if available. This function
    #     requires an 1B or 1C device, otherwise TDC_OutOfRange is returned.
    #     The divider does not work if the signal conditioning is switched off
    #     (see TDC_configureSignalConditioning).
    # 
    #     Parameters
    #         divider     Number of events to skip before one is passed + 1.
    #                     Only the following values are allowed: 1, 8, 16, 32,
    #                     64, 128 Ignored for 1C devices where the divider is
    #                     always 1024.
    #         reconstruct Reconstruct the skipped events in software.
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_configureSyncDivider (Int32 divider,
    #                                              Bln32 reconstruct);///<Configure Signal Conditioning Input Divider.
    configureSyncDivider = tdc_base_dll.TDC_configureSyncDivider
    configureSyncDivider.restype = c_int
    configureSyncDivider.argtypes = (c_int32, c_int32)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Selects the channels that contribute to the output stream.
    # 
    #     Parameters
    #         channelMask    Bitfield with activation flags for every TDC 
    #                        channel. (e.g. 5 means activate channels 1 and 3)
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_enableChannels (Int32 channelMask);///<Enable TDC Channels.
    enableChannels = tdc_base_dll.TDC_enableChannels
    enableChannels.restype = c_int
    enableChannels.argtypes = (c_int,)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Enables input from the physical channels of the TDC device or the
    #     internal selftest. If disabled, the software ignores those "real"
    #     events, the device and its coincidence counters are not affected. 
    #     By default the input is enabled.
    # 
    #     When working with software input (TDC_readTimestamps,
    #     TDC_generateTimestamps, ...) this function can be used to avoid real
    #     and simulated input to be mixed up.
    # 
    #     Parameters
    #         enable    Enable (1) or disable (0) TDC input
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_enableTdcInput(Bln32 enable);///<Enable Physical Input.
    enableTdcInput = tdc_base_dll.TDC_enableTdcInput
    enableTdcInput.restype = c_int
    enableTdcInput.argtypes = (c_int32,)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     The function can be used to freeze the internal buffers, allowing to
    #     retrieve multiple histograms with the same integration time. When
    #     frozen, no more events are added to the built-in histograms and
    #     timestamp buffer. The coincidence counters are not affected.
    #     Initially, the buffers are not frozen. All types of histograms
    #     calculated by software are affected.
    # 
    #     Parameters
    #         freeze    freeze (1) or activate (0) the buffers
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_freezeBuffers (Bln32 freeze);///<Freeze internal Buffers.
    freezeBuffers = tdc_base_dll.TDC_freezeBuffers
    freezeBuffers.restype = c_int
    freezeBuffers.argtypes = (c_int32,)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     The function generates synthetic timestamps for demonstration and
    #     simulation purposes. Timesamps are processed just like "raw" data
    #     from a real device.
    # 
    #     The channel mask (see TDC_enableChannels) is considered. At least
    #     one channel has to be enabled!
    # 
    #     Parameters
    #         type    Type of time diff distribution
    #         par     Type specific parameter set. Parameters should be chosen so that most time diffs are positive. Negative diffs are dropped.
    #         count   Number of timestamps to generate
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_generateTimestamps(TDC_SimType type,
    #                                           double *     par,
    #                                           Int32     count 
    # )    ;///<Generate Timestamps.
    generateTimestamps = tdc_base_dll.TDC_generateTimestamps
    generateTimestamps.restype = c_int
    #TODO: enum
    generateTimestamps.argtypes = (c_int, POINTER(c_double), c_int32)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Reads back the delay times as set with TDC_setChannelDelays.
    # 
    #     Parameters
    #         delays Ouput: channel delays, in TDC units. The array must have at
    #                       least 8 elements.
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_getChannelDelays (Int32 * delays);///<Read back Channel Delay Times.
    getChannelDelays = tdc_base_dll.TDC_getChannelDelays
    getChannelDelays.restype = c_int
    getChannelDelays.argtypes = (POINTER(c_int32),)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Retrieves the most recent values of the built-in coincidence counters.
    #     The coincidence counters are not accumulated, i.e. the counter values
    #     for the last exposure (see TDC_setExposureTime) are returned.
    # 
    #     The array contains count rates for all 8 channels, and rates for two,
    #     three, and fourfold coincidences of events detected on different
    #     channels out of the first 4. Events are coincident if they happen
    #     within the coincidence window (see TDC_setCoincidenceWindow).
    # 
    #     Parameters
    #         data Output: Counter Values. The array must have at least 19
    #                      elements. The Counters come in the following order:
    #                      1, 2, 3, 4, 5, 6, 7, 8, 1/2, 1/3, 1/4, 2/3, 2/4,
    #                      3/4, 1/2/3, 1/2/4, 1/3/4, 2/3/4, 1/2/3/4
    #         updates Output: Number of data updates by the device since the
    #                         last call. Pointer may be NULL.
    #     Returns
    #         TDC_Ok (never fails)
    # */
    # TDC_API int TDC_CC TDC_getCoincCounters (Int32 *  data,
    #                                          Int32 *  updates);///<Retrieve Coincidence Counters.
    getCoincCounters = tdc_base_dll.TDC_getCoincCounters
    getCoincCounters.restype = None
    getCoincCounters.argtypes = (POINTER(c_int32), POINTER(c_int32))
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Timestamps of events detected by the device can get lost if their rate
    #     is too high for the USB interface or if the PC is unable to receive
    #     the data in time. The TDC recognizes this situation and signals it to
    #     the PC (with high priority).
    # 
    #     The function checks if a data loss situation is currently detected or
    #     if it has been latched since the last call. If you are only interested
    #     in the current situation, call the function twice; the first call will
    #     delete the latch.
    # 
    #     Parameters
    #         lost Output: Current and latched data loss state.
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_getDataLost(Bln32 *  lost);///<Check for data loss.
    getDataLost = tdc_base_dll.TDC_getDataLost
    getDataLost.restype = c_int
    getDataLost.argtypes = (POINTER(c_int32),)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Reads the device parameters back from the device. All Parameters are
    #     output parameters but may be NULL-Pointers if the result is not
    #     required.
    # 
    #     Parameters
    #         channelMask Output: Enabled channels, see TDC_enableChannels
    #         coincWin Output: Coincidence window, see TDC_setCoincidenceWindow
    #         expTime Output: Exposure time, see TDC_setExposureTime
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_getDeviceParams (Int32 *     channelMask,
    #                                         Int32 *     coincWin,
    #                                         Int32 *     expTime)    ;///<Read Back Device Parameters.
    getDeviceParams = tdc_base_dll.TDC_getDeviceParams
    getDeviceParams.restype = c_int
    getDeviceParams.argtypes = (POINTER(c_int32), POINTER(c_int32), POINTER(c_int32))
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Returns the type of the device connected. Requires initialisation.
    # 
    #     Returns
    #         Type of the connected device; invalid if not connected.
    # */
    # TDC_API TDC_DevType TDC_CC TDC_getDevType ();///<Get type of connected device.
    getDevType = tdc_base_dll.TDC_getDevType
    getDevType.restype = c_int
    getDevType.argtypes = None
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Retrieves the timestamp values of the last n detected events on all
    #    TDC channels. The buffer size must have been set with
    #    TDC_setTimestampBufferSize , otherwise 0 data will be returned.
    # 
    #     Parameters
    #         reset:    If the data should be cleared after retrieving.
    #         timestamps Output: Timestamps of the last events in base units,
    #                            see TDC_getTimebase . The array must have at
    #                            least size elements, see
    #                            TDC_setTimestampBufferSize . A NULL pointer is
    #                            allowed to ignore the data.
    #         channels Output: Numbers of the channels where the events have
    #                          been detected. Every array element belongs to the
    #                          timestamp with the same index. Range is 0...7 for
    #                          channels 1...8. The array must have at least size
    #                          elements, see TDC_setTimestampBufferSize . A NULL
    #                          pointer is allowed to ignore the data.
    #         valid Output: Number of valid entries in the above arrays. May be
    #                       less than the buffer size if the buffer has been
    #                       cleared.
    #     Returns
    #         TDC_Ok (never fails)
    # */
    # TDC_API int TDC_CC TDC_getLastTimestamps (Bln32     reset,
    #                                           Int64 *    timestamps,
    #                                           Int8 *     channels,
    #                                           Int32 *    valid 
    # )    ;///<Retrieve Last Timestamp Values.
    getLastTimestamps = tdc_base_dll.TDC_getLastTimestamps
    getLastTimestamps.restype = None
    getLastTimestamps.argtypes = (c_int32, POINTER(c_int64), POINTER(c_int8), POINTER(c_int32))
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Reads back the signal conditioning parameters. These are the
    #     parameters that are actually in effect, they may differ from those set
    #     by TDC_configureSignalConditioning in two cases:
    # 
    #     Depending on the signal type the parameter may be preset and therefore
    #     ignored in the function call. 2. If the signal conditioning is
    #     completely off, the constant parameters of the direct signal path are
    #     returned.
    #
    #     Parameters
    #         channel    Number of the input channel to read out. For
    #                    1c devices, use 0=Ext0, 1=Ext1, 2=Sync
    #         on         If the signal conditioning is on.
    #         edge       The signal edge that is processed as an event: rising 
    #                    (1) or falling (0)
    #         term       Termination in the signal path on (1) or off (0)
    #         threshold  Voltage threshold that is used to identify events, in
    #                    V.
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_getSignalConditioning (Int32     channel,
    #                                               Bln32 *   on,
    #                                               Bln32 *   edge,
    #                                               Bln32 *   term,
    #                                               double *  threshold);///<Read back Signal Conditioning Parameters.
    getSignalConditioning = tdc_base_dll.TDC_getSignalConditioning
    getSignalConditioning.restype = c_int
    getSignalConditioning.argtypes = (c_int32, POINTER(c_int32), POINTER(c_int32), POINTER(c_int32), POINTER(c_double))
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Configures the input divider of channel 0 if available; see
    #     TDC_configureSyncDivider. The divider does not work if the signal
    #     conditioning is switched off (see TDC_getSignalConditioning).
    # 
    #     Parameters
    #         divider: Number of events to skip before one is passed + 1.
    #         reconstruct: Reconstruct the skipped events in software.
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_getSyncDivider  (Int32 *  divider,
    #                                         Bln32 *  reconstruct);///<Read back Signal Conditioning Input Divider.
    getSyncDivider = tdc_base_dll.TDC_getSyncDivider
    getSyncDivider.restype = c_int
    getSyncDivider.argtypes = (POINTER(c_int32), POINTER(c_int32))
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Reads back the buffer size as set by TDC_setTimestampBufferSize.
    # 
    #     Parameters
    #         size: Buffer size;
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_getTimestampBufferSize (Int32 *  size);///<Read back Timestamp Buffer Size.
    getTimestampBufferSize = tdc_base_dll.TDC_getTimestampBufferSize
    getTimestampBufferSize.restype = c_int
    getTimestampBufferSize.argtypes = (POINTER(c_int32),)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Returns the version number of the library. The integer part of the
    #     number denotes main releases, the fractional part Bugfixes without
    #     API change.
    # 
    #     Returns
    #         Version number
    # */
    # TDC_API double TDC_CC TDC_getVersion ( );///<Get Library Version.
    getVersion = tdc_base_dll.TDC_getVersion
    getVersion.restype = c_double
    getVersion.argtypes = None
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     The function allows to input synthetic timestamps for demonstration
    #     and simulation purposes. Timesamps are processed just like "raw" data
    #     from a real device. is connected; otherwise it will return an error.
    # 
    #     Parameters
    #         timestamps Input: Array of timestamps to process. The timestamps
    #                           should be in strictly increasing order,
    #                           otherwise some functions will fail.
    #         channels Input: Array of corresponding channel numbers.
    #         count Number of valid elements in both arrays.
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_inputTimestamps (const Int64 *  timestamps,
    #                                         const Int8 *   channels,
    #                                         Int32          count);///<Input Synthetic Timestamps.
    inputTimestamps = tdc_base_dll.TDC_inputTimestamps
    inputTimestamps.restype = c_int
    inputTimestamps.argtypes = (POINTER(c_int64), POINTER(c_int8), c_int32)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Returns the error message corresponding to the given return code.
    # 
    #     Parameters
    #         rc    A TDC return code
    #     Returns
    #         Corresponding error message
    # */
    # TDC_API const char* TDC_CC TDC_perror  (int rc);///<Get Error Message.
    perror = tdc_base_dll.TDC_perror
    perror.restype = c_char_p
    perror.argtypes = (c_int,)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     The function allows to read timestamps from file for demonstration or
    #     delayed processing. It works only with files in a binary format (see
    #     TDC_FileFormat). It can read files with or without the 40 bytes
    #     header. When the header is present in demo mode (i.e. without a device
    #     connected), the HBT and Lifetime options from the source device come
    #     into effect.
    # 
    #     In the compressed format, the reconstruction of the original
    #     timestamps can't be guaranteed. Detector delays (see
    #     TDC_setChannelDelays) are not compensated in this function because
    #     this is already done in TDC_writeTimestamps.
    # 
    #     Parameters
    #         filename   Name of the binary input file
    #         format     Input format. Only binary formats are valid. If the file
    #                    has a valid header, the parameter is not used; the
    #                    format is retrieved from the file itself.
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_readTimestamps (const char *    filename,
    #                                        TDC_FileFormat  format);///<Read Timestamps.
    readTimestamps = tdc_base_dll.TDC_readTimestamps
    readTimestamps.restype = c_int
    #TODO: enum
    readTimestamps.argtypes = (c_char_p, c_int)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Different signal runtimes cause relative delay times of the signals at
    #     different channels. The function allows to configure a delay per
    #     channel. It will be compensated by software, including the changed
    #     sorting of events. If not set, all delays are 0.
    # 
    #     Note: The runtime compensation requires reordering of the timestamps
    #     and therefore consumes a lot of CPU power. If all delays are 0, the
    #     reordering is circumvented. Using this feature limits the available
    #     data rate seriously.
    # 
    #     Parameters
    #         delays    Input: channel delays, in TDC units. The array must have
    #                          at least 8 elements. Enter 0 for unused channels.
    #                          Using a NULL pointer sets all delays to 0.
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_setChannelDelays (const Int32 *  delays);///<Set Channel Delay Times.
    setChannelDelays = tdc_base_dll.TDC_setChannelDelays
    setChannelDelays.restype = c_int
    setChannelDelays.argtypes = (POINTER(c_int32),)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Sets the coincidence time window for the integrated coincidence
    #     counting.
    # 
    #     Parameters
    #         coincWin    Coincidence window in bins, Range = 0 ... 65535, see
    #                     TDC_getTimebase.
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_setCoincidenceWindow (Int32   coincWin);///<Set Coincidence Window.
    setCoincidenceWindow = tdc_base_dll.TDC_setCoincidenceWindow
    setCoincidenceWindow.restype = None
    setCoincidenceWindow.argtypes = None
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Sets the exposure time (or integration time) of the internal
    #     coincidence counters.
    # 
    #     Parameters
    #         expTime    Exposure time in ms, Range = 0 ... 65535
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_setExposureTime    (Int32     expTime);///<Set Exposure Time.
    setExposureTime = tdc_base_dll.TDC_setExposureTime
    setExposureTime.restype = c_int
    setExposureTime.argtypes = (c_int32,)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Sets the size of a ring buffer that stores the timestamps of the last
    #     detected events. The buffer's contents can be retrieved with
    #     TDC_getLastTimestamps. By default, the buffersize is 0. When the
    #     function is called, the buffer is cleared.
    # 
    #     Parameters
    #         size    Buffer size; Range = 1 ... 1000000
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_setTimestampBufferSize (Int32     size);///<Set Timestamp Buffer Size.
    setTimestampBufferSize = tdc_base_dll.TDC_setTimestampBufferSize 
    setTimestampBufferSize.restype = c_int32
    setTimestampBufferSize.argtypes = (c_int32,)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Switches the 50 Ω termination of input lines on or off. The function
    #     requires an 1A type hardware, otherwise TDC_OutOfRange is returned.
    # 
    #     Parameters
    #         on    Switch on (1) or off (0)
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_switchTermination (Bln32  on);///<Switch Input Termination.
    switchTermination = tdc_base_dll.TDC_switchTermination
    switchTermination.restype = c_int
    switchTermination.argtypes = (c_int32,)
    
    # //////////////////////////////////////////////////////////////////////////
    # /*!
    #     Starts or stops writing the timestamp values to a file continously.
    #     The timestamps written are already corrected by the detector delays,
    #     see TDC_setChannelDelays.
    # 
    #     Timestamps come in base units, see TDC_getTimebase; channel Numbers
    #     range from 0 to 7 in binary formats, from 1 to 8 in ASCII. The
    #     following file formats are available:
    # 
    #     ASCII: Timestamp values (int base units) and channel numbers as
    #     decimal values in two comma separated columns. Channel numbers range
    #     from 1 to 8 in this format.
    #
    #     binary: A binary header of 40 bytes, records of 10 bytes, 8 bytes for
    #     the timestamp, 2 for the channel number, stored in little endian
    #     (Intel) byte order.
    #
    #     compressed: A binary header of 40 bytes, records of 40 bits (5 bytes),
    #     37 bits for the timestamp, 3 for the channel number, stored in little
    #     endian (Intel) byte order.
    #
    #     raw: Like binary, but without header. Provided for backward
    #     compatiblity.
    #
    #     The header of the binary formats is dedicated for use in
    #     TDC_readTimestamps; it should be skipped when evaluating with external
    #     tools.
    # 
    #     Writing in the ASCII format requires much more CPU power and about
    #     twice as much disk space than using the binary format. The compressed
    #     format again saves half of the disk space, allowing higher event rates
    #     with not-so-fast disks. The Timestamps are truncated in this format
    #     leading to an overflow every 11 s. It is possible to convert a binary
    #     file to ASCII format offline by using this function together with
    #     TDC_readTimestamps.
    # 
    #     If the specified file exists it will be overwritten. The function
    #     checks if the file can be opened; write errors that occur later in the
    #     actual writing process (disk full e.g.) will not be reported.
    # 
    #     Parameters
    #         filename    Name of the file to use. To stop writing, call the
    #                     function with an empty or null filename.
    #         format      Output format. Meaningless if writing is to be
    #                     stopped. FORMAT_NONE also stops writing.
    #     Returns
    #         Error code
    # */
    # TDC_API int TDC_CC TDC_writeTimestamps    (const char *    filename,
    #                                            TDC_FileFormat  format);///<Write Timestamp Values to File.
    writeTimestamps = tdc_base_dll.TDC_writeTimestamps
    writeTimestamps.restype = c_int
    #TODO: enum
    writeTimestamps.argtypes = (c_char_p, c_int)
    
    def __init__(self):
        raise Exception("You probably don't want to instantiate this class!")
    
