/******************************************************************************
 *                                                                         
 * Copyright 2010-2014 Tabor Electronics. All rights reserved.
 *
 *****************************************************************************/

#ifndef __WX218X_HEADER
#define __WX218X_HEADER

#include <IviVisaType.h>

#if defined(__cplusplus) || defined(__cplusplus__)
extern "C" {
#endif

/**************************************************************************** 
 *---------------------------- Attribute Defines ---------------------------* 
 ****************************************************************************/
#ifndef IVI_ATTR_BASE
#define IVI_ATTR_BASE                 1000000
#endif

#ifndef IVI_INHERENT_ATTR_BASE		        
#define IVI_INHERENT_ATTR_BASE        (IVI_ATTR_BASE +  50000)   /* base for inherent capability attributes */
#endif

#ifndef IVI_CLASS_ATTR_BASE           
#define IVI_CLASS_ATTR_BASE           (IVI_ATTR_BASE + 250000)   /* base for IVI-defined class attributes */
#endif

#ifndef IVI_LXISYNC_ATTR_BASE         
#define IVI_LXISYNC_ATTR_BASE         (IVI_ATTR_BASE + 950000)   /* base for IviLxiSync attributes */
#endif

#ifndef IVI_SPECIFIC_ATTR_BASE        
#define IVI_SPECIFIC_ATTR_BASE        (IVI_ATTR_BASE + 150000)   /* base for attributes of specific drivers */
#endif


/*===== IVI Inherent Instrument Attributes ==============================*/    

/*- Driver Identification */

#define WX218X_ATTR_SPECIFIC_DRIVER_DESCRIPTION              (IVI_INHERENT_ATTR_BASE + 514L)  /* ViString, read-only */
#define WX218X_ATTR_SPECIFIC_DRIVER_PREFIX                   (IVI_INHERENT_ATTR_BASE + 302L)  /* ViString, read-only */
#define WX218X_ATTR_SPECIFIC_DRIVER_VENDOR                   (IVI_INHERENT_ATTR_BASE + 513L)  /* ViString, read-only */
#define WX218X_ATTR_SPECIFIC_DRIVER_REVISION                 (IVI_INHERENT_ATTR_BASE + 551L)  /* ViString, read-only */
#define WX218X_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION (IVI_INHERENT_ATTR_BASE + 515L)  /* ViInt32, read-only */
#define WX218X_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION (IVI_INHERENT_ATTR_BASE + 516L)  /* ViInt32, read-only */

/*- User Options */

#define WX218X_ATTR_RANGE_CHECK                             (IVI_INHERENT_ATTR_BASE + 2L)  /* ViBoolean, read-write */
#define WX218X_ATTR_QUERY_INSTRUMENT_STATUS                 (IVI_INHERENT_ATTR_BASE + 3L)  /* ViBoolean, read-write */
#define WX218X_ATTR_CACHE                                   (IVI_INHERENT_ATTR_BASE + 4L)  /* ViBoolean, read-write */
#define WX218X_ATTR_SIMULATE                                (IVI_INHERENT_ATTR_BASE + 5L)  /* ViBoolean, read-write */
#define WX218X_ATTR_RECORD_COERCIONS                        (IVI_INHERENT_ATTR_BASE + 6L)  /* ViBoolean, read-write */
#define WX218X_ATTR_INTERCHANGE_CHECK                       (IVI_INHERENT_ATTR_BASE + 21L)  /* ViBoolean, read-write */

/*- Advanced Session Information */

#define WX218X_ATTR_LOGICAL_NAME                            (IVI_INHERENT_ATTR_BASE + 305L)  /* ViString, read-only */
#define WX218X_ATTR_IO_RESOURCE_DESCRIPTOR                  (IVI_INHERENT_ATTR_BASE + 304L)  /* ViString, read-only */
#define WX218X_ATTR_DRIVER_SETUP                            (IVI_INHERENT_ATTR_BASE + 7L)  /* ViString, read-only */

/*- Driver Capabilities */

#define WX218X_ATTR_GROUP_CAPABILITIES                      (IVI_INHERENT_ATTR_BASE + 401L)  /* ViString, read-only */
#define WX218X_ATTR_SUPPORTED_INSTRUMENT_MODELS             (IVI_INHERENT_ATTR_BASE + 327L)  /* ViString, read-only */

/*- Instrument Identification */

#define WX218X_ATTR_INSTRUMENT_FIRMWARE_REVISION            (IVI_INHERENT_ATTR_BASE + 510L)  /* ViString, read-only */
#define WX218X_ATTR_INSTRUMENT_MANUFACTURER                 (IVI_INHERENT_ATTR_BASE + 511L)  /* ViString, read-only */
#define WX218X_ATTR_INSTRUMENT_MODEL                        (IVI_INHERENT_ATTR_BASE + 512L)  /* ViString, read-only */


/*===== Instrument-Specific Attributes =====================================*/

/*- Arbitrary */

#define WX218X_ATTR_ARB_GAIN                                (IVI_CLASS_ATTR_BASE + 202L)  /* ViReal64, read-write */
#define WX218X_ATTR_ARB_OFFSET                              (IVI_CLASS_ATTR_BASE + 203L)  /* ViReal64, read-write */
#define WX218X_ATTR_ARB_SAMPLE_RATE                         (IVI_CLASS_ATTR_BASE + 204L)  /* ViReal64, read-write */

/*- Waveform */

#define WX218X_ATTR_ARB_WAVEFORM_HANDLE                     (IVI_CLASS_ATTR_BASE + 201L)  /* ViInt32, read-write */
#define WX218X_ATTR_ARB_FREQUENCY                           (IVI_CLASS_ATTR_BASE + 209L)  /* ViReal64, read-write */
#define WX218X_ATTR_MAX_NUM_WAVEFORMS                       (IVI_CLASS_ATTR_BASE + 205L)  /* ViInt32, read-only */
#define WX218X_ATTR_WAVEFORM_QUANTUM                        (IVI_CLASS_ATTR_BASE + 206L)  /* ViInt32, read-only */
#define WX218X_ATTR_MAX_WAVEFORM_SIZE                       (IVI_CLASS_ATTR_BASE + 208L)  /* ViInt32, read-only */
#define WX218X_ATTR_MIN_WAVEFORM_SIZE                       (IVI_CLASS_ATTR_BASE + 207L)  /* ViInt32, read-only */

/*- Sequence */

#define WX218X_ATTR_ARB_SEQUENCE_HANDLE                     (IVI_CLASS_ATTR_BASE + 211L)  /* ViInt32, read-write */
#define WX218X_ATTR_MAX_SEQUENCE_LENGTH                     (IVI_CLASS_ATTR_BASE + 214L)  /* ViInt32, read-only */
#define WX218X_ATTR_MIN_SEQUENCE_LENGTH                     (IVI_CLASS_ATTR_BASE + 213L)  /* ViInt32, read-only */
#define WX218X_ATTR_MAX_LOOP_COUNT                          (IVI_CLASS_ATTR_BASE + 215L)  /* ViInt32, read-only */
#define WX218X_ATTR_MAX_NUM_SEQUENCES                       (IVI_CLASS_ATTR_BASE + 212L)  /* ViInt32, read-only */

/*- AM */

#define WX218X_ATTR_AM_ENABLED                              (IVI_CLASS_ATTR_BASE + 401L)  /* ViBoolean, read-write */
#define WX218X_ATTR_AM_INTERNAL_DEPTH                       (IVI_CLASS_ATTR_BASE + 403L)  /* ViReal64, read-write */
#define WX218X_ATTR_AM_INTERNAL_FREQUENCY                   (IVI_CLASS_ATTR_BASE + 405L)  /* ViReal64, read-write */
#define WX218X_ATTR_AM_INTERNAL_WAVEFORM                    (IVI_CLASS_ATTR_BASE + 404L)  /* ViInt32, read-write */
#define WX218X_ATTR_AM_SOURCE                               (IVI_CLASS_ATTR_BASE + 402L)  /* ViInt32, read-write */

/*- FM */

#define WX218X_ATTR_FM_ENABLED                              (IVI_CLASS_ATTR_BASE + 501L)  /* ViBoolean, read-write */
#define WX218X_ATTR_FM_INTERNAL_DEVIATION                   (IVI_CLASS_ATTR_BASE + 503L)  /* ViReal64, read-write */
#define WX218X_ATTR_FM_INTERNAL_FREQUENCY                   (IVI_CLASS_ATTR_BASE + 505L)  /* ViReal64, read-write */
#define WX218X_ATTR_FM_INTERNAL_WAVEFORM                    (IVI_CLASS_ATTR_BASE + 504L)  /* ViInt32, read-write */
#define WX218X_ATTR_FM_SOURCE                               (IVI_CLASS_ATTR_BASE + 502L)  /* ViInt32, read-write */

/*- Output */

#define WX218X_ATTR_CHANNEL_COUNT                           (IVI_INHERENT_ATTR_BASE + 203L)  /* ViInt32, read-only */
#define WX218X_ATTR_OUTPUT_ENABLED                          (IVI_CLASS_ATTR_BASE + 3L)  /* ViBoolean, read-write */
#define WX218X_ATTR_OUTPUT_IMPEDANCE                        (IVI_CLASS_ATTR_BASE + 4L)  /* ViReal64, read-write */
#define WX218X_ATTR_OPERATION_MODE                          (IVI_CLASS_ATTR_BASE + 5L)  /* ViInt32, read-write */
#define WX218X_ATTR_OUTPUT_MODE                             (IVI_CLASS_ATTR_BASE + 1L)  /* ViInt32, read-write */
#define WX218X_ATTR_REF_CLOCK_SOURCE                        (IVI_CLASS_ATTR_BASE + 2L)  /* ViInt32, read-write */

/*- StandardWaveform */

#define WX218X_ATTR_FUNC_AMPLITUDE                          (IVI_CLASS_ATTR_BASE + 102L)  /* ViReal64, read-write */
#define WX218X_ATTR_FUNC_DC_OFFSET                          (IVI_CLASS_ATTR_BASE + 103L)  /* ViReal64, read-write */
#define WX218X_ATTR_FUNC_DUTY_CYCLE_HIGH                    (IVI_CLASS_ATTR_BASE + 106L)  /* ViReal64, read-write */
#define WX218X_ATTR_FUNC_FREQUENCY                          (IVI_CLASS_ATTR_BASE + 104L)  /* ViReal64, read-write */
#define WX218X_ATTR_FUNC_START_PHASE                        (IVI_CLASS_ATTR_BASE + 105L)  /* ViReal64, read-write */
#define WX218X_ATTR_FUNC_WAVEFORM                           (IVI_CLASS_ATTR_BASE + 101L)  /* ViInt32, read-write */

/*- Trigger */

#define WX218X_ATTR_BURST_COUNT                             (IVI_CLASS_ATTR_BASE + 350L)  /* ViInt32, read-write */
#define WX218X_ATTR_INTERNAL_TRIGGER_RATE                   (IVI_CLASS_ATTR_BASE + 310L)  /* ViReal64, read-write */
#define WX218X_ATTR_TRIGGER_SOURCE                          (IVI_CLASS_ATTR_BASE + 302L)  /* ViInt32, read-write */

/*- Instrument Specific */

#define WX218X_ATTR_ACTIVE_CHANNEL                          (IVI_SPECIFIC_ATTR_BASE + 5L)  /* ViString, read-write */
#define WX218X_ATTR_SKEW                                    (IVI_SPECIFIC_ATTR_BASE + 194L)  /* ViReal64, read-write */

/*- AM */

#define WX218X_ATTR_ENABLED_AM                              (IVI_SPECIFIC_ATTR_BASE + 1L)  /* ViBoolean, read-write */
#define WX218X_ATTR_INTERNAL_DEPTH_AM                       (IVI_SPECIFIC_ATTR_BASE + 2L)  /* ViReal64, read-write */
#define WX218X_ATTR_INTERNAL_WAVEFORM_AM                    (IVI_SPECIFIC_ATTR_BASE + 3L)  /* ViInt32, read-write */
#define WX218X_ATTR_INTERNAL_FREQUENCY_AM                   (IVI_SPECIFIC_ATTR_BASE + 4L)  /* ViReal64, read-write */

/*- Output */

#define WX218X_ATTR_COUPLE                                  (IVI_SPECIFIC_ATTR_BASE + 6L)  /* ViInt32, read-write */
#define WX218X_ATTR_ENABLED_OUTPUT                          (IVI_SPECIFIC_ATTR_BASE + 7L)  /* ViBoolean, read-write */
#define WX218X_ATTR_OPERATION_MODE2                         (IVI_SPECIFIC_ATTR_BASE + 8L)  /* ViInt32, read-write */
#define WX218X_ATTR_OUTPUT_MODE2                            (IVI_SPECIFIC_ATTR_BASE + 9L)  /* ViInt32, read-write */
#define WX218X_ATTR_REFERENCE_CLOCK_SOURCE                  (IVI_SPECIFIC_ATTR_BASE + 10L)  /* ViInt32, read-write */
#define WX218X_ATTR_REF_EXT_FREQUENCY                       (IVI_SPECIFIC_ATTR_BASE + 11L)  /* ViReal64, read-write */
#define WX218X_ATTR_EXT_FREQUENCY                           (IVI_SPECIFIC_ATTR_BASE + 203L)  /* ViInt32, read-write */

/*- Sync */

#define WX218X_ATTR_SYNC_ENABLED                            (IVI_SPECIFIC_ATTR_BASE + 12L)  /* ViBoolean, read-write */
#define WX218X_ATTR_SYNC_FUNCTION                           (IVI_SPECIFIC_ATTR_BASE + 13L)  /* ViInt32, read-write */
#define WX218X_ATTR_SYNC_POSITION                           (IVI_SPECIFIC_ATTR_BASE + 14L)  /* ViInt32, read-write */
#define WX218X_ATTR_SYNC_SOURCE                             (IVI_SPECIFIC_ATTR_BASE + 15L)  /* ViInt32, read-write */
#define WX218X_ATTR_SYNC_WIDTH                              (IVI_SPECIFIC_ATTR_BASE + 16L)  /* ViInt32, read-write */

/*- StandardWaveform */

#define WX218X_ATTR_AMPLITUDE                               (IVI_SPECIFIC_ATTR_BASE + 17L)  /* ViReal64, read-write */
#define WX218X_ATTR_DC_LEVEL                                (IVI_SPECIFIC_ATTR_BASE + 19L)  /* ViReal64, read-write */
#define WX218X_ATTR_DC_OFFSET                               (IVI_SPECIFIC_ATTR_BASE + 20L)  /* ViReal64, read-write */
#define WX218X_ATTR_DUTY_CYCLE_HIGH                         (IVI_SPECIFIC_ATTR_BASE + 21L)  /* ViReal64, read-write */
#define WX218X_ATTR_EXP_EXPONENT                            (IVI_SPECIFIC_ATTR_BASE + 22L)  /* ViInt32, read-write */
#define WX218X_ATTR_FREQUENCY                               (IVI_SPECIFIC_ATTR_BASE + 23L)  /* ViReal64, read-write */
#define WX218X_ATTR_GAUSS_EXPONENT                          (IVI_SPECIFIC_ATTR_BASE + 24L)  /* ViInt32, read-write */
#define WX218X_ATTR_POWER                                   (IVI_SPECIFIC_ATTR_BASE + 25L)  /* ViReal64, read-write */
#define WX218X_ATTR_RAMP_DELAY                              (IVI_SPECIFIC_ATTR_BASE + 26L)  /* ViReal64, read-write */
#define WX218X_ATTR_RAMP_FALL_TIME                          (IVI_SPECIFIC_ATTR_BASE + 27L)  /* ViReal64, read-write */
#define WX218X_ATTR_RAMP_RISE_TIME                          (IVI_SPECIFIC_ATTR_BASE + 28L)  /* ViReal64, read-write */
#define WX218X_ATTR_SINCN_CYCLE                             (IVI_SPECIFIC_ATTR_BASE + 29L)  /* ViInt32, read-write */
#define WX218X_ATTR_START_PHASE                             (IVI_SPECIFIC_ATTR_BASE + 30L)  /* ViReal64, read-write */
#define WX218X_ATTR_HV_AMPLITUDE                            (IVI_SPECIFIC_ATTR_BASE + 120L)  /* ViReal64, read-write */
#define WX218X_ATTR_WAVEFORM                                (IVI_SPECIFIC_ATTR_BASE + 121L)  /* ViInt32, read-write */

/*- Arbitrary */

#define WX218X_ATTR_CLOCK_DIVIDER                           (IVI_SPECIFIC_ATTR_BASE + 32L)  /* ViInt32, read-write */
#define WX218X_ATTR_GAIN                                    (IVI_SPECIFIC_ATTR_BASE + 33L)  /* ViReal64, read-write */
#define WX218X_ATTR_OFFSET                                  (IVI_SPECIFIC_ATTR_BASE + 34L)  /* ViReal64, read-write */
#define WX218X_ATTR_SAMPLE_RATE                             (IVI_SPECIFIC_ATTR_BASE + 35L)  /* ViReal64, read-write */
#define WX218X_ATTR_SAMPLE_RATE_SOURCE                      (IVI_SPECIFIC_ATTR_BASE + 36L)  /* ViInt32, read-write */
#define WX218X_ATTR_ARB_SOURCE                              (IVI_SPECIFIC_ATTR_BASE + 37L)  /* ViInt32, read-write */
#define WX218X_ATTR_ARB_TIMING                              (IVI_SPECIFIC_ATTR_BASE + 38L)  /* ViInt32, read-write */
#define WX218X_ATTR_FREQ_RAST_DIVIDER                       (IVI_SPECIFIC_ATTR_BASE + 202L)  /* ViInt32, read-write */

/*- Waveform */

#define WX218X_ATTR_NUMBER_WAVEFORMS_MAX                    (IVI_SPECIFIC_ATTR_BASE + 39L)  /* ViInt32, read-only */
#define WX218X_ATTR_QUANTUM                                 (IVI_SPECIFIC_ATTR_BASE + 40L)  /* ViInt32, read-only */
#define WX218X_ATTR_WAVEFORM_SIZE_MAX                       (IVI_SPECIFIC_ATTR_BASE + 41L)  /* ViInt32, read-only */
#define WX218X_ATTR_WAVEFORM_SIZE_MIN                       (IVI_SPECIFIC_ATTR_BASE + 42L)  /* ViInt32, read-only */
#define WX218X_ATTR_TRACE_MODE                              (IVI_SPECIFIC_ATTR_BASE + 200L)  /* ViInt32, read-write */
#define WX218X_ATTR_FAST_DOWNLOAD                           (IVI_SPECIFIC_ATTR_BASE + 205L)  /* ViInt32, read-write */
#define WX218X_ATTR_DOWNLOAD_RECORD                         (IVI_SPECIFIC_ATTR_BASE + 207L)  /* ViInt32, read-write */

/*- Sequence */

#define WX218X_ATTR_ADVANCE_MODE                            (IVI_SPECIFIC_ATTR_BASE + 43L)  /* ViInt32, read-write */
#define WX218X_ATTR_SEQ_JUMP_EVENT                          (IVI_SPECIFIC_ATTR_BASE + 44L)  /* ViInt32, read-write */
#define WX218X_ATTR_LENGTH_MAX                              (IVI_SPECIFIC_ATTR_BASE + 45L)  /* ViInt32, read-only */
#define WX218X_ATTR_LENGTH_MIN                              (IVI_SPECIFIC_ATTR_BASE + 46L)  /* ViInt32, read-only */
#define WX218X_ATTR_LOOP_COUNT_MAX                          (IVI_SPECIFIC_ATTR_BASE + 47L)  /* ViInt32, read-only */
#define WX218X_ATTR_NUMBER_SEQUENCE_MAX                     (IVI_SPECIFIC_ATTR_BASE + 48L)  /* ViInt32, read-only */
#define WX218X_ATTR_SEQ_SOURCE                              (IVI_SPECIFIC_ATTR_BASE + 49L)  /* ViInt32, read-write */
#define WX218X_ATTR_SEQ_SYNC_LOCK                           (IVI_SPECIFIC_ATTR_BASE + 50L)  /* ViInt32, read-write */
#define WX218X_ATTR_SEQ_TIMING                              (IVI_SPECIFIC_ATTR_BASE + 51L)  /* ViInt32, read-write */
#define WX218X_ATTR_QUICK_SEQUENCE                          (IVI_SPECIFIC_ATTR_BASE + 119L)  /* ViInt32, read-write */
#define WX218X_ATTR_PRESTEP                                 (IVI_SPECIFIC_ATTR_BASE + 125L)  /* ViInt32, read-write */
#define WX218X_ATTR_SEQ_ONCE_COUNT                          (IVI_SPECIFIC_ATTR_BASE + 209L)  /* ViInt32, read-write */

/*- AdvanceSequence */

#define WX218X_ATTR_ADV_SEQ_MODE                            (IVI_SPECIFIC_ATTR_BASE + 52L)  /* ViInt32, read-write */
#define WX218X_ATTR_SYNC_LOCK                               (IVI_SPECIFIC_ATTR_BASE + 53L)  /* ViInt32, read-write */
#define WX218X_ATTR_ASEQ_ONCE_COUNT                         (IVI_SPECIFIC_ATTR_BASE + 210L)  /* ViInt32, read-write */

/*- CarrierModulation */

#define WX218X_ATTR_CARR_FREQUENCY                          (IVI_SPECIFIC_ATTR_BASE + 54L)  /* ViReal64, read-write */
#define WX218X_ATTR_CARR_WAVEFORM                           (IVI_SPECIFIC_ATTR_BASE + 55L)  /* ViInt32, read-write */

/*- Couple */

#define WX218X_ATTR_COUPLE_ENABLED                          (IVI_SPECIFIC_ATTR_BASE + 56L)  /* ViBoolean, read-write */
#define WX218X_ATTR_COURSE_OFFSET                           (IVI_SPECIFIC_ATTR_BASE + 57L)  /* ViInt32, read-write */
#define WX218X_ATTR_FINE_SKEW                               (IVI_SPECIFIC_ATTR_BASE + 58L)  /* ViReal64, read-write */

/*- FM */

#define WX218X_ATTR_ENABLED_FM                              (IVI_SPECIFIC_ATTR_BASE + 59L)  /* ViBoolean, read-write */
#define WX218X_ATTR_INTERNAL_DEVIATION_FM                   (IVI_SPECIFIC_ATTR_BASE + 60L)  /* ViReal64, read-write */
#define WX218X_ATTR_INTERNAL_FREQUENCY_FM                   (IVI_SPECIFIC_ATTR_BASE + 61L)  /* ViReal64, read-write */
#define WX218X_ATTR_INTERNAL_WAVEFORM_FM                    (IVI_SPECIFIC_ATTR_BASE + 62L)  /* ViInt32, read-write */
#define WX218X_ATTR_FM_MARKER                               (IVI_SPECIFIC_ATTR_BASE + 63L)  /* ViReal64, read-write */

/*- Markers */

#define WX218X_ATTR_MARKER_INDEX                            (IVI_SPECIFIC_ATTR_BASE + 195L)  /* ViInt32, read-write */
#define WX218X_ATTR_MARKER_SOURCE                           (IVI_SPECIFIC_ATTR_BASE + 196L)  /* ViInt32, read-write */
#define WX218X_ATTR_MARKER_HIGH_LEVEL4_CH                   (IVI_SPECIFIC_ATTR_BASE + 211L)  /* ViReal64, read-write */
#define WX218X_ATTR_LOW_LEVEL4_CH                           (IVI_SPECIFIC_ATTR_BASE + 212L)  /* ViReal64, read-write */

/*- Trigger */

#define WX218X_ATTR_BURST_COUNT2                            (IVI_SPECIFIC_ATTR_BASE + 64L)  /* ViInt32, read-write */
#define WX218X_ATTR_CONTINUOUS_MODE                         (IVI_SPECIFIC_ATTR_BASE + 65L)  /* ViInt32, read-write */
#define WX218X_ATTR_CONTINUOUS_SOURCE                       (IVI_SPECIFIC_ATTR_BASE + 66L)  /* ViInt32, read-write */
#define WX218X_ATTR_TRIG_DELAY                              (IVI_SPECIFIC_ATTR_BASE + 67L)  /* ViInt32, read-write */
#define WX218X_ATTR_TRIG_LEVEL                              (IVI_SPECIFIC_ATTR_BASE + 68L)  /* ViReal64, read-write */
#define WX218X_ATTR_TRIG_SLOPE                              (IVI_SPECIFIC_ATTR_BASE + 69L)  /* ViInt32, read-write */
#define WX218X_ATTR_TRIG_SOURCE                             (IVI_SPECIFIC_ATTR_BASE + 70L)  /* ViInt32, read-write */
#define WX218X_ATTR_TRIG_TIMER_DELAY                        (IVI_SPECIFIC_ATTR_BASE + 71L)  /* ViInt32, read-write */
#define WX218X_ATTR_TRIG_TIMER_MODE                         (IVI_SPECIFIC_ATTR_BASE + 72L)  /* ViInt32, read-write */
#define WX218X_ATTR_TRIG_TIMER_TIME                         (IVI_SPECIFIC_ATTR_BASE + 73L)  /* ViReal64, read-write */
#define WX218X_ATTR_TRIG_TRIGGER_MODE                       (IVI_SPECIFIC_ATTR_BASE + 74L)  /* ViInt32, read-write */
#define WX218X_ATTR_TRIGGER_IMPEDANCE                       (IVI_SPECIFIC_ATTR_BASE + 208L)  /* ViInt32, read-write */

/*- ARM */

#define WX218X_ATTR_ARM_LEVEL                               (IVI_SPECIFIC_ATTR_BASE + 75L)  /* ViReal64, read-write */
#define WX218X_ATTR_ARM_SLOPE                               (IVI_SPECIFIC_ATTR_BASE + 76L)  /* ViInt32, read-write */

/*- SmartTrigger */

#define WX218X_ATTR_HI_PASS_ENABLED                         (IVI_SPECIFIC_ATTR_BASE + 77L)  /* ViBoolean, read-write */
#define WX218X_ATTR_HI_PASS_WIDTH                           (IVI_SPECIFIC_ATTR_BASE + 78L)  /* ViReal64, read-write */
#define WX218X_ATTR_HOLDOFF                                 (IVI_SPECIFIC_ATTR_BASE + 79L)  /* ViReal64, read-write */
#define WX218X_ATTR_HOLDOFF_ENABLED                         (IVI_SPECIFIC_ATTR_BASE + 80L)  /* ViBoolean, read-write */
#define WX218X_ATTR_LOW_PASS_ENABLED                        (IVI_SPECIFIC_ATTR_BASE + 81L)  /* ViBoolean, read-write */
#define WX218X_ATTR_LOW_PASS_WIDTH                          (IVI_SPECIFIC_ATTR_BASE + 82L)  /* ViReal64, read-write */

/*- StateStorage */

#define WX218X_ATTR_CELL_RECALL                             (IVI_SPECIFIC_ATTR_BASE + 83L)  /* ViInt32, read-write */
#define WX218X_ATTR_CELL_STORE                              (IVI_SPECIFIC_ATTR_BASE + 84L)  /* ViInt32, read-write */
#define WX218X_ATTR_CONFIGURATION_STORE                     (IVI_SPECIFIC_ATTR_BASE + 85L)  /* ViInt32, read-write */
#define WX218X_ATTR_TARGET_RECALL                           (IVI_SPECIFIC_ATTR_BASE + 86L)  /* ViInt32, read-write */
#define WX218X_ATTR_TARGET_STORE                            (IVI_SPECIFIC_ATTR_BASE + 87L)  /* ViInt32, read-write */
#define WX218X_ATTR_CONFIGURATION_RECALL                    (IVI_SPECIFIC_ATTR_BASE + 118L)  /* ViInt32, read-only */
#define WX218X_ATTR_STORE_ENABLED                           (IVI_SPECIFIC_ATTR_BASE + 198L)  /* ViBoolean, read-write */
#define WX218X_ATTR_RECALL_ENABLED                          (IVI_SPECIFIC_ATTR_BASE + 199L)  /* ViBoolean, read-write */

/*- XInstrument */

#define WX218X_ATTR_XINSTR_ENABLED                          (IVI_SPECIFIC_ATTR_BASE + 88L)  /* ViBoolean, read-write */
#define WX218X_ATTR_XINSTR_MODE                             (IVI_SPECIFIC_ATTR_BASE + 89L)  /* ViInt32, read-write */
#define WX218X_ATTR_XINSTR_OFFSET                           (IVI_SPECIFIC_ATTR_BASE + 90L)  /* ViInt32, read-write */
#define WX218X_ATTR_MODE_ADV                                (IVI_SPECIFIC_ATTR_BASE + 201L)  /* ViInt32, read-write */

/*- DigitalPulse */

#define WX218X_ATTR_DIG_PULSE_AMPLITUDE                     (IVI_SPECIFIC_ATTR_BASE + 91L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_CONFIGURE                     (IVI_SPECIFIC_ATTR_BASE + 92L)  /* ViInt32, read-write */
#define WX218X_ATTR_DIG_PULSE_DELAY                         (IVI_SPECIFIC_ATTR_BASE + 93L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_DELAY_PERCENT                 (IVI_SPECIFIC_ATTR_BASE + 94L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_DOUBLE_DELAY                  (IVI_SPECIFIC_ATTR_BASE + 95L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_DOUBLE_DELAY_PERCENT          (IVI_SPECIFIC_ATTR_BASE + 96L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_FALL_TIME                     (IVI_SPECIFIC_ATTR_BASE + 97L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_FALL_TIME_PERCENT             (IVI_SPECIFIC_ATTR_BASE + 98L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_HIGH_LEVEL                    (IVI_SPECIFIC_ATTR_BASE + 99L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_LEVEL_CONTROL                 (IVI_SPECIFIC_ATTR_BASE + 100L)  /* ViInt32, read-write */
#define WX218X_ATTR_DIG_PULSE_LOW_LEVEL                     (IVI_SPECIFIC_ATTR_BASE + 101L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_MODE                          (IVI_SPECIFIC_ATTR_BASE + 102L)  /* ViInt32, read-write */
#define WX218X_ATTR_DIG_PULSE_OFFSET                        (IVI_SPECIFIC_ATTR_BASE + 103L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_PERIOD                        (IVI_SPECIFIC_ATTR_BASE + 104L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_POLARITY                      (IVI_SPECIFIC_ATTR_BASE + 105L)  /* ViInt32, read-write */
#define WX218X_ATTR_DIG_PULSE_RISE_TIME                     (IVI_SPECIFIC_ATTR_BASE + 106L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_RISE_TIME_PERCENT             (IVI_SPECIFIC_ATTR_BASE + 107L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_TRANSITION                    (IVI_SPECIFIC_ATTR_BASE + 108L)  /* ViInt32, read-write */
#define WX218X_ATTR_DIG_PULSE_WIDTH                         (IVI_SPECIFIC_ATTR_BASE + 109L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PULSE_WIDTH_PERCENT                 (IVI_SPECIFIC_ATTR_BASE + 110L)  /* ViReal64, read-write */

/*- Sweep */

#define WX218X_ATTR_SWEEP_DIRECTION                         (IVI_SPECIFIC_ATTR_BASE + 111L)  /* ViInt32, read-write */
#define WX218X_ATTR_SWEEP_ENABLED                           (IVI_SPECIFIC_ATTR_BASE + 112L)  /* ViBoolean, read-write */
#define WX218X_ATTR_SWEEP_FREQUENCY_START                   (IVI_SPECIFIC_ATTR_BASE + 113L)  /* ViReal64, read-write */
#define WX218X_ATTR_SWEEP_FREQUENCY_STOP                    (IVI_SPECIFIC_ATTR_BASE + 114L)  /* ViReal64, read-write */
#define WX218X_ATTR_SWEEP_MARKER                            (IVI_SPECIFIC_ATTR_BASE + 115L)  /* ViReal64, read-write */
#define WX218X_ATTR_SWEEP_SPACING                           (IVI_SPECIFIC_ATTR_BASE + 116L)  /* ViInt32, read-write */
#define WX218X_ATTR_SWEEP_TIME                              (IVI_SPECIFIC_ATTR_BASE + 117L)  /* ViReal64, read-write */

/*- Pattern */

#define WX218X_ATTR_PATTERN_BAUD                            (IVI_SPECIFIC_ATTR_BASE + 158L)  /* ViReal64, read-write */
#define WX218X_ATTR_PATTERN_LEVEL                           (IVI_SPECIFIC_ATTR_BASE + 159L)  /* ViInt32, read-write */
#define WX218X_ATTR_PATTERN_MODE                            (IVI_SPECIFIC_ATTR_BASE + 160L)  /* ViInt32, read-write */
#define WX218X_ATTR_PATTERN_PREDEFINED_TYPE                 (IVI_SPECIFIC_ATTR_BASE + 161L)  /* ViInt32, read-write */
#define WX218X_ATTR_PATTERN_HIGH_LEVEL                      (IVI_SPECIFIC_ATTR_BASE + 162L)  /* ViReal64, read-write */
#define WX218X_ATTR_PATTERN_LOW_LEVEL                       (IVI_SPECIFIC_ATTR_BASE + 163L)  /* ViReal64, read-write */
#define WX218X_ATTR_PATTERN_LOOP                            (IVI_SPECIFIC_ATTR_BASE + 164L)  /* ViInt32, read-write */
#define WX218X_ATTR_PREAMBLE                                (IVI_SPECIFIC_ATTR_BASE + 165L)  /* ViInt32, read-write */
#define WX218X_ATTR_PATTERN_LENGTH                          (IVI_SPECIFIC_ATTR_BASE + 166L)  /* ViInt32, read-write */

/*- Composer */

#define WX218X_ATTR_PATTERN_COMPOSER_TRANSITION_TYPE        (IVI_SPECIFIC_ATTR_BASE + 167L)  /* ViInt32, read-write */
#define WX218X_ATTR_PATT_COMP_LINEAR_START                  (IVI_SPECIFIC_ATTR_BASE + 168L)  /* ViReal64, read-write */
#define WX218X_ATTR_PATT_COMP_RESOLUTION                    (IVI_SPECIFIC_ATTR_BASE + 192L)  /* ViReal64, read-write */
#define WX218X_ATTR_PATTERN_COMPOSER_RESOLUTION_TYPE        (IVI_SPECIFIC_ATTR_BASE + 193L)  /* ViInt32, read-write */
#define WX218X_ATTR_FAST_START                              (IVI_SPECIFIC_ATTR_BASE + 197L)  /* ViReal64, read-write */

/*- DigitalPatternOutput */

#define WX218X_ATTR_DIG_DELAY_MODE                          (IVI_SPECIFIC_ATTR_BASE + 129L)  /* ViInt32, read-write */
#define WX218X_ATTR_DIG_LEVEL_MODE                          (IVI_SPECIFIC_ATTR_BASE + 130L)  /* ViInt32, read-write */
#define WX218X_ATTR_DIG_PATTERN_DELAY                       (IVI_SPECIFIC_ATTR_BASE + 131L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_PATTERN_ENABLED                     (IVI_SPECIFIC_ATTR_BASE + 132L)  /* ViBoolean, read-write */
#define WX218X_ATTR_DIG_HIGH_LEVEL                          (IVI_SPECIFIC_ATTR_BASE + 133L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_LOW_LEVEL                           (IVI_SPECIFIC_ATTR_BASE + 134L)  /* ViReal64, read-write */
#define WX218X_ATTR_DIG_POD_PRESENT                         (IVI_SPECIFIC_ATTR_BASE + 188L)  /* ViInt32, read-only */
#define WX218X_ATTR_DIG_EMPHASIS_ENABLED                    (IVI_SPECIFIC_ATTR_BASE + 189L)  /* ViBoolean, read-write */
#define WX218X_ATTR_FORMAT_DATA                             (IVI_SPECIFIC_ATTR_BASE + 190L)  /* ViInt32, read-write */
#define WX218X_ATTR_ARB_RESOLUTION                          (IVI_SPECIFIC_ATTR_BASE + 191L)  /* ViInt32, read-write */
#define WX218X_ATTR_DIG_CLOCK                               (IVI_SPECIFIC_ATTR_BASE + 204L)  /* ViInt32, read-write */
#define WX218X_ATTR_DIG_PORT                                (IVI_SPECIFIC_ATTR_BASE + 206L)  /* ViInt32, read-write */

/*- CHIRP */

#define WX218X_ATTR_CHIRP_WIDTH                             (IVI_SPECIFIC_ATTR_BASE + 135L)  /* ViReal64, read-write */
#define WX218X_ATTR_CHIRP_REPETITION                        (IVI_SPECIFIC_ATTR_BASE + 136L)  /* ViReal64, read-write */
#define WX218X_ATTR_CHIRP_START_FREQUENCY                   (IVI_SPECIFIC_ATTR_BASE + 137L)  /* ViReal64, read-write */
#define WX218X_ATTR_CHIRP_STOP_FREQUENCY                    (IVI_SPECIFIC_ATTR_BASE + 138L)  /* ViReal64, read-write */
#define WX218X_ATTR_CHIRP_MARKER_FREQUENCY                  (IVI_SPECIFIC_ATTR_BASE + 139L)  /* ViReal64, read-write */
#define WX218X_ATTR_CHIRP_AMPL_DEPTH                        (IVI_SPECIFIC_ATTR_BASE + 140L)  /* ViReal64, read-write */
#define WX218X_ATTR_CHIRP_FREQ_DIRECTION                    (IVI_SPECIFIC_ATTR_BASE + 141L)  /* ViInt32, read-write */
#define WX218X_ATTR_CHIRP_FREQ_SPACING                      (IVI_SPECIFIC_ATTR_BASE + 142L)  /* ViInt32, read-write */
#define WX218X_ATTR_CHIRP_AMPL_DIRECTION                    (IVI_SPECIFIC_ATTR_BASE + 143L)  /* ViInt32, read-write */
#define WX218X_ATTR_CHIRP_AMPL_SPACING                      (IVI_SPECIFIC_ATTR_BASE + 144L)  /* ViInt32, read-write */
#define WX218X_ATTR_CHIRP_ENABLED                           (IVI_SPECIFIC_ATTR_BASE + 145L)  /* ViBoolean, read-write */

/*- FSK */

#define WX218X_ATTR_FSK_SHIFT_FREQ                          (IVI_SPECIFIC_ATTR_BASE + 146L)  /* ViReal64, read-write */
#define WX218X_ATTR_FSK_BAUD                                (IVI_SPECIFIC_ATTR_BASE + 147L)  /* ViReal64, read-write */
#define WX218X_ATTR_FSK_MARKER                              (IVI_SPECIFIC_ATTR_BASE + 148L)  /* ViInt32, read-write */
#define WX218X_ATTR_ENABLED_FSK                             (IVI_SPECIFIC_ATTR_BASE + 182L)  /* ViBoolean, read-write */

/*- ASK */

#define WX218X_ATTR_ASK_START_AMPLITUDE                     (IVI_SPECIFIC_ATTR_BASE + 149L)  /* ViReal64, read-write */
#define WX218X_ATTR_ASK_SHIFT_AMPLITUDE                     (IVI_SPECIFIC_ATTR_BASE + 150L)  /* ViReal64, read-write */
#define WX218X_ATTR_ASK_BAUD                                (IVI_SPECIFIC_ATTR_BASE + 151L)  /* ViReal64, read-write */
#define WX218X_ATTR_ASK_MARKER                              (IVI_SPECIFIC_ATTR_BASE + 152L)  /* ViInt32, read-write */
#define WX218X_ATTR_ENABLED_ASK                             (IVI_SPECIFIC_ATTR_BASE + 183L)  /* ViBoolean, read-write */

/*- FHOP */

#define WX218X_ATTR_FHOP_TIME                               (IVI_SPECIFIC_ATTR_BASE + 153L)  /* ViReal64, read-write */
#define WX218X_ATTR_FHOP_MARKER                             (IVI_SPECIFIC_ATTR_BASE + 154L)  /* ViInt32, read-write */
#define WX218X_ATTR_FHOP_DWELL_MODE                         (IVI_SPECIFIC_ATTR_BASE + 155L)  /* ViInt32, read-write */
#define WX218X_ATTR_ENABLED_FHOP                            (IVI_SPECIFIC_ATTR_BASE + 184L)  /* ViBoolean, read-write */

/*- AHOP */

#define WX218X_ATTR_TIME                                    (IVI_SPECIFIC_ATTR_BASE + 156L)  /* ViReal64, read-write */
#define WX218X_ATTR_MARKER                                  (IVI_SPECIFIC_ATTR_BASE + 157L)  /* ViInt32, read-write */
#define WX218X_ATTR_DWELL_MODE                              (IVI_SPECIFIC_ATTR_BASE + 181L)  /* ViInt32, read-write */
#define WX218X_ATTR_ENABLED_AHOP                            (IVI_SPECIFIC_ATTR_BASE + 185L)  /* ViBoolean, read-write */

/*- PSK */

#define WX218X_ATTR_PSK_START_PHASE                         (IVI_SPECIFIC_ATTR_BASE + 170L)  /* ViReal64, read-write */
#define WX218X_ATTR_PSK_SHIFT_PHASE                         (IVI_SPECIFIC_ATTR_BASE + 171L)  /* ViReal64, read-write */
#define WX218X_ATTR_PSK_RATE                                (IVI_SPECIFIC_ATTR_BASE + 172L)  /* ViReal64, read-write */
#define WX218X_ATTR_TYPE                                    (IVI_SPECIFIC_ATTR_BASE + 173L)  /* ViInt32, read-write */
#define WX218X_ATTR_PSK_MARKER                              (IVI_SPECIFIC_ATTR_BASE + 174L)  /* ViInt32, read-write */
#define WX218X_ATTR_PSK_BAUD                                (IVI_SPECIFIC_ATTR_BASE + 175L)  /* ViReal64, read-write */
#define WX218X_ATTR_PSK_CARRIER_ENABLED                     (IVI_SPECIFIC_ATTR_BASE + 176L)  /* ViBoolean, read-write */
#define WX218X_ATTR_ENABLED_PSK                             (IVI_SPECIFIC_ATTR_BASE + 186L)  /* ViBoolean, read-write */

/*- QAM */

#define WX218X_ATTR_QAM_BAUD                                (IVI_SPECIFIC_ATTR_BASE + 177L)  /* ViReal64, read-write */
#define WX218X_ATTR_QAM_TYPE                                (IVI_SPECIFIC_ATTR_BASE + 178L)  /* ViInt32, read-write */
#define WX218X_ATTR_MARKER2                                 (IVI_SPECIFIC_ATTR_BASE + 179L)  /* ViInt32, read-write */
#define WX218X_ATTR_CARRIER_ENABLED                         (IVI_SPECIFIC_ATTR_BASE + 180L)  /* ViBoolean, read-write */
#define WX218X_ATTR_ENABLED_QAM                             (IVI_SPECIFIC_ATTR_BASE + 187L)  /* ViBoolean, read-write */


/**************************************************************************** 
 *------------------------ Attribute Value Defines -------------------------* 
 ****************************************************************************/

/*- Defined values for 
	attribute WX218X_ATTR_OUTPUT_MODE
	parameter OutputMode in function wx218x_ConfigureOutputMode */

#define WX218X_VAL_OUTPUT_FUNC                              0
#define WX218X_VAL_OUTPUT_ARB                               1
#define WX218X_VAL_OUTPUT_SEQ                               2

/*- Defined values for 
	attribute WX218X_ATTR_OPERATION_MODE
	parameter OperationMode in function wx218x_ConfigureOperationMode */

#define WX218X_VAL_OPERATE_CONTINUOUS                       0
#define WX218X_VAL_OPERATE_BURST                            1

/*- Defined values for 
	attribute WX218X_ATTR_REF_CLOCK_SOURCE
	parameter Source in function wx218x_ConfigureRefClockSource */

#define WX218X_VAL_REF_CLOCK_INTERNAL                       0
#define WX218X_VAL_REF_CLOCK_EXTERNAL                       1
#define WX218X_VAL_REF_CLOCK_RTSI_CLOCK                     101

/*- Defined values for 
	attribute WX218X_ATTR_TRIGGER_SOURCE
	parameter Source in function wx218x_ConfigureTriggerSource */

#define WX218X_VAL_EXTERNAL                                 1
#define WX218X_VAL_SOFTWARE_TRIG                            2
#define WX218X_VAL_INTERNAL_TRIGGER                         3
#define WX218X_VAL_TTL0                                     111
#define WX218X_VAL_TTL1                                     112
#define WX218X_VAL_TTL2                                     113
#define WX218X_VAL_TTL3                                     114
#define WX218X_VAL_TTL4                                     115
#define WX218X_VAL_TTL5                                     116
#define WX218X_VAL_TTL6                                     117
#define WX218X_VAL_TTL7                                     118
#define WX218X_VAL_ECL0                                     119
#define WX218X_VAL_ECL1                                     120
#define WX218X_VAL_PXI_STAR                                 131
#define WX218X_VAL_RTSI_0                                   141
#define WX218X_VAL_RTSI_1                                   142
#define WX218X_VAL_RTSI_2                                   143
#define WX218X_VAL_RTSI_3                                   144
#define WX218X_VAL_RTSI_4                                   145
#define WX218X_VAL_RTSI_5                                   146
#define WX218X_VAL_RTSI_6                                   147

/*- Defined values for 
	attribute WX218X_ATTR_FUNC_WAVEFORM
	parameter Waveform in function wx218x_ConfigureStandardWaveform */

#define WX218X_VAL_WFM_SINE                                 1
#define WX218X_VAL_WFM_SQUARE                               2
#define WX218X_VAL_WFM_TRIANGLE                             3
#define WX218X_VAL_WFM_RAMP_UP                              4
#define WX218X_VAL_WFM_RAMP_DOWN                            5
#define WX218X_VAL_WFM_DC                                   6

/*- Defined values for 
	attribute WX218X_ATTR_AM_INTERNAL_WAVEFORM
	parameter Waveform in function wx218x_ConfigureAMInternal */

#define WX218X_VAL_AM_INTERNAL_SINE                         1
#define WX218X_VAL_AM_INTERNAL_SQUARE                       2
#define WX218X_VAL_AM_INTERNAL_TRIANGLE                     3
#define WX218X_VAL_AM_INTERNAL_RAMP_UP                      4
#define WX218X_VAL_AM_INTERNAL_RAMP_DOWN                    5

/*- Defined values for 
	attribute WX218X_ATTR_AM_SOURCE
	parameter Source in function wx218x_ConfigureAMSource */

#define WX218X_VAL_AM_INTERNAL                              0
#define WX218X_VAL_AM_EXTERNAL                              1

/*- Defined values for 
	attribute WX218X_ATTR_FM_INTERNAL_WAVEFORM
	parameter Waveform in function wx218x_ConfigureFMInternal */

#define WX218X_VAL_FM_INTERNAL_SINE                         1
#define WX218X_VAL_FM_INTERNAL_SQUARE                       2
#define WX218X_VAL_FM_INTERNAL_TRIANGLE                     3
#define WX218X_VAL_FM_INTERNAL_RAMP_UP                      4
#define WX218X_VAL_FM_INTERNAL_RAMP_DOWN                    5

/*- Defined values for 
	attribute WX218X_ATTR_FM_SOURCE
	parameter Source in function wx218x_ConfigureFMSource */

#define WX218X_VAL_FM_INTERNAL                              0
#define WX218X_VAL_FM_EXTERNAL                              1

/*- Defined values for 
	attribute WX218X_ATTR_ADV_SEQ_MODE */

#define WX218X_VAL_ADVANCE_SEQUENCE_MODE_AUTO               0
#define WX218X_VAL_ADVANCE_SEQUENCE_MODE_ONCE               1
#define WX218X_VAL_ADVANCE_SEQUENCE_MODE_STEP               2

/*- Defined values for 
	attribute WX218X_ATTR_INTERNAL_WAVEFORM_AM
	parameter Waveform in function wx218x_ConfigureInternalAM */

#define WX218X_VAL_AM_INTERNAL_WAVEFORM_SINE                1
#define WX218X_VAL_AM_INTERNAL_WAVEFORM_TRIANGLE            3
#define WX218X_VAL_AM_INTERNAL_WAVEFORM_SQUARE              2
#define WX218X_VAL_AM_INTERNAL_WAVEFORM_RAMP                4

/*- Defined values for 
	attribute WX218X_ATTR_ARB_SOURCE
	parameter Source in function wx218x_ConfigureArbSource */

#define WX218X_VAL_ARBITRARY_SOURCE_BUS                     0
#define WX218X_VAL_ARBITRARY_SOURCE_EXTERNAL                1

/*- Defined values for 
	attribute WX218X_ATTR_ARB_TIMING
	parameter Timing in function wx218x_ConfigureArbTiming */

#define WX218X_VAL_ARBITRARY_TIMING_COHERENT                0
#define WX218X_VAL_ARBITRARY_TIMING_IMMEDIATE               1

/*- Defined values for 
	attribute WX218X_ATTR_ARM_SLOPE
	parameter Slope in function wx218x_ConfigureTrigARMSlope */

#define WX218X_VAL_ARM_SLOPE_POSITIVE                       0
#define WX218X_VAL_ARM_SLOPE_NEGATIVE                       1
#define WX218X_VAL_ARM_SLOPE_EITHER                         2

/*- Defined values for 
	attribute WX218X_ATTR_CARR_WAVEFORM
	parameter Waveform in function wx218x_ConfigureCarrWaveform */

#define WX218X_VAL_CARRIER_MODULATION_WAVEFORM_SINE         0
#define WX218X_VAL_CARRIER_MODULATION_WAVEFORM_TRIANGLE     1
#define WX218X_VAL_CARRIER_MODULATION_WAVEFORM_SQUARE       2

/*- Defined values for 
	attribute WX218X_ATTR_CONTINUOUS_MODE
	parameter ContMode in function wx218x_ConfigureTrigContMode */

#define WX218X_VAL_CONTINUOUS_MODE_SELF                     0
#define WX218X_VAL_CONTINUOUS_MODE_ARMED                    1

/*- Defined values for 
	attribute WX218X_ATTR_CONTINUOUS_SOURCE
	parameter Source in function wx218x_ConfigureTrigContSource */

#define WX218X_VAL_CONTINUOUS_SOURCE_BUS                    0
#define WX218X_VAL_CONTINUOUS_SOURCE_EVENT                  1
#define WX218X_VAL_CONTINUOUS_SOURCE_TRIGGER                2

/*- Defined values for */

#define WX218X_VAL_SEQUENCE_JUMP_TIMING_COHERENT            0
#define WX218X_VAL_SEQUENCE_JUMP_TIMING_IMMEDIATE           1

/*- Defined values for 
	attribute WX218X_ATTR_SEQ_SOURCE
	parameter Source in function wx218x_ConfigureSeqSource */

#define WX218X_VAL_SEQUENCE_SOURCE_BUS                      0
#define WX218X_VAL_SEQUENCE_SOURCE_EXTERNAL                 1

/*- Defined values for 
	attribute WX218X_ATTR_SEQ_TIMING
	parameter Timing in function wx218x_ConfigureSeqTiming */

#define WX218X_VAL_SEQUENCE_TIMING_COHERENT                 0
#define WX218X_VAL_SEQUENCE_TIMING_IMMEDIATE                1

/*- Defined values for 
	attribute WX218X_ATTR_CONFIGURATION_STORE
	parameter Configuration in function wx218x_StateStorageStore */

#define WX218X_VAL_STATE_STORAGE_CONFIGURATION_SETUP        0
#define WX218X_VAL_STATE_STORAGE_CONFIGURATION_WAVE         1
#define WX218X_VAL_STATE_STORAGE_CONFIGURATION_ALL          2

/*- Defined values for 
	attribute WX218X_ATTR_TARGET_RECALL
	attribute WX218X_ATTR_TARGET_STORE
	parameter Target in function wx218x_StateStorageRecall
	parameter Target in function wx218x_StateStorageStore */

#define WX218X_VAL_STATE_STORAGE_TARGETINT                  0
#define WX218X_VAL_STATE_STORAGE_TARGETUSB                  1

/*- Defined values for 
	attribute WX218X_ATTR_DIG_PULSE_LEVEL_CONTROL
	parameter LevelControl in function wx218x_ConfigureDigPulseLevelControl */

#define WX218X_VAL_PULSE_LEVEL_CONTROLHLOW                  0
#define WX218X_VAL_PULSE_LEVEL_CONTROLA_OFFSET              1
#define WX218X_VAL_PULSE_LEVEL_CONTROL_POSITIVE             2
#define WX218X_VAL_PULSE_LEVEL_CONTROL_NEGATIVE             3

/*- Defined values for 
	attribute WX218X_ATTR_DIG_PULSE_MODE
	parameter Mode in function wx218x_ConfigureDigPulseMode */

#define WX218X_VAL_PULSE_MODE_SINGLE                        0
#define WX218X_VAL_PULSE_MODE_DELAYED                       1
#define WX218X_VAL_PULSE_MODE_DOUBLE                        2

/*- Defined values for 
	attribute WX218X_ATTR_DIG_PULSE_POLARITY
	parameter Polarity in function wx218x_ConfigureDigPulsePolarity */

#define WX218X_VAL_PULSE_POLARITY_NORMAL                    0
#define WX218X_VAL_PULSE_POLARITY_COMPLEMENT                1
#define WX218X_VAL_PULSE_POLARITY_INVERTED                  2

/*- Defined values for 
	attribute WX218X_ATTR_DIG_PULSE_TRANSITION
	parameter Transition in function wx218x_ConfigureDigPulseTransition */

#define WX218X_VAL_PULSE_TRANSITION_FAST                    0
#define WX218X_VAL_PULSE_TRANSITION_LINEAR                  1
#define WX218X_VAL_PULSE_TRANSITION_SYMMETRICAL             2

/*- Defined values for 
	attribute WX218X_ATTR_REFERENCE_CLOCK_SOURCE */

#define WX218X_VAL_REFERENCE_CLOCK_SOURCE_INTERNAL          0
#define WX218X_VAL_REFERENCE_CLOCK_SOURCE_EXTERNAL          1

/*- Defined values for 
	attribute WX218X_ATTR_SAMPLE_RATE_SOURCE
	parameter SampleRateSource in function wx218x_ConfigureSampleRateSource */

#define WX218X_VAL_SAMPLE_RATE_SOURCE_INTERNAL              0
#define WX218X_VAL_SAMPLE_RATE_SOURCE_EXTERNAL              1

/*- Defined values for 
	attribute WX218X_ATTR_ADVANCE_MODE
	parameter AdvanceMode in function wx218x_ConfigureAdvanceMode */

#define WX218X_VAL_SEQUENCE_ADVANCE_MODE_AUTO               0
#define WX218X_VAL_SEQUENCE_ADVANCE_MODE_ONCE               1
#define WX218X_VAL_SEQUENCE_ADVANCE_MODE_STEP               2

/*- Defined values for 
	attribute WX218X_ATTR_SEQ_JUMP_EVENT
	parameter JumpEvent in function wx218x_ConfigureSeqJumpEvent */

#define WX218X_VAL_SEQUENCE_JUMP_EVENT_BUS                  0
#define WX218X_VAL_SEQUENCE_JUMP_EVENT_EVENT                1

/*- Defined values for 
	attribute WX218X_ATTR_INTERNAL_WAVEFORM_FM
	parameter Waveform in function wx218x_ConfigureInternalFM */

#define WX218X_VAL_FM_INTERNAL_WAVEFORM_SINE                1
#define WX218X_VAL_FM_INTERNAL_WAVEFORM_TRIANGLE            3
#define WX218X_VAL_FM_INTERNAL_WAVEFORM_SQUARE              2
#define WX218X_VAL_FM_INTERNAL_WAVEFORM_RAMP                4

/*- Defined values for 
	attribute WX218X_ATTR_OPERATION_MODE2 */

#define WX218X_VAL_OPERATION_MODE_CONTINUOUS                0
#define WX218X_VAL_OPERATION_MODE_BURST                     1
#define WX218X_VAL_OPERATION_MODE_TRIGGER                   2
#define WX218X_VAL_OPERATION_MODE_GATE                      3

/*- Defined values for 
	attribute WX218X_ATTR_COUPLE
	parameter Couple in function wx218x_ConfigureCoupleAllCh */

#define WX218X_VAL_OUTPUT_COUPLEDC                          0
#define WX218X_VAL_OUTPUT_COUPLEAC                          1
#define WX218X_VAL_OUTPUT_COUPLEHV                          2

/*- Defined values for 
	attribute WX218X_ATTR_OUTPUT_MODE2 */

#define WX218X_VAL_OUTPUT_MODE_FUNCTION                     0
#define WX218X_VAL_OUTPUT_MODE_ARBITRARY                    1
#define WX218X_VAL_OUTPUT_MODE_SEQUENCE                     2
#define WX218X_VAL_OUTPUT_MODEA_SEQUENCE                    3
#define WX218X_VAL_OUTPUT_MODE_MODULATION                   4
#define WX218X_VAL_OUTPUT_MODED_PULSE                       5
#define WX218X_VAL_OUTPUT_MODE_PATTERN                      6

/*- Defined values for 
	attribute WX218X_ATTR_SYNC_FUNCTION
	parameter Function in function wx218x_ConfigureSyncFunction */

#define WX218X_VAL_OUTPUT_SYNC_FUNCTION_PULSE               0
#define WX218X_VAL_OUTPUT_SYNC_FUNCTIONWCOM                 1

/*- Defined values for 
	attribute WX218X_ATTR_SYNC_SOURCE
	parameter Source in function wx218x_ConfigureSyncSource */

#define WX218X_VAL_OUTPUT_SYNC_SOURCECH1                    0
#define WX218X_VAL_OUTPUT_SYNC_SOURCECH2                    1
#define WX218X_VAL_OUTPUT_SYNC_SOURCECH3                    2
#define WX218X_VAL_OUTPUT_SYNC_SOURCECH4                    3

/*- Defined values for 
	attribute WX218X_ATTR_DIG_PULSE_CONFIGURE */

#define WX218X_VAL_PULSE_CONFIGURE_TIME                     0
#define WX218X_VAL_PULSE_CONFIGURE_PERCENT                  1

/*- Defined values for 
	attribute WX218X_ATTR_SWEEP_DIRECTION
	parameter Direction in function wx218x_ConfigureSweepDirection */

#define WX218X_VAL_SWEEP_DIRECTION_UP                       0
#define WX218X_VAL_SWEEP_DIRECTION_DOWN                     1

/*- Defined values for 
	attribute WX218X_ATTR_SWEEP_SPACING
	parameter Spacing in function wx218x_ConfigureSweepSpacing */

#define WX218X_VAL_SWEEP_SPACING_LIN                        0
#define WX218X_VAL_SWEEP_SPACING_LOG                        1

/*- Defined values for 
	attribute WX218X_ATTR_TRIG_TRIGGER_MODE
	parameter Mode in function wx218x_ConfigureTriggerMode */

#define WX218X_VAL_TRIGGER_MODE_NORMAL                      0
#define WX218X_VAL_TRIGGER_MODE_OVERRIDE                    1

/*- Defined values for 
	attribute WX218X_ATTR_TRIG_SLOPE
	parameter Slope in function wx218x_ConfigureTrigSlope */

#define WX218X_VAL_TRIGGER_SLOPE_POSITIVE                   0
#define WX218X_VAL_TRIGGER_SLOPE_NEGATIVE                   1
#define WX218X_VAL_TRIGGER_SLOPE_EITHER                     2

/*- Defined values for 
	attribute WX218X_ATTR_TRIG_SOURCE
	parameter Source in function wx218x_ConfigureTrigSource */

#define WX218X_VAL_TRIGGER_SOURCE_EXTERNAL                  1
#define WX218X_VAL_TRIGGER_SOURCE_SOFTWARE                  2
#define WX218X_VAL_TRIGGER_SOURCE_TIMER                     4
#define WX218X_VAL_TRIGGER_SOURCE_EVENT                     5

/*- Defined values for 
	attribute WX218X_ATTR_TRIG_TIMER_MODE
	parameter TimerMode in function wx218x_ConfigureTrigTimerMode */

#define WX218X_VAL_TRIGGER_TIMER_MODE_TIME                  0
#define WX218X_VAL_TRIGGER_TIMER_MODE_DELAY                 1

/*- Defined values for 
	attribute WX218X_ATTR_XINSTR_MODE
	parameter Mode in function wx218x_ConfigureXInstrumentMode */

#define WX218X_VAL_X_INSTRUMENT_MODE_MASTER                 0
#define WX218X_VAL_X_INSTRUMENT_MODE_SLAVE                  1

/*- Defined values for 
	parameter Control in function wx218x_GetMarkerControl
	parameter Control in function wx218x_SetMarkerControl
	parameter Control in function wx218x_ConfigureMarkerControl */

#define WX218X_VAL_MARKER_CONTROL_LOCAL                     0
#define WX218X_VAL_MARKER_CONTROL_REMOTE                    1

/*- Defined values for 
	attribute WX218X_ATTR_CONFIGURATION_RECALL */

#define WX218X_VAL_STATE_STORAGE_RECAL_CONFIGURATION_SETUP  0
#define WX218X_VAL_STATE_STORAGE_RECAL_CONFIGURATION_WAVE   1
#define WX218X_VAL_STATE_STORAGE_RECAL_CONFIGURATION_ALL    2
#define WX218X_VAL_STATE_STORAGE_RECAL_CONFIGURATION_EMPTY  3

/*- Defined values for 
	attribute WX218X_ATTR_WAVEFORM
	parameter Waveform in function wx218x_Configure */

#define WX218X_VAL_WAVEFORM_SINE                            1
#define WX218X_VAL_WAVEFORM_SQUARE                          2
#define WX218X_VAL_WAVEFORM_TRIANGLE                        3
#define WX218X_VAL_WAVEFORM_RAMP_UP                         4
#define WX218X_VAL_WAVEFORM_RAMP_DOWN                       5
#define WX218X_VAL_WAVEFORMDC                               6
#define WX218X_VAL_WAVEFORM_SINC                            7
#define WX218X_VAL_WAVEFORM_GAUSSIAN                        8
#define WX218X_VAL_WAVEFORM_EXPONENTIAL                     9
#define WX218X_VAL_WAVEFORM_NOISE                           10

/*- Defined values for */

#define WX218X_VAL_PATTERN_TRANSITION_TYPE_FAST             0
#define WX218X_VAL_PATTERN_TRANSITION_TYPE_LINEAR           1

/*- Defined values for 
	attribute WX218X_ATTR_PATTERN_COMPOSER_RESOLUTION_TYPE
	parameter ResType in function wx218x_ConfigurePatternCompResType */

#define WX218X_VAL_PATTERN_RES_TYPE_AUTO                    0
#define WX218X_VAL_PATTERN_RES_TYPE_USER                    1

/*- Defined values for 
	attribute WX218X_ATTR_PRESTEP
	parameter Prestep in function wx218x_ConfigureSeqPrestep */

#define WX218X_VAL_SEQUENCE_PRESTEP_WAVE                    0
#define WX218X_VAL_SEQUENCE_PRESTEPDC                       1

/*- Defined values for 
	attribute WX218X_ATTR_DIG_DELAY_MODE
	parameter DelayMode in function wx218x_ConfigureDigPattDelayMode */

#define WX218X_VAL_DIG_PATTERN_DELAY_MODE_COMMON            0
#define WX218X_VAL_DIG_PATTERN_DELAY_MODE_SEPARATE          1

/*- Defined values for 
	attribute WX218X_ATTR_DIG_LEVEL_MODE
	parameter LevelMode in function wx218x_ConfigureDigPattLevelMode */

#define WX218X_VAL_DIG_PATTERN_LEVEL_MODE_COMMON            0
#define WX218X_VAL_DIG_PATTERN_LEVEL_MODE_SEPARATE          1

/*- Defined values for 
	attribute WX218X_ATTR_CHIRP_FREQ_DIRECTION
	parameter FreqDirection in function wx218x_ConfigureChirpFreqDirection */

#define WX218X_VAL_CHIRP_FREQ_DIRECTION_UP                  0
#define WX218X_VAL_CHIRP_FREQ_DIRECTION_DOWN                1

/*- Defined values for 
	attribute WX218X_ATTR_CHIRP_FREQ_SPACING
	parameter FreqSpacing in function wx218x_ConfigureChirpFreqSpacing */

#define WX218X_VAL_CHIRP_FREQ_SPACING_LINEAR                0
#define WX218X_VAL_CHIRP_FREQ_SPACING_LOG                   1

/*- Defined values for 
	attribute WX218X_ATTR_CHIRP_AMPL_DIRECTION
	parameter AmplDirection in function wx218x_ConfigureChirpAmplDirection */

#define WX218X_VAL_CHIRP_AMPLITUDE_DIRECTION_UP             0
#define WX218X_VAL_CHIRP_AMPLITUDE_DIRECTION_DOWN           1

/*- Defined values for 
	attribute WX218X_ATTR_CHIRP_AMPL_SPACING
	parameter AmplSpacing in function wx218x_ConfigureChirpAmplSpacing */

#define WX218X_VAL_CHIRP_AMPL_SPACING_LIN                   0
#define WX218X_VAL_CHIRP_AMPL_SPACING_LOG                   1

/*- Defined values for 
	attribute WX218X_ATTR_FHOP_DWELL_MODE
	parameter DwellMode in function wx218x_ConfigureFHOPDwellMode */

#define WX218X_VAL_FHOP_DWELL_MODE_FIXED                    0
#define WX218X_VAL_FHOP_DWELL_MODE_VARIABLE                 1

/*- Defined values for 
	attribute WX218X_ATTR_DWELL_MODE
	parameter DwellMode in function wx218x_ConfigureAHOPDwellMode */

#define WX218X_VAL_AHOP_DWELL_MODE_FIXED                    0
#define WX218X_VAL_AHOP_DWELL_MODE_VARIABLE                 1

/*- Defined values for 
	attribute WX218X_ATTR_PATTERN_MODE
	parameter Mode in function wx218x_ConfigurePatternMode */

#define WX218X_VAL_PATTERN_MODE_COMPOSER                    0
#define WX218X_VAL_PATTERN_MODE_PREDEFINED                  1

/*- Defined values for 
	attribute WX218X_ATTR_PATTERN_PREDEFINED_TYPE
	parameter Type in function wx218x_ConfigurePatternPredType */

#define WX218X_VAL_PATTERN_PREDEFINED_TYPEPRBS7             0
#define WX218X_VAL_PATTERN_PREDEFINED_TYPEPRBS9             1
#define WX218X_VAL_PATTERN_PREDEFINED_TYPEPRBS11            2
#define WX218X_VAL_PATTERN_PREDEFINED_TYPEPRBS15            3
#define WX218X_VAL_PATTERN_PREDEFINED_TYPEPRBS23            4
#define WX218X_VAL_PATTERN_PREDEFINED_TYPEPRBS31            5
#define WX218X_VAL_PATTERN_PREDEFINED_TYPEUSER              6

/*- Defined values for 
	attribute WX218X_ATTR_PATTERN_COMPOSER_TRANSITION_TYPE
	parameter TransitionType in function wx218x_ConfigurePatternCompTransType */

#define WX218X_VAL_PATTERN_COMPOSER_TRANSITION_TYPE_FAST    0
#define WX218X_VAL_PATTERN_COMPOSER_TRANSITION_TYPE_LINEAR  1

/*- Defined values for 
	attribute WX218X_ATTR_TYPE
	parameter Type in function wx218x_ConfigurePSKType */

#define WX218X_VAL_PSK_TYPEPSK                              0
#define WX218X_VAL_PSK_TYPEBPSK                             1
#define WX218X_VAL_PSK_TYPEQPSK                             2
#define WX218X_VAL_PSK_TYPEOQPSK                            3
#define WX218X_VAL_PSK_TYPEDQPSK                            4
#define WX218X_VAL_PSK_TYPE8PSK                             5
#define WX218X_VAL_PSK_TYPE16PSK                            6
#define WX218X_VAL_PSK_TYPEUSER                             7

/*- Defined values for 
	attribute WX218X_ATTR_QAM_TYPE
	parameter Type in function wx218x_ConfigureQAMType */

#define WX218X_VAL_QAM_TYPE16QAM                            0
#define WX218X_VAL_QAM_TYPE64QAM                            1
#define WX218X_VAL_QAM_TYPE256QAM                           2
#define WX218X_VAL_QAM_TYPEUSER                             3

/*- Defined values for 
	attribute WX218X_ATTR_FORMAT_DATA
	parameter FormatData in function wx218x_ConfigureDigPattFormatData */

#define WX218X_VAL_DIG_FORMAT_DATA_SEPARATE                 0
#define WX218X_VAL_DIG_FORMAT_DATA_COMMON                   1

/*- Defined values for 
	attribute WX218X_ATTR_ARB_RESOLUTION
	parameter ArbResolution in function wx218x_ConfigureDigPattArbResolution */

#define WX218X_VAL_ARBITRARY_RESOLUTION1P                   0
#define WX218X_VAL_ARBITRARY_RESOLUTION2P                   1

/*- Defined values for 
	attribute WX218X_ATTR_MARKER_SOURCE
	parameter Source in function wx218x_ConfigureMarkerSource */

#define WX218X_VAL_MARKER_SOURCE_WAVE                       0
#define WX218X_VAL_MARKER_SOURCE_USER                       1

/*- Defined values for 
	attribute WX218X_ATTR_TRACE_MODE
	parameter TraceMode in function wx218x_ConfigureArbWaveTraceMode */

#define WX218X_VAL_TRACE_MODE_SINGLE                        0
#define WX218X_VAL_TRACE_MODE_DUPLICATE                     1
#define WX218X_VAL_TRACE_MODE_ZERO                          2
#define WX218X_VAL_TRACE_MODE_COMBINE                       3

/*- Defined values for 
	attribute WX218X_ATTR_MODE_ADV
	parameter ModeAdv in function wx218x_ConfigureXInstrumentModeAdv */

#define WX218X_VAL_X_INSTRUMENT_MODE_ADV_MASTER             0
#define WX218X_VAL_X_INSTRUMENT_MODE_ADV_SLAVE              1
#define WX218X_VAL_X_INSTRUMENT_MODE_ADVM_SLAVE             2

/*- Defined values for 
	attribute WX218X_ATTR_FREQ_RAST_DIVIDER
	parameter Divider in function wx218x_ConfigureFreqRastDivider */

#define WX218X_VAL_FREQ_DIVIDER_DIV1                        0
#define WX218X_VAL_FREQ_DIVIDER_DIV2                        1
#define WX218X_VAL_FREQ_DIVIDER_DIV4                        2
#define WX218X_VAL_FREQ_DIVIDER_DIV8                        3
#define WX218X_VAL_FREQ_DIVIDER_DIV16                       4

/*- Defined values for 
	attribute WX218X_ATTR_EXT_FREQUENCY
	parameter ExtFrequency in function wx218x_ConfigureExtFrequency */

#define WX218X_VAL_EXT_FREQUENCY10M                         0
#define WX218X_VAL_EXT_FREQUENCY20M                         1
#define WX218X_VAL_EXT_FREQUENCY50M                         2
#define WX218X_VAL_EXT_FREQUENCY100M                        3

/*- Defined values for 
	attribute WX218X_ATTR_DIG_CLOCK
	parameter DigClock in function wx218x_ConfigureDigClock */

#define WX218X_VAL_DIGITAL_CLOCKSDR                         0
#define WX218X_VAL_DIGITAL_CLOCKDDR                         1

/*- Defined values for 
	attribute WX218X_ATTR_DIG_PORT
	parameter DigPort in function wx218x_ConfigureDigPattDigPort */

#define WX218X_VAL_DIG_PORT_PORT1                           0
#define WX218X_VAL_DIG_PORT_PORT2                           1
#define WX218X_VAL_DIG_PORT_PORT_BOTH                       2

/*- Defined values for 
	attribute WX218X_ATTR_DOWNLOAD_RECORD
	parameter DownloadRecord in function wx218x_ConfigureDownloadRecord */

#define WX218X_VAL_ARB_DOWNLOAD_RECORD_ENABLE               0
#define WX218X_VAL_ARB_DOWNLOAD_RECORD_DISABLE              1

/*- Defined values for 
	attribute WX218X_ATTR_TRIGGER_IMPEDANCE
	parameter TriggerImpedance in function wx218x_ConfigureTriggerImpedance */

#define WX218X_VAL_TRIGGER_IMPEDANCE50                      0
#define WX218X_VAL_TRIGGER_IMPEDANCE10K                     1


/**************************************************************************** 
 *---------------- Instrument Driver Function Declarations -----------------* 
 ****************************************************************************/

/*- WX218x */

ViStatus _VI_FUNC wx218x_init ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViSession* Vi );
ViStatus _VI_FUNC wx218x_close ( ViSession Vi );
ViStatus _VI_FUNC wx218x_InitWithOptions ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViConstString OptionsString, ViSession* Vi );

/*- Utility */

ViStatus _VI_FUNC wx218x_revision_query ( ViSession Vi, ViChar DriverRev[], ViChar InstrRev[] );
ViStatus _VI_FUNC wx218x_error_message ( ViSession Vi, ViStatus ErrorCode, ViChar ErrorMessage[] );
ViStatus _VI_FUNC wx218x_GetError ( ViSession Vi, ViStatus* ErrorCode, ViInt32 ErrorDescriptionBufferSize, ViChar ErrorDescription[] );
ViStatus _VI_FUNC wx218x_ClearError ( ViSession Vi );
ViStatus _VI_FUNC wx218x_ClearInterchangeWarnings ( ViSession Vi );
ViStatus _VI_FUNC wx218x_GetNextCoercionRecord ( ViSession Vi, ViInt32 CoercionRecordBufferSize, ViChar CoercionRecord[] );
ViStatus _VI_FUNC wx218x_GetNextInterchangeWarning ( ViSession Vi, ViInt32 InterchangeWarningBufferSize, ViChar InterchangeWarning[] );
ViStatus _VI_FUNC wx218x_InvalidateAllAttributes ( ViSession Vi );
ViStatus _VI_FUNC wx218x_ResetInterchangeCheck ( ViSession Vi );
ViStatus _VI_FUNC wx218x_Disable ( ViSession Vi );
ViStatus _VI_FUNC wx218x_error_query ( ViSession Vi, ViInt32* ErrorCode, ViChar ErrorMessage[] );
ViStatus _VI_FUNC wx218x_LockSession ( ViSession Vi, ViBoolean* CallerHasLock );
ViStatus _VI_FUNC wx218x_reset ( ViSession Vi );
ViStatus _VI_FUNC wx218x_ResetWithDefaults ( ViSession Vi );
ViStatus _VI_FUNC wx218x_self_test ( ViSession Vi, ViInt16* TestResult, ViChar TestMessage[] );
ViStatus _VI_FUNC wx218x_UnlockSession ( ViSession Vi, ViBoolean* CallerHasLock );
ViStatus _VI_FUNC wx218x_GetChannelName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] );

/*- Attribute Accessors */

ViStatus _VI_FUNC wx218x_GetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_GetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_GetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_GetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession* AttributeValue );
ViStatus _VI_FUNC wx218x_GetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC wx218x_SetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValue );
ViStatus _VI_FUNC wx218x_SetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64 AttributeValue );
ViStatus _VI_FUNC wx218x_SetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean AttributeValue );
ViStatus _VI_FUNC wx218x_SetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession AttributeValue );
ViStatus _VI_FUNC wx218x_SetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViConstString AttributeValue );

/*- General */

ViStatus _VI_FUNC wx218x_ConfigureOperationMode ( ViSession Vi, ViConstString ChannelName, ViInt32 OperationMode );
ViStatus _VI_FUNC wx218x_ConfigureOutputEnabled ( ViSession Vi, ViConstString ChannelName, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureOutputImpedance ( ViSession Vi, ViConstString ChannelName, ViReal64 Impedance );
ViStatus _VI_FUNC wx218x_ConfigureOutputMode ( ViSession Vi, ViInt32 OutputMode );
ViStatus _VI_FUNC wx218x_ConfigureRefClockSource ( ViSession Vi, ViInt32 Source );

/*- Arbitrary Waveform */

ViStatus _VI_FUNC wx218x_ConfigureSampleRate ( ViSession Vi, ViReal64 SampleRate );
ViStatus _VI_FUNC wx218x_QueryArbWfmCapabilities ( ViSession Vi, ViInt32* MaxNumWfms, ViInt32* WfmQuantum, ViInt32* MinWfmSize, ViInt32* MaxWfmSize );
ViStatus _VI_FUNC wx218x_ClearArbWaveform ( ViSession Vi, ViInt32 Handle );
ViStatus _VI_FUNC wx218x_ConfigureArbWaveform ( ViSession Vi, ViConstString ChannelName, ViInt32 Handle, ViReal64 Gain, ViReal64 Offset );
ViStatus _VI_FUNC wx218x_CreateArbWaveform ( ViSession Vi, ViInt32 Size, ViReal64 Data[], ViInt32* Handle );

/*- Arbitrary Waveform Frequency */

ViStatus _VI_FUNC wx218x_ConfigureArbFrequency ( ViSession Vi, ViConstString ChannelName, ViReal64 Frequency );

/*- Arbitrary Sequence */

ViStatus _VI_FUNC wx218x_QueryArbSeqCapabilities ( ViSession Vi, ViInt32* MaxNumSeqs, ViInt32* MinSeqLength, ViInt32* MaxSeqLength, ViInt32* MaxLoopCount );
ViStatus _VI_FUNC wx218x_ClearArbMemory ( ViSession Vi );
ViStatus _VI_FUNC wx218x_ClearArbSequence ( ViSession Vi, ViInt32 Handle );
ViStatus _VI_FUNC wx218x_ConfigureArbSequence ( ViSession Vi, ViConstString ChannelName, ViInt32 Handle, ViReal64 Gain, ViReal64 Offset );
ViStatus _VI_FUNC wx218x_CreateArbSequence ( ViSession Vi, ViInt32 Length, ViInt32 WfmHandle[], ViInt32 LoopCount[], ViInt32* Handle );

/*- Trigger */

ViStatus _VI_FUNC wx218x_ConfigureTriggerSource ( ViSession Vi, ViConstString ChannelName, ViInt32 Source );

/*- Internal Trigger */

ViStatus _VI_FUNC wx218x_ConfigureInternalTriggerRate ( ViSession Vi, ViReal64 Rate );

/*- Burst */

ViStatus _VI_FUNC wx218x_ConfigureBurstCount ( ViSession Vi, ViConstString ChannelName, ViInt32 Count );

/*- Amplitude Modulation */

ViStatus _VI_FUNC wx218x_ConfigureAMEnabled ( ViSession Vi, ViConstString ChannelName, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureAMSource ( ViSession Vi, ViConstString ChannelName, ViInt32 Source );
ViStatus _VI_FUNC wx218x_ConfigureAMInternal ( ViSession Vi, ViReal64 Depth, ViInt32 Waveform, ViReal64 Frequency );

/*- Frequency Modulation */

ViStatus _VI_FUNC wx218x_ConfigureFMEnabled ( ViSession Vi, ViConstString ChannelName, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureFMSource ( ViSession Vi, ViConstString ChannelName, ViInt32 Source );
ViStatus _VI_FUNC wx218x_ConfigureFMInternal ( ViSession Vi, ViReal64 Deviation, ViInt32 Waveform, ViReal64 Frequency );

/*- Standard Waveform */

ViStatus _VI_FUNC wx218x_ConfigureStandardWaveform ( ViSession Vi, ViConstString ChannelName, ViInt32 Waveform, ViReal64 Amplitude, ViReal64 DCOffset, ViReal64 Frequency, ViReal64 StartPhase );

/*- Action */

ViStatus _VI_FUNC wx218x_AbortGeneration ( ViSession Vi );
ViStatus _VI_FUNC wx218x_InitiateGeneration ( ViSession Vi );
ViStatus _VI_FUNC wx218x_SendSoftwareTrigger ( ViSession Vi );

/*- Instrument Specific */

ViStatus _VI_FUNC wx218x_AbortGeneration2 ( ViSession Vi );
ViStatus _VI_FUNC wx218x_InitiateGeneration2 ( ViSession Vi );
ViStatus _VI_FUNC wx218x_SetActiveChannel ( ViSession Vi, ViInt32 ChNameBufferSize, ViConstString ChName );
ViStatus _VI_FUNC wx218x_SendCmd ( ViSession Vi, ViInt32 CommandBufferSize, ViConstString Command );
ViStatus _VI_FUNC wx218x_ReadQuery ( ViSession Vi, ViInt32 SendBuffBufferSize, ViConstString SendBuff, ViInt32 ReadBuffBufferSize, ViChar ReadBuff[] );

/*- AM */

ViStatus _VI_FUNC wx218x_ConfigureInternalAM ( ViSession Vi, ViReal64 Depth, ViInt32 Waveform, ViReal64 Frequency );
ViStatus _VI_FUNC wx218x_ConfigureAMEnabled2 ( ViSession Vi, ViConstString Channel, ViBoolean Enabled );

/*- Output */

ViStatus _VI_FUNC wx218x_ConfigureRefExtFrequency ( ViSession Vi, ViConstString Channel, ViReal64 ExtFreq );
ViStatus _VI_FUNC wx218x_ConfigureExtFrequency ( ViSession Vi, ViConstString Channel, ViInt32 ExtFrequency );
ViStatus _VI_FUNC wx218x_ConfigureOutputStateAllCh ( ViSession Vi, ViBoolean State );
ViStatus _VI_FUNC wx218x_ConfigureCoupleAllCh ( ViSession Vi, ViInt32 Couple );

/*- Sync */

ViStatus _VI_FUNC wx218x_ConfigureSyncEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureSyncFunction ( ViSession Vi, ViConstString Channel, ViInt32 Function );
ViStatus _VI_FUNC wx218x_ConfigureSyncPosition ( ViSession Vi, ViConstString Channel, ViInt32 Position );
ViStatus _VI_FUNC wx218x_ConfigureSyncSource ( ViSession Vi, ViInt32 Source );
ViStatus _VI_FUNC wx218x_ConfigureSyncWidth ( ViSession Vi, ViConstString Channel, ViInt32 Width );

/*- StandardWaveform */

ViStatus _VI_FUNC wx218x_ConfigureRampWaveform ( ViSession Vi, ViConstString Channel, ViReal64 Delay, ViReal64 RiseTime, ViReal64 FallTime );
ViStatus _VI_FUNC wx218x_SetAmplitudeMax ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetAmplitudeMin ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetDCOffsetMax ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetDCOffsetMin ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetFrequencyMax ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetFrequencyMin ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetPowerMax ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetPowerMin ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_Configure ( ViSession Vi, ViConstString Channel, ViInt32 Waveform, ViReal64 Amplitude, ViReal64 DCOffset, ViReal64 Frequency, ViReal64 StartPhase );
ViStatus _VI_FUNC wx218x_ConfigureDCLevel ( ViSession Vi, ViConstString Channel, ViReal64 DcLevel );
ViStatus _VI_FUNC wx218x_ConfigureDutyCycle ( ViSession Vi, ViConstString Channel, ViReal64 DutyCycle );
ViStatus _VI_FUNC wx218x_ConfigureExponenent ( ViSession Vi, ViConstString Channel, ViInt32 Exponent );
ViStatus _VI_FUNC wx218x_ConfigureGauss ( ViSession Vi, ViConstString Channel, ViInt32 Gauss );
ViStatus _VI_FUNC wx218x_ConfigureHvAmplitude ( ViSession Vi, ViConstString Channel, ViReal64 HvAmplitude );
ViStatus _VI_FUNC wx218x_ConfigurePower ( ViSession Vi, ViConstString Channel, ViReal64 Power );
ViStatus _VI_FUNC wx218x_ConfigureSincNCycles ( ViSession Vi, ViConstString Channel, ViInt32 Cycles );
ViStatus _VI_FUNC wx218x_ConfigureAmplitudeAllCh ( ViSession Vi, ViReal64 Amplitude );
ViStatus _VI_FUNC wx218x_ConfigureHVAmplAllCh ( ViSession Vi, ViReal64 HVAmplitude );
ViStatus _VI_FUNC wx218x_ConfigureOffsetAllCh ( ViSession Vi, ViReal64 Offset );

/*- Arbitrary */

ViStatus _VI_FUNC wx218x_ClearMemory ( ViSession Vi );
ViStatus _VI_FUNC wx218x_SetSampleRateMax ( ViSession Vi );
ViStatus _VI_FUNC wx218x_SetSampleRateMin ( ViSession Vi );
ViStatus _VI_FUNC wx218x_ConfigureClockDivider ( ViSession Vi, ViConstString Channel, ViInt32 ClockDivider );
ViStatus _VI_FUNC wx218x_ConfigureSampleRateSource ( ViSession Vi, ViConstString Channel, ViInt32 SampleRateSource );
ViStatus _VI_FUNC wx218x_ConfigureArbSource ( ViSession Vi, ViConstString Channel, ViInt32 Source );
ViStatus _VI_FUNC wx218x_ConfigureArbTiming ( ViSession Vi, ViConstString Channel, ViInt32 Timing );
ViStatus _VI_FUNC wx218x_ConfigureFreqRastDivider ( ViSession Vi, ViConstString Channel, ViInt32 Divider );
ViStatus _VI_FUNC wx218x_ConfigureArbGain ( ViSession Vi, ViConstString Channel, ViReal64 Gain );
ViStatus _VI_FUNC wx218x_ConfigureArbOffset ( ViSession Vi, ViConstString Channel, ViReal64 Offset );
ViStatus _VI_FUNC wx218x_ConfigureArbSampleRate ( ViSession Vi, ViReal64 SampleRate );

/*- Waveform */

ViStatus _VI_FUNC wx218x_ClearArbitraryWaveform ( ViSession Vi, ViInt32 Handle );
ViStatus _VI_FUNC wx218x_ConfigureArbitraryWaveform ( ViSession Vi, ViConstString Channel, ViInt32 Handle, ViReal64 Gain, ViReal64 Offset );
ViStatus _VI_FUNC wx218x_CreateArbitraryWaveform ( ViSession Vi, ViInt32 DataBufferSize, ViReal64 Data[], ViInt32* Val );
ViStatus _VI_FUNC wx218x_LoadArbWfmFromFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32* Val );
ViStatus _VI_FUNC wx218x_CreateArbitraryWaveformCustom ( ViSession Vi, ViInt32 DataBufferSize, ViInt16 Data[], ViInt32* Val );
ViStatus _VI_FUNC wx218x_LoadArbWfmFromFileAdv ( ViSession Vi, ViConstString Channel, ViInt32 FileName1BufferSize, ViConstString FileName1, ViInt32 FileName2BufferSize, ViConstString FileName2, ViInt32* Handle1, ViInt32* Handle2 );
ViStatus _VI_FUNC wx218x_CreateCustomAdv ( ViSession Vi, ViInt32 Data1BufferSize, ViInt16 Data1[], ViInt32 Data2BufferSize, ViInt16 Data2[], ViInt32* Handle1, ViInt32* Handle2 );
ViStatus _VI_FUNC wx218x_SetCoupleActiveSegment ( ViSession Vi, ViInt32 SegNum1, ViInt32 SegNum2 );
ViStatus _VI_FUNC wx218x_SetActiveSegment ( ViSession Vi, ViConstString Channel, ViInt32 SegNum );
ViStatus _VI_FUNC wx218x_ConfigureArbWaveTraceMode ( ViSession Vi, ViInt32 TraceMode );
ViStatus _VI_FUNC wx218x_LoadBinaryArbWfmFromFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32* Val );
ViStatus _VI_FUNC wx218x_LoadBinaryArbWfmFromFileAdv ( ViSession Vi, ViConstString Channel, ViInt32 FileName1BufferSize, ViConstString FileName1, ViInt32 FileName2BufferSize, ViConstString FileName2, ViInt32* Handle1, ViInt32* Handle2 );
ViStatus _VI_FUNC wx218x_LoadAsciiArbWfmFromFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32* Val );
ViStatus _VI_FUNC wx218x_LoadAsciiArbWfmFromFileAdv ( ViSession Vi, ViConstString Channel, ViInt32 FileName1BufferSize, ViConstString FileName1, ViInt32 FileName2BufferSize, ViConstString FileName2, ViInt32* Handle1, ViInt32* Handle2 );
ViStatus _VI_FUNC wx218x_ConfigureDownloadRecord ( ViSession Vi, ViInt32 DownloadRecord );
ViStatus _VI_FUNC wx218x_LoadCSVFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32* Val );
ViStatus _VI_FUNC wx218x_LoadCSVFileAdv ( ViSession Vi, ViConstString Channel, ViInt32 FileName1BufferSize, ViConstString FileName1, ViInt32 FileName2BufferSize, ViConstString FileName2, ViInt32* Handle1, ViInt32* Handle2 );

/*- Sequence */

ViStatus _VI_FUNC wx218x_ClearArbitrarySequence ( ViSession Vi, ViInt32 Handle );
ViStatus _VI_FUNC wx218x_ConfigureArbitrarySequence ( ViSession Vi, ViConstString Channel, ViInt32 Handle, ViReal64 Gain, ViReal64 Offset );
ViStatus _VI_FUNC wx218x_CreateArbitrarySequence ( ViSession Vi, ViInt32 WfmHandleBufferSize, ViInt32 WfmHandle[], ViInt32 LoopCountBufferSize, ViInt32 LoopCount[], ViInt32* Val );
ViStatus _VI_FUNC wx218x_CreateSequenceAdv ( ViSession Vi, ViInt32 WfmHandleBufferSize, ViInt32 WfmHandle[], ViInt32 LoopCountBufferSize, ViInt32 LoopCount[], ViInt32 JumpFlagBufferSize, ViChar JumpFlag[], ViInt32* Val );
ViStatus _VI_FUNC wx218x_SetCoupleActiveSequence ( ViSession Vi, ViInt32 SeqNum1, ViInt32 SeqNum2 );
ViStatus _VI_FUNC wx218x_SetActiveSequence ( ViSession Vi, ViConstString Channel, ViInt32 SeqNum );
ViStatus _VI_FUNC wx218x_CreateSequenceAdv1 ( ViSession Vi, ViInt32 WfmHandleBufferSize, ViInt32 WfmHandle[], ViInt32 LoopCountBufferSize, ViInt32 LoopCount[], ViInt32 JumpFlagBufferSize, ViInt32 JumpFlag[], ViInt32* Val );
ViStatus _VI_FUNC wx218x_ConfigureAdvanceMode ( ViSession Vi, ViConstString Channel, ViInt32 AdvanceMode );
ViStatus _VI_FUNC wx218x_ConfigureSeqJumpEvent ( ViSession Vi, ViConstString Channel, ViInt32 JumpEvent );
ViStatus _VI_FUNC wx218x_ConfigureSeqPrestep ( ViSession Vi, ViConstString Channel, ViInt32 Prestep );
ViStatus _VI_FUNC wx218x_ConfigureSeqSource ( ViSession Vi, ViConstString Channel, ViInt32 Source );
ViStatus _VI_FUNC wx218x_ConfigureSeqSyncLock ( ViSession Vi, ViConstString Channel, ViInt32 SyncLock );
ViStatus _VI_FUNC wx218x_ConfigureSeqTiming ( ViSession Vi, ViConstString Channel, ViInt32 Timing );
ViStatus _VI_FUNC wx218x_ConfigureOnceCount ( ViSession Vi, ViConstString Channel, ViInt32 Count );

/*- AdvanceSequence */

ViStatus _VI_FUNC wx218x_CreateAdvSequence ( ViSession Vi, ViInt32 SeqHandleBufferSize, ViInt32 SeqHandle[], ViInt32 LoopCountBufferSize, ViInt32 LoopCount[], ViInt32 JumpFlagBufferSize, ViChar JumpFlag[] );
ViStatus _VI_FUNC wx218x_DeleteAdvSequence ( ViSession Vi );
ViStatus _VI_FUNC wx218x_CreateAdvSequence1 ( ViSession Vi, ViInt32 SeqHandleBufferSize, ViInt32 SeqHandle[], ViInt32 LoopCountBufferSize, ViInt32 LoopCount[], ViInt32 JumpFlagBufferSize, ViInt32 JumpFlag[] );
ViStatus _VI_FUNC wx218x_ConfigureOnceCount2 ( ViSession Vi, ViConstString Channel, ViInt32 Count );

/*- CarrierModulation */

ViStatus _VI_FUNC wx218x_ConfigureCarrFreq ( ViSession Vi, ViConstString Channel, ViReal64 Freq );
ViStatus _VI_FUNC wx218x_ConfigureCarrWaveform ( ViSession Vi, ViConstString Channel, ViInt32 Waveform );

/*- Couple */

ViStatus _VI_FUNC wx218x_ConfigureCoupleEnabled ( ViSession Vi, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureCoupleOffset ( ViSession Vi, ViConstString Channel, ViInt32 Offset );
ViStatus _VI_FUNC wx218x_ConfigureCoupleSkew ( ViSession Vi, ViReal64 Skew );

/*- FM */

ViStatus _VI_FUNC wx218x_ConfigureInternalFM ( ViSession Vi, ViReal64 Deviation, ViInt32 Waveform, ViReal64 Frequency );
ViStatus _VI_FUNC wx218x_ConfigureFMEnabled2 ( ViSession Vi, ViConstString Channel, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureFMMarker ( ViSession Vi, ViConstString Channel, ViReal64 Marker );

/*- Markers */

ViStatus _VI_FUNC wx218x_GetMarkerDelay ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* Delay );
ViStatus _VI_FUNC wx218x_SetMarkerDelay ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 Delay );
ViStatus _VI_FUNC wx218x_GetMarkerEnabled ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViBoolean* Enabled );
ViStatus _VI_FUNC wx218x_SetMarkerEnabled ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_GetMarkerHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* HighLevel );
ViStatus _VI_FUNC wx218x_SetMarkerHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 HighLevel );
ViStatus _VI_FUNC wx218x_GetMarkerLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* LowLevel );
ViStatus _VI_FUNC wx218x_SetMarkerLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 LowLevel );
ViStatus _VI_FUNC wx218x_GetMarkerPosition ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32* Position );
ViStatus _VI_FUNC wx218x_SetMarkerPosition ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Position );
ViStatus _VI_FUNC wx218x_GetMarkerWidth ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32* Width );
ViStatus _VI_FUNC wx218x_SetMarkerWidth ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Width );
ViStatus _VI_FUNC wx218x_GetMarkerControl ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32* Control );
ViStatus _VI_FUNC wx218x_SetMarkerControl ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Control );
ViStatus _VI_FUNC wx218x_MarkerRefresh ( ViSession Vi, ViConstString Channel, ViInt32 Index );
ViStatus _VI_FUNC wx218x_ConfigureMarkerControl ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Control );
ViStatus _VI_FUNC wx218x_ConfigureMarkerDelay ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 Delay );
ViStatus _VI_FUNC wx218x_ConfigureMarkerEnabled ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureMarkerHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 HighLevel );
ViStatus _VI_FUNC wx218x_ConfigureMarkerLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 LowLevel );
ViStatus _VI_FUNC wx218x_ConfigureMarkerIndex ( ViSession Vi, ViConstString Channel, ViInt32 Index );
ViStatus _VI_FUNC wx218x_ConfigureMarkerPosition ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Position );
ViStatus _VI_FUNC wx218x_ConfigureMarkerSource ( ViSession Vi, ViConstString Channel, ViInt32 Source );
ViStatus _VI_FUNC wx218x_ConfigureMarkerWidth ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Width );
ViStatus _VI_FUNC wx218x_MarkerRefresh2 ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_ConfigureMarkerHighLevel4Ch ( ViSession Vi, ViConstString Channel, ViReal64 HighLevel );
ViStatus _VI_FUNC wx218x_ConfigureMarkerLowLevel4Ch ( ViSession Vi, ViConstString Channel, ViReal64 LowLevel );

/*- Trigger */

ViStatus _VI_FUNC wx218x_SendSoftwareTrigger2 ( ViSession Vi );
ViStatus _VI_FUNC wx218x_SetTrigECLLevel ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetTrigTTLLevel ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_ConfigureBurstCount2 ( ViSession Vi, ViConstString Channel, ViInt32 Count );
ViStatus _VI_FUNC wx218x_ConfigureTriggerDelay ( ViSession Vi, ViConstString Channel, ViInt32 Delay );
ViStatus _VI_FUNC wx218x_Configure2 ( ViSession Vi, ViConstString Channel, ViReal64 Level );
ViStatus _VI_FUNC wx218x_ConfigureTriggerTimerDelay ( ViSession Vi, ViConstString Channel, ViInt32 TimerDelay );
ViStatus _VI_FUNC wx218x_ConfigureTriggerTimerTime ( ViSession Vi, ViConstString Channel, ViReal64 TimerTime );
ViStatus _VI_FUNC wx218x_ConfigureTrigContMode ( ViSession Vi, ViConstString Channel, ViInt32 ContMode );
ViStatus _VI_FUNC wx218x_ConfigureTrigContSource ( ViSession Vi, ViConstString Channel, ViInt32 Source );
ViStatus _VI_FUNC wx218x_ConfigureTrigSlope ( ViSession Vi, ViConstString Channel, ViInt32 Slope );
ViStatus _VI_FUNC wx218x_ConfigureTrigSource ( ViSession Vi, ViConstString Channel, ViInt32 Source );
ViStatus _VI_FUNC wx218x_ConfigureTrigTimerMode ( ViSession Vi, ViConstString Channel, ViInt32 TimerMode );
ViStatus _VI_FUNC wx218x_ConfigureTriggerMode ( ViSession Vi, ViConstString Channel, ViInt32 Mode );
ViStatus _VI_FUNC wx218x_ConfigureTriggerImpedance ( ViSession Vi, ViInt32 TriggerImpedance );

/*- ARM */

ViStatus _VI_FUNC wx218x_SetArmECLLevel ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetArmTtlLevel ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_ConfigureTrigARMLevel ( ViSession Vi, ViConstString Channel, ViReal64 Level );
ViStatus _VI_FUNC wx218x_ConfigureTrigARMSlope ( ViSession Vi, ViConstString Channel, ViInt32 Slope );

/*- SmartTrigger */

ViStatus _VI_FUNC wx218x_ConfigureSmartTrigHiPassEnabled ( ViSession Vi, ViConstString Channel, ViBoolean State );
ViStatus _VI_FUNC wx218x_ConfigureSmartTrigHiPassWidth ( ViSession Vi, ViConstString Channel, ViReal64 Width );
ViStatus _VI_FUNC wx218x_ConfigureSmartTrigHoldoff ( ViSession Vi, ViConstString Channel, ViReal64 Holdoff );
ViStatus _VI_FUNC wx218x_ConfigureSmartTrigHoldoffState ( ViSession Vi, ViConstString Channel, ViBoolean State );
ViStatus _VI_FUNC wx218x_ConfigureSmartTrigLowPassState ( ViSession Vi, ViConstString Channel, ViBoolean State );
ViStatus _VI_FUNC wx218x_ConfigureSmartTrigLowPassWidth ( ViSession Vi, ViConstString Channel, ViReal64 Width );

/*- StateStorage */

ViStatus _VI_FUNC wx218x_StageStorageClear ( ViSession Vi );
ViStatus _VI_FUNC wx218x_StateStorageLoad ( ViSession Vi );
ViStatus _VI_FUNC wx218x_StateStorageRecall ( ViSession Vi, ViInt32 Cell, ViInt32 Target );
ViStatus _VI_FUNC wx218x_StateStorageSave ( ViSession Vi );
ViStatus _VI_FUNC wx218x_StateStorageStore ( ViSession Vi, ViInt32 Cell, ViInt32 Configuration, ViInt32 Target );

/*- XInstrument */

ViStatus _VI_FUNC wx218x_ConfigureXInstrumentEnabled ( ViSession Vi, ViBoolean State );
ViStatus _VI_FUNC wx218x_ConfigureXInstrumentMode ( ViSession Vi, ViInt32 Mode );
ViStatus _VI_FUNC wx218x_ConfigureXInstrumentModeAdv ( ViSession Vi, ViInt32 ModeAdv );
ViStatus _VI_FUNC wx218x_ConfigureXInstrumentOffset ( ViSession Vi, ViInt32 Offset );

/*- DigitalPulse */

ViStatus _VI_FUNC wx218x_SetDigPulseAmplitudeMax ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetDigPulseAmplitudeMin ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetDigPulseOffsetMax ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_SetDigPulseOffsetMin ( ViSession Vi, ViConstString Channel );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseAmplitude ( ViSession Vi, ViConstString Channel, ViReal64 Amplitude );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseDelay ( ViSession Vi, ViConstString Channel, ViReal64 Delay );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseDelayPercent ( ViSession Vi, ViConstString Channel, ViReal64 DelayPercent );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseDoubleDelay ( ViSession Vi, ViConstString Channel, ViReal64 DoubleDelay );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseDoubleDelayPercent ( ViSession Vi, ViConstString Channel, ViReal64 DoubleDelayPercent );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseFallTime ( ViSession Vi, ViConstString Channel, ViReal64 FallTime );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseFallTimePercent ( ViSession Vi, ViConstString Channel, ViReal64 FallTimePercent );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseHighLevel ( ViSession Vi, ViConstString Channel, ViReal64 HighLevel );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseLevelControl ( ViSession Vi, ViConstString Channel, ViInt32 LevelControl );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseLowLevel ( ViSession Vi, ViConstString Channel, ViReal64 LowLevel );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseMode ( ViSession Vi, ViConstString Channel, ViInt32 Mode );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseOffset ( ViSession Vi, ViConstString Channel, ViReal64 Offset );
ViStatus _VI_FUNC wx218x_ConfigureDigPulsePeriod ( ViSession Vi, ViConstString Channel, ViReal64 Period );
ViStatus _VI_FUNC wx218x_ConfigureDigPulsePolarity ( ViSession Vi, ViConstString Channel, ViInt32 Polarity );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseRiseTime ( ViSession Vi, ViConstString Channel, ViReal64 RiseTime );
ViStatus _VI_FUNC wx218x_ConfigureRiseTimePercent ( ViSession Vi, ViConstString Channel, ViReal64 RiseTimePercent );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseTransition ( ViSession Vi, ViConstString Channel, ViInt32 Transition );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseWidth ( ViSession Vi, ViConstString Channel, ViReal64 Width );
ViStatus _VI_FUNC wx218x_ConfigureDigPulseWidthPercent ( ViSession Vi, ViConstString Channel, ViReal64 WidthPercent );

/*- Sweep */

ViStatus _VI_FUNC wx218x_ConfigureSweepDirection ( ViSession Vi, ViConstString Channel, ViInt32 Direction );
ViStatus _VI_FUNC wx218x_ConfigureSweepState ( ViSession Vi, ViConstString Channel, ViBoolean State );
ViStatus _VI_FUNC wx218x_ConfigureSweepFreqStart ( ViSession Vi, ViConstString Channel, ViReal64 FreqStart );
ViStatus _VI_FUNC wx218x_ConfigureSweepFreqStop ( ViSession Vi, ViConstString Channel, ViReal64 FreqStop );
ViStatus _VI_FUNC wx218x_ConfigureSweepMarker ( ViSession Vi, ViConstString Channel, ViReal64 Marker );
ViStatus _VI_FUNC wx218x_ConfigureSweepSpacing ( ViSession Vi, ViConstString Channel, ViInt32 Spacing );
ViStatus _VI_FUNC wx218x_ConfigureSweepTime ( ViSession Vi, ViConstString Channel, ViReal64 Time );

/*- Pattern */

ViStatus _VI_FUNC wx218x_CreatePatternData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViChar Data[] );
ViStatus _VI_FUNC wx218x_ConfigurePatternBaud ( ViSession Vi, ViConstString Channel, ViReal64 Baud );
ViStatus _VI_FUNC wx218x_ConfigurePatternHighLevel ( ViSession Vi, ViConstString Channel, ViReal64 HighLevel );
ViStatus _VI_FUNC wx218x_ConfigurePatternLength ( ViSession Vi, ViConstString Channel, ViInt32 Length );
ViStatus _VI_FUNC wx218x_ConfigurePatternLevel ( ViSession Vi, ViConstString Channel, ViInt32 Level );
ViStatus _VI_FUNC wx218x_ConfigurePatternLoop ( ViSession Vi, ViConstString Channel, ViInt32 Loop );
ViStatus _VI_FUNC wx218x_ConfigurePatternLowLevel ( ViSession Vi, ViConstString Channel, ViReal64 LowLevel );
ViStatus _VI_FUNC wx218x_ConfigurePatternMode ( ViSession Vi, ViConstString Channel, ViInt32 Mode );
ViStatus _VI_FUNC wx218x_ConfigurePatternPreamble ( ViSession Vi, ViConstString Channel, ViInt32 Preamble );
ViStatus _VI_FUNC wx218x_ConfigurePatternPredType ( ViSession Vi, ViConstString Channel, ViInt32 Type );

/*- Composer */

ViStatus _VI_FUNC wx218x_CreatePatternComposerFastData ( ViSession Vi, ViConstString Channel, ViInt32 AmplLevelBufferSize, ViReal64 AmplLevel[], ViInt32 DwellTimeBufferSize, ViReal64 DwellTime[] );
ViStatus _VI_FUNC wx218x_LoadPatternComposerFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName );
ViStatus _VI_FUNC wx218x_CreatePatternComposerLinearData ( ViSession Vi, ViConstString Channel, ViInt32 AmplLevelBufferSize, ViReal64 AmplLevel[], ViInt32 DwellTimeBufferSize, ViReal64 DwellTime[] );
ViStatus _VI_FUNC wx218x_ConfigurePatternCompFastStart ( ViSession Vi, ViConstString Channel, ViReal64 FastStart );
ViStatus _VI_FUNC wx218x_ConfigurePatternCompLinearStart ( ViSession Vi, ViConstString Channel, ViReal64 LinearStart );
ViStatus _VI_FUNC wx218x_ConfigurePatternCompResolution ( ViSession Vi, ViConstString Channel, ViReal64 Resolution );
ViStatus _VI_FUNC wx218x_ConfigurePatternCompResType ( ViSession Vi, ViConstString Channel, ViInt32 ResType );
ViStatus _VI_FUNC wx218x_ConfigurePatternCompTransType ( ViSession Vi, ViConstString Channel, ViInt32 TransitionType );

/*- DigitalPatternOutput */

ViStatus _VI_FUNC wx218x_CreateDigPatternData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViReal64 Data[], ViInt32 Segment );
ViStatus _VI_FUNC wx218x_LoadDigitalPatternFromFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32 Segment );
ViStatus _VI_FUNC wx218x_GetDigPatternBitEnabled ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViBoolean* Enabled );
ViStatus _VI_FUNC wx218x_SetDigPatternBitEnabled ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_GetDigPatternBitDelay ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* Delay );
ViStatus _VI_FUNC wx218x_SetDigPatternBitDelay ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 Delay );
ViStatus _VI_FUNC wx218x_GetDigPatternBitHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* HighLevel );
ViStatus _VI_FUNC wx218x_SetDigPatternBitHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 HighLevel );
ViStatus _VI_FUNC wx218x_GetDigPatternBitLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* LowLevel );
ViStatus _VI_FUNC wx218x_SetDigPatternBitLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 LowLevel );
ViStatus _VI_FUNC wx218x_CreateDigPatternParamData ( ViSession Vi, ViConstString Channel, ViInt32 StateBufferSize, ViChar State[], ViInt32 DelayBufferSize, ViReal64 Delay[], ViInt32 HighLevelBufferSize, ViReal64 HighLevel[], ViInt32 LowLevelBufferSize, ViReal64 LowLevel[] );
ViStatus _VI_FUNC wx218x_CreateDigPatternParamData1 ( ViSession Vi, ViConstString Channel, ViInt32 StateBufferSize, ViInt32 State[], ViInt32 DelayBufferSize, ViReal64 Delay[], ViInt32 HighLevelBufferSize, ViReal64 HighLevel[], ViInt32 LowLevelBufferSize, ViReal64 LowLevel[] );
ViStatus _VI_FUNC wx218x_ConfigureDigPattArbResolution ( ViSession Vi, ViConstString Channel, ViInt32 ArbResolution );
ViStatus _VI_FUNC wx218x_ConfigureDigPattBitDelay ( ViSession Vi, ViConstString Channel, ViInt32 BitIndex, ViReal64 BitDelay );
ViStatus _VI_FUNC wx218x_ConfigureDigPattBitEnabled ( ViSession Vi, ViConstString Channel, ViInt32 BitIndex, ViBoolean BitEnabled );
ViStatus _VI_FUNC wx218x_ConfigureDigPattBitHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 BitIndex, ViReal64 BitHighLevel );
ViStatus _VI_FUNC wx218x_ConfigureDigPattBitLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 BitIndex, ViReal64 BitLowLevel );
ViStatus _VI_FUNC wx218x_ConfigureDigPattDelay ( ViSession Vi, ViConstString Channel, ViReal64 Delay );
ViStatus _VI_FUNC wx218x_ConfigureDigPattDelayMode ( ViSession Vi, ViConstString Channel, ViInt32 DelayMode );
ViStatus _VI_FUNC wx218x_ConfigureDigPattEmphasisEnabled ( ViSession Vi, ViConstString Channel, ViBoolean EmphasisEnabled );
ViStatus _VI_FUNC wx218x_ConfigureDigPattEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureDigPattFormatData ( ViSession Vi, ViConstString Channel, ViInt32 FormatData );
ViStatus _VI_FUNC wx218x_ConfigureDigPattHighLevel ( ViSession Vi, ViConstString Channel, ViReal64 HighLevel );
ViStatus _VI_FUNC wx218x_ConfigureDigPattLevelMode ( ViSession Vi, ViConstString Channel, ViInt32 LevelMode );
ViStatus _VI_FUNC wx218x_ConfigureDigPattLowLevel ( ViSession Vi, ViConstString Channel, ViReal64 LowLevel );
ViStatus _VI_FUNC wx218x_LoadDigitalDataBinaryFile ( ViSession Vi, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32 Segment );
ViStatus _VI_FUNC wx218x_LoadDigitalDataAsciiFile ( ViSession Vi, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32 Segment );
ViStatus _VI_FUNC wx218x_ConfigureDigClock ( ViSession Vi, ViInt32 DigClock );
ViStatus _VI_FUNC wx218x_ConfigureDigPattDigPort ( ViSession Vi, ViInt32 DigPort );

/*- CHIRP */

ViStatus _VI_FUNC wx218x_ConfigureChirpAmplDepth ( ViSession Vi, ViConstString Channel, ViReal64 AmplDepth );
ViStatus _VI_FUNC wx218x_ConfigureChirpEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureChirpFreqDirection ( ViSession Vi, ViConstString Channel, ViInt32 FreqDirection );
ViStatus _VI_FUNC wx218x_ConfigureChirpFreqSpacing ( ViSession Vi, ViConstString Channel, ViInt32 FreqSpacing );
ViStatus _VI_FUNC wx218x_ConfigureChirpMarkerFreq ( ViSession Vi, ViConstString Channel, ViReal64 MarkerFreq );
ViStatus _VI_FUNC wx218x_ConfigureChirpRepetition ( ViSession Vi, ViConstString Channel, ViReal64 Repetition );
ViStatus _VI_FUNC wx218x_ConfigureChirpStartFreq ( ViSession Vi, ViConstString Channel, ViReal64 StartFreq );
ViStatus _VI_FUNC wx218x_ConfigureChirpStopFreq ( ViSession Vi, ViConstString Channel, ViReal64 StopFreq );
ViStatus _VI_FUNC wx218x_ConfigureChirpWidth ( ViSession Vi, ViConstString Channel, ViReal64 Width );
ViStatus _VI_FUNC wx218x_ConfigureChirpAmplDirection ( ViSession Vi, ViConstString Channel, ViInt32 AmplDirection );
ViStatus _VI_FUNC wx218x_ConfigureChirpAmplSpacing ( ViSession Vi, ViConstString Channel, ViInt32 AmplSpacing );

/*- FSK */

ViStatus _VI_FUNC wx218x_CreateFSKData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViChar Data[] );
ViStatus _VI_FUNC wx218x_LoadFSKDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName );
ViStatus _VI_FUNC wx218x_CreateFSKDataAdv ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViInt32 Data[] );
ViStatus _VI_FUNC wx218x_ConfigureFSKBaud ( ViSession Vi, ViConstString Channel, ViReal64 Baud );
ViStatus _VI_FUNC wx218x_ConfigureFSKEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureFSKMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker );
ViStatus _VI_FUNC wx218x_ConfigureFSKShiftFreq ( ViSession Vi, ViConstString Channel, ViReal64 ShiftFreq );

/*- ASK */

ViStatus _VI_FUNC wx218x_CreateASKData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViChar Data[] );
ViStatus _VI_FUNC wx218x_LoadASKDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName );
ViStatus _VI_FUNC wx218x_CreateASKDataAdv ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViInt32 Data[] );
ViStatus _VI_FUNC wx218x_ConfigureASKBaud ( ViSession Vi, ViConstString Channel, ViReal64 Baud );
ViStatus _VI_FUNC wx218x_ConfigureASKEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureASKMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker );
ViStatus _VI_FUNC wx218x_ConfigureASKShiftAmplitude ( ViSession Vi, ViConstString Channel, ViReal64 ShiftAmpl );
ViStatus _VI_FUNC wx218x_ConfigureASKStartAmplitude ( ViSession Vi, ViConstString Channel, ViReal64 StartAmpl );

/*- FHOP */

ViStatus _VI_FUNC wx218x_CreateFHOPFixedData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViReal64 Data[] );
ViStatus _VI_FUNC wx218x_CreateFHOPVariableData ( ViSession Vi, ViConstString Channel, ViInt32 FreqDataBufferSize, ViReal64 FreqData[], ViInt32 DwellTimeDataBufferSize, ViReal64 DwellTimeData[] );
ViStatus _VI_FUNC wx218x_LoadFHOPFixDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName );
ViStatus _VI_FUNC wx218x_LoadFHOPVarDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName );
ViStatus _VI_FUNC wx218x_ConfigureFHOPDwellMode ( ViSession Vi, ViConstString Channel, ViInt32 DwellMode );
ViStatus _VI_FUNC wx218x_ConfigureFHOPEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureFHOPMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker );
ViStatus _VI_FUNC wx218x_ConfigureFHOPTime ( ViSession Vi, ViConstString Channel, ViReal64 Time );

/*- AHOP */

ViStatus _VI_FUNC wx218x_CreateAHOPFixedData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViReal64 Data[] );
ViStatus _VI_FUNC wx218x_CreateAHOPVariableData ( ViSession Vi, ViConstString Channel, ViInt32 AmplDataBufferSize, ViReal64 AmplData[], ViInt32 DwellTimeDataBufferSize, ViReal64 DwellTimeData[] );
ViStatus _VI_FUNC wx218x_LoadAHOPFixDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName );
ViStatus _VI_FUNC wx218x_LoadAHOPVarDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName );
ViStatus _VI_FUNC wx218x_ConfigureAHOPDwellMode ( ViSession Vi, ViConstString Channel, ViInt32 DwellMode );
ViStatus _VI_FUNC wx218x_ConfigureAHOPEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled );
ViStatus _VI_FUNC wx218x_ConfigureAHOPMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker );
ViStatus _VI_FUNC wx218x_ConfigureAHOPTime ( ViSession Vi, ViConstString Channel, ViReal64 Time );

/*- PSK */

ViStatus _VI_FUNC wx218x_CreatePSKData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViChar Data[] );
ViStatus _VI_FUNC wx218x_CreatePSKUserData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViReal64 Data[] );
ViStatus _VI_FUNC wx218x_LoadPSKDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName );
ViStatus _VI_FUNC wx218x_LoadPSKUserDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName );
ViStatus _VI_FUNC wx218x_CreatePSKDataAdv ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViInt32 Data[] );
ViStatus _VI_FUNC wx218x_ConfigurePSKBaud ( ViSession Vi, ViConstString Channel, ViReal64 Baud );
ViStatus _VI_FUNC wx218x_ConfigurePSKCarrierState ( ViSession Vi, ViConstString Channel, ViBoolean State );
ViStatus _VI_FUNC wx218x_ConfigurePSKState ( ViSession Vi, ViConstString Channel, ViBoolean State );
ViStatus _VI_FUNC wx218x_ConfigurePSKMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker );
ViStatus _VI_FUNC wx218x_ConfigurePSKRate ( ViSession Vi, ViConstString Channel, ViReal64 Rate );
ViStatus _VI_FUNC wx218x_ConfigurePSKShiftPhase ( ViSession Vi, ViConstString Channel, ViReal64 ShiftPhase );
ViStatus _VI_FUNC wx218x_ConfigurePSKStartPhase ( ViSession Vi, ViConstString Channel, ViReal64 StartPhase );
ViStatus _VI_FUNC wx218x_ConfigurePSKType ( ViSession Vi, ViConstString Channel, ViInt32 Type );

/*- QAM */

ViStatus _VI_FUNC wx218x_CreateQAMData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViChar Data[] );
ViStatus _VI_FUNC wx218x_CreateQAMUserData ( ViSession Vi, ViConstString Channel, ViInt32 DataIBufferSize, ViReal64 DataI[], ViInt32 DataQBufferSize, ViReal64 DataQ[] );
ViStatus _VI_FUNC wx218x_LoadQAMDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName );
ViStatus _VI_FUNC wx218x_LoadQAMUserDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName );
ViStatus _VI_FUNC wx218x_CreateQAMDataAdv ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViInt32 Data[] );
ViStatus _VI_FUNC wx218x_ConfigureQAMBaud ( ViSession Vi, ViConstString Channel, ViReal64 Baud );
ViStatus _VI_FUNC wx218x_ConfigureQAMCarrierState ( ViSession Vi, ViConstString Channel, ViBoolean State );
ViStatus _VI_FUNC wx218x_ConfigureQAMState ( ViSession Vi, ViConstString Channel, ViBoolean State );
ViStatus _VI_FUNC wx218x_ConfigureQAMMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker );
ViStatus _VI_FUNC wx218x_ConfigureQAMType ( ViSession Vi, ViConstString Channel, ViInt32 Type );


/**************************************************************************** 
 *----------------- Instrument Error And Completion Codes ------------------* 
 ****************************************************************************/
#ifndef _IVIC_ERROR_BASE_DEFINES_
#define _IVIC_ERROR_BASE_DEFINES_

#define IVIC_WARN_BASE                           (0x3FFA0000L)
#define IVIC_CROSS_CLASS_WARN_BASE               (IVIC_WARN_BASE + 0x1000)
#define IVIC_CLASS_WARN_BASE                     (IVIC_WARN_BASE + 0x2000)
#define IVIC_SPECIFIC_WARN_BASE                  (IVIC_WARN_BASE + 0x4000)

#define IVIC_ERROR_BASE                          (0xBFFA0000L)
#define IVIC_CROSS_CLASS_ERROR_BASE              (IVIC_ERROR_BASE + 0x1000)
#define IVIC_CLASS_ERROR_BASE                    (IVIC_ERROR_BASE + 0x2000)
#define IVIC_SPECIFIC_ERROR_BASE                 (IVIC_ERROR_BASE + 0x4000)
#define IVIC_LXISYNC_ERROR_BASE                  (IVIC_ERROR_BASE + 0x2000)

#define IVIC_ERROR_INVALID_ATTRIBUTE             (IVIC_ERROR_BASE + 0x000C)
#define IVIC_ERROR_TYPES_DO_NOT_MATCH            (IVIC_ERROR_BASE + 0x0015)
#define IVIC_ERROR_IVI_ATTR_NOT_WRITABLE         (IVIC_ERROR_BASE + 0x000D)
#define IVIC_ERROR_IVI_ATTR_NOT_READABLE         (IVIC_ERROR_BASE + 0x000E)
#define IVIC_ERROR_INVALID_SESSION_HANDLE        (IVIC_ERROR_BASE + 0x1190)

#endif


#define WX218X_ERROR_CANNOT_RECOVER                         (IVIC_ERROR_BASE + 0x0000)
#define WX218X_ERROR_INSTRUMENT_STATUS                      (IVIC_ERROR_BASE + 0x0001)
#define WX218X_ERROR_CANNOT_OPEN_FILE                       (IVIC_ERROR_BASE + 0x0002)
#define WX218X_ERROR_READING_FILE                           (IVIC_ERROR_BASE + 0x0003)
#define WX218X_ERROR_WRITING_FILE                           (IVIC_ERROR_BASE + 0x0004)
#define WX218X_ERROR_INVALID_PATHNAME                       (IVIC_ERROR_BASE + 0x000B)
#define WX218X_ERROR_INVALID_VALUE                          (IVIC_ERROR_BASE + 0x0010)
#define WX218X_ERROR_FUNCTION_NOT_SUPPORTED                 (IVIC_ERROR_BASE + 0x0011)
#define WX218X_ERROR_ATTRIBUTE_NOT_SUPPORTED                (IVIC_ERROR_BASE + 0x0012)
#define WX218X_ERROR_VALUE_NOT_SUPPORTED                    (IVIC_ERROR_BASE + 0x0013)
#define WX218X_ERROR_NOT_INITIALIZED                        (IVIC_ERROR_BASE + 0x001D)
#define WX218X_ERROR_UNKNOWN_CHANNEL_NAME                   (IVIC_ERROR_BASE + 0x0020)
#define WX218X_ERROR_TOO_MANY_OPEN_FILES                    (IVIC_ERROR_BASE + 0x0023)
#define WX218X_ERROR_CHANNEL_NAME_REQUIRED                  (IVIC_ERROR_BASE + 0x0044)
#define WX218X_ERROR_MISSING_OPTION_NAME                    (IVIC_ERROR_BASE + 0x0049)
#define WX218X_ERROR_MISSING_OPTION_VALUE                   (IVIC_ERROR_BASE + 0x004A)
#define WX218X_ERROR_BAD_OPTION_NAME                        (IVIC_ERROR_BASE + 0x004B)
#define WX218X_ERROR_BAD_OPTION_VALUE                       (IVIC_ERROR_BASE + 0x004C)
#define WX218X_ERROR_OUT_OF_MEMORY                          (IVIC_ERROR_BASE + 0x0056)
#define WX218X_ERROR_OPERATION_PENDING                      (IVIC_ERROR_BASE + 0x0057)
#define WX218X_ERROR_NULL_POINTER                           (IVIC_ERROR_BASE + 0x0058)
#define WX218X_ERROR_UNEXPECTED_RESPONSE                    (IVIC_ERROR_BASE + 0x0059)
#define WX218X_ERROR_FILE_NOT_FOUND                         (IVIC_ERROR_BASE + 0x005B)
#define WX218X_ERROR_INVALID_FILE_FORMAT                    (IVIC_ERROR_BASE + 0x005C)
#define WX218X_ERROR_STATUS_NOT_AVAILABLE                   (IVIC_ERROR_BASE + 0x005D)
#define WX218X_ERROR_ID_QUERY_FAILED                        (IVIC_ERROR_BASE + 0x005E)
#define WX218X_ERROR_RESET_FAILED                           (IVIC_ERROR_BASE + 0x005F)
#define WX218X_ERROR_RESOURCE_UNKNOWN                       (IVIC_ERROR_BASE + 0x0060)
#define WX218X_ERROR_ALREADY_INITIALIZED                    (IVIC_ERROR_BASE + 0x0061)
#define WX218X_ERROR_CANNOT_CHANGE_SIMULATION_STATE         (IVIC_ERROR_BASE + 0x0062)
#define WX218X_ERROR_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR   (IVIC_ERROR_BASE + 0x0063)
#define WX218X_ERROR_INVALID_RANGE_IN_SELECTOR              (IVIC_ERROR_BASE + 0x0064)
#define WX218X_ERROR_UNKOWN_NAME_IN_SELECTOR                (IVIC_ERROR_BASE + 0x0065)
#define WX218X_ERROR_BADLY_FORMED_SELECTOR                  (IVIC_ERROR_BASE + 0x0066)
#define WX218X_ERROR_UNKNOWN_PHYSICAL_IDENTIFIER            (IVIC_ERROR_BASE + 0x0067)



#define WX218X_SUCCESS                                      0
#define WX218X_WARN_NSUP_ID_QUERY                           (IVIC_WARN_BASE + 0x0065)
#define WX218X_WARN_NSUP_RESET                              (IVIC_WARN_BASE + 0x0066)
#define WX218X_WARN_NSUP_SELF_TEST                          (IVIC_WARN_BASE + 0x0067)
#define WX218X_WARN_NSUP_ERROR_QUERY                        (IVIC_WARN_BASE + 0x0068)
#define WX218X_WARN_NSUP_REV_QUERY                          (IVIC_WARN_BASE + 0x0069)



#define WX218X_ERROR_IO_GENERAL                             (IVIC_SPECIFIC_ERROR_BASE + 0x0214)
#define WX218X_ERROR_IO_TIMEOUT                             (IVIC_SPECIFIC_ERROR_BASE + 0x0215)
#define WX218X_ERROR_MODEL_NOT_SUPPORTED                    (IVIC_SPECIFIC_ERROR_BASE + 0x0216)
#define WX218X_ERROR_PERSONALITY_NOT_ACTIVE                 (IVIC_SPECIFIC_ERROR_BASE + 0x0211)
#define WX218X_ERROR_PERSONALITY_NOT_LICENSED               (IVIC_SPECIFIC_ERROR_BASE + 0x0213)
#define WX218X_ERROR_PERSONALITY_NOT_INSTALLED              (IVIC_SPECIFIC_ERROR_BASE + 0x0212)
#define WX218X_ERROR_TRIGGER_NOT_SOFTWARE                   (IVIC_CROSS_CLASS_ERROR_BASE + 0x0001)
#define WX218X_ERROR_NO_WFMS_AVAILABLE                      (IVIC_CLASS_ERROR_BASE + 0x0004)
#define WX218X_ERROR_WFM_IN_USE                             (IVIC_CLASS_ERROR_BASE + 0x0008)
#define WX218X_ERROR_NO_SEQS_AVAILABLE                      (IVIC_CLASS_ERROR_BASE + 0x0009)
#define WX218X_ERROR_SEQ_IN_USE                             (IVIC_CLASS_ERROR_BASE + 0x000D)
#define WX218X_ERROR_ELEMENT_ARRAY_NOT_VALID                (IVIC_SPECIFIC_ERROR_BASE + 0x021C)
#define WX218X_ERROR_HANDLE_CHANNEL_NOT_EXIST               (IVIC_SPECIFIC_ERROR_BASE + 0x0219)
#define WX218X_ERROR_HANDLE_LOOP_JUMP_NOT_EQUAL             (IVIC_SPECIFIC_ERROR_BASE + 0x021B)
#define WX218X_ERROR_HANDLE_LOOP_NOT_EQUAL                  (IVIC_SPECIFIC_ERROR_BASE + 0x021A)
#define WX218X_ERROR_INVALID_CONFIGURATION                  (IVIC_SPECIFIC_ERROR_BASE + 0x0218)
#define WX218X_ERROR_LBOUND_ARRAY_EQUAL                     (IVIC_SPECIFIC_ERROR_BASE + 0x021D)
#define WX218X_ERROR_LBOUND_ARRAY_ZERO                      (IVIC_SPECIFIC_ERROR_BASE + 0x021F)
#define WX218X_ERROR_MAX_COUNT_SEGMENTS                     (IVIC_SPECIFIC_ERROR_BASE + 0x0220)
#define WX218X_ERROR_NO_AVAILABLE_MEMORY                    (IVIC_SPECIFIC_ERROR_BASE + 0x0221)
#define WX218X_ERROR_START_PHASE                            (IVIC_SPECIFIC_ERROR_BASE + 0x0217)
#define WX218X_ERROR_UBOUND_ARRAY_EQUAL                     (IVIC_SPECIFIC_ERROR_BASE + 0x021E)
#define WX218X_ERROR_UPPER_BOUND_ZERO                       (IVIC_SPECIFIC_ERROR_BASE + 0x0222)
#define WX218X_ERROR_FEATURE_NOT_SUPPORTED                  (IVIC_SPECIFIC_ERROR_BASE + 0x0223)
#define WX218X_ERROR_SIZE_ARRAY_NOT_EQUAL                   (IVIC_SPECIFIC_ERROR_BASE + 0x0224)
#define WX218X_ERROR_DATA_ARRAY_EMPTY                       (IVIC_SPECIFIC_ERROR_BASE + 0x0225)
#define WX218X_ERROR_SEGSIZE_ARBDIG_NOTEQUAL                (IVIC_SPECIFIC_ERROR_BASE + 0x0226)
#define WX218X_ERROR_SEGSIZE_DIG_NOTEQUAL                   (IVIC_SPECIFIC_ERROR_BASE + 0x0227)
#define WX218X_ERROR_SEGMENT_NOT_EMPTY                      (IVIC_SPECIFIC_ERROR_BASE + 0x0228)
#define WX218X_ERROR_INVALID_FILE_DATA                      (IVIC_SPECIFIC_ERROR_BASE + 0x0229)
#define WX218X_ERROR_DIG_POD_NOT_PRESENT                    (IVIC_SPECIFIC_ERROR_BASE + 0x022A)
#define WX218X_ERROR_INVALID_FILE_LENGTH                    (IVIC_SPECIFIC_ERROR_BASE + 0x022B)
#define WX218X_ERROR_TRACE_MODE_NORMAL                      (IVIC_SPECIFIC_ERROR_BASE + 0x022C)
#define WX218X_ERROR_TRACE_MODE_DUPLICATE                   (IVIC_SPECIFIC_ERROR_BASE + 0x022D)
#define WX218X_ERROR_FILE_SIZE_NOT_EQUAL                    (IVIC_SPECIFIC_ERROR_BASE + 0x022E)
#define WX218X_ERROR_TRACE_MODE_DUPLICATE_FILE              (IVIC_SPECIFIC_ERROR_BASE + 0x022F)
#define WX218X_ERROR_TRACE_MODE_NORMAL_FILE                 (IVIC_SPECIFIC_ERROR_BASE + 0x0230)
#define WX218X_ERROR_NOT_SUPPORTED_TRACE_MODE               (IVIC_SPECIFIC_ERROR_BASE + 0x0231)
#define WX218X_ERROR_SEG_NOT_EXIST                          (IVIC_SPECIFIC_ERROR_BASE + 0x0233)
#define WX218X_ERROR_DIG_POD_NOT_EXIST                      (IVIC_SPECIFIC_ERROR_BASE + 0x0232)
#define WX218X_ERROR_COUNT_SEG_NOT_EQUAL                    (IVIC_SPECIFIC_ERROR_BASE + 0x0234)
#define WX218X_ERROR_SIZE_NOT_EQUAL                         (IVIC_SPECIFIC_ERROR_BASE + 0x0236)
#define WX218X_ERROR_TRACE_MODE_NOT_SUPP                    (IVIC_SPECIFIC_ERROR_BASE + 0x0236)
#define WX218X_ERROR_DIG_PORT_BIT_INDEX                     (IVIC_SPECIFIC_ERROR_BASE + 0x0235)
#define WX218X_ERROR_COMMAND_EMPTY                          (IVIC_SPECIFIC_ERROR_BASE + 0x0237)




/**************************************************************************** 
 *---------------------------- End Include File ----------------------------* 
 ****************************************************************************/
#if defined(__cplusplus) || defined(__cplusplus__)
}
#endif
#endif // __WX218X_HEADER
