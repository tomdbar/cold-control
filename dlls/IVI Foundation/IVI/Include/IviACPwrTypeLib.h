

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:57:26 2016
 */
/* Compiler settings for IviACPwrTypeLib.idl:
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


#ifndef __IviACPwrTypeLib_h__
#define __IviACPwrTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviACPwr_FWD_DEFINED__
#define __IIviACPwr_FWD_DEFINED__
typedef interface IIviACPwr IIviACPwr;

#endif 	/* __IIviACPwr_FWD_DEFINED__ */


#ifndef __IIviACPwrOutputPhase_FWD_DEFINED__
#define __IIviACPwrOutputPhase_FWD_DEFINED__
typedef interface IIviACPwrOutputPhase IIviACPwrOutputPhase;

#endif 	/* __IIviACPwrOutputPhase_FWD_DEFINED__ */


#ifndef __IIviACPwrOutputPhases_FWD_DEFINED__
#define __IIviACPwrOutputPhases_FWD_DEFINED__
typedef interface IIviACPwrOutputPhases IIviACPwrOutputPhases;

#endif 	/* __IIviACPwrOutputPhases_FWD_DEFINED__ */


#ifndef __IIviACPwrArbWaveform_FWD_DEFINED__
#define __IIviACPwrArbWaveform_FWD_DEFINED__
typedef interface IIviACPwrArbWaveform IIviACPwrArbWaveform;

#endif 	/* __IIviACPwrArbWaveform_FWD_DEFINED__ */


#ifndef __IIviACPwrImpedance_FWD_DEFINED__
#define __IIviACPwrImpedance_FWD_DEFINED__
typedef interface IIviACPwrImpedance IIviACPwrImpedance;

#endif 	/* __IIviACPwrImpedance_FWD_DEFINED__ */


#ifndef __IIviACPwrCurrentProtection_FWD_DEFINED__
#define __IIviACPwrCurrentProtection_FWD_DEFINED__
typedef interface IIviACPwrCurrentProtection IIviACPwrCurrentProtection;

#endif 	/* __IIviACPwrCurrentProtection_FWD_DEFINED__ */


#ifndef __IIviACPwrVoltageProtection_FWD_DEFINED__
#define __IIviACPwrVoltageProtection_FWD_DEFINED__
typedef interface IIviACPwrVoltageProtection IIviACPwrVoltageProtection;

#endif 	/* __IIviACPwrVoltageProtection_FWD_DEFINED__ */


#ifndef __IIviACPwrDCGeneration_FWD_DEFINED__
#define __IIviACPwrDCGeneration_FWD_DEFINED__
typedef interface IIviACPwrDCGeneration IIviACPwrDCGeneration;

#endif 	/* __IIviACPwrDCGeneration_FWD_DEFINED__ */


#ifndef __IIviACPwrExternalSync_FWD_DEFINED__
#define __IIviACPwrExternalSync_FWD_DEFINED__
typedef interface IIviACPwrExternalSync IIviACPwrExternalSync;

#endif 	/* __IIviACPwrExternalSync_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __IviACPwrLib_LIBRARY_DEFINED__
#define __IviACPwrLib_LIBRARY_DEFINED__

/* library IviACPwrLib */
/* [helpfile][helpcontext][helpstring][version][uuid] */ 










typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("38934d0f-3ca7-43f5-b788-259486640eb6") 
enum IviACPwrMeasurementTypeEnum
    {
        IviACPwrMeasurementTypeVoltageRmsLN	= 0,
        IviACPwrMeasurementTypeCurrentRms	= 1,
        IviACPwrMeasurementTypeFrequency	= 2,
        IviACPwrMeasurementTypeVoltageDC	= 3,
        IviACPwrMeasurementTypeCurrentDC	= 4,
        IviACPwrMeasurementTypePowerFactor	= 5,
        IviACPwrMeasurementTypeCrestFactor	= 6,
        IviACPwrMeasurementTypeCurrentPeak	= 7,
        IviACPwrMeasurementTypePowerVA	= 8,
        IviACPwrMeasurementTypePowerReal	= 9,
        IviACPwrMeasurementTypePowerDC	= 10,
        IviACPwrMeasurementTypePhaseAngle	= 11,
        IviACPwrMeasurementTypeVoltageRmsLL	= 12,
        IviACPwrMeasurementTypeCurrentOHD	= 13,
        IviACPwrMeasurementTypeCurrentEHD	= 14,
        IviACPwrMeasurementTypeCurrentTHD	= 15,
        IviACPwrMeasurementTypeVoltageOHD	= 16,
        IviACPwrMeasurementTypeVoltageEHD	= 17,
        IviACPwrMeasurementTypeVoltageTHD	= 18
    } 	IviACPwrMeasurementTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("31d8f78b-f8c2-4df1-8198-a81cc1ecf349") 
enum IviACPwrMeasurementGroupEnum
    {
        IviACPwrMeasurementGroupBase	= 1,
        IviACPwrMeasurementGroupHarmonic	= 2,
        IviACPwrMeasurementGroupDistortion	= 4,
        IviACPwrMeasurementGroupWaveform	= 8
    } 	IviACPwrMeasurementGroupEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f26eb9ae-4439-4606-ac74-6a0ff58b4ff0") 
enum IviACPwrDCGenerationEnum
    {
        IviACPwrDCGenerationModeACOnly	= 0,
        IviACPwrDCGenerationModeDCOnly	= 1,
        IviACPwrDCGenerationModeACPlusDC	= 2
    } 	IviACPwrDCGenerationEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("2f361e88-4bf2-4c2c-bd96-33a24795e44b") 
enum IviACPwrWaveformCatalogEnum
    {
        IviACPwrWaveformCatalogFixed	= 0,
        IviACPwrWaveformCatalogUser	= 1,
        IviACPwrWaveformCatalogAll	= 2
    } 	IviACPwrWaveformCatalogEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4f61b5a2-7f1a-45f0-9927-240600ced003") 
enum IviACPwrMeasurementTypeArrayEnum
    {
        IviACPwrMeasurementTypeArrayCurrentHarmonicPhase	= 0,
        IviACPwrMeasurementTypeArrayCurrentHarmonicAbs	= 1,
        IviACPwrMeasurementTypeArrayCurrentHarmonicPct	= 2,
        IviACPwrMeasurementTypeArrayVoltageHarmonicPhase	= 3,
        IviACPwrMeasurementTypeArrayVoltageHarmonicAbs	= 4,
        IviACPwrMeasurementTypeArrayVoltageHarmonicPct	= 5,
        IviACPwrMeasurementTypeArrayCurrentCycle	= 6,
        IviACPwrMeasurementTypeArrayVoltageCycle	= 7
    } 	IviACPwrMeasurementTypeArrayEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("ca81f824-97fc-4009-bb79-199c8531282b") 
enum IviACPwrErrorCodesEnum
    {
        E_IVIACPWR_MEASUREMENT_NOT_INITIATED	= -2147213306,
        E_IVIACPWR_UNSUPPORTED_MEASUREMENT_GROUP	= -2147213301,
        E_IVIACPWR_MEASUREMENT_NOT_SUPPORTED	= -2147213305,
        E_IVIACPWR_WAVEFORM_IN_USE	= -2147213298,
        E_IVIACPWR_WAVEFORM_RESERVED	= -2147213296,
        E_IVIACPWR_WAVEFORM_NOT_FOUND	= -2147213297,
        E_IVIACPWR_DUPLICATE_WAVEFORM_NAME	= -2147213308,
        E_IVIACPWR_NO_WAVEFORMS_AVAILABLE	= -2147213304,
        E_IVIACPWR_INVALID_WAVEFORM_NAME	= -2147213307,
        E_IVIACPWR_ALL_PHASES_REQUIRED	= -2147213310,
        E_IVIACPWR_PHASE_VALUES_DIFFERENT	= -2147213302,
        E_IVIACPWR_VOLTAGE_PROTECTION	= -2147213300,
        E_IVIACPWR_CURRENT_PROTECTION	= -2147213309,
        E_IVIACPWR_OUTPUT_ENABLED	= -2147213303,
        E_IVIACPWR_WAVEFORM_DC_OFFSET	= -2147213299,
        E_IVIACPWR_ALL_PHASES_NOT_SUPPORTED	= -2147213311
    } 	IviACPwrErrorCodesEnum;


EXTERN_C const IID LIBID_IviACPwrLib;

#ifndef __IIviACPwr_INTERFACE_DEFINED__
#define __IIviACPwr_INTERFACE_DEFINED__

/* interface IIviACPwr */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviACPwr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5440-a398-11d4-ba58-000064657374")
    IIviACPwr : public IIviDriver
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OutputPhases( 
            /* [retval][out] */ IIviACPwrOutputPhases **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ArbWaveform( 
            /* [retval][out] */ IIviACPwrArbWaveform **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviACPwrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviACPwr * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviACPwr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviACPwr * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviACPwr * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviACPwr * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviACPwr * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviACPwr * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviACPwr * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviACPwr * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputPhases )( 
            IIviACPwr * This,
            /* [retval][out] */ IIviACPwrOutputPhases **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArbWaveform )( 
            IIviACPwr * This,
            /* [retval][out] */ IIviACPwrArbWaveform **Val);
        
        END_INTERFACE
    } IIviACPwrVtbl;

    interface IIviACPwr
    {
        CONST_VTBL struct IIviACPwrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviACPwr_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviACPwr_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviACPwr_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviACPwr_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviACPwr_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviACPwr_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviACPwr_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviACPwr_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviACPwr_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviACPwr_get_OutputPhases(This,Val)	\
    ( (This)->lpVtbl -> get_OutputPhases(This,Val) ) 

#define IIviACPwr_get_ArbWaveform(This,Val)	\
    ( (This)->lpVtbl -> get_ArbWaveform(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviACPwr_INTERFACE_DEFINED__ */


#ifndef __IIviACPwrOutputPhase_INTERFACE_DEFINED__
#define __IIviACPwrOutputPhase_INTERFACE_DEFINED__

/* interface IIviACPwrOutputPhase */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviACPwrOutputPhase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5442-a398-11d4-ba58-000064657374")
    IIviACPwrOutputPhase : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE QueryVoltageRangeCapabilities( 
            /* [in] */ long Range,
            /* [in] */ BSTR WaveformName,
            /* [out][in] */ double *MinVoltage,
            /* [out][in] */ double *MaxVoltage) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE RampCurrent( 
            /* [in] */ double StartCurrent,
            /* [in] */ double EndCurrent,
            /* [in] */ double Duration) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchMeasurementArray( 
            /* [in] */ enum IviACPwrMeasurementTypeArrayEnum MeasurementType,
            /* [out][in] */ SAFEARRAY * *Measurement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE RampVoltage( 
            /* [in] */ double StartVoltage,
            /* [in] */ double EndVoltage,
            /* [in] */ double Duration) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AbortVoltageRamp( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchMeasurement( 
            /* [in] */ enum IviACPwrMeasurementTypeEnum MeasurementType,
            /* [out][in] */ double *Measurement) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AbortCurrentRamp( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLimit( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CurrentLimit( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumVoltageRanges( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VoltageLevel( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VoltageLevel( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Waveform( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Waveform( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PhaseAngle( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_PhaseAngle( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VoltageRange( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VoltageRange( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Impedance( 
            /* [retval][out] */ IIviACPwrImpedance **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentProtection( 
            /* [retval][out] */ IIviACPwrCurrentProtection **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VoltageProtection( 
            /* [retval][out] */ IIviACPwrVoltageProtection **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DCGeneration( 
            /* [retval][out] */ IIviACPwrDCGeneration **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VoltageRampBusy( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRampBusy( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviACPwrOutputPhaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviACPwrOutputPhase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviACPwrOutputPhase * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *QueryVoltageRangeCapabilities )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ long Range,
            /* [in] */ BSTR WaveformName,
            /* [out][in] */ double *MinVoltage,
            /* [out][in] */ double *MaxVoltage);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *RampCurrent )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ double StartCurrent,
            /* [in] */ double EndCurrent,
            /* [in] */ double Duration);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchMeasurementArray )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ enum IviACPwrMeasurementTypeArrayEnum MeasurementType,
            /* [out][in] */ SAFEARRAY * *Measurement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *RampVoltage )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ double StartVoltage,
            /* [in] */ double EndVoltage,
            /* [in] */ double Duration);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AbortVoltageRamp )( 
            IIviACPwrOutputPhase * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchMeasurement )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ enum IviACPwrMeasurementTypeEnum MeasurementType,
            /* [out][in] */ double *Measurement);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AbortCurrentRamp )( 
            IIviACPwrOutputPhase * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLimit )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentLimit )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumVoltageRanges )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VoltageLevel )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VoltageLevel )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Waveform )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Waveform )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PhaseAngle )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PhaseAngle )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VoltageRange )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VoltageRange )( 
            IIviACPwrOutputPhase * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Impedance )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ IIviACPwrImpedance **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProtection )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ IIviACPwrCurrentProtection **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VoltageProtection )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ IIviACPwrVoltageProtection **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCGeneration )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ IIviACPwrDCGeneration **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VoltageRampBusy )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRampBusy )( 
            IIviACPwrOutputPhase * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        END_INTERFACE
    } IIviACPwrOutputPhaseVtbl;

    interface IIviACPwrOutputPhase
    {
        CONST_VTBL struct IIviACPwrOutputPhaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviACPwrOutputPhase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviACPwrOutputPhase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviACPwrOutputPhase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviACPwrOutputPhase_QueryVoltageRangeCapabilities(This,Range,WaveformName,MinVoltage,MaxVoltage)	\
    ( (This)->lpVtbl -> QueryVoltageRangeCapabilities(This,Range,WaveformName,MinVoltage,MaxVoltage) ) 

#define IIviACPwrOutputPhase_RampCurrent(This,StartCurrent,EndCurrent,Duration)	\
    ( (This)->lpVtbl -> RampCurrent(This,StartCurrent,EndCurrent,Duration) ) 

#define IIviACPwrOutputPhase_FetchMeasurementArray(This,MeasurementType,Measurement)	\
    ( (This)->lpVtbl -> FetchMeasurementArray(This,MeasurementType,Measurement) ) 

#define IIviACPwrOutputPhase_RampVoltage(This,StartVoltage,EndVoltage,Duration)	\
    ( (This)->lpVtbl -> RampVoltage(This,StartVoltage,EndVoltage,Duration) ) 

#define IIviACPwrOutputPhase_AbortVoltageRamp(This)	\
    ( (This)->lpVtbl -> AbortVoltageRamp(This) ) 

#define IIviACPwrOutputPhase_FetchMeasurement(This,MeasurementType,Measurement)	\
    ( (This)->lpVtbl -> FetchMeasurement(This,MeasurementType,Measurement) ) 

#define IIviACPwrOutputPhase_AbortCurrentRamp(This)	\
    ( (This)->lpVtbl -> AbortCurrentRamp(This) ) 

#define IIviACPwrOutputPhase_get_CurrentLimit(This,Val)	\
    ( (This)->lpVtbl -> get_CurrentLimit(This,Val) ) 

#define IIviACPwrOutputPhase_put_CurrentLimit(This,Val)	\
    ( (This)->lpVtbl -> put_CurrentLimit(This,Val) ) 

#define IIviACPwrOutputPhase_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviACPwrOutputPhase_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviACPwrOutputPhase_get_NumVoltageRanges(This,Val)	\
    ( (This)->lpVtbl -> get_NumVoltageRanges(This,Val) ) 

#define IIviACPwrOutputPhase_get_VoltageLevel(This,Val)	\
    ( (This)->lpVtbl -> get_VoltageLevel(This,Val) ) 

#define IIviACPwrOutputPhase_put_VoltageLevel(This,Val)	\
    ( (This)->lpVtbl -> put_VoltageLevel(This,Val) ) 

#define IIviACPwrOutputPhase_get_Waveform(This,Val)	\
    ( (This)->lpVtbl -> get_Waveform(This,Val) ) 

#define IIviACPwrOutputPhase_put_Waveform(This,Val)	\
    ( (This)->lpVtbl -> put_Waveform(This,Val) ) 

#define IIviACPwrOutputPhase_get_PhaseAngle(This,Val)	\
    ( (This)->lpVtbl -> get_PhaseAngle(This,Val) ) 

#define IIviACPwrOutputPhase_put_PhaseAngle(This,Val)	\
    ( (This)->lpVtbl -> put_PhaseAngle(This,Val) ) 

#define IIviACPwrOutputPhase_get_VoltageRange(This,Val)	\
    ( (This)->lpVtbl -> get_VoltageRange(This,Val) ) 

#define IIviACPwrOutputPhase_put_VoltageRange(This,Val)	\
    ( (This)->lpVtbl -> put_VoltageRange(This,Val) ) 

#define IIviACPwrOutputPhase_get_Impedance(This,Val)	\
    ( (This)->lpVtbl -> get_Impedance(This,Val) ) 

#define IIviACPwrOutputPhase_get_CurrentProtection(This,Val)	\
    ( (This)->lpVtbl -> get_CurrentProtection(This,Val) ) 

#define IIviACPwrOutputPhase_get_VoltageProtection(This,Val)	\
    ( (This)->lpVtbl -> get_VoltageProtection(This,Val) ) 

#define IIviACPwrOutputPhase_get_DCGeneration(This,Val)	\
    ( (This)->lpVtbl -> get_DCGeneration(This,Val) ) 

#define IIviACPwrOutputPhase_get_VoltageRampBusy(This,Val)	\
    ( (This)->lpVtbl -> get_VoltageRampBusy(This,Val) ) 

#define IIviACPwrOutputPhase_get_CurrentRampBusy(This,Val)	\
    ( (This)->lpVtbl -> get_CurrentRampBusy(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviACPwrOutputPhase_INTERFACE_DEFINED__ */


#ifndef __IIviACPwrOutputPhases_INTERFACE_DEFINED__
#define __IIviACPwrOutputPhases_INTERFACE_DEFINED__

/* interface IIviACPwrOutputPhases */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviACPwrOutputPhases;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5441-a398-11d4-ba58-000064657374")
    IIviACPwrOutputPhases : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE QueryFrequencyRangeCapabilities( 
            /* [in] */ long Range,
            /* [out][in] */ double *MinFrequency,
            /* [out][in] */ double *MaxFrequency) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE InitiateMeasurement( 
            /* [in] */ enum IviACPwrMeasurementGroupEnum Group) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE RampFrequency( 
            /* [in] */ double StartFrequency,
            /* [in] */ double EndFrequency,
            /* [in] */ double Duration) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE AbortFrequencyRamp( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviACPwrOutputPhase **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumPhases( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumFrequencyRanges( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyRange( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrequencyRange( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalSync( 
            /* [retval][out] */ IIviACPwrExternalSync **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyRampBusy( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviACPwrOutputPhasesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviACPwrOutputPhases * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviACPwrOutputPhases * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviACPwrOutputPhases * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *QueryFrequencyRangeCapabilities )( 
            IIviACPwrOutputPhases * This,
            /* [in] */ long Range,
            /* [out][in] */ double *MinFrequency,
            /* [out][in] */ double *MaxFrequency);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *InitiateMeasurement )( 
            IIviACPwrOutputPhases * This,
            /* [in] */ enum IviACPwrMeasurementGroupEnum Group);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *RampFrequency )( 
            IIviACPwrOutputPhases * This,
            /* [in] */ double StartFrequency,
            /* [in] */ double EndFrequency,
            /* [in] */ double Duration);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *AbortFrequencyRamp )( 
            IIviACPwrOutputPhases * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviACPwrOutputPhases * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviACPwrOutputPhase **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviACPwrOutputPhases * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumPhases )( 
            IIviACPwrOutputPhases * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumFrequencyRanges )( 
            IIviACPwrOutputPhases * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyRange )( 
            IIviACPwrOutputPhases * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrequencyRange )( 
            IIviACPwrOutputPhases * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalSync )( 
            IIviACPwrOutputPhases * This,
            /* [retval][out] */ IIviACPwrExternalSync **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviACPwrOutputPhases * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IIviACPwrOutputPhases * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviACPwrOutputPhases * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyRampBusy )( 
            IIviACPwrOutputPhases * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        END_INTERFACE
    } IIviACPwrOutputPhasesVtbl;

    interface IIviACPwrOutputPhases
    {
        CONST_VTBL struct IIviACPwrOutputPhasesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviACPwrOutputPhases_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviACPwrOutputPhases_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviACPwrOutputPhases_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviACPwrOutputPhases_QueryFrequencyRangeCapabilities(This,Range,MinFrequency,MaxFrequency)	\
    ( (This)->lpVtbl -> QueryFrequencyRangeCapabilities(This,Range,MinFrequency,MaxFrequency) ) 

#define IIviACPwrOutputPhases_InitiateMeasurement(This,Group)	\
    ( (This)->lpVtbl -> InitiateMeasurement(This,Group) ) 

#define IIviACPwrOutputPhases_RampFrequency(This,StartFrequency,EndFrequency,Duration)	\
    ( (This)->lpVtbl -> RampFrequency(This,StartFrequency,EndFrequency,Duration) ) 

#define IIviACPwrOutputPhases_AbortFrequencyRamp(This)	\
    ( (This)->lpVtbl -> AbortFrequencyRamp(This) ) 

#define IIviACPwrOutputPhases_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#define IIviACPwrOutputPhases_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#define IIviACPwrOutputPhases_get_NumPhases(This,Val)	\
    ( (This)->lpVtbl -> get_NumPhases(This,Val) ) 

#define IIviACPwrOutputPhases_get_NumFrequencyRanges(This,Val)	\
    ( (This)->lpVtbl -> get_NumFrequencyRanges(This,Val) ) 

#define IIviACPwrOutputPhases_get_FrequencyRange(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencyRange(This,Val) ) 

#define IIviACPwrOutputPhases_put_FrequencyRange(This,Val)	\
    ( (This)->lpVtbl -> put_FrequencyRange(This,Val) ) 

#define IIviACPwrOutputPhases_get_ExternalSync(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalSync(This,Val) ) 

#define IIviACPwrOutputPhases_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define IIviACPwrOutputPhases_put_Frequency(This,Val)	\
    ( (This)->lpVtbl -> put_Frequency(This,Val) ) 

#define IIviACPwrOutputPhases_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IIviACPwrOutputPhases_get_FrequencyRampBusy(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencyRampBusy(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviACPwrOutputPhases_INTERFACE_DEFINED__ */


#ifndef __IIviACPwrArbWaveform_INTERFACE_DEFINED__
#define __IIviACPwrArbWaveform_INTERFACE_DEFINED__

/* interface IIviACPwrArbWaveform */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviACPwrArbWaveform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5443-a398-11d4-ba58-000064657374")
    IIviACPwrArbWaveform : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Clear( 
            /* [in] */ BSTR WaveformName) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE QueryCatalog( 
            /* [in] */ enum IviACPwrWaveformCatalogEnum CatalogType,
            /* [out][in] */ BSTR *Catalog) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Write( 
            /* [in] */ BSTR WaveformName,
            /* [in] */ SAFEARRAY * *WaveformData) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumWaveformsMax( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumOptimalDataPoints( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FixedWaveformCount( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_UserWaveformCount( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AvailableWaveformCount( 
            /* [retval][out] */ long *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviACPwrArbWaveformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviACPwrArbWaveform * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviACPwrArbWaveform * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviACPwrArbWaveform * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IIviACPwrArbWaveform * This,
            /* [in] */ BSTR WaveformName);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *QueryCatalog )( 
            IIviACPwrArbWaveform * This,
            /* [in] */ enum IviACPwrWaveformCatalogEnum CatalogType,
            /* [out][in] */ BSTR *Catalog);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            IIviACPwrArbWaveform * This,
            /* [in] */ BSTR WaveformName,
            /* [in] */ SAFEARRAY * *WaveformData);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumWaveformsMax )( 
            IIviACPwrArbWaveform * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumOptimalDataPoints )( 
            IIviACPwrArbWaveform * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FixedWaveformCount )( 
            IIviACPwrArbWaveform * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserWaveformCount )( 
            IIviACPwrArbWaveform * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AvailableWaveformCount )( 
            IIviACPwrArbWaveform * This,
            /* [retval][out] */ long *Val);
        
        END_INTERFACE
    } IIviACPwrArbWaveformVtbl;

    interface IIviACPwrArbWaveform
    {
        CONST_VTBL struct IIviACPwrArbWaveformVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviACPwrArbWaveform_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviACPwrArbWaveform_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviACPwrArbWaveform_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviACPwrArbWaveform_Clear(This,WaveformName)	\
    ( (This)->lpVtbl -> Clear(This,WaveformName) ) 

#define IIviACPwrArbWaveform_QueryCatalog(This,CatalogType,Catalog)	\
    ( (This)->lpVtbl -> QueryCatalog(This,CatalogType,Catalog) ) 

#define IIviACPwrArbWaveform_Write(This,WaveformName,WaveformData)	\
    ( (This)->lpVtbl -> Write(This,WaveformName,WaveformData) ) 

#define IIviACPwrArbWaveform_get_NumWaveformsMax(This,Val)	\
    ( (This)->lpVtbl -> get_NumWaveformsMax(This,Val) ) 

#define IIviACPwrArbWaveform_get_NumOptimalDataPoints(This,Val)	\
    ( (This)->lpVtbl -> get_NumOptimalDataPoints(This,Val) ) 

#define IIviACPwrArbWaveform_get_FixedWaveformCount(This,Val)	\
    ( (This)->lpVtbl -> get_FixedWaveformCount(This,Val) ) 

#define IIviACPwrArbWaveform_get_UserWaveformCount(This,Val)	\
    ( (This)->lpVtbl -> get_UserWaveformCount(This,Val) ) 

#define IIviACPwrArbWaveform_get_AvailableWaveformCount(This,Val)	\
    ( (This)->lpVtbl -> get_AvailableWaveformCount(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviACPwrArbWaveform_INTERFACE_DEFINED__ */


#ifndef __IIviACPwrImpedance_INTERFACE_DEFINED__
#define __IIviACPwrImpedance_INTERFACE_DEFINED__

/* interface IIviACPwrImpedance */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviACPwrImpedance;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5447-a398-11d4-ba58-000064657374")
    IIviACPwrImpedance : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ double ResistiveValue,
            /* [in] */ double InductiveValue) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE QueryCapabilities( 
            /* [out][in] */ double *ResistiveMin,
            /* [out][in] */ double *ResistiveMax,
            /* [out][in] */ double *InductiveMin,
            /* [out][in] */ double *InductiveMax) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Inductive( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Inductive( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resistive( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resistive( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviACPwrImpedanceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviACPwrImpedance * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviACPwrImpedance * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviACPwrImpedance * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviACPwrImpedance * This,
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ double ResistiveValue,
            /* [in] */ double InductiveValue);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *QueryCapabilities )( 
            IIviACPwrImpedance * This,
            /* [out][in] */ double *ResistiveMin,
            /* [out][in] */ double *ResistiveMax,
            /* [out][in] */ double *InductiveMin,
            /* [out][in] */ double *InductiveMax);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Inductive )( 
            IIviACPwrImpedance * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Inductive )( 
            IIviACPwrImpedance * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviACPwrImpedance * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviACPwrImpedance * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resistive )( 
            IIviACPwrImpedance * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resistive )( 
            IIviACPwrImpedance * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviACPwrImpedanceVtbl;

    interface IIviACPwrImpedance
    {
        CONST_VTBL struct IIviACPwrImpedanceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviACPwrImpedance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviACPwrImpedance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviACPwrImpedance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviACPwrImpedance_Configure(This,Enabled,ResistiveValue,InductiveValue)	\
    ( (This)->lpVtbl -> Configure(This,Enabled,ResistiveValue,InductiveValue) ) 

#define IIviACPwrImpedance_QueryCapabilities(This,ResistiveMin,ResistiveMax,InductiveMin,InductiveMax)	\
    ( (This)->lpVtbl -> QueryCapabilities(This,ResistiveMin,ResistiveMax,InductiveMin,InductiveMax) ) 

#define IIviACPwrImpedance_get_Inductive(This,Val)	\
    ( (This)->lpVtbl -> get_Inductive(This,Val) ) 

#define IIviACPwrImpedance_put_Inductive(This,Val)	\
    ( (This)->lpVtbl -> put_Inductive(This,Val) ) 

#define IIviACPwrImpedance_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviACPwrImpedance_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviACPwrImpedance_get_Resistive(This,Val)	\
    ( (This)->lpVtbl -> get_Resistive(This,Val) ) 

#define IIviACPwrImpedance_put_Resistive(This,Val)	\
    ( (This)->lpVtbl -> put_Resistive(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviACPwrImpedance_INTERFACE_DEFINED__ */


#ifndef __IIviACPwrCurrentProtection_INTERFACE_DEFINED__
#define __IIviACPwrCurrentProtection_INTERFACE_DEFINED__

/* interface IIviACPwrCurrentProtection */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviACPwrCurrentProtection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5445-a398-11d4-ba58-000064657374")
    IIviACPwrCurrentProtection : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ double Threshold,
            /* [in] */ double Delay) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Tripped( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviACPwrCurrentProtectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviACPwrCurrentProtection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviACPwrCurrentProtection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviACPwrCurrentProtection * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviACPwrCurrentProtection * This,
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ double Threshold,
            /* [in] */ double Delay);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviACPwrCurrentProtection * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviACPwrCurrentProtection * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviACPwrCurrentProtection * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviACPwrCurrentProtection * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviACPwrCurrentProtection * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Threshold )( 
            IIviACPwrCurrentProtection * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Threshold )( 
            IIviACPwrCurrentProtection * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tripped )( 
            IIviACPwrCurrentProtection * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        END_INTERFACE
    } IIviACPwrCurrentProtectionVtbl;

    interface IIviACPwrCurrentProtection
    {
        CONST_VTBL struct IIviACPwrCurrentProtectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviACPwrCurrentProtection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviACPwrCurrentProtection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviACPwrCurrentProtection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviACPwrCurrentProtection_Configure(This,Enabled,Threshold,Delay)	\
    ( (This)->lpVtbl -> Configure(This,Enabled,Threshold,Delay) ) 

#define IIviACPwrCurrentProtection_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IIviACPwrCurrentProtection_get_Delay(This,Val)	\
    ( (This)->lpVtbl -> get_Delay(This,Val) ) 

#define IIviACPwrCurrentProtection_put_Delay(This,Val)	\
    ( (This)->lpVtbl -> put_Delay(This,Val) ) 

#define IIviACPwrCurrentProtection_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviACPwrCurrentProtection_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviACPwrCurrentProtection_get_Threshold(This,Val)	\
    ( (This)->lpVtbl -> get_Threshold(This,Val) ) 

#define IIviACPwrCurrentProtection_put_Threshold(This,Val)	\
    ( (This)->lpVtbl -> put_Threshold(This,Val) ) 

#define IIviACPwrCurrentProtection_get_Tripped(This,Val)	\
    ( (This)->lpVtbl -> get_Tripped(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviACPwrCurrentProtection_INTERFACE_DEFINED__ */


#ifndef __IIviACPwrVoltageProtection_INTERFACE_DEFINED__
#define __IIviACPwrVoltageProtection_INTERFACE_DEFINED__

/* interface IIviACPwrVoltageProtection */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviACPwrVoltageProtection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5446-a398-11d4-ba58-000064657374")
    IIviACPwrVoltageProtection : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ VARIANT_BOOL UnderEnabled,
            /* [in] */ VARIANT_BOOL OverEnabled,
            /* [in] */ double UnderLimit,
            /* [in] */ double OverLimit) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OverEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OverEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OverLimit( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OverLimit( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_UnderEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_UnderEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_UnderLimit( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_UnderLimit( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Tripped( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviACPwrVoltageProtectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviACPwrVoltageProtection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviACPwrVoltageProtection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviACPwrVoltageProtection * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviACPwrVoltageProtection * This,
            /* [in] */ VARIANT_BOOL UnderEnabled,
            /* [in] */ VARIANT_BOOL OverEnabled,
            /* [in] */ double UnderLimit,
            /* [in] */ double OverLimit);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviACPwrVoltageProtection * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverEnabled )( 
            IIviACPwrVoltageProtection * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverEnabled )( 
            IIviACPwrVoltageProtection * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverLimit )( 
            IIviACPwrVoltageProtection * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverLimit )( 
            IIviACPwrVoltageProtection * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnderEnabled )( 
            IIviACPwrVoltageProtection * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UnderEnabled )( 
            IIviACPwrVoltageProtection * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnderLimit )( 
            IIviACPwrVoltageProtection * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UnderLimit )( 
            IIviACPwrVoltageProtection * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tripped )( 
            IIviACPwrVoltageProtection * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        END_INTERFACE
    } IIviACPwrVoltageProtectionVtbl;

    interface IIviACPwrVoltageProtection
    {
        CONST_VTBL struct IIviACPwrVoltageProtectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviACPwrVoltageProtection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviACPwrVoltageProtection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviACPwrVoltageProtection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviACPwrVoltageProtection_Configure(This,UnderEnabled,OverEnabled,UnderLimit,OverLimit)	\
    ( (This)->lpVtbl -> Configure(This,UnderEnabled,OverEnabled,UnderLimit,OverLimit) ) 

#define IIviACPwrVoltageProtection_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IIviACPwrVoltageProtection_get_OverEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_OverEnabled(This,Val) ) 

#define IIviACPwrVoltageProtection_put_OverEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_OverEnabled(This,Val) ) 

#define IIviACPwrVoltageProtection_get_OverLimit(This,Val)	\
    ( (This)->lpVtbl -> get_OverLimit(This,Val) ) 

#define IIviACPwrVoltageProtection_put_OverLimit(This,Val)	\
    ( (This)->lpVtbl -> put_OverLimit(This,Val) ) 

#define IIviACPwrVoltageProtection_get_UnderEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_UnderEnabled(This,Val) ) 

#define IIviACPwrVoltageProtection_put_UnderEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_UnderEnabled(This,Val) ) 

#define IIviACPwrVoltageProtection_get_UnderLimit(This,Val)	\
    ( (This)->lpVtbl -> get_UnderLimit(This,Val) ) 

#define IIviACPwrVoltageProtection_put_UnderLimit(This,Val)	\
    ( (This)->lpVtbl -> put_UnderLimit(This,Val) ) 

#define IIviACPwrVoltageProtection_get_Tripped(This,Val)	\
    ( (This)->lpVtbl -> get_Tripped(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviACPwrVoltageProtection_INTERFACE_DEFINED__ */


#ifndef __IIviACPwrDCGeneration_INTERFACE_DEFINED__
#define __IIviACPwrDCGeneration_INTERFACE_DEFINED__

/* interface IIviACPwrDCGeneration */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviACPwrDCGeneration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5448-a398-11d4-ba58-000064657374")
    IIviACPwrDCGeneration : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum IviACPwrDCGenerationEnum Mode,
            /* [in] */ double DCVoltageLevel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE QueryCapabilities( 
            /* [in] */ long Range,
            /* [out][in] */ double *Minimum,
            /* [out][in] */ double *Maximum) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureRange( 
            /* [in] */ double Minimum,
            /* [in] */ double Maximum) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ enum IviACPwrDCGenerationEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ enum IviACPwrDCGenerationEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DCVoltageLevel( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DCVoltageLevel( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMin( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumRanges( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RangeMax( 
            /* [retval][out] */ double *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviACPwrDCGenerationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviACPwrDCGeneration * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviACPwrDCGeneration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviACPwrDCGeneration * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviACPwrDCGeneration * This,
            /* [in] */ enum IviACPwrDCGenerationEnum Mode,
            /* [in] */ double DCVoltageLevel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *QueryCapabilities )( 
            IIviACPwrDCGeneration * This,
            /* [in] */ long Range,
            /* [out][in] */ double *Minimum,
            /* [out][in] */ double *Maximum);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRange )( 
            IIviACPwrDCGeneration * This,
            /* [in] */ double Minimum,
            /* [in] */ double Maximum);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IIviACPwrDCGeneration * This,
            /* [retval][out] */ enum IviACPwrDCGenerationEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IIviACPwrDCGeneration * This,
            /* [in] */ enum IviACPwrDCGenerationEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCVoltageLevel )( 
            IIviACPwrDCGeneration * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DCVoltageLevel )( 
            IIviACPwrDCGeneration * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMin )( 
            IIviACPwrDCGeneration * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumRanges )( 
            IIviACPwrDCGeneration * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeMax )( 
            IIviACPwrDCGeneration * This,
            /* [retval][out] */ double *Val);
        
        END_INTERFACE
    } IIviACPwrDCGenerationVtbl;

    interface IIviACPwrDCGeneration
    {
        CONST_VTBL struct IIviACPwrDCGenerationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviACPwrDCGeneration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviACPwrDCGeneration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviACPwrDCGeneration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviACPwrDCGeneration_Configure(This,Mode,DCVoltageLevel)	\
    ( (This)->lpVtbl -> Configure(This,Mode,DCVoltageLevel) ) 

#define IIviACPwrDCGeneration_QueryCapabilities(This,Range,Minimum,Maximum)	\
    ( (This)->lpVtbl -> QueryCapabilities(This,Range,Minimum,Maximum) ) 

#define IIviACPwrDCGeneration_ConfigureRange(This,Minimum,Maximum)	\
    ( (This)->lpVtbl -> ConfigureRange(This,Minimum,Maximum) ) 

#define IIviACPwrDCGeneration_get_Mode(This,Val)	\
    ( (This)->lpVtbl -> get_Mode(This,Val) ) 

#define IIviACPwrDCGeneration_put_Mode(This,Val)	\
    ( (This)->lpVtbl -> put_Mode(This,Val) ) 

#define IIviACPwrDCGeneration_get_DCVoltageLevel(This,Val)	\
    ( (This)->lpVtbl -> get_DCVoltageLevel(This,Val) ) 

#define IIviACPwrDCGeneration_put_DCVoltageLevel(This,Val)	\
    ( (This)->lpVtbl -> put_DCVoltageLevel(This,Val) ) 

#define IIviACPwrDCGeneration_get_RangeMin(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMin(This,Val) ) 

#define IIviACPwrDCGeneration_get_NumRanges(This,Val)	\
    ( (This)->lpVtbl -> get_NumRanges(This,Val) ) 

#define IIviACPwrDCGeneration_get_RangeMax(This,Val)	\
    ( (This)->lpVtbl -> get_RangeMax(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviACPwrDCGeneration_INTERFACE_DEFINED__ */


#ifndef __IIviACPwrExternalSync_INTERFACE_DEFINED__
#define __IIviACPwrExternalSync_INTERFACE_DEFINED__

/* interface IIviACPwrExternalSync */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviACPwrExternalSync;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5444-a398-11d4-ba58-000064657374")
    IIviACPwrExternalSync : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ double PhaseOffset) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PhaseOffset( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_PhaseOffset( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Locked( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviACPwrExternalSyncVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviACPwrExternalSync * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviACPwrExternalSync * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviACPwrExternalSync * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviACPwrExternalSync * This,
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ double PhaseOffset);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviACPwrExternalSync * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviACPwrExternalSync * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PhaseOffset )( 
            IIviACPwrExternalSync * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PhaseOffset )( 
            IIviACPwrExternalSync * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Locked )( 
            IIviACPwrExternalSync * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        END_INTERFACE
    } IIviACPwrExternalSyncVtbl;

    interface IIviACPwrExternalSync
    {
        CONST_VTBL struct IIviACPwrExternalSyncVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviACPwrExternalSync_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviACPwrExternalSync_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviACPwrExternalSync_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviACPwrExternalSync_Configure(This,Enabled,PhaseOffset)	\
    ( (This)->lpVtbl -> Configure(This,Enabled,PhaseOffset) ) 

#define IIviACPwrExternalSync_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviACPwrExternalSync_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviACPwrExternalSync_get_PhaseOffset(This,Val)	\
    ( (This)->lpVtbl -> get_PhaseOffset(This,Val) ) 

#define IIviACPwrExternalSync_put_PhaseOffset(This,Val)	\
    ( (This)->lpVtbl -> put_PhaseOffset(This,Val) ) 

#define IIviACPwrExternalSync_get_Locked(This,Val)	\
    ( (This)->lpVtbl -> get_Locked(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviACPwrExternalSync_INTERFACE_DEFINED__ */

#endif /* __IviACPwrLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


