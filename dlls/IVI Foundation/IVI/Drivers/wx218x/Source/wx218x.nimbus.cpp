/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#include "StdAfx.h"

#include "wx218x.h"
#include "wx218x.nimbus.h"


///////////////////////////////////////////////////////////////////////////////
//
//	IVI-C auto generated methods (called from NTL)
//

CString GetPrefix()
{
	return _T("wx218x");
}

void InitializeAttributeMap(CIviCAttributeMap* pMap)
{
	pMap->Add(WX218X_ATTR_SPECIFIC_DRIVER_DESCRIPTION,                wx218x_get_SPECIFIC_DRIVER_DESCRIPTION,                NULL                                                   );
	pMap->Add(WX218X_ATTR_SPECIFIC_DRIVER_PREFIX,                     wx218x_get_SPECIFIC_DRIVER_PREFIX,                     NULL                                                   );
	pMap->Add(WX218X_ATTR_SPECIFIC_DRIVER_VENDOR,                     wx218x_get_SPECIFIC_DRIVER_VENDOR,                     NULL                                                   );
	pMap->Add(WX218X_ATTR_SPECIFIC_DRIVER_REVISION,                   wx218x_get_SPECIFIC_DRIVER_REVISION,                   NULL                                                   );
	pMap->Add(WX218X_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION,   wx218x_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION,   NULL                                                   );
	pMap->Add(WX218X_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION,   wx218x_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION,   NULL                                                   );
	pMap->Add(WX218X_ATTR_RANGE_CHECK,                                wx218x_get_RANGE_CHECK,                                wx218x_set_RANGE_CHECK                                 );
	pMap->Add(WX218X_ATTR_QUERY_INSTRUMENT_STATUS,                    wx218x_get_QUERY_INSTRUMENT_STATUS,                    wx218x_set_QUERY_INSTRUMENT_STATUS                     );
	pMap->Add(WX218X_ATTR_CACHE,                                      wx218x_get_CACHE,                                      wx218x_set_CACHE                                       );
	pMap->Add(WX218X_ATTR_SIMULATE,                                   wx218x_get_SIMULATE,                                   wx218x_set_SIMULATE                                    );
	pMap->Add(WX218X_ATTR_RECORD_COERCIONS,                           wx218x_get_RECORD_COERCIONS,                           wx218x_set_RECORD_COERCIONS                            );
	pMap->Add(WX218X_ATTR_INTERCHANGE_CHECK,                          wx218x_get_INTERCHANGE_CHECK,                          wx218x_set_INTERCHANGE_CHECK                           );
	pMap->Add(WX218X_ATTR_LOGICAL_NAME,                               wx218x_get_LOGICAL_NAME,                               NULL                                                   );
	pMap->Add(WX218X_ATTR_IO_RESOURCE_DESCRIPTOR,                     wx218x_get_IO_RESOURCE_DESCRIPTOR,                     NULL                                                   );
	pMap->Add(WX218X_ATTR_DRIVER_SETUP,                               wx218x_get_DRIVER_SETUP,                               NULL                                                   );
	pMap->Add(WX218X_ATTR_GROUP_CAPABILITIES,                         wx218x_get_GROUP_CAPABILITIES,                         NULL                                                   );
	pMap->Add(WX218X_ATTR_SUPPORTED_INSTRUMENT_MODELS,                wx218x_get_SUPPORTED_INSTRUMENT_MODELS,                NULL                                                   );
	pMap->Add(WX218X_ATTR_INSTRUMENT_FIRMWARE_REVISION,               wx218x_get_INSTRUMENT_FIRMWARE_REVISION,               NULL                                                   );
	pMap->Add(WX218X_ATTR_INSTRUMENT_MANUFACTURER,                    wx218x_get_INSTRUMENT_MANUFACTURER,                    NULL                                                   );
	pMap->Add(WX218X_ATTR_INSTRUMENT_MODEL,                           wx218x_get_INSTRUMENT_MODEL,                           NULL                                                   );
	pMap->Add(WX218X_ATTR_ARB_GAIN,                                   wx218x_get_ARB_GAIN,                                   wx218x_set_ARB_GAIN                                    );
	pMap->Add(WX218X_ATTR_ARB_OFFSET,                                 wx218x_get_ARB_OFFSET,                                 wx218x_set_ARB_OFFSET                                  );
	pMap->Add(WX218X_ATTR_ARB_SAMPLE_RATE,                            wx218x_get_ARB_SAMPLE_RATE,                            wx218x_set_ARB_SAMPLE_RATE                             );
	pMap->Add(WX218X_ATTR_ARB_WAVEFORM_HANDLE,                        wx218x_get_ARB_WAVEFORM_HANDLE,                        wx218x_set_ARB_WAVEFORM_HANDLE                         );
	pMap->Add(WX218X_ATTR_ARB_FREQUENCY,                              wx218x_get_ARB_FREQUENCY,                              wx218x_set_ARB_FREQUENCY                               );
	pMap->Add(WX218X_ATTR_MAX_NUM_WAVEFORMS,                          wx218x_get_MAX_NUM_WAVEFORMS,                          NULL                                                   );
	pMap->Add(WX218X_ATTR_WAVEFORM_QUANTUM,                           wx218x_get_WAVEFORM_QUANTUM,                           NULL                                                   );
	pMap->Add(WX218X_ATTR_MAX_WAVEFORM_SIZE,                          wx218x_get_MAX_WAVEFORM_SIZE,                          NULL                                                   );
	pMap->Add(WX218X_ATTR_MIN_WAVEFORM_SIZE,                          wx218x_get_MIN_WAVEFORM_SIZE,                          NULL                                                   );
	pMap->Add(WX218X_ATTR_ARB_SEQUENCE_HANDLE,                        wx218x_get_ARB_SEQUENCE_HANDLE,                        wx218x_set_ARB_SEQUENCE_HANDLE                         );
	pMap->Add(WX218X_ATTR_MAX_SEQUENCE_LENGTH,                        wx218x_get_MAX_SEQUENCE_LENGTH,                        NULL                                                   );
	pMap->Add(WX218X_ATTR_MIN_SEQUENCE_LENGTH,                        wx218x_get_MIN_SEQUENCE_LENGTH,                        NULL                                                   );
	pMap->Add(WX218X_ATTR_MAX_LOOP_COUNT,                             wx218x_get_MAX_LOOP_COUNT,                             NULL                                                   );
	pMap->Add(WX218X_ATTR_MAX_NUM_SEQUENCES,                          wx218x_get_MAX_NUM_SEQUENCES,                          NULL                                                   );
	pMap->Add(WX218X_ATTR_AM_ENABLED,                                 wx218x_get_AM_ENABLED,                                 wx218x_set_AM_ENABLED                                  );
	pMap->Add(WX218X_ATTR_AM_INTERNAL_DEPTH,                          wx218x_get_AM_INTERNAL_DEPTH,                          wx218x_set_AM_INTERNAL_DEPTH                           );
	pMap->Add(WX218X_ATTR_AM_INTERNAL_FREQUENCY,                      wx218x_get_AM_INTERNAL_FREQUENCY,                      wx218x_set_AM_INTERNAL_FREQUENCY                       );
	pMap->Add(WX218X_ATTR_AM_INTERNAL_WAVEFORM,                       wx218x_get_AM_INTERNAL_WAVEFORM,                       wx218x_set_AM_INTERNAL_WAVEFORM                        );
	pMap->Add(WX218X_ATTR_AM_SOURCE,                                  wx218x_get_AM_SOURCE,                                  wx218x_set_AM_SOURCE                                   );
	pMap->Add(WX218X_ATTR_FM_ENABLED,                                 wx218x_get_FM_ENABLED,                                 wx218x_set_FM_ENABLED                                  );
	pMap->Add(WX218X_ATTR_FM_INTERNAL_DEVIATION,                      wx218x_get_FM_INTERNAL_DEVIATION,                      wx218x_set_FM_INTERNAL_DEVIATION                       );
	pMap->Add(WX218X_ATTR_FM_INTERNAL_FREQUENCY,                      wx218x_get_FM_INTERNAL_FREQUENCY,                      wx218x_set_FM_INTERNAL_FREQUENCY                       );
	pMap->Add(WX218X_ATTR_FM_INTERNAL_WAVEFORM,                       wx218x_get_FM_INTERNAL_WAVEFORM,                       wx218x_set_FM_INTERNAL_WAVEFORM                        );
	pMap->Add(WX218X_ATTR_FM_SOURCE,                                  wx218x_get_FM_SOURCE,                                  wx218x_set_FM_SOURCE                                   );
	pMap->Add(WX218X_ATTR_CHANNEL_COUNT,                              wx218x_get_CHANNEL_COUNT,                              NULL                                                   );
	pMap->Add(WX218X_ATTR_OUTPUT_ENABLED,                             wx218x_get_OUTPUT_ENABLED,                             wx218x_set_OUTPUT_ENABLED                              );
	pMap->Add(WX218X_ATTR_OUTPUT_IMPEDANCE,                           wx218x_get_OUTPUT_IMPEDANCE,                           wx218x_set_OUTPUT_IMPEDANCE                            );
	pMap->Add(WX218X_ATTR_OPERATION_MODE,                             wx218x_get_OPERATION_MODE,                             wx218x_set_OPERATION_MODE                              );
	pMap->Add(WX218X_ATTR_OUTPUT_MODE,                                wx218x_get_OUTPUT_MODE,                                wx218x_set_OUTPUT_MODE                                 );
	pMap->Add(WX218X_ATTR_REF_CLOCK_SOURCE,                           wx218x_get_REF_CLOCK_SOURCE,                           wx218x_set_REF_CLOCK_SOURCE                            );
	pMap->Add(WX218X_ATTR_FUNC_AMPLITUDE,                             wx218x_get_FUNC_AMPLITUDE,                             wx218x_set_FUNC_AMPLITUDE                              );
	pMap->Add(WX218X_ATTR_FUNC_DC_OFFSET,                             wx218x_get_FUNC_DC_OFFSET,                             wx218x_set_FUNC_DC_OFFSET                              );
	pMap->Add(WX218X_ATTR_FUNC_DUTY_CYCLE_HIGH,                       wx218x_get_FUNC_DUTY_CYCLE_HIGH,                       wx218x_set_FUNC_DUTY_CYCLE_HIGH                        );
	pMap->Add(WX218X_ATTR_FUNC_FREQUENCY,                             wx218x_get_FUNC_FREQUENCY,                             wx218x_set_FUNC_FREQUENCY                              );
	pMap->Add(WX218X_ATTR_FUNC_START_PHASE,                           wx218x_get_FUNC_START_PHASE,                           wx218x_set_FUNC_START_PHASE                            );
	pMap->Add(WX218X_ATTR_FUNC_WAVEFORM,                              wx218x_get_FUNC_WAVEFORM,                              wx218x_set_FUNC_WAVEFORM                               );
	pMap->Add(WX218X_ATTR_BURST_COUNT,                                wx218x_get_BURST_COUNT,                                wx218x_set_BURST_COUNT                                 );
	pMap->Add(WX218X_ATTR_INTERNAL_TRIGGER_RATE,                      wx218x_get_INTERNAL_TRIGGER_RATE,                      wx218x_set_INTERNAL_TRIGGER_RATE                       );
	pMap->Add(WX218X_ATTR_TRIGGER_SOURCE,                             wx218x_get_TRIGGER_SOURCE,                             wx218x_set_TRIGGER_SOURCE                              );
	pMap->Add(WX218X_ATTR_ACTIVE_CHANNEL,                             wx218x_get_ACTIVE_CHANNEL,                             wx218x_set_ACTIVE_CHANNEL                              );
	pMap->Add(WX218X_ATTR_SKEW,                                       wx218x_get_SKEW,                                       wx218x_set_SKEW                                        );
	pMap->Add(WX218X_ATTR_ENABLED_AM,                                 wx218x_get_ENABLED_AM,                                 wx218x_set_ENABLED_AM                                  );
	pMap->Add(WX218X_ATTR_INTERNAL_DEPTH_AM,                          wx218x_get_INTERNAL_DEPTH_AM,                          wx218x_set_INTERNAL_DEPTH_AM                           );
	pMap->Add(WX218X_ATTR_INTERNAL_WAVEFORM_AM,                       wx218x_get_INTERNAL_WAVEFORM_AM,                       wx218x_set_INTERNAL_WAVEFORM_AM                        );
	pMap->Add(WX218X_ATTR_INTERNAL_FREQUENCY_AM,                      wx218x_get_INTERNAL_FREQUENCY_AM,                      wx218x_set_INTERNAL_FREQUENCY_AM                       );
	pMap->Add(WX218X_ATTR_COUPLE,                                     wx218x_get_COUPLE,                                     wx218x_set_COUPLE                                      );
	pMap->Add(WX218X_ATTR_ENABLED_OUTPUT,                             wx218x_get_ENABLED_OUTPUT,                             wx218x_set_ENABLED_OUTPUT                              );
	pMap->Add(WX218X_ATTR_OPERATION_MODE2,                            wx218x_get_OPERATION_MODE2,                            wx218x_set_OPERATION_MODE2                             );
	pMap->Add(WX218X_ATTR_OUTPUT_MODE2,                               wx218x_get_OUTPUT_MODE2,                               wx218x_set_OUTPUT_MODE2                                );
	pMap->Add(WX218X_ATTR_REFERENCE_CLOCK_SOURCE,                     wx218x_get_REFERENCE_CLOCK_SOURCE,                     wx218x_set_REFERENCE_CLOCK_SOURCE                      );
	pMap->Add(WX218X_ATTR_REF_EXT_FREQUENCY,                          wx218x_get_REF_EXT_FREQUENCY,                          wx218x_set_REF_EXT_FREQUENCY                           );
	pMap->Add(WX218X_ATTR_EXT_FREQUENCY,                              wx218x_get_EXT_FREQUENCY,                              wx218x_set_EXT_FREQUENCY                               );
	pMap->Add(WX218X_ATTR_SYNC_ENABLED,                               wx218x_get_SYNC_ENABLED,                               wx218x_set_SYNC_ENABLED                                );
	pMap->Add(WX218X_ATTR_SYNC_FUNCTION,                              wx218x_get_SYNC_FUNCTION,                              wx218x_set_SYNC_FUNCTION                               );
	pMap->Add(WX218X_ATTR_SYNC_POSITION,                              wx218x_get_SYNC_POSITION,                              wx218x_set_SYNC_POSITION                               );
	pMap->Add(WX218X_ATTR_SYNC_SOURCE,                                wx218x_get_SYNC_SOURCE,                                wx218x_set_SYNC_SOURCE                                 );
	pMap->Add(WX218X_ATTR_SYNC_WIDTH,                                 wx218x_get_SYNC_WIDTH,                                 wx218x_set_SYNC_WIDTH                                  );
	pMap->Add(WX218X_ATTR_AMPLITUDE,                                  wx218x_get_AMPLITUDE,                                  wx218x_set_AMPLITUDE                                   );
	pMap->Add(WX218X_ATTR_DC_LEVEL,                                   wx218x_get_DC_LEVEL,                                   wx218x_set_DC_LEVEL                                    );
	pMap->Add(WX218X_ATTR_DC_OFFSET,                                  wx218x_get_DC_OFFSET,                                  wx218x_set_DC_OFFSET                                   );
	pMap->Add(WX218X_ATTR_DUTY_CYCLE_HIGH,                            wx218x_get_DUTY_CYCLE_HIGH,                            wx218x_set_DUTY_CYCLE_HIGH                             );
	pMap->Add(WX218X_ATTR_EXP_EXPONENT,                               wx218x_get_EXP_EXPONENT,                               wx218x_set_EXP_EXPONENT                                );
	pMap->Add(WX218X_ATTR_FREQUENCY,                                  wx218x_get_FREQUENCY,                                  wx218x_set_FREQUENCY                                   );
	pMap->Add(WX218X_ATTR_GAUSS_EXPONENT,                             wx218x_get_GAUSS_EXPONENT,                             wx218x_set_GAUSS_EXPONENT                              );
	pMap->Add(WX218X_ATTR_POWER,                                      wx218x_get_POWER,                                      wx218x_set_POWER                                       );
	pMap->Add(WX218X_ATTR_RAMP_DELAY,                                 wx218x_get_RAMP_DELAY,                                 wx218x_set_RAMP_DELAY                                  );
	pMap->Add(WX218X_ATTR_RAMP_FALL_TIME,                             wx218x_get_RAMP_FALL_TIME,                             wx218x_set_RAMP_FALL_TIME                              );
	pMap->Add(WX218X_ATTR_RAMP_RISE_TIME,                             wx218x_get_RAMP_RISE_TIME,                             wx218x_set_RAMP_RISE_TIME                              );
	pMap->Add(WX218X_ATTR_SINCN_CYCLE,                                wx218x_get_SINCN_CYCLE,                                wx218x_set_SINCN_CYCLE                                 );
	pMap->Add(WX218X_ATTR_START_PHASE,                                wx218x_get_START_PHASE,                                wx218x_set_START_PHASE                                 );
	pMap->Add(WX218X_ATTR_HV_AMPLITUDE,                               wx218x_get_HV_AMPLITUDE,                               wx218x_set_HV_AMPLITUDE                                );
	pMap->Add(WX218X_ATTR_WAVEFORM,                                   wx218x_get_WAVEFORM,                                   wx218x_set_WAVEFORM                                    );
	pMap->Add(WX218X_ATTR_CLOCK_DIVIDER,                              wx218x_get_CLOCK_DIVIDER,                              wx218x_set_CLOCK_DIVIDER                               );
	pMap->Add(WX218X_ATTR_GAIN,                                       wx218x_get_GAIN,                                       wx218x_set_GAIN                                        );
	pMap->Add(WX218X_ATTR_OFFSET,                                     wx218x_get_OFFSET,                                     wx218x_set_OFFSET                                      );
	pMap->Add(WX218X_ATTR_SAMPLE_RATE,                                wx218x_get_SAMPLE_RATE,                                wx218x_set_SAMPLE_RATE                                 );
	pMap->Add(WX218X_ATTR_SAMPLE_RATE_SOURCE,                         wx218x_get_SAMPLE_RATE_SOURCE,                         wx218x_set_SAMPLE_RATE_SOURCE                          );
	pMap->Add(WX218X_ATTR_ARB_SOURCE,                                 wx218x_get_ARB_SOURCE,                                 wx218x_set_ARB_SOURCE                                  );
	pMap->Add(WX218X_ATTR_ARB_TIMING,                                 wx218x_get_ARB_TIMING,                                 wx218x_set_ARB_TIMING                                  );
	pMap->Add(WX218X_ATTR_FREQ_RAST_DIVIDER,                          wx218x_get_FREQ_RAST_DIVIDER,                          wx218x_set_FREQ_RAST_DIVIDER                           );
	pMap->Add(WX218X_ATTR_NUMBER_WAVEFORMS_MAX,                       wx218x_get_NUMBER_WAVEFORMS_MAX,                       NULL                                                   );
	pMap->Add(WX218X_ATTR_QUANTUM,                                    wx218x_get_QUANTUM,                                    NULL                                                   );
	pMap->Add(WX218X_ATTR_WAVEFORM_SIZE_MAX,                          wx218x_get_WAVEFORM_SIZE_MAX,                          NULL                                                   );
	pMap->Add(WX218X_ATTR_WAVEFORM_SIZE_MIN,                          wx218x_get_WAVEFORM_SIZE_MIN,                          NULL                                                   );
	pMap->Add(WX218X_ATTR_TRACE_MODE,                                 wx218x_get_TRACE_MODE,                                 wx218x_set_TRACE_MODE                                  );
	pMap->Add(WX218X_ATTR_FAST_DOWNLOAD,                              wx218x_get_FAST_DOWNLOAD,                              wx218x_set_FAST_DOWNLOAD                               );
	pMap->Add(WX218X_ATTR_DOWNLOAD_RECORD,                            wx218x_get_DOWNLOAD_RECORD,                            wx218x_set_DOWNLOAD_RECORD                             );
	pMap->Add(WX218X_ATTR_ADVANCE_MODE,                               wx218x_get_ADVANCE_MODE,                               wx218x_set_ADVANCE_MODE                                );
	pMap->Add(WX218X_ATTR_SEQ_JUMP_EVENT,                             wx218x_get_SEQ_JUMP_EVENT,                             wx218x_set_SEQ_JUMP_EVENT                              );
	pMap->Add(WX218X_ATTR_LENGTH_MAX,                                 wx218x_get_LENGTH_MAX,                                 NULL                                                   );
	pMap->Add(WX218X_ATTR_LENGTH_MIN,                                 wx218x_get_LENGTH_MIN,                                 NULL                                                   );
	pMap->Add(WX218X_ATTR_LOOP_COUNT_MAX,                             wx218x_get_LOOP_COUNT_MAX,                             NULL                                                   );
	pMap->Add(WX218X_ATTR_NUMBER_SEQUENCE_MAX,                        wx218x_get_NUMBER_SEQUENCE_MAX,                        NULL                                                   );
	pMap->Add(WX218X_ATTR_SEQ_SOURCE,                                 wx218x_get_SEQ_SOURCE,                                 wx218x_set_SEQ_SOURCE                                  );
	pMap->Add(WX218X_ATTR_SEQ_SYNC_LOCK,                              wx218x_get_SEQ_SYNC_LOCK,                              wx218x_set_SEQ_SYNC_LOCK                               );
	pMap->Add(WX218X_ATTR_SEQ_TIMING,                                 wx218x_get_SEQ_TIMING,                                 wx218x_set_SEQ_TIMING                                  );
	pMap->Add(WX218X_ATTR_QUICK_SEQUENCE,                             wx218x_get_QUICK_SEQUENCE,                             wx218x_set_QUICK_SEQUENCE                              );
	pMap->Add(WX218X_ATTR_PRESTEP,                                    wx218x_get_PRESTEP,                                    wx218x_set_PRESTEP                                     );
	pMap->Add(WX218X_ATTR_SEQ_ONCE_COUNT,                             wx218x_get_SEQ_ONCE_COUNT,                             wx218x_set_SEQ_ONCE_COUNT                              );
	pMap->Add(WX218X_ATTR_ADV_SEQ_MODE,                               wx218x_get_ADV_SEQ_MODE,                               wx218x_set_ADV_SEQ_MODE                                );
	pMap->Add(WX218X_ATTR_SYNC_LOCK,                                  wx218x_get_SYNC_LOCK,                                  wx218x_set_SYNC_LOCK                                   );
	pMap->Add(WX218X_ATTR_ASEQ_ONCE_COUNT,                            wx218x_get_ASEQ_ONCE_COUNT,                            wx218x_set_ASEQ_ONCE_COUNT                             );
	pMap->Add(WX218X_ATTR_CARR_FREQUENCY,                             wx218x_get_CARR_FREQUENCY,                             wx218x_set_CARR_FREQUENCY                              );
	pMap->Add(WX218X_ATTR_CARR_WAVEFORM,                              wx218x_get_CARR_WAVEFORM,                              wx218x_set_CARR_WAVEFORM                               );
	pMap->Add(WX218X_ATTR_COUPLE_ENABLED,                             wx218x_get_COUPLE_ENABLED,                             wx218x_set_COUPLE_ENABLED                              );
	pMap->Add(WX218X_ATTR_COURSE_OFFSET,                              wx218x_get_COURSE_OFFSET,                              wx218x_set_COURSE_OFFSET                               );
	pMap->Add(WX218X_ATTR_FINE_SKEW,                                  wx218x_get_FINE_SKEW,                                  wx218x_set_FINE_SKEW                                   );
	pMap->Add(WX218X_ATTR_ENABLED_FM,                                 wx218x_get_ENABLED_FM,                                 wx218x_set_ENABLED_FM                                  );
	pMap->Add(WX218X_ATTR_INTERNAL_DEVIATION_FM,                      wx218x_get_INTERNAL_DEVIATION_FM,                      wx218x_set_INTERNAL_DEVIATION_FM                       );
	pMap->Add(WX218X_ATTR_INTERNAL_FREQUENCY_FM,                      wx218x_get_INTERNAL_FREQUENCY_FM,                      wx218x_set_INTERNAL_FREQUENCY_FM                       );
	pMap->Add(WX218X_ATTR_INTERNAL_WAVEFORM_FM,                       wx218x_get_INTERNAL_WAVEFORM_FM,                       wx218x_set_INTERNAL_WAVEFORM_FM                        );
	pMap->Add(WX218X_ATTR_FM_MARKER,                                  wx218x_get_FM_MARKER,                                  wx218x_set_FM_MARKER                                   );
	pMap->Add(WX218X_ATTR_MARKER_INDEX,                               wx218x_get_MARKER_INDEX,                               wx218x_set_MARKER_INDEX                                );
	pMap->Add(WX218X_ATTR_MARKER_SOURCE,                              wx218x_get_MARKER_SOURCE,                              wx218x_set_MARKER_SOURCE                               );
	pMap->Add(WX218X_ATTR_MARKER_HIGH_LEVEL4_CH,                      wx218x_get_MARKER_HIGH_LEVEL4_CH,                      wx218x_set_MARKER_HIGH_LEVEL4_CH                       );
	pMap->Add(WX218X_ATTR_LOW_LEVEL4_CH,                              wx218x_get_LOW_LEVEL4_CH,                              wx218x_set_LOW_LEVEL4_CH                               );
	pMap->Add(WX218X_ATTR_BURST_COUNT2,                               wx218x_get_BURST_COUNT2,                               wx218x_set_BURST_COUNT2                                );
	pMap->Add(WX218X_ATTR_CONTINUOUS_MODE,                            wx218x_get_CONTINUOUS_MODE,                            wx218x_set_CONTINUOUS_MODE                             );
	pMap->Add(WX218X_ATTR_CONTINUOUS_SOURCE,                          wx218x_get_CONTINUOUS_SOURCE,                          wx218x_set_CONTINUOUS_SOURCE                           );
	pMap->Add(WX218X_ATTR_TRIG_DELAY,                                 wx218x_get_TRIG_DELAY,                                 wx218x_set_TRIG_DELAY                                  );
	pMap->Add(WX218X_ATTR_TRIG_LEVEL,                                 wx218x_get_TRIG_LEVEL,                                 wx218x_set_TRIG_LEVEL                                  );
	pMap->Add(WX218X_ATTR_TRIG_SLOPE,                                 wx218x_get_TRIG_SLOPE,                                 wx218x_set_TRIG_SLOPE                                  );
	pMap->Add(WX218X_ATTR_TRIG_SOURCE,                                wx218x_get_TRIG_SOURCE,                                wx218x_set_TRIG_SOURCE                                 );
	pMap->Add(WX218X_ATTR_TRIG_TIMER_DELAY,                           wx218x_get_TRIG_TIMER_DELAY,                           wx218x_set_TRIG_TIMER_DELAY                            );
	pMap->Add(WX218X_ATTR_TRIG_TIMER_MODE,                            wx218x_get_TRIG_TIMER_MODE,                            wx218x_set_TRIG_TIMER_MODE                             );
	pMap->Add(WX218X_ATTR_TRIG_TIMER_TIME,                            wx218x_get_TRIG_TIMER_TIME,                            wx218x_set_TRIG_TIMER_TIME                             );
	pMap->Add(WX218X_ATTR_TRIG_TRIGGER_MODE,                          wx218x_get_TRIG_TRIGGER_MODE,                          wx218x_set_TRIG_TRIGGER_MODE                           );
	pMap->Add(WX218X_ATTR_TRIGGER_IMPEDANCE,                          wx218x_get_TRIGGER_IMPEDANCE,                          wx218x_set_TRIGGER_IMPEDANCE                           );
	pMap->Add(WX218X_ATTR_ARM_LEVEL,                                  wx218x_get_ARM_LEVEL,                                  wx218x_set_ARM_LEVEL                                   );
	pMap->Add(WX218X_ATTR_ARM_SLOPE,                                  wx218x_get_ARM_SLOPE,                                  wx218x_set_ARM_SLOPE                                   );
	pMap->Add(WX218X_ATTR_HI_PASS_ENABLED,                            wx218x_get_HI_PASS_ENABLED,                            wx218x_set_HI_PASS_ENABLED                             );
	pMap->Add(WX218X_ATTR_HI_PASS_WIDTH,                              wx218x_get_HI_PASS_WIDTH,                              wx218x_set_HI_PASS_WIDTH                               );
	pMap->Add(WX218X_ATTR_HOLDOFF,                                    wx218x_get_HOLDOFF,                                    wx218x_set_HOLDOFF                                     );
	pMap->Add(WX218X_ATTR_HOLDOFF_ENABLED,                            wx218x_get_HOLDOFF_ENABLED,                            wx218x_set_HOLDOFF_ENABLED                             );
	pMap->Add(WX218X_ATTR_LOW_PASS_ENABLED,                           wx218x_get_LOW_PASS_ENABLED,                           wx218x_set_LOW_PASS_ENABLED                            );
	pMap->Add(WX218X_ATTR_LOW_PASS_WIDTH,                             wx218x_get_LOW_PASS_WIDTH,                             wx218x_set_LOW_PASS_WIDTH                              );
	pMap->Add(WX218X_ATTR_CELL_RECALL,                                wx218x_get_CELL_RECALL,                                wx218x_set_CELL_RECALL                                 );
	pMap->Add(WX218X_ATTR_CELL_STORE,                                 wx218x_get_CELL_STORE,                                 wx218x_set_CELL_STORE                                  );
	pMap->Add(WX218X_ATTR_CONFIGURATION_STORE,                        wx218x_get_CONFIGURATION_STORE,                        wx218x_set_CONFIGURATION_STORE                         );
	pMap->Add(WX218X_ATTR_TARGET_RECALL,                              wx218x_get_TARGET_RECALL,                              wx218x_set_TARGET_RECALL                               );
	pMap->Add(WX218X_ATTR_TARGET_STORE,                               wx218x_get_TARGET_STORE,                               wx218x_set_TARGET_STORE                                );
	pMap->Add(WX218X_ATTR_CONFIGURATION_RECALL,                       wx218x_get_CONFIGURATION_RECALL,                       NULL                                                   );
	pMap->Add(WX218X_ATTR_STORE_ENABLED,                              wx218x_get_STORE_ENABLED,                              wx218x_set_STORE_ENABLED                               );
	pMap->Add(WX218X_ATTR_RECALL_ENABLED,                             wx218x_get_RECALL_ENABLED,                             wx218x_set_RECALL_ENABLED                              );
	pMap->Add(WX218X_ATTR_XINSTR_ENABLED,                             wx218x_get_XINSTR_ENABLED,                             wx218x_set_XINSTR_ENABLED                              );
	pMap->Add(WX218X_ATTR_XINSTR_MODE,                                wx218x_get_XINSTR_MODE,                                wx218x_set_XINSTR_MODE                                 );
	pMap->Add(WX218X_ATTR_XINSTR_OFFSET,                              wx218x_get_XINSTR_OFFSET,                              wx218x_set_XINSTR_OFFSET                               );
	pMap->Add(WX218X_ATTR_MODE_ADV,                                   wx218x_get_MODE_ADV,                                   wx218x_set_MODE_ADV                                    );
	pMap->Add(WX218X_ATTR_DIG_PULSE_AMPLITUDE,                        wx218x_get_DIG_PULSE_AMPLITUDE,                        wx218x_set_DIG_PULSE_AMPLITUDE                         );
	pMap->Add(WX218X_ATTR_DIG_PULSE_CONFIGURE,                        wx218x_get_DIG_PULSE_CONFIGURE,                        wx218x_set_DIG_PULSE_CONFIGURE                         );
	pMap->Add(WX218X_ATTR_DIG_PULSE_DELAY,                            wx218x_get_DIG_PULSE_DELAY,                            wx218x_set_DIG_PULSE_DELAY                             );
	pMap->Add(WX218X_ATTR_DIG_PULSE_DELAY_PERCENT,                    wx218x_get_DIG_PULSE_DELAY_PERCENT,                    wx218x_set_DIG_PULSE_DELAY_PERCENT                     );
	pMap->Add(WX218X_ATTR_DIG_PULSE_DOUBLE_DELAY,                     wx218x_get_DIG_PULSE_DOUBLE_DELAY,                     wx218x_set_DIG_PULSE_DOUBLE_DELAY                      );
	pMap->Add(WX218X_ATTR_DIG_PULSE_DOUBLE_DELAY_PERCENT,             wx218x_get_DIG_PULSE_DOUBLE_DELAY_PERCENT,             wx218x_set_DIG_PULSE_DOUBLE_DELAY_PERCENT              );
	pMap->Add(WX218X_ATTR_DIG_PULSE_FALL_TIME,                        wx218x_get_DIG_PULSE_FALL_TIME,                        wx218x_set_DIG_PULSE_FALL_TIME                         );
	pMap->Add(WX218X_ATTR_DIG_PULSE_FALL_TIME_PERCENT,                wx218x_get_DIG_PULSE_FALL_TIME_PERCENT,                wx218x_set_DIG_PULSE_FALL_TIME_PERCENT                 );
	pMap->Add(WX218X_ATTR_DIG_PULSE_HIGH_LEVEL,                       wx218x_get_DIG_PULSE_HIGH_LEVEL,                       wx218x_set_DIG_PULSE_HIGH_LEVEL                        );
	pMap->Add(WX218X_ATTR_DIG_PULSE_LEVEL_CONTROL,                    wx218x_get_DIG_PULSE_LEVEL_CONTROL,                    wx218x_set_DIG_PULSE_LEVEL_CONTROL                     );
	pMap->Add(WX218X_ATTR_DIG_PULSE_LOW_LEVEL,                        wx218x_get_DIG_PULSE_LOW_LEVEL,                        wx218x_set_DIG_PULSE_LOW_LEVEL                         );
	pMap->Add(WX218X_ATTR_DIG_PULSE_MODE,                             wx218x_get_DIG_PULSE_MODE,                             wx218x_set_DIG_PULSE_MODE                              );
	pMap->Add(WX218X_ATTR_DIG_PULSE_OFFSET,                           wx218x_get_DIG_PULSE_OFFSET,                           wx218x_set_DIG_PULSE_OFFSET                            );
	pMap->Add(WX218X_ATTR_DIG_PULSE_PERIOD,                           wx218x_get_DIG_PULSE_PERIOD,                           wx218x_set_DIG_PULSE_PERIOD                            );
	pMap->Add(WX218X_ATTR_DIG_PULSE_POLARITY,                         wx218x_get_DIG_PULSE_POLARITY,                         wx218x_set_DIG_PULSE_POLARITY                          );
	pMap->Add(WX218X_ATTR_DIG_PULSE_RISE_TIME,                        wx218x_get_DIG_PULSE_RISE_TIME,                        wx218x_set_DIG_PULSE_RISE_TIME                         );
	pMap->Add(WX218X_ATTR_DIG_PULSE_RISE_TIME_PERCENT,                wx218x_get_DIG_PULSE_RISE_TIME_PERCENT,                wx218x_set_DIG_PULSE_RISE_TIME_PERCENT                 );
	pMap->Add(WX218X_ATTR_DIG_PULSE_TRANSITION,                       wx218x_get_DIG_PULSE_TRANSITION,                       wx218x_set_DIG_PULSE_TRANSITION                        );
	pMap->Add(WX218X_ATTR_DIG_PULSE_WIDTH,                            wx218x_get_DIG_PULSE_WIDTH,                            wx218x_set_DIG_PULSE_WIDTH                             );
	pMap->Add(WX218X_ATTR_DIG_PULSE_WIDTH_PERCENT,                    wx218x_get_DIG_PULSE_WIDTH_PERCENT,                    wx218x_set_DIG_PULSE_WIDTH_PERCENT                     );
	pMap->Add(WX218X_ATTR_SWEEP_DIRECTION,                            wx218x_get_SWEEP_DIRECTION,                            wx218x_set_SWEEP_DIRECTION                             );
	pMap->Add(WX218X_ATTR_SWEEP_ENABLED,                              wx218x_get_SWEEP_ENABLED,                              wx218x_set_SWEEP_ENABLED                               );
	pMap->Add(WX218X_ATTR_SWEEP_FREQUENCY_START,                      wx218x_get_SWEEP_FREQUENCY_START,                      wx218x_set_SWEEP_FREQUENCY_START                       );
	pMap->Add(WX218X_ATTR_SWEEP_FREQUENCY_STOP,                       wx218x_get_SWEEP_FREQUENCY_STOP,                       wx218x_set_SWEEP_FREQUENCY_STOP                        );
	pMap->Add(WX218X_ATTR_SWEEP_MARKER,                               wx218x_get_SWEEP_MARKER,                               wx218x_set_SWEEP_MARKER                                );
	pMap->Add(WX218X_ATTR_SWEEP_SPACING,                              wx218x_get_SWEEP_SPACING,                              wx218x_set_SWEEP_SPACING                               );
	pMap->Add(WX218X_ATTR_SWEEP_TIME,                                 wx218x_get_SWEEP_TIME,                                 wx218x_set_SWEEP_TIME                                  );
	pMap->Add(WX218X_ATTR_PATTERN_BAUD,                               wx218x_get_PATTERN_BAUD,                               wx218x_set_PATTERN_BAUD                                );
	pMap->Add(WX218X_ATTR_PATTERN_LEVEL,                              wx218x_get_PATTERN_LEVEL,                              wx218x_set_PATTERN_LEVEL                               );
	pMap->Add(WX218X_ATTR_PATTERN_MODE,                               wx218x_get_PATTERN_MODE,                               wx218x_set_PATTERN_MODE                                );
	pMap->Add(WX218X_ATTR_PATTERN_PREDEFINED_TYPE,                    wx218x_get_PATTERN_PREDEFINED_TYPE,                    wx218x_set_PATTERN_PREDEFINED_TYPE                     );
	pMap->Add(WX218X_ATTR_PATTERN_HIGH_LEVEL,                         wx218x_get_PATTERN_HIGH_LEVEL,                         wx218x_set_PATTERN_HIGH_LEVEL                          );
	pMap->Add(WX218X_ATTR_PATTERN_LOW_LEVEL,                          wx218x_get_PATTERN_LOW_LEVEL,                          wx218x_set_PATTERN_LOW_LEVEL                           );
	pMap->Add(WX218X_ATTR_PATTERN_LOOP,                               wx218x_get_PATTERN_LOOP,                               wx218x_set_PATTERN_LOOP                                );
	pMap->Add(WX218X_ATTR_PREAMBLE,                                   wx218x_get_PREAMBLE,                                   wx218x_set_PREAMBLE                                    );
	pMap->Add(WX218X_ATTR_PATTERN_LENGTH,                             wx218x_get_PATTERN_LENGTH,                             wx218x_set_PATTERN_LENGTH                              );
	pMap->Add(WX218X_ATTR_PATTERN_COMPOSER_TRANSITION_TYPE,           wx218x_get_PATTERN_COMPOSER_TRANSITION_TYPE,           wx218x_set_PATTERN_COMPOSER_TRANSITION_TYPE            );
	pMap->Add(WX218X_ATTR_PATT_COMP_LINEAR_START,                     wx218x_get_PATT_COMP_LINEAR_START,                     wx218x_set_PATT_COMP_LINEAR_START                      );
	pMap->Add(WX218X_ATTR_PATT_COMP_RESOLUTION,                       wx218x_get_PATT_COMP_RESOLUTION,                       wx218x_set_PATT_COMP_RESOLUTION                        );
	pMap->Add(WX218X_ATTR_PATTERN_COMPOSER_RESOLUTION_TYPE,           wx218x_get_PATTERN_COMPOSER_RESOLUTION_TYPE,           wx218x_set_PATTERN_COMPOSER_RESOLUTION_TYPE            );
	pMap->Add(WX218X_ATTR_FAST_START,                                 wx218x_get_FAST_START,                                 wx218x_set_FAST_START                                  );
	pMap->Add(WX218X_ATTR_DIG_DELAY_MODE,                             wx218x_get_DIG_DELAY_MODE,                             wx218x_set_DIG_DELAY_MODE                              );
	pMap->Add(WX218X_ATTR_DIG_LEVEL_MODE,                             wx218x_get_DIG_LEVEL_MODE,                             wx218x_set_DIG_LEVEL_MODE                              );
	pMap->Add(WX218X_ATTR_DIG_PATTERN_DELAY,                          wx218x_get_DIG_PATTERN_DELAY,                          wx218x_set_DIG_PATTERN_DELAY                           );
	pMap->Add(WX218X_ATTR_DIG_PATTERN_ENABLED,                        wx218x_get_DIG_PATTERN_ENABLED,                        wx218x_set_DIG_PATTERN_ENABLED                         );
	pMap->Add(WX218X_ATTR_DIG_HIGH_LEVEL,                             wx218x_get_DIG_HIGH_LEVEL,                             wx218x_set_DIG_HIGH_LEVEL                              );
	pMap->Add(WX218X_ATTR_DIG_LOW_LEVEL,                              wx218x_get_DIG_LOW_LEVEL,                              wx218x_set_DIG_LOW_LEVEL                               );
	pMap->Add(WX218X_ATTR_DIG_POD_PRESENT,                            wx218x_get_DIG_POD_PRESENT,                            NULL                                                   );
	pMap->Add(WX218X_ATTR_DIG_EMPHASIS_ENABLED,                       wx218x_get_DIG_EMPHASIS_ENABLED,                       wx218x_set_DIG_EMPHASIS_ENABLED                        );
	pMap->Add(WX218X_ATTR_FORMAT_DATA,                                wx218x_get_FORMAT_DATA,                                wx218x_set_FORMAT_DATA                                 );
	pMap->Add(WX218X_ATTR_ARB_RESOLUTION,                             wx218x_get_ARB_RESOLUTION,                             wx218x_set_ARB_RESOLUTION                              );
	pMap->Add(WX218X_ATTR_DIG_CLOCK,                                  wx218x_get_DIG_CLOCK,                                  wx218x_set_DIG_CLOCK                                   );
	pMap->Add(WX218X_ATTR_DIG_PORT,                                   wx218x_get_DIG_PORT,                                   wx218x_set_DIG_PORT                                    );
	pMap->Add(WX218X_ATTR_CHIRP_WIDTH,                                wx218x_get_CHIRP_WIDTH,                                wx218x_set_CHIRP_WIDTH                                 );
	pMap->Add(WX218X_ATTR_CHIRP_REPETITION,                           wx218x_get_CHIRP_REPETITION,                           wx218x_set_CHIRP_REPETITION                            );
	pMap->Add(WX218X_ATTR_CHIRP_START_FREQUENCY,                      wx218x_get_CHIRP_START_FREQUENCY,                      wx218x_set_CHIRP_START_FREQUENCY                       );
	pMap->Add(WX218X_ATTR_CHIRP_STOP_FREQUENCY,                       wx218x_get_CHIRP_STOP_FREQUENCY,                       wx218x_set_CHIRP_STOP_FREQUENCY                        );
	pMap->Add(WX218X_ATTR_CHIRP_MARKER_FREQUENCY,                     wx218x_get_CHIRP_MARKER_FREQUENCY,                     wx218x_set_CHIRP_MARKER_FREQUENCY                      );
	pMap->Add(WX218X_ATTR_CHIRP_AMPL_DEPTH,                           wx218x_get_CHIRP_AMPL_DEPTH,                           wx218x_set_CHIRP_AMPL_DEPTH                            );
	pMap->Add(WX218X_ATTR_CHIRP_FREQ_DIRECTION,                       wx218x_get_CHIRP_FREQ_DIRECTION,                       wx218x_set_CHIRP_FREQ_DIRECTION                        );
	pMap->Add(WX218X_ATTR_CHIRP_FREQ_SPACING,                         wx218x_get_CHIRP_FREQ_SPACING,                         wx218x_set_CHIRP_FREQ_SPACING                          );
	pMap->Add(WX218X_ATTR_CHIRP_AMPL_DIRECTION,                       wx218x_get_CHIRP_AMPL_DIRECTION,                       wx218x_set_CHIRP_AMPL_DIRECTION                        );
	pMap->Add(WX218X_ATTR_CHIRP_AMPL_SPACING,                         wx218x_get_CHIRP_AMPL_SPACING,                         wx218x_set_CHIRP_AMPL_SPACING                          );
	pMap->Add(WX218X_ATTR_CHIRP_ENABLED,                              wx218x_get_CHIRP_ENABLED,                              wx218x_set_CHIRP_ENABLED                               );
	pMap->Add(WX218X_ATTR_FSK_SHIFT_FREQ,                             wx218x_get_FSK_SHIFT_FREQ,                             wx218x_set_FSK_SHIFT_FREQ                              );
	pMap->Add(WX218X_ATTR_FSK_BAUD,                                   wx218x_get_FSK_BAUD,                                   wx218x_set_FSK_BAUD                                    );
	pMap->Add(WX218X_ATTR_FSK_MARKER,                                 wx218x_get_FSK_MARKER,                                 wx218x_set_FSK_MARKER                                  );
	pMap->Add(WX218X_ATTR_ENABLED_FSK,                                wx218x_get_ENABLED_FSK,                                wx218x_set_ENABLED_FSK                                 );
	pMap->Add(WX218X_ATTR_ASK_START_AMPLITUDE,                        wx218x_get_ASK_START_AMPLITUDE,                        wx218x_set_ASK_START_AMPLITUDE                         );
	pMap->Add(WX218X_ATTR_ASK_SHIFT_AMPLITUDE,                        wx218x_get_ASK_SHIFT_AMPLITUDE,                        wx218x_set_ASK_SHIFT_AMPLITUDE                         );
	pMap->Add(WX218X_ATTR_ASK_BAUD,                                   wx218x_get_ASK_BAUD,                                   wx218x_set_ASK_BAUD                                    );
	pMap->Add(WX218X_ATTR_ASK_MARKER,                                 wx218x_get_ASK_MARKER,                                 wx218x_set_ASK_MARKER                                  );
	pMap->Add(WX218X_ATTR_ENABLED_ASK,                                wx218x_get_ENABLED_ASK,                                wx218x_set_ENABLED_ASK                                 );
	pMap->Add(WX218X_ATTR_FHOP_TIME,                                  wx218x_get_FHOP_TIME,                                  wx218x_set_FHOP_TIME                                   );
	pMap->Add(WX218X_ATTR_FHOP_MARKER,                                wx218x_get_FHOP_MARKER,                                wx218x_set_FHOP_MARKER                                 );
	pMap->Add(WX218X_ATTR_FHOP_DWELL_MODE,                            wx218x_get_FHOP_DWELL_MODE,                            wx218x_set_FHOP_DWELL_MODE                             );
	pMap->Add(WX218X_ATTR_ENABLED_FHOP,                               wx218x_get_ENABLED_FHOP,                               wx218x_set_ENABLED_FHOP                                );
	pMap->Add(WX218X_ATTR_TIME,                                       wx218x_get_TIME,                                       wx218x_set_TIME                                        );
	pMap->Add(WX218X_ATTR_MARKER,                                     wx218x_get_MARKER,                                     wx218x_set_MARKER                                      );
	pMap->Add(WX218X_ATTR_DWELL_MODE,                                 wx218x_get_DWELL_MODE,                                 wx218x_set_DWELL_MODE                                  );
	pMap->Add(WX218X_ATTR_ENABLED_AHOP,                               wx218x_get_ENABLED_AHOP,                               wx218x_set_ENABLED_AHOP                                );
	pMap->Add(WX218X_ATTR_PSK_START_PHASE,                            wx218x_get_PSK_START_PHASE,                            wx218x_set_PSK_START_PHASE                             );
	pMap->Add(WX218X_ATTR_PSK_SHIFT_PHASE,                            wx218x_get_PSK_SHIFT_PHASE,                            wx218x_set_PSK_SHIFT_PHASE                             );
	pMap->Add(WX218X_ATTR_PSK_RATE,                                   wx218x_get_PSK_RATE,                                   wx218x_set_PSK_RATE                                    );
	pMap->Add(WX218X_ATTR_TYPE,                                       wx218x_get_TYPE,                                       wx218x_set_TYPE                                        );
	pMap->Add(WX218X_ATTR_PSK_MARKER,                                 wx218x_get_PSK_MARKER,                                 wx218x_set_PSK_MARKER                                  );
	pMap->Add(WX218X_ATTR_PSK_BAUD,                                   wx218x_get_PSK_BAUD,                                   wx218x_set_PSK_BAUD                                    );
	pMap->Add(WX218X_ATTR_PSK_CARRIER_ENABLED,                        wx218x_get_PSK_CARRIER_ENABLED,                        wx218x_set_PSK_CARRIER_ENABLED                         );
	pMap->Add(WX218X_ATTR_ENABLED_PSK,                                wx218x_get_ENABLED_PSK,                                wx218x_set_ENABLED_PSK                                 );
	pMap->Add(WX218X_ATTR_QAM_BAUD,                                   wx218x_get_QAM_BAUD,                                   wx218x_set_QAM_BAUD                                    );
	pMap->Add(WX218X_ATTR_QAM_TYPE,                                   wx218x_get_QAM_TYPE,                                   wx218x_set_QAM_TYPE                                    );
	pMap->Add(WX218X_ATTR_MARKER2,                                    wx218x_get_MARKER2,                                    wx218x_set_MARKER2                                     );
	pMap->Add(WX218X_ATTR_CARRIER_ENABLED,                            wx218x_get_CARRIER_ENABLED,                            wx218x_set_CARRIER_ENABLED                             );
	pMap->Add(WX218X_ATTR_ENABLED_QAM,                                wx218x_get_ENABLED_QAM,                                wx218x_set_ENABLED_QAM                                 );
}

void InitializeErrorMap(CIviCErrorMap* pMap)
{
	pMap->Add(E_WX218X_IO_GENERAL,	WX218X_ERROR_IO_GENERAL);
	pMap->Add(E_WX218X_IO_TIMEOUT,	WX218X_ERROR_IO_TIMEOUT);
	pMap->Add(E_WX218X_MODEL_NOT_SUPPORTED,	WX218X_ERROR_MODEL_NOT_SUPPORTED);
	pMap->Add(E_WX218X_PERSONALITY_NOT_ACTIVE,	WX218X_ERROR_PERSONALITY_NOT_ACTIVE);
	pMap->Add(E_WX218X_PERSONALITY_NOT_LICENSED,	WX218X_ERROR_PERSONALITY_NOT_LICENSED);
	pMap->Add(E_WX218X_PERSONALITY_NOT_INSTALLED,	WX218X_ERROR_PERSONALITY_NOT_INSTALLED);
	pMap->Add(E_IVI_CANNOT_RECOVER,	WX218X_ERROR_CANNOT_RECOVER);
	pMap->Add(E_IVI_INSTRUMENT_STATUS,	WX218X_ERROR_INSTRUMENT_STATUS);
	pMap->Add(E_IVI_CANNOT_OPEN_FILE,	WX218X_ERROR_CANNOT_OPEN_FILE);
	pMap->Add(E_IVI_READING_FILE,	WX218X_ERROR_READING_FILE);
	pMap->Add(E_IVI_WRITING_FILE,	WX218X_ERROR_WRITING_FILE);
	pMap->Add(E_IVI_INVALID_PATHNAME,	WX218X_ERROR_INVALID_PATHNAME);
	pMap->Add(E_IVI_INVALID_VALUE,	WX218X_ERROR_INVALID_VALUE);
	pMap->Add(E_IVI_METHOD_NOT_SUPPORTED,	WX218X_ERROR_FUNCTION_NOT_SUPPORTED);
	pMap->Add(E_IVI_PROPERTY_NOT_SUPPORTED,	WX218X_ERROR_ATTRIBUTE_NOT_SUPPORTED);
	pMap->Add(E_IVI_VALUE_NOT_SUPPORTED,	WX218X_ERROR_VALUE_NOT_SUPPORTED);
	pMap->Add(E_IVI_NOT_INITIALIZED,	WX218X_ERROR_NOT_INITIALIZED);
	pMap->Add(E_IVI_UNKNOWN_CHANNEL_NAME,	WX218X_ERROR_UNKNOWN_CHANNEL_NAME);
	pMap->Add(E_IVI_TOO_MANY_OPEN_FILES,	WX218X_ERROR_TOO_MANY_OPEN_FILES);
	pMap->Add(E_IVI_CHANNEL_NAME_REQUIRED,	WX218X_ERROR_CHANNEL_NAME_REQUIRED);
	pMap->Add(E_IVI_MISSING_OPTION_NAME,	WX218X_ERROR_MISSING_OPTION_NAME);
	pMap->Add(E_IVI_MISSING_OPTION_VALUE,	WX218X_ERROR_MISSING_OPTION_VALUE);
	pMap->Add(E_IVI_BAD_OPTION_NAME,	WX218X_ERROR_BAD_OPTION_NAME);
	pMap->Add(E_IVI_BAD_OPTION_VALUE,	WX218X_ERROR_BAD_OPTION_VALUE);
	pMap->Add(E_IVI_OUT_OF_MEMORY,	WX218X_ERROR_OUT_OF_MEMORY);
	pMap->Add(E_IVI_OPERATION_PENDING,	WX218X_ERROR_OPERATION_PENDING);
	pMap->Add(E_IVI_NULL_POINTER,	WX218X_ERROR_NULL_POINTER);
	pMap->Add(E_IVI_UNEXPECTED_RESPONSE,	WX218X_ERROR_UNEXPECTED_RESPONSE);
	pMap->Add(E_IVI_FILE_NOT_FOUND,	WX218X_ERROR_FILE_NOT_FOUND);
	pMap->Add(E_IVI_INVALID_FILE_FORMAT,	WX218X_ERROR_INVALID_FILE_FORMAT);
	pMap->Add(E_IVI_STATUS_NOT_AVAILABLE,	WX218X_ERROR_STATUS_NOT_AVAILABLE);
	pMap->Add(E_IVI_ID_QUERY_FAILED,	WX218X_ERROR_ID_QUERY_FAILED);
	pMap->Add(E_IVI_RESET_FAILED,	WX218X_ERROR_RESET_FAILED);
	pMap->Add(E_IVI_RESOURCE_UNKNOWN,	WX218X_ERROR_RESOURCE_UNKNOWN);
	pMap->Add(E_IVI_ALREADY_INITIALIZED,	WX218X_ERROR_ALREADY_INITIALIZED);
	pMap->Add(E_IVI_CANNOT_CHANGE_SIMULATION_STATE,	WX218X_ERROR_CANNOT_CHANGE_SIMULATION_STATE);
	pMap->Add(E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR,	WX218X_ERROR_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR);
	pMap->Add(E_IVI_INVALID_RANGE_IN_SELECTOR,	WX218X_ERROR_INVALID_RANGE_IN_SELECTOR);
	pMap->Add(E_IVI_UNKNOWN_NAME_IN_SELECTOR,	WX218X_ERROR_UNKOWN_NAME_IN_SELECTOR);
	pMap->Add(E_IVI_BADLY_FORMED_SELECTOR,	WX218X_ERROR_BADLY_FORMED_SELECTOR);
	pMap->Add(E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER,	WX218X_ERROR_UNKNOWN_PHYSICAL_IDENTIFIER);
	pMap->Add(E_IVIFGEN_TRIGGER_NOT_SOFTWARE,	WX218X_ERROR_TRIGGER_NOT_SOFTWARE);
	pMap->Add(E_IVIFGEN_NO_WFMS_AVAILABLE,	WX218X_ERROR_NO_WFMS_AVAILABLE);
	pMap->Add(E_IVIFGEN_WFM_IN_USE,	WX218X_ERROR_WFM_IN_USE);
	pMap->Add(E_IVIFGEN_NO_SEQS_AVAILABLE,	WX218X_ERROR_NO_SEQS_AVAILABLE);
	pMap->Add(E_IVIFGEN_SEQ_IN_USE,	WX218X_ERROR_SEQ_IN_USE);
	pMap->Add(E_WX218X_ELEMENT_ARRAY_NOT_VALID,	WX218X_ERROR_ELEMENT_ARRAY_NOT_VALID);
	pMap->Add(E_WX218X_HANDLE_CHANNEL_NOT_EXIST,	WX218X_ERROR_HANDLE_CHANNEL_NOT_EXIST);
	pMap->Add(E_WX218X_HANDLE_LOOP_JUMP_NOT_EQUAL,	WX218X_ERROR_HANDLE_LOOP_JUMP_NOT_EQUAL);
	pMap->Add(E_WX218X_HANDLE_LOOP_NOT_EQUAL,	WX218X_ERROR_HANDLE_LOOP_NOT_EQUAL);
	pMap->Add(E_WX218X_INVALID_CONFIGURATION,	WX218X_ERROR_INVALID_CONFIGURATION);
	pMap->Add(E_WX218X_LBOUND_ARRAY_EQUAL,	WX218X_ERROR_LBOUND_ARRAY_EQUAL);
	pMap->Add(E_WX218X_LBOUND_ARRAY_ZERO,	WX218X_ERROR_LBOUND_ARRAY_ZERO);
	pMap->Add(E_WX218X_MAX_COUNT_SEGMENTS,	WX218X_ERROR_MAX_COUNT_SEGMENTS);
	pMap->Add(E_WX218X_NO_AVAILABLE_MEMORY,	WX218X_ERROR_NO_AVAILABLE_MEMORY);
	pMap->Add(E_WX218X_START_PHASE,	WX218X_ERROR_START_PHASE);
	pMap->Add(E_WX218X_UBOUND_ARRAY_EQUAL,	WX218X_ERROR_UBOUND_ARRAY_EQUAL);
	pMap->Add(E_WX218X_UPPER_BOUND_ZERO,	WX218X_ERROR_UPPER_BOUND_ZERO);
	pMap->Add(E_WX218X_FEATURE_NOT_SUPPORTED,	WX218X_ERROR_FEATURE_NOT_SUPPORTED);
	pMap->Add(E_WX218X_SIZE_ARRAY_NOT_EQUAL,	WX218X_ERROR_SIZE_ARRAY_NOT_EQUAL);
	pMap->Add(E_WX218X_DATA_ARRAY_EMPTY,	WX218X_ERROR_DATA_ARRAY_EMPTY);
	pMap->Add(E_WX218X_SEGSIZE_ARBDIG_NOTEQUAL,	WX218X_ERROR_SEGSIZE_ARBDIG_NOTEQUAL);
	pMap->Add(E_WX218X_SEGSIZE_DIG_NOTEQUAL,	WX218X_ERROR_SEGSIZE_DIG_NOTEQUAL);
	pMap->Add(E_WX218X_SEGMENT_NOT_EMPTY,	WX218X_ERROR_SEGMENT_NOT_EMPTY);
	pMap->Add(E_WX218X_INVALID_FILE_DATA,	WX218X_ERROR_INVALID_FILE_DATA);
	pMap->Add(E_WX218X_DIG_POD_NOT_PRESENT,	WX218X_ERROR_DIG_POD_NOT_PRESENT);
	pMap->Add(E_WX218X_INVALID_FILE_LENGTH,	WX218X_ERROR_INVALID_FILE_LENGTH);
	pMap->Add(E_WX218X_TRACE_MODE_NORMAL,	WX218X_ERROR_TRACE_MODE_NORMAL);
	pMap->Add(E_WX218X_TRACE_MODE_DUPLICATE,	WX218X_ERROR_TRACE_MODE_DUPLICATE);
	pMap->Add(E_WX218X_FILE_SIZE_NOT_EQUAL,	WX218X_ERROR_FILE_SIZE_NOT_EQUAL);
	pMap->Add(E_WX218X_TRACE_MODE_DUPLICATE_FILE,	WX218X_ERROR_TRACE_MODE_DUPLICATE_FILE);
	pMap->Add(E_WX218X_TRACE_MODE_NORMAL_FILE,	WX218X_ERROR_TRACE_MODE_NORMAL_FILE);
	pMap->Add(E_WX218X_NOT_SUPPORTED_TRACE_MODE,	WX218X_ERROR_NOT_SUPPORTED_TRACE_MODE);
	pMap->Add(E_WX218X_SEG_NOT_EXIST,	WX218X_ERROR_SEG_NOT_EXIST);
	pMap->Add(E_WX218X_DIG_POD_NOT_EXIST,	WX218X_ERROR_DIG_POD_NOT_EXIST);
	pMap->Add(E_WX218X_COUNT_SEG_NOT_EQUAL,	WX218X_ERROR_COUNT_SEG_NOT_EQUAL);
	pMap->Add(E_WX218X_SIZE_NOT_EQUAL,	WX218X_ERROR_SIZE_NOT_EQUAL);
	pMap->Add(E_WX218X_TRACE_MODE_NOT_SUPP,	WX218X_ERROR_TRACE_MODE_NOT_SUPP);
	pMap->Add(E_WX218X_DIG_PORT_BIT_INDEX,	WX218X_ERROR_DIG_PORT_BIT_INDEX);
	pMap->Add(E_WX218X_COMMAND_EMPTY,	WX218X_ERROR_COMMAND_EMPTY);
	pMap->Add(S_IVI_SUCCESS,	WX218X_SUCCESS);
	pMap->Add(S_IVI_NSUP_ID_QUERY,	WX218X_WARN_NSUP_ID_QUERY);
	pMap->Add(S_IVI_NSUP_RESET,	WX218X_WARN_NSUP_RESET);
	pMap->Add(S_IVI_NSUP_SELF_TEST,	WX218X_WARN_NSUP_SELF_TEST);
	pMap->Add(S_IVI_NSUP_ERROR_QUERY,	WX218X_WARN_NSUP_ERROR_QUERY);
	pMap->Add(S_IVI_NSUP_REV_QUERY,	WX218X_WARN_NSUP_REV_QUERY);
}

void InitializeErrorMessageMap(CIviCErrorMessageMap* pMap)
{
	pMap->Add(WX218X_ERROR_IO_GENERAL, _T("I/O error."));
	pMap->Add(WX218X_ERROR_IO_TIMEOUT, _T("I/O timeout error."));
	pMap->Add(WX218X_ERROR_MODEL_NOT_SUPPORTED, _T("Instrument model does not support this feature."));
	pMap->Add(WX218X_ERROR_PERSONALITY_NOT_ACTIVE, _T("Personality is not active."));
	pMap->Add(WX218X_ERROR_PERSONALITY_NOT_LICENSED, _T("Personality is not licensed."));
	pMap->Add(WX218X_ERROR_PERSONALITY_NOT_INSTALLED, _T("Personality is not installed."));
	pMap->Add(WX218X_ERROR_CANNOT_RECOVER, _T("Failure cannot recover."));
	pMap->Add(WX218X_ERROR_INSTRUMENT_STATUS, _T("Instrument error detected.  Use ErrorQuery() to determine the error(s)."));
	pMap->Add(WX218X_ERROR_CANNOT_OPEN_FILE, _T("Cannot open file."));
	pMap->Add(WX218X_ERROR_READING_FILE, _T("Error reading file."));
	pMap->Add(WX218X_ERROR_WRITING_FILE, _T("Error writing file."));
	pMap->Add(WX218X_ERROR_INVALID_PATHNAME, _T("The pathname is invalid."));
	pMap->Add(WX218X_ERROR_INVALID_VALUE, _T("Invalid value (%1) for method %2, parameter %3."));
	pMap->Add(WX218X_ERROR_FUNCTION_NOT_SUPPORTED, _T("Does not support this class-compliant feature: method %1"));
	pMap->Add(WX218X_ERROR_ATTRIBUTE_NOT_SUPPORTED, _T("Does not support this class-compliant feature: property %1."));
	pMap->Add(WX218X_ERROR_VALUE_NOT_SUPPORTED, _T("Does not support this class-compliant feature:  (enumeration) value %1 passed as the value for parameter %2 in method %3."));
	pMap->Add(WX218X_ERROR_NOT_INITIALIZED, _T("A connection to the instrument has not been established."));
	pMap->Add(WX218X_ERROR_UNKNOWN_CHANNEL_NAME, _T("Unknown channel name."));
	pMap->Add(WX218X_ERROR_TOO_MANY_OPEN_FILES, _T("Too many files are open."));
	pMap->Add(WX218X_ERROR_CHANNEL_NAME_REQUIRED, _T("A channel name is required."));
	pMap->Add(WX218X_ERROR_MISSING_OPTION_NAME, _T("The option string is missing an option name."));
	pMap->Add(WX218X_ERROR_MISSING_OPTION_VALUE, _T("The option string is missing an option value."));
	pMap->Add(WX218X_ERROR_BAD_OPTION_NAME, _T("The %1 name in the option string is unknown."));
	pMap->Add(WX218X_ERROR_BAD_OPTION_VALUE, _T("The %1 value in the option string is unknown."));
	pMap->Add(WX218X_ERROR_OUT_OF_MEMORY, _T("Could not allocate necessary memory."));
	pMap->Add(WX218X_ERROR_OPERATION_PENDING, _T("Operation in progress."));
	pMap->Add(WX218X_ERROR_NULL_POINTER, _T("Null pointer passed for method %1, parameter %2."));
	pMap->Add(WX218X_ERROR_UNEXPECTED_RESPONSE, _T("Unexpected response from instrument."));
	pMap->Add(WX218X_ERROR_FILE_NOT_FOUND, _T("File not found."));
	pMap->Add(WX218X_ERROR_INVALID_FILE_FORMAT, _T("Invalid file format."));
	pMap->Add(WX218X_ERROR_STATUS_NOT_AVAILABLE, _T("The instrument status is not available."));
	pMap->Add(WX218X_ERROR_ID_QUERY_FAILED, _T("Instrument ID query failed."));
	pMap->Add(WX218X_ERROR_RESET_FAILED, _T("Instrument reset failed."));
	pMap->Add(WX218X_ERROR_RESOURCE_UNKNOWN, _T("Unknown resource."));
	pMap->Add(WX218X_ERROR_ALREADY_INITIALIZED, _T("The driver is already initialized."));
	pMap->Add(WX218X_ERROR_CANNOT_CHANGE_SIMULATION_STATE, _T("The simulation state cannot be changed."));
	pMap->Add(WX218X_ERROR_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR, _T("The number of levels in the selector is not valid for the %1 repeated capability."));
	pMap->Add(WX218X_ERROR_INVALID_RANGE_IN_SELECTOR, _T("The range %1 is not valid for the repeated capability %2."));
	pMap->Add(WX218X_ERROR_UNKOWN_NAME_IN_SELECTOR, _T("Unknown name in selector."));
	pMap->Add(WX218X_ERROR_BADLY_FORMED_SELECTOR, _T("The repeated capability selector is badly-formed."));
	pMap->Add(WX218X_ERROR_UNKNOWN_PHYSICAL_IDENTIFIER, _T("Unknown physical repeated capability selector."));
	pMap->Add(WX218X_ERROR_TRIGGER_NOT_SOFTWARE, _T("The trigger source is not set to software trigger."));
	pMap->Add(WX218X_ERROR_NO_WFMS_AVAILABLE, _T("The function generator's waveform memory is full."));
	pMap->Add(WX218X_ERROR_WFM_IN_USE, _T("The waveform is currently in use."));
	pMap->Add(WX218X_ERROR_NO_SEQS_AVAILABLE, _T("The function generator sequence memory is full."));
	pMap->Add(WX218X_ERROR_SEQ_IN_USE, _T("The sequence is currently in use."));
	pMap->Add(WX218X_ERROR_ELEMENT_ARRAY_NOT_VALID, _T("Invalid value %1 of element number %2 parameter %3"));
	pMap->Add(WX218X_ERROR_HANDLE_CHANNEL_NOT_EXIST, _T("Handle %1 not exist for selected Channel %2"));
	pMap->Add(WX218X_ERROR_HANDLE_LOOP_JUMP_NOT_EQUAL, _T("Size of Handle array must be equal to size of Loop Count array and JumpFlag array"));
	pMap->Add(WX218X_ERROR_HANDLE_LOOP_NOT_EQUAL, _T("Size of Waveform Handle array must be equal to size of Loop Count array"));
	pMap->Add(WX218X_ERROR_INVALID_CONFIGURATION, _T("The configuration parameters for %1 waveform in method %2 sums up to a value more than 100%%,wich is invalid"));
	pMap->Add(WX218X_ERROR_LBOUND_ARRAY_EQUAL, _T("Lower Bound of arrays:Wfm Handle,Loop Count and JumpFlag must be the same value"));
	pMap->Add(WX218X_ERROR_LBOUND_ARRAY_ZERO, _T("Lower bound of array  %1 must be zero"));
	pMap->Add(WX218X_ERROR_MAX_COUNT_SEGMENTS, _T("Count of segments is already maximum value"));
	pMap->Add(WX218X_ERROR_NO_AVAILABLE_MEMORY, _T("There is no available memory "));
	pMap->Add(WX218X_ERROR_START_PHASE, _T("Start Phase is available only for sine and triangle waveforms"));
	pMap->Add(WX218X_ERROR_UBOUND_ARRAY_EQUAL, _T("Upper Bound of arrays must be the same value"));
	pMap->Add(WX218X_ERROR_UPPER_BOUND_ZERO, _T("Upper Bound of array %1 can not be zero"));
	pMap->Add(WX218X_ERROR_FEATURE_NOT_SUPPORTED, _T("Feature: %1 is not supported by current instrument: %2"));
	pMap->Add(WX218X_ERROR_SIZE_ARRAY_NOT_EQUAL, _T("All arrays should have the same size."));
	pMap->Add(WX218X_ERROR_DATA_ARRAY_EMPTY, _T("Data Array empty"));
	pMap->Add(WX218X_ERROR_SEGSIZE_ARBDIG_NOTEQUAL, _T("There is already digital data in segment %1 with size %2.If you want download arbitrary data in this segment, you should change size to %3"));
	pMap->Add(WX218X_ERROR_SEGSIZE_DIG_NOTEQUAL, _T("There is already arbitrary data in segment %1 with size %2..If you want download digital data in this segment, you should change size to %3"));
	pMap->Add(WX218X_ERROR_SEGMENT_NOT_EMPTY, _T("There is already data with size %1 in the segment %2.You should select another segment."));
	pMap->Add(WX218X_ERROR_INVALID_FILE_DATA, _T("Invalid Data in File %1."));
	pMap->Add(WX218X_ERROR_DIG_POD_NOT_PRESENT, _T("Digital Pod not present for Channel %1"));
	pMap->Add(WX218X_ERROR_INVALID_FILE_LENGTH, _T("Invalid File Length  %1."));
	pMap->Add(WX218X_ERROR_TRACE_MODE_NORMAL, _T("For Trace Mode %1 you should use function <CreateAdv>.If you want to use current function, change the trace mode."));
	pMap->Add(WX218X_ERROR_TRACE_MODE_DUPLICATE, _T("For Trace Mode %1 you should use function <Create>.If you want to use current function, change the trace mode."));
	pMap->Add(WX218X_ERROR_FILE_SIZE_NOT_EQUAL, _T("Files should be with the same size."));
	pMap->Add(WX218X_ERROR_TRACE_MODE_DUPLICATE_FILE, _T("For Trace Mode %1 you should use function <LoadArbWfmFromFile>.If you want to use current function, change the trace mode."));
	pMap->Add(WX218X_ERROR_TRACE_MODE_NORMAL_FILE, _T("For Trace Mode %1 you should use function <LoadArbWfmFromFileAdv>.If you want to use current function, change the trace mode."));
	pMap->Add(WX218X_ERROR_NOT_SUPPORTED_TRACE_MODE, _T("Function is not supported for current Trace Mode %1."));
	pMap->Add(WX218X_ERROR_SEG_NOT_EXIST, _T("Segment %1 not exist in arbitrary memory."));
	pMap->Add(WX218X_ERROR_DIG_POD_NOT_EXIST, _T("Digital Pod not exist."));
	pMap->Add(WX218X_ERROR_COUNT_SEG_NOT_EQUAL, _T("The count of segments on opposite channel is not equal.Delete all segments with function Clear."));
	pMap->Add(WX218X_ERROR_SIZE_NOT_EQUAL, _T("Segment size on opposite channel is not equal to the current size."));
	pMap->Add(WX218X_ERROR_TRACE_MODE_NOT_SUPP, _T("Function not supported for current trace mode."));
	pMap->Add(WX218X_ERROR_DIG_PORT_BIT_INDEX, _T("For Dig.Port<BOTH>, range of bit index:1-30,not include 15,16.For Dig.Port<1> range:1-14,for Dig.Port<2> range:17-30."));
	pMap->Add(WX218X_ERROR_COMMAND_EMPTY, _T("Command is empty"));
	pMap->Add(WX218X_SUCCESS, _T("Success."));
	pMap->Add(WX218X_WARN_NSUP_ID_QUERY, _T("ID Query is not supported by this instrument."));
	pMap->Add(WX218X_WARN_NSUP_RESET, _T("Reset is not supported by this instrument."));
	pMap->Add(WX218X_WARN_NSUP_SELF_TEST, _T("Self test is not supported by this instrument."));
	pMap->Add(WX218X_WARN_NSUP_ERROR_QUERY, _T("Error query is not supported by this instrument."));
	pMap->Add(WX218X_WARN_NSUP_REV_QUERY, _T("Firmware revision query is not supported by this instrument."));
}

///////////////////////////////////////////////////////////////////////////////
//
//	IVI-C auto generated implementation of functions and attributes
//

ViStatus _VI_FUNC wx218x_init ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViSession* Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_init(ResourceName, IdQuery, Reset, Vi);

	return status;
}

ViStatus _VI_FUNC wx218x_close ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_close(Vi);

	return status;
}

ViStatus _VI_FUNC wx218x_InitWithOptions ( ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViConstString OptionsString, ViSession* Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_InitWithOptions(ResourceName, IdQuery, Reset, OptionsString, Vi);

	return status;
}

ViStatus _VI_FUNC wx218x_revision_query ( ViSession Vi, ViChar DriverRev[], ViChar InstrRev[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_revision_query(Vi, DriverRev, InstrRev);

	return status;
}

ViStatus _VI_FUNC wx218x_error_message ( ViSession Vi, ViStatus ErrorCode, ViChar ErrorMessage[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_error_message(Vi, ErrorCode, ErrorMessage);

	return status;
}

ViStatus _VI_FUNC wx218x_GetError ( ViSession Vi, ViStatus* ErrorCode, ViInt32 ErrorDescriptionBufferSize, ViChar ErrorDescription[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetError(Vi, ErrorCode, ErrorDescriptionBufferSize, ErrorDescription);

	return status;
}

ViStatus _VI_FUNC wx218x_ClearError ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ClearError(Vi);

	return status;
}

ViStatus _VI_FUNC wx218x_ClearInterchangeWarnings ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ClearInterchangeWarnings(Vi);

	return status;
}

ViStatus _VI_FUNC wx218x_GetNextCoercionRecord ( ViSession Vi, ViInt32 CoercionRecordBufferSize, ViChar CoercionRecord[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetNextCoercionRecord(Vi, CoercionRecordBufferSize, CoercionRecord);

	return status;
}

ViStatus _VI_FUNC wx218x_GetNextInterchangeWarning ( ViSession Vi, ViInt32 InterchangeWarningBufferSize, ViChar InterchangeWarning[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetNextInterchangeWarning(Vi, InterchangeWarningBufferSize, InterchangeWarning);

	return status;
}

ViStatus _VI_FUNC wx218x_InvalidateAllAttributes ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_InvalidateAllAttributes(Vi);

	return status;
}

ViStatus _VI_FUNC wx218x_ResetInterchangeCheck ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ResetInterchangeCheck(Vi);

	return status;
}

ViStatus _VI_FUNC wx218x_Disable ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_Disable(Vi);

	return status;
}

ViStatus _VI_FUNC wx218x_error_query ( ViSession Vi, ViInt32* ErrorCode, ViChar ErrorMessage[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_error_query(Vi, ErrorCode, ErrorMessage);

	return status;
}

ViStatus _VI_FUNC wx218x_LockSession ( ViSession Vi, ViBoolean* CallerHasLock )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_LockSession(Vi, CallerHasLock);

	return status;
}

ViStatus _VI_FUNC wx218x_reset ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_reset(Vi);

	return status;
}

ViStatus _VI_FUNC wx218x_ResetWithDefaults ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_ResetWithDefaults(Vi);

	return status;
}

ViStatus _VI_FUNC wx218x_self_test ( ViSession Vi, ViInt16* TestResult, ViChar TestMessage[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_self_test(Vi, TestResult, TestMessage);

	return status;
}

ViStatus _VI_FUNC wx218x_UnlockSession ( ViSession Vi, ViBoolean* CallerHasLock )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_UnlockSession(Vi, CallerHasLock);

	return status;
}

ViStatus _VI_FUNC wx218x_GetChannelName ( ViSession Vi, ViInt32 Index, ViInt32 NameBufferSize, ViChar Name[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Index(Index);
		CParam<ViChar[]> _val;
		HRESULT hr = spOutput->get_Name(_Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusval = _val.GetVal(Name, NameBufferSize);
			status = status == VI_SUCCESS ? statusval : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViInt32(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_GetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViReal64(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_GetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViBoolean(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_GetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViSession(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_GetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_GetAttributeViString(Vi, RepCapIdentifier, AttributeID, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_SetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViInt32(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_SetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViReal64(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_SetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViBoolean(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_SetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViSession(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_SetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_SetAttributeViString(Vi, RepCapIdentifier, AttributeID, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureOperationMode ( ViSession Vi, ViConstString ChannelName, ViInt32 OperationMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViInt32> _val(OperationMode);
		HRESULT hr = spOutput->put_OperationMode(_ChannelName, (IviFgenOperationModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureOutputEnabled ( ViSession Vi, ViConstString ChannelName, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViBoolean> _val(Enabled);
		HRESULT hr = spOutput->put_Enabled(_ChannelName, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureOutputImpedance ( ViSession Vi, ViConstString ChannelName, ViReal64 Impedance )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViReal64> _val(Impedance);
		HRESULT hr = spOutput->put_Impedance(_ChannelName, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureOutputMode ( ViSession Vi, ViInt32 OutputMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(OutputMode);
		HRESULT hr = spOutput->put_OutputMode((IviFgenOutputModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureRefClockSource ( ViSession Vi, ViInt32 Source )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(Source);
		HRESULT hr = spOutput->put_ReferenceClockSource((IviFgenReferenceClockSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSampleRate ( ViSession Vi, ViReal64 SampleRate )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(SampleRate);
		HRESULT hr = spArbitrary->put_SampleRate(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ClearArbWaveform ( ViSession Vi, ViInt32 Handle )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Handle(Handle);
		HRESULT hr = spArbitraryWaveform->Clear(_Handle);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureArbWaveform ( ViSession Vi, ViConstString ChannelName, ViInt32 Handle, ViReal64 Gain, ViReal64 Offset )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViInt32> _Handle(Handle);
		CParam<ViReal64> _Gain(Gain);
		CParam<ViReal64> _Offset(Offset);
		HRESULT hr = spArbitraryWaveform->Configure(_ChannelName, _Handle, _Gain, _Offset);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateArbWaveform ( ViSession Vi, ViInt32 Size, ViReal64 Data[], ViInt32* Handle )
{
	if (Handle == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64[]> _Data(Data, Size);
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->Create(_Data, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Handle = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureArbFrequency ( ViSession Vi, ViConstString ChannelName, ViReal64 Frequency )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViReal64> _val(Frequency);
		HRESULT hr = spArbitraryWaveform->put_Frequency(_ChannelName, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ClearArbMemory ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spArbitrary->ClearMemory();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ClearArbSequence ( ViSession Vi, ViInt32 Handle )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Handle(Handle);
		HRESULT hr = spArbitrarySequence->Clear(_Handle);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureArbSequence ( ViSession Vi, ViConstString ChannelName, ViInt32 Handle, ViReal64 Gain, ViReal64 Offset )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViInt32> _Handle(Handle);
		CParam<ViReal64> _Gain(Gain);
		CParam<ViReal64> _Offset(Offset);
		HRESULT hr = spArbitrarySequence->Configure(_ChannelName, _Handle, _Gain, _Offset);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateArbSequence ( ViSession Vi, ViInt32 Length, ViInt32 WfmHandle[], ViInt32 LoopCount[], ViInt32* Handle )
{
	if (Handle == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32[]> _WfmHandle(WfmHandle, Length);
		CParam<ViInt32[]> _LoopCount(LoopCount, Length);
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->Create(_WfmHandle, _LoopCount, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Handle = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTriggerSource ( ViSession Vi, ViConstString ChannelName, ViInt32 Source )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViInt32> _val(Source);
		HRESULT hr = spTrigger->put_Source(_ChannelName, (IviFgenTriggerSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureInternalTriggerRate ( ViSession Vi, ViReal64 Rate )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(Rate);
		HRESULT hr = spTrigger->put_InternalRate(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureBurstCount ( ViSession Vi, ViConstString ChannelName, ViInt32 Count )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViInt32> _val(Count);
		HRESULT hr = spTrigger->put_BurstCount(_ChannelName, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureAMEnabled ( ViSession Vi, ViConstString ChannelName, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViBoolean> _val(Enabled);
		HRESULT hr = spAM->put_Enabled(_ChannelName, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureAMSource ( ViSession Vi, ViConstString ChannelName, ViInt32 Source )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViInt32> _val(Source);
		HRESULT hr = spAM->put_Source(_ChannelName, (IviFgenAMSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureAMInternal ( ViSession Vi, ViReal64 Depth, ViInt32 Waveform, ViReal64 Frequency )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Depth(Depth);
		CParam<ViInt32> _Waveform(Waveform);
		CParam<ViReal64> _Frequency(Frequency);
		HRESULT hr = spAM->ConfigureInternal(_Depth, (IviFgenAMInternalWaveformEnum)(long)_Waveform, _Frequency);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFMEnabled ( ViSession Vi, ViConstString ChannelName, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViBoolean> _val(Enabled);
		HRESULT hr = spFM->put_Enabled(_ChannelName, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFMSource ( ViSession Vi, ViConstString ChannelName, ViInt32 Source )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViInt32> _val(Source);
		HRESULT hr = spFM->put_Source(_ChannelName, (IviFgenFMSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFMInternal ( ViSession Vi, ViReal64 Deviation, ViInt32 Waveform, ViReal64 Frequency )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Deviation(Deviation);
		CParam<ViInt32> _Waveform(Waveform);
		CParam<ViReal64> _Frequency(Frequency);
		HRESULT hr = spFM->ConfigureInternal(_Deviation, (IviFgenFMInternalWaveformEnum)(long)_Waveform, _Frequency);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureStandardWaveform ( ViSession Vi, ViConstString ChannelName, ViInt32 Waveform, ViReal64 Amplitude, ViReal64 DCOffset, ViReal64 Frequency, ViReal64 StartPhase )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChannelName(ChannelName);
		CParam<ViInt32> _Waveform(Waveform);
		CParam<ViReal64> _Amplitude(Amplitude);
		CParam<ViReal64> _DCOffset(DCOffset);
		CParam<ViReal64> _Frequency(Frequency);
		CParam<ViReal64> _StartPhase(StartPhase);
		HRESULT hr = spStandardWaveform->Configure(_ChannelName, (IviFgenWaveformEnum)(long)_Waveform, _Amplitude, _DCOffset, _Frequency, _StartPhase);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_AbortGeneration ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgen> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spRoot->AbortGeneration();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_InitiateGeneration ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgen> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spRoot->InitiateGeneration();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SendSoftwareTrigger ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spTrigger->SendSoftwareTrigger();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_AbortGeneration2 ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218x> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spRoot->AbortGeneration();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_InitiateGeneration2 ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218x> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spRoot->InitiateGeneration();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetActiveChannel ( ViSession Vi, ViInt32 ChNameBufferSize, ViConstString ChName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218x> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _ChName(ChName);
		HRESULT hr = spRoot->SetActiveChannel(_ChName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SendCmd ( ViSession Vi, ViInt32 CommandBufferSize, ViConstString Command )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218x> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Command(Command);
		HRESULT hr = spRoot->SendCmd(_Command);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ReadQuery ( ViSession Vi, ViInt32 SendBuffBufferSize, ViConstString SendBuff, ViInt32 ReadBuffBufferSize, ViChar ReadBuff[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218x> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _SendBuff(SendBuff);
		CParam<ViChar[]> _ReadBuff;
		HRESULT hr = spRoot->ReadQuery(_SendBuff, &_ReadBuff);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			ViStatus statusReadBuff = _ReadBuff.GetVal(ReadBuff, ReadBuffBufferSize);
			status = status == VI_SUCCESS ? statusReadBuff : status;
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureInternalAM ( ViSession Vi, ViReal64 Depth, ViInt32 Waveform, ViReal64 Frequency )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Depth(Depth);
		CParam<ViInt32> _Waveform(Waveform);
		CParam<ViReal64> _Frequency(Frequency);
		HRESULT hr = spAM->ConfigureInternal(_Depth, (WX218xAMInternalWaveformEnum)(long)_Waveform, _Frequency);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureAMEnabled2 ( ViSession Vi, ViConstString Channel, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spAM->ConfigureAMEnabled(_Channel, _Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureRefExtFrequency ( ViSession Vi, ViConstString Channel, ViReal64 ExtFreq )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _ExtFreq(ExtFreq);
		HRESULT hr = spChannel->ConfigureRefExtFrequency(_Channel, _ExtFreq);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureExtFrequency ( ViSession Vi, ViConstString Channel, ViInt32 ExtFrequency )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _ExtFrequency(ExtFrequency);
		HRESULT hr = spChannel->ConfigureExtFrequency(_Channel, (WX218xExtFrequencyEnum)(long)_ExtFrequency);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureOutputStateAllCh ( ViSession Vi, ViBoolean State )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _State(State);
		HRESULT hr = spChannel->ConfigureOutputStateAllCh(_State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureCoupleAllCh ( ViSession Vi, ViInt32 Couple )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Couple(Couple);
		HRESULT hr = spChannel->ConfigureCoupleAllCh((WX218xOutputCoupleEnum)(long)_Couple);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSyncEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spChannelSync->ConfigureSyncEnabled(_Channel, _Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSyncFunction ( ViSession Vi, ViConstString Channel, ViInt32 Function )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Function(Function);
		HRESULT hr = spChannelSync->ConfigureSyncFunction(_Channel, (WX218xOutputSyncFunctionEnum)(long)_Function);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSyncPosition ( ViSession Vi, ViConstString Channel, ViInt32 Position )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Position(Position);
		HRESULT hr = spChannelSync->ConfigureSyncPosition(_Channel, _Position);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSyncSource ( ViSession Vi, ViInt32 Source )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Source(Source);
		HRESULT hr = spChannelSync->ConfigureSyncSource((WX218xOutputSyncSourceEnum)(long)_Source);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSyncWidth ( ViSession Vi, ViConstString Channel, ViInt32 Width )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Width(Width);
		HRESULT hr = spChannelSync->ConfigureSyncWidth(_Channel, _Width);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureRampWaveform ( ViSession Vi, ViConstString Channel, ViReal64 Delay, ViReal64 RiseTime, ViReal64 FallTime )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Delay(Delay);
		CParam<ViReal64> _RiseTime(RiseTime);
		CParam<ViReal64> _FallTime(FallTime);
		HRESULT hr = spStandardWaveform->ConfigureRampWaveform(_Channel, _Delay, _RiseTime, _FallTime);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetAmplitudeMax ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spStandardWaveform->SetAmplitudeMax(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetAmplitudeMin ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spStandardWaveform->SetAmplitudeMin(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetDCOffsetMax ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spStandardWaveform->SetDCOffsetMax(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetDCOffsetMin ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spStandardWaveform->SetDCOffsetMin(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetFrequencyMax ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spStandardWaveform->SetFrequencyMax(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetFrequencyMin ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spStandardWaveform->SetFrequencyMin(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetPowerMax ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spStandardWaveform->SetPowerMax(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetPowerMin ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spStandardWaveform->SetPowerMin(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_Configure ( ViSession Vi, ViConstString Channel, ViInt32 Waveform, ViReal64 Amplitude, ViReal64 DCOffset, ViReal64 Frequency, ViReal64 StartPhase )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Waveform(Waveform);
		CParam<ViReal64> _Amplitude(Amplitude);
		CParam<ViReal64> _DCOffset(DCOffset);
		CParam<ViReal64> _Frequency(Frequency);
		CParam<ViReal64> _StartPhase(StartPhase);
		HRESULT hr = spStandardWaveform->Configure(_Channel, (WX218xWaveformEnum)(long)_Waveform, _Amplitude, _DCOffset, _Frequency, _StartPhase);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDCLevel ( ViSession Vi, ViConstString Channel, ViReal64 DcLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _DcLevel(DcLevel);
		HRESULT hr = spStandardWaveform->ConfigureDCLevel(_Channel, _DcLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDutyCycle ( ViSession Vi, ViConstString Channel, ViReal64 DutyCycle )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _DutyCycle(DutyCycle);
		HRESULT hr = spStandardWaveform->ConfigureDutyCycle(_Channel, _DutyCycle);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureExponenent ( ViSession Vi, ViConstString Channel, ViInt32 Exponent )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Exponent(Exponent);
		HRESULT hr = spStandardWaveform->ConfigureExponenent(_Channel, _Exponent);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureGauss ( ViSession Vi, ViConstString Channel, ViInt32 Gauss )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Gauss(Gauss);
		HRESULT hr = spStandardWaveform->ConfigureGauss(_Channel, _Gauss);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureHvAmplitude ( ViSession Vi, ViConstString Channel, ViReal64 HvAmplitude )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _HvAmplitude(HvAmplitude);
		HRESULT hr = spStandardWaveform->ConfigureHvAmplitude(_Channel, _HvAmplitude);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePower ( ViSession Vi, ViConstString Channel, ViReal64 Power )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Power(Power);
		HRESULT hr = spStandardWaveform->ConfigurePower(_Channel, _Power);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSincNCycles ( ViSession Vi, ViConstString Channel, ViInt32 Cycles )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Cycles(Cycles);
		HRESULT hr = spStandardWaveform->ConfigureSincNCycles(_Channel, _Cycles);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureAmplitudeAllCh ( ViSession Vi, ViReal64 Amplitude )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Amplitude(Amplitude);
		HRESULT hr = spStandardWaveform->ConfigureAmplitudeAllCh(_Amplitude);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureHVAmplAllCh ( ViSession Vi, ViReal64 HVAmplitude )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _HVAmplitude(HVAmplitude);
		HRESULT hr = spStandardWaveform->ConfigureHVAmplAllCh(_HVAmplitude);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureOffsetAllCh ( ViSession Vi, ViReal64 Offset )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Offset(Offset);
		HRESULT hr = spStandardWaveform->ConfigureOffsetAllCh(_Offset);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ClearMemory ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spArbitrary->ClearMemory();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetSampleRateMax ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spArbitrary->SetSampleRateMax();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetSampleRateMin ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spArbitrary->SetSampleRateMin();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureClockDivider ( ViSession Vi, ViConstString Channel, ViInt32 ClockDivider )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _ClockDivider(ClockDivider);
		HRESULT hr = spArbitrary->ConfigureClockDivider(_Channel, _ClockDivider);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSampleRateSource ( ViSession Vi, ViConstString Channel, ViInt32 SampleRateSource )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _SampleRateSource(SampleRateSource);
		HRESULT hr = spArbitrary->ConfigureSampleRateSource(_Channel, (WX218xSampleRateSourceEnum)(long)_SampleRateSource);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureArbSource ( ViSession Vi, ViConstString Channel, ViInt32 Source )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Source(Source);
		HRESULT hr = spArbitrary->ConfigureArbSource(_Channel, (WX218xArbitrarySourceEnum)(long)_Source);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureArbTiming ( ViSession Vi, ViConstString Channel, ViInt32 Timing )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Timing(Timing);
		HRESULT hr = spArbitrary->ConfigureArbTiming(_Channel, (WX218xArbitraryTimingEnum)(long)_Timing);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFreqRastDivider ( ViSession Vi, ViConstString Channel, ViInt32 Divider )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Divider(Divider);
		HRESULT hr = spArbitrary->ConfigureFreqRastDivider(_Channel, (WX218xFreqDividerEnum)(long)_Divider);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureArbGain ( ViSession Vi, ViConstString Channel, ViReal64 Gain )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Gain(Gain);
		HRESULT hr = spArbitrary->ConfigureArbGain(_Channel, _Gain);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureArbOffset ( ViSession Vi, ViConstString Channel, ViReal64 Offset )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Offset(Offset);
		HRESULT hr = spArbitrary->ConfigureArbOffset(_Channel, _Offset);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureArbSampleRate ( ViSession Vi, ViReal64 SampleRate )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _SampleRate(SampleRate);
		HRESULT hr = spArbitrary->ConfigureArbSampleRate(_SampleRate);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ClearArbitraryWaveform ( ViSession Vi, ViInt32 Handle )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Handle(Handle);
		HRESULT hr = spArbitraryWaveform->Clear(_Handle);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureArbitraryWaveform ( ViSession Vi, ViConstString Channel, ViInt32 Handle, ViReal64 Gain, ViReal64 Offset )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Handle(Handle);
		CParam<ViReal64> _Gain(Gain);
		CParam<ViReal64> _Offset(Offset);
		HRESULT hr = spArbitraryWaveform->Configure(_Channel, _Handle, _Gain, _Offset);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateArbitraryWaveform ( ViSession Vi, ViInt32 DataBufferSize, ViReal64 Data[], ViInt32* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64[]> _Data(Data, DataBufferSize);
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->Create(_Data, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadArbWfmFromFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->LoadArbWfmFromFile(_Channel, _FileName, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateArbitraryWaveformCustom ( ViSession Vi, ViInt32 DataBufferSize, ViInt16 Data[], ViInt32* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt16[]> _Data(Data, DataBufferSize);
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->CreateCustom(_Data, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadArbWfmFromFileAdv ( ViSession Vi, ViConstString Channel, ViInt32 FileName1BufferSize, ViConstString FileName1, ViInt32 FileName2BufferSize, ViConstString FileName2, ViInt32* Handle1, ViInt32* Handle2 )
{
	if (Handle1 == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle1 is VI_NULL."));
	if (Handle2 == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle2 is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName1(FileName1);
		CParam<ViConstString> _FileName2(FileName2);
		CParam<ViInt32> _Handle1;
		CParam<ViInt32> _Handle2;
		HRESULT hr = spArbitraryWaveform->LoadArbWfmFromFileAdv(_Channel, _FileName1, _FileName2, &_Handle1, &_Handle2);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Handle1 = _Handle1.GetVal();
			*Handle2 = _Handle2.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateCustomAdv ( ViSession Vi, ViInt32 Data1BufferSize, ViInt16 Data1[], ViInt32 Data2BufferSize, ViInt16 Data2[], ViInt32* Handle1, ViInt32* Handle2 )
{
	if (Handle1 == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle1 is VI_NULL."));
	if (Handle2 == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle2 is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt16[]> _Data1(Data1, Data1BufferSize);
		CParam<ViInt16[]> _Data2(Data2, Data2BufferSize);
		CParam<ViInt32> _Handle1;
		CParam<ViInt32> _Handle2;
		HRESULT hr = spArbitraryWaveform->CreateCustomAdv(_Data1, _Data2, &_Handle1, &_Handle2);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Handle1 = _Handle1.GetVal();
			*Handle2 = _Handle2.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetCoupleActiveSegment ( ViSession Vi, ViInt32 SegNum1, ViInt32 SegNum2 )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _SegNum1(SegNum1);
		CParam<ViInt32> _SegNum2(SegNum2);
		HRESULT hr = spArbitraryWaveform->SetCoupleActiveSegment(_SegNum1, _SegNum2);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetActiveSegment ( ViSession Vi, ViConstString Channel, ViInt32 SegNum )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _SegNum(SegNum);
		HRESULT hr = spArbitraryWaveform->SetActiveSegment(_Channel, _SegNum);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureArbWaveTraceMode ( ViSession Vi, ViInt32 TraceMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _TraceMode(TraceMode);
		HRESULT hr = spArbitraryWaveform->ConfigureArbWaveTraceMode((WX218xTraceModeEnum)(long)_TraceMode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadBinaryArbWfmFromFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->LoadBinaryArbWfmFromFile(_Channel, _FileName, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadBinaryArbWfmFromFileAdv ( ViSession Vi, ViConstString Channel, ViInt32 FileName1BufferSize, ViConstString FileName1, ViInt32 FileName2BufferSize, ViConstString FileName2, ViInt32* Handle1, ViInt32* Handle2 )
{
	if (Handle1 == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle1 is VI_NULL."));
	if (Handle2 == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle2 is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName1(FileName1);
		CParam<ViConstString> _FileName2(FileName2);
		CParam<ViInt32> _Handle1;
		CParam<ViInt32> _Handle2;
		HRESULT hr = spArbitraryWaveform->LoadBinaryArbWfmFromFileAdv(_Channel, _FileName1, _FileName2, &_Handle1, &_Handle2);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Handle1 = _Handle1.GetVal();
			*Handle2 = _Handle2.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadAsciiArbWfmFromFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->LoadAsciiArbWfmFromFile(_Channel, _FileName, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadAsciiArbWfmFromFileAdv ( ViSession Vi, ViConstString Channel, ViInt32 FileName1BufferSize, ViConstString FileName1, ViInt32 FileName2BufferSize, ViConstString FileName2, ViInt32* Handle1, ViInt32* Handle2 )
{
	if (Handle1 == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle1 is VI_NULL."));
	if (Handle2 == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle2 is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName1(FileName1);
		CParam<ViConstString> _FileName2(FileName2);
		CParam<ViInt32> _Handle1;
		CParam<ViInt32> _Handle2;
		HRESULT hr = spArbitraryWaveform->LoadAsciiArbWfmFromFileAdv(_Channel, _FileName1, _FileName2, &_Handle1, &_Handle2);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Handle1 = _Handle1.GetVal();
			*Handle2 = _Handle2.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDownloadRecord ( ViSession Vi, ViInt32 DownloadRecord )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _DownloadRecord(DownloadRecord);
		HRESULT hr = spArbitraryWaveform->ConfigureDownloadRecord((WX218xArbDownloadRecordEnum)(long)_DownloadRecord);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadCSVFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->LoadCSVFile(_Channel, _FileName, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadCSVFileAdv ( ViSession Vi, ViConstString Channel, ViInt32 FileName1BufferSize, ViConstString FileName1, ViInt32 FileName2BufferSize, ViConstString FileName2, ViInt32* Handle1, ViInt32* Handle2 )
{
	if (Handle1 == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle1 is VI_NULL."));
	if (Handle2 == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Handle2 is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName1(FileName1);
		CParam<ViConstString> _FileName2(FileName2);
		CParam<ViInt32> _Handle1;
		CParam<ViInt32> _Handle2;
		HRESULT hr = spArbitraryWaveform->LoadCSVFileAdv(_Channel, _FileName1, _FileName2, &_Handle1, &_Handle2);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Handle1 = _Handle1.GetVal();
			*Handle2 = _Handle2.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ClearArbitrarySequence ( ViSession Vi, ViInt32 Handle )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Handle(Handle);
		HRESULT hr = spArbitrarySequence->Clear(_Handle);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureArbitrarySequence ( ViSession Vi, ViConstString Channel, ViInt32 Handle, ViReal64 Gain, ViReal64 Offset )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Handle(Handle);
		CParam<ViReal64> _Gain(Gain);
		CParam<ViReal64> _Offset(Offset);
		HRESULT hr = spArbitrarySequence->Configure(_Channel, _Handle, _Gain, _Offset);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateArbitrarySequence ( ViSession Vi, ViInt32 WfmHandleBufferSize, ViInt32 WfmHandle[], ViInt32 LoopCountBufferSize, ViInt32 LoopCount[], ViInt32* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32[]> _WfmHandle(WfmHandle, WfmHandleBufferSize);
		CParam<ViInt32[]> _LoopCount(LoopCount, LoopCountBufferSize);
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->Create(_WfmHandle, _LoopCount, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateSequenceAdv ( ViSession Vi, ViInt32 WfmHandleBufferSize, ViInt32 WfmHandle[], ViInt32 LoopCountBufferSize, ViInt32 LoopCount[], ViInt32 JumpFlagBufferSize, ViChar JumpFlag[], ViInt32* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32[]> _WfmHandle(WfmHandle, WfmHandleBufferSize);
		CParam<ViInt32[]> _LoopCount(LoopCount, LoopCountBufferSize);
		CParam<ViByte[]> _JumpFlag(JumpFlag, JumpFlagBufferSize);
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->CreateSequenceAdv(_WfmHandle, _LoopCount, _JumpFlag, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetCoupleActiveSequence ( ViSession Vi, ViInt32 SeqNum1, ViInt32 SeqNum2 )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _SeqNum1(SeqNum1);
		CParam<ViInt32> _SeqNum2(SeqNum2);
		HRESULT hr = spArbitrarySequence->SetCoupleActiveSequence(_SeqNum1, _SeqNum2);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetActiveSequence ( ViSession Vi, ViConstString Channel, ViInt32 SeqNum )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _SeqNum(SeqNum);
		HRESULT hr = spArbitrarySequence->SetActiveSequence(_Channel, _SeqNum);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateSequenceAdv1 ( ViSession Vi, ViInt32 WfmHandleBufferSize, ViInt32 WfmHandle[], ViInt32 LoopCountBufferSize, ViInt32 LoopCount[], ViInt32 JumpFlagBufferSize, ViInt32 JumpFlag[], ViInt32* Val )
{
	if (Val == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Val is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32[]> _WfmHandle(WfmHandle, WfmHandleBufferSize);
		CParam<ViInt32[]> _LoopCount(LoopCount, LoopCountBufferSize);
		CParam<ViInt32[]> _JumpFlag(JumpFlag, JumpFlagBufferSize);
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->CreateSequenceAdv1(_WfmHandle, _LoopCount, _JumpFlag, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Val = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureAdvanceMode ( ViSession Vi, ViConstString Channel, ViInt32 AdvanceMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _AdvanceMode(AdvanceMode);
		HRESULT hr = spArbitrarySequence->ConfigureAdvanceMode(_Channel, (WX218xSequenceAdvanceModeEnum)(long)_AdvanceMode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSeqJumpEvent ( ViSession Vi, ViConstString Channel, ViInt32 JumpEvent )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _JumpEvent(JumpEvent);
		HRESULT hr = spArbitrarySequence->ConfigureSeqJumpEvent(_Channel, (WX218xSequenceJumpEventEnum)(long)_JumpEvent);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSeqPrestep ( ViSession Vi, ViConstString Channel, ViInt32 Prestep )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Prestep(Prestep);
		HRESULT hr = spArbitrarySequence->ConfigureSeqPrestep(_Channel, (WX218xSequencePrestepEnum)(long)_Prestep);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSeqSource ( ViSession Vi, ViConstString Channel, ViInt32 Source )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Source(Source);
		HRESULT hr = spArbitrarySequence->ConfigureSeqSource(_Channel, (WX218xSequenceSourceEnum)(long)_Source);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSeqSyncLock ( ViSession Vi, ViConstString Channel, ViInt32 SyncLock )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _SyncLock(SyncLock);
		HRESULT hr = spArbitrarySequence->ConfigureSeqSyncLock(_Channel, _SyncLock);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSeqTiming ( ViSession Vi, ViConstString Channel, ViInt32 Timing )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Timing(Timing);
		HRESULT hr = spArbitrarySequence->ConfigureSeqTiming(_Channel, (WX218xSequenceTimingEnum)(long)_Timing);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureOnceCount ( ViSession Vi, ViConstString Channel, ViInt32 Count )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Count(Count);
		HRESULT hr = spArbitrarySequence->ConfigureOnceCount(_Channel, _Count);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateAdvSequence ( ViSession Vi, ViInt32 SeqHandleBufferSize, ViInt32 SeqHandle[], ViInt32 LoopCountBufferSize, ViInt32 LoopCount[], ViInt32 JumpFlagBufferSize, ViChar JumpFlag[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequenceAdvanceSequence> spArbitrarySequenceAdvanceSequence;
	status = GetDriverInterface(Vi, &spArbitrarySequenceAdvanceSequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32[]> _SeqHandle(SeqHandle, SeqHandleBufferSize);
		CParam<ViInt32[]> _LoopCount(LoopCount, LoopCountBufferSize);
		CParam<ViByte[]> _JumpFlag(JumpFlag, JumpFlagBufferSize);
		HRESULT hr = spArbitrarySequenceAdvanceSequence->CreateAdvSequence(_SeqHandle, _LoopCount, _JumpFlag);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_DeleteAdvSequence ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequenceAdvanceSequence> spArbitrarySequenceAdvanceSequence;
	status = GetDriverInterface(Vi, &spArbitrarySequenceAdvanceSequence);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spArbitrarySequenceAdvanceSequence->DeleteAdvSequence();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateAdvSequence1 ( ViSession Vi, ViInt32 SeqHandleBufferSize, ViInt32 SeqHandle[], ViInt32 LoopCountBufferSize, ViInt32 LoopCount[], ViInt32 JumpFlagBufferSize, ViInt32 JumpFlag[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequenceAdvanceSequence> spArbitrarySequenceAdvanceSequence;
	status = GetDriverInterface(Vi, &spArbitrarySequenceAdvanceSequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32[]> _SeqHandle(SeqHandle, SeqHandleBufferSize);
		CParam<ViInt32[]> _LoopCount(LoopCount, LoopCountBufferSize);
		CParam<ViInt32[]> _JumpFlag(JumpFlag, JumpFlagBufferSize);
		HRESULT hr = spArbitrarySequenceAdvanceSequence->CreateAdvSequence1(_SeqHandle, _LoopCount, _JumpFlag);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureOnceCount2 ( ViSession Vi, ViConstString Channel, ViInt32 Count )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequenceAdvanceSequence> spArbitrarySequenceAdvanceSequence;
	status = GetDriverInterface(Vi, &spArbitrarySequenceAdvanceSequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Count(Count);
		HRESULT hr = spArbitrarySequenceAdvanceSequence->ConfigureOnceCount(_Channel, _Count);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureCarrFreq ( ViSession Vi, ViConstString Channel, ViReal64 Freq )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCarrierModulation> spCarrierModulation;
	status = GetDriverInterface(Vi, &spCarrierModulation);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Freq(Freq);
		HRESULT hr = spCarrierModulation->ConfigureCarrFreq(_Channel, _Freq);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureCarrWaveform ( ViSession Vi, ViConstString Channel, ViInt32 Waveform )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCarrierModulation> spCarrierModulation;
	status = GetDriverInterface(Vi, &spCarrierModulation);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Waveform(Waveform);
		HRESULT hr = spCarrierModulation->ConfigureCarrWaveform(_Channel, (WX218xCarrierModulationWaveformEnum)(long)_Waveform);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureCoupleEnabled ( ViSession Vi, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCouple> spCouple;
	status = GetDriverInterface(Vi, &spCouple);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spCouple->ConfigureCoupleEnabled(_Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureCoupleOffset ( ViSession Vi, ViConstString Channel, ViInt32 Offset )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCouple> spCouple;
	status = GetDriverInterface(Vi, &spCouple);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Offset(Offset);
		HRESULT hr = spCouple->ConfigureCoupleOffset(_Channel, _Offset);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureCoupleSkew ( ViSession Vi, ViReal64 Skew )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCouple> spCouple;
	status = GetDriverInterface(Vi, &spCouple);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Skew(Skew);
		HRESULT hr = spCouple->ConfigureCoupleSkew(_Skew);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureInternalFM ( ViSession Vi, ViReal64 Deviation, ViInt32 Waveform, ViReal64 Frequency )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _Deviation(Deviation);
		CParam<ViInt32> _Waveform(Waveform);
		CParam<ViReal64> _Frequency(Frequency);
		HRESULT hr = spFM->ConfigureInternal(_Deviation, (WX218xFMInternalWaveformEnum)(long)_Waveform, _Frequency);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFMEnabled2 ( ViSession Vi, ViConstString Channel, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spFM->ConfigureFMEnabled(_Channel, _Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFMMarker ( ViSession Vi, ViConstString Channel, ViReal64 Marker )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Marker(Marker);
		HRESULT hr = spFM->ConfigureFMMarker(_Channel, _Marker);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetMarkerDelay ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* Delay )
{
	if (Delay == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Delay is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val;
		HRESULT hr = spMarkers->get_Delay(_Channel, _Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Delay = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetMarkerDelay ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 Delay )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val(Delay);
		HRESULT hr = spMarkers->put_Delay(_Channel, _Index, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetMarkerEnabled ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViBoolean* Enabled )
{
	if (Enabled == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Enabled is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViBoolean> _val;
		HRESULT hr = spMarkers->get_Enabled(_Channel, _Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Enabled = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetMarkerEnabled ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViBoolean> _val(Enabled);
		HRESULT hr = spMarkers->put_Enabled(_Channel, _Index, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetMarkerHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* HighLevel )
{
	if (HighLevel == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter HighLevel is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val;
		HRESULT hr = spMarkers->get_HighLevel(_Channel, _Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HighLevel = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetMarkerHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 HighLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val(HighLevel);
		HRESULT hr = spMarkers->put_HighLevel(_Channel, _Index, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetMarkerLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* LowLevel )
{
	if (LowLevel == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter LowLevel is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val;
		HRESULT hr = spMarkers->get_LowLevel(_Channel, _Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*LowLevel = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetMarkerLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 LowLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val(LowLevel);
		HRESULT hr = spMarkers->put_LowLevel(_Channel, _Index, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetMarkerPosition ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32* Position )
{
	if (Position == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Position is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViInt32> _val;
		HRESULT hr = spMarkers->get_Position(_Channel, _Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Position = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetMarkerPosition ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Position )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViInt32> _val(Position);
		HRESULT hr = spMarkers->put_Position(_Channel, _Index, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetMarkerWidth ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32* Width )
{
	if (Width == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Width is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViInt32> _val;
		HRESULT hr = spMarkers->get_Width(_Channel, _Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Width = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetMarkerWidth ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Width )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViInt32> _val(Width);
		HRESULT hr = spMarkers->put_Width(_Channel, _Index, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetMarkerControl ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32* Control )
{
	if (Control == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Control is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViInt32> _val;
		HRESULT hr = spMarkers->get_Control(_Channel, _Index, (WX218xMarkerControlEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Control = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetMarkerControl ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Control )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViInt32> _val(Control);
		HRESULT hr = spMarkers->put_Control(_Channel, _Index, (WX218xMarkerControlEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_MarkerRefresh ( ViSession Vi, ViConstString Channel, ViInt32 Index )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		HRESULT hr = spMarkers->Refresh(_Channel, _Index);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureMarkerControl ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Control )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViInt32> _Control(Control);
		HRESULT hr = spMarkers->ConfigureMarkerControl(_Channel, _Index, (WX218xMarkerControlEnum)(long)_Control);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureMarkerDelay ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 Delay )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _Delay(Delay);
		HRESULT hr = spMarkers->ConfigureMarkerDelay(_Channel, _Index, _Delay);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureMarkerEnabled ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spMarkers->ConfigureMarkerEnabled(_Channel, _Index, _Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureMarkerHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 HighLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _HighLevel(HighLevel);
		HRESULT hr = spMarkers->ConfigureMarkerHighLevel(_Channel, _Index, _HighLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureMarkerLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 LowLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _LowLevel(LowLevel);
		HRESULT hr = spMarkers->ConfigureMarkerLowLevel(_Channel, _Index, _LowLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureMarkerIndex ( ViSession Vi, ViConstString Channel, ViInt32 Index )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		HRESULT hr = spMarkers->ConfigureMarkerIndex(_Channel, _Index);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureMarkerPosition ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Position )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViInt32> _Position(Position);
		HRESULT hr = spMarkers->ConfigureMarkerPosition(_Channel, _Index, _Position);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureMarkerSource ( ViSession Vi, ViConstString Channel, ViInt32 Source )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Source(Source);
		HRESULT hr = spMarkers->ConfigureMarkerSource(_Channel, (WX218xMarkerSourceEnum)(long)_Source);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureMarkerWidth ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViInt32 Width )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViInt32> _Width(Width);
		HRESULT hr = spMarkers->ConfigureMarkerWidth(_Channel, _Index, _Width);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_MarkerRefresh2 ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spMarkers->MarkerRefresh(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureMarkerHighLevel4Ch ( ViSession Vi, ViConstString Channel, ViReal64 HighLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _HighLevel(HighLevel);
		HRESULT hr = spMarkers->ConfigureMarkerHighLevel4Ch(_Channel, _HighLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureMarkerLowLevel4Ch ( ViSession Vi, ViConstString Channel, ViReal64 LowLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _LowLevel(LowLevel);
		HRESULT hr = spMarkers->ConfigureMarkerLowLevel4Ch(_Channel, _LowLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SendSoftwareTrigger2 ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spTrigger->SendSoftwareTrigger();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetTrigECLLevel ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spTrigger->SetECLLevel(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetTrigTTLLevel ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spTrigger->SetTTLLevel(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureBurstCount2 ( ViSession Vi, ViConstString Channel, ViInt32 Count )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Count(Count);
		HRESULT hr = spTrigger->ConfigureBurstCount(_Channel, _Count);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTriggerDelay ( ViSession Vi, ViConstString Channel, ViInt32 Delay )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Delay(Delay);
		HRESULT hr = spTrigger->ConfigureTriggerDelay(_Channel, _Delay);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_Configure2 ( ViSession Vi, ViConstString Channel, ViReal64 Level )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Level(Level);
		HRESULT hr = spTrigger->ConfigureTriggerLevel(_Channel, _Level);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTriggerTimerDelay ( ViSession Vi, ViConstString Channel, ViInt32 TimerDelay )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _TimerDelay(TimerDelay);
		HRESULT hr = spTrigger->ConfigureTriggerTimerDelay(_Channel, _TimerDelay);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTriggerTimerTime ( ViSession Vi, ViConstString Channel, ViReal64 TimerTime )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _TimerTime(TimerTime);
		HRESULT hr = spTrigger->ConfigureTriggerTimerTime(_Channel, _TimerTime);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTrigContMode ( ViSession Vi, ViConstString Channel, ViInt32 ContMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _ContMode(ContMode);
		HRESULT hr = spTrigger->ConfigureTrigContMode(_Channel, (WX218xContinuousModeEnum)(long)_ContMode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTrigContSource ( ViSession Vi, ViConstString Channel, ViInt32 Source )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Source(Source);
		HRESULT hr = spTrigger->ConfigureTrigContSource(_Channel, (WX218xContinuousSourceEnum)(long)_Source);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTrigSlope ( ViSession Vi, ViConstString Channel, ViInt32 Slope )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Slope(Slope);
		HRESULT hr = spTrigger->ConfigureTrigSlope(_Channel, (WX218xTriggerSlopeEnum)(long)_Slope);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTrigSource ( ViSession Vi, ViConstString Channel, ViInt32 Source )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Source(Source);
		HRESULT hr = spTrigger->ConfigureTrigSource(_Channel, (WX218xTriggerSourceEnum)(long)_Source);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTrigTimerMode ( ViSession Vi, ViConstString Channel, ViInt32 TimerMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _TimerMode(TimerMode);
		HRESULT hr = spTrigger->ConfigureTrigTimerMode(_Channel, (WX218xTriggerTimerModeEnum)(long)_TimerMode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTriggerMode ( ViSession Vi, ViConstString Channel, ViInt32 Mode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Mode(Mode);
		HRESULT hr = spTrigger->ConfigureTriggerMode(_Channel, (WX218xTriggerModeEnum)(long)_Mode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTriggerImpedance ( ViSession Vi, ViInt32 TriggerImpedance )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _TriggerImpedance(TriggerImpedance);
		HRESULT hr = spTrigger->ConfigureTriggerImpedance((WX218xTriggerImpedanceEnum)(long)_TriggerImpedance);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetArmECLLevel ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerARM> spTriggerARM;
	status = GetDriverInterface(Vi, &spTriggerARM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spTriggerARM->SetECLLevel(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetArmTtlLevel ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerARM> spTriggerARM;
	status = GetDriverInterface(Vi, &spTriggerARM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spTriggerARM->SetTtlLevel(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTrigARMLevel ( ViSession Vi, ViConstString Channel, ViReal64 Level )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerARM> spTriggerARM;
	status = GetDriverInterface(Vi, &spTriggerARM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Level(Level);
		HRESULT hr = spTriggerARM->ConfigureTrigARMLevel(_Channel, _Level);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureTrigARMSlope ( ViSession Vi, ViConstString Channel, ViInt32 Slope )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerARM> spTriggerARM;
	status = GetDriverInterface(Vi, &spTriggerARM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Slope(Slope);
		HRESULT hr = spTriggerARM->ConfigureTrigARMSlope(_Channel, (WX218xArmSlopeEnum)(long)_Slope);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSmartTrigHiPassEnabled ( ViSession Vi, ViConstString Channel, ViBoolean State )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _State(State);
		HRESULT hr = spTriggerSmartTrigger->ConfigureSmartTrigHiPassEnabled(_Channel, _State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSmartTrigHiPassWidth ( ViSession Vi, ViConstString Channel, ViReal64 Width )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Width(Width);
		HRESULT hr = spTriggerSmartTrigger->ConfigureSmartTrigHiPassWidth(_Channel, _Width);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSmartTrigHoldoff ( ViSession Vi, ViConstString Channel, ViReal64 Holdoff )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Holdoff(Holdoff);
		HRESULT hr = spTriggerSmartTrigger->ConfigureSmartTrigHoldoff(_Channel, _Holdoff);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSmartTrigHoldoffState ( ViSession Vi, ViConstString Channel, ViBoolean State )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _State(State);
		HRESULT hr = spTriggerSmartTrigger->ConfigureSmartTrigHoldoffState(_Channel, _State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSmartTrigLowPassState ( ViSession Vi, ViConstString Channel, ViBoolean State )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _State(State);
		HRESULT hr = spTriggerSmartTrigger->ConfigureSmartTrigLowPassState(_Channel, _State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSmartTrigLowPassWidth ( ViSession Vi, ViConstString Channel, ViReal64 Width )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Width(Width);
		HRESULT hr = spTriggerSmartTrigger->ConfigureSmartTrigLowPassWidth(_Channel, _Width);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_StageStorageClear ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spStateStorage->Clear();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_StateStorageLoad ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spStateStorage->Load();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_StateStorageRecall ( ViSession Vi, ViInt32 Cell, ViInt32 Target )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Cell(Cell);
		CParam<ViInt32> _Target(Target);
		HRESULT hr = spStateStorage->Recall(_Cell, (WX218xStateStorageTargetEnum)(long)_Target);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_StateStorageSave ( ViSession Vi )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spStateStorage->Save();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_StateStorageStore ( ViSession Vi, ViInt32 Cell, ViInt32 Configuration, ViInt32 Target )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Cell(Cell);
		CParam<ViInt32> _Configuration(Configuration);
		CParam<ViInt32> _Target(Target);
		HRESULT hr = spStateStorage->Store(_Cell, (WX218xStateStorageConfigurationEnum)(long)_Configuration, (WX218xStateStorageTargetEnum)(long)_Target);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureXInstrumentEnabled ( ViSession Vi, ViBoolean State )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _State(State);
		HRESULT hr = spXInstrument->ConfigureXInstrumentEnabled(_State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureXInstrumentMode ( ViSession Vi, ViInt32 Mode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Mode(Mode);
		HRESULT hr = spXInstrument->ConfigureXInstrumentMode((WX218xXInstrumentModeEnum)(long)_Mode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureXInstrumentModeAdv ( ViSession Vi, ViInt32 ModeAdv )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _ModeAdv(ModeAdv);
		HRESULT hr = spXInstrument->ConfigureXInstrumentModeAdv((WX218xXInstrumentModeAdvEnum)(long)_ModeAdv);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureXInstrumentOffset ( ViSession Vi, ViInt32 Offset )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _Offset(Offset);
		HRESULT hr = spXInstrument->ConfigureXInstrumentOffset(_Offset);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetDigPulseAmplitudeMax ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spDigitalPulse->SetAmplitudeMax(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetDigPulseAmplitudeMin ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spDigitalPulse->SetAmplitudeMin(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetDigPulseOffsetMax ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spDigitalPulse->SetOffsetMax(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetDigPulseOffsetMin ( ViSession Vi, ViConstString Channel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		HRESULT hr = spDigitalPulse->SetOffsetMin(_Channel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseAmplitude ( ViSession Vi, ViConstString Channel, ViReal64 Amplitude )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Amplitude(Amplitude);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseAmplitude(_Channel, _Amplitude);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseDelay ( ViSession Vi, ViConstString Channel, ViReal64 Delay )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Delay(Delay);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseDelay(_Channel, _Delay);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseDelayPercent ( ViSession Vi, ViConstString Channel, ViReal64 DelayPercent )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _DelayPercent(DelayPercent);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseDelayPercent(_Channel, _DelayPercent);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseDoubleDelay ( ViSession Vi, ViConstString Channel, ViReal64 DoubleDelay )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _DoubleDelay(DoubleDelay);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseDoubleDelay(_Channel, _DoubleDelay);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseDoubleDelayPercent ( ViSession Vi, ViConstString Channel, ViReal64 DoubleDelayPercent )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _DoubleDelayPercent(DoubleDelayPercent);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseDoubleDelayPercent(_Channel, _DoubleDelayPercent);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseFallTime ( ViSession Vi, ViConstString Channel, ViReal64 FallTime )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _FallTime(FallTime);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseFallTime(_Channel, _FallTime);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseFallTimePercent ( ViSession Vi, ViConstString Channel, ViReal64 FallTimePercent )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _FallTimePercent(FallTimePercent);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseFallTimePercent(_Channel, _FallTimePercent);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseHighLevel ( ViSession Vi, ViConstString Channel, ViReal64 HighLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _HighLevel(HighLevel);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseHighLevel(_Channel, _HighLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseLevelControl ( ViSession Vi, ViConstString Channel, ViInt32 LevelControl )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _LevelControl(LevelControl);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseLevelControl(_Channel, (WX218xPulseLevelControlEnum)(long)_LevelControl);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseLowLevel ( ViSession Vi, ViConstString Channel, ViReal64 LowLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _LowLevel(LowLevel);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseLowLevel(_Channel, _LowLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseMode ( ViSession Vi, ViConstString Channel, ViInt32 Mode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Mode(Mode);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseMode(_Channel, (WX218xPulseModeEnum)(long)_Mode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseOffset ( ViSession Vi, ViConstString Channel, ViReal64 Offset )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Offset(Offset);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseOffset(_Channel, _Offset);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulsePeriod ( ViSession Vi, ViConstString Channel, ViReal64 Period )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Period(Period);
		HRESULT hr = spDigitalPulse->ConfigureDigPulsePeriod(_Channel, _Period);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulsePolarity ( ViSession Vi, ViConstString Channel, ViInt32 Polarity )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Polarity(Polarity);
		HRESULT hr = spDigitalPulse->ConfigureDigPulsePolarity(_Channel, (WX218xPulsePolarityEnum)(long)_Polarity);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseRiseTime ( ViSession Vi, ViConstString Channel, ViReal64 RiseTime )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _RiseTime(RiseTime);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseRiseTime(_Channel, _RiseTime);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureRiseTimePercent ( ViSession Vi, ViConstString Channel, ViReal64 RiseTimePercent )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _RiseTimePercent(RiseTimePercent);
		HRESULT hr = spDigitalPulse->ConfigureRiseTimePercent(_Channel, _RiseTimePercent);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseTransition ( ViSession Vi, ViConstString Channel, ViInt32 Transition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Transition(Transition);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseTransition(_Channel, (WX218xPulseTransitionEnum)(long)_Transition);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseWidth ( ViSession Vi, ViConstString Channel, ViReal64 Width )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Width(Width);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseWidth(_Channel, _Width);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPulseWidthPercent ( ViSession Vi, ViConstString Channel, ViReal64 WidthPercent )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _WidthPercent(WidthPercent);
		HRESULT hr = spDigitalPulse->ConfigureDigPulseWidthPercent(_Channel, _WidthPercent);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSweepDirection ( ViSession Vi, ViConstString Channel, ViInt32 Direction )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Direction(Direction);
		HRESULT hr = spSweep->ConfigureSweepDirection(_Channel, (WX218xSweepDirectionEnum)(long)_Direction);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSweepState ( ViSession Vi, ViConstString Channel, ViBoolean State )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _State(State);
		HRESULT hr = spSweep->ConfigureSweepState(_Channel, _State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSweepFreqStart ( ViSession Vi, ViConstString Channel, ViReal64 FreqStart )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _FreqStart(FreqStart);
		HRESULT hr = spSweep->ConfigureSweepFreqStart(_Channel, _FreqStart);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSweepFreqStop ( ViSession Vi, ViConstString Channel, ViReal64 FreqStop )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _FreqStop(FreqStop);
		HRESULT hr = spSweep->ConfigureSweepFreqStop(_Channel, _FreqStop);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSweepMarker ( ViSession Vi, ViConstString Channel, ViReal64 Marker )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Marker(Marker);
		HRESULT hr = spSweep->ConfigureSweepMarker(_Channel, _Marker);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSweepSpacing ( ViSession Vi, ViConstString Channel, ViInt32 Spacing )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Spacing(Spacing);
		HRESULT hr = spSweep->ConfigureSweepSpacing(_Channel, (WX218xSweepSpacingEnum)(long)_Spacing);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureSweepTime ( ViSession Vi, ViConstString Channel, ViReal64 Time )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Time(Time);
		HRESULT hr = spSweep->ConfigureSweepTime(_Channel, _Time);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreatePatternData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViChar Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViByte[]> _Data(Data, DataBufferSize);
		HRESULT hr = spPattern->CreatePatternData(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternBaud ( ViSession Vi, ViConstString Channel, ViReal64 Baud )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Baud(Baud);
		HRESULT hr = spPattern->ConfigurePatternBaud(_Channel, _Baud);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternHighLevel ( ViSession Vi, ViConstString Channel, ViReal64 HighLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _HighLevel(HighLevel);
		HRESULT hr = spPattern->ConfigurePatternHighLevel(_Channel, _HighLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternLength ( ViSession Vi, ViConstString Channel, ViInt32 Length )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Length(Length);
		HRESULT hr = spPattern->ConfigurePatternLength(_Channel, _Length);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternLevel ( ViSession Vi, ViConstString Channel, ViInt32 Level )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Level(Level);
		HRESULT hr = spPattern->ConfigurePatternLevel(_Channel, _Level);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternLoop ( ViSession Vi, ViConstString Channel, ViInt32 Loop )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Loop(Loop);
		HRESULT hr = spPattern->ConfigurePatternLoop(_Channel, _Loop);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternLowLevel ( ViSession Vi, ViConstString Channel, ViReal64 LowLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _LowLevel(LowLevel);
		HRESULT hr = spPattern->ConfigurePatternLowLevel(_Channel, _LowLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternMode ( ViSession Vi, ViConstString Channel, ViInt32 Mode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Mode(Mode);
		HRESULT hr = spPattern->ConfigurePatternMode(_Channel, (WX218xPatternModeEnum)(long)_Mode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternPreamble ( ViSession Vi, ViConstString Channel, ViInt32 Preamble )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Preamble(Preamble);
		HRESULT hr = spPattern->ConfigurePatternPreamble(_Channel, _Preamble);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternPredType ( ViSession Vi, ViConstString Channel, ViInt32 Type )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Type(Type);
		HRESULT hr = spPattern->ConfigurePatternPredType(_Channel, (WX218xPatternPredefinedTypeEnum)(long)_Type);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreatePatternComposerFastData ( ViSession Vi, ViConstString Channel, ViInt32 AmplLevelBufferSize, ViReal64 AmplLevel[], ViInt32 DwellTimeBufferSize, ViReal64 DwellTime[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64[]> _AmplLevel(AmplLevel, AmplLevelBufferSize);
		CParam<ViReal64[]> _DwellTime(DwellTime, DwellTimeBufferSize);
		HRESULT hr = spPatternComposer->CreatePatternComposerFastData(_Channel, _AmplLevel, _DwellTime);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadPatternComposerFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spPatternComposer->LoadPatternFile(_Channel, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreatePatternComposerLinearData ( ViSession Vi, ViConstString Channel, ViInt32 AmplLevelBufferSize, ViReal64 AmplLevel[], ViInt32 DwellTimeBufferSize, ViReal64 DwellTime[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64[]> _AmplLevel(AmplLevel, AmplLevelBufferSize);
		CParam<ViReal64[]> _DwellTime(DwellTime, DwellTimeBufferSize);
		HRESULT hr = spPatternComposer->CreatePatternComposerLinearData(_Channel, _AmplLevel, _DwellTime);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternCompFastStart ( ViSession Vi, ViConstString Channel, ViReal64 FastStart )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _FastStart(FastStart);
		HRESULT hr = spPatternComposer->ConfigurePatternCompFastStart(_Channel, _FastStart);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternCompLinearStart ( ViSession Vi, ViConstString Channel, ViReal64 LinearStart )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _LinearStart(LinearStart);
		HRESULT hr = spPatternComposer->ConfigurePatternCompLinearStart(_Channel, _LinearStart);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternCompResolution ( ViSession Vi, ViConstString Channel, ViReal64 Resolution )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Resolution(Resolution);
		HRESULT hr = spPatternComposer->ConfigurePatternCompResolution(_Channel, _Resolution);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternCompResType ( ViSession Vi, ViConstString Channel, ViInt32 ResType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _ResType(ResType);
		HRESULT hr = spPatternComposer->ConfigurePatternCompResType(_Channel, (WX218xPatternResTypeEnum)(long)_ResType);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePatternCompTransType ( ViSession Vi, ViConstString Channel, ViInt32 TransitionType )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _TransitionType(TransitionType);
		HRESULT hr = spPatternComposer->ConfigurePatternCompTransType(_Channel, (WX218xPatternComposerTransitionTypeEnum)(long)_TransitionType);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateDigPatternData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViReal64 Data[], ViInt32 Segment )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64[]> _Data(Data, DataBufferSize);
		CParam<ViInt32> _Segment(Segment);
		HRESULT hr = spDigitalPatternOutput->CreateDigPatternData(_Channel, _Data, _Segment);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadDigitalPatternFromFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32 Segment )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		CParam<ViInt32> _Segment(Segment);
		HRESULT hr = spDigitalPatternOutput->LoadDigitalPatternFromFile(_Channel, _FileName, _Segment);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetDigPatternBitEnabled ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViBoolean* Enabled )
{
	if (Enabled == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Enabled is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViBoolean> _val;
		HRESULT hr = spDigitalPatternOutput->get_BitEnabled(_Channel, _Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Enabled = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetDigPatternBitEnabled ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViBoolean> _val(Enabled);
		HRESULT hr = spDigitalPatternOutput->put_BitEnabled(_Channel, _Index, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetDigPatternBitDelay ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* Delay )
{
	if (Delay == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter Delay is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val;
		HRESULT hr = spDigitalPatternOutput->get_BitDelay(_Channel, _Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*Delay = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetDigPatternBitDelay ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 Delay )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val(Delay);
		HRESULT hr = spDigitalPatternOutput->put_BitDelay(_Channel, _Index, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetDigPatternBitHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* HighLevel )
{
	if (HighLevel == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter HighLevel is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val;
		HRESULT hr = spDigitalPatternOutput->get_BitHighLevel(_Channel, _Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*HighLevel = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetDigPatternBitHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 HighLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val(HighLevel);
		HRESULT hr = spDigitalPatternOutput->put_BitHighLevel(_Channel, _Index, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_GetDigPatternBitLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64* LowLevel )
{
	if (LowLevel == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter LowLevel is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val;
		HRESULT hr = spDigitalPatternOutput->get_BitLowLevel(_Channel, _Index, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*LowLevel = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_SetDigPatternBitLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 Index, ViReal64 LowLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Index(Index);
		CParam<ViReal64> _val(LowLevel);
		HRESULT hr = spDigitalPatternOutput->put_BitLowLevel(_Channel, _Index, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateDigPatternParamData ( ViSession Vi, ViConstString Channel, ViInt32 StateBufferSize, ViChar State[], ViInt32 DelayBufferSize, ViReal64 Delay[], ViInt32 HighLevelBufferSize, ViReal64 HighLevel[], ViInt32 LowLevelBufferSize, ViReal64 LowLevel[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViByte[]> _State(State, StateBufferSize);
		CParam<ViReal64[]> _Delay(Delay, DelayBufferSize);
		CParam<ViReal64[]> _HighLevel(HighLevel, HighLevelBufferSize);
		CParam<ViReal64[]> _LowLevel(LowLevel, LowLevelBufferSize);
		HRESULT hr = spDigitalPatternOutput->CreateDigPatternParamData(_Channel, _State, _Delay, _HighLevel, _LowLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateDigPatternParamData1 ( ViSession Vi, ViConstString Channel, ViInt32 StateBufferSize, ViInt32 State[], ViInt32 DelayBufferSize, ViReal64 Delay[], ViInt32 HighLevelBufferSize, ViReal64 HighLevel[], ViInt32 LowLevelBufferSize, ViReal64 LowLevel[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32[]> _State(State, StateBufferSize);
		CParam<ViReal64[]> _Delay(Delay, DelayBufferSize);
		CParam<ViReal64[]> _HighLevel(HighLevel, HighLevelBufferSize);
		CParam<ViReal64[]> _LowLevel(LowLevel, LowLevelBufferSize);
		HRESULT hr = spDigitalPatternOutput->CreateDigPatternParamData1(_Channel, _State, _Delay, _HighLevel, _LowLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattArbResolution ( ViSession Vi, ViConstString Channel, ViInt32 ArbResolution )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _ArbResolution(ArbResolution);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattArbResolution(_Channel, (WX218xArbitraryResolutionEnum)(long)_ArbResolution);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattBitDelay ( ViSession Vi, ViConstString Channel, ViInt32 BitIndex, ViReal64 BitDelay )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _BitIndex(BitIndex);
		CParam<ViReal64> _BitDelay(BitDelay);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattBitDelay(_Channel, _BitIndex, _BitDelay);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattBitEnabled ( ViSession Vi, ViConstString Channel, ViInt32 BitIndex, ViBoolean BitEnabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _BitIndex(BitIndex);
		CParam<ViBoolean> _BitEnabled(BitEnabled);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattBitEnabled(_Channel, _BitIndex, _BitEnabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattBitHighLevel ( ViSession Vi, ViConstString Channel, ViInt32 BitIndex, ViReal64 BitHighLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _BitIndex(BitIndex);
		CParam<ViReal64> _BitHighLevel(BitHighLevel);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattBitHighLevel(_Channel, _BitIndex, _BitHighLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattBitLowLevel ( ViSession Vi, ViConstString Channel, ViInt32 BitIndex, ViReal64 BitLowLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _BitIndex(BitIndex);
		CParam<ViReal64> _BitLowLevel(BitLowLevel);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattBitLowLevel(_Channel, _BitIndex, _BitLowLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattDelay ( ViSession Vi, ViConstString Channel, ViReal64 Delay )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Delay(Delay);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattDelay(_Channel, _Delay);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattDelayMode ( ViSession Vi, ViConstString Channel, ViInt32 DelayMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _DelayMode(DelayMode);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattDelayMode(_Channel, (WX218xDigPatternDelayModeEnum)(long)_DelayMode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattEmphasisEnabled ( ViSession Vi, ViConstString Channel, ViBoolean EmphasisEnabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _EmphasisEnabled(EmphasisEnabled);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattEmphasisEnabled(_Channel, _EmphasisEnabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattEnabled(_Channel, _Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattFormatData ( ViSession Vi, ViConstString Channel, ViInt32 FormatData )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _FormatData(FormatData);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattFormatData(_Channel, (WX218xDigFormatDataEnum)(long)_FormatData);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattHighLevel ( ViSession Vi, ViConstString Channel, ViReal64 HighLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _HighLevel(HighLevel);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattHighLevel(_Channel, _HighLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattLevelMode ( ViSession Vi, ViConstString Channel, ViInt32 LevelMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _LevelMode(LevelMode);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattLevelMode(_Channel, (WX218xDigPatternLevelModeEnum)(long)_LevelMode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattLowLevel ( ViSession Vi, ViConstString Channel, ViReal64 LowLevel )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _LowLevel(LowLevel);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattLowLevel(_Channel, _LowLevel);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadDigitalDataBinaryFile ( ViSession Vi, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32 Segment )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _FileName(FileName);
		CParam<ViInt32> _Segment(Segment);
		HRESULT hr = spDigitalPatternOutput->LoadDigitalDataBinaryFile(_FileName, _Segment);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadDigitalDataAsciiFile ( ViSession Vi, ViInt32 FileNameBufferSize, ViConstString FileName, ViInt32 Segment )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _FileName(FileName);
		CParam<ViInt32> _Segment(Segment);
		HRESULT hr = spDigitalPatternOutput->LoadDigitalDataAsciiFile(_FileName, _Segment);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigClock ( ViSession Vi, ViInt32 DigClock )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _DigClock(DigClock);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigClock((WX218xDigitalClockEnum)(long)_DigClock);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureDigPattDigPort ( ViSession Vi, ViInt32 DigPort )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _DigPort(DigPort);
		HRESULT hr = spDigitalPatternOutput->ConfigureDigPattDigPort((WX218xDigPortEnum)(long)_DigPort);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureChirpAmplDepth ( ViSession Vi, ViConstString Channel, ViReal64 AmplDepth )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _AmplDepth(AmplDepth);
		HRESULT hr = spCHIRP->ConfigureChirpAmplDepth(_Channel, _AmplDepth);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureChirpEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spCHIRP->ConfigureChirpEnabled(_Channel, _Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureChirpFreqDirection ( ViSession Vi, ViConstString Channel, ViInt32 FreqDirection )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _FreqDirection(FreqDirection);
		HRESULT hr = spCHIRP->ConfigureChirpFreqDirection(_Channel, (WX218xChirpFreqDirectionEnum)(long)_FreqDirection);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureChirpFreqSpacing ( ViSession Vi, ViConstString Channel, ViInt32 FreqSpacing )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _FreqSpacing(FreqSpacing);
		HRESULT hr = spCHIRP->ConfigureChirpFreqSpacing(_Channel, (WX218xChirpFreqSpacingEnum)(long)_FreqSpacing);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureChirpMarkerFreq ( ViSession Vi, ViConstString Channel, ViReal64 MarkerFreq )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _MarkerFreq(MarkerFreq);
		HRESULT hr = spCHIRP->ConfigureChirpMarkerFreq(_Channel, _MarkerFreq);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureChirpRepetition ( ViSession Vi, ViConstString Channel, ViReal64 Repetition )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Repetition(Repetition);
		HRESULT hr = spCHIRP->ConfigureChirpRepetition(_Channel, _Repetition);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureChirpStartFreq ( ViSession Vi, ViConstString Channel, ViReal64 StartFreq )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _StartFreq(StartFreq);
		HRESULT hr = spCHIRP->ConfigureChirpStartFreq(_Channel, _StartFreq);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureChirpStopFreq ( ViSession Vi, ViConstString Channel, ViReal64 StopFreq )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _StopFreq(StopFreq);
		HRESULT hr = spCHIRP->ConfigureChirpStopFreq(_Channel, _StopFreq);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureChirpWidth ( ViSession Vi, ViConstString Channel, ViReal64 Width )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Width(Width);
		HRESULT hr = spCHIRP->ConfigureChirpWidth(_Channel, _Width);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureChirpAmplDirection ( ViSession Vi, ViConstString Channel, ViInt32 AmplDirection )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _AmplDirection(AmplDirection);
		HRESULT hr = spCHIRP->ConfigureChirpAmplDirection(_Channel, (WX218xChirpAmplitudeDirectionEnum)(long)_AmplDirection);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureChirpAmplSpacing ( ViSession Vi, ViConstString Channel, ViInt32 AmplSpacing )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _AmplSpacing(AmplSpacing);
		HRESULT hr = spCHIRP->ConfigureChirpAmplSpacing(_Channel, (WX218xChirpAmplSpacingEnum)(long)_AmplSpacing);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateFSKData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViChar Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViByte[]> _Data(Data, DataBufferSize);
		HRESULT hr = spFSK->CreateFSKData(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadFSKDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spFSK->LoadFSKDataFile(_Channel, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateFSKDataAdv ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViInt32 Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32[]> _Data(Data, DataBufferSize);
		HRESULT hr = spFSK->CreateFSKDataAdv(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFSKBaud ( ViSession Vi, ViConstString Channel, ViReal64 Baud )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Baud(Baud);
		HRESULT hr = spFSK->ConfigureFSKBaud(_Channel, _Baud);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFSKEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spFSK->ConfigureFSKEnabled(_Channel, _Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFSKMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Marker(Marker);
		HRESULT hr = spFSK->ConfigureFSKMarker(_Channel, _Marker);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFSKShiftFreq ( ViSession Vi, ViConstString Channel, ViReal64 ShiftFreq )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _ShiftFreq(ShiftFreq);
		HRESULT hr = spFSK->ConfigureFSKShiftFreq(_Channel, _ShiftFreq);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateASKData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViChar Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViByte[]> _Data(Data, DataBufferSize);
		HRESULT hr = spASK->CreateASKData(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadASKDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spASK->LoadASKDataFile(_Channel, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateASKDataAdv ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViInt32 Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32[]> _Data(Data, DataBufferSize);
		HRESULT hr = spASK->CreateASKDataAdv(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureASKBaud ( ViSession Vi, ViConstString Channel, ViReal64 Baud )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Baud(Baud);
		HRESULT hr = spASK->ConfigureASKBaud(_Channel, _Baud);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureASKEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spASK->ConfigureASKEnabled(_Channel, _Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureASKMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Marker(Marker);
		HRESULT hr = spASK->ConfigureASKMarker(_Channel, _Marker);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureASKShiftAmplitude ( ViSession Vi, ViConstString Channel, ViReal64 ShiftAmpl )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _ShiftAmpl(ShiftAmpl);
		HRESULT hr = spASK->ConfigureASKShiftAmplitude(_Channel, _ShiftAmpl);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureASKStartAmplitude ( ViSession Vi, ViConstString Channel, ViReal64 StartAmpl )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _StartAmpl(StartAmpl);
		HRESULT hr = spASK->ConfigureASKStartAmplitude(_Channel, _StartAmpl);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateFHOPFixedData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViReal64 Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64[]> _Data(Data, DataBufferSize);
		HRESULT hr = spFHOP->CreateFHOPFixedData(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateFHOPVariableData ( ViSession Vi, ViConstString Channel, ViInt32 FreqDataBufferSize, ViReal64 FreqData[], ViInt32 DwellTimeDataBufferSize, ViReal64 DwellTimeData[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64[]> _FreqData(FreqData, FreqDataBufferSize);
		CParam<ViReal64[]> _DwellTimeData(DwellTimeData, DwellTimeDataBufferSize);
		HRESULT hr = spFHOP->CreateFHOPVariableData(_Channel, _FreqData, _DwellTimeData);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadFHOPFixDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spFHOP->LoadFHOPFixDataFile(_Channel, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadFHOPVarDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spFHOP->LoadFHOPVarDataFile(_Channel, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFHOPDwellMode ( ViSession Vi, ViConstString Channel, ViInt32 DwellMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _DwellMode(DwellMode);
		HRESULT hr = spFHOP->ConfigureFHOPDwellMode(_Channel, (WX218xFHOPDwellModeEnum)(long)_DwellMode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFHOPEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spFHOP->ConfigureFHOPEnabled(_Channel, _Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFHOPMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Marker(Marker);
		HRESULT hr = spFHOP->ConfigureFHOPMarker(_Channel, _Marker);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureFHOPTime ( ViSession Vi, ViConstString Channel, ViReal64 Time )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Time(Time);
		HRESULT hr = spFHOP->ConfigureFHOPTime(_Channel, _Time);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateAHOPFixedData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViReal64 Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64[]> _Data(Data, DataBufferSize);
		HRESULT hr = spAHOP->CreateAHOPFixedData(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateAHOPVariableData ( ViSession Vi, ViConstString Channel, ViInt32 AmplDataBufferSize, ViReal64 AmplData[], ViInt32 DwellTimeDataBufferSize, ViReal64 DwellTimeData[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64[]> _AmplData(AmplData, AmplDataBufferSize);
		CParam<ViReal64[]> _DwellTimeData(DwellTimeData, DwellTimeDataBufferSize);
		HRESULT hr = spAHOP->CreateAHOPVariableData(_Channel, _AmplData, _DwellTimeData);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadAHOPFixDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spAHOP->LoadAHOPFixDataFile(_Channel, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadAHOPVarDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spAHOP->LoadAHOPVarDataFile(_Channel, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureAHOPDwellMode ( ViSession Vi, ViConstString Channel, ViInt32 DwellMode )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _DwellMode(DwellMode);
		HRESULT hr = spAHOP->ConfigureAHOPDwellMode(_Channel, (WX218xAHOPDwellModeEnum)(long)_DwellMode);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureAHOPEnabled ( ViSession Vi, ViConstString Channel, ViBoolean Enabled )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _Enabled(Enabled);
		HRESULT hr = spAHOP->ConfigureAHOPEnabled(_Channel, _Enabled);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureAHOPMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Marker(Marker);
		HRESULT hr = spAHOP->ConfigureAHOPMarker(_Channel, _Marker);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureAHOPTime ( ViSession Vi, ViConstString Channel, ViReal64 Time )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Time(Time);
		HRESULT hr = spAHOP->ConfigureAHOPTime(_Channel, _Time);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreatePSKData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViChar Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViByte[]> _Data(Data, DataBufferSize);
		HRESULT hr = spPSK->CreatePSKData(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreatePSKUserData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViReal64 Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64[]> _Data(Data, DataBufferSize);
		HRESULT hr = spPSK->CreatePSKUserData(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadPSKDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spPSK->LoadPSKDataFile(_Channel, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadPSKUserDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spPSK->LoadPSKUserDataFile(_Channel, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreatePSKDataAdv ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViInt32 Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32[]> _Data(Data, DataBufferSize);
		HRESULT hr = spPSK->CreatePSKDataAdv(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePSKBaud ( ViSession Vi, ViConstString Channel, ViReal64 Baud )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Baud(Baud);
		HRESULT hr = spPSK->ConfigurePSKBaud(_Channel, _Baud);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePSKCarrierState ( ViSession Vi, ViConstString Channel, ViBoolean State )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _State(State);
		HRESULT hr = spPSK->ConfigurePSKCarrierState(_Channel, _State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePSKState ( ViSession Vi, ViConstString Channel, ViBoolean State )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _State(State);
		HRESULT hr = spPSK->ConfigurePSKState(_Channel, _State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePSKMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Marker(Marker);
		HRESULT hr = spPSK->ConfigurePSKMarker(_Channel, _Marker);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePSKRate ( ViSession Vi, ViConstString Channel, ViReal64 Rate )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Rate(Rate);
		HRESULT hr = spPSK->ConfigurePSKRate(_Channel, _Rate);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePSKShiftPhase ( ViSession Vi, ViConstString Channel, ViReal64 ShiftPhase )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _ShiftPhase(ShiftPhase);
		HRESULT hr = spPSK->ConfigurePSKShiftPhase(_Channel, _ShiftPhase);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePSKStartPhase ( ViSession Vi, ViConstString Channel, ViReal64 StartPhase )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _StartPhase(StartPhase);
		HRESULT hr = spPSK->ConfigurePSKStartPhase(_Channel, _StartPhase);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigurePSKType ( ViSession Vi, ViConstString Channel, ViInt32 Type )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Type(Type);
		HRESULT hr = spPSK->ConfigurePSKType(_Channel, (WX218xPskTypeEnum)(long)_Type);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateQAMData ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViChar Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViByte[]> _Data(Data, DataBufferSize);
		HRESULT hr = spQAM->CreateQAMData(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateQAMUserData ( ViSession Vi, ViConstString Channel, ViInt32 DataIBufferSize, ViReal64 DataI[], ViInt32 DataQBufferSize, ViReal64 DataQ[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64[]> _DataI(DataI, DataIBufferSize);
		CParam<ViReal64[]> _DataQ(DataQ, DataQBufferSize);
		HRESULT hr = spQAM->CreateQAMUserData(_Channel, _DataI, _DataQ);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadQAMDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spQAM->LoadQAMDataFile(_Channel, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_LoadQAMUserDataFile ( ViSession Vi, ViConstString Channel, ViInt32 FileNameBufferSize, ViConstString FileName )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViConstString> _FileName(FileName);
		HRESULT hr = spQAM->LoadQAMUserDataFile(_Channel, _FileName);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_CreateQAMDataAdv ( ViSession Vi, ViConstString Channel, ViInt32 DataBufferSize, ViInt32 Data[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32[]> _Data(Data, DataBufferSize);
		HRESULT hr = spQAM->CreateQAMDataAdv(_Channel, _Data);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureQAMBaud ( ViSession Vi, ViConstString Channel, ViReal64 Baud )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViReal64> _Baud(Baud);
		HRESULT hr = spQAM->ConfigureQAMBaud(_Channel, _Baud);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureQAMCarrierState ( ViSession Vi, ViConstString Channel, ViBoolean State )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _State(State);
		HRESULT hr = spQAM->ConfigureQAMCarrierState(_Channel, _State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureQAMState ( ViSession Vi, ViConstString Channel, ViBoolean State )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViBoolean> _State(State);
		HRESULT hr = spQAM->ConfigureQAMState(_Channel, _State);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureQAMMarker ( ViSession Vi, ViConstString Channel, ViInt32 Marker )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Marker(Marker);
		HRESULT hr = spQAM->ConfigureQAMMarker(_Channel, _Marker);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_ConfigureQAMType ( ViSession Vi, ViConstString Channel, ViInt32 Type )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _Channel(Channel);
		CParam<ViInt32> _Type(Type);
		HRESULT hr = spQAM->ConfigureQAMType(_Channel, (WX218xQamTypeEnum)(long)_Type);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_DESCRIPTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_DESCRIPTION(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_PREFIX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_PREFIX(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_VENDOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_VENDOR(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_REVISION(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_RANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_set_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_RANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_QUERY_INSTRUMENT_STATUS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_set_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_QUERY_INSTRUMENT_STATUS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_CACHE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_set_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_CACHE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SIMULATE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_set_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_SIMULATE(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_RECORD_COERCIONS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_set_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_RECORD_COERCIONS(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INTERCHANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_set_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_set_INTERCHANGE_CHECK(Vi, RepCapIdentifier, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_LOGICAL_NAME ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_LOGICAL_NAME(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_IO_RESOURCE_DESCRIPTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_IO_RESOURCE_DESCRIPTOR(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_DRIVER_SETUP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_DRIVER_SETUP(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_GROUP_CAPABILITIES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_GROUP_CAPABILITIES(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_SUPPORTED_INSTRUMENT_MODELS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_SUPPORTED_INSTRUMENT_MODELS(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_INSTRUMENT_FIRMWARE_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INSTRUMENT_FIRMWARE_REVISION(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_INSTRUMENT_MANUFACTURER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INSTRUMENT_MANUFACTURER(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_INSTRUMENT_MODEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	status = ntl_get_INSTRUMENT_MODEL(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);

	return status;
}

ViStatus _VI_FUNC wx218x_get_ARB_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->get_Gain(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ARB_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->put_Gain(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ARB_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->get_Offset(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ARB_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->put_Offset(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ARB_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spArbitrary->get_SampleRate(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ARB_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spArbitrary->put_SampleRate(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ARB_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitraryWaveform->get_Frequency(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ARB_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitraryWaveform->put_Frequency(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MAX_NUM_WAVEFORMS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->get_NumberWaveformsMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_WAVEFORM_QUANTUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->get_Quantum(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MAX_WAVEFORM_SIZE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->get_SizeMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MIN_WAVEFORM_SIZE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->get_SizeMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MAX_SEQUENCE_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->get_LengthMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MIN_SEQUENCE_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->get_LengthMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MAX_LOOP_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->get_LoopCountMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MAX_NUM_SEQUENCES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->get_NumberSequencesMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_AM_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAM->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_AM_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAM->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_AM_INTERNAL_DEPTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAM->get_InternalDepth(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_AM_INTERNAL_DEPTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAM->put_InternalDepth(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_AM_INTERNAL_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAM->get_InternalFrequency(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_AM_INTERNAL_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAM->put_InternalFrequency(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_AM_INTERNAL_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAM->get_InternalWaveform((IviFgenAMInternalWaveformEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_AM_INTERNAL_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spAM->put_InternalWaveform((IviFgenAMInternalWaveformEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_AM_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAM->get_Source(_RepCapIdentifier, (IviFgenAMSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_AM_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAM->put_Source(_RepCapIdentifier, (IviFgenAMSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FM_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFM->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FM_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFM->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FM_INTERNAL_DEVIATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFM->get_InternalDeviation(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FM_INTERNAL_DEVIATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFM->put_InternalDeviation(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FM_INTERNAL_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFM->get_InternalFrequency(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FM_INTERNAL_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFM->put_InternalFrequency(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FM_INTERNAL_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFM->get_InternalWaveform((IviFgenFMInternalWaveformEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FM_INTERNAL_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spFM->put_InternalWaveform((IviFgenFMInternalWaveformEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FM_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFM->get_Source(_RepCapIdentifier, (IviFgenFMSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FM_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFM->put_Source(_RepCapIdentifier, (IviFgenFMSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHANNEL_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spOutput->get_Count(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_OUTPUT_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spOutput->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_OUTPUT_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spOutput->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_OUTPUT_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spOutput->get_Impedance(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_OUTPUT_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spOutput->put_Impedance(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_OPERATION_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spOutput->get_OperationMode(_RepCapIdentifier, (IviFgenOperationModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_OPERATION_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spOutput->put_OperationMode(_RepCapIdentifier, (IviFgenOperationModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_OUTPUT_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spOutput->get_OutputMode((IviFgenOutputModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_OUTPUT_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spOutput->put_OutputMode((IviFgenOutputModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_REF_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spOutput->get_ReferenceClockSource((IviFgenReferenceClockSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_REF_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenOutput> spOutput;
	status = GetDriverInterface(Vi, &spOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spOutput->put_ReferenceClockSource((IviFgenReferenceClockSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FUNC_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_Amplitude(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FUNC_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_Amplitude(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FUNC_DC_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_DCOffset(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FUNC_DC_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_DCOffset(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FUNC_DUTY_CYCLE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_DutyCycleHigh(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FUNC_DUTY_CYCLE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_DutyCycleHigh(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FUNC_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_Frequency(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FUNC_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_Frequency(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FUNC_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_StartPhase(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FUNC_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_StartPhase(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FUNC_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_Waveform(_RepCapIdentifier, (IviFgenWaveformEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FUNC_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_Waveform(_RepCapIdentifier, (IviFgenWaveformEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_BURST_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_BurstCount(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_BURST_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_BurstCount(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_INTERNAL_TRIGGER_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spTrigger->get_InternalRate(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_INTERNAL_TRIGGER_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spTrigger->put_InternalRate(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_Source(_RepCapIdentifier, (IviFgenTriggerSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IIviFgenTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_Source(_RepCapIdentifier, (IviFgenTriggerSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ACTIVE_CHANNEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218x> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViChar[]> _val;
		HRESULT hr = spRoot->get_ActiveChannel(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			status = _val.GetVal(AttributeValue, AttributeValueBufferSize);
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ACTIVE_CHANNEL ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218x> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViConstString> _val(AttributeValue);
		HRESULT hr = spRoot->put_ActiveChannel(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218x> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spRoot->get_Skew(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218x> spRoot;
	status = GetDriverInterface(Vi, &spRoot);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spRoot->put_Skew(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ENABLED_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAM->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ENABLED_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAM->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_INTERNAL_DEPTH_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAM->get_InternalDepth(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_INTERNAL_DEPTH_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAM->put_InternalDepth(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_INTERNAL_WAVEFORM_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spAM->get_InternalWaveform((WX218xAMInternalWaveformEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_INTERNAL_WAVEFORM_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spAM->put_InternalWaveform((WX218xAMInternalWaveformEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_INTERNAL_FREQUENCY_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spAM->get_InternalFrequency(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_INTERNAL_FREQUENCY_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAM> spAM;
	status = GetDriverInterface(Vi, &spAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spAM->put_InternalFrequency(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_COUPLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannel->get_Couple(_RepCapIdentifier, (WX218xOutputCoupleEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_COUPLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannel->put_Couple(_RepCapIdentifier, (WX218xOutputCoupleEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ENABLED_OUTPUT ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannel->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ENABLED_OUTPUT ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannel->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_OPERATION_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannel->get_OperationMode(_RepCapIdentifier, (WX218xOperationModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_OPERATION_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannel->put_OperationMode(_RepCapIdentifier, (WX218xOperationModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_OUTPUT_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spChannel->get_OutputMode((WX218xOutputModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_OUTPUT_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spChannel->put_OutputMode((WX218xOutputModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_REFERENCE_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spChannel->get_ReferenceClockSource((WX218xReferenceClockSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_REFERENCE_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spChannel->put_ReferenceClockSource((WX218xReferenceClockSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_REF_EXT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannel->get_RefExtFrequency(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_REF_EXT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannel->put_RefExtFrequency(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_EXT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannel->get_ExtFrequency(_RepCapIdentifier, (WX218xExtFrequencyEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_EXT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannel> spChannel;
	status = GetDriverInterface(Vi, &spChannel);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannel->put_ExtFrequency(_RepCapIdentifier, (WX218xExtFrequencyEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SYNC_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannelSync->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SYNC_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannelSync->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SYNC_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannelSync->get_Function(_RepCapIdentifier, (WX218xOutputSyncFunctionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SYNC_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannelSync->put_Function(_RepCapIdentifier, (WX218xOutputSyncFunctionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SYNC_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannelSync->get_Position(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SYNC_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannelSync->put_Position(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SYNC_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spChannelSync->get_Source((WX218xOutputSyncSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SYNC_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spChannelSync->put_Source((WX218xOutputSyncSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SYNC_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannelSync->get_Width(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SYNC_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xChannelSync> spChannelSync;
	status = GetDriverInterface(Vi, &spChannelSync);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spChannelSync->put_Width(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_Amplitude(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_Amplitude(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DC_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_DcLevel(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DC_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_DcLevel(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DC_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_DCOffset(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DC_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_DCOffset(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DUTY_CYCLE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_DutyCycleHigh(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DUTY_CYCLE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_DutyCycleHigh(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_EXP_EXPONENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_ExpExponent(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_EXP_EXPONENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_ExpExponent(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_Frequency(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_Frequency(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_GAUSS_EXPONENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_GaussExponent(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_GAUSS_EXPONENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_GaussExponent(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_Power(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_Power(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_RAMP_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_RampDelay(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_RAMP_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_RampDelay(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_RAMP_FALL_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_RampFallTime(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_RAMP_FALL_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_RampFallTime(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_RAMP_RISE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_RampRiseTime(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_RAMP_RISE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_RampRiseTime(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SINCN_CYCLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_SincNCycle(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SINCN_CYCLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_SincNCycle(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_StartPhase(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_StartPhase(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_HV_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_HvAmplitude(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_HV_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_HvAmplitude(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->get_Waveform(_RepCapIdentifier, (WX218xWaveformEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStandardWaveform> spStandardWaveform;
	status = GetDriverInterface(Vi, &spStandardWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spStandardWaveform->put_Waveform(_RepCapIdentifier, (WX218xWaveformEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CLOCK_DIVIDER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->get_ClockDivider(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CLOCK_DIVIDER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->put_ClockDivider(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->get_Gain(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->put_Gain(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->get_Offset(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->put_Offset(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spArbitrary->get_SampleRate(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spArbitrary->put_SampleRate(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SAMPLE_RATE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->get_SampleRateSource(_RepCapIdentifier, (WX218xSampleRateSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SAMPLE_RATE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->put_SampleRateSource(_RepCapIdentifier, (WX218xSampleRateSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ARB_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->get_Source(_RepCapIdentifier, (WX218xArbitrarySourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ARB_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->put_Source(_RepCapIdentifier, (WX218xArbitrarySourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ARB_TIMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->get_Timing(_RepCapIdentifier, (WX218xArbitraryTimingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ARB_TIMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->put_Timing(_RepCapIdentifier, (WX218xArbitraryTimingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FREQ_RAST_DIVIDER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->get_FreqRastDivider(_RepCapIdentifier, (WX218xFreqDividerEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FREQ_RAST_DIVIDER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrary> spArbitrary;
	status = GetDriverInterface(Vi, &spArbitrary);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrary->put_FreqRastDivider(_RepCapIdentifier, (WX218xFreqDividerEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_NUMBER_WAVEFORMS_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->get_NumberWaveformsMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_QUANTUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->get_Quantum(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_WAVEFORM_SIZE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->get_SizeMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_WAVEFORM_SIZE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->get_SizeMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TRACE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->get_TraceMode((WX218xTraceModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TRACE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spArbitraryWaveform->put_TraceMode((WX218xTraceModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FAST_DOWNLOAD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->get_FastDownload(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FAST_DOWNLOAD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spArbitraryWaveform->put_FastDownload(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DOWNLOAD_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitraryWaveform->get_DownloadRecord((WX218xArbDownloadRecordEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DOWNLOAD_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitraryWaveform> spArbitraryWaveform;
	status = GetDriverInterface(Vi, &spArbitraryWaveform);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spArbitraryWaveform->put_DownloadRecord((WX218xArbDownloadRecordEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ADVANCE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->get_AdvanceMode(_RepCapIdentifier, (WX218xSequenceAdvanceModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ADVANCE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->put_AdvanceMode(_RepCapIdentifier, (WX218xSequenceAdvanceModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SEQ_JUMP_EVENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->get_JumpEvent(_RepCapIdentifier, (WX218xSequenceJumpEventEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SEQ_JUMP_EVENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->put_JumpEvent(_RepCapIdentifier, (WX218xSequenceJumpEventEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_LENGTH_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->get_LengthMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_LENGTH_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->get_LengthMin(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_LOOP_COUNT_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->get_LoopCountMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_NUMBER_SEQUENCE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->get_NumberSequenceMax(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SEQ_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->get_Source(_RepCapIdentifier, (WX218xSequenceSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SEQ_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->put_Source(_RepCapIdentifier, (WX218xSequenceSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SEQ_SYNC_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->get_SyncLock(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SEQ_SYNC_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->put_SyncLock(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SEQ_TIMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->get_Timing(_RepCapIdentifier, (WX218xSequenceTimingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SEQ_TIMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->put_Timing(_RepCapIdentifier, (WX218xSequenceTimingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_QUICK_SEQUENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spArbitrarySequence->get_QuickSequence(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_QUICK_SEQUENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spArbitrarySequence->put_QuickSequence(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PRESTEP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->get_Prestep(_RepCapIdentifier, (WX218xSequencePrestepEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PRESTEP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->put_Prestep(_RepCapIdentifier, (WX218xSequencePrestepEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SEQ_ONCE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->get_OnceCount(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SEQ_ONCE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequence> spArbitrarySequence;
	status = GetDriverInterface(Vi, &spArbitrarySequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequence->put_OnceCount(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ADV_SEQ_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequenceAdvanceSequence> spArbitrarySequenceAdvanceSequence;
	status = GetDriverInterface(Vi, &spArbitrarySequenceAdvanceSequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequenceAdvanceSequence->get_Mode(_RepCapIdentifier, (WX218xAdvanceSequenceModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ADV_SEQ_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequenceAdvanceSequence> spArbitrarySequenceAdvanceSequence;
	status = GetDriverInterface(Vi, &spArbitrarySequenceAdvanceSequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequenceAdvanceSequence->put_Mode(_RepCapIdentifier, (WX218xAdvanceSequenceModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SYNC_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequenceAdvanceSequence> spArbitrarySequenceAdvanceSequence;
	status = GetDriverInterface(Vi, &spArbitrarySequenceAdvanceSequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequenceAdvanceSequence->get_SyncLock(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SYNC_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequenceAdvanceSequence> spArbitrarySequenceAdvanceSequence;
	status = GetDriverInterface(Vi, &spArbitrarySequenceAdvanceSequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequenceAdvanceSequence->put_SyncLock(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ASEQ_ONCE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequenceAdvanceSequence> spArbitrarySequenceAdvanceSequence;
	status = GetDriverInterface(Vi, &spArbitrarySequenceAdvanceSequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequenceAdvanceSequence->get_OnceCount(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ASEQ_ONCE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xArbitrarySequenceAdvanceSequence> spArbitrarySequenceAdvanceSequence;
	status = GetDriverInterface(Vi, &spArbitrarySequenceAdvanceSequence);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spArbitrarySequenceAdvanceSequence->put_OnceCount(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CARR_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCarrierModulation> spCarrierModulation;
	status = GetDriverInterface(Vi, &spCarrierModulation);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCarrierModulation->get_Frequency(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CARR_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCarrierModulation> spCarrierModulation;
	status = GetDriverInterface(Vi, &spCarrierModulation);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCarrierModulation->put_Frequency(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CARR_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCarrierModulation> spCarrierModulation;
	status = GetDriverInterface(Vi, &spCarrierModulation);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCarrierModulation->get_Waveform(_RepCapIdentifier, (WX218xCarrierModulationWaveformEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CARR_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCarrierModulation> spCarrierModulation;
	status = GetDriverInterface(Vi, &spCarrierModulation);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCarrierModulation->put_Waveform(_RepCapIdentifier, (WX218xCarrierModulationWaveformEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_COUPLE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCouple> spCouple;
	status = GetDriverInterface(Vi, &spCouple);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spCouple->get_Enabled(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_COUPLE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCouple> spCouple;
	status = GetDriverInterface(Vi, &spCouple);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spCouple->put_Enabled(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_COURSE_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCouple> spCouple;
	status = GetDriverInterface(Vi, &spCouple);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCouple->get_Offset(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_COURSE_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCouple> spCouple;
	status = GetDriverInterface(Vi, &spCouple);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCouple->put_Offset(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FINE_SKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCouple> spCouple;
	status = GetDriverInterface(Vi, &spCouple);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spCouple->get_Skew(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FINE_SKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCouple> spCouple;
	status = GetDriverInterface(Vi, &spCouple);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spCouple->put_Skew(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ENABLED_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFM->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ENABLED_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFM->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_INTERNAL_DEVIATION_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFM->get_InternalDeviation(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_INTERNAL_DEVIATION_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFM->put_InternalDeviation(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_INTERNAL_FREQUENCY_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		HRESULT hr = spFM->get_InternalFrequency(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_INTERNAL_FREQUENCY_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		HRESULT hr = spFM->put_InternalFrequency(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_INTERNAL_WAVEFORM_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spFM->get_InternalWaveform((WX218xFMInternalWaveformEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_INTERNAL_WAVEFORM_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spFM->put_InternalWaveform((WX218xFMInternalWaveformEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FM_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFM->get_Marker(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FM_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFM> spFM;
	status = GetDriverInterface(Vi, &spFM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFM->put_Marker(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MARKER_INDEX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spMarkers->get_MarkerIndex(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_MARKER_INDEX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spMarkers->put_MarkerIndex(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MARKER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spMarkers->get_Source(_RepCapIdentifier, (WX218xMarkerSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_MARKER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spMarkers->put_Source(_RepCapIdentifier, (WX218xMarkerSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MARKER_HIGH_LEVEL4_CH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spMarkers->get_HighLevel4Ch(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_MARKER_HIGH_LEVEL4_CH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spMarkers->put_HighLevel4Ch(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_LOW_LEVEL4_CH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spMarkers->get_LowLevel4Ch(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_LOW_LEVEL4_CH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xMarkers> spMarkers;
	status = GetDriverInterface(Vi, &spMarkers);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spMarkers->put_LowLevel4Ch(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_BURST_COUNT2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_BurstCount(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_BURST_COUNT2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_BurstCount(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CONTINUOUS_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_ContinuousMode(_RepCapIdentifier, (WX218xContinuousModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CONTINUOUS_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_ContinuousMode(_RepCapIdentifier, (WX218xContinuousModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CONTINUOUS_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_ContinuousSource(_RepCapIdentifier, (WX218xContinuousSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CONTINUOUS_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_ContinuousSource(_RepCapIdentifier, (WX218xContinuousSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TRIG_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_Delay(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TRIG_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_Delay(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TRIG_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_Level(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TRIG_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_Level(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TRIG_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_Slope(_RepCapIdentifier, (WX218xTriggerSlopeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TRIG_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_Slope(_RepCapIdentifier, (WX218xTriggerSlopeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TRIG_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_Source(_RepCapIdentifier, (WX218xTriggerSourceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TRIG_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_Source(_RepCapIdentifier, (WX218xTriggerSourceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TRIG_TIMER_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_TimerDelay(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TRIG_TIMER_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_TimerDelay(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TRIG_TIMER_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_TimerMode(_RepCapIdentifier, (WX218xTriggerTimerModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TRIG_TIMER_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_TimerMode(_RepCapIdentifier, (WX218xTriggerTimerModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TRIG_TIMER_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_TimerTime(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TRIG_TIMER_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_TimerTime(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TRIG_TRIGGER_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->get_TriggerMode(_RepCapIdentifier, (WX218xTriggerModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TRIG_TRIGGER_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTrigger->put_TriggerMode(_RepCapIdentifier, (WX218xTriggerModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TRIGGER_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spTrigger->get_TriggerImpedance((WX218xTriggerImpedanceEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TRIGGER_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTrigger> spTrigger;
	status = GetDriverInterface(Vi, &spTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spTrigger->put_TriggerImpedance((WX218xTriggerImpedanceEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ARM_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerARM> spTriggerARM;
	status = GetDriverInterface(Vi, &spTriggerARM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerARM->get_Level(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ARM_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerARM> spTriggerARM;
	status = GetDriverInterface(Vi, &spTriggerARM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerARM->put_Level(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ARM_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerARM> spTriggerARM;
	status = GetDriverInterface(Vi, &spTriggerARM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerARM->get_Slope(_RepCapIdentifier, (WX218xArmSlopeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ARM_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerARM> spTriggerARM;
	status = GetDriverInterface(Vi, &spTriggerARM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerARM->put_Slope(_RepCapIdentifier, (WX218xArmSlopeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_HI_PASS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->get_HiPassEnabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_HI_PASS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->put_HiPassEnabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_HI_PASS_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->get_HiPassWidth(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_HI_PASS_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->put_HiPassWidth(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->get_Holdoff(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->put_Holdoff(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_HOLDOFF_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->get_HoldoffEnabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_HOLDOFF_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->put_HoldoffEnabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_LOW_PASS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->get_LowPassEnabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_LOW_PASS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->put_LowPassEnabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_LOW_PASS_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->get_LowPassWidth(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_LOW_PASS_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xTriggerSmartTrigger> spTriggerSmartTrigger;
	status = GetDriverInterface(Vi, &spTriggerSmartTrigger);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spTriggerSmartTrigger->put_LowPassWidth(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CELL_RECALL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spStateStorage->get_CellRecall(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CELL_RECALL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spStateStorage->put_CellRecall(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CELL_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spStateStorage->get_CellStore(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CELL_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spStateStorage->put_CellStore(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CONFIGURATION_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spStateStorage->get_ConfigurationStore((WX218xStateStorageConfigurationEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CONFIGURATION_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spStateStorage->put_ConfigurationStore((WX218xStateStorageConfigurationEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TARGET_RECALL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spStateStorage->get_TargetRecall((WX218xStateStorageTargetEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TARGET_RECALL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spStateStorage->put_TargetRecall((WX218xStateStorageTargetEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TARGET_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spStateStorage->get_TargetStore((WX218xStateStorageTargetEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TARGET_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spStateStorage->put_TargetStore((WX218xStateStorageTargetEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CONFIGURATION_RECALL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spStateStorage->get_ConfigurationRecall((WX218xStateStorageRecalConfigurationEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_STORE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spStateStorage->get_StoreEnabled(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_STORE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spStateStorage->put_StoreEnabled(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_RECALL_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spStateStorage->get_RecallEnabled(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_RECALL_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xStateStorage> spStateStorage;
	status = GetDriverInterface(Vi, &spStateStorage);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spStateStorage->put_RecallEnabled(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_XINSTR_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		HRESULT hr = spXInstrument->get_Enabled(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_XINSTR_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		HRESULT hr = spXInstrument->put_Enabled(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_XINSTR_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spXInstrument->get_Mode((WX218xXInstrumentModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_XINSTR_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spXInstrument->put_Mode((WX218xXInstrumentModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_XINSTR_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spXInstrument->get_Offset(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_XINSTR_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spXInstrument->put_Offset(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MODE_ADV ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spXInstrument->get_ModeAdv((WX218xXInstrumentModeAdvEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_MODE_ADV ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xXInstrument> spXInstrument;
	status = GetDriverInterface(Vi, &spXInstrument);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spXInstrument->put_ModeAdv((WX218xXInstrumentModeAdvEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_Amplitude(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_Amplitude(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_CONFIGURE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_Configure(_RepCapIdentifier, (WX218xPulseConfigureEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_CONFIGURE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_Configure(_RepCapIdentifier, (WX218xPulseConfigureEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_Delay(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_Delay(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_DELAY_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_DelayPercent(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_DELAY_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_DelayPercent(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_DOUBLE_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_DoubleDelay(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_DOUBLE_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_DoubleDelay(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_DOUBLE_DELAY_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_DoubleDelayPercent(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_DOUBLE_DELAY_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_DoubleDelayPercent(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_FALL_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_FallTime(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_FALL_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_FallTime(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_FALL_TIME_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_FallTimePercent(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_FALL_TIME_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_FallTimePercent(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_HighLevel(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_HighLevel(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_LEVEL_CONTROL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_LevelControl(_RepCapIdentifier, (WX218xPulseLevelControlEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_LEVEL_CONTROL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_LevelControl(_RepCapIdentifier, (WX218xPulseLevelControlEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_LowLevel(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_LowLevel(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_Mode(_RepCapIdentifier, (WX218xPulseModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_Mode(_RepCapIdentifier, (WX218xPulseModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_Offset(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_Offset(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_PERIOD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_Period(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_PERIOD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_Period(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_Polarity(_RepCapIdentifier, (WX218xPulsePolarityEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_Polarity(_RepCapIdentifier, (WX218xPulsePolarityEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_RISE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_RiseTime(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_RISE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_RiseTime(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_RISE_TIME_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_RiseTimePercent(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_RISE_TIME_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_RiseTimePercent(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_TRANSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_Transition(_RepCapIdentifier, (WX218xPulseTransitionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_TRANSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_Transition(_RepCapIdentifier, (WX218xPulseTransitionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_Width(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_Width(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_WIDTH_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->get_WidthPercent(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PULSE_WIDTH_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPulse> spDigitalPulse;
	status = GetDriverInterface(Vi, &spDigitalPulse);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPulse->put_WidthPercent(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SWEEP_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->get_Direction(_RepCapIdentifier, (WX218xSweepDirectionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SWEEP_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->put_Direction(_RepCapIdentifier, (WX218xSweepDirectionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SWEEP_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SWEEP_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SWEEP_FREQUENCY_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->get_FrequencyStart(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SWEEP_FREQUENCY_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->put_FrequencyStart(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SWEEP_FREQUENCY_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->get_FrequencyStop(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SWEEP_FREQUENCY_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->put_FrequencyStop(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SWEEP_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->get_Marker(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SWEEP_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->put_Marker(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SWEEP_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->get_Spacing(_RepCapIdentifier, (WX218xSweepSpacingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SWEEP_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->put_Spacing(_RepCapIdentifier, (WX218xSweepSpacingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_SWEEP_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->get_Time(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_SWEEP_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xSweep> spSweep;
	status = GetDriverInterface(Vi, &spSweep);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spSweep->put_Time(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATTERN_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->get_Baud(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATTERN_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->put_Baud(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATTERN_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->get_Level(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATTERN_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->put_Level(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATTERN_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->get_Mode(_RepCapIdentifier, (WX218xPatternModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATTERN_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->put_Mode(_RepCapIdentifier, (WX218xPatternModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATTERN_PREDEFINED_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->get_PredefinedType(_RepCapIdentifier, (WX218xPatternPredefinedTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATTERN_PREDEFINED_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->put_PredefinedType(_RepCapIdentifier, (WX218xPatternPredefinedTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATTERN_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->get_HighLevel(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATTERN_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->put_HighLevel(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATTERN_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->get_LowLevel(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATTERN_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->put_LowLevel(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATTERN_LOOP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->get_Loop(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATTERN_LOOP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->put_Loop(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PREAMBLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->get_Preamble(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PREAMBLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->put_Preamble(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATTERN_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->get_Length(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATTERN_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPattern> spPattern;
	status = GetDriverInterface(Vi, &spPattern);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPattern->put_Length(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATTERN_COMPOSER_TRANSITION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPatternComposer->get_TransitionType(_RepCapIdentifier, (WX218xPatternComposerTransitionTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATTERN_COMPOSER_TRANSITION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPatternComposer->put_TransitionType(_RepCapIdentifier, (WX218xPatternComposerTransitionTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATT_COMP_LINEAR_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPatternComposer->get_LinearStart(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATT_COMP_LINEAR_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPatternComposer->put_LinearStart(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATT_COMP_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPatternComposer->get_Resolution(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATT_COMP_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPatternComposer->put_Resolution(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PATTERN_COMPOSER_RESOLUTION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPatternComposer->get_ResolutionType(_RepCapIdentifier, (WX218xPatternResTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PATTERN_COMPOSER_RESOLUTION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPatternComposer->put_ResolutionType(_RepCapIdentifier, (WX218xPatternResTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FAST_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPatternComposer->get_FastStart(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FAST_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPatternComposer> spPatternComposer;
	status = GetDriverInterface(Vi, &spPatternComposer);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPatternComposer->put_FastStart(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_DELAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->get_DelayMode(_RepCapIdentifier, (WX218xDigPatternDelayModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_DELAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->put_DelayMode(_RepCapIdentifier, (WX218xDigPatternDelayModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_LEVEL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->get_LevelMode(_RepCapIdentifier, (WX218xDigPatternLevelModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_LEVEL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->put_LevelMode(_RepCapIdentifier, (WX218xDigPatternLevelModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PATTERN_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->get_Delay(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PATTERN_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->put_Delay(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PATTERN_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PATTERN_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->get_HighLevel(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->put_HighLevel(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->get_LowLevel(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->put_LowLevel(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_POD_PRESENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->get_PodPresent(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_EMPHASIS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->get_EmphasisEnabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_EMPHASIS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->put_EmphasisEnabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FORMAT_DATA ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->get_FormatData(_RepCapIdentifier, (WX218xDigFormatDataEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FORMAT_DATA ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->put_FormatData(_RepCapIdentifier, (WX218xDigFormatDataEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ARB_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->get_ArbResolution(_RepCapIdentifier, (WX218xArbitraryResolutionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ARB_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spDigitalPatternOutput->put_ArbResolution(_RepCapIdentifier, (WX218xArbitraryResolutionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_CLOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spDigitalPatternOutput->get_DigClock((WX218xDigitalClockEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_CLOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spDigitalPatternOutput->put_DigClock((WX218xDigitalClockEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DIG_PORT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		HRESULT hr = spDigitalPatternOutput->get_DigPort((WX218xDigPortEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DIG_PORT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xDigitalPatternOutput> spDigitalPatternOutput;
	status = GetDriverInterface(Vi, &spDigitalPatternOutput);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		HRESULT hr = spDigitalPatternOutput->put_DigPort((WX218xDigPortEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHIRP_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->get_Width(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CHIRP_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->put_Width(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHIRP_REPETITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->get_Repetition(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CHIRP_REPETITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->put_Repetition(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHIRP_START_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->get_StartFrequency(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CHIRP_START_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->put_StartFrequency(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHIRP_STOP_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->get_StopFrequency(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CHIRP_STOP_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->put_StopFrequency(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHIRP_MARKER_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->get_MarkerFrequency(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CHIRP_MARKER_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->put_MarkerFrequency(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHIRP_AMPL_DEPTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->get_AmplDepth(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CHIRP_AMPL_DEPTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->put_AmplDepth(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHIRP_FREQ_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->get_FreqDirection(_RepCapIdentifier, (WX218xChirpFreqDirectionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CHIRP_FREQ_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->put_FreqDirection(_RepCapIdentifier, (WX218xChirpFreqDirectionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHIRP_FREQ_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->get_FreqSpacing(_RepCapIdentifier, (WX218xChirpFreqSpacingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CHIRP_FREQ_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->put_FreqSpacing(_RepCapIdentifier, (WX218xChirpFreqSpacingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHIRP_AMPL_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->get_AmplDirection(_RepCapIdentifier, (WX218xChirpAmplitudeDirectionEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CHIRP_AMPL_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->put_AmplDirection(_RepCapIdentifier, (WX218xChirpAmplitudeDirectionEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHIRP_AMPL_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->get_AmplSpacing(_RepCapIdentifier, (WX218xChirpAmplSpacingEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CHIRP_AMPL_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->put_AmplSpacing(_RepCapIdentifier, (WX218xChirpAmplSpacingEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CHIRP_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CHIRP_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xCHIRP> spCHIRP;
	status = GetDriverInterface(Vi, &spCHIRP);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spCHIRP->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FSK_SHIFT_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFSK->get_ShiftFreq(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FSK_SHIFT_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFSK->put_ShiftFreq(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FSK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFSK->get_Baud(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FSK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFSK->put_Baud(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FSK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFSK->get_Marker(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FSK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFSK->put_Marker(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ENABLED_FSK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFSK->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ENABLED_FSK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFSK> spFSK;
	status = GetDriverInterface(Vi, &spFSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFSK->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ASK_START_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spASK->get_StartAmplitude(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ASK_START_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spASK->put_StartAmplitude(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ASK_SHIFT_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spASK->get_ShiftAmplitude(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ASK_SHIFT_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spASK->put_ShiftAmplitude(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ASK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spASK->get_Baud(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ASK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spASK->put_Baud(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ASK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spASK->get_Marker(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ASK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spASK->put_Marker(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ENABLED_ASK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spASK->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ENABLED_ASK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xASK> spASK;
	status = GetDriverInterface(Vi, &spASK);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spASK->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FHOP_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFHOP->get_Time(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FHOP_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFHOP->put_Time(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FHOP_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFHOP->get_Marker(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FHOP_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFHOP->put_Marker(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_FHOP_DWELL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFHOP->get_DwellMode(_RepCapIdentifier, (WX218xFHOPDwellModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_FHOP_DWELL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFHOP->put_DwellMode(_RepCapIdentifier, (WX218xFHOPDwellModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ENABLED_FHOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFHOP->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ENABLED_FHOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xFHOP> spFHOP;
	status = GetDriverInterface(Vi, &spFHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spFHOP->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAHOP->get_Time(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAHOP->put_Time(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAHOP->get_Marker(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAHOP->put_Marker(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_DWELL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAHOP->get_DwellMode(_RepCapIdentifier, (WX218xAHOPDwellModeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_DWELL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAHOP->put_DwellMode(_RepCapIdentifier, (WX218xAHOPDwellModeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ENABLED_AHOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAHOP->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ENABLED_AHOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xAHOP> spAHOP;
	status = GetDriverInterface(Vi, &spAHOP);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spAHOP->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PSK_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->get_StartPhase(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PSK_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->put_StartPhase(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PSK_SHIFT_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->get_ShiftPhase(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PSK_SHIFT_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->put_ShiftPhase(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PSK_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->get_Rate(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PSK_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->put_Rate(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->get_Type(_RepCapIdentifier, (WX218xPskTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->put_Type(_RepCapIdentifier, (WX218xPskTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PSK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->get_Marker(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PSK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->put_Marker(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PSK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->get_Baud(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PSK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->put_Baud(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_PSK_CARRIER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->get_CarrierEnabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_PSK_CARRIER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->put_CarrierEnabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ENABLED_PSK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ENABLED_PSK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xPSK> spPSK;
	status = GetDriverInterface(Vi, &spPSK);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spPSK->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_QAM_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spQAM->get_Baud(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_QAM_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViReal64> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spQAM->put_Baud(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_QAM_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spQAM->get_Type(_RepCapIdentifier, (WX218xQamTypeEnum*)&_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_QAM_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spQAM->put_Type(_RepCapIdentifier, (WX218xQamTypeEnum)(long)_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_MARKER2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spQAM->get_Marker(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_MARKER2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViInt32> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spQAM->put_Marker(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_CARRIER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spQAM->get_CarrierEnabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_CARRIER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spQAM->put_CarrierEnabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

ViStatus _VI_FUNC wx218x_get_ENABLED_QAM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue )
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, WX218X_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val;
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spQAM->get_Enabled(_RepCapIdentifier, &_val);
		status = TranslateHRESULT(Vi, hr);
		if (status >= VI_SUCCESS)
		{
			*AttributeValue = _val.GetVal();
		}
	}

	return status;
}

ViStatus _VI_FUNC wx218x_set_ENABLED_QAM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue )
{
	ViStatus status = VI_SUCCESS;
	CComPtr<IWX218xQAM> spQAM;
	status = GetDriverInterface(Vi, &spQAM);
	if (status == VI_SUCCESS)
	{
		CParam<ViBoolean> _val(AttributeValue);
		CParam<ViConstString> _RepCapIdentifier(RepCapIdentifier);
		HRESULT hr = spQAM->put_Enabled(_RepCapIdentifier, _val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}


