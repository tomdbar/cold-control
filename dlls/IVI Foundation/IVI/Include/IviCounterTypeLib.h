

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:57:42 2016
 */
/* Compiler settings for IviCounterTypeLib.idl:
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


#ifndef __IviCounterTypeLib_h__
#define __IviCounterTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviCounter_FWD_DEFINED__
#define __IIviCounter_FWD_DEFINED__
typedef interface IIviCounter IIviCounter;

#endif 	/* __IIviCounter_FWD_DEFINED__ */


#ifndef __IIviCounterChannels_FWD_DEFINED__
#define __IIviCounterChannels_FWD_DEFINED__
typedef interface IIviCounterChannels IIviCounterChannels;

#endif 	/* __IIviCounterChannels_FWD_DEFINED__ */


#ifndef __IIviCounterChannel_FWD_DEFINED__
#define __IIviCounterChannel_FWD_DEFINED__
typedef interface IIviCounterChannel IIviCounterChannel;

#endif 	/* __IIviCounterChannel_FWD_DEFINED__ */


#ifndef __IIviCounterFrequency_FWD_DEFINED__
#define __IIviCounterFrequency_FWD_DEFINED__
typedef interface IIviCounterFrequency IIviCounterFrequency;

#endif 	/* __IIviCounterFrequency_FWD_DEFINED__ */


#ifndef __IIviCounterPeriod_FWD_DEFINED__
#define __IIviCounterPeriod_FWD_DEFINED__
typedef interface IIviCounterPeriod IIviCounterPeriod;

#endif 	/* __IIviCounterPeriod_FWD_DEFINED__ */


#ifndef __IIviCounterPulseWidth_FWD_DEFINED__
#define __IIviCounterPulseWidth_FWD_DEFINED__
typedef interface IIviCounterPulseWidth IIviCounterPulseWidth;

#endif 	/* __IIviCounterPulseWidth_FWD_DEFINED__ */


#ifndef __IIviCounterDutyCycle_FWD_DEFINED__
#define __IIviCounterDutyCycle_FWD_DEFINED__
typedef interface IIviCounterDutyCycle IIviCounterDutyCycle;

#endif 	/* __IIviCounterDutyCycle_FWD_DEFINED__ */


#ifndef __IIviCounterEdgeTime_FWD_DEFINED__
#define __IIviCounterEdgeTime_FWD_DEFINED__
typedef interface IIviCounterEdgeTime IIviCounterEdgeTime;

#endif 	/* __IIviCounterEdgeTime_FWD_DEFINED__ */


#ifndef __IIviCounterFrequencyRatio_FWD_DEFINED__
#define __IIviCounterFrequencyRatio_FWD_DEFINED__
typedef interface IIviCounterFrequencyRatio IIviCounterFrequencyRatio;

#endif 	/* __IIviCounterFrequencyRatio_FWD_DEFINED__ */


#ifndef __IIviCounterTimeInterval_FWD_DEFINED__
#define __IIviCounterTimeInterval_FWD_DEFINED__
typedef interface IIviCounterTimeInterval IIviCounterTimeInterval;

#endif 	/* __IIviCounterTimeInterval_FWD_DEFINED__ */


#ifndef __IIviCounterPhase_FWD_DEFINED__
#define __IIviCounterPhase_FWD_DEFINED__
typedef interface IIviCounterPhase IIviCounterPhase;

#endif 	/* __IIviCounterPhase_FWD_DEFINED__ */


#ifndef __IIviCounterTotalizeContinuous_FWD_DEFINED__
#define __IIviCounterTotalizeContinuous_FWD_DEFINED__
typedef interface IIviCounterTotalizeContinuous IIviCounterTotalizeContinuous;

#endif 	/* __IIviCounterTotalizeContinuous_FWD_DEFINED__ */


#ifndef __IIviCounterTotalizeGated_FWD_DEFINED__
#define __IIviCounterTotalizeGated_FWD_DEFINED__
typedef interface IIviCounterTotalizeGated IIviCounterTotalizeGated;

#endif 	/* __IIviCounterTotalizeGated_FWD_DEFINED__ */


#ifndef __IIviCounterTotalizeTimed_FWD_DEFINED__
#define __IIviCounterTotalizeTimed_FWD_DEFINED__
typedef interface IIviCounterTotalizeTimed IIviCounterTotalizeTimed;

#endif 	/* __IIviCounterTotalizeTimed_FWD_DEFINED__ */


#ifndef __IIviCounterArm_FWD_DEFINED__
#define __IIviCounterArm_FWD_DEFINED__
typedef interface IIviCounterArm IIviCounterArm;

#endif 	/* __IIviCounterArm_FWD_DEFINED__ */


#ifndef __IIviCounterArmStart_FWD_DEFINED__
#define __IIviCounterArmStart_FWD_DEFINED__
typedef interface IIviCounterArmStart IIviCounterArmStart;

#endif 	/* __IIviCounterArmStart_FWD_DEFINED__ */


#ifndef __IIviCounterArmStartExternal_FWD_DEFINED__
#define __IIviCounterArmStartExternal_FWD_DEFINED__
typedef interface IIviCounterArmStartExternal IIviCounterArmStartExternal;

#endif 	/* __IIviCounterArmStartExternal_FWD_DEFINED__ */


#ifndef __IIviCounterArmStop_FWD_DEFINED__
#define __IIviCounterArmStop_FWD_DEFINED__
typedef interface IIviCounterArmStop IIviCounterArmStop;

#endif 	/* __IIviCounterArmStop_FWD_DEFINED__ */


#ifndef __IIviCounterArmStopExternal_FWD_DEFINED__
#define __IIviCounterArmStopExternal_FWD_DEFINED__
typedef interface IIviCounterArmStopExternal IIviCounterArmStopExternal;

#endif 	/* __IIviCounterArmStopExternal_FWD_DEFINED__ */


#ifndef __IIviCounterMeasurement_FWD_DEFINED__
#define __IIviCounterMeasurement_FWD_DEFINED__
typedef interface IIviCounterMeasurement IIviCounterMeasurement;

#endif 	/* __IIviCounterMeasurement_FWD_DEFINED__ */


#ifndef __IIviCounterVoltage_FWD_DEFINED__
#define __IIviCounterVoltage_FWD_DEFINED__
typedef interface IIviCounterVoltage IIviCounterVoltage;

#endif 	/* __IIviCounterVoltage_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __IviCounterLib_LIBRARY_DEFINED__
#define __IviCounterLib_LIBRARY_DEFINED__

/* library IviCounterLib */
/* [helpfile][helpcontext][helpstring][version][uuid] */ 






















typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d92477c4-4472-3925-9108-f344d6cfbb52") 
enum IviCounterCouplingEnum
    {
        IviCounterCouplingAC	= 1,
        IviCounterCouplingDC	= 2
    } 	IviCounterCouplingEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("d43912a9-5bf4-36cf-946a-1f63e350a722") 
enum IviCounterSlopeEnum
    {
        IviCounterSlopeNegative	= 0,
        IviCounterSlopePositive	= 1
    } 	IviCounterSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("4576b78b-985d-3a22-94b2-70c76001c693") 
enum IviCounterArmTypeEnum
    {
        IviCounterArmTypeImmediate	= 1,
        IviCounterArmTypeExternal	= 2
    } 	IviCounterArmTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("e7a4237d-81d9-3e9c-a253-6bce4d234a1b") 
enum IviCounterMeasurementFunctionEnum
    {
        IviCounterFunctionFrequency	= 1,
        IviCounterFunctionFrequencyWithAperture	= 2,
        IviCounterFunctionPeriod	= 3,
        IviCounterFunctionPeriodWithAperture	= 4,
        IviCounterFunctionPulseWidth	= 5,
        IviCounterFunctionDutyCycle	= 6,
        IviCounterFunctionEdgeTime	= 7,
        IviCounterFunctionFrequencyRatio	= 8,
        IviCounterFunctionTimeInterval	= 9,
        IviCounterFunctionPhase	= 10,
        IviCounterFunctionContinuousTotalize	= 11,
        IviCounterFunctionGatedTotalize	= 12,
        IviCounterFunctionTimedTotalize	= 13,
        IviCounterFunctionDCVoltage	= 14,
        IviCounterFunctionMaximumVoltage	= 15,
        IviCounterFunctionMinimumVoltage	= 16,
        IviCounterFunctionRMSVoltage	= 17,
        IviCounterFunctionPeakToPeakVoltage	= 18
    } 	IviCounterMeasurementFunctionEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("dbb1ce45-05e4-4a62-a25a-389d6a8cfbc0") 
enum IviCounterMeasurementStatusEnum
    {
        IviCounterMeasurementStatusComplete	= 1,
        IviCounterMeasurementStatusInProgress	= 0,
        IviCounterMeasurementStatusUnknown	= -1
    } 	IviCounterMeasurementStatusEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("1f57dd19-24dc-402c-b1b1-bad16e6fc17d") 
enum IviCounterReferenceTypeEnum
    {
        IviCounterReferenceTypeVoltage	= 1,
        IviCounterReferenceTypePercent	= 2
    } 	IviCounterReferenceTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][uuid] */  DECLSPEC_UUID("fb7f2f87-e717-48a3-8d9a-1349621a16f8") 
enum IviCounterErrorCodesEnum
    {
        E_IVICOUNTER_MAX_TIME_EXCEEDED	= -2147213311,
        S_IVICOUNTER_OVER_RANGE	= 278530,
        S_IVICOUNTER_MEASURE_UNCALIBRATED	= 278529
    } 	IviCounterErrorCodesEnum;


EXTERN_C const IID LIBID_IviCounterLib;

#ifndef __IIviCounter_INTERFACE_DEFINED__
#define __IIviCounter_INTERFACE_DEFINED__

/* interface IIviCounter */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5378-a398-11d4-ba58-000064657374")
    IIviCounter : public IIviDriver
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channels( 
            /* [retval][out] */ IIviCounterChannels **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ IIviCounterFrequency **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Period( 
            /* [retval][out] */ IIviCounterPeriod **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_PulseWidth( 
            /* [retval][out] */ IIviCounterPulseWidth **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DutyCycle( 
            /* [retval][out] */ IIviCounterDutyCycle **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_EdgeTime( 
            /* [retval][out] */ IIviCounterEdgeTime **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyRatio( 
            /* [retval][out] */ IIviCounterFrequencyRatio **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TimeInterval( 
            /* [retval][out] */ IIviCounterTimeInterval **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Phase( 
            /* [retval][out] */ IIviCounterPhase **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TotalizeContinuous( 
            /* [retval][out] */ IIviCounterTotalizeContinuous **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TotalizeGated( 
            /* [retval][out] */ IIviCounterTotalizeGated **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_TotalizeTimed( 
            /* [retval][out] */ IIviCounterTotalizeTimed **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Arm( 
            /* [retval][out] */ IIviCounterArm **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Measurement( 
            /* [retval][out] */ IIviCounterMeasurement **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Voltage( 
            /* [retval][out] */ IIviCounterVoltage **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Function( 
            /* [retval][out] */ enum IviCounterMeasurementFunctionEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Function( 
            /* [in] */ enum IviCounterMeasurementFunctionEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounter * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviCounter * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviCounter * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviCounter * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviCounter * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviCounter * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviCounter * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channels )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterChannels **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterFrequency **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Period )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterPeriod **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PulseWidth )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterPulseWidth **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DutyCycle )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterDutyCycle **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EdgeTime )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterEdgeTime **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyRatio )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterFrequencyRatio **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeInterval )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterTimeInterval **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Phase )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterPhase **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TotalizeContinuous )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterTotalizeContinuous **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TotalizeGated )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterTotalizeGated **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TotalizeTimed )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterTotalizeTimed **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arm )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterArm **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Measurement )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterMeasurement **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Voltage )( 
            IIviCounter * This,
            /* [retval][out] */ IIviCounterVoltage **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Function )( 
            IIviCounter * This,
            /* [retval][out] */ enum IviCounterMeasurementFunctionEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Function )( 
            IIviCounter * This,
            /* [in] */ enum IviCounterMeasurementFunctionEnum Val);
        
        END_INTERFACE
    } IIviCounterVtbl;

    interface IIviCounter
    {
        CONST_VTBL struct IIviCounterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounter_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviCounter_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviCounter_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviCounter_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviCounter_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviCounter_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviCounter_get_Channels(This,Val)	\
    ( (This)->lpVtbl -> get_Channels(This,Val) ) 

#define IIviCounter_get_Frequency(This,Val)	\
    ( (This)->lpVtbl -> get_Frequency(This,Val) ) 

#define IIviCounter_get_Period(This,Val)	\
    ( (This)->lpVtbl -> get_Period(This,Val) ) 

#define IIviCounter_get_PulseWidth(This,Val)	\
    ( (This)->lpVtbl -> get_PulseWidth(This,Val) ) 

#define IIviCounter_get_DutyCycle(This,Val)	\
    ( (This)->lpVtbl -> get_DutyCycle(This,Val) ) 

#define IIviCounter_get_EdgeTime(This,Val)	\
    ( (This)->lpVtbl -> get_EdgeTime(This,Val) ) 

#define IIviCounter_get_FrequencyRatio(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencyRatio(This,Val) ) 

#define IIviCounter_get_TimeInterval(This,Val)	\
    ( (This)->lpVtbl -> get_TimeInterval(This,Val) ) 

#define IIviCounter_get_Phase(This,Val)	\
    ( (This)->lpVtbl -> get_Phase(This,Val) ) 

#define IIviCounter_get_TotalizeContinuous(This,Val)	\
    ( (This)->lpVtbl -> get_TotalizeContinuous(This,Val) ) 

#define IIviCounter_get_TotalizeGated(This,Val)	\
    ( (This)->lpVtbl -> get_TotalizeGated(This,Val) ) 

#define IIviCounter_get_TotalizeTimed(This,Val)	\
    ( (This)->lpVtbl -> get_TotalizeTimed(This,Val) ) 

#define IIviCounter_get_Arm(This,Val)	\
    ( (This)->lpVtbl -> get_Arm(This,Val) ) 

#define IIviCounter_get_Measurement(This,Val)	\
    ( (This)->lpVtbl -> get_Measurement(This,Val) ) 

#define IIviCounter_get_Voltage(This,Val)	\
    ( (This)->lpVtbl -> get_Voltage(This,Val) ) 

#define IIviCounter_get_Function(This,Val)	\
    ( (This)->lpVtbl -> get_Function(This,Val) ) 

#define IIviCounter_put_Function(This,Val)	\
    ( (This)->lpVtbl -> put_Function(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounter_INTERFACE_DEFINED__ */


#ifndef __IIviCounterChannels_INTERFACE_DEFINED__
#define __IIviCounterChannels_INTERFACE_DEFINED__

/* interface IIviCounterChannels */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterChannels;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5379-a398-11d4-ba58-000064657374")
    IIviCounterChannels : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviCounterChannel **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterChannelsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterChannels * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterChannels * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterChannels * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviCounterChannels * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviCounterChannel **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviCounterChannels * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviCounterChannels * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Val);
        
        END_INTERFACE
    } IIviCounterChannelsVtbl;

    interface IIviCounterChannels
    {
        CONST_VTBL struct IIviCounterChannelsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterChannels_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterChannels_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterChannels_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterChannels_get_Item(This,Name,Val)	\
    ( (This)->lpVtbl -> get_Item(This,Name,Val) ) 

#define IIviCounterChannels_get_Count(This,Val)	\
    ( (This)->lpVtbl -> get_Count(This,Val) ) 

#define IIviCounterChannels_get_Name(This,Index,Val)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterChannels_INTERFACE_DEFINED__ */


#ifndef __IIviCounterChannel_INTERFACE_DEFINED__
#define __IIviCounterChannel_INTERFACE_DEFINED__

/* interface IIviCounterChannel */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed537a-a398-11d4-ba58-000064657374")
    IIviCounterChannel : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureFilter( 
            /* [in] */ double MinimumFrequency,
            /* [in] */ double MaximumFrequency) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureLevel( 
            /* [in] */ double TriggerLevel,
            /* [in] */ double Hysteresis) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ double Impedance,
            /* [in] */ enum IviCounterCouplingEnum Coupling,
            /* [in] */ double Attenuation) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Impedance( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Impedance( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Coupling( 
            /* [retval][out] */ enum IviCounterCouplingEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Coupling( 
            /* [in] */ enum IviCounterCouplingEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Attenuation( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Attenuation( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Hysteresis( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Hysteresis( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FilterEnabled( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FilterEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ enum IviCounterSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ enum IviCounterSlopeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MinimumFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MinimumFrequency( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_MaximumFrequency( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_MaximumFrequency( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterChannel * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureFilter )( 
            IIviCounterChannel * This,
            /* [in] */ double MinimumFrequency,
            /* [in] */ double MaximumFrequency);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureLevel )( 
            IIviCounterChannel * This,
            /* [in] */ double TriggerLevel,
            /* [in] */ double Hysteresis);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterChannel * This,
            /* [in] */ double Impedance,
            /* [in] */ enum IviCounterCouplingEnum Coupling,
            /* [in] */ double Attenuation);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Impedance )( 
            IIviCounterChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Impedance )( 
            IIviCounterChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Coupling )( 
            IIviCounterChannel * This,
            /* [retval][out] */ enum IviCounterCouplingEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Coupling )( 
            IIviCounterChannel * This,
            /* [in] */ enum IviCounterCouplingEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attenuation )( 
            IIviCounterChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Attenuation )( 
            IIviCounterChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviCounterChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviCounterChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hysteresis )( 
            IIviCounterChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Hysteresis )( 
            IIviCounterChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilterEnabled )( 
            IIviCounterChannel * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FilterEnabled )( 
            IIviCounterChannel * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviCounterChannel * This,
            /* [retval][out] */ enum IviCounterSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviCounterChannel * This,
            /* [in] */ enum IviCounterSlopeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinimumFrequency )( 
            IIviCounterChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinimumFrequency )( 
            IIviCounterChannel * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaximumFrequency )( 
            IIviCounterChannel * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaximumFrequency )( 
            IIviCounterChannel * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterChannelVtbl;

    interface IIviCounterChannel
    {
        CONST_VTBL struct IIviCounterChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterChannel_ConfigureFilter(This,MinimumFrequency,MaximumFrequency)	\
    ( (This)->lpVtbl -> ConfigureFilter(This,MinimumFrequency,MaximumFrequency) ) 

#define IIviCounterChannel_ConfigureLevel(This,TriggerLevel,Hysteresis)	\
    ( (This)->lpVtbl -> ConfigureLevel(This,TriggerLevel,Hysteresis) ) 

#define IIviCounterChannel_Configure(This,Impedance,Coupling,Attenuation)	\
    ( (This)->lpVtbl -> Configure(This,Impedance,Coupling,Attenuation) ) 

#define IIviCounterChannel_get_Impedance(This,Val)	\
    ( (This)->lpVtbl -> get_Impedance(This,Val) ) 

#define IIviCounterChannel_put_Impedance(This,Val)	\
    ( (This)->lpVtbl -> put_Impedance(This,Val) ) 

#define IIviCounterChannel_get_Coupling(This,Val)	\
    ( (This)->lpVtbl -> get_Coupling(This,Val) ) 

#define IIviCounterChannel_put_Coupling(This,Val)	\
    ( (This)->lpVtbl -> put_Coupling(This,Val) ) 

#define IIviCounterChannel_get_Attenuation(This,Val)	\
    ( (This)->lpVtbl -> get_Attenuation(This,Val) ) 

#define IIviCounterChannel_put_Attenuation(This,Val)	\
    ( (This)->lpVtbl -> put_Attenuation(This,Val) ) 

#define IIviCounterChannel_get_Level(This,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Val) ) 

#define IIviCounterChannel_put_Level(This,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Val) ) 

#define IIviCounterChannel_get_Hysteresis(This,Val)	\
    ( (This)->lpVtbl -> get_Hysteresis(This,Val) ) 

#define IIviCounterChannel_put_Hysteresis(This,Val)	\
    ( (This)->lpVtbl -> put_Hysteresis(This,Val) ) 

#define IIviCounterChannel_get_FilterEnabled(This,Val)	\
    ( (This)->lpVtbl -> get_FilterEnabled(This,Val) ) 

#define IIviCounterChannel_put_FilterEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_FilterEnabled(This,Val) ) 

#define IIviCounterChannel_get_Slope(This,Val)	\
    ( (This)->lpVtbl -> get_Slope(This,Val) ) 

#define IIviCounterChannel_put_Slope(This,Val)	\
    ( (This)->lpVtbl -> put_Slope(This,Val) ) 

#define IIviCounterChannel_get_MinimumFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_MinimumFrequency(This,Val) ) 

#define IIviCounterChannel_put_MinimumFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_MinimumFrequency(This,Val) ) 

#define IIviCounterChannel_get_MaximumFrequency(This,Val)	\
    ( (This)->lpVtbl -> get_MaximumFrequency(This,Val) ) 

#define IIviCounterChannel_put_MaximumFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_MaximumFrequency(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterChannel_INTERFACE_DEFINED__ */


#ifndef __IIviCounterFrequency_INTERFACE_DEFINED__
#define __IIviCounterFrequency_INTERFACE_DEFINED__

/* interface IIviCounterFrequency */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterFrequency;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5383-a398-11d4-ba58-000064657374")
    IIviCounterFrequency : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureWithAperture( 
            /* [in] */ BSTR Channel,
            /* [in] */ double ApertureTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureManual( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Channel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Estimate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Estimate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ApertureTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ApertureTime( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_EstimateAuto( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_EstimateAuto( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionAuto( 
            /* [retval][out] */ VARIANT_BOOL *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ResolutionAuto( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterFrequencyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterFrequency * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterFrequency * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterFrequency * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureWithAperture )( 
            IIviCounterFrequency * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double ApertureTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureManual )( 
            IIviCounterFrequency * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterFrequency * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channel )( 
            IIviCounterFrequency * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Channel )( 
            IIviCounterFrequency * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Estimate )( 
            IIviCounterFrequency * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Estimate )( 
            IIviCounterFrequency * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IIviCounterFrequency * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IIviCounterFrequency * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ApertureTime )( 
            IIviCounterFrequency * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ApertureTime )( 
            IIviCounterFrequency * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EstimateAuto )( 
            IIviCounterFrequency * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EstimateAuto )( 
            IIviCounterFrequency * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionAuto )( 
            IIviCounterFrequency * This,
            /* [retval][out] */ VARIANT_BOOL *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResolutionAuto )( 
            IIviCounterFrequency * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } IIviCounterFrequencyVtbl;

    interface IIviCounterFrequency
    {
        CONST_VTBL struct IIviCounterFrequencyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterFrequency_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterFrequency_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterFrequency_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterFrequency_ConfigureWithAperture(This,Channel,ApertureTime)	\
    ( (This)->lpVtbl -> ConfigureWithAperture(This,Channel,ApertureTime) ) 

#define IIviCounterFrequency_ConfigureManual(This,Channel,Estimate,Resolution)	\
    ( (This)->lpVtbl -> ConfigureManual(This,Channel,Estimate,Resolution) ) 

#define IIviCounterFrequency_Configure(This,Channel)	\
    ( (This)->lpVtbl -> Configure(This,Channel) ) 

#define IIviCounterFrequency_get_Channel(This,Val)	\
    ( (This)->lpVtbl -> get_Channel(This,Val) ) 

#define IIviCounterFrequency_put_Channel(This,Val)	\
    ( (This)->lpVtbl -> put_Channel(This,Val) ) 

#define IIviCounterFrequency_get_Estimate(This,Val)	\
    ( (This)->lpVtbl -> get_Estimate(This,Val) ) 

#define IIviCounterFrequency_put_Estimate(This,Val)	\
    ( (This)->lpVtbl -> put_Estimate(This,Val) ) 

#define IIviCounterFrequency_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IIviCounterFrequency_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#define IIviCounterFrequency_get_ApertureTime(This,Val)	\
    ( (This)->lpVtbl -> get_ApertureTime(This,Val) ) 

#define IIviCounterFrequency_put_ApertureTime(This,Val)	\
    ( (This)->lpVtbl -> put_ApertureTime(This,Val) ) 

#define IIviCounterFrequency_get_EstimateAuto(This,Val)	\
    ( (This)->lpVtbl -> get_EstimateAuto(This,Val) ) 

#define IIviCounterFrequency_put_EstimateAuto(This,Val)	\
    ( (This)->lpVtbl -> put_EstimateAuto(This,Val) ) 

#define IIviCounterFrequency_get_ResolutionAuto(This,Val)	\
    ( (This)->lpVtbl -> get_ResolutionAuto(This,Val) ) 

#define IIviCounterFrequency_put_ResolutionAuto(This,Val)	\
    ( (This)->lpVtbl -> put_ResolutionAuto(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterFrequency_INTERFACE_DEFINED__ */


#ifndef __IIviCounterPeriod_INTERFACE_DEFINED__
#define __IIviCounterPeriod_INTERFACE_DEFINED__

/* interface IIviCounterPeriod */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterPeriod;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5384-a398-11d4-ba58-000064657374")
    IIviCounterPeriod : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureWithAperture( 
            /* [in] */ BSTR Channel,
            /* [in] */ double ApertureTime) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Channel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Estimate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Estimate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ApertureTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ApertureTime( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterPeriodVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterPeriod * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterPeriod * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterPeriod * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureWithAperture )( 
            IIviCounterPeriod * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double ApertureTime);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterPeriod * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channel )( 
            IIviCounterPeriod * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Channel )( 
            IIviCounterPeriod * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Estimate )( 
            IIviCounterPeriod * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Estimate )( 
            IIviCounterPeriod * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IIviCounterPeriod * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IIviCounterPeriod * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ApertureTime )( 
            IIviCounterPeriod * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ApertureTime )( 
            IIviCounterPeriod * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterPeriodVtbl;

    interface IIviCounterPeriod
    {
        CONST_VTBL struct IIviCounterPeriodVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterPeriod_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterPeriod_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterPeriod_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterPeriod_ConfigureWithAperture(This,Channel,ApertureTime)	\
    ( (This)->lpVtbl -> ConfigureWithAperture(This,Channel,ApertureTime) ) 

#define IIviCounterPeriod_Configure(This,Channel,Estimate,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Channel,Estimate,Resolution) ) 

#define IIviCounterPeriod_get_Channel(This,Val)	\
    ( (This)->lpVtbl -> get_Channel(This,Val) ) 

#define IIviCounterPeriod_put_Channel(This,Val)	\
    ( (This)->lpVtbl -> put_Channel(This,Val) ) 

#define IIviCounterPeriod_get_Estimate(This,Val)	\
    ( (This)->lpVtbl -> get_Estimate(This,Val) ) 

#define IIviCounterPeriod_put_Estimate(This,Val)	\
    ( (This)->lpVtbl -> put_Estimate(This,Val) ) 

#define IIviCounterPeriod_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IIviCounterPeriod_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#define IIviCounterPeriod_get_ApertureTime(This,Val)	\
    ( (This)->lpVtbl -> get_ApertureTime(This,Val) ) 

#define IIviCounterPeriod_put_ApertureTime(This,Val)	\
    ( (This)->lpVtbl -> put_ApertureTime(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterPeriod_INTERFACE_DEFINED__ */


#ifndef __IIviCounterPulseWidth_INTERFACE_DEFINED__
#define __IIviCounterPulseWidth_INTERFACE_DEFINED__

/* interface IIviCounterPulseWidth */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterPulseWidth;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed537b-a398-11d4-ba58-000064657374")
    IIviCounterPulseWidth : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Channel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Estimate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Estimate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterPulseWidthVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterPulseWidth * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterPulseWidth * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterPulseWidth * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterPulseWidth * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channel )( 
            IIviCounterPulseWidth * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Channel )( 
            IIviCounterPulseWidth * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Estimate )( 
            IIviCounterPulseWidth * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Estimate )( 
            IIviCounterPulseWidth * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IIviCounterPulseWidth * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IIviCounterPulseWidth * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterPulseWidthVtbl;

    interface IIviCounterPulseWidth
    {
        CONST_VTBL struct IIviCounterPulseWidthVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterPulseWidth_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterPulseWidth_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterPulseWidth_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterPulseWidth_Configure(This,Channel,Estimate,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Channel,Estimate,Resolution) ) 

#define IIviCounterPulseWidth_get_Channel(This,Val)	\
    ( (This)->lpVtbl -> get_Channel(This,Val) ) 

#define IIviCounterPulseWidth_put_Channel(This,Val)	\
    ( (This)->lpVtbl -> put_Channel(This,Val) ) 

#define IIviCounterPulseWidth_get_Estimate(This,Val)	\
    ( (This)->lpVtbl -> get_Estimate(This,Val) ) 

#define IIviCounterPulseWidth_put_Estimate(This,Val)	\
    ( (This)->lpVtbl -> put_Estimate(This,Val) ) 

#define IIviCounterPulseWidth_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IIviCounterPulseWidth_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterPulseWidth_INTERFACE_DEFINED__ */


#ifndef __IIviCounterDutyCycle_INTERFACE_DEFINED__
#define __IIviCounterDutyCycle_INTERFACE_DEFINED__

/* interface IIviCounterDutyCycle */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterDutyCycle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed537c-a398-11d4-ba58-000064657374")
    IIviCounterDutyCycle : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel,
            /* [in] */ double FrequencyEstimate,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Channel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyEstimate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrequencyEstimate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterDutyCycleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterDutyCycle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterDutyCycle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterDutyCycle * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterDutyCycle * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double FrequencyEstimate,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channel )( 
            IIviCounterDutyCycle * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Channel )( 
            IIviCounterDutyCycle * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyEstimate )( 
            IIviCounterDutyCycle * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrequencyEstimate )( 
            IIviCounterDutyCycle * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IIviCounterDutyCycle * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IIviCounterDutyCycle * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterDutyCycleVtbl;

    interface IIviCounterDutyCycle
    {
        CONST_VTBL struct IIviCounterDutyCycleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterDutyCycle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterDutyCycle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterDutyCycle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterDutyCycle_Configure(This,Channel,FrequencyEstimate,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Channel,FrequencyEstimate,Resolution) ) 

#define IIviCounterDutyCycle_get_Channel(This,Val)	\
    ( (This)->lpVtbl -> get_Channel(This,Val) ) 

#define IIviCounterDutyCycle_put_Channel(This,Val)	\
    ( (This)->lpVtbl -> put_Channel(This,Val) ) 

#define IIviCounterDutyCycle_get_FrequencyEstimate(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencyEstimate(This,Val) ) 

#define IIviCounterDutyCycle_put_FrequencyEstimate(This,Val)	\
    ( (This)->lpVtbl -> put_FrequencyEstimate(This,Val) ) 

#define IIviCounterDutyCycle_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IIviCounterDutyCycle_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterDutyCycle_INTERFACE_DEFINED__ */


#ifndef __IIviCounterEdgeTime_INTERFACE_DEFINED__
#define __IIviCounterEdgeTime_INTERFACE_DEFINED__

/* interface IIviCounterEdgeTime */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterEdgeTime;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed537d-a398-11d4-ba58-000064657374")
    IIviCounterEdgeTime : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE ConfigureReferenceLevels( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum IviCounterReferenceTypeEnum ReferenceType,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution,
            /* [in] */ double HighReference,
            /* [in] */ double LowReference) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Channel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Estimate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Estimate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceType( 
            /* [retval][out] */ enum IviCounterReferenceTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceType( 
            /* [in] */ enum IviCounterReferenceTypeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_HighReference( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_HighReference( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_LowReference( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_LowReference( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterEdgeTimeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterEdgeTime * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterEdgeTime * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterEdgeTime * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterEdgeTime * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *ConfigureReferenceLevels )( 
            IIviCounterEdgeTime * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum IviCounterReferenceTypeEnum ReferenceType,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution,
            /* [in] */ double HighReference,
            /* [in] */ double LowReference);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channel )( 
            IIviCounterEdgeTime * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Channel )( 
            IIviCounterEdgeTime * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Estimate )( 
            IIviCounterEdgeTime * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Estimate )( 
            IIviCounterEdgeTime * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IIviCounterEdgeTime * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IIviCounterEdgeTime * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceType )( 
            IIviCounterEdgeTime * This,
            /* [retval][out] */ enum IviCounterReferenceTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceType )( 
            IIviCounterEdgeTime * This,
            /* [in] */ enum IviCounterReferenceTypeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HighReference )( 
            IIviCounterEdgeTime * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HighReference )( 
            IIviCounterEdgeTime * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowReference )( 
            IIviCounterEdgeTime * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LowReference )( 
            IIviCounterEdgeTime * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterEdgeTimeVtbl;

    interface IIviCounterEdgeTime
    {
        CONST_VTBL struct IIviCounterEdgeTimeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterEdgeTime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterEdgeTime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterEdgeTime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterEdgeTime_Configure(This,Channel,Estimate,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Channel,Estimate,Resolution) ) 

#define IIviCounterEdgeTime_ConfigureReferenceLevels(This,Channel,ReferenceType,Estimate,Resolution,HighReference,LowReference)	\
    ( (This)->lpVtbl -> ConfigureReferenceLevels(This,Channel,ReferenceType,Estimate,Resolution,HighReference,LowReference) ) 

#define IIviCounterEdgeTime_get_Channel(This,Val)	\
    ( (This)->lpVtbl -> get_Channel(This,Val) ) 

#define IIviCounterEdgeTime_put_Channel(This,Val)	\
    ( (This)->lpVtbl -> put_Channel(This,Val) ) 

#define IIviCounterEdgeTime_get_Estimate(This,Val)	\
    ( (This)->lpVtbl -> get_Estimate(This,Val) ) 

#define IIviCounterEdgeTime_put_Estimate(This,Val)	\
    ( (This)->lpVtbl -> put_Estimate(This,Val) ) 

#define IIviCounterEdgeTime_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IIviCounterEdgeTime_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#define IIviCounterEdgeTime_get_ReferenceType(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceType(This,Val) ) 

#define IIviCounterEdgeTime_put_ReferenceType(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceType(This,Val) ) 

#define IIviCounterEdgeTime_get_HighReference(This,Val)	\
    ( (This)->lpVtbl -> get_HighReference(This,Val) ) 

#define IIviCounterEdgeTime_put_HighReference(This,Val)	\
    ( (This)->lpVtbl -> put_HighReference(This,Val) ) 

#define IIviCounterEdgeTime_get_LowReference(This,Val)	\
    ( (This)->lpVtbl -> get_LowReference(This,Val) ) 

#define IIviCounterEdgeTime_put_LowReference(This,Val)	\
    ( (This)->lpVtbl -> put_LowReference(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterEdgeTime_INTERFACE_DEFINED__ */


#ifndef __IIviCounterFrequencyRatio_INTERFACE_DEFINED__
#define __IIviCounterFrequencyRatio_INTERFACE_DEFINED__

/* interface IIviCounterFrequencyRatio */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterFrequencyRatio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed537e-a398-11d4-ba58-000064657374")
    IIviCounterFrequencyRatio : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR NumeratorChannel,
            /* [in] */ BSTR DenominatorChannel,
            /* [in] */ double NumeratorFrequencyEstimate,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumeratorChannel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_NumeratorChannel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_DenominatorChannel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_DenominatorChannel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_NumeratorFrequencyEstimate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_NumeratorFrequencyEstimate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Estimate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Estimate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterFrequencyRatioVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterFrequencyRatio * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterFrequencyRatio * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterFrequencyRatio * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterFrequencyRatio * This,
            /* [in] */ BSTR NumeratorChannel,
            /* [in] */ BSTR DenominatorChannel,
            /* [in] */ double NumeratorFrequencyEstimate,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumeratorChannel )( 
            IIviCounterFrequencyRatio * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumeratorChannel )( 
            IIviCounterFrequencyRatio * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DenominatorChannel )( 
            IIviCounterFrequencyRatio * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DenominatorChannel )( 
            IIviCounterFrequencyRatio * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumeratorFrequencyEstimate )( 
            IIviCounterFrequencyRatio * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumeratorFrequencyEstimate )( 
            IIviCounterFrequencyRatio * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Estimate )( 
            IIviCounterFrequencyRatio * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Estimate )( 
            IIviCounterFrequencyRatio * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IIviCounterFrequencyRatio * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IIviCounterFrequencyRatio * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterFrequencyRatioVtbl;

    interface IIviCounterFrequencyRatio
    {
        CONST_VTBL struct IIviCounterFrequencyRatioVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterFrequencyRatio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterFrequencyRatio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterFrequencyRatio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterFrequencyRatio_Configure(This,NumeratorChannel,DenominatorChannel,NumeratorFrequencyEstimate,Estimate,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,NumeratorChannel,DenominatorChannel,NumeratorFrequencyEstimate,Estimate,Resolution) ) 

#define IIviCounterFrequencyRatio_get_NumeratorChannel(This,Val)	\
    ( (This)->lpVtbl -> get_NumeratorChannel(This,Val) ) 

#define IIviCounterFrequencyRatio_put_NumeratorChannel(This,Val)	\
    ( (This)->lpVtbl -> put_NumeratorChannel(This,Val) ) 

#define IIviCounterFrequencyRatio_get_DenominatorChannel(This,Val)	\
    ( (This)->lpVtbl -> get_DenominatorChannel(This,Val) ) 

#define IIviCounterFrequencyRatio_put_DenominatorChannel(This,Val)	\
    ( (This)->lpVtbl -> put_DenominatorChannel(This,Val) ) 

#define IIviCounterFrequencyRatio_get_NumeratorFrequencyEstimate(This,Val)	\
    ( (This)->lpVtbl -> get_NumeratorFrequencyEstimate(This,Val) ) 

#define IIviCounterFrequencyRatio_put_NumeratorFrequencyEstimate(This,Val)	\
    ( (This)->lpVtbl -> put_NumeratorFrequencyEstimate(This,Val) ) 

#define IIviCounterFrequencyRatio_get_Estimate(This,Val)	\
    ( (This)->lpVtbl -> get_Estimate(This,Val) ) 

#define IIviCounterFrequencyRatio_put_Estimate(This,Val)	\
    ( (This)->lpVtbl -> put_Estimate(This,Val) ) 

#define IIviCounterFrequencyRatio_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IIviCounterFrequencyRatio_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterFrequencyRatio_INTERFACE_DEFINED__ */


#ifndef __IIviCounterTimeInterval_INTERFACE_DEFINED__
#define __IIviCounterTimeInterval_INTERFACE_DEFINED__

/* interface IIviCounterTimeInterval */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterTimeInterval;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed537f-a398-11d4-ba58-000064657374")
    IIviCounterTimeInterval : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR StartChannel,
            /* [in] */ BSTR StopChannel,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StartChannel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StartChannel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StopChannel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StopChannel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Estimate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Estimate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_StopHoldoff( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_StopHoldoff( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterTimeIntervalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterTimeInterval * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterTimeInterval * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterTimeInterval * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterTimeInterval * This,
            /* [in] */ BSTR StartChannel,
            /* [in] */ BSTR StopChannel,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartChannel )( 
            IIviCounterTimeInterval * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartChannel )( 
            IIviCounterTimeInterval * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StopChannel )( 
            IIviCounterTimeInterval * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StopChannel )( 
            IIviCounterTimeInterval * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Estimate )( 
            IIviCounterTimeInterval * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Estimate )( 
            IIviCounterTimeInterval * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IIviCounterTimeInterval * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IIviCounterTimeInterval * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StopHoldoff )( 
            IIviCounterTimeInterval * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StopHoldoff )( 
            IIviCounterTimeInterval * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterTimeIntervalVtbl;

    interface IIviCounterTimeInterval
    {
        CONST_VTBL struct IIviCounterTimeIntervalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterTimeInterval_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterTimeInterval_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterTimeInterval_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterTimeInterval_Configure(This,StartChannel,StopChannel,Estimate,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,StartChannel,StopChannel,Estimate,Resolution) ) 

#define IIviCounterTimeInterval_get_StartChannel(This,Val)	\
    ( (This)->lpVtbl -> get_StartChannel(This,Val) ) 

#define IIviCounterTimeInterval_put_StartChannel(This,Val)	\
    ( (This)->lpVtbl -> put_StartChannel(This,Val) ) 

#define IIviCounterTimeInterval_get_StopChannel(This,Val)	\
    ( (This)->lpVtbl -> get_StopChannel(This,Val) ) 

#define IIviCounterTimeInterval_put_StopChannel(This,Val)	\
    ( (This)->lpVtbl -> put_StopChannel(This,Val) ) 

#define IIviCounterTimeInterval_get_Estimate(This,Val)	\
    ( (This)->lpVtbl -> get_Estimate(This,Val) ) 

#define IIviCounterTimeInterval_put_Estimate(This,Val)	\
    ( (This)->lpVtbl -> put_Estimate(This,Val) ) 

#define IIviCounterTimeInterval_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IIviCounterTimeInterval_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#define IIviCounterTimeInterval_get_StopHoldoff(This,Val)	\
    ( (This)->lpVtbl -> get_StopHoldoff(This,Val) ) 

#define IIviCounterTimeInterval_put_StopHoldoff(This,Val)	\
    ( (This)->lpVtbl -> put_StopHoldoff(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterTimeInterval_INTERFACE_DEFINED__ */


#ifndef __IIviCounterPhase_INTERFACE_DEFINED__
#define __IIviCounterPhase_INTERFACE_DEFINED__

/* interface IIviCounterPhase */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterPhase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5380-a398-11d4-ba58-000064657374")
    IIviCounterPhase : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR InputChannel,
            /* [in] */ BSTR ReferenceChannel,
            /* [in] */ double FrequencyEstimate,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_InputChannel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_InputChannel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceChannel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceChannel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyEstimate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_FrequencyEstimate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterPhaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterPhase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterPhase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterPhase * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterPhase * This,
            /* [in] */ BSTR InputChannel,
            /* [in] */ BSTR ReferenceChannel,
            /* [in] */ double FrequencyEstimate,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputChannel )( 
            IIviCounterPhase * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputChannel )( 
            IIviCounterPhase * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceChannel )( 
            IIviCounterPhase * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceChannel )( 
            IIviCounterPhase * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyEstimate )( 
            IIviCounterPhase * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrequencyEstimate )( 
            IIviCounterPhase * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IIviCounterPhase * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IIviCounterPhase * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterPhaseVtbl;

    interface IIviCounterPhase
    {
        CONST_VTBL struct IIviCounterPhaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterPhase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterPhase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterPhase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterPhase_Configure(This,InputChannel,ReferenceChannel,FrequencyEstimate,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,InputChannel,ReferenceChannel,FrequencyEstimate,Resolution) ) 

#define IIviCounterPhase_get_InputChannel(This,Val)	\
    ( (This)->lpVtbl -> get_InputChannel(This,Val) ) 

#define IIviCounterPhase_put_InputChannel(This,Val)	\
    ( (This)->lpVtbl -> put_InputChannel(This,Val) ) 

#define IIviCounterPhase_get_ReferenceChannel(This,Val)	\
    ( (This)->lpVtbl -> get_ReferenceChannel(This,Val) ) 

#define IIviCounterPhase_put_ReferenceChannel(This,Val)	\
    ( (This)->lpVtbl -> put_ReferenceChannel(This,Val) ) 

#define IIviCounterPhase_get_FrequencyEstimate(This,Val)	\
    ( (This)->lpVtbl -> get_FrequencyEstimate(This,Val) ) 

#define IIviCounterPhase_put_FrequencyEstimate(This,Val)	\
    ( (This)->lpVtbl -> put_FrequencyEstimate(This,Val) ) 

#define IIviCounterPhase_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IIviCounterPhase_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterPhase_INTERFACE_DEFINED__ */


#ifndef __IIviCounterTotalizeContinuous_INTERFACE_DEFINED__
#define __IIviCounterTotalizeContinuous_INTERFACE_DEFINED__

/* interface IIviCounterTotalizeContinuous */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterTotalizeContinuous;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5385-a398-11d4-ba58-000064657374")
    IIviCounterTotalizeContinuous : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE FetchCount( 
            /* [retval][out] */ long *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Channel( 
            /* [in] */ BSTR Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterTotalizeContinuousVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterTotalizeContinuous * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterTotalizeContinuous * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterTotalizeContinuous * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IIviCounterTotalizeContinuous * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IIviCounterTotalizeContinuous * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterTotalizeContinuous * This,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *FetchCount )( 
            IIviCounterTotalizeContinuous * This,
            /* [retval][out] */ long *Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channel )( 
            IIviCounterTotalizeContinuous * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Channel )( 
            IIviCounterTotalizeContinuous * This,
            /* [in] */ BSTR Val);
        
        END_INTERFACE
    } IIviCounterTotalizeContinuousVtbl;

    interface IIviCounterTotalizeContinuous
    {
        CONST_VTBL struct IIviCounterTotalizeContinuousVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterTotalizeContinuous_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterTotalizeContinuous_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterTotalizeContinuous_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterTotalizeContinuous_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IIviCounterTotalizeContinuous_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IIviCounterTotalizeContinuous_Configure(This,Channel)	\
    ( (This)->lpVtbl -> Configure(This,Channel) ) 

#define IIviCounterTotalizeContinuous_FetchCount(This,Val)	\
    ( (This)->lpVtbl -> FetchCount(This,Val) ) 

#define IIviCounterTotalizeContinuous_get_Channel(This,Val)	\
    ( (This)->lpVtbl -> get_Channel(This,Val) ) 

#define IIviCounterTotalizeContinuous_put_Channel(This,Val)	\
    ( (This)->lpVtbl -> put_Channel(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterTotalizeContinuous_INTERFACE_DEFINED__ */


#ifndef __IIviCounterTotalizeGated_INTERFACE_DEFINED__
#define __IIviCounterTotalizeGated_INTERFACE_DEFINED__

/* interface IIviCounterTotalizeGated */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterTotalizeGated;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5386-a398-11d4-ba58-000064657374")
    IIviCounterTotalizeGated : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR GateSource,
            /* [in] */ enum IviCounterSlopeEnum GateSlope) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Channel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_GateSource( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_GateSource( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_GateSlope( 
            /* [retval][out] */ enum IviCounterSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_GateSlope( 
            /* [in] */ enum IviCounterSlopeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterTotalizeGatedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterTotalizeGated * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterTotalizeGated * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterTotalizeGated * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterTotalizeGated * This,
            /* [in] */ BSTR Channel,
            /* [in] */ BSTR GateSource,
            /* [in] */ enum IviCounterSlopeEnum GateSlope);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channel )( 
            IIviCounterTotalizeGated * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Channel )( 
            IIviCounterTotalizeGated * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GateSource )( 
            IIviCounterTotalizeGated * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GateSource )( 
            IIviCounterTotalizeGated * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GateSlope )( 
            IIviCounterTotalizeGated * This,
            /* [retval][out] */ enum IviCounterSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GateSlope )( 
            IIviCounterTotalizeGated * This,
            /* [in] */ enum IviCounterSlopeEnum Val);
        
        END_INTERFACE
    } IIviCounterTotalizeGatedVtbl;

    interface IIviCounterTotalizeGated
    {
        CONST_VTBL struct IIviCounterTotalizeGatedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterTotalizeGated_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterTotalizeGated_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterTotalizeGated_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterTotalizeGated_Configure(This,Channel,GateSource,GateSlope)	\
    ( (This)->lpVtbl -> Configure(This,Channel,GateSource,GateSlope) ) 

#define IIviCounterTotalizeGated_get_Channel(This,Val)	\
    ( (This)->lpVtbl -> get_Channel(This,Val) ) 

#define IIviCounterTotalizeGated_put_Channel(This,Val)	\
    ( (This)->lpVtbl -> put_Channel(This,Val) ) 

#define IIviCounterTotalizeGated_get_GateSource(This,Val)	\
    ( (This)->lpVtbl -> get_GateSource(This,Val) ) 

#define IIviCounterTotalizeGated_put_GateSource(This,Val)	\
    ( (This)->lpVtbl -> put_GateSource(This,Val) ) 

#define IIviCounterTotalizeGated_get_GateSlope(This,Val)	\
    ( (This)->lpVtbl -> get_GateSlope(This,Val) ) 

#define IIviCounterTotalizeGated_put_GateSlope(This,Val)	\
    ( (This)->lpVtbl -> put_GateSlope(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterTotalizeGated_INTERFACE_DEFINED__ */


#ifndef __IIviCounterTotalizeTimed_INTERFACE_DEFINED__
#define __IIviCounterTotalizeTimed_INTERFACE_DEFINED__

/* interface IIviCounterTotalizeTimed */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterTotalizeTimed;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5381-a398-11d4-ba58-000064657374")
    IIviCounterTotalizeTimed : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel,
            /* [in] */ double GateTime) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Channel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_GateTime( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_GateTime( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterTotalizeTimedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterTotalizeTimed * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterTotalizeTimed * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterTotalizeTimed * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterTotalizeTimed * This,
            /* [in] */ BSTR Channel,
            /* [in] */ double GateTime);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channel )( 
            IIviCounterTotalizeTimed * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Channel )( 
            IIviCounterTotalizeTimed * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GateTime )( 
            IIviCounterTotalizeTimed * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GateTime )( 
            IIviCounterTotalizeTimed * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterTotalizeTimedVtbl;

    interface IIviCounterTotalizeTimed
    {
        CONST_VTBL struct IIviCounterTotalizeTimedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterTotalizeTimed_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterTotalizeTimed_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterTotalizeTimed_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterTotalizeTimed_Configure(This,Channel,GateTime)	\
    ( (This)->lpVtbl -> Configure(This,Channel,GateTime) ) 

#define IIviCounterTotalizeTimed_get_Channel(This,Val)	\
    ( (This)->lpVtbl -> get_Channel(This,Val) ) 

#define IIviCounterTotalizeTimed_put_Channel(This,Val)	\
    ( (This)->lpVtbl -> put_Channel(This,Val) ) 

#define IIviCounterTotalizeTimed_get_GateTime(This,Val)	\
    ( (This)->lpVtbl -> get_GateTime(This,Val) ) 

#define IIviCounterTotalizeTimed_put_GateTime(This,Val)	\
    ( (This)->lpVtbl -> put_GateTime(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterTotalizeTimed_INTERFACE_DEFINED__ */


#ifndef __IIviCounterArm_INTERFACE_DEFINED__
#define __IIviCounterArm_INTERFACE_DEFINED__

/* interface IIviCounterArm */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterArm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5382-a398-11d4-ba58-000064657374")
    IIviCounterArm : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ IIviCounterArmStart **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ IIviCounterArmStop **Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterArmVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterArm * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterArm * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterArm * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviCounterArm * This,
            /* [retval][out] */ IIviCounterArmStart **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviCounterArm * This,
            /* [retval][out] */ IIviCounterArmStop **Val);
        
        END_INTERFACE
    } IIviCounterArmVtbl;

    interface IIviCounterArm
    {
        CONST_VTBL struct IIviCounterArmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterArm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterArm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterArm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterArm_get_Start(This,Val)	\
    ( (This)->lpVtbl -> get_Start(This,Val) ) 

#define IIviCounterArm_get_Stop(This,Val)	\
    ( (This)->lpVtbl -> get_Stop(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterArm_INTERFACE_DEFINED__ */


#ifndef __IIviCounterArmStart_INTERFACE_DEFINED__
#define __IIviCounterArmStart_INTERFACE_DEFINED__

/* interface IIviCounterArmStart */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterArmStart;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5387-a398-11d4-ba58-000064657374")
    IIviCounterArmStart : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_External( 
            /* [retval][out] */ IIviCounterArmStartExternal **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum IviCounterArmTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum IviCounterArmTypeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterArmStartVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterArmStart * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterArmStart * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterArmStart * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_External )( 
            IIviCounterArmStart * This,
            /* [retval][out] */ IIviCounterArmStartExternal **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IIviCounterArmStart * This,
            /* [retval][out] */ enum IviCounterArmTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IIviCounterArmStart * This,
            /* [in] */ enum IviCounterArmTypeEnum Val);
        
        END_INTERFACE
    } IIviCounterArmStartVtbl;

    interface IIviCounterArmStart
    {
        CONST_VTBL struct IIviCounterArmStartVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterArmStart_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterArmStart_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterArmStart_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterArmStart_get_External(This,Val)	\
    ( (This)->lpVtbl -> get_External(This,Val) ) 

#define IIviCounterArmStart_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define IIviCounterArmStart_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterArmStart_INTERFACE_DEFINED__ */


#ifndef __IIviCounterArmStartExternal_INTERFACE_DEFINED__
#define __IIviCounterArmStartExternal_INTERFACE_DEFINED__

/* interface IIviCounterArmStartExternal */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterArmStartExternal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5388-a398-11d4-ba58-000064657374")
    IIviCounterArmStartExternal : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ double Level,
            /* [in] */ enum IviCounterSlopeEnum Slope,
            /* [in] */ double Delay) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ enum IviCounterSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ enum IviCounterSlopeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterArmStartExternalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterArmStartExternal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterArmStartExternal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterArmStartExternal * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterArmStartExternal * This,
            /* [in] */ BSTR Source,
            /* [in] */ double Level,
            /* [in] */ enum IviCounterSlopeEnum Slope,
            /* [in] */ double Delay);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviCounterArmStartExternal * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviCounterArmStartExternal * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviCounterArmStartExternal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviCounterArmStartExternal * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviCounterArmStartExternal * This,
            /* [retval][out] */ enum IviCounterSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviCounterArmStartExternal * This,
            /* [in] */ enum IviCounterSlopeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviCounterArmStartExternal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviCounterArmStartExternal * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterArmStartExternalVtbl;

    interface IIviCounterArmStartExternal
    {
        CONST_VTBL struct IIviCounterArmStartExternalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterArmStartExternal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterArmStartExternal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterArmStartExternal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterArmStartExternal_Configure(This,Source,Level,Slope,Delay)	\
    ( (This)->lpVtbl -> Configure(This,Source,Level,Slope,Delay) ) 

#define IIviCounterArmStartExternal_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IIviCounterArmStartExternal_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define IIviCounterArmStartExternal_get_Level(This,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Val) ) 

#define IIviCounterArmStartExternal_put_Level(This,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Val) ) 

#define IIviCounterArmStartExternal_get_Slope(This,Val)	\
    ( (This)->lpVtbl -> get_Slope(This,Val) ) 

#define IIviCounterArmStartExternal_put_Slope(This,Val)	\
    ( (This)->lpVtbl -> put_Slope(This,Val) ) 

#define IIviCounterArmStartExternal_get_Delay(This,Val)	\
    ( (This)->lpVtbl -> get_Delay(This,Val) ) 

#define IIviCounterArmStartExternal_put_Delay(This,Val)	\
    ( (This)->lpVtbl -> put_Delay(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterArmStartExternal_INTERFACE_DEFINED__ */


#ifndef __IIviCounterArmStop_INTERFACE_DEFINED__
#define __IIviCounterArmStop_INTERFACE_DEFINED__

/* interface IIviCounterArmStop */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterArmStop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5389-a398-11d4-ba58-000064657374")
    IIviCounterArmStop : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_External( 
            /* [retval][out] */ IIviCounterArmStopExternal **Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ enum IviCounterArmTypeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ enum IviCounterArmTypeEnum Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterArmStopVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterArmStop * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterArmStop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterArmStop * This);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_External )( 
            IIviCounterArmStop * This,
            /* [retval][out] */ IIviCounterArmStopExternal **Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IIviCounterArmStop * This,
            /* [retval][out] */ enum IviCounterArmTypeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IIviCounterArmStop * This,
            /* [in] */ enum IviCounterArmTypeEnum Val);
        
        END_INTERFACE
    } IIviCounterArmStopVtbl;

    interface IIviCounterArmStop
    {
        CONST_VTBL struct IIviCounterArmStopVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterArmStop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterArmStop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterArmStop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterArmStop_get_External(This,Val)	\
    ( (This)->lpVtbl -> get_External(This,Val) ) 

#define IIviCounterArmStop_get_Type(This,Val)	\
    ( (This)->lpVtbl -> get_Type(This,Val) ) 

#define IIviCounterArmStop_put_Type(This,Val)	\
    ( (This)->lpVtbl -> put_Type(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterArmStop_INTERFACE_DEFINED__ */


#ifndef __IIviCounterArmStopExternal_INTERFACE_DEFINED__
#define __IIviCounterArmStopExternal_INTERFACE_DEFINED__

/* interface IIviCounterArmStopExternal */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterArmStopExternal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed538a-a398-11d4-ba58-000064657374")
    IIviCounterArmStopExternal : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Source,
            /* [in] */ double Level,
            /* [in] */ enum IviCounterSlopeEnum Slope,
            /* [in] */ double Delay) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ enum IviCounterSlopeEnum *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ enum IviCounterSlopeEnum Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterArmStopExternalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterArmStopExternal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterArmStopExternal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterArmStopExternal * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterArmStopExternal * This,
            /* [in] */ BSTR Source,
            /* [in] */ double Level,
            /* [in] */ enum IviCounterSlopeEnum Slope,
            /* [in] */ double Delay);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviCounterArmStopExternal * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviCounterArmStopExternal * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviCounterArmStopExternal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviCounterArmStopExternal * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviCounterArmStopExternal * This,
            /* [retval][out] */ enum IviCounterSlopeEnum *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviCounterArmStopExternal * This,
            /* [in] */ enum IviCounterSlopeEnum Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviCounterArmStopExternal * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviCounterArmStopExternal * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterArmStopExternalVtbl;

    interface IIviCounterArmStopExternal
    {
        CONST_VTBL struct IIviCounterArmStopExternalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterArmStopExternal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterArmStopExternal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterArmStopExternal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterArmStopExternal_Configure(This,Source,Level,Slope,Delay)	\
    ( (This)->lpVtbl -> Configure(This,Source,Level,Slope,Delay) ) 

#define IIviCounterArmStopExternal_get_Source(This,Val)	\
    ( (This)->lpVtbl -> get_Source(This,Val) ) 

#define IIviCounterArmStopExternal_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define IIviCounterArmStopExternal_get_Level(This,Val)	\
    ( (This)->lpVtbl -> get_Level(This,Val) ) 

#define IIviCounterArmStopExternal_put_Level(This,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Val) ) 

#define IIviCounterArmStopExternal_get_Slope(This,Val)	\
    ( (This)->lpVtbl -> get_Slope(This,Val) ) 

#define IIviCounterArmStopExternal_put_Slope(This,Val)	\
    ( (This)->lpVtbl -> put_Slope(This,Val) ) 

#define IIviCounterArmStopExternal_get_Delay(This,Val)	\
    ( (This)->lpVtbl -> get_Delay(This,Val) ) 

#define IIviCounterArmStopExternal_put_Delay(This,Val)	\
    ( (This)->lpVtbl -> put_Delay(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterArmStopExternal_INTERFACE_DEFINED__ */


#ifndef __IIviCounterMeasurement_INTERFACE_DEFINED__
#define __IIviCounterMeasurement_INTERFACE_DEFINED__

/* interface IIviCounterMeasurement */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterMeasurement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed538c-a398-11d4-ba58-000064657374")
    IIviCounterMeasurement : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [in] */ long MaxTimeMilliseconds,
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Fetch( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Initiate( void) = 0;
        
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE IsMeasurementComplete( 
            /* [out][in] */ enum IviCounterMeasurementStatusEnum *MeasurementStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterMeasurementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterMeasurement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterMeasurement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterMeasurement * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            IIviCounterMeasurement * This,
            /* [in] */ long MaxTimeMilliseconds,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Fetch )( 
            IIviCounterMeasurement * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IIviCounterMeasurement * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Initiate )( 
            IIviCounterMeasurement * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *IsMeasurementComplete )( 
            IIviCounterMeasurement * This,
            /* [out][in] */ enum IviCounterMeasurementStatusEnum *MeasurementStatus);
        
        END_INTERFACE
    } IIviCounterMeasurementVtbl;

    interface IIviCounterMeasurement
    {
        CONST_VTBL struct IIviCounterMeasurementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterMeasurement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterMeasurement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterMeasurement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterMeasurement_Read(This,MaxTimeMilliseconds,Val)	\
    ( (This)->lpVtbl -> Read(This,MaxTimeMilliseconds,Val) ) 

#define IIviCounterMeasurement_Fetch(This,Val)	\
    ( (This)->lpVtbl -> Fetch(This,Val) ) 

#define IIviCounterMeasurement_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IIviCounterMeasurement_Initiate(This)	\
    ( (This)->lpVtbl -> Initiate(This) ) 

#define IIviCounterMeasurement_IsMeasurementComplete(This,MeasurementStatus)	\
    ( (This)->lpVtbl -> IsMeasurementComplete(This,MeasurementStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterMeasurement_INTERFACE_DEFINED__ */


#ifndef __IIviCounterVoltage_INTERFACE_DEFINED__
#define __IIviCounterVoltage_INTERFACE_DEFINED__

/* interface IIviCounterVoltage */
/* [oleautomation][unique][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviCounterVoltage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed538d-a398-11d4-ba58-000064657374")
    IIviCounterVoltage : public IUnknown
    {
    public:
        virtual /* [helpstring][helpcontext] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Channel,
            /* [in] */ enum IviCounterMeasurementFunctionEnum Function,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Channel( 
            /* [retval][out] */ BSTR *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Channel( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Estimate( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Estimate( 
            /* [in] */ double Val) = 0;
        
        virtual /* [helpstring][helpcontext][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ double *Val) = 0;
        
        virtual /* [helpstring][helpcontext][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ double Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviCounterVoltageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviCounterVoltage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviCounterVoltage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviCounterVoltage * This);
        
        /* [helpstring][helpcontext] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviCounterVoltage * This,
            /* [in] */ BSTR Channel,
            /* [in] */ enum IviCounterMeasurementFunctionEnum Function,
            /* [in] */ double Estimate,
            /* [in] */ double Resolution);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channel )( 
            IIviCounterVoltage * This,
            /* [retval][out] */ BSTR *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Channel )( 
            IIviCounterVoltage * This,
            /* [in] */ BSTR Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Estimate )( 
            IIviCounterVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Estimate )( 
            IIviCounterVoltage * This,
            /* [in] */ double Val);
        
        /* [helpstring][helpcontext][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IIviCounterVoltage * This,
            /* [retval][out] */ double *Val);
        
        /* [helpstring][helpcontext][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IIviCounterVoltage * This,
            /* [in] */ double Val);
        
        END_INTERFACE
    } IIviCounterVoltageVtbl;

    interface IIviCounterVoltage
    {
        CONST_VTBL struct IIviCounterVoltageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviCounterVoltage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviCounterVoltage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviCounterVoltage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviCounterVoltage_Configure(This,Channel,Function,Estimate,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Channel,Function,Estimate,Resolution) ) 

#define IIviCounterVoltage_get_Channel(This,Val)	\
    ( (This)->lpVtbl -> get_Channel(This,Val) ) 

#define IIviCounterVoltage_put_Channel(This,Val)	\
    ( (This)->lpVtbl -> put_Channel(This,Val) ) 

#define IIviCounterVoltage_get_Estimate(This,Val)	\
    ( (This)->lpVtbl -> get_Estimate(This,Val) ) 

#define IIviCounterVoltage_put_Estimate(This,Val)	\
    ( (This)->lpVtbl -> put_Estimate(This,Val) ) 

#define IIviCounterVoltage_get_Resolution(This,Val)	\
    ( (This)->lpVtbl -> get_Resolution(This,Val) ) 

#define IIviCounterVoltage_put_Resolution(This,Val)	\
    ( (This)->lpVtbl -> put_Resolution(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviCounterVoltage_INTERFACE_DEFINED__ */

#endif /* __IviCounterLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


