

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu Dec 18 11:14:07 2014
 */
/* Compiler settings for WX218x.nimbus.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef ___WX218x_h__
#define ___WX218x_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWX218x_FWD_DEFINED__
#define __IWX218x_FWD_DEFINED__
typedef interface IWX218x IWX218x;
#endif 	/* __IWX218x_FWD_DEFINED__ */


#ifndef __IWX218xChannel_FWD_DEFINED__
#define __IWX218xChannel_FWD_DEFINED__
typedef interface IWX218xChannel IWX218xChannel;
#endif 	/* __IWX218xChannel_FWD_DEFINED__ */


#ifndef __IWX218xAM_FWD_DEFINED__
#define __IWX218xAM_FWD_DEFINED__
typedef interface IWX218xAM IWX218xAM;
#endif 	/* __IWX218xAM_FWD_DEFINED__ */


#ifndef __IWX218xChannelSync_FWD_DEFINED__
#define __IWX218xChannelSync_FWD_DEFINED__
typedef interface IWX218xChannelSync IWX218xChannelSync;
#endif 	/* __IWX218xChannelSync_FWD_DEFINED__ */


#ifndef __IWX218xStandardWaveform_FWD_DEFINED__
#define __IWX218xStandardWaveform_FWD_DEFINED__
typedef interface IWX218xStandardWaveform IWX218xStandardWaveform;
#endif 	/* __IWX218xStandardWaveform_FWD_DEFINED__ */


#ifndef __IWX218xArbitrary_FWD_DEFINED__
#define __IWX218xArbitrary_FWD_DEFINED__
typedef interface IWX218xArbitrary IWX218xArbitrary;
#endif 	/* __IWX218xArbitrary_FWD_DEFINED__ */


#ifndef __IWX218xArbitraryWaveform_FWD_DEFINED__
#define __IWX218xArbitraryWaveform_FWD_DEFINED__
typedef interface IWX218xArbitraryWaveform IWX218xArbitraryWaveform;
#endif 	/* __IWX218xArbitraryWaveform_FWD_DEFINED__ */


#ifndef __IWX218xArbitrarySequence_FWD_DEFINED__
#define __IWX218xArbitrarySequence_FWD_DEFINED__
typedef interface IWX218xArbitrarySequence IWX218xArbitrarySequence;
#endif 	/* __IWX218xArbitrarySequence_FWD_DEFINED__ */


#ifndef __IWX218xArbitrarySequenceAdvanceSequence_FWD_DEFINED__
#define __IWX218xArbitrarySequenceAdvanceSequence_FWD_DEFINED__
typedef interface IWX218xArbitrarySequenceAdvanceSequence IWX218xArbitrarySequenceAdvanceSequence;
#endif 	/* __IWX218xArbitrarySequenceAdvanceSequence_FWD_DEFINED__ */


#ifndef __IWX218xCarrierModulation_FWD_DEFINED__
#define __IWX218xCarrierModulation_FWD_DEFINED__
typedef interface IWX218xCarrierModulation IWX218xCarrierModulation;
#endif 	/* __IWX218xCarrierModulation_FWD_DEFINED__ */


#ifndef __IWX218xCouple_FWD_DEFINED__
#define __IWX218xCouple_FWD_DEFINED__
typedef interface IWX218xCouple IWX218xCouple;
#endif 	/* __IWX218xCouple_FWD_DEFINED__ */


#ifndef __IWX218xFM_FWD_DEFINED__
#define __IWX218xFM_FWD_DEFINED__
typedef interface IWX218xFM IWX218xFM;
#endif 	/* __IWX218xFM_FWD_DEFINED__ */


#ifndef __IWX218xMarkers_FWD_DEFINED__
#define __IWX218xMarkers_FWD_DEFINED__
typedef interface IWX218xMarkers IWX218xMarkers;
#endif 	/* __IWX218xMarkers_FWD_DEFINED__ */


#ifndef __IWX218xTrigger_FWD_DEFINED__
#define __IWX218xTrigger_FWD_DEFINED__
typedef interface IWX218xTrigger IWX218xTrigger;
#endif 	/* __IWX218xTrigger_FWD_DEFINED__ */


#ifndef __IWX218xTriggerARM_FWD_DEFINED__
#define __IWX218xTriggerARM_FWD_DEFINED__
typedef interface IWX218xTriggerARM IWX218xTriggerARM;
#endif 	/* __IWX218xTriggerARM_FWD_DEFINED__ */


#ifndef __IWX218xTriggerSmartTrigger_FWD_DEFINED__
#define __IWX218xTriggerSmartTrigger_FWD_DEFINED__
typedef interface IWX218xTriggerSmartTrigger IWX218xTriggerSmartTrigger;
#endif 	/* __IWX218xTriggerSmartTrigger_FWD_DEFINED__ */


#ifndef __IWX218xStateStorage_FWD_DEFINED__
#define __IWX218xStateStorage_FWD_DEFINED__
typedef interface IWX218xStateStorage IWX218xStateStorage;
#endif 	/* __IWX218xStateStorage_FWD_DEFINED__ */


#ifndef __IWX218xXInstrument_FWD_DEFINED__
#define __IWX218xXInstrument_FWD_DEFINED__
typedef interface IWX218xXInstrument IWX218xXInstrument;
#endif 	/* __IWX218xXInstrument_FWD_DEFINED__ */


#ifndef __IWX218xDigitalPulse_FWD_DEFINED__
#define __IWX218xDigitalPulse_FWD_DEFINED__
typedef interface IWX218xDigitalPulse IWX218xDigitalPulse;
#endif 	/* __IWX218xDigitalPulse_FWD_DEFINED__ */


#ifndef __IWX218xSweep_FWD_DEFINED__
#define __IWX218xSweep_FWD_DEFINED__
typedef interface IWX218xSweep IWX218xSweep;
#endif 	/* __IWX218xSweep_FWD_DEFINED__ */


#ifndef __IWX218xDigitalPatternOutput_FWD_DEFINED__
#define __IWX218xDigitalPatternOutput_FWD_DEFINED__
typedef interface IWX218xDigitalPatternOutput IWX218xDigitalPatternOutput;
#endif 	/* __IWX218xDigitalPatternOutput_FWD_DEFINED__ */


#ifndef __IWX218xCHIRP_FWD_DEFINED__
#define __IWX218xCHIRP_FWD_DEFINED__
typedef interface IWX218xCHIRP IWX218xCHIRP;
#endif 	/* __IWX218xCHIRP_FWD_DEFINED__ */


#ifndef __IWX218xFSK_FWD_DEFINED__
#define __IWX218xFSK_FWD_DEFINED__
typedef interface IWX218xFSK IWX218xFSK;
#endif 	/* __IWX218xFSK_FWD_DEFINED__ */


#ifndef __IWX218xASK_FWD_DEFINED__
#define __IWX218xASK_FWD_DEFINED__
typedef interface IWX218xASK IWX218xASK;
#endif 	/* __IWX218xASK_FWD_DEFINED__ */


#ifndef __IWX218xFHOP_FWD_DEFINED__
#define __IWX218xFHOP_FWD_DEFINED__
typedef interface IWX218xFHOP IWX218xFHOP;
#endif 	/* __IWX218xFHOP_FWD_DEFINED__ */


#ifndef __IWX218xAHOP_FWD_DEFINED__
#define __IWX218xAHOP_FWD_DEFINED__
typedef interface IWX218xAHOP IWX218xAHOP;
#endif 	/* __IWX218xAHOP_FWD_DEFINED__ */


#ifndef __IWX218xPattern_FWD_DEFINED__
#define __IWX218xPattern_FWD_DEFINED__
typedef interface IWX218xPattern IWX218xPattern;
#endif 	/* __IWX218xPattern_FWD_DEFINED__ */


#ifndef __IWX218xPatternComposer_FWD_DEFINED__
#define __IWX218xPatternComposer_FWD_DEFINED__
typedef interface IWX218xPatternComposer IWX218xPatternComposer;
#endif 	/* __IWX218xPatternComposer_FWD_DEFINED__ */


#ifndef __IWX218xPSK_FWD_DEFINED__
#define __IWX218xPSK_FWD_DEFINED__
typedef interface IWX218xPSK IWX218xPSK;
#endif 	/* __IWX218xPSK_FWD_DEFINED__ */


#ifndef __IWX218xQAM_FWD_DEFINED__
#define __IWX218xQAM_FWD_DEFINED__
typedef interface IWX218xQAM IWX218xQAM;
#endif 	/* __IWX218xQAM_FWD_DEFINED__ */


#ifndef __WX218x_FWD_DEFINED__
#define __WX218x_FWD_DEFINED__

#ifdef __cplusplus
typedef class WX218x WX218x;
#else
typedef struct WX218x WX218x;
#endif /* __cplusplus */

#endif 	/* __WX218x_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_WX218x2Enimbus_0000_0000 */
/* [local] */ 

































extern RPC_IF_HANDLE __MIDL_itf_WX218x2Enimbus_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_WX218x2Enimbus_0000_0000_v0_0_s_ifspec;


#ifndef __WX218xLib_LIBRARY_DEFINED__
#define __WX218xLib_LIBRARY_DEFINED__

/* library WX218xLib */
/* [helpfile][helpcontext][helpstring][version][uuid] */ 

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("fb4c45de-5f24-4ae4-9433-041138e46b74") 
enum WX218xAdvanceSequenceModeEnum
    {	WX218xAdvanceSequenceModeAuto	= 0,
	WX218xAdvanceSequenceModeOnce	= 1,
	WX218xAdvanceSequenceModeStep	= 2
    } 	WX218xAdvanceSequenceModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("1dcf8d42-5f00-4312-858a-4e7a7b6467af") 
enum WX218xAMInternalWaveformEnum
    {	WX218xAMInternalWaveformSine	= 1,
	WX218xAMInternalWaveformTriangle	= 3,
	WX218xAMInternalWaveformSquare	= 2,
	WX218xAMInternalWaveformRamp	= 4
    } 	WX218xAMInternalWaveformEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5c3ea472-d08e-44f5-ac9d-70b5b275e698") 
enum WX218xArbitrarySourceEnum
    {	WX218xArbitrarySourceBus	= 0,
	WX218xArbitrarySourceExternal	= 1
    } 	WX218xArbitrarySourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("e71f2f89-e9da-414a-8aee-5ce706cc0c72") 
enum WX218xArbitraryTimingEnum
    {	WX218xArbitraryTimingCoherent	= 0,
	WX218xArbitraryTimingImmediate	= 1
    } 	WX218xArbitraryTimingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d3045ad6-afb4-4b44-9446-39ab9a06fcf6") 
enum WX218xArmSlopeEnum
    {	WX218xArmSlopePositive	= 0,
	WX218xArmSlopeNegative	= 1,
	WX218xArmSlopeEither	= 2
    } 	WX218xArmSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("37bde25e-8f62-43ed-8cf0-e8c594a257d1") 
enum WX218xCarrierModulationWaveformEnum
    {	WX218xCarrierModulationWaveformSine	= 0,
	WX218xCarrierModulationWaveformTriangle	= 1,
	WX218xCarrierModulationWaveformSquare	= 2
    } 	WX218xCarrierModulationWaveformEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d3d1fb75-f565-4c30-be23-5a5d998cff4e") 
enum WX218xContinuousModeEnum
    {	WX218xContinuousModeSelf	= 0,
	WX218xContinuousModeArmed	= 1
    } 	WX218xContinuousModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("468c8edc-168c-4037-a755-61245b810ffe") 
enum WX218xContinuousSourceEnum
    {	WX218xContinuousSourceBus	= 0,
	WX218xContinuousSourceEvent	= 1,
	WX218xContinuousSourceTrigger	= 2
    } 	WX218xContinuousSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("457e2dd9-15e5-40a3-89de-9a902c0a448c") 
enum WX218xSequenceJumpTimingEnum
    {	WX218xSequenceJumpTimingCoherent	= 0,
	WX218xSequenceJumpTimingImmediate	= 1
    } 	WX218xSequenceJumpTimingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("8d96841b-7738-4a77-8430-b6342f21067f") 
enum WX218xSequenceSourceEnum
    {	WX218xSequenceSourceBus	= 0,
	WX218xSequenceSourceExternal	= 1
    } 	WX218xSequenceSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("ce3f6c3a-8dbc-4e11-ae58-848f13a9ce3f") 
enum WX218xSequenceTimingEnum
    {	WX218xSequenceTimingCoherent	= 0,
	WX218xSequenceTimingImmediate	= 1
    } 	WX218xSequenceTimingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("38b9bc77-f033-4f18-bc27-5c366244e2ae") 
enum WX218xStateStorageConfigurationEnum
    {	WX218xStateStorageConfigurationSetup	= 0,
	WX218xStateStorageConfigurationWave	= 1,
	WX218xStateStorageConfigurationAll	= 2
    } 	WX218xStateStorageConfigurationEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("acfc145c-8407-4262-9662-c6afb961fdcc") 
enum WX218xStateStorageTargetEnum
    {	WX218xStateStorageTargetINT	= 0,
	WX218xStateStorageTargetUSB	= 1
    } 	WX218xStateStorageTargetEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("e76eab20-4214-44fc-8aa7-4ac16f14ee43") 
enum WX218xPulseLevelControlEnum
    {	WX218xPulseLevelControlHLOW	= 0,
	WX218xPulseLevelControlAOffset	= 1,
	WX218xPulseLevelControlPositive	= 2,
	WX218xPulseLevelControlNegative	= 3
    } 	WX218xPulseLevelControlEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a10e0599-b86e-438b-a1c6-e5546bc4b530") 
enum WX218xPulseModeEnum
    {	WX218xPulseModeSingle	= 0,
	WX218xPulseModeDelayed	= 1,
	WX218xPulseModeDouble	= 2
    } 	WX218xPulseModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("14030e1c-d3c1-4f3d-9fab-9ea658400df5") 
enum WX218xPulsePolarityEnum
    {	WX218xPulsePolarityNormal	= 0,
	WX218xPulsePolarityComplement	= 1,
	WX218xPulsePolarityInverted	= 2
    } 	WX218xPulsePolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("7455d719-5edf-4c07-b974-cdf17a73ddea") 
enum WX218xPulseTransitionEnum
    {	WX218xPulseTransitionFast	= 0,
	WX218xPulseTransitionLinear	= 1,
	WX218xPulseTransitionSymmetrical	= 2
    } 	WX218xPulseTransitionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a7721f02-d652-4680-9039-587256685773") 
enum WX218xReferenceClockSourceEnum
    {	WX218xReferenceClockSourceInternal	= 0,
	WX218xReferenceClockSourceExternal	= 1
    } 	WX218xReferenceClockSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5eb07d36-0ab6-4952-821d-5e826df66b67") 
enum WX218xSampleRateSourceEnum
    {	WX218xSampleRateSourceInternal	= 0,
	WX218xSampleRateSourceExternal	= 1
    } 	WX218xSampleRateSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c0a8e892-efdf-4689-896d-a874dcf976b2") 
enum WX218xSequenceAdvanceModeEnum
    {	WX218xSequenceAdvanceModeAuto	= 0,
	WX218xSequenceAdvanceModeOnce	= 1,
	WX218xSequenceAdvanceModeStep	= 2
    } 	WX218xSequenceAdvanceModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c1af0f8a-65c5-41da-b2bb-91f6ff310dec") 
enum WX218xSequenceJumpEventEnum
    {	WX218xSequenceJumpEventBus	= 0,
	WX218xSequenceJumpEventEvent	= 1
    } 	WX218xSequenceJumpEventEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("80d2a62d-c427-4e81-9756-bfda020c2f2a") 
enum WX218xFMInternalWaveformEnum
    {	WX218xFMInternalWaveformSine	= 1,
	WX218xFMInternalWaveformTriangle	= 3,
	WX218xFMInternalWaveformSquare	= 2,
	WX218xFMInternalWaveformRamp	= 4
    } 	WX218xFMInternalWaveformEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("9493fa8d-462f-4917-864f-ee32bec42fa0") 
enum WX218xOperationModeEnum
    {	WX218xOperationModeContinuous	= 0,
	WX218xOperationModeBurst	= 1,
	WX218xOperationModeTrigger	= 2,
	WX218xOperationModeGate	= 3
    } 	WX218xOperationModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("fa2f2d3d-caf6-4ad3-a5f3-e7423adb075f") 
enum WX218xOutputCoupleEnum
    {	WX218xOutputCoupleDC	= 0,
	WX218xOutputCoupleAC	= 1,
	WX218xOutputCoupleHV	= 2
    } 	WX218xOutputCoupleEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("ed2e9357-e4e1-4154-9792-17719e589eb6") 
enum WX218xOutputModeEnum
    {	WX218xOutputModeFunction	= 0,
	WX218xOutputModeArbitrary	= 1,
	WX218xOutputModeSequence	= 2,
	WX218xOutputModeASequence	= 3,
	WX218xOutputModeModulation	= 4,
	WX218xOutputModeDPulse	= 5,
	WX218xOutputModePattern	= 6
    } 	WX218xOutputModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("af45b3e1-c8f2-42ea-bb58-9f9d2e9610b3") 
enum WX218xOutputSyncFunctionEnum
    {	WX218xOutputSyncFunctionPulse	= 0,
	WX218xOutputSyncFunctionWCOM	= 1
    } 	WX218xOutputSyncFunctionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4fe1a3b8-adcc-42ad-b441-2c5a2c0f14fc") 
enum WX218xOutputSyncSourceEnum
    {	WX218xOutputSyncSourceCH1	= 0,
	WX218xOutputSyncSourceCH2	= 1,
	WX218xOutputSyncSourceCH3	= 2,
	WX218xOutputSyncSourceCH4	= 3
    } 	WX218xOutputSyncSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("381d5643-f191-4276-95aa-40f399b39f47") 
enum WX218xPulseConfigureEnum
    {	WX218xPulseConfigureTime	= 0,
	WX218xPulseConfigurePercent	= 1
    } 	WX218xPulseConfigureEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5980667a-56f5-4596-832e-71c3d672dd5e") 
enum WX218xSweepDirectionEnum
    {	WX218xSweepDirectionUp	= 0,
	WX218xSweepDirectionDown	= 1
    } 	WX218xSweepDirectionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("8945247c-e438-437c-be71-e90fcd343865") 
enum WX218xSweepSpacingEnum
    {	WX218xSweepSpacingLin	= 0,
	WX218xSweepSpacingLog	= 1
    } 	WX218xSweepSpacingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("46299812-98cc-4005-91a6-ae95838e5320") 
enum WX218xTriggerModeEnum
    {	WX218xTriggerModeNormal	= 0,
	WX218xTriggerModeOverride	= 1
    } 	WX218xTriggerModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("09cf4a1b-4fb5-4f4d-b6af-3b0ededbb4ad") 
enum WX218xTriggerSlopeEnum
    {	WX218xTriggerSlopePositive	= 0,
	WX218xTriggerSlopeNegative	= 1,
	WX218xTriggerSlopeEither	= 2
    } 	WX218xTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("17ef2d9a-fc60-4c28-ad64-037f5e79d89f") 
enum WX218xTriggerSourceEnum
    {	WX218xTriggerSourceExternal	= 1,
	WX218xTriggerSourceSoftware	= 2,
	WX218xTriggerSourceTimer	= 4,
	WX218xTriggerSourceEvent	= 5
    } 	WX218xTriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("ef70c5c6-f971-4340-b2ba-1df8ddedb94b") 
enum WX218xTriggerTimerModeEnum
    {	WX218xTriggerTimerModeTime	= 0,
	WX218xTriggerTimerModeDelay	= 1
    } 	WX218xTriggerTimerModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("48c2acff-2d37-48d6-8d5b-d4bda6f59fdb") 
enum WX218xXInstrumentModeEnum
    {	WX218xXInstrumentModeMaster	= 0,
	WX218xXInstrumentModeSlave	= 1
    } 	WX218xXInstrumentModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("417b91ba-37fa-4740-87ab-bf00528ba419") 
enum WX218xMarkerControlEnum
    {	WX218xMarkerControlLocal	= 0,
	WX218xMarkerControlRemote	= 1
    } 	WX218xMarkerControlEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5df502c9-8b98-4989-8700-9ac5204b41a7") 
enum WX218xStateStorageRecalConfigurationEnum
    {	WX218xStateStorageRecalConfigurationSetup	= 0,
	WX218xStateStorageRecalConfigurationWave	= 1,
	WX218xStateStorageRecalConfigurationAll	= 2,
	WX218xStateStorageRecalConfigurationEmpty	= 3
    } 	WX218xStateStorageRecalConfigurationEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("52fda3d3-014a-4e63-be42-71d3c8bbc6d4") 
enum WX218xWaveformEnum
    {	WX218xWaveformSine	= 1,
	WX218xWaveformSquare	= 2,
	WX218xWaveformTriangle	= 3,
	WX218xWaveformRampUp	= 4,
	WX218xWaveformRampDown	= 5,
	WX218xWaveformDC	= 6,
	WX218xWaveformSinc	= 7,
	WX218xWaveformGaussian	= 8,
	WX218xWaveformExponential	= 9,
	WX218xWaveformNoise	= 10
    } 	WX218xWaveformEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("82445369-455c-45f8-8a09-9a0044390e97") 
enum WX218xPatternTransitionTypeEnum
    {	WX218xPatternTransitionTypeFast	= 0,
	WX218xPatternTransitionTypeLinear	= 1
    } 	WX218xPatternTransitionTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("9381d572-6bed-4a17-8058-b9d0887dc2e6") 
enum WX218xPatternResTypeEnum
    {	WX218xPatternResTypeAuto	= 0,
	WX218xPatternResTypeUser	= 1
    } 	WX218xPatternResTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("1c08d86f-3c42-464b-a699-15c73587e849") 
enum WX218xSequencePrestepEnum
    {	WX218xSequencePrestepWave	= 0,
	WX218xSequencePrestepDC	= 1
    } 	WX218xSequencePrestepEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("dc8cbf82-90ec-4f61-96b0-2c38a9b98a2b") 
enum WX218xDigPatternDelayModeEnum
    {	WX218xDigPatternDelayModeCommon	= 0,
	WX218xDigPatternDelayModeSeparate	= 1
    } 	WX218xDigPatternDelayModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f38566b2-d75f-49ae-809f-5db63c76300b") 
enum WX218xDigPatternLevelModeEnum
    {	WX218xDigPatternLevelModeCommon	= 0,
	WX218xDigPatternLevelModeSeparate	= 1
    } 	WX218xDigPatternLevelModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("872078d5-ec70-4a0c-a5ae-7a874d6c525a") 
enum WX218xChirpFreqDirectionEnum
    {	WX218xChirpFreqDirectionUp	= 0,
	WX218xChirpFreqDirectionDown	= 1
    } 	WX218xChirpFreqDirectionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("9f0caea7-87f5-49d7-8b52-d5f3a4d1a615") 
enum WX218xChirpFreqSpacingEnum
    {	WX218xChirpFreqSpacingLinear	= 0,
	WX218xChirpFreqSpacingLog	= 1
    } 	WX218xChirpFreqSpacingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("40bfa78d-fa23-4a98-90ff-0e5561a27723") 
enum WX218xChirpAmplitudeDirectionEnum
    {	WX218xChirpAmplitudeDirectionUp	= 0,
	WX218xChirpAmplitudeDirectionDown	= 1
    } 	WX218xChirpAmplitudeDirectionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("07e1b29a-7e40-49ea-a985-2fa53682ce0f") 
enum WX218xChirpAmplSpacingEnum
    {	WX218xChirpAmplSpacingLin	= 0,
	WX218xChirpAmplSpacingLog	= 1
    } 	WX218xChirpAmplSpacingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4507e167-a2d0-49fb-a0b6-9cbbd98c4280") 
enum WX218xFHOPDwellModeEnum
    {	WX218xFHOPDwellModeFixed	= 0,
	WX218xFHOPDwellModeVariable	= 1
    } 	WX218xFHOPDwellModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("023ac6bd-f92b-4435-89da-cc537c021770") 
enum WX218xAHOPDwellModeEnum
    {	WX218xAHOPDwellModeFixed	= 0,
	WX218xAHOPDwellModeVariable	= 1
    } 	WX218xAHOPDwellModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b4b6fcd4-143d-4c98-8f25-196603383bc0") 
enum WX218xPatternModeEnum
    {	WX218xPatternModeComposer	= 0,
	WX218xPatternModePredefined	= 1
    } 	WX218xPatternModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("1c09bebb-ede3-4498-abef-356259762c90") 
enum WX218xPatternPredefinedTypeEnum
    {	WX218xPatternPredefinedTypePRBS7	= 0,
	WX218xPatternPredefinedTypePRBS9	= 1,
	WX218xPatternPredefinedTypePRBS11	= 2,
	WX218xPatternPredefinedTypePRBS15	= 3,
	WX218xPatternPredefinedTypePRBS23	= 4,
	WX218xPatternPredefinedTypePRBS31	= 5,
	WX218xPatternPredefinedTypeUSER	= 6
    } 	WX218xPatternPredefinedTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("6f9f344d-241a-4ded-9619-11a88010479a") 
enum WX218xPatternComposerTransitionTypeEnum
    {	WX218xPatternComposerTransitionTypeFast	= 0,
	WX218xPatternComposerTransitionTypeLinear	= 1
    } 	WX218xPatternComposerTransitionTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("e7a579fa-c55f-4d6a-90bd-d9c2f92fb7eb") 
enum WX218xPskTypeEnum
    {	WX218xPskTypePSK	= 0,
	WX218xPskTypeBPSK	= 1,
	WX218xPskTypeQPSK	= 2,
	WX218xPskTypeOQPSK	= 3,
	WX218xPskTypeDQPSK	= 4,
	WX218xPskType8PSK	= 5,
	WX218xPskType16PSK	= 6,
	WX218xPskTypeUSER	= 7
    } 	WX218xPskTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0813a1e7-7e5e-4a50-9209-bb8b7e3775cb") 
enum WX218xQamTypeEnum
    {	WX218xQamType16QAM	= 0,
	WX218xQamType64QAM	= 1,
	WX218xQamType256QAM	= 2,
	WX218xQamTypeUSER	= 3
    } 	WX218xQamTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a76cffca-9d5a-4682-b38a-1814f3923c39") 
enum WX218xDigFormatDataEnum
    {	WX218xDigFormatDataSeparate	= 0,
	WX218xDigFormatDataCommon	= 1
    } 	WX218xDigFormatDataEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("43ebd855-28cd-4aa4-8203-4d31a8e2a58f") 
enum WX218xArbitraryResolutionEnum
    {	WX218xArbitraryResolution1P	= 0,
	WX218xArbitraryResolution2P	= 1
    } 	WX218xArbitraryResolutionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d68151d0-27af-472d-b13c-898dcfadc6b0") 
enum WX218xMarkerSourceEnum
    {	WX218xMarkerSourceWave	= 0,
	WX218xMarkerSourceUser	= 1
    } 	WX218xMarkerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("88358cfb-7f3b-464b-926b-ac87c6c41e72") 
enum WX218xTraceModeEnum
    {	WX218xTraceModeSingle	= 0,
	WX218xTraceModeDuplicate	= 1,
	WX218xTraceModeZero	= 2,
	WX218xTraceModeCombine	= 3
    } 	WX218xTraceModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("09fe787e-5288-4361-9393-7c031be7a7b4") 
enum WX218xXInstrumentModeAdvEnum
    {	WX218xXInstrumentModeAdvMaster	= 0,
	WX218xXInstrumentModeAdvSlave	= 1,
	WX218xXInstrumentModeAdvMSlave	= 2
    } 	WX218xXInstrumentModeAdvEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d8007d74-a4b7-4942-befa-1cc20a351fbb") 
enum WX218xFreqDividerEnum
    {	WX218xFreqDividerDiv1	= 0,
	WX218xFreqDividerDiv2	= 1,
	WX218xFreqDividerDiv4	= 2,
	WX218xFreqDividerDiv8	= 3,
	WX218xFreqDividerDiv16	= 4
    } 	WX218xFreqDividerEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f698204d-b034-4bc7-a912-70e67ee8d8b2") 
enum WX218xExtFrequencyEnum
    {	WX218xExtFrequency10M	= 0,
	WX218xExtFrequency20M	= 1,
	WX218xExtFrequency50M	= 2,
	WX218xExtFrequency100M	= 3
    } 	WX218xExtFrequencyEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("ab615dae-a784-4b81-bf50-a5eb82c0d352") 
enum WX218xDigitalClockEnum
    {	WX218xDigitalClockSDR	= 0,
	WX218xDigitalClockDDR	= 1
    } 	WX218xDigitalClockEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("74616a2d-0ee8-46c2-8169-50fa90e2c9ef") 
enum WX218xDigPortEnum
    {	WX218xDigPortPort1	= 0,
	WX218xDigPortPort2	= 1,
	WX218xDigPortPortBoth	= 2
    } 	WX218xDigPortEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a6fc4745-7e41-4587-87f1-fc44c3ed00dd") 
enum WX218xArbDownloadRecordEnum
    {	WX218xArbDownloadRecordEnable	= 0,
	WX218xArbDownloadRecordDisable	= 1
    } 	WX218xArbDownloadRecordEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3e6b96ff-0a2a-48af-af33-dd68f19df728") 
enum WX218xTriggerImpedanceEnum
    {	WX218xTriggerImpedance50	= 0,
	WX218xTriggerImpedance10K	= 1
    } 	WX218xTriggerImpedanceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0ecfe325-230e-4f39-bc8e-7ab8248bc7ea") 
enum WX218xErrorCodesEnum
    {	E_WX218X_IO_GENERAL	= -2147204588,
	E_WX218X_IO_TIMEOUT	= -2147204587,
	E_WX218X_MODEL_NOT_SUPPORTED	= -2147204586,
	E_WX218X_PERSONALITY_NOT_ACTIVE	= -2147204591,
	E_WX218X_PERSONALITY_NOT_LICENSED	= -2147204589,
	E_WX218X_PERSONALITY_NOT_INSTALLED	= -2147204590,
	E_WX218X_ELEMENT_ARRAY_NOT_VALID	= -2147204580,
	E_WX218X_HANDLE_CHANNEL_NOT_EXIST	= -2147204583,
	E_WX218X_HANDLE_LOOP_JUMP_NOT_EQUAL	= -2147204581,
	E_WX218X_HANDLE_LOOP_NOT_EQUAL	= -2147204582,
	E_WX218X_INVALID_CONFIGURATION	= -2147204584,
	E_WX218X_LBOUND_ARRAY_EQUAL	= -2147204579,
	E_WX218X_LBOUND_ARRAY_ZERO	= -2147204577,
	E_WX218X_MAX_COUNT_SEGMENTS	= -2147204576,
	E_WX218X_NO_AVAILABLE_MEMORY	= -2147204575,
	E_WX218X_START_PHASE	= -2147204585,
	E_WX218X_UBOUND_ARRAY_EQUAL	= -2147204578,
	E_WX218X_UPPER_BOUND_ZERO	= -2147204574,
	E_WX218X_FEATURE_NOT_SUPPORTED	= -2147204573,
	E_WX218X_SIZE_ARRAY_NOT_EQUAL	= -2147204572,
	E_WX218X_DATA_ARRAY_EMPTY	= -2147204571,
	E_WX218X_SEGSIZE_ARBDIG_NOTEQUAL	= -2147204570,
	E_WX218X_SEGSIZE_DIG_NOTEQUAL	= -2147204569,
	E_WX218X_SEGMENT_NOT_EMPTY	= -2147204568,
	E_WX218X_INVALID_FILE_DATA	= -2147204567,
	E_WX218X_DIG_POD_NOT_PRESENT	= -2147204566,
	E_WX218X_INVALID_FILE_LENGTH	= -2147204565,
	E_WX218X_TRACE_MODE_NORMAL	= -2147204564,
	E_WX218X_TRACE_MODE_DUPLICATE	= -2147204563,
	E_WX218X_FILE_SIZE_NOT_EQUAL	= -2147204562,
	E_WX218X_TRACE_MODE_DUPLICATE_FILE	= -2147204561,
	E_WX218X_TRACE_MODE_NORMAL_FILE	= -2147204560,
	E_WX218X_NOT_SUPPORTED_TRACE_MODE	= -2147204559,
	E_WX218X_SEG_NOT_EXIST	= -2147204557,
	E_WX218X_DIG_POD_NOT_EXIST	= -2147204558,
	E_WX218X_COUNT_SEG_NOT_EQUAL	= -2147204556,
	E_WX218X_SIZE_NOT_EQUAL	= -2147204554,
	E_WX218X_TRACE_MODE_NOT_SUPP	= -2147204554,
	E_WX218X_DIG_PORT_BIT_INDEX	= -2147204555,
	E_WX218X_COMMAND_EMPTY	= -2147204553
    } 	WX218xErrorCodesEnum;


EXTERN_C const IID LIBID_WX218xLib;

#ifndef __IWX218x_INTERFACE_DEFINED__
#define __IWX218x_INTERFACE_DEFINED__

/* interface IWX218x */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218x;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5f53bb41-b729-45db-8c3e-6b9c932b8898")
    IWX218x : public IIviDriver
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AbortGeneration( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE InitiateGeneration( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetActiveChannel( 
            /* [in] */ BSTR ChName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SendCmd( 
            /* [in] */ BSTR Command) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadQuery( 
            /* [in] */ BSTR SendBuff,
            /* [out][in] */ BSTR *ReadBuff) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Output( 
            /* [retval][out] */ IWX218xChannel **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AM( 
            /* [retval][out] */ IWX218xAM **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveChannel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ActiveChannel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StandardWaveform( 
            /* [retval][out] */ IWX218xStandardWaveform **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Arbitrary( 
            /* [retval][out] */ IWX218xArbitrary **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CarrierModulation( 
            /* [retval][out] */ IWX218xCarrierModulation **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Couple( 
            /* [retval][out] */ IWX218xCouple **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FM( 
            /* [retval][out] */ IWX218xFM **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Markers( 
            /* [retval][out] */ IWX218xMarkers **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ IWX218xTrigger **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StateStorage( 
            /* [retval][out] */ IWX218xStateStorage **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_XInstrument( 
            /* [retval][out] */ IWX218xXInstrument **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DigitalPulse( 
            /* [retval][out] */ IWX218xDigitalPulse **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Sweep( 
            /* [retval][out] */ IWX218xSweep **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DigitalPatternOutput( 
            /* [retval][out] */ IWX218xDigitalPatternOutput **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CHIRP( 
            /* [retval][out] */ IWX218xCHIRP **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FSK( 
            /* [retval][out] */ IWX218xFSK **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ASK( 
            /* [retval][out] */ IWX218xASK **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FHOP( 
            /* [retval][out] */ IWX218xFHOP **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AHOP( 
            /* [retval][out] */ IWX218xAHOP **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Pattern( 
            /* [retval][out] */ IWX218xPattern **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PSK( 
            /* [retval][out] */ IWX218xPSK **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_QAM( 
            /* [retval][out] */ IWX218xQAM **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Skew( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Skew( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xVtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218x * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *AddRef )( 
            IWX218x * This);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *Release )( 
            IWX218x * This);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IWX218x * This,
            /* [out][idldescattr] */ IIviDriverOperation **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IWX218x * This,
            /* [out][idldescattr] */ IIviDriverIdentity **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IWX218x * This,
            /* [out][idldescattr] */ IIviDriverUtility **pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWX218x * This,
            /* [in][idldescattr] */ BSTR ResourceName,
            /* [in][idldescattr] */ BOOLEAN IdQuery,
            /* [in][idldescattr] */ BOOLEAN Reset,
            /* [in][idldescattr] */ BSTR OptionString);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IWX218x * This,
            /* [out][idldescattr] */ BOOLEAN *pVal,
            /* [retval][out] */ HRESULT *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IWX218x * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AbortGeneration )( 
            IWX218x * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *InitiateGeneration )( 
            IWX218x * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetActiveChannel )( 
            IWX218x * This,
            /* [in] */ BSTR ChName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SendCmd )( 
            IWX218x * This,
            /* [in] */ BSTR Command);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadQuery )( 
            IWX218x * This,
            /* [in] */ BSTR SendBuff,
            /* [out][in] */ BSTR *ReadBuff);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Output )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xChannel **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AM )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xAM **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveChannel )( 
            IWX218x * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveChannel )( 
            IWX218x * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardWaveform )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xStandardWaveform **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arbitrary )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xArbitrary **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CarrierModulation )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xCarrierModulation **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Couple )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xCouple **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FM )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xFM **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Markers )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xMarkers **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xTrigger **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StateStorage )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xStateStorage **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XInstrument )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xXInstrument **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DigitalPulse )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xDigitalPulse **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sweep )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xSweep **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DigitalPatternOutput )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xDigitalPatternOutput **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CHIRP )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xCHIRP **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FSK )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xFSK **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ASK )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xASK **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FHOP )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xFHOP **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AHOP )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xAHOP **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Pattern )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xPattern **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PSK )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xPSK **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_QAM )( 
            IWX218x * This,
            /* [retval][out] */ IWX218xQAM **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Skew )( 
            IWX218x * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Skew )( 
            IWX218x * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IWX218xVtbl;

    interface IWX218x
    {
        CONST_VTBL struct IWX218xVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218x_QueryInterface(This,riid,ppvObj)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj) ) 

#define IWX218x_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218x_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218x_get_DriverOperation(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal,retval) ) 

#define IWX218x_get_Identity(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal,retval) ) 

#define IWX218x_get_Utility(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal,retval) ) 

#define IWX218x_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IWX218x_get_Initialized(This,pVal,retval)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal,retval) ) 

#define IWX218x_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IWX218x_AbortGeneration(This)	\
    ( (This)->lpVtbl -> AbortGeneration(This) ) 

#define IWX218x_InitiateGeneration(This)	\
    ( (This)->lpVtbl -> InitiateGeneration(This) ) 

#define IWX218x_SetActiveChannel(This,ChName)	\
    ( (This)->lpVtbl -> SetActiveChannel(This,ChName) ) 

#define IWX218x_SendCmd(This,Command)	\
    ( (This)->lpVtbl -> SendCmd(This,Command) ) 

#define IWX218x_ReadQuery(This,SendBuff,ReadBuff)	\
    ( (This)->lpVtbl -> ReadQuery(This,SendBuff,ReadBuff) ) 

#define IWX218x_get_Output(This,Val)	\
    ( (This)->lpVtbl -> get_Output(This,Val) ) 

#define IWX218x_get_AM(This,Val)	\
    ( (This)->lpVtbl -> get_AM(This,Val) ) 

#define IWX218x_get_ActiveChannel(This,Val)	\
    ( (This)->lpVtbl -> get_ActiveChannel(This,Val) ) 

#define IWX218x_put_ActiveChannel(This,Val)	\
    ( (This)->lpVtbl -> put_ActiveChannel(This,Val) ) 

#define IWX218x_get_StandardWaveform(This,Val)	\
    ( (This)->lpVtbl -> get_StandardWaveform(This,Val) ) 

#define IWX218x_get_Arbitrary(This,Val)	\
    ( (This)->lpVtbl -> get_Arbitrary(This,Val) ) 

#define IWX218x_get_CarrierModulation(This,Val)	\
    ( (This)->lpVtbl -> get_CarrierModulation(This,Val) ) 

#define IWX218x_get_Couple(This,Val)	\
    ( (This)->lpVtbl -> get_Couple(This,Val) ) 

#define IWX218x_get_FM(This,Val)	\
    ( (This)->lpVtbl -> get_FM(This,Val) ) 

#define IWX218x_get_Markers(This,Val)	\
    ( (This)->lpVtbl -> get_Markers(This,Val) ) 

#define IWX218x_get_Trigger(This,Val)	\
    ( (This)->lpVtbl -> get_Trigger(This,Val) ) 

#define IWX218x_get_StateStorage(This,Val)	\
    ( (This)->lpVtbl -> get_StateStorage(This,Val) ) 

#define IWX218x_get_XInstrument(This,Val)	\
    ( (This)->lpVtbl -> get_XInstrument(This,Val) ) 

#define IWX218x_get_DigitalPulse(This,Val)	\
    ( (This)->lpVtbl -> get_DigitalPulse(This,Val) ) 

#define IWX218x_get_Sweep(This,Val)	\
    ( (This)->lpVtbl -> get_Sweep(This,Val) ) 

#define IWX218x_get_DigitalPatternOutput(This,Val)	\
    ( (This)->lpVtbl -> get_DigitalPatternOutput(This,Val) ) 

#define IWX218x_get_CHIRP(This,Val)	\
    ( (This)->lpVtbl -> get_CHIRP(This,Val) ) 

#define IWX218x_get_FSK(This,Val)	\
    ( (This)->lpVtbl -> get_FSK(This,Val) ) 

#define IWX218x_get_ASK(This,Val)	\
    ( (This)->lpVtbl -> get_ASK(This,Val) ) 

#define IWX218x_get_FHOP(This,Val)	\
    ( (This)->lpVtbl -> get_FHOP(This,Val) ) 

#define IWX218x_get_AHOP(This,Val)	\
    ( (This)->lpVtbl -> get_AHOP(This,Val) ) 

#define IWX218x_get_Pattern(This,Val)	\
    ( (This)->lpVtbl -> get_Pattern(This,Val) ) 

#define IWX218x_get_PSK(This,Val)	\
    ( (This)->lpVtbl -> get_PSK(This,Val) ) 

#define IWX218x_get_QAM(This,Val)	\
    ( (This)->lpVtbl -> get_QAM(This,Val) ) 

#define IWX218x_get_Skew(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Skew(This,Channel,Val) ) 

#define IWX218x_put_Skew(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Skew(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218x_INTERFACE_DEFINED__ */


#ifndef __IWX218xChannel_INTERFACE_DEFINED__
#define __IWX218xChannel_INTERFACE_DEFINED__

/* interface IWX218xChannel */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7c73a664-20bb-4490-9091-0640507a551d")
    IWX218xChannel : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureRefExtFrequency( 
            /* [in] */ BSTR Channel,
            /* [in] */ double ExtFreq) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureExtFrequency( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xExtFrequencyEnum ExtFrequency) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureOutputStateAllCh( 
            /* [in] */ VARIANT_BOOL State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureCoupleAllCh( 
            /* [in] */ enum WX218xOutputCoupleEnum Couple) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Couple( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xOutputCoupleEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Couple( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xOutputCoupleEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OperationMode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xOperationModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OperationMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xOperationModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OutputMode( 
            /* [retval][out] */ enum WX218xOutputModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OutputMode( 
            /* [in] */ enum WX218xOutputModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceClockSource( 
            /* [retval][out] */ enum WX218xReferenceClockSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceClockSource( 
            /* [in] */ enum WX218xReferenceClockSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RefExtFrequency( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RefExtFrequency( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Sync( 
            /* [retval][out] */ IWX218xChannelSync **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExtFrequency( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xExtFrequencyEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ExtFrequency( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xExtFrequencyEnum Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xChannel * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRefExtFrequency )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double ExtFreq);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureExtFrequency )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xExtFrequencyEnum ExtFrequency);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureOutputStateAllCh )( 
            IWX218xChannel * This,
            /* [in] */ VARIANT_BOOL State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCoupleAllCh )( 
            IWX218xChannel * This,
            /* [in] */ enum WX218xOutputCoupleEnum Couple);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IWX218xChannel * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IWX218xChannel * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Couple )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xOutputCoupleEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Couple )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xOutputCoupleEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OperationMode )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xOperationModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OperationMode )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xOperationModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputMode )( 
            IWX218xChannel * This,
            /* [retval][out] */ enum WX218xOutputModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputMode )( 
            IWX218xChannel * This,
            /* [in] */ enum WX218xOutputModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceClockSource )( 
            IWX218xChannel * This,
            /* [retval][out] */ enum WX218xReferenceClockSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceClockSource )( 
            IWX218xChannel * This,
            /* [in] */ enum WX218xReferenceClockSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefExtFrequency )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefExtFrequency )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sync )( 
            IWX218xChannel * This,
            /* [retval][out] */ IWX218xChannelSync **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtFrequency )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xExtFrequencyEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtFrequency )( 
            IWX218xChannel * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xExtFrequencyEnum Val);
        
        END_INTERFACE
    } IWX218xChannelVtbl;

    interface IWX218xChannel
    {
        CONST_VTBL struct IWX218xChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xChannel_ConfigureRefExtFrequency(This,Channel,ExtFreq)	\
    ( (This)->lpVtbl -> ConfigureRefExtFrequency(This,Channel,ExtFreq) ) 

#define IWX218xChannel_ConfigureExtFrequency(This,Channel,ExtFrequency)	\
    ( (This)->lpVtbl -> ConfigureExtFrequency(This,Channel,ExtFrequency) ) 

#define IWX218xChannel_ConfigureOutputStateAllCh(This,State)	\
    ( (This)->lpVtbl -> ConfigureOutputStateAllCh(This,State) ) 

#define IWX218xChannel_ConfigureCoupleAllCh(This,Couple)	\
    ( (This)->lpVtbl -> ConfigureCoupleAllCh(This,Couple) ) 

#define IWX218xChannel_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IWX218xChannel_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#define IWX218xChannel_get_Couple(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Couple(This,Channel,Val) ) 

#define IWX218xChannel_put_Couple(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Couple(This,Channel,Val) ) 

#define IWX218xChannel_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xChannel_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#define IWX218xChannel_get_OperationMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_OperationMode(This,Channel,Val) ) 

#define IWX218xChannel_put_OperationMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_OperationMode(This,Channel,Val) ) 

#define IWX218xChannel_get_OutputMode(This,Val)	\
    ( (This)->lpVtbl -> get_OutputMode(This,Val) ) 

#define IWX218xChannel_put_OutputMode(This,Val)	\
    ( (This)->lpVtbl -> put_OutputMode(This,Val) ) 

#define IWX218xChannel_get_ReferenceClockSource(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceClockSource(This,Val) ) 

#define IWX218xChannel_put_ReferenceClockSource(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceClockSource(This,Val) ) 

#define IWX218xChannel_get_RefExtFrequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_RefExtFrequency(This,Channel,Val) ) 

#define IWX218xChannel_put_RefExtFrequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_RefExtFrequency(This,Channel,Val) ) 

#define IWX218xChannel_get_Sync(This,Val)	\
    ( (This)->lpVtbl -> get_Sync(This,Val) ) 

#define IWX218xChannel_get_ExtFrequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_ExtFrequency(This,Channel,Val) ) 

#define IWX218xChannel_put_ExtFrequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_ExtFrequency(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xChannel_INTERFACE_DEFINED__ */


#ifndef __IWX218xAM_INTERFACE_DEFINED__
#define __IWX218xAM_INTERFACE_DEFINED__

/* interface IWX218xAM */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xAM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("df8beabf-8254-4003-bb83-9a597df1e6aa")
    IWX218xAM : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureInternal( 
            /* [in] */ double Depth,
            /* [in] */ enum WX218xAMInternalWaveformEnum Waveform,
            /* [in] */ double Frequency) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAMEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InternalDepth( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InternalDepth( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InternalWaveform( 
            /* [retval][out] */ enum WX218xAMInternalWaveformEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InternalWaveform( 
            /* [in] */ enum WX218xAMInternalWaveformEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InternalFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InternalFrequency( 
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xAMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xAM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xAM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xAM * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureInternal )( 
            IWX218xAM * This,
            /* [in] */ double Depth,
            /* [in] */ enum WX218xAMInternalWaveformEnum Waveform,
            /* [in] */ double Frequency);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAMEnabled )( 
            IWX218xAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xAM * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalDepth )( 
            IWX218xAM * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalDepth )( 
            IWX218xAM * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalWaveform )( 
            IWX218xAM * This,
            /* [retval][out] */ enum WX218xAMInternalWaveformEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalWaveform )( 
            IWX218xAM * This,
            /* [in] */ enum WX218xAMInternalWaveformEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalFrequency )( 
            IWX218xAM * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalFrequency )( 
            IWX218xAM * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IWX218xAMVtbl;

    interface IWX218xAM
    {
        CONST_VTBL struct IWX218xAMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xAM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xAM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xAM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xAM_ConfigureInternal(This,Depth,Waveform,Frequency)	\
    ( (This)->lpVtbl -> ConfigureInternal(This,Depth,Waveform,Frequency) ) 

#define IWX218xAM_ConfigureAMEnabled(This,Channel,Enabled)	\
    ( (This)->lpVtbl -> ConfigureAMEnabled(This,Channel,Enabled) ) 

#define IWX218xAM_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xAM_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#define IWX218xAM_get_InternalDepth(This,Val)	\
    ( (This)->lpVtbl -> get_InternalDepth(This,Val) ) 

#define IWX218xAM_put_InternalDepth(This,Val)	\
    ( (This)->lpVtbl -> put_InternalDepth(This,Val) ) 

#define IWX218xAM_get_InternalWaveform(This,Val)	\
    ( (This)->lpVtbl -> get_InternalWaveform(This,Val) ) 

#define IWX218xAM_put_InternalWaveform(This,Val)	\
    ( (This)->lpVtbl -> put_InternalWaveform(This,Val) ) 

#define IWX218xAM_get_InternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_InternalFrequency(This,Val) ) 

#define IWX218xAM_put_InternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_InternalFrequency(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xAM_INTERFACE_DEFINED__ */


#ifndef __IWX218xChannelSync_INTERFACE_DEFINED__
#define __IWX218xChannelSync_INTERFACE_DEFINED__

/* interface IWX218xChannelSync */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xChannelSync;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7e13f2a4-751b-4bc3-8197-91f8576a5428")
    IWX218xChannelSync : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSyncEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSyncFunction( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xOutputSyncFunctionEnum Function) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSyncPosition( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Position) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSyncSource( 
            /* [in] */ enum WX218xOutputSyncSourceEnum Source) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSyncWidth( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Width) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Function( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xOutputSyncFunctionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Function( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xOutputSyncFunctionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum WX218xOutputSyncSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum WX218xOutputSyncSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xChannelSyncVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xChannelSync * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xChannelSync * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xChannelSync * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSyncEnabled )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSyncFunction )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xOutputSyncFunctionEnum Function);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSyncPosition )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Position);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSyncSource )( 
            IWX218xChannelSync * This,
            /* [in] */ enum WX218xOutputSyncSourceEnum Source);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSyncWidth )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Width);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Function )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xOutputSyncFunctionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Function )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xOutputSyncFunctionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IWX218xChannelSync * This,
            /* [retval][out] */ enum WX218xOutputSyncSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IWX218xChannelSync * This,
            /* [in] */ enum WX218xOutputSyncSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IWX218xChannelSync * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        END_INTERFACE
    } IWX218xChannelSyncVtbl;

    interface IWX218xChannelSync
    {
        CONST_VTBL struct IWX218xChannelSyncVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xChannelSync_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xChannelSync_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xChannelSync_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xChannelSync_ConfigureSyncEnabled(This,Channel,Enabled)	\
    ( (This)->lpVtbl -> ConfigureSyncEnabled(This,Channel,Enabled) ) 

#define IWX218xChannelSync_ConfigureSyncFunction(This,Channel,Function)	\
    ( (This)->lpVtbl -> ConfigureSyncFunction(This,Channel,Function) ) 

#define IWX218xChannelSync_ConfigureSyncPosition(This,Channel,Position)	\
    ( (This)->lpVtbl -> ConfigureSyncPosition(This,Channel,Position) ) 

#define IWX218xChannelSync_ConfigureSyncSource(This,Source)	\
    ( (This)->lpVtbl -> ConfigureSyncSource(This,Source) ) 

#define IWX218xChannelSync_ConfigureSyncWidth(This,Channel,Width)	\
    ( (This)->lpVtbl -> ConfigureSyncWidth(This,Channel,Width) ) 

#define IWX218xChannelSync_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xChannelSync_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#define IWX218xChannelSync_get_Function(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Function(This,Channel,Val) ) 

#define IWX218xChannelSync_put_Function(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Function(This,Channel,Val) ) 

#define IWX218xChannelSync_get_Position(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Position(This,Channel,Val) ) 

#define IWX218xChannelSync_put_Position(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Position(This,Channel,Val) ) 

#define IWX218xChannelSync_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IWX218xChannelSync_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define IWX218xChannelSync_get_Width(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Width(This,Channel,Val) ) 

#define IWX218xChannelSync_put_Width(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Width(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xChannelSync_INTERFACE_DEFINED__ */


#ifndef __IWX218xStandardWaveform_INTERFACE_DEFINED__
#define __IWX218xStandardWaveform_INTERFACE_DEFINED__

/* interface IWX218xStandardWaveform */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xStandardWaveform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5897b7fa-6a10-4b53-8a2e-16b43e06da76")
    IWX218xStandardWaveform : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureRampWaveform( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Delay,
            /* [in] */ double RiseTime,
            /* [in] */ double FallTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetAmplitudeMax( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetAmplitudeMin( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetDCOffsetMax( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetDCOffsetMin( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetFrequencyMax( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetFrequencyMin( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetPowerMax( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetPowerMin( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xWaveformEnum Waveform,
            /* [in] */ double Amplitude,
            /* [in] */ double DCOffset,
            /* [in] */ double Frequency,
            /* [in] */ double StartPhase) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDCLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double DcLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDutyCycle( 
            /* [in] */ BSTR Channel,
            /* [in] */ double DutyCycle) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureExponenent( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Exponent) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureGauss( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Gauss) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureHvAmplitude( 
            /* [in] */ BSTR Channel,
            /* [in] */ double HvAmplitude) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePower( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Power) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSincNCycles( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Cycles) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAmplitudeAllCh( 
            /* [in] */ double Amplitude) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureHVAmplAllCh( 
            /* [in] */ double HVAmplitude) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureOffsetAllCh( 
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Amplitude( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Amplitude( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DcLevel( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DcLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DCOffset( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DCOffset( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DutyCycleHigh( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DutyCycleHigh( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExpExponent( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ExpExponent( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_GaussExponent( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_GaussExponent( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Power( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Power( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RampDelay( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RampDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RampFallTime( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RampFallTime( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RampRiseTime( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RampRiseTime( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SincNCycle( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SincNCycle( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StartPhase( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StartPhase( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HvAmplitude( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HvAmplitude( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Waveform( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xWaveformEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Waveform( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xWaveformEnum Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xStandardWaveformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xStandardWaveform * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xStandardWaveform * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xStandardWaveform * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRampWaveform )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Delay,
            /* [in] */ double RiseTime,
            /* [in] */ double FallTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetAmplitudeMax )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetAmplitudeMin )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetDCOffsetMax )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetDCOffsetMin )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetFrequencyMax )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetFrequencyMin )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetPowerMax )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetPowerMin )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xWaveformEnum Waveform,
            /* [in] */ double Amplitude,
            /* [in] */ double DCOffset,
            /* [in] */ double Frequency,
            /* [in] */ double StartPhase);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDCLevel )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double DcLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDutyCycle )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double DutyCycle);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureExponenent )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Exponent);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureGauss )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Gauss);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureHvAmplitude )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double HvAmplitude);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePower )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Power);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSincNCycles )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Cycles);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAmplitudeAllCh )( 
            IWX218xStandardWaveform * This,
            /* [in] */ double Amplitude);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureHVAmplAllCh )( 
            IWX218xStandardWaveform * This,
            /* [in] */ double HVAmplitude);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureOffsetAllCh )( 
            IWX218xStandardWaveform * This,
            /* [in] */ double Offset);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Amplitude )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Amplitude )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DcLevel )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DcLevel )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCOffset )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DCOffset )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DutyCycleHigh )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DutyCycleHigh )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpExponent )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpExponent )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GaussExponent )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GaussExponent )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Power )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Power )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RampDelay )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RampDelay )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RampFallTime )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RampFallTime )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RampRiseTime )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RampRiseTime )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SincNCycle )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SincNCycle )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPhase )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartPhase )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HvAmplitude )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HvAmplitude )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Waveform )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xWaveformEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Waveform )( 
            IWX218xStandardWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xWaveformEnum Val);
        
        END_INTERFACE
    } IWX218xStandardWaveformVtbl;

    interface IWX218xStandardWaveform
    {
        CONST_VTBL struct IWX218xStandardWaveformVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xStandardWaveform_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xStandardWaveform_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xStandardWaveform_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xStandardWaveform_ConfigureRampWaveform(This,Channel,Delay,RiseTime,FallTime)	\
    ( (This)->lpVtbl -> ConfigureRampWaveform(This,Channel,Delay,RiseTime,FallTime) ) 

#define IWX218xStandardWaveform_SetAmplitudeMax(This,Channel)	\
    ( (This)->lpVtbl -> SetAmplitudeMax(This,Channel) ) 

#define IWX218xStandardWaveform_SetAmplitudeMin(This,Channel)	\
    ( (This)->lpVtbl -> SetAmplitudeMin(This,Channel) ) 

#define IWX218xStandardWaveform_SetDCOffsetMax(This,Channel)	\
    ( (This)->lpVtbl -> SetDCOffsetMax(This,Channel) ) 

#define IWX218xStandardWaveform_SetDCOffsetMin(This,Channel)	\
    ( (This)->lpVtbl -> SetDCOffsetMin(This,Channel) ) 

#define IWX218xStandardWaveform_SetFrequencyMax(This,Channel)	\
    ( (This)->lpVtbl -> SetFrequencyMax(This,Channel) ) 

#define IWX218xStandardWaveform_SetFrequencyMin(This,Channel)	\
    ( (This)->lpVtbl -> SetFrequencyMin(This,Channel) ) 

#define IWX218xStandardWaveform_SetPowerMax(This,Channel)	\
    ( (This)->lpVtbl -> SetPowerMax(This,Channel) ) 

#define IWX218xStandardWaveform_SetPowerMin(This,Channel)	\
    ( (This)->lpVtbl -> SetPowerMin(This,Channel) ) 

#define IWX218xStandardWaveform_Configure(This,Channel,Waveform,Amplitude,DCOffset,Frequency,StartPhase)	\
    ( (This)->lpVtbl -> Configure(This,Channel,Waveform,Amplitude,DCOffset,Frequency,StartPhase) ) 

#define IWX218xStandardWaveform_ConfigureDCLevel(This,Channel,DcLevel)	\
    ( (This)->lpVtbl -> ConfigureDCLevel(This,Channel,DcLevel) ) 

#define IWX218xStandardWaveform_ConfigureDutyCycle(This,Channel,DutyCycle)	\
    ( (This)->lpVtbl -> ConfigureDutyCycle(This,Channel,DutyCycle) ) 

#define IWX218xStandardWaveform_ConfigureExponenent(This,Channel,Exponent)	\
    ( (This)->lpVtbl -> ConfigureExponenent(This,Channel,Exponent) ) 

#define IWX218xStandardWaveform_ConfigureGauss(This,Channel,Gauss)	\
    ( (This)->lpVtbl -> ConfigureGauss(This,Channel,Gauss) ) 

#define IWX218xStandardWaveform_ConfigureHvAmplitude(This,Channel,HvAmplitude)	\
    ( (This)->lpVtbl -> ConfigureHvAmplitude(This,Channel,HvAmplitude) ) 

#define IWX218xStandardWaveform_ConfigurePower(This,Channel,Power)	\
    ( (This)->lpVtbl -> ConfigurePower(This,Channel,Power) ) 

#define IWX218xStandardWaveform_ConfigureSincNCycles(This,Channel,Cycles)	\
    ( (This)->lpVtbl -> ConfigureSincNCycles(This,Channel,Cycles) ) 

#define IWX218xStandardWaveform_ConfigureAmplitudeAllCh(This,Amplitude)	\
    ( (This)->lpVtbl -> ConfigureAmplitudeAllCh(This,Amplitude) ) 

#define IWX218xStandardWaveform_ConfigureHVAmplAllCh(This,HVAmplitude)	\
    ( (This)->lpVtbl -> ConfigureHVAmplAllCh(This,HVAmplitude) ) 

#define IWX218xStandardWaveform_ConfigureOffsetAllCh(This,Offset)	\
    ( (This)->lpVtbl -> ConfigureOffsetAllCh(This,Offset) ) 

#define IWX218xStandardWaveform_get_Amplitude(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Amplitude(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_Amplitude(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Amplitude(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_DcLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_DcLevel(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_DcLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_DcLevel(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_DCOffset(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_DCOffset(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_DCOffset(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_DCOffset(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_DutyCycleHigh(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_DutyCycleHigh(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_DutyCycleHigh(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_DutyCycleHigh(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_ExpExponent(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_ExpExponent(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_ExpExponent(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_ExpExponent(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_Frequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_Frequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Frequency(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_GaussExponent(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_GaussExponent(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_GaussExponent(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_GaussExponent(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_Power(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Power(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_Power(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Power(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_RampDelay(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_RampDelay(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_RampDelay(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_RampDelay(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_RampFallTime(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_RampFallTime(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_RampFallTime(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_RampFallTime(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_RampRiseTime(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_RampRiseTime(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_RampRiseTime(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_RampRiseTime(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_SincNCycle(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_SincNCycle(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_SincNCycle(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_SincNCycle(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_StartPhase(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_StartPhase(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_StartPhase(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_StartPhase(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_HvAmplitude(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_HvAmplitude(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_HvAmplitude(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_HvAmplitude(This,Channel,Val) ) 

#define IWX218xStandardWaveform_get_Waveform(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Waveform(This,Channel,Val) ) 

#define IWX218xStandardWaveform_put_Waveform(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Waveform(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xStandardWaveform_INTERFACE_DEFINED__ */


#ifndef __IWX218xArbitrary_INTERFACE_DEFINED__
#define __IWX218xArbitrary_INTERFACE_DEFINED__

/* interface IWX218xArbitrary */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xArbitrary;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2cb79de8-c3f8-4552-8619-a6af9da4108f")
    IWX218xArbitrary : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ClearMemory( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetSampleRateMax( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetSampleRateMin( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureClockDivider( 
            /* [in] */ BSTR Channel,
            /* [in] */ long ClockDivider) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSampleRateSource( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSampleRateSourceEnum SampleRateSource) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureArbSource( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitrarySourceEnum Source) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureArbTiming( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitraryTimingEnum Timing) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFreqRastDivider( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xFreqDividerEnum Divider) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureArbGain( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Gain) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureArbOffset( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureArbSampleRate( 
            /* [in] */ double SampleRate) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ClockDivider( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ClockDivider( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Gain( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Gain( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SampleRate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SampleRate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SampleRateSource( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSampleRateSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SampleRateSource( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSampleRateSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xArbitrarySourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitrarySourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Timing( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xArbitraryTimingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Timing( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitraryTimingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Waveform( 
            /* [retval][out] */ IWX218xArbitraryWaveform **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Sequence( 
            /* [retval][out] */ IWX218xArbitrarySequence **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FreqRastDivider( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xFreqDividerEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FreqRastDivider( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xFreqDividerEnum Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xArbitraryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xArbitrary * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xArbitrary * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xArbitrary * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ClearMemory )( 
            IWX218xArbitrary * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetSampleRateMax )( 
            IWX218xArbitrary * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetSampleRateMin )( 
            IWX218xArbitrary * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureClockDivider )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long ClockDivider);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSampleRateSource )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSampleRateSourceEnum SampleRateSource);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureArbSource )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitrarySourceEnum Source);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureArbTiming )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitraryTimingEnum Timing);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFreqRastDivider )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xFreqDividerEnum Divider);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureArbGain )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Gain);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureArbOffset )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Offset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureArbSampleRate )( 
            IWX218xArbitrary * This,
            /* [in] */ double SampleRate);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClockDivider )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClockDivider )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gain )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gain )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleRate )( 
            IWX218xArbitrary * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleRate )( 
            IWX218xArbitrary * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleRateSource )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSampleRateSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleRateSource )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSampleRateSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xArbitrarySourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitrarySourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timing )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xArbitraryTimingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Timing )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitraryTimingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Waveform )( 
            IWX218xArbitrary * This,
            /* [retval][out] */ IWX218xArbitraryWaveform **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sequence )( 
            IWX218xArbitrary * This,
            /* [retval][out] */ IWX218xArbitrarySequence **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FreqRastDivider )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xFreqDividerEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FreqRastDivider )( 
            IWX218xArbitrary * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xFreqDividerEnum Val);
        
        END_INTERFACE
    } IWX218xArbitraryVtbl;

    interface IWX218xArbitrary
    {
        CONST_VTBL struct IWX218xArbitraryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xArbitrary_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xArbitrary_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xArbitrary_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xArbitrary_ClearMemory(This)	\
    ( (This)->lpVtbl -> ClearMemory(This) ) 

#define IWX218xArbitrary_SetSampleRateMax(This)	\
    ( (This)->lpVtbl -> SetSampleRateMax(This) ) 

#define IWX218xArbitrary_SetSampleRateMin(This)	\
    ( (This)->lpVtbl -> SetSampleRateMin(This) ) 

#define IWX218xArbitrary_ConfigureClockDivider(This,Channel,ClockDivider)	\
    ( (This)->lpVtbl -> ConfigureClockDivider(This,Channel,ClockDivider) ) 

#define IWX218xArbitrary_ConfigureSampleRateSource(This,Channel,SampleRateSource)	\
    ( (This)->lpVtbl -> ConfigureSampleRateSource(This,Channel,SampleRateSource) ) 

#define IWX218xArbitrary_ConfigureArbSource(This,Channel,Source)	\
    ( (This)->lpVtbl -> ConfigureArbSource(This,Channel,Source) ) 

#define IWX218xArbitrary_ConfigureArbTiming(This,Channel,Timing)	\
    ( (This)->lpVtbl -> ConfigureArbTiming(This,Channel,Timing) ) 

#define IWX218xArbitrary_ConfigureFreqRastDivider(This,Channel,Divider)	\
    ( (This)->lpVtbl -> ConfigureFreqRastDivider(This,Channel,Divider) ) 

#define IWX218xArbitrary_ConfigureArbGain(This,Channel,Gain)	\
    ( (This)->lpVtbl -> ConfigureArbGain(This,Channel,Gain) ) 

#define IWX218xArbitrary_ConfigureArbOffset(This,Channel,Offset)	\
    ( (This)->lpVtbl -> ConfigureArbOffset(This,Channel,Offset) ) 

#define IWX218xArbitrary_ConfigureArbSampleRate(This,SampleRate)	\
    ( (This)->lpVtbl -> ConfigureArbSampleRate(This,SampleRate) ) 

#define IWX218xArbitrary_get_ClockDivider(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_ClockDivider(This,Channel,Val) ) 

#define IWX218xArbitrary_put_ClockDivider(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_ClockDivider(This,Channel,Val) ) 

#define IWX218xArbitrary_get_Gain(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Gain(This,Channel,Val) ) 

#define IWX218xArbitrary_put_Gain(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Gain(This,Channel,Val) ) 

#define IWX218xArbitrary_get_Offset(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Offset(This,Channel,Val) ) 

#define IWX218xArbitrary_put_Offset(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Offset(This,Channel,Val) ) 

#define IWX218xArbitrary_get_SampleRate(This,Val)	\
    ( (This)->lpVtbl -> get_SampleRate(This,Val) ) 

#define IWX218xArbitrary_put_SampleRate(This,Val)	\
    ( (This)->lpVtbl -> put_SampleRate(This,Val) ) 

#define IWX218xArbitrary_get_SampleRateSource(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_SampleRateSource(This,Channel,Val) ) 

#define IWX218xArbitrary_put_SampleRateSource(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_SampleRateSource(This,Channel,Val) ) 

#define IWX218xArbitrary_get_Source(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Channel,Val) ) 

#define IWX218xArbitrary_put_Source(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Channel,Val) ) 

#define IWX218xArbitrary_get_Timing(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Timing(This,Channel,Val) ) 

#define IWX218xArbitrary_put_Timing(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Timing(This,Channel,Val) ) 

#define IWX218xArbitrary_get_Waveform(This,Val)	\
    ( (This)->lpVtbl -> get_Waveform(This,Val) ) 

#define IWX218xArbitrary_get_Sequence(This,Val)	\
    ( (This)->lpVtbl -> get_Sequence(This,Val) ) 

#define IWX218xArbitrary_get_FreqRastDivider(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_FreqRastDivider(This,Channel,Val) ) 

#define IWX218xArbitrary_put_FreqRastDivider(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_FreqRastDivider(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xArbitrary_INTERFACE_DEFINED__ */


#ifndef __IWX218xArbitraryWaveform_INTERFACE_DEFINED__
#define __IWX218xArbitraryWaveform_INTERFACE_DEFINED__

/* interface IWX218xArbitraryWaveform */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xArbitraryWaveform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5cb181df-5a2c-4013-b17e-d36e407429b6")
    IWX218xArbitraryWaveform : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Clear( 
            /* [in] */ long Handle) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Handle,
            /* [in] */ double Gain,
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadArbWfmFromFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateCustom( 
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadArbWfmFromFileAdv( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName1,
            /* [in] */ BSTR FileName2,
            /* [out][in] */ long *Handle1,
            /* [out][in] */ long *Handle2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateCustomAdv( 
            /* [in] */ SAFEARRAY * *Data1,
            /* [in] */ SAFEARRAY * *Data2,
            /* [out][in] */ long *Handle1,
            /* [out][in] */ long *Handle2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetCoupleActiveSegment( 
            /* [in] */ long SegNum1,
            /* [in] */ long SegNum2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetActiveSegment( 
            /* [in] */ BSTR Channel,
            /* [in] */ long SegNum) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureArbWaveTraceMode( 
            /* [in] */ enum WX218xTraceModeEnum TraceMode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadBinaryArbWfmFromFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadBinaryArbWfmFromFileAdv( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName1,
            /* [in] */ BSTR FileName2,
            /* [out][in] */ long *Handle1,
            /* [out][in] */ long *Handle2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadAsciiArbWfmFromFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadAsciiArbWfmFromFileAdv( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName1,
            /* [in] */ BSTR FileName2,
            /* [out][in] */ long *Handle1,
            /* [out][in] */ long *Handle2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDownloadRecord( 
            /* [in] */ enum WX218xArbDownloadRecordEnum DownloadRecord) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadCSVFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadCSVFileAdv( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName1,
            /* [in] */ BSTR FileName2,
            /* [out][in] */ long *Handle1,
            /* [out][in] */ long *Handle2) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumberWaveformsMax( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Quantum( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SizeMax( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SizeMin( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TraceMode( 
            /* [retval][out] */ enum WX218xTraceModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TraceMode( 
            /* [in] */ enum WX218xTraceModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FastDownload( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FastDownload( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DownloadRecord( 
            /* [retval][out] */ enum WX218xArbDownloadRecordEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DownloadRecord( 
            /* [in] */ enum WX218xArbDownloadRecordEnum Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xArbitraryWaveformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xArbitraryWaveform * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xArbitraryWaveform * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ long Handle);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Handle,
            /* [in] */ double Gain,
            /* [in] */ double Offset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadArbWfmFromFile )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateCustom )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadArbWfmFromFileAdv )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName1,
            /* [in] */ BSTR FileName2,
            /* [out][in] */ long *Handle1,
            /* [out][in] */ long *Handle2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateCustomAdv )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ SAFEARRAY * *Data1,
            /* [in] */ SAFEARRAY * *Data2,
            /* [out][in] */ long *Handle1,
            /* [out][in] */ long *Handle2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetCoupleActiveSegment )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ long SegNum1,
            /* [in] */ long SegNum2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetActiveSegment )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long SegNum);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureArbWaveTraceMode )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ enum WX218xTraceModeEnum TraceMode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadBinaryArbWfmFromFile )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadBinaryArbWfmFromFileAdv )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName1,
            /* [in] */ BSTR FileName2,
            /* [out][in] */ long *Handle1,
            /* [out][in] */ long *Handle2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadAsciiArbWfmFromFile )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadAsciiArbWfmFromFileAdv )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName1,
            /* [in] */ BSTR FileName2,
            /* [out][in] */ long *Handle1,
            /* [out][in] */ long *Handle2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDownloadRecord )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ enum WX218xArbDownloadRecordEnum DownloadRecord);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadCSVFile )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadCSVFileAdv )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName1,
            /* [in] */ BSTR FileName2,
            /* [out][in] */ long *Handle1,
            /* [out][in] */ long *Handle2);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberWaveformsMax )( 
            IWX218xArbitraryWaveform * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Quantum )( 
            IWX218xArbitraryWaveform * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeMax )( 
            IWX218xArbitraryWaveform * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeMin )( 
            IWX218xArbitraryWaveform * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TraceMode )( 
            IWX218xArbitraryWaveform * This,
            /* [retval][out] */ enum WX218xTraceModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TraceMode )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ enum WX218xTraceModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FastDownload )( 
            IWX218xArbitraryWaveform * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FastDownload )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadRecord )( 
            IWX218xArbitraryWaveform * This,
            /* [retval][out] */ enum WX218xArbDownloadRecordEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DownloadRecord )( 
            IWX218xArbitraryWaveform * This,
            /* [in] */ enum WX218xArbDownloadRecordEnum Val);
        
        END_INTERFACE
    } IWX218xArbitraryWaveformVtbl;

    interface IWX218xArbitraryWaveform
    {
        CONST_VTBL struct IWX218xArbitraryWaveformVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xArbitraryWaveform_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xArbitraryWaveform_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xArbitraryWaveform_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xArbitraryWaveform_Clear(This,Handle)	\
    ( (This)->lpVtbl -> Clear(This,Handle) ) 

#define IWX218xArbitraryWaveform_Configure(This,Channel,Handle,Gain,Offset)	\
    ( (This)->lpVtbl -> Configure(This,Channel,Handle,Gain,Offset) ) 

#define IWX218xArbitraryWaveform_Create(This,Data,Val)	\
    ( (This)->lpVtbl -> Create(This,Data,Val) ) 

#define IWX218xArbitraryWaveform_LoadArbWfmFromFile(This,Channel,FileName,Val)	\
    ( (This)->lpVtbl -> LoadArbWfmFromFile(This,Channel,FileName,Val) ) 

#define IWX218xArbitraryWaveform_CreateCustom(This,Data,Val)	\
    ( (This)->lpVtbl -> CreateCustom(This,Data,Val) ) 

#define IWX218xArbitraryWaveform_LoadArbWfmFromFileAdv(This,Channel,FileName1,FileName2,Handle1,Handle2)	\
    ( (This)->lpVtbl -> LoadArbWfmFromFileAdv(This,Channel,FileName1,FileName2,Handle1,Handle2) ) 

#define IWX218xArbitraryWaveform_CreateCustomAdv(This,Data1,Data2,Handle1,Handle2)	\
    ( (This)->lpVtbl -> CreateCustomAdv(This,Data1,Data2,Handle1,Handle2) ) 

#define IWX218xArbitraryWaveform_SetCoupleActiveSegment(This,SegNum1,SegNum2)	\
    ( (This)->lpVtbl -> SetCoupleActiveSegment(This,SegNum1,SegNum2) ) 

#define IWX218xArbitraryWaveform_SetActiveSegment(This,Channel,SegNum)	\
    ( (This)->lpVtbl -> SetActiveSegment(This,Channel,SegNum) ) 

#define IWX218xArbitraryWaveform_ConfigureArbWaveTraceMode(This,TraceMode)	\
    ( (This)->lpVtbl -> ConfigureArbWaveTraceMode(This,TraceMode) ) 

#define IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFile(This,Channel,FileName,Val)	\
    ( (This)->lpVtbl -> LoadBinaryArbWfmFromFile(This,Channel,FileName,Val) ) 

#define IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFileAdv(This,Channel,FileName1,FileName2,Handle1,Handle2)	\
    ( (This)->lpVtbl -> LoadBinaryArbWfmFromFileAdv(This,Channel,FileName1,FileName2,Handle1,Handle2) ) 

#define IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFile(This,Channel,FileName,Val)	\
    ( (This)->lpVtbl -> LoadAsciiArbWfmFromFile(This,Channel,FileName,Val) ) 

#define IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFileAdv(This,Channel,FileName1,FileName2,Handle1,Handle2)	\
    ( (This)->lpVtbl -> LoadAsciiArbWfmFromFileAdv(This,Channel,FileName1,FileName2,Handle1,Handle2) ) 

#define IWX218xArbitraryWaveform_ConfigureDownloadRecord(This,DownloadRecord)	\
    ( (This)->lpVtbl -> ConfigureDownloadRecord(This,DownloadRecord) ) 

#define IWX218xArbitraryWaveform_LoadCSVFile(This,Channel,FileName,Val)	\
    ( (This)->lpVtbl -> LoadCSVFile(This,Channel,FileName,Val) ) 

#define IWX218xArbitraryWaveform_LoadCSVFileAdv(This,Channel,FileName1,FileName2,Handle1,Handle2)	\
    ( (This)->lpVtbl -> LoadCSVFileAdv(This,Channel,FileName1,FileName2,Handle1,Handle2) ) 

#define IWX218xArbitraryWaveform_get_NumberWaveformsMax(This,Val)	\
    ( (This)->lpVtbl -> get_NumberWaveformsMax(This,Val) ) 

#define IWX218xArbitraryWaveform_get_Quantum(This,Val)	\
    ( (This)->lpVtbl -> get_Quantum(This,Val) ) 

#define IWX218xArbitraryWaveform_get_SizeMax(This,Val)	\
    ( (This)->lpVtbl -> get_SizeMax(This,Val) ) 

#define IWX218xArbitraryWaveform_get_SizeMin(This,Val)	\
    ( (This)->lpVtbl -> get_SizeMin(This,Val) ) 

#define IWX218xArbitraryWaveform_get_TraceMode(This,Val)	\
    ( (This)->lpVtbl -> get_TraceMode(This,Val) ) 

#define IWX218xArbitraryWaveform_put_TraceMode(This,Val)	\
    ( (This)->lpVtbl -> put_TraceMode(This,Val) ) 

#define IWX218xArbitraryWaveform_get_FastDownload(This,Val)	\
    ( (This)->lpVtbl -> get_FastDownload(This,Val) ) 

#define IWX218xArbitraryWaveform_put_FastDownload(This,Val)	\
    ( (This)->lpVtbl -> put_FastDownload(This,Val) ) 

#define IWX218xArbitraryWaveform_get_DownloadRecord(This,Val)	\
    ( (This)->lpVtbl -> get_DownloadRecord(This,Val) ) 

#define IWX218xArbitraryWaveform_put_DownloadRecord(This,Val)	\
    ( (This)->lpVtbl -> put_DownloadRecord(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xArbitraryWaveform_INTERFACE_DEFINED__ */


#ifndef __IWX218xArbitrarySequence_INTERFACE_DEFINED__
#define __IWX218xArbitrarySequence_INTERFACE_DEFINED__

/* interface IWX218xArbitrarySequence */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xArbitrarySequence;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27cd29ca-aac3-441f-af84-4b6f383b202b")
    IWX218xArbitrarySequence : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Clear( 
            /* [in] */ long Handle) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Handle,
            /* [in] */ double Gain,
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ SAFEARRAY * *WfmHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateSequenceAdv( 
            /* [in] */ SAFEARRAY * *WfmHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [in] */ SAFEARRAY * *JumpFlag,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetCoupleActiveSequence( 
            /* [in] */ long SeqNum1,
            /* [in] */ long SeqNum2) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetActiveSequence( 
            /* [in] */ BSTR Channel,
            /* [in] */ long SeqNum) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateSequenceAdv1( 
            /* [in] */ SAFEARRAY * *WfmHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [in] */ SAFEARRAY * *JumpFlag,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAdvanceMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceAdvanceModeEnum AdvanceMode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSeqJumpEvent( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceJumpEventEnum JumpEvent) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSeqPrestep( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequencePrestepEnum Prestep) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSeqSource( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceSourceEnum Source) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSeqSyncLock( 
            /* [in] */ BSTR Channel,
            /* [in] */ long SyncLock) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSeqTiming( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceTimingEnum Timing) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureOnceCount( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AdvanceMode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSequenceAdvanceModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AdvanceMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceAdvanceModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_JumpEvent( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSequenceJumpEventEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_JumpEvent( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceJumpEventEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LengthMax( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LengthMin( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LoopCountMax( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumberSequenceMax( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSequenceSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SyncLock( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SyncLock( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Timing( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSequenceTimingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Timing( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceTimingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AdvanceSequence( 
            /* [retval][out] */ IWX218xArbitrarySequenceAdvanceSequence **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_QuickSequence( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_QuickSequence( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Prestep( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSequencePrestepEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Prestep( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequencePrestepEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OnceCount( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OnceCount( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xArbitrarySequenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xArbitrarySequence * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xArbitrarySequence * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ long Handle);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Handle,
            /* [in] */ double Gain,
            /* [in] */ double Offset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ SAFEARRAY * *WfmHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateSequenceAdv )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ SAFEARRAY * *WfmHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [in] */ SAFEARRAY * *JumpFlag,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetCoupleActiveSequence )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ long SeqNum1,
            /* [in] */ long SeqNum2);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetActiveSequence )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long SeqNum);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateSequenceAdv1 )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ SAFEARRAY * *WfmHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [in] */ SAFEARRAY * *JumpFlag,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAdvanceMode )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceAdvanceModeEnum AdvanceMode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSeqJumpEvent )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceJumpEventEnum JumpEvent);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSeqPrestep )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequencePrestepEnum Prestep);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSeqSource )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceSourceEnum Source);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSeqSyncLock )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long SyncLock);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSeqTiming )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceTimingEnum Timing);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureOnceCount )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Count);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvanceMode )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSequenceAdvanceModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdvanceMode )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceAdvanceModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_JumpEvent )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSequenceJumpEventEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_JumpEvent )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceJumpEventEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LengthMax )( 
            IWX218xArbitrarySequence * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LengthMin )( 
            IWX218xArbitrarySequence * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoopCountMax )( 
            IWX218xArbitrarySequence * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberSequenceMax )( 
            IWX218xArbitrarySequence * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSequenceSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SyncLock )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SyncLock )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timing )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSequenceTimingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Timing )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequenceTimingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvanceSequence )( 
            IWX218xArbitrarySequence * This,
            /* [retval][out] */ IWX218xArbitrarySequenceAdvanceSequence **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_QuickSequence )( 
            IWX218xArbitrarySequence * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_QuickSequence )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Prestep )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSequencePrestepEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Prestep )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSequencePrestepEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OnceCount )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OnceCount )( 
            IWX218xArbitrarySequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        END_INTERFACE
    } IWX218xArbitrarySequenceVtbl;

    interface IWX218xArbitrarySequence
    {
        CONST_VTBL struct IWX218xArbitrarySequenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xArbitrarySequence_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xArbitrarySequence_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xArbitrarySequence_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xArbitrarySequence_Clear(This,Handle)	\
    ( (This)->lpVtbl -> Clear(This,Handle) ) 

#define IWX218xArbitrarySequence_Configure(This,Channel,Handle,Gain,Offset)	\
    ( (This)->lpVtbl -> Configure(This,Channel,Handle,Gain,Offset) ) 

#define IWX218xArbitrarySequence_Create(This,WfmHandle,LoopCount,Val)	\
    ( (This)->lpVtbl -> Create(This,WfmHandle,LoopCount,Val) ) 

#define IWX218xArbitrarySequence_CreateSequenceAdv(This,WfmHandle,LoopCount,JumpFlag,Val)	\
    ( (This)->lpVtbl -> CreateSequenceAdv(This,WfmHandle,LoopCount,JumpFlag,Val) ) 

#define IWX218xArbitrarySequence_SetCoupleActiveSequence(This,SeqNum1,SeqNum2)	\
    ( (This)->lpVtbl -> SetCoupleActiveSequence(This,SeqNum1,SeqNum2) ) 

#define IWX218xArbitrarySequence_SetActiveSequence(This,Channel,SeqNum)	\
    ( (This)->lpVtbl -> SetActiveSequence(This,Channel,SeqNum) ) 

#define IWX218xArbitrarySequence_CreateSequenceAdv1(This,WfmHandle,LoopCount,JumpFlag,Val)	\
    ( (This)->lpVtbl -> CreateSequenceAdv1(This,WfmHandle,LoopCount,JumpFlag,Val) ) 

#define IWX218xArbitrarySequence_ConfigureAdvanceMode(This,Channel,AdvanceMode)	\
    ( (This)->lpVtbl -> ConfigureAdvanceMode(This,Channel,AdvanceMode) ) 

#define IWX218xArbitrarySequence_ConfigureSeqJumpEvent(This,Channel,JumpEvent)	\
    ( (This)->lpVtbl -> ConfigureSeqJumpEvent(This,Channel,JumpEvent) ) 

#define IWX218xArbitrarySequence_ConfigureSeqPrestep(This,Channel,Prestep)	\
    ( (This)->lpVtbl -> ConfigureSeqPrestep(This,Channel,Prestep) ) 

#define IWX218xArbitrarySequence_ConfigureSeqSource(This,Channel,Source)	\
    ( (This)->lpVtbl -> ConfigureSeqSource(This,Channel,Source) ) 

#define IWX218xArbitrarySequence_ConfigureSeqSyncLock(This,Channel,SyncLock)	\
    ( (This)->lpVtbl -> ConfigureSeqSyncLock(This,Channel,SyncLock) ) 

#define IWX218xArbitrarySequence_ConfigureSeqTiming(This,Channel,Timing)	\
    ( (This)->lpVtbl -> ConfigureSeqTiming(This,Channel,Timing) ) 

#define IWX218xArbitrarySequence_ConfigureOnceCount(This,Channel,Count)	\
    ( (This)->lpVtbl -> ConfigureOnceCount(This,Channel,Count) ) 

#define IWX218xArbitrarySequence_get_AdvanceMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_AdvanceMode(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_put_AdvanceMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_AdvanceMode(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_get_JumpEvent(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_JumpEvent(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_put_JumpEvent(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_JumpEvent(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_get_LengthMax(This,Val)	\
    ( (This)->lpVtbl -> get_LengthMax(This,Val) ) 

#define IWX218xArbitrarySequence_get_LengthMin(This,Val)	\
    ( (This)->lpVtbl -> get_LengthMin(This,Val) ) 

#define IWX218xArbitrarySequence_get_LoopCountMax(This,Val)	\
    ( (This)->lpVtbl -> get_LoopCountMax(This,Val) ) 

#define IWX218xArbitrarySequence_get_NumberSequenceMax(This,Val)	\
    ( (This)->lpVtbl -> get_NumberSequenceMax(This,Val) ) 

#define IWX218xArbitrarySequence_get_Source(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_put_Source(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_get_SyncLock(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_SyncLock(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_put_SyncLock(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_SyncLock(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_get_Timing(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Timing(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_put_Timing(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Timing(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_get_AdvanceSequence(This,Val)	\
    ( (This)->lpVtbl -> get_AdvanceSequence(This,Val) ) 

#define IWX218xArbitrarySequence_get_QuickSequence(This,Val)	\
    ( (This)->lpVtbl -> get_QuickSequence(This,Val) ) 

#define IWX218xArbitrarySequence_put_QuickSequence(This,Val)	\
    ( (This)->lpVtbl -> put_QuickSequence(This,Val) ) 

#define IWX218xArbitrarySequence_get_Prestep(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Prestep(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_put_Prestep(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Prestep(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_get_OnceCount(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_OnceCount(This,Channel,Val) ) 

#define IWX218xArbitrarySequence_put_OnceCount(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_OnceCount(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xArbitrarySequence_INTERFACE_DEFINED__ */


#ifndef __IWX218xArbitrarySequenceAdvanceSequence_INTERFACE_DEFINED__
#define __IWX218xArbitrarySequenceAdvanceSequence_INTERFACE_DEFINED__

/* interface IWX218xArbitrarySequenceAdvanceSequence */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xArbitrarySequenceAdvanceSequence;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("807128bd-9c38-4a56-a29c-38bb1b751f24")
    IWX218xArbitrarySequenceAdvanceSequence : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateAdvSequence( 
            /* [in] */ SAFEARRAY * *SeqHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [in] */ SAFEARRAY * *JumpFlag) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE DeleteAdvSequence( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateAdvSequence1( 
            /* [in] */ SAFEARRAY * *SeqHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [in] */ SAFEARRAY * *JumpFlag) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureOnceCount( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xAdvanceSequenceModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xAdvanceSequenceModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SyncLock( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SyncLock( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OnceCount( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OnceCount( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xArbitrarySequenceAdvanceSequenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xArbitrarySequenceAdvanceSequence * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xArbitrarySequenceAdvanceSequence * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xArbitrarySequenceAdvanceSequence * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateAdvSequence )( 
            IWX218xArbitrarySequenceAdvanceSequence * This,
            /* [in] */ SAFEARRAY * *SeqHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [in] */ SAFEARRAY * *JumpFlag);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *DeleteAdvSequence )( 
            IWX218xArbitrarySequenceAdvanceSequence * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateAdvSequence1 )( 
            IWX218xArbitrarySequenceAdvanceSequence * This,
            /* [in] */ SAFEARRAY * *SeqHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [in] */ SAFEARRAY * *JumpFlag);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureOnceCount )( 
            IWX218xArbitrarySequenceAdvanceSequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Count);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IWX218xArbitrarySequenceAdvanceSequence * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xAdvanceSequenceModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IWX218xArbitrarySequenceAdvanceSequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xAdvanceSequenceModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SyncLock )( 
            IWX218xArbitrarySequenceAdvanceSequence * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SyncLock )( 
            IWX218xArbitrarySequenceAdvanceSequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OnceCount )( 
            IWX218xArbitrarySequenceAdvanceSequence * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OnceCount )( 
            IWX218xArbitrarySequenceAdvanceSequence * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        END_INTERFACE
    } IWX218xArbitrarySequenceAdvanceSequenceVtbl;

    interface IWX218xArbitrarySequenceAdvanceSequence
    {
        CONST_VTBL struct IWX218xArbitrarySequenceAdvanceSequenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xArbitrarySequenceAdvanceSequence_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xArbitrarySequenceAdvanceSequence_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xArbitrarySequenceAdvanceSequence_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence(This,SeqHandle,LoopCount,JumpFlag)	\
    ( (This)->lpVtbl -> CreateAdvSequence(This,SeqHandle,LoopCount,JumpFlag) ) 

#define IWX218xArbitrarySequenceAdvanceSequence_DeleteAdvSequence(This)	\
    ( (This)->lpVtbl -> DeleteAdvSequence(This) ) 

#define IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence1(This,SeqHandle,LoopCount,JumpFlag)	\
    ( (This)->lpVtbl -> CreateAdvSequence1(This,SeqHandle,LoopCount,JumpFlag) ) 

#define IWX218xArbitrarySequenceAdvanceSequence_ConfigureOnceCount(This,Channel,Count)	\
    ( (This)->lpVtbl -> ConfigureOnceCount(This,Channel,Count) ) 

#define IWX218xArbitrarySequenceAdvanceSequence_get_Mode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Mode(This,Channel,Val) ) 

#define IWX218xArbitrarySequenceAdvanceSequence_put_Mode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Mode(This,Channel,Val) ) 

#define IWX218xArbitrarySequenceAdvanceSequence_get_SyncLock(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_SyncLock(This,Channel,Val) ) 

#define IWX218xArbitrarySequenceAdvanceSequence_put_SyncLock(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_SyncLock(This,Channel,Val) ) 

#define IWX218xArbitrarySequenceAdvanceSequence_get_OnceCount(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_OnceCount(This,Channel,Val) ) 

#define IWX218xArbitrarySequenceAdvanceSequence_put_OnceCount(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_OnceCount(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xArbitrarySequenceAdvanceSequence_INTERFACE_DEFINED__ */


#ifndef __IWX218xCarrierModulation_INTERFACE_DEFINED__
#define __IWX218xCarrierModulation_INTERFACE_DEFINED__

/* interface IWX218xCarrierModulation */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xCarrierModulation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f944e9c8-4f6b-44f4-876b-55ba626df90b")
    IWX218xCarrierModulation : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureCarrFreq( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Freq) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureCarrWaveform( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xCarrierModulationWaveformEnum Waveform) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Waveform( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xCarrierModulationWaveformEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Waveform( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xCarrierModulationWaveformEnum Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xCarrierModulationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xCarrierModulation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xCarrierModulation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xCarrierModulation * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCarrFreq )( 
            IWX218xCarrierModulation * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Freq);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCarrWaveform )( 
            IWX218xCarrierModulation * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xCarrierModulationWaveformEnum Waveform);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IWX218xCarrierModulation * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IWX218xCarrierModulation * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Waveform )( 
            IWX218xCarrierModulation * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xCarrierModulationWaveformEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Waveform )( 
            IWX218xCarrierModulation * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xCarrierModulationWaveformEnum Val);
        
        END_INTERFACE
    } IWX218xCarrierModulationVtbl;

    interface IWX218xCarrierModulation
    {
        CONST_VTBL struct IWX218xCarrierModulationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xCarrierModulation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xCarrierModulation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xCarrierModulation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xCarrierModulation_ConfigureCarrFreq(This,Channel,Freq)	\
    ( (This)->lpVtbl -> ConfigureCarrFreq(This,Channel,Freq) ) 

#define IWX218xCarrierModulation_ConfigureCarrWaveform(This,Channel,Waveform)	\
    ( (This)->lpVtbl -> ConfigureCarrWaveform(This,Channel,Waveform) ) 

#define IWX218xCarrierModulation_get_Frequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Channel,Val) ) 

#define IWX218xCarrierModulation_put_Frequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Frequency(This,Channel,Val) ) 

#define IWX218xCarrierModulation_get_Waveform(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Waveform(This,Channel,Val) ) 

#define IWX218xCarrierModulation_put_Waveform(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Waveform(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xCarrierModulation_INTERFACE_DEFINED__ */


#ifndef __IWX218xCouple_INTERFACE_DEFINED__
#define __IWX218xCouple_INTERFACE_DEFINED__

/* interface IWX218xCouple */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xCouple;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("214b8d58-df85-492c-86e9-ea6cea3aa851")
    IWX218xCouple : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureCoupleEnabled( 
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureCoupleOffset( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Offset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureCoupleSkew( 
            /* [in] */ double Skew) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Skew( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Skew( 
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xCoupleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xCouple * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xCouple * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xCouple * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCoupleEnabled )( 
            IWX218xCouple * This,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCoupleOffset )( 
            IWX218xCouple * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Offset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCoupleSkew )( 
            IWX218xCouple * This,
            /* [in] */ double Skew);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xCouple * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xCouple * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IWX218xCouple * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            IWX218xCouple * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Skew )( 
            IWX218xCouple * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Skew )( 
            IWX218xCouple * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IWX218xCoupleVtbl;

    interface IWX218xCouple
    {
        CONST_VTBL struct IWX218xCoupleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xCouple_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xCouple_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xCouple_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xCouple_ConfigureCoupleEnabled(This,Enabled)	\
    ( (This)->lpVtbl -> ConfigureCoupleEnabled(This,Enabled) ) 

#define IWX218xCouple_ConfigureCoupleOffset(This,Channel,Offset)	\
    ( (This)->lpVtbl -> ConfigureCoupleOffset(This,Channel,Offset) ) 

#define IWX218xCouple_ConfigureCoupleSkew(This,Skew)	\
    ( (This)->lpVtbl -> ConfigureCoupleSkew(This,Skew) ) 

#define IWX218xCouple_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IWX218xCouple_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IWX218xCouple_get_Offset(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Offset(This,Channel,Val) ) 

#define IWX218xCouple_put_Offset(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Offset(This,Channel,Val) ) 

#define IWX218xCouple_get_Skew(This,Val)	\
    ( (This)->lpVtbl -> get_Skew(This,Val) ) 

#define IWX218xCouple_put_Skew(This,Val)	\
    ( (This)->lpVtbl -> put_Skew(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xCouple_INTERFACE_DEFINED__ */


#ifndef __IWX218xFM_INTERFACE_DEFINED__
#define __IWX218xFM_INTERFACE_DEFINED__

/* interface IWX218xFM */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xFM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26fb734a-5020-4ee9-bf9d-c9e0c1b13b96")
    IWX218xFM : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureInternal( 
            /* [in] */ double Deviation,
            /* [in] */ enum WX218xFMInternalWaveformEnum Waveform,
            /* [in] */ double Frequency) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFMEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFMMarker( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Marker) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InternalDeviation( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InternalDeviation( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InternalFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InternalFrequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InternalWaveform( 
            /* [retval][out] */ enum WX218xFMInternalWaveformEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InternalWaveform( 
            /* [in] */ enum WX218xFMInternalWaveformEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Marker( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xFMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xFM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xFM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xFM * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureInternal )( 
            IWX218xFM * This,
            /* [in] */ double Deviation,
            /* [in] */ enum WX218xFMInternalWaveformEnum Waveform,
            /* [in] */ double Frequency);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFMEnabled )( 
            IWX218xFM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFMMarker )( 
            IWX218xFM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Marker);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xFM * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xFM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalDeviation )( 
            IWX218xFM * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalDeviation )( 
            IWX218xFM * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalFrequency )( 
            IWX218xFM * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalFrequency )( 
            IWX218xFM * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalWaveform )( 
            IWX218xFM * This,
            /* [retval][out] */ enum WX218xFMInternalWaveformEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalWaveform )( 
            IWX218xFM * This,
            /* [in] */ enum WX218xFMInternalWaveformEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IWX218xFM * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Marker )( 
            IWX218xFM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IWX218xFMVtbl;

    interface IWX218xFM
    {
        CONST_VTBL struct IWX218xFMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xFM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xFM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xFM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xFM_ConfigureInternal(This,Deviation,Waveform,Frequency)	\
    ( (This)->lpVtbl -> ConfigureInternal(This,Deviation,Waveform,Frequency) ) 

#define IWX218xFM_ConfigureFMEnabled(This,Channel,Enabled)	\
    ( (This)->lpVtbl -> ConfigureFMEnabled(This,Channel,Enabled) ) 

#define IWX218xFM_ConfigureFMMarker(This,Channel,Marker)	\
    ( (This)->lpVtbl -> ConfigureFMMarker(This,Channel,Marker) ) 

#define IWX218xFM_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xFM_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#define IWX218xFM_get_InternalDeviation(This,Val)	\
    ( (This)->lpVtbl -> get_InternalDeviation(This,Val) ) 

#define IWX218xFM_put_InternalDeviation(This,Val)	\
    ( (This)->lpVtbl -> put_InternalDeviation(This,Val) ) 

#define IWX218xFM_get_InternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_InternalFrequency(This,Val) ) 

#define IWX218xFM_put_InternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_InternalFrequency(This,Val) ) 

#define IWX218xFM_get_InternalWaveform(This,Val)	\
    ( (This)->lpVtbl -> get_InternalWaveform(This,Val) ) 

#define IWX218xFM_put_InternalWaveform(This,Val)	\
    ( (This)->lpVtbl -> put_InternalWaveform(This,Val) ) 

#define IWX218xFM_get_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Marker(This,Channel,Val) ) 

#define IWX218xFM_put_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Marker(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xFM_INTERFACE_DEFINED__ */


#ifndef __IWX218xMarkers_INTERFACE_DEFINED__
#define __IWX218xMarkers_INTERFACE_DEFINED__

/* interface IWX218xMarkers */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xMarkers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c97f8049-93d5-4947-97fc-5d6d70bff340")
    IWX218xMarkers : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Refresh( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMarkerControl( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ enum WX218xMarkerControlEnum Control) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMarkerDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Delay) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMarkerEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMarkerHighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double HighLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMarkerLowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double LowLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMarkerIndex( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMarkerPosition( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ long Position) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMarkerSource( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xMarkerSourceEnum Source) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMarkerWidth( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ long Width) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE MarkerRefresh( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMarkerHighLevel4Ch( 
            /* [in] */ BSTR Channel,
            /* [in] */ double HighLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureMarkerLowLevel4Ch( 
            /* [in] */ BSTR Channel,
            /* [in] */ double LowLevel) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Control( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ enum WX218xMarkerControlEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Control( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ enum WX218xMarkerControlEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MarkerIndex( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MarkerIndex( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xMarkerSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xMarkerSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HighLevel4Ch( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HighLevel4Ch( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LowLevel4Ch( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LowLevel4Ch( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xMarkersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xMarkers * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xMarkers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xMarkers * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMarkerControl )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ enum WX218xMarkerControlEnum Control);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMarkerDelay )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Delay);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMarkerEnabled )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMarkerHighLevel )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double HighLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMarkerLowLevel )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double LowLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMarkerIndex )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMarkerPosition )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ long Position);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMarkerSource )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xMarkerSourceEnum Source);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMarkerWidth )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ long Width);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *MarkerRefresh )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMarkerHighLevel4Ch )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double HighLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureMarkerLowLevel4Ch )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double LowLevel);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HighLevel )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HighLevel )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowLevel )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LowLevel )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Control )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ enum WX218xMarkerControlEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Control )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ enum WX218xMarkerControlEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MarkerIndex )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MarkerIndex )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xMarkerSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xMarkerSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HighLevel4Ch )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HighLevel4Ch )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowLevel4Ch )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LowLevel4Ch )( 
            IWX218xMarkers * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IWX218xMarkersVtbl;

    interface IWX218xMarkers
    {
        CONST_VTBL struct IWX218xMarkersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xMarkers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xMarkers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xMarkers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xMarkers_Refresh(This,Channel,Index)	\
    ( (This)->lpVtbl -> Refresh(This,Channel,Index) ) 

#define IWX218xMarkers_ConfigureMarkerControl(This,Channel,Index,Control)	\
    ( (This)->lpVtbl -> ConfigureMarkerControl(This,Channel,Index,Control) ) 

#define IWX218xMarkers_ConfigureMarkerDelay(This,Channel,Index,Delay)	\
    ( (This)->lpVtbl -> ConfigureMarkerDelay(This,Channel,Index,Delay) ) 

#define IWX218xMarkers_ConfigureMarkerEnabled(This,Channel,Index,Enabled)	\
    ( (This)->lpVtbl -> ConfigureMarkerEnabled(This,Channel,Index,Enabled) ) 

#define IWX218xMarkers_ConfigureMarkerHighLevel(This,Channel,Index,HighLevel)	\
    ( (This)->lpVtbl -> ConfigureMarkerHighLevel(This,Channel,Index,HighLevel) ) 

#define IWX218xMarkers_ConfigureMarkerLowLevel(This,Channel,Index,LowLevel)	\
    ( (This)->lpVtbl -> ConfigureMarkerLowLevel(This,Channel,Index,LowLevel) ) 

#define IWX218xMarkers_ConfigureMarkerIndex(This,Channel,Index)	\
    ( (This)->lpVtbl -> ConfigureMarkerIndex(This,Channel,Index) ) 

#define IWX218xMarkers_ConfigureMarkerPosition(This,Channel,Index,Position)	\
    ( (This)->lpVtbl -> ConfigureMarkerPosition(This,Channel,Index,Position) ) 

#define IWX218xMarkers_ConfigureMarkerSource(This,Channel,Source)	\
    ( (This)->lpVtbl -> ConfigureMarkerSource(This,Channel,Source) ) 

#define IWX218xMarkers_ConfigureMarkerWidth(This,Channel,Index,Width)	\
    ( (This)->lpVtbl -> ConfigureMarkerWidth(This,Channel,Index,Width) ) 

#define IWX218xMarkers_MarkerRefresh(This,Channel)	\
    ( (This)->lpVtbl -> MarkerRefresh(This,Channel) ) 

#define IWX218xMarkers_ConfigureMarkerHighLevel4Ch(This,Channel,HighLevel)	\
    ( (This)->lpVtbl -> ConfigureMarkerHighLevel4Ch(This,Channel,HighLevel) ) 

#define IWX218xMarkers_ConfigureMarkerLowLevel4Ch(This,Channel,LowLevel)	\
    ( (This)->lpVtbl -> ConfigureMarkerLowLevel4Ch(This,Channel,LowLevel) ) 

#define IWX218xMarkers_get_Delay(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> get_Delay(This,Channel,Index,Val) ) 

#define IWX218xMarkers_put_Delay(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> put_Delay(This,Channel,Index,Val) ) 

#define IWX218xMarkers_get_Enabled(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Index,Val) ) 

#define IWX218xMarkers_put_Enabled(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Index,Val) ) 

#define IWX218xMarkers_get_HighLevel(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> get_HighLevel(This,Channel,Index,Val) ) 

#define IWX218xMarkers_put_HighLevel(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> put_HighLevel(This,Channel,Index,Val) ) 

#define IWX218xMarkers_get_LowLevel(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> get_LowLevel(This,Channel,Index,Val) ) 

#define IWX218xMarkers_put_LowLevel(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> put_LowLevel(This,Channel,Index,Val) ) 

#define IWX218xMarkers_get_Position(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> get_Position(This,Channel,Index,Val) ) 

#define IWX218xMarkers_put_Position(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> put_Position(This,Channel,Index,Val) ) 

#define IWX218xMarkers_get_Width(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> get_Width(This,Channel,Index,Val) ) 

#define IWX218xMarkers_put_Width(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> put_Width(This,Channel,Index,Val) ) 

#define IWX218xMarkers_get_Control(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> get_Control(This,Channel,Index,Val) ) 

#define IWX218xMarkers_put_Control(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> put_Control(This,Channel,Index,Val) ) 

#define IWX218xMarkers_get_MarkerIndex(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_MarkerIndex(This,Channel,Val) ) 

#define IWX218xMarkers_put_MarkerIndex(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_MarkerIndex(This,Channel,Val) ) 

#define IWX218xMarkers_get_Source(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Channel,Val) ) 

#define IWX218xMarkers_put_Source(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Channel,Val) ) 

#define IWX218xMarkers_get_HighLevel4Ch(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_HighLevel4Ch(This,Channel,Val) ) 

#define IWX218xMarkers_put_HighLevel4Ch(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_HighLevel4Ch(This,Channel,Val) ) 

#define IWX218xMarkers_get_LowLevel4Ch(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_LowLevel4Ch(This,Channel,Val) ) 

#define IWX218xMarkers_put_LowLevel4Ch(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_LowLevel4Ch(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xMarkers_INTERFACE_DEFINED__ */


#ifndef __IWX218xTrigger_INTERFACE_DEFINED__
#define __IWX218xTrigger_INTERFACE_DEFINED__

/* interface IWX218xTrigger */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b6c58a67-73cd-4bd2-9af7-43d5ddb8a50b")
    IWX218xTrigger : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetECLLevel( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetTTLLevel( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureBurstCount( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTriggerDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Delay) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTriggerLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Level) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTriggerTimerDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ long TimerDelay) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTriggerTimerTime( 
            /* [in] */ BSTR Channel,
            /* [in] */ double TimerTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTrigContMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xContinuousModeEnum ContMode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTrigContSource( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xContinuousSourceEnum Source) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTrigSlope( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerSlopeEnum Slope) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTrigSource( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerSourceEnum Source) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTrigTimerMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerTimerModeEnum TimerMode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTriggerMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerModeEnum Mode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTriggerImpedance( 
            /* [in] */ enum WX218xTriggerImpedanceEnum TriggerImpedance) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BurstCount( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BurstCount( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ContinuousMode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xContinuousModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ContinuousMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xContinuousModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ContinuousSource( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xContinuousSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ContinuousSource( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xContinuousSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xTriggerSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerSlopeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xTriggerSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TimerDelay( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TimerDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TimerMode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xTriggerTimerModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TimerMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerTimerModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TimerTime( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TimerTime( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerMode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xTriggerModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ARM( 
            /* [retval][out] */ IWX218xTriggerARM **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SmartTrigger( 
            /* [retval][out] */ IWX218xTriggerSmartTrigger **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerImpedance( 
            /* [retval][out] */ enum WX218xTriggerImpedanceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerImpedance( 
            /* [in] */ enum WX218xTriggerImpedanceEnum Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xTrigger * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IWX218xTrigger * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetECLLevel )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetTTLLevel )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureBurstCount )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Count);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTriggerDelay )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Delay);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTriggerLevel )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Level);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTriggerTimerDelay )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long TimerDelay);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTriggerTimerTime )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double TimerTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTrigContMode )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xContinuousModeEnum ContMode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTrigContSource )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xContinuousSourceEnum Source);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTrigSlope )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerSlopeEnum Slope);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTrigSource )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerSourceEnum Source);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTrigTimerMode )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerTimerModeEnum TimerMode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTriggerMode )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerModeEnum Mode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTriggerImpedance )( 
            IWX218xTrigger * This,
            /* [in] */ enum WX218xTriggerImpedanceEnum TriggerImpedance);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BurstCount )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BurstCount )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContinuousMode )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xContinuousModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContinuousMode )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xContinuousModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContinuousSource )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xContinuousSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContinuousSource )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xContinuousSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xTriggerSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerSlopeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xTriggerSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimerDelay )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimerDelay )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimerMode )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xTriggerTimerModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimerMode )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerTimerModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimerTime )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimerTime )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerMode )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xTriggerModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerMode )( 
            IWX218xTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xTriggerModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ARM )( 
            IWX218xTrigger * This,
            /* [retval][out] */ IWX218xTriggerARM **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmartTrigger )( 
            IWX218xTrigger * This,
            /* [retval][out] */ IWX218xTriggerSmartTrigger **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerImpedance )( 
            IWX218xTrigger * This,
            /* [retval][out] */ enum WX218xTriggerImpedanceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerImpedance )( 
            IWX218xTrigger * This,
            /* [in] */ enum WX218xTriggerImpedanceEnum Val);
        
        END_INTERFACE
    } IWX218xTriggerVtbl;

    interface IWX218xTrigger
    {
        CONST_VTBL struct IWX218xTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xTrigger_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IWX218xTrigger_SetECLLevel(This,Channel)	\
    ( (This)->lpVtbl -> SetECLLevel(This,Channel) ) 

#define IWX218xTrigger_SetTTLLevel(This,Channel)	\
    ( (This)->lpVtbl -> SetTTLLevel(This,Channel) ) 

#define IWX218xTrigger_ConfigureBurstCount(This,Channel,Count)	\
    ( (This)->lpVtbl -> ConfigureBurstCount(This,Channel,Count) ) 

#define IWX218xTrigger_ConfigureTriggerDelay(This,Channel,Delay)	\
    ( (This)->lpVtbl -> ConfigureTriggerDelay(This,Channel,Delay) ) 

#define IWX218xTrigger_ConfigureTriggerLevel(This,Channel,Level)	\
    ( (This)->lpVtbl -> ConfigureTriggerLevel(This,Channel,Level) ) 

#define IWX218xTrigger_ConfigureTriggerTimerDelay(This,Channel,TimerDelay)	\
    ( (This)->lpVtbl -> ConfigureTriggerTimerDelay(This,Channel,TimerDelay) ) 

#define IWX218xTrigger_ConfigureTriggerTimerTime(This,Channel,TimerTime)	\
    ( (This)->lpVtbl -> ConfigureTriggerTimerTime(This,Channel,TimerTime) ) 

#define IWX218xTrigger_ConfigureTrigContMode(This,Channel,ContMode)	\
    ( (This)->lpVtbl -> ConfigureTrigContMode(This,Channel,ContMode) ) 

#define IWX218xTrigger_ConfigureTrigContSource(This,Channel,Source)	\
    ( (This)->lpVtbl -> ConfigureTrigContSource(This,Channel,Source) ) 

#define IWX218xTrigger_ConfigureTrigSlope(This,Channel,Slope)	\
    ( (This)->lpVtbl -> ConfigureTrigSlope(This,Channel,Slope) ) 

#define IWX218xTrigger_ConfigureTrigSource(This,Channel,Source)	\
    ( (This)->lpVtbl -> ConfigureTrigSource(This,Channel,Source) ) 

#define IWX218xTrigger_ConfigureTrigTimerMode(This,Channel,TimerMode)	\
    ( (This)->lpVtbl -> ConfigureTrigTimerMode(This,Channel,TimerMode) ) 

#define IWX218xTrigger_ConfigureTriggerMode(This,Channel,Mode)	\
    ( (This)->lpVtbl -> ConfigureTriggerMode(This,Channel,Mode) ) 

#define IWX218xTrigger_ConfigureTriggerImpedance(This,TriggerImpedance)	\
    ( (This)->lpVtbl -> ConfigureTriggerImpedance(This,TriggerImpedance) ) 

#define IWX218xTrigger_get_BurstCount(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_BurstCount(This,Channel,Val) ) 

#define IWX218xTrigger_put_BurstCount(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_BurstCount(This,Channel,Val) ) 

#define IWX218xTrigger_get_ContinuousMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_ContinuousMode(This,Channel,Val) ) 

#define IWX218xTrigger_put_ContinuousMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_ContinuousMode(This,Channel,Val) ) 

#define IWX218xTrigger_get_ContinuousSource(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_ContinuousSource(This,Channel,Val) ) 

#define IWX218xTrigger_put_ContinuousSource(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_ContinuousSource(This,Channel,Val) ) 

#define IWX218xTrigger_get_Delay(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Delay(This,Channel,Val) ) 

#define IWX218xTrigger_put_Delay(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Delay(This,Channel,Val) ) 

#define IWX218xTrigger_get_Level(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Channel,Val) ) 

#define IWX218xTrigger_put_Level(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Channel,Val) ) 

#define IWX218xTrigger_get_Slope(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Slope(This,Channel,Val) ) 

#define IWX218xTrigger_put_Slope(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Slope(This,Channel,Val) ) 

#define IWX218xTrigger_get_Source(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Channel,Val) ) 

#define IWX218xTrigger_put_Source(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Channel,Val) ) 

#define IWX218xTrigger_get_TimerDelay(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_TimerDelay(This,Channel,Val) ) 

#define IWX218xTrigger_put_TimerDelay(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_TimerDelay(This,Channel,Val) ) 

#define IWX218xTrigger_get_TimerMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_TimerMode(This,Channel,Val) ) 

#define IWX218xTrigger_put_TimerMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_TimerMode(This,Channel,Val) ) 

#define IWX218xTrigger_get_TimerTime(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_TimerTime(This,Channel,Val) ) 

#define IWX218xTrigger_put_TimerTime(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_TimerTime(This,Channel,Val) ) 

#define IWX218xTrigger_get_TriggerMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_TriggerMode(This,Channel,Val) ) 

#define IWX218xTrigger_put_TriggerMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_TriggerMode(This,Channel,Val) ) 

#define IWX218xTrigger_get_ARM(This,Val)	\
    ( (This)->lpVtbl -> get_ARM(This,Val) ) 

#define IWX218xTrigger_get_SmartTrigger(This,Val)	\
    ( (This)->lpVtbl -> get_SmartTrigger(This,Val) ) 

#define IWX218xTrigger_get_TriggerImpedance(This,Val)	\
    ( (This)->lpVtbl -> get_TriggerImpedance(This,Val) ) 

#define IWX218xTrigger_put_TriggerImpedance(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerImpedance(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xTrigger_INTERFACE_DEFINED__ */


#ifndef __IWX218xTriggerARM_INTERFACE_DEFINED__
#define __IWX218xTriggerARM_INTERFACE_DEFINED__

/* interface IWX218xTriggerARM */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xTriggerARM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d8b6d07c-b950-4ef9-bd11-1c44680d2565")
    IWX218xTriggerARM : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetECLLevel( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetTtlLevel( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTrigARMLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Level) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureTrigARMSlope( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArmSlopeEnum Slope) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xArmSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArmSlopeEnum Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xTriggerARMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xTriggerARM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xTriggerARM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xTriggerARM * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetECLLevel )( 
            IWX218xTriggerARM * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetTtlLevel )( 
            IWX218xTriggerARM * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTrigARMLevel )( 
            IWX218xTriggerARM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Level);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTrigARMSlope )( 
            IWX218xTriggerARM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArmSlopeEnum Slope);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IWX218xTriggerARM * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IWX218xTriggerARM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IWX218xTriggerARM * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xArmSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IWX218xTriggerARM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArmSlopeEnum Val);
        
        END_INTERFACE
    } IWX218xTriggerARMVtbl;

    interface IWX218xTriggerARM
    {
        CONST_VTBL struct IWX218xTriggerARMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xTriggerARM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xTriggerARM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xTriggerARM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xTriggerARM_SetECLLevel(This,Channel)	\
    ( (This)->lpVtbl -> SetECLLevel(This,Channel) ) 

#define IWX218xTriggerARM_SetTtlLevel(This,Channel)	\
    ( (This)->lpVtbl -> SetTtlLevel(This,Channel) ) 

#define IWX218xTriggerARM_ConfigureTrigARMLevel(This,Channel,Level)	\
    ( (This)->lpVtbl -> ConfigureTrigARMLevel(This,Channel,Level) ) 

#define IWX218xTriggerARM_ConfigureTrigARMSlope(This,Channel,Slope)	\
    ( (This)->lpVtbl -> ConfigureTrigARMSlope(This,Channel,Slope) ) 

#define IWX218xTriggerARM_get_Level(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Channel,Val) ) 

#define IWX218xTriggerARM_put_Level(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Channel,Val) ) 

#define IWX218xTriggerARM_get_Slope(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Slope(This,Channel,Val) ) 

#define IWX218xTriggerARM_put_Slope(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Slope(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xTriggerARM_INTERFACE_DEFINED__ */


#ifndef __IWX218xTriggerSmartTrigger_INTERFACE_DEFINED__
#define __IWX218xTriggerSmartTrigger_INTERFACE_DEFINED__

/* interface IWX218xTriggerSmartTrigger */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xTriggerSmartTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25f6e0ef-20f1-41d5-b5ca-fe9156918623")
    IWX218xTriggerSmartTrigger : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSmartTrigHiPassEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSmartTrigHiPassWidth( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Width) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSmartTrigHoldoff( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Holdoff) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSmartTrigHoldoffState( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSmartTrigLowPassState( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSmartTrigLowPassWidth( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Width) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HiPassEnabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HiPassEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HiPassWidth( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HiPassWidth( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Holdoff( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Holdoff( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HoldoffEnabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HoldoffEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LowPassEnabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LowPassEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LowPassWidth( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LowPassWidth( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xTriggerSmartTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xTriggerSmartTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xTriggerSmartTrigger * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSmartTrigHiPassEnabled )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSmartTrigHiPassWidth )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Width);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSmartTrigHoldoff )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Holdoff);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSmartTrigHoldoffState )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSmartTrigLowPassState )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSmartTrigLowPassWidth )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Width);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HiPassEnabled )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HiPassEnabled )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HiPassWidth )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HiPassWidth )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Holdoff )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Holdoff )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HoldoffEnabled )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HoldoffEnabled )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowPassEnabled )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LowPassEnabled )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowPassWidth )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LowPassWidth )( 
            IWX218xTriggerSmartTrigger * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IWX218xTriggerSmartTriggerVtbl;

    interface IWX218xTriggerSmartTrigger
    {
        CONST_VTBL struct IWX218xTriggerSmartTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xTriggerSmartTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xTriggerSmartTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xTriggerSmartTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassEnabled(This,Channel,State)	\
    ( (This)->lpVtbl -> ConfigureSmartTrigHiPassEnabled(This,Channel,State) ) 

#define IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassWidth(This,Channel,Width)	\
    ( (This)->lpVtbl -> ConfigureSmartTrigHiPassWidth(This,Channel,Width) ) 

#define IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoff(This,Channel,Holdoff)	\
    ( (This)->lpVtbl -> ConfigureSmartTrigHoldoff(This,Channel,Holdoff) ) 

#define IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoffState(This,Channel,State)	\
    ( (This)->lpVtbl -> ConfigureSmartTrigHoldoffState(This,Channel,State) ) 

#define IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassState(This,Channel,State)	\
    ( (This)->lpVtbl -> ConfigureSmartTrigLowPassState(This,Channel,State) ) 

#define IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassWidth(This,Channel,Width)	\
    ( (This)->lpVtbl -> ConfigureSmartTrigLowPassWidth(This,Channel,Width) ) 

#define IWX218xTriggerSmartTrigger_get_HiPassEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_HiPassEnabled(This,Channel,Val) ) 

#define IWX218xTriggerSmartTrigger_put_HiPassEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_HiPassEnabled(This,Channel,Val) ) 

#define IWX218xTriggerSmartTrigger_get_HiPassWidth(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_HiPassWidth(This,Channel,Val) ) 

#define IWX218xTriggerSmartTrigger_put_HiPassWidth(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_HiPassWidth(This,Channel,Val) ) 

#define IWX218xTriggerSmartTrigger_get_Holdoff(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Holdoff(This,Channel,Val) ) 

#define IWX218xTriggerSmartTrigger_put_Holdoff(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Holdoff(This,Channel,Val) ) 

#define IWX218xTriggerSmartTrigger_get_HoldoffEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_HoldoffEnabled(This,Channel,Val) ) 

#define IWX218xTriggerSmartTrigger_put_HoldoffEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_HoldoffEnabled(This,Channel,Val) ) 

#define IWX218xTriggerSmartTrigger_get_LowPassEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_LowPassEnabled(This,Channel,Val) ) 

#define IWX218xTriggerSmartTrigger_put_LowPassEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_LowPassEnabled(This,Channel,Val) ) 

#define IWX218xTriggerSmartTrigger_get_LowPassWidth(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_LowPassWidth(This,Channel,Val) ) 

#define IWX218xTriggerSmartTrigger_put_LowPassWidth(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_LowPassWidth(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xTriggerSmartTrigger_INTERFACE_DEFINED__ */


#ifndef __IWX218xStateStorage_INTERFACE_DEFINED__
#define __IWX218xStateStorage_INTERFACE_DEFINED__

/* interface IWX218xStateStorage */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xStateStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6c7601bf-38fc-4ea0-88aa-499073977c17")
    IWX218xStateStorage : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Load( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Recall( 
            /* [in] */ long Cell,
            /* [in] */ enum WX218xStateStorageTargetEnum Target) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Store( 
            /* [in] */ long Cell,
            /* [in] */ enum WX218xStateStorageConfigurationEnum Configuration,
            /* [in] */ enum WX218xStateStorageTargetEnum Target) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CellRecall( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CellRecall( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CellStore( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CellStore( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ConfigurationStore( 
            /* [retval][out] */ enum WX218xStateStorageConfigurationEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ConfigurationStore( 
            /* [in] */ enum WX218xStateStorageConfigurationEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TargetRecall( 
            /* [retval][out] */ enum WX218xStateStorageTargetEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TargetRecall( 
            /* [in] */ enum WX218xStateStorageTargetEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TargetStore( 
            /* [retval][out] */ enum WX218xStateStorageTargetEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TargetStore( 
            /* [in] */ enum WX218xStateStorageTargetEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ConfigurationRecall( 
            /* [retval][out] */ enum WX218xStateStorageRecalConfigurationEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StoreEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StoreEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RecallEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RecallEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xStateStorageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xStateStorage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xStateStorage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xStateStorage * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IWX218xStateStorage * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IWX218xStateStorage * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Recall )( 
            IWX218xStateStorage * This,
            /* [in] */ long Cell,
            /* [in] */ enum WX218xStateStorageTargetEnum Target);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IWX218xStateStorage * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Store )( 
            IWX218xStateStorage * This,
            /* [in] */ long Cell,
            /* [in] */ enum WX218xStateStorageConfigurationEnum Configuration,
            /* [in] */ enum WX218xStateStorageTargetEnum Target);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CellRecall )( 
            IWX218xStateStorage * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CellRecall )( 
            IWX218xStateStorage * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CellStore )( 
            IWX218xStateStorage * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CellStore )( 
            IWX218xStateStorage * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConfigurationStore )( 
            IWX218xStateStorage * This,
            /* [retval][out] */ enum WX218xStateStorageConfigurationEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConfigurationStore )( 
            IWX218xStateStorage * This,
            /* [in] */ enum WX218xStateStorageConfigurationEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetRecall )( 
            IWX218xStateStorage * This,
            /* [retval][out] */ enum WX218xStateStorageTargetEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetRecall )( 
            IWX218xStateStorage * This,
            /* [in] */ enum WX218xStateStorageTargetEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetStore )( 
            IWX218xStateStorage * This,
            /* [retval][out] */ enum WX218xStateStorageTargetEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetStore )( 
            IWX218xStateStorage * This,
            /* [in] */ enum WX218xStateStorageTargetEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConfigurationRecall )( 
            IWX218xStateStorage * This,
            /* [retval][out] */ enum WX218xStateStorageRecalConfigurationEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StoreEnabled )( 
            IWX218xStateStorage * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StoreEnabled )( 
            IWX218xStateStorage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecallEnabled )( 
            IWX218xStateStorage * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RecallEnabled )( 
            IWX218xStateStorage * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IWX218xStateStorageVtbl;

    interface IWX218xStateStorage
    {
        CONST_VTBL struct IWX218xStateStorageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xStateStorage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xStateStorage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xStateStorage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xStateStorage_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IWX218xStateStorage_Load(This)	\
    ( (This)->lpVtbl -> Load(This) ) 

#define IWX218xStateStorage_Recall(This,Cell,Target)	\
    ( (This)->lpVtbl -> Recall(This,Cell,Target) ) 

#define IWX218xStateStorage_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IWX218xStateStorage_Store(This,Cell,Configuration,Target)	\
    ( (This)->lpVtbl -> Store(This,Cell,Configuration,Target) ) 

#define IWX218xStateStorage_get_CellRecall(This,Val)	\
    ( (This)->lpVtbl -> get_CellRecall(This,Val) ) 

#define IWX218xStateStorage_put_CellRecall(This,Val)	\
    ( (This)->lpVtbl -> put_CellRecall(This,Val) ) 

#define IWX218xStateStorage_get_CellStore(This,Val)	\
    ( (This)->lpVtbl -> get_CellStore(This,Val) ) 

#define IWX218xStateStorage_put_CellStore(This,Val)	\
    ( (This)->lpVtbl -> put_CellStore(This,Val) ) 

#define IWX218xStateStorage_get_ConfigurationStore(This,Val)	\
    ( (This)->lpVtbl -> get_ConfigurationStore(This,Val) ) 

#define IWX218xStateStorage_put_ConfigurationStore(This,Val)	\
    ( (This)->lpVtbl -> put_ConfigurationStore(This,Val) ) 

#define IWX218xStateStorage_get_TargetRecall(This,Val)	\
    ( (This)->lpVtbl -> get_TargetRecall(This,Val) ) 

#define IWX218xStateStorage_put_TargetRecall(This,Val)	\
    ( (This)->lpVtbl -> put_TargetRecall(This,Val) ) 

#define IWX218xStateStorage_get_TargetStore(This,Val)	\
    ( (This)->lpVtbl -> get_TargetStore(This,Val) ) 

#define IWX218xStateStorage_put_TargetStore(This,Val)	\
    ( (This)->lpVtbl -> put_TargetStore(This,Val) ) 

#define IWX218xStateStorage_get_ConfigurationRecall(This,Val)	\
    ( (This)->lpVtbl -> get_ConfigurationRecall(This,Val) ) 

#define IWX218xStateStorage_get_StoreEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_StoreEnabled(This,Val) ) 

#define IWX218xStateStorage_put_StoreEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_StoreEnabled(This,Val) ) 

#define IWX218xStateStorage_get_RecallEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_RecallEnabled(This,Val) ) 

#define IWX218xStateStorage_put_RecallEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_RecallEnabled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xStateStorage_INTERFACE_DEFINED__ */


#ifndef __IWX218xXInstrument_INTERFACE_DEFINED__
#define __IWX218xXInstrument_INTERFACE_DEFINED__

/* interface IWX218xXInstrument */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xXInstrument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54438c1e-a052-494f-bdf8-180c252e5d9d")
    IWX218xXInstrument : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureXInstrumentEnabled( 
            /* [in] */ VARIANT_BOOL State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureXInstrumentMode( 
            /* [in] */ enum WX218xXInstrumentModeEnum Mode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureXInstrumentModeAdv( 
            /* [in] */ enum WX218xXInstrumentModeAdvEnum ModeAdv) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureXInstrumentOffset( 
            /* [in] */ long Offset) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ enum WX218xXInstrumentModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ enum WX218xXInstrumentModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ModeAdv( 
            /* [retval][out] */ enum WX218xXInstrumentModeAdvEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ModeAdv( 
            /* [in] */ enum WX218xXInstrumentModeAdvEnum Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xXInstrumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xXInstrument * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xXInstrument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xXInstrument * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureXInstrumentEnabled )( 
            IWX218xXInstrument * This,
            /* [in] */ VARIANT_BOOL State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureXInstrumentMode )( 
            IWX218xXInstrument * This,
            /* [in] */ enum WX218xXInstrumentModeEnum Mode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureXInstrumentModeAdv )( 
            IWX218xXInstrument * This,
            /* [in] */ enum WX218xXInstrumentModeAdvEnum ModeAdv);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureXInstrumentOffset )( 
            IWX218xXInstrument * This,
            /* [in] */ long Offset);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xXInstrument * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xXInstrument * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IWX218xXInstrument * This,
            /* [retval][out] */ enum WX218xXInstrumentModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IWX218xXInstrument * This,
            /* [in] */ enum WX218xXInstrumentModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IWX218xXInstrument * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            IWX218xXInstrument * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModeAdv )( 
            IWX218xXInstrument * This,
            /* [retval][out] */ enum WX218xXInstrumentModeAdvEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ModeAdv )( 
            IWX218xXInstrument * This,
            /* [in] */ enum WX218xXInstrumentModeAdvEnum Val);
        
        END_INTERFACE
    } IWX218xXInstrumentVtbl;

    interface IWX218xXInstrument
    {
        CONST_VTBL struct IWX218xXInstrumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xXInstrument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xXInstrument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xXInstrument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xXInstrument_ConfigureXInstrumentEnabled(This,State)	\
    ( (This)->lpVtbl -> ConfigureXInstrumentEnabled(This,State) ) 

#define IWX218xXInstrument_ConfigureXInstrumentMode(This,Mode)	\
    ( (This)->lpVtbl -> ConfigureXInstrumentMode(This,Mode) ) 

#define IWX218xXInstrument_ConfigureXInstrumentModeAdv(This,ModeAdv)	\
    ( (This)->lpVtbl -> ConfigureXInstrumentModeAdv(This,ModeAdv) ) 

#define IWX218xXInstrument_ConfigureXInstrumentOffset(This,Offset)	\
    ( (This)->lpVtbl -> ConfigureXInstrumentOffset(This,Offset) ) 

#define IWX218xXInstrument_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IWX218xXInstrument_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IWX218xXInstrument_get_Mode(This,Val)	\
    ( (This)->lpVtbl -> get_Mode(This,Val) ) 

#define IWX218xXInstrument_put_Mode(This,Val)	\
    ( (This)->lpVtbl -> put_Mode(This,Val) ) 

#define IWX218xXInstrument_get_Offset(This,Val)	\
    ( (This)->lpVtbl -> get_Offset(This,Val) ) 

#define IWX218xXInstrument_put_Offset(This,Val)	\
    ( (This)->lpVtbl -> put_Offset(This,Val) ) 

#define IWX218xXInstrument_get_ModeAdv(This,Val)	\
    ( (This)->lpVtbl -> get_ModeAdv(This,Val) ) 

#define IWX218xXInstrument_put_ModeAdv(This,Val)	\
    ( (This)->lpVtbl -> put_ModeAdv(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xXInstrument_INTERFACE_DEFINED__ */


#ifndef __IWX218xDigitalPulse_INTERFACE_DEFINED__
#define __IWX218xDigitalPulse_INTERFACE_DEFINED__

/* interface IWX218xDigitalPulse */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xDigitalPulse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fd6bcbbf-3ff4-46d3-bf01-21e77e1c0fd3")
    IWX218xDigitalPulse : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetAmplitudeMax( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetAmplitudeMin( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetOffsetMax( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SetOffsetMin( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseAmplitude( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Amplitude) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Delay) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseDelayPercent( 
            /* [in] */ BSTR Channel,
            /* [in] */ double DelayPercent) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseDoubleDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ double DoubleDelay) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseDoubleDelayPercent( 
            /* [in] */ BSTR Channel,
            /* [in] */ double DoubleDelayPercent) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseFallTime( 
            /* [in] */ BSTR Channel,
            /* [in] */ double FallTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseFallTimePercent( 
            /* [in] */ BSTR Channel,
            /* [in] */ double FallTimePercent) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseHighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double HighLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseLevelControl( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseLevelControlEnum LevelControl) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseLowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double LowLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseModeEnum Mode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseOffset( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulsePeriod( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Period) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulsePolarity( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulsePolarityEnum Polarity) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseRiseTime( 
            /* [in] */ BSTR Channel,
            /* [in] */ double RiseTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureRiseTimePercent( 
            /* [in] */ BSTR Channel,
            /* [in] */ double RiseTimePercent) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseTransition( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseTransitionEnum Transition) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseWidth( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Width) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPulseWidthPercent( 
            /* [in] */ BSTR Channel,
            /* [in] */ double WidthPercent) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Amplitude( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Amplitude( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Configure( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPulseConfigureEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Configure( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseConfigureEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DelayPercent( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DelayPercent( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DoubleDelay( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DoubleDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DoubleDelayPercent( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DoubleDelayPercent( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FallTime( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FallTime( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FallTimePercent( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FallTimePercent( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HighLevel( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LevelControl( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPulseLevelControlEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LevelControl( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseLevelControlEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LowLevel( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPulseModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Period( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Period( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPulsePolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulsePolarityEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RiseTime( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RiseTime( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RiseTimePercent( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RiseTimePercent( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Transition( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPulseTransitionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Transition( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseTransitionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_WidthPercent( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_WidthPercent( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xDigitalPulseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xDigitalPulse * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xDigitalPulse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xDigitalPulse * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetAmplitudeMax )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetAmplitudeMin )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetOffsetMax )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SetOffsetMin )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseAmplitude )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Amplitude);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseDelay )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Delay);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseDelayPercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double DelayPercent);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseDoubleDelay )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double DoubleDelay);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseDoubleDelayPercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double DoubleDelayPercent);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseFallTime )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double FallTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseFallTimePercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double FallTimePercent);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseHighLevel )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double HighLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseLevelControl )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseLevelControlEnum LevelControl);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseLowLevel )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double LowLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseMode )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseModeEnum Mode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseOffset )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Offset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulsePeriod )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Period);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulsePolarity )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulsePolarityEnum Polarity);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseRiseTime )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double RiseTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRiseTimePercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double RiseTimePercent);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseTransition )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseTransitionEnum Transition);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseWidth )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Width);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPulseWidthPercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double WidthPercent);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Amplitude )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Amplitude )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Configure )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPulseConfigureEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Configure )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseConfigureEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DelayPercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DelayPercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleDelay )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleDelay )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleDelayPercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleDelayPercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FallTime )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FallTime )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FallTimePercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FallTimePercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HighLevel )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HighLevel )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LevelControl )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPulseLevelControlEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LevelControl )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseLevelControlEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowLevel )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LowLevel )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPulseModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Period )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Period )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPulsePolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulsePolarityEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RiseTime )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RiseTime )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RiseTimePercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RiseTimePercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transition )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPulseTransitionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Transition )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPulseTransitionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WidthPercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WidthPercent )( 
            IWX218xDigitalPulse * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IWX218xDigitalPulseVtbl;

    interface IWX218xDigitalPulse
    {
        CONST_VTBL struct IWX218xDigitalPulseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xDigitalPulse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xDigitalPulse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xDigitalPulse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xDigitalPulse_SetAmplitudeMax(This,Channel)	\
    ( (This)->lpVtbl -> SetAmplitudeMax(This,Channel) ) 

#define IWX218xDigitalPulse_SetAmplitudeMin(This,Channel)	\
    ( (This)->lpVtbl -> SetAmplitudeMin(This,Channel) ) 

#define IWX218xDigitalPulse_SetOffsetMax(This,Channel)	\
    ( (This)->lpVtbl -> SetOffsetMax(This,Channel) ) 

#define IWX218xDigitalPulse_SetOffsetMin(This,Channel)	\
    ( (This)->lpVtbl -> SetOffsetMin(This,Channel) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseAmplitude(This,Channel,Amplitude)	\
    ( (This)->lpVtbl -> ConfigureDigPulseAmplitude(This,Channel,Amplitude) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseDelay(This,Channel,Delay)	\
    ( (This)->lpVtbl -> ConfigureDigPulseDelay(This,Channel,Delay) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseDelayPercent(This,Channel,DelayPercent)	\
    ( (This)->lpVtbl -> ConfigureDigPulseDelayPercent(This,Channel,DelayPercent) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseDoubleDelay(This,Channel,DoubleDelay)	\
    ( (This)->lpVtbl -> ConfigureDigPulseDoubleDelay(This,Channel,DoubleDelay) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseDoubleDelayPercent(This,Channel,DoubleDelayPercent)	\
    ( (This)->lpVtbl -> ConfigureDigPulseDoubleDelayPercent(This,Channel,DoubleDelayPercent) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseFallTime(This,Channel,FallTime)	\
    ( (This)->lpVtbl -> ConfigureDigPulseFallTime(This,Channel,FallTime) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseFallTimePercent(This,Channel,FallTimePercent)	\
    ( (This)->lpVtbl -> ConfigureDigPulseFallTimePercent(This,Channel,FallTimePercent) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseHighLevel(This,Channel,HighLevel)	\
    ( (This)->lpVtbl -> ConfigureDigPulseHighLevel(This,Channel,HighLevel) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseLevelControl(This,Channel,LevelControl)	\
    ( (This)->lpVtbl -> ConfigureDigPulseLevelControl(This,Channel,LevelControl) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseLowLevel(This,Channel,LowLevel)	\
    ( (This)->lpVtbl -> ConfigureDigPulseLowLevel(This,Channel,LowLevel) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseMode(This,Channel,Mode)	\
    ( (This)->lpVtbl -> ConfigureDigPulseMode(This,Channel,Mode) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseOffset(This,Channel,Offset)	\
    ( (This)->lpVtbl -> ConfigureDigPulseOffset(This,Channel,Offset) ) 

#define IWX218xDigitalPulse_ConfigureDigPulsePeriod(This,Channel,Period)	\
    ( (This)->lpVtbl -> ConfigureDigPulsePeriod(This,Channel,Period) ) 

#define IWX218xDigitalPulse_ConfigureDigPulsePolarity(This,Channel,Polarity)	\
    ( (This)->lpVtbl -> ConfigureDigPulsePolarity(This,Channel,Polarity) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseRiseTime(This,Channel,RiseTime)	\
    ( (This)->lpVtbl -> ConfigureDigPulseRiseTime(This,Channel,RiseTime) ) 

#define IWX218xDigitalPulse_ConfigureRiseTimePercent(This,Channel,RiseTimePercent)	\
    ( (This)->lpVtbl -> ConfigureRiseTimePercent(This,Channel,RiseTimePercent) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseTransition(This,Channel,Transition)	\
    ( (This)->lpVtbl -> ConfigureDigPulseTransition(This,Channel,Transition) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseWidth(This,Channel,Width)	\
    ( (This)->lpVtbl -> ConfigureDigPulseWidth(This,Channel,Width) ) 

#define IWX218xDigitalPulse_ConfigureDigPulseWidthPercent(This,Channel,WidthPercent)	\
    ( (This)->lpVtbl -> ConfigureDigPulseWidthPercent(This,Channel,WidthPercent) ) 

#define IWX218xDigitalPulse_get_Amplitude(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Amplitude(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_Amplitude(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Amplitude(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_Configure(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Configure(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_Configure(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Configure(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_Delay(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Delay(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_Delay(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Delay(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_DelayPercent(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_DelayPercent(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_DelayPercent(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_DelayPercent(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_DoubleDelay(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_DoubleDelay(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_DoubleDelay(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_DoubleDelay(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_DoubleDelayPercent(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_DoubleDelayPercent(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_DoubleDelayPercent(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_DoubleDelayPercent(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_FallTime(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_FallTime(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_FallTime(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_FallTime(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_FallTimePercent(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_FallTimePercent(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_FallTimePercent(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_FallTimePercent(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_HighLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_HighLevel(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_HighLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_HighLevel(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_LevelControl(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_LevelControl(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_LevelControl(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_LevelControl(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_LowLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_LowLevel(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_LowLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_LowLevel(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_Mode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Mode(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_Mode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Mode(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_Offset(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Offset(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_Offset(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Offset(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_Period(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Period(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_Period(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Period(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_Polarity(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_Polarity(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_RiseTime(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_RiseTime(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_RiseTime(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_RiseTime(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_RiseTimePercent(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_RiseTimePercent(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_RiseTimePercent(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_RiseTimePercent(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_Transition(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Transition(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_Transition(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Transition(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_Width(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Width(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_Width(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Width(This,Channel,Val) ) 

#define IWX218xDigitalPulse_get_WidthPercent(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_WidthPercent(This,Channel,Val) ) 

#define IWX218xDigitalPulse_put_WidthPercent(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_WidthPercent(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xDigitalPulse_INTERFACE_DEFINED__ */


#ifndef __IWX218xSweep_INTERFACE_DEFINED__
#define __IWX218xSweep_INTERFACE_DEFINED__

/* interface IWX218xSweep */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xSweep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b8c8f51d-10c8-4f4e-8279-cc05a40cc88f")
    IWX218xSweep : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSweepDirection( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSweepDirectionEnum Direction) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSweepState( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSweepFreqStart( 
            /* [in] */ BSTR Channel,
            /* [in] */ double FreqStart) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSweepFreqStop( 
            /* [in] */ BSTR Channel,
            /* [in] */ double FreqStop) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSweepMarker( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Marker) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSweepSpacing( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSweepSpacingEnum Spacing) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureSweepTime( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Time) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSweepDirectionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Direction( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSweepDirectionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyStart( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrequencyStart( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyStop( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrequencyStop( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Marker( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Spacing( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSweepSpacingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Spacing( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSweepSpacingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Time( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Time( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xSweepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xSweep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xSweep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xSweep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSweepDirection )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSweepDirectionEnum Direction);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSweepState )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSweepFreqStart )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double FreqStart);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSweepFreqStop )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double FreqStop);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSweepMarker )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Marker);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSweepSpacing )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSweepSpacingEnum Spacing);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSweepTime )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Time);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Direction )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSweepDirectionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Direction )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSweepDirectionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyStart )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrequencyStart )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyStop )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrequencyStop )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Marker )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Spacing )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xSweepSpacingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Spacing )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xSweepSpacingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            IWX218xSweep * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IWX218xSweepVtbl;

    interface IWX218xSweep
    {
        CONST_VTBL struct IWX218xSweepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xSweep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xSweep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xSweep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xSweep_ConfigureSweepDirection(This,Channel,Direction)	\
    ( (This)->lpVtbl -> ConfigureSweepDirection(This,Channel,Direction) ) 

#define IWX218xSweep_ConfigureSweepState(This,Channel,State)	\
    ( (This)->lpVtbl -> ConfigureSweepState(This,Channel,State) ) 

#define IWX218xSweep_ConfigureSweepFreqStart(This,Channel,FreqStart)	\
    ( (This)->lpVtbl -> ConfigureSweepFreqStart(This,Channel,FreqStart) ) 

#define IWX218xSweep_ConfigureSweepFreqStop(This,Channel,FreqStop)	\
    ( (This)->lpVtbl -> ConfigureSweepFreqStop(This,Channel,FreqStop) ) 

#define IWX218xSweep_ConfigureSweepMarker(This,Channel,Marker)	\
    ( (This)->lpVtbl -> ConfigureSweepMarker(This,Channel,Marker) ) 

#define IWX218xSweep_ConfigureSweepSpacing(This,Channel,Spacing)	\
    ( (This)->lpVtbl -> ConfigureSweepSpacing(This,Channel,Spacing) ) 

#define IWX218xSweep_ConfigureSweepTime(This,Channel,Time)	\
    ( (This)->lpVtbl -> ConfigureSweepTime(This,Channel,Time) ) 

#define IWX218xSweep_get_Direction(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Direction(This,Channel,Val) ) 

#define IWX218xSweep_put_Direction(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Direction(This,Channel,Val) ) 

#define IWX218xSweep_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xSweep_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#define IWX218xSweep_get_FrequencyStart(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_FrequencyStart(This,Channel,Val) ) 

#define IWX218xSweep_put_FrequencyStart(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_FrequencyStart(This,Channel,Val) ) 

#define IWX218xSweep_get_FrequencyStop(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_FrequencyStop(This,Channel,Val) ) 

#define IWX218xSweep_put_FrequencyStop(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_FrequencyStop(This,Channel,Val) ) 

#define IWX218xSweep_get_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Marker(This,Channel,Val) ) 

#define IWX218xSweep_put_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Marker(This,Channel,Val) ) 

#define IWX218xSweep_get_Spacing(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Spacing(This,Channel,Val) ) 

#define IWX218xSweep_put_Spacing(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Spacing(This,Channel,Val) ) 

#define IWX218xSweep_get_Time(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Time(This,Channel,Val) ) 

#define IWX218xSweep_put_Time(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Time(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xSweep_INTERFACE_DEFINED__ */


#ifndef __IWX218xDigitalPatternOutput_INTERFACE_DEFINED__
#define __IWX218xDigitalPatternOutput_INTERFACE_DEFINED__

/* interface IWX218xDigitalPatternOutput */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xDigitalPatternOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4cc1f33e-5660-4cc1-a958-2ff0137dfc52")
    IWX218xDigitalPatternOutput : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateDigPatternData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data,
            /* [in] */ long Segment) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadDigitalPatternFromFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName,
            /* [in] */ long Segment) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateDigPatternParamData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *State,
            /* [in] */ SAFEARRAY * *Delay,
            /* [in] */ SAFEARRAY * *HighLevel,
            /* [in] */ SAFEARRAY * *LowLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateDigPatternParamData1( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *State,
            /* [in] */ SAFEARRAY * *Delay,
            /* [in] */ SAFEARRAY * *HighLevel,
            /* [in] */ SAFEARRAY * *LowLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattArbResolution( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitraryResolutionEnum ArbResolution) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattBitDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ long BitIndex,
            /* [in] */ double BitDelay) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattBitEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ long BitIndex,
            /* [in] */ VARIANT_BOOL BitEnabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattBitHighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long BitIndex,
            /* [in] */ double BitHighLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattBitLowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long BitIndex,
            /* [in] */ double BitLowLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Delay) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattDelayMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigPatternDelayModeEnum DelayMode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattEmphasisEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL EmphasisEnabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattFormatData( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigFormatDataEnum FormatData) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattHighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double HighLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattLevelMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigPatternLevelModeEnum LevelMode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattLowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double LowLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadDigitalDataBinaryFile( 
            /* [in] */ BSTR FileName,
            /* [in] */ long Segment) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadDigitalDataAsciiFile( 
            /* [in] */ BSTR FileName,
            /* [in] */ long Segment) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigClock( 
            /* [in] */ enum WX218xDigitalClockEnum DigClock) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDigPattDigPort( 
            /* [in] */ enum WX218xDigPortEnum DigPort) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BitDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BitDelay( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BitHighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BitHighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BitLowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BitLowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DelayMode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xDigPatternDelayModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DelayMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigPatternDelayModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LevelMode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xDigPatternLevelModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LevelMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigPatternLevelModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BitEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_BitEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HighLevel( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LowLevel( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PodPresent( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_EmphasisEnabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_EmphasisEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FormatData( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xDigFormatDataEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FormatData( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigFormatDataEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ArbResolution( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xArbitraryResolutionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ArbResolution( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitraryResolutionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DigClock( 
            /* [retval][out] */ enum WX218xDigitalClockEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DigClock( 
            /* [in] */ enum WX218xDigitalClockEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DigPort( 
            /* [retval][out] */ enum WX218xDigPortEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DigPort( 
            /* [in] */ enum WX218xDigPortEnum Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xDigitalPatternOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xDigitalPatternOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xDigitalPatternOutput * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateDigPatternData )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data,
            /* [in] */ long Segment);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadDigitalPatternFromFile )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName,
            /* [in] */ long Segment);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateDigPatternParamData )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *State,
            /* [in] */ SAFEARRAY * *Delay,
            /* [in] */ SAFEARRAY * *HighLevel,
            /* [in] */ SAFEARRAY * *LowLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateDigPatternParamData1 )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *State,
            /* [in] */ SAFEARRAY * *Delay,
            /* [in] */ SAFEARRAY * *HighLevel,
            /* [in] */ SAFEARRAY * *LowLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattArbResolution )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitraryResolutionEnum ArbResolution);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattBitDelay )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long BitIndex,
            /* [in] */ double BitDelay);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattBitEnabled )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long BitIndex,
            /* [in] */ VARIANT_BOOL BitEnabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattBitHighLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long BitIndex,
            /* [in] */ double BitHighLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattBitLowLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long BitIndex,
            /* [in] */ double BitLowLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattDelay )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Delay);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattDelayMode )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigPatternDelayModeEnum DelayMode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattEmphasisEnabled )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL EmphasisEnabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattEnabled )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattFormatData )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigFormatDataEnum FormatData);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattHighLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double HighLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattLevelMode )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigPatternLevelModeEnum LevelMode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattLowLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double LowLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadDigitalDataBinaryFile )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR FileName,
            /* [in] */ long Segment);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadDigitalDataAsciiFile )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR FileName,
            /* [in] */ long Segment);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigClock )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ enum WX218xDigitalClockEnum DigClock);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDigPattDigPort )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ enum WX218xDigPortEnum DigPort);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitDelay )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitDelay )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitHighLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitHighLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitLowLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitLowLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DelayMode )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xDigPatternDelayModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DelayMode )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigPatternDelayModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LevelMode )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xDigPatternLevelModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LevelMode )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigPatternLevelModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitEnabled )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitEnabled )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Index,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HighLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HighLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LowLevel )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PodPresent )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmphasisEnabled )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EmphasisEnabled )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FormatData )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xDigFormatDataEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FormatData )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xDigFormatDataEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArbResolution )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xArbitraryResolutionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ArbResolution )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xArbitraryResolutionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DigClock )( 
            IWX218xDigitalPatternOutput * This,
            /* [retval][out] */ enum WX218xDigitalClockEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DigClock )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ enum WX218xDigitalClockEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DigPort )( 
            IWX218xDigitalPatternOutput * This,
            /* [retval][out] */ enum WX218xDigPortEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DigPort )( 
            IWX218xDigitalPatternOutput * This,
            /* [in] */ enum WX218xDigPortEnum Val);
        
        END_INTERFACE
    } IWX218xDigitalPatternOutputVtbl;

    interface IWX218xDigitalPatternOutput
    {
        CONST_VTBL struct IWX218xDigitalPatternOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xDigitalPatternOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xDigitalPatternOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xDigitalPatternOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xDigitalPatternOutput_CreateDigPatternData(This,Channel,Data,Segment)	\
    ( (This)->lpVtbl -> CreateDigPatternData(This,Channel,Data,Segment) ) 

#define IWX218xDigitalPatternOutput_LoadDigitalPatternFromFile(This,Channel,FileName,Segment)	\
    ( (This)->lpVtbl -> LoadDigitalPatternFromFile(This,Channel,FileName,Segment) ) 

#define IWX218xDigitalPatternOutput_CreateDigPatternParamData(This,Channel,State,Delay,HighLevel,LowLevel)	\
    ( (This)->lpVtbl -> CreateDigPatternParamData(This,Channel,State,Delay,HighLevel,LowLevel) ) 

#define IWX218xDigitalPatternOutput_CreateDigPatternParamData1(This,Channel,State,Delay,HighLevel,LowLevel)	\
    ( (This)->lpVtbl -> CreateDigPatternParamData1(This,Channel,State,Delay,HighLevel,LowLevel) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattArbResolution(This,Channel,ArbResolution)	\
    ( (This)->lpVtbl -> ConfigureDigPattArbResolution(This,Channel,ArbResolution) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattBitDelay(This,Channel,BitIndex,BitDelay)	\
    ( (This)->lpVtbl -> ConfigureDigPattBitDelay(This,Channel,BitIndex,BitDelay) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattBitEnabled(This,Channel,BitIndex,BitEnabled)	\
    ( (This)->lpVtbl -> ConfigureDigPattBitEnabled(This,Channel,BitIndex,BitEnabled) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattBitHighLevel(This,Channel,BitIndex,BitHighLevel)	\
    ( (This)->lpVtbl -> ConfigureDigPattBitHighLevel(This,Channel,BitIndex,BitHighLevel) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattBitLowLevel(This,Channel,BitIndex,BitLowLevel)	\
    ( (This)->lpVtbl -> ConfigureDigPattBitLowLevel(This,Channel,BitIndex,BitLowLevel) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattDelay(This,Channel,Delay)	\
    ( (This)->lpVtbl -> ConfigureDigPattDelay(This,Channel,Delay) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattDelayMode(This,Channel,DelayMode)	\
    ( (This)->lpVtbl -> ConfigureDigPattDelayMode(This,Channel,DelayMode) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattEmphasisEnabled(This,Channel,EmphasisEnabled)	\
    ( (This)->lpVtbl -> ConfigureDigPattEmphasisEnabled(This,Channel,EmphasisEnabled) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattEnabled(This,Channel,Enabled)	\
    ( (This)->lpVtbl -> ConfigureDigPattEnabled(This,Channel,Enabled) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattFormatData(This,Channel,FormatData)	\
    ( (This)->lpVtbl -> ConfigureDigPattFormatData(This,Channel,FormatData) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattHighLevel(This,Channel,HighLevel)	\
    ( (This)->lpVtbl -> ConfigureDigPattHighLevel(This,Channel,HighLevel) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattLevelMode(This,Channel,LevelMode)	\
    ( (This)->lpVtbl -> ConfigureDigPattLevelMode(This,Channel,LevelMode) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattLowLevel(This,Channel,LowLevel)	\
    ( (This)->lpVtbl -> ConfigureDigPattLowLevel(This,Channel,LowLevel) ) 

#define IWX218xDigitalPatternOutput_LoadDigitalDataBinaryFile(This,FileName,Segment)	\
    ( (This)->lpVtbl -> LoadDigitalDataBinaryFile(This,FileName,Segment) ) 

#define IWX218xDigitalPatternOutput_LoadDigitalDataAsciiFile(This,FileName,Segment)	\
    ( (This)->lpVtbl -> LoadDigitalDataAsciiFile(This,FileName,Segment) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigClock(This,DigClock)	\
    ( (This)->lpVtbl -> ConfigureDigClock(This,DigClock) ) 

#define IWX218xDigitalPatternOutput_ConfigureDigPattDigPort(This,DigPort)	\
    ( (This)->lpVtbl -> ConfigureDigPattDigPort(This,DigPort) ) 

#define IWX218xDigitalPatternOutput_get_BitDelay(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> get_BitDelay(This,Channel,Index,Val) ) 

#define IWX218xDigitalPatternOutput_put_BitDelay(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> put_BitDelay(This,Channel,Index,Val) ) 

#define IWX218xDigitalPatternOutput_get_BitHighLevel(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> get_BitHighLevel(This,Channel,Index,Val) ) 

#define IWX218xDigitalPatternOutput_put_BitHighLevel(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> put_BitHighLevel(This,Channel,Index,Val) ) 

#define IWX218xDigitalPatternOutput_get_BitLowLevel(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> get_BitLowLevel(This,Channel,Index,Val) ) 

#define IWX218xDigitalPatternOutput_put_BitLowLevel(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> put_BitLowLevel(This,Channel,Index,Val) ) 

#define IWX218xDigitalPatternOutput_get_DelayMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_DelayMode(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_put_DelayMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_DelayMode(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_get_LevelMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_LevelMode(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_put_LevelMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_LevelMode(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_get_BitEnabled(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> get_BitEnabled(This,Channel,Index,Val) ) 

#define IWX218xDigitalPatternOutput_put_BitEnabled(This,Channel,Index,Val)	\
    ( (This)->lpVtbl -> put_BitEnabled(This,Channel,Index,Val) ) 

#define IWX218xDigitalPatternOutput_get_Delay(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Delay(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_put_Delay(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Delay(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_get_HighLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_HighLevel(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_put_HighLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_HighLevel(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_get_LowLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_LowLevel(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_put_LowLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_LowLevel(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_get_PodPresent(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_PodPresent(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_get_EmphasisEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_EmphasisEnabled(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_put_EmphasisEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_EmphasisEnabled(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_get_FormatData(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_FormatData(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_put_FormatData(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_FormatData(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_get_ArbResolution(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_ArbResolution(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_put_ArbResolution(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_ArbResolution(This,Channel,Val) ) 

#define IWX218xDigitalPatternOutput_get_DigClock(This,Val)	\
    ( (This)->lpVtbl -> get_DigClock(This,Val) ) 

#define IWX218xDigitalPatternOutput_put_DigClock(This,Val)	\
    ( (This)->lpVtbl -> put_DigClock(This,Val) ) 

#define IWX218xDigitalPatternOutput_get_DigPort(This,Val)	\
    ( (This)->lpVtbl -> get_DigPort(This,Val) ) 

#define IWX218xDigitalPatternOutput_put_DigPort(This,Val)	\
    ( (This)->lpVtbl -> put_DigPort(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xDigitalPatternOutput_INTERFACE_DEFINED__ */


#ifndef __IWX218xCHIRP_INTERFACE_DEFINED__
#define __IWX218xCHIRP_INTERFACE_DEFINED__

/* interface IWX218xCHIRP */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xCHIRP;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ba1968fa-b591-4460-990f-ecb921ce5bd7")
    IWX218xCHIRP : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChirpAmplDepth( 
            /* [in] */ BSTR Channel,
            /* [in] */ double AmplDepth) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChirpEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChirpFreqDirection( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpFreqDirectionEnum FreqDirection) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChirpFreqSpacing( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpFreqSpacingEnum FreqSpacing) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChirpMarkerFreq( 
            /* [in] */ BSTR Channel,
            /* [in] */ double MarkerFreq) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChirpRepetition( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Repetition) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChirpStartFreq( 
            /* [in] */ BSTR Channel,
            /* [in] */ double StartFreq) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChirpStopFreq( 
            /* [in] */ BSTR Channel,
            /* [in] */ double StopFreq) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChirpWidth( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Width) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChirpAmplDirection( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpAmplitudeDirectionEnum AmplDirection) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureChirpAmplSpacing( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpAmplSpacingEnum AmplSpacing) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Repetition( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Repetition( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StartFrequency( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StartFrequency( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StopFrequency( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StopFrequency( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MarkerFrequency( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MarkerFrequency( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AmplDepth( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AmplDepth( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FreqDirection( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xChirpFreqDirectionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FreqDirection( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpFreqDirectionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FreqSpacing( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xChirpFreqSpacingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FreqSpacing( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpFreqSpacingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AmplDirection( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xChirpAmplitudeDirectionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AmplDirection( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpAmplitudeDirectionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AmplSpacing( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xChirpAmplSpacingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AmplSpacing( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpAmplSpacingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xCHIRPVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xCHIRP * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xCHIRP * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xCHIRP * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChirpAmplDepth )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double AmplDepth);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChirpEnabled )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChirpFreqDirection )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpFreqDirectionEnum FreqDirection);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChirpFreqSpacing )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpFreqSpacingEnum FreqSpacing);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChirpMarkerFreq )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double MarkerFreq);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChirpRepetition )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Repetition);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChirpStartFreq )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double StartFreq);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChirpStopFreq )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double StopFreq);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChirpWidth )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Width);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChirpAmplDirection )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpAmplitudeDirectionEnum AmplDirection);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureChirpAmplSpacing )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpAmplSpacingEnum AmplSpacing);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Repetition )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Repetition )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartFrequency )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartFrequency )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StopFrequency )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StopFrequency )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MarkerFrequency )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MarkerFrequency )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AmplDepth )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AmplDepth )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FreqDirection )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xChirpFreqDirectionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FreqDirection )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpFreqDirectionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FreqSpacing )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xChirpFreqSpacingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FreqSpacing )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpFreqSpacingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AmplDirection )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xChirpAmplitudeDirectionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AmplDirection )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpAmplitudeDirectionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AmplSpacing )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xChirpAmplSpacingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AmplSpacing )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xChirpAmplSpacingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xCHIRP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IWX218xCHIRPVtbl;

    interface IWX218xCHIRP
    {
        CONST_VTBL struct IWX218xCHIRPVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xCHIRP_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xCHIRP_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xCHIRP_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xCHIRP_ConfigureChirpAmplDepth(This,Channel,AmplDepth)	\
    ( (This)->lpVtbl -> ConfigureChirpAmplDepth(This,Channel,AmplDepth) ) 

#define IWX218xCHIRP_ConfigureChirpEnabled(This,Channel,Enabled)	\
    ( (This)->lpVtbl -> ConfigureChirpEnabled(This,Channel,Enabled) ) 

#define IWX218xCHIRP_ConfigureChirpFreqDirection(This,Channel,FreqDirection)	\
    ( (This)->lpVtbl -> ConfigureChirpFreqDirection(This,Channel,FreqDirection) ) 

#define IWX218xCHIRP_ConfigureChirpFreqSpacing(This,Channel,FreqSpacing)	\
    ( (This)->lpVtbl -> ConfigureChirpFreqSpacing(This,Channel,FreqSpacing) ) 

#define IWX218xCHIRP_ConfigureChirpMarkerFreq(This,Channel,MarkerFreq)	\
    ( (This)->lpVtbl -> ConfigureChirpMarkerFreq(This,Channel,MarkerFreq) ) 

#define IWX218xCHIRP_ConfigureChirpRepetition(This,Channel,Repetition)	\
    ( (This)->lpVtbl -> ConfigureChirpRepetition(This,Channel,Repetition) ) 

#define IWX218xCHIRP_ConfigureChirpStartFreq(This,Channel,StartFreq)	\
    ( (This)->lpVtbl -> ConfigureChirpStartFreq(This,Channel,StartFreq) ) 

#define IWX218xCHIRP_ConfigureChirpStopFreq(This,Channel,StopFreq)	\
    ( (This)->lpVtbl -> ConfigureChirpStopFreq(This,Channel,StopFreq) ) 

#define IWX218xCHIRP_ConfigureChirpWidth(This,Channel,Width)	\
    ( (This)->lpVtbl -> ConfigureChirpWidth(This,Channel,Width) ) 

#define IWX218xCHIRP_ConfigureChirpAmplDirection(This,Channel,AmplDirection)	\
    ( (This)->lpVtbl -> ConfigureChirpAmplDirection(This,Channel,AmplDirection) ) 

#define IWX218xCHIRP_ConfigureChirpAmplSpacing(This,Channel,AmplSpacing)	\
    ( (This)->lpVtbl -> ConfigureChirpAmplSpacing(This,Channel,AmplSpacing) ) 

#define IWX218xCHIRP_get_Width(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Width(This,Channel,Val) ) 

#define IWX218xCHIRP_put_Width(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Width(This,Channel,Val) ) 

#define IWX218xCHIRP_get_Repetition(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Repetition(This,Channel,Val) ) 

#define IWX218xCHIRP_put_Repetition(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Repetition(This,Channel,Val) ) 

#define IWX218xCHIRP_get_StartFrequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_StartFrequency(This,Channel,Val) ) 

#define IWX218xCHIRP_put_StartFrequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_StartFrequency(This,Channel,Val) ) 

#define IWX218xCHIRP_get_StopFrequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_StopFrequency(This,Channel,Val) ) 

#define IWX218xCHIRP_put_StopFrequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_StopFrequency(This,Channel,Val) ) 

#define IWX218xCHIRP_get_MarkerFrequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_MarkerFrequency(This,Channel,Val) ) 

#define IWX218xCHIRP_put_MarkerFrequency(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_MarkerFrequency(This,Channel,Val) ) 

#define IWX218xCHIRP_get_AmplDepth(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_AmplDepth(This,Channel,Val) ) 

#define IWX218xCHIRP_put_AmplDepth(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_AmplDepth(This,Channel,Val) ) 

#define IWX218xCHIRP_get_FreqDirection(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_FreqDirection(This,Channel,Val) ) 

#define IWX218xCHIRP_put_FreqDirection(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_FreqDirection(This,Channel,Val) ) 

#define IWX218xCHIRP_get_FreqSpacing(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_FreqSpacing(This,Channel,Val) ) 

#define IWX218xCHIRP_put_FreqSpacing(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_FreqSpacing(This,Channel,Val) ) 

#define IWX218xCHIRP_get_AmplDirection(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_AmplDirection(This,Channel,Val) ) 

#define IWX218xCHIRP_put_AmplDirection(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_AmplDirection(This,Channel,Val) ) 

#define IWX218xCHIRP_get_AmplSpacing(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_AmplSpacing(This,Channel,Val) ) 

#define IWX218xCHIRP_put_AmplSpacing(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_AmplSpacing(This,Channel,Val) ) 

#define IWX218xCHIRP_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xCHIRP_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xCHIRP_INTERFACE_DEFINED__ */


#ifndef __IWX218xFSK_INTERFACE_DEFINED__
#define __IWX218xFSK_INTERFACE_DEFINED__

/* interface IWX218xFSK */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xFSK;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19eadc91-8a35-46f9-b007-b0f0402535dd")
    IWX218xFSK : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateFSKData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadFSKDataFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateFSKDataAdv( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFSKBaud( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Baud) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFSKEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFSKMarker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFSKShiftFreq( 
            /* [in] */ BSTR Channel,
            /* [in] */ double ShiftFreq) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ShiftFreq( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ShiftFreq( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Baud( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Baud( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Marker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xFSKVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xFSK * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xFSK * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xFSK * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateFSKData )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadFSKDataFile )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateFSKDataAdv )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFSKBaud )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Baud);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFSKEnabled )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFSKMarker )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFSKShiftFreq )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double ShiftFreq);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShiftFreq )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShiftFreq )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Baud )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Baud )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Marker )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xFSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IWX218xFSKVtbl;

    interface IWX218xFSK
    {
        CONST_VTBL struct IWX218xFSKVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xFSK_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xFSK_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xFSK_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xFSK_CreateFSKData(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreateFSKData(This,Channel,Data) ) 

#define IWX218xFSK_LoadFSKDataFile(This,Channel,FileName)	\
    ( (This)->lpVtbl -> LoadFSKDataFile(This,Channel,FileName) ) 

#define IWX218xFSK_CreateFSKDataAdv(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreateFSKDataAdv(This,Channel,Data) ) 

#define IWX218xFSK_ConfigureFSKBaud(This,Channel,Baud)	\
    ( (This)->lpVtbl -> ConfigureFSKBaud(This,Channel,Baud) ) 

#define IWX218xFSK_ConfigureFSKEnabled(This,Channel,Enabled)	\
    ( (This)->lpVtbl -> ConfigureFSKEnabled(This,Channel,Enabled) ) 

#define IWX218xFSK_ConfigureFSKMarker(This,Channel,Marker)	\
    ( (This)->lpVtbl -> ConfigureFSKMarker(This,Channel,Marker) ) 

#define IWX218xFSK_ConfigureFSKShiftFreq(This,Channel,ShiftFreq)	\
    ( (This)->lpVtbl -> ConfigureFSKShiftFreq(This,Channel,ShiftFreq) ) 

#define IWX218xFSK_get_ShiftFreq(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_ShiftFreq(This,Channel,Val) ) 

#define IWX218xFSK_put_ShiftFreq(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_ShiftFreq(This,Channel,Val) ) 

#define IWX218xFSK_get_Baud(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Baud(This,Channel,Val) ) 

#define IWX218xFSK_put_Baud(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Baud(This,Channel,Val) ) 

#define IWX218xFSK_get_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Marker(This,Channel,Val) ) 

#define IWX218xFSK_put_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Marker(This,Channel,Val) ) 

#define IWX218xFSK_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xFSK_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xFSK_INTERFACE_DEFINED__ */


#ifndef __IWX218xASK_INTERFACE_DEFINED__
#define __IWX218xASK_INTERFACE_DEFINED__

/* interface IWX218xASK */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xASK;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("dd45b2ef-ec02-46a8-92a0-666c10bcef66")
    IWX218xASK : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateASKData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadASKDataFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateASKDataAdv( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureASKBaud( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Baud) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureASKEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureASKMarker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureASKShiftAmplitude( 
            /* [in] */ BSTR Channel,
            /* [in] */ double ShiftAmpl) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureASKStartAmplitude( 
            /* [in] */ BSTR Channel,
            /* [in] */ double StartAmpl) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StartAmplitude( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StartAmplitude( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ShiftAmplitude( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ShiftAmplitude( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Baud( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Baud( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Marker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xASKVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xASK * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xASK * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xASK * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateASKData )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadASKDataFile )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateASKDataAdv )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureASKBaud )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Baud);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureASKEnabled )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureASKMarker )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureASKShiftAmplitude )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double ShiftAmpl);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureASKStartAmplitude )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double StartAmpl);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartAmplitude )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartAmplitude )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShiftAmplitude )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShiftAmplitude )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Baud )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Baud )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Marker )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xASK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IWX218xASKVtbl;

    interface IWX218xASK
    {
        CONST_VTBL struct IWX218xASKVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xASK_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xASK_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xASK_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xASK_CreateASKData(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreateASKData(This,Channel,Data) ) 

#define IWX218xASK_LoadASKDataFile(This,Channel,FileName)	\
    ( (This)->lpVtbl -> LoadASKDataFile(This,Channel,FileName) ) 

#define IWX218xASK_CreateASKDataAdv(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreateASKDataAdv(This,Channel,Data) ) 

#define IWX218xASK_ConfigureASKBaud(This,Channel,Baud)	\
    ( (This)->lpVtbl -> ConfigureASKBaud(This,Channel,Baud) ) 

#define IWX218xASK_ConfigureASKEnabled(This,Channel,Enabled)	\
    ( (This)->lpVtbl -> ConfigureASKEnabled(This,Channel,Enabled) ) 

#define IWX218xASK_ConfigureASKMarker(This,Channel,Marker)	\
    ( (This)->lpVtbl -> ConfigureASKMarker(This,Channel,Marker) ) 

#define IWX218xASK_ConfigureASKShiftAmplitude(This,Channel,ShiftAmpl)	\
    ( (This)->lpVtbl -> ConfigureASKShiftAmplitude(This,Channel,ShiftAmpl) ) 

#define IWX218xASK_ConfigureASKStartAmplitude(This,Channel,StartAmpl)	\
    ( (This)->lpVtbl -> ConfigureASKStartAmplitude(This,Channel,StartAmpl) ) 

#define IWX218xASK_get_StartAmplitude(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_StartAmplitude(This,Channel,Val) ) 

#define IWX218xASK_put_StartAmplitude(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_StartAmplitude(This,Channel,Val) ) 

#define IWX218xASK_get_ShiftAmplitude(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_ShiftAmplitude(This,Channel,Val) ) 

#define IWX218xASK_put_ShiftAmplitude(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_ShiftAmplitude(This,Channel,Val) ) 

#define IWX218xASK_get_Baud(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Baud(This,Channel,Val) ) 

#define IWX218xASK_put_Baud(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Baud(This,Channel,Val) ) 

#define IWX218xASK_get_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Marker(This,Channel,Val) ) 

#define IWX218xASK_put_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Marker(This,Channel,Val) ) 

#define IWX218xASK_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xASK_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xASK_INTERFACE_DEFINED__ */


#ifndef __IWX218xFHOP_INTERFACE_DEFINED__
#define __IWX218xFHOP_INTERFACE_DEFINED__

/* interface IWX218xFHOP */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xFHOP;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c854b823-ba84-4294-be4f-383d2841465c")
    IWX218xFHOP : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateFHOPFixedData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateFHOPVariableData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *FreqData,
            /* [in] */ SAFEARRAY * *DwellTimeData) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadFHOPFixDataFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadFHOPVarDataFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFHOPDwellMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xFHOPDwellModeEnum DwellMode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFHOPEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFHOPMarker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFHOPTime( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Time) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Time( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Time( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Marker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DwellMode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xFHOPDwellModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DwellMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xFHOPDwellModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xFHOPVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xFHOP * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xFHOP * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xFHOP * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateFHOPFixedData )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateFHOPVariableData )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *FreqData,
            /* [in] */ SAFEARRAY * *DwellTimeData);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadFHOPFixDataFile )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadFHOPVarDataFile )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFHOPDwellMode )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xFHOPDwellModeEnum DwellMode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFHOPEnabled )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFHOPMarker )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFHOPTime )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Time);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Marker )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DwellMode )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xFHOPDwellModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DwellMode )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xFHOPDwellModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xFHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IWX218xFHOPVtbl;

    interface IWX218xFHOP
    {
        CONST_VTBL struct IWX218xFHOPVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xFHOP_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xFHOP_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xFHOP_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xFHOP_CreateFHOPFixedData(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreateFHOPFixedData(This,Channel,Data) ) 

#define IWX218xFHOP_CreateFHOPVariableData(This,Channel,FreqData,DwellTimeData)	\
    ( (This)->lpVtbl -> CreateFHOPVariableData(This,Channel,FreqData,DwellTimeData) ) 

#define IWX218xFHOP_LoadFHOPFixDataFile(This,Channel,FileName)	\
    ( (This)->lpVtbl -> LoadFHOPFixDataFile(This,Channel,FileName) ) 

#define IWX218xFHOP_LoadFHOPVarDataFile(This,Channel,FileName)	\
    ( (This)->lpVtbl -> LoadFHOPVarDataFile(This,Channel,FileName) ) 

#define IWX218xFHOP_ConfigureFHOPDwellMode(This,Channel,DwellMode)	\
    ( (This)->lpVtbl -> ConfigureFHOPDwellMode(This,Channel,DwellMode) ) 

#define IWX218xFHOP_ConfigureFHOPEnabled(This,Channel,Enabled)	\
    ( (This)->lpVtbl -> ConfigureFHOPEnabled(This,Channel,Enabled) ) 

#define IWX218xFHOP_ConfigureFHOPMarker(This,Channel,Marker)	\
    ( (This)->lpVtbl -> ConfigureFHOPMarker(This,Channel,Marker) ) 

#define IWX218xFHOP_ConfigureFHOPTime(This,Channel,Time)	\
    ( (This)->lpVtbl -> ConfigureFHOPTime(This,Channel,Time) ) 

#define IWX218xFHOP_get_Time(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Time(This,Channel,Val) ) 

#define IWX218xFHOP_put_Time(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Time(This,Channel,Val) ) 

#define IWX218xFHOP_get_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Marker(This,Channel,Val) ) 

#define IWX218xFHOP_put_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Marker(This,Channel,Val) ) 

#define IWX218xFHOP_get_DwellMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_DwellMode(This,Channel,Val) ) 

#define IWX218xFHOP_put_DwellMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_DwellMode(This,Channel,Val) ) 

#define IWX218xFHOP_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xFHOP_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xFHOP_INTERFACE_DEFINED__ */


#ifndef __IWX218xAHOP_INTERFACE_DEFINED__
#define __IWX218xAHOP_INTERFACE_DEFINED__

/* interface IWX218xAHOP */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xAHOP;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d8c391ad-9e34-4ac7-b4d5-65643a21432d")
    IWX218xAHOP : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateAHOPFixedData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateAHOPVariableData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *AmplData,
            /* [in] */ SAFEARRAY * *DwellTimeData) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadAHOPFixDataFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadAHOPVarDataFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAHOPDwellMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xAHOPDwellModeEnum DwellMode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAHOPEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAHOPMarker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAHOPTime( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Time) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Time( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Time( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Marker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DwellMode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xAHOPDwellModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DwellMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xAHOPDwellModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xAHOPVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xAHOP * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xAHOP * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xAHOP * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateAHOPFixedData )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateAHOPVariableData )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *AmplData,
            /* [in] */ SAFEARRAY * *DwellTimeData);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadAHOPFixDataFile )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadAHOPVarDataFile )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAHOPDwellMode )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xAHOPDwellModeEnum DwellMode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAHOPEnabled )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAHOPMarker )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAHOPTime )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Time);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Marker )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DwellMode )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xAHOPDwellModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DwellMode )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xAHOPDwellModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xAHOP * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IWX218xAHOPVtbl;

    interface IWX218xAHOP
    {
        CONST_VTBL struct IWX218xAHOPVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xAHOP_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xAHOP_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xAHOP_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xAHOP_CreateAHOPFixedData(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreateAHOPFixedData(This,Channel,Data) ) 

#define IWX218xAHOP_CreateAHOPVariableData(This,Channel,AmplData,DwellTimeData)	\
    ( (This)->lpVtbl -> CreateAHOPVariableData(This,Channel,AmplData,DwellTimeData) ) 

#define IWX218xAHOP_LoadAHOPFixDataFile(This,Channel,FileName)	\
    ( (This)->lpVtbl -> LoadAHOPFixDataFile(This,Channel,FileName) ) 

#define IWX218xAHOP_LoadAHOPVarDataFile(This,Channel,FileName)	\
    ( (This)->lpVtbl -> LoadAHOPVarDataFile(This,Channel,FileName) ) 

#define IWX218xAHOP_ConfigureAHOPDwellMode(This,Channel,DwellMode)	\
    ( (This)->lpVtbl -> ConfigureAHOPDwellMode(This,Channel,DwellMode) ) 

#define IWX218xAHOP_ConfigureAHOPEnabled(This,Channel,Enabled)	\
    ( (This)->lpVtbl -> ConfigureAHOPEnabled(This,Channel,Enabled) ) 

#define IWX218xAHOP_ConfigureAHOPMarker(This,Channel,Marker)	\
    ( (This)->lpVtbl -> ConfigureAHOPMarker(This,Channel,Marker) ) 

#define IWX218xAHOP_ConfigureAHOPTime(This,Channel,Time)	\
    ( (This)->lpVtbl -> ConfigureAHOPTime(This,Channel,Time) ) 

#define IWX218xAHOP_get_Time(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Time(This,Channel,Val) ) 

#define IWX218xAHOP_put_Time(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Time(This,Channel,Val) ) 

#define IWX218xAHOP_get_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Marker(This,Channel,Val) ) 

#define IWX218xAHOP_put_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Marker(This,Channel,Val) ) 

#define IWX218xAHOP_get_DwellMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_DwellMode(This,Channel,Val) ) 

#define IWX218xAHOP_put_DwellMode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_DwellMode(This,Channel,Val) ) 

#define IWX218xAHOP_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xAHOP_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xAHOP_INTERFACE_DEFINED__ */


#ifndef __IWX218xPattern_INTERFACE_DEFINED__
#define __IWX218xPattern_INTERFACE_DEFINED__

/* interface IWX218xPattern */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3b7fd226-21cd-42cd-943f-a6235a6362fc")
    IWX218xPattern : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreatePatternData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternBaud( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Baud) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternHighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double HighLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternLength( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Length) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Level) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternLoop( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Loop) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternLowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double LowLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternMode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternModeEnum Mode) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternPreamble( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Preamble) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternPredType( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternPredefinedTypeEnum Type) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Baud( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Baud( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPatternModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PredefinedType( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPatternPredefinedTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_PredefinedType( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternPredefinedTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HighLevel( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HighLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LowLevel( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LowLevel( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Loop( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Loop( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Preamble( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Preamble( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Length( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Composer( 
            /* [retval][out] */ IWX218xPatternComposer **Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xPattern * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreatePatternData )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternBaud )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Baud);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternHighLevel )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double HighLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternLength )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Length);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternLevel )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Level);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternLoop )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Loop);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternLowLevel )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double LowLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternMode )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternModeEnum Mode);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternPreamble )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Preamble);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternPredType )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternPredefinedTypeEnum Type);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Baud )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Baud )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPatternModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PredefinedType )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPatternPredefinedTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PredefinedType )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternPredefinedTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HighLevel )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HighLevel )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowLevel )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LowLevel )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Loop )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Loop )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Preamble )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Preamble )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Length )( 
            IWX218xPattern * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Composer )( 
            IWX218xPattern * This,
            /* [retval][out] */ IWX218xPatternComposer **Val);
        
        END_INTERFACE
    } IWX218xPatternVtbl;

    interface IWX218xPattern
    {
        CONST_VTBL struct IWX218xPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xPattern_CreatePatternData(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreatePatternData(This,Channel,Data) ) 

#define IWX218xPattern_ConfigurePatternBaud(This,Channel,Baud)	\
    ( (This)->lpVtbl -> ConfigurePatternBaud(This,Channel,Baud) ) 

#define IWX218xPattern_ConfigurePatternHighLevel(This,Channel,HighLevel)	\
    ( (This)->lpVtbl -> ConfigurePatternHighLevel(This,Channel,HighLevel) ) 

#define IWX218xPattern_ConfigurePatternLength(This,Channel,Length)	\
    ( (This)->lpVtbl -> ConfigurePatternLength(This,Channel,Length) ) 

#define IWX218xPattern_ConfigurePatternLevel(This,Channel,Level)	\
    ( (This)->lpVtbl -> ConfigurePatternLevel(This,Channel,Level) ) 

#define IWX218xPattern_ConfigurePatternLoop(This,Channel,Loop)	\
    ( (This)->lpVtbl -> ConfigurePatternLoop(This,Channel,Loop) ) 

#define IWX218xPattern_ConfigurePatternLowLevel(This,Channel,LowLevel)	\
    ( (This)->lpVtbl -> ConfigurePatternLowLevel(This,Channel,LowLevel) ) 

#define IWX218xPattern_ConfigurePatternMode(This,Channel,Mode)	\
    ( (This)->lpVtbl -> ConfigurePatternMode(This,Channel,Mode) ) 

#define IWX218xPattern_ConfigurePatternPreamble(This,Channel,Preamble)	\
    ( (This)->lpVtbl -> ConfigurePatternPreamble(This,Channel,Preamble) ) 

#define IWX218xPattern_ConfigurePatternPredType(This,Channel,Type)	\
    ( (This)->lpVtbl -> ConfigurePatternPredType(This,Channel,Type) ) 

#define IWX218xPattern_get_Baud(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Baud(This,Channel,Val) ) 

#define IWX218xPattern_put_Baud(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Baud(This,Channel,Val) ) 

#define IWX218xPattern_get_Level(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Channel,Val) ) 

#define IWX218xPattern_put_Level(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Channel,Val) ) 

#define IWX218xPattern_get_Mode(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Mode(This,Channel,Val) ) 

#define IWX218xPattern_put_Mode(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Mode(This,Channel,Val) ) 

#define IWX218xPattern_get_PredefinedType(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_PredefinedType(This,Channel,Val) ) 

#define IWX218xPattern_put_PredefinedType(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_PredefinedType(This,Channel,Val) ) 

#define IWX218xPattern_get_HighLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_HighLevel(This,Channel,Val) ) 

#define IWX218xPattern_put_HighLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_HighLevel(This,Channel,Val) ) 

#define IWX218xPattern_get_LowLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_LowLevel(This,Channel,Val) ) 

#define IWX218xPattern_put_LowLevel(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_LowLevel(This,Channel,Val) ) 

#define IWX218xPattern_get_Loop(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Loop(This,Channel,Val) ) 

#define IWX218xPattern_put_Loop(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Loop(This,Channel,Val) ) 

#define IWX218xPattern_get_Preamble(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Preamble(This,Channel,Val) ) 

#define IWX218xPattern_put_Preamble(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Preamble(This,Channel,Val) ) 

#define IWX218xPattern_get_Length(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Length(This,Channel,Val) ) 

#define IWX218xPattern_put_Length(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Length(This,Channel,Val) ) 

#define IWX218xPattern_get_Composer(This,Val)	\
    ( (This)->lpVtbl -> get_Composer(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xPattern_INTERFACE_DEFINED__ */


#ifndef __IWX218xPatternComposer_INTERFACE_DEFINED__
#define __IWX218xPatternComposer_INTERFACE_DEFINED__

/* interface IWX218xPatternComposer */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xPatternComposer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1d6036f8-df37-4c92-b30c-ab885209ad73")
    IWX218xPatternComposer : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreatePatternComposerFastData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *AmplLevel,
            /* [in] */ SAFEARRAY * *DwellTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadPatternFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreatePatternComposerLinearData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *AmplLevel,
            /* [in] */ SAFEARRAY * *DwellTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternCompFastStart( 
            /* [in] */ BSTR Channel,
            /* [in] */ double FastStart) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternCompLinearStart( 
            /* [in] */ BSTR Channel,
            /* [in] */ double LinearStart) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternCompResolution( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternCompResType( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternResTypeEnum ResType) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePatternCompTransType( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternComposerTransitionTypeEnum TransitionType) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TransitionType( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPatternComposerTransitionTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TransitionType( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternComposerTransitionTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LinearStart( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LinearStart( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionType( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPatternResTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ResolutionType( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternResTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FastStart( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FastStart( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xPatternComposerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xPatternComposer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xPatternComposer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xPatternComposer * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreatePatternComposerFastData )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *AmplLevel,
            /* [in] */ SAFEARRAY * *DwellTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadPatternFile )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreatePatternComposerLinearData )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *AmplLevel,
            /* [in] */ SAFEARRAY * *DwellTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternCompFastStart )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double FastStart);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternCompLinearStart )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double LinearStart);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternCompResolution )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternCompResType )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternResTypeEnum ResType);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePatternCompTransType )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternComposerTransitionTypeEnum TransitionType);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransitionType )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPatternComposerTransitionTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransitionType )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternComposerTransitionTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LinearStart )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LinearStart )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionType )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPatternResTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResolutionType )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPatternResTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FastStart )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FastStart )( 
            IWX218xPatternComposer * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IWX218xPatternComposerVtbl;

    interface IWX218xPatternComposer
    {
        CONST_VTBL struct IWX218xPatternComposerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xPatternComposer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xPatternComposer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xPatternComposer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xPatternComposer_CreatePatternComposerFastData(This,Channel,AmplLevel,DwellTime)	\
    ( (This)->lpVtbl -> CreatePatternComposerFastData(This,Channel,AmplLevel,DwellTime) ) 

#define IWX218xPatternComposer_LoadPatternFile(This,Channel,FileName)	\
    ( (This)->lpVtbl -> LoadPatternFile(This,Channel,FileName) ) 

#define IWX218xPatternComposer_CreatePatternComposerLinearData(This,Channel,AmplLevel,DwellTime)	\
    ( (This)->lpVtbl -> CreatePatternComposerLinearData(This,Channel,AmplLevel,DwellTime) ) 

#define IWX218xPatternComposer_ConfigurePatternCompFastStart(This,Channel,FastStart)	\
    ( (This)->lpVtbl -> ConfigurePatternCompFastStart(This,Channel,FastStart) ) 

#define IWX218xPatternComposer_ConfigurePatternCompLinearStart(This,Channel,LinearStart)	\
    ( (This)->lpVtbl -> ConfigurePatternCompLinearStart(This,Channel,LinearStart) ) 

#define IWX218xPatternComposer_ConfigurePatternCompResolution(This,Channel,Resolution)	\
    ( (This)->lpVtbl -> ConfigurePatternCompResolution(This,Channel,Resolution) ) 

#define IWX218xPatternComposer_ConfigurePatternCompResType(This,Channel,ResType)	\
    ( (This)->lpVtbl -> ConfigurePatternCompResType(This,Channel,ResType) ) 

#define IWX218xPatternComposer_ConfigurePatternCompTransType(This,Channel,TransitionType)	\
    ( (This)->lpVtbl -> ConfigurePatternCompTransType(This,Channel,TransitionType) ) 

#define IWX218xPatternComposer_get_TransitionType(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_TransitionType(This,Channel,Val) ) 

#define IWX218xPatternComposer_put_TransitionType(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_TransitionType(This,Channel,Val) ) 

#define IWX218xPatternComposer_get_LinearStart(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_LinearStart(This,Channel,Val) ) 

#define IWX218xPatternComposer_put_LinearStart(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_LinearStart(This,Channel,Val) ) 

#define IWX218xPatternComposer_get_Resolution(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Channel,Val) ) 

#define IWX218xPatternComposer_put_Resolution(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Channel,Val) ) 

#define IWX218xPatternComposer_get_ResolutionType(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_ResolutionType(This,Channel,Val) ) 

#define IWX218xPatternComposer_put_ResolutionType(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_ResolutionType(This,Channel,Val) ) 

#define IWX218xPatternComposer_get_FastStart(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_FastStart(This,Channel,Val) ) 

#define IWX218xPatternComposer_put_FastStart(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_FastStart(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xPatternComposer_INTERFACE_DEFINED__ */


#ifndef __IWX218xPSK_INTERFACE_DEFINED__
#define __IWX218xPSK_INTERFACE_DEFINED__

/* interface IWX218xPSK */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xPSK;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41b28e43-47bb-4a5b-a05c-a46837b2f07d")
    IWX218xPSK : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreatePSKData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreatePSKUserData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadPSKDataFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadPSKUserDataFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreatePSKDataAdv( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePSKBaud( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Baud) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePSKCarrierState( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePSKState( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePSKMarker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePSKRate( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Rate) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePSKShiftPhase( 
            /* [in] */ BSTR Channel,
            /* [in] */ double ShiftPhase) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePSKStartPhase( 
            /* [in] */ BSTR Channel,
            /* [in] */ double StartPhase) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigurePSKType( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPskTypeEnum Type) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StartPhase( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StartPhase( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ShiftPhase( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ShiftPhase( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Rate( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Rate( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPskTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPskTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Marker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Baud( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Baud( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CarrierEnabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CarrierEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xPSKVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xPSK * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xPSK * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xPSK * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreatePSKData )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreatePSKUserData )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadPSKDataFile )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadPSKUserDataFile )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreatePSKDataAdv )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePSKBaud )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Baud);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePSKCarrierState )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePSKState )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePSKMarker )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePSKRate )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Rate);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePSKShiftPhase )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double ShiftPhase);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePSKStartPhase )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double StartPhase);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigurePSKType )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPskTypeEnum Type);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPhase )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartPhase )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShiftPhase )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShiftPhase )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rate )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Rate )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xPskTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xPskTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Marker )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Baud )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Baud )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CarrierEnabled )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CarrierEnabled )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xPSK * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IWX218xPSKVtbl;

    interface IWX218xPSK
    {
        CONST_VTBL struct IWX218xPSKVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xPSK_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xPSK_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xPSK_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xPSK_CreatePSKData(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreatePSKData(This,Channel,Data) ) 

#define IWX218xPSK_CreatePSKUserData(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreatePSKUserData(This,Channel,Data) ) 

#define IWX218xPSK_LoadPSKDataFile(This,Channel,FileName)	\
    ( (This)->lpVtbl -> LoadPSKDataFile(This,Channel,FileName) ) 

#define IWX218xPSK_LoadPSKUserDataFile(This,Channel,FileName)	\
    ( (This)->lpVtbl -> LoadPSKUserDataFile(This,Channel,FileName) ) 

#define IWX218xPSK_CreatePSKDataAdv(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreatePSKDataAdv(This,Channel,Data) ) 

#define IWX218xPSK_ConfigurePSKBaud(This,Channel,Baud)	\
    ( (This)->lpVtbl -> ConfigurePSKBaud(This,Channel,Baud) ) 

#define IWX218xPSK_ConfigurePSKCarrierState(This,Channel,State)	\
    ( (This)->lpVtbl -> ConfigurePSKCarrierState(This,Channel,State) ) 

#define IWX218xPSK_ConfigurePSKState(This,Channel,State)	\
    ( (This)->lpVtbl -> ConfigurePSKState(This,Channel,State) ) 

#define IWX218xPSK_ConfigurePSKMarker(This,Channel,Marker)	\
    ( (This)->lpVtbl -> ConfigurePSKMarker(This,Channel,Marker) ) 

#define IWX218xPSK_ConfigurePSKRate(This,Channel,Rate)	\
    ( (This)->lpVtbl -> ConfigurePSKRate(This,Channel,Rate) ) 

#define IWX218xPSK_ConfigurePSKShiftPhase(This,Channel,ShiftPhase)	\
    ( (This)->lpVtbl -> ConfigurePSKShiftPhase(This,Channel,ShiftPhase) ) 

#define IWX218xPSK_ConfigurePSKStartPhase(This,Channel,StartPhase)	\
    ( (This)->lpVtbl -> ConfigurePSKStartPhase(This,Channel,StartPhase) ) 

#define IWX218xPSK_ConfigurePSKType(This,Channel,Type)	\
    ( (This)->lpVtbl -> ConfigurePSKType(This,Channel,Type) ) 

#define IWX218xPSK_get_StartPhase(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_StartPhase(This,Channel,Val) ) 

#define IWX218xPSK_put_StartPhase(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_StartPhase(This,Channel,Val) ) 

#define IWX218xPSK_get_ShiftPhase(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_ShiftPhase(This,Channel,Val) ) 

#define IWX218xPSK_put_ShiftPhase(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_ShiftPhase(This,Channel,Val) ) 

#define IWX218xPSK_get_Rate(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Rate(This,Channel,Val) ) 

#define IWX218xPSK_put_Rate(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Rate(This,Channel,Val) ) 

#define IWX218xPSK_get_Type(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Channel,Val) ) 

#define IWX218xPSK_put_Type(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Channel,Val) ) 

#define IWX218xPSK_get_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Marker(This,Channel,Val) ) 

#define IWX218xPSK_put_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Marker(This,Channel,Val) ) 

#define IWX218xPSK_get_Baud(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Baud(This,Channel,Val) ) 

#define IWX218xPSK_put_Baud(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Baud(This,Channel,Val) ) 

#define IWX218xPSK_get_CarrierEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_CarrierEnabled(This,Channel,Val) ) 

#define IWX218xPSK_put_CarrierEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_CarrierEnabled(This,Channel,Val) ) 

#define IWX218xPSK_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xPSK_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xPSK_INTERFACE_DEFINED__ */


#ifndef __IWX218xQAM_INTERFACE_DEFINED__
#define __IWX218xQAM_INTERFACE_DEFINED__

/* interface IWX218xQAM */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWX218xQAM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e823dbcb-3f91-422c-8ed0-08b97f979348")
    IWX218xQAM : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateQAMData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateQAMUserData( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *DataI,
            /* [in] */ SAFEARRAY * *DataQ) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadQAMDataFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE LoadQAMUserDataFile( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateQAMDataAdv( 
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureQAMBaud( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Baud) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureQAMCarrierState( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureQAMState( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureQAMMarker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureQAMType( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xQamTypeEnum Type) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Baud( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Baud( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xQamTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xQamTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Marker( 
            /* [in] */ BSTR Channel,
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CarrierEnabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CarrierEnabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWX218xQAMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWX218xQAM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWX218xQAM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWX218xQAM * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateQAMData )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateQAMUserData )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *DataI,
            /* [in] */ SAFEARRAY * *DataQ);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadQAMDataFile )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *LoadQAMUserDataFile )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateQAMDataAdv )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ SAFEARRAY * *Data);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureQAMBaud )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Baud);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureQAMCarrierState )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureQAMState )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL State);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureQAMMarker )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Marker);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureQAMType )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xQamTypeEnum Type);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Baud )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Baud )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ enum WX218xQamTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum WX218xQamTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Marker )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CarrierEnabled )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CarrierEnabled )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IWX218xQAM * This,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IWX218xQAMVtbl;

    interface IWX218xQAM
    {
        CONST_VTBL struct IWX218xQAMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWX218xQAM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWX218xQAM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWX218xQAM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWX218xQAM_CreateQAMData(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreateQAMData(This,Channel,Data) ) 

#define IWX218xQAM_CreateQAMUserData(This,Channel,DataI,DataQ)	\
    ( (This)->lpVtbl -> CreateQAMUserData(This,Channel,DataI,DataQ) ) 

#define IWX218xQAM_LoadQAMDataFile(This,Channel,FileName)	\
    ( (This)->lpVtbl -> LoadQAMDataFile(This,Channel,FileName) ) 

#define IWX218xQAM_LoadQAMUserDataFile(This,Channel,FileName)	\
    ( (This)->lpVtbl -> LoadQAMUserDataFile(This,Channel,FileName) ) 

#define IWX218xQAM_CreateQAMDataAdv(This,Channel,Data)	\
    ( (This)->lpVtbl -> CreateQAMDataAdv(This,Channel,Data) ) 

#define IWX218xQAM_ConfigureQAMBaud(This,Channel,Baud)	\
    ( (This)->lpVtbl -> ConfigureQAMBaud(This,Channel,Baud) ) 

#define IWX218xQAM_ConfigureQAMCarrierState(This,Channel,State)	\
    ( (This)->lpVtbl -> ConfigureQAMCarrierState(This,Channel,State) ) 

#define IWX218xQAM_ConfigureQAMState(This,Channel,State)	\
    ( (This)->lpVtbl -> ConfigureQAMState(This,Channel,State) ) 

#define IWX218xQAM_ConfigureQAMMarker(This,Channel,Marker)	\
    ( (This)->lpVtbl -> ConfigureQAMMarker(This,Channel,Marker) ) 

#define IWX218xQAM_ConfigureQAMType(This,Channel,Type)	\
    ( (This)->lpVtbl -> ConfigureQAMType(This,Channel,Type) ) 

#define IWX218xQAM_get_Baud(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Baud(This,Channel,Val) ) 

#define IWX218xQAM_put_Baud(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Baud(This,Channel,Val) ) 

#define IWX218xQAM_get_Type(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Channel,Val) ) 

#define IWX218xQAM_put_Type(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Channel,Val) ) 

#define IWX218xQAM_get_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Marker(This,Channel,Val) ) 

#define IWX218xQAM_put_Marker(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Marker(This,Channel,Val) ) 

#define IWX218xQAM_get_CarrierEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_CarrierEnabled(This,Channel,Val) ) 

#define IWX218xQAM_put_CarrierEnabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_CarrierEnabled(This,Channel,Val) ) 

#define IWX218xQAM_get_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Channel,Val) ) 

#define IWX218xQAM_put_Enabled(This,Channel,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Channel,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWX218xQAM_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_WX218x;

#ifdef __cplusplus

class DECLSPEC_UUID("185d62a6-86bc-4b0d-8fef-f35f0a0fc943")
WX218x;
#endif
#endif /* __WX218xLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


