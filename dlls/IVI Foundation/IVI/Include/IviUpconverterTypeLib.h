

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:59:45 2016
 */
/* Compiler settings for IviUpconverterTypeLib.idl:
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


#ifndef __IviUpconverterTypeLib_h__
#define __IviUpconverterTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviUpconverter_FWD_DEFINED__
#define __IIviUpconverter_FWD_DEFINED__
typedef interface IIviUpconverter IIviUpconverter;

#endif 	/* __IIviUpconverter_FWD_DEFINED__ */


#ifndef __IIviUpconverterReferenceOscillator_FWD_DEFINED__
#define __IIviUpconverterReferenceOscillator_FWD_DEFINED__
typedef interface IIviUpconverterReferenceOscillator IIviUpconverterReferenceOscillator;

#endif 	/* __IIviUpconverterReferenceOscillator_FWD_DEFINED__ */


#ifndef __IIviUpconverterIFInput_FWD_DEFINED__
#define __IIviUpconverterIFInput_FWD_DEFINED__
typedef interface IIviUpconverterIFInput IIviUpconverterIFInput;

#endif 	/* __IIviUpconverterIFInput_FWD_DEFINED__ */


#ifndef __IIviUpconverterRFOutput_FWD_DEFINED__
#define __IIviUpconverterRFOutput_FWD_DEFINED__
typedef interface IIviUpconverterRFOutput IIviUpconverterRFOutput;

#endif 	/* __IIviUpconverterRFOutput_FWD_DEFINED__ */


#ifndef __IIviUpconverterExternalLO_FWD_DEFINED__
#define __IIviUpconverterExternalLO_FWD_DEFINED__
typedef interface IIviUpconverterExternalLO IIviUpconverterExternalLO;

#endif 	/* __IIviUpconverterExternalLO_FWD_DEFINED__ */


#ifndef __IIviUpconverterALC_FWD_DEFINED__
#define __IIviUpconverterALC_FWD_DEFINED__
typedef interface IIviUpconverterALC IIviUpconverterALC;

#endif 	/* __IIviUpconverterALC_FWD_DEFINED__ */


#ifndef __IIviUpconverterIQ_FWD_DEFINED__
#define __IIviUpconverterIQ_FWD_DEFINED__
typedef interface IIviUpconverterIQ IIviUpconverterIQ;

#endif 	/* __IIviUpconverterIQ_FWD_DEFINED__ */


#ifndef __IIviUpconverterIQImpairment_FWD_DEFINED__
#define __IIviUpconverterIQImpairment_FWD_DEFINED__
typedef interface IIviUpconverterIQImpairment IIviUpconverterIQImpairment;

#endif 	/* __IIviUpconverterIQImpairment_FWD_DEFINED__ */


#ifndef __IIviUpconverterAnalogModulation_FWD_DEFINED__
#define __IIviUpconverterAnalogModulation_FWD_DEFINED__
typedef interface IIviUpconverterAnalogModulation IIviUpconverterAnalogModulation;

#endif 	/* __IIviUpconverterAnalogModulation_FWD_DEFINED__ */


#ifndef __IIviUpconverterAM_FWD_DEFINED__
#define __IIviUpconverterAM_FWD_DEFINED__
typedef interface IIviUpconverterAM IIviUpconverterAM;

#endif 	/* __IIviUpconverterAM_FWD_DEFINED__ */


#ifndef __IIviUpconverterFM_FWD_DEFINED__
#define __IIviUpconverterFM_FWD_DEFINED__
typedef interface IIviUpconverterFM IIviUpconverterFM;

#endif 	/* __IIviUpconverterFM_FWD_DEFINED__ */


#ifndef __IIviUpconverterPM_FWD_DEFINED__
#define __IIviUpconverterPM_FWD_DEFINED__
typedef interface IIviUpconverterPM IIviUpconverterPM;

#endif 	/* __IIviUpconverterPM_FWD_DEFINED__ */


#ifndef __IIviUpconverterAnalogModulationSource_FWD_DEFINED__
#define __IIviUpconverterAnalogModulationSource_FWD_DEFINED__
typedef interface IIviUpconverterAnalogModulationSource IIviUpconverterAnalogModulationSource;

#endif 	/* __IIviUpconverterAnalogModulationSource_FWD_DEFINED__ */


#ifndef __IIviUpconverterPulseModulation_FWD_DEFINED__
#define __IIviUpconverterPulseModulation_FWD_DEFINED__
typedef interface IIviUpconverterPulseModulation IIviUpconverterPulseModulation;

#endif 	/* __IIviUpconverterPulseModulation_FWD_DEFINED__ */


#ifndef __IIviUpconverterSweep_FWD_DEFINED__
#define __IIviUpconverterSweep_FWD_DEFINED__
typedef interface IIviUpconverterSweep IIviUpconverterSweep;

#endif 	/* __IIviUpconverterSweep_FWD_DEFINED__ */


#ifndef __IIviUpconverterFrequencySweep_FWD_DEFINED__
#define __IIviUpconverterFrequencySweep_FWD_DEFINED__
typedef interface IIviUpconverterFrequencySweep IIviUpconverterFrequencySweep;

#endif 	/* __IIviUpconverterFrequencySweep_FWD_DEFINED__ */


#ifndef __IIviUpconverterPowerSweep_FWD_DEFINED__
#define __IIviUpconverterPowerSweep_FWD_DEFINED__
typedef interface IIviUpconverterPowerSweep IIviUpconverterPowerSweep;

#endif 	/* __IIviUpconverterPowerSweep_FWD_DEFINED__ */


#ifndef __IIviUpconverterFrequencyStep_FWD_DEFINED__
#define __IIviUpconverterFrequencyStep_FWD_DEFINED__
typedef interface IIviUpconverterFrequencyStep IIviUpconverterFrequencyStep;

#endif 	/* __IIviUpconverterFrequencyStep_FWD_DEFINED__ */


#ifndef __IIviUpconverterPowerStep_FWD_DEFINED__
#define __IIviUpconverterPowerStep_FWD_DEFINED__
typedef interface IIviUpconverterPowerStep IIviUpconverterPowerStep;

#endif 	/* __IIviUpconverterPowerStep_FWD_DEFINED__ */


#ifndef __IIviUpconverterList_FWD_DEFINED__
#define __IIviUpconverterList_FWD_DEFINED__
typedef interface IIviUpconverterList IIviUpconverterList;

#endif 	/* __IIviUpconverterList_FWD_DEFINED__ */


#ifndef __IIviUpconverterGainStep_FWD_DEFINED__
#define __IIviUpconverterGainStep_FWD_DEFINED__
typedef interface IIviUpconverterGainStep IIviUpconverterGainStep;

#endif 	/* __IIviUpconverterGainStep_FWD_DEFINED__ */


#ifndef __IIviUpconverterGainSweep_FWD_DEFINED__
#define __IIviUpconverterGainSweep_FWD_DEFINED__
typedef interface IIviUpconverterGainSweep IIviUpconverterGainSweep;

#endif 	/* __IIviUpconverterGainSweep_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __IviUpconverterLib_LIBRARY_DEFINED__
#define __IviUpconverterLib_LIBRARY_DEFINED__

/* library IviUpconverterLib */
/* [helpfile][helpcontext][helpstring][version][uuid] */ 























typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("c77b154a-d462-4cb8-b68b-3ebf618b8a0b") 
enum IviUpconverterReferenceOscillatorSourceEnum
    {
        IviUpconverterReferenceOscillatorSourceInternal	= 0,
        IviUpconverterReferenceOscillatorSourceExternal	= 1
    } 	IviUpconverterReferenceOscillatorSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("f2acbe15-7e0d-47ef-95e1-c41e1bfc041c") 
enum IviUpconverterIFInputCouplingEnum
    {
        IviUpconverterIFInputCouplingAC	= 0,
        IviUpconverterIFInputCouplingDC	= 1
    } 	IviUpconverterIFInputCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("6bd4684a-c942-4466-874f-3090a2c68f5b") 
enum IviUpconverterALCSourceEnum
    {
        IviUpconverterALCSourceInternal	= 0,
        IviUpconverterALCSourceExternal	= 1
    } 	IviUpconverterALCSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("52b8cf4d-d539-4104-8060-e7a350dc482e") 
enum IviUpconverterAMScalingEnum
    {
        IviUpconverterAMScalingLinear	= 0,
        IviUpconverterAMScalingLogarithmic	= 1
    } 	IviUpconverterAMScalingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("e629f53d-5c37-4d75-aa9c-7f7555c7ab31") 
enum IviUpconverterAMExternalCouplingEnum
    {
        IviUpconverterAMExternalCouplingAC	= 0,
        IviUpconverterAMExternalCouplingDC	= 1
    } 	IviUpconverterAMExternalCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5740f42f-644e-4986-81c9-52f378cea1ae") 
enum IviUpconverterFMExternalCouplingEnum
    {
        IviUpconverterFMExternalCouplingAC	= 0,
        IviUpconverterFMExternalCouplingDC	= 1
    } 	IviUpconverterFMExternalCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("acde22c4-1d72-4df2-b83e-9e77866fcd28") 
enum IviUpconverterPMExternalCouplingEnum
    {
        IviUpconverterPMExternalCouplingAC	= 0,
        IviUpconverterPMExternalCouplingDC	= 1
    } 	IviUpconverterPMExternalCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("3b1cbaf2-4c1d-4a33-8076-805bf4b5dde5") 
enum IviUpconverterPulseModulationExternalPolarityEnum
    {
        IviUpconverterPulseModulationExternalPolarityNormal	= 0,
        IviUpconverterPulseModulationExternalPolarityInverse	= 1
    } 	IviUpconverterPulseModulationExternalPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("680865eb-d5e6-40d3-960a-bcca9bcc4c77") 
enum IviUpconverterSweepModeEnum
    {
        IviUpconverterSweepModeNone	= 0,
        IviUpconverterSweepModeFrequencySweep	= 1,
        IviUpconverterSweepModePowerSweep	= 2,
        IviUpconverterSweepModeFrequencyStep	= 4,
        IviUpconverterSweepModePowerStep	= 5,
        IviUpconverterSweepModeList	= 7,
        IviUpconverterSweepModeGainSweep	= 3,
        IviUpconverterSweepModeGainStep	= 6
    } 	IviUpconverterSweepModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("fb5c4667-b6f0-4b14-801e-87db6e2aa2aa") 
enum IviUpconverterFrequencyStepScalingEnum
    {
        IviUpconverterFrequencyStepScalingLinear	= 0,
        IviUpconverterFrequencyStepScalingLogarithmic	= 1
    } 	IviUpconverterFrequencyStepScalingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("211533f7-65bd-472c-86ce-34438e69c1f3") 
enum IviUpconverterCalibrationStatusEnum
    {
        IviUpconverterCalibrationComplete	= 0,
        IviUpconverterCalibrationInProgress	= 1,
        IviUpconverterCalibrationStatusUnknown	= 2,
        IviUpconverterCalibrationFailed	= 3
    } 	IviUpconverterCalibrationStatusEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("b9e9781e-90f9-4a17-82e2-c8ac94356f77") 
enum IviUpconverterErrorCodesEnum
    {
        E_IVIUPCONVERTER_LIST_UNKNOWN	= -2147213310,
        E_IVIUPCONVERTER_MAX_TIME_EXCEEDED	= -2147213311,
        E_IVIUPCONVERTER_TRIGGER_NOT_SOFTWARE	= -2147217407
    } 	IviUpconverterErrorCodesEnum;


EXTERN_C const IID LIBID_IviUpconverterLib;

#ifndef __IIviUpconverter_INTERFACE_DEFINED__
#define __IIviUpconverter_INTERFACE_DEFINED__

/* interface IIviUpconverter */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53dc-a398-11d4-ba58-000064657374")
    IIviUpconverter : public IIviDriver
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceOscillator( 
            /* [retval][out] */ IIviUpconverterReferenceOscillator **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IFInput( 
            /* [retval][out] */ IIviUpconverterIFInput **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RFOutput( 
            /* [retval][out] */ IIviUpconverterRFOutput **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalLO( 
            /* [retval][out] */ IIviUpconverterExternalLO **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ALC( 
            /* [retval][out] */ IIviUpconverterALC **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IQ( 
            /* [retval][out] */ IIviUpconverterIQ **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AnalogModulation( 
            /* [retval][out] */ IIviUpconverterAnalogModulation **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PulseModulation( 
            /* [retval][out] */ IIviUpconverterPulseModulation **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Sweep( 
            /* [retval][out] */ IIviUpconverterSweep **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverter * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviUpconverter * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviUpconverter * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviUpconverter * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviUpconverter * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceOscillator )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviUpconverterReferenceOscillator **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IFInput )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviUpconverterIFInput **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RFOutput )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviUpconverterRFOutput **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalLO )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviUpconverterExternalLO **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ALC )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviUpconverterALC **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IQ )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviUpconverterIQ **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AnalogModulation )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviUpconverterAnalogModulation **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PulseModulation )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviUpconverterPulseModulation **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sweep )( 
            IIviUpconverter * This,
            /* [retval][out] */ IIviUpconverterSweep **Val);
        
        END_INTERFACE
    } IIviUpconverterVtbl;

    interface IIviUpconverter
    {
        CONST_VTBL struct IIviUpconverterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverter_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviUpconverter_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviUpconverter_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviUpconverter_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviUpconverter_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviUpconverter_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviUpconverter_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IIviUpconverter_get_ReferenceOscillator(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceOscillator(This,Val) ) 

#define IIviUpconverter_get_IFInput(This,Val)	\
    ( (This)->lpVtbl -> get_IFInput(This,Val) ) 

#define IIviUpconverter_get_RFOutput(This,Val)	\
    ( (This)->lpVtbl -> get_RFOutput(This,Val) ) 

#define IIviUpconverter_get_ExternalLO(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalLO(This,Val) ) 

#define IIviUpconverter_get_ALC(This,Val)	\
    ( (This)->lpVtbl -> get_ALC(This,Val) ) 

#define IIviUpconverter_get_IQ(This,Val)	\
    ( (This)->lpVtbl -> get_IQ(This,Val) ) 

#define IIviUpconverter_get_AnalogModulation(This,Val)	\
    ( (This)->lpVtbl -> get_AnalogModulation(This,Val) ) 

#define IIviUpconverter_get_PulseModulation(This,Val)	\
    ( (This)->lpVtbl -> get_PulseModulation(This,Val) ) 

#define IIviUpconverter_get_Sweep(This,Val)	\
    ( (This)->lpVtbl -> get_Sweep(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverter_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterReferenceOscillator_INTERFACE_DEFINED__
#define __IIviUpconverterReferenceOscillator_INTERFACE_DEFINED__

/* interface IIviUpconverterReferenceOscillator */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterReferenceOscillator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53ed-a398-11d4-ba58-000064657374")
    IIviUpconverterReferenceOscillator : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum IviUpconverterReferenceOscillatorSourceEnum Source,
            /* [in] */ double Frequency) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalFrequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum IviUpconverterReferenceOscillatorSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum IviUpconverterReferenceOscillatorSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OutputEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OutputEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterReferenceOscillatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterReferenceOscillator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterReferenceOscillator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterReferenceOscillator * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviUpconverterReferenceOscillator * This,
            /* [in] */ enum IviUpconverterReferenceOscillatorSourceEnum Source,
            /* [in] */ double Frequency);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalFrequency )( 
            IIviUpconverterReferenceOscillator * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalFrequency )( 
            IIviUpconverterReferenceOscillator * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviUpconverterReferenceOscillator * This,
            /* [retval][out] */ enum IviUpconverterReferenceOscillatorSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviUpconverterReferenceOscillator * This,
            /* [in] */ enum IviUpconverterReferenceOscillatorSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputEnabled )( 
            IIviUpconverterReferenceOscillator * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputEnabled )( 
            IIviUpconverterReferenceOscillator * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IIviUpconverterReferenceOscillatorVtbl;

    interface IIviUpconverterReferenceOscillator
    {
        CONST_VTBL struct IIviUpconverterReferenceOscillatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterReferenceOscillator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterReferenceOscillator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterReferenceOscillator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterReferenceOscillator_Configure(This,Source,Frequency)	\
    ( (This)->lpVtbl -> Configure(This,Source,Frequency) ) 

#define IIviUpconverterReferenceOscillator_get_ExternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalFrequency(This,Val) ) 

#define IIviUpconverterReferenceOscillator_put_ExternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_ExternalFrequency(This,Val) ) 

#define IIviUpconverterReferenceOscillator_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IIviUpconverterReferenceOscillator_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define IIviUpconverterReferenceOscillator_get_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_OutputEnabled(This,Val) ) 

#define IIviUpconverterReferenceOscillator_put_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_OutputEnabled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterReferenceOscillator_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterIFInput_INTERFACE_DEFINED__
#define __IIviUpconverterIFInput_INTERFACE_DEFINED__

/* interface IIviUpconverterIFInput */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterIFInput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53e5-a398-11d4-ba58-000064657374")
    IIviUpconverterIFInput : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Coupling( 
            /* [retval][out] */ enum IviUpconverterIFInputCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Coupling( 
            /* [in] */ enum IviUpconverterIFInputCouplingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Attenuation( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Attenuation( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Bypass( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Bypass( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AutoCorrectionsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AutoCorrectionsEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveIFInput( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ActiveIFInput( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterIFInputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterIFInput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterIFInput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterIFInput * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviUpconverterIFInput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coupling )( 
            IIviUpconverterIFInput * This,
            /* [retval][out] */ enum IviUpconverterIFInputCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Coupling )( 
            IIviUpconverterIFInput * This,
            /* [in] */ enum IviUpconverterIFInputCouplingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attenuation )( 
            IIviUpconverterIFInput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Attenuation )( 
            IIviUpconverterIFInput * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bypass )( 
            IIviUpconverterIFInput * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bypass )( 
            IIviUpconverterIFInput * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoCorrectionsEnabled )( 
            IIviUpconverterIFInput * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoCorrectionsEnabled )( 
            IIviUpconverterIFInput * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveIFInput )( 
            IIviUpconverterIFInput * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveIFInput )( 
            IIviUpconverterIFInput * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviUpconverterIFInput * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviUpconverterIFInput * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } IIviUpconverterIFInputVtbl;

    interface IIviUpconverterIFInput
    {
        CONST_VTBL struct IIviUpconverterIFInputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterIFInput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterIFInput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterIFInput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterIFInput_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define IIviUpconverterIFInput_get_Coupling(This,Val)	\
    ( (This)->lpVtbl -> get_Coupling(This,Val) ) 

#define IIviUpconverterIFInput_put_Coupling(This,Val)	\
    ( (This)->lpVtbl -> put_Coupling(This,Val) ) 

#define IIviUpconverterIFInput_get_Attenuation(This,Val)	\
    ( (This)->lpVtbl -> get_Attenuation(This,Val) ) 

#define IIviUpconverterIFInput_put_Attenuation(This,Val)	\
    ( (This)->lpVtbl -> put_Attenuation(This,Val) ) 

#define IIviUpconverterIFInput_get_Bypass(This,Val)	\
    ( (This)->lpVtbl -> get_Bypass(This,Val) ) 

#define IIviUpconverterIFInput_put_Bypass(This,Val)	\
    ( (This)->lpVtbl -> put_Bypass(This,Val) ) 

#define IIviUpconverterIFInput_get_AutoCorrectionsEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_AutoCorrectionsEnabled(This,Val) ) 

#define IIviUpconverterIFInput_put_AutoCorrectionsEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_AutoCorrectionsEnabled(This,Val) ) 

#define IIviUpconverterIFInput_get_ActiveIFInput(This,Val)	\
    ( (This)->lpVtbl -> get_ActiveIFInput(This,Val) ) 

#define IIviUpconverterIFInput_put_ActiveIFInput(This,Val)	\
    ( (This)->lpVtbl -> put_ActiveIFInput(This,Val) ) 

#define IIviUpconverterIFInput_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IIviUpconverterIFInput_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterIFInput_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterRFOutput_INTERFACE_DEFINED__
#define __IIviUpconverterRFOutput_INTERFACE_DEFINED__

/* interface IIviUpconverterRFOutput */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterRFOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53ee-a398-11d4-ba58-000064657374")
    IIviUpconverterRFOutput : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE WaitUntilReady( 
            /* [in] */ long MaxTimeMilliseconds) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Calibrate( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE IsCalibrationComplete( 
            /* [retval][out] */ enum IviUpconverterCalibrationStatusEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveRFOutput( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ActiveRFOutput( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Gain( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Gain( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Bandwidth( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Bandwidth( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IsReady( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AttenuatorHoldEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_AttenuatorHoldEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReadyTrigger( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReadyTrigger( 
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterRFOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterRFOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterRFOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterRFOutput * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *WaitUntilReady )( 
            IIviUpconverterRFOutput * This,
            /* [in] */ long MaxTimeMilliseconds);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Calibrate )( 
            IIviUpconverterRFOutput * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *IsCalibrationComplete )( 
            IIviUpconverterRFOutput * This,
            /* [retval][out] */ enum IviUpconverterCalibrationStatusEnum *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveRFOutput )( 
            IIviUpconverterRFOutput * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveRFOutput )( 
            IIviUpconverterRFOutput * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviUpconverterRFOutput * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviUpconverterRFOutput * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviUpconverterRFOutput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IIviUpconverterRFOutput * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviUpconverterRFOutput * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviUpconverterRFOutput * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gain )( 
            IIviUpconverterRFOutput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gain )( 
            IIviUpconverterRFOutput * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )( 
            IIviUpconverterRFOutput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bandwidth )( 
            IIviUpconverterRFOutput * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsReady )( 
            IIviUpconverterRFOutput * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviUpconverterRFOutput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviUpconverterRFOutput * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttenuatorHoldEnabled )( 
            IIviUpconverterRFOutput * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttenuatorHoldEnabled )( 
            IIviUpconverterRFOutput * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReadyTrigger )( 
            IIviUpconverterRFOutput * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReadyTrigger )( 
            IIviUpconverterRFOutput * This,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } IIviUpconverterRFOutputVtbl;

    interface IIviUpconverterRFOutput
    {
        CONST_VTBL struct IIviUpconverterRFOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterRFOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterRFOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterRFOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterRFOutput_WaitUntilReady(This,MaxTimeMilliseconds)	\
    ( (This)->lpVtbl -> WaitUntilReady(This,MaxTimeMilliseconds) ) 

#define IIviUpconverterRFOutput_Calibrate(This)	\
    ( (This)->lpVtbl -> Calibrate(This) ) 

#define IIviUpconverterRFOutput_IsCalibrationComplete(This,Val)	\
    ( (This)->lpVtbl -> IsCalibrationComplete(This,Val) ) 

#define IIviUpconverterRFOutput_get_ActiveRFOutput(This,Val)	\
    ( (This)->lpVtbl -> get_ActiveRFOutput(This,Val) ) 

#define IIviUpconverterRFOutput_put_ActiveRFOutput(This,Val)	\
    ( (This)->lpVtbl -> put_ActiveRFOutput(This,Val) ) 

#define IIviUpconverterRFOutput_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IIviUpconverterRFOutput_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#define IIviUpconverterRFOutput_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define IIviUpconverterRFOutput_put_Frequency(This,Val)	\
    ( (This)->lpVtbl -> put_Frequency(This,Val) ) 

#define IIviUpconverterRFOutput_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviUpconverterRFOutput_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviUpconverterRFOutput_get_Gain(This,Val)	\
    ( (This)->lpVtbl -> get_Gain(This,Val) ) 

#define IIviUpconverterRFOutput_put_Gain(This,Val)	\
    ( (This)->lpVtbl -> put_Gain(This,Val) ) 

#define IIviUpconverterRFOutput_get_Bandwidth(This,Val)	\
    ( (This)->lpVtbl -> get_Bandwidth(This,Val) ) 

#define IIviUpconverterRFOutput_put_Bandwidth(This,Val)	\
    ( (This)->lpVtbl -> put_Bandwidth(This,Val) ) 

#define IIviUpconverterRFOutput_get_IsReady(This,Val)	\
    ( (This)->lpVtbl -> get_IsReady(This,Val) ) 

#define IIviUpconverterRFOutput_get_Level(This,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Val) ) 

#define IIviUpconverterRFOutput_put_Level(This,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Val) ) 

#define IIviUpconverterRFOutput_get_AttenuatorHoldEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_AttenuatorHoldEnabled(This,Val) ) 

#define IIviUpconverterRFOutput_put_AttenuatorHoldEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_AttenuatorHoldEnabled(This,Val) ) 

#define IIviUpconverterRFOutput_get_ReadyTrigger(This,Val)	\
    ( (This)->lpVtbl -> get_ReadyTrigger(This,Val) ) 

#define IIviUpconverterRFOutput_put_ReadyTrigger(This,Val)	\
    ( (This)->lpVtbl -> put_ReadyTrigger(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterRFOutput_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterExternalLO_INTERFACE_DEFINED__
#define __IIviUpconverterExternalLO_INTERFACE_DEFINED__

/* interface IIviUpconverterExternalLO */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterExternalLO;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53e1-a398-11d4-ba58-000064657374")
    IIviUpconverterExternalLO : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterExternalLOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterExternalLO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterExternalLO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterExternalLO * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviUpconverterExternalLO * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviUpconverterExternalLO * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviUpconverterExternalLO * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IIviUpconverterExternalLO * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviUpconverterExternalLOVtbl;

    interface IIviUpconverterExternalLO
    {
        CONST_VTBL struct IIviUpconverterExternalLOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterExternalLO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterExternalLO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterExternalLO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterExternalLO_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviUpconverterExternalLO_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviUpconverterExternalLO_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define IIviUpconverterExternalLO_put_Frequency(This,Val)	\
    ( (This)->lpVtbl -> put_Frequency(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterExternalLO_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterALC_INTERFACE_DEFINED__
#define __IIviUpconverterALC_INTERFACE_DEFINED__

/* interface IIviUpconverterALC */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterALC;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53dd-a398-11d4-ba58-000064657374")
    IIviUpconverterALC : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum IviUpconverterALCSourceEnum Source,
            /* [in] */ double Bandwidth) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Bandwidth( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Bandwidth( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum IviUpconverterALCSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum IviUpconverterALCSourceEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterALCVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterALC * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterALC * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterALC * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviUpconverterALC * This,
            /* [in] */ enum IviUpconverterALCSourceEnum Source,
            /* [in] */ double Bandwidth);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )( 
            IIviUpconverterALC * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bandwidth )( 
            IIviUpconverterALC * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviUpconverterALC * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviUpconverterALC * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviUpconverterALC * This,
            /* [retval][out] */ enum IviUpconverterALCSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviUpconverterALC * This,
            /* [in] */ enum IviUpconverterALCSourceEnum Val);
        
        END_INTERFACE
    } IIviUpconverterALCVtbl;

    interface IIviUpconverterALC
    {
        CONST_VTBL struct IIviUpconverterALCVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterALC_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterALC_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterALC_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterALC_Configure(This,Source,Bandwidth)	\
    ( (This)->lpVtbl -> Configure(This,Source,Bandwidth) ) 

#define IIviUpconverterALC_get_Bandwidth(This,Val)	\
    ( (This)->lpVtbl -> get_Bandwidth(This,Val) ) 

#define IIviUpconverterALC_put_Bandwidth(This,Val)	\
    ( (This)->lpVtbl -> put_Bandwidth(This,Val) ) 

#define IIviUpconverterALC_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviUpconverterALC_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviUpconverterALC_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IIviUpconverterALC_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterALC_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterIQ_INTERFACE_DEFINED__
#define __IIviUpconverterIQ_INTERFACE_DEFINED__

/* interface IIviUpconverterIQ */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterIQ;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53e6-a398-11d4-ba58-000064657374")
    IIviUpconverterIQ : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Calibrate( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Impairment( 
            /* [retval][out] */ IIviUpconverterIQImpairment **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NominalVoltage( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SwapEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SwapEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterIQVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterIQ * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterIQ * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterIQ * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Calibrate )( 
            IIviUpconverterIQ * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Impairment )( 
            IIviUpconverterIQ * This,
            /* [retval][out] */ IIviUpconverterIQImpairment **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviUpconverterIQ * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviUpconverterIQ * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NominalVoltage )( 
            IIviUpconverterIQ * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SwapEnabled )( 
            IIviUpconverterIQ * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SwapEnabled )( 
            IIviUpconverterIQ * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IIviUpconverterIQVtbl;

    interface IIviUpconverterIQ
    {
        CONST_VTBL struct IIviUpconverterIQVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterIQ_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterIQ_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterIQ_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterIQ_Calibrate(This)	\
    ( (This)->lpVtbl -> Calibrate(This) ) 

#define IIviUpconverterIQ_get_Impairment(This,Val)	\
    ( (This)->lpVtbl -> get_Impairment(This,Val) ) 

#define IIviUpconverterIQ_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviUpconverterIQ_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviUpconverterIQ_get_NominalVoltage(This,Val)	\
    ( (This)->lpVtbl -> get_NominalVoltage(This,Val) ) 

#define IIviUpconverterIQ_get_SwapEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_SwapEnabled(This,Val) ) 

#define IIviUpconverterIQ_put_SwapEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_SwapEnabled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterIQ_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterIQImpairment_INTERFACE_DEFINED__
#define __IIviUpconverterIQImpairment_INTERFACE_DEFINED__

/* interface IIviUpconverterIQImpairment */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterIQImpairment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53e7-a398-11d4-ba58-000064657374")
    IIviUpconverterIQImpairment : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double IOffset,
            /* [in] */ double QOffset,
            /* [in] */ double Ratio,
            /* [in] */ double Skew) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IOffset( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_IOffset( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_QOffset( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_QOffset( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Ratio( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Ratio( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Skew( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Skew( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterIQImpairmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterIQImpairment * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterIQImpairment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterIQImpairment * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviUpconverterIQImpairment * This,
            /* [in] */ double IOffset,
            /* [in] */ double QOffset,
            /* [in] */ double Ratio,
            /* [in] */ double Skew);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviUpconverterIQImpairment * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviUpconverterIQImpairment * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IOffset )( 
            IIviUpconverterIQImpairment * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IOffset )( 
            IIviUpconverterIQImpairment * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_QOffset )( 
            IIviUpconverterIQImpairment * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_QOffset )( 
            IIviUpconverterIQImpairment * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ratio )( 
            IIviUpconverterIQImpairment * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Ratio )( 
            IIviUpconverterIQImpairment * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Skew )( 
            IIviUpconverterIQImpairment * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Skew )( 
            IIviUpconverterIQImpairment * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviUpconverterIQImpairmentVtbl;

    interface IIviUpconverterIQImpairment
    {
        CONST_VTBL struct IIviUpconverterIQImpairmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterIQImpairment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterIQImpairment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterIQImpairment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterIQImpairment_Configure(This,IOffset,QOffset,Ratio,Skew)	\
    ( (This)->lpVtbl -> Configure(This,IOffset,QOffset,Ratio,Skew) ) 

#define IIviUpconverterIQImpairment_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviUpconverterIQImpairment_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviUpconverterIQImpairment_get_IOffset(This,Val)	\
    ( (This)->lpVtbl -> get_IOffset(This,Val) ) 

#define IIviUpconverterIQImpairment_put_IOffset(This,Val)	\
    ( (This)->lpVtbl -> put_IOffset(This,Val) ) 

#define IIviUpconverterIQImpairment_get_QOffset(This,Val)	\
    ( (This)->lpVtbl -> get_QOffset(This,Val) ) 

#define IIviUpconverterIQImpairment_put_QOffset(This,Val)	\
    ( (This)->lpVtbl -> put_QOffset(This,Val) ) 

#define IIviUpconverterIQImpairment_get_Ratio(This,Val)	\
    ( (This)->lpVtbl -> get_Ratio(This,Val) ) 

#define IIviUpconverterIQImpairment_put_Ratio(This,Val)	\
    ( (This)->lpVtbl -> put_Ratio(This,Val) ) 

#define IIviUpconverterIQImpairment_get_Skew(This,Val)	\
    ( (This)->lpVtbl -> get_Skew(This,Val) ) 

#define IIviUpconverterIQImpairment_put_Skew(This,Val)	\
    ( (This)->lpVtbl -> put_Skew(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterIQImpairment_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterAnalogModulation_INTERFACE_DEFINED__
#define __IIviUpconverterAnalogModulation_INTERFACE_DEFINED__

/* interface IIviUpconverterAnalogModulation */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterAnalogModulation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53df-a398-11d4-ba58-000064657374")
    IIviUpconverterAnalogModulation : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_AM( 
            /* [retval][out] */ IIviUpconverterAM **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FM( 
            /* [retval][out] */ IIviUpconverterFM **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PM( 
            /* [retval][out] */ IIviUpconverterPM **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ IIviUpconverterAnalogModulationSource **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterAnalogModulationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterAnalogModulation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterAnalogModulation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterAnalogModulation * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AM )( 
            IIviUpconverterAnalogModulation * This,
            /* [retval][out] */ IIviUpconverterAM **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FM )( 
            IIviUpconverterAnalogModulation * This,
            /* [retval][out] */ IIviUpconverterFM **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PM )( 
            IIviUpconverterAnalogModulation * This,
            /* [retval][out] */ IIviUpconverterPM **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviUpconverterAnalogModulation * This,
            /* [retval][out] */ IIviUpconverterAnalogModulationSource **Val);
        
        END_INTERFACE
    } IIviUpconverterAnalogModulationVtbl;

    interface IIviUpconverterAnalogModulation
    {
        CONST_VTBL struct IIviUpconverterAnalogModulationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterAnalogModulation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterAnalogModulation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterAnalogModulation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterAnalogModulation_get_AM(This,Val)	\
    ( (This)->lpVtbl -> get_AM(This,Val) ) 

#define IIviUpconverterAnalogModulation_get_FM(This,Val)	\
    ( (This)->lpVtbl -> get_FM(This,Val) ) 

#define IIviUpconverterAnalogModulation_get_PM(This,Val)	\
    ( (This)->lpVtbl -> get_PM(This,Val) ) 

#define IIviUpconverterAnalogModulation_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterAnalogModulation_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterAM_INTERFACE_DEFINED__
#define __IIviUpconverterAM_INTERFACE_DEFINED__

/* interface IIviUpconverterAM */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterAM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53de-a398-11d4-ba58-000064657374")
    IIviUpconverterAM : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ enum IviUpconverterAMScalingEnum Scaling,
            /* [in] */ double Depth) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Scaling( 
            /* [retval][out] */ enum IviUpconverterAMScalingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Scaling( 
            /* [in] */ enum IviUpconverterAMScalingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Depth( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Depth( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NominalVoltage( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalCoupling( 
            /* [retval][out] */ enum IviUpconverterAMExternalCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalCoupling( 
            /* [in] */ enum IviUpconverterAMExternalCouplingEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterAMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterAM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterAM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterAM * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviUpconverterAM * This,
            /* [in] */ BSTR Source,
            /* [in] */ enum IviUpconverterAMScalingEnum Scaling,
            /* [in] */ double Depth);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviUpconverterAM * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviUpconverterAM * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scaling )( 
            IIviUpconverterAM * This,
            /* [retval][out] */ enum IviUpconverterAMScalingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scaling )( 
            IIviUpconverterAM * This,
            /* [in] */ enum IviUpconverterAMScalingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Depth )( 
            IIviUpconverterAM * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Depth )( 
            IIviUpconverterAM * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NominalVoltage )( 
            IIviUpconverterAM * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviUpconverterAM * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviUpconverterAM * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalCoupling )( 
            IIviUpconverterAM * This,
            /* [retval][out] */ enum IviUpconverterAMExternalCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalCoupling )( 
            IIviUpconverterAM * This,
            /* [in] */ enum IviUpconverterAMExternalCouplingEnum Val);
        
        END_INTERFACE
    } IIviUpconverterAMVtbl;

    interface IIviUpconverterAM
    {
        CONST_VTBL struct IIviUpconverterAMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterAM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterAM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterAM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterAM_Configure(This,Source,Scaling,Depth)	\
    ( (This)->lpVtbl -> Configure(This,Source,Scaling,Depth) ) 

#define IIviUpconverterAM_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IIviUpconverterAM_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define IIviUpconverterAM_get_Scaling(This,Val)	\
    ( (This)->lpVtbl -> get_Scaling(This,Val) ) 

#define IIviUpconverterAM_put_Scaling(This,Val)	\
    ( (This)->lpVtbl -> put_Scaling(This,Val) ) 

#define IIviUpconverterAM_get_Depth(This,Val)	\
    ( (This)->lpVtbl -> get_Depth(This,Val) ) 

#define IIviUpconverterAM_put_Depth(This,Val)	\
    ( (This)->lpVtbl -> put_Depth(This,Val) ) 

#define IIviUpconverterAM_get_NominalVoltage(This,Val)	\
    ( (This)->lpVtbl -> get_NominalVoltage(This,Val) ) 

#define IIviUpconverterAM_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviUpconverterAM_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviUpconverterAM_get_ExternalCoupling(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalCoupling(This,Val) ) 

#define IIviUpconverterAM_put_ExternalCoupling(This,Val)	\
    ( (This)->lpVtbl -> put_ExternalCoupling(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterAM_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterFM_INTERFACE_DEFINED__
#define __IIviUpconverterFM_INTERFACE_DEFINED__

/* interface IIviUpconverterFM */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterFM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53e2-a398-11d4-ba58-000064657374")
    IIviUpconverterFM : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ double Deviation) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Deviation( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Deviation( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NominalVoltage( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalCoupling( 
            /* [retval][out] */ enum IviUpconverterFMExternalCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalCoupling( 
            /* [in] */ enum IviUpconverterFMExternalCouplingEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterFMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterFM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterFM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterFM * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviUpconverterFM * This,
            /* [in] */ BSTR Source,
            /* [in] */ double Deviation);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviUpconverterFM * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviUpconverterFM * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Deviation )( 
            IIviUpconverterFM * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Deviation )( 
            IIviUpconverterFM * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NominalVoltage )( 
            IIviUpconverterFM * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviUpconverterFM * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviUpconverterFM * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalCoupling )( 
            IIviUpconverterFM * This,
            /* [retval][out] */ enum IviUpconverterFMExternalCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalCoupling )( 
            IIviUpconverterFM * This,
            /* [in] */ enum IviUpconverterFMExternalCouplingEnum Val);
        
        END_INTERFACE
    } IIviUpconverterFMVtbl;

    interface IIviUpconverterFM
    {
        CONST_VTBL struct IIviUpconverterFMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterFM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterFM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterFM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterFM_Configure(This,Source,Deviation)	\
    ( (This)->lpVtbl -> Configure(This,Source,Deviation) ) 

#define IIviUpconverterFM_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IIviUpconverterFM_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define IIviUpconverterFM_get_Deviation(This,Val)	\
    ( (This)->lpVtbl -> get_Deviation(This,Val) ) 

#define IIviUpconverterFM_put_Deviation(This,Val)	\
    ( (This)->lpVtbl -> put_Deviation(This,Val) ) 

#define IIviUpconverterFM_get_NominalVoltage(This,Val)	\
    ( (This)->lpVtbl -> get_NominalVoltage(This,Val) ) 

#define IIviUpconverterFM_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviUpconverterFM_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviUpconverterFM_get_ExternalCoupling(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalCoupling(This,Val) ) 

#define IIviUpconverterFM_put_ExternalCoupling(This,Val)	\
    ( (This)->lpVtbl -> put_ExternalCoupling(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterFM_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterPM_INTERFACE_DEFINED__
#define __IIviUpconverterPM_INTERFACE_DEFINED__

/* interface IIviUpconverterPM */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterPM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53e9-a398-11d4-ba58-000064657374")
    IIviUpconverterPM : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ double Deviation) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Deviation( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Deviation( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NominalVoltage( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalCoupling( 
            /* [retval][out] */ enum IviUpconverterPMExternalCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalCoupling( 
            /* [in] */ enum IviUpconverterPMExternalCouplingEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterPMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterPM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterPM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterPM * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviUpconverterPM * This,
            /* [in] */ BSTR Source,
            /* [in] */ double Deviation);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviUpconverterPM * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviUpconverterPM * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Deviation )( 
            IIviUpconverterPM * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Deviation )( 
            IIviUpconverterPM * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NominalVoltage )( 
            IIviUpconverterPM * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviUpconverterPM * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviUpconverterPM * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalCoupling )( 
            IIviUpconverterPM * This,
            /* [retval][out] */ enum IviUpconverterPMExternalCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalCoupling )( 
            IIviUpconverterPM * This,
            /* [in] */ enum IviUpconverterPMExternalCouplingEnum Val);
        
        END_INTERFACE
    } IIviUpconverterPMVtbl;

    interface IIviUpconverterPM
    {
        CONST_VTBL struct IIviUpconverterPMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterPM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterPM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterPM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterPM_Configure(This,Source,Deviation)	\
    ( (This)->lpVtbl -> Configure(This,Source,Deviation) ) 

#define IIviUpconverterPM_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IIviUpconverterPM_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define IIviUpconverterPM_get_Deviation(This,Val)	\
    ( (This)->lpVtbl -> get_Deviation(This,Val) ) 

#define IIviUpconverterPM_put_Deviation(This,Val)	\
    ( (This)->lpVtbl -> put_Deviation(This,Val) ) 

#define IIviUpconverterPM_get_NominalVoltage(This,Val)	\
    ( (This)->lpVtbl -> get_NominalVoltage(This,Val) ) 

#define IIviUpconverterPM_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviUpconverterPM_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviUpconverterPM_get_ExternalCoupling(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalCoupling(This,Val) ) 

#define IIviUpconverterPM_put_ExternalCoupling(This,Val)	\
    ( (This)->lpVtbl -> put_ExternalCoupling(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterPM_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterAnalogModulationSource_INTERFACE_DEFINED__
#define __IIviUpconverterAnalogModulationSource_INTERFACE_DEFINED__

/* interface IIviUpconverterAnalogModulationSource */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterAnalogModulationSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53e0-a398-11d4-ba58-000064657374")
    IIviUpconverterAnalogModulationSource : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterAnalogModulationSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterAnalogModulationSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterAnalogModulationSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterAnalogModulationSource * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviUpconverterAnalogModulationSource * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviUpconverterAnalogModulationSource * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } IIviUpconverterAnalogModulationSourceVtbl;

    interface IIviUpconverterAnalogModulationSource
    {
        CONST_VTBL struct IIviUpconverterAnalogModulationSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterAnalogModulationSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterAnalogModulationSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterAnalogModulationSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterAnalogModulationSource_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IIviUpconverterAnalogModulationSource_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterAnalogModulationSource_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterPulseModulation_INTERFACE_DEFINED__
#define __IIviUpconverterPulseModulation_INTERFACE_DEFINED__

/* interface IIviUpconverterPulseModulation */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterPulseModulation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53ec-a398-11d4-ba58-000064657374")
    IIviUpconverterPulseModulation : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalPolarity( 
            /* [retval][out] */ enum IviUpconverterPulseModulationExternalPolarityEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalPolarity( 
            /* [in] */ enum IviUpconverterPulseModulationExternalPolarityEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterPulseModulationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterPulseModulation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterPulseModulation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterPulseModulation * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviUpconverterPulseModulation * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviUpconverterPulseModulation * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalPolarity )( 
            IIviUpconverterPulseModulation * This,
            /* [retval][out] */ enum IviUpconverterPulseModulationExternalPolarityEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalPolarity )( 
            IIviUpconverterPulseModulation * This,
            /* [in] */ enum IviUpconverterPulseModulationExternalPolarityEnum Val);
        
        END_INTERFACE
    } IIviUpconverterPulseModulationVtbl;

    interface IIviUpconverterPulseModulation
    {
        CONST_VTBL struct IIviUpconverterPulseModulationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterPulseModulation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterPulseModulation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterPulseModulation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterPulseModulation_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviUpconverterPulseModulation_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviUpconverterPulseModulation_get_ExternalPolarity(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalPolarity(This,Val) ) 

#define IIviUpconverterPulseModulation_put_ExternalPolarity(This,Val)	\
    ( (This)->lpVtbl -> put_ExternalPolarity(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterPulseModulation_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterSweep_INTERFACE_DEFINED__
#define __IIviUpconverterSweep_INTERFACE_DEFINED__

/* interface IIviUpconverterSweep */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterSweep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53ef-a398-11d4-ba58-000064657374")
    IIviUpconverterSweep : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum IviUpconverterSweepModeEnum Mode,
            /* [in] */ BSTR TriggerSource) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencySweep( 
            /* [retval][out] */ IIviUpconverterFrequencySweep **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PowerSweep( 
            /* [retval][out] */ IIviUpconverterPowerSweep **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyStep( 
            /* [retval][out] */ IIviUpconverterFrequencyStep **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PowerStep( 
            /* [retval][out] */ IIviUpconverterPowerStep **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_List( 
            /* [retval][out] */ IIviUpconverterList **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ enum IviUpconverterSweepModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ enum IviUpconverterSweepModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerSource( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerSource( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IsSweeping( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_GainStep( 
            /* [retval][out] */ IIviUpconverterGainStep **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_GainSweep( 
            /* [retval][out] */ IIviUpconverterGainSweep **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterSweepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterSweep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterSweep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterSweep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviUpconverterSweep * This,
            /* [in] */ enum IviUpconverterSweepModeEnum Mode,
            /* [in] */ BSTR TriggerSource);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencySweep )( 
            IIviUpconverterSweep * This,
            /* [retval][out] */ IIviUpconverterFrequencySweep **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PowerSweep )( 
            IIviUpconverterSweep * This,
            /* [retval][out] */ IIviUpconverterPowerSweep **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyStep )( 
            IIviUpconverterSweep * This,
            /* [retval][out] */ IIviUpconverterFrequencyStep **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PowerStep )( 
            IIviUpconverterSweep * This,
            /* [retval][out] */ IIviUpconverterPowerStep **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_List )( 
            IIviUpconverterSweep * This,
            /* [retval][out] */ IIviUpconverterList **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IIviUpconverterSweep * This,
            /* [retval][out] */ enum IviUpconverterSweepModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IIviUpconverterSweep * This,
            /* [in] */ enum IviUpconverterSweepModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerSource )( 
            IIviUpconverterSweep * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerSource )( 
            IIviUpconverterSweep * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSweeping )( 
            IIviUpconverterSweep * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GainStep )( 
            IIviUpconverterSweep * This,
            /* [retval][out] */ IIviUpconverterGainStep **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GainSweep )( 
            IIviUpconverterSweep * This,
            /* [retval][out] */ IIviUpconverterGainSweep **Val);
        
        END_INTERFACE
    } IIviUpconverterSweepVtbl;

    interface IIviUpconverterSweep
    {
        CONST_VTBL struct IIviUpconverterSweepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterSweep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterSweep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterSweep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterSweep_Configure(This,Mode,TriggerSource)	\
    ( (This)->lpVtbl -> Configure(This,Mode,TriggerSource) ) 

#define IIviUpconverterSweep_get_FrequencySweep(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencySweep(This,Val) ) 

#define IIviUpconverterSweep_get_PowerSweep(This,Val)	\
    ( (This)->lpVtbl -> get_PowerSweep(This,Val) ) 

#define IIviUpconverterSweep_get_FrequencyStep(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencyStep(This,Val) ) 

#define IIviUpconverterSweep_get_PowerStep(This,Val)	\
    ( (This)->lpVtbl -> get_PowerStep(This,Val) ) 

#define IIviUpconverterSweep_get_List(This,Val)	\
    ( (This)->lpVtbl -> get_List(This,Val) ) 

#define IIviUpconverterSweep_get_Mode(This,Val)	\
    ( (This)->lpVtbl -> get_Mode(This,Val) ) 

#define IIviUpconverterSweep_put_Mode(This,Val)	\
    ( (This)->lpVtbl -> put_Mode(This,Val) ) 

#define IIviUpconverterSweep_get_TriggerSource(This,Val)	\
    ( (This)->lpVtbl -> get_TriggerSource(This,Val) ) 

#define IIviUpconverterSweep_put_TriggerSource(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerSource(This,Val) ) 

#define IIviUpconverterSweep_get_IsSweeping(This,Val)	\
    ( (This)->lpVtbl -> get_IsSweeping(This,Val) ) 

#define IIviUpconverterSweep_get_GainStep(This,Val)	\
    ( (This)->lpVtbl -> get_GainStep(This,Val) ) 

#define IIviUpconverterSweep_get_GainSweep(This,Val)	\
    ( (This)->lpVtbl -> get_GainSweep(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterSweep_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterFrequencySweep_INTERFACE_DEFINED__
#define __IIviUpconverterFrequencySweep_INTERFACE_DEFINED__

/* interface IIviUpconverterFrequencySweep */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterFrequencySweep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53e4-a398-11d4-ba58-000064657374")
    IIviUpconverterFrequencySweep : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ double Start,
            /* [in] */ double Stop) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureCenterSpan( 
            /* [in] */ double Center,
            /* [in] */ double Span) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Time( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Time( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterFrequencySweepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterFrequencySweep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterFrequencySweep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterFrequencySweep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviUpconverterFrequencySweep * This,
            /* [in] */ double Start,
            /* [in] */ double Stop);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCenterSpan )( 
            IIviUpconverterFrequencySweep * This,
            /* [in] */ double Center,
            /* [in] */ double Span);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviUpconverterFrequencySweep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviUpconverterFrequencySweep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviUpconverterFrequencySweep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviUpconverterFrequencySweep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            IIviUpconverterFrequencySweep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            IIviUpconverterFrequencySweep * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviUpconverterFrequencySweepVtbl;

    interface IIviUpconverterFrequencySweep
    {
        CONST_VTBL struct IIviUpconverterFrequencySweepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterFrequencySweep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterFrequencySweep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterFrequencySweep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterFrequencySweep_ConfigureStartStop(This,Start,Stop)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop) ) 

#define IIviUpconverterFrequencySweep_ConfigureCenterSpan(This,Center,Span)	\
    ( (This)->lpVtbl -> ConfigureCenterSpan(This,Center,Span) ) 

#define IIviUpconverterFrequencySweep_get_Start(This,Val)	\
    ( (This)->lpVtbl -> get_Start(This,Val) ) 

#define IIviUpconverterFrequencySweep_put_Start(This,Val)	\
    ( (This)->lpVtbl -> put_Start(This,Val) ) 

#define IIviUpconverterFrequencySweep_get_Stop(This,Val)	\
    ( (This)->lpVtbl -> get_Stop(This,Val) ) 

#define IIviUpconverterFrequencySweep_put_Stop(This,Val)	\
    ( (This)->lpVtbl -> put_Stop(This,Val) ) 

#define IIviUpconverterFrequencySweep_get_Time(This,Val)	\
    ( (This)->lpVtbl -> get_Time(This,Val) ) 

#define IIviUpconverterFrequencySweep_put_Time(This,Val)	\
    ( (This)->lpVtbl -> put_Time(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterFrequencySweep_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterPowerSweep_INTERFACE_DEFINED__
#define __IIviUpconverterPowerSweep_INTERFACE_DEFINED__

/* interface IIviUpconverterPowerSweep */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterPowerSweep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53eb-a398-11d4-ba58-000064657374")
    IIviUpconverterPowerSweep : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ double Start,
            /* [in] */ double Stop) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Time( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Time( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterPowerSweepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterPowerSweep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterPowerSweep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterPowerSweep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviUpconverterPowerSweep * This,
            /* [in] */ double Start,
            /* [in] */ double Stop);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviUpconverterPowerSweep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviUpconverterPowerSweep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviUpconverterPowerSweep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviUpconverterPowerSweep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            IIviUpconverterPowerSweep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            IIviUpconverterPowerSweep * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviUpconverterPowerSweepVtbl;

    interface IIviUpconverterPowerSweep
    {
        CONST_VTBL struct IIviUpconverterPowerSweepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterPowerSweep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterPowerSweep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterPowerSweep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterPowerSweep_ConfigureStartStop(This,Start,Stop)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop) ) 

#define IIviUpconverterPowerSweep_get_Start(This,Val)	\
    ( (This)->lpVtbl -> get_Start(This,Val) ) 

#define IIviUpconverterPowerSweep_put_Start(This,Val)	\
    ( (This)->lpVtbl -> put_Start(This,Val) ) 

#define IIviUpconverterPowerSweep_get_Stop(This,Val)	\
    ( (This)->lpVtbl -> get_Stop(This,Val) ) 

#define IIviUpconverterPowerSweep_put_Stop(This,Val)	\
    ( (This)->lpVtbl -> put_Stop(This,Val) ) 

#define IIviUpconverterPowerSweep_get_Time(This,Val)	\
    ( (This)->lpVtbl -> get_Time(This,Val) ) 

#define IIviUpconverterPowerSweep_put_Time(This,Val)	\
    ( (This)->lpVtbl -> put_Time(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterPowerSweep_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterFrequencyStep_INTERFACE_DEFINED__
#define __IIviUpconverterFrequencyStep_INTERFACE_DEFINED__

/* interface IIviUpconverterFrequencyStep */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterFrequencyStep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53e3-a398-11d4-ba58-000064657374")
    IIviUpconverterFrequencyStep : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDwell( 
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ double Start,
            /* [in] */ double Stop,
            /* [in] */ enum IviUpconverterFrequencyStepScalingEnum Scaling,
            /* [in] */ double StepSize) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Scaling( 
            /* [retval][out] */ enum IviUpconverterFrequencyStepScalingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Scaling( 
            /* [in] */ enum IviUpconverterFrequencyStepScalingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Dwell( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Dwell( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterFrequencyStepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterFrequencyStep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterFrequencyStep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterFrequencyStep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviUpconverterFrequencyStep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDwell )( 
            IIviUpconverterFrequencyStep * This,
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviUpconverterFrequencyStep * This,
            /* [in] */ double Start,
            /* [in] */ double Stop,
            /* [in] */ enum IviUpconverterFrequencyStepScalingEnum Scaling,
            /* [in] */ double StepSize);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviUpconverterFrequencyStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviUpconverterFrequencyStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviUpconverterFrequencyStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviUpconverterFrequencyStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scaling )( 
            IIviUpconverterFrequencyStep * This,
            /* [retval][out] */ enum IviUpconverterFrequencyStepScalingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scaling )( 
            IIviUpconverterFrequencyStep * This,
            /* [in] */ enum IviUpconverterFrequencyStepScalingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IIviUpconverterFrequencyStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IIviUpconverterFrequencyStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepEnabled )( 
            IIviUpconverterFrequencyStep * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepEnabled )( 
            IIviUpconverterFrequencyStep * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dwell )( 
            IIviUpconverterFrequencyStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dwell )( 
            IIviUpconverterFrequencyStep * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviUpconverterFrequencyStepVtbl;

    interface IIviUpconverterFrequencyStep
    {
        CONST_VTBL struct IIviUpconverterFrequencyStepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterFrequencyStep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterFrequencyStep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterFrequencyStep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterFrequencyStep_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IIviUpconverterFrequencyStep_ConfigureDwell(This,SingleStepEnabled,Dwell)	\
    ( (This)->lpVtbl -> ConfigureDwell(This,SingleStepEnabled,Dwell) ) 

#define IIviUpconverterFrequencyStep_ConfigureStartStop(This,Start,Stop,Scaling,StepSize)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop,Scaling,StepSize) ) 

#define IIviUpconverterFrequencyStep_get_Start(This,Val)	\
    ( (This)->lpVtbl -> get_Start(This,Val) ) 

#define IIviUpconverterFrequencyStep_put_Start(This,Val)	\
    ( (This)->lpVtbl -> put_Start(This,Val) ) 

#define IIviUpconverterFrequencyStep_get_Stop(This,Val)	\
    ( (This)->lpVtbl -> get_Stop(This,Val) ) 

#define IIviUpconverterFrequencyStep_put_Stop(This,Val)	\
    ( (This)->lpVtbl -> put_Stop(This,Val) ) 

#define IIviUpconverterFrequencyStep_get_Scaling(This,Val)	\
    ( (This)->lpVtbl -> get_Scaling(This,Val) ) 

#define IIviUpconverterFrequencyStep_put_Scaling(This,Val)	\
    ( (This)->lpVtbl -> put_Scaling(This,Val) ) 

#define IIviUpconverterFrequencyStep_get_Size(This,Val)	\
    ( (This)->lpVtbl -> get_Size(This,Val) ) 

#define IIviUpconverterFrequencyStep_put_Size(This,Val)	\
    ( (This)->lpVtbl -> put_Size(This,Val) ) 

#define IIviUpconverterFrequencyStep_get_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_SingleStepEnabled(This,Val) ) 

#define IIviUpconverterFrequencyStep_put_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_SingleStepEnabled(This,Val) ) 

#define IIviUpconverterFrequencyStep_get_Dwell(This,Val)	\
    ( (This)->lpVtbl -> get_Dwell(This,Val) ) 

#define IIviUpconverterFrequencyStep_put_Dwell(This,Val)	\
    ( (This)->lpVtbl -> put_Dwell(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterFrequencyStep_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterPowerStep_INTERFACE_DEFINED__
#define __IIviUpconverterPowerStep_INTERFACE_DEFINED__

/* interface IIviUpconverterPowerStep */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterPowerStep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53ea-a398-11d4-ba58-000064657374")
    IIviUpconverterPowerStep : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDwell( 
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ double Start,
            /* [in] */ double Stop,
            /* [in] */ double StepSize) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Dwell( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Dwell( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterPowerStepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterPowerStep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterPowerStep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterPowerStep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviUpconverterPowerStep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDwell )( 
            IIviUpconverterPowerStep * This,
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviUpconverterPowerStep * This,
            /* [in] */ double Start,
            /* [in] */ double Stop,
            /* [in] */ double StepSize);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviUpconverterPowerStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviUpconverterPowerStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviUpconverterPowerStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviUpconverterPowerStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IIviUpconverterPowerStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IIviUpconverterPowerStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepEnabled )( 
            IIviUpconverterPowerStep * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepEnabled )( 
            IIviUpconverterPowerStep * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dwell )( 
            IIviUpconverterPowerStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dwell )( 
            IIviUpconverterPowerStep * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviUpconverterPowerStepVtbl;

    interface IIviUpconverterPowerStep
    {
        CONST_VTBL struct IIviUpconverterPowerStepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterPowerStep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterPowerStep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterPowerStep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterPowerStep_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IIviUpconverterPowerStep_ConfigureDwell(This,SingleStepEnabled,Dwell)	\
    ( (This)->lpVtbl -> ConfigureDwell(This,SingleStepEnabled,Dwell) ) 

#define IIviUpconverterPowerStep_ConfigureStartStop(This,Start,Stop,StepSize)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop,StepSize) ) 

#define IIviUpconverterPowerStep_get_Start(This,Val)	\
    ( (This)->lpVtbl -> get_Start(This,Val) ) 

#define IIviUpconverterPowerStep_put_Start(This,Val)	\
    ( (This)->lpVtbl -> put_Start(This,Val) ) 

#define IIviUpconverterPowerStep_get_Stop(This,Val)	\
    ( (This)->lpVtbl -> get_Stop(This,Val) ) 

#define IIviUpconverterPowerStep_put_Stop(This,Val)	\
    ( (This)->lpVtbl -> put_Stop(This,Val) ) 

#define IIviUpconverterPowerStep_get_Size(This,Val)	\
    ( (This)->lpVtbl -> get_Size(This,Val) ) 

#define IIviUpconverterPowerStep_put_Size(This,Val)	\
    ( (This)->lpVtbl -> put_Size(This,Val) ) 

#define IIviUpconverterPowerStep_get_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_SingleStepEnabled(This,Val) ) 

#define IIviUpconverterPowerStep_put_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_SingleStepEnabled(This,Val) ) 

#define IIviUpconverterPowerStep_get_Dwell(This,Val)	\
    ( (This)->lpVtbl -> get_Dwell(This,Val) ) 

#define IIviUpconverterPowerStep_put_Dwell(This,Val)	\
    ( (This)->lpVtbl -> put_Dwell(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterPowerStep_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterList_INTERFACE_DEFINED__
#define __IIviUpconverterList_INTERFACE_DEFINED__

/* interface IIviUpconverterList */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53e8-a398-11d4-ba58-000064657374")
    IIviUpconverterList : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateFrequencyPower( 
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Frequency,
            /* [in] */ SAFEARRAY * *Power) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreatePower( 
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Power) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateFrequency( 
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Frequency) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ClearAll( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDwell( 
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateGain( 
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Gain) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateFrequencyGain( 
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Frequency,
            /* [in] */ SAFEARRAY * *Gain) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Dwell( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Dwell( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedName( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedName( 
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterList * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviUpconverterList * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateFrequencyPower )( 
            IIviUpconverterList * This,
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Frequency,
            /* [in] */ SAFEARRAY * *Power);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreatePower )( 
            IIviUpconverterList * This,
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Power);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateFrequency )( 
            IIviUpconverterList * This,
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Frequency);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ClearAll )( 
            IIviUpconverterList * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDwell )( 
            IIviUpconverterList * This,
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateGain )( 
            IIviUpconverterList * This,
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Gain);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateFrequencyGain )( 
            IIviUpconverterList * This,
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *Frequency,
            /* [in] */ SAFEARRAY * *Gain);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepEnabled )( 
            IIviUpconverterList * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepEnabled )( 
            IIviUpconverterList * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dwell )( 
            IIviUpconverterList * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dwell )( 
            IIviUpconverterList * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedName )( 
            IIviUpconverterList * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedName )( 
            IIviUpconverterList * This,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } IIviUpconverterListVtbl;

    interface IIviUpconverterList
    {
        CONST_VTBL struct IIviUpconverterListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterList_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IIviUpconverterList_CreateFrequencyPower(This,Name,Frequency,Power)	\
    ( (This)->lpVtbl -> CreateFrequencyPower(This,Name,Frequency,Power) ) 

#define IIviUpconverterList_CreatePower(This,Name,Power)	\
    ( (This)->lpVtbl -> CreatePower(This,Name,Power) ) 

#define IIviUpconverterList_CreateFrequency(This,Name,Frequency)	\
    ( (This)->lpVtbl -> CreateFrequency(This,Name,Frequency) ) 

#define IIviUpconverterList_ClearAll(This)	\
    ( (This)->lpVtbl -> ClearAll(This) ) 

#define IIviUpconverterList_ConfigureDwell(This,SingleStepEnabled,Dwell)	\
    ( (This)->lpVtbl -> ConfigureDwell(This,SingleStepEnabled,Dwell) ) 

#define IIviUpconverterList_CreateGain(This,Name,Gain)	\
    ( (This)->lpVtbl -> CreateGain(This,Name,Gain) ) 

#define IIviUpconverterList_CreateFrequencyGain(This,Name,Frequency,Gain)	\
    ( (This)->lpVtbl -> CreateFrequencyGain(This,Name,Frequency,Gain) ) 

#define IIviUpconverterList_get_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_SingleStepEnabled(This,Val) ) 

#define IIviUpconverterList_put_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_SingleStepEnabled(This,Val) ) 

#define IIviUpconverterList_get_Dwell(This,Val)	\
    ( (This)->lpVtbl -> get_Dwell(This,Val) ) 

#define IIviUpconverterList_put_Dwell(This,Val)	\
    ( (This)->lpVtbl -> put_Dwell(This,Val) ) 

#define IIviUpconverterList_get_SelectedName(This,Val)	\
    ( (This)->lpVtbl -> get_SelectedName(This,Val) ) 

#define IIviUpconverterList_put_SelectedName(This,Val)	\
    ( (This)->lpVtbl -> put_SelectedName(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterList_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterGainStep_INTERFACE_DEFINED__
#define __IIviUpconverterGainStep_INTERFACE_DEFINED__

/* interface IIviUpconverterGainStep */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterGainStep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53f0-a398-11d4-ba58-000064657374")
    IIviUpconverterGainStep : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDwell( 
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ double Start,
            /* [in] */ double Stop,
            /* [in] */ double StepSize) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Dwell( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Dwell( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterGainStepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterGainStep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterGainStep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterGainStep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDwell )( 
            IIviUpconverterGainStep * This,
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviUpconverterGainStep * This,
            /* [in] */ double Start,
            /* [in] */ double Stop,
            /* [in] */ double StepSize);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviUpconverterGainStep * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dwell )( 
            IIviUpconverterGainStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dwell )( 
            IIviUpconverterGainStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepEnabled )( 
            IIviUpconverterGainStep * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepEnabled )( 
            IIviUpconverterGainStep * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IIviUpconverterGainStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IIviUpconverterGainStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviUpconverterGainStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviUpconverterGainStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviUpconverterGainStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviUpconverterGainStep * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviUpconverterGainStepVtbl;

    interface IIviUpconverterGainStep
    {
        CONST_VTBL struct IIviUpconverterGainStepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterGainStep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterGainStep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterGainStep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterGainStep_ConfigureDwell(This,SingleStepEnabled,Dwell)	\
    ( (This)->lpVtbl -> ConfigureDwell(This,SingleStepEnabled,Dwell) ) 

#define IIviUpconverterGainStep_ConfigureStartStop(This,Start,Stop,StepSize)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop,StepSize) ) 

#define IIviUpconverterGainStep_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IIviUpconverterGainStep_get_Dwell(This,Val)	\
    ( (This)->lpVtbl -> get_Dwell(This,Val) ) 

#define IIviUpconverterGainStep_put_Dwell(This,Val)	\
    ( (This)->lpVtbl -> put_Dwell(This,Val) ) 

#define IIviUpconverterGainStep_get_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_SingleStepEnabled(This,Val) ) 

#define IIviUpconverterGainStep_put_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_SingleStepEnabled(This,Val) ) 

#define IIviUpconverterGainStep_get_Size(This,Val)	\
    ( (This)->lpVtbl -> get_Size(This,Val) ) 

#define IIviUpconverterGainStep_put_Size(This,Val)	\
    ( (This)->lpVtbl -> put_Size(This,Val) ) 

#define IIviUpconverterGainStep_get_Start(This,Val)	\
    ( (This)->lpVtbl -> get_Start(This,Val) ) 

#define IIviUpconverterGainStep_put_Start(This,Val)	\
    ( (This)->lpVtbl -> put_Start(This,Val) ) 

#define IIviUpconverterGainStep_get_Stop(This,Val)	\
    ( (This)->lpVtbl -> get_Stop(This,Val) ) 

#define IIviUpconverterGainStep_put_Stop(This,Val)	\
    ( (This)->lpVtbl -> put_Stop(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterGainStep_INTERFACE_DEFINED__ */


#ifndef __IIviUpconverterGainSweep_INTERFACE_DEFINED__
#define __IIviUpconverterGainSweep_INTERFACE_DEFINED__

/* interface IIviUpconverterGainSweep */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviUpconverterGainSweep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53f1-a398-11d4-ba58-000064657374")
    IIviUpconverterGainSweep : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ double Start,
            /* [in] */ double Stop) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Time( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Time( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviUpconverterGainSweepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviUpconverterGainSweep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviUpconverterGainSweep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviUpconverterGainSweep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviUpconverterGainSweep * This,
            /* [in] */ double Start,
            /* [in] */ double Stop);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviUpconverterGainSweep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviUpconverterGainSweep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviUpconverterGainSweep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviUpconverterGainSweep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            IIviUpconverterGainSweep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            IIviUpconverterGainSweep * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviUpconverterGainSweepVtbl;

    interface IIviUpconverterGainSweep
    {
        CONST_VTBL struct IIviUpconverterGainSweepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviUpconverterGainSweep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviUpconverterGainSweep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviUpconverterGainSweep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviUpconverterGainSweep_ConfigureStartStop(This,Start,Stop)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop) ) 

#define IIviUpconverterGainSweep_get_Start(This,Val)	\
    ( (This)->lpVtbl -> get_Start(This,Val) ) 

#define IIviUpconverterGainSweep_put_Start(This,Val)	\
    ( (This)->lpVtbl -> put_Start(This,Val) ) 

#define IIviUpconverterGainSweep_get_Stop(This,Val)	\
    ( (This)->lpVtbl -> get_Stop(This,Val) ) 

#define IIviUpconverterGainSweep_put_Stop(This,Val)	\
    ( (This)->lpVtbl -> put_Stop(This,Val) ) 

#define IIviUpconverterGainSweep_get_Time(This,Val)	\
    ( (This)->lpVtbl -> get_Time(This,Val) ) 

#define IIviUpconverterGainSweep_put_Time(This,Val)	\
    ( (This)->lpVtbl -> put_Time(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviUpconverterGainSweep_INTERFACE_DEFINED__ */

#endif /* __IviUpconverterLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


