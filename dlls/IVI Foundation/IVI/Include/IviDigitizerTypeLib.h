

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:58:05 2016
 */
/* Compiler settings for IviDigitizerTypeLib.idl:
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


#ifndef __IviDigitizerTypeLib_h__
#define __IviDigitizerTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviDigitizer_FWD_DEFINED__
#define __IIviDigitizer_FWD_DEFINED__
typedef interface IIviDigitizer IIviDigitizer;

#endif 	/* __IIviDigitizer_FWD_DEFINED__ */


#ifndef __IIviDigitizerAcquisition_FWD_DEFINED__
#define __IIviDigitizerAcquisition_FWD_DEFINED__
typedef interface IIviDigitizerAcquisition IIviDigitizerAcquisition;

#endif 	/* __IIviDigitizerAcquisition_FWD_DEFINED__ */


#ifndef __IIviDigitizerTrigger_FWD_DEFINED__
#define __IIviDigitizerTrigger_FWD_DEFINED__
typedef interface IIviDigitizerTrigger IIviDigitizerTrigger;

#endif 	/* __IIviDigitizerTrigger_FWD_DEFINED__ */


#ifndef __IIviDigitizerChannel_FWD_DEFINED__
#define __IIviDigitizerChannel_FWD_DEFINED__
typedef interface IIviDigitizerChannel IIviDigitizerChannel;

#endif 	/* __IIviDigitizerChannel_FWD_DEFINED__ */


#ifndef __IIviDigitizerChannels_FWD_DEFINED__
#define __IIviDigitizerChannels_FWD_DEFINED__
typedef interface IIviDigitizerChannels IIviDigitizerChannels;

#endif 	/* __IIviDigitizerChannels_FWD_DEFINED__ */


#ifndef __IIviDigitizerChannelFilter_FWD_DEFINED__
#define __IIviDigitizerChannelFilter_FWD_DEFINED__
typedef interface IIviDigitizerChannelFilter IIviDigitizerChannelFilter;

#endif 	/* __IIviDigitizerChannelFilter_FWD_DEFINED__ */


#ifndef __IIviDigitizerCalibration_FWD_DEFINED__
#define __IIviDigitizerCalibration_FWD_DEFINED__
typedef interface IIviDigitizerCalibration IIviDigitizerCalibration;

#endif 	/* __IIviDigitizerCalibration_FWD_DEFINED__ */


#ifndef __IIviDigitizerTemperature_FWD_DEFINED__
#define __IIviDigitizerTemperature_FWD_DEFINED__
typedef interface IIviDigitizerTemperature IIviDigitizerTemperature;

#endif 	/* __IIviDigitizerTemperature_FWD_DEFINED__ */


#ifndef __IIviDigitizerReferenceOscillator_FWD_DEFINED__
#define __IIviDigitizerReferenceOscillator_FWD_DEFINED__
typedef interface IIviDigitizerReferenceOscillator IIviDigitizerReferenceOscillator;

#endif 	/* __IIviDigitizerReferenceOscillator_FWD_DEFINED__ */


#ifndef __IIviDigitizerSampleClock_FWD_DEFINED__
#define __IIviDigitizerSampleClock_FWD_DEFINED__
typedef interface IIviDigitizerSampleClock IIviDigitizerSampleClock;

#endif 	/* __IIviDigitizerSampleClock_FWD_DEFINED__ */


#ifndef __IIviDigitizerTriggerEdge_FWD_DEFINED__
#define __IIviDigitizerTriggerEdge_FWD_DEFINED__
typedef interface IIviDigitizerTriggerEdge IIviDigitizerTriggerEdge;

#endif 	/* __IIviDigitizerTriggerEdge_FWD_DEFINED__ */


#ifndef __IIviDigitizerTriggerGlitch_FWD_DEFINED__
#define __IIviDigitizerTriggerGlitch_FWD_DEFINED__
typedef interface IIviDigitizerTriggerGlitch IIviDigitizerTriggerGlitch;

#endif 	/* __IIviDigitizerTriggerGlitch_FWD_DEFINED__ */


#ifndef __IIviDigitizerTriggerRunt_FWD_DEFINED__
#define __IIviDigitizerTriggerRunt_FWD_DEFINED__
typedef interface IIviDigitizerTriggerRunt IIviDigitizerTriggerRunt;

#endif 	/* __IIviDigitizerTriggerRunt_FWD_DEFINED__ */


#ifndef __IIviDigitizerTriggerTV_FWD_DEFINED__
#define __IIviDigitizerTriggerTV_FWD_DEFINED__
typedef interface IIviDigitizerTriggerTV IIviDigitizerTriggerTV;

#endif 	/* __IIviDigitizerTriggerTV_FWD_DEFINED__ */


#ifndef __IIviDigitizerTriggerWidth_FWD_DEFINED__
#define __IIviDigitizerTriggerWidth_FWD_DEFINED__
typedef interface IIviDigitizerTriggerWidth IIviDigitizerTriggerWidth;

#endif 	/* __IIviDigitizerTriggerWidth_FWD_DEFINED__ */


#ifndef __IIviDigitizerTriggerWindow_FWD_DEFINED__
#define __IIviDigitizerTriggerWindow_FWD_DEFINED__
typedef interface IIviDigitizerTriggerWindow IIviDigitizerTriggerWindow;

#endif 	/* __IIviDigitizerTriggerWindow_FWD_DEFINED__ */


#ifndef __IIviDigitizerChannelMeasurement_FWD_DEFINED__
#define __IIviDigitizerChannelMeasurement_FWD_DEFINED__
typedef interface IIviDigitizerChannelMeasurement IIviDigitizerChannelMeasurement;

#endif 	/* __IIviDigitizerChannelMeasurement_FWD_DEFINED__ */


#ifndef __IIviDigitizerArm_FWD_DEFINED__
#define __IIviDigitizerArm_FWD_DEFINED__
typedef interface IIviDigitizerArm IIviDigitizerArm;

#endif 	/* __IIviDigitizerArm_FWD_DEFINED__ */


#ifndef __IIviDigitizerArmEdge_FWD_DEFINED__
#define __IIviDigitizerArmEdge_FWD_DEFINED__
typedef interface IIviDigitizerArmEdge IIviDigitizerArmEdge;

#endif 	/* __IIviDigitizerArmEdge_FWD_DEFINED__ */


#ifndef __IIviDigitizerArmGlitch_FWD_DEFINED__
#define __IIviDigitizerArmGlitch_FWD_DEFINED__
typedef interface IIviDigitizerArmGlitch IIviDigitizerArmGlitch;

#endif 	/* __IIviDigitizerArmGlitch_FWD_DEFINED__ */


#ifndef __IIviDigitizerArmRunt_FWD_DEFINED__
#define __IIviDigitizerArmRunt_FWD_DEFINED__
typedef interface IIviDigitizerArmRunt IIviDigitizerArmRunt;

#endif 	/* __IIviDigitizerArmRunt_FWD_DEFINED__ */


#ifndef __IIviDigitizerArmTV_FWD_DEFINED__
#define __IIviDigitizerArmTV_FWD_DEFINED__
typedef interface IIviDigitizerArmTV IIviDigitizerArmTV;

#endif 	/* __IIviDigitizerArmTV_FWD_DEFINED__ */


#ifndef __IIviDigitizerArmWidth_FWD_DEFINED__
#define __IIviDigitizerArmWidth_FWD_DEFINED__
typedef interface IIviDigitizerArmWidth IIviDigitizerArmWidth;

#endif 	/* __IIviDigitizerArmWidth_FWD_DEFINED__ */


#ifndef __IIviDigitizerArmWindow_FWD_DEFINED__
#define __IIviDigitizerArmWindow_FWD_DEFINED__
typedef interface IIviDigitizerArmWindow IIviDigitizerArmWindow;

#endif 	/* __IIviDigitizerArmWindow_FWD_DEFINED__ */


#ifndef __IIviDigitizerMultiArm_FWD_DEFINED__
#define __IIviDigitizerMultiArm_FWD_DEFINED__
typedef interface IIviDigitizerMultiArm IIviDigitizerMultiArm;

#endif 	/* __IIviDigitizerMultiArm_FWD_DEFINED__ */


#ifndef __IIviDigitizerMultiTrigger_FWD_DEFINED__
#define __IIviDigitizerMultiTrigger_FWD_DEFINED__
typedef interface IIviDigitizerMultiTrigger IIviDigitizerMultiTrigger;

#endif 	/* __IIviDigitizerMultiTrigger_FWD_DEFINED__ */


#ifndef __IIviDigitizerTriggerSource_FWD_DEFINED__
#define __IIviDigitizerTriggerSource_FWD_DEFINED__
typedef interface IIviDigitizerTriggerSource IIviDigitizerTriggerSource;

#endif 	/* __IIviDigitizerTriggerSource_FWD_DEFINED__ */


#ifndef __IIviDigitizerTriggerSources_FWD_DEFINED__
#define __IIviDigitizerTriggerSources_FWD_DEFINED__
typedef interface IIviDigitizerTriggerSources IIviDigitizerTriggerSources;

#endif 	/* __IIviDigitizerTriggerSources_FWD_DEFINED__ */


#ifndef __IIviDigitizerArmSource_FWD_DEFINED__
#define __IIviDigitizerArmSource_FWD_DEFINED__
typedef interface IIviDigitizerArmSource IIviDigitizerArmSource;

#endif 	/* __IIviDigitizerArmSource_FWD_DEFINED__ */


#ifndef __IIviDigitizerArmSources_FWD_DEFINED__
#define __IIviDigitizerArmSources_FWD_DEFINED__
typedef interface IIviDigitizerArmSources IIviDigitizerArmSources;

#endif 	/* __IIviDigitizerArmSources_FWD_DEFINED__ */


#ifndef __IIviDigitizerChannelDownconversion_FWD_DEFINED__
#define __IIviDigitizerChannelDownconversion_FWD_DEFINED__
typedef interface IIviDigitizerChannelDownconversion IIviDigitizerChannelDownconversion;

#endif 	/* __IIviDigitizerChannelDownconversion_FWD_DEFINED__ */


#ifndef __IIviDigitizerAcquisitionStatus_FWD_DEFINED__
#define __IIviDigitizerAcquisitionStatus_FWD_DEFINED__
typedef interface IIviDigitizerAcquisitionStatus IIviDigitizerAcquisitionStatus;

#endif 	/* __IIviDigitizerAcquisitionStatus_FWD_DEFINED__ */


#ifndef __IIviDigitizerChannelMultiRecordMeasurement_FWD_DEFINED__
#define __IIviDigitizerChannelMultiRecordMeasurement_FWD_DEFINED__
typedef interface IIviDigitizerChannelMultiRecordMeasurement IIviDigitizerChannelMultiRecordMeasurement;

#endif 	/* __IIviDigitizerChannelMultiRecordMeasurement_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_IviDigitizerTypeLib_0000_0000 */
/* [local] */ 




































extern RPC_IF_HANDLE __MIDL_itf_IviDigitizerTypeLib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IviDigitizerTypeLib_0000_0000_v0_0_s_ifspec;


#ifndef __IviDigitizerLib_LIBRARY_DEFINED__
#define __IviDigitizerLib_LIBRARY_DEFINED__

/* library IviDigitizerLib */
/* [helpfile][helpcontext][helpstring][version][uuid] */ 

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("6e305b0c-9c2e-4592-a816-02459ff6eafb") 
enum IviDigitizerVerticalCouplingEnum
    {
        IviDigitizerVerticalCouplingAC	= 0,
        IviDigitizerVerticalCouplingDC	= 1,
        IviDigitizerVerticalCouplingGnd	= 2
    } 	IviDigitizerVerticalCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("1533478c-32d8-47f2-9b69-e32229d3b5d3") 
enum IviDigitizerTriggerTypeEnum
    {
        IviDigitizerTriggerEdge	= 1,
        IviDigitizerTriggerWidth	= 2,
        IviDigitizerTriggerRunt	= 3,
        IviDigitizerTriggerGlitch	= 4,
        IviDigitizerTriggerTV	= 5,
        IviDigitizerTriggerWindow	= 6
    } 	IviDigitizerTriggerTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("2af0ff74-5c66-49b5-b118-f2296f6b1ae8") 
enum IviDigitizerTemperatureUnitsEnum
    {
        IviDigitizerTemperatureUnitsCelsius	= 0,
        IviDigitizerTemperatureUnitsFahrenheit	= 1,
        IviDigitizerTemperatureUnitsKelvin	= 2
    } 	IviDigitizerTemperatureUnitsEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("8adbdf7a-bf63-4504-810c-ddcab55e413a") 
enum IviDigitizerReferenceOscillatorSourceEnum
    {
        IviDigitizerReferenceOscillatorSourceInternal	= 0,
        IviDigitizerReferenceOscillatorSourceExternal	= 1
    } 	IviDigitizerReferenceOscillatorSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3ec81347-8f1c-4e05-8e0c-c905cf7243e8") 
enum IviDigitizerSampleClockSourceEnum
    {
        IviDigitizerSampleClockSourceInternal	= 0,
        IviDigitizerSampleClockSourceExternal	= 1
    } 	IviDigitizerSampleClockSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f02d4228-bcfd-45f4-8827-ffe4422384e9") 
enum IviDigitizerTriggerSlopeEnum
    {
        IviDigitizerTriggerSlopeNegative	= 0,
        IviDigitizerTriggerSlopePositive	= 1
    } 	IviDigitizerTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3776e7c8-2a41-4e57-8a5e-47ba4932f52e") 
enum IviDigitizerGlitchPolarityEnum
    {
        IviDigitizerGlitchPolarityPositive	= 1,
        IviDigitizerGlitchPolarityNegative	= 2,
        IviDigitizerGlitchPolarityEither	= 3
    } 	IviDigitizerGlitchPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b166e295-6797-44ca-b0d9-049d71c91749") 
enum IviDigitizerGlitchConditionEnum
    {
        IviDigitizerGlitchConditionLessThan	= 1,
        IviDigitizerGlitchConditionGreaterThan	= 2
    } 	IviDigitizerGlitchConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("67b5b871-f56c-420a-85b0-5dd416e4c2a8") 
enum IviDigitizerRuntPolarityEnum
    {
        IviDigitizerRuntPolarityPositive	= 1,
        IviDigitizerRuntPolarityNegative	= 2,
        IviDigitizerRuntPolarityEither	= 3
    } 	IviDigitizerRuntPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("ee4f7985-b976-451e-9a71-626c7449fe5c") 
enum IviDigitizerTVTriggerPolarityEnum
    {
        IviDigitizerTVTriggerPolarityPositive	= 1,
        IviDigitizerTVTriggerPolarityNegative	= 2
    } 	IviDigitizerTVTriggerPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d55dca93-7ef8-465c-a3de-2a0fb674d458") 
enum IviDigitizerTVTriggerEventEnum
    {
        IviDigitizerTVTriggerEventField1	= 1,
        IviDigitizerTVTriggerEventField2	= 2,
        IviDigitizerTVTriggerEventAnyField	= 3,
        IviDigitizerTVTriggerEventAnyLine	= 4,
        IviDigitizerTVTriggerEventLineNumber	= 5
    } 	IviDigitizerTVTriggerEventEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("233956d6-ef18-480c-857b-f30d123d238f") 
enum IviDigitizerTVSignalFormatEnum
    {
        IviDigitizerTVSignalFormatNTSC	= 1,
        IviDigitizerTVSignalFormatPAL	= 2,
        IviDigitizerTVSignalFormatSECAM	= 3
    } 	IviDigitizerTVSignalFormatEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4bea05ba-be8d-4ec5-a85a-876973484e6e") 
enum IviDigitizerWidthConditionEnum
    {
        IviDigitizerWidthConditionWithin	= 1,
        IviDigitizerWidthConditionOutside	= 2
    } 	IviDigitizerWidthConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("a8d623bd-2bcb-4e0d-a9ad-3195bf8e24e2") 
enum IviDigitizerWidthPolarityEnum
    {
        IviDigitizerWidthPolarityPositive	= 1,
        IviDigitizerWidthPolarityNegative	= 2,
        IviDigitizerWidthPolarityEither	= 3
    } 	IviDigitizerWidthPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("2a138d23-b4e8-4c6b-a415-eccd44b51324") 
enum IviDigitizerWindowConditionEnum
    {
        IviDigitizerWindowConditionEntering	= 1,
        IviDigitizerWindowConditionLeaving	= 2
    } 	IviDigitizerWindowConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("6f33063d-eb81-43ab-9118-5b3e54920817") 
enum IviDigitizerTriggerCouplingEnum
    {
        IviDigitizerTriggerCouplingAC	= 0,
        IviDigitizerTriggerCouplingDC	= 1,
        IviDigitizerTriggerCouplingNoiseReject	= 4,
        IviDigitizerTriggerCouplingHFReject	= 2,
        IviDigitizerTriggerCouplingLFReject	= 3
    } 	IviDigitizerTriggerCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0d97da12-ed45-4af3-adf2-e77a43254a97") 
enum IviDigitizerArmTypeEnum
    {
        IviDigitizerArmEdge	= 1,
        IviDigitizerArmWidth	= 2,
        IviDigitizerArmRunt	= 3,
        IviDigitizerArmGlitch	= 4,
        IviDigitizerArmTV	= 5,
        IviDigitizerArmWindow	= 6
    } 	IviDigitizerArmTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("343afe55-4921-43c0-bdad-ec54463fc8ea") 
enum IviDigitizerTimeOutEnum
    {
        IviDigitizerTimeOutImmediate	= 0,
        IviDigitizerTimeOutInfinite	= -1
    } 	IviDigitizerTimeOutEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("81f61178-b3d8-4819-9ae8-cc66bd66497a") 
enum IviDigitizerArmSourceOperatorEnum
    {
        IviDigitizerArmSourceOperatorAND	= 0,
        IviDigitizerArmSourceOperatorOR	= 1,
        IviDigitizerArmSourceOperatorNone	= 2
    } 	IviDigitizerArmSourceOperatorEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("67dae1cb-f8b8-4c57-8b61-4ee56b1164e8") 
enum IviDigitizerTriggerSourceOperatorEnum
    {
        IviDigitizerTriggerSourceOperatorAND	= 0,
        IviDigitizerTriggerSourceOperatorOR	= 1,
        IviDigitizerTriggerSourceOperatorNone	= 2
    } 	IviDigitizerTriggerSourceOperatorEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("6e245e88-d740-4934-8cb0-91148cf1a1af") 
enum IviDigitizerSampleModeEnum
    {
        IviDigitizerSampleModeRealTime	= 0,
        IviDigitizerSampleModeEquivalentTime	= 1
    } 	IviDigitizerSampleModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("0f9402c3-5ec6-45d2-8f17-ebcdf2b7c7d2") 
enum IviDigitizerTriggerModifierEnum
    {
        IviDigitizerTriggerModifierNone	= 1,
        IviDigitizerTriggerModifierAuto	= 2,
        IviDigitizerTriggerModifierAutoLevel	= 3
    } 	IviDigitizerTriggerModifierEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("2dd7c005-a620-493f-bfce-dc4a6c29c5c1") 
enum IviDigitizerAcquisitionStatusResultEnum
    {
        IviDigitizerAcquisitionStatusResultTrue	= 1,
        IviDigitizerAcquisitionStatusResultFalse	= 2,
        IviDigitizerAcquisitionStatusResultUnknown	= 3
    } 	IviDigitizerAcquisitionStatusResultEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("17c0d077-f683-430e-b619-441f173fdb77") 
enum IviDigitizerErrorCodesEnum
    {
        E_IVIDIGITIZER_CHANNEL_NOT_ENABLED	= -2147213311,
        E_IVIDIGITIZER_MAX_TIME_EXCEEDED	= -2147213310,
        E_IVIDIGITIZER_TRIGGER_NOT_SOFTWARE	= -2147217407,
        E_IVIDIGITIZER_ARM_NOT_SOFTWARE	= -2147213309,
        E_IVIDIGITIZER_INCOMPATIBLE_FETCH	= -2147213308
    } 	IviDigitizerErrorCodesEnum;


EXTERN_C const IID LIBID_IviDigitizerLib;

#ifndef __IIviDigitizer_INTERFACE_DEFINED__
#define __IIviDigitizer_INTERFACE_DEFINED__

/* interface IIviDigitizer */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed540e-a398-11d4-ba58-000064657374")
    IIviDigitizer : public IIviDriver
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Acquisition( 
            /* [retval][out] */ IIviDigitizerAcquisition **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ IIviDigitizerTrigger **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channels( 
            /* [retval][out] */ IIviDigitizerChannels **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Calibration( 
            /* [retval][out] */ IIviDigitizerCalibration **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Temperature( 
            /* [retval][out] */ IIviDigitizerTemperature **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceOscillator( 
            /* [retval][out] */ IIviDigitizerReferenceOscillator **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SampleClock( 
            /* [retval][out] */ IIviDigitizerSampleClock **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Arm( 
            /* [retval][out] */ IIviDigitizerArm **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizer * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviDigitizer * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviDigitizer * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviDigitizer * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviDigitizer * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviDigitizer * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviDigitizer * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Acquisition )( 
            IIviDigitizer * This,
            /* [retval][out] */ IIviDigitizerAcquisition **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            IIviDigitizer * This,
            /* [retval][out] */ IIviDigitizerTrigger **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channels )( 
            IIviDigitizer * This,
            /* [retval][out] */ IIviDigitizerChannels **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Calibration )( 
            IIviDigitizer * This,
            /* [retval][out] */ IIviDigitizerCalibration **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Temperature )( 
            IIviDigitizer * This,
            /* [retval][out] */ IIviDigitizerTemperature **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceOscillator )( 
            IIviDigitizer * This,
            /* [retval][out] */ IIviDigitizerReferenceOscillator **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleClock )( 
            IIviDigitizer * This,
            /* [retval][out] */ IIviDigitizerSampleClock **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arm )( 
            IIviDigitizer * This,
            /* [retval][out] */ IIviDigitizerArm **Val);
        
        END_INTERFACE
    } IIviDigitizerVtbl;

    interface IIviDigitizer
    {
        CONST_VTBL struct IIviDigitizerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizer_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviDigitizer_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviDigitizer_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviDigitizer_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviDigitizer_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviDigitizer_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviDigitizer_get_Acquisition(This,Val)	\
    ( (This)->lpVtbl -> get_Acquisition(This,Val) ) 

#define IIviDigitizer_get_Trigger(This,Val)	\
    ( (This)->lpVtbl -> get_Trigger(This,Val) ) 

#define IIviDigitizer_get_Channels(This,Val)	\
    ( (This)->lpVtbl -> get_Channels(This,Val) ) 

#define IIviDigitizer_get_Calibration(This,Val)	\
    ( (This)->lpVtbl -> get_Calibration(This,Val) ) 

#define IIviDigitizer_get_Temperature(This,Val)	\
    ( (This)->lpVtbl -> get_Temperature(This,Val) ) 

#define IIviDigitizer_get_ReferenceOscillator(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceOscillator(This,Val) ) 

#define IIviDigitizer_get_SampleClock(This,Val)	\
    ( (This)->lpVtbl -> get_SampleClock(This,Val) ) 

#define IIviDigitizer_get_Arm(This,Val)	\
    ( (This)->lpVtbl -> get_Arm(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizer_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerAcquisition_INTERFACE_DEFINED__
#define __IIviDigitizerAcquisition_INTERFACE_DEFINED__

/* interface IIviDigitizerAcquisition */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerAcquisition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed540f-a398-11d4-ba58-000064657374")
    IIviDigitizerAcquisition : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Initiate( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE WaitForAcquisitionComplete( 
            /* [in] */ long MaxTimeMilliseconds) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureAcquisition( 
            /* [in] */ __int64 NumRecordsToAcquire,
            /* [in] */ __int64 RecordSize,
            /* [in] */ double SampleRate) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE QueryMinWaveformMemory( 
            /* [in] */ long DataWidth,
            /* [in] */ __int64 NumRecords,
            /* [in] */ __int64 OffsetWithinRecord,
            /* [in] */ __int64 NumPointsPerRecord,
            /* [retval][out] */ __int64 *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSamplesPerChannel( 
            /* [retval][out] */ __int64 *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumAcquiredRecords( 
            /* [retval][out] */ __int64 *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SampleRate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SampleRate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TimeInterleavedChannelListAuto( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TimeInterleavedChannelListAuto( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MinRecordSize( 
            /* [retval][out] */ __int64 *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RecordSize( 
            /* [retval][out] */ __int64 *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_RecordSize( 
            /* [in] */ __int64 Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumRecordsToAcquire( 
            /* [retval][out] */ __int64 *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_NumRecordsToAcquire( 
            /* [in] */ __int64 Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SampleMode( 
            /* [retval][out] */ enum IviDigitizerSampleModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SampleMode( 
            /* [in] */ enum IviDigitizerSampleModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ IIviDigitizerAcquisitionStatus **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MaxFirstValidPointValue( 
            /* [retval][out] */ __int64 *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MaxFirstValidPointValue( 
            /* [in] */ __int64 Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerAcquisitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerAcquisition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerAcquisition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerAcquisition * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Initiate )( 
            IIviDigitizerAcquisition * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IIviDigitizerAcquisition * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *WaitForAcquisitionComplete )( 
            IIviDigitizerAcquisition * This,
            /* [in] */ long MaxTimeMilliseconds);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureAcquisition )( 
            IIviDigitizerAcquisition * This,
            /* [in] */ __int64 NumRecordsToAcquire,
            /* [in] */ __int64 RecordSize,
            /* [in] */ double SampleRate);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *QueryMinWaveformMemory )( 
            IIviDigitizerAcquisition * This,
            /* [in] */ long DataWidth,
            /* [in] */ __int64 NumRecords,
            /* [in] */ __int64 OffsetWithinRecord,
            /* [in] */ __int64 NumPointsPerRecord,
            /* [retval][out] */ __int64 *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSamplesPerChannel )( 
            IIviDigitizerAcquisition * This,
            /* [retval][out] */ __int64 *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumAcquiredRecords )( 
            IIviDigitizerAcquisition * This,
            /* [retval][out] */ __int64 *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleRate )( 
            IIviDigitizerAcquisition * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleRate )( 
            IIviDigitizerAcquisition * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeInterleavedChannelListAuto )( 
            IIviDigitizerAcquisition * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimeInterleavedChannelListAuto )( 
            IIviDigitizerAcquisition * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinRecordSize )( 
            IIviDigitizerAcquisition * This,
            /* [retval][out] */ __int64 *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecordSize )( 
            IIviDigitizerAcquisition * This,
            /* [retval][out] */ __int64 *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RecordSize )( 
            IIviDigitizerAcquisition * This,
            /* [in] */ __int64 Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumRecordsToAcquire )( 
            IIviDigitizerAcquisition * This,
            /* [retval][out] */ __int64 *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumRecordsToAcquire )( 
            IIviDigitizerAcquisition * This,
            /* [in] */ __int64 Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleMode )( 
            IIviDigitizerAcquisition * This,
            /* [retval][out] */ enum IviDigitizerSampleModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleMode )( 
            IIviDigitizerAcquisition * This,
            /* [in] */ enum IviDigitizerSampleModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IIviDigitizerAcquisition * This,
            /* [retval][out] */ IIviDigitizerAcquisitionStatus **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxFirstValidPointValue )( 
            IIviDigitizerAcquisition * This,
            /* [retval][out] */ __int64 *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxFirstValidPointValue )( 
            IIviDigitizerAcquisition * This,
            /* [in] */ __int64 Val);
        
        END_INTERFACE
    } IIviDigitizerAcquisitionVtbl;

    interface IIviDigitizerAcquisition
    {
        CONST_VTBL struct IIviDigitizerAcquisitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerAcquisition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerAcquisition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerAcquisition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerAcquisition_Initiate(This)	\
    ( (This)->lpVtbl -> Initiate(This) ) 

#define IIviDigitizerAcquisition_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IIviDigitizerAcquisition_WaitForAcquisitionComplete(This,MaxTimeMilliseconds)	\
    ( (This)->lpVtbl -> WaitForAcquisitionComplete(This,MaxTimeMilliseconds) ) 

#define IIviDigitizerAcquisition_ConfigureAcquisition(This,NumRecordsToAcquire,RecordSize,SampleRate)	\
    ( (This)->lpVtbl -> ConfigureAcquisition(This,NumRecordsToAcquire,RecordSize,SampleRate) ) 

#define IIviDigitizerAcquisition_QueryMinWaveformMemory(This,DataWidth,NumRecords,OffsetWithinRecord,NumPointsPerRecord,Val)	\
    ( (This)->lpVtbl -> QueryMinWaveformMemory(This,DataWidth,NumRecords,OffsetWithinRecord,NumPointsPerRecord,Val) ) 

#define IIviDigitizerAcquisition_get_MaxSamplesPerChannel(This,Val)	\
    ( (This)->lpVtbl -> get_MaxSamplesPerChannel(This,Val) ) 

#define IIviDigitizerAcquisition_get_NumAcquiredRecords(This,Val)	\
    ( (This)->lpVtbl -> get_NumAcquiredRecords(This,Val) ) 

#define IIviDigitizerAcquisition_get_SampleRate(This,Val)	\
    ( (This)->lpVtbl -> get_SampleRate(This,Val) ) 

#define IIviDigitizerAcquisition_put_SampleRate(This,Val)	\
    ( (This)->lpVtbl -> put_SampleRate(This,Val) ) 

#define IIviDigitizerAcquisition_get_TimeInterleavedChannelListAuto(This,Val)	\
    ( (This)->lpVtbl -> get_TimeInterleavedChannelListAuto(This,Val) ) 

#define IIviDigitizerAcquisition_put_TimeInterleavedChannelListAuto(This,Val)	\
    ( (This)->lpVtbl -> put_TimeInterleavedChannelListAuto(This,Val) ) 

#define IIviDigitizerAcquisition_get_MinRecordSize(This,Val)	\
    ( (This)->lpVtbl -> get_MinRecordSize(This,Val) ) 

#define IIviDigitizerAcquisition_get_RecordSize(This,Val)	\
    ( (This)->lpVtbl -> get_RecordSize(This,Val) ) 

#define IIviDigitizerAcquisition_put_RecordSize(This,Val)	\
    ( (This)->lpVtbl -> put_RecordSize(This,Val) ) 

#define IIviDigitizerAcquisition_get_NumRecordsToAcquire(This,Val)	\
    ( (This)->lpVtbl -> get_NumRecordsToAcquire(This,Val) ) 

#define IIviDigitizerAcquisition_put_NumRecordsToAcquire(This,Val)	\
    ( (This)->lpVtbl -> put_NumRecordsToAcquire(This,Val) ) 

#define IIviDigitizerAcquisition_get_SampleMode(This,Val)	\
    ( (This)->lpVtbl -> get_SampleMode(This,Val) ) 

#define IIviDigitizerAcquisition_put_SampleMode(This,Val)	\
    ( (This)->lpVtbl -> put_SampleMode(This,Val) ) 

#define IIviDigitizerAcquisition_get_Status(This,Val)	\
    ( (This)->lpVtbl -> get_Status(This,Val) ) 

#define IIviDigitizerAcquisition_get_MaxFirstValidPointValue(This,Val)	\
    ( (This)->lpVtbl -> get_MaxFirstValidPointValue(This,Val) ) 

#define IIviDigitizerAcquisition_put_MaxFirstValidPointValue(This,Val)	\
    ( (This)->lpVtbl -> put_MaxFirstValidPointValue(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerAcquisition_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerTrigger_INTERFACE_DEFINED__
#define __IIviDigitizerTrigger_INTERFACE_DEFINED__

/* interface IIviDigitizerTrigger */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5423-a398-11d4-ba58-000064657374")
    IIviDigitizerTrigger : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveSource( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ActiveSource( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MultiTrigger( 
            /* [retval][out] */ IIviDigitizerMultiTrigger **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Sources( 
            /* [retval][out] */ IIviDigitizerTriggerSources **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Modifier( 
            /* [retval][out] */ enum IviDigitizerTriggerModifierEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Modifier( 
            /* [in] */ enum IviDigitizerTriggerModifierEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PretriggerSamples( 
            /* [retval][out] */ __int64 *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_PretriggerSamples( 
            /* [in] */ __int64 Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Holdoff( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Holdoff( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OutputEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OutputEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerTrigger * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviDigitizerTrigger * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveSource )( 
            IIviDigitizerTrigger * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveSource )( 
            IIviDigitizerTrigger * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultiTrigger )( 
            IIviDigitizerTrigger * This,
            /* [retval][out] */ IIviDigitizerMultiTrigger **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sources )( 
            IIviDigitizerTrigger * This,
            /* [retval][out] */ IIviDigitizerTriggerSources **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Modifier )( 
            IIviDigitizerTrigger * This,
            /* [retval][out] */ enum IviDigitizerTriggerModifierEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Modifier )( 
            IIviDigitizerTrigger * This,
            /* [in] */ enum IviDigitizerTriggerModifierEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PretriggerSamples )( 
            IIviDigitizerTrigger * This,
            /* [retval][out] */ __int64 *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PretriggerSamples )( 
            IIviDigitizerTrigger * This,
            /* [in] */ __int64 Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Holdoff )( 
            IIviDigitizerTrigger * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Holdoff )( 
            IIviDigitizerTrigger * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviDigitizerTrigger * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviDigitizerTrigger * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputEnabled )( 
            IIviDigitizerTrigger * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputEnabled )( 
            IIviDigitizerTrigger * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IIviDigitizerTriggerVtbl;

    interface IIviDigitizerTrigger
    {
        CONST_VTBL struct IIviDigitizerTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerTrigger_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IIviDigitizerTrigger_get_ActiveSource(This,Val)	\
    ( (This)->lpVtbl -> get_ActiveSource(This,Val) ) 

#define IIviDigitizerTrigger_put_ActiveSource(This,Val)	\
    ( (This)->lpVtbl -> put_ActiveSource(This,Val) ) 

#define IIviDigitizerTrigger_get_MultiTrigger(This,Val)	\
    ( (This)->lpVtbl -> get_MultiTrigger(This,Val) ) 

#define IIviDigitizerTrigger_get_Sources(This,Val)	\
    ( (This)->lpVtbl -> get_Sources(This,Val) ) 

#define IIviDigitizerTrigger_get_Modifier(This,Val)	\
    ( (This)->lpVtbl -> get_Modifier(This,Val) ) 

#define IIviDigitizerTrigger_put_Modifier(This,Val)	\
    ( (This)->lpVtbl -> put_Modifier(This,Val) ) 

#define IIviDigitizerTrigger_get_PretriggerSamples(This,Val)	\
    ( (This)->lpVtbl -> get_PretriggerSamples(This,Val) ) 

#define IIviDigitizerTrigger_put_PretriggerSamples(This,Val)	\
    ( (This)->lpVtbl -> put_PretriggerSamples(This,Val) ) 

#define IIviDigitizerTrigger_get_Holdoff(This,Val)	\
    ( (This)->lpVtbl -> get_Holdoff(This,Val) ) 

#define IIviDigitizerTrigger_put_Holdoff(This,Val)	\
    ( (This)->lpVtbl -> put_Holdoff(This,Val) ) 

#define IIviDigitizerTrigger_get_Delay(This,Val)	\
    ( (This)->lpVtbl -> get_Delay(This,Val) ) 

#define IIviDigitizerTrigger_put_Delay(This,Val)	\
    ( (This)->lpVtbl -> put_Delay(This,Val) ) 

#define IIviDigitizerTrigger_get_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_OutputEnabled(This,Val) ) 

#define IIviDigitizerTrigger_put_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_OutputEnabled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerTrigger_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerChannel_INTERFACE_DEFINED__
#define __IIviDigitizerChannel_INTERFACE_DEFINED__

/* interface IIviDigitizerChannel */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed541a-a398-11d4-ba58-000064657374")
    IIviDigitizerChannel : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Range,
            /* [in] */ double Offset,
            /* [in] */ enum IviDigitizerVerticalCouplingEnum Coupling,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Coupling( 
            /* [retval][out] */ enum IviDigitizerVerticalCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Coupling( 
            /* [in] */ enum IviDigitizerVerticalCouplingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InputImpedance( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InputImpedance( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Range( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Range( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Filter( 
            /* [retval][out] */ IIviDigitizerChannelFilter **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Temperature( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Measurement( 
            /* [retval][out] */ IIviDigitizerChannelMeasurement **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TimeInterleavedChannelList( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TimeInterleavedChannelList( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Downconversion( 
            /* [retval][out] */ IIviDigitizerChannelDownconversion **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DataInterleavedChannelList( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DataInterleavedChannelList( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InputConnectorSelection( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InputConnectorSelection( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MultiRecordMeasurement( 
            /* [retval][out] */ IIviDigitizerChannelMultiRecordMeasurement **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerChannel * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerChannel * This,
            /* [in] */ double Range,
            /* [in] */ double Offset,
            /* [in] */ enum IviDigitizerVerticalCouplingEnum Coupling,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coupling )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ enum IviDigitizerVerticalCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Coupling )( 
            IIviDigitizerChannel * This,
            /* [in] */ enum IviDigitizerVerticalCouplingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputImpedance )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputImpedance )( 
            IIviDigitizerChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Range )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Range )( 
            IIviDigitizerChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            IIviDigitizerChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Filter )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ IIviDigitizerChannelFilter **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviDigitizerChannel * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Temperature )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Measurement )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ IIviDigitizerChannelMeasurement **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeInterleavedChannelList )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimeInterleavedChannelList )( 
            IIviDigitizerChannel * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Downconversion )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ IIviDigitizerChannelDownconversion **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataInterleavedChannelList )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataInterleavedChannelList )( 
            IIviDigitizerChannel * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputConnectorSelection )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputConnectorSelection )( 
            IIviDigitizerChannel * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultiRecordMeasurement )( 
            IIviDigitizerChannel * This,
            /* [retval][out] */ IIviDigitizerChannelMultiRecordMeasurement **Val);
        
        END_INTERFACE
    } IIviDigitizerChannelVtbl;

    interface IIviDigitizerChannel
    {
        CONST_VTBL struct IIviDigitizerChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerChannel_Configure(This,Range,Offset,Coupling,Enabled)	\
    ( (This)->lpVtbl -> Configure(This,Range,Offset,Coupling,Enabled) ) 

#define IIviDigitizerChannel_get_Coupling(This,Val)	\
    ( (This)->lpVtbl -> get_Coupling(This,Val) ) 

#define IIviDigitizerChannel_put_Coupling(This,Val)	\
    ( (This)->lpVtbl -> put_Coupling(This,Val) ) 

#define IIviDigitizerChannel_get_InputImpedance(This,Val)	\
    ( (This)->lpVtbl -> get_InputImpedance(This,Val) ) 

#define IIviDigitizerChannel_put_InputImpedance(This,Val)	\
    ( (This)->lpVtbl -> put_InputImpedance(This,Val) ) 

#define IIviDigitizerChannel_get_Range(This,Val)	\
    ( (This)->lpVtbl -> get_Range(This,Val) ) 

#define IIviDigitizerChannel_put_Range(This,Val)	\
    ( (This)->lpVtbl -> put_Range(This,Val) ) 

#define IIviDigitizerChannel_get_Offset(This,Val)	\
    ( (This)->lpVtbl -> get_Offset(This,Val) ) 

#define IIviDigitizerChannel_put_Offset(This,Val)	\
    ( (This)->lpVtbl -> put_Offset(This,Val) ) 

#define IIviDigitizerChannel_get_Filter(This,Val)	\
    ( (This)->lpVtbl -> get_Filter(This,Val) ) 

#define IIviDigitizerChannel_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviDigitizerChannel_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviDigitizerChannel_get_Temperature(This,Val)	\
    ( (This)->lpVtbl -> get_Temperature(This,Val) ) 

#define IIviDigitizerChannel_get_Measurement(This,Val)	\
    ( (This)->lpVtbl -> get_Measurement(This,Val) ) 

#define IIviDigitizerChannel_get_TimeInterleavedChannelList(This,Val)	\
    ( (This)->lpVtbl -> get_TimeInterleavedChannelList(This,Val) ) 

#define IIviDigitizerChannel_put_TimeInterleavedChannelList(This,Val)	\
    ( (This)->lpVtbl -> put_TimeInterleavedChannelList(This,Val) ) 

#define IIviDigitizerChannel_get_Downconversion(This,Val)	\
    ( (This)->lpVtbl -> get_Downconversion(This,Val) ) 

#define IIviDigitizerChannel_get_DataInterleavedChannelList(This,Val)	\
    ( (This)->lpVtbl -> get_DataInterleavedChannelList(This,Val) ) 

#define IIviDigitizerChannel_put_DataInterleavedChannelList(This,Val)	\
    ( (This)->lpVtbl -> put_DataInterleavedChannelList(This,Val) ) 

#define IIviDigitizerChannel_get_InputConnectorSelection(This,Val)	\
    ( (This)->lpVtbl -> get_InputConnectorSelection(This,Val) ) 

#define IIviDigitizerChannel_put_InputConnectorSelection(This,Val)	\
    ( (This)->lpVtbl -> put_InputConnectorSelection(This,Val) ) 

#define IIviDigitizerChannel_get_MultiRecordMeasurement(This,Val)	\
    ( (This)->lpVtbl -> get_MultiRecordMeasurement(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerChannel_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerChannels_INTERFACE_DEFINED__
#define __IIviDigitizerChannels_INTERFACE_DEFINED__

/* interface IIviDigitizerChannels */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerChannels;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed541d-a398-11d4-ba58-000064657374")
    IIviDigitizerChannels : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviDigitizerChannel **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerChannelsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerChannels * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerChannels * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerChannels * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviDigitizerChannels * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviDigitizerChannels * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviDigitizerChannel **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviDigitizerChannels * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } IIviDigitizerChannelsVtbl;

    interface IIviDigitizerChannels
    {
        CONST_VTBL struct IIviDigitizerChannelsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerChannels_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerChannels_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerChannels_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerChannels_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IIviDigitizerChannels_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#define IIviDigitizerChannels_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerChannels_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerChannelFilter_INTERFACE_DEFINED__
#define __IIviDigitizerChannelFilter_INTERFACE_DEFINED__

/* interface IIviDigitizerChannelFilter */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerChannelFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed541b-a398-11d4-ba58-000064657374")
    IIviDigitizerChannelFilter : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double MinFrequency,
            /* [in] */ double MaxFrequency) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MaxFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MaxFrequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MinFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MinFrequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Bypass( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Bypass( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerChannelFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerChannelFilter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerChannelFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerChannelFilter * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerChannelFilter * This,
            /* [in] */ double MinFrequency,
            /* [in] */ double MaxFrequency);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxFrequency )( 
            IIviDigitizerChannelFilter * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxFrequency )( 
            IIviDigitizerChannelFilter * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinFrequency )( 
            IIviDigitizerChannelFilter * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinFrequency )( 
            IIviDigitizerChannelFilter * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bypass )( 
            IIviDigitizerChannelFilter * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bypass )( 
            IIviDigitizerChannelFilter * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IIviDigitizerChannelFilterVtbl;

    interface IIviDigitizerChannelFilter
    {
        CONST_VTBL struct IIviDigitizerChannelFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerChannelFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerChannelFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerChannelFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerChannelFilter_Configure(This,MinFrequency,MaxFrequency)	\
    ( (This)->lpVtbl -> Configure(This,MinFrequency,MaxFrequency) ) 

#define IIviDigitizerChannelFilter_get_MaxFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_MaxFrequency(This,Val) ) 

#define IIviDigitizerChannelFilter_put_MaxFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_MaxFrequency(This,Val) ) 

#define IIviDigitizerChannelFilter_get_MinFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_MinFrequency(This,Val) ) 

#define IIviDigitizerChannelFilter_put_MinFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_MinFrequency(This,Val) ) 

#define IIviDigitizerChannelFilter_get_Bypass(This,Val)	\
    ( (This)->lpVtbl -> get_Bypass(This,Val) ) 

#define IIviDigitizerChannelFilter_put_Bypass(This,Val)	\
    ( (This)->lpVtbl -> put_Bypass(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerChannelFilter_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerCalibration_INTERFACE_DEFINED__
#define __IIviDigitizerCalibration_INTERFACE_DEFINED__

/* interface IIviDigitizerCalibration */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerCalibration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5419-a398-11d4-ba58-000064657374")
    IIviDigitizerCalibration : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SelfCalibrate( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerCalibrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerCalibration * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerCalibration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerCalibration * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SelfCalibrate )( 
            IIviDigitizerCalibration * This);
        
        END_INTERFACE
    } IIviDigitizerCalibrationVtbl;

    interface IIviDigitizerCalibration
    {
        CONST_VTBL struct IIviDigitizerCalibrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerCalibration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerCalibration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerCalibration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerCalibration_SelfCalibrate(This)	\
    ( (This)->lpVtbl -> SelfCalibrate(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerCalibration_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerTemperature_INTERFACE_DEFINED__
#define __IIviDigitizerTemperature_INTERFACE_DEFINED__

/* interface IIviDigitizerTemperature */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerTemperature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5422-a398-11d4-ba58-000064657374")
    IIviDigitizerTemperature : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Units( 
            /* [retval][out] */ enum IviDigitizerTemperatureUnitsEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Units( 
            /* [in] */ enum IviDigitizerTemperatureUnitsEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_BoardTemperature( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerTemperatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerTemperature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerTemperature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerTemperature * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Units )( 
            IIviDigitizerTemperature * This,
            /* [retval][out] */ enum IviDigitizerTemperatureUnitsEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Units )( 
            IIviDigitizerTemperature * This,
            /* [in] */ enum IviDigitizerTemperatureUnitsEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoardTemperature )( 
            IIviDigitizerTemperature * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } IIviDigitizerTemperatureVtbl;

    interface IIviDigitizerTemperature
    {
        CONST_VTBL struct IIviDigitizerTemperatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerTemperature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerTemperature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerTemperature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerTemperature_get_Units(This,Val)	\
    ( (This)->lpVtbl -> get_Units(This,Val) ) 

#define IIviDigitizerTemperature_put_Units(This,Val)	\
    ( (This)->lpVtbl -> put_Units(This,Val) ) 

#define IIviDigitizerTemperature_get_BoardTemperature(This,Val)	\
    ( (This)->lpVtbl -> get_BoardTemperature(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerTemperature_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerReferenceOscillator_INTERFACE_DEFINED__
#define __IIviDigitizerReferenceOscillator_INTERFACE_DEFINED__

/* interface IIviDigitizerReferenceOscillator */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerReferenceOscillator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5420-a398-11d4-ba58-000064657374")
    IIviDigitizerReferenceOscillator : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum IviDigitizerReferenceOscillatorSourceEnum Source,
            /* [in] */ double Frequency) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum IviDigitizerReferenceOscillatorSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum IviDigitizerReferenceOscillatorSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalFrequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OutputEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OutputEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerReferenceOscillatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerReferenceOscillator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerReferenceOscillator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerReferenceOscillator * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerReferenceOscillator * This,
            /* [in] */ enum IviDigitizerReferenceOscillatorSourceEnum Source,
            /* [in] */ double Frequency);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviDigitizerReferenceOscillator * This,
            /* [retval][out] */ enum IviDigitizerReferenceOscillatorSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviDigitizerReferenceOscillator * This,
            /* [in] */ enum IviDigitizerReferenceOscillatorSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalFrequency )( 
            IIviDigitizerReferenceOscillator * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalFrequency )( 
            IIviDigitizerReferenceOscillator * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputEnabled )( 
            IIviDigitizerReferenceOscillator * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputEnabled )( 
            IIviDigitizerReferenceOscillator * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IIviDigitizerReferenceOscillatorVtbl;

    interface IIviDigitizerReferenceOscillator
    {
        CONST_VTBL struct IIviDigitizerReferenceOscillatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerReferenceOscillator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerReferenceOscillator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerReferenceOscillator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerReferenceOscillator_Configure(This,Source,Frequency)	\
    ( (This)->lpVtbl -> Configure(This,Source,Frequency) ) 

#define IIviDigitizerReferenceOscillator_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IIviDigitizerReferenceOscillator_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define IIviDigitizerReferenceOscillator_get_ExternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalFrequency(This,Val) ) 

#define IIviDigitizerReferenceOscillator_put_ExternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_ExternalFrequency(This,Val) ) 

#define IIviDigitizerReferenceOscillator_get_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_OutputEnabled(This,Val) ) 

#define IIviDigitizerReferenceOscillator_put_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_OutputEnabled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerReferenceOscillator_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerSampleClock_INTERFACE_DEFINED__
#define __IIviDigitizerSampleClock_INTERFACE_DEFINED__

/* interface IIviDigitizerSampleClock */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerSampleClock;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5421-a398-11d4-ba58-000064657374")
    IIviDigitizerSampleClock : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum IviDigitizerSampleClockSourceEnum Source,
            /* [in] */ double Frequency,
            /* [in] */ double Divider) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum IviDigitizerSampleClockSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum IviDigitizerSampleClockSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalFrequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OutputEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OutputEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalDivider( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalDivider( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerSampleClockVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerSampleClock * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerSampleClock * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerSampleClock * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerSampleClock * This,
            /* [in] */ enum IviDigitizerSampleClockSourceEnum Source,
            /* [in] */ double Frequency,
            /* [in] */ double Divider);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviDigitizerSampleClock * This,
            /* [retval][out] */ enum IviDigitizerSampleClockSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviDigitizerSampleClock * This,
            /* [in] */ enum IviDigitizerSampleClockSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalFrequency )( 
            IIviDigitizerSampleClock * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalFrequency )( 
            IIviDigitizerSampleClock * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputEnabled )( 
            IIviDigitizerSampleClock * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputEnabled )( 
            IIviDigitizerSampleClock * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalDivider )( 
            IIviDigitizerSampleClock * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalDivider )( 
            IIviDigitizerSampleClock * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviDigitizerSampleClockVtbl;

    interface IIviDigitizerSampleClock
    {
        CONST_VTBL struct IIviDigitizerSampleClockVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerSampleClock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerSampleClock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerSampleClock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerSampleClock_Configure(This,Source,Frequency,Divider)	\
    ( (This)->lpVtbl -> Configure(This,Source,Frequency,Divider) ) 

#define IIviDigitizerSampleClock_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IIviDigitizerSampleClock_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define IIviDigitizerSampleClock_get_ExternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalFrequency(This,Val) ) 

#define IIviDigitizerSampleClock_put_ExternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_ExternalFrequency(This,Val) ) 

#define IIviDigitizerSampleClock_get_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_OutputEnabled(This,Val) ) 

#define IIviDigitizerSampleClock_put_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_OutputEnabled(This,Val) ) 

#define IIviDigitizerSampleClock_get_ExternalDivider(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalDivider(This,Val) ) 

#define IIviDigitizerSampleClock_put_ExternalDivider(This,Val)	\
    ( (This)->lpVtbl -> put_ExternalDivider(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerSampleClock_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerTriggerEdge_INTERFACE_DEFINED__
#define __IIviDigitizerTriggerEdge_INTERFACE_DEFINED__

/* interface IIviDigitizerTriggerEdge */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerTriggerEdge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5424-a398-11d4-ba58-000064657374")
    IIviDigitizerTriggerEdge : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Level,
            /* [in] */ enum IviDigitizerTriggerSlopeEnum Slope) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ enum IviDigitizerTriggerSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ enum IviDigitizerTriggerSlopeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerTriggerEdgeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerTriggerEdge * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerTriggerEdge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerTriggerEdge * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerTriggerEdge * This,
            /* [in] */ double Level,
            /* [in] */ enum IviDigitizerTriggerSlopeEnum Slope);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviDigitizerTriggerEdge * This,
            /* [retval][out] */ enum IviDigitizerTriggerSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviDigitizerTriggerEdge * This,
            /* [in] */ enum IviDigitizerTriggerSlopeEnum Val);
        
        END_INTERFACE
    } IIviDigitizerTriggerEdgeVtbl;

    interface IIviDigitizerTriggerEdge
    {
        CONST_VTBL struct IIviDigitizerTriggerEdgeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerTriggerEdge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerTriggerEdge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerTriggerEdge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerTriggerEdge_Configure(This,Level,Slope)	\
    ( (This)->lpVtbl -> Configure(This,Level,Slope) ) 

#define IIviDigitizerTriggerEdge_get_Slope(This,Val)	\
    ( (This)->lpVtbl -> get_Slope(This,Val) ) 

#define IIviDigitizerTriggerEdge_put_Slope(This,Val)	\
    ( (This)->lpVtbl -> put_Slope(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerTriggerEdge_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerTriggerGlitch_INTERFACE_DEFINED__
#define __IIviDigitizerTriggerGlitch_INTERFACE_DEFINED__

/* interface IIviDigitizerTriggerGlitch */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerTriggerGlitch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5425-a398-11d4-ba58-000064657374")
    IIviDigitizerTriggerGlitch : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Level,
            /* [in] */ double Width,
            /* [in] */ enum IviDigitizerGlitchPolarityEnum Polarity,
            /* [in] */ enum IviDigitizerGlitchConditionEnum Condition) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ enum IviDigitizerGlitchConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum IviDigitizerGlitchConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum IviDigitizerGlitchPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum IviDigitizerGlitchPolarityEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerTriggerGlitchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerTriggerGlitch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerTriggerGlitch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerTriggerGlitch * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerTriggerGlitch * This,
            /* [in] */ double Level,
            /* [in] */ double Width,
            /* [in] */ enum IviDigitizerGlitchPolarityEnum Polarity,
            /* [in] */ enum IviDigitizerGlitchConditionEnum Condition);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IIviDigitizerTriggerGlitch * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IIviDigitizerTriggerGlitch * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IIviDigitizerTriggerGlitch * This,
            /* [retval][out] */ enum IviDigitizerGlitchConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            IIviDigitizerTriggerGlitch * This,
            /* [in] */ enum IviDigitizerGlitchConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviDigitizerTriggerGlitch * This,
            /* [retval][out] */ enum IviDigitizerGlitchPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviDigitizerTriggerGlitch * This,
            /* [in] */ enum IviDigitizerGlitchPolarityEnum Val);
        
        END_INTERFACE
    } IIviDigitizerTriggerGlitchVtbl;

    interface IIviDigitizerTriggerGlitch
    {
        CONST_VTBL struct IIviDigitizerTriggerGlitchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerTriggerGlitch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerTriggerGlitch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerTriggerGlitch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerTriggerGlitch_Configure(This,Level,Width,Polarity,Condition)	\
    ( (This)->lpVtbl -> Configure(This,Level,Width,Polarity,Condition) ) 

#define IIviDigitizerTriggerGlitch_get_Width(This,Val)	\
    ( (This)->lpVtbl -> get_Width(This,Val) ) 

#define IIviDigitizerTriggerGlitch_put_Width(This,Val)	\
    ( (This)->lpVtbl -> put_Width(This,Val) ) 

#define IIviDigitizerTriggerGlitch_get_Condition(This,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,Val) ) 

#define IIviDigitizerTriggerGlitch_put_Condition(This,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,Val) ) 

#define IIviDigitizerTriggerGlitch_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define IIviDigitizerTriggerGlitch_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerTriggerGlitch_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerTriggerRunt_INTERFACE_DEFINED__
#define __IIviDigitizerTriggerRunt_INTERFACE_DEFINED__

/* interface IIviDigitizerTriggerRunt */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerTriggerRunt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5426-a398-11d4-ba58-000064657374")
    IIviDigitizerTriggerRunt : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerRuntPolarityEnum Polarity) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum IviDigitizerRuntPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum IviDigitizerRuntPolarityEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdHigh( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdHigh( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdLow( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdLow( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerTriggerRuntVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerTriggerRunt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerTriggerRunt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerTriggerRunt * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerTriggerRunt * This,
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerRuntPolarityEnum Polarity);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviDigitizerTriggerRunt * This,
            /* [retval][out] */ enum IviDigitizerRuntPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviDigitizerTriggerRunt * This,
            /* [in] */ enum IviDigitizerRuntPolarityEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdHigh )( 
            IIviDigitizerTriggerRunt * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdHigh )( 
            IIviDigitizerTriggerRunt * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdLow )( 
            IIviDigitizerTriggerRunt * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdLow )( 
            IIviDigitizerTriggerRunt * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviDigitizerTriggerRuntVtbl;

    interface IIviDigitizerTriggerRunt
    {
        CONST_VTBL struct IIviDigitizerTriggerRuntVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerTriggerRunt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerTriggerRunt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerTriggerRunt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerTriggerRunt_Configure(This,ThresholdLow,ThresholdHigh,Polarity)	\
    ( (This)->lpVtbl -> Configure(This,ThresholdLow,ThresholdHigh,Polarity) ) 

#define IIviDigitizerTriggerRunt_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define IIviDigitizerTriggerRunt_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#define IIviDigitizerTriggerRunt_get_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdHigh(This,Val) ) 

#define IIviDigitizerTriggerRunt_put_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdHigh(This,Val) ) 

#define IIviDigitizerTriggerRunt_get_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdLow(This,Val) ) 

#define IIviDigitizerTriggerRunt_put_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdLow(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerTriggerRunt_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerTriggerTV_INTERFACE_DEFINED__
#define __IIviDigitizerTriggerTV_INTERFACE_DEFINED__

/* interface IIviDigitizerTriggerTV */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerTriggerTV;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5429-a398-11d4-ba58-000064657374")
    IIviDigitizerTriggerTV : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum IviDigitizerTVSignalFormatEnum SignalFormat,
            /* [in] */ enum IviDigitizerTVTriggerEventEnum Event,
            /* [in] */ enum IviDigitizerTVTriggerPolarityEnum Polarity) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum IviDigitizerTVTriggerPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum IviDigitizerTVTriggerPolarityEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Event( 
            /* [retval][out] */ enum IviDigitizerTVTriggerEventEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Event( 
            /* [in] */ enum IviDigitizerTVTriggerEventEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LineNumber( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LineNumber( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SignalFormat( 
            /* [retval][out] */ enum IviDigitizerTVSignalFormatEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SignalFormat( 
            /* [in] */ enum IviDigitizerTVSignalFormatEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerTriggerTVVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerTriggerTV * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerTriggerTV * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerTriggerTV * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerTriggerTV * This,
            /* [in] */ enum IviDigitizerTVSignalFormatEnum SignalFormat,
            /* [in] */ enum IviDigitizerTVTriggerEventEnum Event,
            /* [in] */ enum IviDigitizerTVTriggerPolarityEnum Polarity);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviDigitizerTriggerTV * This,
            /* [retval][out] */ enum IviDigitizerTVTriggerPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviDigitizerTriggerTV * This,
            /* [in] */ enum IviDigitizerTVTriggerPolarityEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Event )( 
            IIviDigitizerTriggerTV * This,
            /* [retval][out] */ enum IviDigitizerTVTriggerEventEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Event )( 
            IIviDigitizerTriggerTV * This,
            /* [in] */ enum IviDigitizerTVTriggerEventEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineNumber )( 
            IIviDigitizerTriggerTV * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineNumber )( 
            IIviDigitizerTriggerTV * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignalFormat )( 
            IIviDigitizerTriggerTV * This,
            /* [retval][out] */ enum IviDigitizerTVSignalFormatEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignalFormat )( 
            IIviDigitizerTriggerTV * This,
            /* [in] */ enum IviDigitizerTVSignalFormatEnum Val);
        
        END_INTERFACE
    } IIviDigitizerTriggerTVVtbl;

    interface IIviDigitizerTriggerTV
    {
        CONST_VTBL struct IIviDigitizerTriggerTVVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerTriggerTV_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerTriggerTV_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerTriggerTV_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerTriggerTV_Configure(This,SignalFormat,Event,Polarity)	\
    ( (This)->lpVtbl -> Configure(This,SignalFormat,Event,Polarity) ) 

#define IIviDigitizerTriggerTV_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define IIviDigitizerTriggerTV_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#define IIviDigitizerTriggerTV_get_Event(This,Val)	\
    ( (This)->lpVtbl -> get_Event(This,Val) ) 

#define IIviDigitizerTriggerTV_put_Event(This,Val)	\
    ( (This)->lpVtbl -> put_Event(This,Val) ) 

#define IIviDigitizerTriggerTV_get_LineNumber(This,Val)	\
    ( (This)->lpVtbl -> get_LineNumber(This,Val) ) 

#define IIviDigitizerTriggerTV_put_LineNumber(This,Val)	\
    ( (This)->lpVtbl -> put_LineNumber(This,Val) ) 

#define IIviDigitizerTriggerTV_get_SignalFormat(This,Val)	\
    ( (This)->lpVtbl -> get_SignalFormat(This,Val) ) 

#define IIviDigitizerTriggerTV_put_SignalFormat(This,Val)	\
    ( (This)->lpVtbl -> put_SignalFormat(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerTriggerTV_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerTriggerWidth_INTERFACE_DEFINED__
#define __IIviDigitizerTriggerWidth_INTERFACE_DEFINED__

/* interface IIviDigitizerTriggerWidth */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerTriggerWidth;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed542a-a398-11d4-ba58-000064657374")
    IIviDigitizerTriggerWidth : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Level,
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerWidthPolarityEnum Polarity,
            /* [in] */ enum IviDigitizerWidthConditionEnum Condition) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum IviDigitizerWidthPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum IviDigitizerWidthPolarityEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ enum IviDigitizerWidthConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum IviDigitizerWidthConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdHigh( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdHigh( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdLow( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdLow( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerTriggerWidthVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerTriggerWidth * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerTriggerWidth * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerTriggerWidth * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerTriggerWidth * This,
            /* [in] */ double Level,
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerWidthPolarityEnum Polarity,
            /* [in] */ enum IviDigitizerWidthConditionEnum Condition);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviDigitizerTriggerWidth * This,
            /* [retval][out] */ enum IviDigitizerWidthPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviDigitizerTriggerWidth * This,
            /* [in] */ enum IviDigitizerWidthPolarityEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IIviDigitizerTriggerWidth * This,
            /* [retval][out] */ enum IviDigitizerWidthConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            IIviDigitizerTriggerWidth * This,
            /* [in] */ enum IviDigitizerWidthConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdHigh )( 
            IIviDigitizerTriggerWidth * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdHigh )( 
            IIviDigitizerTriggerWidth * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdLow )( 
            IIviDigitizerTriggerWidth * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdLow )( 
            IIviDigitizerTriggerWidth * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviDigitizerTriggerWidthVtbl;

    interface IIviDigitizerTriggerWidth
    {
        CONST_VTBL struct IIviDigitizerTriggerWidthVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerTriggerWidth_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerTriggerWidth_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerTriggerWidth_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerTriggerWidth_Configure(This,Level,ThresholdLow,ThresholdHigh,Polarity,Condition)	\
    ( (This)->lpVtbl -> Configure(This,Level,ThresholdLow,ThresholdHigh,Polarity,Condition) ) 

#define IIviDigitizerTriggerWidth_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define IIviDigitizerTriggerWidth_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#define IIviDigitizerTriggerWidth_get_Condition(This,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,Val) ) 

#define IIviDigitizerTriggerWidth_put_Condition(This,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,Val) ) 

#define IIviDigitizerTriggerWidth_get_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdHigh(This,Val) ) 

#define IIviDigitizerTriggerWidth_put_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdHigh(This,Val) ) 

#define IIviDigitizerTriggerWidth_get_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdLow(This,Val) ) 

#define IIviDigitizerTriggerWidth_put_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdLow(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerTriggerWidth_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerTriggerWindow_INTERFACE_DEFINED__
#define __IIviDigitizerTriggerWindow_INTERFACE_DEFINED__

/* interface IIviDigitizerTriggerWindow */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerTriggerWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed542b-a398-11d4-ba58-000064657374")
    IIviDigitizerTriggerWindow : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerWindowConditionEnum Condition) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ enum IviDigitizerWindowConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum IviDigitizerWindowConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdHigh( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdHigh( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdLow( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdLow( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerTriggerWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerTriggerWindow * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerTriggerWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerTriggerWindow * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerTriggerWindow * This,
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerWindowConditionEnum Condition);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IIviDigitizerTriggerWindow * This,
            /* [retval][out] */ enum IviDigitizerWindowConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            IIviDigitizerTriggerWindow * This,
            /* [in] */ enum IviDigitizerWindowConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdHigh )( 
            IIviDigitizerTriggerWindow * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdHigh )( 
            IIviDigitizerTriggerWindow * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdLow )( 
            IIviDigitizerTriggerWindow * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdLow )( 
            IIviDigitizerTriggerWindow * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviDigitizerTriggerWindowVtbl;

    interface IIviDigitizerTriggerWindow
    {
        CONST_VTBL struct IIviDigitizerTriggerWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerTriggerWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerTriggerWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerTriggerWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerTriggerWindow_Configure(This,ThresholdLow,ThresholdHigh,Condition)	\
    ( (This)->lpVtbl -> Configure(This,ThresholdLow,ThresholdHigh,Condition) ) 

#define IIviDigitizerTriggerWindow_get_Condition(This,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,Val) ) 

#define IIviDigitizerTriggerWindow_put_Condition(This,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,Val) ) 

#define IIviDigitizerTriggerWindow_get_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdHigh(This,Val) ) 

#define IIviDigitizerTriggerWindow_put_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdHigh(This,Val) ) 

#define IIviDigitizerTriggerWindow_get_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdLow(This,Val) ) 

#define IIviDigitizerTriggerWindow_put_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdLow(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerTriggerWindow_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerChannelMeasurement_INTERFACE_DEFINED__
#define __IIviDigitizerChannelMeasurement_INTERFACE_DEFINED__

/* interface IIviDigitizerChannelMeasurement */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerChannelMeasurement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed541c-a398-11d4-ba58-000064657374")
    IIviDigitizerChannelMeasurement : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchWaveformReal64( 
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchWaveformInt8( 
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchWaveformInt16( 
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchWaveformInt32( 
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadWaveformInt16( 
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadWaveformInt32( 
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadWaveformInt8( 
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ReadWaveformReal64( 
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerChannelMeasurementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerChannelMeasurement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerChannelMeasurement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerChannelMeasurement * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformReal64 )( 
            IIviDigitizerChannelMeasurement * This,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformInt8 )( 
            IIviDigitizerChannelMeasurement * This,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformInt16 )( 
            IIviDigitizerChannelMeasurement * This,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformInt32 )( 
            IIviDigitizerChannelMeasurement * This,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadWaveformInt16 )( 
            IIviDigitizerChannelMeasurement * This,
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadWaveformInt32 )( 
            IIviDigitizerChannelMeasurement * This,
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadWaveformInt8 )( 
            IIviDigitizerChannelMeasurement * This,
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ReadWaveformReal64 )( 
            IIviDigitizerChannelMeasurement * This,
            /* [in] */ long MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualPoints,
            /* [out][in] */ __int64 *FirstValidPoint,
            /* [out][in] */ double *InitialXOffset,
            /* [out][in] */ double *InitialXTimeSeconds,
            /* [out][in] */ double *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement);
        
        END_INTERFACE
    } IIviDigitizerChannelMeasurementVtbl;

    interface IIviDigitizerChannelMeasurement
    {
        CONST_VTBL struct IIviDigitizerChannelMeasurementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerChannelMeasurement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerChannelMeasurement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerChannelMeasurement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerChannelMeasurement_FetchWaveformReal64(This,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement)	\
    ( (This)->lpVtbl -> FetchWaveformReal64(This,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement) ) 

#define IIviDigitizerChannelMeasurement_FetchWaveformInt8(This,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset)	\
    ( (This)->lpVtbl -> FetchWaveformInt8(This,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset) ) 

#define IIviDigitizerChannelMeasurement_FetchWaveformInt16(This,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset)	\
    ( (This)->lpVtbl -> FetchWaveformInt16(This,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset) ) 

#define IIviDigitizerChannelMeasurement_FetchWaveformInt32(This,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset)	\
    ( (This)->lpVtbl -> FetchWaveformInt32(This,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset) ) 

#define IIviDigitizerChannelMeasurement_ReadWaveformInt16(This,MaxTimeMilliseconds,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset)	\
    ( (This)->lpVtbl -> ReadWaveformInt16(This,MaxTimeMilliseconds,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset) ) 

#define IIviDigitizerChannelMeasurement_ReadWaveformInt32(This,MaxTimeMilliseconds,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset)	\
    ( (This)->lpVtbl -> ReadWaveformInt32(This,MaxTimeMilliseconds,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset) ) 

#define IIviDigitizerChannelMeasurement_ReadWaveformInt8(This,MaxTimeMilliseconds,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset)	\
    ( (This)->lpVtbl -> ReadWaveformInt8(This,MaxTimeMilliseconds,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset) ) 

#define IIviDigitizerChannelMeasurement_ReadWaveformReal64(This,MaxTimeMilliseconds,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement)	\
    ( (This)->lpVtbl -> ReadWaveformReal64(This,MaxTimeMilliseconds,WaveformArray,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerChannelMeasurement_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerArm_INTERFACE_DEFINED__
#define __IIviDigitizerArm_INTERFACE_DEFINED__

/* interface IIviDigitizerArm */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerArm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5410-a398-11d4-ba58-000064657374")
    IIviDigitizerArm : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SendSoftwareArm( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveSource( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ActiveSource( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Count( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MultiArm( 
            /* [retval][out] */ IIviDigitizerMultiArm **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Sources( 
            /* [retval][out] */ IIviDigitizerArmSources **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OutputEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OutputEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerArmVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerArm * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerArm * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerArm * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareArm )( 
            IIviDigitizerArm * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveSource )( 
            IIviDigitizerArm * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveSource )( 
            IIviDigitizerArm * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviDigitizerArm * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Count )( 
            IIviDigitizerArm * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultiArm )( 
            IIviDigitizerArm * This,
            /* [retval][out] */ IIviDigitizerMultiArm **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sources )( 
            IIviDigitizerArm * This,
            /* [retval][out] */ IIviDigitizerArmSources **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviDigitizerArm * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviDigitizerArm * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputEnabled )( 
            IIviDigitizerArm * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputEnabled )( 
            IIviDigitizerArm * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IIviDigitizerArmVtbl;

    interface IIviDigitizerArm
    {
        CONST_VTBL struct IIviDigitizerArmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerArm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerArm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerArm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerArm_SendSoftwareArm(This)	\
    ( (This)->lpVtbl -> SendSoftwareArm(This) ) 

#define IIviDigitizerArm_get_ActiveSource(This,Val)	\
    ( (This)->lpVtbl -> get_ActiveSource(This,Val) ) 

#define IIviDigitizerArm_put_ActiveSource(This,Val)	\
    ( (This)->lpVtbl -> put_ActiveSource(This,Val) ) 

#define IIviDigitizerArm_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IIviDigitizerArm_put_Count(This,Val)	\
    ( (This)->lpVtbl -> put_Count(This,Val) ) 

#define IIviDigitizerArm_get_MultiArm(This,Val)	\
    ( (This)->lpVtbl -> get_MultiArm(This,Val) ) 

#define IIviDigitizerArm_get_Sources(This,Val)	\
    ( (This)->lpVtbl -> get_Sources(This,Val) ) 

#define IIviDigitizerArm_get_Delay(This,Val)	\
    ( (This)->lpVtbl -> get_Delay(This,Val) ) 

#define IIviDigitizerArm_put_Delay(This,Val)	\
    ( (This)->lpVtbl -> put_Delay(This,Val) ) 

#define IIviDigitizerArm_get_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_OutputEnabled(This,Val) ) 

#define IIviDigitizerArm_put_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_OutputEnabled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerArm_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerArmEdge_INTERFACE_DEFINED__
#define __IIviDigitizerArmEdge_INTERFACE_DEFINED__

/* interface IIviDigitizerArmEdge */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerArmEdge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5411-a398-11d4-ba58-000064657374")
    IIviDigitizerArmEdge : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Level,
            /* [in] */ enum IviDigitizerTriggerSlopeEnum Slope) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ enum IviDigitizerTriggerSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ enum IviDigitizerTriggerSlopeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerArmEdgeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerArmEdge * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerArmEdge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerArmEdge * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerArmEdge * This,
            /* [in] */ double Level,
            /* [in] */ enum IviDigitizerTriggerSlopeEnum Slope);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviDigitizerArmEdge * This,
            /* [retval][out] */ enum IviDigitizerTriggerSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviDigitizerArmEdge * This,
            /* [in] */ enum IviDigitizerTriggerSlopeEnum Val);
        
        END_INTERFACE
    } IIviDigitizerArmEdgeVtbl;

    interface IIviDigitizerArmEdge
    {
        CONST_VTBL struct IIviDigitizerArmEdgeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerArmEdge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerArmEdge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerArmEdge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerArmEdge_Configure(This,Level,Slope)	\
    ( (This)->lpVtbl -> Configure(This,Level,Slope) ) 

#define IIviDigitizerArmEdge_get_Slope(This,Val)	\
    ( (This)->lpVtbl -> get_Slope(This,Val) ) 

#define IIviDigitizerArmEdge_put_Slope(This,Val)	\
    ( (This)->lpVtbl -> put_Slope(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerArmEdge_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerArmGlitch_INTERFACE_DEFINED__
#define __IIviDigitizerArmGlitch_INTERFACE_DEFINED__

/* interface IIviDigitizerArmGlitch */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerArmGlitch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5412-a398-11d4-ba58-000064657374")
    IIviDigitizerArmGlitch : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Level,
            /* [in] */ double Width,
            /* [in] */ enum IviDigitizerGlitchPolarityEnum Polarity,
            /* [in] */ enum IviDigitizerGlitchConditionEnum Condition) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ enum IviDigitizerGlitchConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum IviDigitizerGlitchConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum IviDigitizerGlitchPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum IviDigitizerGlitchPolarityEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerArmGlitchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerArmGlitch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerArmGlitch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerArmGlitch * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerArmGlitch * This,
            /* [in] */ double Level,
            /* [in] */ double Width,
            /* [in] */ enum IviDigitizerGlitchPolarityEnum Polarity,
            /* [in] */ enum IviDigitizerGlitchConditionEnum Condition);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IIviDigitizerArmGlitch * This,
            /* [retval][out] */ enum IviDigitizerGlitchConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            IIviDigitizerArmGlitch * This,
            /* [in] */ enum IviDigitizerGlitchConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IIviDigitizerArmGlitch * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IIviDigitizerArmGlitch * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviDigitizerArmGlitch * This,
            /* [retval][out] */ enum IviDigitizerGlitchPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviDigitizerArmGlitch * This,
            /* [in] */ enum IviDigitizerGlitchPolarityEnum Val);
        
        END_INTERFACE
    } IIviDigitizerArmGlitchVtbl;

    interface IIviDigitizerArmGlitch
    {
        CONST_VTBL struct IIviDigitizerArmGlitchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerArmGlitch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerArmGlitch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerArmGlitch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerArmGlitch_Configure(This,Level,Width,Polarity,Condition)	\
    ( (This)->lpVtbl -> Configure(This,Level,Width,Polarity,Condition) ) 

#define IIviDigitizerArmGlitch_get_Condition(This,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,Val) ) 

#define IIviDigitizerArmGlitch_put_Condition(This,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,Val) ) 

#define IIviDigitizerArmGlitch_get_Width(This,Val)	\
    ( (This)->lpVtbl -> get_Width(This,Val) ) 

#define IIviDigitizerArmGlitch_put_Width(This,Val)	\
    ( (This)->lpVtbl -> put_Width(This,Val) ) 

#define IIviDigitizerArmGlitch_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define IIviDigitizerArmGlitch_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerArmGlitch_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerArmRunt_INTERFACE_DEFINED__
#define __IIviDigitizerArmRunt_INTERFACE_DEFINED__

/* interface IIviDigitizerArmRunt */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerArmRunt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5413-a398-11d4-ba58-000064657374")
    IIviDigitizerArmRunt : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerRuntPolarityEnum Polarity) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum IviDigitizerRuntPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum IviDigitizerRuntPolarityEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdHigh( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdHigh( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdLow( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdLow( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerArmRuntVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerArmRunt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerArmRunt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerArmRunt * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerArmRunt * This,
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerRuntPolarityEnum Polarity);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviDigitizerArmRunt * This,
            /* [retval][out] */ enum IviDigitizerRuntPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviDigitizerArmRunt * This,
            /* [in] */ enum IviDigitizerRuntPolarityEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdHigh )( 
            IIviDigitizerArmRunt * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdHigh )( 
            IIviDigitizerArmRunt * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdLow )( 
            IIviDigitizerArmRunt * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdLow )( 
            IIviDigitizerArmRunt * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviDigitizerArmRuntVtbl;

    interface IIviDigitizerArmRunt
    {
        CONST_VTBL struct IIviDigitizerArmRuntVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerArmRunt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerArmRunt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerArmRunt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerArmRunt_Configure(This,ThresholdLow,ThresholdHigh,Polarity)	\
    ( (This)->lpVtbl -> Configure(This,ThresholdLow,ThresholdHigh,Polarity) ) 

#define IIviDigitizerArmRunt_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define IIviDigitizerArmRunt_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#define IIviDigitizerArmRunt_get_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdHigh(This,Val) ) 

#define IIviDigitizerArmRunt_put_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdHigh(This,Val) ) 

#define IIviDigitizerArmRunt_get_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdLow(This,Val) ) 

#define IIviDigitizerArmRunt_put_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdLow(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerArmRunt_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerArmTV_INTERFACE_DEFINED__
#define __IIviDigitizerArmTV_INTERFACE_DEFINED__

/* interface IIviDigitizerArmTV */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerArmTV;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5416-a398-11d4-ba58-000064657374")
    IIviDigitizerArmTV : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum IviDigitizerTVSignalFormatEnum SignalFormat,
            /* [in] */ enum IviDigitizerTVTriggerEventEnum Event,
            /* [in] */ enum IviDigitizerTVTriggerPolarityEnum Polarity) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Event( 
            /* [retval][out] */ enum IviDigitizerTVTriggerEventEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Event( 
            /* [in] */ enum IviDigitizerTVTriggerEventEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LineNumber( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LineNumber( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum IviDigitizerTVTriggerPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum IviDigitizerTVTriggerPolarityEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SignalFormat( 
            /* [retval][out] */ enum IviDigitizerTVSignalFormatEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SignalFormat( 
            /* [in] */ enum IviDigitizerTVSignalFormatEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerArmTVVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerArmTV * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerArmTV * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerArmTV * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerArmTV * This,
            /* [in] */ enum IviDigitizerTVSignalFormatEnum SignalFormat,
            /* [in] */ enum IviDigitizerTVTriggerEventEnum Event,
            /* [in] */ enum IviDigitizerTVTriggerPolarityEnum Polarity);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Event )( 
            IIviDigitizerArmTV * This,
            /* [retval][out] */ enum IviDigitizerTVTriggerEventEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Event )( 
            IIviDigitizerArmTV * This,
            /* [in] */ enum IviDigitizerTVTriggerEventEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineNumber )( 
            IIviDigitizerArmTV * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineNumber )( 
            IIviDigitizerArmTV * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviDigitizerArmTV * This,
            /* [retval][out] */ enum IviDigitizerTVTriggerPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviDigitizerArmTV * This,
            /* [in] */ enum IviDigitizerTVTriggerPolarityEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignalFormat )( 
            IIviDigitizerArmTV * This,
            /* [retval][out] */ enum IviDigitizerTVSignalFormatEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignalFormat )( 
            IIviDigitizerArmTV * This,
            /* [in] */ enum IviDigitizerTVSignalFormatEnum Val);
        
        END_INTERFACE
    } IIviDigitizerArmTVVtbl;

    interface IIviDigitizerArmTV
    {
        CONST_VTBL struct IIviDigitizerArmTVVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerArmTV_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerArmTV_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerArmTV_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerArmTV_Configure(This,SignalFormat,Event,Polarity)	\
    ( (This)->lpVtbl -> Configure(This,SignalFormat,Event,Polarity) ) 

#define IIviDigitizerArmTV_get_Event(This,Val)	\
    ( (This)->lpVtbl -> get_Event(This,Val) ) 

#define IIviDigitizerArmTV_put_Event(This,Val)	\
    ( (This)->lpVtbl -> put_Event(This,Val) ) 

#define IIviDigitizerArmTV_get_LineNumber(This,Val)	\
    ( (This)->lpVtbl -> get_LineNumber(This,Val) ) 

#define IIviDigitizerArmTV_put_LineNumber(This,Val)	\
    ( (This)->lpVtbl -> put_LineNumber(This,Val) ) 

#define IIviDigitizerArmTV_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define IIviDigitizerArmTV_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#define IIviDigitizerArmTV_get_SignalFormat(This,Val)	\
    ( (This)->lpVtbl -> get_SignalFormat(This,Val) ) 

#define IIviDigitizerArmTV_put_SignalFormat(This,Val)	\
    ( (This)->lpVtbl -> put_SignalFormat(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerArmTV_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerArmWidth_INTERFACE_DEFINED__
#define __IIviDigitizerArmWidth_INTERFACE_DEFINED__

/* interface IIviDigitizerArmWidth */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerArmWidth;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5417-a398-11d4-ba58-000064657374")
    IIviDigitizerArmWidth : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Level,
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerWidthPolarityEnum Polarity,
            /* [in] */ enum IviDigitizerWidthConditionEnum Condition) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ enum IviDigitizerWidthConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum IviDigitizerWidthConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ enum IviDigitizerWidthPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ enum IviDigitizerWidthPolarityEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdHigh( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdHigh( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdLow( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdLow( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerArmWidthVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerArmWidth * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerArmWidth * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerArmWidth * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerArmWidth * This,
            /* [in] */ double Level,
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerWidthPolarityEnum Polarity,
            /* [in] */ enum IviDigitizerWidthConditionEnum Condition);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IIviDigitizerArmWidth * This,
            /* [retval][out] */ enum IviDigitizerWidthConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            IIviDigitizerArmWidth * This,
            /* [in] */ enum IviDigitizerWidthConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviDigitizerArmWidth * This,
            /* [retval][out] */ enum IviDigitizerWidthPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviDigitizerArmWidth * This,
            /* [in] */ enum IviDigitizerWidthPolarityEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdHigh )( 
            IIviDigitizerArmWidth * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdHigh )( 
            IIviDigitizerArmWidth * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdLow )( 
            IIviDigitizerArmWidth * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdLow )( 
            IIviDigitizerArmWidth * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviDigitizerArmWidthVtbl;

    interface IIviDigitizerArmWidth
    {
        CONST_VTBL struct IIviDigitizerArmWidthVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerArmWidth_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerArmWidth_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerArmWidth_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerArmWidth_Configure(This,Level,ThresholdLow,ThresholdHigh,Polarity,Condition)	\
    ( (This)->lpVtbl -> Configure(This,Level,ThresholdLow,ThresholdHigh,Polarity,Condition) ) 

#define IIviDigitizerArmWidth_get_Condition(This,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,Val) ) 

#define IIviDigitizerArmWidth_put_Condition(This,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,Val) ) 

#define IIviDigitizerArmWidth_get_Polarity(This,Val)	\
    ( (This)->lpVtbl -> get_Polarity(This,Val) ) 

#define IIviDigitizerArmWidth_put_Polarity(This,Val)	\
    ( (This)->lpVtbl -> put_Polarity(This,Val) ) 

#define IIviDigitizerArmWidth_get_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdHigh(This,Val) ) 

#define IIviDigitizerArmWidth_put_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdHigh(This,Val) ) 

#define IIviDigitizerArmWidth_get_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdLow(This,Val) ) 

#define IIviDigitizerArmWidth_put_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdLow(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerArmWidth_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerArmWindow_INTERFACE_DEFINED__
#define __IIviDigitizerArmWindow_INTERFACE_DEFINED__

/* interface IIviDigitizerArmWindow */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerArmWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5418-a398-11d4-ba58-000064657374")
    IIviDigitizerArmWindow : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerWindowConditionEnum Condition) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ enum IviDigitizerWindowConditionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ enum IviDigitizerWindowConditionEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdHigh( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdHigh( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdLow( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdLow( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerArmWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerArmWindow * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerArmWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerArmWindow * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerArmWindow * This,
            /* [in] */ double ThresholdLow,
            /* [in] */ double ThresholdHigh,
            /* [in] */ enum IviDigitizerWindowConditionEnum Condition);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IIviDigitizerArmWindow * This,
            /* [retval][out] */ enum IviDigitizerWindowConditionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            IIviDigitizerArmWindow * This,
            /* [in] */ enum IviDigitizerWindowConditionEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdHigh )( 
            IIviDigitizerArmWindow * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdHigh )( 
            IIviDigitizerArmWindow * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdLow )( 
            IIviDigitizerArmWindow * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdLow )( 
            IIviDigitizerArmWindow * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviDigitizerArmWindowVtbl;

    interface IIviDigitizerArmWindow
    {
        CONST_VTBL struct IIviDigitizerArmWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerArmWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerArmWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerArmWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerArmWindow_Configure(This,ThresholdLow,ThresholdHigh,Condition)	\
    ( (This)->lpVtbl -> Configure(This,ThresholdLow,ThresholdHigh,Condition) ) 

#define IIviDigitizerArmWindow_get_Condition(This,Val)	\
    ( (This)->lpVtbl -> get_Condition(This,Val) ) 

#define IIviDigitizerArmWindow_put_Condition(This,Val)	\
    ( (This)->lpVtbl -> put_Condition(This,Val) ) 

#define IIviDigitizerArmWindow_get_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdHigh(This,Val) ) 

#define IIviDigitizerArmWindow_put_ThresholdHigh(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdHigh(This,Val) ) 

#define IIviDigitizerArmWindow_get_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> get_ThresholdLow(This,Val) ) 

#define IIviDigitizerArmWindow_put_ThresholdLow(This,Val)	\
    ( (This)->lpVtbl -> put_ThresholdLow(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerArmWindow_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerMultiArm_INTERFACE_DEFINED__
#define __IIviDigitizerMultiArm_INTERFACE_DEFINED__

/* interface IIviDigitizerMultiArm */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerMultiArm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed541e-a398-11d4-ba58-000064657374")
    IIviDigitizerMultiArm : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR SourceList,
            /* [in] */ enum IviDigitizerArmSourceOperatorEnum Operator) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SourceList( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SourceList( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SourceOperator( 
            /* [retval][out] */ enum IviDigitizerArmSourceOperatorEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SourceOperator( 
            /* [in] */ enum IviDigitizerArmSourceOperatorEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerMultiArmVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerMultiArm * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerMultiArm * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerMultiArm * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerMultiArm * This,
            /* [in] */ BSTR SourceList,
            /* [in] */ enum IviDigitizerArmSourceOperatorEnum Operator);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceList )( 
            IIviDigitizerMultiArm * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceList )( 
            IIviDigitizerMultiArm * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceOperator )( 
            IIviDigitizerMultiArm * This,
            /* [retval][out] */ enum IviDigitizerArmSourceOperatorEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceOperator )( 
            IIviDigitizerMultiArm * This,
            /* [in] */ enum IviDigitizerArmSourceOperatorEnum Val);
        
        END_INTERFACE
    } IIviDigitizerMultiArmVtbl;

    interface IIviDigitizerMultiArm
    {
        CONST_VTBL struct IIviDigitizerMultiArmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerMultiArm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerMultiArm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerMultiArm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerMultiArm_Configure(This,SourceList,Operator)	\
    ( (This)->lpVtbl -> Configure(This,SourceList,Operator) ) 

#define IIviDigitizerMultiArm_get_SourceList(This,Val)	\
    ( (This)->lpVtbl -> get_SourceList(This,Val) ) 

#define IIviDigitizerMultiArm_put_SourceList(This,Val)	\
    ( (This)->lpVtbl -> put_SourceList(This,Val) ) 

#define IIviDigitizerMultiArm_get_SourceOperator(This,Val)	\
    ( (This)->lpVtbl -> get_SourceOperator(This,Val) ) 

#define IIviDigitizerMultiArm_put_SourceOperator(This,Val)	\
    ( (This)->lpVtbl -> put_SourceOperator(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerMultiArm_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerMultiTrigger_INTERFACE_DEFINED__
#define __IIviDigitizerMultiTrigger_INTERFACE_DEFINED__

/* interface IIviDigitizerMultiTrigger */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerMultiTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed541f-a398-11d4-ba58-000064657374")
    IIviDigitizerMultiTrigger : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR SourceList,
            /* [in] */ enum IviDigitizerTriggerSourceOperatorEnum Operator) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SourceList( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SourceList( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SourceOperator( 
            /* [retval][out] */ enum IviDigitizerTriggerSourceOperatorEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SourceOperator( 
            /* [in] */ enum IviDigitizerTriggerSourceOperatorEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerMultiTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerMultiTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerMultiTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerMultiTrigger * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerMultiTrigger * This,
            /* [in] */ BSTR SourceList,
            /* [in] */ enum IviDigitizerTriggerSourceOperatorEnum Operator);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceList )( 
            IIviDigitizerMultiTrigger * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceList )( 
            IIviDigitizerMultiTrigger * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceOperator )( 
            IIviDigitizerMultiTrigger * This,
            /* [retval][out] */ enum IviDigitizerTriggerSourceOperatorEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceOperator )( 
            IIviDigitizerMultiTrigger * This,
            /* [in] */ enum IviDigitizerTriggerSourceOperatorEnum Val);
        
        END_INTERFACE
    } IIviDigitizerMultiTriggerVtbl;

    interface IIviDigitizerMultiTrigger
    {
        CONST_VTBL struct IIviDigitizerMultiTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerMultiTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerMultiTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerMultiTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerMultiTrigger_Configure(This,SourceList,Operator)	\
    ( (This)->lpVtbl -> Configure(This,SourceList,Operator) ) 

#define IIviDigitizerMultiTrigger_get_SourceList(This,Val)	\
    ( (This)->lpVtbl -> get_SourceList(This,Val) ) 

#define IIviDigitizerMultiTrigger_put_SourceList(This,Val)	\
    ( (This)->lpVtbl -> put_SourceList(This,Val) ) 

#define IIviDigitizerMultiTrigger_get_SourceOperator(This,Val)	\
    ( (This)->lpVtbl -> get_SourceOperator(This,Val) ) 

#define IIviDigitizerMultiTrigger_put_SourceOperator(This,Val)	\
    ( (This)->lpVtbl -> put_SourceOperator(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerMultiTrigger_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerTriggerSource_INTERFACE_DEFINED__
#define __IIviDigitizerTriggerSource_INTERFACE_DEFINED__

/* interface IIviDigitizerTriggerSource */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerTriggerSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5427-a398-11d4-ba58-000064657374")
    IIviDigitizerTriggerSource : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Coupling( 
            /* [retval][out] */ enum IviDigitizerTriggerCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Coupling( 
            /* [in] */ enum IviDigitizerTriggerCouplingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Hysteresis( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Hysteresis( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum IviDigitizerTriggerTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum IviDigitizerTriggerTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Edge( 
            /* [retval][out] */ IIviDigitizerTriggerEdge **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Glitch( 
            /* [retval][out] */ IIviDigitizerTriggerGlitch **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Runt( 
            /* [retval][out] */ IIviDigitizerTriggerRunt **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TV( 
            /* [retval][out] */ IIviDigitizerTriggerTV **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ IIviDigitizerTriggerWidth **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Window( 
            /* [retval][out] */ IIviDigitizerTriggerWindow **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerTriggerSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerTriggerSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerTriggerSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerTriggerSource * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coupling )( 
            IIviDigitizerTriggerSource * This,
            /* [retval][out] */ enum IviDigitizerTriggerCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Coupling )( 
            IIviDigitizerTriggerSource * This,
            /* [in] */ enum IviDigitizerTriggerCouplingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hysteresis )( 
            IIviDigitizerTriggerSource * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Hysteresis )( 
            IIviDigitizerTriggerSource * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviDigitizerTriggerSource * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviDigitizerTriggerSource * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IIviDigitizerTriggerSource * This,
            /* [retval][out] */ enum IviDigitizerTriggerTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IIviDigitizerTriggerSource * This,
            /* [in] */ enum IviDigitizerTriggerTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Edge )( 
            IIviDigitizerTriggerSource * This,
            /* [retval][out] */ IIviDigitizerTriggerEdge **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Glitch )( 
            IIviDigitizerTriggerSource * This,
            /* [retval][out] */ IIviDigitizerTriggerGlitch **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Runt )( 
            IIviDigitizerTriggerSource * This,
            /* [retval][out] */ IIviDigitizerTriggerRunt **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TV )( 
            IIviDigitizerTriggerSource * This,
            /* [retval][out] */ IIviDigitizerTriggerTV **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IIviDigitizerTriggerSource * This,
            /* [retval][out] */ IIviDigitizerTriggerWidth **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Window )( 
            IIviDigitizerTriggerSource * This,
            /* [retval][out] */ IIviDigitizerTriggerWindow **Val);
        
        END_INTERFACE
    } IIviDigitizerTriggerSourceVtbl;

    interface IIviDigitizerTriggerSource
    {
        CONST_VTBL struct IIviDigitizerTriggerSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerTriggerSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerTriggerSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerTriggerSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerTriggerSource_get_Coupling(This,Val)	\
    ( (This)->lpVtbl -> get_Coupling(This,Val) ) 

#define IIviDigitizerTriggerSource_put_Coupling(This,Val)	\
    ( (This)->lpVtbl -> put_Coupling(This,Val) ) 

#define IIviDigitizerTriggerSource_get_Hysteresis(This,Val)	\
    ( (This)->lpVtbl -> get_Hysteresis(This,Val) ) 

#define IIviDigitizerTriggerSource_put_Hysteresis(This,Val)	\
    ( (This)->lpVtbl -> put_Hysteresis(This,Val) ) 

#define IIviDigitizerTriggerSource_get_Level(This,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Val) ) 

#define IIviDigitizerTriggerSource_put_Level(This,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Val) ) 

#define IIviDigitizerTriggerSource_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define IIviDigitizerTriggerSource_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#define IIviDigitizerTriggerSource_get_Edge(This,Val)	\
    ( (This)->lpVtbl -> get_Edge(This,Val) ) 

#define IIviDigitizerTriggerSource_get_Glitch(This,Val)	\
    ( (This)->lpVtbl -> get_Glitch(This,Val) ) 

#define IIviDigitizerTriggerSource_get_Runt(This,Val)	\
    ( (This)->lpVtbl -> get_Runt(This,Val) ) 

#define IIviDigitizerTriggerSource_get_TV(This,Val)	\
    ( (This)->lpVtbl -> get_TV(This,Val) ) 

#define IIviDigitizerTriggerSource_get_Width(This,Val)	\
    ( (This)->lpVtbl -> get_Width(This,Val) ) 

#define IIviDigitizerTriggerSource_get_Window(This,Val)	\
    ( (This)->lpVtbl -> get_Window(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerTriggerSource_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerTriggerSources_INTERFACE_DEFINED__
#define __IIviDigitizerTriggerSources_INTERFACE_DEFINED__

/* interface IIviDigitizerTriggerSources */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerTriggerSources;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5428-a398-11d4-ba58-000064657374")
    IIviDigitizerTriggerSources : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviDigitizerTriggerSource **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerTriggerSourcesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerTriggerSources * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerTriggerSources * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerTriggerSources * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviDigitizerTriggerSources * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviDigitizerTriggerSources * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviDigitizerTriggerSource **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviDigitizerTriggerSources * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } IIviDigitizerTriggerSourcesVtbl;

    interface IIviDigitizerTriggerSources
    {
        CONST_VTBL struct IIviDigitizerTriggerSourcesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerTriggerSources_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerTriggerSources_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerTriggerSources_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerTriggerSources_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IIviDigitizerTriggerSources_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#define IIviDigitizerTriggerSources_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerTriggerSources_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerArmSource_INTERFACE_DEFINED__
#define __IIviDigitizerArmSource_INTERFACE_DEFINED__

/* interface IIviDigitizerArmSource */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerArmSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5414-a398-11d4-ba58-000064657374")
    IIviDigitizerArmSource : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Coupling( 
            /* [retval][out] */ enum IviDigitizerTriggerCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Coupling( 
            /* [in] */ enum IviDigitizerTriggerCouplingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Hysteresis( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Hysteresis( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum IviDigitizerArmTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum IviDigitizerArmTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Edge( 
            /* [retval][out] */ IIviDigitizerArmEdge **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Glitch( 
            /* [retval][out] */ IIviDigitizerArmGlitch **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Runt( 
            /* [retval][out] */ IIviDigitizerArmRunt **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TV( 
            /* [retval][out] */ IIviDigitizerArmTV **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ IIviDigitizerArmWidth **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Window( 
            /* [retval][out] */ IIviDigitizerArmWindow **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerArmSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerArmSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerArmSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerArmSource * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coupling )( 
            IIviDigitizerArmSource * This,
            /* [retval][out] */ enum IviDigitizerTriggerCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Coupling )( 
            IIviDigitizerArmSource * This,
            /* [in] */ enum IviDigitizerTriggerCouplingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hysteresis )( 
            IIviDigitizerArmSource * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Hysteresis )( 
            IIviDigitizerArmSource * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviDigitizerArmSource * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviDigitizerArmSource * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IIviDigitizerArmSource * This,
            /* [retval][out] */ enum IviDigitizerArmTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IIviDigitizerArmSource * This,
            /* [in] */ enum IviDigitizerArmTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Edge )( 
            IIviDigitizerArmSource * This,
            /* [retval][out] */ IIviDigitizerArmEdge **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Glitch )( 
            IIviDigitizerArmSource * This,
            /* [retval][out] */ IIviDigitizerArmGlitch **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Runt )( 
            IIviDigitizerArmSource * This,
            /* [retval][out] */ IIviDigitizerArmRunt **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TV )( 
            IIviDigitizerArmSource * This,
            /* [retval][out] */ IIviDigitizerArmTV **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IIviDigitizerArmSource * This,
            /* [retval][out] */ IIviDigitizerArmWidth **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Window )( 
            IIviDigitizerArmSource * This,
            /* [retval][out] */ IIviDigitizerArmWindow **Val);
        
        END_INTERFACE
    } IIviDigitizerArmSourceVtbl;

    interface IIviDigitizerArmSource
    {
        CONST_VTBL struct IIviDigitizerArmSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerArmSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerArmSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerArmSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerArmSource_get_Coupling(This,Val)	\
    ( (This)->lpVtbl -> get_Coupling(This,Val) ) 

#define IIviDigitizerArmSource_put_Coupling(This,Val)	\
    ( (This)->lpVtbl -> put_Coupling(This,Val) ) 

#define IIviDigitizerArmSource_get_Hysteresis(This,Val)	\
    ( (This)->lpVtbl -> get_Hysteresis(This,Val) ) 

#define IIviDigitizerArmSource_put_Hysteresis(This,Val)	\
    ( (This)->lpVtbl -> put_Hysteresis(This,Val) ) 

#define IIviDigitizerArmSource_get_Level(This,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Val) ) 

#define IIviDigitizerArmSource_put_Level(This,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Val) ) 

#define IIviDigitizerArmSource_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define IIviDigitizerArmSource_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#define IIviDigitizerArmSource_get_Edge(This,Val)	\
    ( (This)->lpVtbl -> get_Edge(This,Val) ) 

#define IIviDigitizerArmSource_get_Glitch(This,Val)	\
    ( (This)->lpVtbl -> get_Glitch(This,Val) ) 

#define IIviDigitizerArmSource_get_Runt(This,Val)	\
    ( (This)->lpVtbl -> get_Runt(This,Val) ) 

#define IIviDigitizerArmSource_get_TV(This,Val)	\
    ( (This)->lpVtbl -> get_TV(This,Val) ) 

#define IIviDigitizerArmSource_get_Width(This,Val)	\
    ( (This)->lpVtbl -> get_Width(This,Val) ) 

#define IIviDigitizerArmSource_get_Window(This,Val)	\
    ( (This)->lpVtbl -> get_Window(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerArmSource_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerArmSources_INTERFACE_DEFINED__
#define __IIviDigitizerArmSources_INTERFACE_DEFINED__

/* interface IIviDigitizerArmSources */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerArmSources;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5415-a398-11d4-ba58-000064657374")
    IIviDigitizerArmSources : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviDigitizerArmSource **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerArmSourcesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerArmSources * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerArmSources * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerArmSources * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviDigitizerArmSources * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviDigitizerArmSources * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviDigitizerArmSource **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviDigitizerArmSources * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } IIviDigitizerArmSourcesVtbl;

    interface IIviDigitizerArmSources
    {
        CONST_VTBL struct IIviDigitizerArmSourcesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerArmSources_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerArmSources_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerArmSources_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerArmSources_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IIviDigitizerArmSources_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#define IIviDigitizerArmSources_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerArmSources_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerChannelDownconversion_INTERFACE_DEFINED__
#define __IIviDigitizerChannelDownconversion_INTERFACE_DEFINED__

/* interface IIviDigitizerChannelDownconversion */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerChannelDownconversion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed542c-a398-11d4-ba58-000064657374")
    IIviDigitizerChannelDownconversion : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ double CenterFrequency) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CenterFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CenterFrequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IQInterleaved( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_IQInterleaved( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerChannelDownconversionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerChannelDownconversion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerChannelDownconversion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerChannelDownconversion * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDigitizerChannelDownconversion * This,
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ double CenterFrequency);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviDigitizerChannelDownconversion * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviDigitizerChannelDownconversion * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CenterFrequency )( 
            IIviDigitizerChannelDownconversion * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CenterFrequency )( 
            IIviDigitizerChannelDownconversion * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IQInterleaved )( 
            IIviDigitizerChannelDownconversion * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IQInterleaved )( 
            IIviDigitizerChannelDownconversion * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IIviDigitizerChannelDownconversionVtbl;

    interface IIviDigitizerChannelDownconversion
    {
        CONST_VTBL struct IIviDigitizerChannelDownconversionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerChannelDownconversion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerChannelDownconversion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerChannelDownconversion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerChannelDownconversion_Configure(This,Enabled,CenterFrequency)	\
    ( (This)->lpVtbl -> Configure(This,Enabled,CenterFrequency) ) 

#define IIviDigitizerChannelDownconversion_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviDigitizerChannelDownconversion_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviDigitizerChannelDownconversion_get_CenterFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_CenterFrequency(This,Val) ) 

#define IIviDigitizerChannelDownconversion_put_CenterFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_CenterFrequency(This,Val) ) 

#define IIviDigitizerChannelDownconversion_get_IQInterleaved(This,Val)	\
    ( (This)->lpVtbl -> get_IQInterleaved(This,Val) ) 

#define IIviDigitizerChannelDownconversion_put_IQInterleaved(This,Val)	\
    ( (This)->lpVtbl -> put_IQInterleaved(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerChannelDownconversion_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerAcquisitionStatus_INTERFACE_DEFINED__
#define __IIviDigitizerAcquisitionStatus_INTERFACE_DEFINED__

/* interface IIviDigitizerAcquisitionStatus */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerAcquisitionStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed542e-a398-11d4-ba58-000064657374")
    IIviDigitizerAcquisitionStatus : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IsIdle( 
            /* [retval][out] */ enum IviDigitizerAcquisitionStatusResultEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IsMeasuring( 
            /* [retval][out] */ enum IviDigitizerAcquisitionStatusResultEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IsWaitingForArm( 
            /* [retval][out] */ enum IviDigitizerAcquisitionStatusResultEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IsWaitingForTrigger( 
            /* [retval][out] */ enum IviDigitizerAcquisitionStatusResultEnum *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerAcquisitionStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerAcquisitionStatus * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerAcquisitionStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerAcquisitionStatus * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsIdle )( 
            IIviDigitizerAcquisitionStatus * This,
            /* [retval][out] */ enum IviDigitizerAcquisitionStatusResultEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsMeasuring )( 
            IIviDigitizerAcquisitionStatus * This,
            /* [retval][out] */ enum IviDigitizerAcquisitionStatusResultEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWaitingForArm )( 
            IIviDigitizerAcquisitionStatus * This,
            /* [retval][out] */ enum IviDigitizerAcquisitionStatusResultEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWaitingForTrigger )( 
            IIviDigitizerAcquisitionStatus * This,
            /* [retval][out] */ enum IviDigitizerAcquisitionStatusResultEnum *Val);
        
        END_INTERFACE
    } IIviDigitizerAcquisitionStatusVtbl;

    interface IIviDigitizerAcquisitionStatus
    {
        CONST_VTBL struct IIviDigitizerAcquisitionStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerAcquisitionStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerAcquisitionStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerAcquisitionStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerAcquisitionStatus_get_IsIdle(This,Val)	\
    ( (This)->lpVtbl -> get_IsIdle(This,Val) ) 

#define IIviDigitizerAcquisitionStatus_get_IsMeasuring(This,Val)	\
    ( (This)->lpVtbl -> get_IsMeasuring(This,Val) ) 

#define IIviDigitizerAcquisitionStatus_get_IsWaitingForArm(This,Val)	\
    ( (This)->lpVtbl -> get_IsWaitingForArm(This,Val) ) 

#define IIviDigitizerAcquisitionStatus_get_IsWaitingForTrigger(This,Val)	\
    ( (This)->lpVtbl -> get_IsWaitingForTrigger(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerAcquisitionStatus_INTERFACE_DEFINED__ */


#ifndef __IIviDigitizerChannelMultiRecordMeasurement_INTERFACE_DEFINED__
#define __IIviDigitizerChannelMultiRecordMeasurement_INTERFACE_DEFINED__

/* interface IIviDigitizerChannelMultiRecordMeasurement */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDigitizerChannelMultiRecordMeasurement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed542d-a398-11d4-ba58-000064657374")
    IIviDigitizerChannelMultiRecordMeasurement : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchMultiRecordWaveformInt16( 
            /* [in] */ __int64 FirstRecord,
            /* [in] */ __int64 NumRecords,
            /* [in] */ __int64 OffsetWithinRecord,
            /* [in] */ __int64 NumPointsPerRecord,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualRecords,
            /* [out][in] */ SAFEARRAY * *ActualPoints,
            /* [out][in] */ SAFEARRAY * *FirstValidPoint,
            /* [out][in] */ SAFEARRAY * *InitialXOffset,
            /* [out][in] */ SAFEARRAY * *InitialXTimeSeconds,
            /* [out][in] */ SAFEARRAY * *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchMultiRecordWaveformInt8( 
            /* [in] */ __int64 FirstRecord,
            /* [in] */ __int64 NumRecords,
            /* [in] */ __int64 OffsetWithinRecord,
            /* [in] */ __int64 NumPointsPerRecord,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualRecords,
            /* [out][in] */ SAFEARRAY * *ActualPoints,
            /* [out][in] */ SAFEARRAY * *FirstValidPoint,
            /* [out][in] */ SAFEARRAY * *InitialXOffset,
            /* [out][in] */ SAFEARRAY * *InitialXTimeSeconds,
            /* [out][in] */ SAFEARRAY * *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchMultiRecordWaveformInt32( 
            /* [in] */ __int64 FirstRecord,
            /* [in] */ __int64 NumRecords,
            /* [in] */ __int64 OffsetWithinRecord,
            /* [in] */ __int64 NumPointsPerRecord,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualRecords,
            /* [out][in] */ SAFEARRAY * *ActualPoints,
            /* [out][in] */ SAFEARRAY * *FirstValidPoint,
            /* [out][in] */ SAFEARRAY * *InitialXOffset,
            /* [out][in] */ SAFEARRAY * *InitialXTimeSeconds,
            /* [out][in] */ SAFEARRAY * *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchMultiRecordWaveformReal64( 
            /* [in] */ __int64 FirstRecord,
            /* [in] */ __int64 NumRecords,
            /* [in] */ __int64 OffsetWithinRecord,
            /* [in] */ __int64 NumPointsPerRecord,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualRecords,
            /* [out][in] */ SAFEARRAY * *ActualPoints,
            /* [out][in] */ SAFEARRAY * *FirstValidPoint,
            /* [out][in] */ SAFEARRAY * *InitialXOffset,
            /* [out][in] */ SAFEARRAY * *InitialXTimeSeconds,
            /* [out][in] */ SAFEARRAY * *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDigitizerChannelMultiRecordMeasurementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDigitizerChannelMultiRecordMeasurement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDigitizerChannelMultiRecordMeasurement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDigitizerChannelMultiRecordMeasurement * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchMultiRecordWaveformInt16 )( 
            IIviDigitizerChannelMultiRecordMeasurement * This,
            /* [in] */ __int64 FirstRecord,
            /* [in] */ __int64 NumRecords,
            /* [in] */ __int64 OffsetWithinRecord,
            /* [in] */ __int64 NumPointsPerRecord,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualRecords,
            /* [out][in] */ SAFEARRAY * *ActualPoints,
            /* [out][in] */ SAFEARRAY * *FirstValidPoint,
            /* [out][in] */ SAFEARRAY * *InitialXOffset,
            /* [out][in] */ SAFEARRAY * *InitialXTimeSeconds,
            /* [out][in] */ SAFEARRAY * *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchMultiRecordWaveformInt8 )( 
            IIviDigitizerChannelMultiRecordMeasurement * This,
            /* [in] */ __int64 FirstRecord,
            /* [in] */ __int64 NumRecords,
            /* [in] */ __int64 OffsetWithinRecord,
            /* [in] */ __int64 NumPointsPerRecord,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualRecords,
            /* [out][in] */ SAFEARRAY * *ActualPoints,
            /* [out][in] */ SAFEARRAY * *FirstValidPoint,
            /* [out][in] */ SAFEARRAY * *InitialXOffset,
            /* [out][in] */ SAFEARRAY * *InitialXTimeSeconds,
            /* [out][in] */ SAFEARRAY * *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchMultiRecordWaveformInt32 )( 
            IIviDigitizerChannelMultiRecordMeasurement * This,
            /* [in] */ __int64 FirstRecord,
            /* [in] */ __int64 NumRecords,
            /* [in] */ __int64 OffsetWithinRecord,
            /* [in] */ __int64 NumPointsPerRecord,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualRecords,
            /* [out][in] */ SAFEARRAY * *ActualPoints,
            /* [out][in] */ SAFEARRAY * *FirstValidPoint,
            /* [out][in] */ SAFEARRAY * *InitialXOffset,
            /* [out][in] */ SAFEARRAY * *InitialXTimeSeconds,
            /* [out][in] */ SAFEARRAY * *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement,
            /* [out][in] */ double *ScaleFactor,
            /* [out][in] */ double *ScaleOffset);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchMultiRecordWaveformReal64 )( 
            IIviDigitizerChannelMultiRecordMeasurement * This,
            /* [in] */ __int64 FirstRecord,
            /* [in] */ __int64 NumRecords,
            /* [in] */ __int64 OffsetWithinRecord,
            /* [in] */ __int64 NumPointsPerRecord,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ __int64 *ActualRecords,
            /* [out][in] */ SAFEARRAY * *ActualPoints,
            /* [out][in] */ SAFEARRAY * *FirstValidPoint,
            /* [out][in] */ SAFEARRAY * *InitialXOffset,
            /* [out][in] */ SAFEARRAY * *InitialXTimeSeconds,
            /* [out][in] */ SAFEARRAY * *InitialXTimeFraction,
            /* [out][in] */ double *XIncrement);
        
        END_INTERFACE
    } IIviDigitizerChannelMultiRecordMeasurementVtbl;

    interface IIviDigitizerChannelMultiRecordMeasurement
    {
        CONST_VTBL struct IIviDigitizerChannelMultiRecordMeasurementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDigitizerChannelMultiRecordMeasurement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDigitizerChannelMultiRecordMeasurement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDigitizerChannelMultiRecordMeasurement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDigitizerChannelMultiRecordMeasurement_FetchMultiRecordWaveformInt16(This,FirstRecord,NumRecords,OffsetWithinRecord,NumPointsPerRecord,WaveformArray,ActualRecords,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset)	\
    ( (This)->lpVtbl -> FetchMultiRecordWaveformInt16(This,FirstRecord,NumRecords,OffsetWithinRecord,NumPointsPerRecord,WaveformArray,ActualRecords,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset) ) 

#define IIviDigitizerChannelMultiRecordMeasurement_FetchMultiRecordWaveformInt8(This,FirstRecord,NumRecords,OffsetWithinRecord,NumPointsPerRecord,WaveformArray,ActualRecords,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset)	\
    ( (This)->lpVtbl -> FetchMultiRecordWaveformInt8(This,FirstRecord,NumRecords,OffsetWithinRecord,NumPointsPerRecord,WaveformArray,ActualRecords,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset) ) 

#define IIviDigitizerChannelMultiRecordMeasurement_FetchMultiRecordWaveformInt32(This,FirstRecord,NumRecords,OffsetWithinRecord,NumPointsPerRecord,WaveformArray,ActualRecords,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset)	\
    ( (This)->lpVtbl -> FetchMultiRecordWaveformInt32(This,FirstRecord,NumRecords,OffsetWithinRecord,NumPointsPerRecord,WaveformArray,ActualRecords,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement,ScaleFactor,ScaleOffset) ) 

#define IIviDigitizerChannelMultiRecordMeasurement_FetchMultiRecordWaveformReal64(This,FirstRecord,NumRecords,OffsetWithinRecord,NumPointsPerRecord,WaveformArray,ActualRecords,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement)	\
    ( (This)->lpVtbl -> FetchMultiRecordWaveformReal64(This,FirstRecord,NumRecords,OffsetWithinRecord,NumPointsPerRecord,WaveformArray,ActualRecords,ActualPoints,FirstValidPoint,InitialXOffset,InitialXTimeSeconds,InitialXTimeFraction,XIncrement) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDigitizerChannelMultiRecordMeasurement_INTERFACE_DEFINED__ */

#endif /* __IviDigitizerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


