/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#pragma once

class WX218x;

typedef CDriver DriverBase;

class ForwardingShimImpl
{
public:
	static HRESULT IWX218x_AbortGeneration(WX218x* pT);
	static HRESULT IWX218x_InitiateGeneration(WX218x* pT);
	static HRESULT IWX218x_SetActiveChannel(WX218x* pT, BSTR ChName);
	static HRESULT IWX218x_SendCmd(WX218x* pT, BSTR Command);
	static HRESULT IWX218x_ReadQuery(WX218x* pT, BSTR SendBuff, BSTR* ReadBuff);
	static HRESULT IWX218x_get_Output(WX218x* pT, IWX218xChannel** val);
	static HRESULT IWX218x_get_AM(WX218x* pT, IWX218xAM** val);
	static HRESULT IWX218x_get_ActiveChannel(WX218x* pT, BSTR* val);
	static HRESULT IWX218x_put_ActiveChannel(WX218x* pT, BSTR val);
	static HRESULT IWX218x_get_StandardWaveform(WX218x* pT, IWX218xStandardWaveform** val);
	static HRESULT IWX218x_get_Arbitrary(WX218x* pT, IWX218xArbitrary** val);
	static HRESULT IWX218x_get_CarrierModulation(WX218x* pT, IWX218xCarrierModulation** val);
	static HRESULT IWX218x_get_Couple(WX218x* pT, IWX218xCouple** val);
	static HRESULT IWX218x_get_FM(WX218x* pT, IWX218xFM** val);
	static HRESULT IWX218x_get_Markers(WX218x* pT, IWX218xMarkers** val);
	static HRESULT IWX218x_get_Trigger(WX218x* pT, IWX218xTrigger** val);
	static HRESULT IWX218x_get_StateStorage(WX218x* pT, IWX218xStateStorage** val);
	static HRESULT IWX218x_get_XInstrument(WX218x* pT, IWX218xXInstrument** val);
	static HRESULT IWX218x_get_DigitalPulse(WX218x* pT, IWX218xDigitalPulse** val);
	static HRESULT IWX218x_get_Sweep(WX218x* pT, IWX218xSweep** val);
	static HRESULT IWX218x_get_DigitalPatternOutput(WX218x* pT, IWX218xDigitalPatternOutput** val);
	static HRESULT IWX218x_get_CHIRP(WX218x* pT, IWX218xCHIRP** val);
	static HRESULT IWX218x_get_FSK(WX218x* pT, IWX218xFSK** val);
	static HRESULT IWX218x_get_ASK(WX218x* pT, IWX218xASK** val);
	static HRESULT IWX218x_get_FHOP(WX218x* pT, IWX218xFHOP** val);
	static HRESULT IWX218x_get_AHOP(WX218x* pT, IWX218xAHOP** val);
	static HRESULT IWX218x_get_Pattern(WX218x* pT, IWX218xPattern** val);
	static HRESULT IWX218x_get_PSK(WX218x* pT, IWX218xPSK** val);
	static HRESULT IWX218x_get_QAM(WX218x* pT, IWX218xQAM** val);
	static HRESULT IWX218x_get_Skew(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218x_put_Skew(WX218x* pT, BSTR Channel, double val);
	static HRESULT IIviDriver_Initialize(WX218x* pT, BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString);
	static HRESULT IIviDriver_Close(WX218x* pT);
	static HRESULT IIviDriver_get_DriverOperation(WX218x* pT, IIviDriverOperation** val);
	static HRESULT IIviDriver_get_Identity(WX218x* pT, IIviDriverIdentity** val);
	static HRESULT IIviDriver_get_Utility(WX218x* pT, IIviDriverUtility** val);
	static HRESULT IIviDriver_get_Initialized(WX218x* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_InvalidateAllAttributes(WX218x* pT);
	static HRESULT IIviDriverOperation_ClearInterchangeWarnings(WX218x* pT);
	static HRESULT IIviDriverOperation_GetNextInterchangeWarning(WX218x* pT, BSTR* val);
	static HRESULT IIviDriverOperation_ResetInterchangeCheck(WX218x* pT);
	static HRESULT IIviDriverOperation_GetNextCoercionRecord(WX218x* pT, BSTR* val);
	static HRESULT IIviDriverOperation_get_LogicalName(WX218x* pT, BSTR* val);
	static HRESULT IIviDriverOperation_get_IoResourceDescriptor(WX218x* pT, BSTR* val);
	static HRESULT IIviDriverOperation_get_Cache(WX218x* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_Cache(WX218x* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_InterchangeCheck(WX218x* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_InterchangeCheck(WX218x* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_QueryInstrumentStatus(WX218x* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_QueryInstrumentStatus(WX218x* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_RangeCheck(WX218x* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_RangeCheck(WX218x* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_RecordCoercions(WX218x* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_RecordCoercions(WX218x* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_Simulate(WX218x* pT, VARIANT_BOOL* val);
	static HRESULT IIviDriverOperation_put_Simulate(WX218x* pT, VARIANT_BOOL val);
	static HRESULT IIviDriverOperation_get_DriverSetup(WX218x* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_InstrumentManufacturer(WX218x* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_InstrumentModel(WX218x* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_InstrumentFirmwareRevision(WX218x* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_Identifier(WX218x* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_SupportedInstrumentModels(WX218x* pT, BSTR* val);
	static HRESULT IIviDriverIdentity_get_SpecificationMajorVersion(WX218x* pT, long* val);
	static HRESULT IIviDriverIdentity_get_SpecificationMinorVersion(WX218x* pT, long* val);
	static HRESULT IIviDriverIdentity_get_GroupCapabilities(WX218x* pT, BSTR* val);
	static HRESULT IIviComponentIdentity_get_Description(WX218x* pT, BSTR* val);
	static HRESULT IIviComponentIdentity_get_Revision(WX218x* pT, BSTR* val);
	static HRESULT IIviComponentIdentity_get_Vendor(WX218x* pT, BSTR* val);
	static HRESULT IIviDriverUtility_Reset(WX218x* pT);
	static HRESULT IIviDriverUtility_ResetWithDefaults(WX218x* pT);
	static HRESULT IIviDriverUtility_Disable(WX218x* pT);
	static HRESULT IIviDriverUtility_SelfTest(WX218x* pT, long* TestResult, BSTR* TestMessage);
	static HRESULT IIviDriverUtility_ErrorQuery(WX218x* pT, long* ErrorCode, BSTR* ErrorMessage);
	static HRESULT IIviDriverUtility_LockObject(WX218x* pT);
	static HRESULT IIviDriverUtility_UnlockObject(WX218x* pT);
	static HRESULT IWX218xChannel_ConfigureRefExtFrequency(WX218x* pT, BSTR Channel, double ExtFreq);
	static HRESULT IWX218xChannel_ConfigureExtFrequency(WX218x* pT, BSTR Channel, WX218xExtFrequencyEnum ExtFrequency);
	static HRESULT IWX218xChannel_ConfigureOutputStateAllCh(WX218x* pT, VARIANT_BOOL State);
	static HRESULT IWX218xChannel_ConfigureCoupleAllCh(WX218x* pT, WX218xOutputCoupleEnum Couple);
	static HRESULT IWX218xChannel_get_Count(WX218x* pT, long* val);
	static HRESULT IWX218xChannel_get_Name(WX218x* pT, long Index, BSTR* val);
	static HRESULT IWX218xChannel_get_Couple(WX218x* pT, BSTR Channel, WX218xOutputCoupleEnum* val);
	static HRESULT IWX218xChannel_put_Couple(WX218x* pT, BSTR Channel, WX218xOutputCoupleEnum val);
	static HRESULT IWX218xChannel_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xChannel_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xChannel_get_OperationMode(WX218x* pT, BSTR Channel, WX218xOperationModeEnum* val);
	static HRESULT IWX218xChannel_put_OperationMode(WX218x* pT, BSTR Channel, WX218xOperationModeEnum val);
	static HRESULT IWX218xChannel_get_OutputMode(WX218x* pT, WX218xOutputModeEnum* val);
	static HRESULT IWX218xChannel_put_OutputMode(WX218x* pT, WX218xOutputModeEnum val);
	static HRESULT IWX218xChannel_get_ReferenceClockSource(WX218x* pT, WX218xReferenceClockSourceEnum* val);
	static HRESULT IWX218xChannel_put_ReferenceClockSource(WX218x* pT, WX218xReferenceClockSourceEnum val);
	static HRESULT IWX218xChannel_get_RefExtFrequency(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xChannel_put_RefExtFrequency(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xChannel_get_Sync(WX218x* pT, IWX218xChannelSync** val);
	static HRESULT IWX218xChannel_get_ExtFrequency(WX218x* pT, BSTR Channel, WX218xExtFrequencyEnum* val);
	static HRESULT IWX218xChannel_put_ExtFrequency(WX218x* pT, BSTR Channel, WX218xExtFrequencyEnum val);
	static HRESULT IIviFgenOutput_get_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL* val);
	static HRESULT IIviFgenOutput_put_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL val);
	static HRESULT IIviFgenOutput_get_Impedance(WX218x* pT, BSTR ChannelName, double* val);
	static HRESULT IIviFgenOutput_put_Impedance(WX218x* pT, BSTR ChannelName, double val);
	static HRESULT IIviFgenOutput_get_OutputMode(WX218x* pT, IviFgenOutputModeEnum* val);
	static HRESULT IIviFgenOutput_put_OutputMode(WX218x* pT, IviFgenOutputModeEnum val);
	static HRESULT IIviFgenOutput_get_OperationMode(WX218x* pT, BSTR ChannelName, IviFgenOperationModeEnum* val);
	static HRESULT IIviFgenOutput_put_OperationMode(WX218x* pT, BSTR ChannelName, IviFgenOperationModeEnum val);
	static HRESULT IIviFgenOutput_get_ReferenceClockSource(WX218x* pT, IviFgenReferenceClockSourceEnum* val);
	static HRESULT IIviFgenOutput_put_ReferenceClockSource(WX218x* pT, IviFgenReferenceClockSourceEnum val);
	static HRESULT IIviFgenOutput_get_Count(WX218x* pT, long* val);
	static HRESULT IIviFgenOutput_get_Name(WX218x* pT, long Index, BSTR* val);
	static HRESULT IIviFgenTrigger_SendSoftwareTrigger(WX218x* pT);
	static HRESULT IIviFgenTrigger_get_BurstCount(WX218x* pT, BSTR ChannelName, long* val);
	static HRESULT IIviFgenTrigger_put_BurstCount(WX218x* pT, BSTR ChannelName, long val);
	static HRESULT IIviFgenTrigger_get_InternalRate(WX218x* pT, double* val);
	static HRESULT IIviFgenTrigger_put_InternalRate(WX218x* pT, double val);
	static HRESULT IIviFgenTrigger_get_Source(WX218x* pT, BSTR ChannelName, IviFgenTriggerSourceEnum* val);
	static HRESULT IIviFgenTrigger_put_Source(WX218x* pT, BSTR ChannelName, IviFgenTriggerSourceEnum val);
	static HRESULT IIviFgenStandardWaveform_Configure(WX218x* pT, BSTR ChannelName, IviFgenWaveformEnum Waveform, double Amplitude, double DCOffset, double Frequency, double StartPhase);
	static HRESULT IIviFgenStandardWaveform_get_DutyCycleHigh(WX218x* pT, BSTR ChannelName, double* val);
	static HRESULT IIviFgenStandardWaveform_put_DutyCycleHigh(WX218x* pT, BSTR ChannelName, double val);
	static HRESULT IIviFgenStandardWaveform_get_Amplitude(WX218x* pT, BSTR ChannelName, double* val);
	static HRESULT IIviFgenStandardWaveform_put_Amplitude(WX218x* pT, BSTR ChannelName, double val);
	static HRESULT IIviFgenStandardWaveform_get_DCOffset(WX218x* pT, BSTR ChannelName, double* val);
	static HRESULT IIviFgenStandardWaveform_put_DCOffset(WX218x* pT, BSTR ChannelName, double val);
	static HRESULT IIviFgenStandardWaveform_get_Frequency(WX218x* pT, BSTR ChannelName, double* val);
	static HRESULT IIviFgenStandardWaveform_put_Frequency(WX218x* pT, BSTR ChannelName, double val);
	static HRESULT IIviFgenStandardWaveform_get_StartPhase(WX218x* pT, BSTR ChannelName, double* val);
	static HRESULT IIviFgenStandardWaveform_put_StartPhase(WX218x* pT, BSTR ChannelName, double val);
	static HRESULT IIviFgenStandardWaveform_get_Waveform(WX218x* pT, BSTR ChannelName, IviFgenWaveformEnum* val);
	static HRESULT IIviFgenStandardWaveform_put_Waveform(WX218x* pT, BSTR ChannelName, IviFgenWaveformEnum val);
	static HRESULT IIviFgenArbitrary_ClearMemory(WX218x* pT);
	static HRESULT IIviFgenArbitrary_get_Gain(WX218x* pT, BSTR ChannelName, double* val);
	static HRESULT IIviFgenArbitrary_put_Gain(WX218x* pT, BSTR ChannelName, double val);
	static HRESULT IIviFgenArbitrary_get_Offset(WX218x* pT, BSTR ChannelName, double* val);
	static HRESULT IIviFgenArbitrary_put_Offset(WX218x* pT, BSTR ChannelName, double val);
	static HRESULT IIviFgenArbitrary_get_SampleRate(WX218x* pT, double* val);
	static HRESULT IIviFgenArbitrary_put_SampleRate(WX218x* pT, double val);
	static HRESULT IIviFgenArbitrary_get_Sequence(WX218x* pT, IIviFgenArbitrarySequence** val);
	static HRESULT IIviFgenArbitrary_get_Waveform(WX218x* pT, IIviFgenArbitraryWaveform** val);
	static HRESULT IIviFgenArbitrarySequence_Configure(WX218x* pT, BSTR ChannelName, long Handle, double Gain, double Offset);
	static HRESULT IIviFgenArbitrarySequence_Clear(WX218x* pT, long Handle);
	static HRESULT IIviFgenArbitrarySequence_Create(WX218x* pT, SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, long* val);
	static HRESULT IIviFgenArbitrarySequence_get_LengthMax(WX218x* pT, long* val);
	static HRESULT IIviFgenArbitrarySequence_get_LengthMin(WX218x* pT, long* val);
	static HRESULT IIviFgenArbitrarySequence_get_LoopCountMax(WX218x* pT, long* val);
	static HRESULT IIviFgenArbitrarySequence_get_NumberSequencesMax(WX218x* pT, long* val);
	static HRESULT IIviFgenArbitraryWaveform_Configure(WX218x* pT, BSTR ChannelName, long Handle, double Gain, double Offset);
	static HRESULT IIviFgenArbitraryWaveform_Clear(WX218x* pT, long Handle);
	static HRESULT IIviFgenArbitraryWaveform_Create(WX218x* pT, SAFEARRAY** Data, long* val);
	static HRESULT IIviFgenArbitraryWaveform_get_Frequency(WX218x* pT, BSTR ChannelName, double* val);
	static HRESULT IIviFgenArbitraryWaveform_put_Frequency(WX218x* pT, BSTR ChannelName, double val);
	static HRESULT IIviFgenArbitraryWaveform_get_NumberWaveformsMax(WX218x* pT, long* val);
	static HRESULT IIviFgenArbitraryWaveform_get_Quantum(WX218x* pT, long* val);
	static HRESULT IIviFgenArbitraryWaveform_get_SizeMax(WX218x* pT, long* val);
	static HRESULT IIviFgenArbitraryWaveform_get_SizeMin(WX218x* pT, long* val);
	static HRESULT IIviFgenAM_ConfigureInternal(WX218x* pT, double Depth, IviFgenAMInternalWaveformEnum Waveform, double Frequency);
	static HRESULT IIviFgenAM_get_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL* val);
	static HRESULT IIviFgenAM_put_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL val);
	static HRESULT IIviFgenAM_get_Source(WX218x* pT, BSTR ChannelName, IviFgenAMSourceEnum* val);
	static HRESULT IIviFgenAM_put_Source(WX218x* pT, BSTR ChannelName, IviFgenAMSourceEnum val);
	static HRESULT IIviFgenAM_get_InternalDepth(WX218x* pT, double* val);
	static HRESULT IIviFgenAM_put_InternalDepth(WX218x* pT, double val);
	static HRESULT IIviFgenAM_get_InternalFrequency(WX218x* pT, double* val);
	static HRESULT IIviFgenAM_put_InternalFrequency(WX218x* pT, double val);
	static HRESULT IIviFgenAM_get_InternalWaveform(WX218x* pT, IviFgenAMInternalWaveformEnum* val);
	static HRESULT IIviFgenAM_put_InternalWaveform(WX218x* pT, IviFgenAMInternalWaveformEnum val);
	static HRESULT IIviFgenFM_ConfigureInternal(WX218x* pT, double Deviation, IviFgenFMInternalWaveformEnum Waveform, double Frequency);
	static HRESULT IIviFgenFM_get_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL* val);
	static HRESULT IIviFgenFM_put_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL val);
	static HRESULT IIviFgenFM_get_Source(WX218x* pT, BSTR ChannelName, IviFgenFMSourceEnum* val);
	static HRESULT IIviFgenFM_put_Source(WX218x* pT, BSTR ChannelName, IviFgenFMSourceEnum val);
	static HRESULT IIviFgenFM_get_InternalDeviation(WX218x* pT, double* val);
	static HRESULT IIviFgenFM_put_InternalDeviation(WX218x* pT, double val);
	static HRESULT IIviFgenFM_get_InternalFrequency(WX218x* pT, double* val);
	static HRESULT IIviFgenFM_put_InternalFrequency(WX218x* pT, double val);
	static HRESULT IIviFgenFM_get_InternalWaveform(WX218x* pT, IviFgenFMInternalWaveformEnum* val);
	static HRESULT IIviFgenFM_put_InternalWaveform(WX218x* pT, IviFgenFMInternalWaveformEnum val);
	static HRESULT IIviFgen_InitiateGeneration(WX218x* pT);
	static HRESULT IIviFgen_AbortGeneration(WX218x* pT);
	static HRESULT IIviFgen_get_Output(WX218x* pT, IIviFgenOutput** val);
	static HRESULT IIviFgen_get_Trigger(WX218x* pT, IIviFgenTrigger** val);
	static HRESULT IIviFgen_get_StandardWaveform(WX218x* pT, IIviFgenStandardWaveform** val);
	static HRESULT IIviFgen_get_Arbitrary(WX218x* pT, IIviFgenArbitrary** val);
	static HRESULT IIviFgen_get_AM(WX218x* pT, IIviFgenAM** val);
	static HRESULT IIviFgen_get_FM(WX218x* pT, IIviFgenFM** val);
	static HRESULT IWX218xAM_ConfigureInternal(WX218x* pT, double Depth, WX218xAMInternalWaveformEnum Waveform, double Frequency);
	static HRESULT IWX218xAM_ConfigureAMEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled);
	static HRESULT IWX218xAM_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xAM_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xAM_get_InternalDepth(WX218x* pT, double* val);
	static HRESULT IWX218xAM_put_InternalDepth(WX218x* pT, double val);
	static HRESULT IWX218xAM_get_InternalWaveform(WX218x* pT, WX218xAMInternalWaveformEnum* val);
	static HRESULT IWX218xAM_put_InternalWaveform(WX218x* pT, WX218xAMInternalWaveformEnum val);
	static HRESULT IWX218xAM_get_InternalFrequency(WX218x* pT, double* val);
	static HRESULT IWX218xAM_put_InternalFrequency(WX218x* pT, double val);
	static HRESULT IWX218xChannelSync_ConfigureSyncEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled);
	static HRESULT IWX218xChannelSync_ConfigureSyncFunction(WX218x* pT, BSTR Channel, WX218xOutputSyncFunctionEnum Function);
	static HRESULT IWX218xChannelSync_ConfigureSyncPosition(WX218x* pT, BSTR Channel, long Position);
	static HRESULT IWX218xChannelSync_ConfigureSyncSource(WX218x* pT, WX218xOutputSyncSourceEnum Source);
	static HRESULT IWX218xChannelSync_ConfigureSyncWidth(WX218x* pT, BSTR Channel, long Width);
	static HRESULT IWX218xChannelSync_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xChannelSync_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xChannelSync_get_Function(WX218x* pT, BSTR Channel, WX218xOutputSyncFunctionEnum* val);
	static HRESULT IWX218xChannelSync_put_Function(WX218x* pT, BSTR Channel, WX218xOutputSyncFunctionEnum val);
	static HRESULT IWX218xChannelSync_get_Position(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xChannelSync_put_Position(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xChannelSync_get_Source(WX218x* pT, WX218xOutputSyncSourceEnum* val);
	static HRESULT IWX218xChannelSync_put_Source(WX218x* pT, WX218xOutputSyncSourceEnum val);
	static HRESULT IWX218xChannelSync_get_Width(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xChannelSync_put_Width(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xStandardWaveform_ConfigureRampWaveform(WX218x* pT, BSTR Channel, double Delay, double RiseTime, double FallTime);
	static HRESULT IWX218xStandardWaveform_SetAmplitudeMax(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xStandardWaveform_SetAmplitudeMin(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xStandardWaveform_SetDCOffsetMax(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xStandardWaveform_SetDCOffsetMin(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xStandardWaveform_SetFrequencyMax(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xStandardWaveform_SetFrequencyMin(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xStandardWaveform_SetPowerMax(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xStandardWaveform_SetPowerMin(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xStandardWaveform_Configure(WX218x* pT, BSTR Channel, WX218xWaveformEnum Waveform, double Amplitude, double DCOffset, double Frequency, double StartPhase);
	static HRESULT IWX218xStandardWaveform_ConfigureDCLevel(WX218x* pT, BSTR Channel, double DcLevel);
	static HRESULT IWX218xStandardWaveform_ConfigureDutyCycle(WX218x* pT, BSTR Channel, double DutyCycle);
	static HRESULT IWX218xStandardWaveform_ConfigureExponenent(WX218x* pT, BSTR Channel, long Exponent);
	static HRESULT IWX218xStandardWaveform_ConfigureGauss(WX218x* pT, BSTR Channel, long Gauss);
	static HRESULT IWX218xStandardWaveform_ConfigureHvAmplitude(WX218x* pT, BSTR Channel, double HvAmplitude);
	static HRESULT IWX218xStandardWaveform_ConfigurePower(WX218x* pT, BSTR Channel, double Power);
	static HRESULT IWX218xStandardWaveform_ConfigureSincNCycles(WX218x* pT, BSTR Channel, long Cycles);
	static HRESULT IWX218xStandardWaveform_ConfigureAmplitudeAllCh(WX218x* pT, double Amplitude);
	static HRESULT IWX218xStandardWaveform_ConfigureHVAmplAllCh(WX218x* pT, double HVAmplitude);
	static HRESULT IWX218xStandardWaveform_ConfigureOffsetAllCh(WX218x* pT, double Offset);
	static HRESULT IWX218xStandardWaveform_get_Amplitude(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xStandardWaveform_put_Amplitude(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStandardWaveform_get_DcLevel(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xStandardWaveform_put_DcLevel(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStandardWaveform_get_DCOffset(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xStandardWaveform_put_DCOffset(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStandardWaveform_get_DutyCycleHigh(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xStandardWaveform_put_DutyCycleHigh(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStandardWaveform_get_ExpExponent(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xStandardWaveform_put_ExpExponent(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xStandardWaveform_get_Frequency(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xStandardWaveform_put_Frequency(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStandardWaveform_get_GaussExponent(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xStandardWaveform_put_GaussExponent(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xStandardWaveform_get_Power(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xStandardWaveform_put_Power(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStandardWaveform_get_RampDelay(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xStandardWaveform_put_RampDelay(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStandardWaveform_get_RampFallTime(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xStandardWaveform_put_RampFallTime(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStandardWaveform_get_RampRiseTime(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xStandardWaveform_put_RampRiseTime(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStandardWaveform_get_SincNCycle(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xStandardWaveform_put_SincNCycle(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xStandardWaveform_get_StartPhase(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xStandardWaveform_put_StartPhase(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStandardWaveform_get_HvAmplitude(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xStandardWaveform_put_HvAmplitude(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStandardWaveform_get_Waveform(WX218x* pT, BSTR Channel, WX218xWaveformEnum* val);
	static HRESULT IWX218xStandardWaveform_put_Waveform(WX218x* pT, BSTR Channel, WX218xWaveformEnum val);
	static HRESULT IWX218xArbitrary_ClearMemory(WX218x* pT);
	static HRESULT IWX218xArbitrary_SetSampleRateMax(WX218x* pT);
	static HRESULT IWX218xArbitrary_SetSampleRateMin(WX218x* pT);
	static HRESULT IWX218xArbitrary_ConfigureClockDivider(WX218x* pT, BSTR Channel, long ClockDivider);
	static HRESULT IWX218xArbitrary_ConfigureSampleRateSource(WX218x* pT, BSTR Channel, WX218xSampleRateSourceEnum SampleRateSource);
	static HRESULT IWX218xArbitrary_ConfigureArbSource(WX218x* pT, BSTR Channel, WX218xArbitrarySourceEnum Source);
	static HRESULT IWX218xArbitrary_ConfigureArbTiming(WX218x* pT, BSTR Channel, WX218xArbitraryTimingEnum Timing);
	static HRESULT IWX218xArbitrary_ConfigureFreqRastDivider(WX218x* pT, BSTR Channel, WX218xFreqDividerEnum Divider);
	static HRESULT IWX218xArbitrary_ConfigureArbGain(WX218x* pT, BSTR Channel, double Gain);
	static HRESULT IWX218xArbitrary_ConfigureArbOffset(WX218x* pT, BSTR Channel, double Offset);
	static HRESULT IWX218xArbitrary_ConfigureArbSampleRate(WX218x* pT, double SampleRate);
	static HRESULT IWX218xArbitrary_get_ClockDivider(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xArbitrary_put_ClockDivider(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xArbitrary_get_Gain(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xArbitrary_put_Gain(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xArbitrary_get_Offset(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xArbitrary_put_Offset(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xArbitrary_get_SampleRate(WX218x* pT, double* val);
	static HRESULT IWX218xArbitrary_put_SampleRate(WX218x* pT, double val);
	static HRESULT IWX218xArbitrary_get_SampleRateSource(WX218x* pT, BSTR Channel, WX218xSampleRateSourceEnum* val);
	static HRESULT IWX218xArbitrary_put_SampleRateSource(WX218x* pT, BSTR Channel, WX218xSampleRateSourceEnum val);
	static HRESULT IWX218xArbitrary_get_Source(WX218x* pT, BSTR Channel, WX218xArbitrarySourceEnum* val);
	static HRESULT IWX218xArbitrary_put_Source(WX218x* pT, BSTR Channel, WX218xArbitrarySourceEnum val);
	static HRESULT IWX218xArbitrary_get_Timing(WX218x* pT, BSTR Channel, WX218xArbitraryTimingEnum* val);
	static HRESULT IWX218xArbitrary_put_Timing(WX218x* pT, BSTR Channel, WX218xArbitraryTimingEnum val);
	static HRESULT IWX218xArbitrary_get_Waveform(WX218x* pT, IWX218xArbitraryWaveform** val);
	static HRESULT IWX218xArbitrary_get_Sequence(WX218x* pT, IWX218xArbitrarySequence** val);
	static HRESULT IWX218xArbitrary_get_FreqRastDivider(WX218x* pT, BSTR Channel, WX218xFreqDividerEnum* val);
	static HRESULT IWX218xArbitrary_put_FreqRastDivider(WX218x* pT, BSTR Channel, WX218xFreqDividerEnum val);
	static HRESULT IWX218xArbitraryWaveform_Clear(WX218x* pT, long Handle);
	static HRESULT IWX218xArbitraryWaveform_Configure(WX218x* pT, BSTR Channel, long Handle, double Gain, double Offset);
	static HRESULT IWX218xArbitraryWaveform_Create(WX218x* pT, SAFEARRAY** Data, long* val);
	static HRESULT IWX218xArbitraryWaveform_LoadArbWfmFromFile(WX218x* pT, BSTR Channel, BSTR FileName, long* val);
	static HRESULT IWX218xArbitraryWaveform_CreateCustom(WX218x* pT, SAFEARRAY** Data, long* val);
	static HRESULT IWX218xArbitraryWaveform_LoadArbWfmFromFileAdv(WX218x* pT, BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2);
	static HRESULT IWX218xArbitraryWaveform_CreateCustomAdv(WX218x* pT, SAFEARRAY** Data1, SAFEARRAY** Data2, long* Handle1, long* Handle2);
	static HRESULT IWX218xArbitraryWaveform_SetCoupleActiveSegment(WX218x* pT, long SegNum1, long SegNum2);
	static HRESULT IWX218xArbitraryWaveform_SetActiveSegment(WX218x* pT, BSTR Channel, long SegNum);
	static HRESULT IWX218xArbitraryWaveform_ConfigureArbWaveTraceMode(WX218x* pT, WX218xTraceModeEnum TraceMode);
	static HRESULT IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFile(WX218x* pT, BSTR Channel, BSTR FileName, long* val);
	static HRESULT IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFileAdv(WX218x* pT, BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2);
	static HRESULT IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFile(WX218x* pT, BSTR Channel, BSTR FileName, long* val);
	static HRESULT IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFileAdv(WX218x* pT, BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2);
	static HRESULT IWX218xArbitraryWaveform_ConfigureDownloadRecord(WX218x* pT, WX218xArbDownloadRecordEnum DownloadRecord);
	static HRESULT IWX218xArbitraryWaveform_LoadCSVFile(WX218x* pT, BSTR Channel, BSTR FileName, long* val);
	static HRESULT IWX218xArbitraryWaveform_LoadCSVFileAdv(WX218x* pT, BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2);
	static HRESULT IWX218xArbitraryWaveform_get_NumberWaveformsMax(WX218x* pT, long* val);
	static HRESULT IWX218xArbitraryWaveform_get_Quantum(WX218x* pT, long* val);
	static HRESULT IWX218xArbitraryWaveform_get_SizeMax(WX218x* pT, long* val);
	static HRESULT IWX218xArbitraryWaveform_get_SizeMin(WX218x* pT, long* val);
	static HRESULT IWX218xArbitraryWaveform_get_TraceMode(WX218x* pT, WX218xTraceModeEnum* val);
	static HRESULT IWX218xArbitraryWaveform_put_TraceMode(WX218x* pT, WX218xTraceModeEnum val);
	static HRESULT IWX218xArbitraryWaveform_get_FastDownload(WX218x* pT, long* val);
	static HRESULT IWX218xArbitraryWaveform_put_FastDownload(WX218x* pT, long val);
	static HRESULT IWX218xArbitraryWaveform_get_DownloadRecord(WX218x* pT, WX218xArbDownloadRecordEnum* val);
	static HRESULT IWX218xArbitraryWaveform_put_DownloadRecord(WX218x* pT, WX218xArbDownloadRecordEnum val);
	static HRESULT IWX218xArbitrarySequence_Clear(WX218x* pT, long Handle);
	static HRESULT IWX218xArbitrarySequence_Configure(WX218x* pT, BSTR Channel, long Handle, double Gain, double Offset);
	static HRESULT IWX218xArbitrarySequence_Create(WX218x* pT, SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, long* val);
	static HRESULT IWX218xArbitrarySequence_CreateSequenceAdv(WX218x* pT, SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag, long* val);
	static HRESULT IWX218xArbitrarySequence_SetCoupleActiveSequence(WX218x* pT, long SeqNum1, long SeqNum2);
	static HRESULT IWX218xArbitrarySequence_SetActiveSequence(WX218x* pT, BSTR Channel, long SeqNum);
	static HRESULT IWX218xArbitrarySequence_CreateSequenceAdv1(WX218x* pT, SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag, long* val);
	static HRESULT IWX218xArbitrarySequence_ConfigureAdvanceMode(WX218x* pT, BSTR Channel, WX218xSequenceAdvanceModeEnum AdvanceMode);
	static HRESULT IWX218xArbitrarySequence_ConfigureSeqJumpEvent(WX218x* pT, BSTR Channel, WX218xSequenceJumpEventEnum JumpEvent);
	static HRESULT IWX218xArbitrarySequence_ConfigureSeqPrestep(WX218x* pT, BSTR Channel, WX218xSequencePrestepEnum Prestep);
	static HRESULT IWX218xArbitrarySequence_ConfigureSeqSource(WX218x* pT, BSTR Channel, WX218xSequenceSourceEnum Source);
	static HRESULT IWX218xArbitrarySequence_ConfigureSeqSyncLock(WX218x* pT, BSTR Channel, long SyncLock);
	static HRESULT IWX218xArbitrarySequence_ConfigureSeqTiming(WX218x* pT, BSTR Channel, WX218xSequenceTimingEnum Timing);
	static HRESULT IWX218xArbitrarySequence_ConfigureOnceCount(WX218x* pT, BSTR Channel, long Count);
	static HRESULT IWX218xArbitrarySequence_get_AdvanceMode(WX218x* pT, BSTR Channel, WX218xSequenceAdvanceModeEnum* val);
	static HRESULT IWX218xArbitrarySequence_put_AdvanceMode(WX218x* pT, BSTR Channel, WX218xSequenceAdvanceModeEnum val);
	static HRESULT IWX218xArbitrarySequence_get_JumpEvent(WX218x* pT, BSTR Channel, WX218xSequenceJumpEventEnum* val);
	static HRESULT IWX218xArbitrarySequence_put_JumpEvent(WX218x* pT, BSTR Channel, WX218xSequenceJumpEventEnum val);
	static HRESULT IWX218xArbitrarySequence_get_LengthMax(WX218x* pT, long* val);
	static HRESULT IWX218xArbitrarySequence_get_LengthMin(WX218x* pT, long* val);
	static HRESULT IWX218xArbitrarySequence_get_LoopCountMax(WX218x* pT, long* val);
	static HRESULT IWX218xArbitrarySequence_get_NumberSequenceMax(WX218x* pT, long* val);
	static HRESULT IWX218xArbitrarySequence_get_Source(WX218x* pT, BSTR Channel, WX218xSequenceSourceEnum* val);
	static HRESULT IWX218xArbitrarySequence_put_Source(WX218x* pT, BSTR Channel, WX218xSequenceSourceEnum val);
	static HRESULT IWX218xArbitrarySequence_get_SyncLock(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xArbitrarySequence_put_SyncLock(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xArbitrarySequence_get_Timing(WX218x* pT, BSTR Channel, WX218xSequenceTimingEnum* val);
	static HRESULT IWX218xArbitrarySequence_put_Timing(WX218x* pT, BSTR Channel, WX218xSequenceTimingEnum val);
	static HRESULT IWX218xArbitrarySequence_get_AdvanceSequence(WX218x* pT, IWX218xArbitrarySequenceAdvanceSequence** val);
	static HRESULT IWX218xArbitrarySequence_get_QuickSequence(WX218x* pT, long* val);
	static HRESULT IWX218xArbitrarySequence_put_QuickSequence(WX218x* pT, long val);
	static HRESULT IWX218xArbitrarySequence_get_Prestep(WX218x* pT, BSTR Channel, WX218xSequencePrestepEnum* val);
	static HRESULT IWX218xArbitrarySequence_put_Prestep(WX218x* pT, BSTR Channel, WX218xSequencePrestepEnum val);
	static HRESULT IWX218xArbitrarySequence_get_OnceCount(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xArbitrarySequence_put_OnceCount(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence(WX218x* pT, SAFEARRAY** SeqHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag);
	static HRESULT IWX218xArbitrarySequenceAdvanceSequence_DeleteAdvSequence(WX218x* pT);
	static HRESULT IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence1(WX218x* pT, SAFEARRAY** SeqHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag);
	static HRESULT IWX218xArbitrarySequenceAdvanceSequence_ConfigureOnceCount(WX218x* pT, BSTR Channel, long Count);
	static HRESULT IWX218xArbitrarySequenceAdvanceSequence_get_Mode(WX218x* pT, BSTR Channel, WX218xAdvanceSequenceModeEnum* val);
	static HRESULT IWX218xArbitrarySequenceAdvanceSequence_put_Mode(WX218x* pT, BSTR Channel, WX218xAdvanceSequenceModeEnum val);
	static HRESULT IWX218xArbitrarySequenceAdvanceSequence_get_SyncLock(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xArbitrarySequenceAdvanceSequence_put_SyncLock(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xArbitrarySequenceAdvanceSequence_get_OnceCount(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xArbitrarySequenceAdvanceSequence_put_OnceCount(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xCarrierModulation_ConfigureCarrFreq(WX218x* pT, BSTR Channel, double Freq);
	static HRESULT IWX218xCarrierModulation_ConfigureCarrWaveform(WX218x* pT, BSTR Channel, WX218xCarrierModulationWaveformEnum Waveform);
	static HRESULT IWX218xCarrierModulation_get_Frequency(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xCarrierModulation_put_Frequency(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xCarrierModulation_get_Waveform(WX218x* pT, BSTR Channel, WX218xCarrierModulationWaveformEnum* val);
	static HRESULT IWX218xCarrierModulation_put_Waveform(WX218x* pT, BSTR Channel, WX218xCarrierModulationWaveformEnum val);
	static HRESULT IWX218xCouple_ConfigureCoupleEnabled(WX218x* pT, VARIANT_BOOL Enabled);
	static HRESULT IWX218xCouple_ConfigureCoupleOffset(WX218x* pT, BSTR Channel, long Offset);
	static HRESULT IWX218xCouple_ConfigureCoupleSkew(WX218x* pT, double Skew);
	static HRESULT IWX218xCouple_get_Enabled(WX218x* pT, VARIANT_BOOL* val);
	static HRESULT IWX218xCouple_put_Enabled(WX218x* pT, VARIANT_BOOL val);
	static HRESULT IWX218xCouple_get_Offset(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xCouple_put_Offset(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xCouple_get_Skew(WX218x* pT, double* val);
	static HRESULT IWX218xCouple_put_Skew(WX218x* pT, double val);
	static HRESULT IWX218xFM_ConfigureInternal(WX218x* pT, double Deviation, WX218xFMInternalWaveformEnum Waveform, double Frequency);
	static HRESULT IWX218xFM_ConfigureFMEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled);
	static HRESULT IWX218xFM_ConfigureFMMarker(WX218x* pT, BSTR Channel, double Marker);
	static HRESULT IWX218xFM_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xFM_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xFM_get_InternalDeviation(WX218x* pT, double* val);
	static HRESULT IWX218xFM_put_InternalDeviation(WX218x* pT, double val);
	static HRESULT IWX218xFM_get_InternalFrequency(WX218x* pT, double* val);
	static HRESULT IWX218xFM_put_InternalFrequency(WX218x* pT, double val);
	static HRESULT IWX218xFM_get_InternalWaveform(WX218x* pT, WX218xFMInternalWaveformEnum* val);
	static HRESULT IWX218xFM_put_InternalWaveform(WX218x* pT, WX218xFMInternalWaveformEnum val);
	static HRESULT IWX218xFM_get_Marker(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xFM_put_Marker(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xMarkers_Refresh(WX218x* pT, BSTR Channel, long Index);
	static HRESULT IWX218xMarkers_ConfigureMarkerControl(WX218x* pT, BSTR Channel, long Index, WX218xMarkerControlEnum Control);
	static HRESULT IWX218xMarkers_ConfigureMarkerDelay(WX218x* pT, BSTR Channel, long Index, double Delay);
	static HRESULT IWX218xMarkers_ConfigureMarkerEnabled(WX218x* pT, BSTR Channel, long Index, VARIANT_BOOL Enabled);
	static HRESULT IWX218xMarkers_ConfigureMarkerHighLevel(WX218x* pT, BSTR Channel, long Index, double HighLevel);
	static HRESULT IWX218xMarkers_ConfigureMarkerLowLevel(WX218x* pT, BSTR Channel, long Index, double LowLevel);
	static HRESULT IWX218xMarkers_ConfigureMarkerIndex(WX218x* pT, BSTR Channel, long Index);
	static HRESULT IWX218xMarkers_ConfigureMarkerPosition(WX218x* pT, BSTR Channel, long Index, long Position);
	static HRESULT IWX218xMarkers_ConfigureMarkerSource(WX218x* pT, BSTR Channel, WX218xMarkerSourceEnum Source);
	static HRESULT IWX218xMarkers_ConfigureMarkerWidth(WX218x* pT, BSTR Channel, long Index, long Width);
	static HRESULT IWX218xMarkers_MarkerRefresh(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xMarkers_ConfigureMarkerHighLevel4Ch(WX218x* pT, BSTR Channel, double HighLevel);
	static HRESULT IWX218xMarkers_ConfigureMarkerLowLevel4Ch(WX218x* pT, BSTR Channel, double LowLevel);
	static HRESULT IWX218xMarkers_get_Delay(WX218x* pT, BSTR Channel, long Index, double* val);
	static HRESULT IWX218xMarkers_put_Delay(WX218x* pT, BSTR Channel, long Index, double val);
	static HRESULT IWX218xMarkers_get_Enabled(WX218x* pT, BSTR Channel, long Index, VARIANT_BOOL* val);
	static HRESULT IWX218xMarkers_put_Enabled(WX218x* pT, BSTR Channel, long Index, VARIANT_BOOL val);
	static HRESULT IWX218xMarkers_get_HighLevel(WX218x* pT, BSTR Channel, long Index, double* val);
	static HRESULT IWX218xMarkers_put_HighLevel(WX218x* pT, BSTR Channel, long Index, double val);
	static HRESULT IWX218xMarkers_get_LowLevel(WX218x* pT, BSTR Channel, long Index, double* val);
	static HRESULT IWX218xMarkers_put_LowLevel(WX218x* pT, BSTR Channel, long Index, double val);
	static HRESULT IWX218xMarkers_get_Position(WX218x* pT, BSTR Channel, long Index, long* val);
	static HRESULT IWX218xMarkers_put_Position(WX218x* pT, BSTR Channel, long Index, long val);
	static HRESULT IWX218xMarkers_get_Width(WX218x* pT, BSTR Channel, long Index, long* val);
	static HRESULT IWX218xMarkers_put_Width(WX218x* pT, BSTR Channel, long Index, long val);
	static HRESULT IWX218xMarkers_get_Control(WX218x* pT, BSTR Channel, long Index, WX218xMarkerControlEnum* val);
	static HRESULT IWX218xMarkers_put_Control(WX218x* pT, BSTR Channel, long Index, WX218xMarkerControlEnum val);
	static HRESULT IWX218xMarkers_get_MarkerIndex(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xMarkers_put_MarkerIndex(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xMarkers_get_Source(WX218x* pT, BSTR Channel, WX218xMarkerSourceEnum* val);
	static HRESULT IWX218xMarkers_put_Source(WX218x* pT, BSTR Channel, WX218xMarkerSourceEnum val);
	static HRESULT IWX218xMarkers_get_HighLevel4Ch(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xMarkers_put_HighLevel4Ch(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xMarkers_get_LowLevel4Ch(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xMarkers_put_LowLevel4Ch(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xTrigger_SendSoftwareTrigger(WX218x* pT);
	static HRESULT IWX218xTrigger_SetECLLevel(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xTrigger_SetTTLLevel(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xTrigger_ConfigureBurstCount(WX218x* pT, BSTR Channel, long Count);
	static HRESULT IWX218xTrigger_ConfigureTriggerDelay(WX218x* pT, BSTR Channel, long Delay);
	static HRESULT IWX218xTrigger_ConfigureTriggerLevel(WX218x* pT, BSTR Channel, double Level);
	static HRESULT IWX218xTrigger_ConfigureTriggerTimerDelay(WX218x* pT, BSTR Channel, long TimerDelay);
	static HRESULT IWX218xTrigger_ConfigureTriggerTimerTime(WX218x* pT, BSTR Channel, double TimerTime);
	static HRESULT IWX218xTrigger_ConfigureTrigContMode(WX218x* pT, BSTR Channel, WX218xContinuousModeEnum ContMode);
	static HRESULT IWX218xTrigger_ConfigureTrigContSource(WX218x* pT, BSTR Channel, WX218xContinuousSourceEnum Source);
	static HRESULT IWX218xTrigger_ConfigureTrigSlope(WX218x* pT, BSTR Channel, WX218xTriggerSlopeEnum Slope);
	static HRESULT IWX218xTrigger_ConfigureTrigSource(WX218x* pT, BSTR Channel, WX218xTriggerSourceEnum Source);
	static HRESULT IWX218xTrigger_ConfigureTrigTimerMode(WX218x* pT, BSTR Channel, WX218xTriggerTimerModeEnum TimerMode);
	static HRESULT IWX218xTrigger_ConfigureTriggerMode(WX218x* pT, BSTR Channel, WX218xTriggerModeEnum Mode);
	static HRESULT IWX218xTrigger_ConfigureTriggerImpedance(WX218x* pT, WX218xTriggerImpedanceEnum TriggerImpedance);
	static HRESULT IWX218xTrigger_get_BurstCount(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xTrigger_put_BurstCount(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xTrigger_get_ContinuousMode(WX218x* pT, BSTR Channel, WX218xContinuousModeEnum* val);
	static HRESULT IWX218xTrigger_put_ContinuousMode(WX218x* pT, BSTR Channel, WX218xContinuousModeEnum val);
	static HRESULT IWX218xTrigger_get_ContinuousSource(WX218x* pT, BSTR Channel, WX218xContinuousSourceEnum* val);
	static HRESULT IWX218xTrigger_put_ContinuousSource(WX218x* pT, BSTR Channel, WX218xContinuousSourceEnum val);
	static HRESULT IWX218xTrigger_get_Delay(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xTrigger_put_Delay(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xTrigger_get_Level(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xTrigger_put_Level(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xTrigger_get_Slope(WX218x* pT, BSTR Channel, WX218xTriggerSlopeEnum* val);
	static HRESULT IWX218xTrigger_put_Slope(WX218x* pT, BSTR Channel, WX218xTriggerSlopeEnum val);
	static HRESULT IWX218xTrigger_get_Source(WX218x* pT, BSTR Channel, WX218xTriggerSourceEnum* val);
	static HRESULT IWX218xTrigger_put_Source(WX218x* pT, BSTR Channel, WX218xTriggerSourceEnum val);
	static HRESULT IWX218xTrigger_get_TimerDelay(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xTrigger_put_TimerDelay(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xTrigger_get_TimerMode(WX218x* pT, BSTR Channel, WX218xTriggerTimerModeEnum* val);
	static HRESULT IWX218xTrigger_put_TimerMode(WX218x* pT, BSTR Channel, WX218xTriggerTimerModeEnum val);
	static HRESULT IWX218xTrigger_get_TimerTime(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xTrigger_put_TimerTime(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xTrigger_get_TriggerMode(WX218x* pT, BSTR Channel, WX218xTriggerModeEnum* val);
	static HRESULT IWX218xTrigger_put_TriggerMode(WX218x* pT, BSTR Channel, WX218xTriggerModeEnum val);
	static HRESULT IWX218xTrigger_get_ARM(WX218x* pT, IWX218xTriggerARM** val);
	static HRESULT IWX218xTrigger_get_SmartTrigger(WX218x* pT, IWX218xTriggerSmartTrigger** val);
	static HRESULT IWX218xTrigger_get_TriggerImpedance(WX218x* pT, WX218xTriggerImpedanceEnum* val);
	static HRESULT IWX218xTrigger_put_TriggerImpedance(WX218x* pT, WX218xTriggerImpedanceEnum val);
	static HRESULT IWX218xTriggerARM_SetECLLevel(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xTriggerARM_SetTtlLevel(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xTriggerARM_ConfigureTrigARMLevel(WX218x* pT, BSTR Channel, double Level);
	static HRESULT IWX218xTriggerARM_ConfigureTrigARMSlope(WX218x* pT, BSTR Channel, WX218xArmSlopeEnum Slope);
	static HRESULT IWX218xTriggerARM_get_Level(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xTriggerARM_put_Level(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xTriggerARM_get_Slope(WX218x* pT, BSTR Channel, WX218xArmSlopeEnum* val);
	static HRESULT IWX218xTriggerARM_put_Slope(WX218x* pT, BSTR Channel, WX218xArmSlopeEnum val);
	static HRESULT IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL State);
	static HRESULT IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassWidth(WX218x* pT, BSTR Channel, double Width);
	static HRESULT IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoff(WX218x* pT, BSTR Channel, double Holdoff);
	static HRESULT IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoffState(WX218x* pT, BSTR Channel, VARIANT_BOOL State);
	static HRESULT IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassState(WX218x* pT, BSTR Channel, VARIANT_BOOL State);
	static HRESULT IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassWidth(WX218x* pT, BSTR Channel, double Width);
	static HRESULT IWX218xTriggerSmartTrigger_get_HiPassEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xTriggerSmartTrigger_put_HiPassEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xTriggerSmartTrigger_get_HiPassWidth(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xTriggerSmartTrigger_put_HiPassWidth(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xTriggerSmartTrigger_get_Holdoff(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xTriggerSmartTrigger_put_Holdoff(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xTriggerSmartTrigger_get_HoldoffEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xTriggerSmartTrigger_put_HoldoffEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xTriggerSmartTrigger_get_LowPassEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xTriggerSmartTrigger_put_LowPassEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xTriggerSmartTrigger_get_LowPassWidth(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xTriggerSmartTrigger_put_LowPassWidth(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xStateStorage_Clear(WX218x* pT);
	static HRESULT IWX218xStateStorage_Load(WX218x* pT);
	static HRESULT IWX218xStateStorage_Recall(WX218x* pT, long Cell, WX218xStateStorageTargetEnum Target);
	static HRESULT IWX218xStateStorage_Save(WX218x* pT);
	static HRESULT IWX218xStateStorage_Store(WX218x* pT, long Cell, WX218xStateStorageConfigurationEnum Configuration, WX218xStateStorageTargetEnum Target);
	static HRESULT IWX218xStateStorage_get_CellRecall(WX218x* pT, long* val);
	static HRESULT IWX218xStateStorage_put_CellRecall(WX218x* pT, long val);
	static HRESULT IWX218xStateStorage_get_CellStore(WX218x* pT, long* val);
	static HRESULT IWX218xStateStorage_put_CellStore(WX218x* pT, long val);
	static HRESULT IWX218xStateStorage_get_ConfigurationStore(WX218x* pT, WX218xStateStorageConfigurationEnum* val);
	static HRESULT IWX218xStateStorage_put_ConfigurationStore(WX218x* pT, WX218xStateStorageConfigurationEnum val);
	static HRESULT IWX218xStateStorage_get_TargetRecall(WX218x* pT, WX218xStateStorageTargetEnum* val);
	static HRESULT IWX218xStateStorage_put_TargetRecall(WX218x* pT, WX218xStateStorageTargetEnum val);
	static HRESULT IWX218xStateStorage_get_TargetStore(WX218x* pT, WX218xStateStorageTargetEnum* val);
	static HRESULT IWX218xStateStorage_put_TargetStore(WX218x* pT, WX218xStateStorageTargetEnum val);
	static HRESULT IWX218xStateStorage_get_ConfigurationRecall(WX218x* pT, WX218xStateStorageRecalConfigurationEnum* val);
	static HRESULT IWX218xStateStorage_get_StoreEnabled(WX218x* pT, VARIANT_BOOL* val);
	static HRESULT IWX218xStateStorage_put_StoreEnabled(WX218x* pT, VARIANT_BOOL val);
	static HRESULT IWX218xStateStorage_get_RecallEnabled(WX218x* pT, VARIANT_BOOL* val);
	static HRESULT IWX218xStateStorage_put_RecallEnabled(WX218x* pT, VARIANT_BOOL val);
	static HRESULT IWX218xXInstrument_ConfigureXInstrumentEnabled(WX218x* pT, VARIANT_BOOL State);
	static HRESULT IWX218xXInstrument_ConfigureXInstrumentMode(WX218x* pT, WX218xXInstrumentModeEnum Mode);
	static HRESULT IWX218xXInstrument_ConfigureXInstrumentModeAdv(WX218x* pT, WX218xXInstrumentModeAdvEnum ModeAdv);
	static HRESULT IWX218xXInstrument_ConfigureXInstrumentOffset(WX218x* pT, long Offset);
	static HRESULT IWX218xXInstrument_get_Enabled(WX218x* pT, VARIANT_BOOL* val);
	static HRESULT IWX218xXInstrument_put_Enabled(WX218x* pT, VARIANT_BOOL val);
	static HRESULT IWX218xXInstrument_get_Mode(WX218x* pT, WX218xXInstrumentModeEnum* val);
	static HRESULT IWX218xXInstrument_put_Mode(WX218x* pT, WX218xXInstrumentModeEnum val);
	static HRESULT IWX218xXInstrument_get_Offset(WX218x* pT, long* val);
	static HRESULT IWX218xXInstrument_put_Offset(WX218x* pT, long val);
	static HRESULT IWX218xXInstrument_get_ModeAdv(WX218x* pT, WX218xXInstrumentModeAdvEnum* val);
	static HRESULT IWX218xXInstrument_put_ModeAdv(WX218x* pT, WX218xXInstrumentModeAdvEnum val);
	static HRESULT IWX218xDigitalPulse_SetAmplitudeMax(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xDigitalPulse_SetAmplitudeMin(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xDigitalPulse_SetOffsetMax(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xDigitalPulse_SetOffsetMin(WX218x* pT, BSTR Channel);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseAmplitude(WX218x* pT, BSTR Channel, double Amplitude);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseDelay(WX218x* pT, BSTR Channel, double Delay);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseDelayPercent(WX218x* pT, BSTR Channel, double DelayPercent);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseDoubleDelay(WX218x* pT, BSTR Channel, double DoubleDelay);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseDoubleDelayPercent(WX218x* pT, BSTR Channel, double DoubleDelayPercent);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseFallTime(WX218x* pT, BSTR Channel, double FallTime);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseFallTimePercent(WX218x* pT, BSTR Channel, double FallTimePercent);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseHighLevel(WX218x* pT, BSTR Channel, double HighLevel);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseLevelControl(WX218x* pT, BSTR Channel, WX218xPulseLevelControlEnum LevelControl);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseLowLevel(WX218x* pT, BSTR Channel, double LowLevel);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseMode(WX218x* pT, BSTR Channel, WX218xPulseModeEnum Mode);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseOffset(WX218x* pT, BSTR Channel, double Offset);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulsePeriod(WX218x* pT, BSTR Channel, double Period);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulsePolarity(WX218x* pT, BSTR Channel, WX218xPulsePolarityEnum Polarity);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseRiseTime(WX218x* pT, BSTR Channel, double RiseTime);
	static HRESULT IWX218xDigitalPulse_ConfigureRiseTimePercent(WX218x* pT, BSTR Channel, double RiseTimePercent);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseTransition(WX218x* pT, BSTR Channel, WX218xPulseTransitionEnum Transition);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseWidth(WX218x* pT, BSTR Channel, double Width);
	static HRESULT IWX218xDigitalPulse_ConfigureDigPulseWidthPercent(WX218x* pT, BSTR Channel, double WidthPercent);
	static HRESULT IWX218xDigitalPulse_get_Amplitude(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_Amplitude(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_Configure(WX218x* pT, BSTR Channel, WX218xPulseConfigureEnum* val);
	static HRESULT IWX218xDigitalPulse_put_Configure(WX218x* pT, BSTR Channel, WX218xPulseConfigureEnum val);
	static HRESULT IWX218xDigitalPulse_get_Delay(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_Delay(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_DelayPercent(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_DelayPercent(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_DoubleDelay(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_DoubleDelay(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_DoubleDelayPercent(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_DoubleDelayPercent(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_FallTime(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_FallTime(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_FallTimePercent(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_FallTimePercent(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_HighLevel(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_HighLevel(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_LevelControl(WX218x* pT, BSTR Channel, WX218xPulseLevelControlEnum* val);
	static HRESULT IWX218xDigitalPulse_put_LevelControl(WX218x* pT, BSTR Channel, WX218xPulseLevelControlEnum val);
	static HRESULT IWX218xDigitalPulse_get_LowLevel(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_LowLevel(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_Mode(WX218x* pT, BSTR Channel, WX218xPulseModeEnum* val);
	static HRESULT IWX218xDigitalPulse_put_Mode(WX218x* pT, BSTR Channel, WX218xPulseModeEnum val);
	static HRESULT IWX218xDigitalPulse_get_Offset(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_Offset(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_Period(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_Period(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_Polarity(WX218x* pT, BSTR Channel, WX218xPulsePolarityEnum* val);
	static HRESULT IWX218xDigitalPulse_put_Polarity(WX218x* pT, BSTR Channel, WX218xPulsePolarityEnum val);
	static HRESULT IWX218xDigitalPulse_get_RiseTime(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_RiseTime(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_RiseTimePercent(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_RiseTimePercent(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_Transition(WX218x* pT, BSTR Channel, WX218xPulseTransitionEnum* val);
	static HRESULT IWX218xDigitalPulse_put_Transition(WX218x* pT, BSTR Channel, WX218xPulseTransitionEnum val);
	static HRESULT IWX218xDigitalPulse_get_Width(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_Width(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPulse_get_WidthPercent(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPulse_put_WidthPercent(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xSweep_ConfigureSweepDirection(WX218x* pT, BSTR Channel, WX218xSweepDirectionEnum Direction);
	static HRESULT IWX218xSweep_ConfigureSweepState(WX218x* pT, BSTR Channel, VARIANT_BOOL State);
	static HRESULT IWX218xSweep_ConfigureSweepFreqStart(WX218x* pT, BSTR Channel, double FreqStart);
	static HRESULT IWX218xSweep_ConfigureSweepFreqStop(WX218x* pT, BSTR Channel, double FreqStop);
	static HRESULT IWX218xSweep_ConfigureSweepMarker(WX218x* pT, BSTR Channel, double Marker);
	static HRESULT IWX218xSweep_ConfigureSweepSpacing(WX218x* pT, BSTR Channel, WX218xSweepSpacingEnum Spacing);
	static HRESULT IWX218xSweep_ConfigureSweepTime(WX218x* pT, BSTR Channel, double Time);
	static HRESULT IWX218xSweep_get_Direction(WX218x* pT, BSTR Channel, WX218xSweepDirectionEnum* val);
	static HRESULT IWX218xSweep_put_Direction(WX218x* pT, BSTR Channel, WX218xSweepDirectionEnum val);
	static HRESULT IWX218xSweep_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xSweep_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xSweep_get_FrequencyStart(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xSweep_put_FrequencyStart(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xSweep_get_FrequencyStop(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xSweep_put_FrequencyStop(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xSweep_get_Marker(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xSweep_put_Marker(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xSweep_get_Spacing(WX218x* pT, BSTR Channel, WX218xSweepSpacingEnum* val);
	static HRESULT IWX218xSweep_put_Spacing(WX218x* pT, BSTR Channel, WX218xSweepSpacingEnum val);
	static HRESULT IWX218xSweep_get_Time(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xSweep_put_Time(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPatternOutput_CreateDigPatternData(WX218x* pT, BSTR Channel, SAFEARRAY** Data, long Segment);
	static HRESULT IWX218xDigitalPatternOutput_LoadDigitalPatternFromFile(WX218x* pT, BSTR Channel, BSTR FileName, long Segment);
	static HRESULT IWX218xDigitalPatternOutput_CreateDigPatternParamData(WX218x* pT, BSTR Channel, SAFEARRAY** State, SAFEARRAY** Delay, SAFEARRAY** HighLevel, SAFEARRAY** LowLevel);
	static HRESULT IWX218xDigitalPatternOutput_CreateDigPatternParamData1(WX218x* pT, BSTR Channel, SAFEARRAY** State, SAFEARRAY** Delay, SAFEARRAY** HighLevel, SAFEARRAY** LowLevel);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattArbResolution(WX218x* pT, BSTR Channel, WX218xArbitraryResolutionEnum ArbResolution);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattBitDelay(WX218x* pT, BSTR Channel, long BitIndex, double BitDelay);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattBitEnabled(WX218x* pT, BSTR Channel, long BitIndex, VARIANT_BOOL BitEnabled);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattBitHighLevel(WX218x* pT, BSTR Channel, long BitIndex, double BitHighLevel);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattBitLowLevel(WX218x* pT, BSTR Channel, long BitIndex, double BitLowLevel);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattDelay(WX218x* pT, BSTR Channel, double Delay);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattDelayMode(WX218x* pT, BSTR Channel, WX218xDigPatternDelayModeEnum DelayMode);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattEmphasisEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL EmphasisEnabled);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattFormatData(WX218x* pT, BSTR Channel, WX218xDigFormatDataEnum FormatData);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattHighLevel(WX218x* pT, BSTR Channel, double HighLevel);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattLevelMode(WX218x* pT, BSTR Channel, WX218xDigPatternLevelModeEnum LevelMode);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattLowLevel(WX218x* pT, BSTR Channel, double LowLevel);
	static HRESULT IWX218xDigitalPatternOutput_LoadDigitalDataBinaryFile(WX218x* pT, BSTR FileName, long Segment);
	static HRESULT IWX218xDigitalPatternOutput_LoadDigitalDataAsciiFile(WX218x* pT, BSTR FileName, long Segment);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigClock(WX218x* pT, WX218xDigitalClockEnum DigClock);
	static HRESULT IWX218xDigitalPatternOutput_ConfigureDigPattDigPort(WX218x* pT, WX218xDigPortEnum DigPort);
	static HRESULT IWX218xDigitalPatternOutput_get_BitDelay(WX218x* pT, BSTR Channel, long Index, double* val);
	static HRESULT IWX218xDigitalPatternOutput_put_BitDelay(WX218x* pT, BSTR Channel, long Index, double val);
	static HRESULT IWX218xDigitalPatternOutput_get_BitHighLevel(WX218x* pT, BSTR Channel, long Index, double* val);
	static HRESULT IWX218xDigitalPatternOutput_put_BitHighLevel(WX218x* pT, BSTR Channel, long Index, double val);
	static HRESULT IWX218xDigitalPatternOutput_get_BitLowLevel(WX218x* pT, BSTR Channel, long Index, double* val);
	static HRESULT IWX218xDigitalPatternOutput_put_BitLowLevel(WX218x* pT, BSTR Channel, long Index, double val);
	static HRESULT IWX218xDigitalPatternOutput_get_DelayMode(WX218x* pT, BSTR Channel, WX218xDigPatternDelayModeEnum* val);
	static HRESULT IWX218xDigitalPatternOutput_put_DelayMode(WX218x* pT, BSTR Channel, WX218xDigPatternDelayModeEnum val);
	static HRESULT IWX218xDigitalPatternOutput_get_LevelMode(WX218x* pT, BSTR Channel, WX218xDigPatternLevelModeEnum* val);
	static HRESULT IWX218xDigitalPatternOutput_put_LevelMode(WX218x* pT, BSTR Channel, WX218xDigPatternLevelModeEnum val);
	static HRESULT IWX218xDigitalPatternOutput_get_BitEnabled(WX218x* pT, BSTR Channel, long Index, VARIANT_BOOL* val);
	static HRESULT IWX218xDigitalPatternOutput_put_BitEnabled(WX218x* pT, BSTR Channel, long Index, VARIANT_BOOL val);
	static HRESULT IWX218xDigitalPatternOutput_get_Delay(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPatternOutput_put_Delay(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPatternOutput_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xDigitalPatternOutput_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xDigitalPatternOutput_get_HighLevel(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPatternOutput_put_HighLevel(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPatternOutput_get_LowLevel(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xDigitalPatternOutput_put_LowLevel(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xDigitalPatternOutput_get_PodPresent(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xDigitalPatternOutput_get_EmphasisEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xDigitalPatternOutput_put_EmphasisEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xDigitalPatternOutput_get_FormatData(WX218x* pT, BSTR Channel, WX218xDigFormatDataEnum* val);
	static HRESULT IWX218xDigitalPatternOutput_put_FormatData(WX218x* pT, BSTR Channel, WX218xDigFormatDataEnum val);
	static HRESULT IWX218xDigitalPatternOutput_get_ArbResolution(WX218x* pT, BSTR Channel, WX218xArbitraryResolutionEnum* val);
	static HRESULT IWX218xDigitalPatternOutput_put_ArbResolution(WX218x* pT, BSTR Channel, WX218xArbitraryResolutionEnum val);
	static HRESULT IWX218xDigitalPatternOutput_get_DigClock(WX218x* pT, WX218xDigitalClockEnum* val);
	static HRESULT IWX218xDigitalPatternOutput_put_DigClock(WX218x* pT, WX218xDigitalClockEnum val);
	static HRESULT IWX218xDigitalPatternOutput_get_DigPort(WX218x* pT, WX218xDigPortEnum* val);
	static HRESULT IWX218xDigitalPatternOutput_put_DigPort(WX218x* pT, WX218xDigPortEnum val);
	static HRESULT IWX218xCHIRP_ConfigureChirpAmplDepth(WX218x* pT, BSTR Channel, double AmplDepth);
	static HRESULT IWX218xCHIRP_ConfigureChirpEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled);
	static HRESULT IWX218xCHIRP_ConfigureChirpFreqDirection(WX218x* pT, BSTR Channel, WX218xChirpFreqDirectionEnum FreqDirection);
	static HRESULT IWX218xCHIRP_ConfigureChirpFreqSpacing(WX218x* pT, BSTR Channel, WX218xChirpFreqSpacingEnum FreqSpacing);
	static HRESULT IWX218xCHIRP_ConfigureChirpMarkerFreq(WX218x* pT, BSTR Channel, double MarkerFreq);
	static HRESULT IWX218xCHIRP_ConfigureChirpRepetition(WX218x* pT, BSTR Channel, double Repetition);
	static HRESULT IWX218xCHIRP_ConfigureChirpStartFreq(WX218x* pT, BSTR Channel, double StartFreq);
	static HRESULT IWX218xCHIRP_ConfigureChirpStopFreq(WX218x* pT, BSTR Channel, double StopFreq);
	static HRESULT IWX218xCHIRP_ConfigureChirpWidth(WX218x* pT, BSTR Channel, double Width);
	static HRESULT IWX218xCHIRP_ConfigureChirpAmplDirection(WX218x* pT, BSTR Channel, WX218xChirpAmplitudeDirectionEnum AmplDirection);
	static HRESULT IWX218xCHIRP_ConfigureChirpAmplSpacing(WX218x* pT, BSTR Channel, WX218xChirpAmplSpacingEnum AmplSpacing);
	static HRESULT IWX218xCHIRP_get_Width(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xCHIRP_put_Width(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xCHIRP_get_Repetition(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xCHIRP_put_Repetition(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xCHIRP_get_StartFrequency(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xCHIRP_put_StartFrequency(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xCHIRP_get_StopFrequency(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xCHIRP_put_StopFrequency(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xCHIRP_get_MarkerFrequency(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xCHIRP_put_MarkerFrequency(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xCHIRP_get_AmplDepth(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xCHIRP_put_AmplDepth(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xCHIRP_get_FreqDirection(WX218x* pT, BSTR Channel, WX218xChirpFreqDirectionEnum* val);
	static HRESULT IWX218xCHIRP_put_FreqDirection(WX218x* pT, BSTR Channel, WX218xChirpFreqDirectionEnum val);
	static HRESULT IWX218xCHIRP_get_FreqSpacing(WX218x* pT, BSTR Channel, WX218xChirpFreqSpacingEnum* val);
	static HRESULT IWX218xCHIRP_put_FreqSpacing(WX218x* pT, BSTR Channel, WX218xChirpFreqSpacingEnum val);
	static HRESULT IWX218xCHIRP_get_AmplDirection(WX218x* pT, BSTR Channel, WX218xChirpAmplitudeDirectionEnum* val);
	static HRESULT IWX218xCHIRP_put_AmplDirection(WX218x* pT, BSTR Channel, WX218xChirpAmplitudeDirectionEnum val);
	static HRESULT IWX218xCHIRP_get_AmplSpacing(WX218x* pT, BSTR Channel, WX218xChirpAmplSpacingEnum* val);
	static HRESULT IWX218xCHIRP_put_AmplSpacing(WX218x* pT, BSTR Channel, WX218xChirpAmplSpacingEnum val);
	static HRESULT IWX218xCHIRP_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xCHIRP_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xFSK_CreateFSKData(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xFSK_LoadFSKDataFile(WX218x* pT, BSTR Channel, BSTR FileName);
	static HRESULT IWX218xFSK_CreateFSKDataAdv(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xFSK_ConfigureFSKBaud(WX218x* pT, BSTR Channel, double Baud);
	static HRESULT IWX218xFSK_ConfigureFSKEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled);
	static HRESULT IWX218xFSK_ConfigureFSKMarker(WX218x* pT, BSTR Channel, long Marker);
	static HRESULT IWX218xFSK_ConfigureFSKShiftFreq(WX218x* pT, BSTR Channel, double ShiftFreq);
	static HRESULT IWX218xFSK_get_ShiftFreq(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xFSK_put_ShiftFreq(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xFSK_get_Baud(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xFSK_put_Baud(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xFSK_get_Marker(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xFSK_put_Marker(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xFSK_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xFSK_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xASK_CreateASKData(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xASK_LoadASKDataFile(WX218x* pT, BSTR Channel, BSTR FileName);
	static HRESULT IWX218xASK_CreateASKDataAdv(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xASK_ConfigureASKBaud(WX218x* pT, BSTR Channel, double Baud);
	static HRESULT IWX218xASK_ConfigureASKEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled);
	static HRESULT IWX218xASK_ConfigureASKMarker(WX218x* pT, BSTR Channel, long Marker);
	static HRESULT IWX218xASK_ConfigureASKShiftAmplitude(WX218x* pT, BSTR Channel, double ShiftAmpl);
	static HRESULT IWX218xASK_ConfigureASKStartAmplitude(WX218x* pT, BSTR Channel, double StartAmpl);
	static HRESULT IWX218xASK_get_StartAmplitude(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xASK_put_StartAmplitude(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xASK_get_ShiftAmplitude(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xASK_put_ShiftAmplitude(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xASK_get_Baud(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xASK_put_Baud(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xASK_get_Marker(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xASK_put_Marker(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xASK_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xASK_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xFHOP_CreateFHOPFixedData(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xFHOP_CreateFHOPVariableData(WX218x* pT, BSTR Channel, SAFEARRAY** FreqData, SAFEARRAY** DwellTimeData);
	static HRESULT IWX218xFHOP_LoadFHOPFixDataFile(WX218x* pT, BSTR Channel, BSTR FileName);
	static HRESULT IWX218xFHOP_LoadFHOPVarDataFile(WX218x* pT, BSTR Channel, BSTR FileName);
	static HRESULT IWX218xFHOP_ConfigureFHOPDwellMode(WX218x* pT, BSTR Channel, WX218xFHOPDwellModeEnum DwellMode);
	static HRESULT IWX218xFHOP_ConfigureFHOPEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled);
	static HRESULT IWX218xFHOP_ConfigureFHOPMarker(WX218x* pT, BSTR Channel, long Marker);
	static HRESULT IWX218xFHOP_ConfigureFHOPTime(WX218x* pT, BSTR Channel, double Time);
	static HRESULT IWX218xFHOP_get_Time(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xFHOP_put_Time(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xFHOP_get_Marker(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xFHOP_put_Marker(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xFHOP_get_DwellMode(WX218x* pT, BSTR Channel, WX218xFHOPDwellModeEnum* val);
	static HRESULT IWX218xFHOP_put_DwellMode(WX218x* pT, BSTR Channel, WX218xFHOPDwellModeEnum val);
	static HRESULT IWX218xFHOP_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xFHOP_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xAHOP_CreateAHOPFixedData(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xAHOP_CreateAHOPVariableData(WX218x* pT, BSTR Channel, SAFEARRAY** AmplData, SAFEARRAY** DwellTimeData);
	static HRESULT IWX218xAHOP_LoadAHOPFixDataFile(WX218x* pT, BSTR Channel, BSTR FileName);
	static HRESULT IWX218xAHOP_LoadAHOPVarDataFile(WX218x* pT, BSTR Channel, BSTR FileName);
	static HRESULT IWX218xAHOP_ConfigureAHOPDwellMode(WX218x* pT, BSTR Channel, WX218xAHOPDwellModeEnum DwellMode);
	static HRESULT IWX218xAHOP_ConfigureAHOPEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled);
	static HRESULT IWX218xAHOP_ConfigureAHOPMarker(WX218x* pT, BSTR Channel, long Marker);
	static HRESULT IWX218xAHOP_ConfigureAHOPTime(WX218x* pT, BSTR Channel, double Time);
	static HRESULT IWX218xAHOP_get_Time(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xAHOP_put_Time(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xAHOP_get_Marker(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xAHOP_put_Marker(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xAHOP_get_DwellMode(WX218x* pT, BSTR Channel, WX218xAHOPDwellModeEnum* val);
	static HRESULT IWX218xAHOP_put_DwellMode(WX218x* pT, BSTR Channel, WX218xAHOPDwellModeEnum val);
	static HRESULT IWX218xAHOP_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xAHOP_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xPattern_CreatePatternData(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xPattern_ConfigurePatternBaud(WX218x* pT, BSTR Channel, double Baud);
	static HRESULT IWX218xPattern_ConfigurePatternHighLevel(WX218x* pT, BSTR Channel, double HighLevel);
	static HRESULT IWX218xPattern_ConfigurePatternLength(WX218x* pT, BSTR Channel, long Length);
	static HRESULT IWX218xPattern_ConfigurePatternLevel(WX218x* pT, BSTR Channel, long Level);
	static HRESULT IWX218xPattern_ConfigurePatternLoop(WX218x* pT, BSTR Channel, long Loop);
	static HRESULT IWX218xPattern_ConfigurePatternLowLevel(WX218x* pT, BSTR Channel, double LowLevel);
	static HRESULT IWX218xPattern_ConfigurePatternMode(WX218x* pT, BSTR Channel, WX218xPatternModeEnum Mode);
	static HRESULT IWX218xPattern_ConfigurePatternPreamble(WX218x* pT, BSTR Channel, long Preamble);
	static HRESULT IWX218xPattern_ConfigurePatternPredType(WX218x* pT, BSTR Channel, WX218xPatternPredefinedTypeEnum Type);
	static HRESULT IWX218xPattern_get_Baud(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xPattern_put_Baud(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xPattern_get_Level(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xPattern_put_Level(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xPattern_get_Mode(WX218x* pT, BSTR Channel, WX218xPatternModeEnum* val);
	static HRESULT IWX218xPattern_put_Mode(WX218x* pT, BSTR Channel, WX218xPatternModeEnum val);
	static HRESULT IWX218xPattern_get_PredefinedType(WX218x* pT, BSTR Channel, WX218xPatternPredefinedTypeEnum* val);
	static HRESULT IWX218xPattern_put_PredefinedType(WX218x* pT, BSTR Channel, WX218xPatternPredefinedTypeEnum val);
	static HRESULT IWX218xPattern_get_HighLevel(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xPattern_put_HighLevel(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xPattern_get_LowLevel(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xPattern_put_LowLevel(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xPattern_get_Loop(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xPattern_put_Loop(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xPattern_get_Preamble(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xPattern_put_Preamble(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xPattern_get_Length(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xPattern_put_Length(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xPattern_get_Composer(WX218x* pT, IWX218xPatternComposer** val);
	static HRESULT IWX218xPatternComposer_CreatePatternComposerFastData(WX218x* pT, BSTR Channel, SAFEARRAY** AmplLevel, SAFEARRAY** DwellTime);
	static HRESULT IWX218xPatternComposer_LoadPatternFile(WX218x* pT, BSTR Channel, BSTR FileName);
	static HRESULT IWX218xPatternComposer_CreatePatternComposerLinearData(WX218x* pT, BSTR Channel, SAFEARRAY** AmplLevel, SAFEARRAY** DwellTime);
	static HRESULT IWX218xPatternComposer_ConfigurePatternCompFastStart(WX218x* pT, BSTR Channel, double FastStart);
	static HRESULT IWX218xPatternComposer_ConfigurePatternCompLinearStart(WX218x* pT, BSTR Channel, double LinearStart);
	static HRESULT IWX218xPatternComposer_ConfigurePatternCompResolution(WX218x* pT, BSTR Channel, double Resolution);
	static HRESULT IWX218xPatternComposer_ConfigurePatternCompResType(WX218x* pT, BSTR Channel, WX218xPatternResTypeEnum ResType);
	static HRESULT IWX218xPatternComposer_ConfigurePatternCompTransType(WX218x* pT, BSTR Channel, WX218xPatternComposerTransitionTypeEnum TransitionType);
	static HRESULT IWX218xPatternComposer_get_TransitionType(WX218x* pT, BSTR Channel, WX218xPatternComposerTransitionTypeEnum* val);
	static HRESULT IWX218xPatternComposer_put_TransitionType(WX218x* pT, BSTR Channel, WX218xPatternComposerTransitionTypeEnum val);
	static HRESULT IWX218xPatternComposer_get_LinearStart(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xPatternComposer_put_LinearStart(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xPatternComposer_get_Resolution(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xPatternComposer_put_Resolution(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xPatternComposer_get_ResolutionType(WX218x* pT, BSTR Channel, WX218xPatternResTypeEnum* val);
	static HRESULT IWX218xPatternComposer_put_ResolutionType(WX218x* pT, BSTR Channel, WX218xPatternResTypeEnum val);
	static HRESULT IWX218xPatternComposer_get_FastStart(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xPatternComposer_put_FastStart(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xPSK_CreatePSKData(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xPSK_CreatePSKUserData(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xPSK_LoadPSKDataFile(WX218x* pT, BSTR Channel, BSTR FileName);
	static HRESULT IWX218xPSK_LoadPSKUserDataFile(WX218x* pT, BSTR Channel, BSTR FileName);
	static HRESULT IWX218xPSK_CreatePSKDataAdv(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xPSK_ConfigurePSKBaud(WX218x* pT, BSTR Channel, double Baud);
	static HRESULT IWX218xPSK_ConfigurePSKCarrierState(WX218x* pT, BSTR Channel, VARIANT_BOOL State);
	static HRESULT IWX218xPSK_ConfigurePSKState(WX218x* pT, BSTR Channel, VARIANT_BOOL State);
	static HRESULT IWX218xPSK_ConfigurePSKMarker(WX218x* pT, BSTR Channel, long Marker);
	static HRESULT IWX218xPSK_ConfigurePSKRate(WX218x* pT, BSTR Channel, double Rate);
	static HRESULT IWX218xPSK_ConfigurePSKShiftPhase(WX218x* pT, BSTR Channel, double ShiftPhase);
	static HRESULT IWX218xPSK_ConfigurePSKStartPhase(WX218x* pT, BSTR Channel, double StartPhase);
	static HRESULT IWX218xPSK_ConfigurePSKType(WX218x* pT, BSTR Channel, WX218xPskTypeEnum Type);
	static HRESULT IWX218xPSK_get_StartPhase(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xPSK_put_StartPhase(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xPSK_get_ShiftPhase(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xPSK_put_ShiftPhase(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xPSK_get_Rate(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xPSK_put_Rate(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xPSK_get_Type(WX218x* pT, BSTR Channel, WX218xPskTypeEnum* val);
	static HRESULT IWX218xPSK_put_Type(WX218x* pT, BSTR Channel, WX218xPskTypeEnum val);
	static HRESULT IWX218xPSK_get_Marker(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xPSK_put_Marker(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xPSK_get_Baud(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xPSK_put_Baud(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xPSK_get_CarrierEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xPSK_put_CarrierEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xPSK_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xPSK_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xQAM_CreateQAMData(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xQAM_CreateQAMUserData(WX218x* pT, BSTR Channel, SAFEARRAY** DataI, SAFEARRAY** DataQ);
	static HRESULT IWX218xQAM_LoadQAMDataFile(WX218x* pT, BSTR Channel, BSTR FileName);
	static HRESULT IWX218xQAM_LoadQAMUserDataFile(WX218x* pT, BSTR Channel, BSTR FileName);
	static HRESULT IWX218xQAM_CreateQAMDataAdv(WX218x* pT, BSTR Channel, SAFEARRAY** Data);
	static HRESULT IWX218xQAM_ConfigureQAMBaud(WX218x* pT, BSTR Channel, double Baud);
	static HRESULT IWX218xQAM_ConfigureQAMCarrierState(WX218x* pT, BSTR Channel, VARIANT_BOOL State);
	static HRESULT IWX218xQAM_ConfigureQAMState(WX218x* pT, BSTR Channel, VARIANT_BOOL State);
	static HRESULT IWX218xQAM_ConfigureQAMMarker(WX218x* pT, BSTR Channel, long Marker);
	static HRESULT IWX218xQAM_ConfigureQAMType(WX218x* pT, BSTR Channel, WX218xQamTypeEnum Type);
	static HRESULT IWX218xQAM_get_Baud(WX218x* pT, BSTR Channel, double* val);
	static HRESULT IWX218xQAM_put_Baud(WX218x* pT, BSTR Channel, double val);
	static HRESULT IWX218xQAM_get_Type(WX218x* pT, BSTR Channel, WX218xQamTypeEnum* val);
	static HRESULT IWX218xQAM_put_Type(WX218x* pT, BSTR Channel, WX218xQamTypeEnum val);
	static HRESULT IWX218xQAM_get_Marker(WX218x* pT, BSTR Channel, long* val);
	static HRESULT IWX218xQAM_put_Marker(WX218x* pT, BSTR Channel, long val);
	static HRESULT IWX218xQAM_get_CarrierEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xQAM_put_CarrierEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
	static HRESULT IWX218xQAM_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val);
	static HRESULT IWX218xQAM_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val);
};

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218x
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218x : public IWX218x
{
	STDMETHODIMP Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
	{
		return ForwardingShimImpl::IIviDriver_Initialize(static_cast<Deriving*>(this), ResourceName, IdQuery, Reset, OptionString);
	}
	STDMETHODIMP Close()
	{
		return ForwardingShimImpl::IIviDriver_Close(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_DriverOperation(IIviDriverOperation** val)
	{
		return ForwardingShimImpl::IIviDriver_get_DriverOperation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identity(IIviDriverIdentity** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Identity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Utility(IIviDriverUtility** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Utility(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Initialized(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriver_get_Initialized(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP AbortGeneration()
	{
		return ForwardingShimImpl::IWX218x_AbortGeneration(static_cast<Deriving*>(this));
	}
	STDMETHODIMP InitiateGeneration()
	{
		return ForwardingShimImpl::IWX218x_InitiateGeneration(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SetActiveChannel(BSTR ChName)
	{
		return ForwardingShimImpl::IWX218x_SetActiveChannel(static_cast<Deriving*>(this), ChName);
	}
	STDMETHODIMP SendCmd(BSTR Command)
	{
		return ForwardingShimImpl::IWX218x_SendCmd(static_cast<Deriving*>(this), Command);
	}
	STDMETHODIMP ReadQuery(BSTR SendBuff, BSTR* ReadBuff)
	{
		return ForwardingShimImpl::IWX218x_ReadQuery(static_cast<Deriving*>(this), SendBuff, ReadBuff);
	}
	STDMETHODIMP get_Output(IWX218xChannel** val)
	{
		return ForwardingShimImpl::IWX218x_get_Output(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AM(IWX218xAM** val)
	{
		return ForwardingShimImpl::IWX218x_get_AM(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ActiveChannel(BSTR* val)
	{
		return ForwardingShimImpl::IWX218x_get_ActiveChannel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ActiveChannel(BSTR val)
	{
		return ForwardingShimImpl::IWX218x_put_ActiveChannel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StandardWaveform(IWX218xStandardWaveform** val)
	{
		return ForwardingShimImpl::IWX218x_get_StandardWaveform(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Arbitrary(IWX218xArbitrary** val)
	{
		return ForwardingShimImpl::IWX218x_get_Arbitrary(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_CarrierModulation(IWX218xCarrierModulation** val)
	{
		return ForwardingShimImpl::IWX218x_get_CarrierModulation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Couple(IWX218xCouple** val)
	{
		return ForwardingShimImpl::IWX218x_get_Couple(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_FM(IWX218xFM** val)
	{
		return ForwardingShimImpl::IWX218x_get_FM(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Markers(IWX218xMarkers** val)
	{
		return ForwardingShimImpl::IWX218x_get_Markers(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Trigger(IWX218xTrigger** val)
	{
		return ForwardingShimImpl::IWX218x_get_Trigger(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StateStorage(IWX218xStateStorage** val)
	{
		return ForwardingShimImpl::IWX218x_get_StateStorage(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_XInstrument(IWX218xXInstrument** val)
	{
		return ForwardingShimImpl::IWX218x_get_XInstrument(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DigitalPulse(IWX218xDigitalPulse** val)
	{
		return ForwardingShimImpl::IWX218x_get_DigitalPulse(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Sweep(IWX218xSweep** val)
	{
		return ForwardingShimImpl::IWX218x_get_Sweep(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DigitalPatternOutput(IWX218xDigitalPatternOutput** val)
	{
		return ForwardingShimImpl::IWX218x_get_DigitalPatternOutput(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_CHIRP(IWX218xCHIRP** val)
	{
		return ForwardingShimImpl::IWX218x_get_CHIRP(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_FSK(IWX218xFSK** val)
	{
		return ForwardingShimImpl::IWX218x_get_FSK(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ASK(IWX218xASK** val)
	{
		return ForwardingShimImpl::IWX218x_get_ASK(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_FHOP(IWX218xFHOP** val)
	{
		return ForwardingShimImpl::IWX218x_get_FHOP(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AHOP(IWX218xAHOP** val)
	{
		return ForwardingShimImpl::IWX218x_get_AHOP(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Pattern(IWX218xPattern** val)
	{
		return ForwardingShimImpl::IWX218x_get_Pattern(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_PSK(IWX218xPSK** val)
	{
		return ForwardingShimImpl::IWX218x_get_PSK(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_QAM(IWX218xQAM** val)
	{
		return ForwardingShimImpl::IWX218x_get_QAM(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Skew(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218x_get_Skew(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Skew(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218x_put_Skew(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218x<WX218x> _IWX218x;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriver
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriver : public IIviDriver
{
	STDMETHODIMP Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
	{
		return ForwardingShimImpl::IIviDriver_Initialize(static_cast<Deriving*>(this), ResourceName, IdQuery, Reset, OptionString);
	}
	STDMETHODIMP Close()
	{
		return ForwardingShimImpl::IIviDriver_Close(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_DriverOperation(IIviDriverOperation** val)
	{
		return ForwardingShimImpl::IIviDriver_get_DriverOperation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identity(IIviDriverIdentity** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Identity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Utility(IIviDriverUtility** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Utility(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Initialized(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriver_get_Initialized(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDriver<WX218x> _IIviDriver;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriverOperation
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriverOperation : public IIviDriverOperation
{
	STDMETHODIMP InvalidateAllAttributes()
	{
		return ForwardingShimImpl::IIviDriverOperation_InvalidateAllAttributes(static_cast<Deriving*>(this));
	}
	STDMETHODIMP ClearInterchangeWarnings()
	{
		return ForwardingShimImpl::IIviDriverOperation_ClearInterchangeWarnings(static_cast<Deriving*>(this));
	}
	STDMETHODIMP GetNextInterchangeWarning(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_GetNextInterchangeWarning(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP ResetInterchangeCheck()
	{
		return ForwardingShimImpl::IIviDriverOperation_ResetInterchangeCheck(static_cast<Deriving*>(this));
	}
	STDMETHODIMP GetNextCoercionRecord(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_GetNextCoercionRecord(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LogicalName(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_LogicalName(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_IoResourceDescriptor(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_IoResourceDescriptor(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Cache(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_Cache(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Cache(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_Cache(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InterchangeCheck(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_InterchangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InterchangeCheck(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_InterchangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_QueryInstrumentStatus(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_QueryInstrumentStatus(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_QueryInstrumentStatus(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_QueryInstrumentStatus(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RangeCheck(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_RangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RangeCheck(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_RangeCheck(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RecordCoercions(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_RecordCoercions(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RecordCoercions(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_RecordCoercions(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Simulate(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_Simulate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Simulate(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviDriverOperation_put_Simulate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DriverSetup(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverOperation_get_DriverSetup(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDriverOperation<WX218x> _IIviDriverOperation;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriverIdentity
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriverIdentity : public IIviDriverIdentity
{
	STDMETHODIMP get_Description(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Description(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Revision(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Revision(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Vendor(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Vendor(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InstrumentManufacturer(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_InstrumentManufacturer(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InstrumentModel(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_InstrumentModel(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InstrumentFirmwareRevision(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_InstrumentFirmwareRevision(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identifier(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_Identifier(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SupportedInstrumentModels(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_SupportedInstrumentModels(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SpecificationMajorVersion(long* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_SpecificationMajorVersion(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SpecificationMinorVersion(long* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_SpecificationMinorVersion(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_GroupCapabilities(BSTR* val)
	{
		return ForwardingShimImpl::IIviDriverIdentity_get_GroupCapabilities(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviDriverIdentity<WX218x> _IIviDriverIdentity;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviComponentIdentity
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviComponentIdentity : public IIviComponentIdentity
{
	STDMETHODIMP get_Description(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Description(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Revision(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Revision(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Vendor(BSTR* val)
	{
		return ForwardingShimImpl::IIviComponentIdentity_get_Vendor(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviComponentIdentity<WX218x> _IIviComponentIdentity;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviDriverUtility
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviDriverUtility : public IIviDriverUtility
{
	STDMETHODIMP Reset()
	{
		return ForwardingShimImpl::IIviDriverUtility_Reset(static_cast<Deriving*>(this));
	}
	STDMETHODIMP ResetWithDefaults()
	{
		return ForwardingShimImpl::IIviDriverUtility_ResetWithDefaults(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Disable()
	{
		return ForwardingShimImpl::IIviDriverUtility_Disable(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SelfTest(long* TestResult, BSTR* TestMessage)
	{
		return ForwardingShimImpl::IIviDriverUtility_SelfTest(static_cast<Deriving*>(this), TestResult, TestMessage);
	}
	STDMETHODIMP ErrorQuery(long* ErrorCode, BSTR* ErrorMessage)
	{
		return ForwardingShimImpl::IIviDriverUtility_ErrorQuery(static_cast<Deriving*>(this), ErrorCode, ErrorMessage);
	}
	STDMETHODIMP LockObject()
	{
		return ForwardingShimImpl::IIviDriverUtility_LockObject(static_cast<Deriving*>(this));
	}
	STDMETHODIMP UnlockObject()
	{
		return ForwardingShimImpl::IIviDriverUtility_UnlockObject(static_cast<Deriving*>(this));
	}
};

typedef __IIviDriverUtility<WX218x> _IIviDriverUtility;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xChannel
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xChannel : public IWX218xChannel
{
	STDMETHODIMP ConfigureRefExtFrequency(BSTR Channel, double ExtFreq)
	{
		return ForwardingShimImpl::IWX218xChannel_ConfigureRefExtFrequency(static_cast<Deriving*>(this), Channel, ExtFreq);
	}
	STDMETHODIMP ConfigureExtFrequency(BSTR Channel, WX218xExtFrequencyEnum ExtFrequency)
	{
		return ForwardingShimImpl::IWX218xChannel_ConfigureExtFrequency(static_cast<Deriving*>(this), Channel, ExtFrequency);
	}
	STDMETHODIMP ConfigureOutputStateAllCh(VARIANT_BOOL State)
	{
		return ForwardingShimImpl::IWX218xChannel_ConfigureOutputStateAllCh(static_cast<Deriving*>(this), State);
	}
	STDMETHODIMP ConfigureCoupleAllCh(WX218xOutputCoupleEnum Couple)
	{
		return ForwardingShimImpl::IWX218xChannel_ConfigureCoupleAllCh(static_cast<Deriving*>(this), Couple);
	}
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::IWX218xChannel_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Name(long Index, BSTR* val)
	{
		return ForwardingShimImpl::IWX218xChannel_get_Name(static_cast<Deriving*>(this), Index, val);
	}
	STDMETHODIMP get_Couple(BSTR Channel, WX218xOutputCoupleEnum* val)
	{
		return ForwardingShimImpl::IWX218xChannel_get_Couple(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Couple(BSTR Channel, WX218xOutputCoupleEnum val)
	{
		return ForwardingShimImpl::IWX218xChannel_put_Couple(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xChannel_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xChannel_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_OperationMode(BSTR Channel, WX218xOperationModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xChannel_get_OperationMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_OperationMode(BSTR Channel, WX218xOperationModeEnum val)
	{
		return ForwardingShimImpl::IWX218xChannel_put_OperationMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_OutputMode(WX218xOutputModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xChannel_get_OutputMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_OutputMode(WX218xOutputModeEnum val)
	{
		return ForwardingShimImpl::IWX218xChannel_put_OutputMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ReferenceClockSource(WX218xReferenceClockSourceEnum* val)
	{
		return ForwardingShimImpl::IWX218xChannel_get_ReferenceClockSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceClockSource(WX218xReferenceClockSourceEnum val)
	{
		return ForwardingShimImpl::IWX218xChannel_put_ReferenceClockSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RefExtFrequency(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xChannel_get_RefExtFrequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_RefExtFrequency(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xChannel_put_RefExtFrequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Sync(IWX218xChannelSync** val)
	{
		return ForwardingShimImpl::IWX218xChannel_get_Sync(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ExtFrequency(BSTR Channel, WX218xExtFrequencyEnum* val)
	{
		return ForwardingShimImpl::IWX218xChannel_get_ExtFrequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_ExtFrequency(BSTR Channel, WX218xExtFrequencyEnum val)
	{
		return ForwardingShimImpl::IWX218xChannel_put_ExtFrequency(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xChannel<WX218x> _IWX218xChannel;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviFgenOutput
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviFgenOutput : public IIviFgenOutput
{
	STDMETHODIMP get_Enabled(BSTR ChannelName, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviFgenOutput_get_Enabled(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Enabled(BSTR ChannelName, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviFgenOutput_put_Enabled(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_Impedance(BSTR ChannelName, double* val)
	{
		return ForwardingShimImpl::IIviFgenOutput_get_Impedance(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Impedance(BSTR ChannelName, double val)
	{
		return ForwardingShimImpl::IIviFgenOutput_put_Impedance(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_OutputMode(IviFgenOutputModeEnum* val)
	{
		return ForwardingShimImpl::IIviFgenOutput_get_OutputMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_OutputMode(IviFgenOutputModeEnum val)
	{
		return ForwardingShimImpl::IIviFgenOutput_put_OutputMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_OperationMode(BSTR ChannelName, IviFgenOperationModeEnum* val)
	{
		return ForwardingShimImpl::IIviFgenOutput_get_OperationMode(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_OperationMode(BSTR ChannelName, IviFgenOperationModeEnum val)
	{
		return ForwardingShimImpl::IIviFgenOutput_put_OperationMode(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_ReferenceClockSource(IviFgenReferenceClockSourceEnum* val)
	{
		return ForwardingShimImpl::IIviFgenOutput_get_ReferenceClockSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ReferenceClockSource(IviFgenReferenceClockSourceEnum val)
	{
		return ForwardingShimImpl::IIviFgenOutput_put_ReferenceClockSource(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Count(long* val)
	{
		return ForwardingShimImpl::IIviFgenOutput_get_Count(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Name(long Index, BSTR* val)
	{
		return ForwardingShimImpl::IIviFgenOutput_get_Name(static_cast<Deriving*>(this), Index, val);
	}
};

typedef __IIviFgenOutput<WX218x> _IIviFgenOutput;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviFgenTrigger
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviFgenTrigger : public IIviFgenTrigger
{
	STDMETHODIMP SendSoftwareTrigger()
	{
		return ForwardingShimImpl::IIviFgenTrigger_SendSoftwareTrigger(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_BurstCount(BSTR ChannelName, long* val)
	{
		return ForwardingShimImpl::IIviFgenTrigger_get_BurstCount(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_BurstCount(BSTR ChannelName, long val)
	{
		return ForwardingShimImpl::IIviFgenTrigger_put_BurstCount(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_InternalRate(double* val)
	{
		return ForwardingShimImpl::IIviFgenTrigger_get_InternalRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalRate(double val)
	{
		return ForwardingShimImpl::IIviFgenTrigger_put_InternalRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source(BSTR ChannelName, IviFgenTriggerSourceEnum* val)
	{
		return ForwardingShimImpl::IIviFgenTrigger_get_Source(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Source(BSTR ChannelName, IviFgenTriggerSourceEnum val)
	{
		return ForwardingShimImpl::IIviFgenTrigger_put_Source(static_cast<Deriving*>(this), ChannelName, val);
	}
};

typedef __IIviFgenTrigger<WX218x> _IIviFgenTrigger;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviFgenStandardWaveform
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviFgenStandardWaveform : public IIviFgenStandardWaveform
{
	STDMETHODIMP Configure(BSTR ChannelName, IviFgenWaveformEnum Waveform, double Amplitude, double DCOffset, double Frequency, double StartPhase)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_Configure(static_cast<Deriving*>(this), ChannelName, Waveform, Amplitude, DCOffset, Frequency, StartPhase);
	}
	STDMETHODIMP get_DutyCycleHigh(BSTR ChannelName, double* val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_get_DutyCycleHigh(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_DutyCycleHigh(BSTR ChannelName, double val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_put_DutyCycleHigh(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_Amplitude(BSTR ChannelName, double* val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_get_Amplitude(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Amplitude(BSTR ChannelName, double val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_put_Amplitude(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_DCOffset(BSTR ChannelName, double* val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_get_DCOffset(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_DCOffset(BSTR ChannelName, double val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_put_DCOffset(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_Frequency(BSTR ChannelName, double* val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_get_Frequency(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Frequency(BSTR ChannelName, double val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_put_Frequency(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_StartPhase(BSTR ChannelName, double* val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_get_StartPhase(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_StartPhase(BSTR ChannelName, double val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_put_StartPhase(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_Waveform(BSTR ChannelName, IviFgenWaveformEnum* val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_get_Waveform(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Waveform(BSTR ChannelName, IviFgenWaveformEnum val)
	{
		return ForwardingShimImpl::IIviFgenStandardWaveform_put_Waveform(static_cast<Deriving*>(this), ChannelName, val);
	}
};

typedef __IIviFgenStandardWaveform<WX218x> _IIviFgenStandardWaveform;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviFgenArbitrary
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviFgenArbitrary : public IIviFgenArbitrary
{
	STDMETHODIMP ClearMemory()
	{
		return ForwardingShimImpl::IIviFgenArbitrary_ClearMemory(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Gain(BSTR ChannelName, double* val)
	{
		return ForwardingShimImpl::IIviFgenArbitrary_get_Gain(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Gain(BSTR ChannelName, double val)
	{
		return ForwardingShimImpl::IIviFgenArbitrary_put_Gain(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_Offset(BSTR ChannelName, double* val)
	{
		return ForwardingShimImpl::IIviFgenArbitrary_get_Offset(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Offset(BSTR ChannelName, double val)
	{
		return ForwardingShimImpl::IIviFgenArbitrary_put_Offset(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_SampleRate(double* val)
	{
		return ForwardingShimImpl::IIviFgenArbitrary_get_SampleRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SampleRate(double val)
	{
		return ForwardingShimImpl::IIviFgenArbitrary_put_SampleRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Sequence(IIviFgenArbitrarySequence** val)
	{
		return ForwardingShimImpl::IIviFgenArbitrary_get_Sequence(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Waveform(IIviFgenArbitraryWaveform** val)
	{
		return ForwardingShimImpl::IIviFgenArbitrary_get_Waveform(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviFgenArbitrary<WX218x> _IIviFgenArbitrary;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviFgenArbitrarySequence
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviFgenArbitrarySequence : public IIviFgenArbitrarySequence
{
	STDMETHODIMP Configure(BSTR ChannelName, long Handle, double Gain, double Offset)
	{
		return ForwardingShimImpl::IIviFgenArbitrarySequence_Configure(static_cast<Deriving*>(this), ChannelName, Handle, Gain, Offset);
	}
	STDMETHODIMP Clear(long Handle)
	{
		return ForwardingShimImpl::IIviFgenArbitrarySequence_Clear(static_cast<Deriving*>(this), Handle);
	}
	STDMETHODIMP Create(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, long* val)
	{
		return ForwardingShimImpl::IIviFgenArbitrarySequence_Create(static_cast<Deriving*>(this), WfmHandle, LoopCount, val);
	}
	STDMETHODIMP get_LengthMax(long* val)
	{
		return ForwardingShimImpl::IIviFgenArbitrarySequence_get_LengthMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LengthMin(long* val)
	{
		return ForwardingShimImpl::IIviFgenArbitrarySequence_get_LengthMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LoopCountMax(long* val)
	{
		return ForwardingShimImpl::IIviFgenArbitrarySequence_get_LoopCountMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_NumberSequencesMax(long* val)
	{
		return ForwardingShimImpl::IIviFgenArbitrarySequence_get_NumberSequencesMax(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviFgenArbitrarySequence<WX218x> _IIviFgenArbitrarySequence;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviFgenArbitraryWaveform
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviFgenArbitraryWaveform : public IIviFgenArbitraryWaveform
{
	STDMETHODIMP Configure(BSTR ChannelName, long Handle, double Gain, double Offset)
	{
		return ForwardingShimImpl::IIviFgenArbitraryWaveform_Configure(static_cast<Deriving*>(this), ChannelName, Handle, Gain, Offset);
	}
	STDMETHODIMP Clear(long Handle)
	{
		return ForwardingShimImpl::IIviFgenArbitraryWaveform_Clear(static_cast<Deriving*>(this), Handle);
	}
	STDMETHODIMP Create(SAFEARRAY** Data, long* val)
	{
		return ForwardingShimImpl::IIviFgenArbitraryWaveform_Create(static_cast<Deriving*>(this), Data, val);
	}
	STDMETHODIMP get_Frequency(BSTR ChannelName, double* val)
	{
		return ForwardingShimImpl::IIviFgenArbitraryWaveform_get_Frequency(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Frequency(BSTR ChannelName, double val)
	{
		return ForwardingShimImpl::IIviFgenArbitraryWaveform_put_Frequency(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_NumberWaveformsMax(long* val)
	{
		return ForwardingShimImpl::IIviFgenArbitraryWaveform_get_NumberWaveformsMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Quantum(long* val)
	{
		return ForwardingShimImpl::IIviFgenArbitraryWaveform_get_Quantum(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SizeMax(long* val)
	{
		return ForwardingShimImpl::IIviFgenArbitraryWaveform_get_SizeMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SizeMin(long* val)
	{
		return ForwardingShimImpl::IIviFgenArbitraryWaveform_get_SizeMin(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviFgenArbitraryWaveform<WX218x> _IIviFgenArbitraryWaveform;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviFgenAM
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviFgenAM : public IIviFgenAM
{
	STDMETHODIMP ConfigureInternal(double Depth, IviFgenAMInternalWaveformEnum Waveform, double Frequency)
	{
		return ForwardingShimImpl::IIviFgenAM_ConfigureInternal(static_cast<Deriving*>(this), Depth, Waveform, Frequency);
	}
	STDMETHODIMP get_Enabled(BSTR ChannelName, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviFgenAM_get_Enabled(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Enabled(BSTR ChannelName, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviFgenAM_put_Enabled(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_Source(BSTR ChannelName, IviFgenAMSourceEnum* val)
	{
		return ForwardingShimImpl::IIviFgenAM_get_Source(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Source(BSTR ChannelName, IviFgenAMSourceEnum val)
	{
		return ForwardingShimImpl::IIviFgenAM_put_Source(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_InternalDepth(double* val)
	{
		return ForwardingShimImpl::IIviFgenAM_get_InternalDepth(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalDepth(double val)
	{
		return ForwardingShimImpl::IIviFgenAM_put_InternalDepth(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InternalFrequency(double* val)
	{
		return ForwardingShimImpl::IIviFgenAM_get_InternalFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalFrequency(double val)
	{
		return ForwardingShimImpl::IIviFgenAM_put_InternalFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InternalWaveform(IviFgenAMInternalWaveformEnum* val)
	{
		return ForwardingShimImpl::IIviFgenAM_get_InternalWaveform(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalWaveform(IviFgenAMInternalWaveformEnum val)
	{
		return ForwardingShimImpl::IIviFgenAM_put_InternalWaveform(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviFgenAM<WX218x> _IIviFgenAM;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviFgenFM
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviFgenFM : public IIviFgenFM
{
	STDMETHODIMP ConfigureInternal(double Deviation, IviFgenFMInternalWaveformEnum Waveform, double Frequency)
	{
		return ForwardingShimImpl::IIviFgenFM_ConfigureInternal(static_cast<Deriving*>(this), Deviation, Waveform, Frequency);
	}
	STDMETHODIMP get_Enabled(BSTR ChannelName, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviFgenFM_get_Enabled(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Enabled(BSTR ChannelName, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IIviFgenFM_put_Enabled(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_Source(BSTR ChannelName, IviFgenFMSourceEnum* val)
	{
		return ForwardingShimImpl::IIviFgenFM_get_Source(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP put_Source(BSTR ChannelName, IviFgenFMSourceEnum val)
	{
		return ForwardingShimImpl::IIviFgenFM_put_Source(static_cast<Deriving*>(this), ChannelName, val);
	}
	STDMETHODIMP get_InternalDeviation(double* val)
	{
		return ForwardingShimImpl::IIviFgenFM_get_InternalDeviation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalDeviation(double val)
	{
		return ForwardingShimImpl::IIviFgenFM_put_InternalDeviation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InternalFrequency(double* val)
	{
		return ForwardingShimImpl::IIviFgenFM_get_InternalFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalFrequency(double val)
	{
		return ForwardingShimImpl::IIviFgenFM_put_InternalFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InternalWaveform(IviFgenFMInternalWaveformEnum* val)
	{
		return ForwardingShimImpl::IIviFgenFM_get_InternalWaveform(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalWaveform(IviFgenFMInternalWaveformEnum val)
	{
		return ForwardingShimImpl::IIviFgenFM_put_InternalWaveform(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviFgenFM<WX218x> _IIviFgenFM;

///////////////////////////////////////////////////////////////////////////////
//
//	IIviFgen
//

template <typename Deriving> struct ATL_NO_VTABLE __IIviFgen : public IIviFgen
{
	STDMETHODIMP Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
	{
		return ForwardingShimImpl::IIviDriver_Initialize(static_cast<Deriving*>(this), ResourceName, IdQuery, Reset, OptionString);
	}
	STDMETHODIMP Close()
	{
		return ForwardingShimImpl::IIviDriver_Close(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_DriverOperation(IIviDriverOperation** val)
	{
		return ForwardingShimImpl::IIviDriver_get_DriverOperation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Identity(IIviDriverIdentity** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Identity(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Utility(IIviDriverUtility** val)
	{
		return ForwardingShimImpl::IIviDriver_get_Utility(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Initialized(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IIviDriver_get_Initialized(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP InitiateGeneration()
	{
		return ForwardingShimImpl::IIviFgen_InitiateGeneration(static_cast<Deriving*>(this));
	}
	STDMETHODIMP AbortGeneration()
	{
		return ForwardingShimImpl::IIviFgen_AbortGeneration(static_cast<Deriving*>(this));
	}
	STDMETHODIMP get_Output(IIviFgenOutput** val)
	{
		return ForwardingShimImpl::IIviFgen_get_Output(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Trigger(IIviFgenTrigger** val)
	{
		return ForwardingShimImpl::IIviFgen_get_Trigger(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StandardWaveform(IIviFgenStandardWaveform** val)
	{
		return ForwardingShimImpl::IIviFgen_get_StandardWaveform(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Arbitrary(IIviFgenArbitrary** val)
	{
		return ForwardingShimImpl::IIviFgen_get_Arbitrary(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_AM(IIviFgenAM** val)
	{
		return ForwardingShimImpl::IIviFgen_get_AM(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_FM(IIviFgenFM** val)
	{
		return ForwardingShimImpl::IIviFgen_get_FM(static_cast<Deriving*>(this), val);
	}
};

typedef __IIviFgen<WX218x> _IIviFgen;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xAM
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xAM : public IWX218xAM
{
	STDMETHODIMP ConfigureInternal(double Depth, WX218xAMInternalWaveformEnum Waveform, double Frequency)
	{
		return ForwardingShimImpl::IWX218xAM_ConfigureInternal(static_cast<Deriving*>(this), Depth, Waveform, Frequency);
	}
	STDMETHODIMP ConfigureAMEnabled(BSTR Channel, VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IWX218xAM_ConfigureAMEnabled(static_cast<Deriving*>(this), Channel, Enabled);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xAM_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xAM_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_InternalDepth(double* val)
	{
		return ForwardingShimImpl::IWX218xAM_get_InternalDepth(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalDepth(double val)
	{
		return ForwardingShimImpl::IWX218xAM_put_InternalDepth(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InternalWaveform(WX218xAMInternalWaveformEnum* val)
	{
		return ForwardingShimImpl::IWX218xAM_get_InternalWaveform(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalWaveform(WX218xAMInternalWaveformEnum val)
	{
		return ForwardingShimImpl::IWX218xAM_put_InternalWaveform(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InternalFrequency(double* val)
	{
		return ForwardingShimImpl::IWX218xAM_get_InternalFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalFrequency(double val)
	{
		return ForwardingShimImpl::IWX218xAM_put_InternalFrequency(static_cast<Deriving*>(this), val);
	}
};

typedef __IWX218xAM<WX218x> _IWX218xAM;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xChannelSync
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xChannelSync : public IWX218xChannelSync
{
	STDMETHODIMP ConfigureSyncEnabled(BSTR Channel, VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IWX218xChannelSync_ConfigureSyncEnabled(static_cast<Deriving*>(this), Channel, Enabled);
	}
	STDMETHODIMP ConfigureSyncFunction(BSTR Channel, WX218xOutputSyncFunctionEnum Function)
	{
		return ForwardingShimImpl::IWX218xChannelSync_ConfigureSyncFunction(static_cast<Deriving*>(this), Channel, Function);
	}
	STDMETHODIMP ConfigureSyncPosition(BSTR Channel, long Position)
	{
		return ForwardingShimImpl::IWX218xChannelSync_ConfigureSyncPosition(static_cast<Deriving*>(this), Channel, Position);
	}
	STDMETHODIMP ConfigureSyncSource(WX218xOutputSyncSourceEnum Source)
	{
		return ForwardingShimImpl::IWX218xChannelSync_ConfigureSyncSource(static_cast<Deriving*>(this), Source);
	}
	STDMETHODIMP ConfigureSyncWidth(BSTR Channel, long Width)
	{
		return ForwardingShimImpl::IWX218xChannelSync_ConfigureSyncWidth(static_cast<Deriving*>(this), Channel, Width);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xChannelSync_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xChannelSync_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Function(BSTR Channel, WX218xOutputSyncFunctionEnum* val)
	{
		return ForwardingShimImpl::IWX218xChannelSync_get_Function(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Function(BSTR Channel, WX218xOutputSyncFunctionEnum val)
	{
		return ForwardingShimImpl::IWX218xChannelSync_put_Function(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Position(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xChannelSync_get_Position(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Position(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xChannelSync_put_Position(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Source(WX218xOutputSyncSourceEnum* val)
	{
		return ForwardingShimImpl::IWX218xChannelSync_get_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Source(WX218xOutputSyncSourceEnum val)
	{
		return ForwardingShimImpl::IWX218xChannelSync_put_Source(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Width(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xChannelSync_get_Width(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Width(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xChannelSync_put_Width(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xChannelSync<WX218x> _IWX218xChannelSync;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xStandardWaveform
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xStandardWaveform : public IWX218xStandardWaveform
{
	STDMETHODIMP ConfigureRampWaveform(BSTR Channel, double Delay, double RiseTime, double FallTime)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_ConfigureRampWaveform(static_cast<Deriving*>(this), Channel, Delay, RiseTime, FallTime);
	}
	STDMETHODIMP SetAmplitudeMax(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_SetAmplitudeMax(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetAmplitudeMin(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_SetAmplitudeMin(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetDCOffsetMax(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_SetDCOffsetMax(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetDCOffsetMin(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_SetDCOffsetMin(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetFrequencyMax(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_SetFrequencyMax(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetFrequencyMin(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_SetFrequencyMin(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetPowerMax(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_SetPowerMax(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetPowerMin(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_SetPowerMin(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP Configure(BSTR Channel, WX218xWaveformEnum Waveform, double Amplitude, double DCOffset, double Frequency, double StartPhase)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_Configure(static_cast<Deriving*>(this), Channel, Waveform, Amplitude, DCOffset, Frequency, StartPhase);
	}
	STDMETHODIMP ConfigureDCLevel(BSTR Channel, double DcLevel)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_ConfigureDCLevel(static_cast<Deriving*>(this), Channel, DcLevel);
	}
	STDMETHODIMP ConfigureDutyCycle(BSTR Channel, double DutyCycle)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_ConfigureDutyCycle(static_cast<Deriving*>(this), Channel, DutyCycle);
	}
	STDMETHODIMP ConfigureExponenent(BSTR Channel, long Exponent)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_ConfigureExponenent(static_cast<Deriving*>(this), Channel, Exponent);
	}
	STDMETHODIMP ConfigureGauss(BSTR Channel, long Gauss)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_ConfigureGauss(static_cast<Deriving*>(this), Channel, Gauss);
	}
	STDMETHODIMP ConfigureHvAmplitude(BSTR Channel, double HvAmplitude)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_ConfigureHvAmplitude(static_cast<Deriving*>(this), Channel, HvAmplitude);
	}
	STDMETHODIMP ConfigurePower(BSTR Channel, double Power)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_ConfigurePower(static_cast<Deriving*>(this), Channel, Power);
	}
	STDMETHODIMP ConfigureSincNCycles(BSTR Channel, long Cycles)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_ConfigureSincNCycles(static_cast<Deriving*>(this), Channel, Cycles);
	}
	STDMETHODIMP ConfigureAmplitudeAllCh(double Amplitude)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_ConfigureAmplitudeAllCh(static_cast<Deriving*>(this), Amplitude);
	}
	STDMETHODIMP ConfigureHVAmplAllCh(double HVAmplitude)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_ConfigureHVAmplAllCh(static_cast<Deriving*>(this), HVAmplitude);
	}
	STDMETHODIMP ConfigureOffsetAllCh(double Offset)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_ConfigureOffsetAllCh(static_cast<Deriving*>(this), Offset);
	}
	STDMETHODIMP get_Amplitude(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_Amplitude(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Amplitude(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_Amplitude(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_DcLevel(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_DcLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_DcLevel(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_DcLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_DCOffset(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_DCOffset(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_DCOffset(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_DCOffset(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_DutyCycleHigh(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_DutyCycleHigh(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_DutyCycleHigh(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_DutyCycleHigh(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_ExpExponent(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_ExpExponent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_ExpExponent(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_ExpExponent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Frequency(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_Frequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Frequency(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_Frequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_GaussExponent(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_GaussExponent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_GaussExponent(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_GaussExponent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Power(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_Power(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Power(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_Power(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_RampDelay(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_RampDelay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_RampDelay(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_RampDelay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_RampFallTime(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_RampFallTime(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_RampFallTime(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_RampFallTime(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_RampRiseTime(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_RampRiseTime(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_RampRiseTime(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_RampRiseTime(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_SincNCycle(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_SincNCycle(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_SincNCycle(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_SincNCycle(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_StartPhase(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_StartPhase(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_StartPhase(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_StartPhase(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_HvAmplitude(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_HvAmplitude(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_HvAmplitude(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_HvAmplitude(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Waveform(BSTR Channel, WX218xWaveformEnum* val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_get_Waveform(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Waveform(BSTR Channel, WX218xWaveformEnum val)
	{
		return ForwardingShimImpl::IWX218xStandardWaveform_put_Waveform(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xStandardWaveform<WX218x> _IWX218xStandardWaveform;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xArbitrary
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xArbitrary : public IWX218xArbitrary
{
	STDMETHODIMP ClearMemory()
	{
		return ForwardingShimImpl::IWX218xArbitrary_ClearMemory(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SetSampleRateMax()
	{
		return ForwardingShimImpl::IWX218xArbitrary_SetSampleRateMax(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SetSampleRateMin()
	{
		return ForwardingShimImpl::IWX218xArbitrary_SetSampleRateMin(static_cast<Deriving*>(this));
	}
	STDMETHODIMP ConfigureClockDivider(BSTR Channel, long ClockDivider)
	{
		return ForwardingShimImpl::IWX218xArbitrary_ConfigureClockDivider(static_cast<Deriving*>(this), Channel, ClockDivider);
	}
	STDMETHODIMP ConfigureSampleRateSource(BSTR Channel, WX218xSampleRateSourceEnum SampleRateSource)
	{
		return ForwardingShimImpl::IWX218xArbitrary_ConfigureSampleRateSource(static_cast<Deriving*>(this), Channel, SampleRateSource);
	}
	STDMETHODIMP ConfigureArbSource(BSTR Channel, WX218xArbitrarySourceEnum Source)
	{
		return ForwardingShimImpl::IWX218xArbitrary_ConfigureArbSource(static_cast<Deriving*>(this), Channel, Source);
	}
	STDMETHODIMP ConfigureArbTiming(BSTR Channel, WX218xArbitraryTimingEnum Timing)
	{
		return ForwardingShimImpl::IWX218xArbitrary_ConfigureArbTiming(static_cast<Deriving*>(this), Channel, Timing);
	}
	STDMETHODIMP ConfigureFreqRastDivider(BSTR Channel, WX218xFreqDividerEnum Divider)
	{
		return ForwardingShimImpl::IWX218xArbitrary_ConfigureFreqRastDivider(static_cast<Deriving*>(this), Channel, Divider);
	}
	STDMETHODIMP ConfigureArbGain(BSTR Channel, double Gain)
	{
		return ForwardingShimImpl::IWX218xArbitrary_ConfigureArbGain(static_cast<Deriving*>(this), Channel, Gain);
	}
	STDMETHODIMP ConfigureArbOffset(BSTR Channel, double Offset)
	{
		return ForwardingShimImpl::IWX218xArbitrary_ConfigureArbOffset(static_cast<Deriving*>(this), Channel, Offset);
	}
	STDMETHODIMP ConfigureArbSampleRate(double SampleRate)
	{
		return ForwardingShimImpl::IWX218xArbitrary_ConfigureArbSampleRate(static_cast<Deriving*>(this), SampleRate);
	}
	STDMETHODIMP get_ClockDivider(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_get_ClockDivider(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_ClockDivider(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_put_ClockDivider(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Gain(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_get_Gain(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Gain(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_put_Gain(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Offset(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_get_Offset(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Offset(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_put_Offset(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_SampleRate(double* val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_get_SampleRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_SampleRate(double val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_put_SampleRate(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SampleRateSource(BSTR Channel, WX218xSampleRateSourceEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_get_SampleRateSource(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_SampleRateSource(BSTR Channel, WX218xSampleRateSourceEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_put_SampleRateSource(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Source(BSTR Channel, WX218xArbitrarySourceEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_get_Source(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Source(BSTR Channel, WX218xArbitrarySourceEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_put_Source(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Timing(BSTR Channel, WX218xArbitraryTimingEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_get_Timing(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Timing(BSTR Channel, WX218xArbitraryTimingEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_put_Timing(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Waveform(IWX218xArbitraryWaveform** val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_get_Waveform(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Sequence(IWX218xArbitrarySequence** val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_get_Sequence(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_FreqRastDivider(BSTR Channel, WX218xFreqDividerEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_get_FreqRastDivider(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_FreqRastDivider(BSTR Channel, WX218xFreqDividerEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitrary_put_FreqRastDivider(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xArbitrary<WX218x> _IWX218xArbitrary;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xArbitraryWaveform
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xArbitraryWaveform : public IWX218xArbitraryWaveform
{
	STDMETHODIMP Clear(long Handle)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_Clear(static_cast<Deriving*>(this), Handle);
	}
	STDMETHODIMP Configure(BSTR Channel, long Handle, double Gain, double Offset)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_Configure(static_cast<Deriving*>(this), Channel, Handle, Gain, Offset);
	}
	STDMETHODIMP Create(SAFEARRAY** Data, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_Create(static_cast<Deriving*>(this), Data, val);
	}
	STDMETHODIMP LoadArbWfmFromFile(BSTR Channel, BSTR FileName, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_LoadArbWfmFromFile(static_cast<Deriving*>(this), Channel, FileName, val);
	}
	STDMETHODIMP CreateCustom(SAFEARRAY** Data, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_CreateCustom(static_cast<Deriving*>(this), Data, val);
	}
	STDMETHODIMP LoadArbWfmFromFileAdv(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_LoadArbWfmFromFileAdv(static_cast<Deriving*>(this), Channel, FileName1, FileName2, Handle1, Handle2);
	}
	STDMETHODIMP CreateCustomAdv(SAFEARRAY** Data1, SAFEARRAY** Data2, long* Handle1, long* Handle2)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_CreateCustomAdv(static_cast<Deriving*>(this), Data1, Data2, Handle1, Handle2);
	}
	STDMETHODIMP SetCoupleActiveSegment(long SegNum1, long SegNum2)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_SetCoupleActiveSegment(static_cast<Deriving*>(this), SegNum1, SegNum2);
	}
	STDMETHODIMP SetActiveSegment(BSTR Channel, long SegNum)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_SetActiveSegment(static_cast<Deriving*>(this), Channel, SegNum);
	}
	STDMETHODIMP ConfigureArbWaveTraceMode(WX218xTraceModeEnum TraceMode)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_ConfigureArbWaveTraceMode(static_cast<Deriving*>(this), TraceMode);
	}
	STDMETHODIMP LoadBinaryArbWfmFromFile(BSTR Channel, BSTR FileName, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFile(static_cast<Deriving*>(this), Channel, FileName, val);
	}
	STDMETHODIMP LoadBinaryArbWfmFromFileAdv(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFileAdv(static_cast<Deriving*>(this), Channel, FileName1, FileName2, Handle1, Handle2);
	}
	STDMETHODIMP LoadAsciiArbWfmFromFile(BSTR Channel, BSTR FileName, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFile(static_cast<Deriving*>(this), Channel, FileName, val);
	}
	STDMETHODIMP LoadAsciiArbWfmFromFileAdv(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFileAdv(static_cast<Deriving*>(this), Channel, FileName1, FileName2, Handle1, Handle2);
	}
	STDMETHODIMP ConfigureDownloadRecord(WX218xArbDownloadRecordEnum DownloadRecord)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_ConfigureDownloadRecord(static_cast<Deriving*>(this), DownloadRecord);
	}
	STDMETHODIMP LoadCSVFile(BSTR Channel, BSTR FileName, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_LoadCSVFile(static_cast<Deriving*>(this), Channel, FileName, val);
	}
	STDMETHODIMP LoadCSVFileAdv(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_LoadCSVFileAdv(static_cast<Deriving*>(this), Channel, FileName1, FileName2, Handle1, Handle2);
	}
	STDMETHODIMP get_NumberWaveformsMax(long* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_get_NumberWaveformsMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Quantum(long* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_get_Quantum(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SizeMax(long* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_get_SizeMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SizeMin(long* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_get_SizeMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TraceMode(WX218xTraceModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_get_TraceMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TraceMode(WX218xTraceModeEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_put_TraceMode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_FastDownload(long* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_get_FastDownload(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_FastDownload(long val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_put_FastDownload(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DownloadRecord(WX218xArbDownloadRecordEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_get_DownloadRecord(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DownloadRecord(WX218xArbDownloadRecordEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitraryWaveform_put_DownloadRecord(static_cast<Deriving*>(this), val);
	}
};

typedef __IWX218xArbitraryWaveform<WX218x> _IWX218xArbitraryWaveform;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xArbitrarySequence
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xArbitrarySequence : public IWX218xArbitrarySequence
{
	STDMETHODIMP Clear(long Handle)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_Clear(static_cast<Deriving*>(this), Handle);
	}
	STDMETHODIMP Configure(BSTR Channel, long Handle, double Gain, double Offset)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_Configure(static_cast<Deriving*>(this), Channel, Handle, Gain, Offset);
	}
	STDMETHODIMP Create(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_Create(static_cast<Deriving*>(this), WfmHandle, LoopCount, val);
	}
	STDMETHODIMP CreateSequenceAdv(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_CreateSequenceAdv(static_cast<Deriving*>(this), WfmHandle, LoopCount, JumpFlag, val);
	}
	STDMETHODIMP SetCoupleActiveSequence(long SeqNum1, long SeqNum2)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_SetCoupleActiveSequence(static_cast<Deriving*>(this), SeqNum1, SeqNum2);
	}
	STDMETHODIMP SetActiveSequence(BSTR Channel, long SeqNum)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_SetActiveSequence(static_cast<Deriving*>(this), Channel, SeqNum);
	}
	STDMETHODIMP CreateSequenceAdv1(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_CreateSequenceAdv1(static_cast<Deriving*>(this), WfmHandle, LoopCount, JumpFlag, val);
	}
	STDMETHODIMP ConfigureAdvanceMode(BSTR Channel, WX218xSequenceAdvanceModeEnum AdvanceMode)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureAdvanceMode(static_cast<Deriving*>(this), Channel, AdvanceMode);
	}
	STDMETHODIMP ConfigureSeqJumpEvent(BSTR Channel, WX218xSequenceJumpEventEnum JumpEvent)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureSeqJumpEvent(static_cast<Deriving*>(this), Channel, JumpEvent);
	}
	STDMETHODIMP ConfigureSeqPrestep(BSTR Channel, WX218xSequencePrestepEnum Prestep)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureSeqPrestep(static_cast<Deriving*>(this), Channel, Prestep);
	}
	STDMETHODIMP ConfigureSeqSource(BSTR Channel, WX218xSequenceSourceEnum Source)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureSeqSource(static_cast<Deriving*>(this), Channel, Source);
	}
	STDMETHODIMP ConfigureSeqSyncLock(BSTR Channel, long SyncLock)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureSeqSyncLock(static_cast<Deriving*>(this), Channel, SyncLock);
	}
	STDMETHODIMP ConfigureSeqTiming(BSTR Channel, WX218xSequenceTimingEnum Timing)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureSeqTiming(static_cast<Deriving*>(this), Channel, Timing);
	}
	STDMETHODIMP ConfigureOnceCount(BSTR Channel, long Count)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureOnceCount(static_cast<Deriving*>(this), Channel, Count);
	}
	STDMETHODIMP get_AdvanceMode(BSTR Channel, WX218xSequenceAdvanceModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_AdvanceMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_AdvanceMode(BSTR Channel, WX218xSequenceAdvanceModeEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_put_AdvanceMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_JumpEvent(BSTR Channel, WX218xSequenceJumpEventEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_JumpEvent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_JumpEvent(BSTR Channel, WX218xSequenceJumpEventEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_put_JumpEvent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_LengthMax(long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_LengthMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LengthMin(long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_LengthMin(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_LoopCountMax(long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_LoopCountMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_NumberSequenceMax(long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_NumberSequenceMax(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Source(BSTR Channel, WX218xSequenceSourceEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_Source(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Source(BSTR Channel, WX218xSequenceSourceEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_put_Source(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_SyncLock(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_SyncLock(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_SyncLock(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_put_SyncLock(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Timing(BSTR Channel, WX218xSequenceTimingEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_Timing(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Timing(BSTR Channel, WX218xSequenceTimingEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_put_Timing(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_AdvanceSequence(IWX218xArbitrarySequenceAdvanceSequence** val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_AdvanceSequence(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_QuickSequence(long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_QuickSequence(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_QuickSequence(long val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_put_QuickSequence(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Prestep(BSTR Channel, WX218xSequencePrestepEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_Prestep(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Prestep(BSTR Channel, WX218xSequencePrestepEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_put_Prestep(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_OnceCount(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_get_OnceCount(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_OnceCount(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequence_put_OnceCount(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xArbitrarySequence<WX218x> _IWX218xArbitrarySequence;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xArbitrarySequenceAdvanceSequence
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xArbitrarySequenceAdvanceSequence : public IWX218xArbitrarySequenceAdvanceSequence
{
	STDMETHODIMP CreateAdvSequence(SAFEARRAY** SeqHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence(static_cast<Deriving*>(this), SeqHandle, LoopCount, JumpFlag);
	}
	STDMETHODIMP DeleteAdvSequence()
	{
		return ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_DeleteAdvSequence(static_cast<Deriving*>(this));
	}
	STDMETHODIMP CreateAdvSequence1(SAFEARRAY** SeqHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence1(static_cast<Deriving*>(this), SeqHandle, LoopCount, JumpFlag);
	}
	STDMETHODIMP ConfigureOnceCount(BSTR Channel, long Count)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_ConfigureOnceCount(static_cast<Deriving*>(this), Channel, Count);
	}
	STDMETHODIMP get_Mode(BSTR Channel, WX218xAdvanceSequenceModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_get_Mode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Mode(BSTR Channel, WX218xAdvanceSequenceModeEnum val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_put_Mode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_SyncLock(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_get_SyncLock(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_SyncLock(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_put_SyncLock(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_OnceCount(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_get_OnceCount(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_OnceCount(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_put_OnceCount(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xArbitrarySequenceAdvanceSequence<WX218x> _IWX218xArbitrarySequenceAdvanceSequence;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xCarrierModulation
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xCarrierModulation : public IWX218xCarrierModulation
{
	STDMETHODIMP ConfigureCarrFreq(BSTR Channel, double Freq)
	{
		return ForwardingShimImpl::IWX218xCarrierModulation_ConfigureCarrFreq(static_cast<Deriving*>(this), Channel, Freq);
	}
	STDMETHODIMP ConfigureCarrWaveform(BSTR Channel, WX218xCarrierModulationWaveformEnum Waveform)
	{
		return ForwardingShimImpl::IWX218xCarrierModulation_ConfigureCarrWaveform(static_cast<Deriving*>(this), Channel, Waveform);
	}
	STDMETHODIMP get_Frequency(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xCarrierModulation_get_Frequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Frequency(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xCarrierModulation_put_Frequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Waveform(BSTR Channel, WX218xCarrierModulationWaveformEnum* val)
	{
		return ForwardingShimImpl::IWX218xCarrierModulation_get_Waveform(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Waveform(BSTR Channel, WX218xCarrierModulationWaveformEnum val)
	{
		return ForwardingShimImpl::IWX218xCarrierModulation_put_Waveform(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xCarrierModulation<WX218x> _IWX218xCarrierModulation;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xCouple
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xCouple : public IWX218xCouple
{
	STDMETHODIMP ConfigureCoupleEnabled(VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IWX218xCouple_ConfigureCoupleEnabled(static_cast<Deriving*>(this), Enabled);
	}
	STDMETHODIMP ConfigureCoupleOffset(BSTR Channel, long Offset)
	{
		return ForwardingShimImpl::IWX218xCouple_ConfigureCoupleOffset(static_cast<Deriving*>(this), Channel, Offset);
	}
	STDMETHODIMP ConfigureCoupleSkew(double Skew)
	{
		return ForwardingShimImpl::IWX218xCouple_ConfigureCoupleSkew(static_cast<Deriving*>(this), Skew);
	}
	STDMETHODIMP get_Enabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xCouple_get_Enabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Enabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xCouple_put_Enabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Offset(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xCouple_get_Offset(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Offset(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xCouple_put_Offset(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Skew(double* val)
	{
		return ForwardingShimImpl::IWX218xCouple_get_Skew(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Skew(double val)
	{
		return ForwardingShimImpl::IWX218xCouple_put_Skew(static_cast<Deriving*>(this), val);
	}
};

typedef __IWX218xCouple<WX218x> _IWX218xCouple;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xFM
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xFM : public IWX218xFM
{
	STDMETHODIMP ConfigureInternal(double Deviation, WX218xFMInternalWaveformEnum Waveform, double Frequency)
	{
		return ForwardingShimImpl::IWX218xFM_ConfigureInternal(static_cast<Deriving*>(this), Deviation, Waveform, Frequency);
	}
	STDMETHODIMP ConfigureFMEnabled(BSTR Channel, VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IWX218xFM_ConfigureFMEnabled(static_cast<Deriving*>(this), Channel, Enabled);
	}
	STDMETHODIMP ConfigureFMMarker(BSTR Channel, double Marker)
	{
		return ForwardingShimImpl::IWX218xFM_ConfigureFMMarker(static_cast<Deriving*>(this), Channel, Marker);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xFM_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xFM_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_InternalDeviation(double* val)
	{
		return ForwardingShimImpl::IWX218xFM_get_InternalDeviation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalDeviation(double val)
	{
		return ForwardingShimImpl::IWX218xFM_put_InternalDeviation(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InternalFrequency(double* val)
	{
		return ForwardingShimImpl::IWX218xFM_get_InternalFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalFrequency(double val)
	{
		return ForwardingShimImpl::IWX218xFM_put_InternalFrequency(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_InternalWaveform(WX218xFMInternalWaveformEnum* val)
	{
		return ForwardingShimImpl::IWX218xFM_get_InternalWaveform(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_InternalWaveform(WX218xFMInternalWaveformEnum val)
	{
		return ForwardingShimImpl::IWX218xFM_put_InternalWaveform(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Marker(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xFM_get_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Marker(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xFM_put_Marker(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xFM<WX218x> _IWX218xFM;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xMarkers
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xMarkers : public IWX218xMarkers
{
	STDMETHODIMP Refresh(BSTR Channel, long Index)
	{
		return ForwardingShimImpl::IWX218xMarkers_Refresh(static_cast<Deriving*>(this), Channel, Index);
	}
	STDMETHODIMP ConfigureMarkerControl(BSTR Channel, long Index, WX218xMarkerControlEnum Control)
	{
		return ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerControl(static_cast<Deriving*>(this), Channel, Index, Control);
	}
	STDMETHODIMP ConfigureMarkerDelay(BSTR Channel, long Index, double Delay)
	{
		return ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerDelay(static_cast<Deriving*>(this), Channel, Index, Delay);
	}
	STDMETHODIMP ConfigureMarkerEnabled(BSTR Channel, long Index, VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerEnabled(static_cast<Deriving*>(this), Channel, Index, Enabled);
	}
	STDMETHODIMP ConfigureMarkerHighLevel(BSTR Channel, long Index, double HighLevel)
	{
		return ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerHighLevel(static_cast<Deriving*>(this), Channel, Index, HighLevel);
	}
	STDMETHODIMP ConfigureMarkerLowLevel(BSTR Channel, long Index, double LowLevel)
	{
		return ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerLowLevel(static_cast<Deriving*>(this), Channel, Index, LowLevel);
	}
	STDMETHODIMP ConfigureMarkerIndex(BSTR Channel, long Index)
	{
		return ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerIndex(static_cast<Deriving*>(this), Channel, Index);
	}
	STDMETHODIMP ConfigureMarkerPosition(BSTR Channel, long Index, long Position)
	{
		return ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerPosition(static_cast<Deriving*>(this), Channel, Index, Position);
	}
	STDMETHODIMP ConfigureMarkerSource(BSTR Channel, WX218xMarkerSourceEnum Source)
	{
		return ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerSource(static_cast<Deriving*>(this), Channel, Source);
	}
	STDMETHODIMP ConfigureMarkerWidth(BSTR Channel, long Index, long Width)
	{
		return ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerWidth(static_cast<Deriving*>(this), Channel, Index, Width);
	}
	STDMETHODIMP MarkerRefresh(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xMarkers_MarkerRefresh(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP ConfigureMarkerHighLevel4Ch(BSTR Channel, double HighLevel)
	{
		return ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerHighLevel4Ch(static_cast<Deriving*>(this), Channel, HighLevel);
	}
	STDMETHODIMP ConfigureMarkerLowLevel4Ch(BSTR Channel, double LowLevel)
	{
		return ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerLowLevel4Ch(static_cast<Deriving*>(this), Channel, LowLevel);
	}
	STDMETHODIMP get_Delay(BSTR Channel, long Index, double* val)
	{
		return ForwardingShimImpl::IWX218xMarkers_get_Delay(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP put_Delay(BSTR Channel, long Index, double val)
	{
		return ForwardingShimImpl::IWX218xMarkers_put_Delay(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, long Index, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xMarkers_get_Enabled(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, long Index, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xMarkers_put_Enabled(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP get_HighLevel(BSTR Channel, long Index, double* val)
	{
		return ForwardingShimImpl::IWX218xMarkers_get_HighLevel(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP put_HighLevel(BSTR Channel, long Index, double val)
	{
		return ForwardingShimImpl::IWX218xMarkers_put_HighLevel(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP get_LowLevel(BSTR Channel, long Index, double* val)
	{
		return ForwardingShimImpl::IWX218xMarkers_get_LowLevel(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP put_LowLevel(BSTR Channel, long Index, double val)
	{
		return ForwardingShimImpl::IWX218xMarkers_put_LowLevel(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP get_Position(BSTR Channel, long Index, long* val)
	{
		return ForwardingShimImpl::IWX218xMarkers_get_Position(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP put_Position(BSTR Channel, long Index, long val)
	{
		return ForwardingShimImpl::IWX218xMarkers_put_Position(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP get_Width(BSTR Channel, long Index, long* val)
	{
		return ForwardingShimImpl::IWX218xMarkers_get_Width(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP put_Width(BSTR Channel, long Index, long val)
	{
		return ForwardingShimImpl::IWX218xMarkers_put_Width(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP get_Control(BSTR Channel, long Index, WX218xMarkerControlEnum* val)
	{
		return ForwardingShimImpl::IWX218xMarkers_get_Control(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP put_Control(BSTR Channel, long Index, WX218xMarkerControlEnum val)
	{
		return ForwardingShimImpl::IWX218xMarkers_put_Control(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP get_MarkerIndex(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xMarkers_get_MarkerIndex(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_MarkerIndex(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xMarkers_put_MarkerIndex(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Source(BSTR Channel, WX218xMarkerSourceEnum* val)
	{
		return ForwardingShimImpl::IWX218xMarkers_get_Source(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Source(BSTR Channel, WX218xMarkerSourceEnum val)
	{
		return ForwardingShimImpl::IWX218xMarkers_put_Source(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_HighLevel4Ch(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xMarkers_get_HighLevel4Ch(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_HighLevel4Ch(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xMarkers_put_HighLevel4Ch(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_LowLevel4Ch(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xMarkers_get_LowLevel4Ch(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_LowLevel4Ch(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xMarkers_put_LowLevel4Ch(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xMarkers<WX218x> _IWX218xMarkers;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xTrigger
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xTrigger : public IWX218xTrigger
{
	STDMETHODIMP SendSoftwareTrigger()
	{
		return ForwardingShimImpl::IWX218xTrigger_SendSoftwareTrigger(static_cast<Deriving*>(this));
	}
	STDMETHODIMP SetECLLevel(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xTrigger_SetECLLevel(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetTTLLevel(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xTrigger_SetTTLLevel(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP ConfigureBurstCount(BSTR Channel, long Count)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureBurstCount(static_cast<Deriving*>(this), Channel, Count);
	}
	STDMETHODIMP ConfigureTriggerDelay(BSTR Channel, long Delay)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerDelay(static_cast<Deriving*>(this), Channel, Delay);
	}
	STDMETHODIMP ConfigureTriggerLevel(BSTR Channel, double Level)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerLevel(static_cast<Deriving*>(this), Channel, Level);
	}
	STDMETHODIMP ConfigureTriggerTimerDelay(BSTR Channel, long TimerDelay)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerTimerDelay(static_cast<Deriving*>(this), Channel, TimerDelay);
	}
	STDMETHODIMP ConfigureTriggerTimerTime(BSTR Channel, double TimerTime)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerTimerTime(static_cast<Deriving*>(this), Channel, TimerTime);
	}
	STDMETHODIMP ConfigureTrigContMode(BSTR Channel, WX218xContinuousModeEnum ContMode)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureTrigContMode(static_cast<Deriving*>(this), Channel, ContMode);
	}
	STDMETHODIMP ConfigureTrigContSource(BSTR Channel, WX218xContinuousSourceEnum Source)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureTrigContSource(static_cast<Deriving*>(this), Channel, Source);
	}
	STDMETHODIMP ConfigureTrigSlope(BSTR Channel, WX218xTriggerSlopeEnum Slope)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureTrigSlope(static_cast<Deriving*>(this), Channel, Slope);
	}
	STDMETHODIMP ConfigureTrigSource(BSTR Channel, WX218xTriggerSourceEnum Source)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureTrigSource(static_cast<Deriving*>(this), Channel, Source);
	}
	STDMETHODIMP ConfigureTrigTimerMode(BSTR Channel, WX218xTriggerTimerModeEnum TimerMode)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureTrigTimerMode(static_cast<Deriving*>(this), Channel, TimerMode);
	}
	STDMETHODIMP ConfigureTriggerMode(BSTR Channel, WX218xTriggerModeEnum Mode)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerMode(static_cast<Deriving*>(this), Channel, Mode);
	}
	STDMETHODIMP ConfigureTriggerImpedance(WX218xTriggerImpedanceEnum TriggerImpedance)
	{
		return ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerImpedance(static_cast<Deriving*>(this), TriggerImpedance);
	}
	STDMETHODIMP get_BurstCount(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_BurstCount(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_BurstCount(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_BurstCount(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_ContinuousMode(BSTR Channel, WX218xContinuousModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_ContinuousMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_ContinuousMode(BSTR Channel, WX218xContinuousModeEnum val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_ContinuousMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_ContinuousSource(BSTR Channel, WX218xContinuousSourceEnum* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_ContinuousSource(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_ContinuousSource(BSTR Channel, WX218xContinuousSourceEnum val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_ContinuousSource(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Delay(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_Delay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Delay(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_Delay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Level(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_Level(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Level(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_Level(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Slope(BSTR Channel, WX218xTriggerSlopeEnum* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_Slope(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Slope(BSTR Channel, WX218xTriggerSlopeEnum val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_Slope(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Source(BSTR Channel, WX218xTriggerSourceEnum* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_Source(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Source(BSTR Channel, WX218xTriggerSourceEnum val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_Source(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_TimerDelay(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_TimerDelay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_TimerDelay(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_TimerDelay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_TimerMode(BSTR Channel, WX218xTriggerTimerModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_TimerMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_TimerMode(BSTR Channel, WX218xTriggerTimerModeEnum val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_TimerMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_TimerTime(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_TimerTime(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_TimerTime(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_TimerTime(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_TriggerMode(BSTR Channel, WX218xTriggerModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_TriggerMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_TriggerMode(BSTR Channel, WX218xTriggerModeEnum val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_TriggerMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_ARM(IWX218xTriggerARM** val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_ARM(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_SmartTrigger(IWX218xTriggerSmartTrigger** val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_SmartTrigger(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TriggerImpedance(WX218xTriggerImpedanceEnum* val)
	{
		return ForwardingShimImpl::IWX218xTrigger_get_TriggerImpedance(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TriggerImpedance(WX218xTriggerImpedanceEnum val)
	{
		return ForwardingShimImpl::IWX218xTrigger_put_TriggerImpedance(static_cast<Deriving*>(this), val);
	}
};

typedef __IWX218xTrigger<WX218x> _IWX218xTrigger;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xTriggerARM
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xTriggerARM : public IWX218xTriggerARM
{
	STDMETHODIMP SetECLLevel(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xTriggerARM_SetECLLevel(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetTtlLevel(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xTriggerARM_SetTtlLevel(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP ConfigureTrigARMLevel(BSTR Channel, double Level)
	{
		return ForwardingShimImpl::IWX218xTriggerARM_ConfigureTrigARMLevel(static_cast<Deriving*>(this), Channel, Level);
	}
	STDMETHODIMP ConfigureTrigARMSlope(BSTR Channel, WX218xArmSlopeEnum Slope)
	{
		return ForwardingShimImpl::IWX218xTriggerARM_ConfigureTrigARMSlope(static_cast<Deriving*>(this), Channel, Slope);
	}
	STDMETHODIMP get_Level(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xTriggerARM_get_Level(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Level(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xTriggerARM_put_Level(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Slope(BSTR Channel, WX218xArmSlopeEnum* val)
	{
		return ForwardingShimImpl::IWX218xTriggerARM_get_Slope(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Slope(BSTR Channel, WX218xArmSlopeEnum val)
	{
		return ForwardingShimImpl::IWX218xTriggerARM_put_Slope(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xTriggerARM<WX218x> _IWX218xTriggerARM;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xTriggerSmartTrigger
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xTriggerSmartTrigger : public IWX218xTriggerSmartTrigger
{
	STDMETHODIMP ConfigureSmartTrigHiPassEnabled(BSTR Channel, VARIANT_BOOL State)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassEnabled(static_cast<Deriving*>(this), Channel, State);
	}
	STDMETHODIMP ConfigureSmartTrigHiPassWidth(BSTR Channel, double Width)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassWidth(static_cast<Deriving*>(this), Channel, Width);
	}
	STDMETHODIMP ConfigureSmartTrigHoldoff(BSTR Channel, double Holdoff)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoff(static_cast<Deriving*>(this), Channel, Holdoff);
	}
	STDMETHODIMP ConfigureSmartTrigHoldoffState(BSTR Channel, VARIANT_BOOL State)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoffState(static_cast<Deriving*>(this), Channel, State);
	}
	STDMETHODIMP ConfigureSmartTrigLowPassState(BSTR Channel, VARIANT_BOOL State)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassState(static_cast<Deriving*>(this), Channel, State);
	}
	STDMETHODIMP ConfigureSmartTrigLowPassWidth(BSTR Channel, double Width)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassWidth(static_cast<Deriving*>(this), Channel, Width);
	}
	STDMETHODIMP get_HiPassEnabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_HiPassEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_HiPassEnabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_HiPassEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_HiPassWidth(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_HiPassWidth(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_HiPassWidth(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_HiPassWidth(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Holdoff(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_Holdoff(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Holdoff(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_Holdoff(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_HoldoffEnabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_HoldoffEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_HoldoffEnabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_HoldoffEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_LowPassEnabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_LowPassEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_LowPassEnabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_LowPassEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_LowPassWidth(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_LowPassWidth(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_LowPassWidth(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_LowPassWidth(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xTriggerSmartTrigger<WX218x> _IWX218xTriggerSmartTrigger;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xStateStorage
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xStateStorage : public IWX218xStateStorage
{
	STDMETHODIMP Clear()
	{
		return ForwardingShimImpl::IWX218xStateStorage_Clear(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Load()
	{
		return ForwardingShimImpl::IWX218xStateStorage_Load(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Recall(long Cell, WX218xStateStorageTargetEnum Target)
	{
		return ForwardingShimImpl::IWX218xStateStorage_Recall(static_cast<Deriving*>(this), Cell, Target);
	}
	STDMETHODIMP Save()
	{
		return ForwardingShimImpl::IWX218xStateStorage_Save(static_cast<Deriving*>(this));
	}
	STDMETHODIMP Store(long Cell, WX218xStateStorageConfigurationEnum Configuration, WX218xStateStorageTargetEnum Target)
	{
		return ForwardingShimImpl::IWX218xStateStorage_Store(static_cast<Deriving*>(this), Cell, Configuration, Target);
	}
	STDMETHODIMP get_CellRecall(long* val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_get_CellRecall(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_CellRecall(long val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_put_CellRecall(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_CellStore(long* val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_get_CellStore(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_CellStore(long val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_put_CellStore(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ConfigurationStore(WX218xStateStorageConfigurationEnum* val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_get_ConfigurationStore(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ConfigurationStore(WX218xStateStorageConfigurationEnum val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_put_ConfigurationStore(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TargetRecall(WX218xStateStorageTargetEnum* val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_get_TargetRecall(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TargetRecall(WX218xStateStorageTargetEnum val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_put_TargetRecall(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_TargetStore(WX218xStateStorageTargetEnum* val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_get_TargetStore(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_TargetStore(WX218xStateStorageTargetEnum val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_put_TargetStore(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ConfigurationRecall(WX218xStateStorageRecalConfigurationEnum* val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_get_ConfigurationRecall(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_StoreEnabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_get_StoreEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_StoreEnabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_put_StoreEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_RecallEnabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_get_RecallEnabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_RecallEnabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xStateStorage_put_RecallEnabled(static_cast<Deriving*>(this), val);
	}
};

typedef __IWX218xStateStorage<WX218x> _IWX218xStateStorage;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xXInstrument
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xXInstrument : public IWX218xXInstrument
{
	STDMETHODIMP ConfigureXInstrumentEnabled(VARIANT_BOOL State)
	{
		return ForwardingShimImpl::IWX218xXInstrument_ConfigureXInstrumentEnabled(static_cast<Deriving*>(this), State);
	}
	STDMETHODIMP ConfigureXInstrumentMode(WX218xXInstrumentModeEnum Mode)
	{
		return ForwardingShimImpl::IWX218xXInstrument_ConfigureXInstrumentMode(static_cast<Deriving*>(this), Mode);
	}
	STDMETHODIMP ConfigureXInstrumentModeAdv(WX218xXInstrumentModeAdvEnum ModeAdv)
	{
		return ForwardingShimImpl::IWX218xXInstrument_ConfigureXInstrumentModeAdv(static_cast<Deriving*>(this), ModeAdv);
	}
	STDMETHODIMP ConfigureXInstrumentOffset(long Offset)
	{
		return ForwardingShimImpl::IWX218xXInstrument_ConfigureXInstrumentOffset(static_cast<Deriving*>(this), Offset);
	}
	STDMETHODIMP get_Enabled(VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xXInstrument_get_Enabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Enabled(VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xXInstrument_put_Enabled(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Mode(WX218xXInstrumentModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xXInstrument_get_Mode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Mode(WX218xXInstrumentModeEnum val)
	{
		return ForwardingShimImpl::IWX218xXInstrument_put_Mode(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_Offset(long* val)
	{
		return ForwardingShimImpl::IWX218xXInstrument_get_Offset(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_Offset(long val)
	{
		return ForwardingShimImpl::IWX218xXInstrument_put_Offset(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_ModeAdv(WX218xXInstrumentModeAdvEnum* val)
	{
		return ForwardingShimImpl::IWX218xXInstrument_get_ModeAdv(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_ModeAdv(WX218xXInstrumentModeAdvEnum val)
	{
		return ForwardingShimImpl::IWX218xXInstrument_put_ModeAdv(static_cast<Deriving*>(this), val);
	}
};

typedef __IWX218xXInstrument<WX218x> _IWX218xXInstrument;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xDigitalPulse
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xDigitalPulse : public IWX218xDigitalPulse
{
	STDMETHODIMP SetAmplitudeMax(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_SetAmplitudeMax(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetAmplitudeMin(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_SetAmplitudeMin(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetOffsetMax(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_SetOffsetMax(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP SetOffsetMin(BSTR Channel)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_SetOffsetMin(static_cast<Deriving*>(this), Channel);
	}
	STDMETHODIMP ConfigureDigPulseAmplitude(BSTR Channel, double Amplitude)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseAmplitude(static_cast<Deriving*>(this), Channel, Amplitude);
	}
	STDMETHODIMP ConfigureDigPulseDelay(BSTR Channel, double Delay)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseDelay(static_cast<Deriving*>(this), Channel, Delay);
	}
	STDMETHODIMP ConfigureDigPulseDelayPercent(BSTR Channel, double DelayPercent)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseDelayPercent(static_cast<Deriving*>(this), Channel, DelayPercent);
	}
	STDMETHODIMP ConfigureDigPulseDoubleDelay(BSTR Channel, double DoubleDelay)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseDoubleDelay(static_cast<Deriving*>(this), Channel, DoubleDelay);
	}
	STDMETHODIMP ConfigureDigPulseDoubleDelayPercent(BSTR Channel, double DoubleDelayPercent)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseDoubleDelayPercent(static_cast<Deriving*>(this), Channel, DoubleDelayPercent);
	}
	STDMETHODIMP ConfigureDigPulseFallTime(BSTR Channel, double FallTime)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseFallTime(static_cast<Deriving*>(this), Channel, FallTime);
	}
	STDMETHODIMP ConfigureDigPulseFallTimePercent(BSTR Channel, double FallTimePercent)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseFallTimePercent(static_cast<Deriving*>(this), Channel, FallTimePercent);
	}
	STDMETHODIMP ConfigureDigPulseHighLevel(BSTR Channel, double HighLevel)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseHighLevel(static_cast<Deriving*>(this), Channel, HighLevel);
	}
	STDMETHODIMP ConfigureDigPulseLevelControl(BSTR Channel, WX218xPulseLevelControlEnum LevelControl)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseLevelControl(static_cast<Deriving*>(this), Channel, LevelControl);
	}
	STDMETHODIMP ConfigureDigPulseLowLevel(BSTR Channel, double LowLevel)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseLowLevel(static_cast<Deriving*>(this), Channel, LowLevel);
	}
	STDMETHODIMP ConfigureDigPulseMode(BSTR Channel, WX218xPulseModeEnum Mode)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseMode(static_cast<Deriving*>(this), Channel, Mode);
	}
	STDMETHODIMP ConfigureDigPulseOffset(BSTR Channel, double Offset)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseOffset(static_cast<Deriving*>(this), Channel, Offset);
	}
	STDMETHODIMP ConfigureDigPulsePeriod(BSTR Channel, double Period)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulsePeriod(static_cast<Deriving*>(this), Channel, Period);
	}
	STDMETHODIMP ConfigureDigPulsePolarity(BSTR Channel, WX218xPulsePolarityEnum Polarity)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulsePolarity(static_cast<Deriving*>(this), Channel, Polarity);
	}
	STDMETHODIMP ConfigureDigPulseRiseTime(BSTR Channel, double RiseTime)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseRiseTime(static_cast<Deriving*>(this), Channel, RiseTime);
	}
	STDMETHODIMP ConfigureRiseTimePercent(BSTR Channel, double RiseTimePercent)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureRiseTimePercent(static_cast<Deriving*>(this), Channel, RiseTimePercent);
	}
	STDMETHODIMP ConfigureDigPulseTransition(BSTR Channel, WX218xPulseTransitionEnum Transition)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseTransition(static_cast<Deriving*>(this), Channel, Transition);
	}
	STDMETHODIMP ConfigureDigPulseWidth(BSTR Channel, double Width)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseWidth(static_cast<Deriving*>(this), Channel, Width);
	}
	STDMETHODIMP ConfigureDigPulseWidthPercent(BSTR Channel, double WidthPercent)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseWidthPercent(static_cast<Deriving*>(this), Channel, WidthPercent);
	}
	STDMETHODIMP get_Amplitude(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_Amplitude(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Amplitude(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_Amplitude(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Configure(BSTR Channel, WX218xPulseConfigureEnum* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_Configure(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Configure(BSTR Channel, WX218xPulseConfigureEnum val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_Configure(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Delay(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_Delay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Delay(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_Delay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_DelayPercent(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_DelayPercent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_DelayPercent(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_DelayPercent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_DoubleDelay(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_DoubleDelay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_DoubleDelay(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_DoubleDelay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_DoubleDelayPercent(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_DoubleDelayPercent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_DoubleDelayPercent(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_DoubleDelayPercent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_FallTime(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_FallTime(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_FallTime(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_FallTime(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_FallTimePercent(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_FallTimePercent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_FallTimePercent(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_FallTimePercent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_HighLevel(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_HighLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_HighLevel(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_HighLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_LevelControl(BSTR Channel, WX218xPulseLevelControlEnum* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_LevelControl(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_LevelControl(BSTR Channel, WX218xPulseLevelControlEnum val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_LevelControl(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_LowLevel(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_LowLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_LowLevel(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_LowLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Mode(BSTR Channel, WX218xPulseModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_Mode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Mode(BSTR Channel, WX218xPulseModeEnum val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_Mode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Offset(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_Offset(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Offset(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_Offset(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Period(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_Period(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Period(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_Period(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Polarity(BSTR Channel, WX218xPulsePolarityEnum* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_Polarity(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Polarity(BSTR Channel, WX218xPulsePolarityEnum val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_Polarity(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_RiseTime(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_RiseTime(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_RiseTime(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_RiseTime(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_RiseTimePercent(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_RiseTimePercent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_RiseTimePercent(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_RiseTimePercent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Transition(BSTR Channel, WX218xPulseTransitionEnum* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_Transition(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Transition(BSTR Channel, WX218xPulseTransitionEnum val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_Transition(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Width(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_Width(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Width(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_Width(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_WidthPercent(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_get_WidthPercent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_WidthPercent(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPulse_put_WidthPercent(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xDigitalPulse<WX218x> _IWX218xDigitalPulse;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xSweep
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xSweep : public IWX218xSweep
{
	STDMETHODIMP ConfigureSweepDirection(BSTR Channel, WX218xSweepDirectionEnum Direction)
	{
		return ForwardingShimImpl::IWX218xSweep_ConfigureSweepDirection(static_cast<Deriving*>(this), Channel, Direction);
	}
	STDMETHODIMP ConfigureSweepState(BSTR Channel, VARIANT_BOOL State)
	{
		return ForwardingShimImpl::IWX218xSweep_ConfigureSweepState(static_cast<Deriving*>(this), Channel, State);
	}
	STDMETHODIMP ConfigureSweepFreqStart(BSTR Channel, double FreqStart)
	{
		return ForwardingShimImpl::IWX218xSweep_ConfigureSweepFreqStart(static_cast<Deriving*>(this), Channel, FreqStart);
	}
	STDMETHODIMP ConfigureSweepFreqStop(BSTR Channel, double FreqStop)
	{
		return ForwardingShimImpl::IWX218xSweep_ConfigureSweepFreqStop(static_cast<Deriving*>(this), Channel, FreqStop);
	}
	STDMETHODIMP ConfigureSweepMarker(BSTR Channel, double Marker)
	{
		return ForwardingShimImpl::IWX218xSweep_ConfigureSweepMarker(static_cast<Deriving*>(this), Channel, Marker);
	}
	STDMETHODIMP ConfigureSweepSpacing(BSTR Channel, WX218xSweepSpacingEnum Spacing)
	{
		return ForwardingShimImpl::IWX218xSweep_ConfigureSweepSpacing(static_cast<Deriving*>(this), Channel, Spacing);
	}
	STDMETHODIMP ConfigureSweepTime(BSTR Channel, double Time)
	{
		return ForwardingShimImpl::IWX218xSweep_ConfigureSweepTime(static_cast<Deriving*>(this), Channel, Time);
	}
	STDMETHODIMP get_Direction(BSTR Channel, WX218xSweepDirectionEnum* val)
	{
		return ForwardingShimImpl::IWX218xSweep_get_Direction(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Direction(BSTR Channel, WX218xSweepDirectionEnum val)
	{
		return ForwardingShimImpl::IWX218xSweep_put_Direction(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xSweep_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xSweep_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_FrequencyStart(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xSweep_get_FrequencyStart(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_FrequencyStart(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xSweep_put_FrequencyStart(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_FrequencyStop(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xSweep_get_FrequencyStop(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_FrequencyStop(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xSweep_put_FrequencyStop(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Marker(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xSweep_get_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Marker(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xSweep_put_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Spacing(BSTR Channel, WX218xSweepSpacingEnum* val)
	{
		return ForwardingShimImpl::IWX218xSweep_get_Spacing(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Spacing(BSTR Channel, WX218xSweepSpacingEnum val)
	{
		return ForwardingShimImpl::IWX218xSweep_put_Spacing(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Time(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xSweep_get_Time(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Time(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xSweep_put_Time(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xSweep<WX218x> _IWX218xSweep;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xDigitalPatternOutput
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xDigitalPatternOutput : public IWX218xDigitalPatternOutput
{
	STDMETHODIMP CreateDigPatternData(BSTR Channel, SAFEARRAY** Data, long Segment)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_CreateDigPatternData(static_cast<Deriving*>(this), Channel, Data, Segment);
	}
	STDMETHODIMP LoadDigitalPatternFromFile(BSTR Channel, BSTR FileName, long Segment)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_LoadDigitalPatternFromFile(static_cast<Deriving*>(this), Channel, FileName, Segment);
	}
	STDMETHODIMP CreateDigPatternParamData(BSTR Channel, SAFEARRAY** State, SAFEARRAY** Delay, SAFEARRAY** HighLevel, SAFEARRAY** LowLevel)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_CreateDigPatternParamData(static_cast<Deriving*>(this), Channel, State, Delay, HighLevel, LowLevel);
	}
	STDMETHODIMP CreateDigPatternParamData1(BSTR Channel, SAFEARRAY** State, SAFEARRAY** Delay, SAFEARRAY** HighLevel, SAFEARRAY** LowLevel)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_CreateDigPatternParamData1(static_cast<Deriving*>(this), Channel, State, Delay, HighLevel, LowLevel);
	}
	STDMETHODIMP ConfigureDigPattArbResolution(BSTR Channel, WX218xArbitraryResolutionEnum ArbResolution)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattArbResolution(static_cast<Deriving*>(this), Channel, ArbResolution);
	}
	STDMETHODIMP ConfigureDigPattBitDelay(BSTR Channel, long BitIndex, double BitDelay)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattBitDelay(static_cast<Deriving*>(this), Channel, BitIndex, BitDelay);
	}
	STDMETHODIMP ConfigureDigPattBitEnabled(BSTR Channel, long BitIndex, VARIANT_BOOL BitEnabled)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattBitEnabled(static_cast<Deriving*>(this), Channel, BitIndex, BitEnabled);
	}
	STDMETHODIMP ConfigureDigPattBitHighLevel(BSTR Channel, long BitIndex, double BitHighLevel)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattBitHighLevel(static_cast<Deriving*>(this), Channel, BitIndex, BitHighLevel);
	}
	STDMETHODIMP ConfigureDigPattBitLowLevel(BSTR Channel, long BitIndex, double BitLowLevel)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattBitLowLevel(static_cast<Deriving*>(this), Channel, BitIndex, BitLowLevel);
	}
	STDMETHODIMP ConfigureDigPattDelay(BSTR Channel, double Delay)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattDelay(static_cast<Deriving*>(this), Channel, Delay);
	}
	STDMETHODIMP ConfigureDigPattDelayMode(BSTR Channel, WX218xDigPatternDelayModeEnum DelayMode)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattDelayMode(static_cast<Deriving*>(this), Channel, DelayMode);
	}
	STDMETHODIMP ConfigureDigPattEmphasisEnabled(BSTR Channel, VARIANT_BOOL EmphasisEnabled)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattEmphasisEnabled(static_cast<Deriving*>(this), Channel, EmphasisEnabled);
	}
	STDMETHODIMP ConfigureDigPattEnabled(BSTR Channel, VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattEnabled(static_cast<Deriving*>(this), Channel, Enabled);
	}
	STDMETHODIMP ConfigureDigPattFormatData(BSTR Channel, WX218xDigFormatDataEnum FormatData)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattFormatData(static_cast<Deriving*>(this), Channel, FormatData);
	}
	STDMETHODIMP ConfigureDigPattHighLevel(BSTR Channel, double HighLevel)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattHighLevel(static_cast<Deriving*>(this), Channel, HighLevel);
	}
	STDMETHODIMP ConfigureDigPattLevelMode(BSTR Channel, WX218xDigPatternLevelModeEnum LevelMode)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattLevelMode(static_cast<Deriving*>(this), Channel, LevelMode);
	}
	STDMETHODIMP ConfigureDigPattLowLevel(BSTR Channel, double LowLevel)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattLowLevel(static_cast<Deriving*>(this), Channel, LowLevel);
	}
	STDMETHODIMP LoadDigitalDataBinaryFile(BSTR FileName, long Segment)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_LoadDigitalDataBinaryFile(static_cast<Deriving*>(this), FileName, Segment);
	}
	STDMETHODIMP LoadDigitalDataAsciiFile(BSTR FileName, long Segment)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_LoadDigitalDataAsciiFile(static_cast<Deriving*>(this), FileName, Segment);
	}
	STDMETHODIMP ConfigureDigClock(WX218xDigitalClockEnum DigClock)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigClock(static_cast<Deriving*>(this), DigClock);
	}
	STDMETHODIMP ConfigureDigPattDigPort(WX218xDigPortEnum DigPort)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattDigPort(static_cast<Deriving*>(this), DigPort);
	}
	STDMETHODIMP get_BitDelay(BSTR Channel, long Index, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_BitDelay(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP put_BitDelay(BSTR Channel, long Index, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_BitDelay(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP get_BitHighLevel(BSTR Channel, long Index, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_BitHighLevel(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP put_BitHighLevel(BSTR Channel, long Index, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_BitHighLevel(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP get_BitLowLevel(BSTR Channel, long Index, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_BitLowLevel(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP put_BitLowLevel(BSTR Channel, long Index, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_BitLowLevel(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP get_DelayMode(BSTR Channel, WX218xDigPatternDelayModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_DelayMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_DelayMode(BSTR Channel, WX218xDigPatternDelayModeEnum val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_DelayMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_LevelMode(BSTR Channel, WX218xDigPatternLevelModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_LevelMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_LevelMode(BSTR Channel, WX218xDigPatternLevelModeEnum val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_LevelMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_BitEnabled(BSTR Channel, long Index, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_BitEnabled(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP put_BitEnabled(BSTR Channel, long Index, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_BitEnabled(static_cast<Deriving*>(this), Channel, Index, val);
	}
	STDMETHODIMP get_Delay(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_Delay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Delay(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_Delay(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_HighLevel(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_HighLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_HighLevel(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_HighLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_LowLevel(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_LowLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_LowLevel(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_LowLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_PodPresent(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_PodPresent(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_EmphasisEnabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_EmphasisEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_EmphasisEnabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_EmphasisEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_FormatData(BSTR Channel, WX218xDigFormatDataEnum* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_FormatData(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_FormatData(BSTR Channel, WX218xDigFormatDataEnum val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_FormatData(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_ArbResolution(BSTR Channel, WX218xArbitraryResolutionEnum* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_ArbResolution(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_ArbResolution(BSTR Channel, WX218xArbitraryResolutionEnum val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_ArbResolution(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_DigClock(WX218xDigitalClockEnum* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_DigClock(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DigClock(WX218xDigitalClockEnum val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_DigClock(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP get_DigPort(WX218xDigPortEnum* val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_get_DigPort(static_cast<Deriving*>(this), val);
	}
	STDMETHODIMP put_DigPort(WX218xDigPortEnum val)
	{
		return ForwardingShimImpl::IWX218xDigitalPatternOutput_put_DigPort(static_cast<Deriving*>(this), val);
	}
};

typedef __IWX218xDigitalPatternOutput<WX218x> _IWX218xDigitalPatternOutput;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xCHIRP
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xCHIRP : public IWX218xCHIRP
{
	STDMETHODIMP ConfigureChirpAmplDepth(BSTR Channel, double AmplDepth)
	{
		return ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpAmplDepth(static_cast<Deriving*>(this), Channel, AmplDepth);
	}
	STDMETHODIMP ConfigureChirpEnabled(BSTR Channel, VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpEnabled(static_cast<Deriving*>(this), Channel, Enabled);
	}
	STDMETHODIMP ConfigureChirpFreqDirection(BSTR Channel, WX218xChirpFreqDirectionEnum FreqDirection)
	{
		return ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpFreqDirection(static_cast<Deriving*>(this), Channel, FreqDirection);
	}
	STDMETHODIMP ConfigureChirpFreqSpacing(BSTR Channel, WX218xChirpFreqSpacingEnum FreqSpacing)
	{
		return ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpFreqSpacing(static_cast<Deriving*>(this), Channel, FreqSpacing);
	}
	STDMETHODIMP ConfigureChirpMarkerFreq(BSTR Channel, double MarkerFreq)
	{
		return ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpMarkerFreq(static_cast<Deriving*>(this), Channel, MarkerFreq);
	}
	STDMETHODIMP ConfigureChirpRepetition(BSTR Channel, double Repetition)
	{
		return ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpRepetition(static_cast<Deriving*>(this), Channel, Repetition);
	}
	STDMETHODIMP ConfigureChirpStartFreq(BSTR Channel, double StartFreq)
	{
		return ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpStartFreq(static_cast<Deriving*>(this), Channel, StartFreq);
	}
	STDMETHODIMP ConfigureChirpStopFreq(BSTR Channel, double StopFreq)
	{
		return ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpStopFreq(static_cast<Deriving*>(this), Channel, StopFreq);
	}
	STDMETHODIMP ConfigureChirpWidth(BSTR Channel, double Width)
	{
		return ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpWidth(static_cast<Deriving*>(this), Channel, Width);
	}
	STDMETHODIMP ConfigureChirpAmplDirection(BSTR Channel, WX218xChirpAmplitudeDirectionEnum AmplDirection)
	{
		return ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpAmplDirection(static_cast<Deriving*>(this), Channel, AmplDirection);
	}
	STDMETHODIMP ConfigureChirpAmplSpacing(BSTR Channel, WX218xChirpAmplSpacingEnum AmplSpacing)
	{
		return ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpAmplSpacing(static_cast<Deriving*>(this), Channel, AmplSpacing);
	}
	STDMETHODIMP get_Width(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_get_Width(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Width(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_put_Width(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Repetition(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_get_Repetition(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Repetition(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_put_Repetition(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_StartFrequency(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_get_StartFrequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_StartFrequency(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_put_StartFrequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_StopFrequency(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_get_StopFrequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_StopFrequency(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_put_StopFrequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_MarkerFrequency(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_get_MarkerFrequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_MarkerFrequency(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_put_MarkerFrequency(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_AmplDepth(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_get_AmplDepth(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_AmplDepth(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_put_AmplDepth(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_FreqDirection(BSTR Channel, WX218xChirpFreqDirectionEnum* val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_get_FreqDirection(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_FreqDirection(BSTR Channel, WX218xChirpFreqDirectionEnum val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_put_FreqDirection(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_FreqSpacing(BSTR Channel, WX218xChirpFreqSpacingEnum* val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_get_FreqSpacing(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_FreqSpacing(BSTR Channel, WX218xChirpFreqSpacingEnum val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_put_FreqSpacing(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_AmplDirection(BSTR Channel, WX218xChirpAmplitudeDirectionEnum* val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_get_AmplDirection(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_AmplDirection(BSTR Channel, WX218xChirpAmplitudeDirectionEnum val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_put_AmplDirection(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_AmplSpacing(BSTR Channel, WX218xChirpAmplSpacingEnum* val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_get_AmplSpacing(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_AmplSpacing(BSTR Channel, WX218xChirpAmplSpacingEnum val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_put_AmplSpacing(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xCHIRP_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xCHIRP<WX218x> _IWX218xCHIRP;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xFSK
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xFSK : public IWX218xFSK
{
	STDMETHODIMP CreateFSKData(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xFSK_CreateFSKData(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP LoadFSKDataFile(BSTR Channel, BSTR FileName)
	{
		return ForwardingShimImpl::IWX218xFSK_LoadFSKDataFile(static_cast<Deriving*>(this), Channel, FileName);
	}
	STDMETHODIMP CreateFSKDataAdv(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xFSK_CreateFSKDataAdv(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP ConfigureFSKBaud(BSTR Channel, double Baud)
	{
		return ForwardingShimImpl::IWX218xFSK_ConfigureFSKBaud(static_cast<Deriving*>(this), Channel, Baud);
	}
	STDMETHODIMP ConfigureFSKEnabled(BSTR Channel, VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IWX218xFSK_ConfigureFSKEnabled(static_cast<Deriving*>(this), Channel, Enabled);
	}
	STDMETHODIMP ConfigureFSKMarker(BSTR Channel, long Marker)
	{
		return ForwardingShimImpl::IWX218xFSK_ConfigureFSKMarker(static_cast<Deriving*>(this), Channel, Marker);
	}
	STDMETHODIMP ConfigureFSKShiftFreq(BSTR Channel, double ShiftFreq)
	{
		return ForwardingShimImpl::IWX218xFSK_ConfigureFSKShiftFreq(static_cast<Deriving*>(this), Channel, ShiftFreq);
	}
	STDMETHODIMP get_ShiftFreq(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xFSK_get_ShiftFreq(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_ShiftFreq(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xFSK_put_ShiftFreq(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Baud(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xFSK_get_Baud(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Baud(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xFSK_put_Baud(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Marker(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xFSK_get_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Marker(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xFSK_put_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xFSK_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xFSK_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xFSK<WX218x> _IWX218xFSK;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xASK
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xASK : public IWX218xASK
{
	STDMETHODIMP CreateASKData(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xASK_CreateASKData(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP LoadASKDataFile(BSTR Channel, BSTR FileName)
	{
		return ForwardingShimImpl::IWX218xASK_LoadASKDataFile(static_cast<Deriving*>(this), Channel, FileName);
	}
	STDMETHODIMP CreateASKDataAdv(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xASK_CreateASKDataAdv(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP ConfigureASKBaud(BSTR Channel, double Baud)
	{
		return ForwardingShimImpl::IWX218xASK_ConfigureASKBaud(static_cast<Deriving*>(this), Channel, Baud);
	}
	STDMETHODIMP ConfigureASKEnabled(BSTR Channel, VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IWX218xASK_ConfigureASKEnabled(static_cast<Deriving*>(this), Channel, Enabled);
	}
	STDMETHODIMP ConfigureASKMarker(BSTR Channel, long Marker)
	{
		return ForwardingShimImpl::IWX218xASK_ConfigureASKMarker(static_cast<Deriving*>(this), Channel, Marker);
	}
	STDMETHODIMP ConfigureASKShiftAmplitude(BSTR Channel, double ShiftAmpl)
	{
		return ForwardingShimImpl::IWX218xASK_ConfigureASKShiftAmplitude(static_cast<Deriving*>(this), Channel, ShiftAmpl);
	}
	STDMETHODIMP ConfigureASKStartAmplitude(BSTR Channel, double StartAmpl)
	{
		return ForwardingShimImpl::IWX218xASK_ConfigureASKStartAmplitude(static_cast<Deriving*>(this), Channel, StartAmpl);
	}
	STDMETHODIMP get_StartAmplitude(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xASK_get_StartAmplitude(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_StartAmplitude(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xASK_put_StartAmplitude(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_ShiftAmplitude(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xASK_get_ShiftAmplitude(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_ShiftAmplitude(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xASK_put_ShiftAmplitude(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Baud(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xASK_get_Baud(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Baud(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xASK_put_Baud(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Marker(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xASK_get_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Marker(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xASK_put_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xASK_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xASK_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xASK<WX218x> _IWX218xASK;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xFHOP
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xFHOP : public IWX218xFHOP
{
	STDMETHODIMP CreateFHOPFixedData(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xFHOP_CreateFHOPFixedData(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP CreateFHOPVariableData(BSTR Channel, SAFEARRAY** FreqData, SAFEARRAY** DwellTimeData)
	{
		return ForwardingShimImpl::IWX218xFHOP_CreateFHOPVariableData(static_cast<Deriving*>(this), Channel, FreqData, DwellTimeData);
	}
	STDMETHODIMP LoadFHOPFixDataFile(BSTR Channel, BSTR FileName)
	{
		return ForwardingShimImpl::IWX218xFHOP_LoadFHOPFixDataFile(static_cast<Deriving*>(this), Channel, FileName);
	}
	STDMETHODIMP LoadFHOPVarDataFile(BSTR Channel, BSTR FileName)
	{
		return ForwardingShimImpl::IWX218xFHOP_LoadFHOPVarDataFile(static_cast<Deriving*>(this), Channel, FileName);
	}
	STDMETHODIMP ConfigureFHOPDwellMode(BSTR Channel, WX218xFHOPDwellModeEnum DwellMode)
	{
		return ForwardingShimImpl::IWX218xFHOP_ConfigureFHOPDwellMode(static_cast<Deriving*>(this), Channel, DwellMode);
	}
	STDMETHODIMP ConfigureFHOPEnabled(BSTR Channel, VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IWX218xFHOP_ConfigureFHOPEnabled(static_cast<Deriving*>(this), Channel, Enabled);
	}
	STDMETHODIMP ConfigureFHOPMarker(BSTR Channel, long Marker)
	{
		return ForwardingShimImpl::IWX218xFHOP_ConfigureFHOPMarker(static_cast<Deriving*>(this), Channel, Marker);
	}
	STDMETHODIMP ConfigureFHOPTime(BSTR Channel, double Time)
	{
		return ForwardingShimImpl::IWX218xFHOP_ConfigureFHOPTime(static_cast<Deriving*>(this), Channel, Time);
	}
	STDMETHODIMP get_Time(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xFHOP_get_Time(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Time(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xFHOP_put_Time(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Marker(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xFHOP_get_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Marker(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xFHOP_put_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_DwellMode(BSTR Channel, WX218xFHOPDwellModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xFHOP_get_DwellMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_DwellMode(BSTR Channel, WX218xFHOPDwellModeEnum val)
	{
		return ForwardingShimImpl::IWX218xFHOP_put_DwellMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xFHOP_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xFHOP_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xFHOP<WX218x> _IWX218xFHOP;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xAHOP
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xAHOP : public IWX218xAHOP
{
	STDMETHODIMP CreateAHOPFixedData(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xAHOP_CreateAHOPFixedData(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP CreateAHOPVariableData(BSTR Channel, SAFEARRAY** AmplData, SAFEARRAY** DwellTimeData)
	{
		return ForwardingShimImpl::IWX218xAHOP_CreateAHOPVariableData(static_cast<Deriving*>(this), Channel, AmplData, DwellTimeData);
	}
	STDMETHODIMP LoadAHOPFixDataFile(BSTR Channel, BSTR FileName)
	{
		return ForwardingShimImpl::IWX218xAHOP_LoadAHOPFixDataFile(static_cast<Deriving*>(this), Channel, FileName);
	}
	STDMETHODIMP LoadAHOPVarDataFile(BSTR Channel, BSTR FileName)
	{
		return ForwardingShimImpl::IWX218xAHOP_LoadAHOPVarDataFile(static_cast<Deriving*>(this), Channel, FileName);
	}
	STDMETHODIMP ConfigureAHOPDwellMode(BSTR Channel, WX218xAHOPDwellModeEnum DwellMode)
	{
		return ForwardingShimImpl::IWX218xAHOP_ConfigureAHOPDwellMode(static_cast<Deriving*>(this), Channel, DwellMode);
	}
	STDMETHODIMP ConfigureAHOPEnabled(BSTR Channel, VARIANT_BOOL Enabled)
	{
		return ForwardingShimImpl::IWX218xAHOP_ConfigureAHOPEnabled(static_cast<Deriving*>(this), Channel, Enabled);
	}
	STDMETHODIMP ConfigureAHOPMarker(BSTR Channel, long Marker)
	{
		return ForwardingShimImpl::IWX218xAHOP_ConfigureAHOPMarker(static_cast<Deriving*>(this), Channel, Marker);
	}
	STDMETHODIMP ConfigureAHOPTime(BSTR Channel, double Time)
	{
		return ForwardingShimImpl::IWX218xAHOP_ConfigureAHOPTime(static_cast<Deriving*>(this), Channel, Time);
	}
	STDMETHODIMP get_Time(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xAHOP_get_Time(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Time(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xAHOP_put_Time(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Marker(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xAHOP_get_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Marker(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xAHOP_put_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_DwellMode(BSTR Channel, WX218xAHOPDwellModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xAHOP_get_DwellMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_DwellMode(BSTR Channel, WX218xAHOPDwellModeEnum val)
	{
		return ForwardingShimImpl::IWX218xAHOP_put_DwellMode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xAHOP_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xAHOP_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xAHOP<WX218x> _IWX218xAHOP;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xPattern
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xPattern : public IWX218xPattern
{
	STDMETHODIMP CreatePatternData(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xPattern_CreatePatternData(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP ConfigurePatternBaud(BSTR Channel, double Baud)
	{
		return ForwardingShimImpl::IWX218xPattern_ConfigurePatternBaud(static_cast<Deriving*>(this), Channel, Baud);
	}
	STDMETHODIMP ConfigurePatternHighLevel(BSTR Channel, double HighLevel)
	{
		return ForwardingShimImpl::IWX218xPattern_ConfigurePatternHighLevel(static_cast<Deriving*>(this), Channel, HighLevel);
	}
	STDMETHODIMP ConfigurePatternLength(BSTR Channel, long Length)
	{
		return ForwardingShimImpl::IWX218xPattern_ConfigurePatternLength(static_cast<Deriving*>(this), Channel, Length);
	}
	STDMETHODIMP ConfigurePatternLevel(BSTR Channel, long Level)
	{
		return ForwardingShimImpl::IWX218xPattern_ConfigurePatternLevel(static_cast<Deriving*>(this), Channel, Level);
	}
	STDMETHODIMP ConfigurePatternLoop(BSTR Channel, long Loop)
	{
		return ForwardingShimImpl::IWX218xPattern_ConfigurePatternLoop(static_cast<Deriving*>(this), Channel, Loop);
	}
	STDMETHODIMP ConfigurePatternLowLevel(BSTR Channel, double LowLevel)
	{
		return ForwardingShimImpl::IWX218xPattern_ConfigurePatternLowLevel(static_cast<Deriving*>(this), Channel, LowLevel);
	}
	STDMETHODIMP ConfigurePatternMode(BSTR Channel, WX218xPatternModeEnum Mode)
	{
		return ForwardingShimImpl::IWX218xPattern_ConfigurePatternMode(static_cast<Deriving*>(this), Channel, Mode);
	}
	STDMETHODIMP ConfigurePatternPreamble(BSTR Channel, long Preamble)
	{
		return ForwardingShimImpl::IWX218xPattern_ConfigurePatternPreamble(static_cast<Deriving*>(this), Channel, Preamble);
	}
	STDMETHODIMP ConfigurePatternPredType(BSTR Channel, WX218xPatternPredefinedTypeEnum Type)
	{
		return ForwardingShimImpl::IWX218xPattern_ConfigurePatternPredType(static_cast<Deriving*>(this), Channel, Type);
	}
	STDMETHODIMP get_Baud(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xPattern_get_Baud(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Baud(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xPattern_put_Baud(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Level(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xPattern_get_Level(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Level(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xPattern_put_Level(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Mode(BSTR Channel, WX218xPatternModeEnum* val)
	{
		return ForwardingShimImpl::IWX218xPattern_get_Mode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Mode(BSTR Channel, WX218xPatternModeEnum val)
	{
		return ForwardingShimImpl::IWX218xPattern_put_Mode(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_PredefinedType(BSTR Channel, WX218xPatternPredefinedTypeEnum* val)
	{
		return ForwardingShimImpl::IWX218xPattern_get_PredefinedType(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_PredefinedType(BSTR Channel, WX218xPatternPredefinedTypeEnum val)
	{
		return ForwardingShimImpl::IWX218xPattern_put_PredefinedType(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_HighLevel(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xPattern_get_HighLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_HighLevel(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xPattern_put_HighLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_LowLevel(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xPattern_get_LowLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_LowLevel(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xPattern_put_LowLevel(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Loop(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xPattern_get_Loop(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Loop(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xPattern_put_Loop(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Preamble(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xPattern_get_Preamble(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Preamble(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xPattern_put_Preamble(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Length(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xPattern_get_Length(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Length(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xPattern_put_Length(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Composer(IWX218xPatternComposer** val)
	{
		return ForwardingShimImpl::IWX218xPattern_get_Composer(static_cast<Deriving*>(this), val);
	}
};

typedef __IWX218xPattern<WX218x> _IWX218xPattern;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xPatternComposer
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xPatternComposer : public IWX218xPatternComposer
{
	STDMETHODIMP CreatePatternComposerFastData(BSTR Channel, SAFEARRAY** AmplLevel, SAFEARRAY** DwellTime)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_CreatePatternComposerFastData(static_cast<Deriving*>(this), Channel, AmplLevel, DwellTime);
	}
	STDMETHODIMP LoadPatternFile(BSTR Channel, BSTR FileName)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_LoadPatternFile(static_cast<Deriving*>(this), Channel, FileName);
	}
	STDMETHODIMP CreatePatternComposerLinearData(BSTR Channel, SAFEARRAY** AmplLevel, SAFEARRAY** DwellTime)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_CreatePatternComposerLinearData(static_cast<Deriving*>(this), Channel, AmplLevel, DwellTime);
	}
	STDMETHODIMP ConfigurePatternCompFastStart(BSTR Channel, double FastStart)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_ConfigurePatternCompFastStart(static_cast<Deriving*>(this), Channel, FastStart);
	}
	STDMETHODIMP ConfigurePatternCompLinearStart(BSTR Channel, double LinearStart)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_ConfigurePatternCompLinearStart(static_cast<Deriving*>(this), Channel, LinearStart);
	}
	STDMETHODIMP ConfigurePatternCompResolution(BSTR Channel, double Resolution)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_ConfigurePatternCompResolution(static_cast<Deriving*>(this), Channel, Resolution);
	}
	STDMETHODIMP ConfigurePatternCompResType(BSTR Channel, WX218xPatternResTypeEnum ResType)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_ConfigurePatternCompResType(static_cast<Deriving*>(this), Channel, ResType);
	}
	STDMETHODIMP ConfigurePatternCompTransType(BSTR Channel, WX218xPatternComposerTransitionTypeEnum TransitionType)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_ConfigurePatternCompTransType(static_cast<Deriving*>(this), Channel, TransitionType);
	}
	STDMETHODIMP get_TransitionType(BSTR Channel, WX218xPatternComposerTransitionTypeEnum* val)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_get_TransitionType(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_TransitionType(BSTR Channel, WX218xPatternComposerTransitionTypeEnum val)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_put_TransitionType(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_LinearStart(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_get_LinearStart(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_LinearStart(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_put_LinearStart(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Resolution(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_get_Resolution(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Resolution(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_put_Resolution(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_ResolutionType(BSTR Channel, WX218xPatternResTypeEnum* val)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_get_ResolutionType(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_ResolutionType(BSTR Channel, WX218xPatternResTypeEnum val)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_put_ResolutionType(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_FastStart(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_get_FastStart(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_FastStart(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xPatternComposer_put_FastStart(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xPatternComposer<WX218x> _IWX218xPatternComposer;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xPSK
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xPSK : public IWX218xPSK
{
	STDMETHODIMP CreatePSKData(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xPSK_CreatePSKData(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP CreatePSKUserData(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xPSK_CreatePSKUserData(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP LoadPSKDataFile(BSTR Channel, BSTR FileName)
	{
		return ForwardingShimImpl::IWX218xPSK_LoadPSKDataFile(static_cast<Deriving*>(this), Channel, FileName);
	}
	STDMETHODIMP LoadPSKUserDataFile(BSTR Channel, BSTR FileName)
	{
		return ForwardingShimImpl::IWX218xPSK_LoadPSKUserDataFile(static_cast<Deriving*>(this), Channel, FileName);
	}
	STDMETHODIMP CreatePSKDataAdv(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xPSK_CreatePSKDataAdv(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP ConfigurePSKBaud(BSTR Channel, double Baud)
	{
		return ForwardingShimImpl::IWX218xPSK_ConfigurePSKBaud(static_cast<Deriving*>(this), Channel, Baud);
	}
	STDMETHODIMP ConfigurePSKCarrierState(BSTR Channel, VARIANT_BOOL State)
	{
		return ForwardingShimImpl::IWX218xPSK_ConfigurePSKCarrierState(static_cast<Deriving*>(this), Channel, State);
	}
	STDMETHODIMP ConfigurePSKState(BSTR Channel, VARIANT_BOOL State)
	{
		return ForwardingShimImpl::IWX218xPSK_ConfigurePSKState(static_cast<Deriving*>(this), Channel, State);
	}
	STDMETHODIMP ConfigurePSKMarker(BSTR Channel, long Marker)
	{
		return ForwardingShimImpl::IWX218xPSK_ConfigurePSKMarker(static_cast<Deriving*>(this), Channel, Marker);
	}
	STDMETHODIMP ConfigurePSKRate(BSTR Channel, double Rate)
	{
		return ForwardingShimImpl::IWX218xPSK_ConfigurePSKRate(static_cast<Deriving*>(this), Channel, Rate);
	}
	STDMETHODIMP ConfigurePSKShiftPhase(BSTR Channel, double ShiftPhase)
	{
		return ForwardingShimImpl::IWX218xPSK_ConfigurePSKShiftPhase(static_cast<Deriving*>(this), Channel, ShiftPhase);
	}
	STDMETHODIMP ConfigurePSKStartPhase(BSTR Channel, double StartPhase)
	{
		return ForwardingShimImpl::IWX218xPSK_ConfigurePSKStartPhase(static_cast<Deriving*>(this), Channel, StartPhase);
	}
	STDMETHODIMP ConfigurePSKType(BSTR Channel, WX218xPskTypeEnum Type)
	{
		return ForwardingShimImpl::IWX218xPSK_ConfigurePSKType(static_cast<Deriving*>(this), Channel, Type);
	}
	STDMETHODIMP get_StartPhase(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xPSK_get_StartPhase(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_StartPhase(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xPSK_put_StartPhase(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_ShiftPhase(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xPSK_get_ShiftPhase(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_ShiftPhase(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xPSK_put_ShiftPhase(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Rate(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xPSK_get_Rate(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Rate(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xPSK_put_Rate(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Type(BSTR Channel, WX218xPskTypeEnum* val)
	{
		return ForwardingShimImpl::IWX218xPSK_get_Type(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Type(BSTR Channel, WX218xPskTypeEnum val)
	{
		return ForwardingShimImpl::IWX218xPSK_put_Type(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Marker(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xPSK_get_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Marker(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xPSK_put_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Baud(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xPSK_get_Baud(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Baud(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xPSK_put_Baud(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_CarrierEnabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xPSK_get_CarrierEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_CarrierEnabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xPSK_put_CarrierEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xPSK_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xPSK_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xPSK<WX218x> _IWX218xPSK;

///////////////////////////////////////////////////////////////////////////////
//
//	IWX218xQAM
//

template <typename Deriving> struct ATL_NO_VTABLE __IWX218xQAM : public IWX218xQAM
{
	STDMETHODIMP CreateQAMData(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xQAM_CreateQAMData(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP CreateQAMUserData(BSTR Channel, SAFEARRAY** DataI, SAFEARRAY** DataQ)
	{
		return ForwardingShimImpl::IWX218xQAM_CreateQAMUserData(static_cast<Deriving*>(this), Channel, DataI, DataQ);
	}
	STDMETHODIMP LoadQAMDataFile(BSTR Channel, BSTR FileName)
	{
		return ForwardingShimImpl::IWX218xQAM_LoadQAMDataFile(static_cast<Deriving*>(this), Channel, FileName);
	}
	STDMETHODIMP LoadQAMUserDataFile(BSTR Channel, BSTR FileName)
	{
		return ForwardingShimImpl::IWX218xQAM_LoadQAMUserDataFile(static_cast<Deriving*>(this), Channel, FileName);
	}
	STDMETHODIMP CreateQAMDataAdv(BSTR Channel, SAFEARRAY** Data)
	{
		return ForwardingShimImpl::IWX218xQAM_CreateQAMDataAdv(static_cast<Deriving*>(this), Channel, Data);
	}
	STDMETHODIMP ConfigureQAMBaud(BSTR Channel, double Baud)
	{
		return ForwardingShimImpl::IWX218xQAM_ConfigureQAMBaud(static_cast<Deriving*>(this), Channel, Baud);
	}
	STDMETHODIMP ConfigureQAMCarrierState(BSTR Channel, VARIANT_BOOL State)
	{
		return ForwardingShimImpl::IWX218xQAM_ConfigureQAMCarrierState(static_cast<Deriving*>(this), Channel, State);
	}
	STDMETHODIMP ConfigureQAMState(BSTR Channel, VARIANT_BOOL State)
	{
		return ForwardingShimImpl::IWX218xQAM_ConfigureQAMState(static_cast<Deriving*>(this), Channel, State);
	}
	STDMETHODIMP ConfigureQAMMarker(BSTR Channel, long Marker)
	{
		return ForwardingShimImpl::IWX218xQAM_ConfigureQAMMarker(static_cast<Deriving*>(this), Channel, Marker);
	}
	STDMETHODIMP ConfigureQAMType(BSTR Channel, WX218xQamTypeEnum Type)
	{
		return ForwardingShimImpl::IWX218xQAM_ConfigureQAMType(static_cast<Deriving*>(this), Channel, Type);
	}
	STDMETHODIMP get_Baud(BSTR Channel, double* val)
	{
		return ForwardingShimImpl::IWX218xQAM_get_Baud(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Baud(BSTR Channel, double val)
	{
		return ForwardingShimImpl::IWX218xQAM_put_Baud(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Type(BSTR Channel, WX218xQamTypeEnum* val)
	{
		return ForwardingShimImpl::IWX218xQAM_get_Type(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Type(BSTR Channel, WX218xQamTypeEnum val)
	{
		return ForwardingShimImpl::IWX218xQAM_put_Type(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Marker(BSTR Channel, long* val)
	{
		return ForwardingShimImpl::IWX218xQAM_get_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Marker(BSTR Channel, long val)
	{
		return ForwardingShimImpl::IWX218xQAM_put_Marker(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_CarrierEnabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xQAM_get_CarrierEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_CarrierEnabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xQAM_put_CarrierEnabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP get_Enabled(BSTR Channel, VARIANT_BOOL* val)
	{
		return ForwardingShimImpl::IWX218xQAM_get_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
	STDMETHODIMP put_Enabled(BSTR Channel, VARIANT_BOOL val)
	{
		return ForwardingShimImpl::IWX218xQAM_put_Enabled(static_cast<Deriving*>(this), Channel, val);
	}
};

typedef __IWX218xQAM<WX218x> _IWX218xQAM;

