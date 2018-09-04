

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:57:54 2016
 */
/* Compiler settings for IviDCPwrTypeLib.idl:
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


#ifndef __IviDCPwrTypeLib_h__
#define __IviDCPwrTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviDCPwr_FWD_DEFINED__
#define __IIviDCPwr_FWD_DEFINED__
typedef interface IIviDCPwr IIviDCPwr;

#endif 	/* __IIviDCPwr_FWD_DEFINED__ */


#ifndef __IIviDCPwrOutputs_FWD_DEFINED__
#define __IIviDCPwrOutputs_FWD_DEFINED__
typedef interface IIviDCPwrOutputs IIviDCPwrOutputs;

#endif 	/* __IIviDCPwrOutputs_FWD_DEFINED__ */


#ifndef __IIviDCPwrOutput_FWD_DEFINED__
#define __IIviDCPwrOutput_FWD_DEFINED__
typedef interface IIviDCPwrOutput IIviDCPwrOutput;

#endif 	/* __IIviDCPwrOutput_FWD_DEFINED__ */


#ifndef __IIviDCPwrTrigger_FWD_DEFINED__
#define __IIviDCPwrTrigger_FWD_DEFINED__
typedef interface IIviDCPwrTrigger IIviDCPwrTrigger;

#endif 	/* __IIviDCPwrTrigger_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_IviDCPwrTypeLib_0000_0000 */
/* [local] */ 

#pragma once
#pragma once
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_IviDCPwrTypeLib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IviDCPwrTypeLib_0000_0000_v0_0_s_ifspec;


#ifndef __IviDCPwrLib_LIBRARY_DEFINED__
#define __IviDCPwrLib_LIBRARY_DEFINED__

/* library IviDCPwrLib */
/* [helpfile][helpstring][version][uuid] */ 





typedef /* [helpcontext][helpstring] */ 
enum IviDCPwrErrorCodesEnum
    {
        E_IVIDCPWR_TRIGGER_NOT_SOFTWARE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x1001 ) )
    } 	IviDCPwrErrorCodesEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDCPwrCurrentLimitBehaviorEnum
    {
        IviDCPwrCurrentLimitRegulate	= 0,
        IviDCPwrCurrentLimitTrip	= 1
    } 	IviDCPwrCurrentLimitBehaviorEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDCPwrMeasurementTypeEnum
    {
        IviDCPwrMeasurementCurrent	= 0,
        IviDCPwrMeasurementVoltage	= 1
    } 	IviDCPwrMeasurementTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDCPwrRangeTypeEnum
    {
        IviDCPwrRangeCurrent	= 0,
        IviDCPwrRangeVoltage	= 1
    } 	IviDCPwrRangeTypeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDCPwrTriggerSourceEnum
    {
        IviDCPwrTriggerSourceImmediate	= 0,
        IviDCPwrTriggerSourceExternal	= 1,
        IviDCPwrTriggerSourceSwTrigFunc	= 2,
        IviDCPwrTriggerSourceTTL0	= 3,
        IviDCPwrTriggerSourceTTL1	= 4,
        IviDCPwrTriggerSourceTTL2	= 5,
        IviDCPwrTriggerSourceTTL3	= 6,
        IviDCPwrTriggerSourceTTL4	= 7,
        IviDCPwrTriggerSourceTTL5	= 8,
        IviDCPwrTriggerSourceTTL6	= 9,
        IviDCPwrTriggerSourceTTL7	= 10,
        IviDCPwrTriggerSourceECL0	= 11,
        IviDCPwrTriggerSourceECL1	= 12,
        IviDCPwrTriggerSourcePXIStar	= 13,
        IviDCPwrTriggerSourceRTSI0	= 14,
        IviDCPwrTriggerSourceRTSI1	= 15,
        IviDCPwrTriggerSourceRTSI2	= 16,
        IviDCPwrTriggerSourceRTSI3	= 17,
        IviDCPwrTriggerSourceRTSI4	= 18,
        IviDCPwrTriggerSourceRTSI5	= 19,
        IviDCPwrTriggerSourceRTSI6	= 20
    } 	IviDCPwrTriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviDCPwrOutputStateEnum
    {
        IviDCPwrOutputConstantVoltage	= 0,
        IviDCPwrOutputConstantCurrent	= 1,
        IviDCPwrOutputOverVoltage	= 2,
        IviDCPwrOutputOverCurrent	= 3,
        IviDCPwrOutputUnregulated	= 4
    } 	IviDCPwrOutputStateEnum;


EXTERN_C const IID LIBID_IviDCPwrLib;

#ifndef __IIviDCPwr_INTERFACE_DEFINED__
#define __IIviDCPwr_INTERFACE_DEFINED__

/* interface IIviDCPwr */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDCPwr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51b6-a398-11d4-ba58-000064657374")
    IIviDCPwr : public IIviDriver
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Outputs( 
            /* [retval][out] */ IIviDCPwrOutputs **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ IIviDCPwrTrigger **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDCPwrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDCPwr * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDCPwr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDCPwr * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviDCPwr * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviDCPwr * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviDCPwr * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviDCPwr * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviDCPwr * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviDCPwr * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Outputs )( 
            IIviDCPwr * This,
            /* [retval][out] */ IIviDCPwrOutputs **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            IIviDCPwr * This,
            /* [retval][out] */ IIviDCPwrTrigger **pVal);
        
        END_INTERFACE
    } IIviDCPwrVtbl;

    interface IIviDCPwr
    {
        CONST_VTBL struct IIviDCPwrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDCPwr_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDCPwr_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDCPwr_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDCPwr_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviDCPwr_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviDCPwr_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviDCPwr_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviDCPwr_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviDCPwr_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviDCPwr_get_Outputs(This,pVal)	\
    ( (This)->lpVtbl -> get_Outputs(This,pVal) ) 

#define IIviDCPwr_get_Trigger(This,pVal)	\
    ( (This)->lpVtbl -> get_Trigger(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDCPwr_INTERFACE_DEFINED__ */


#ifndef __IIviDCPwrOutputs_INTERFACE_DEFINED__
#define __IIviDCPwrOutputs_INTERFACE_DEFINED__

/* interface IIviDCPwrOutputs */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDCPwrOutputs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51b7-a398-11d4-ba58-000064657374")
    IIviDCPwrOutputs : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR OutputName,
            /* [retval][out] */ IIviDCPwrOutput **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *Name) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDCPwrOutputsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDCPwrOutputs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDCPwrOutputs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDCPwrOutputs * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviDCPwrOutputs * This,
            /* [in] */ BSTR OutputName,
            /* [retval][out] */ IIviDCPwrOutput **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviDCPwrOutputs * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviDCPwrOutputs * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *Name);
        
        END_INTERFACE
    } IIviDCPwrOutputsVtbl;

    interface IIviDCPwrOutputs
    {
        CONST_VTBL struct IIviDCPwrOutputsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDCPwrOutputs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDCPwrOutputs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDCPwrOutputs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDCPwrOutputs_get_Item(This,OutputName,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,OutputName,pVal) ) 

#define IIviDCPwrOutputs_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviDCPwrOutputs_get_Name(This,Index,Name)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDCPwrOutputs_INTERFACE_DEFINED__ */


#ifndef __IIviDCPwrOutput_INTERFACE_DEFINED__
#define __IIviDCPwrOutput_INTERFACE_DEFINED__

/* interface IIviDCPwrOutput */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDCPwrOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51b8-a398-11d4-ba58-000064657374")
    IIviDCPwrOutput : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureCurrentLimit( 
            /* [in] */ IviDCPwrCurrentLimitBehaviorEnum Behavior,
            /* [in] */ DOUBLE Limit) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureRange( 
            /* [in] */ IviDCPwrRangeTypeEnum RangeType,
            /* [in] */ DOUBLE Range) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureOVP( 
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ DOUBLE Limit) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Measure( 
            /* [in] */ IviDCPwrMeasurementTypeEnum MeasurementType,
            /* [retval][out] */ DOUBLE *Measurement) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE QueryCurrentLimitMax( 
            /* [in] */ DOUBLE VoltageLevel,
            /* [retval][out] */ DOUBLE *MaxCurrentLimit) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE QueryState( 
            /* [in] */ IviDCPwrOutputStateEnum OutputState,
            /* [retval][out] */ VARIANT_BOOL *InState) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE QueryVoltageLevelMax( 
            /* [in] */ DOUBLE CurrentLimit,
            /* [retval][out] */ DOUBLE *MaxVoltageLevel) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ResetOutputProtection( void) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TriggerSource( 
            /* [in] */ IviDCPwrTriggerSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TriggerSource( 
            /* [retval][out] */ IviDCPwrTriggerSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TriggeredCurrentLimit( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TriggeredCurrentLimit( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TriggeredVoltageLevel( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TriggeredVoltageLevel( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_VoltageLevel( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VoltageLevel( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CurrentLimit( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLimit( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CurrentLimitBehavior( 
            /* [in] */ IviDCPwrCurrentLimitBehaviorEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLimitBehavior( 
            /* [retval][out] */ IviDCPwrCurrentLimitBehaviorEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OVPLimit( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OVPLimit( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OVPEnabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OVPEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDCPwrOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDCPwrOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDCPwrOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDCPwrOutput * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureCurrentLimit )( 
            IIviDCPwrOutput * This,
            /* [in] */ IviDCPwrCurrentLimitBehaviorEnum Behavior,
            /* [in] */ DOUBLE Limit);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureRange )( 
            IIviDCPwrOutput * This,
            /* [in] */ IviDCPwrRangeTypeEnum RangeType,
            /* [in] */ DOUBLE Range);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureOVP )( 
            IIviDCPwrOutput * This,
            /* [in] */ VARIANT_BOOL Enabled,
            /* [in] */ DOUBLE Limit);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Measure )( 
            IIviDCPwrOutput * This,
            /* [in] */ IviDCPwrMeasurementTypeEnum MeasurementType,
            /* [retval][out] */ DOUBLE *Measurement);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryCurrentLimitMax )( 
            IIviDCPwrOutput * This,
            /* [in] */ DOUBLE VoltageLevel,
            /* [retval][out] */ DOUBLE *MaxCurrentLimit);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryState )( 
            IIviDCPwrOutput * This,
            /* [in] */ IviDCPwrOutputStateEnum OutputState,
            /* [retval][out] */ VARIANT_BOOL *InState);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryVoltageLevelMax )( 
            IIviDCPwrOutput * This,
            /* [in] */ DOUBLE CurrentLimit,
            /* [retval][out] */ DOUBLE *MaxVoltageLevel);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResetOutputProtection )( 
            IIviDCPwrOutput * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviDCPwrOutput * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviDCPwrOutput * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggerSource )( 
            IIviDCPwrOutput * This,
            /* [in] */ IviDCPwrTriggerSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggerSource )( 
            IIviDCPwrOutput * This,
            /* [retval][out] */ IviDCPwrTriggerSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggeredCurrentLimit )( 
            IIviDCPwrOutput * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggeredCurrentLimit )( 
            IIviDCPwrOutput * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TriggeredVoltageLevel )( 
            IIviDCPwrOutput * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TriggeredVoltageLevel )( 
            IIviDCPwrOutput * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VoltageLevel )( 
            IIviDCPwrOutput * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VoltageLevel )( 
            IIviDCPwrOutput * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentLimit )( 
            IIviDCPwrOutput * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLimit )( 
            IIviDCPwrOutput * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentLimitBehavior )( 
            IIviDCPwrOutput * This,
            /* [in] */ IviDCPwrCurrentLimitBehaviorEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLimitBehavior )( 
            IIviDCPwrOutput * This,
            /* [retval][out] */ IviDCPwrCurrentLimitBehaviorEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OVPLimit )( 
            IIviDCPwrOutput * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OVPLimit )( 
            IIviDCPwrOutput * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OVPEnabled )( 
            IIviDCPwrOutput * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OVPEnabled )( 
            IIviDCPwrOutput * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IIviDCPwrOutputVtbl;

    interface IIviDCPwrOutput
    {
        CONST_VTBL struct IIviDCPwrOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDCPwrOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDCPwrOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDCPwrOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDCPwrOutput_ConfigureCurrentLimit(This,Behavior,Limit)	\
    ( (This)->lpVtbl -> ConfigureCurrentLimit(This,Behavior,Limit) ) 

#define IIviDCPwrOutput_ConfigureRange(This,RangeType,Range)	\
    ( (This)->lpVtbl -> ConfigureRange(This,RangeType,Range) ) 

#define IIviDCPwrOutput_ConfigureOVP(This,Enabled,Limit)	\
    ( (This)->lpVtbl -> ConfigureOVP(This,Enabled,Limit) ) 

#define IIviDCPwrOutput_Measure(This,MeasurementType,Measurement)	\
    ( (This)->lpVtbl -> Measure(This,MeasurementType,Measurement) ) 

#define IIviDCPwrOutput_QueryCurrentLimitMax(This,VoltageLevel,MaxCurrentLimit)	\
    ( (This)->lpVtbl -> QueryCurrentLimitMax(This,VoltageLevel,MaxCurrentLimit) ) 

#define IIviDCPwrOutput_QueryState(This,OutputState,InState)	\
    ( (This)->lpVtbl -> QueryState(This,OutputState,InState) ) 

#define IIviDCPwrOutput_QueryVoltageLevelMax(This,CurrentLimit,MaxVoltageLevel)	\
    ( (This)->lpVtbl -> QueryVoltageLevelMax(This,CurrentLimit,MaxVoltageLevel) ) 

#define IIviDCPwrOutput_ResetOutputProtection(This)	\
    ( (This)->lpVtbl -> ResetOutputProtection(This) ) 

#define IIviDCPwrOutput_put_Enabled(This,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,newVal) ) 

#define IIviDCPwrOutput_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IIviDCPwrOutput_put_TriggerSource(This,newVal)	\
    ( (This)->lpVtbl -> put_TriggerSource(This,newVal) ) 

#define IIviDCPwrOutput_get_TriggerSource(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggerSource(This,pVal) ) 

#define IIviDCPwrOutput_put_TriggeredCurrentLimit(This,newVal)	\
    ( (This)->lpVtbl -> put_TriggeredCurrentLimit(This,newVal) ) 

#define IIviDCPwrOutput_get_TriggeredCurrentLimit(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggeredCurrentLimit(This,pVal) ) 

#define IIviDCPwrOutput_put_TriggeredVoltageLevel(This,newVal)	\
    ( (This)->lpVtbl -> put_TriggeredVoltageLevel(This,newVal) ) 

#define IIviDCPwrOutput_get_TriggeredVoltageLevel(This,pVal)	\
    ( (This)->lpVtbl -> get_TriggeredVoltageLevel(This,pVal) ) 

#define IIviDCPwrOutput_put_VoltageLevel(This,newVal)	\
    ( (This)->lpVtbl -> put_VoltageLevel(This,newVal) ) 

#define IIviDCPwrOutput_get_VoltageLevel(This,pVal)	\
    ( (This)->lpVtbl -> get_VoltageLevel(This,pVal) ) 

#define IIviDCPwrOutput_put_CurrentLimit(This,newVal)	\
    ( (This)->lpVtbl -> put_CurrentLimit(This,newVal) ) 

#define IIviDCPwrOutput_get_CurrentLimit(This,pVal)	\
    ( (This)->lpVtbl -> get_CurrentLimit(This,pVal) ) 

#define IIviDCPwrOutput_put_CurrentLimitBehavior(This,newVal)	\
    ( (This)->lpVtbl -> put_CurrentLimitBehavior(This,newVal) ) 

#define IIviDCPwrOutput_get_CurrentLimitBehavior(This,pVal)	\
    ( (This)->lpVtbl -> get_CurrentLimitBehavior(This,pVal) ) 

#define IIviDCPwrOutput_put_OVPLimit(This,newVal)	\
    ( (This)->lpVtbl -> put_OVPLimit(This,newVal) ) 

#define IIviDCPwrOutput_get_OVPLimit(This,pVal)	\
    ( (This)->lpVtbl -> get_OVPLimit(This,pVal) ) 

#define IIviDCPwrOutput_put_OVPEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_OVPEnabled(This,newVal) ) 

#define IIviDCPwrOutput_get_OVPEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_OVPEnabled(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDCPwrOutput_INTERFACE_DEFINED__ */


#ifndef __IIviDCPwrTrigger_INTERFACE_DEFINED__
#define __IIviDCPwrTrigger_INTERFACE_DEFINED__

/* interface IIviDCPwrTrigger */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDCPwrTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed51b9-a398-11d4-ba58-000064657374")
    IIviDCPwrTrigger : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Initiate( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDCPwrTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDCPwrTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDCPwrTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDCPwrTrigger * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IIviDCPwrTrigger * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initiate )( 
            IIviDCPwrTrigger * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviDCPwrTrigger * This);
        
        END_INTERFACE
    } IIviDCPwrTriggerVtbl;

    interface IIviDCPwrTrigger
    {
        CONST_VTBL struct IIviDCPwrTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDCPwrTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDCPwrTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDCPwrTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDCPwrTrigger_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IIviDCPwrTrigger_Initiate(This)	\
    ( (This)->lpVtbl -> Initiate(This) ) 

#define IIviDCPwrTrigger_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDCPwrTrigger_INTERFACE_DEFINED__ */

#endif /* __IviDCPwrLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


