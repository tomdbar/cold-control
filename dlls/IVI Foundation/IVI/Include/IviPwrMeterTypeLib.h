

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:59:00 2016
 */
/* Compiler settings for IviPwrMeterTypeLib.idl:
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


#ifndef __IviPwrMeterTypeLib_h__
#define __IviPwrMeterTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviPwrMeter_FWD_DEFINED__
#define __IIviPwrMeter_FWD_DEFINED__
typedef interface IIviPwrMeter IIviPwrMeter;

#endif 	/* __IIviPwrMeter_FWD_DEFINED__ */


#ifndef __IIviPwrMeterAveraging_FWD_DEFINED__
#define __IIviPwrMeterAveraging_FWD_DEFINED__
typedef interface IIviPwrMeterAveraging IIviPwrMeterAveraging;

#endif 	/* __IIviPwrMeterAveraging_FWD_DEFINED__ */


#ifndef __IIviPwrMeterChannel_FWD_DEFINED__
#define __IIviPwrMeterChannel_FWD_DEFINED__
typedef interface IIviPwrMeterChannel IIviPwrMeterChannel;

#endif 	/* __IIviPwrMeterChannel_FWD_DEFINED__ */


#ifndef __IIviPwrMeterChannels_FWD_DEFINED__
#define __IIviPwrMeterChannels_FWD_DEFINED__
typedef interface IIviPwrMeterChannels IIviPwrMeterChannels;

#endif 	/* __IIviPwrMeterChannels_FWD_DEFINED__ */


#ifndef __IIviPwrMeterDutyCycleCorrection_FWD_DEFINED__
#define __IIviPwrMeterDutyCycleCorrection_FWD_DEFINED__
typedef interface IIviPwrMeterDutyCycleCorrection IIviPwrMeterDutyCycleCorrection;

#endif 	/* __IIviPwrMeterDutyCycleCorrection_FWD_DEFINED__ */


#ifndef __IIviPwrMeterMeasurement_FWD_DEFINED__
#define __IIviPwrMeterMeasurement_FWD_DEFINED__
typedef interface IIviPwrMeterMeasurement IIviPwrMeterMeasurement;

#endif 	/* __IIviPwrMeterMeasurement_FWD_DEFINED__ */


#ifndef __IIviPwrMeterRange_FWD_DEFINED__
#define __IIviPwrMeterRange_FWD_DEFINED__
typedef interface IIviPwrMeterRange IIviPwrMeterRange;

#endif 	/* __IIviPwrMeterRange_FWD_DEFINED__ */


#ifndef __IIviPwrMeterReferenceOscillator_FWD_DEFINED__
#define __IIviPwrMeterReferenceOscillator_FWD_DEFINED__
typedef interface IIviPwrMeterReferenceOscillator IIviPwrMeterReferenceOscillator;

#endif 	/* __IIviPwrMeterReferenceOscillator_FWD_DEFINED__ */


#ifndef __IIviPwrMeterTrigger_FWD_DEFINED__
#define __IIviPwrMeterTrigger_FWD_DEFINED__
typedef interface IIviPwrMeterTrigger IIviPwrMeterTrigger;

#endif 	/* __IIviPwrMeterTrigger_FWD_DEFINED__ */


#ifndef __IIviPwrMeterInternalTrigger_FWD_DEFINED__
#define __IIviPwrMeterInternalTrigger_FWD_DEFINED__
typedef interface IIviPwrMeterInternalTrigger IIviPwrMeterInternalTrigger;

#endif 	/* __IIviPwrMeterInternalTrigger_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_IviPwrMeterTypeLib_0000_0000 */
/* [local] */ 

#pragma once
#pragma once
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_IviPwrMeterTypeLib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IviPwrMeterTypeLib_0000_0000_v0_0_s_ifspec;


#ifndef __IviPwrMeterLib_LIBRARY_DEFINED__
#define __IviPwrMeterLib_LIBRARY_DEFINED__

/* library IviPwrMeterLib */
/* [helpfile][helpstring][version][uuid] */ 











typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviPwrMeterErrorCodesEnum
    {
        S_IVIPWRMETER_WARN_UNDER_RANGE	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2001 ) ),
        S_IVIPWRMETER_WARN_OVER_RANGE	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2002 ) ),
        E_IVIPWRMETER_CHANNEL_NOT_ENABLED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2001 ) ),
        E_IVIPWRMETER_MAX_TIME_EXCEEDED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2020 ) ),
        E_IVIPWRMETER_TRIGGER_NOT_SOFTWARE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x1001 ) )
    } 	IviPwrMeterErrorCodesEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviPwrMeterCalibrationStatusEnum
    {
        IviPwrMeterCalibrationStatusComplete	= 1,
        IviPwrMeterCalibrationStatusInProgress	= 0,
        IviPwrMeterCalibrationStatusUnknown	= -1
    } 	IviPwrMeterCalibrationStatusEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviPwrMeterMeasurementOperatorEnum
    {
        IviPwrMeterMeasurementOperatorNone	= 0,
        IviPwrMeterMeasurementOperatorDifference	= 1,
        IviPwrMeterMeasurementOperatorSum	= 2,
        IviPwrMeterMeasurementOperatorQuotient	= 3
    } 	IviPwrMeterMeasurementOperatorEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviPwrMeterMeasurementStatusEnum
    {
        IviPwrMeterMeasurementStatusComplete	= 1,
        IviPwrMeterMeasurementStatusInProgress	= 0,
        IviPwrMeterMeasurementStatusUnknown	= -1
    } 	IviPwrMeterMeasurementStatusEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviPwrMeterResultRangeEnum
    {
        IviPwrMeterResultRangeInRange	= 0,
        IviPwrMeterResultRangeUnderRange	= -1,
        IviPwrMeterResultRangeOverRange	= 1
    } 	IviPwrMeterResultRangeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviPwrMeterInternalTriggerSlopeEnum
    {
        IviPwrMeterInternalTriggerSlopeNegative	= 0,
        IviPwrMeterInternalTriggerSlopePositive	= 1
    } 	IviPwrMeterInternalTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviPwrMeterTriggerSourceEnum
    {
        IviPwrMeterTriggerSourceImmediate	= 1,
        IviPwrMeterTriggerSourceExternal	= 2,
        IviPwrMeterTriggerSourceInternal	= 3,
        IviPwrMeterTriggerSourceSoftware	= 4,
        IviPwrMeterTriggerSourceTTL0	= 100,
        IviPwrMeterTriggerSourceTTL1	= 101,
        IviPwrMeterTriggerSourceTTL2	= 102,
        IviPwrMeterTriggerSourceTTL3	= 103,
        IviPwrMeterTriggerSourceTTL4	= 104,
        IviPwrMeterTriggerSourceTTL5	= 105,
        IviPwrMeterTriggerSourceTTL6	= 106,
        IviPwrMeterTriggerSourceTTL7	= 107,
        IviPwrMeterTriggerSourceECL0	= 200,
        IviPwrMeterTriggerSourceECL1	= 201,
        IviPwrMeterTriggerSourcePXIStar	= 300,
        IviPwrMeterTriggerSourceRTSI0	= 400,
        IviPwrMeterTriggerSourceRTSI1	= 401,
        IviPwrMeterTriggerSourceRTSI2	= 402,
        IviPwrMeterTriggerSourceRTSI3	= 403,
        IviPwrMeterTriggerSourceRTSI4	= 404,
        IviPwrMeterTriggerSourceRTSI5	= 405,
        IviPwrMeterTriggerSourceRTSI6	= 406
    } 	IviPwrMeterTriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviPwrMeterUnitsEnum
    {
        IviPwrMeterUnitsdBm	= 1,
        IviPwrMeterUnitsdBmV	= 2,
        IviPwrMeterUnitsdBuV	= 3,
        IviPwrMeterUnitsWatts	= 4
    } 	IviPwrMeterUnitsEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviPwrMeterZeroStatusEnum
    {
        IviPwrMeterZeroStatusComplete	= 1,
        IviPwrMeterZeroStatusInProgress	= 0,
        IviPwrMeterZeroStatusUnknown	= -1
    } 	IviPwrMeterZeroStatusEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviPwrMeterTimeOutEnum
    {
        IviPwrMeterTimeOutInfinite	= 0xffffffffUL,
        IviPwrMeterTimeOutImmediate	= 0
    } 	IviPwrMeterTimeOutEnum;


EXTERN_C const IID LIBID_IviPwrMeterLib;

#ifndef __IIviPwrMeter_INTERFACE_DEFINED__
#define __IIviPwrMeter_INTERFACE_DEFINED__

/* interface IIviPwrMeter */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviPwrMeter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5314-a398-11d4-ba58-000064657374")
    IIviPwrMeter : public IIviDriver
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Channels( 
            /* [retval][out] */ IIviPwrMeterChannels **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Measurement( 
            /* [retval][out] */ IIviPwrMeterMeasurement **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceOscillator( 
            /* [retval][out] */ IIviPwrMeterReferenceOscillator **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ IIviPwrMeterTrigger **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviPwrMeterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviPwrMeter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviPwrMeter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviPwrMeter * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviPwrMeter * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviPwrMeter * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviPwrMeter * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviPwrMeter * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviPwrMeter * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviPwrMeter * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channels )( 
            IIviPwrMeter * This,
            /* [retval][out] */ IIviPwrMeterChannels **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Measurement )( 
            IIviPwrMeter * This,
            /* [retval][out] */ IIviPwrMeterMeasurement **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceOscillator )( 
            IIviPwrMeter * This,
            /* [retval][out] */ IIviPwrMeterReferenceOscillator **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            IIviPwrMeter * This,
            /* [retval][out] */ IIviPwrMeterTrigger **pVal);
        
        END_INTERFACE
    } IIviPwrMeterVtbl;

    interface IIviPwrMeter
    {
        CONST_VTBL struct IIviPwrMeterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviPwrMeter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviPwrMeter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviPwrMeter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviPwrMeter_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviPwrMeter_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviPwrMeter_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviPwrMeter_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviPwrMeter_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviPwrMeter_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviPwrMeter_get_Channels(This,pVal)	\
    ( (This)->lpVtbl -> get_Channels(This,pVal) ) 

#define IIviPwrMeter_get_Measurement(This,pVal)	\
    ( (This)->lpVtbl -> get_Measurement(This,pVal) ) 

#define IIviPwrMeter_get_ReferenceOscillator(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferenceOscillator(This,pVal) ) 

#define IIviPwrMeter_get_Trigger(This,pVal)	\
    ( (This)->lpVtbl -> get_Trigger(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviPwrMeter_INTERFACE_DEFINED__ */


#ifndef __IIviPwrMeterAveraging_INTERFACE_DEFINED__
#define __IIviPwrMeterAveraging_INTERFACE_DEFINED__

/* interface IIviPwrMeterAveraging */
/* [helpcontext][helpstring][oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IIviPwrMeterAveraging;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5315-a398-11d4-ba58-000064657374")
    IIviPwrMeterAveraging : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AutoEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AutoEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Count( 
            /* [in] */ LONG Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviPwrMeterAveragingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviPwrMeterAveraging * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviPwrMeterAveraging * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviPwrMeterAveraging * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoEnabled )( 
            IIviPwrMeterAveraging * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoEnabled )( 
            IIviPwrMeterAveraging * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Count )( 
            IIviPwrMeterAveraging * This,
            /* [in] */ LONG Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviPwrMeterAveraging * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IIviPwrMeterAveragingVtbl;

    interface IIviPwrMeterAveraging
    {
        CONST_VTBL struct IIviPwrMeterAveragingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviPwrMeterAveraging_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviPwrMeterAveraging_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviPwrMeterAveraging_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviPwrMeterAveraging_put_AutoEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_AutoEnabled(This,Val) ) 

#define IIviPwrMeterAveraging_get_AutoEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_AutoEnabled(This,pVal) ) 

#define IIviPwrMeterAveraging_put_Count(This,Val)	\
    ( (This)->lpVtbl -> put_Count(This,Val) ) 

#define IIviPwrMeterAveraging_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviPwrMeterAveraging_INTERFACE_DEFINED__ */


#ifndef __IIviPwrMeterChannel_INTERFACE_DEFINED__
#define __IIviPwrMeterChannel_INTERFACE_DEFINED__

/* interface IIviPwrMeterChannel */
/* [helpcontext][helpstring][oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IIviPwrMeterChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5316-a398-11d4-ba58-000064657374")
    IIviPwrMeterChannel : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Averaging( 
            /* [retval][out] */ IIviPwrMeterAveraging **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Calibrate( void) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CorrectionFrequency( 
            /* [in] */ DOUBLE Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CorrectionFrequency( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DutyCycle( 
            /* [retval][out] */ IIviPwrMeterDutyCycleCorrection **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ DOUBLE Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Range( 
            /* [retval][out] */ IIviPwrMeterRange **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Zero( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviPwrMeterChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviPwrMeterChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviPwrMeterChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviPwrMeterChannel * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Averaging )( 
            IIviPwrMeterChannel * This,
            /* [retval][out] */ IIviPwrMeterAveraging **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Calibrate )( 
            IIviPwrMeterChannel * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CorrectionFrequency )( 
            IIviPwrMeterChannel * This,
            /* [in] */ DOUBLE Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CorrectionFrequency )( 
            IIviPwrMeterChannel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DutyCycle )( 
            IIviPwrMeterChannel * This,
            /* [retval][out] */ IIviPwrMeterDutyCycleCorrection **pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviPwrMeterChannel * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviPwrMeterChannel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            IIviPwrMeterChannel * This,
            /* [in] */ DOUBLE Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IIviPwrMeterChannel * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Range )( 
            IIviPwrMeterChannel * This,
            /* [retval][out] */ IIviPwrMeterRange **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Zero )( 
            IIviPwrMeterChannel * This);
        
        END_INTERFACE
    } IIviPwrMeterChannelVtbl;

    interface IIviPwrMeterChannel
    {
        CONST_VTBL struct IIviPwrMeterChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviPwrMeterChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviPwrMeterChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviPwrMeterChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviPwrMeterChannel_get_Averaging(This,pVal)	\
    ( (This)->lpVtbl -> get_Averaging(This,pVal) ) 

#define IIviPwrMeterChannel_Calibrate(This)	\
    ( (This)->lpVtbl -> Calibrate(This) ) 

#define IIviPwrMeterChannel_put_CorrectionFrequency(This,Val)	\
    ( (This)->lpVtbl -> put_CorrectionFrequency(This,Val) ) 

#define IIviPwrMeterChannel_get_CorrectionFrequency(This,pVal)	\
    ( (This)->lpVtbl -> get_CorrectionFrequency(This,pVal) ) 

#define IIviPwrMeterChannel_get_DutyCycle(This,pVal)	\
    ( (This)->lpVtbl -> get_DutyCycle(This,pVal) ) 

#define IIviPwrMeterChannel_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviPwrMeterChannel_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviPwrMeterChannel_put_Offset(This,Val)	\
    ( (This)->lpVtbl -> put_Offset(This,Val) ) 

#define IIviPwrMeterChannel_get_Offset(This,pVal)	\
    ( (This)->lpVtbl -> get_Offset(This,pVal) ) 

#define IIviPwrMeterChannel_get_Range(This,pVal)	\
    ( (This)->lpVtbl -> get_Range(This,pVal) ) 

#define IIviPwrMeterChannel_Zero(This)	\
    ( (This)->lpVtbl -> Zero(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviPwrMeterChannel_INTERFACE_DEFINED__ */


#ifndef __IIviPwrMeterChannels_INTERFACE_DEFINED__
#define __IIviPwrMeterChannels_INTERFACE_DEFINED__

/* interface IIviPwrMeterChannels */
/* [helpcontext][helpstring][oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IIviPwrMeterChannels;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5317-a398-11d4-ba58-000064657374")
    IIviPwrMeterChannels : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IsCalibrationComplete( 
            /* [retval][out] */ IviPwrMeterCalibrationStatusEnum *Status) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IsZeroComplete( 
            /* [retval][out] */ IviPwrMeterZeroStatusEnum *Status) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IIviPwrMeterChannel **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Units( 
            /* [in] */ IviPwrMeterUnitsEnum Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Units( 
            /* [retval][out] */ IviPwrMeterUnitsEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Zero( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviPwrMeterChannelsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviPwrMeterChannels * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviPwrMeterChannels * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviPwrMeterChannels * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviPwrMeterChannels * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsCalibrationComplete )( 
            IIviPwrMeterChannels * This,
            /* [retval][out] */ IviPwrMeterCalibrationStatusEnum *Status);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsZeroComplete )( 
            IIviPwrMeterChannels * This,
            /* [retval][out] */ IviPwrMeterZeroStatusEnum *Status);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviPwrMeterChannels * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IIviPwrMeterChannel **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviPwrMeterChannels * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Units )( 
            IIviPwrMeterChannels * This,
            /* [in] */ IviPwrMeterUnitsEnum Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Units )( 
            IIviPwrMeterChannels * This,
            /* [retval][out] */ IviPwrMeterUnitsEnum *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Zero )( 
            IIviPwrMeterChannels * This);
        
        END_INTERFACE
    } IIviPwrMeterChannelsVtbl;

    interface IIviPwrMeterChannels
    {
        CONST_VTBL struct IIviPwrMeterChannelsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviPwrMeterChannels_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviPwrMeterChannels_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviPwrMeterChannels_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviPwrMeterChannels_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviPwrMeterChannels_IsCalibrationComplete(This,Status)	\
    ( (This)->lpVtbl -> IsCalibrationComplete(This,Status) ) 

#define IIviPwrMeterChannels_IsZeroComplete(This,Status)	\
    ( (This)->lpVtbl -> IsZeroComplete(This,Status) ) 

#define IIviPwrMeterChannels_get_Item(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,ChannelName,pVal) ) 

#define IIviPwrMeterChannels_get_Name(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,Index,pVal) ) 

#define IIviPwrMeterChannels_put_Units(This,Val)	\
    ( (This)->lpVtbl -> put_Units(This,Val) ) 

#define IIviPwrMeterChannels_get_Units(This,pVal)	\
    ( (This)->lpVtbl -> get_Units(This,pVal) ) 

#define IIviPwrMeterChannels_Zero(This)	\
    ( (This)->lpVtbl -> Zero(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviPwrMeterChannels_INTERFACE_DEFINED__ */


#ifndef __IIviPwrMeterDutyCycleCorrection_INTERFACE_DEFINED__
#define __IIviPwrMeterDutyCycleCorrection_INTERFACE_DEFINED__

/* interface IIviPwrMeterDutyCycleCorrection */
/* [helpcontext][helpstring][oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IIviPwrMeterDutyCycleCorrection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5318-a398-11d4-ba58-000064657374")
    IIviPwrMeterDutyCycleCorrection : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ DOUBLE Value) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ DOUBLE Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviPwrMeterDutyCycleCorrectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviPwrMeterDutyCycleCorrection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviPwrMeterDutyCycleCorrection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviPwrMeterDutyCycleCorrection * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviPwrMeterDutyCycleCorrection * This,
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ DOUBLE Value);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviPwrMeterDutyCycleCorrection * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviPwrMeterDutyCycleCorrection * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IIviPwrMeterDutyCycleCorrection * This,
            /* [in] */ DOUBLE Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IIviPwrMeterDutyCycleCorrection * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviPwrMeterDutyCycleCorrectionVtbl;

    interface IIviPwrMeterDutyCycleCorrection
    {
        CONST_VTBL struct IIviPwrMeterDutyCycleCorrectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviPwrMeterDutyCycleCorrection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviPwrMeterDutyCycleCorrection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviPwrMeterDutyCycleCorrection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviPwrMeterDutyCycleCorrection_Configure(This,Enabled,Value)	\
    ( (This)->lpVtbl -> Configure(This,Enabled,Value) ) 

#define IIviPwrMeterDutyCycleCorrection_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviPwrMeterDutyCycleCorrection_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviPwrMeterDutyCycleCorrection_put_Value(This,Val)	\
    ( (This)->lpVtbl -> put_Value(This,Val) ) 

#define IIviPwrMeterDutyCycleCorrection_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviPwrMeterDutyCycleCorrection_INTERFACE_DEFINED__ */


#ifndef __IIviPwrMeterMeasurement_INTERFACE_DEFINED__
#define __IIviPwrMeterMeasurement_INTERFACE_DEFINED__

/* interface IIviPwrMeterMeasurement */
/* [helpcontext][helpstring][oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IIviPwrMeterMeasurement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5319-a398-11d4-ba58-000064657374")
    IIviPwrMeterMeasurement : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviPwrMeterMeasurementOperatorEnum Operator,
            /* [in] */ BSTR Operand1,
            /* [in] */ BSTR Operand2) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Fetch( 
            /* [retval][out] */ DOUBLE *Result) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FetchChannel( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *Result) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Initiate( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IsMeasurementComplete( 
            /* [retval][out] */ IviPwrMeterMeasurementStatusEnum *Status) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE QueryResultRangeType( 
            /* [in] */ DOUBLE MeasurementValue,
            /* [retval][out] */ IviPwrMeterResultRangeEnum *RangeType) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ DOUBLE *Result) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ReadChannel( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ DOUBLE *Result) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviPwrMeterMeasurementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviPwrMeterMeasurement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviPwrMeterMeasurement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviPwrMeterMeasurement * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IIviPwrMeterMeasurement * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviPwrMeterMeasurement * This,
            /* [in] */ IviPwrMeterMeasurementOperatorEnum Operator,
            /* [in] */ BSTR Operand1,
            /* [in] */ BSTR Operand2);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Fetch )( 
            IIviPwrMeterMeasurement * This,
            /* [retval][out] */ DOUBLE *Result);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *FetchChannel )( 
            IIviPwrMeterMeasurement * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *Result);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initiate )( 
            IIviPwrMeterMeasurement * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsMeasurementComplete )( 
            IIviPwrMeterMeasurement * This,
            /* [retval][out] */ IviPwrMeterMeasurementStatusEnum *Status);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryResultRangeType )( 
            IIviPwrMeterMeasurement * This,
            /* [in] */ DOUBLE MeasurementValue,
            /* [retval][out] */ IviPwrMeterResultRangeEnum *RangeType);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            IIviPwrMeterMeasurement * This,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ DOUBLE *Result);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadChannel )( 
            IIviPwrMeterMeasurement * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ DOUBLE *Result);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviPwrMeterMeasurement * This);
        
        END_INTERFACE
    } IIviPwrMeterMeasurementVtbl;

    interface IIviPwrMeterMeasurement
    {
        CONST_VTBL struct IIviPwrMeterMeasurementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviPwrMeterMeasurement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviPwrMeterMeasurement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviPwrMeterMeasurement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviPwrMeterMeasurement_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IIviPwrMeterMeasurement_Configure(This,Operator,Operand1,Operand2)	\
    ( (This)->lpVtbl -> Configure(This,Operator,Operand1,Operand2) ) 

#define IIviPwrMeterMeasurement_Fetch(This,Result)	\
    ( (This)->lpVtbl -> Fetch(This,Result) ) 

#define IIviPwrMeterMeasurement_FetchChannel(This,ChannelName,Result)	\
    ( (This)->lpVtbl -> FetchChannel(This,ChannelName,Result) ) 

#define IIviPwrMeterMeasurement_Initiate(This)	\
    ( (This)->lpVtbl -> Initiate(This) ) 

#define IIviPwrMeterMeasurement_IsMeasurementComplete(This,Status)	\
    ( (This)->lpVtbl -> IsMeasurementComplete(This,Status) ) 

#define IIviPwrMeterMeasurement_QueryResultRangeType(This,MeasurementValue,RangeType)	\
    ( (This)->lpVtbl -> QueryResultRangeType(This,MeasurementValue,RangeType) ) 

#define IIviPwrMeterMeasurement_Read(This,MaxTimeMilliseconds,Result)	\
    ( (This)->lpVtbl -> Read(This,MaxTimeMilliseconds,Result) ) 

#define IIviPwrMeterMeasurement_ReadChannel(This,ChannelName,MaxTimeMilliseconds,Result)	\
    ( (This)->lpVtbl -> ReadChannel(This,ChannelName,MaxTimeMilliseconds,Result) ) 

#define IIviPwrMeterMeasurement_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviPwrMeterMeasurement_INTERFACE_DEFINED__ */


#ifndef __IIviPwrMeterRange_INTERFACE_DEFINED__
#define __IIviPwrMeterRange_INTERFACE_DEFINED__

/* interface IIviPwrMeterRange */
/* [helpcontext][helpstring][oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IIviPwrMeterRange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed531a-a398-11d4-ba58-000064657374")
    IIviPwrMeterRange : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AutoEnabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AutoEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE Lower,
            /* [in] */ DOUBLE Upper) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Lower( 
            /* [in] */ DOUBLE Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Lower( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Upper( 
            /* [in] */ DOUBLE Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Upper( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviPwrMeterRangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviPwrMeterRange * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviPwrMeterRange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviPwrMeterRange * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoEnabled )( 
            IIviPwrMeterRange * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoEnabled )( 
            IIviPwrMeterRange * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviPwrMeterRange * This,
            /* [in] */ DOUBLE Lower,
            /* [in] */ DOUBLE Upper);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Lower )( 
            IIviPwrMeterRange * This,
            /* [in] */ DOUBLE Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Lower )( 
            IIviPwrMeterRange * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Upper )( 
            IIviPwrMeterRange * This,
            /* [in] */ DOUBLE Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Upper )( 
            IIviPwrMeterRange * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviPwrMeterRangeVtbl;

    interface IIviPwrMeterRange
    {
        CONST_VTBL struct IIviPwrMeterRangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviPwrMeterRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviPwrMeterRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviPwrMeterRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviPwrMeterRange_put_AutoEnabled(This,Val)	\
    ( (This)->lpVtbl -> put_AutoEnabled(This,Val) ) 

#define IIviPwrMeterRange_get_AutoEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_AutoEnabled(This,pVal) ) 

#define IIviPwrMeterRange_Configure(This,Lower,Upper)	\
    ( (This)->lpVtbl -> Configure(This,Lower,Upper) ) 

#define IIviPwrMeterRange_put_Lower(This,Val)	\
    ( (This)->lpVtbl -> put_Lower(This,Val) ) 

#define IIviPwrMeterRange_get_Lower(This,pVal)	\
    ( (This)->lpVtbl -> get_Lower(This,pVal) ) 

#define IIviPwrMeterRange_put_Upper(This,Val)	\
    ( (This)->lpVtbl -> put_Upper(This,Val) ) 

#define IIviPwrMeterRange_get_Upper(This,pVal)	\
    ( (This)->lpVtbl -> get_Upper(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviPwrMeterRange_INTERFACE_DEFINED__ */


#ifndef __IIviPwrMeterReferenceOscillator_INTERFACE_DEFINED__
#define __IIviPwrMeterReferenceOscillator_INTERFACE_DEFINED__

/* interface IIviPwrMeterReferenceOscillator */
/* [helpcontext][helpstring][oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IIviPwrMeterReferenceOscillator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed531b-a398-11d4-ba58-000064657374")
    IIviPwrMeterReferenceOscillator : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE Frequency,
            /* [in] */ DOUBLE Level) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ DOUBLE Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ DOUBLE Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviPwrMeterReferenceOscillatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviPwrMeterReferenceOscillator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviPwrMeterReferenceOscillator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviPwrMeterReferenceOscillator * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviPwrMeterReferenceOscillator * This,
            /* [in] */ DOUBLE Frequency,
            /* [in] */ DOUBLE Level);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviPwrMeterReferenceOscillator * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviPwrMeterReferenceOscillator * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IIviPwrMeterReferenceOscillator * This,
            /* [in] */ DOUBLE Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviPwrMeterReferenceOscillator * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviPwrMeterReferenceOscillator * This,
            /* [in] */ DOUBLE Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviPwrMeterReferenceOscillator * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviPwrMeterReferenceOscillatorVtbl;

    interface IIviPwrMeterReferenceOscillator
    {
        CONST_VTBL struct IIviPwrMeterReferenceOscillatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviPwrMeterReferenceOscillator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviPwrMeterReferenceOscillator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviPwrMeterReferenceOscillator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviPwrMeterReferenceOscillator_Configure(This,Frequency,Level)	\
    ( (This)->lpVtbl -> Configure(This,Frequency,Level) ) 

#define IIviPwrMeterReferenceOscillator_put_Enabled(This,Val)	\
    ( (This)->lpVtbl -> put_Enabled(This,Val) ) 

#define IIviPwrMeterReferenceOscillator_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviPwrMeterReferenceOscillator_put_Frequency(This,Val)	\
    ( (This)->lpVtbl -> put_Frequency(This,Val) ) 

#define IIviPwrMeterReferenceOscillator_get_Frequency(This,pVal)	\
    ( (This)->lpVtbl -> get_Frequency(This,pVal) ) 

#define IIviPwrMeterReferenceOscillator_put_Level(This,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Val) ) 

#define IIviPwrMeterReferenceOscillator_get_Level(This,pVal)	\
    ( (This)->lpVtbl -> get_Level(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviPwrMeterReferenceOscillator_INTERFACE_DEFINED__ */


#ifndef __IIviPwrMeterTrigger_INTERFACE_DEFINED__
#define __IIviPwrMeterTrigger_INTERFACE_DEFINED__

/* interface IIviPwrMeterTrigger */
/* [helpcontext][helpstring][oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IIviPwrMeterTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed531c-a398-11d4-ba58-000064657374")
    IIviPwrMeterTrigger : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ IviPwrMeterTriggerSourceEnum Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ IviPwrMeterTriggerSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Internal( 
            /* [retval][out] */ IIviPwrMeterInternalTrigger **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviPwrMeterTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviPwrMeterTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviPwrMeterTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviPwrMeterTrigger * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviPwrMeterTrigger * This,
            /* [in] */ IviPwrMeterTriggerSourceEnum Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviPwrMeterTrigger * This,
            /* [retval][out] */ IviPwrMeterTriggerSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Internal )( 
            IIviPwrMeterTrigger * This,
            /* [retval][out] */ IIviPwrMeterInternalTrigger **pVal);
        
        END_INTERFACE
    } IIviPwrMeterTriggerVtbl;

    interface IIviPwrMeterTrigger
    {
        CONST_VTBL struct IIviPwrMeterTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviPwrMeterTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviPwrMeterTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviPwrMeterTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviPwrMeterTrigger_put_Source(This,Val)	\
    ( (This)->lpVtbl -> put_Source(This,Val) ) 

#define IIviPwrMeterTrigger_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#define IIviPwrMeterTrigger_get_Internal(This,pVal)	\
    ( (This)->lpVtbl -> get_Internal(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviPwrMeterTrigger_INTERFACE_DEFINED__ */


#ifndef __IIviPwrMeterInternalTrigger_INTERFACE_DEFINED__
#define __IIviPwrMeterInternalTrigger_INTERFACE_DEFINED__

/* interface IIviPwrMeterInternalTrigger */
/* [helpcontext][helpstring][oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IIviPwrMeterInternalTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed531d-a398-11d4-ba58-000064657374")
    IIviPwrMeterInternalTrigger : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR EventSource,
            /* [in] */ IviPwrMeterInternalTriggerSlopeEnum Slope) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EventSource( 
            /* [in] */ BSTR Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EventSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ DOUBLE Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ IviPwrMeterInternalTriggerSlopeEnum Val) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ IviPwrMeterInternalTriggerSlopeEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviPwrMeterInternalTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviPwrMeterInternalTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviPwrMeterInternalTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviPwrMeterInternalTrigger * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviPwrMeterInternalTrigger * This,
            /* [in] */ BSTR EventSource,
            /* [in] */ IviPwrMeterInternalTriggerSlopeEnum Slope);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EventSource )( 
            IIviPwrMeterInternalTrigger * This,
            /* [in] */ BSTR Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EventSource )( 
            IIviPwrMeterInternalTrigger * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IIviPwrMeterInternalTrigger * This,
            /* [in] */ DOUBLE Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IIviPwrMeterInternalTrigger * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviPwrMeterInternalTrigger * This,
            /* [in] */ IviPwrMeterInternalTriggerSlopeEnum Val);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviPwrMeterInternalTrigger * This,
            /* [retval][out] */ IviPwrMeterInternalTriggerSlopeEnum *pVal);
        
        END_INTERFACE
    } IIviPwrMeterInternalTriggerVtbl;

    interface IIviPwrMeterInternalTrigger
    {
        CONST_VTBL struct IIviPwrMeterInternalTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviPwrMeterInternalTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviPwrMeterInternalTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviPwrMeterInternalTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviPwrMeterInternalTrigger_Configure(This,EventSource,Slope)	\
    ( (This)->lpVtbl -> Configure(This,EventSource,Slope) ) 

#define IIviPwrMeterInternalTrigger_put_EventSource(This,Val)	\
    ( (This)->lpVtbl -> put_EventSource(This,Val) ) 

#define IIviPwrMeterInternalTrigger_get_EventSource(This,pVal)	\
    ( (This)->lpVtbl -> get_EventSource(This,pVal) ) 

#define IIviPwrMeterInternalTrigger_put_Level(This,Val)	\
    ( (This)->lpVtbl -> put_Level(This,Val) ) 

#define IIviPwrMeterInternalTrigger_get_Level(This,pVal)	\
    ( (This)->lpVtbl -> get_Level(This,pVal) ) 

#define IIviPwrMeterInternalTrigger_put_Slope(This,Val)	\
    ( (This)->lpVtbl -> put_Slope(This,Val) ) 

#define IIviPwrMeterInternalTrigger_get_Slope(This,pVal)	\
    ( (This)->lpVtbl -> get_Slope(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviPwrMeterInternalTrigger_INTERFACE_DEFINED__ */

#endif /* __IviPwrMeterLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


