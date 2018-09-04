

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:59:18 2016
 */
/* Compiler settings for IviScopeTypeLib.idl:
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


#ifndef __IviScopeTypeLib_h__
#define __IviScopeTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviScope_FWD_DEFINED__
#define __IIviScope_FWD_DEFINED__
typedef interface IIviScope IIviScope;

#endif 	/* __IIviScope_FWD_DEFINED__ */


#ifndef __IIviScopeAcquisition_FWD_DEFINED__
#define __IIviScopeAcquisition_FWD_DEFINED__
typedef interface IIviScopeAcquisition IIviScopeAcquisition;

#endif 	/* __IIviScopeAcquisition_FWD_DEFINED__ */


#ifndef __IIviScopeChannels_FWD_DEFINED__
#define __IIviScopeChannels_FWD_DEFINED__
typedef interface IIviScopeChannels IIviScopeChannels;

#endif 	/* __IIviScopeChannels_FWD_DEFINED__ */


#ifndef __IIviScopeChannel_FWD_DEFINED__
#define __IIviScopeChannel_FWD_DEFINED__
typedef interface IIviScopeChannel IIviScopeChannel;

#endif 	/* __IIviScopeChannel_FWD_DEFINED__ */


#ifndef __IIviScopeReferenceLevel_FWD_DEFINED__
#define __IIviScopeReferenceLevel_FWD_DEFINED__
typedef interface IIviScopeReferenceLevel IIviScopeReferenceLevel;

#endif 	/* __IIviScopeReferenceLevel_FWD_DEFINED__ */


#ifndef __IIviScopeMeasurements_FWD_DEFINED__
#define __IIviScopeMeasurements_FWD_DEFINED__
typedef interface IIviScopeMeasurements IIviScopeMeasurements;

#endif 	/* __IIviScopeMeasurements_FWD_DEFINED__ */


#ifndef __IIviScopeMeasurement_FWD_DEFINED__
#define __IIviScopeMeasurement_FWD_DEFINED__
typedef interface IIviScopeMeasurement IIviScopeMeasurement;

#endif 	/* __IIviScopeMeasurement_FWD_DEFINED__ */


#ifndef __IIviScopeTrigger_FWD_DEFINED__
#define __IIviScopeTrigger_FWD_DEFINED__
typedef interface IIviScopeTrigger IIviScopeTrigger;

#endif 	/* __IIviScopeTrigger_FWD_DEFINED__ */


#ifndef __IIviScopeTriggerAcLine_FWD_DEFINED__
#define __IIviScopeTriggerAcLine_FWD_DEFINED__
typedef interface IIviScopeTriggerAcLine IIviScopeTriggerAcLine;

#endif 	/* __IIviScopeTriggerAcLine_FWD_DEFINED__ */


#ifndef __IIviScopeTriggerEdge_FWD_DEFINED__
#define __IIviScopeTriggerEdge_FWD_DEFINED__
typedef interface IIviScopeTriggerEdge IIviScopeTriggerEdge;

#endif 	/* __IIviScopeTriggerEdge_FWD_DEFINED__ */


#ifndef __IIviScopeTriggerGlitch_FWD_DEFINED__
#define __IIviScopeTriggerGlitch_FWD_DEFINED__
typedef interface IIviScopeTriggerGlitch IIviScopeTriggerGlitch;

#endif 	/* __IIviScopeTriggerGlitch_FWD_DEFINED__ */


#ifndef __IIviScopeTriggerRunt_FWD_DEFINED__
#define __IIviScopeTriggerRunt_FWD_DEFINED__
typedef interface IIviScopeTriggerRunt IIviScopeTriggerRunt;

#endif 	/* __IIviScopeTriggerRunt_FWD_DEFINED__ */


#ifndef __IIviScopeTriggerTv_FWD_DEFINED__
#define __IIviScopeTriggerTv_FWD_DEFINED__
typedef interface IIviScopeTriggerTv IIviScopeTriggerTv;

#endif 	/* __IIviScopeTriggerTv_FWD_DEFINED__ */


#ifndef __IIviScopeTriggerWidth_FWD_DEFINED__
#define __IIviScopeTriggerWidth_FWD_DEFINED__
typedef interface IIviScopeTriggerWidth IIviScopeTriggerWidth;

#endif 	/* __IIviScopeTriggerWidth_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_IviScopeTypeLib_0000_0000 */
/* [local] */ 

#pragma once
#pragma once
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_IviScopeTypeLib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IviScopeTypeLib_0000_0000_v0_0_s_ifspec;


#ifndef __IviScopeLib_LIBRARY_DEFINED__
#define __IviScopeLib_LIBRARY_DEFINED__

/* library IviScopeLib */
/* [helpfile][helpstring][version][uuid] */ 















typedef /* [helpcontext][helpstring] */ 
enum IviScopeErrorCodesEnum
    {
        E_IVISCOPE_CHANNEL_NOT_ENABLED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2001 ) ),
        E_IVISCOPE_UNABLE_TO_PERFORM_MEASUREMENT	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2002 ) ),
        E_IVISCOPE_MAX_TIME_EXCEEDED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2003 ) ),
        E_IVISCOPE_INVALID_ACQ_TYPE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2004 ) ),
        S_IVISCOPE_INVALID_WFM_ELEMENT	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2001 ) )
    } 	IviScopeErrorCodesEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeACLineSlopeEnum
    {
        IviScopeACLinePositive	= 1,
        IviScopeACLineNegative	= 2,
        IviScopeACLineEither	= 3
    } 	IviScopeACLineSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeAcquisitionStatusEnum
    {
        IviScopeAcqComplete	= 1,
        IviScopeAcqInProgress	= 0,
        IviScopeAcqStatusUnknown	= -1
    } 	IviScopeAcquisitionStatusEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeAcquisitionTypeEnum
    {
        IviScopeAcquisitionTypeNormal	= 0,
        IviScopeAcquisitionTypePeakDetect	= 1,
        IviScopeAcquisitionTypeHiRes	= 2,
        IviScopeAcquisitionTypeEnvelope	= 3,
        IviScopeAcquisitionTypeAverage	= 4
    } 	IviScopeAcquisitionTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeGlitchConditionEnum
    {
        IviScopeGlitchConditionLessThan	= 1,
        IviScopeGlitchConditionGreaterThan	= 2
    } 	IviScopeGlitchConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeGlitchPolarityEnum
    {
        IviScopeGlitchPolarityPositive	= 1,
        IviScopeGlitchPolarityNegative	= 2,
        IviScopeGlitchPolarityEither	= 3
    } 	IviScopeGlitchPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeInterpolationEnum
    {
        IviScopeInterpolationNone	= 1,
        IviScopeInterpolationSineX	= 2,
        IviScopeInterpolationLinear	= 3
    } 	IviScopeInterpolationEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeMeasurementEnum
    {
        IviScopeMeasurementRiseTime	= 0,
        IviScopeMeasurementFallTime	= 1,
        IviScopeMeasurementFrequency	= 2,
        IviScopeMeasurementPeriod	= 3,
        IviScopeMeasurementVoltageRMS	= 4,
        IviScopeMeasurementVoltagePeakToPeak	= 5,
        IviScopeMeasurementVoltageMax	= 6,
        IviScopeMeasurementVoltageMin	= 7,
        IviScopeMeasurementVoltageHigh	= 8,
        IviScopeMeasurementVoltageLow	= 9,
        IviScopeMeasurementVoltageAverage	= 10,
        IviScopeMeasurementWidthNeg	= 11,
        IviScopeMeasurementWidthPos	= 12,
        IviScopeMeasurementDutyCycleNeg	= 13,
        IviScopeMeasurementDutyCyclePos	= 14,
        IviScopeMeasurementAmplitude	= 15,
        IviScopeMeasurementVoltageCycleRMS	= 16,
        IviScopeMeasurementVoltageCycleAverage	= 17,
        IviScopeMeasurementOverShoot	= 18,
        IviScopeMeasurementPreshoot	= 19
    } 	IviScopeMeasurementEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeRuntPolarityEnum
    {
        IviScopeRuntPolarityPositive	= 1,
        IviScopeRuntPolarityNegative	= 2,
        IviScopeRuntPolarityEither	= 3
    } 	IviScopeRuntPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeSampleModeEnum
    {
        IviScopeSampleModeRealTime	= 0,
        IviScopeSampleModeEquivalentTime	= 1
    } 	IviScopeSampleModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeTimeOutEnum
    {
        IviScopeTimeOutInfinite	= 0xffffffffUL,
        IviScopeTimeOutImmediate	= 0
    } 	IviScopeTimeOutEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeTriggerCouplingEnum
    {
        IviScopeTriggerCouplingAC	= 0,
        IviScopeTriggerCouplingDC	= 1,
        IviScopeTriggerCouplingHFReject	= 3,
        IviScopeTriggerCouplingLFReject	= 4,
        IviScopeTriggerCouplingNoiseReject	= 5
    } 	IviScopeTriggerCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeTriggerModifierEnum
    {
        IviScopeTriggerModifierNone	= 1,
        IviScopeTriggerModifierAuto	= 2,
        IviScopeTriggerModifierAutoLevel	= 3
    } 	IviScopeTriggerModifierEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeTriggerSlopeEnum
    {
        IviScopeTriggerSlopePositive	= 1,
        IviScopeTriggerSlopeNegative	= 0
    } 	IviScopeTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeTriggerTypeEnum
    {
        IviScopeTriggerEdge	= 1,
        IviScopeTriggerWidth	= 2,
        IviScopeTriggerRunt	= 3,
        IviScopeTriggerGlitch	= 4,
        IviScopeTriggerTV	= 5,
        IviScopeTriggerImmediate	= 6,
        IviScopeTriggerACLine	= 7
    } 	IviScopeTriggerTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeTVSignalFormatEnum
    {
        IviScopeTVSignalFormatNTSC	= 1,
        IviScopeTVSignalFormatPAL	= 2,
        IviScopeTVSignalFormatSECAM	= 3
    } 	IviScopeTVSignalFormatEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeTVTriggerEventEnum
    {
        IviScopeTVTriggerEventField1	= 1,
        IviScopeTVTriggerEventField2	= 2,
        IviScopeTVTriggerEventAnyField	= 3,
        IviScopeTVTriggerEventAnyLine	= 4,
        IviScopeTVTriggerEventLineNumber	= 5
    } 	IviScopeTVTriggerEventEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeTVTriggerPolarityEnum
    {
        IviScopeTVTriggerPolarityPositive	= 1,
        IviScopeTVTriggerPolarityNegative	= 2
    } 	IviScopeTVTriggerPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeVerticalCouplingEnum
    {
        IviScopeVerticalCouplingAC	= 0,
        IviScopeVerticalCouplingDC	= 1,
        IviScopeVerticalCouplingGnd	= 2
    } 	IviScopeVerticalCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeWidthConditionEnum
    {
        IviScopeWidthConditionWithin	= 1,
        IviScopeWidthConditionOutside	= 2
    } 	IviScopeWidthConditionEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviScopeWidthPolarityEnum
    {
        IviScopeWidthPolarityPositive	= 1,
        IviScopeWidthPolarityNegative	= 2,
        IviScopeWidthPolarityEither	= 3
    } 	IviScopeWidthPolarityEnum;


EXTERN_C const IID LIBID_IviScopeLib;

#ifndef __IIviScope_INTERFACE_DEFINED__
#define __IIviScope_INTERFACE_DEFINED__

/* interface IIviScope */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScope;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed524c-a398-11d4-ba58-000064657374")
    IIviScope : public IIviDriver
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Acquisition( 
            /* [retval][out] */ IIviScopeAcquisition **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Channels( 
            /* [retval][out] */ IIviScopeChannels **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Measurements( 
            /* [retval][out] */ IIviScopeMeasurements **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceLevel( 
            /* [retval][out] */ IIviScopeReferenceLevel **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ IIviScopeTrigger **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScope * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScope * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScope * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviScope * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviScope * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviScope * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviScope * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviScope * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviScope * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Acquisition )( 
            IIviScope * This,
            /* [retval][out] */ IIviScopeAcquisition **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channels )( 
            IIviScope * This,
            /* [retval][out] */ IIviScopeChannels **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Measurements )( 
            IIviScope * This,
            /* [retval][out] */ IIviScopeMeasurements **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceLevel )( 
            IIviScope * This,
            /* [retval][out] */ IIviScopeReferenceLevel **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            IIviScope * This,
            /* [retval][out] */ IIviScopeTrigger **pVal);
        
        END_INTERFACE
    } IIviScopeVtbl;

    interface IIviScope
    {
        CONST_VTBL struct IIviScopeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScope_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScope_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScope_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScope_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviScope_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviScope_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviScope_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviScope_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviScope_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviScope_get_Acquisition(This,pVal)	\
    ( (This)->lpVtbl -> get_Acquisition(This,pVal) ) 

#define IIviScope_get_Channels(This,pVal)	\
    ( (This)->lpVtbl -> get_Channels(This,pVal) ) 

#define IIviScope_get_Measurements(This,pVal)	\
    ( (This)->lpVtbl -> get_Measurements(This,pVal) ) 

#define IIviScope_get_ReferenceLevel(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferenceLevel(This,pVal) ) 

#define IIviScope_get_Trigger(This,pVal)	\
    ( (This)->lpVtbl -> get_Trigger(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScope_INTERFACE_DEFINED__ */


#ifndef __IIviScopeAcquisition_INTERFACE_DEFINED__
#define __IIviScopeAcquisition_INTERFACE_DEFINED__

/* interface IIviScopeAcquisition */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeAcquisition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed524d-a398-11d4-ba58-000064657374")
    IIviScopeAcquisition : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureRecord( 
            /* [in] */ DOUBLE TimePerRecord,
            /* [in] */ LONG MinNumPts,
            /* [in] */ DOUBLE AcquisitionStartTime) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfAverages( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NumberOfAverages( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfEnvelopes( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NumberOfEnvelopes( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Interpolation( 
            /* [retval][out] */ IviScopeInterpolationEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Interpolation( 
            /* [in] */ IviScopeInterpolationEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RecordLength( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SampleMode( 
            /* [retval][out] */ IviScopeSampleModeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SampleRate( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ IviScopeAcquisitionTypeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ IviScopeAcquisitionTypeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfPointsMin( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NumberOfPointsMin( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartTime( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_StartTime( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TimePerRecord( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TimePerRecord( 
            /* [in] */ DOUBLE newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeAcquisitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeAcquisition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeAcquisition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeAcquisition * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRecord )( 
            IIviScopeAcquisition * This,
            /* [in] */ DOUBLE TimePerRecord,
            /* [in] */ LONG MinNumPts,
            /* [in] */ DOUBLE AcquisitionStartTime);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfAverages )( 
            IIviScopeAcquisition * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfAverages )( 
            IIviScopeAcquisition * This,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfEnvelopes )( 
            IIviScopeAcquisition * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfEnvelopes )( 
            IIviScopeAcquisition * This,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Interpolation )( 
            IIviScopeAcquisition * This,
            /* [retval][out] */ IviScopeInterpolationEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Interpolation )( 
            IIviScopeAcquisition * This,
            /* [in] */ IviScopeInterpolationEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecordLength )( 
            IIviScopeAcquisition * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleMode )( 
            IIviScopeAcquisition * This,
            /* [retval][out] */ IviScopeSampleModeEnum *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleRate )( 
            IIviScopeAcquisition * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IIviScopeAcquisition * This,
            /* [retval][out] */ IviScopeAcquisitionTypeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IIviScopeAcquisition * This,
            /* [in] */ IviScopeAcquisitionTypeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfPointsMin )( 
            IIviScopeAcquisition * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfPointsMin )( 
            IIviScopeAcquisition * This,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartTime )( 
            IIviScopeAcquisition * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartTime )( 
            IIviScopeAcquisition * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimePerRecord )( 
            IIviScopeAcquisition * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimePerRecord )( 
            IIviScopeAcquisition * This,
            /* [in] */ DOUBLE newVal);
        
        END_INTERFACE
    } IIviScopeAcquisitionVtbl;

    interface IIviScopeAcquisition
    {
        CONST_VTBL struct IIviScopeAcquisitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeAcquisition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeAcquisition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeAcquisition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeAcquisition_ConfigureRecord(This,TimePerRecord,MinNumPts,AcquisitionStartTime)	\
    ( (This)->lpVtbl -> ConfigureRecord(This,TimePerRecord,MinNumPts,AcquisitionStartTime) ) 

#define IIviScopeAcquisition_get_NumberOfAverages(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberOfAverages(This,pVal) ) 

#define IIviScopeAcquisition_put_NumberOfAverages(This,newVal)	\
    ( (This)->lpVtbl -> put_NumberOfAverages(This,newVal) ) 

#define IIviScopeAcquisition_get_NumberOfEnvelopes(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberOfEnvelopes(This,pVal) ) 

#define IIviScopeAcquisition_put_NumberOfEnvelopes(This,newVal)	\
    ( (This)->lpVtbl -> put_NumberOfEnvelopes(This,newVal) ) 

#define IIviScopeAcquisition_get_Interpolation(This,pVal)	\
    ( (This)->lpVtbl -> get_Interpolation(This,pVal) ) 

#define IIviScopeAcquisition_put_Interpolation(This,newVal)	\
    ( (This)->lpVtbl -> put_Interpolation(This,newVal) ) 

#define IIviScopeAcquisition_get_RecordLength(This,pVal)	\
    ( (This)->lpVtbl -> get_RecordLength(This,pVal) ) 

#define IIviScopeAcquisition_get_SampleMode(This,pVal)	\
    ( (This)->lpVtbl -> get_SampleMode(This,pVal) ) 

#define IIviScopeAcquisition_get_SampleRate(This,pVal)	\
    ( (This)->lpVtbl -> get_SampleRate(This,pVal) ) 

#define IIviScopeAcquisition_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IIviScopeAcquisition_put_Type(This,newVal)	\
    ( (This)->lpVtbl -> put_Type(This,newVal) ) 

#define IIviScopeAcquisition_get_NumberOfPointsMin(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberOfPointsMin(This,pVal) ) 

#define IIviScopeAcquisition_put_NumberOfPointsMin(This,newVal)	\
    ( (This)->lpVtbl -> put_NumberOfPointsMin(This,newVal) ) 

#define IIviScopeAcquisition_get_StartTime(This,pVal)	\
    ( (This)->lpVtbl -> get_StartTime(This,pVal) ) 

#define IIviScopeAcquisition_put_StartTime(This,newVal)	\
    ( (This)->lpVtbl -> put_StartTime(This,newVal) ) 

#define IIviScopeAcquisition_get_TimePerRecord(This,pVal)	\
    ( (This)->lpVtbl -> get_TimePerRecord(This,pVal) ) 

#define IIviScopeAcquisition_put_TimePerRecord(This,newVal)	\
    ( (This)->lpVtbl -> put_TimePerRecord(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeAcquisition_INTERFACE_DEFINED__ */


#ifndef __IIviScopeChannels_INTERFACE_DEFINED__
#define __IIviScopeChannels_INTERFACE_DEFINED__

/* interface IIviScopeChannels */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeChannels;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed524e-a398-11d4-ba58-000064657374")
    IIviScopeChannels : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviScopeChannel **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeChannelsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeChannels * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeChannels * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeChannels * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviScopeChannels * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviScopeChannel **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviScopeChannels * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviScopeChannels * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IIviScopeChannelsVtbl;

    interface IIviScopeChannels
    {
        CONST_VTBL struct IIviScopeChannelsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeChannels_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeChannels_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeChannels_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeChannels_get_Item(This,Name,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Name,pVal) ) 

#define IIviScopeChannels_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviScopeChannels_get_Name(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,Index,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeChannels_INTERFACE_DEFINED__ */


#ifndef __IIviScopeChannel_INTERFACE_DEFINED__
#define __IIviScopeChannel_INTERFACE_DEFINED__

/* interface IIviScopeChannel */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed524f-a398-11d4-ba58-000064657374")
    IIviScopeChannel : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE Range,
            /* [in] */ DOUBLE Offset,
            /* [in] */ IviScopeVerticalCouplingEnum Coupling,
            /* [in] */ DOUBLE ProbeAttenuation,
            /* [in] */ VARIANT_BOOL Enabled) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureCharacteristics( 
            /* [in] */ DOUBLE InputImpedance,
            /* [in] */ DOUBLE InputFrequencyMax) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProbeSense( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Coupling( 
            /* [retval][out] */ IviScopeVerticalCouplingEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Coupling( 
            /* [in] */ IviScopeVerticalCouplingEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InputFrequencyMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InputFrequencyMax( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InputImpedance( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InputImpedance( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProbeAttenuation( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ProbeAttenuation( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Range( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Range( 
            /* [in] */ DOUBLE newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeChannel * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviScopeChannel * This,
            /* [in] */ DOUBLE Range,
            /* [in] */ DOUBLE Offset,
            /* [in] */ IviScopeVerticalCouplingEnum Coupling,
            /* [in] */ DOUBLE ProbeAttenuation,
            /* [in] */ VARIANT_BOOL Enabled);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCharacteristics )( 
            IIviScopeChannel * This,
            /* [in] */ DOUBLE InputImpedance,
            /* [in] */ DOUBLE InputFrequencyMax);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProbeSense )( 
            IIviScopeChannel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coupling )( 
            IIviScopeChannel * This,
            /* [retval][out] */ IviScopeVerticalCouplingEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Coupling )( 
            IIviScopeChannel * This,
            /* [in] */ IviScopeVerticalCouplingEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviScopeChannel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviScopeChannel * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputFrequencyMax )( 
            IIviScopeChannel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputFrequencyMax )( 
            IIviScopeChannel * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputImpedance )( 
            IIviScopeChannel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputImpedance )( 
            IIviScopeChannel * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IIviScopeChannel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            IIviScopeChannel * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProbeAttenuation )( 
            IIviScopeChannel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProbeAttenuation )( 
            IIviScopeChannel * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Range )( 
            IIviScopeChannel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Range )( 
            IIviScopeChannel * This,
            /* [in] */ DOUBLE newVal);
        
        END_INTERFACE
    } IIviScopeChannelVtbl;

    interface IIviScopeChannel
    {
        CONST_VTBL struct IIviScopeChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeChannel_Configure(This,Range,Offset,Coupling,ProbeAttenuation,Enabled)	\
    ( (This)->lpVtbl -> Configure(This,Range,Offset,Coupling,ProbeAttenuation,Enabled) ) 

#define IIviScopeChannel_ConfigureCharacteristics(This,InputImpedance,InputFrequencyMax)	\
    ( (This)->lpVtbl -> ConfigureCharacteristics(This,InputImpedance,InputFrequencyMax) ) 

#define IIviScopeChannel_get_ProbeSense(This,pVal)	\
    ( (This)->lpVtbl -> get_ProbeSense(This,pVal) ) 

#define IIviScopeChannel_get_Coupling(This,pVal)	\
    ( (This)->lpVtbl -> get_Coupling(This,pVal) ) 

#define IIviScopeChannel_put_Coupling(This,newVal)	\
    ( (This)->lpVtbl -> put_Coupling(This,newVal) ) 

#define IIviScopeChannel_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviScopeChannel_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviScopeChannel_get_InputFrequencyMax(This,pVal)	\
    ( (This)->lpVtbl -> get_InputFrequencyMax(This,pVal) ) 

#define IIviScopeChannel_put_InputFrequencyMax(This,newVal)	\
    ( (This)->lpVtbl -> put_InputFrequencyMax(This,newVal) ) 

#define IIviScopeChannel_get_InputImpedance(This,pVal)	\
    ( (This)->lpVtbl -> get_InputImpedance(This,pVal) ) 

#define IIviScopeChannel_put_InputImpedance(This,newVal)	\
    ( (This)->lpVtbl -> put_InputImpedance(This,newVal) ) 

#define IIviScopeChannel_get_Offset(This,pVal)	\
    ( (This)->lpVtbl -> get_Offset(This,pVal) ) 

#define IIviScopeChannel_put_Offset(This,newVal)	\
    ( (This)->lpVtbl -> put_Offset(This,newVal) ) 

#define IIviScopeChannel_get_ProbeAttenuation(This,pVal)	\
    ( (This)->lpVtbl -> get_ProbeAttenuation(This,pVal) ) 

#define IIviScopeChannel_put_ProbeAttenuation(This,newVal)	\
    ( (This)->lpVtbl -> put_ProbeAttenuation(This,newVal) ) 

#define IIviScopeChannel_get_Range(This,pVal)	\
    ( (This)->lpVtbl -> get_Range(This,pVal) ) 

#define IIviScopeChannel_put_Range(This,newVal)	\
    ( (This)->lpVtbl -> put_Range(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeChannel_INTERFACE_DEFINED__ */


#ifndef __IIviScopeReferenceLevel_INTERFACE_DEFINED__
#define __IIviScopeReferenceLevel_INTERFACE_DEFINED__

/* interface IIviScopeReferenceLevel */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeReferenceLevel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5250-a398-11d4-ba58-000064657374")
    IIviScopeReferenceLevel : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE Low,
            /* [in] */ DOUBLE Mid,
            /* [in] */ DOUBLE High) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_High( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_High( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Low( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Low( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Mid( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Mid( 
            /* [in] */ DOUBLE newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeReferenceLevelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeReferenceLevel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeReferenceLevel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeReferenceLevel * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviScopeReferenceLevel * This,
            /* [in] */ DOUBLE Low,
            /* [in] */ DOUBLE Mid,
            /* [in] */ DOUBLE High);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_High )( 
            IIviScopeReferenceLevel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_High )( 
            IIviScopeReferenceLevel * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Low )( 
            IIviScopeReferenceLevel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Low )( 
            IIviScopeReferenceLevel * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mid )( 
            IIviScopeReferenceLevel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mid )( 
            IIviScopeReferenceLevel * This,
            /* [in] */ DOUBLE newVal);
        
        END_INTERFACE
    } IIviScopeReferenceLevelVtbl;

    interface IIviScopeReferenceLevel
    {
        CONST_VTBL struct IIviScopeReferenceLevelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeReferenceLevel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeReferenceLevel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeReferenceLevel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeReferenceLevel_Configure(This,Low,Mid,High)	\
    ( (This)->lpVtbl -> Configure(This,Low,Mid,High) ) 

#define IIviScopeReferenceLevel_get_High(This,pVal)	\
    ( (This)->lpVtbl -> get_High(This,pVal) ) 

#define IIviScopeReferenceLevel_put_High(This,newVal)	\
    ( (This)->lpVtbl -> put_High(This,newVal) ) 

#define IIviScopeReferenceLevel_get_Low(This,pVal)	\
    ( (This)->lpVtbl -> get_Low(This,pVal) ) 

#define IIviScopeReferenceLevel_put_Low(This,newVal)	\
    ( (This)->lpVtbl -> put_Low(This,newVal) ) 

#define IIviScopeReferenceLevel_get_Mid(This,pVal)	\
    ( (This)->lpVtbl -> get_Mid(This,pVal) ) 

#define IIviScopeReferenceLevel_put_Mid(This,newVal)	\
    ( (This)->lpVtbl -> put_Mid(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeReferenceLevel_INTERFACE_DEFINED__ */


#ifndef __IIviScopeMeasurements_INTERFACE_DEFINED__
#define __IIviScopeMeasurements_INTERFACE_DEFINED__

/* interface IIviScopeMeasurements */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeMeasurements;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5251-a398-11d4-ba58-000064657374")
    IIviScopeMeasurements : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviScopeMeasurement **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Initiate( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AutoSetup( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Status( 
            /* [retval][out] */ IviScopeAcquisitionStatusEnum *MeasurementStatus) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IsWaveformElementInvalid( 
            /* [in] */ DOUBLE Element,
            /* [retval][out] */ VARIANT_BOOL *IsInvalid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeMeasurementsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeMeasurements * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeMeasurements * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeMeasurements * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviScopeMeasurements * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviScopeMeasurement **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviScopeMeasurements * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviScopeMeasurements * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initiate )( 
            IIviScopeMeasurements * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IIviScopeMeasurements * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *AutoSetup )( 
            IIviScopeMeasurements * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Status )( 
            IIviScopeMeasurements * This,
            /* [retval][out] */ IviScopeAcquisitionStatusEnum *MeasurementStatus);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsWaveformElementInvalid )( 
            IIviScopeMeasurements * This,
            /* [in] */ DOUBLE Element,
            /* [retval][out] */ VARIANT_BOOL *IsInvalid);
        
        END_INTERFACE
    } IIviScopeMeasurementsVtbl;

    interface IIviScopeMeasurements
    {
        CONST_VTBL struct IIviScopeMeasurementsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeMeasurements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeMeasurements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeMeasurements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeMeasurements_get_Item(This,Name,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Name,pVal) ) 

#define IIviScopeMeasurements_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviScopeMeasurements_get_Name(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,Index,pVal) ) 

#define IIviScopeMeasurements_Initiate(This)	\
    ( (This)->lpVtbl -> Initiate(This) ) 

#define IIviScopeMeasurements_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IIviScopeMeasurements_AutoSetup(This)	\
    ( (This)->lpVtbl -> AutoSetup(This) ) 

#define IIviScopeMeasurements_Status(This,MeasurementStatus)	\
    ( (This)->lpVtbl -> Status(This,MeasurementStatus) ) 

#define IIviScopeMeasurements_IsWaveformElementInvalid(This,Element,IsInvalid)	\
    ( (This)->lpVtbl -> IsWaveformElementInvalid(This,Element,IsInvalid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeMeasurements_INTERFACE_DEFINED__ */


#ifndef __IIviScopeMeasurement_INTERFACE_DEFINED__
#define __IIviScopeMeasurement_INTERFACE_DEFINED__

/* interface IIviScopeMeasurement */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeMeasurement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5252-a398-11d4-ba58-000064657374")
    IIviScopeMeasurement : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FetchWaveform( 
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ DOUBLE *InitialX,
            /* [out][in] */ DOUBLE *XIncrement) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FetchWaveformMeasurement( 
            /* [in] */ IviScopeMeasurementEnum MeasFunction,
            /* [out][in] */ DOUBLE *Measurement) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FetchWaveformMinMax( 
            /* [out][in] */ SAFEARRAY * *MinWaveform,
            /* [out][in] */ SAFEARRAY * *MaxWaveform,
            /* [out][in] */ DOUBLE *InitialX,
            /* [out][in] */ DOUBLE *XIncrement) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ReadWaveform( 
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ DOUBLE *InitialX,
            /* [out][in] */ DOUBLE *XIncrement) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ReadWaveformMeasurement( 
            /* [in] */ IviScopeMeasurementEnum MeasFunction,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [out][in] */ DOUBLE *Measurement) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ReadWaveformMinMax( 
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *MinWaveform,
            /* [out][in] */ SAFEARRAY * *MaxWaveform,
            /* [out][in] */ DOUBLE *InitialX,
            /* [out][in] */ DOUBLE *XIncrement) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeMeasurementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeMeasurement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeMeasurement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeMeasurement * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveform )( 
            IIviScopeMeasurement * This,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ DOUBLE *InitialX,
            /* [out][in] */ DOUBLE *XIncrement);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformMeasurement )( 
            IIviScopeMeasurement * This,
            /* [in] */ IviScopeMeasurementEnum MeasFunction,
            /* [out][in] */ DOUBLE *Measurement);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *FetchWaveformMinMax )( 
            IIviScopeMeasurement * This,
            /* [out][in] */ SAFEARRAY * *MinWaveform,
            /* [out][in] */ SAFEARRAY * *MaxWaveform,
            /* [out][in] */ DOUBLE *InitialX,
            /* [out][in] */ DOUBLE *XIncrement);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadWaveform )( 
            IIviScopeMeasurement * This,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *WaveformArray,
            /* [out][in] */ DOUBLE *InitialX,
            /* [out][in] */ DOUBLE *XIncrement);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadWaveformMeasurement )( 
            IIviScopeMeasurement * This,
            /* [in] */ IviScopeMeasurementEnum MeasFunction,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [out][in] */ DOUBLE *Measurement);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadWaveformMinMax )( 
            IIviScopeMeasurement * This,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [out][in] */ SAFEARRAY * *MinWaveform,
            /* [out][in] */ SAFEARRAY * *MaxWaveform,
            /* [out][in] */ DOUBLE *InitialX,
            /* [out][in] */ DOUBLE *XIncrement);
        
        END_INTERFACE
    } IIviScopeMeasurementVtbl;

    interface IIviScopeMeasurement
    {
        CONST_VTBL struct IIviScopeMeasurementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeMeasurement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeMeasurement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeMeasurement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeMeasurement_FetchWaveform(This,WaveformArray,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> FetchWaveform(This,WaveformArray,InitialX,XIncrement) ) 

#define IIviScopeMeasurement_FetchWaveformMeasurement(This,MeasFunction,Measurement)	\
    ( (This)->lpVtbl -> FetchWaveformMeasurement(This,MeasFunction,Measurement) ) 

#define IIviScopeMeasurement_FetchWaveformMinMax(This,MinWaveform,MaxWaveform,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> FetchWaveformMinMax(This,MinWaveform,MaxWaveform,InitialX,XIncrement) ) 

#define IIviScopeMeasurement_ReadWaveform(This,MaxTimeMilliseconds,WaveformArray,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> ReadWaveform(This,MaxTimeMilliseconds,WaveformArray,InitialX,XIncrement) ) 

#define IIviScopeMeasurement_ReadWaveformMeasurement(This,MeasFunction,MaxTimeMilliseconds,Measurement)	\
    ( (This)->lpVtbl -> ReadWaveformMeasurement(This,MeasFunction,MaxTimeMilliseconds,Measurement) ) 

#define IIviScopeMeasurement_ReadWaveformMinMax(This,MaxTimeMilliseconds,MinWaveform,MaxWaveform,InitialX,XIncrement)	\
    ( (This)->lpVtbl -> ReadWaveformMinMax(This,MaxTimeMilliseconds,MinWaveform,MaxWaveform,InitialX,XIncrement) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeMeasurement_INTERFACE_DEFINED__ */


#ifndef __IIviScopeTrigger_INTERFACE_DEFINED__
#define __IIviScopeTrigger_INTERFACE_DEFINED__

/* interface IIviScopeTrigger */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5253-a398-11d4-ba58-000064657374")
    IIviScopeTrigger : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviScopeTriggerTypeEnum Type,
            /* [in] */ DOUBLE Holdoff) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Continuous( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Continuous( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Coupling( 
            /* [in] */ IviScopeTriggerCouplingEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Coupling( 
            /* [retval][out] */ IviScopeTriggerCouplingEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Modifier( 
            /* [in] */ IviScopeTriggerModifierEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Modifier( 
            /* [retval][out] */ IviScopeTriggerModifierEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Holdoff( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Holdoff( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ IviScopeTriggerTypeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ IviScopeTriggerTypeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AcLine( 
            /* [retval][out] */ IIviScopeTriggerAcLine **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Edge( 
            /* [retval][out] */ IIviScopeTriggerEdge **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Glitch( 
            /* [retval][out] */ IIviScopeTriggerGlitch **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Runt( 
            /* [retval][out] */ IIviScopeTriggerRunt **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TV( 
            /* [retval][out] */ IIviScopeTriggerTv **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ IIviScopeTriggerWidth **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeTrigger * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviScopeTrigger * This,
            /* [in] */ IviScopeTriggerTypeEnum Type,
            /* [in] */ DOUBLE Holdoff);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Continuous )( 
            IIviScopeTrigger * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Continuous )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Coupling )( 
            IIviScopeTrigger * This,
            /* [in] */ IviScopeTriggerCouplingEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coupling )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ IviScopeTriggerCouplingEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviScopeTrigger * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Modifier )( 
            IIviScopeTrigger * This,
            /* [in] */ IviScopeTriggerModifierEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Modifier )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ IviScopeTriggerModifierEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviScopeTrigger * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Holdoff )( 
            IIviScopeTrigger * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Holdoff )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IIviScopeTrigger * This,
            /* [in] */ IviScopeTriggerTypeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ IviScopeTriggerTypeEnum *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AcLine )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ IIviScopeTriggerAcLine **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Edge )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ IIviScopeTriggerEdge **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Glitch )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ IIviScopeTriggerGlitch **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Runt )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ IIviScopeTriggerRunt **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TV )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ IIviScopeTriggerTv **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IIviScopeTrigger * This,
            /* [retval][out] */ IIviScopeTriggerWidth **pVal);
        
        END_INTERFACE
    } IIviScopeTriggerVtbl;

    interface IIviScopeTrigger
    {
        CONST_VTBL struct IIviScopeTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeTrigger_Configure(This,Type,Holdoff)	\
    ( (This)->lpVtbl -> Configure(This,Type,Holdoff) ) 

#define IIviScopeTrigger_put_Continuous(This,newVal)	\
    ( (This)->lpVtbl -> put_Continuous(This,newVal) ) 

#define IIviScopeTrigger_get_Continuous(This,pVal)	\
    ( (This)->lpVtbl -> get_Continuous(This,pVal) ) 

#define IIviScopeTrigger_put_Coupling(This,newVal)	\
    ( (This)->lpVtbl -> put_Coupling(This,newVal) ) 

#define IIviScopeTrigger_get_Coupling(This,pVal)	\
    ( (This)->lpVtbl -> get_Coupling(This,pVal) ) 

#define IIviScopeTrigger_put_Level(This,newVal)	\
    ( (This)->lpVtbl -> put_Level(This,newVal) ) 

#define IIviScopeTrigger_get_Level(This,pVal)	\
    ( (This)->lpVtbl -> get_Level(This,pVal) ) 

#define IIviScopeTrigger_put_Modifier(This,newVal)	\
    ( (This)->lpVtbl -> put_Modifier(This,newVal) ) 

#define IIviScopeTrigger_get_Modifier(This,pVal)	\
    ( (This)->lpVtbl -> get_Modifier(This,pVal) ) 

#define IIviScopeTrigger_put_Source(This,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,newVal) ) 

#define IIviScopeTrigger_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#define IIviScopeTrigger_put_Holdoff(This,newVal)	\
    ( (This)->lpVtbl -> put_Holdoff(This,newVal) ) 

#define IIviScopeTrigger_get_Holdoff(This,pVal)	\
    ( (This)->lpVtbl -> get_Holdoff(This,pVal) ) 

#define IIviScopeTrigger_put_Type(This,newVal)	\
    ( (This)->lpVtbl -> put_Type(This,newVal) ) 

#define IIviScopeTrigger_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IIviScopeTrigger_get_AcLine(This,pVal)	\
    ( (This)->lpVtbl -> get_AcLine(This,pVal) ) 

#define IIviScopeTrigger_get_Edge(This,pVal)	\
    ( (This)->lpVtbl -> get_Edge(This,pVal) ) 

#define IIviScopeTrigger_get_Glitch(This,pVal)	\
    ( (This)->lpVtbl -> get_Glitch(This,pVal) ) 

#define IIviScopeTrigger_get_Runt(This,pVal)	\
    ( (This)->lpVtbl -> get_Runt(This,pVal) ) 

#define IIviScopeTrigger_get_TV(This,pVal)	\
    ( (This)->lpVtbl -> get_TV(This,pVal) ) 

#define IIviScopeTrigger_get_Width(This,pVal)	\
    ( (This)->lpVtbl -> get_Width(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeTrigger_INTERFACE_DEFINED__ */


#ifndef __IIviScopeTriggerAcLine_INTERFACE_DEFINED__
#define __IIviScopeTriggerAcLine_INTERFACE_DEFINED__

/* interface IIviScopeTriggerAcLine */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeTriggerAcLine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5254-a398-11d4-ba58-000064657374")
    IIviScopeTriggerAcLine : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ IviScopeACLineSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ IviScopeACLineSlopeEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeTriggerAcLineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeTriggerAcLine * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeTriggerAcLine * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeTriggerAcLine * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviScopeTriggerAcLine * This,
            /* [in] */ IviScopeACLineSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviScopeTriggerAcLine * This,
            /* [retval][out] */ IviScopeACLineSlopeEnum *pVal);
        
        END_INTERFACE
    } IIviScopeTriggerAcLineVtbl;

    interface IIviScopeTriggerAcLine
    {
        CONST_VTBL struct IIviScopeTriggerAcLineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeTriggerAcLine_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeTriggerAcLine_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeTriggerAcLine_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeTriggerAcLine_put_Slope(This,newVal)	\
    ( (This)->lpVtbl -> put_Slope(This,newVal) ) 

#define IIviScopeTriggerAcLine_get_Slope(This,pVal)	\
    ( (This)->lpVtbl -> get_Slope(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeTriggerAcLine_INTERFACE_DEFINED__ */


#ifndef __IIviScopeTriggerEdge_INTERFACE_DEFINED__
#define __IIviScopeTriggerEdge_INTERFACE_DEFINED__

/* interface IIviScopeTriggerEdge */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeTriggerEdge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5255-a398-11d4-ba58-000064657374")
    IIviScopeTriggerEdge : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE Level,
            /* [in] */ IviScopeTriggerSlopeEnum Slope) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ IviScopeTriggerSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ IviScopeTriggerSlopeEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeTriggerEdgeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeTriggerEdge * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeTriggerEdge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeTriggerEdge * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviScopeTriggerEdge * This,
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE Level,
            /* [in] */ IviScopeTriggerSlopeEnum Slope);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviScopeTriggerEdge * This,
            /* [in] */ IviScopeTriggerSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviScopeTriggerEdge * This,
            /* [retval][out] */ IviScopeTriggerSlopeEnum *pVal);
        
        END_INTERFACE
    } IIviScopeTriggerEdgeVtbl;

    interface IIviScopeTriggerEdge
    {
        CONST_VTBL struct IIviScopeTriggerEdgeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeTriggerEdge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeTriggerEdge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeTriggerEdge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeTriggerEdge_Configure(This,Source,Level,Slope)	\
    ( (This)->lpVtbl -> Configure(This,Source,Level,Slope) ) 

#define IIviScopeTriggerEdge_put_Slope(This,newVal)	\
    ( (This)->lpVtbl -> put_Slope(This,newVal) ) 

#define IIviScopeTriggerEdge_get_Slope(This,pVal)	\
    ( (This)->lpVtbl -> get_Slope(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeTriggerEdge_INTERFACE_DEFINED__ */


#ifndef __IIviScopeTriggerGlitch_INTERFACE_DEFINED__
#define __IIviScopeTriggerGlitch_INTERFACE_DEFINED__

/* interface IIviScopeTriggerGlitch */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeTriggerGlitch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5256-a398-11d4-ba58-000064657374")
    IIviScopeTriggerGlitch : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE Level,
            /* [in] */ DOUBLE Width,
            /* [in] */ IviScopeGlitchPolarityEnum polarity,
            /* [in] */ IviScopeGlitchConditionEnum condition) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ IviScopeGlitchConditionEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ IviScopeGlitchConditionEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ IviScopeGlitchPolarityEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ IviScopeGlitchPolarityEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeTriggerGlitchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeTriggerGlitch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeTriggerGlitch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeTriggerGlitch * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviScopeTriggerGlitch * This,
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE Level,
            /* [in] */ DOUBLE Width,
            /* [in] */ IviScopeGlitchPolarityEnum polarity,
            /* [in] */ IviScopeGlitchConditionEnum condition);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            IIviScopeTriggerGlitch * This,
            /* [in] */ IviScopeGlitchConditionEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IIviScopeTriggerGlitch * This,
            /* [retval][out] */ IviScopeGlitchConditionEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviScopeTriggerGlitch * This,
            /* [in] */ IviScopeGlitchPolarityEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviScopeTriggerGlitch * This,
            /* [retval][out] */ IviScopeGlitchPolarityEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IIviScopeTriggerGlitch * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IIviScopeTriggerGlitch * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviScopeTriggerGlitchVtbl;

    interface IIviScopeTriggerGlitch
    {
        CONST_VTBL struct IIviScopeTriggerGlitchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeTriggerGlitch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeTriggerGlitch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeTriggerGlitch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeTriggerGlitch_Configure(This,Source,Level,Width,polarity,condition)	\
    ( (This)->lpVtbl -> Configure(This,Source,Level,Width,polarity,condition) ) 

#define IIviScopeTriggerGlitch_put_Condition(This,newVal)	\
    ( (This)->lpVtbl -> put_Condition(This,newVal) ) 

#define IIviScopeTriggerGlitch_get_Condition(This,pVal)	\
    ( (This)->lpVtbl -> get_Condition(This,pVal) ) 

#define IIviScopeTriggerGlitch_put_Polarity(This,newVal)	\
    ( (This)->lpVtbl -> put_Polarity(This,newVal) ) 

#define IIviScopeTriggerGlitch_get_Polarity(This,pVal)	\
    ( (This)->lpVtbl -> get_Polarity(This,pVal) ) 

#define IIviScopeTriggerGlitch_put_Width(This,newVal)	\
    ( (This)->lpVtbl -> put_Width(This,newVal) ) 

#define IIviScopeTriggerGlitch_get_Width(This,pVal)	\
    ( (This)->lpVtbl -> get_Width(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeTriggerGlitch_INTERFACE_DEFINED__ */


#ifndef __IIviScopeTriggerRunt_INTERFACE_DEFINED__
#define __IIviScopeTriggerRunt_INTERFACE_DEFINED__

/* interface IIviScopeTriggerRunt */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeTriggerRunt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5257-a398-11d4-ba58-000064657374")
    IIviScopeTriggerRunt : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE ThresholdLow,
            /* [in] */ DOUBLE ThresholdHigh,
            /* [in] */ IviScopeRuntPolarityEnum Polarity) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ IviScopeRuntPolarityEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ IviScopeRuntPolarityEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdHigh( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdHigh( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdLow( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdLow( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeTriggerRuntVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeTriggerRunt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeTriggerRunt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeTriggerRunt * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviScopeTriggerRunt * This,
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE ThresholdLow,
            /* [in] */ DOUBLE ThresholdHigh,
            /* [in] */ IviScopeRuntPolarityEnum Polarity);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviScopeTriggerRunt * This,
            /* [in] */ IviScopeRuntPolarityEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviScopeTriggerRunt * This,
            /* [retval][out] */ IviScopeRuntPolarityEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdHigh )( 
            IIviScopeTriggerRunt * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdHigh )( 
            IIviScopeTriggerRunt * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdLow )( 
            IIviScopeTriggerRunt * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdLow )( 
            IIviScopeTriggerRunt * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviScopeTriggerRuntVtbl;

    interface IIviScopeTriggerRunt
    {
        CONST_VTBL struct IIviScopeTriggerRuntVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeTriggerRunt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeTriggerRunt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeTriggerRunt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeTriggerRunt_Configure(This,Source,ThresholdLow,ThresholdHigh,Polarity)	\
    ( (This)->lpVtbl -> Configure(This,Source,ThresholdLow,ThresholdHigh,Polarity) ) 

#define IIviScopeTriggerRunt_put_Polarity(This,newVal)	\
    ( (This)->lpVtbl -> put_Polarity(This,newVal) ) 

#define IIviScopeTriggerRunt_get_Polarity(This,pVal)	\
    ( (This)->lpVtbl -> get_Polarity(This,pVal) ) 

#define IIviScopeTriggerRunt_put_ThresholdHigh(This,newVal)	\
    ( (This)->lpVtbl -> put_ThresholdHigh(This,newVal) ) 

#define IIviScopeTriggerRunt_get_ThresholdHigh(This,pVal)	\
    ( (This)->lpVtbl -> get_ThresholdHigh(This,pVal) ) 

#define IIviScopeTriggerRunt_put_ThresholdLow(This,newVal)	\
    ( (This)->lpVtbl -> put_ThresholdLow(This,newVal) ) 

#define IIviScopeTriggerRunt_get_ThresholdLow(This,pVal)	\
    ( (This)->lpVtbl -> get_ThresholdLow(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeTriggerRunt_INTERFACE_DEFINED__ */


#ifndef __IIviScopeTriggerTv_INTERFACE_DEFINED__
#define __IIviScopeTriggerTv_INTERFACE_DEFINED__

/* interface IIviScopeTriggerTv */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeTriggerTv;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5258-a398-11d4-ba58-000064657374")
    IIviScopeTriggerTv : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ IviScopeTVSignalFormatEnum SignalFormat,
            /* [in] */ IviScopeTVTriggerEventEnum Event,
            /* [in] */ IviScopeTVTriggerPolarityEnum Polarity) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LineNumber( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LineNumber( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Event( 
            /* [in] */ IviScopeTVTriggerEventEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Event( 
            /* [retval][out] */ IviScopeTVTriggerEventEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ IviScopeTVTriggerPolarityEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ IviScopeTVTriggerPolarityEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SignalFormat( 
            /* [in] */ IviScopeTVSignalFormatEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SignalFormat( 
            /* [retval][out] */ IviScopeTVSignalFormatEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeTriggerTvVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeTriggerTv * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeTriggerTv * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeTriggerTv * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviScopeTriggerTv * This,
            /* [in] */ BSTR Source,
            /* [in] */ IviScopeTVSignalFormatEnum SignalFormat,
            /* [in] */ IviScopeTVTriggerEventEnum Event,
            /* [in] */ IviScopeTVTriggerPolarityEnum Polarity);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineNumber )( 
            IIviScopeTriggerTv * This,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineNumber )( 
            IIviScopeTriggerTv * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Event )( 
            IIviScopeTriggerTv * This,
            /* [in] */ IviScopeTVTriggerEventEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Event )( 
            IIviScopeTriggerTv * This,
            /* [retval][out] */ IviScopeTVTriggerEventEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviScopeTriggerTv * This,
            /* [in] */ IviScopeTVTriggerPolarityEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviScopeTriggerTv * This,
            /* [retval][out] */ IviScopeTVTriggerPolarityEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SignalFormat )( 
            IIviScopeTriggerTv * This,
            /* [in] */ IviScopeTVSignalFormatEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignalFormat )( 
            IIviScopeTriggerTv * This,
            /* [retval][out] */ IviScopeTVSignalFormatEnum *pVal);
        
        END_INTERFACE
    } IIviScopeTriggerTvVtbl;

    interface IIviScopeTriggerTv
    {
        CONST_VTBL struct IIviScopeTriggerTvVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeTriggerTv_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeTriggerTv_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeTriggerTv_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeTriggerTv_Configure(This,Source,SignalFormat,Event,Polarity)	\
    ( (This)->lpVtbl -> Configure(This,Source,SignalFormat,Event,Polarity) ) 

#define IIviScopeTriggerTv_put_LineNumber(This,newVal)	\
    ( (This)->lpVtbl -> put_LineNumber(This,newVal) ) 

#define IIviScopeTriggerTv_get_LineNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_LineNumber(This,pVal) ) 

#define IIviScopeTriggerTv_put_Event(This,newVal)	\
    ( (This)->lpVtbl -> put_Event(This,newVal) ) 

#define IIviScopeTriggerTv_get_Event(This,pVal)	\
    ( (This)->lpVtbl -> get_Event(This,pVal) ) 

#define IIviScopeTriggerTv_put_Polarity(This,newVal)	\
    ( (This)->lpVtbl -> put_Polarity(This,newVal) ) 

#define IIviScopeTriggerTv_get_Polarity(This,pVal)	\
    ( (This)->lpVtbl -> get_Polarity(This,pVal) ) 

#define IIviScopeTriggerTv_put_SignalFormat(This,newVal)	\
    ( (This)->lpVtbl -> put_SignalFormat(This,newVal) ) 

#define IIviScopeTriggerTv_get_SignalFormat(This,pVal)	\
    ( (This)->lpVtbl -> get_SignalFormat(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeTriggerTv_INTERFACE_DEFINED__ */


#ifndef __IIviScopeTriggerWidth_INTERFACE_DEFINED__
#define __IIviScopeTriggerWidth_INTERFACE_DEFINED__

/* interface IIviScopeTriggerWidth */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviScopeTriggerWidth;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5259-a398-11d4-ba58-000064657374")
    IIviScopeTriggerWidth : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE Level,
            /* [in] */ DOUBLE ThresholdLow,
            /* [in] */ DOUBLE ThresholdHigh,
            /* [in] */ IviScopeWidthPolarityEnum Polarity,
            /* [in] */ IviScopeWidthConditionEnum Condition) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Condition( 
            /* [in] */ IviScopeWidthConditionEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ IviScopeWidthConditionEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ IviScopeWidthPolarityEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ IviScopeWidthPolarityEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdLow( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdLow( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ThresholdHigh( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ThresholdHigh( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviScopeTriggerWidthVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviScopeTriggerWidth * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviScopeTriggerWidth * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviScopeTriggerWidth * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviScopeTriggerWidth * This,
            /* [in] */ BSTR Source,
            /* [in] */ DOUBLE Level,
            /* [in] */ DOUBLE ThresholdLow,
            /* [in] */ DOUBLE ThresholdHigh,
            /* [in] */ IviScopeWidthPolarityEnum Polarity,
            /* [in] */ IviScopeWidthConditionEnum Condition);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Condition )( 
            IIviScopeTriggerWidth * This,
            /* [in] */ IviScopeWidthConditionEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IIviScopeTriggerWidth * This,
            /* [retval][out] */ IviScopeWidthConditionEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviScopeTriggerWidth * This,
            /* [in] */ IviScopeWidthPolarityEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviScopeTriggerWidth * This,
            /* [retval][out] */ IviScopeWidthPolarityEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdLow )( 
            IIviScopeTriggerWidth * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdLow )( 
            IIviScopeTriggerWidth * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThresholdHigh )( 
            IIviScopeTriggerWidth * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThresholdHigh )( 
            IIviScopeTriggerWidth * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviScopeTriggerWidthVtbl;

    interface IIviScopeTriggerWidth
    {
        CONST_VTBL struct IIviScopeTriggerWidthVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviScopeTriggerWidth_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviScopeTriggerWidth_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviScopeTriggerWidth_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviScopeTriggerWidth_Configure(This,Source,Level,ThresholdLow,ThresholdHigh,Polarity,Condition)	\
    ( (This)->lpVtbl -> Configure(This,Source,Level,ThresholdLow,ThresholdHigh,Polarity,Condition) ) 

#define IIviScopeTriggerWidth_put_Condition(This,newVal)	\
    ( (This)->lpVtbl -> put_Condition(This,newVal) ) 

#define IIviScopeTriggerWidth_get_Condition(This,pVal)	\
    ( (This)->lpVtbl -> get_Condition(This,pVal) ) 

#define IIviScopeTriggerWidth_put_Polarity(This,newVal)	\
    ( (This)->lpVtbl -> put_Polarity(This,newVal) ) 

#define IIviScopeTriggerWidth_get_Polarity(This,pVal)	\
    ( (This)->lpVtbl -> get_Polarity(This,pVal) ) 

#define IIviScopeTriggerWidth_put_ThresholdLow(This,newVal)	\
    ( (This)->lpVtbl -> put_ThresholdLow(This,newVal) ) 

#define IIviScopeTriggerWidth_get_ThresholdLow(This,pVal)	\
    ( (This)->lpVtbl -> get_ThresholdLow(This,pVal) ) 

#define IIviScopeTriggerWidth_put_ThresholdHigh(This,newVal)	\
    ( (This)->lpVtbl -> put_ThresholdHigh(This,newVal) ) 

#define IIviScopeTriggerWidth_get_ThresholdHigh(This,pVal)	\
    ( (This)->lpVtbl -> get_ThresholdHigh(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviScopeTriggerWidth_INTERFACE_DEFINED__ */

#endif /* __IviScopeLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


