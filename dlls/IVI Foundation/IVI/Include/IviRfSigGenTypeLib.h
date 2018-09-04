

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:59:09 2016
 */
/* Compiler settings for IviRfSigGenTypeLib.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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


#ifndef __IviRfSigGenTypeLib_h__
#define __IviRfSigGenTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviRFSigGen_FWD_DEFINED__
#define __IIviRFSigGen_FWD_DEFINED__
typedef interface IIviRFSigGen IIviRFSigGen;

#endif 	/* __IIviRFSigGen_FWD_DEFINED__ */


#ifndef __IIviRFSigGenRF_FWD_DEFINED__
#define __IIviRFSigGenRF_FWD_DEFINED__
typedef interface IIviRFSigGenRF IIviRFSigGenRF;

#endif 	/* __IIviRFSigGenRF_FWD_DEFINED__ */


#ifndef __IIviRFSigGenALC_FWD_DEFINED__
#define __IIviRFSigGenALC_FWD_DEFINED__
typedef interface IIviRFSigGenALC IIviRFSigGenALC;

#endif 	/* __IIviRFSigGenALC_FWD_DEFINED__ */


#ifndef __IIviRFSigGenReferenceOscillator_FWD_DEFINED__
#define __IIviRFSigGenReferenceOscillator_FWD_DEFINED__
typedef interface IIviRFSigGenReferenceOscillator IIviRFSigGenReferenceOscillator;

#endif 	/* __IIviRFSigGenReferenceOscillator_FWD_DEFINED__ */


#ifndef __IIviRFSigGenLFGenerator_FWD_DEFINED__
#define __IIviRFSigGenLFGenerator_FWD_DEFINED__
typedef interface IIviRFSigGenLFGenerator IIviRFSigGenLFGenerator;

#endif 	/* __IIviRFSigGenLFGenerator_FWD_DEFINED__ */


#ifndef __IIviRFSigGenLFGeneratorOutput_FWD_DEFINED__
#define __IIviRFSigGenLFGeneratorOutput_FWD_DEFINED__
typedef interface IIviRFSigGenLFGeneratorOutput IIviRFSigGenLFGeneratorOutput;

#endif 	/* __IIviRFSigGenLFGeneratorOutput_FWD_DEFINED__ */


#ifndef __IIviRFSigGenPulseGenerator_FWD_DEFINED__
#define __IIviRFSigGenPulseGenerator_FWD_DEFINED__
typedef interface IIviRFSigGenPulseGenerator IIviRFSigGenPulseGenerator;

#endif 	/* __IIviRFSigGenPulseGenerator_FWD_DEFINED__ */


#ifndef __IIviRFSigGenPulseGeneratorDouble_FWD_DEFINED__
#define __IIviRFSigGenPulseGeneratorDouble_FWD_DEFINED__
typedef interface IIviRFSigGenPulseGeneratorDouble IIviRFSigGenPulseGeneratorDouble;

#endif 	/* __IIviRFSigGenPulseGeneratorDouble_FWD_DEFINED__ */


#ifndef __IIviRFSigGenPulseGeneratorOutput_FWD_DEFINED__
#define __IIviRFSigGenPulseGeneratorOutput_FWD_DEFINED__
typedef interface IIviRFSigGenPulseGeneratorOutput IIviRFSigGenPulseGeneratorOutput;

#endif 	/* __IIviRFSigGenPulseGeneratorOutput_FWD_DEFINED__ */


#ifndef __IIviRFSigGenAnalogModulation_FWD_DEFINED__
#define __IIviRFSigGenAnalogModulation_FWD_DEFINED__
typedef interface IIviRFSigGenAnalogModulation IIviRFSigGenAnalogModulation;

#endif 	/* __IIviRFSigGenAnalogModulation_FWD_DEFINED__ */


#ifndef __IIviRFSigGenAnalogModulationSource_FWD_DEFINED__
#define __IIviRFSigGenAnalogModulationSource_FWD_DEFINED__
typedef interface IIviRFSigGenAnalogModulationSource IIviRFSigGenAnalogModulationSource;

#endif 	/* __IIviRFSigGenAnalogModulationSource_FWD_DEFINED__ */


#ifndef __IIviRFSigGenAM_FWD_DEFINED__
#define __IIviRFSigGenAM_FWD_DEFINED__
typedef interface IIviRFSigGenAM IIviRFSigGenAM;

#endif 	/* __IIviRFSigGenAM_FWD_DEFINED__ */


#ifndef __IIviRFSigGenFM_FWD_DEFINED__
#define __IIviRFSigGenFM_FWD_DEFINED__
typedef interface IIviRFSigGenFM IIviRFSigGenFM;

#endif 	/* __IIviRFSigGenFM_FWD_DEFINED__ */


#ifndef __IIviRFSigGenPM_FWD_DEFINED__
#define __IIviRFSigGenPM_FWD_DEFINED__
typedef interface IIviRFSigGenPM IIviRFSigGenPM;

#endif 	/* __IIviRFSigGenPM_FWD_DEFINED__ */


#ifndef __IIviRFSigGenPulseModulation_FWD_DEFINED__
#define __IIviRFSigGenPulseModulation_FWD_DEFINED__
typedef interface IIviRFSigGenPulseModulation IIviRFSigGenPulseModulation;

#endif 	/* __IIviRFSigGenPulseModulation_FWD_DEFINED__ */


#ifndef __IIviRFSigGenSweep_FWD_DEFINED__
#define __IIviRFSigGenSweep_FWD_DEFINED__
typedef interface IIviRFSigGenSweep IIviRFSigGenSweep;

#endif 	/* __IIviRFSigGenSweep_FWD_DEFINED__ */


#ifndef __IIviRFSigGenFrequencySweep_FWD_DEFINED__
#define __IIviRFSigGenFrequencySweep_FWD_DEFINED__
typedef interface IIviRFSigGenFrequencySweep IIviRFSigGenFrequencySweep;

#endif 	/* __IIviRFSigGenFrequencySweep_FWD_DEFINED__ */


#ifndef __IIviRFSigGenPowerSweep_FWD_DEFINED__
#define __IIviRFSigGenPowerSweep_FWD_DEFINED__
typedef interface IIviRFSigGenPowerSweep IIviRFSigGenPowerSweep;

#endif 	/* __IIviRFSigGenPowerSweep_FWD_DEFINED__ */


#ifndef __IIviRFSigGenFrequencyStep_FWD_DEFINED__
#define __IIviRFSigGenFrequencyStep_FWD_DEFINED__
typedef interface IIviRFSigGenFrequencyStep IIviRFSigGenFrequencyStep;

#endif 	/* __IIviRFSigGenFrequencyStep_FWD_DEFINED__ */


#ifndef __IIviRFSigGenPowerStep_FWD_DEFINED__
#define __IIviRFSigGenPowerStep_FWD_DEFINED__
typedef interface IIviRFSigGenPowerStep IIviRFSigGenPowerStep;

#endif 	/* __IIviRFSigGenPowerStep_FWD_DEFINED__ */


#ifndef __IIviRFSigGenList_FWD_DEFINED__
#define __IIviRFSigGenList_FWD_DEFINED__
typedef interface IIviRFSigGenList IIviRFSigGenList;

#endif 	/* __IIviRFSigGenList_FWD_DEFINED__ */


#ifndef __IIviRFSigGenDigitalModulation_FWD_DEFINED__
#define __IIviRFSigGenDigitalModulation_FWD_DEFINED__
typedef interface IIviRFSigGenDigitalModulation IIviRFSigGenDigitalModulation;

#endif 	/* __IIviRFSigGenDigitalModulation_FWD_DEFINED__ */


#ifndef __IIviRFSigGenIQ_FWD_DEFINED__
#define __IIviRFSigGenIQ_FWD_DEFINED__
typedef interface IIviRFSigGenIQ IIviRFSigGenIQ;

#endif 	/* __IIviRFSigGenIQ_FWD_DEFINED__ */


#ifndef __IIviRFSigGenIQImpairment_FWD_DEFINED__
#define __IIviRFSigGenIQImpairment_FWD_DEFINED__
typedef interface IIviRFSigGenIQImpairment IIviRFSigGenIQImpairment;

#endif 	/* __IIviRFSigGenIQImpairment_FWD_DEFINED__ */


#ifndef __IIviRFSigGenArb_FWD_DEFINED__
#define __IIviRFSigGenArb_FWD_DEFINED__
typedef interface IIviRFSigGenArb IIviRFSigGenArb;

#endif 	/* __IIviRFSigGenArb_FWD_DEFINED__ */


#ifndef __IIviRFSigGenDigitalModulationBase_FWD_DEFINED__
#define __IIviRFSigGenDigitalModulationBase_FWD_DEFINED__
typedef interface IIviRFSigGenDigitalModulationBase IIviRFSigGenDigitalModulationBase;

#endif 	/* __IIviRFSigGenDigitalModulationBase_FWD_DEFINED__ */


#ifndef __IIviRFSigGenTDMA_FWD_DEFINED__
#define __IIviRFSigGenTDMA_FWD_DEFINED__
typedef interface IIviRFSigGenTDMA IIviRFSigGenTDMA;

#endif 	/* __IIviRFSigGenTDMA_FWD_DEFINED__ */


#ifndef __IIviRFSigGenCDMA_FWD_DEFINED__
#define __IIviRFSigGenCDMA_FWD_DEFINED__
typedef interface IIviRFSigGenCDMA IIviRFSigGenCDMA;

#endif 	/* __IIviRFSigGenCDMA_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_IviRfSigGenTypeLib_0000_0000 */
/* [local] */ 

#pragma once
#pragma once
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_IviRfSigGenTypeLib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IviRfSigGenTypeLib_0000_0000_v0_0_s_ifspec;


#ifndef __IviRFSigGenLib_LIBRARY_DEFINED__
#define __IviRFSigGenLib_LIBRARY_DEFINED__

/* library IviRFSigGenLib */
/* [helpfile][helpstring][version][uuid] */ 





























typedef /* [helpcontext][helpstring] */ 
enum IviRFSigGenErrorCodesEnum
    {
        E_IVIRFSIGGEN_TRIGGER_NOT_SOFTWARE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x1001 ) ),
        E_IVIRFSIGGEN_MAX_TIME_EXCEEDED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2003 ) ),
        E_IVIRFSIGGEN_LIST_UNKNOWN	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x200a ) )
    } 	IviRFSigGenErrorCodesEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenMaxTimeMillisecondsEnum
    {
        IviRFSigGenMaxTimeMillisecondsInfinite	= 0xffffffffUL,
        IviRFSigGenMaxTimeMillisecondsImmediate	= 0
    } 	IviRFSigGenMaxTimeMillisecondsEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenSweepModeEnum
    {
        IviRFSigGenSweepModeNone	= 0,
        IviRFSigGenSweepModeFrequencySweep	= 1,
        IviRFSigGenSweepModePowerSweep	= 2,
        IviRFSigGenSweepModeFrequencyStep	= 3,
        IviRFSigGenSweepModePowerStep	= 4,
        IviRFSigGenSweepModeList	= 5
    } 	IviRFSigGenSweepModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenALCSourceEnum
    {
        IviRFSigGenALCSourceInternal	= 0,
        IviRFSigGenALCSourceExternal	= 1
    } 	IviRFSigGenALCSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenReferenceOscillatorSourceEnum
    {
        IviRFSigGenReferenceOscillatorSourceInternal	= 0,
        IviRFSigGenReferenceOscillatorSourceExternal	= 1
    } 	IviRFSigGenReferenceOscillatorSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenLFGeneratorWaveformEnum
    {
        IviRFSigGenLFGeneratorWaveformSine	= 0,
        IviRFSigGenLFGeneratorWaveformSquare	= 1,
        IviRFSigGenLFGeneratorWaveformTriangle	= 2,
        IviRFSigGenLFGeneratorWaveformRampUp	= 3,
        IviRFSigGenLFGeneratorWaveformRampDown	= 4
    } 	IviRFSigGenLFGeneratorWaveformEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenAMScalingEnum
    {
        IviRFSigGenAMScalingLinear	= 0,
        IviRFSigGenAMScalingLogarithmic	= 1
    } 	IviRFSigGenAMScalingEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenAMExternalCouplingEnum
    {
        IviRFSigGenAMExternalCouplingAC	= 0,
        IviRFSigGenAMExternalCouplingDC	= 1
    } 	IviRFSigGenAMExternalCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenFMExternalCouplingEnum
    {
        IviRFSigGenFMExternalCouplingAC	= 0,
        IviRFSigGenFMExternalCouplingDC	= 1
    } 	IviRFSigGenFMExternalCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenPMExternalCouplingEnum
    {
        IviRFSigGenPMExternalCouplingAC	= 0,
        IviRFSigGenPMExternalCouplingDC	= 1
    } 	IviRFSigGenPMExternalCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenPulseExternalTriggerSlopeEnum
    {
        IviRFSigGenPulseExternalTriggerSlopePositive	= 0,
        IviRFSigGenPulseExternalTriggerSlopeNegative	= 1
    } 	IviRFSigGenPulseExternalTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenPulseTriggerSourceEnum
    {
        IviRFSigGenPulseTriggerSourceInternal	= 0,
        IviRFSigGenPulseTriggerSourceExternal	= 1
    } 	IviRFSigGenPulseTriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenPulseModulationExternalPolarityEnum
    {
        IviRFSigGenPulseModulationExternalPolarityNormal	= 0,
        IviRFSigGenPulseModulationExternalPolarityInverse	= 1
    } 	IviRFSigGenPulseModulationExternalPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenPulseModulationSourceEnum
    {
        IviRFSigGenPulseModulationSourceInternal	= 0,
        IviRFSigGenPulseModulationSourceExternal	= 1
    } 	IviRFSigGenPulseModulationSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenPulseOutputPolarityEnum
    {
        IviRFSigGenPulseOutputPolarityNormal	= 0,
        IviRFSigGenPulseOutputPolarityInverse	= 1
    } 	IviRFSigGenPulseOutputPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenSweepTriggerSourceEnum
    {
        IviRFSigGenSweepTriggerSourceImmediate	= 0,
        IviRFSigGenSweepTriggerSourceExternal	= 1,
        IviRFSigGenSweepTriggerSourceSoftware	= 2
    } 	IviRFSigGenSweepTriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenFrequencyStepScalingEnum
    {
        IviRFSigGenFrequencyStepScalingLinear	= 0,
        IviRFSigGenFrequencyStepScalingLogarithmic	= 1
    } 	IviRFSigGenFrequencyStepScalingEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenIQSourceEnum
    {
        IviRFSigGenIQSourceDigitalModulationBase	= 0,
        IviRFSigGenIQSourceCDMABase	= 1,
        IviRFSigGenIQSourceTDMABase	= 2,
        IviRFSigGenIQSourceArbGenerator	= 3,
        IviRFSigGenIQSourceExternal	= 4
    } 	IviRFSigGenIQSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenArbTriggerSourceEnum
    {
        IviRFSigGenArbTriggerSourceImmediate	= 0,
        IviRFSigGenArbTriggerSourceExternal	= 1,
        IviRFSigGenArbTriggerSourceSoftware	= 2
    } 	IviRFSigGenArbTriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenArbExternalTriggerSlopeEnum
    {
        IviRFSigGenArbExternalTriggerSlopePositive	= 0,
        IviRFSigGenArbExternalTriggerSlopeNegative	= 1
    } 	IviRFSigGenArbExternalTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenDigitalModulationBaseDataSourceEnum
    {
        IviRFSigGenDigitalModulationBaseDataSourceExternal	= 0,
        IviRFSigGenDigitalModulationBaseDataSourcePRBS	= 1,
        IviRFSigGenDigitalModulationBaseDataSourceBitSequence	= 2
    } 	IviRFSigGenDigitalModulationBaseDataSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenDigitalModulationBasePRBSTypeEnum
    {
        IviRFSigGenDigitalModulationBasePRBSTypePRBS9	= 0,
        IviRFSigGenDigitalModulationBasePRBSTypePRBS11	= 1,
        IviRFSigGenDigitalModulationBasePRBSTypePRBS15	= 2,
        IviRFSigGenDigitalModulationBasePRBSTypePRBS16	= 3,
        IviRFSigGenDigitalModulationBasePRBSTypePRBS20	= 4,
        IviRFSigGenDigitalModulationBasePRBSTypePRBS21	= 5,
        IviRFSigGenDigitalModulationBasePRBSTypePRBS23	= 6
    } 	IviRFSigGenDigitalModulationBasePRBSTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenDigitalModulationBaseClockSourceEnum
    {
        IviRFSigGenDigitalModulationBaseClockSourceInternal	= 0,
        IviRFSigGenDigitalModulationBaseClockSourceExternal	= 1
    } 	IviRFSigGenDigitalModulationBaseClockSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenDigitalModulationBaseExternalClockTypeEnum
    {
        IviRFSigGenDigitalModulationBaseExternalClockTypeBit	= 0,
        IviRFSigGenDigitalModulationBaseExternalClockTypeSymbol	= 1
    } 	IviRFSigGenDigitalModulationBaseExternalClockTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenCDMATriggerSourceEnum
    {
        IviRFSigGenCDMATriggerSourceImmediate	= 0,
        IviRFSigGenCDMATriggerSourceExternal	= 1,
        IviRFSigGenCDMATriggerSourceSoftware	= 2
    } 	IviRFSigGenCDMATriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenCDMAExternalTriggerSlopeEnum
    {
        IviRFSigGenCDMAExternalTriggerSlopePositive	= 0,
        IviRFSigGenCDMAExternalTriggerSlopeNegative	= 1
    } 	IviRFSigGenCDMAExternalTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenCDMAClockSourceEnum
    {
        IviRFSigGenCDMAClockSourceInternal	= 0,
        IviRFSigGenCDMAClockSourceExternal	= 1
    } 	IviRFSigGenCDMAClockSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenTDMATriggerSourceEnum
    {
        IviRFSigGenTDMATriggerSourceImmediate	= 0,
        IviRFSigGenTDMATriggerSourceExternal	= 1,
        IviRFSigGenTDMATriggerSourceSoftware	= 2
    } 	IviRFSigGenTDMATriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenTDMAExternalTriggerSlopeEnum
    {
        IviRFSigGenTDMAExternalTriggerSlopePositive	= 0,
        IviRFSigGenTDMAExternalTriggerSlopeNegative	= 1
    } 	IviRFSigGenTDMAExternalTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenTDMAClockSourceEnum
    {
        IviRFSigGenTDMAClockSourceInternal	= 0,
        IviRFSigGenTDMAClockSourceExternal	= 1
    } 	IviRFSigGenTDMAClockSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviRFSigGenTDMAExternalClockTypeEnum
    {
        IviRFSigGenTDMAExternalClockTypeBit	= 0,
        IviRFSigGenTDMAExternalClockTypeSymbol	= 1
    } 	IviRFSigGenTDMAExternalClockTypeEnum;


EXTERN_C const IID LIBID_IviRFSigGenLib;

#ifndef __IIviRFSigGen_INTERFACE_DEFINED__
#define __IIviRFSigGen_INTERFACE_DEFINED__

/* interface IIviRFSigGen */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGen;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52e2-a398-11d4-ba58-000064657374")
    IIviRFSigGen : public IIviDriver
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RF( 
            /* [retval][out] */ IIviRFSigGenRF **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ALC( 
            /* [retval][out] */ IIviRFSigGenALC **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LFGenerator( 
            /* [retval][out] */ IIviRFSigGenLFGenerator **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PulseGenerator( 
            /* [retval][out] */ IIviRFSigGenPulseGenerator **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Sweep( 
            /* [retval][out] */ IIviRFSigGenSweep **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceOscillator( 
            /* [retval][out] */ IIviRFSigGenReferenceOscillator **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AnalogModulation( 
            /* [retval][out] */ IIviRFSigGenAnalogModulation **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PulseModulation( 
            /* [retval][out] */ IIviRFSigGenPulseModulation **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DigitalModulation( 
            /* [retval][out] */ IIviRFSigGenDigitalModulation **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IQ( 
            /* [retval][out] */ IIviRFSigGenIQ **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGen * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGen * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGen * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviRFSigGen * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviRFSigGen * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviRFSigGen * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RF )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviRFSigGenRF **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ALC )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviRFSigGenALC **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LFGenerator )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviRFSigGenLFGenerator **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PulseGenerator )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviRFSigGenPulseGenerator **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sweep )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviRFSigGenSweep **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceOscillator )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviRFSigGenReferenceOscillator **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AnalogModulation )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviRFSigGenAnalogModulation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PulseModulation )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviRFSigGenPulseModulation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DigitalModulation )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviRFSigGenDigitalModulation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IQ )( 
            IIviRFSigGen * This,
            /* [retval][out] */ IIviRFSigGenIQ **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviRFSigGen * This);
        
        END_INTERFACE
    } IIviRFSigGenVtbl;

    interface IIviRFSigGen
    {
        CONST_VTBL struct IIviRFSigGenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGen_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGen_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGen_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGen_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviRFSigGen_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviRFSigGen_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviRFSigGen_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviRFSigGen_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviRFSigGen_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviRFSigGen_get_RF(This,pVal)	\
    ( (This)->lpVtbl -> get_RF(This,pVal) ) 

#define IIviRFSigGen_get_ALC(This,pVal)	\
    ( (This)->lpVtbl -> get_ALC(This,pVal) ) 

#define IIviRFSigGen_get_LFGenerator(This,pVal)	\
    ( (This)->lpVtbl -> get_LFGenerator(This,pVal) ) 

#define IIviRFSigGen_get_PulseGenerator(This,pVal)	\
    ( (This)->lpVtbl -> get_PulseGenerator(This,pVal) ) 

#define IIviRFSigGen_get_Sweep(This,pVal)	\
    ( (This)->lpVtbl -> get_Sweep(This,pVal) ) 

#define IIviRFSigGen_get_ReferenceOscillator(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferenceOscillator(This,pVal) ) 

#define IIviRFSigGen_get_AnalogModulation(This,pVal)	\
    ( (This)->lpVtbl -> get_AnalogModulation(This,pVal) ) 

#define IIviRFSigGen_get_PulseModulation(This,pVal)	\
    ( (This)->lpVtbl -> get_PulseModulation(This,pVal) ) 

#define IIviRFSigGen_get_DigitalModulation(This,pVal)	\
    ( (This)->lpVtbl -> get_DigitalModulation(This,pVal) ) 

#define IIviRFSigGen_get_IQ(This,pVal)	\
    ( (This)->lpVtbl -> get_IQ(This,pVal) ) 

#define IIviRFSigGen_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGen_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenRF_INTERFACE_DEFINED__
#define __IIviRFSigGenRF_INTERFACE_DEFINED__

/* interface IIviRFSigGenRF */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenRF;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52e3-a398-11d4-ba58-000064657374")
    IIviRFSigGenRF : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE Frequency,
            /* [in] */ DOUBLE PowerLevel) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OutputEnabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OutputEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IsSettled( 
            /* [retval][out] */ VARIANT_BOOL *Done) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE WaitUntilSettled( 
            /* [in] */ LONG MaxTimeMilliseconds) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE DisableAllModulation( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenRFVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenRF * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenRF * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenRF * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenRF * This,
            /* [in] */ DOUBLE Frequency,
            /* [in] */ DOUBLE PowerLevel);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IIviRFSigGenRF * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviRFSigGenRF * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviRFSigGenRF * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviRFSigGenRF * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputEnabled )( 
            IIviRFSigGenRF * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputEnabled )( 
            IIviRFSigGenRF * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsSettled )( 
            IIviRFSigGenRF * This,
            /* [retval][out] */ VARIANT_BOOL *Done);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *WaitUntilSettled )( 
            IIviRFSigGenRF * This,
            /* [in] */ LONG MaxTimeMilliseconds);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *DisableAllModulation )( 
            IIviRFSigGenRF * This);
        
        END_INTERFACE
    } IIviRFSigGenRFVtbl;

    interface IIviRFSigGenRF
    {
        CONST_VTBL struct IIviRFSigGenRFVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenRF_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenRF_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenRF_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenRF_Configure(This,Frequency,PowerLevel)	\
    ( (This)->lpVtbl -> Configure(This,Frequency,PowerLevel) ) 

#define IIviRFSigGenRF_put_Frequency(This,newVal)	\
    ( (This)->lpVtbl -> put_Frequency(This,newVal) ) 

#define IIviRFSigGenRF_get_Frequency(This,pVal)	\
    ( (This)->lpVtbl -> get_Frequency(This,pVal) ) 

#define IIviRFSigGenRF_put_Level(This,newVal)	\
    ( (This)->lpVtbl -> put_Level(This,newVal) ) 

#define IIviRFSigGenRF_get_Level(This,pVal)	\
    ( (This)->lpVtbl -> get_Level(This,pVal) ) 

#define IIviRFSigGenRF_put_OutputEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_OutputEnabled(This,newVal) ) 

#define IIviRFSigGenRF_get_OutputEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_OutputEnabled(This,pVal) ) 

#define IIviRFSigGenRF_IsSettled(This,Done)	\
    ( (This)->lpVtbl -> IsSettled(This,Done) ) 

#define IIviRFSigGenRF_WaitUntilSettled(This,MaxTimeMilliseconds)	\
    ( (This)->lpVtbl -> WaitUntilSettled(This,MaxTimeMilliseconds) ) 

#define IIviRFSigGenRF_DisableAllModulation(This)	\
    ( (This)->lpVtbl -> DisableAllModulation(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenRF_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenALC_INTERFACE_DEFINED__
#define __IIviRFSigGenALC_INTERFACE_DEFINED__

/* interface IIviRFSigGenALC */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenALC;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52e4-a398-11d4-ba58-000064657374")
    IIviRFSigGenALC : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviRFSigGenALCSourceEnum Source,
            /* [in] */ DOUBLE Bandwidth) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ IviRFSigGenALCSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ IviRFSigGenALCSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Bandwidth( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Bandwidth( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenALCVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenALC * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenALC * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenALC * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenALC * This,
            /* [in] */ IviRFSigGenALCSourceEnum Source,
            /* [in] */ DOUBLE Bandwidth);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviRFSigGenALC * This,
            /* [in] */ IviRFSigGenALCSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviRFSigGenALC * This,
            /* [retval][out] */ IviRFSigGenALCSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bandwidth )( 
            IIviRFSigGenALC * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )( 
            IIviRFSigGenALC * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviRFSigGenALC * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviRFSigGenALC * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IIviRFSigGenALCVtbl;

    interface IIviRFSigGenALC
    {
        CONST_VTBL struct IIviRFSigGenALCVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenALC_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenALC_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenALC_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenALC_Configure(This,Source,Bandwidth)	\
    ( (This)->lpVtbl -> Configure(This,Source,Bandwidth) ) 

#define IIviRFSigGenALC_put_Source(This,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,newVal) ) 

#define IIviRFSigGenALC_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#define IIviRFSigGenALC_put_Bandwidth(This,newVal)	\
    ( (This)->lpVtbl -> put_Bandwidth(This,newVal) ) 

#define IIviRFSigGenALC_get_Bandwidth(This,pVal)	\
    ( (This)->lpVtbl -> get_Bandwidth(This,pVal) ) 

#define IIviRFSigGenALC_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviRFSigGenALC_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenALC_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenReferenceOscillator_INTERFACE_DEFINED__
#define __IIviRFSigGenReferenceOscillator_INTERFACE_DEFINED__

/* interface IIviRFSigGenReferenceOscillator */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenReferenceOscillator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52e5-a398-11d4-ba58-000064657374")
    IIviRFSigGenReferenceOscillator : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviRFSigGenReferenceOscillatorSourceEnum Source,
            /* [in] */ DOUBLE Frequency) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ IviRFSigGenReferenceOscillatorSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ IviRFSigGenReferenceOscillatorSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalFrequency( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalFrequency( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenReferenceOscillatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenReferenceOscillator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenReferenceOscillator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenReferenceOscillator * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenReferenceOscillator * This,
            /* [in] */ IviRFSigGenReferenceOscillatorSourceEnum Source,
            /* [in] */ DOUBLE Frequency);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviRFSigGenReferenceOscillator * This,
            /* [in] */ IviRFSigGenReferenceOscillatorSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviRFSigGenReferenceOscillator * This,
            /* [retval][out] */ IviRFSigGenReferenceOscillatorSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalFrequency )( 
            IIviRFSigGenReferenceOscillator * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalFrequency )( 
            IIviRFSigGenReferenceOscillator * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviRFSigGenReferenceOscillatorVtbl;

    interface IIviRFSigGenReferenceOscillator
    {
        CONST_VTBL struct IIviRFSigGenReferenceOscillatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenReferenceOscillator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenReferenceOscillator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenReferenceOscillator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenReferenceOscillator_Configure(This,Source,Frequency)	\
    ( (This)->lpVtbl -> Configure(This,Source,Frequency) ) 

#define IIviRFSigGenReferenceOscillator_put_Source(This,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,newVal) ) 

#define IIviRFSigGenReferenceOscillator_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#define IIviRFSigGenReferenceOscillator_put_ExternalFrequency(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalFrequency(This,newVal) ) 

#define IIviRFSigGenReferenceOscillator_get_ExternalFrequency(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalFrequency(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenReferenceOscillator_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenLFGenerator_INTERFACE_DEFINED__
#define __IIviRFSigGenLFGenerator_INTERFACE_DEFINED__

/* interface IIviRFSigGenLFGenerator */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenLFGenerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52e6-a398-11d4-ba58-000064657374")
    IIviRFSigGenLFGenerator : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Output( 
            /* [retval][out] */ IIviRFSigGenLFGeneratorOutput **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE Frequency,
            /* [in] */ IviRFSigGenLFGeneratorWaveformEnum Waveform) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Waveform( 
            /* [in] */ IviRFSigGenLFGeneratorWaveformEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Waveform( 
            /* [retval][out] */ IviRFSigGenLFGeneratorWaveformEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveLFGenerator( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ActiveLFGenerator( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenLFGeneratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenLFGenerator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenLFGenerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenLFGenerator * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Output )( 
            IIviRFSigGenLFGenerator * This,
            /* [retval][out] */ IIviRFSigGenLFGeneratorOutput **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenLFGenerator * This,
            /* [in] */ DOUBLE Frequency,
            /* [in] */ IviRFSigGenLFGeneratorWaveformEnum Waveform);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IIviRFSigGenLFGenerator * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviRFSigGenLFGenerator * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Waveform )( 
            IIviRFSigGenLFGenerator * This,
            /* [in] */ IviRFSigGenLFGeneratorWaveformEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Waveform )( 
            IIviRFSigGenLFGenerator * This,
            /* [retval][out] */ IviRFSigGenLFGeneratorWaveformEnum *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveLFGenerator )( 
            IIviRFSigGenLFGenerator * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveLFGenerator )( 
            IIviRFSigGenLFGenerator * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviRFSigGenLFGenerator * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviRFSigGenLFGenerator * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IIviRFSigGenLFGeneratorVtbl;

    interface IIviRFSigGenLFGenerator
    {
        CONST_VTBL struct IIviRFSigGenLFGeneratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenLFGenerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenLFGenerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenLFGenerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenLFGenerator_get_Output(This,pVal)	\
    ( (This)->lpVtbl -> get_Output(This,pVal) ) 

#define IIviRFSigGenLFGenerator_Configure(This,Frequency,Waveform)	\
    ( (This)->lpVtbl -> Configure(This,Frequency,Waveform) ) 

#define IIviRFSigGenLFGenerator_put_Frequency(This,newVal)	\
    ( (This)->lpVtbl -> put_Frequency(This,newVal) ) 

#define IIviRFSigGenLFGenerator_get_Frequency(This,pVal)	\
    ( (This)->lpVtbl -> get_Frequency(This,pVal) ) 

#define IIviRFSigGenLFGenerator_put_Waveform(This,newVal)	\
    ( (This)->lpVtbl -> put_Waveform(This,newVal) ) 

#define IIviRFSigGenLFGenerator_get_Waveform(This,pVal)	\
    ( (This)->lpVtbl -> get_Waveform(This,pVal) ) 

#define IIviRFSigGenLFGenerator_get_ActiveLFGenerator(This,pVal)	\
    ( (This)->lpVtbl -> get_ActiveLFGenerator(This,pVal) ) 

#define IIviRFSigGenLFGenerator_put_ActiveLFGenerator(This,newVal)	\
    ( (This)->lpVtbl -> put_ActiveLFGenerator(This,newVal) ) 

#define IIviRFSigGenLFGenerator_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviRFSigGenLFGenerator_get_Name(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,Index,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenLFGenerator_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenLFGeneratorOutput_INTERFACE_DEFINED__
#define __IIviRFSigGenLFGeneratorOutput_INTERFACE_DEFINED__

/* interface IIviRFSigGenLFGeneratorOutput */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenLFGeneratorOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52e7-a398-11d4-ba58-000064657374")
    IIviRFSigGenLFGeneratorOutput : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE Amplitude,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Amplitude( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Amplitude( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenLFGeneratorOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenLFGeneratorOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenLFGeneratorOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenLFGeneratorOutput * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenLFGeneratorOutput * This,
            /* [in] */ DOUBLE Amplitude,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviRFSigGenLFGeneratorOutput * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviRFSigGenLFGeneratorOutput * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Amplitude )( 
            IIviRFSigGenLFGeneratorOutput * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Amplitude )( 
            IIviRFSigGenLFGeneratorOutput * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviRFSigGenLFGeneratorOutputVtbl;

    interface IIviRFSigGenLFGeneratorOutput
    {
        CONST_VTBL struct IIviRFSigGenLFGeneratorOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenLFGeneratorOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenLFGeneratorOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenLFGeneratorOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenLFGeneratorOutput_Configure(This,Amplitude,Enabled)	\
    ( (This)->lpVtbl -> Configure(This,Amplitude,Enabled) ) 

#define IIviRFSigGenLFGeneratorOutput_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviRFSigGenLFGeneratorOutput_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviRFSigGenLFGeneratorOutput_put_Amplitude(This,newVal)	\
    ( (This)->lpVtbl -> put_Amplitude(This,newVal) ) 

#define IIviRFSigGenLFGeneratorOutput_get_Amplitude(This,pVal)	\
    ( (This)->lpVtbl -> get_Amplitude(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenLFGeneratorOutput_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenPulseGenerator_INTERFACE_DEFINED__
#define __IIviRFSigGenPulseGenerator_INTERFACE_DEFINED__

/* interface IIviRFSigGenPulseGenerator */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenPulseGenerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52e8-a398-11d4-ba58-000064657374")
    IIviRFSigGenPulseGenerator : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Double( 
            /* [retval][out] */ IIviRFSigGenPulseGeneratorDouble **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Output( 
            /* [retval][out] */ IIviRFSigGenPulseGeneratorOutput **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviRFSigGenPulseTriggerSourceEnum PulseTriggerSource,
            /* [in] */ DOUBLE PulseWidth,
            /* [in] */ VARIANT_BOOL GatingEnabled) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureExternalTrigger( 
            /* [in] */ IviRFSigGenPulseExternalTriggerSlopeEnum Slope,
            /* [in] */ DOUBLE Delay) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InternalTriggerPeriod( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InternalTriggerPeriod( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GatingEnabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GatingEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerSource( 
            /* [in] */ IviRFSigGenPulseTriggerSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerSource( 
            /* [retval][out] */ IviRFSigGenPulseTriggerSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalTriggerSlope( 
            /* [in] */ IviRFSigGenPulseExternalTriggerSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalTriggerSlope( 
            /* [retval][out] */ IviRFSigGenPulseExternalTriggerSlopeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalTriggerDelay( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalTriggerDelay( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenPulseGeneratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenPulseGenerator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenPulseGenerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenPulseGenerator * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Double )( 
            IIviRFSigGenPulseGenerator * This,
            /* [retval][out] */ IIviRFSigGenPulseGeneratorDouble **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Output )( 
            IIviRFSigGenPulseGenerator * This,
            /* [retval][out] */ IIviRFSigGenPulseGeneratorOutput **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenPulseGenerator * This,
            /* [in] */ IviRFSigGenPulseTriggerSourceEnum PulseTriggerSource,
            /* [in] */ DOUBLE PulseWidth,
            /* [in] */ VARIANT_BOOL GatingEnabled);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureExternalTrigger )( 
            IIviRFSigGenPulseGenerator * This,
            /* [in] */ IviRFSigGenPulseExternalTriggerSlopeEnum Slope,
            /* [in] */ DOUBLE Delay);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalTriggerPeriod )( 
            IIviRFSigGenPulseGenerator * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalTriggerPeriod )( 
            IIviRFSigGenPulseGenerator * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IIviRFSigGenPulseGenerator * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IIviRFSigGenPulseGenerator * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GatingEnabled )( 
            IIviRFSigGenPulseGenerator * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GatingEnabled )( 
            IIviRFSigGenPulseGenerator * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerSource )( 
            IIviRFSigGenPulseGenerator * This,
            /* [in] */ IviRFSigGenPulseTriggerSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerSource )( 
            IIviRFSigGenPulseGenerator * This,
            /* [retval][out] */ IviRFSigGenPulseTriggerSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalTriggerSlope )( 
            IIviRFSigGenPulseGenerator * This,
            /* [in] */ IviRFSigGenPulseExternalTriggerSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalTriggerSlope )( 
            IIviRFSigGenPulseGenerator * This,
            /* [retval][out] */ IviRFSigGenPulseExternalTriggerSlopeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalTriggerDelay )( 
            IIviRFSigGenPulseGenerator * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalTriggerDelay )( 
            IIviRFSigGenPulseGenerator * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviRFSigGenPulseGeneratorVtbl;

    interface IIviRFSigGenPulseGenerator
    {
        CONST_VTBL struct IIviRFSigGenPulseGeneratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenPulseGenerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenPulseGenerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenPulseGenerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenPulseGenerator_get_Double(This,pVal)	\
    ( (This)->lpVtbl -> get_Double(This,pVal) ) 

#define IIviRFSigGenPulseGenerator_get_Output(This,pVal)	\
    ( (This)->lpVtbl -> get_Output(This,pVal) ) 

#define IIviRFSigGenPulseGenerator_Configure(This,PulseTriggerSource,PulseWidth,GatingEnabled)	\
    ( (This)->lpVtbl -> Configure(This,PulseTriggerSource,PulseWidth,GatingEnabled) ) 

#define IIviRFSigGenPulseGenerator_ConfigureExternalTrigger(This,Slope,Delay)	\
    ( (This)->lpVtbl -> ConfigureExternalTrigger(This,Slope,Delay) ) 

#define IIviRFSigGenPulseGenerator_put_InternalTriggerPeriod(This,newVal)	\
    ( (This)->lpVtbl -> put_InternalTriggerPeriod(This,newVal) ) 

#define IIviRFSigGenPulseGenerator_get_InternalTriggerPeriod(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalTriggerPeriod(This,pVal) ) 

#define IIviRFSigGenPulseGenerator_put_Width(This,newVal)	\
    ( (This)->lpVtbl -> put_Width(This,newVal) ) 

#define IIviRFSigGenPulseGenerator_get_Width(This,pVal)	\
    ( (This)->lpVtbl -> get_Width(This,pVal) ) 

#define IIviRFSigGenPulseGenerator_put_GatingEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_GatingEnabled(This,newVal) ) 

#define IIviRFSigGenPulseGenerator_get_GatingEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_GatingEnabled(This,pVal) ) 

#define IIviRFSigGenPulseGenerator_put_TriggerSource(This,newVal)	\
    ( (This)->lpVtbl -> put_TriggerSource(This,newVal) ) 

#define IIviRFSigGenPulseGenerator_get_TriggerSource(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerSource(This,pVal) ) 

#define IIviRFSigGenPulseGenerator_put_ExternalTriggerSlope(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalTriggerSlope(This,newVal) ) 

#define IIviRFSigGenPulseGenerator_get_ExternalTriggerSlope(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalTriggerSlope(This,pVal) ) 

#define IIviRFSigGenPulseGenerator_put_ExternalTriggerDelay(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalTriggerDelay(This,newVal) ) 

#define IIviRFSigGenPulseGenerator_get_ExternalTriggerDelay(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalTriggerDelay(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenPulseGenerator_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenPulseGeneratorDouble_INTERFACE_DEFINED__
#define __IIviRFSigGenPulseGeneratorDouble_INTERFACE_DEFINED__

/* interface IIviRFSigGenPulseGeneratorDouble */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenPulseGeneratorDouble;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52e9-a398-11d4-ba58-000064657374")
    IIviRFSigGenPulseGeneratorDouble : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ DOUBLE Delay) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenPulseGeneratorDoubleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenPulseGeneratorDouble * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenPulseGeneratorDouble * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenPulseGeneratorDouble * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenPulseGeneratorDouble * This,
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ DOUBLE Delay);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviRFSigGenPulseGeneratorDouble * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviRFSigGenPulseGeneratorDouble * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviRFSigGenPulseGeneratorDouble * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviRFSigGenPulseGeneratorDouble * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviRFSigGenPulseGeneratorDoubleVtbl;

    interface IIviRFSigGenPulseGeneratorDouble
    {
        CONST_VTBL struct IIviRFSigGenPulseGeneratorDoubleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenPulseGeneratorDouble_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenPulseGeneratorDouble_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenPulseGeneratorDouble_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenPulseGeneratorDouble_Configure(This,Enabled,Delay)	\
    ( (This)->lpVtbl -> Configure(This,Enabled,Delay) ) 

#define IIviRFSigGenPulseGeneratorDouble_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviRFSigGenPulseGeneratorDouble_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviRFSigGenPulseGeneratorDouble_put_Delay(This,newVal)	\
    ( (This)->lpVtbl -> put_Delay(This,newVal) ) 

#define IIviRFSigGenPulseGeneratorDouble_get_Delay(This,pVal)	\
    ( (This)->lpVtbl -> get_Delay(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenPulseGeneratorDouble_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenPulseGeneratorOutput_INTERFACE_DEFINED__
#define __IIviRFSigGenPulseGeneratorOutput_INTERFACE_DEFINED__

/* interface IIviRFSigGenPulseGeneratorOutput */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenPulseGeneratorOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52ea-a398-11d4-ba58-000064657374")
    IIviRFSigGenPulseGeneratorOutput : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviRFSigGenPulseOutputPolarityEnum Polarity,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ IviRFSigGenPulseOutputPolarityEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ IviRFSigGenPulseOutputPolarityEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenPulseGeneratorOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenPulseGeneratorOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenPulseGeneratorOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenPulseGeneratorOutput * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenPulseGeneratorOutput * This,
            /* [in] */ IviRFSigGenPulseOutputPolarityEnum Polarity,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviRFSigGenPulseGeneratorOutput * This,
            /* [in] */ IviRFSigGenPulseOutputPolarityEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviRFSigGenPulseGeneratorOutput * This,
            /* [retval][out] */ IviRFSigGenPulseOutputPolarityEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviRFSigGenPulseGeneratorOutput * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviRFSigGenPulseGeneratorOutput * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IIviRFSigGenPulseGeneratorOutputVtbl;

    interface IIviRFSigGenPulseGeneratorOutput
    {
        CONST_VTBL struct IIviRFSigGenPulseGeneratorOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenPulseGeneratorOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenPulseGeneratorOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenPulseGeneratorOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenPulseGeneratorOutput_Configure(This,Polarity,Enabled)	\
    ( (This)->lpVtbl -> Configure(This,Polarity,Enabled) ) 

#define IIviRFSigGenPulseGeneratorOutput_put_Polarity(This,newVal)	\
    ( (This)->lpVtbl -> put_Polarity(This,newVal) ) 

#define IIviRFSigGenPulseGeneratorOutput_get_Polarity(This,pVal)	\
    ( (This)->lpVtbl -> get_Polarity(This,pVal) ) 

#define IIviRFSigGenPulseGeneratorOutput_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviRFSigGenPulseGeneratorOutput_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenPulseGeneratorOutput_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenAnalogModulation_INTERFACE_DEFINED__
#define __IIviRFSigGenAnalogModulation_INTERFACE_DEFINED__

/* interface IIviRFSigGenAnalogModulation */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenAnalogModulation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52eb-a398-11d4-ba58-000064657374")
    IIviRFSigGenAnalogModulation : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AM( 
            /* [retval][out] */ IIviRFSigGenAM **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FM( 
            /* [retval][out] */ IIviRFSigGenFM **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PM( 
            /* [retval][out] */ IIviRFSigGenPM **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ IIviRFSigGenAnalogModulationSource **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenAnalogModulationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenAnalogModulation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenAnalogModulation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenAnalogModulation * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AM )( 
            IIviRFSigGenAnalogModulation * This,
            /* [retval][out] */ IIviRFSigGenAM **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FM )( 
            IIviRFSigGenAnalogModulation * This,
            /* [retval][out] */ IIviRFSigGenFM **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PM )( 
            IIviRFSigGenAnalogModulation * This,
            /* [retval][out] */ IIviRFSigGenPM **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviRFSigGenAnalogModulation * This,
            /* [retval][out] */ IIviRFSigGenAnalogModulationSource **pVal);
        
        END_INTERFACE
    } IIviRFSigGenAnalogModulationVtbl;

    interface IIviRFSigGenAnalogModulation
    {
        CONST_VTBL struct IIviRFSigGenAnalogModulationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenAnalogModulation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenAnalogModulation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenAnalogModulation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenAnalogModulation_get_AM(This,pVal)	\
    ( (This)->lpVtbl -> get_AM(This,pVal) ) 

#define IIviRFSigGenAnalogModulation_get_FM(This,pVal)	\
    ( (This)->lpVtbl -> get_FM(This,pVal) ) 

#define IIviRFSigGenAnalogModulation_get_PM(This,pVal)	\
    ( (This)->lpVtbl -> get_PM(This,pVal) ) 

#define IIviRFSigGenAnalogModulation_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenAnalogModulation_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenAnalogModulationSource_INTERFACE_DEFINED__
#define __IIviRFSigGenAnalogModulationSource_INTERFACE_DEFINED__

/* interface IIviRFSigGenAnalogModulationSource */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenAnalogModulationSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52ec-a398-11d4-ba58-000064657374")
    IIviRFSigGenAnalogModulationSource : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenAnalogModulationSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenAnalogModulationSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenAnalogModulationSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenAnalogModulationSource * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviRFSigGenAnalogModulationSource * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviRFSigGenAnalogModulationSource * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IIviRFSigGenAnalogModulationSourceVtbl;

    interface IIviRFSigGenAnalogModulationSource
    {
        CONST_VTBL struct IIviRFSigGenAnalogModulationSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenAnalogModulationSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenAnalogModulationSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenAnalogModulationSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenAnalogModulationSource_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviRFSigGenAnalogModulationSource_get_Name(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,Index,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenAnalogModulationSource_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenAM_INTERFACE_DEFINED__
#define __IIviRFSigGenAM_INTERFACE_DEFINED__

/* interface IIviRFSigGenAM */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenAM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52ed-a398-11d4-ba58-000064657374")
    IIviRFSigGenAM : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ IviRFSigGenAMScalingEnum Scaling,
            /* [in] */ DOUBLE Depth) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Scaling( 
            /* [in] */ IviRFSigGenAMScalingEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Scaling( 
            /* [retval][out] */ IviRFSigGenAMScalingEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Depth( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Depth( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NominalVoltage( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalCoupling( 
            /* [in] */ IviRFSigGenAMExternalCouplingEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalCoupling( 
            /* [retval][out] */ IviRFSigGenAMExternalCouplingEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenAMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenAM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenAM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenAM * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenAM * This,
            /* [in] */ BSTR Source,
            /* [in] */ IviRFSigGenAMScalingEnum Scaling,
            /* [in] */ DOUBLE Depth);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviRFSigGenAM * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviRFSigGenAM * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scaling )( 
            IIviRFSigGenAM * This,
            /* [in] */ IviRFSigGenAMScalingEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scaling )( 
            IIviRFSigGenAM * This,
            /* [retval][out] */ IviRFSigGenAMScalingEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Depth )( 
            IIviRFSigGenAM * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Depth )( 
            IIviRFSigGenAM * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NominalVoltage )( 
            IIviRFSigGenAM * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviRFSigGenAM * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviRFSigGenAM * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalCoupling )( 
            IIviRFSigGenAM * This,
            /* [in] */ IviRFSigGenAMExternalCouplingEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalCoupling )( 
            IIviRFSigGenAM * This,
            /* [retval][out] */ IviRFSigGenAMExternalCouplingEnum *pVal);
        
        END_INTERFACE
    } IIviRFSigGenAMVtbl;

    interface IIviRFSigGenAM
    {
        CONST_VTBL struct IIviRFSigGenAMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenAM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenAM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenAM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenAM_Configure(This,Source,Scaling,Depth)	\
    ( (This)->lpVtbl -> Configure(This,Source,Scaling,Depth) ) 

#define IIviRFSigGenAM_put_Source(This,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,newVal) ) 

#define IIviRFSigGenAM_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#define IIviRFSigGenAM_put_Scaling(This,newVal)	\
    ( (This)->lpVtbl -> put_Scaling(This,newVal) ) 

#define IIviRFSigGenAM_get_Scaling(This,pVal)	\
    ( (This)->lpVtbl -> get_Scaling(This,pVal) ) 

#define IIviRFSigGenAM_put_Depth(This,newVal)	\
    ( (This)->lpVtbl -> put_Depth(This,newVal) ) 

#define IIviRFSigGenAM_get_Depth(This,pVal)	\
    ( (This)->lpVtbl -> get_Depth(This,pVal) ) 

#define IIviRFSigGenAM_get_NominalVoltage(This,pVal)	\
    ( (This)->lpVtbl -> get_NominalVoltage(This,pVal) ) 

#define IIviRFSigGenAM_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviRFSigGenAM_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviRFSigGenAM_put_ExternalCoupling(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalCoupling(This,newVal) ) 

#define IIviRFSigGenAM_get_ExternalCoupling(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalCoupling(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenAM_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenFM_INTERFACE_DEFINED__
#define __IIviRFSigGenFM_INTERFACE_DEFINED__

/* interface IIviRFSigGenFM */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenFM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52ee-a398-11d4-ba58-000064657374")
    IIviRFSigGenFM : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE Deviation) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Deviation( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Deviation( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NominalVoltage( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalCoupling( 
            /* [in] */ IviRFSigGenFMExternalCouplingEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalCoupling( 
            /* [retval][out] */ IviRFSigGenFMExternalCouplingEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenFMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenFM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenFM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenFM * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenFM * This,
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE Deviation);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviRFSigGenFM * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviRFSigGenFM * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Deviation )( 
            IIviRFSigGenFM * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Deviation )( 
            IIviRFSigGenFM * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NominalVoltage )( 
            IIviRFSigGenFM * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviRFSigGenFM * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviRFSigGenFM * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalCoupling )( 
            IIviRFSigGenFM * This,
            /* [in] */ IviRFSigGenFMExternalCouplingEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalCoupling )( 
            IIviRFSigGenFM * This,
            /* [retval][out] */ IviRFSigGenFMExternalCouplingEnum *pVal);
        
        END_INTERFACE
    } IIviRFSigGenFMVtbl;

    interface IIviRFSigGenFM
    {
        CONST_VTBL struct IIviRFSigGenFMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenFM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenFM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenFM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenFM_Configure(This,Source,Deviation)	\
    ( (This)->lpVtbl -> Configure(This,Source,Deviation) ) 

#define IIviRFSigGenFM_put_Source(This,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,newVal) ) 

#define IIviRFSigGenFM_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#define IIviRFSigGenFM_put_Deviation(This,newVal)	\
    ( (This)->lpVtbl -> put_Deviation(This,newVal) ) 

#define IIviRFSigGenFM_get_Deviation(This,pVal)	\
    ( (This)->lpVtbl -> get_Deviation(This,pVal) ) 

#define IIviRFSigGenFM_get_NominalVoltage(This,pVal)	\
    ( (This)->lpVtbl -> get_NominalVoltage(This,pVal) ) 

#define IIviRFSigGenFM_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviRFSigGenFM_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviRFSigGenFM_put_ExternalCoupling(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalCoupling(This,newVal) ) 

#define IIviRFSigGenFM_get_ExternalCoupling(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalCoupling(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenFM_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenPM_INTERFACE_DEFINED__
#define __IIviRFSigGenPM_INTERFACE_DEFINED__

/* interface IIviRFSigGenPM */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenPM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52ef-a398-11d4-ba58-000064657374")
    IIviRFSigGenPM : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE Deviation) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Deviation( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Deviation( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NominalVoltage( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalCoupling( 
            /* [in] */ IviRFSigGenPMExternalCouplingEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalCoupling( 
            /* [retval][out] */ IviRFSigGenPMExternalCouplingEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenPMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenPM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenPM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenPM * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenPM * This,
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE Deviation);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviRFSigGenPM * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviRFSigGenPM * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Deviation )( 
            IIviRFSigGenPM * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Deviation )( 
            IIviRFSigGenPM * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NominalVoltage )( 
            IIviRFSigGenPM * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviRFSigGenPM * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviRFSigGenPM * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalCoupling )( 
            IIviRFSigGenPM * This,
            /* [in] */ IviRFSigGenPMExternalCouplingEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalCoupling )( 
            IIviRFSigGenPM * This,
            /* [retval][out] */ IviRFSigGenPMExternalCouplingEnum *pVal);
        
        END_INTERFACE
    } IIviRFSigGenPMVtbl;

    interface IIviRFSigGenPM
    {
        CONST_VTBL struct IIviRFSigGenPMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenPM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenPM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenPM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenPM_Configure(This,Source,Deviation)	\
    ( (This)->lpVtbl -> Configure(This,Source,Deviation) ) 

#define IIviRFSigGenPM_put_Source(This,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,newVal) ) 

#define IIviRFSigGenPM_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#define IIviRFSigGenPM_put_Deviation(This,newVal)	\
    ( (This)->lpVtbl -> put_Deviation(This,newVal) ) 

#define IIviRFSigGenPM_get_Deviation(This,pVal)	\
    ( (This)->lpVtbl -> get_Deviation(This,pVal) ) 

#define IIviRFSigGenPM_get_NominalVoltage(This,pVal)	\
    ( (This)->lpVtbl -> get_NominalVoltage(This,pVal) ) 

#define IIviRFSigGenPM_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviRFSigGenPM_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviRFSigGenPM_put_ExternalCoupling(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalCoupling(This,newVal) ) 

#define IIviRFSigGenPM_get_ExternalCoupling(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalCoupling(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenPM_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenPulseModulation_INTERFACE_DEFINED__
#define __IIviRFSigGenPulseModulation_INTERFACE_DEFINED__

/* interface IIviRFSigGenPulseModulation */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenPulseModulation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52f0-a398-11d4-ba58-000064657374")
    IIviRFSigGenPulseModulation : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ IviRFSigGenPulseModulationSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ IviRFSigGenPulseModulationSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalPolarity( 
            /* [in] */ IviRFSigGenPulseModulationExternalPolarityEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalPolarity( 
            /* [retval][out] */ IviRFSigGenPulseModulationExternalPolarityEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenPulseModulationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenPulseModulation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenPulseModulation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenPulseModulation * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviRFSigGenPulseModulation * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviRFSigGenPulseModulation * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviRFSigGenPulseModulation * This,
            /* [in] */ IviRFSigGenPulseModulationSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviRFSigGenPulseModulation * This,
            /* [retval][out] */ IviRFSigGenPulseModulationSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalPolarity )( 
            IIviRFSigGenPulseModulation * This,
            /* [in] */ IviRFSigGenPulseModulationExternalPolarityEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalPolarity )( 
            IIviRFSigGenPulseModulation * This,
            /* [retval][out] */ IviRFSigGenPulseModulationExternalPolarityEnum *pVal);
        
        END_INTERFACE
    } IIviRFSigGenPulseModulationVtbl;

    interface IIviRFSigGenPulseModulation
    {
        CONST_VTBL struct IIviRFSigGenPulseModulationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenPulseModulation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenPulseModulation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenPulseModulation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenPulseModulation_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviRFSigGenPulseModulation_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviRFSigGenPulseModulation_put_Source(This,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,newVal) ) 

#define IIviRFSigGenPulseModulation_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#define IIviRFSigGenPulseModulation_put_ExternalPolarity(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalPolarity(This,newVal) ) 

#define IIviRFSigGenPulseModulation_get_ExternalPolarity(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalPolarity(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenPulseModulation_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenSweep_INTERFACE_DEFINED__
#define __IIviRFSigGenSweep_INTERFACE_DEFINED__

/* interface IIviRFSigGenSweep */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenSweep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52f1-a398-11d4-ba58-000064657374")
    IIviRFSigGenSweep : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencySweep( 
            /* [retval][out] */ IIviRFSigGenFrequencySweep **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PowerSweep( 
            /* [retval][out] */ IIviRFSigGenPowerSweep **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyStep( 
            /* [retval][out] */ IIviRFSigGenFrequencyStep **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PowerStep( 
            /* [retval][out] */ IIviRFSigGenPowerStep **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_List( 
            /* [retval][out] */ IIviRFSigGenList **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviRFSigGenSweepModeEnum Mode,
            /* [in] */ IviRFSigGenSweepTriggerSourceEnum TriggerSource) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ IviRFSigGenSweepModeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ IviRFSigGenSweepModeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerSource( 
            /* [in] */ IviRFSigGenSweepTriggerSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerSource( 
            /* [retval][out] */ IviRFSigGenSweepTriggerSourceEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenSweepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenSweep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenSweep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenSweep * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencySweep )( 
            IIviRFSigGenSweep * This,
            /* [retval][out] */ IIviRFSigGenFrequencySweep **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PowerSweep )( 
            IIviRFSigGenSweep * This,
            /* [retval][out] */ IIviRFSigGenPowerSweep **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyStep )( 
            IIviRFSigGenSweep * This,
            /* [retval][out] */ IIviRFSigGenFrequencyStep **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PowerStep )( 
            IIviRFSigGenSweep * This,
            /* [retval][out] */ IIviRFSigGenPowerStep **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_List )( 
            IIviRFSigGenSweep * This,
            /* [retval][out] */ IIviRFSigGenList **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenSweep * This,
            /* [in] */ IviRFSigGenSweepModeEnum Mode,
            /* [in] */ IviRFSigGenSweepTriggerSourceEnum TriggerSource);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IIviRFSigGenSweep * This,
            /* [in] */ IviRFSigGenSweepModeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IIviRFSigGenSweep * This,
            /* [retval][out] */ IviRFSigGenSweepModeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerSource )( 
            IIviRFSigGenSweep * This,
            /* [in] */ IviRFSigGenSweepTriggerSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerSource )( 
            IIviRFSigGenSweep * This,
            /* [retval][out] */ IviRFSigGenSweepTriggerSourceEnum *pVal);
        
        END_INTERFACE
    } IIviRFSigGenSweepVtbl;

    interface IIviRFSigGenSweep
    {
        CONST_VTBL struct IIviRFSigGenSweepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenSweep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenSweep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenSweep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenSweep_get_FrequencySweep(This,pVal)	\
    ( (This)->lpVtbl -> get_FrequencySweep(This,pVal) ) 

#define IIviRFSigGenSweep_get_PowerSweep(This,pVal)	\
    ( (This)->lpVtbl -> get_PowerSweep(This,pVal) ) 

#define IIviRFSigGenSweep_get_FrequencyStep(This,pVal)	\
    ( (This)->lpVtbl -> get_FrequencyStep(This,pVal) ) 

#define IIviRFSigGenSweep_get_PowerStep(This,pVal)	\
    ( (This)->lpVtbl -> get_PowerStep(This,pVal) ) 

#define IIviRFSigGenSweep_get_List(This,pVal)	\
    ( (This)->lpVtbl -> get_List(This,pVal) ) 

#define IIviRFSigGenSweep_Configure(This,Mode,TriggerSource)	\
    ( (This)->lpVtbl -> Configure(This,Mode,TriggerSource) ) 

#define IIviRFSigGenSweep_put_Mode(This,newVal)	\
    ( (This)->lpVtbl -> put_Mode(This,newVal) ) 

#define IIviRFSigGenSweep_get_Mode(This,pVal)	\
    ( (This)->lpVtbl -> get_Mode(This,pVal) ) 

#define IIviRFSigGenSweep_put_TriggerSource(This,newVal)	\
    ( (This)->lpVtbl -> put_TriggerSource(This,newVal) ) 

#define IIviRFSigGenSweep_get_TriggerSource(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerSource(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenSweep_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenFrequencySweep_INTERFACE_DEFINED__
#define __IIviRFSigGenFrequencySweep_INTERFACE_DEFINED__

/* interface IIviRFSigGenFrequencySweep */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenFrequencySweep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52f2-a398-11d4-ba58-000064657374")
    IIviRFSigGenFrequencySweep : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureCenterSpan( 
            /* [in] */ DOUBLE Center,
            /* [in] */ DOUBLE Span) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ DOUBLE Start,
            /* [in] */ DOUBLE Stop) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Time( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Time( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenFrequencySweepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenFrequencySweep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenFrequencySweep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenFrequencySweep * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCenterSpan )( 
            IIviRFSigGenFrequencySweep * This,
            /* [in] */ DOUBLE Center,
            /* [in] */ DOUBLE Span);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviRFSigGenFrequencySweep * This,
            /* [in] */ DOUBLE Start,
            /* [in] */ DOUBLE Stop);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviRFSigGenFrequencySweep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviRFSigGenFrequencySweep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviRFSigGenFrequencySweep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviRFSigGenFrequencySweep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            IIviRFSigGenFrequencySweep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            IIviRFSigGenFrequencySweep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviRFSigGenFrequencySweepVtbl;

    interface IIviRFSigGenFrequencySweep
    {
        CONST_VTBL struct IIviRFSigGenFrequencySweepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenFrequencySweep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenFrequencySweep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenFrequencySweep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenFrequencySweep_ConfigureCenterSpan(This,Center,Span)	\
    ( (This)->lpVtbl -> ConfigureCenterSpan(This,Center,Span) ) 

#define IIviRFSigGenFrequencySweep_ConfigureStartStop(This,Start,Stop)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop) ) 

#define IIviRFSigGenFrequencySweep_put_Start(This,newVal)	\
    ( (This)->lpVtbl -> put_Start(This,newVal) ) 

#define IIviRFSigGenFrequencySweep_get_Start(This,pVal)	\
    ( (This)->lpVtbl -> get_Start(This,pVal) ) 

#define IIviRFSigGenFrequencySweep_put_Stop(This,newVal)	\
    ( (This)->lpVtbl -> put_Stop(This,newVal) ) 

#define IIviRFSigGenFrequencySweep_get_Stop(This,pVal)	\
    ( (This)->lpVtbl -> get_Stop(This,pVal) ) 

#define IIviRFSigGenFrequencySweep_put_Time(This,newVal)	\
    ( (This)->lpVtbl -> put_Time(This,newVal) ) 

#define IIviRFSigGenFrequencySweep_get_Time(This,pVal)	\
    ( (This)->lpVtbl -> get_Time(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenFrequencySweep_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenPowerSweep_INTERFACE_DEFINED__
#define __IIviRFSigGenPowerSweep_INTERFACE_DEFINED__

/* interface IIviRFSigGenPowerSweep */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenPowerSweep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52f3-a398-11d4-ba58-000064657374")
    IIviRFSigGenPowerSweep : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ DOUBLE Start,
            /* [in] */ DOUBLE Stop) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Time( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Time( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenPowerSweepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenPowerSweep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenPowerSweep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenPowerSweep * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviRFSigGenPowerSweep * This,
            /* [in] */ DOUBLE Start,
            /* [in] */ DOUBLE Stop);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviRFSigGenPowerSweep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviRFSigGenPowerSweep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviRFSigGenPowerSweep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviRFSigGenPowerSweep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            IIviRFSigGenPowerSweep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            IIviRFSigGenPowerSweep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviRFSigGenPowerSweepVtbl;

    interface IIviRFSigGenPowerSweep
    {
        CONST_VTBL struct IIviRFSigGenPowerSweepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenPowerSweep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenPowerSweep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenPowerSweep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenPowerSweep_ConfigureStartStop(This,Start,Stop)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop) ) 

#define IIviRFSigGenPowerSweep_put_Start(This,newVal)	\
    ( (This)->lpVtbl -> put_Start(This,newVal) ) 

#define IIviRFSigGenPowerSweep_get_Start(This,pVal)	\
    ( (This)->lpVtbl -> get_Start(This,pVal) ) 

#define IIviRFSigGenPowerSweep_put_Stop(This,newVal)	\
    ( (This)->lpVtbl -> put_Stop(This,newVal) ) 

#define IIviRFSigGenPowerSweep_get_Stop(This,pVal)	\
    ( (This)->lpVtbl -> get_Stop(This,pVal) ) 

#define IIviRFSigGenPowerSweep_put_Time(This,newVal)	\
    ( (This)->lpVtbl -> put_Time(This,newVal) ) 

#define IIviRFSigGenPowerSweep_get_Time(This,pVal)	\
    ( (This)->lpVtbl -> get_Time(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenPowerSweep_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenFrequencyStep_INTERFACE_DEFINED__
#define __IIviRFSigGenFrequencyStep_INTERFACE_DEFINED__

/* interface IIviRFSigGenFrequencyStep */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenFrequencyStep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52f4-a398-11d4-ba58-000064657374")
    IIviRFSigGenFrequencyStep : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ DOUBLE Start,
            /* [in] */ DOUBLE Stop,
            /* [in] */ IviRFSigGenFrequencyStepScalingEnum Scaling,
            /* [in] */ DOUBLE StepSize) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Scaling( 
            /* [in] */ IviRFSigGenFrequencyStepScalingEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Scaling( 
            /* [retval][out] */ IviRFSigGenFrequencyStepScalingEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureDwell( 
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ DOUBLE Dwell) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepEnabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Dwell( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Dwell( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenFrequencyStepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenFrequencyStep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenFrequencyStep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenFrequencyStep * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviRFSigGenFrequencyStep * This,
            /* [in] */ DOUBLE Start,
            /* [in] */ DOUBLE Stop,
            /* [in] */ IviRFSigGenFrequencyStepScalingEnum Scaling,
            /* [in] */ DOUBLE StepSize);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviRFSigGenFrequencyStep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviRFSigGenFrequencyStep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviRFSigGenFrequencyStep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviRFSigGenFrequencyStep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scaling )( 
            IIviRFSigGenFrequencyStep * This,
            /* [in] */ IviRFSigGenFrequencyStepScalingEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scaling )( 
            IIviRFSigGenFrequencyStep * This,
            /* [retval][out] */ IviRFSigGenFrequencyStepScalingEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IIviRFSigGenFrequencyStep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IIviRFSigGenFrequencyStep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDwell )( 
            IIviRFSigGenFrequencyStep * This,
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ DOUBLE Dwell);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepEnabled )( 
            IIviRFSigGenFrequencyStep * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepEnabled )( 
            IIviRFSigGenFrequencyStep * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dwell )( 
            IIviRFSigGenFrequencyStep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dwell )( 
            IIviRFSigGenFrequencyStep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviRFSigGenFrequencyStep * This);
        
        END_INTERFACE
    } IIviRFSigGenFrequencyStepVtbl;

    interface IIviRFSigGenFrequencyStep
    {
        CONST_VTBL struct IIviRFSigGenFrequencyStepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenFrequencyStep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenFrequencyStep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenFrequencyStep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenFrequencyStep_ConfigureStartStop(This,Start,Stop,Scaling,StepSize)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop,Scaling,StepSize) ) 

#define IIviRFSigGenFrequencyStep_put_Start(This,newVal)	\
    ( (This)->lpVtbl -> put_Start(This,newVal) ) 

#define IIviRFSigGenFrequencyStep_get_Start(This,pVal)	\
    ( (This)->lpVtbl -> get_Start(This,pVal) ) 

#define IIviRFSigGenFrequencyStep_put_Stop(This,newVal)	\
    ( (This)->lpVtbl -> put_Stop(This,newVal) ) 

#define IIviRFSigGenFrequencyStep_get_Stop(This,pVal)	\
    ( (This)->lpVtbl -> get_Stop(This,pVal) ) 

#define IIviRFSigGenFrequencyStep_put_Scaling(This,newVal)	\
    ( (This)->lpVtbl -> put_Scaling(This,newVal) ) 

#define IIviRFSigGenFrequencyStep_get_Scaling(This,pVal)	\
    ( (This)->lpVtbl -> get_Scaling(This,pVal) ) 

#define IIviRFSigGenFrequencyStep_put_Size(This,newVal)	\
    ( (This)->lpVtbl -> put_Size(This,newVal) ) 

#define IIviRFSigGenFrequencyStep_get_Size(This,pVal)	\
    ( (This)->lpVtbl -> get_Size(This,pVal) ) 

#define IIviRFSigGenFrequencyStep_ConfigureDwell(This,SingleStepEnabled,Dwell)	\
    ( (This)->lpVtbl -> ConfigureDwell(This,SingleStepEnabled,Dwell) ) 

#define IIviRFSigGenFrequencyStep_put_SingleStepEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_SingleStepEnabled(This,newVal) ) 

#define IIviRFSigGenFrequencyStep_get_SingleStepEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_SingleStepEnabled(This,pVal) ) 

#define IIviRFSigGenFrequencyStep_put_Dwell(This,newVal)	\
    ( (This)->lpVtbl -> put_Dwell(This,newVal) ) 

#define IIviRFSigGenFrequencyStep_get_Dwell(This,pVal)	\
    ( (This)->lpVtbl -> get_Dwell(This,pVal) ) 

#define IIviRFSigGenFrequencyStep_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenFrequencyStep_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenPowerStep_INTERFACE_DEFINED__
#define __IIviRFSigGenPowerStep_INTERFACE_DEFINED__

/* interface IIviRFSigGenPowerStep */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenPowerStep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52f5-a398-11d4-ba58-000064657374")
    IIviRFSigGenPowerStep : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ DOUBLE Start,
            /* [in] */ DOUBLE Stop,
            /* [in] */ DOUBLE StepSize) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureDwell( 
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ DOUBLE Dwell) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepEnabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Dwell( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Dwell( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenPowerStepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenPowerStep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenPowerStep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenPowerStep * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviRFSigGenPowerStep * This,
            /* [in] */ DOUBLE Start,
            /* [in] */ DOUBLE Stop,
            /* [in] */ DOUBLE StepSize);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviRFSigGenPowerStep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviRFSigGenPowerStep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviRFSigGenPowerStep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviRFSigGenPowerStep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IIviRFSigGenPowerStep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IIviRFSigGenPowerStep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDwell )( 
            IIviRFSigGenPowerStep * This,
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ DOUBLE Dwell);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepEnabled )( 
            IIviRFSigGenPowerStep * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepEnabled )( 
            IIviRFSigGenPowerStep * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dwell )( 
            IIviRFSigGenPowerStep * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dwell )( 
            IIviRFSigGenPowerStep * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviRFSigGenPowerStep * This);
        
        END_INTERFACE
    } IIviRFSigGenPowerStepVtbl;

    interface IIviRFSigGenPowerStep
    {
        CONST_VTBL struct IIviRFSigGenPowerStepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenPowerStep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenPowerStep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenPowerStep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenPowerStep_ConfigureStartStop(This,Start,Stop,StepSize)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop,StepSize) ) 

#define IIviRFSigGenPowerStep_put_Start(This,newVal)	\
    ( (This)->lpVtbl -> put_Start(This,newVal) ) 

#define IIviRFSigGenPowerStep_get_Start(This,pVal)	\
    ( (This)->lpVtbl -> get_Start(This,pVal) ) 

#define IIviRFSigGenPowerStep_put_Stop(This,newVal)	\
    ( (This)->lpVtbl -> put_Stop(This,newVal) ) 

#define IIviRFSigGenPowerStep_get_Stop(This,pVal)	\
    ( (This)->lpVtbl -> get_Stop(This,pVal) ) 

#define IIviRFSigGenPowerStep_put_Size(This,newVal)	\
    ( (This)->lpVtbl -> put_Size(This,newVal) ) 

#define IIviRFSigGenPowerStep_get_Size(This,pVal)	\
    ( (This)->lpVtbl -> get_Size(This,pVal) ) 

#define IIviRFSigGenPowerStep_ConfigureDwell(This,SingleStepEnabled,Dwell)	\
    ( (This)->lpVtbl -> ConfigureDwell(This,SingleStepEnabled,Dwell) ) 

#define IIviRFSigGenPowerStep_put_SingleStepEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_SingleStepEnabled(This,newVal) ) 

#define IIviRFSigGenPowerStep_get_SingleStepEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_SingleStepEnabled(This,pVal) ) 

#define IIviRFSigGenPowerStep_put_Dwell(This,newVal)	\
    ( (This)->lpVtbl -> put_Dwell(This,newVal) ) 

#define IIviRFSigGenPowerStep_get_Dwell(This,pVal)	\
    ( (This)->lpVtbl -> get_Dwell(This,pVal) ) 

#define IIviRFSigGenPowerStep_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenPowerStep_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenList_INTERFACE_DEFINED__
#define __IIviRFSigGenList_INTERFACE_DEFINED__

/* interface IIviRFSigGenList */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52f6-a398-11d4-ba58-000064657374")
    IIviRFSigGenList : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureDwell( 
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ DOUBLE Dwell) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepEnabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Dwell( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Dwell( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ClearAll( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateFrequency( 
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Frequency) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreatePower( 
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Power) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateFrequencyPower( 
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Frequency,
            /* [in] */ SAFEARRAY * *Power) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenList * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDwell )( 
            IIviRFSigGenList * This,
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ DOUBLE Dwell);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepEnabled )( 
            IIviRFSigGenList * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepEnabled )( 
            IIviRFSigGenList * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dwell )( 
            IIviRFSigGenList * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dwell )( 
            IIviRFSigGenList * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedName )( 
            IIviRFSigGenList * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedName )( 
            IIviRFSigGenList * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearAll )( 
            IIviRFSigGenList * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateFrequency )( 
            IIviRFSigGenList * This,
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Frequency);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreatePower )( 
            IIviRFSigGenList * This,
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Power);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateFrequencyPower )( 
            IIviRFSigGenList * This,
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Frequency,
            /* [in] */ SAFEARRAY * *Power);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviRFSigGenList * This);
        
        END_INTERFACE
    } IIviRFSigGenListVtbl;

    interface IIviRFSigGenList
    {
        CONST_VTBL struct IIviRFSigGenListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenList_ConfigureDwell(This,SingleStepEnabled,Dwell)	\
    ( (This)->lpVtbl -> ConfigureDwell(This,SingleStepEnabled,Dwell) ) 

#define IIviRFSigGenList_put_SingleStepEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_SingleStepEnabled(This,newVal) ) 

#define IIviRFSigGenList_get_SingleStepEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_SingleStepEnabled(This,pVal) ) 

#define IIviRFSigGenList_put_Dwell(This,newVal)	\
    ( (This)->lpVtbl -> put_Dwell(This,newVal) ) 

#define IIviRFSigGenList_get_Dwell(This,pVal)	\
    ( (This)->lpVtbl -> get_Dwell(This,pVal) ) 

#define IIviRFSigGenList_get_SelectedName(This,pVal)	\
    ( (This)->lpVtbl -> get_SelectedName(This,pVal) ) 

#define IIviRFSigGenList_put_SelectedName(This,newVal)	\
    ( (This)->lpVtbl -> put_SelectedName(This,newVal) ) 

#define IIviRFSigGenList_ClearAll(This)	\
    ( (This)->lpVtbl -> ClearAll(This) ) 

#define IIviRFSigGenList_CreateFrequency(This,Name,Frequency)	\
    ( (This)->lpVtbl -> CreateFrequency(This,Name,Frequency) ) 

#define IIviRFSigGenList_CreatePower(This,Name,Power)	\
    ( (This)->lpVtbl -> CreatePower(This,Name,Power) ) 

#define IIviRFSigGenList_CreateFrequencyPower(This,Name,Frequency,Power)	\
    ( (This)->lpVtbl -> CreateFrequencyPower(This,Name,Frequency,Power) ) 

#define IIviRFSigGenList_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenList_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenDigitalModulation_INTERFACE_DEFINED__
#define __IIviRFSigGenDigitalModulation_INTERFACE_DEFINED__

/* interface IIviRFSigGenDigitalModulation */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenDigitalModulation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52f7-a398-11d4-ba58-000064657374")
    IIviRFSigGenDigitalModulation : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Arb( 
            /* [retval][out] */ IIviRFSigGenArb **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Base( 
            /* [retval][out] */ IIviRFSigGenDigitalModulationBase **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TDMA( 
            /* [retval][out] */ IIviRFSigGenTDMA **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CDMA( 
            /* [retval][out] */ IIviRFSigGenCDMA **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenDigitalModulationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenDigitalModulation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenDigitalModulation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenDigitalModulation * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arb )( 
            IIviRFSigGenDigitalModulation * This,
            /* [retval][out] */ IIviRFSigGenArb **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Base )( 
            IIviRFSigGenDigitalModulation * This,
            /* [retval][out] */ IIviRFSigGenDigitalModulationBase **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TDMA )( 
            IIviRFSigGenDigitalModulation * This,
            /* [retval][out] */ IIviRFSigGenTDMA **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CDMA )( 
            IIviRFSigGenDigitalModulation * This,
            /* [retval][out] */ IIviRFSigGenCDMA **pVal);
        
        END_INTERFACE
    } IIviRFSigGenDigitalModulationVtbl;

    interface IIviRFSigGenDigitalModulation
    {
        CONST_VTBL struct IIviRFSigGenDigitalModulationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenDigitalModulation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenDigitalModulation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenDigitalModulation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenDigitalModulation_get_Arb(This,pVal)	\
    ( (This)->lpVtbl -> get_Arb(This,pVal) ) 

#define IIviRFSigGenDigitalModulation_get_Base(This,pVal)	\
    ( (This)->lpVtbl -> get_Base(This,pVal) ) 

#define IIviRFSigGenDigitalModulation_get_TDMA(This,pVal)	\
    ( (This)->lpVtbl -> get_TDMA(This,pVal) ) 

#define IIviRFSigGenDigitalModulation_get_CDMA(This,pVal)	\
    ( (This)->lpVtbl -> get_CDMA(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenDigitalModulation_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenIQ_INTERFACE_DEFINED__
#define __IIviRFSigGenIQ_INTERFACE_DEFINED__

/* interface IIviRFSigGenIQ */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenIQ;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52f8-a398-11d4-ba58-000064657374")
    IIviRFSigGenIQ : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Impairment( 
            /* [retval][out] */ IIviRFSigGenIQImpairment **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviRFSigGenIQSourceEnum Source,
            /* [in] */ VARIANT_BOOL SwapEnabled) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ IviRFSigGenIQSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ IviRFSigGenIQSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SwapEnabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SwapEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NominalVoltage( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Calibrate( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenIQVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenIQ * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenIQ * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenIQ * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Impairment )( 
            IIviRFSigGenIQ * This,
            /* [retval][out] */ IIviRFSigGenIQImpairment **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenIQ * This,
            /* [in] */ IviRFSigGenIQSourceEnum Source,
            /* [in] */ VARIANT_BOOL SwapEnabled);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviRFSigGenIQ * This,
            /* [in] */ IviRFSigGenIQSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviRFSigGenIQ * This,
            /* [retval][out] */ IviRFSigGenIQSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SwapEnabled )( 
            IIviRFSigGenIQ * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SwapEnabled )( 
            IIviRFSigGenIQ * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NominalVoltage )( 
            IIviRFSigGenIQ * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviRFSigGenIQ * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviRFSigGenIQ * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Calibrate )( 
            IIviRFSigGenIQ * This);
        
        END_INTERFACE
    } IIviRFSigGenIQVtbl;

    interface IIviRFSigGenIQ
    {
        CONST_VTBL struct IIviRFSigGenIQVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenIQ_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenIQ_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenIQ_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenIQ_get_Impairment(This,pVal)	\
    ( (This)->lpVtbl -> get_Impairment(This,pVal) ) 

#define IIviRFSigGenIQ_Configure(This,Source,SwapEnabled)	\
    ( (This)->lpVtbl -> Configure(This,Source,SwapEnabled) ) 

#define IIviRFSigGenIQ_put_Source(This,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,newVal) ) 

#define IIviRFSigGenIQ_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#define IIviRFSigGenIQ_put_SwapEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_SwapEnabled(This,newVal) ) 

#define IIviRFSigGenIQ_get_SwapEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_SwapEnabled(This,pVal) ) 

#define IIviRFSigGenIQ_get_NominalVoltage(This,pVal)	\
    ( (This)->lpVtbl -> get_NominalVoltage(This,pVal) ) 

#define IIviRFSigGenIQ_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviRFSigGenIQ_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviRFSigGenIQ_Calibrate(This)	\
    ( (This)->lpVtbl -> Calibrate(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenIQ_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenIQImpairment_INTERFACE_DEFINED__
#define __IIviRFSigGenIQImpairment_INTERFACE_DEFINED__

/* interface IIviRFSigGenIQImpairment */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenIQImpairment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52f9-a398-11d4-ba58-000064657374")
    IIviRFSigGenIQImpairment : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE IOffset,
            /* [in] */ DOUBLE QOffset,
            /* [in] */ DOUBLE Ratio,
            /* [in] */ DOUBLE Skew) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IOffset( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IOffset( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_QOffset( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_QOffset( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Ratio( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Ratio( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Skew( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Skew( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenIQImpairmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenIQImpairment * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenIQImpairment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenIQImpairment * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenIQImpairment * This,
            /* [in] */ DOUBLE IOffset,
            /* [in] */ DOUBLE QOffset,
            /* [in] */ DOUBLE Ratio,
            /* [in] */ DOUBLE Skew);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviRFSigGenIQImpairment * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviRFSigGenIQImpairment * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IOffset )( 
            IIviRFSigGenIQImpairment * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IOffset )( 
            IIviRFSigGenIQImpairment * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_QOffset )( 
            IIviRFSigGenIQImpairment * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_QOffset )( 
            IIviRFSigGenIQImpairment * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Ratio )( 
            IIviRFSigGenIQImpairment * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ratio )( 
            IIviRFSigGenIQImpairment * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Skew )( 
            IIviRFSigGenIQImpairment * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Skew )( 
            IIviRFSigGenIQImpairment * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviRFSigGenIQImpairmentVtbl;

    interface IIviRFSigGenIQImpairment
    {
        CONST_VTBL struct IIviRFSigGenIQImpairmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenIQImpairment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenIQImpairment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenIQImpairment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenIQImpairment_Configure(This,IOffset,QOffset,Ratio,Skew)	\
    ( (This)->lpVtbl -> Configure(This,IOffset,QOffset,Ratio,Skew) ) 

#define IIviRFSigGenIQImpairment_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviRFSigGenIQImpairment_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviRFSigGenIQImpairment_put_IOffset(This,newVal)	\
    ( (This)->lpVtbl -> put_IOffset(This,newVal) ) 

#define IIviRFSigGenIQImpairment_get_IOffset(This,pVal)	\
    ( (This)->lpVtbl -> get_IOffset(This,pVal) ) 

#define IIviRFSigGenIQImpairment_put_QOffset(This,newVal)	\
    ( (This)->lpVtbl -> put_QOffset(This,newVal) ) 

#define IIviRFSigGenIQImpairment_get_QOffset(This,pVal)	\
    ( (This)->lpVtbl -> get_QOffset(This,pVal) ) 

#define IIviRFSigGenIQImpairment_put_Ratio(This,newVal)	\
    ( (This)->lpVtbl -> put_Ratio(This,newVal) ) 

#define IIviRFSigGenIQImpairment_get_Ratio(This,pVal)	\
    ( (This)->lpVtbl -> get_Ratio(This,pVal) ) 

#define IIviRFSigGenIQImpairment_put_Skew(This,newVal)	\
    ( (This)->lpVtbl -> put_Skew(This,newVal) ) 

#define IIviRFSigGenIQImpairment_get_Skew(This,pVal)	\
    ( (This)->lpVtbl -> get_Skew(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenIQImpairment_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenArb_INTERFACE_DEFINED__
#define __IIviRFSigGenArb_INTERFACE_DEFINED__

/* interface IIviRFSigGenArb */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenArb;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52fa-a398-11d4-ba58-000064657374")
    IIviRFSigGenArb : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE ClockFrequency,
            /* [in] */ DOUBLE FilterFrequency) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE WriteWaveform( 
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *IData,
            /* [in] */ SAFEARRAY * *QData,
            /* [in] */ VARIANT_BOOL MoreDataPending) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ClearAllWaveforms( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE QueryWaveformCapabilities( 
            /* [out][in] */ LONG *MaxNumberWaveforms,
            /* [out][in] */ LONG *WaveformQuantum,
            /* [out][in] */ LONG *MinWaveformSize,
            /* [out][in] */ LONG *MaxWaveformSize) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedWaveform( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedWaveform( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ClockFrequency( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ClockFrequency( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FilterFrequency( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FilterFrequency( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MaxNumberWaveforms( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_WaveformQuantum( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_WaveformSizeMin( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_WaveformSizeMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerSource( 
            /* [in] */ IviRFSigGenArbTriggerSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerSource( 
            /* [retval][out] */ IviRFSigGenArbTriggerSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalTriggerSlope( 
            /* [in] */ IviRFSigGenArbExternalTriggerSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalTriggerSlope( 
            /* [retval][out] */ IviRFSigGenArbExternalTriggerSlopeEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenArbVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenArb * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenArb * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenArb * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviRFSigGenArb * This,
            /* [in] */ DOUBLE ClockFrequency,
            /* [in] */ DOUBLE FilterFrequency);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteWaveform )( 
            IIviRFSigGenArb * This,
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *IData,
            /* [in] */ SAFEARRAY * *QData,
            /* [in] */ VARIANT_BOOL MoreDataPending);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearAllWaveforms )( 
            IIviRFSigGenArb * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryWaveformCapabilities )( 
            IIviRFSigGenArb * This,
            /* [out][in] */ LONG *MaxNumberWaveforms,
            /* [out][in] */ LONG *WaveformQuantum,
            /* [out][in] */ LONG *MinWaveformSize,
            /* [out][in] */ LONG *MaxWaveformSize);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedWaveform )( 
            IIviRFSigGenArb * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedWaveform )( 
            IIviRFSigGenArb * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClockFrequency )( 
            IIviRFSigGenArb * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClockFrequency )( 
            IIviRFSigGenArb * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FilterFrequency )( 
            IIviRFSigGenArb * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilterFrequency )( 
            IIviRFSigGenArb * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxNumberWaveforms )( 
            IIviRFSigGenArb * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WaveformQuantum )( 
            IIviRFSigGenArb * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WaveformSizeMin )( 
            IIviRFSigGenArb * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WaveformSizeMax )( 
            IIviRFSigGenArb * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerSource )( 
            IIviRFSigGenArb * This,
            /* [in] */ IviRFSigGenArbTriggerSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerSource )( 
            IIviRFSigGenArb * This,
            /* [retval][out] */ IviRFSigGenArbTriggerSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalTriggerSlope )( 
            IIviRFSigGenArb * This,
            /* [in] */ IviRFSigGenArbExternalTriggerSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalTriggerSlope )( 
            IIviRFSigGenArb * This,
            /* [retval][out] */ IviRFSigGenArbExternalTriggerSlopeEnum *pVal);
        
        END_INTERFACE
    } IIviRFSigGenArbVtbl;

    interface IIviRFSigGenArb
    {
        CONST_VTBL struct IIviRFSigGenArbVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenArb_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenArb_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenArb_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenArb_Configure(This,ClockFrequency,FilterFrequency)	\
    ( (This)->lpVtbl -> Configure(This,ClockFrequency,FilterFrequency) ) 

#define IIviRFSigGenArb_WriteWaveform(This,Name,IData,QData,MoreDataPending)	\
    ( (This)->lpVtbl -> WriteWaveform(This,Name,IData,QData,MoreDataPending) ) 

#define IIviRFSigGenArb_ClearAllWaveforms(This)	\
    ( (This)->lpVtbl -> ClearAllWaveforms(This) ) 

#define IIviRFSigGenArb_QueryWaveformCapabilities(This,MaxNumberWaveforms,WaveformQuantum,MinWaveformSize,MaxWaveformSize)	\
    ( (This)->lpVtbl -> QueryWaveformCapabilities(This,MaxNumberWaveforms,WaveformQuantum,MinWaveformSize,MaxWaveformSize) ) 

#define IIviRFSigGenArb_put_SelectedWaveform(This,newVal)	\
    ( (This)->lpVtbl -> put_SelectedWaveform(This,newVal) ) 

#define IIviRFSigGenArb_get_SelectedWaveform(This,pVal)	\
    ( (This)->lpVtbl -> get_SelectedWaveform(This,pVal) ) 

#define IIviRFSigGenArb_put_ClockFrequency(This,newVal)	\
    ( (This)->lpVtbl -> put_ClockFrequency(This,newVal) ) 

#define IIviRFSigGenArb_get_ClockFrequency(This,pVal)	\
    ( (This)->lpVtbl -> get_ClockFrequency(This,pVal) ) 

#define IIviRFSigGenArb_put_FilterFrequency(This,newVal)	\
    ( (This)->lpVtbl -> put_FilterFrequency(This,newVal) ) 

#define IIviRFSigGenArb_get_FilterFrequency(This,pVal)	\
    ( (This)->lpVtbl -> get_FilterFrequency(This,pVal) ) 

#define IIviRFSigGenArb_get_MaxNumberWaveforms(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxNumberWaveforms(This,pVal) ) 

#define IIviRFSigGenArb_get_WaveformQuantum(This,pVal)	\
    ( (This)->lpVtbl -> get_WaveformQuantum(This,pVal) ) 

#define IIviRFSigGenArb_get_WaveformSizeMin(This,pVal)	\
    ( (This)->lpVtbl -> get_WaveformSizeMin(This,pVal) ) 

#define IIviRFSigGenArb_get_WaveformSizeMax(This,pVal)	\
    ( (This)->lpVtbl -> get_WaveformSizeMax(This,pVal) ) 

#define IIviRFSigGenArb_put_TriggerSource(This,newVal)	\
    ( (This)->lpVtbl -> put_TriggerSource(This,newVal) ) 

#define IIviRFSigGenArb_get_TriggerSource(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerSource(This,pVal) ) 

#define IIviRFSigGenArb_put_ExternalTriggerSlope(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalTriggerSlope(This,newVal) ) 

#define IIviRFSigGenArb_get_ExternalTriggerSlope(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalTriggerSlope(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenArb_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenDigitalModulationBase_INTERFACE_DEFINED__
#define __IIviRFSigGenDigitalModulationBase_INTERFACE_DEFINED__

/* interface IIviRFSigGenDigitalModulationBase */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenDigitalModulationBase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52fb-a398-11d4-ba58-000064657374")
    IIviRFSigGenDigitalModulationBase : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureClockSource( 
            /* [in] */ IviRFSigGenDigitalModulationBaseClockSourceEnum Source,
            /* [in] */ IviRFSigGenDigitalModulationBaseExternalClockTypeEnum Type) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE WriteBitSequence( 
            /* [in] */ BSTR Name,
            /* [in] */ LONG BitCount,
            /* [in] */ SAFEARRAY * *Sequence,
            /* [in] */ VARIANT_BOOL MoreDataPending) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ClearAllBitSequences( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StandardName( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StandardCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedStandard( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedStandard( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DataSource( 
            /* [in] */ IviRFSigGenDigitalModulationBaseDataSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DataSource( 
            /* [retval][out] */ IviRFSigGenDigitalModulationBaseDataSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PRBSType( 
            /* [in] */ IviRFSigGenDigitalModulationBasePRBSTypeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PRBSType( 
            /* [retval][out] */ IviRFSigGenDigitalModulationBasePRBSTypeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedBitSequence( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedBitSequence( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ClockSource( 
            /* [in] */ IviRFSigGenDigitalModulationBaseClockSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ClockSource( 
            /* [retval][out] */ IviRFSigGenDigitalModulationBaseClockSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalClockType( 
            /* [in] */ IviRFSigGenDigitalModulationBaseExternalClockTypeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalClockType( 
            /* [retval][out] */ IviRFSigGenDigitalModulationBaseExternalClockTypeEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenDigitalModulationBaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenDigitalModulationBase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenDigitalModulationBase * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureClockSource )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [in] */ IviRFSigGenDigitalModulationBaseClockSourceEnum Source,
            /* [in] */ IviRFSigGenDigitalModulationBaseExternalClockTypeEnum Type);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteBitSequence )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [in] */ BSTR Name,
            /* [in] */ LONG BitCount,
            /* [in] */ SAFEARRAY * *Sequence,
            /* [in] */ VARIANT_BOOL MoreDataPending);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearAllBitSequences )( 
            IIviRFSigGenDigitalModulationBase * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardName )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardCount )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedStandard )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedStandard )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSource )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [in] */ IviRFSigGenDigitalModulationBaseDataSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSource )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [retval][out] */ IviRFSigGenDigitalModulationBaseDataSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PRBSType )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [in] */ IviRFSigGenDigitalModulationBasePRBSTypeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PRBSType )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [retval][out] */ IviRFSigGenDigitalModulationBasePRBSTypeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedBitSequence )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedBitSequence )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClockSource )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [in] */ IviRFSigGenDigitalModulationBaseClockSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClockSource )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [retval][out] */ IviRFSigGenDigitalModulationBaseClockSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalClockType )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [in] */ IviRFSigGenDigitalModulationBaseExternalClockTypeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalClockType )( 
            IIviRFSigGenDigitalModulationBase * This,
            /* [retval][out] */ IviRFSigGenDigitalModulationBaseExternalClockTypeEnum *pVal);
        
        END_INTERFACE
    } IIviRFSigGenDigitalModulationBaseVtbl;

    interface IIviRFSigGenDigitalModulationBase
    {
        CONST_VTBL struct IIviRFSigGenDigitalModulationBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenDigitalModulationBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenDigitalModulationBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenDigitalModulationBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenDigitalModulationBase_ConfigureClockSource(This,Source,Type)	\
    ( (This)->lpVtbl -> ConfigureClockSource(This,Source,Type) ) 

#define IIviRFSigGenDigitalModulationBase_WriteBitSequence(This,Name,BitCount,Sequence,MoreDataPending)	\
    ( (This)->lpVtbl -> WriteBitSequence(This,Name,BitCount,Sequence,MoreDataPending) ) 

#define IIviRFSigGenDigitalModulationBase_ClearAllBitSequences(This)	\
    ( (This)->lpVtbl -> ClearAllBitSequences(This) ) 

#define IIviRFSigGenDigitalModulationBase_get_StandardName(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_StandardName(This,Index,pVal) ) 

#define IIviRFSigGenDigitalModulationBase_get_StandardCount(This,pVal)	\
    ( (This)->lpVtbl -> get_StandardCount(This,pVal) ) 

#define IIviRFSigGenDigitalModulationBase_put_SelectedStandard(This,newVal)	\
    ( (This)->lpVtbl -> put_SelectedStandard(This,newVal) ) 

#define IIviRFSigGenDigitalModulationBase_get_SelectedStandard(This,pVal)	\
    ( (This)->lpVtbl -> get_SelectedStandard(This,pVal) ) 

#define IIviRFSigGenDigitalModulationBase_put_DataSource(This,newVal)	\
    ( (This)->lpVtbl -> put_DataSource(This,newVal) ) 

#define IIviRFSigGenDigitalModulationBase_get_DataSource(This,pVal)	\
    ( (This)->lpVtbl -> get_DataSource(This,pVal) ) 

#define IIviRFSigGenDigitalModulationBase_put_PRBSType(This,newVal)	\
    ( (This)->lpVtbl -> put_PRBSType(This,newVal) ) 

#define IIviRFSigGenDigitalModulationBase_get_PRBSType(This,pVal)	\
    ( (This)->lpVtbl -> get_PRBSType(This,pVal) ) 

#define IIviRFSigGenDigitalModulationBase_put_SelectedBitSequence(This,newVal)	\
    ( (This)->lpVtbl -> put_SelectedBitSequence(This,newVal) ) 

#define IIviRFSigGenDigitalModulationBase_get_SelectedBitSequence(This,pVal)	\
    ( (This)->lpVtbl -> get_SelectedBitSequence(This,pVal) ) 

#define IIviRFSigGenDigitalModulationBase_put_ClockSource(This,newVal)	\
    ( (This)->lpVtbl -> put_ClockSource(This,newVal) ) 

#define IIviRFSigGenDigitalModulationBase_get_ClockSource(This,pVal)	\
    ( (This)->lpVtbl -> get_ClockSource(This,pVal) ) 

#define IIviRFSigGenDigitalModulationBase_put_ExternalClockType(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalClockType(This,newVal) ) 

#define IIviRFSigGenDigitalModulationBase_get_ExternalClockType(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalClockType(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenDigitalModulationBase_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenTDMA_INTERFACE_DEFINED__
#define __IIviRFSigGenTDMA_INTERFACE_DEFINED__

/* interface IIviRFSigGenTDMA */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenTDMA;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52fd-a398-11d4-ba58-000064657374")
    IIviRFSigGenTDMA : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureClockSource( 
            /* [in] */ IviRFSigGenTDMAClockSourceEnum Source,
            /* [in] */ IviRFSigGenTDMAExternalClockTypeEnum Type) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StandardName( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StandardCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedStandard( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedStandard( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FrameName( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FrameCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedFrame( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedFrame( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerSource( 
            /* [in] */ IviRFSigGenTDMATriggerSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerSource( 
            /* [retval][out] */ IviRFSigGenTDMATriggerSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalTriggerSlope( 
            /* [in] */ IviRFSigGenTDMAExternalTriggerSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalTriggerSlope( 
            /* [retval][out] */ IviRFSigGenTDMAExternalTriggerSlopeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ClockSource( 
            /* [in] */ IviRFSigGenTDMAClockSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ClockSource( 
            /* [retval][out] */ IviRFSigGenTDMAClockSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalClockType( 
            /* [in] */ IviRFSigGenTDMAExternalClockTypeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalClockType( 
            /* [retval][out] */ IviRFSigGenTDMAExternalClockTypeEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenTDMAVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenTDMA * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenTDMA * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenTDMA * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureClockSource )( 
            IIviRFSigGenTDMA * This,
            /* [in] */ IviRFSigGenTDMAClockSourceEnum Source,
            /* [in] */ IviRFSigGenTDMAExternalClockTypeEnum Type);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardName )( 
            IIviRFSigGenTDMA * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardCount )( 
            IIviRFSigGenTDMA * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedStandard )( 
            IIviRFSigGenTDMA * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedStandard )( 
            IIviRFSigGenTDMA * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrameName )( 
            IIviRFSigGenTDMA * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrameCount )( 
            IIviRFSigGenTDMA * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedFrame )( 
            IIviRFSigGenTDMA * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedFrame )( 
            IIviRFSigGenTDMA * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerSource )( 
            IIviRFSigGenTDMA * This,
            /* [in] */ IviRFSigGenTDMATriggerSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerSource )( 
            IIviRFSigGenTDMA * This,
            /* [retval][out] */ IviRFSigGenTDMATriggerSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalTriggerSlope )( 
            IIviRFSigGenTDMA * This,
            /* [in] */ IviRFSigGenTDMAExternalTriggerSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalTriggerSlope )( 
            IIviRFSigGenTDMA * This,
            /* [retval][out] */ IviRFSigGenTDMAExternalTriggerSlopeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClockSource )( 
            IIviRFSigGenTDMA * This,
            /* [in] */ IviRFSigGenTDMAClockSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClockSource )( 
            IIviRFSigGenTDMA * This,
            /* [retval][out] */ IviRFSigGenTDMAClockSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalClockType )( 
            IIviRFSigGenTDMA * This,
            /* [in] */ IviRFSigGenTDMAExternalClockTypeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalClockType )( 
            IIviRFSigGenTDMA * This,
            /* [retval][out] */ IviRFSigGenTDMAExternalClockTypeEnum *pVal);
        
        END_INTERFACE
    } IIviRFSigGenTDMAVtbl;

    interface IIviRFSigGenTDMA
    {
        CONST_VTBL struct IIviRFSigGenTDMAVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenTDMA_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenTDMA_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenTDMA_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenTDMA_ConfigureClockSource(This,Source,Type)	\
    ( (This)->lpVtbl -> ConfigureClockSource(This,Source,Type) ) 

#define IIviRFSigGenTDMA_get_StandardName(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_StandardName(This,Index,pVal) ) 

#define IIviRFSigGenTDMA_get_StandardCount(This,pVal)	\
    ( (This)->lpVtbl -> get_StandardCount(This,pVal) ) 

#define IIviRFSigGenTDMA_put_SelectedStandard(This,newVal)	\
    ( (This)->lpVtbl -> put_SelectedStandard(This,newVal) ) 

#define IIviRFSigGenTDMA_get_SelectedStandard(This,pVal)	\
    ( (This)->lpVtbl -> get_SelectedStandard(This,pVal) ) 

#define IIviRFSigGenTDMA_get_FrameName(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_FrameName(This,Index,pVal) ) 

#define IIviRFSigGenTDMA_get_FrameCount(This,pVal)	\
    ( (This)->lpVtbl -> get_FrameCount(This,pVal) ) 

#define IIviRFSigGenTDMA_put_SelectedFrame(This,newVal)	\
    ( (This)->lpVtbl -> put_SelectedFrame(This,newVal) ) 

#define IIviRFSigGenTDMA_get_SelectedFrame(This,pVal)	\
    ( (This)->lpVtbl -> get_SelectedFrame(This,pVal) ) 

#define IIviRFSigGenTDMA_put_TriggerSource(This,newVal)	\
    ( (This)->lpVtbl -> put_TriggerSource(This,newVal) ) 

#define IIviRFSigGenTDMA_get_TriggerSource(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerSource(This,pVal) ) 

#define IIviRFSigGenTDMA_put_ExternalTriggerSlope(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalTriggerSlope(This,newVal) ) 

#define IIviRFSigGenTDMA_get_ExternalTriggerSlope(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalTriggerSlope(This,pVal) ) 

#define IIviRFSigGenTDMA_put_ClockSource(This,newVal)	\
    ( (This)->lpVtbl -> put_ClockSource(This,newVal) ) 

#define IIviRFSigGenTDMA_get_ClockSource(This,pVal)	\
    ( (This)->lpVtbl -> get_ClockSource(This,pVal) ) 

#define IIviRFSigGenTDMA_put_ExternalClockType(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalClockType(This,newVal) ) 

#define IIviRFSigGenTDMA_get_ExternalClockType(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalClockType(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenTDMA_INTERFACE_DEFINED__ */


#ifndef __IIviRFSigGenCDMA_INTERFACE_DEFINED__
#define __IIviRFSigGenCDMA_INTERFACE_DEFINED__

/* interface IIviRFSigGenCDMA */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviRFSigGenCDMA;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52fc-a398-11d4-ba58-000064657374")
    IIviRFSigGenCDMA : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StandardName( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StandardCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedStandard( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedStandard( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TestModelName( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TestModelCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedTestModel( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedTestModel( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerSource( 
            /* [in] */ IviRFSigGenCDMATriggerSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerSource( 
            /* [retval][out] */ IviRFSigGenCDMATriggerSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalTriggerSlope( 
            /* [in] */ IviRFSigGenCDMAExternalTriggerSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalTriggerSlope( 
            /* [retval][out] */ IviRFSigGenCDMAExternalTriggerSlopeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ClockSource( 
            /* [in] */ IviRFSigGenCDMAClockSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ClockSource( 
            /* [retval][out] */ IviRFSigGenCDMAClockSourceEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviRFSigGenCDMAVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviRFSigGenCDMA * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviRFSigGenCDMA * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviRFSigGenCDMA * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardName )( 
            IIviRFSigGenCDMA * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardCount )( 
            IIviRFSigGenCDMA * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedStandard )( 
            IIviRFSigGenCDMA * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedStandard )( 
            IIviRFSigGenCDMA * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TestModelName )( 
            IIviRFSigGenCDMA * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TestModelCount )( 
            IIviRFSigGenCDMA * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedTestModel )( 
            IIviRFSigGenCDMA * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedTestModel )( 
            IIviRFSigGenCDMA * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerSource )( 
            IIviRFSigGenCDMA * This,
            /* [in] */ IviRFSigGenCDMATriggerSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerSource )( 
            IIviRFSigGenCDMA * This,
            /* [retval][out] */ IviRFSigGenCDMATriggerSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalTriggerSlope )( 
            IIviRFSigGenCDMA * This,
            /* [in] */ IviRFSigGenCDMAExternalTriggerSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalTriggerSlope )( 
            IIviRFSigGenCDMA * This,
            /* [retval][out] */ IviRFSigGenCDMAExternalTriggerSlopeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClockSource )( 
            IIviRFSigGenCDMA * This,
            /* [in] */ IviRFSigGenCDMAClockSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClockSource )( 
            IIviRFSigGenCDMA * This,
            /* [retval][out] */ IviRFSigGenCDMAClockSourceEnum *pVal);
        
        END_INTERFACE
    } IIviRFSigGenCDMAVtbl;

    interface IIviRFSigGenCDMA
    {
        CONST_VTBL struct IIviRFSigGenCDMAVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviRFSigGenCDMA_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviRFSigGenCDMA_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviRFSigGenCDMA_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviRFSigGenCDMA_get_StandardName(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_StandardName(This,Index,pVal) ) 

#define IIviRFSigGenCDMA_get_StandardCount(This,pVal)	\
    ( (This)->lpVtbl -> get_StandardCount(This,pVal) ) 

#define IIviRFSigGenCDMA_put_SelectedStandard(This,newVal)	\
    ( (This)->lpVtbl -> put_SelectedStandard(This,newVal) ) 

#define IIviRFSigGenCDMA_get_SelectedStandard(This,pVal)	\
    ( (This)->lpVtbl -> get_SelectedStandard(This,pVal) ) 

#define IIviRFSigGenCDMA_get_TestModelName(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_TestModelName(This,Index,pVal) ) 

#define IIviRFSigGenCDMA_get_TestModelCount(This,pVal)	\
    ( (This)->lpVtbl -> get_TestModelCount(This,pVal) ) 

#define IIviRFSigGenCDMA_put_SelectedTestModel(This,newVal)	\
    ( (This)->lpVtbl -> put_SelectedTestModel(This,newVal) ) 

#define IIviRFSigGenCDMA_get_SelectedTestModel(This,pVal)	\
    ( (This)->lpVtbl -> get_SelectedTestModel(This,pVal) ) 

#define IIviRFSigGenCDMA_put_TriggerSource(This,newVal)	\
    ( (This)->lpVtbl -> put_TriggerSource(This,newVal) ) 

#define IIviRFSigGenCDMA_get_TriggerSource(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerSource(This,pVal) ) 

#define IIviRFSigGenCDMA_put_ExternalTriggerSlope(This,newVal)	\
    ( (This)->lpVtbl -> put_ExternalTriggerSlope(This,newVal) ) 

#define IIviRFSigGenCDMA_get_ExternalTriggerSlope(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalTriggerSlope(This,pVal) ) 

#define IIviRFSigGenCDMA_put_ClockSource(This,newVal)	\
    ( (This)->lpVtbl -> put_ClockSource(This,newVal) ) 

#define IIviRFSigGenCDMA_get_ClockSource(This,pVal)	\
    ( (This)->lpVtbl -> get_ClockSource(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviRFSigGenCDMA_INTERFACE_DEFINED__ */

#endif /* __IviRFSigGenLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


