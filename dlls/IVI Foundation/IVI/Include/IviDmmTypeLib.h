

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:58:17 2016
 */
/* Compiler settings for IviDmmTypeLib.idl:
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


#ifndef __IviDmmTypeLib_h__
#define __IviDmmTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviDmm_FWD_DEFINED__
#define __IIviDmm_FWD_DEFINED__
typedef interface IIviDmm IIviDmm;

#endif 	/* __IIviDmm_FWD_DEFINED__ */


#ifndef __IIviDmmMeasurement_FWD_DEFINED__
#define __IIviDmmMeasurement_FWD_DEFINED__
typedef interface IIviDmmMeasurement IIviDmmMeasurement;

#endif 	/* __IIviDmmMeasurement_FWD_DEFINED__ */


#ifndef __IIviDmmTrigger_FWD_DEFINED__
#define __IIviDmmTrigger_FWD_DEFINED__
typedef interface IIviDmmTrigger IIviDmmTrigger;

#endif 	/* __IIviDmmTrigger_FWD_DEFINED__ */


#ifndef __IIviDmmMultiPoint_FWD_DEFINED__
#define __IIviDmmMultiPoint_FWD_DEFINED__
typedef interface IIviDmmMultiPoint IIviDmmMultiPoint;

#endif 	/* __IIviDmmMultiPoint_FWD_DEFINED__ */


#ifndef __IIviDmmAC_FWD_DEFINED__
#define __IIviDmmAC_FWD_DEFINED__
typedef interface IIviDmmAC IIviDmmAC;

#endif 	/* __IIviDmmAC_FWD_DEFINED__ */


#ifndef __IIviDmmAdvanced_FWD_DEFINED__
#define __IIviDmmAdvanced_FWD_DEFINED__
typedef interface IIviDmmAdvanced IIviDmmAdvanced;

#endif 	/* __IIviDmmAdvanced_FWD_DEFINED__ */


#ifndef __IIviDmmFrequency_FWD_DEFINED__
#define __IIviDmmFrequency_FWD_DEFINED__
typedef interface IIviDmmFrequency IIviDmmFrequency;

#endif 	/* __IIviDmmFrequency_FWD_DEFINED__ */


#ifndef __IIviDmmTemperature_FWD_DEFINED__
#define __IIviDmmTemperature_FWD_DEFINED__
typedef interface IIviDmmTemperature IIviDmmTemperature;

#endif 	/* __IIviDmmTemperature_FWD_DEFINED__ */


#ifndef __IIviDmmRTD_FWD_DEFINED__
#define __IIviDmmRTD_FWD_DEFINED__
typedef interface IIviDmmRTD IIviDmmRTD;

#endif 	/* __IIviDmmRTD_FWD_DEFINED__ */


#ifndef __IIviDmmThermocouple_FWD_DEFINED__
#define __IIviDmmThermocouple_FWD_DEFINED__
typedef interface IIviDmmThermocouple IIviDmmThermocouple;

#endif 	/* __IIviDmmThermocouple_FWD_DEFINED__ */


#ifndef __IIviDmmThermistor_FWD_DEFINED__
#define __IIviDmmThermistor_FWD_DEFINED__
typedef interface IIviDmmThermistor IIviDmmThermistor;

#endif 	/* __IIviDmmThermistor_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_IviDmmTypeLib_0000_0000 */
/* [local] */ 

#pragma once
#pragma once
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_IviDmmTypeLib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IviDmmTypeLib_0000_0000_v0_0_s_ifspec;


#ifndef __IviDmmLib_LIBRARY_DEFINED__
#define __IviDmmLib_LIBRARY_DEFINED__

/* library IviDmmLib */
/* [helpfile][helpstring][version][uuid] */ 












typedef /* [helpcontext][helpstring] */ 
enum IviDmmErrorCodesEnum
    {
        E_IVIDMM_TRIGGER_NOT_SOFTWARE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x1001 ) ),
        E_IVIDMM_MAX_TIME_EXCEEDED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2003 ) ),
        S_IVIDMM_OVER_RANGE	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2001 ) )
    } 	IviDmmErrorCodesEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmApertureTimeUnitsEnum
    {
        IviDmmApertureSeconds	= 0,
        IviDmmAperturePowerLineCycles	= 1
    } 	IviDmmApertureTimeUnitsEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmAutoRangeEnum
    {
        IviDmmAutoRangeOn	= -1,
        IviDmmAutoRangeOff	= -2,
        IviDmmAutoRangeOnce	= -3
    } 	IviDmmAutoRangeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmAutoZeroEnum
    {
        IviDmmAutoZeroOff	= 0,
        IviDmmAutoZeroOn	= 1,
        IviDmmAutoZeroOnce	= 2
    } 	IviDmmAutoZeroEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmFrequencyVoltageRangeEnum
    {
        IviDmmFrequencyVoltageRangeAutoRangeOn	= -1,
        IviDmmFrequencyVoltageRangeAutoRangeOff	= -2
    } 	IviDmmFrequencyVoltageRangeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmFunctionEnum
    {
        IviDmmFunctionDCVolts	= 1,
        IviDmmFunctionACVolts	= 2,
        IviDmmFunctionDCCurrent	= 3,
        IviDmmFunctionACCurrent	= 4,
        IviDmmFunction2WireRes	= 5,
        IviDmmFunction4WireRes	= 101,
        IviDmmFunctionACPlusDCVolts	= 106,
        IviDmmFunctionACPlusDCCurrent	= 107,
        IviDmmFunctionFreq	= 104,
        IviDmmFunctionPeriod	= 105,
        IviDmmFunctionTemperature	= 108
    } 	IviDmmFunctionEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmMaxTimeEnum
    {
        IviDmmMaxTimeInfinite	= 0xffffffffUL,
        IviDmmMaxTimeImmediate	= 0
    } 	IviDmmMaxTimeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmMeasCompleteDestEnum
    {
        IviDmmMeasCompleteDestNone	= -1,
        IviDmmMeasCompleteDestExternal	= 2,
        IviDmmMeasCompleteDestTTL0	= 111,
        IviDmmMeasCompleteDestTTL1	= 112,
        IviDmmMeasCompleteDestTTL2	= 113,
        IviDmmMeasCompleteDestTTL3	= 114,
        IviDmmMeasCompleteDestTTL4	= 115,
        IviDmmMeasCompleteDestTTL5	= 116,
        IviDmmMeasCompleteDestTTL6	= 117,
        IviDmmMeasCompleteDestTTL7	= 118,
        IviDmmMeasCompleteDestECL0	= 119,
        IviDmmMeasCompleteDestECL1	= 120,
        IviDmmMeasCompleteDestPXIStar	= 131,
        IviDmmMeasCompleteDestRTSI0	= 140,
        IviDmmMeasCompleteDestRTSI1	= 141,
        IviDmmMeasCompleteDestRTSI2	= 142,
        IviDmmMeasCompleteDestRTSI3	= 143,
        IviDmmMeasCompleteDestRTSI4	= 144,
        IviDmmMeasCompleteDestRTSI5	= 145,
        IviDmmMeasCompleteDestRTSI6	= 146
    } 	IviDmmMeasCompleteDestEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmRefJunctionTypeEnum
    {
        IviDmmRefJunctionTypeInternal	= 1,
        IviDmmRefJunctionTypeFixed	= 2
    } 	IviDmmRefJunctionTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmSampleTriggerEnum
    {
        IviDmmSampleTriggerImmediate	= 1,
        IviDmmSampleTriggerExternal	= 2,
        IviDmmSampleTriggerSwTrigFunc	= 3,
        IviDmmSampleTriggerTTL0	= 111,
        IviDmmSampleTriggerTTL1	= 112,
        IviDmmSampleTriggerTTL2	= 113,
        IviDmmSampleTriggerTTL3	= 114,
        IviDmmSampleTriggerTTL4	= 115,
        IviDmmSampleTriggerTTL5	= 116,
        IviDmmSampleTriggerTTL6	= 117,
        IviDmmSampleTriggerTTL7	= 118,
        IviDmmSampleTriggerECL0	= 119,
        IviDmmSampleTriggerECL1	= 120,
        IviDmmSampleTriggerPXIStar	= 131,
        IviDmmSampleTriggerRTSI0	= 140,
        IviDmmSampleTriggerRTSI1	= 141,
        IviDmmSampleTriggerRTSI2	= 142,
        IviDmmSampleTriggerRTSI3	= 143,
        IviDmmSampleTriggerRTSI4	= 144,
        IviDmmSampleTriggerRTSI5	= 145,
        IviDmmSampleTriggerRTSI6	= 146,
        IviDmmSampleTriggerInterval	= 10
    } 	IviDmmSampleTriggerEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmThermocoupleTypeEnum
    {
        IviDmmThermocoupleTypeB	= 1,
        IviDmmThermocoupleTypeC	= 2,
        IviDmmThermocoupleTypeD	= 3,
        IviDmmThermocoupleTypeE	= 4,
        IviDmmThermocoupleTypeG	= 5,
        IviDmmThermocoupleTypeJ	= 6,
        IviDmmThermocoupleTypeK	= 7,
        IviDmmThermocoupleTypeN	= 8,
        IviDmmThermocoupleTypeR	= 9,
        IviDmmThermocoupleTypeS	= 10,
        IviDmmThermocoupleTypeT	= 11,
        IviDmmThermocoupleTypeU	= 12,
        IviDmmThermocoupleTypeV	= 13
    } 	IviDmmThermocoupleTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmTransducerTypeEnum
    {
        IviDmmTransducerTypeThermocouple	= 1,
        IviDmmTransducerTypeThermistor	= 2,
        IviDmmTransducerType2WireRtd	= 3,
        IviDmmTransducerType4WireRtd	= 4
    } 	IviDmmTransducerTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmTriggerDelayEnum
    {
        IviDmmTriggerDelayAutoDelayOn	= -1,
        IviDmmTriggerDelayAutoDelayOff	= -2
    } 	IviDmmTriggerDelayEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmTriggerSlopeEnum
    {
        IviDmmTriggerSlopePositive	= 0,
        IviDmmTriggerSlopeNegative	= 1
    } 	IviDmmTriggerSlopeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDmmTriggerSourceEnum
    {
        IviDmmTriggerSourceImmediate	= 1,
        IviDmmTriggerSourceExternal	= 2,
        IviDmmTriggerSourceSwTrigFunc	= 3,
        IviDmmTriggerSourceTTL0	= 111,
        IviDmmTriggerSourceTTL1	= 112,
        IviDmmTriggerSourceTTL2	= 113,
        IviDmmTriggerSourceTTL3	= 114,
        IviDmmTriggerSourceTTL4	= 115,
        IviDmmTriggerSourceTTL5	= 116,
        IviDmmTriggerSourceTTL6	= 117,
        IviDmmTriggerSourceTTL7	= 118,
        IviDmmTriggerSourceECL0	= 119,
        IviDmmTriggerSourceECL1	= 120,
        IviDmmTriggerSourcePXIStar	= 131,
        IviDmmTriggerSourceRTSI0	= 140,
        IviDmmTriggerSourceRTSI1	= 141,
        IviDmmTriggerSourceRTSI2	= 142,
        IviDmmTriggerSourceRTSI3	= 143,
        IviDmmTriggerSourceRTSI4	= 144,
        IviDmmTriggerSourceRTSI5	= 145,
        IviDmmTriggerSourceRTSI6	= 146
    } 	IviDmmTriggerSourceEnum;


EXTERN_C const IID LIBID_IviDmmLib;

#ifndef __IIviDmm_INTERFACE_DEFINED__
#define __IIviDmm_INTERFACE_DEFINED__

/* interface IIviDmm */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDmm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51e8-a398-11d4-ba58-000064657374")
    IIviDmm : public IIviDriver
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviDmmFunctionEnum Function,
            /* [in] */ DOUBLE Range,
            /* [in] */ DOUBLE Resolution) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Function( 
            /* [in] */ IviDmmFunctionEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Function( 
            /* [retval][out] */ IviDmmFunctionEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Range( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Range( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Resolution( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Resolution( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AC( 
            /* [retval][out] */ IIviDmmAC **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Advanced( 
            /* [retval][out] */ IIviDmmAdvanced **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [retval][out] */ IIviDmmFrequency **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Measurement( 
            /* [retval][out] */ IIviDmmMeasurement **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Temperature( 
            /* [retval][out] */ IIviDmmTemperature **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ IIviDmmTrigger **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDmmVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDmm * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDmm * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDmm * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviDmm * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviDmm * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviDmm * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviDmm * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviDmm * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviDmm * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDmm * This,
            /* [in] */ IviDmmFunctionEnum Function,
            /* [in] */ DOUBLE Range,
            /* [in] */ DOUBLE Resolution);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Function )( 
            IIviDmm * This,
            /* [in] */ IviDmmFunctionEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Function )( 
            IIviDmm * This,
            /* [retval][out] */ IviDmmFunctionEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Range )( 
            IIviDmm * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Range )( 
            IIviDmm * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolution )( 
            IIviDmm * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolution )( 
            IIviDmm * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AC )( 
            IIviDmm * This,
            /* [retval][out] */ IIviDmmAC **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Advanced )( 
            IIviDmm * This,
            /* [retval][out] */ IIviDmmAdvanced **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviDmm * This,
            /* [retval][out] */ IIviDmmFrequency **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Measurement )( 
            IIviDmm * This,
            /* [retval][out] */ IIviDmmMeasurement **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Temperature )( 
            IIviDmm * This,
            /* [retval][out] */ IIviDmmTemperature **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            IIviDmm * This,
            /* [retval][out] */ IIviDmmTrigger **pVal);
        
        END_INTERFACE
    } IIviDmmVtbl;

    interface IIviDmm
    {
        CONST_VTBL struct IIviDmmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDmm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDmm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDmm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDmm_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviDmm_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviDmm_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviDmm_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviDmm_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviDmm_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviDmm_Configure(This,Function,Range,Resolution)	\
    ( (This)->lpVtbl -> Configure(This,Function,Range,Resolution) ) 

#define IIviDmm_put_Function(This,newVal)	\
    ( (This)->lpVtbl -> put_Function(This,newVal) ) 

#define IIviDmm_get_Function(This,pVal)	\
    ( (This)->lpVtbl -> get_Function(This,pVal) ) 

#define IIviDmm_put_Range(This,newVal)	\
    ( (This)->lpVtbl -> put_Range(This,newVal) ) 

#define IIviDmm_get_Range(This,pVal)	\
    ( (This)->lpVtbl -> get_Range(This,pVal) ) 

#define IIviDmm_put_Resolution(This,newVal)	\
    ( (This)->lpVtbl -> put_Resolution(This,newVal) ) 

#define IIviDmm_get_Resolution(This,pVal)	\
    ( (This)->lpVtbl -> get_Resolution(This,pVal) ) 

#define IIviDmm_get_AC(This,pVal)	\
    ( (This)->lpVtbl -> get_AC(This,pVal) ) 

#define IIviDmm_get_Advanced(This,pVal)	\
    ( (This)->lpVtbl -> get_Advanced(This,pVal) ) 

#define IIviDmm_get_Frequency(This,pVal)	\
    ( (This)->lpVtbl -> get_Frequency(This,pVal) ) 

#define IIviDmm_get_Measurement(This,pVal)	\
    ( (This)->lpVtbl -> get_Measurement(This,pVal) ) 

#define IIviDmm_get_Temperature(This,pVal)	\
    ( (This)->lpVtbl -> get_Temperature(This,pVal) ) 

#define IIviDmm_get_Trigger(This,pVal)	\
    ( (This)->lpVtbl -> get_Trigger(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDmm_INTERFACE_DEFINED__ */


#ifndef __IIviDmmMeasurement_INTERFACE_DEFINED__
#define __IIviDmmMeasurement_INTERFACE_DEFINED__

/* interface IIviDmmMeasurement */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDmmMeasurement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51e9-a398-11d4-ba58-000064657374")
    IIviDmmMeasurement : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Initiate( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Fetch( 
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ DOUBLE *Reading) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FetchMultiPoint( 
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ SAFEARRAY * *ReadingArray) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ DOUBLE *Reading) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ReadMultiPoint( 
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ SAFEARRAY * *ReadingArray) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IsOverRange( 
            /* [in] */ DOUBLE MeasurementValue,
            /* [retval][out] */ VARIANT_BOOL *IsOver) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDmmMeasurementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDmmMeasurement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDmmMeasurement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDmmMeasurement * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initiate )( 
            IIviDmmMeasurement * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IIviDmmMeasurement * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Fetch )( 
            IIviDmmMeasurement * This,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ DOUBLE *Reading);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *FetchMultiPoint )( 
            IIviDmmMeasurement * This,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ SAFEARRAY * *ReadingArray);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            IIviDmmMeasurement * This,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ DOUBLE *Reading);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadMultiPoint )( 
            IIviDmmMeasurement * This,
            /* [in] */ LONG MaxTimeMilliseconds,
            /* [retval][out] */ SAFEARRAY * *ReadingArray);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviDmmMeasurement * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOverRange )( 
            IIviDmmMeasurement * This,
            /* [in] */ DOUBLE MeasurementValue,
            /* [retval][out] */ VARIANT_BOOL *IsOver);
        
        END_INTERFACE
    } IIviDmmMeasurementVtbl;

    interface IIviDmmMeasurement
    {
        CONST_VTBL struct IIviDmmMeasurementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDmmMeasurement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDmmMeasurement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDmmMeasurement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDmmMeasurement_Initiate(This)	\
    ( (This)->lpVtbl -> Initiate(This) ) 

#define IIviDmmMeasurement_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IIviDmmMeasurement_Fetch(This,MaxTimeMilliseconds,Reading)	\
    ( (This)->lpVtbl -> Fetch(This,MaxTimeMilliseconds,Reading) ) 

#define IIviDmmMeasurement_FetchMultiPoint(This,MaxTimeMilliseconds,ReadingArray)	\
    ( (This)->lpVtbl -> FetchMultiPoint(This,MaxTimeMilliseconds,ReadingArray) ) 

#define IIviDmmMeasurement_Read(This,MaxTimeMilliseconds,Reading)	\
    ( (This)->lpVtbl -> Read(This,MaxTimeMilliseconds,Reading) ) 

#define IIviDmmMeasurement_ReadMultiPoint(This,MaxTimeMilliseconds,ReadingArray)	\
    ( (This)->lpVtbl -> ReadMultiPoint(This,MaxTimeMilliseconds,ReadingArray) ) 

#define IIviDmmMeasurement_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IIviDmmMeasurement_IsOverRange(This,MeasurementValue,IsOver)	\
    ( (This)->lpVtbl -> IsOverRange(This,MeasurementValue,IsOver) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDmmMeasurement_INTERFACE_DEFINED__ */


#ifndef __IIviDmmTrigger_INTERFACE_DEFINED__
#define __IIviDmmTrigger_INTERFACE_DEFINED__

/* interface IIviDmmTrigger */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDmmTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51ea-a398-11d4-ba58-000064657374")
    IIviDmmTrigger : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviDmmTriggerSourceEnum TriggerSource,
            /* [in] */ DOUBLE TriggerDelay) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ IviDmmTriggerSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [retval][out] */ IviDmmTriggerSlopeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ IviDmmTriggerSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ IviDmmTriggerSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MultiPoint( 
            /* [retval][out] */ IIviDmmMultiPoint **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDmmTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDmmTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDmmTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDmmTrigger * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDmmTrigger * This,
            /* [in] */ IviDmmTriggerSourceEnum TriggerSource,
            /* [in] */ DOUBLE TriggerDelay);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviDmmTrigger * This,
            /* [in] */ IviDmmTriggerSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviDmmTrigger * This,
            /* [retval][out] */ IviDmmTriggerSlopeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviDmmTrigger * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviDmmTrigger * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviDmmTrigger * This,
            /* [in] */ IviDmmTriggerSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviDmmTrigger * This,
            /* [retval][out] */ IviDmmTriggerSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MultiPoint )( 
            IIviDmmTrigger * This,
            /* [retval][out] */ IIviDmmMultiPoint **pVal);
        
        END_INTERFACE
    } IIviDmmTriggerVtbl;

    interface IIviDmmTrigger
    {
        CONST_VTBL struct IIviDmmTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDmmTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDmmTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDmmTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDmmTrigger_Configure(This,TriggerSource,TriggerDelay)	\
    ( (This)->lpVtbl -> Configure(This,TriggerSource,TriggerDelay) ) 

#define IIviDmmTrigger_put_Slope(This,newVal)	\
    ( (This)->lpVtbl -> put_Slope(This,newVal) ) 

#define IIviDmmTrigger_get_Slope(This,pVal)	\
    ( (This)->lpVtbl -> get_Slope(This,pVal) ) 

#define IIviDmmTrigger_put_Delay(This,newVal)	\
    ( (This)->lpVtbl -> put_Delay(This,newVal) ) 

#define IIviDmmTrigger_get_Delay(This,pVal)	\
    ( (This)->lpVtbl -> get_Delay(This,pVal) ) 

#define IIviDmmTrigger_put_Source(This,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,newVal) ) 

#define IIviDmmTrigger_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#define IIviDmmTrigger_get_MultiPoint(This,pVal)	\
    ( (This)->lpVtbl -> get_MultiPoint(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDmmTrigger_INTERFACE_DEFINED__ */


#ifndef __IIviDmmMultiPoint_INTERFACE_DEFINED__
#define __IIviDmmMultiPoint_INTERFACE_DEFINED__

/* interface IIviDmmMultiPoint */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDmmMultiPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51eb-a398-11d4-ba58-000064657374")
    IIviDmmMultiPoint : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ LONG TriggerCount,
            /* [in] */ LONG SampleCount,
            /* [in] */ IviDmmSampleTriggerEnum SampleTrigger,
            /* [in] */ DOUBLE SampleInterval) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MeasurementComplete( 
            /* [in] */ IviDmmMeasCompleteDestEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MeasurementComplete( 
            /* [retval][out] */ IviDmmMeasCompleteDestEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Count( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SampleCount( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SampleCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SampleInterval( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SampleInterval( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SampleTrigger( 
            /* [in] */ IviDmmSampleTriggerEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SampleTrigger( 
            /* [retval][out] */ IviDmmSampleTriggerEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDmmMultiPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDmmMultiPoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDmmMultiPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDmmMultiPoint * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDmmMultiPoint * This,
            /* [in] */ LONG TriggerCount,
            /* [in] */ LONG SampleCount,
            /* [in] */ IviDmmSampleTriggerEnum SampleTrigger,
            /* [in] */ DOUBLE SampleInterval);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MeasurementComplete )( 
            IIviDmmMultiPoint * This,
            /* [in] */ IviDmmMeasCompleteDestEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MeasurementComplete )( 
            IIviDmmMultiPoint * This,
            /* [retval][out] */ IviDmmMeasCompleteDestEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Count )( 
            IIviDmmMultiPoint * This,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviDmmMultiPoint * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleCount )( 
            IIviDmmMultiPoint * This,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleCount )( 
            IIviDmmMultiPoint * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleInterval )( 
            IIviDmmMultiPoint * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleInterval )( 
            IIviDmmMultiPoint * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleTrigger )( 
            IIviDmmMultiPoint * This,
            /* [in] */ IviDmmSampleTriggerEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleTrigger )( 
            IIviDmmMultiPoint * This,
            /* [retval][out] */ IviDmmSampleTriggerEnum *pVal);
        
        END_INTERFACE
    } IIviDmmMultiPointVtbl;

    interface IIviDmmMultiPoint
    {
        CONST_VTBL struct IIviDmmMultiPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDmmMultiPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDmmMultiPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDmmMultiPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDmmMultiPoint_Configure(This,TriggerCount,SampleCount,SampleTrigger,SampleInterval)	\
    ( (This)->lpVtbl -> Configure(This,TriggerCount,SampleCount,SampleTrigger,SampleInterval) ) 

#define IIviDmmMultiPoint_put_MeasurementComplete(This,newVal)	\
    ( (This)->lpVtbl -> put_MeasurementComplete(This,newVal) ) 

#define IIviDmmMultiPoint_get_MeasurementComplete(This,pVal)	\
    ( (This)->lpVtbl -> get_MeasurementComplete(This,pVal) ) 

#define IIviDmmMultiPoint_put_Count(This,newVal)	\
    ( (This)->lpVtbl -> put_Count(This,newVal) ) 

#define IIviDmmMultiPoint_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviDmmMultiPoint_put_SampleCount(This,newVal)	\
    ( (This)->lpVtbl -> put_SampleCount(This,newVal) ) 

#define IIviDmmMultiPoint_get_SampleCount(This,pVal)	\
    ( (This)->lpVtbl -> get_SampleCount(This,pVal) ) 

#define IIviDmmMultiPoint_put_SampleInterval(This,newVal)	\
    ( (This)->lpVtbl -> put_SampleInterval(This,newVal) ) 

#define IIviDmmMultiPoint_get_SampleInterval(This,pVal)	\
    ( (This)->lpVtbl -> get_SampleInterval(This,pVal) ) 

#define IIviDmmMultiPoint_put_SampleTrigger(This,newVal)	\
    ( (This)->lpVtbl -> put_SampleTrigger(This,newVal) ) 

#define IIviDmmMultiPoint_get_SampleTrigger(This,pVal)	\
    ( (This)->lpVtbl -> get_SampleTrigger(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDmmMultiPoint_INTERFACE_DEFINED__ */


#ifndef __IIviDmmAC_INTERFACE_DEFINED__
#define __IIviDmmAC_INTERFACE_DEFINED__

/* interface IIviDmmAC */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDmmAC;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51ec-a398-11d4-ba58-000064657374")
    IIviDmmAC : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureBandwidth( 
            /* [in] */ DOUBLE MinFreq,
            /* [in] */ DOUBLE MaxFreq) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FrequencyMax( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FrequencyMin( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FrequencyMin( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDmmACVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDmmAC * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDmmAC * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDmmAC * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureBandwidth )( 
            IIviDmmAC * This,
            /* [in] */ DOUBLE MinFreq,
            /* [in] */ DOUBLE MaxFreq);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrequencyMax )( 
            IIviDmmAC * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyMax )( 
            IIviDmmAC * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrequencyMin )( 
            IIviDmmAC * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrequencyMin )( 
            IIviDmmAC * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviDmmACVtbl;

    interface IIviDmmAC
    {
        CONST_VTBL struct IIviDmmACVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDmmAC_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDmmAC_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDmmAC_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDmmAC_ConfigureBandwidth(This,MinFreq,MaxFreq)	\
    ( (This)->lpVtbl -> ConfigureBandwidth(This,MinFreq,MaxFreq) ) 

#define IIviDmmAC_put_FrequencyMax(This,newVal)	\
    ( (This)->lpVtbl -> put_FrequencyMax(This,newVal) ) 

#define IIviDmmAC_get_FrequencyMax(This,pVal)	\
    ( (This)->lpVtbl -> get_FrequencyMax(This,pVal) ) 

#define IIviDmmAC_put_FrequencyMin(This,newVal)	\
    ( (This)->lpVtbl -> put_FrequencyMin(This,newVal) ) 

#define IIviDmmAC_get_FrequencyMin(This,pVal)	\
    ( (This)->lpVtbl -> get_FrequencyMin(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDmmAC_INTERFACE_DEFINED__ */


#ifndef __IIviDmmAdvanced_INTERFACE_DEFINED__
#define __IIviDmmAdvanced_INTERFACE_DEFINED__

/* interface IIviDmmAdvanced */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDmmAdvanced;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51ed-a398-11d4-ba58-000064657374")
    IIviDmmAdvanced : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActualRange( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ApertureTime( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ApertureTimeUnits( 
            /* [retval][out] */ IviDmmApertureTimeUnitsEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AutoZero( 
            /* [in] */ IviDmmAutoZeroEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AutoZero( 
            /* [retval][out] */ IviDmmAutoZeroEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PowerlineFrequency( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PowerlineFrequency( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDmmAdvancedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDmmAdvanced * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDmmAdvanced * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDmmAdvanced * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActualRange )( 
            IIviDmmAdvanced * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ApertureTime )( 
            IIviDmmAdvanced * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ApertureTimeUnits )( 
            IIviDmmAdvanced * This,
            /* [retval][out] */ IviDmmApertureTimeUnitsEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoZero )( 
            IIviDmmAdvanced * This,
            /* [in] */ IviDmmAutoZeroEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoZero )( 
            IIviDmmAdvanced * This,
            /* [retval][out] */ IviDmmAutoZeroEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PowerlineFrequency )( 
            IIviDmmAdvanced * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PowerlineFrequency )( 
            IIviDmmAdvanced * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviDmmAdvancedVtbl;

    interface IIviDmmAdvanced
    {
        CONST_VTBL struct IIviDmmAdvancedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDmmAdvanced_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDmmAdvanced_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDmmAdvanced_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDmmAdvanced_get_ActualRange(This,pVal)	\
    ( (This)->lpVtbl -> get_ActualRange(This,pVal) ) 

#define IIviDmmAdvanced_get_ApertureTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ApertureTime(This,pVal) ) 

#define IIviDmmAdvanced_get_ApertureTimeUnits(This,pVal)	\
    ( (This)->lpVtbl -> get_ApertureTimeUnits(This,pVal) ) 

#define IIviDmmAdvanced_put_AutoZero(This,newVal)	\
    ( (This)->lpVtbl -> put_AutoZero(This,newVal) ) 

#define IIviDmmAdvanced_get_AutoZero(This,pVal)	\
    ( (This)->lpVtbl -> get_AutoZero(This,pVal) ) 

#define IIviDmmAdvanced_put_PowerlineFrequency(This,newVal)	\
    ( (This)->lpVtbl -> put_PowerlineFrequency(This,newVal) ) 

#define IIviDmmAdvanced_get_PowerlineFrequency(This,pVal)	\
    ( (This)->lpVtbl -> get_PowerlineFrequency(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDmmAdvanced_INTERFACE_DEFINED__ */


#ifndef __IIviDmmFrequency_INTERFACE_DEFINED__
#define __IIviDmmFrequency_INTERFACE_DEFINED__

/* interface IIviDmmFrequency */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDmmFrequency;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51ee-a398-11d4-ba58-000064657374")
    IIviDmmFrequency : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_VoltageRange( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VoltageRange( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDmmFrequencyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDmmFrequency * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDmmFrequency * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDmmFrequency * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VoltageRange )( 
            IIviDmmFrequency * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VoltageRange )( 
            IIviDmmFrequency * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviDmmFrequencyVtbl;

    interface IIviDmmFrequency
    {
        CONST_VTBL struct IIviDmmFrequencyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDmmFrequency_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDmmFrequency_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDmmFrequency_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDmmFrequency_put_VoltageRange(This,newVal)	\
    ( (This)->lpVtbl -> put_VoltageRange(This,newVal) ) 

#define IIviDmmFrequency_get_VoltageRange(This,pVal)	\
    ( (This)->lpVtbl -> get_VoltageRange(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDmmFrequency_INTERFACE_DEFINED__ */


#ifndef __IIviDmmTemperature_INTERFACE_DEFINED__
#define __IIviDmmTemperature_INTERFACE_DEFINED__

/* interface IIviDmmTemperature */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDmmTemperature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51ef-a398-11d4-ba58-000064657374")
    IIviDmmTemperature : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TransducerType( 
            /* [in] */ IviDmmTransducerTypeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TransducerType( 
            /* [retval][out] */ IviDmmTransducerTypeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RTD( 
            /* [retval][out] */ IIviDmmRTD **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Thermocouple( 
            /* [retval][out] */ IIviDmmThermocouple **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Thermistor( 
            /* [retval][out] */ IIviDmmThermistor **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDmmTemperatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDmmTemperature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDmmTemperature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDmmTemperature * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransducerType )( 
            IIviDmmTemperature * This,
            /* [in] */ IviDmmTransducerTypeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransducerType )( 
            IIviDmmTemperature * This,
            /* [retval][out] */ IviDmmTransducerTypeEnum *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RTD )( 
            IIviDmmTemperature * This,
            /* [retval][out] */ IIviDmmRTD **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Thermocouple )( 
            IIviDmmTemperature * This,
            /* [retval][out] */ IIviDmmThermocouple **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Thermistor )( 
            IIviDmmTemperature * This,
            /* [retval][out] */ IIviDmmThermistor **pVal);
        
        END_INTERFACE
    } IIviDmmTemperatureVtbl;

    interface IIviDmmTemperature
    {
        CONST_VTBL struct IIviDmmTemperatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDmmTemperature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDmmTemperature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDmmTemperature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDmmTemperature_put_TransducerType(This,newVal)	\
    ( (This)->lpVtbl -> put_TransducerType(This,newVal) ) 

#define IIviDmmTemperature_get_TransducerType(This,pVal)	\
    ( (This)->lpVtbl -> get_TransducerType(This,pVal) ) 

#define IIviDmmTemperature_get_RTD(This,pVal)	\
    ( (This)->lpVtbl -> get_RTD(This,pVal) ) 

#define IIviDmmTemperature_get_Thermocouple(This,pVal)	\
    ( (This)->lpVtbl -> get_Thermocouple(This,pVal) ) 

#define IIviDmmTemperature_get_Thermistor(This,pVal)	\
    ( (This)->lpVtbl -> get_Thermistor(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDmmTemperature_INTERFACE_DEFINED__ */


#ifndef __IIviDmmRTD_INTERFACE_DEFINED__
#define __IIviDmmRTD_INTERFACE_DEFINED__

/* interface IIviDmmRTD */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDmmRTD;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51f0-a398-11d4-ba58-000064657374")
    IIviDmmRTD : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ DOUBLE Alpha,
            /* [in] */ DOUBLE Resistance) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Alpha( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Alpha( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Resistance( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Resistance( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDmmRTDVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDmmRTD * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDmmRTD * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDmmRTD * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDmmRTD * This,
            /* [in] */ DOUBLE Alpha,
            /* [in] */ DOUBLE Resistance);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Alpha )( 
            IIviDmmRTD * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Alpha )( 
            IIviDmmRTD * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resistance )( 
            IIviDmmRTD * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resistance )( 
            IIviDmmRTD * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviDmmRTDVtbl;

    interface IIviDmmRTD
    {
        CONST_VTBL struct IIviDmmRTDVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDmmRTD_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDmmRTD_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDmmRTD_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDmmRTD_Configure(This,Alpha,Resistance)	\
    ( (This)->lpVtbl -> Configure(This,Alpha,Resistance) ) 

#define IIviDmmRTD_put_Alpha(This,newVal)	\
    ( (This)->lpVtbl -> put_Alpha(This,newVal) ) 

#define IIviDmmRTD_get_Alpha(This,pVal)	\
    ( (This)->lpVtbl -> get_Alpha(This,pVal) ) 

#define IIviDmmRTD_put_Resistance(This,newVal)	\
    ( (This)->lpVtbl -> put_Resistance(This,newVal) ) 

#define IIviDmmRTD_get_Resistance(This,pVal)	\
    ( (This)->lpVtbl -> get_Resistance(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDmmRTD_INTERFACE_DEFINED__ */


#ifndef __IIviDmmThermocouple_INTERFACE_DEFINED__
#define __IIviDmmThermocouple_INTERFACE_DEFINED__

/* interface IIviDmmThermocouple */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDmmThermocouple;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51f1-a398-11d4-ba58-000064657374")
    IIviDmmThermocouple : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ IviDmmThermocoupleTypeEnum Type,
            /* [in] */ IviDmmRefJunctionTypeEnum RefJunctionType) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FixedRefJunction( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FixedRefJunction( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RefJunctionType( 
            /* [in] */ IviDmmRefJunctionTypeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RefJunctionType( 
            /* [retval][out] */ IviDmmRefJunctionTypeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ IviDmmThermocoupleTypeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ IviDmmThermocoupleTypeEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDmmThermocoupleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDmmThermocouple * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDmmThermocouple * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDmmThermocouple * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviDmmThermocouple * This,
            /* [in] */ IviDmmThermocoupleTypeEnum Type,
            /* [in] */ IviDmmRefJunctionTypeEnum RefJunctionType);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FixedRefJunction )( 
            IIviDmmThermocouple * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FixedRefJunction )( 
            IIviDmmThermocouple * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefJunctionType )( 
            IIviDmmThermocouple * This,
            /* [in] */ IviDmmRefJunctionTypeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefJunctionType )( 
            IIviDmmThermocouple * This,
            /* [retval][out] */ IviDmmRefJunctionTypeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IIviDmmThermocouple * This,
            /* [in] */ IviDmmThermocoupleTypeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IIviDmmThermocouple * This,
            /* [retval][out] */ IviDmmThermocoupleTypeEnum *pVal);
        
        END_INTERFACE
    } IIviDmmThermocoupleVtbl;

    interface IIviDmmThermocouple
    {
        CONST_VTBL struct IIviDmmThermocoupleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDmmThermocouple_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDmmThermocouple_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDmmThermocouple_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDmmThermocouple_Configure(This,Type,RefJunctionType)	\
    ( (This)->lpVtbl -> Configure(This,Type,RefJunctionType) ) 

#define IIviDmmThermocouple_put_FixedRefJunction(This,newVal)	\
    ( (This)->lpVtbl -> put_FixedRefJunction(This,newVal) ) 

#define IIviDmmThermocouple_get_FixedRefJunction(This,pVal)	\
    ( (This)->lpVtbl -> get_FixedRefJunction(This,pVal) ) 

#define IIviDmmThermocouple_put_RefJunctionType(This,newVal)	\
    ( (This)->lpVtbl -> put_RefJunctionType(This,newVal) ) 

#define IIviDmmThermocouple_get_RefJunctionType(This,pVal)	\
    ( (This)->lpVtbl -> get_RefJunctionType(This,pVal) ) 

#define IIviDmmThermocouple_put_Type(This,newVal)	\
    ( (This)->lpVtbl -> put_Type(This,newVal) ) 

#define IIviDmmThermocouple_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDmmThermocouple_INTERFACE_DEFINED__ */


#ifndef __IIviDmmThermistor_INTERFACE_DEFINED__
#define __IIviDmmThermistor_INTERFACE_DEFINED__

/* interface IIviDmmThermistor */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDmmThermistor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51f2-a398-11d4-ba58-000064657374")
    IIviDmmThermistor : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Resistance( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Resistance( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDmmThermistorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDmmThermistor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDmmThermistor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDmmThermistor * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resistance )( 
            IIviDmmThermistor * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resistance )( 
            IIviDmmThermistor * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviDmmThermistorVtbl;

    interface IIviDmmThermistor
    {
        CONST_VTBL struct IIviDmmThermistorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDmmThermistor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDmmThermistor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDmmThermistor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDmmThermistor_put_Resistance(This,newVal)	\
    ( (This)->lpVtbl -> put_Resistance(This,newVal) ) 

#define IIviDmmThermistor_get_Resistance(This,pVal)	\
    ( (This)->lpVtbl -> get_Resistance(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDmmThermistor_INTERFACE_DEFINED__ */

#endif /* __IviDmmLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


