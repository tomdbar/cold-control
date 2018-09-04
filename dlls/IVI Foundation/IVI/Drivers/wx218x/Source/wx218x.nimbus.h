/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#pragma once

#include "_WX218x.h"
ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_DESCRIPTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_PREFIX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_VENDOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_RANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_QUERY_INSTRUMENT_STATUS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CACHE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SIMULATE ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_RECORD_COERCIONS ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_INTERCHANGE_CHECK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_LOGICAL_NAME ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_IO_RESOURCE_DESCRIPTOR ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_DRIVER_SETUP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_GROUP_CAPABILITIES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_SUPPORTED_INSTRUMENT_MODELS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_INSTRUMENT_FIRMWARE_REVISION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_INSTRUMENT_MANUFACTURER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_INSTRUMENT_MODEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC wx218x_get_ARB_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ARB_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ARB_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ARB_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ARB_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ARB_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ARB_WAVEFORM_HANDLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ARB_WAVEFORM_HANDLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ARB_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ARB_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_MAX_NUM_WAVEFORMS ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_WAVEFORM_QUANTUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_MAX_WAVEFORM_SIZE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_MIN_WAVEFORM_SIZE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_ARB_SEQUENCE_HANDLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ARB_SEQUENCE_HANDLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_MAX_SEQUENCE_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_MIN_SEQUENCE_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_MAX_LOOP_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_MAX_NUM_SEQUENCES ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_AM_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_AM_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_AM_INTERNAL_DEPTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_AM_INTERNAL_DEPTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_AM_INTERNAL_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_AM_INTERNAL_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_AM_INTERNAL_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_AM_INTERNAL_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_AM_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_AM_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FM_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FM_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_FM_INTERNAL_DEVIATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FM_INTERNAL_DEVIATION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FM_INTERNAL_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FM_INTERNAL_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FM_INTERNAL_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FM_INTERNAL_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FM_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FM_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHANNEL_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_OUTPUT_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_OUTPUT_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_OUTPUT_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_OUTPUT_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_OPERATION_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_OPERATION_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_OUTPUT_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_OUTPUT_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_REF_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_REF_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FUNC_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FUNC_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FUNC_DC_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FUNC_DC_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FUNC_DUTY_CYCLE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FUNC_DUTY_CYCLE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FUNC_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FUNC_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FUNC_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FUNC_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FUNC_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FUNC_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_BURST_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_BURST_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_INTERNAL_TRIGGER_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_INTERNAL_TRIGGER_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TRIGGER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ACTIVE_CHANNEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );
ViStatus _VI_FUNC wx218x_set_ACTIVE_CHANNEL ( ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue );

ViStatus _VI_FUNC wx218x_get_SKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ENABLED_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ENABLED_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_INTERNAL_DEPTH_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_INTERNAL_DEPTH_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_INTERNAL_WAVEFORM_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_INTERNAL_WAVEFORM_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_INTERNAL_FREQUENCY_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_INTERNAL_FREQUENCY_AM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_COUPLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_COUPLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ENABLED_OUTPUT ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ENABLED_OUTPUT ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_OPERATION_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_OPERATION_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_OUTPUT_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_OUTPUT_MODE2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_REFERENCE_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_REFERENCE_CLOCK_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_REF_EXT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_REF_EXT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_EXT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_EXT_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SYNC_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SYNC_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_SYNC_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SYNC_FUNCTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SYNC_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SYNC_POSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SYNC_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SYNC_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SYNC_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SYNC_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DC_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DC_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DC_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DC_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DUTY_CYCLE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DUTY_CYCLE_HIGH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_EXP_EXPONENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_EXP_EXPONENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_GAUSS_EXPONENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_GAUSS_EXPONENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_POWER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_RAMP_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_RAMP_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_RAMP_FALL_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_RAMP_FALL_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_RAMP_RISE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_RAMP_RISE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SINCN_CYCLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SINCN_CYCLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_HV_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_HV_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CLOCK_DIVIDER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CLOCK_DIVIDER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_GAIN ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SAMPLE_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SAMPLE_RATE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SAMPLE_RATE_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ARB_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ARB_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ARB_TIMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ARB_TIMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FREQ_RAST_DIVIDER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FREQ_RAST_DIVIDER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_NUMBER_WAVEFORMS_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_QUANTUM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_WAVEFORM_SIZE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_WAVEFORM_SIZE_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_TRACE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TRACE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FAST_DOWNLOAD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FAST_DOWNLOAD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DOWNLOAD_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DOWNLOAD_RECORD ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ADVANCE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ADVANCE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SEQ_JUMP_EVENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SEQ_JUMP_EVENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_LENGTH_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_LENGTH_MIN ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_LOOP_COUNT_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_NUMBER_SEQUENCE_MAX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_SEQ_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SEQ_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SEQ_SYNC_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SEQ_SYNC_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SEQ_TIMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SEQ_TIMING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_QUICK_SEQUENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_QUICK_SEQUENCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PRESTEP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PRESTEP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SEQ_ONCE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SEQ_ONCE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ADV_SEQ_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ADV_SEQ_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SYNC_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SYNC_LOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ASEQ_ONCE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ASEQ_ONCE_COUNT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CARR_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CARR_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CARR_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CARR_WAVEFORM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_COUPLE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_COUPLE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_COURSE_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_COURSE_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FINE_SKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FINE_SKEW ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ENABLED_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ENABLED_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_INTERNAL_DEVIATION_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_INTERNAL_DEVIATION_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_INTERNAL_FREQUENCY_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_INTERNAL_FREQUENCY_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_INTERNAL_WAVEFORM_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_INTERNAL_WAVEFORM_FM ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FM_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FM_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_MARKER_INDEX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_MARKER_INDEX ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_MARKER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_MARKER_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_MARKER_HIGH_LEVEL4_CH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_MARKER_HIGH_LEVEL4_CH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_LOW_LEVEL4_CH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_LOW_LEVEL4_CH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_BURST_COUNT2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_BURST_COUNT2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CONTINUOUS_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CONTINUOUS_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CONTINUOUS_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CONTINUOUS_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TRIG_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TRIG_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TRIG_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TRIG_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TRIG_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TRIG_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TRIG_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TRIG_SOURCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TRIG_TIMER_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TRIG_TIMER_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TRIG_TIMER_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TRIG_TIMER_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TRIG_TIMER_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TRIG_TIMER_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TRIG_TRIGGER_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TRIG_TRIGGER_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TRIGGER_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TRIGGER_IMPEDANCE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ARM_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ARM_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ARM_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ARM_SLOPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_HI_PASS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_HI_PASS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_HI_PASS_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_HI_PASS_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_HOLDOFF ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_HOLDOFF_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_HOLDOFF_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_LOW_PASS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_LOW_PASS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_LOW_PASS_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_LOW_PASS_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CELL_RECALL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CELL_RECALL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CELL_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CELL_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CONFIGURATION_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CONFIGURATION_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TARGET_RECALL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TARGET_RECALL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TARGET_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TARGET_STORE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CONFIGURATION_RECALL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_STORE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_STORE_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_RECALL_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_RECALL_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_XINSTR_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_XINSTR_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_XINSTR_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_XINSTR_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_XINSTR_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_XINSTR_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_MODE_ADV ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_MODE_ADV ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_CONFIGURE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_CONFIGURE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_DELAY_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_DELAY_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_DOUBLE_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_DOUBLE_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_DOUBLE_DELAY_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_DOUBLE_DELAY_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_FALL_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_FALL_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_FALL_TIME_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_FALL_TIME_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_LEVEL_CONTROL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_LEVEL_CONTROL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_OFFSET ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_PERIOD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_PERIOD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_POLARITY ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_RISE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_RISE_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_RISE_TIME_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_RISE_TIME_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_TRANSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_TRANSITION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PULSE_WIDTH_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PULSE_WIDTH_PERCENT ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SWEEP_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SWEEP_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SWEEP_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SWEEP_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_SWEEP_FREQUENCY_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SWEEP_FREQUENCY_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SWEEP_FREQUENCY_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SWEEP_FREQUENCY_STOP ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SWEEP_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SWEEP_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SWEEP_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SWEEP_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_SWEEP_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_SWEEP_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATTERN_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATTERN_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATTERN_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATTERN_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATTERN_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATTERN_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATTERN_PREDEFINED_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATTERN_PREDEFINED_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATTERN_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATTERN_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATTERN_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATTERN_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATTERN_LOOP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATTERN_LOOP ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PREAMBLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PREAMBLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATTERN_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATTERN_LENGTH ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATTERN_COMPOSER_TRANSITION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATTERN_COMPOSER_TRANSITION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATT_COMP_LINEAR_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATT_COMP_LINEAR_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATT_COMP_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATT_COMP_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PATTERN_COMPOSER_RESOLUTION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PATTERN_COMPOSER_RESOLUTION_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FAST_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FAST_START ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_DELAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_DELAY_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_LEVEL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_LEVEL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PATTERN_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PATTERN_DELAY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PATTERN_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PATTERN_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_HIGH_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_LOW_LEVEL ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_POD_PRESENT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_EMPHASIS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_EMPHASIS_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_FORMAT_DATA ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FORMAT_DATA ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ARB_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ARB_RESOLUTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_CLOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_CLOCK ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DIG_PORT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DIG_PORT ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHIRP_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CHIRP_WIDTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHIRP_REPETITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CHIRP_REPETITION ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHIRP_START_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CHIRP_START_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHIRP_STOP_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CHIRP_STOP_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHIRP_MARKER_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CHIRP_MARKER_FREQUENCY ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHIRP_AMPL_DEPTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CHIRP_AMPL_DEPTH ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHIRP_FREQ_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CHIRP_FREQ_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHIRP_FREQ_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CHIRP_FREQ_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHIRP_AMPL_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CHIRP_AMPL_DIRECTION ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHIRP_AMPL_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CHIRP_AMPL_SPACING ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CHIRP_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CHIRP_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_FSK_SHIFT_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FSK_SHIFT_FREQ ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FSK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FSK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FSK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FSK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ENABLED_FSK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ENABLED_FSK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_ASK_START_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ASK_START_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ASK_SHIFT_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ASK_SHIFT_AMPLITUDE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ASK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ASK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ASK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ASK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ENABLED_ASK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ENABLED_ASK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_FHOP_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FHOP_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FHOP_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FHOP_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_FHOP_DWELL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_FHOP_DWELL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ENABLED_FHOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ENABLED_FHOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TIME ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_DWELL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_DWELL_MODE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_ENABLED_AHOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ENABLED_AHOP ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_PSK_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PSK_START_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PSK_SHIFT_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PSK_SHIFT_PHASE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PSK_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PSK_RATE ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PSK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PSK_MARKER ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PSK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PSK_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_PSK_CARRIER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_PSK_CARRIER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_ENABLED_PSK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ENABLED_PSK ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_QAM_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue );
ViStatus _VI_FUNC wx218x_set_QAM_BAUD ( ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue );

ViStatus _VI_FUNC wx218x_get_QAM_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_QAM_TYPE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_MARKER2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue );
ViStatus _VI_FUNC wx218x_set_MARKER2 ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue );

ViStatus _VI_FUNC wx218x_get_CARRIER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_CARRIER_ENABLED ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );

ViStatus _VI_FUNC wx218x_get_ENABLED_QAM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue );
ViStatus _VI_FUNC wx218x_set_ENABLED_QAM ( ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue );


