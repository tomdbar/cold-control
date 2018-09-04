

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:58:28 2016
 */
/* Compiler settings for IviDownconverterTypeLib.idl:
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


#ifndef __IviDownconverterTypeLib_h__
#define __IviDownconverterTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviDownconverter_FWD_DEFINED__
#define __IIviDownconverter_FWD_DEFINED__
typedef interface IIviDownconverter IIviDownconverter;

#endif 	/* __IIviDownconverter_FWD_DEFINED__ */


#ifndef __IIviDownconverterReferenceOscillator_FWD_DEFINED__
#define __IIviDownconverterReferenceOscillator_FWD_DEFINED__
typedef interface IIviDownconverterReferenceOscillator IIviDownconverterReferenceOscillator;

#endif 	/* __IIviDownconverterReferenceOscillator_FWD_DEFINED__ */


#ifndef __IIviDownconverterRFInput_FWD_DEFINED__
#define __IIviDownconverterRFInput_FWD_DEFINED__
typedef interface IIviDownconverterRFInput IIviDownconverterRFInput;

#endif 	/* __IIviDownconverterRFInput_FWD_DEFINED__ */


#ifndef __IIviDownconverterIFOutput_FWD_DEFINED__
#define __IIviDownconverterIFOutput_FWD_DEFINED__
typedef interface IIviDownconverterIFOutput IIviDownconverterIFOutput;

#endif 	/* __IIviDownconverterIFOutput_FWD_DEFINED__ */


#ifndef __IIviDownconverterExternalLO_FWD_DEFINED__
#define __IIviDownconverterExternalLO_FWD_DEFINED__
typedef interface IIviDownconverterExternalLO IIviDownconverterExternalLO;

#endif 	/* __IIviDownconverterExternalLO_FWD_DEFINED__ */


#ifndef __IIviDownconverterExternalMixer_FWD_DEFINED__
#define __IIviDownconverterExternalMixer_FWD_DEFINED__
typedef interface IIviDownconverterExternalMixer IIviDownconverterExternalMixer;

#endif 	/* __IIviDownconverterExternalMixer_FWD_DEFINED__ */


#ifndef __IIviDownconverterExternalMixerBias_FWD_DEFINED__
#define __IIviDownconverterExternalMixerBias_FWD_DEFINED__
typedef interface IIviDownconverterExternalMixerBias IIviDownconverterExternalMixerBias;

#endif 	/* __IIviDownconverterExternalMixerBias_FWD_DEFINED__ */


#ifndef __IIviDownconverterFrequencySweep_FWD_DEFINED__
#define __IIviDownconverterFrequencySweep_FWD_DEFINED__
typedef interface IIviDownconverterFrequencySweep IIviDownconverterFrequencySweep;

#endif 	/* __IIviDownconverterFrequencySweep_FWD_DEFINED__ */


#ifndef __IIviDownconverterFrequencySweepList_FWD_DEFINED__
#define __IIviDownconverterFrequencySweepList_FWD_DEFINED__
typedef interface IIviDownconverterFrequencySweepList IIviDownconverterFrequencySweepList;

#endif 	/* __IIviDownconverterFrequencySweepList_FWD_DEFINED__ */


#ifndef __IIviDownconverterFrequencyStep_FWD_DEFINED__
#define __IIviDownconverterFrequencyStep_FWD_DEFINED__
typedef interface IIviDownconverterFrequencyStep IIviDownconverterFrequencyStep;

#endif 	/* __IIviDownconverterFrequencyStep_FWD_DEFINED__ */


#ifndef __IIviDownconverterFrequencySweepAnalog_FWD_DEFINED__
#define __IIviDownconverterFrequencySweepAnalog_FWD_DEFINED__
typedef interface IIviDownconverterFrequencySweepAnalog IIviDownconverterFrequencySweepAnalog;

#endif 	/* __IIviDownconverterFrequencySweepAnalog_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __IviDownconverterLib_LIBRARY_DEFINED__
#define __IviDownconverterLib_LIBRARY_DEFINED__

/* library IviDownconverterLib */
/* [helpfile][helpcontext][helpstring][version][uuid] */ 












typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("cabce3ad-7ff5-402d-8d4e-fb1732f259f8") 
enum IviDownconverterReferenceOscillatorSourceEnum
    {
        IviDownconverterReferenceOscillatorSourceInternal	= 0,
        IviDownconverterReferenceOscillatorSourceExternal	= 1
    } 	IviDownconverterReferenceOscillatorSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("89492609-01d5-47fb-9bee-41110578cdff") 
enum IviDownconverterInputCouplingEnum
    {
        IviDownconverterInputCouplingAC	= 0,
        IviDownconverterInputCouplingDC	= 1
    } 	IviDownconverterInputCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("57a48922-1efe-40d4-ab25-f2fd8df936a0") 
enum IviDownconverterFrequencySweepModeEnum
    {
        IviDownconverterFrequencySweepModeNone	= 0,
        IviDownconverterFrequencySweepModeSweep	= 1,
        IviDownconverterFrequencySweepModeStep	= 2,
        IviDownconverterFrequencySweepModeList	= 3
    } 	IviDownconverterFrequencySweepModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("15247c2b-7ca2-4db6-a39a-057cd0b06b9f") 
enum IviDownconverterFrequencyStepScalingEnum
    {
        IviDownconverterFrequencyStepScalingLinear	= 0,
        IviDownconverterFrequencyStepScalingLogarithmic	= 1
    } 	IviDownconverterFrequencyStepScalingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("75e6a917-506e-45f8-9c69-4375b736d153") 
enum IviDownconverterCalibrationStatusEnum
    {
        IviDownconverterCalibrationComplete	= 0,
        IviDownconverterCalibrationInProgress	= 1,
        IviDownconverterCalibrationStatusUnknown	= 2,
        IviDownconverterCalibrationFailed	= 3
    } 	IviDownconverterCalibrationStatusEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4cf471e4-f316-47ba-81f9-589a82882399") 
enum IviDownconverterCalibratedStatusEnum
    {
        IviDownconverterCalibrated	= 0,
        IviDownconverterUncalibrated	= 1,
        IviDownconverterCalibratedStatusUnknown	= 2
    } 	IviDownconverterCalibratedStatusEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("5792db43-5da0-4ff5-b4e1-8ffc3aee2425") 
enum IviDownconverterErrorCodesEnum
    {
        E_IVIDOWNCONVERTER_FREQUENCY_LIST_UNKNOWN	= -2147213311,
        E_IVIDOWNCONVERTER_MAX_TIME_EXCEEDED	= -2147213310,
        E_IVIDOWNCONVERTER_TRIGGER_NOT_SOFTWARE	= -2147217407
    } 	IviDownconverterErrorCodesEnum;


EXTERN_C const IID LIBID_IviDownconverterLib;

#ifndef __IIviDownconverter_INTERFACE_DEFINED__
#define __IIviDownconverter_INTERFACE_DEFINED__

/* interface IIviDownconverter */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDownconverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53aa-a398-11d4-ba58-000064657374")
    IIviDownconverter : public IIviDriver
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceOscillator( 
            /* [retval][out] */ IIviDownconverterReferenceOscillator **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_RFInput( 
            /* [retval][out] */ IIviDownconverterRFInput **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IFOutput( 
            /* [retval][out] */ IIviDownconverterIFOutput **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalLO( 
            /* [retval][out] */ IIviDownconverterExternalLO **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalMixer( 
            /* [retval][out] */ IIviDownconverterExternalMixer **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDownconverterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDownconverter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDownconverter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDownconverter * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviDownconverter * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviDownconverter * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviDownconverter * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviDownconverter * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviDownconverter * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviDownconverter * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceOscillator )( 
            IIviDownconverter * This,
            /* [retval][out] */ IIviDownconverterReferenceOscillator **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RFInput )( 
            IIviDownconverter * This,
            /* [retval][out] */ IIviDownconverterRFInput **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IFOutput )( 
            IIviDownconverter * This,
            /* [retval][out] */ IIviDownconverterIFOutput **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalLO )( 
            IIviDownconverter * This,
            /* [retval][out] */ IIviDownconverterExternalLO **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalMixer )( 
            IIviDownconverter * This,
            /* [retval][out] */ IIviDownconverterExternalMixer **Val);
        
        END_INTERFACE
    } IIviDownconverterVtbl;

    interface IIviDownconverter
    {
        CONST_VTBL struct IIviDownconverterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDownconverter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDownconverter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDownconverter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDownconverter_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviDownconverter_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviDownconverter_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviDownconverter_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviDownconverter_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviDownconverter_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviDownconverter_get_ReferenceOscillator(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceOscillator(This,Val) ) 

#define IIviDownconverter_get_RFInput(This,Val)	\
    ( (This)->lpVtbl -> get_RFInput(This,Val) ) 

#define IIviDownconverter_get_IFOutput(This,Val)	\
    ( (This)->lpVtbl -> get_IFOutput(This,Val) ) 

#define IIviDownconverter_get_ExternalLO(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalLO(This,Val) ) 

#define IIviDownconverter_get_ExternalMixer(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalMixer(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDownconverter_INTERFACE_DEFINED__ */


#ifndef __IIviDownconverterReferenceOscillator_INTERFACE_DEFINED__
#define __IIviDownconverterReferenceOscillator_INTERFACE_DEFINED__

/* interface IIviDownconverterReferenceOscillator */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDownconverterReferenceOscillator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53b3-a398-11d4-ba58-000064657374")
    IIviDownconverterReferenceOscillator : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum IviDownconverterReferenceOscillatorSourceEnum Source,
            /* [in] */ double Frequency) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalFrequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ enum IviDownconverterReferenceOscillatorSourceEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ enum IviDownconverterReferenceOscillatorSourceEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_OutputEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_OutputEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDownconverterReferenceOscillatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDownconverterReferenceOscillator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDownconverterReferenceOscillator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDownconverterReferenceOscillator * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDownconverterReferenceOscillator * This,
            /* [in] */ enum IviDownconverterReferenceOscillatorSourceEnum Source,
            /* [in] */ double Frequency);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalFrequency )( 
            IIviDownconverterReferenceOscillator * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalFrequency )( 
            IIviDownconverterReferenceOscillator * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviDownconverterReferenceOscillator * This,
            /* [retval][out] */ enum IviDownconverterReferenceOscillatorSourceEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviDownconverterReferenceOscillator * This,
            /* [in] */ enum IviDownconverterReferenceOscillatorSourceEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputEnabled )( 
            IIviDownconverterReferenceOscillator * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputEnabled )( 
            IIviDownconverterReferenceOscillator * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IIviDownconverterReferenceOscillatorVtbl;

    interface IIviDownconverterReferenceOscillator
    {
        CONST_VTBL struct IIviDownconverterReferenceOscillatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDownconverterReferenceOscillator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDownconverterReferenceOscillator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDownconverterReferenceOscillator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDownconverterReferenceOscillator_Configure(This,Source,Frequency)	\
    ( (This)->lpVtbl -> Configure(This,Source,Frequency) ) 

#define IIviDownconverterReferenceOscillator_get_ExternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_ExternalFrequency(This,Val) ) 

#define IIviDownconverterReferenceOscillator_put_ExternalFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_ExternalFrequency(This,Val) ) 

#define IIviDownconverterReferenceOscillator_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IIviDownconverterReferenceOscillator_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define IIviDownconverterReferenceOscillator_get_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_OutputEnabled(This,Val) ) 

#define IIviDownconverterReferenceOscillator_put_OutputEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_OutputEnabled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDownconverterReferenceOscillator_INTERFACE_DEFINED__ */


#ifndef __IIviDownconverterRFInput_INTERFACE_DEFINED__
#define __IIviDownconverterRFInput_INTERFACE_DEFINED__

/* interface IIviDownconverterRFInput */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDownconverterRFInput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53b4-a398-11d4-ba58-000064657374")
    IIviDownconverterRFInput : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Calibrate( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE IsCalibrated( 
            /* [retval][out] */ enum IviDownconverterCalibratedStatusEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE IsCalibrationComplete( 
            /* [retval][out] */ enum IviDownconverterCalibrationStatusEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Coupling( 
            /* [retval][out] */ enum IviDownconverterInputCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Coupling( 
            /* [in] */ enum IviDownconverterInputCouplingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Attenuation( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Attenuation( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Bypass( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Bypass( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PreselectorEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_PreselectorEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_CorrectionsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_CorrectionsEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencySweep( 
            /* [retval][out] */ IIviDownconverterFrequencySweep **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveRFInput( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ActiveRFInput( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDownconverterRFInputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDownconverterRFInput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDownconverterRFInput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDownconverterRFInput * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Calibrate )( 
            IIviDownconverterRFInput * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *IsCalibrated )( 
            IIviDownconverterRFInput * This,
            /* [retval][out] */ enum IviDownconverterCalibratedStatusEnum *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *IsCalibrationComplete )( 
            IIviDownconverterRFInput * This,
            /* [retval][out] */ enum IviDownconverterCalibrationStatusEnum *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviDownconverterRFInput * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviDownconverterRFInput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IIviDownconverterRFInput * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coupling )( 
            IIviDownconverterRFInput * This,
            /* [retval][out] */ enum IviDownconverterInputCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Coupling )( 
            IIviDownconverterRFInput * This,
            /* [in] */ enum IviDownconverterInputCouplingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attenuation )( 
            IIviDownconverterRFInput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Attenuation )( 
            IIviDownconverterRFInput * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bypass )( 
            IIviDownconverterRFInput * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bypass )( 
            IIviDownconverterRFInput * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreselectorEnabled )( 
            IIviDownconverterRFInput * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreselectorEnabled )( 
            IIviDownconverterRFInput * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CorrectionsEnabled )( 
            IIviDownconverterRFInput * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CorrectionsEnabled )( 
            IIviDownconverterRFInput * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencySweep )( 
            IIviDownconverterRFInput * This,
            /* [retval][out] */ IIviDownconverterFrequencySweep **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveRFInput )( 
            IIviDownconverterRFInput * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveRFInput )( 
            IIviDownconverterRFInput * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviDownconverterRFInput * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviDownconverterRFInput * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } IIviDownconverterRFInputVtbl;

    interface IIviDownconverterRFInput
    {
        CONST_VTBL struct IIviDownconverterRFInputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDownconverterRFInput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDownconverterRFInput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDownconverterRFInput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDownconverterRFInput_Calibrate(This)	\
    ( (This)->lpVtbl -> Calibrate(This) ) 

#define IIviDownconverterRFInput_IsCalibrated(This,Val)	\
    ( (This)->lpVtbl -> IsCalibrated(This,Val) ) 

#define IIviDownconverterRFInput_IsCalibrationComplete(This,Val)	\
    ( (This)->lpVtbl -> IsCalibrationComplete(This,Val) ) 

#define IIviDownconverterRFInput_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IIviDownconverterRFInput_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define IIviDownconverterRFInput_put_Frequency(This,Val)	\
    ( (This)->lpVtbl -> put_Frequency(This,Val) ) 

#define IIviDownconverterRFInput_get_Coupling(This,Val)	\
    ( (This)->lpVtbl -> get_Coupling(This,Val) ) 

#define IIviDownconverterRFInput_put_Coupling(This,Val)	\
    ( (This)->lpVtbl -> put_Coupling(This,Val) ) 

#define IIviDownconverterRFInput_get_Attenuation(This,Val)	\
    ( (This)->lpVtbl -> get_Attenuation(This,Val) ) 

#define IIviDownconverterRFInput_put_Attenuation(This,Val)	\
    ( (This)->lpVtbl -> put_Attenuation(This,Val) ) 

#define IIviDownconverterRFInput_get_Bypass(This,Val)	\
    ( (This)->lpVtbl -> get_Bypass(This,Val) ) 

#define IIviDownconverterRFInput_put_Bypass(This,Val)	\
    ( (This)->lpVtbl -> put_Bypass(This,Val) ) 

#define IIviDownconverterRFInput_get_PreselectorEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_PreselectorEnabled(This,Val) ) 

#define IIviDownconverterRFInput_put_PreselectorEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_PreselectorEnabled(This,Val) ) 

#define IIviDownconverterRFInput_get_CorrectionsEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_CorrectionsEnabled(This,Val) ) 

#define IIviDownconverterRFInput_put_CorrectionsEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_CorrectionsEnabled(This,Val) ) 

#define IIviDownconverterRFInput_get_FrequencySweep(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencySweep(This,Val) ) 

#define IIviDownconverterRFInput_get_ActiveRFInput(This,Val)	\
    ( (This)->lpVtbl -> get_ActiveRFInput(This,Val) ) 

#define IIviDownconverterRFInput_put_ActiveRFInput(This,Val)	\
    ( (This)->lpVtbl -> put_ActiveRFInput(This,Val) ) 

#define IIviDownconverterRFInput_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IIviDownconverterRFInput_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDownconverterRFInput_INTERFACE_DEFINED__ */


#ifndef __IIviDownconverterIFOutput_INTERFACE_DEFINED__
#define __IIviDownconverterIFOutput_INTERFACE_DEFINED__

/* interface IIviDownconverterIFOutput */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDownconverterIFOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53b2-a398-11d4-ba58-000064657374")
    IIviDownconverterIFOutput : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE WaitUntilSettled( 
            /* [in] */ long MaxTimeMilliseconds) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveIFOutput( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ActiveIFOutput( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Gain( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Gain( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FilterBandwidth( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FilterBandwidth( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_VideoDetectorBandwidth( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_VideoDetectorBandwidth( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IsSettled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDownconverterIFOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDownconverterIFOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDownconverterIFOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDownconverterIFOutput * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *WaitUntilSettled )( 
            IIviDownconverterIFOutput * This,
            /* [in] */ long MaxTimeMilliseconds);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveIFOutput )( 
            IIviDownconverterIFOutput * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveIFOutput )( 
            IIviDownconverterIFOutput * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviDownconverterIFOutput * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviDownconverterIFOutput * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviDownconverterIFOutput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviDownconverterIFOutput * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviDownconverterIFOutput * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gain )( 
            IIviDownconverterIFOutput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gain )( 
            IIviDownconverterIFOutput * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilterBandwidth )( 
            IIviDownconverterIFOutput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FilterBandwidth )( 
            IIviDownconverterIFOutput * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VideoDetectorBandwidth )( 
            IIviDownconverterIFOutput * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VideoDetectorBandwidth )( 
            IIviDownconverterIFOutput * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSettled )( 
            IIviDownconverterIFOutput * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        END_INTERFACE
    } IIviDownconverterIFOutputVtbl;

    interface IIviDownconverterIFOutput
    {
        CONST_VTBL struct IIviDownconverterIFOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDownconverterIFOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDownconverterIFOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDownconverterIFOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDownconverterIFOutput_WaitUntilSettled(This,MaxTimeMilliseconds)	\
    ( (This)->lpVtbl -> WaitUntilSettled(This,MaxTimeMilliseconds) ) 

#define IIviDownconverterIFOutput_get_ActiveIFOutput(This,Val)	\
    ( (This)->lpVtbl -> get_ActiveIFOutput(This,Val) ) 

#define IIviDownconverterIFOutput_put_ActiveIFOutput(This,Val)	\
    ( (This)->lpVtbl -> put_ActiveIFOutput(This,Val) ) 

#define IIviDownconverterIFOutput_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IIviDownconverterIFOutput_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#define IIviDownconverterIFOutput_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define IIviDownconverterIFOutput_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviDownconverterIFOutput_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviDownconverterIFOutput_get_Gain(This,Val)	\
    ( (This)->lpVtbl -> get_Gain(This,Val) ) 

#define IIviDownconverterIFOutput_put_Gain(This,Val)	\
    ( (This)->lpVtbl -> put_Gain(This,Val) ) 

#define IIviDownconverterIFOutput_get_FilterBandwidth(This,Val)	\
    ( (This)->lpVtbl -> get_FilterBandwidth(This,Val) ) 

#define IIviDownconverterIFOutput_put_FilterBandwidth(This,Val)	\
    ( (This)->lpVtbl -> put_FilterBandwidth(This,Val) ) 

#define IIviDownconverterIFOutput_get_VideoDetectorBandwidth(This,Val)	\
    ( (This)->lpVtbl -> get_VideoDetectorBandwidth(This,Val) ) 

#define IIviDownconverterIFOutput_put_VideoDetectorBandwidth(This,Val)	\
    ( (This)->lpVtbl -> put_VideoDetectorBandwidth(This,Val) ) 

#define IIviDownconverterIFOutput_get_IsSettled(This,Val)	\
    ( (This)->lpVtbl -> get_IsSettled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDownconverterIFOutput_INTERFACE_DEFINED__ */


#ifndef __IIviDownconverterExternalLO_INTERFACE_DEFINED__
#define __IIviDownconverterExternalLO_INTERFACE_DEFINED__

/* interface IIviDownconverterExternalLO */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDownconverterExternalLO;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53ab-a398-11d4-ba58-000064657374")
    IIviDownconverterExternalLO : public IUnknown
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

    typedef struct IIviDownconverterExternalLOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDownconverterExternalLO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDownconverterExternalLO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDownconverterExternalLO * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviDownconverterExternalLO * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviDownconverterExternalLO * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviDownconverterExternalLO * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IIviDownconverterExternalLO * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviDownconverterExternalLOVtbl;

    interface IIviDownconverterExternalLO
    {
        CONST_VTBL struct IIviDownconverterExternalLOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDownconverterExternalLO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDownconverterExternalLO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDownconverterExternalLO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDownconverterExternalLO_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviDownconverterExternalLO_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviDownconverterExternalLO_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define IIviDownconverterExternalLO_put_Frequency(This,Val)	\
    ( (This)->lpVtbl -> put_Frequency(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDownconverterExternalLO_INTERFACE_DEFINED__ */


#ifndef __IIviDownconverterExternalMixer_INTERFACE_DEFINED__
#define __IIviDownconverterExternalMixer_INTERFACE_DEFINED__

/* interface IIviDownconverterExternalMixer */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDownconverterExternalMixer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53ac-a398-11d4-ba58-000064657374")
    IIviDownconverterExternalMixer : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Bias( 
            /* [retval][out] */ IIviDownconverterExternalMixerBias **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Harmonic( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Harmonic( 
            /* [in] */ long Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfPorts( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_NumberOfPorts( 
            /* [in] */ long Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDownconverterExternalMixerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDownconverterExternalMixer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDownconverterExternalMixer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDownconverterExternalMixer * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviDownconverterExternalMixer * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviDownconverterExternalMixer * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bias )( 
            IIviDownconverterExternalMixer * This,
            /* [retval][out] */ IIviDownconverterExternalMixerBias **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Harmonic )( 
            IIviDownconverterExternalMixer * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Harmonic )( 
            IIviDownconverterExternalMixer * This,
            /* [in] */ long Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfPorts )( 
            IIviDownconverterExternalMixer * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfPorts )( 
            IIviDownconverterExternalMixer * This,
            /* [in] */ long Val);
        
        END_INTERFACE
    } IIviDownconverterExternalMixerVtbl;

    interface IIviDownconverterExternalMixer
    {
        CONST_VTBL struct IIviDownconverterExternalMixerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDownconverterExternalMixer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDownconverterExternalMixer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDownconverterExternalMixer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDownconverterExternalMixer_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviDownconverterExternalMixer_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviDownconverterExternalMixer_get_Bias(This,Val)	\
    ( (This)->lpVtbl -> get_Bias(This,Val) ) 

#define IIviDownconverterExternalMixer_get_Harmonic(This,Val)	\
    ( (This)->lpVtbl -> get_Harmonic(This,Val) ) 

#define IIviDownconverterExternalMixer_put_Harmonic(This,Val)	\
    ( (This)->lpVtbl -> put_Harmonic(This,Val) ) 

#define IIviDownconverterExternalMixer_get_NumberOfPorts(This,Val)	\
    ( (This)->lpVtbl -> get_NumberOfPorts(This,Val) ) 

#define IIviDownconverterExternalMixer_put_NumberOfPorts(This,Val)	\
    ( (This)->lpVtbl -> put_NumberOfPorts(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDownconverterExternalMixer_INTERFACE_DEFINED__ */


#ifndef __IIviDownconverterExternalMixerBias_INTERFACE_DEFINED__
#define __IIviDownconverterExternalMixerBias_INTERFACE_DEFINED__

/* interface IIviDownconverterExternalMixerBias */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDownconverterExternalMixerBias;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53ad-a398-11d4-ba58-000064657374")
    IIviDownconverterExternalMixerBias : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Bias,
            /* [in] */ double BiasLimit) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Limit( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Limit( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDownconverterExternalMixerBiasVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDownconverterExternalMixerBias * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDownconverterExternalMixerBias * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDownconverterExternalMixerBias * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDownconverterExternalMixerBias * This,
            /* [in] */ double Bias,
            /* [in] */ double BiasLimit);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviDownconverterExternalMixerBias * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviDownconverterExternalMixerBias * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Limit )( 
            IIviDownconverterExternalMixerBias * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Limit )( 
            IIviDownconverterExternalMixerBias * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviDownconverterExternalMixerBias * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviDownconverterExternalMixerBias * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IIviDownconverterExternalMixerBiasVtbl;

    interface IIviDownconverterExternalMixerBias
    {
        CONST_VTBL struct IIviDownconverterExternalMixerBiasVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDownconverterExternalMixerBias_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDownconverterExternalMixerBias_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDownconverterExternalMixerBias_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDownconverterExternalMixerBias_Configure(This,Bias,BiasLimit)	\
    ( (This)->lpVtbl -> Configure(This,Bias,BiasLimit) ) 

#define IIviDownconverterExternalMixerBias_get_Level(This,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Val) ) 

#define IIviDownconverterExternalMixerBias_put_Level(This,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Val) ) 

#define IIviDownconverterExternalMixerBias_get_Limit(This,Val)	\
    ( (This)->lpVtbl -> get_Limit(This,Val) ) 

#define IIviDownconverterExternalMixerBias_put_Limit(This,Val)	\
    ( (This)->lpVtbl -> put_Limit(This,Val) ) 

#define IIviDownconverterExternalMixerBias_get_Enabled(This,Val)	\
    ( (This)->lpVtbl -> get_Enabled(This,Val) ) 

#define IIviDownconverterExternalMixerBias_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDownconverterExternalMixerBias_INTERFACE_DEFINED__ */


#ifndef __IIviDownconverterFrequencySweep_INTERFACE_DEFINED__
#define __IIviDownconverterFrequencySweep_INTERFACE_DEFINED__

/* interface IIviDownconverterFrequencySweep */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDownconverterFrequencySweep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53af-a398-11d4-ba58-000064657374")
    IIviDownconverterFrequencySweep : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ enum IviDownconverterFrequencySweepModeEnum Mode,
            /* [in] */ BSTR TriggerSource) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE WaitUntilComplete( 
            /* [in] */ long MaxTimeMilliseconds) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE GetBandCrossingInfo( 
            /* [out][in] */ SAFEARRAY * *StartFrequencies,
            /* [out][in] */ SAFEARRAY * *StopFrequencies) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_List( 
            /* [retval][out] */ IIviDownconverterFrequencySweepList **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Step( 
            /* [retval][out] */ IIviDownconverterFrequencyStep **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Analog( 
            /* [retval][out] */ IIviDownconverterFrequencySweepAnalog **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerSource( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerSource( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ enum IviDownconverterFrequencySweepModeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ enum IviDownconverterFrequencySweepModeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_IsSweeping( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfBands( 
            /* [retval][out] */ long *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDownconverterFrequencySweepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDownconverterFrequencySweep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDownconverterFrequencySweep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDownconverterFrequencySweep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDownconverterFrequencySweep * This,
            /* [in] */ enum IviDownconverterFrequencySweepModeEnum Mode,
            /* [in] */ BSTR TriggerSource);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *WaitUntilComplete )( 
            IIviDownconverterFrequencySweep * This,
            /* [in] */ long MaxTimeMilliseconds);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *GetBandCrossingInfo )( 
            IIviDownconverterFrequencySweep * This,
            /* [out][in] */ SAFEARRAY * *StartFrequencies,
            /* [out][in] */ SAFEARRAY * *StopFrequencies);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_List )( 
            IIviDownconverterFrequencySweep * This,
            /* [retval][out] */ IIviDownconverterFrequencySweepList **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Step )( 
            IIviDownconverterFrequencySweep * This,
            /* [retval][out] */ IIviDownconverterFrequencyStep **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Analog )( 
            IIviDownconverterFrequencySweep * This,
            /* [retval][out] */ IIviDownconverterFrequencySweepAnalog **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerSource )( 
            IIviDownconverterFrequencySweep * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerSource )( 
            IIviDownconverterFrequencySweep * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IIviDownconverterFrequencySweep * This,
            /* [retval][out] */ enum IviDownconverterFrequencySweepModeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IIviDownconverterFrequencySweep * This,
            /* [in] */ enum IviDownconverterFrequencySweepModeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSweeping )( 
            IIviDownconverterFrequencySweep * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfBands )( 
            IIviDownconverterFrequencySweep * This,
            /* [retval][out] */ long *Val);
        
        END_INTERFACE
    } IIviDownconverterFrequencySweepVtbl;

    interface IIviDownconverterFrequencySweep
    {
        CONST_VTBL struct IIviDownconverterFrequencySweepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDownconverterFrequencySweep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDownconverterFrequencySweep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDownconverterFrequencySweep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDownconverterFrequencySweep_Configure(This,Mode,TriggerSource)	\
    ( (This)->lpVtbl -> Configure(This,Mode,TriggerSource) ) 

#define IIviDownconverterFrequencySweep_WaitUntilComplete(This,MaxTimeMilliseconds)	\
    ( (This)->lpVtbl -> WaitUntilComplete(This,MaxTimeMilliseconds) ) 

#define IIviDownconverterFrequencySweep_GetBandCrossingInfo(This,StartFrequencies,StopFrequencies)	\
    ( (This)->lpVtbl -> GetBandCrossingInfo(This,StartFrequencies,StopFrequencies) ) 

#define IIviDownconverterFrequencySweep_get_List(This,Val)	\
    ( (This)->lpVtbl -> get_List(This,Val) ) 

#define IIviDownconverterFrequencySweep_get_Step(This,Val)	\
    ( (This)->lpVtbl -> get_Step(This,Val) ) 

#define IIviDownconverterFrequencySweep_get_Analog(This,Val)	\
    ( (This)->lpVtbl -> get_Analog(This,Val) ) 

#define IIviDownconverterFrequencySweep_get_TriggerSource(This,Val)	\
    ( (This)->lpVtbl -> get_TriggerSource(This,Val) ) 

#define IIviDownconverterFrequencySweep_put_TriggerSource(This,Val)	\
    ( (This)->lpVtbl -> put_TriggerSource(This,Val) ) 

#define IIviDownconverterFrequencySweep_get_Mode(This,Val)	\
    ( (This)->lpVtbl -> get_Mode(This,Val) ) 

#define IIviDownconverterFrequencySweep_put_Mode(This,Val)	\
    ( (This)->lpVtbl -> put_Mode(This,Val) ) 

#define IIviDownconverterFrequencySweep_get_IsSweeping(This,Val)	\
    ( (This)->lpVtbl -> get_IsSweeping(This,Val) ) 

#define IIviDownconverterFrequencySweep_get_NumberOfBands(This,Val)	\
    ( (This)->lpVtbl -> get_NumberOfBands(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDownconverterFrequencySweep_INTERFACE_DEFINED__ */


#ifndef __IIviDownconverterFrequencySweepList_INTERFACE_DEFINED__
#define __IIviDownconverterFrequencySweepList_INTERFACE_DEFINED__

/* interface IIviDownconverterFrequencySweepList */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDownconverterFrequencySweepList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53b1-a398-11d4-ba58-000064657374")
    IIviDownconverterFrequencySweepList : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE CreateList( 
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *FrequencyList) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ClearAll( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDwell( 
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedName( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedName( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Dwell( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Dwell( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDownconverterFrequencySweepListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDownconverterFrequencySweepList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDownconverterFrequencySweepList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDownconverterFrequencySweepList * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *CreateList )( 
            IIviDownconverterFrequencySweepList * This,
            /* [in] */ BSTR Name,
            /* [in] */ SAFEARRAY * *FrequencyList);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ClearAll )( 
            IIviDownconverterFrequencySweepList * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDwell )( 
            IIviDownconverterFrequencySweepList * This,
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviDownconverterFrequencySweepList * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedName )( 
            IIviDownconverterFrequencySweepList * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectedName )( 
            IIviDownconverterFrequencySweepList * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dwell )( 
            IIviDownconverterFrequencySweepList * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dwell )( 
            IIviDownconverterFrequencySweepList * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepEnabled )( 
            IIviDownconverterFrequencySweepList * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepEnabled )( 
            IIviDownconverterFrequencySweepList * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IIviDownconverterFrequencySweepListVtbl;

    interface IIviDownconverterFrequencySweepList
    {
        CONST_VTBL struct IIviDownconverterFrequencySweepListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDownconverterFrequencySweepList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDownconverterFrequencySweepList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDownconverterFrequencySweepList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDownconverterFrequencySweepList_CreateList(This,Name,FrequencyList)	\
    ( (This)->lpVtbl -> CreateList(This,Name,FrequencyList) ) 

#define IIviDownconverterFrequencySweepList_ClearAll(This)	\
    ( (This)->lpVtbl -> ClearAll(This) ) 

#define IIviDownconverterFrequencySweepList_ConfigureDwell(This,SingleStepEnabled,Dwell)	\
    ( (This)->lpVtbl -> ConfigureDwell(This,SingleStepEnabled,Dwell) ) 

#define IIviDownconverterFrequencySweepList_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IIviDownconverterFrequencySweepList_get_SelectedName(This,Val)	\
    ( (This)->lpVtbl -> get_SelectedName(This,Val) ) 

#define IIviDownconverterFrequencySweepList_put_SelectedName(This,Val)	\
    ( (This)->lpVtbl -> put_SelectedName(This,Val) ) 

#define IIviDownconverterFrequencySweepList_get_Dwell(This,Val)	\
    ( (This)->lpVtbl -> get_Dwell(This,Val) ) 

#define IIviDownconverterFrequencySweepList_put_Dwell(This,Val)	\
    ( (This)->lpVtbl -> put_Dwell(This,Val) ) 

#define IIviDownconverterFrequencySweepList_get_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_SingleStepEnabled(This,Val) ) 

#define IIviDownconverterFrequencySweepList_put_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_SingleStepEnabled(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDownconverterFrequencySweepList_INTERFACE_DEFINED__ */


#ifndef __IIviDownconverterFrequencyStep_INTERFACE_DEFINED__
#define __IIviDownconverterFrequencyStep_INTERFACE_DEFINED__

/* interface IIviDownconverterFrequencyStep */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDownconverterFrequencyStep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53ae-a398-11d4-ba58-000064657374")
    IIviDownconverterFrequencyStep : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ double Start,
            /* [in] */ double Stop,
            /* [in] */ enum IviDownconverterFrequencyStepScalingEnum Scaling,
            /* [in] */ double StepSize) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureDwell( 
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
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
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Dwell( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Dwell( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_SingleStepEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_SingleStepEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Scaling( 
            /* [retval][out] */ enum IviDownconverterFrequencyStepScalingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Scaling( 
            /* [in] */ enum IviDownconverterFrequencyStepScalingEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDownconverterFrequencyStepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDownconverterFrequencyStep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDownconverterFrequencyStep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDownconverterFrequencyStep * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviDownconverterFrequencyStep * This,
            /* [in] */ double Start,
            /* [in] */ double Stop,
            /* [in] */ enum IviDownconverterFrequencyStepScalingEnum Scaling,
            /* [in] */ double StepSize);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureDwell )( 
            IIviDownconverterFrequencyStep * This,
            /* [in] */ VARIANT_BOOL SingleStepEnabled,
            /* [in] */ double Dwell);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviDownconverterFrequencyStep * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviDownconverterFrequencyStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviDownconverterFrequencyStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviDownconverterFrequencyStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviDownconverterFrequencyStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IIviDownconverterFrequencyStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IIviDownconverterFrequencyStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dwell )( 
            IIviDownconverterFrequencyStep * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dwell )( 
            IIviDownconverterFrequencyStep * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SingleStepEnabled )( 
            IIviDownconverterFrequencyStep * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SingleStepEnabled )( 
            IIviDownconverterFrequencyStep * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scaling )( 
            IIviDownconverterFrequencyStep * This,
            /* [retval][out] */ enum IviDownconverterFrequencyStepScalingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scaling )( 
            IIviDownconverterFrequencyStep * This,
            /* [in] */ enum IviDownconverterFrequencyStepScalingEnum Val);
        
        END_INTERFACE
    } IIviDownconverterFrequencyStepVtbl;

    interface IIviDownconverterFrequencyStep
    {
        CONST_VTBL struct IIviDownconverterFrequencyStepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDownconverterFrequencyStep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDownconverterFrequencyStep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDownconverterFrequencyStep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDownconverterFrequencyStep_ConfigureStartStop(This,Start,Stop,Scaling,StepSize)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop,Scaling,StepSize) ) 

#define IIviDownconverterFrequencyStep_ConfigureDwell(This,SingleStepEnabled,Dwell)	\
    ( (This)->lpVtbl -> ConfigureDwell(This,SingleStepEnabled,Dwell) ) 

#define IIviDownconverterFrequencyStep_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IIviDownconverterFrequencyStep_get_Start(This,Val)	\
    ( (This)->lpVtbl -> get_Start(This,Val) ) 

#define IIviDownconverterFrequencyStep_put_Start(This,Val)	\
    ( (This)->lpVtbl -> put_Start(This,Val) ) 

#define IIviDownconverterFrequencyStep_get_Stop(This,Val)	\
    ( (This)->lpVtbl -> get_Stop(This,Val) ) 

#define IIviDownconverterFrequencyStep_put_Stop(This,Val)	\
    ( (This)->lpVtbl -> put_Stop(This,Val) ) 

#define IIviDownconverterFrequencyStep_get_Size(This,Val)	\
    ( (This)->lpVtbl -> get_Size(This,Val) ) 

#define IIviDownconverterFrequencyStep_put_Size(This,Val)	\
    ( (This)->lpVtbl -> put_Size(This,Val) ) 

#define IIviDownconverterFrequencyStep_get_Dwell(This,Val)	\
    ( (This)->lpVtbl -> get_Dwell(This,Val) ) 

#define IIviDownconverterFrequencyStep_put_Dwell(This,Val)	\
    ( (This)->lpVtbl -> put_Dwell(This,Val) ) 

#define IIviDownconverterFrequencyStep_get_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_SingleStepEnabled(This,Val) ) 

#define IIviDownconverterFrequencyStep_put_SingleStepEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_SingleStepEnabled(This,Val) ) 

#define IIviDownconverterFrequencyStep_get_Scaling(This,Val)	\
    ( (This)->lpVtbl -> get_Scaling(This,Val) ) 

#define IIviDownconverterFrequencyStep_put_Scaling(This,Val)	\
    ( (This)->lpVtbl -> put_Scaling(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDownconverterFrequencyStep_INTERFACE_DEFINED__ */


#ifndef __IIviDownconverterFrequencySweepAnalog_INTERFACE_DEFINED__
#define __IIviDownconverterFrequencySweepAnalog_INTERFACE_DEFINED__

/* interface IIviDownconverterFrequencySweepAnalog */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDownconverterFrequencySweepAnalog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed53b0-a398-11d4-ba58-000064657374")
    IIviDownconverterFrequencySweepAnalog : public IUnknown
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

    typedef struct IIviDownconverterFrequencySweepAnalogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDownconverterFrequencySweepAnalog * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDownconverterFrequencySweepAnalog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDownconverterFrequencySweepAnalog * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviDownconverterFrequencySweepAnalog * This,
            /* [in] */ double Start,
            /* [in] */ double Stop);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviDownconverterFrequencySweepAnalog * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviDownconverterFrequencySweepAnalog * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviDownconverterFrequencySweepAnalog * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviDownconverterFrequencySweepAnalog * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            IIviDownconverterFrequencySweepAnalog * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            IIviDownconverterFrequencySweepAnalog * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviDownconverterFrequencySweepAnalogVtbl;

    interface IIviDownconverterFrequencySweepAnalog
    {
        CONST_VTBL struct IIviDownconverterFrequencySweepAnalogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDownconverterFrequencySweepAnalog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDownconverterFrequencySweepAnalog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDownconverterFrequencySweepAnalog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDownconverterFrequencySweepAnalog_ConfigureStartStop(This,Start,Stop)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,Start,Stop) ) 

#define IIviDownconverterFrequencySweepAnalog_get_Start(This,Val)	\
    ( (This)->lpVtbl -> get_Start(This,Val) ) 

#define IIviDownconverterFrequencySweepAnalog_put_Start(This,Val)	\
    ( (This)->lpVtbl -> put_Start(This,Val) ) 

#define IIviDownconverterFrequencySweepAnalog_get_Stop(This,Val)	\
    ( (This)->lpVtbl -> get_Stop(This,Val) ) 

#define IIviDownconverterFrequencySweepAnalog_put_Stop(This,Val)	\
    ( (This)->lpVtbl -> put_Stop(This,Val) ) 

#define IIviDownconverterFrequencySweepAnalog_get_Time(This,Val)	\
    ( (This)->lpVtbl -> get_Time(This,Val) ) 

#define IIviDownconverterFrequencySweepAnalog_put_Time(This,Val)	\
    ( (This)->lpVtbl -> put_Time(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDownconverterFrequencySweepAnalog_INTERFACE_DEFINED__ */

#endif /* __IviDownconverterLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


