

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:59:26 2016
 */
/* Compiler settings for IviSpecAnTypeLib.idl:
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


#ifndef __IviSpecAnTypeLib_h__
#define __IviSpecAnTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviSpecAn_FWD_DEFINED__
#define __IIviSpecAn_FWD_DEFINED__
typedef interface IIviSpecAn IIviSpecAn;

#endif 	/* __IIviSpecAn_FWD_DEFINED__ */


#ifndef __IIviSpecAnFrequency_FWD_DEFINED__
#define __IIviSpecAnFrequency_FWD_DEFINED__
typedef interface IIviSpecAnFrequency IIviSpecAnFrequency;

#endif 	/* __IIviSpecAnFrequency_FWD_DEFINED__ */


#ifndef __IIviSpecAnSweepCoupling_FWD_DEFINED__
#define __IIviSpecAnSweepCoupling_FWD_DEFINED__
typedef interface IIviSpecAnSweepCoupling IIviSpecAnSweepCoupling;

#endif 	/* __IIviSpecAnSweepCoupling_FWD_DEFINED__ */


#ifndef __IIviSpecAnLevel_FWD_DEFINED__
#define __IIviSpecAnLevel_FWD_DEFINED__
typedef interface IIviSpecAnLevel IIviSpecAnLevel;

#endif 	/* __IIviSpecAnLevel_FWD_DEFINED__ */


#ifndef __IIviSpecAnAcquisition_FWD_DEFINED__
#define __IIviSpecAnAcquisition_FWD_DEFINED__
typedef interface IIviSpecAnAcquisition IIviSpecAnAcquisition;

#endif 	/* __IIviSpecAnAcquisition_FWD_DEFINED__ */


#ifndef __IIviSpecAnDisplay_FWD_DEFINED__
#define __IIviSpecAnDisplay_FWD_DEFINED__
typedef interface IIviSpecAnDisplay IIviSpecAnDisplay;

#endif 	/* __IIviSpecAnDisplay_FWD_DEFINED__ */


#ifndef __IIviSpecAnExternalMixer_FWD_DEFINED__
#define __IIviSpecAnExternalMixer_FWD_DEFINED__
typedef interface IIviSpecAnExternalMixer IIviSpecAnExternalMixer;

#endif 	/* __IIviSpecAnExternalMixer_FWD_DEFINED__ */


#ifndef __IIviSpecAnExternalMixerBias_FWD_DEFINED__
#define __IIviSpecAnExternalMixerBias_FWD_DEFINED__
typedef interface IIviSpecAnExternalMixerBias IIviSpecAnExternalMixerBias;

#endif 	/* __IIviSpecAnExternalMixerBias_FWD_DEFINED__ */


#ifndef __IIviSpecAnExternalMixerConversionLossTable_FWD_DEFINED__
#define __IIviSpecAnExternalMixerConversionLossTable_FWD_DEFINED__
typedef interface IIviSpecAnExternalMixerConversionLossTable IIviSpecAnExternalMixerConversionLossTable;

#endif 	/* __IIviSpecAnExternalMixerConversionLossTable_FWD_DEFINED__ */


#ifndef __IIviSpecAnMarker_FWD_DEFINED__
#define __IIviSpecAnMarker_FWD_DEFINED__
typedef interface IIviSpecAnMarker IIviSpecAnMarker;

#endif 	/* __IIviSpecAnMarker_FWD_DEFINED__ */


#ifndef __IIviSpecAnMarkerFrequencyCounter_FWD_DEFINED__
#define __IIviSpecAnMarkerFrequencyCounter_FWD_DEFINED__
typedef interface IIviSpecAnMarkerFrequencyCounter IIviSpecAnMarkerFrequencyCounter;

#endif 	/* __IIviSpecAnMarkerFrequencyCounter_FWD_DEFINED__ */


#ifndef __IIviSpecAnTraces_FWD_DEFINED__
#define __IIviSpecAnTraces_FWD_DEFINED__
typedef interface IIviSpecAnTraces IIviSpecAnTraces;

#endif 	/* __IIviSpecAnTraces_FWD_DEFINED__ */


#ifndef __IIviSpecAnTrace_FWD_DEFINED__
#define __IIviSpecAnTrace_FWD_DEFINED__
typedef interface IIviSpecAnTrace IIviSpecAnTrace;

#endif 	/* __IIviSpecAnTrace_FWD_DEFINED__ */


#ifndef __IIviSpecAnTracesMath_FWD_DEFINED__
#define __IIviSpecAnTracesMath_FWD_DEFINED__
typedef interface IIviSpecAnTracesMath IIviSpecAnTracesMath;

#endif 	/* __IIviSpecAnTracesMath_FWD_DEFINED__ */


#ifndef __IIviSpecAnTrigger_FWD_DEFINED__
#define __IIviSpecAnTrigger_FWD_DEFINED__
typedef interface IIviSpecAnTrigger IIviSpecAnTrigger;

#endif 	/* __IIviSpecAnTrigger_FWD_DEFINED__ */


#ifndef __IIviSpecAnTriggerExternal_FWD_DEFINED__
#define __IIviSpecAnTriggerExternal_FWD_DEFINED__
typedef interface IIviSpecAnTriggerExternal IIviSpecAnTriggerExternal;

#endif 	/* __IIviSpecAnTriggerExternal_FWD_DEFINED__ */


#ifndef __IIviSpecAnTriggerVideo_FWD_DEFINED__
#define __IIviSpecAnTriggerVideo_FWD_DEFINED__
typedef interface IIviSpecAnTriggerVideo IIviSpecAnTriggerVideo;

#endif 	/* __IIviSpecAnTriggerVideo_FWD_DEFINED__ */


#ifndef __IIviSpecAnPreselector_FWD_DEFINED__
#define __IIviSpecAnPreselector_FWD_DEFINED__
typedef interface IIviSpecAnPreselector IIviSpecAnPreselector;

#endif 	/* __IIviSpecAnPreselector_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_IviSpecAnTypeLib_0000_0000 */
/* [local] */ 

#pragma once
#pragma once
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_IviSpecAnTypeLib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IviSpecAnTypeLib_0000_0000_v0_0_s_ifspec;


#ifndef __IviSpecAnLib_LIBRARY_DEFINED__
#define __IviSpecAnLib_LIBRARY_DEFINED__

/* library IviSpecAnLib */
/* [helpfile][helpstring][version][uuid] */ 



















typedef /* [helpcontext][helpstring] */ 
enum IviSpecAnErrorCodesEnum
    {
        S_IVISPECAN_MEASURE_UNCALIBRATED	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2001 ) ),
        S_IVISPECAN_OVER_RANGE	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2002 ) ),
        E_IVISPECAN_TRIGGER_NOT_SOFTWARE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x1001 ) ),
        E_IVISPECAN_MARKER_NOT_ENABLED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2001 ) ),
        E_IVISPECAN_NOT_DELTA_MARKER	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2002 ) ),
        E_IVISPECAN_MAX_TIME_EXCEEDED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2003 ) )
    } 	IviSpecAnErrorCodesEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnAmplitudeUnitsEnum
    {
        IviSpecAnAmplitudeUnitsDBM	= 1,
        IviSpecAnAmplitudeUnitsDBMV	= 2,
        IviSpecAnAmplitudeUnitsDBUV	= 3,
        IviSpecAnAmplitudeUnitsVolt	= 4,
        IviSpecAnAmplitudeUnitsWatt	= 5
    } 	IviSpecAnAmplitudeUnitsEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnAcquisitionStatusEnum
    {
        IviSpecAnAcquisitionStatusComplete	= 1,
        IviSpecAnAcquisitionStatusInProgress	= 0,
        IviSpecAnAcquisitionStatusUnknown	= -1
    } 	IviSpecAnAcquisitionStatusEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnDetectorTypeEnum
    {
        IviSpecAnDetectorTypeAutoPeak	= 1,
        IviSpecAnDetectorTypeAverage	= 2,
        IviSpecAnDetectorTypeMaxPeak	= 3,
        IviSpecAnDetectorTypeMinPeak	= 4,
        IviSpecAnDetectorTypeSample	= 5,
        IviSpecAnDetectorTypeRMS	= 6
    } 	IviSpecAnDetectorTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnMarkerSearchEnum
    {
        IviSpecAnMarkerSearchHighest	= 1,
        IviSpecAnMarkerSearchMinimum	= 2,
        IviSpecAnMarkerSearchNextPeak	= 3,
        IviSpecAnMarkerSearchNextPeakLeft	= 4,
        IviSpecAnMarkerSearchNextPeakRight	= 5
    } 	IviSpecAnMarkerSearchEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnMarkerTypeEnum
    {
        IviSpecAnMarkerTypeNormal	= 1,
        IviSpecAnMarkerTypeDelta	= 2
    } 	IviSpecAnMarkerTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnInstrumentSettingEnum
    {
        IviSpecAnInstrumentSettingFrequencyCenter	= 1,
        IviSpecAnInstrumentSettingFrequencySpan	= 2,
        IviSpecAnInstrumentSettingFrequencyStart	= 3,
        IviSpecAnInstrumentSettingFrequencyStop	= 4,
        IviSpecAnInstrumentSettingReferenceLevel	= 5
    } 	IviSpecAnInstrumentSettingEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnTraceTypeEnum
    {
        IviSpecAnTraceTypeClearWrite	= 1,
        IviSpecAnTraceTypeMaxHold	= 2,
        IviSpecAnTraceTypeMinHold	= 3,
        IviSpecAnTraceTypeVideoAverage	= 4,
        IviSpecAnTraceTypeView	= 5,
        IviSpecAnTraceTypeStore	= 6
    } 	IviSpecAnTraceTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnTriggerSourceEnum
    {
        IviSpecAnTriggerSourceExternal	= 1,
        IviSpecAnTriggerSourceImmediate	= 2,
        IviSpecAnTriggerSourceSoftware	= 3,
        IviSpecAnTriggerSourceACLine	= 4,
        IviSpecAnTriggerSourceVideo	= 5
    } 	IviSpecAnTriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnExternalTriggerSlopeEnum
    {
        IviSpecAnExternalTriggerSlopePositive	= 1,
        IviSpecAnExternalTriggerSlopeNegative	= 2
    } 	IviSpecAnExternalTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnVideoTriggerSlopeEnum
    {
        IviSpecAnVideoTriggerSlopePositive	= 1,
        IviSpecAnVideoTriggerSlopeNegative	= 2
    } 	IviSpecAnVideoTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnVerticalScaleEnum
    {
        IviSpecAnVerticalScaleLinear	= 1,
        IviSpecAnVerticalScaleLogarithmic	= 2
    } 	IviSpecAnVerticalScaleEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSpecAnMaxTimeEnum
    {
        IviSpecAnMaxTimeImmediate	= 0,
        IviSpecAnMaxTimeInfinite	= 0xffffffffUL
    } 	IviSpecAnMaxTimeEnum;


EXTERN_C const IID LIBID_IviSpecAnLib;

#ifndef __IIviSpecAn_INTERFACE_DEFINED__
#define __IIviSpecAn_INTERFACE_DEFINED__

/* interface IIviSpecAn */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAn;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52d8-a398-11d4-ba58-000064657374")
    IIviSpecAn : public IIviDriver
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ IIviSpecAnFrequency **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SweepCoupling( 
            /* [retval][out] */ IIviSpecAnSweepCoupling **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ IIviSpecAnLevel **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Acquisition( 
            /* [retval][out] */ IIviSpecAnAcquisition **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Display( 
            /* [retval][out] */ IIviSpecAnDisplay **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalMixer( 
            /* [retval][out] */ IIviSpecAnExternalMixer **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ IIviSpecAnTrigger **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Traces( 
            /* [retval][out] */ IIviSpecAnTraces **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Marker( 
            /* [retval][out] */ IIviSpecAnMarker **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Preselector( 
            /* [retval][out] */ IIviSpecAnPreselector **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAn * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAn * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAn * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviSpecAn * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviSpecAn * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviSpecAn * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviSpecAnFrequency **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SweepCoupling )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviSpecAnSweepCoupling **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviSpecAnLevel **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Acquisition )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviSpecAnAcquisition **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Display )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviSpecAnDisplay **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalMixer )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviSpecAnExternalMixer **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviSpecAnTrigger **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Traces )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviSpecAnTraces **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Marker )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviSpecAnMarker **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Preselector )( 
            IIviSpecAn * This,
            /* [retval][out] */ IIviSpecAnPreselector **pVal);
        
        END_INTERFACE
    } IIviSpecAnVtbl;

    interface IIviSpecAn
    {
        CONST_VTBL struct IIviSpecAnVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAn_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAn_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAn_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAn_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviSpecAn_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviSpecAn_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviSpecAn_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviSpecAn_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviSpecAn_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviSpecAn_get_Frequency(This,pVal)	\
    ( (This)->lpVtbl -> get_Frequency(This,pVal) ) 

#define IIviSpecAn_get_SweepCoupling(This,pVal)	\
    ( (This)->lpVtbl -> get_SweepCoupling(This,pVal) ) 

#define IIviSpecAn_get_Level(This,pVal)	\
    ( (This)->lpVtbl -> get_Level(This,pVal) ) 

#define IIviSpecAn_get_Acquisition(This,pVal)	\
    ( (This)->lpVtbl -> get_Acquisition(This,pVal) ) 

#define IIviSpecAn_get_Display(This,pVal)	\
    ( (This)->lpVtbl -> get_Display(This,pVal) ) 

#define IIviSpecAn_get_ExternalMixer(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalMixer(This,pVal) ) 

#define IIviSpecAn_get_Trigger(This,pVal)	\
    ( (This)->lpVtbl -> get_Trigger(This,pVal) ) 

#define IIviSpecAn_get_Traces(This,pVal)	\
    ( (This)->lpVtbl -> get_Traces(This,pVal) ) 

#define IIviSpecAn_get_Marker(This,pVal)	\
    ( (This)->lpVtbl -> get_Marker(This,pVal) ) 

#define IIviSpecAn_get_Preselector(This,pVal)	\
    ( (This)->lpVtbl -> get_Preselector(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAn_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnFrequency_INTERFACE_DEFINED__
#define __IIviSpecAnFrequency_INTERFACE_DEFINED__

/* interface IIviSpecAnFrequency */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnFrequency;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52c2-a398-11d4-ba58-000064657374")
    IIviSpecAnFrequency : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureCenterSpan( 
            /* [in] */ DOUBLE CenterFrequency,
            /* [in] */ DOUBLE Span) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureStartStop( 
            /* [in] */ DOUBLE StartFrequency,
            /* [in] */ DOUBLE StopFrequency) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Stop( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ DOUBLE newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnFrequencyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnFrequency * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnFrequency * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnFrequency * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCenterSpan )( 
            IIviSpecAnFrequency * This,
            /* [in] */ DOUBLE CenterFrequency,
            /* [in] */ DOUBLE Span);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureStartStop )( 
            IIviSpecAnFrequency * This,
            /* [in] */ DOUBLE StartFrequency,
            /* [in] */ DOUBLE StopFrequency);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviSpecAnFrequency * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IIviSpecAnFrequency * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviSpecAnFrequency * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stop )( 
            IIviSpecAnFrequency * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IIviSpecAnFrequency * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            IIviSpecAnFrequency * This,
            /* [in] */ DOUBLE newVal);
        
        END_INTERFACE
    } IIviSpecAnFrequencyVtbl;

    interface IIviSpecAnFrequency
    {
        CONST_VTBL struct IIviSpecAnFrequencyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnFrequency_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnFrequency_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnFrequency_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnFrequency_ConfigureCenterSpan(This,CenterFrequency,Span)	\
    ( (This)->lpVtbl -> ConfigureCenterSpan(This,CenterFrequency,Span) ) 

#define IIviSpecAnFrequency_ConfigureStartStop(This,StartFrequency,StopFrequency)	\
    ( (This)->lpVtbl -> ConfigureStartStop(This,StartFrequency,StopFrequency) ) 

#define IIviSpecAnFrequency_get_Start(This,pVal)	\
    ( (This)->lpVtbl -> get_Start(This,pVal) ) 

#define IIviSpecAnFrequency_put_Start(This,newVal)	\
    ( (This)->lpVtbl -> put_Start(This,newVal) ) 

#define IIviSpecAnFrequency_get_Stop(This,pVal)	\
    ( (This)->lpVtbl -> get_Stop(This,pVal) ) 

#define IIviSpecAnFrequency_put_Stop(This,newVal)	\
    ( (This)->lpVtbl -> put_Stop(This,newVal) ) 

#define IIviSpecAnFrequency_get_Offset(This,pVal)	\
    ( (This)->lpVtbl -> get_Offset(This,pVal) ) 

#define IIviSpecAnFrequency_put_Offset(This,newVal)	\
    ( (This)->lpVtbl -> put_Offset(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnFrequency_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnSweepCoupling_INTERFACE_DEFINED__
#define __IIviSpecAnSweepCoupling_INTERFACE_DEFINED__

/* interface IIviSpecAnSweepCoupling */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnSweepCoupling;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52c3-a398-11d4-ba58-000064657374")
    IIviSpecAnSweepCoupling : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ VARIANT_BOOL ResolutionBandwidthAuto,
            /* [in] */ DOUBLE ResolutionBandwidth,
            /* [in] */ VARIANT_BOOL VideoBandwidthAuto,
            /* [in] */ DOUBLE VideoBandwidth,
            /* [in] */ VARIANT_BOOL SweepTimeAuto,
            /* [in] */ DOUBLE SweepTime) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionBandwidthAuto( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ResolutionBandwidthAuto( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionBandwidth( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ResolutionBandwidth( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VideoBandwidthAuto( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_VideoBandwidthAuto( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VideoBandwidth( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_VideoBandwidth( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SweepTimeAuto( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SweepTimeAuto( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SweepTime( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SweepTime( 
            /* [in] */ DOUBLE newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnSweepCouplingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnSweepCoupling * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnSweepCoupling * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnSweepCoupling * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviSpecAnSweepCoupling * This,
            /* [in] */ VARIANT_BOOL ResolutionBandwidthAuto,
            /* [in] */ DOUBLE ResolutionBandwidth,
            /* [in] */ VARIANT_BOOL VideoBandwidthAuto,
            /* [in] */ DOUBLE VideoBandwidth,
            /* [in] */ VARIANT_BOOL SweepTimeAuto,
            /* [in] */ DOUBLE SweepTime);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionBandwidthAuto )( 
            IIviSpecAnSweepCoupling * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResolutionBandwidthAuto )( 
            IIviSpecAnSweepCoupling * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionBandwidth )( 
            IIviSpecAnSweepCoupling * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResolutionBandwidth )( 
            IIviSpecAnSweepCoupling * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VideoBandwidthAuto )( 
            IIviSpecAnSweepCoupling * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VideoBandwidthAuto )( 
            IIviSpecAnSweepCoupling * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VideoBandwidth )( 
            IIviSpecAnSweepCoupling * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VideoBandwidth )( 
            IIviSpecAnSweepCoupling * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SweepTimeAuto )( 
            IIviSpecAnSweepCoupling * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SweepTimeAuto )( 
            IIviSpecAnSweepCoupling * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SweepTime )( 
            IIviSpecAnSweepCoupling * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SweepTime )( 
            IIviSpecAnSweepCoupling * This,
            /* [in] */ DOUBLE newVal);
        
        END_INTERFACE
    } IIviSpecAnSweepCouplingVtbl;

    interface IIviSpecAnSweepCoupling
    {
        CONST_VTBL struct IIviSpecAnSweepCouplingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnSweepCoupling_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnSweepCoupling_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnSweepCoupling_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnSweepCoupling_Configure(This,ResolutionBandwidthAuto,ResolutionBandwidth,VideoBandwidthAuto,VideoBandwidth,SweepTimeAuto,SweepTime)	\
    ( (This)->lpVtbl -> Configure(This,ResolutionBandwidthAuto,ResolutionBandwidth,VideoBandwidthAuto,VideoBandwidth,SweepTimeAuto,SweepTime) ) 

#define IIviSpecAnSweepCoupling_get_ResolutionBandwidthAuto(This,pVal)	\
    ( (This)->lpVtbl -> get_ResolutionBandwidthAuto(This,pVal) ) 

#define IIviSpecAnSweepCoupling_put_ResolutionBandwidthAuto(This,newVal)	\
    ( (This)->lpVtbl -> put_ResolutionBandwidthAuto(This,newVal) ) 

#define IIviSpecAnSweepCoupling_get_ResolutionBandwidth(This,pVal)	\
    ( (This)->lpVtbl -> get_ResolutionBandwidth(This,pVal) ) 

#define IIviSpecAnSweepCoupling_put_ResolutionBandwidth(This,newVal)	\
    ( (This)->lpVtbl -> put_ResolutionBandwidth(This,newVal) ) 

#define IIviSpecAnSweepCoupling_get_VideoBandwidthAuto(This,pVal)	\
    ( (This)->lpVtbl -> get_VideoBandwidthAuto(This,pVal) ) 

#define IIviSpecAnSweepCoupling_put_VideoBandwidthAuto(This,newVal)	\
    ( (This)->lpVtbl -> put_VideoBandwidthAuto(This,newVal) ) 

#define IIviSpecAnSweepCoupling_get_VideoBandwidth(This,pVal)	\
    ( (This)->lpVtbl -> get_VideoBandwidth(This,pVal) ) 

#define IIviSpecAnSweepCoupling_put_VideoBandwidth(This,newVal)	\
    ( (This)->lpVtbl -> put_VideoBandwidth(This,newVal) ) 

#define IIviSpecAnSweepCoupling_get_SweepTimeAuto(This,pVal)	\
    ( (This)->lpVtbl -> get_SweepTimeAuto(This,pVal) ) 

#define IIviSpecAnSweepCoupling_put_SweepTimeAuto(This,newVal)	\
    ( (This)->lpVtbl -> put_SweepTimeAuto(This,newVal) ) 

#define IIviSpecAnSweepCoupling_get_SweepTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SweepTime(This,pVal) ) 

#define IIviSpecAnSweepCoupling_put_SweepTime(This,newVal)	\
    ( (This)->lpVtbl -> put_SweepTime(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnSweepCoupling_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnLevel_INTERFACE_DEFINED__
#define __IIviSpecAnLevel_INTERFACE_DEFINED__

/* interface IIviSpecAnLevel */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnLevel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52c6-a398-11d4-ba58-000064657374")
    IIviSpecAnLevel : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviSpecAnAmplitudeUnitsEnum AmplitudeUnits,
            /* [in] */ DOUBLE InputImpedance,
            /* [in] */ DOUBLE ReferenceLevel,
            /* [in] */ DOUBLE ReferenceLevelOffset,
            /* [in] */ VARIANT_BOOL AttenuationAuto,
            /* [in] */ DOUBLE Attenuation) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AmplitudeUnits( 
            /* [retval][out] */ IviSpecAnAmplitudeUnitsEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AmplitudeUnits( 
            /* [in] */ IviSpecAnAmplitudeUnitsEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InputImpedance( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InputImpedance( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Reference( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Reference( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceOffset( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceOffset( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AttenuationAuto( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AttenuationAuto( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Attenuation( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Attenuation( 
            /* [in] */ DOUBLE newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnLevelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnLevel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnLevel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnLevel * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviSpecAnLevel * This,
            /* [in] */ IviSpecAnAmplitudeUnitsEnum AmplitudeUnits,
            /* [in] */ DOUBLE InputImpedance,
            /* [in] */ DOUBLE ReferenceLevel,
            /* [in] */ DOUBLE ReferenceLevelOffset,
            /* [in] */ VARIANT_BOOL AttenuationAuto,
            /* [in] */ DOUBLE Attenuation);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AmplitudeUnits )( 
            IIviSpecAnLevel * This,
            /* [retval][out] */ IviSpecAnAmplitudeUnitsEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AmplitudeUnits )( 
            IIviSpecAnLevel * This,
            /* [in] */ IviSpecAnAmplitudeUnitsEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputImpedance )( 
            IIviSpecAnLevel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputImpedance )( 
            IIviSpecAnLevel * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Reference )( 
            IIviSpecAnLevel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reference )( 
            IIviSpecAnLevel * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceOffset )( 
            IIviSpecAnLevel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceOffset )( 
            IIviSpecAnLevel * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttenuationAuto )( 
            IIviSpecAnLevel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttenuationAuto )( 
            IIviSpecAnLevel * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attenuation )( 
            IIviSpecAnLevel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Attenuation )( 
            IIviSpecAnLevel * This,
            /* [in] */ DOUBLE newVal);
        
        END_INTERFACE
    } IIviSpecAnLevelVtbl;

    interface IIviSpecAnLevel
    {
        CONST_VTBL struct IIviSpecAnLevelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnLevel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnLevel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnLevel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnLevel_Configure(This,AmplitudeUnits,InputImpedance,ReferenceLevel,ReferenceLevelOffset,AttenuationAuto,Attenuation)	\
    ( (This)->lpVtbl -> Configure(This,AmplitudeUnits,InputImpedance,ReferenceLevel,ReferenceLevelOffset,AttenuationAuto,Attenuation) ) 

#define IIviSpecAnLevel_get_AmplitudeUnits(This,pVal)	\
    ( (This)->lpVtbl -> get_AmplitudeUnits(This,pVal) ) 

#define IIviSpecAnLevel_put_AmplitudeUnits(This,newVal)	\
    ( (This)->lpVtbl -> put_AmplitudeUnits(This,newVal) ) 

#define IIviSpecAnLevel_get_InputImpedance(This,pVal)	\
    ( (This)->lpVtbl -> get_InputImpedance(This,pVal) ) 

#define IIviSpecAnLevel_put_InputImpedance(This,newVal)	\
    ( (This)->lpVtbl -> put_InputImpedance(This,newVal) ) 

#define IIviSpecAnLevel_get_Reference(This,pVal)	\
    ( (This)->lpVtbl -> get_Reference(This,pVal) ) 

#define IIviSpecAnLevel_put_Reference(This,newVal)	\
    ( (This)->lpVtbl -> put_Reference(This,newVal) ) 

#define IIviSpecAnLevel_get_ReferenceOffset(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferenceOffset(This,pVal) ) 

#define IIviSpecAnLevel_put_ReferenceOffset(This,newVal)	\
    ( (This)->lpVtbl -> put_ReferenceOffset(This,newVal) ) 

#define IIviSpecAnLevel_get_AttenuationAuto(This,pVal)	\
    ( (This)->lpVtbl -> get_AttenuationAuto(This,pVal) ) 

#define IIviSpecAnLevel_put_AttenuationAuto(This,newVal)	\
    ( (This)->lpVtbl -> put_AttenuationAuto(This,newVal) ) 

#define IIviSpecAnLevel_get_Attenuation(This,pVal)	\
    ( (This)->lpVtbl -> get_Attenuation(This,pVal) ) 

#define IIviSpecAnLevel_put_Attenuation(This,newVal)	\
    ( (This)->lpVtbl -> put_Attenuation(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnLevel_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnAcquisition_INTERFACE_DEFINED__
#define __IIviSpecAnAcquisition_INTERFACE_DEFINED__

/* interface IIviSpecAnAcquisition */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnAcquisition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52c4-a398-11d4-ba58-000064657374")
    IIviSpecAnAcquisition : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ VARIANT_BOOL SweepModeContinuous,
            /* [in] */ LONG NumberOfSweeps,
            /* [in] */ VARIANT_BOOL DetectorTypeAuto,
            /* [in] */ IviSpecAnDetectorTypeEnum DetectorType,
            /* [in] */ IviSpecAnVerticalScaleEnum VerticalScale) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SweepModeContinuous( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SweepModeContinuous( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfSweeps( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NumberOfSweeps( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DetectorTypeAuto( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DetectorTypeAuto( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DetectorType( 
            /* [retval][out] */ IviSpecAnDetectorTypeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DetectorType( 
            /* [in] */ IviSpecAnDetectorTypeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalScale( 
            /* [retval][out] */ IviSpecAnVerticalScaleEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_VerticalScale( 
            /* [in] */ IviSpecAnVerticalScaleEnum newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnAcquisitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnAcquisition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnAcquisition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnAcquisition * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviSpecAnAcquisition * This,
            /* [in] */ VARIANT_BOOL SweepModeContinuous,
            /* [in] */ LONG NumberOfSweeps,
            /* [in] */ VARIANT_BOOL DetectorTypeAuto,
            /* [in] */ IviSpecAnDetectorTypeEnum DetectorType,
            /* [in] */ IviSpecAnVerticalScaleEnum VerticalScale);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SweepModeContinuous )( 
            IIviSpecAnAcquisition * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SweepModeContinuous )( 
            IIviSpecAnAcquisition * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfSweeps )( 
            IIviSpecAnAcquisition * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfSweeps )( 
            IIviSpecAnAcquisition * This,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DetectorTypeAuto )( 
            IIviSpecAnAcquisition * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DetectorTypeAuto )( 
            IIviSpecAnAcquisition * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DetectorType )( 
            IIviSpecAnAcquisition * This,
            /* [retval][out] */ IviSpecAnDetectorTypeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DetectorType )( 
            IIviSpecAnAcquisition * This,
            /* [in] */ IviSpecAnDetectorTypeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScale )( 
            IIviSpecAnAcquisition * This,
            /* [retval][out] */ IviSpecAnVerticalScaleEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VerticalScale )( 
            IIviSpecAnAcquisition * This,
            /* [in] */ IviSpecAnVerticalScaleEnum newVal);
        
        END_INTERFACE
    } IIviSpecAnAcquisitionVtbl;

    interface IIviSpecAnAcquisition
    {
        CONST_VTBL struct IIviSpecAnAcquisitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnAcquisition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnAcquisition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnAcquisition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnAcquisition_Configure(This,SweepModeContinuous,NumberOfSweeps,DetectorTypeAuto,DetectorType,VerticalScale)	\
    ( (This)->lpVtbl -> Configure(This,SweepModeContinuous,NumberOfSweeps,DetectorTypeAuto,DetectorType,VerticalScale) ) 

#define IIviSpecAnAcquisition_get_SweepModeContinuous(This,pVal)	\
    ( (This)->lpVtbl -> get_SweepModeContinuous(This,pVal) ) 

#define IIviSpecAnAcquisition_put_SweepModeContinuous(This,newVal)	\
    ( (This)->lpVtbl -> put_SweepModeContinuous(This,newVal) ) 

#define IIviSpecAnAcquisition_get_NumberOfSweeps(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberOfSweeps(This,pVal) ) 

#define IIviSpecAnAcquisition_put_NumberOfSweeps(This,newVal)	\
    ( (This)->lpVtbl -> put_NumberOfSweeps(This,newVal) ) 

#define IIviSpecAnAcquisition_get_DetectorTypeAuto(This,pVal)	\
    ( (This)->lpVtbl -> get_DetectorTypeAuto(This,pVal) ) 

#define IIviSpecAnAcquisition_put_DetectorTypeAuto(This,newVal)	\
    ( (This)->lpVtbl -> put_DetectorTypeAuto(This,newVal) ) 

#define IIviSpecAnAcquisition_get_DetectorType(This,pVal)	\
    ( (This)->lpVtbl -> get_DetectorType(This,pVal) ) 

#define IIviSpecAnAcquisition_put_DetectorType(This,newVal)	\
    ( (This)->lpVtbl -> put_DetectorType(This,newVal) ) 

#define IIviSpecAnAcquisition_get_VerticalScale(This,pVal)	\
    ( (This)->lpVtbl -> get_VerticalScale(This,pVal) ) 

#define IIviSpecAnAcquisition_put_VerticalScale(This,newVal)	\
    ( (This)->lpVtbl -> put_VerticalScale(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnAcquisition_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnDisplay_INTERFACE_DEFINED__
#define __IIviSpecAnDisplay_INTERFACE_DEFINED__

/* interface IIviSpecAnDisplay */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnDisplay;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52ca-a398-11d4-ba58-000064657374")
    IIviSpecAnDisplay : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UnitsPerDivision( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UnitsPerDivision( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfDivisions( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnDisplayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnDisplay * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnDisplay * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnDisplay * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnitsPerDivision )( 
            IIviSpecAnDisplay * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UnitsPerDivision )( 
            IIviSpecAnDisplay * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfDivisions )( 
            IIviSpecAnDisplay * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IIviSpecAnDisplayVtbl;

    interface IIviSpecAnDisplay
    {
        CONST_VTBL struct IIviSpecAnDisplayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnDisplay_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnDisplay_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnDisplay_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnDisplay_get_UnitsPerDivision(This,pVal)	\
    ( (This)->lpVtbl -> get_UnitsPerDivision(This,pVal) ) 

#define IIviSpecAnDisplay_put_UnitsPerDivision(This,newVal)	\
    ( (This)->lpVtbl -> put_UnitsPerDivision(This,newVal) ) 

#define IIviSpecAnDisplay_get_NumberOfDivisions(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberOfDivisions(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnDisplay_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnExternalMixer_INTERFACE_DEFINED__
#define __IIviSpecAnExternalMixer_INTERFACE_DEFINED__

/* interface IIviSpecAnExternalMixer */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnExternalMixer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52cb-a398-11d4-ba58-000064657374")
    IIviSpecAnExternalMixer : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Bias( 
            /* [retval][out] */ IIviSpecAnExternalMixerBias **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ConversionLossTable( 
            /* [retval][out] */ IIviSpecAnExternalMixerConversionLossTable **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ LONG Harmonic,
            /* [in] */ DOUBLE AverageConversionLoss) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Harmonic( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Harmonic( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AverageConversionLoss( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AverageConversionLoss( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfPorts( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NumberOfPorts( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnExternalMixerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnExternalMixer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnExternalMixer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnExternalMixer * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bias )( 
            IIviSpecAnExternalMixer * This,
            /* [retval][out] */ IIviSpecAnExternalMixerBias **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConversionLossTable )( 
            IIviSpecAnExternalMixer * This,
            /* [retval][out] */ IIviSpecAnExternalMixerConversionLossTable **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviSpecAnExternalMixer * This,
            /* [in] */ LONG Harmonic,
            /* [in] */ DOUBLE AverageConversionLoss);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Harmonic )( 
            IIviSpecAnExternalMixer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Harmonic )( 
            IIviSpecAnExternalMixer * This,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AverageConversionLoss )( 
            IIviSpecAnExternalMixer * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AverageConversionLoss )( 
            IIviSpecAnExternalMixer * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviSpecAnExternalMixer * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviSpecAnExternalMixer * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfPorts )( 
            IIviSpecAnExternalMixer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfPorts )( 
            IIviSpecAnExternalMixer * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } IIviSpecAnExternalMixerVtbl;

    interface IIviSpecAnExternalMixer
    {
        CONST_VTBL struct IIviSpecAnExternalMixerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnExternalMixer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnExternalMixer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnExternalMixer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnExternalMixer_get_Bias(This,pVal)	\
    ( (This)->lpVtbl -> get_Bias(This,pVal) ) 

#define IIviSpecAnExternalMixer_get_ConversionLossTable(This,pVal)	\
    ( (This)->lpVtbl -> get_ConversionLossTable(This,pVal) ) 

#define IIviSpecAnExternalMixer_Configure(This,Harmonic,AverageConversionLoss)	\
    ( (This)->lpVtbl -> Configure(This,Harmonic,AverageConversionLoss) ) 

#define IIviSpecAnExternalMixer_get_Harmonic(This,pVal)	\
    ( (This)->lpVtbl -> get_Harmonic(This,pVal) ) 

#define IIviSpecAnExternalMixer_put_Harmonic(This,newVal)	\
    ( (This)->lpVtbl -> put_Harmonic(This,newVal) ) 

#define IIviSpecAnExternalMixer_get_AverageConversionLoss(This,pVal)	\
    ( (This)->lpVtbl -> get_AverageConversionLoss(This,pVal) ) 

#define IIviSpecAnExternalMixer_put_AverageConversionLoss(This,newVal)	\
    ( (This)->lpVtbl -> put_AverageConversionLoss(This,newVal) ) 

#define IIviSpecAnExternalMixer_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviSpecAnExternalMixer_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviSpecAnExternalMixer_get_NumberOfPorts(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberOfPorts(This,pVal) ) 

#define IIviSpecAnExternalMixer_put_NumberOfPorts(This,newVal)	\
    ( (This)->lpVtbl -> put_NumberOfPorts(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnExternalMixer_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnExternalMixerBias_INTERFACE_DEFINED__
#define __IIviSpecAnExternalMixerBias_INTERFACE_DEFINED__

/* interface IIviSpecAnExternalMixerBias */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnExternalMixerBias;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52d3-a398-11d4-ba58-000064657374")
    IIviSpecAnExternalMixerBias : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE Bias,
            /* [in] */ DOUBLE BiasLimit) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Limit( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Limit( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnExternalMixerBiasVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnExternalMixerBias * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnExternalMixerBias * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnExternalMixerBias * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviSpecAnExternalMixerBias * This,
            /* [in] */ DOUBLE Bias,
            /* [in] */ DOUBLE BiasLimit);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviSpecAnExternalMixerBias * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviSpecAnExternalMixerBias * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Limit )( 
            IIviSpecAnExternalMixerBias * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Limit )( 
            IIviSpecAnExternalMixerBias * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviSpecAnExternalMixerBias * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviSpecAnExternalMixerBias * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IIviSpecAnExternalMixerBiasVtbl;

    interface IIviSpecAnExternalMixerBias
    {
        CONST_VTBL struct IIviSpecAnExternalMixerBiasVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnExternalMixerBias_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnExternalMixerBias_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnExternalMixerBias_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnExternalMixerBias_Configure(This,Bias,BiasLimit)	\
    ( (This)->lpVtbl -> Configure(This,Bias,BiasLimit) ) 

#define IIviSpecAnExternalMixerBias_get_Level(This,pVal)	\
    ( (This)->lpVtbl -> get_Level(This,pVal) ) 

#define IIviSpecAnExternalMixerBias_put_Level(This,newVal)	\
    ( (This)->lpVtbl -> put_Level(This,newVal) ) 

#define IIviSpecAnExternalMixerBias_get_Limit(This,pVal)	\
    ( (This)->lpVtbl -> get_Limit(This,pVal) ) 

#define IIviSpecAnExternalMixerBias_put_Limit(This,newVal)	\
    ( (This)->lpVtbl -> put_Limit(This,newVal) ) 

#define IIviSpecAnExternalMixerBias_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviSpecAnExternalMixerBias_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnExternalMixerBias_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnExternalMixerConversionLossTable_INTERFACE_DEFINED__
#define __IIviSpecAnExternalMixerConversionLossTable_INTERFACE_DEFINED__

/* interface IIviSpecAnExternalMixerConversionLossTable */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnExternalMixerConversionLossTable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52d4-a398-11d4-ba58-000064657374")
    IIviSpecAnExternalMixerConversionLossTable : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ SAFEARRAY * *Frequency,
            /* [in] */ SAFEARRAY * *ConversionLoss) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnExternalMixerConversionLossTableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnExternalMixerConversionLossTable * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnExternalMixerConversionLossTable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnExternalMixerConversionLossTable * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviSpecAnExternalMixerConversionLossTable * This,
            /* [in] */ SAFEARRAY * *Frequency,
            /* [in] */ SAFEARRAY * *ConversionLoss);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviSpecAnExternalMixerConversionLossTable * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviSpecAnExternalMixerConversionLossTable * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IIviSpecAnExternalMixerConversionLossTableVtbl;

    interface IIviSpecAnExternalMixerConversionLossTable
    {
        CONST_VTBL struct IIviSpecAnExternalMixerConversionLossTableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnExternalMixerConversionLossTable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnExternalMixerConversionLossTable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnExternalMixerConversionLossTable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnExternalMixerConversionLossTable_Configure(This,Frequency,ConversionLoss)	\
    ( (This)->lpVtbl -> Configure(This,Frequency,ConversionLoss) ) 

#define IIviSpecAnExternalMixerConversionLossTable_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviSpecAnExternalMixerConversionLossTable_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnExternalMixerConversionLossTable_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnMarker_INTERFACE_DEFINED__
#define __IIviSpecAnMarker_INTERFACE_DEFINED__

/* interface IIviSpecAnMarker */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnMarker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52cc-a398-11d4-ba58-000064657374")
    IIviSpecAnMarker : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyCounter( 
            /* [retval][out] */ IIviSpecAnMarkerFrequencyCounter **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveMarker( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ActiveMarker( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Amplitude( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureEnabled( 
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ BSTR MarkerTraceName) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureSearch( 
            /* [in] */ DOUBLE PeakExcursion,
            /* [in] */ DOUBLE MarkerThreshold) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE DisableAll( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE MakeDelta( 
            /* [in] */ VARIANT_BOOL DeltaMarker) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ IviSpecAnMarkerTypeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Search( 
            /* [in] */ IviSpecAnMarkerSearchEnum SearchType) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PeakExcursion( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PeakExcursion( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Query( 
            /* [out][in] */ DOUBLE *MarkerPosition,
            /* [out][in] */ DOUBLE *MarkerAmplitude) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE QueryReference( 
            /* [out][in] */ DOUBLE *ReferencePosition,
            /* [out][in] */ DOUBLE *ReferenceAmplitude) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ReferencePosition( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceAmplitude( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetInstrumentFromMarker( 
            /* [in] */ IviSpecAnInstrumentSettingEnum InstrumentSetting) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SignalTrackEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SignalTrackEnabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Trace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Trace( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnMarkerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnMarker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnMarker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnMarker * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyCounter )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ IIviSpecAnMarkerFrequencyCounter **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveMarker )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveMarker )( 
            IIviSpecAnMarker * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Amplitude )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureEnabled )( 
            IIviSpecAnMarker * This,
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ BSTR MarkerTraceName);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureSearch )( 
            IIviSpecAnMarker * This,
            /* [in] */ DOUBLE PeakExcursion,
            /* [in] */ DOUBLE MarkerThreshold);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *DisableAll )( 
            IIviSpecAnMarker * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviSpecAnMarker * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *MakeDelta )( 
            IIviSpecAnMarker * This,
            /* [in] */ VARIANT_BOOL DeltaMarker);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ IviSpecAnMarkerTypeEnum *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Search )( 
            IIviSpecAnMarker * This,
            /* [in] */ IviSpecAnMarkerSearchEnum SearchType);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviSpecAnMarker * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PeakExcursion )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PeakExcursion )( 
            IIviSpecAnMarker * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            IIviSpecAnMarker * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Query )( 
            IIviSpecAnMarker * This,
            /* [out][in] */ DOUBLE *MarkerPosition,
            /* [out][in] */ DOUBLE *MarkerAmplitude);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryReference )( 
            IIviSpecAnMarker * This,
            /* [out][in] */ DOUBLE *ReferencePosition,
            /* [out][in] */ DOUBLE *ReferenceAmplitude);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencePosition )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceAmplitude )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetInstrumentFromMarker )( 
            IIviSpecAnMarker * This,
            /* [in] */ IviSpecAnInstrumentSettingEnum InstrumentSetting);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignalTrackEnabled )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignalTrackEnabled )( 
            IIviSpecAnMarker * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Threshold )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Threshold )( 
            IIviSpecAnMarker * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trace )( 
            IIviSpecAnMarker * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Trace )( 
            IIviSpecAnMarker * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IIviSpecAnMarkerVtbl;

    interface IIviSpecAnMarker
    {
        CONST_VTBL struct IIviSpecAnMarkerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnMarker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnMarker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnMarker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnMarker_get_FrequencyCounter(This,pVal)	\
    ( (This)->lpVtbl -> get_FrequencyCounter(This,pVal) ) 

#define IIviSpecAnMarker_get_ActiveMarker(This,pVal)	\
    ( (This)->lpVtbl -> get_ActiveMarker(This,pVal) ) 

#define IIviSpecAnMarker_put_ActiveMarker(This,newVal)	\
    ( (This)->lpVtbl -> put_ActiveMarker(This,newVal) ) 

#define IIviSpecAnMarker_get_Amplitude(This,pVal)	\
    ( (This)->lpVtbl -> get_Amplitude(This,pVal) ) 

#define IIviSpecAnMarker_ConfigureEnabled(This,Enabled,MarkerTraceName)	\
    ( (This)->lpVtbl -> ConfigureEnabled(This,Enabled,MarkerTraceName) ) 

#define IIviSpecAnMarker_ConfigureSearch(This,PeakExcursion,MarkerThreshold)	\
    ( (This)->lpVtbl -> ConfigureSearch(This,PeakExcursion,MarkerThreshold) ) 

#define IIviSpecAnMarker_DisableAll(This)	\
    ( (This)->lpVtbl -> DisableAll(This) ) 

#define IIviSpecAnMarker_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviSpecAnMarker_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviSpecAnMarker_MakeDelta(This,DeltaMarker)	\
    ( (This)->lpVtbl -> MakeDelta(This,DeltaMarker) ) 

#define IIviSpecAnMarker_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IIviSpecAnMarker_Search(This,SearchType)	\
    ( (This)->lpVtbl -> Search(This,SearchType) ) 

#define IIviSpecAnMarker_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviSpecAnMarker_get_Name(This,Index,Name)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Name) ) 

#define IIviSpecAnMarker_get_PeakExcursion(This,pVal)	\
    ( (This)->lpVtbl -> get_PeakExcursion(This,pVal) ) 

#define IIviSpecAnMarker_put_PeakExcursion(This,newVal)	\
    ( (This)->lpVtbl -> put_PeakExcursion(This,newVal) ) 

#define IIviSpecAnMarker_get_Position(This,pVal)	\
    ( (This)->lpVtbl -> get_Position(This,pVal) ) 

#define IIviSpecAnMarker_put_Position(This,newVal)	\
    ( (This)->lpVtbl -> put_Position(This,newVal) ) 

#define IIviSpecAnMarker_Query(This,MarkerPosition,MarkerAmplitude)	\
    ( (This)->lpVtbl -> Query(This,MarkerPosition,MarkerAmplitude) ) 

#define IIviSpecAnMarker_QueryReference(This,ReferencePosition,ReferenceAmplitude)	\
    ( (This)->lpVtbl -> QueryReference(This,ReferencePosition,ReferenceAmplitude) ) 

#define IIviSpecAnMarker_get_ReferencePosition(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferencePosition(This,pVal) ) 

#define IIviSpecAnMarker_get_ReferenceAmplitude(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferenceAmplitude(This,pVal) ) 

#define IIviSpecAnMarker_SetInstrumentFromMarker(This,InstrumentSetting)	\
    ( (This)->lpVtbl -> SetInstrumentFromMarker(This,InstrumentSetting) ) 

#define IIviSpecAnMarker_get_SignalTrackEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_SignalTrackEnabled(This,pVal) ) 

#define IIviSpecAnMarker_put_SignalTrackEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_SignalTrackEnabled(This,newVal) ) 

#define IIviSpecAnMarker_get_Threshold(This,pVal)	\
    ( (This)->lpVtbl -> get_Threshold(This,pVal) ) 

#define IIviSpecAnMarker_put_Threshold(This,newVal)	\
    ( (This)->lpVtbl -> put_Threshold(This,newVal) ) 

#define IIviSpecAnMarker_get_Trace(This,pVal)	\
    ( (This)->lpVtbl -> get_Trace(This,pVal) ) 

#define IIviSpecAnMarker_put_Trace(This,newVal)	\
    ( (This)->lpVtbl -> put_Trace(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnMarker_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnMarkerFrequencyCounter_INTERFACE_DEFINED__
#define __IIviSpecAnMarkerFrequencyCounter_INTERFACE_DEFINED__

/* interface IIviSpecAnMarkerFrequencyCounter */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnMarkerFrequencyCounter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52d0-a398-11d4-ba58-000064657374")
    IIviSpecAnMarkerFrequencyCounter : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ DOUBLE Resolution) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ DOUBLE newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnMarkerFrequencyCounterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnMarkerFrequencyCounter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnMarkerFrequencyCounter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnMarkerFrequencyCounter * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviSpecAnMarkerFrequencyCounter * This,
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ DOUBLE Resolution);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviSpecAnMarkerFrequencyCounter * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviSpecAnMarkerFrequencyCounter * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IIviSpecAnMarkerFrequencyCounter * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IIviSpecAnMarkerFrequencyCounter * This,
            /* [in] */ DOUBLE newVal);
        
        END_INTERFACE
    } IIviSpecAnMarkerFrequencyCounterVtbl;

    interface IIviSpecAnMarkerFrequencyCounter
    {
        CONST_VTBL struct IIviSpecAnMarkerFrequencyCounterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnMarkerFrequencyCounter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnMarkerFrequencyCounter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnMarkerFrequencyCounter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnMarkerFrequencyCounter_Configure(This,Enabled,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Enabled,Resolution) ) 

#define IIviSpecAnMarkerFrequencyCounter_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviSpecAnMarkerFrequencyCounter_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviSpecAnMarkerFrequencyCounter_get_Resolution(This,pVal)	\
    ( (This)->lpVtbl -> get_Resolution(This,pVal) ) 

#define IIviSpecAnMarkerFrequencyCounter_put_Resolution(This,newVal)	\
    ( (This)->lpVtbl -> put_Resolution(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnMarkerFrequencyCounter_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnTraces_INTERFACE_DEFINED__
#define __IIviSpecAnTraces_INTERFACE_DEFINED__

/* interface IIviSpecAnTraces */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnTraces;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52c7-a398-11d4-ba58-000064657374")
    IIviSpecAnTraces : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Math( 
            /* [retval][out] */ IIviSpecAnTracesMath **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Initiate( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AcquisitionStatus( 
            /* [retval][out] */ IviSpecAnAcquisitionStatusEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviSpecAnTrace **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnTracesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnTraces * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnTraces * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnTraces * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Math )( 
            IIviSpecAnTraces * This,
            /* [retval][out] */ IIviSpecAnTracesMath **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IIviSpecAnTraces * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initiate )( 
            IIviSpecAnTraces * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *AcquisitionStatus )( 
            IIviSpecAnTraces * This,
            /* [retval][out] */ IviSpecAnAcquisitionStatusEnum *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviSpecAnTraces * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviSpecAnTrace **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviSpecAnTraces * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviSpecAnTraces * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviSpecAnTraces * This);
        
        END_INTERFACE
    } IIviSpecAnTracesVtbl;

    interface IIviSpecAnTraces
    {
        CONST_VTBL struct IIviSpecAnTracesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnTraces_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnTraces_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnTraces_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnTraces_get_Math(This,pVal)	\
    ( (This)->lpVtbl -> get_Math(This,pVal) ) 

#define IIviSpecAnTraces_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IIviSpecAnTraces_Initiate(This)	\
    ( (This)->lpVtbl -> Initiate(This) ) 

#define IIviSpecAnTraces_AcquisitionStatus(This,pVal)	\
    ( (This)->lpVtbl -> AcquisitionStatus(This,pVal) ) 

#define IIviSpecAnTraces_get_Item(This,Name,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Name,pVal) ) 

#define IIviSpecAnTraces_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviSpecAnTraces_get_Name(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,Index,pVal) ) 

#define IIviSpecAnTraces_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnTraces_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnTrace_INTERFACE_DEFINED__
#define __IIviSpecAnTrace_INTERFACE_DEFINED__

/* interface IIviSpecAnTrace */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnTrace;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52c8-a398-11d4-ba58-000064657374")
    IIviSpecAnTrace : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FetchY( 
            /* [out][in] */ SAFEARRAY * *Amplitude) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ReadY( 
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *Amplitude) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ IviSpecAnTraceTypeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ IviSpecAnTraceTypeEnum newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnTraceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnTrace * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnTrace * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnTrace * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *FetchY )( 
            IIviSpecAnTrace * This,
            /* [out][in] */ SAFEARRAY * *Amplitude);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadY )( 
            IIviSpecAnTrace * This,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *Amplitude);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IIviSpecAnTrace * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IIviSpecAnTrace * This,
            /* [retval][out] */ IviSpecAnTraceTypeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IIviSpecAnTrace * This,
            /* [in] */ IviSpecAnTraceTypeEnum newVal);
        
        END_INTERFACE
    } IIviSpecAnTraceVtbl;

    interface IIviSpecAnTrace
    {
        CONST_VTBL struct IIviSpecAnTraceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnTrace_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnTrace_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnTrace_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnTrace_FetchY(This,Amplitude)	\
    ( (This)->lpVtbl -> FetchY(This,Amplitude) ) 

#define IIviSpecAnTrace_ReadY(This,MaxTimeMilliseconds,Amplitude)	\
    ( (This)->lpVtbl -> ReadY(This,MaxTimeMilliseconds,Amplitude) ) 

#define IIviSpecAnTrace_get_Size(This,pVal)	\
    ( (This)->lpVtbl -> get_Size(This,pVal) ) 

#define IIviSpecAnTrace_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IIviSpecAnTrace_put_Type(This,newVal)	\
    ( (This)->lpVtbl -> put_Type(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnTrace_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnTracesMath_INTERFACE_DEFINED__
#define __IIviSpecAnTracesMath_INTERFACE_DEFINED__

/* interface IIviSpecAnTracesMath */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnTracesMath;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52c9-a398-11d4-ba58-000064657374")
    IIviSpecAnTracesMath : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR DestinationTrace,
            /* [in] */ BSTR Trace1,
            /* [in] */ BSTR Trace2) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Copy( 
            /* [in] */ BSTR DestinationTrace,
            /* [in] */ BSTR SourceTrace) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Exchange( 
            /* [in] */ BSTR Trace1,
            /* [in] */ BSTR Trace2) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Subtract( 
            /* [in] */ BSTR DestinationTrace,
            /* [in] */ BSTR Trace1,
            /* [in] */ BSTR Trace2) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnTracesMathVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnTracesMath * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnTracesMath * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnTracesMath * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IIviSpecAnTracesMath * This,
            /* [in] */ BSTR DestinationTrace,
            /* [in] */ BSTR Trace1,
            /* [in] */ BSTR Trace2);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IIviSpecAnTracesMath * This,
            /* [in] */ BSTR DestinationTrace,
            /* [in] */ BSTR SourceTrace);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Exchange )( 
            IIviSpecAnTracesMath * This,
            /* [in] */ BSTR Trace1,
            /* [in] */ BSTR Trace2);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Subtract )( 
            IIviSpecAnTracesMath * This,
            /* [in] */ BSTR DestinationTrace,
            /* [in] */ BSTR Trace1,
            /* [in] */ BSTR Trace2);
        
        END_INTERFACE
    } IIviSpecAnTracesMathVtbl;

    interface IIviSpecAnTracesMath
    {
        CONST_VTBL struct IIviSpecAnTracesMathVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnTracesMath_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnTracesMath_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnTracesMath_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnTracesMath_Add(This,DestinationTrace,Trace1,Trace2)	\
    ( (This)->lpVtbl -> Add(This,DestinationTrace,Trace1,Trace2) ) 

#define IIviSpecAnTracesMath_Copy(This,DestinationTrace,SourceTrace)	\
    ( (This)->lpVtbl -> Copy(This,DestinationTrace,SourceTrace) ) 

#define IIviSpecAnTracesMath_Exchange(This,Trace1,Trace2)	\
    ( (This)->lpVtbl -> Exchange(This,Trace1,Trace2) ) 

#define IIviSpecAnTracesMath_Subtract(This,DestinationTrace,Trace1,Trace2)	\
    ( (This)->lpVtbl -> Subtract(This,DestinationTrace,Trace1,Trace2) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnTracesMath_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnTrigger_INTERFACE_DEFINED__
#define __IIviSpecAnTrigger_INTERFACE_DEFINED__

/* interface IIviSpecAnTrigger */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52c5-a398-11d4-ba58-000064657374")
    IIviSpecAnTrigger : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ IviSpecAnTriggerSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ IviSpecAnTriggerSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_External( 
            /* [retval][out] */ IIviSpecAnTriggerExternal **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Video( 
            /* [retval][out] */ IIviSpecAnTriggerVideo **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnTrigger * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviSpecAnTrigger * This,
            /* [retval][out] */ IviSpecAnTriggerSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviSpecAnTrigger * This,
            /* [in] */ IviSpecAnTriggerSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_External )( 
            IIviSpecAnTrigger * This,
            /* [retval][out] */ IIviSpecAnTriggerExternal **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Video )( 
            IIviSpecAnTrigger * This,
            /* [retval][out] */ IIviSpecAnTriggerVideo **pVal);
        
        END_INTERFACE
    } IIviSpecAnTriggerVtbl;

    interface IIviSpecAnTrigger
    {
        CONST_VTBL struct IIviSpecAnTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnTrigger_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#define IIviSpecAnTrigger_put_Source(This,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,newVal) ) 

#define IIviSpecAnTrigger_get_External(This,pVal)	\
    ( (This)->lpVtbl -> get_External(This,pVal) ) 

#define IIviSpecAnTrigger_get_Video(This,pVal)	\
    ( (This)->lpVtbl -> get_Video(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnTrigger_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnTriggerExternal_INTERFACE_DEFINED__
#define __IIviSpecAnTriggerExternal_INTERFACE_DEFINED__

/* interface IIviSpecAnTriggerExternal */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnTriggerExternal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52ce-a398-11d4-ba58-000064657374")
    IIviSpecAnTriggerExternal : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE ExternalTriggerLevel,
            /* [in] */ IviSpecAnExternalTriggerSlopeEnum ExternalTriggerSlope) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ IviSpecAnExternalTriggerSlopeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ IviSpecAnExternalTriggerSlopeEnum newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnTriggerExternalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnTriggerExternal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnTriggerExternal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnTriggerExternal * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviSpecAnTriggerExternal * This,
            /* [in] */ DOUBLE ExternalTriggerLevel,
            /* [in] */ IviSpecAnExternalTriggerSlopeEnum ExternalTriggerSlope);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviSpecAnTriggerExternal * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviSpecAnTriggerExternal * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviSpecAnTriggerExternal * This,
            /* [retval][out] */ IviSpecAnExternalTriggerSlopeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviSpecAnTriggerExternal * This,
            /* [in] */ IviSpecAnExternalTriggerSlopeEnum newVal);
        
        END_INTERFACE
    } IIviSpecAnTriggerExternalVtbl;

    interface IIviSpecAnTriggerExternal
    {
        CONST_VTBL struct IIviSpecAnTriggerExternalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnTriggerExternal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnTriggerExternal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnTriggerExternal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnTriggerExternal_Configure(This,ExternalTriggerLevel,ExternalTriggerSlope)	\
    ( (This)->lpVtbl -> Configure(This,ExternalTriggerLevel,ExternalTriggerSlope) ) 

#define IIviSpecAnTriggerExternal_get_Level(This,pVal)	\
    ( (This)->lpVtbl -> get_Level(This,pVal) ) 

#define IIviSpecAnTriggerExternal_put_Level(This,newVal)	\
    ( (This)->lpVtbl -> put_Level(This,newVal) ) 

#define IIviSpecAnTriggerExternal_get_Slope(This,pVal)	\
    ( (This)->lpVtbl -> get_Slope(This,pVal) ) 

#define IIviSpecAnTriggerExternal_put_Slope(This,newVal)	\
    ( (This)->lpVtbl -> put_Slope(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnTriggerExternal_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnTriggerVideo_INTERFACE_DEFINED__
#define __IIviSpecAnTriggerVideo_INTERFACE_DEFINED__

/* interface IIviSpecAnTriggerVideo */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnTriggerVideo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52cf-a398-11d4-ba58-000064657374")
    IIviSpecAnTriggerVideo : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE VideoTriggerLevel,
            /* [in] */ IviSpecAnVideoTriggerSlopeEnum VideoTriggerSlope) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ IviSpecAnVideoTriggerSlopeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ IviSpecAnVideoTriggerSlopeEnum newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnTriggerVideoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnTriggerVideo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnTriggerVideo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnTriggerVideo * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviSpecAnTriggerVideo * This,
            /* [in] */ DOUBLE VideoTriggerLevel,
            /* [in] */ IviSpecAnVideoTriggerSlopeEnum VideoTriggerSlope);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviSpecAnTriggerVideo * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviSpecAnTriggerVideo * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviSpecAnTriggerVideo * This,
            /* [retval][out] */ IviSpecAnVideoTriggerSlopeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviSpecAnTriggerVideo * This,
            /* [in] */ IviSpecAnVideoTriggerSlopeEnum newVal);
        
        END_INTERFACE
    } IIviSpecAnTriggerVideoVtbl;

    interface IIviSpecAnTriggerVideo
    {
        CONST_VTBL struct IIviSpecAnTriggerVideoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnTriggerVideo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnTriggerVideo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnTriggerVideo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnTriggerVideo_Configure(This,VideoTriggerLevel,VideoTriggerSlope)	\
    ( (This)->lpVtbl -> Configure(This,VideoTriggerLevel,VideoTriggerSlope) ) 

#define IIviSpecAnTriggerVideo_get_Level(This,pVal)	\
    ( (This)->lpVtbl -> get_Level(This,pVal) ) 

#define IIviSpecAnTriggerVideo_put_Level(This,newVal)	\
    ( (This)->lpVtbl -> put_Level(This,newVal) ) 

#define IIviSpecAnTriggerVideo_get_Slope(This,pVal)	\
    ( (This)->lpVtbl -> get_Slope(This,pVal) ) 

#define IIviSpecAnTriggerVideo_put_Slope(This,newVal)	\
    ( (This)->lpVtbl -> put_Slope(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnTriggerVideo_INTERFACE_DEFINED__ */


#ifndef __IIviSpecAnPreselector_INTERFACE_DEFINED__
#define __IIviSpecAnPreselector_INTERFACE_DEFINED__

/* interface IIviSpecAnPreselector */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSpecAnPreselector;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed52cd-a398-11d4-ba58-000064657374")
    IIviSpecAnPreselector : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Peak( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSpecAnPreselectorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSpecAnPreselector * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSpecAnPreselector * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSpecAnPreselector * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Peak )( 
            IIviSpecAnPreselector * This);
        
        END_INTERFACE
    } IIviSpecAnPreselectorVtbl;

    interface IIviSpecAnPreselector
    {
        CONST_VTBL struct IIviSpecAnPreselectorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSpecAnPreselector_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSpecAnPreselector_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSpecAnPreselector_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSpecAnPreselector_Peak(This)	\
    ( (This)->lpVtbl -> Peak(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSpecAnPreselector_INTERFACE_DEFINED__ */

#endif /* __IviSpecAnLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


