/******************************************************************************
 *
 *  Project:        TDC Control Library
 *
 *  Filename:       tdcbase.h
 *
 *  Purpose:        Control and data acquisition functions for TDC
 *
 *  Author:         NHands GmbH & Co KG
 */
/*****************************************************************************/
/** @file tdcbase.h
 *  @brief Control and data acquisition functions for TDC
 *
 *  The header defines functions that allow to control the TDC time-to-digital
 *  converter and acquire data from it. The received timestamp data can be
 *  retrieved programatically or stored in a file. They are also processed
 *  to a set of histograms internally.
 *
 *  Use @ref TDC_init to start and connect to the device and
 *  @ref TDC_deInit to close the connection. Set device parameters with
 *  @ref TDC_setExposureTime etc. and enable Measurement with
 *  @ref TDC_enableChannels. Customize the timestamp buffer with
 *  @ref TDC_setTimestampBufferSize and retrieve timestamps with
 *  @ref TDC_getLastTimestamps or @ref TDC_writeTimestamps.
 *
 *  @ref TDC_inputTimestamps, @ref TDC_readTimestamps, and
 *  @ref TDC_generateTimestamps allow to work with generated or saved timestamps.
 *  Interference with real data from the device should be avoided
 *  (see @ref TDC_enableTdcInput).
 *
 *  If no device is connected, the library falls into a demo mode where all
 *  parameter setting and getting calls return without error.
 */
/*****************************************************************************/
/* $Id: tdcbase.h,v 1.12 2016/02/17 13:17:08 trurl Exp $ */

#ifndef __TDCBASE_H
#define __TDCBASE_H

#include "tdcdecl.h"

/** @name Size constants
 *  @{
 */
#define TDC_INPUT_CHANNELS   8   /**< Number of hardware input channels */
#define TDC_COINC_CHANNELS  19   /**< Number of internal coincidence counters */
/* @} */


/** Type of the TDC device */
typedef enum {
  DEVTYPE_1A,                    /**< Type 1a - no signal conditioning */
  DEVTYPE_1B,                    /**< Type 1b - 8 channel signal conditioning */
  DEVTYPE_1C,                    /**< Type 1c - 3 channel signal conditioning */
  DEVTYPE_NONE                   /**< No device / invalid */
} TDC_DevType;


/** Output file format */
typedef enum {
  FORMAT_ASCII,                  /**< ASCII format */
  FORMAT_BINARY,                 /**< Uncompressed binary format (40B header, 10B/time tag) */
  FORMAT_COMPRESSED,             /**< Compressed binary format   (40B header,  5B/time tag) */
  FORMAT_RAW,                    /**< Uncompressed binary without header (for compatiblity) */
  FORMAT_NONE                    /**< No format / invalid */
} TDC_FileFormat;


/** Type of signal conditioning */
typedef enum {
  SCOND_TTL,                     /**< For 5V TTL signals: Conditioning off */
  SCOND_LVTTL,                   /**< For LVTTL signals:
                                      Trigger at 2V rising edge, termination optional */
  SCOND_NIM,                     /**< For NIM signals:
                                      Trigger at -0.6V falling edge, termination fixed on */
  SCOND_MISC,                    /**< Other signal type: Conditioning on, everything optional */
  SCOND_NONE                     /**< No signal / invalid */
} TDC_SignalCond;


/** Type of generated timestamps */
typedef enum {
  SIM_FLAT,                      /**< Time diffs and channel numbers uniformly distributed.
                                      Requires 2 parameters: center, width for time diffs
                                      in TDC units. */
  SIM_NORMAL,                    /**< Time diffs normally distributed, channels uniformly.
                                      Requires 2 parameters: center, width for time diffs
                                      int TDC units. */
  SIM_NONE                       /**< No type / invalid */
} TDC_SimType;



/** Get Library Version
 *
 *  Returns the version number of the library.
 *  The integer part of the number denotes main releases, the fractional part
 *  Bugfixes without API change.
 *  @return Version number
 */
TDC_API double TDC_CC TDC_getVersion();


/** Get Error Message
 *
 *  Returns the error message corresponding to the given return code.
 *  @param  rc  A TDC return code
 *  @return Corresponding error message
 */
TDC_API const char * TDC_CC TDC_perror( int rc );


/** Get Time Base
 *
 *  Returns the time base (the resolution) of the TDC device.
 *  It is used as time unit by many other functions.
 *  @return Time base in seconds
 */
TDC_API double TDC_CC TDC_getTimebase();


/** Initialize and Start
 *
 *  The function initializes internal data and starts an event loop for
 *  data acquisition. It discovers devices connected to the computer,
 *  and connects to the first device that matches the given device ID.
 *  (The device ID is an identification number programmed by the user.)
 *
 *  The function should be called before any other TDC functions, except
 *  @ref TDC_getVersion and @ref TDC_getTimebase .
 *
 *  If no device is found, the function returns @ref TDC_NotConnected.
 *  If that error code is ignored, the library falls into a demo mode where all
 *  parameter setting and getting calls return without error.
 *  @param   deviceId   Identification number of the device to connect.
 *                      The special value -1 matches all devices.
 *  @return  Error code
 */
TDC_API int TDC_CC TDC_init( int deviceId );


/** Disconnect and uninitialize
 *
 *  Disconnects a connected device and stops the internal event loop.
 *  @return  TDC_Ok (never fails)
 */
TDC_API int TDC_CC TDC_deInit();


/** Get type of connected device
 *
 *  Returns the type of the device connected. Requires initialisation.
 *  @return  Type of the connected device; invalid if not connected.
 */
TDC_API TDC_DevType TDC_CC TDC_getDevType();


/** Check for HBT Feature
 *
 *  Checks if the HBT feature is available for the connected device.
 *  This feature is necessary to use the functions of @ref tdchbt.h .
 *  @return  If the feature is available (1) or not (0)
 */
TDC_API Bln32 TDC_CC TDC_checkFeatureHbt();


/** Check for Lifetime Feature
 *
 *  Checks if the Lifetime feature is available for the connected device.
 *  This feature is necessary to use the functions of @ref tdclifetm.h .
 *  @return  If the feature is available (1) or not (0)
 */
TDC_API Bln32 TDC_CC TDC_checkFeatureLifeTime();


/** Configure Signal Conditioning
 *
 *  Configures a channel's signal conditioning. The availability of signal
 *  conditioning electronics depends on the device type (@ref TDC_getDevType);
 *  the function requires an 1B or 1C device. If it isn't present for the
 *  specified channel, @ref TDC_OutOfRange is returned.
 *
 *  Primarily, a conditioning type is selected. Depending on the type,
 *  the three detailed settings may be relevant or ignored by the function,
 *  see @ref TDC_SignalCond. In particular, @ref SCOND_TTL switches off
 *  the complete signal conditioning including the input divider
 *  (@ref TDC_configureSyncDivider). For full access to the details use
 *  @ref SCOND_MISC as type.
 *  @param  channel      Number of the input channel to configure.
 *                       For 1c devices, use 0=Ext0, 1=Ext1, 2=Sync
 *  @param  conditioning Type of signal conditioning. By default, the signal
 *                       conditioning is off (@ref SCOND_TTL).
 *  @param  edge         Selects the signal edge that is processed as an event:
 *                       rising (1) or falling (0)
 *  @param  term         Switches the termination in the signal path on (1) or off (0)
 *  @param  threshold    Voltage threshold that is used to identify events, in V.
 *                       Allowed range is -2 ... 3V; internal resolution is 1.2mV
 *  @return              Error code
 */
TDC_API int TDC_CC TDC_configureSignalConditioning( Int32          channel,
                                                    TDC_SignalCond conditioning,
                                                    Bln32          edge,
                                                    Bln32          term,
                                                    double         threshold );


/** Read back Signal Conditioning Parameters
 *
 *  Reads back the signal conditioning parameters. These are the parameters
 *  that are actually in effect, they may differ from those set by
 *  @ref TDC_configureSignalConditioning in two cases:
 *  1. Depending on the signal type the parameter may be preset and therefore
 *  ignored in the function call. 2. If the signal conditioning is completely off,
 *  the constant parameters of the direct signal path are returned.
 *  @param  channel      Number of the input channel to read out.
 *                       For 1c devices, use 0=Ext0, 1=Ext1, 2=Sync
 *  @param  on           If the signal conditioning is on.
 *  @param  edge         The signal edge that is processed as an event:
 *                       rising (1) or falling (0)
 *  @param  term         Termination in the signal path on (1) or off (0)
 *  @param  threshold    Voltage threshold that is used to identify events, in V.
 *  @return              Error code
 */
TDC_API int TDC_CC TDC_getSignalConditioning( Int32    channel,
                                              Bln32  * on,
                                              Bln32  * edge,
                                              Bln32  * term,
                                              double * threshold );


/** Configure Signal Conditioning Input Divider
 *
 *  Configures the input divider of channel 0 if available. This function
 *  requires an 1B or 1C device, otherwise @ref TDC_OutOfRange is returned.
 *  The divider does not work if the signal conditioning is switched off
 *  (see @ref TDC_configureSignalConditioning).
 *  @param  divider     Number of events to skip before one is passed + 1.
 *                      Only the following values are allowed:  1, 8, 16, 32, 64, 128
 *                      Ignored for 1C devices where the divider is always 1024.
 *  @param  reconstruct Reconstruct the skipped events in software.
 *  @return             Error code
 */
TDC_API int TDC_CC TDC_configureSyncDivider( Int32 divider, Bln32 reconstruct );


/** Read back Signal Conditioning Input Divider
 *
 *  Configures the input divider of channel 0 if available; see
 *  @ref TDC_configureSyncDivider.
 *  The divider does not work if the signal conditioning is switched off
 *  (see @ref TDC_getSignalConditioning).
 *  @param  divider     Output: Number of events to skip before one is passed + 1.
 *  @param  reconstruct Output: Reconstruct the skipped events in software.
 *  @return             Error code
 */
TDC_API int TDC_CC TDC_getSyncDivider( Int32 * divider, Bln32 * reconstruct );


/** Configure APD Cooling
 *
 *  Configures parameters for the cooling of the internal APDs if available.
 *  This function requires an 1C device, otherwise @ref TDC_OutOfRange is returned.
 *  @param  fanSpeed  Fan speed, unknown scale, Range 0 ... 50000
 *  @param  temp      Temperature control setpoint, range 0 ... 65535
 *                    The temperature scale is nonlinear, some sample points:
 *                    @b 0:     -31°
 *                    @b 16384: -25°
 *                    @b 32768: -18°
 *                    @b 65535:   0°
 *  @return           Error code
 */
TDC_API int TDC_CC TDC_configureApdCooling( Int32 fanSpeed,
                                            Int32 temp );


/** Configure APD
 *
 *  Configures parameters for the internal APDs if available.
 *  This function requires an 1C device, otherwise @ref TDC_OutOfRange is returned.
 *  @param  apd    Index of adressed APD, 0 or 1
 *  @param  bias   Bias value [V], Range 0 ... 250. Internal resolution is 61mV.
 *  @param  thrsh  Threshold value [V], Range 0 ... 2. Internal resolution is 0.5mV.
 *  @return        Error code
 */
TDC_API int TDC_CC TDC_configureInternalApds( Int32  apd,
                                              double bias,
                                              double thrsh );


/** Enable TDC Channels
 *
 *  Selects the channels that contribute to the output stream.
 *  @param  channelMask  Bitfield with activation flags for every TDC channel.
 *                       (e.g. 5 means activate channels 1 and 3)
 *  @return              Error code
 */
TDC_API int TDC_CC TDC_enableChannels( Int32 channelMask );


/** Set Coincidence Window
 *
 *  Sets the coincidence time window for the integrated coincidence counting.
 *  @param  coincWin   Coincidence window in bins, Range = 0 ... 65535,
 *                     see @ref TDC_getTimebase
 *  @return            Error code
 */
TDC_API int TDC_CC TDC_setCoincidenceWindow( Int32 coincWin );


/** Set Exposure Time
 *
 *  Sets the exposure time (or integration time) of the internal coincidence
 *  counters.
 *  @param  expTime   Exposure time in ms, Range = 0 ... 65535
 *  @return           Error code
 */
TDC_API int TDC_CC TDC_setExposureTime( Int32 expTime );


/** Read Back Device Parameters
 *
 *  Reads the device parameters back from the device. All Parameters are
 *  output parameters but may be NULL-Pointers if the result is not required.
 *  @param  channelMask Output: Enabled channels, see @ref TDC_enableChannels
 *  @param  coincWin    Output: Coincidence window, see @ref TDC_setCoincidenceWindow
 *  @param  expTime     Output: Exposure time, see @ref TDC_setExposureTime
 *  @return             Error code
 */
TDC_API int TDC_CC TDC_getDeviceParams( Int32 * channelMask,
                                        Int32 * coincWin,
                                        Int32 * expTime   );


/** Set Channel Delay Times
 *
 *  Different signal runtimes cause relative delay times of the signals
 *  at different channels. The function allows to configure a delay per
 *  channel. It will be compensated by software, including the changed
 *  sorting of events. If not set, all delays are 0.
 *
 *  Note: The runtime compensation requires reordering of the timestamps
 *  and therefore consumes a lot of CPU power. If all delays are 0, the
 *  reordering is circumvented. Using this feature limits the available
 *  data rate seriously.
 *  @param  delays  Input: channel delays, in TDC units.
 *                  The array must have at least 8 elements.
 *                  Enter 0 for unused channels.
 *                  Using a NULL pointer sets all delays to 0.
 *  @return         Error code
 */
TDC_API int TDC_CC TDC_setChannelDelays( const Int32 * delays );


/** Read back Channel Delay Times
 *
 *  Reads back the delay times as set with @ref TDC_setChannelDelays.
 *  @param  delays  Ouput: channel delays, in TDC units.
 *                  The array must have at least 8 elements.
 *  @return         Error code
 */
TDC_API int TDC_CC TDC_getChannelDelays( Int32 * delays );


/** Switch Input Termination
 *
 *  Switches the 50 &Omega; termination of input lines on or off.
 *  The function requires an 1A type hardware, otherwise
 *  @ref TDC_OutOfRange is returned.
 *  @param  on   Switch on (1) or off (0)
 *  @return      Error code
 */
TDC_API int TDC_CC TDC_switchTermination( Bln32 on );


/** Configure Selftest
 *
 *  The function enables the internal generation of test signals that are
 *  input to the device. It is mainly used for testing.
 *  @param  channelMask  Bitfield that selects the channels to be fired internally
 *                       (e.g. 5 means signal generation on channels 1 and 3)
 *  @param  period       Period of all test singals in units of 20ns, Range = 2 ... 60
 *  @param  burstSize    Number of periods in a burst, Range = 1 ... 65535
 *  @param  burstDist    Distance between bursts in units of 80ns, Range = 0 ... 10000
 *  @return              Error code
 */
TDC_API int TDC_CC TDC_configureSelftest( Int32 channelMask,
                                          Int32 period,
                                          Int32 burstSize,
                                          Int32 burstDist );

/** Check for data loss
 *
 *  Timestamps of events detected by the device can get lost if their rate
 *  is too high for the USB interface or if the PC is unable to receive the
 *  data in time. The TDC recognizes this situation and signals it to the
 *  PC (with high priority).
 *
 *  The function checks if a data loss situation is currently detected or if
 *  it has been latched since the last call. If you are only interested in
 *  the current situation, call the function twice; the first call will
 *  delete the latch.
 *  @param lost      Output: Current and latched data loss state.
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_getDataLost( Bln32 * lost );


/** Set Timestamp Buffer Size
 *
 *  Sets the size of a ring buffer that stores the timestamps of the last
 *  detected events. The buffer's contents can be retrieved with
 *  TDC_getLastTimestamps. By default, the buffersize is 0.
 *  When the function is called, the buffer is cleared.
 *  @param size      Buffer size; Range = 1 ... 1000000
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_setTimestampBufferSize( Int32 size );


/** Read back Timestamp Buffer Size
 *
 *  Reads back the buffer size as set by @ref TDC_setTimestampBufferSize.
 *  @param size      Output: Buffer size;
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_getTimestampBufferSize( Int32 * size );


/** Enable Physical Input
 *
 *  Enables input from the physical channels of the TDC device or the
 *  internal selftest. If disabled, the software ignores those "real" events,
 *  the device and its coincidence counters are not affected.
 *  By default the input is enabled.
 *
 *  When working with software input (@ref TDC_readTimestamps,
 *  @ref TDC_generateTimestamps, ...) this function can be used to avoid
 *  real and simulated input to be mixed up.
 *  @param enable    Enable (1) or disable (0) TDC input
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_enableTdcInput( Bln32 enable );


/** Freeze internal Buffers
 *
 *  The function can be used to freeze the internal buffers,
 *  allowing to retrieve multiple histograms with the same
 *  integration time. When frozen, no more events are added to
 *  the built-in histograms and timestamp buffer. The coincidence
 *  counters are not affected. Initially, the buffers are not frozen.
 *  All types of histograms calculated by software are affected.
 *  @param freeze    freeze (1) or activate (0) the buffers
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_freezeBuffers( Bln32 freeze );


/** Retrieve Coincidence Counters
 *
 *  Retrieves the most recent values of the built-in coincidence counters.
 *  The coincidence counters are not accumulated, i.e. the counter values for
 *  the last exposure (see @ref TDC_setExposureTime ) are returned.
 *
 *  The array contains count rates for all 8 channels, and rates for
 *  two, three, and fourfold coincidences of events detected on different
 *  channels out of the first 4. Events are coincident if they happen
 *  within the coincidence window (see @ref TDC_setCoincidenceWindow ).
 *  @param data      Output: Counter Values. The array must have at least
 *                   19 elements. The Counters come in the following order:
 *                   1, 2, 3, 4, 5, 6, 7, 8, 1/2, 1/3, 1/4, 2/3, 2/4, 3/4,
 *                   1/2/3, 1/2/4, 1/3/4, 2/3/4, 1/2/3/4
 *  @param updates   Output: Number of data updates by the device since the last call.
 *                   Pointer may be NULL.
 *  @return          @ref TDC_Ok (never fails)
 */
TDC_API int TDC_CC TDC_getCoincCounters( Int32 * data, Int32 * updates );


/** Retrieve Last Timestamp Values
 *
 *  Retrieves the timestamp values of the last n detected events on all
 *  TDC channels. The buffer size must have been set with
 *  @ref TDC_setTimestampBufferSize , otherwise 0 data will be returned.
 *  @param reset      If the data should be cleared after retrieving.
 *  @param timestamps Output: Timestamps of the last events in base units,
 *                    see @ref TDC_getTimebase .
 *                    The array must have at least size elements,
 *                    see @ref TDC_setTimestampBufferSize .
 *                    A NULL pointer is allowed to ignore the data.
 *  @param channels   Output: Numbers of the channels where the events have been
 *                    detected. Every array element belongs to the timestamp
 *                    with the same index. Range is 0...7 for channels 1...8.
 *                    The array must have at least size elements,
 *                    see @ref TDC_setTimestampBufferSize .
 *                    A NULL pointer is allowed to ignore the data.
 *  @param valid      Output: Number of valid entries in the above arrays.
 *                    May be less than the buffer size if the buffer has been cleared.
 *  @return           @ref TDC_Ok (never fails)
 */
TDC_API int TDC_CC TDC_getLastTimestamps( Bln32   reset,
                                          Int64 * timestamps,
                                          Int8  * channels,
                                          Int32 * valid );


/** Write Timestamp Values to File
 *
 *  Starts or stops writing the timestamp values to a file continously.
 *  The timestamps written are already corrected by the detector delays,
 *  see @ref TDC_setChannelDelays.
 *
 *  Timestamps come in base units, see @ref TDC_getTimebase;
 *  channel Numbers range from 0 to 7 in binary formats, from 1 to 8 in ASCII.
 *  The follwing file formats are available:
 *
 *  @li ASCII:      Timestamp values (int base units) and channel numbers
 *                  as decimal values in two comma separated columns.
 *                  Channel numbers range from 1 to 8 in this format.
 *
 *  @li binary:     A binary header of 40 bytes, records of 10 bytes,
 *                  8 bytes for the timestamp, 2 for the channel number,
 *                  stored in little endian (Intel) byte order.
 *
 *  @li compressed: A binary header of 40 bytes, records of 40 bits (5 bytes),
 *                  37 bits for the timestamp, 3 for the channel number,
 *                  stored in little endian (Intel) byte order.
 *
 *  @li raw:        Like binary, but without header. Provided for backward
 *                  compatiblity.
 *
 *  The header of the binary formats is dedicated for use in @ref TDC_readTimestamps;
 *  it should be skipped when evaluating with external tools.
 *
 *  Writing in the ASCII format requires much more CPU power and about twice as much
 *  disk space than using the binary format. The compressed format again saves
 *  half of the disk space, allowing higher event rates with not-so-fast disks.
 *  The Timestamps are truncated in this format leading to an overflow every 11 s.
 *  It is possible to convert a binary file to ASCII format offline by using this
 *  function together with @ref TDC_readTimestamps.
 *  
 *  If the specified file exists it will be overwritten.
 *  The function checks if the file can be opened; write errors that occur
 *  later in the actual writing process (disk full e.g.) will not be reported.
 *  @param filename   Name of the file to use. To stop writing, call the function with
 *                    an empty or null filename.
 *  @param format     Output format. Meaningless if writing is to be stopped.
 *                    FORMAT_NONE also stops writing.
 *  @return           Error code
 */
TDC_API int TDC_CC TDC_writeTimestamps( const char *   filename,
                                        TDC_FileFormat format );


/** Input Synthetic Timestamps
 *
 *  The function allows to input synthetic timestamps for demonstration
 *  and simulation purposes. Timesamps are processed just like "raw"
 *  data from a real device.
 *  is connected; otherwise it will return an error.
 *  @param timestamps Input: Array of timestamps to process.
 *                    The timestamps should be in strictly increasing order,
 *                    otherwise some functions will fail.
 *  @param channels   Input: Array of corresponding channel numbers.
 *  @param count      Number of valid elements in both arrays.
 *  @return           Error code
 */
TDC_API int TDC_CC TDC_inputTimestamps( const Int64 * timestamps,
                                        const Int8  * channels,
                                        Int32         count );


/** Read Timestamps
 *
 *  The function allows to read timestamps from file for demonstration or
 *  delayed processing. It works only with files in a binary format
 *  (see @ref TDC_FileFormat). It can read files with or without the
 *  40 bytes header. When the header is present in demo mode (i.e. without
 *  a device connected), the HBT and Lifetime options from the source
 *  device come into effect.
 *
 *  In the compressed format, the reconstruction of the original timestamps
 *  can't be guaranteed.  Detector delays (see @ref TDC_setChannelDelays)
 *  are @em not compensated in this function because this is already
 *  done in @ref TDC_writeTimestamps.
 *  @param filename   Name of the binary input file
 *  @param format     Input format. Only binary formats are valid.
 *                    If the file has a valid header, the parameter is not used;
 *                    the format is retrieved from the file itself.
 *  @return           Error code
 */
TDC_API int TDC_CC TDC_readTimestamps( const char *   filename,
                                       TDC_FileFormat format );


/** Generate Timestamps
 *
 *  The function generates synthetic timestamps for demonstration
 *  and simulation purposes. Timesamps are processed just like "raw"
 *  data from a real device.
 *
 *  The channel mask (see @ref TDC_enableChannels) is considered. At least
 *  one channel has to be enabled!
 *  @param type     Type of time diff distribution
 *  @param par      Type specific parameter set. Parameters should be
 *                  chosen so that most time diffs are positive.
 *                  Negative diffs are dropped.
 *  @param count    Number of timestamps to generate
 *  @return         Error code
 */
TDC_API int TDC_CC TDC_generateTimestamps( TDC_SimType type,
                                           double *    par,
                                           Int32       count );

#endif
