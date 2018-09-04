

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:59:34 2016
 */
/* Compiler settings for IviSwtchTypeLib.idl:
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


#ifndef __IviSwtchTypeLib_h__
#define __IviSwtchTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviSwtch_FWD_DEFINED__
#define __IIviSwtch_FWD_DEFINED__
typedef interface IIviSwtch IIviSwtch;

#endif 	/* __IIviSwtch_FWD_DEFINED__ */


#ifndef __IIviSwtchPath_FWD_DEFINED__
#define __IIviSwtchPath_FWD_DEFINED__
typedef interface IIviSwtchPath IIviSwtchPath;

#endif 	/* __IIviSwtchPath_FWD_DEFINED__ */


#ifndef __IIviSwtchScan_FWD_DEFINED__
#define __IIviSwtchScan_FWD_DEFINED__
typedef interface IIviSwtchScan IIviSwtchScan;

#endif 	/* __IIviSwtchScan_FWD_DEFINED__ */


#ifndef __IIviSwtchChannels_FWD_DEFINED__
#define __IIviSwtchChannels_FWD_DEFINED__
typedef interface IIviSwtchChannels IIviSwtchChannels;

#endif 	/* __IIviSwtchChannels_FWD_DEFINED__ */


#ifndef __IIviSwtchChannel_FWD_DEFINED__
#define __IIviSwtchChannel_FWD_DEFINED__
typedef interface IIviSwtchChannel IIviSwtchChannel;

#endif 	/* __IIviSwtchChannel_FWD_DEFINED__ */


#ifndef __IIviSwtchCharacteristics_FWD_DEFINED__
#define __IIviSwtchCharacteristics_FWD_DEFINED__
typedef interface IIviSwtchCharacteristics IIviSwtchCharacteristics;

#endif 	/* __IIviSwtchCharacteristics_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_IviSwtchTypeLib_0000_0000 */
/* [local] */ 

#pragma once
#pragma once
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_IviSwtchTypeLib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IviSwtchTypeLib_0000_0000_v0_0_s_ifspec;


#ifndef __IviSwtchLib_LIBRARY_DEFINED__
#define __IviSwtchLib_LIBRARY_DEFINED__

/* library IviSwtchLib */
/* [helpfile][helpstring][version][uuid] */ 







typedef /* [helpcontext][helpstring] */ 
enum IviSwtchErrorCodesEnum
    {
        E_IVISWTCH_TRIGGER_NOT_SOFTWARE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x1001 ) ),
        E_IVISWTCH_INVALID_SWITCH_PATH	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2001 ) ),
        E_IVISWTCH_INVALID_SCAN_LIST	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2002 ) ),
        E_IVISWTCH_RSRC_IN_USE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2003 ) ),
        E_IVISWTCH_EMPTY_SCAN_LIST	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2004 ) ),
        E_IVISWTCH_EMPTY_SWITCH_PATH	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2005 ) ),
        E_IVISWTCH_SCAN_IN_PROGRESS	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2006 ) ),
        E_IVISWTCH_NO_SCAN_IN_PROGRESS	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2007 ) ),
        E_IVISWTCH_NO_SUCH_PATH	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2008 ) ),
        E_IVISWTCH_IS_CONFIGURATION_CHANNEL	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2009 ) ),
        E_IVISWTCH_NOT_A_CONFIGURATION_CHANNEL	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x200a ) ),
        E_IVISWTCH_ATTEMPT_TO_CONNECT_SOURCES	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x200b ) ),
        E_IVISWTCH_EXPLICIT_CONNECTION_EXISTS	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x200c ) ),
        E_IVISWTCH_LEG_MISSING_FIRST_CHANNEL	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x200d ) ),
        E_IVISWTCH_LEG_MISSING_SECOND_CHANNEL	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x200e ) ),
        E_IVISWTCH_CHANNEL_DUPLICATED_IN_LEG	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x200f ) ),
        E_IVISWTCH_CHANNEL_DUPLICATED_IN_PATH	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2010 ) ),
        E_IVISWTCH_PATH_NOT_FOUND	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2011 ) ),
        E_IVISWTCH_DISCONTINUOUS_PATH	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2012 ) ),
        E_IVISWTCH_CANNOT_CONNECT_DIRECTLY	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2013 ) ),
        E_IVISWTCH_CHANNELS_ALREADY_CONNECTED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2014 ) ),
        E_IVISWTCH_CANNOT_CONNECT_TO_ITSELF	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2015 ) ),
        E_IVISWTCH_MAX_TIME_EXCEEDED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2016 ) ),
        S_IVISWTCH_PATH_REMAINS	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2001 ) ),
        S_IVISWTCH_IMPLICIT_CONNECTION_EXISTS	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2002 ) )
    } 	IviSwtchErrorCodesEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSwtchAdvancedOutputEnum
    {
        IviSwtchAdvancedOutputNone	= 0,
        IviSwtchAdvancedOutputExternal	= 2,
        IviSwtchAdvancedOutputGPIBSRQ	= 5,
        IviSwtchAdvancedOutputTTL0	= 111,
        IviSwtchAdvancedOutputTTL1	= 112,
        IviSwtchAdvancedOutputTTL2	= 113,
        IviSwtchAdvancedOutputTTL3	= 114,
        IviSwtchAdvancedOutputTTL4	= 115,
        IviSwtchAdvancedOutputTTL5	= 116,
        IviSwtchAdvancedOutputTTL6	= 117,
        IviSwtchAdvancedOutputTTL7	= 118,
        IviSwtchAdvancedOutputECL0	= 119,
        IviSwtchAdvancedOutputECL1	= 120,
        IviSwtchAdvancedOutputPXIStar	= 125,
        IviSwtchAdvancedOutputRTSI0	= 140,
        IviSwtchAdvancedOutputRTSI1	= 141,
        IviSwtchAdvancedOutputRTSI2	= 142,
        IviSwtchAdvancedOutputRTSI3	= 143,
        IviSwtchAdvancedOutputRTSI4	= 144,
        IviSwtchAdvancedOutputRTSI5	= 145,
        IviSwtchAdvancedOutputRTSI6	= 146
    } 	IviSwtchAdvancedOutputEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSwtchPathCapabilityEnum
    {
        IviSwtchPathAvailable	= 1,
        IviSwtchPathExists	= 2,
        IviSwtchPathUnsupported	= 3,
        IviSwtchPathRsrcInUse	= 4,
        IviSwtchPathSourceConflict	= 5,
        IviSwtchPathChannelNotAvailable	= 6
    } 	IviSwtchPathCapabilityEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSwtchScanModeEnum
    {
        IviSwtchScanModeNone	= 0,
        IviSwtchScanModeBreakBeforeMake	= 1,
        IviSwtchScanModeBreakAfterMake	= 2
    } 	IviSwtchScanModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviSwtchTriggerInputEnum
    {
        IviSwtchTriggerInputImmediate	= 1,
        IviSwtchTriggerInputExternal	= 2,
        IviSwtchTriggerInputSwTrigFunc	= 3,
        IviSwtchTriggerInputTTL0	= 111,
        IviSwtchTriggerInputTTL1	= 112,
        IviSwtchTriggerInputTTL2	= 113,
        IviSwtchTriggerInputTTL3	= 114,
        IviSwtchTriggerInputTTL4	= 115,
        IviSwtchTriggerInputTTL5	= 116,
        IviSwtchTriggerInputTTL6	= 117,
        IviSwtchTriggerInputTTL7	= 118,
        IviSwtchTriggerInputECL0	= 119,
        IviSwtchTriggerInputECL1	= 120,
        IviSwtchTriggerInputPXIStar	= 125,
        IviSwtchTriggerInputRTSI0	= 140,
        IviSwtchTriggerInputRTSI1	= 141,
        IviSwtchTriggerInputRTSI2	= 142,
        IviSwtchTriggerInputRTSI3	= 143,
        IviSwtchTriggerInputRTSI4	= 144,
        IviSwtchTriggerInputRTSI5	= 145,
        IviSwtchTriggerInputRTSI6	= 146
    } 	IviSwtchTriggerInputEnum;


EXTERN_C const IID LIBID_IviSwtchLib;

#ifndef __IIviSwtch_INTERFACE_DEFINED__
#define __IIviSwtch_INTERFACE_DEFINED__

/* interface IIviSwtch */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSwtch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed527e-a398-11d4-ba58-000064657374")
    IIviSwtch : public IIviDriver
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Channels( 
            /* [retval][out] */ IIviSwtchChannels **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ IIviSwtchPath **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Scan( 
            /* [retval][out] */ IIviSwtchScan **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSwtchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSwtch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSwtch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSwtch * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviSwtch * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviSwtch * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviSwtch * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviSwtch * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviSwtch * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviSwtch * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channels )( 
            IIviSwtch * This,
            /* [retval][out] */ IIviSwtchChannels **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IIviSwtch * This,
            /* [retval][out] */ IIviSwtchPath **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scan )( 
            IIviSwtch * This,
            /* [retval][out] */ IIviSwtchScan **pVal);
        
        END_INTERFACE
    } IIviSwtchVtbl;

    interface IIviSwtch
    {
        CONST_VTBL struct IIviSwtchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSwtch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSwtch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSwtch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSwtch_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviSwtch_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviSwtch_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviSwtch_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviSwtch_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviSwtch_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviSwtch_get_Channels(This,pVal)	\
    ( (This)->lpVtbl -> get_Channels(This,pVal) ) 

#define IIviSwtch_get_Path(This,pVal)	\
    ( (This)->lpVtbl -> get_Path(This,pVal) ) 

#define IIviSwtch_get_Scan(This,pVal)	\
    ( (This)->lpVtbl -> get_Scan(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSwtch_INTERFACE_DEFINED__ */


#ifndef __IIviSwtchPath_INTERFACE_DEFINED__
#define __IIviSwtchPath_INTERFACE_DEFINED__

/* interface IIviSwtchPath */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSwtchPath;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed527f-a398-11d4-ba58-000064657374")
    IIviSwtchPath : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CanConnect( 
            /* [in] */ BSTR Channel1,
            /* [in] */ BSTR Channel2,
            /* [retval][out] */ IviSwtchPathCapabilityEnum *PathCapability) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ BSTR Channel1,
            /* [in] */ BSTR Channel2) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Disconnect( 
            /* [in] */ BSTR Channel1,
            /* [in] */ BSTR Channel2) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE DisconnectAll( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetPath( 
            /* [in] */ BSTR Channel1,
            /* [in] */ BSTR Channel2,
            /* [retval][out] */ BSTR *PathList) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDebounced( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetPath( 
            /* [in] */ BSTR PathList) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE WaitForDebounce( 
            /* [in] */ LONG MaxTimeMilliseconds) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSwtchPathVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSwtchPath * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSwtchPath * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSwtchPath * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CanConnect )( 
            IIviSwtchPath * This,
            /* [in] */ BSTR Channel1,
            /* [in] */ BSTR Channel2,
            /* [retval][out] */ IviSwtchPathCapabilityEnum *PathCapability);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IIviSwtchPath * This,
            /* [in] */ BSTR Channel1,
            /* [in] */ BSTR Channel2);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IIviSwtchPath * This,
            /* [in] */ BSTR Channel1,
            /* [in] */ BSTR Channel2);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *DisconnectAll )( 
            IIviSwtchPath * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            IIviSwtchPath * This,
            /* [in] */ BSTR Channel1,
            /* [in] */ BSTR Channel2,
            /* [retval][out] */ BSTR *PathList);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDebounced )( 
            IIviSwtchPath * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPath )( 
            IIviSwtchPath * This,
            /* [in] */ BSTR PathList);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *WaitForDebounce )( 
            IIviSwtchPath * This,
            /* [in] */ LONG MaxTimeMilliseconds);
        
        END_INTERFACE
    } IIviSwtchPathVtbl;

    interface IIviSwtchPath
    {
        CONST_VTBL struct IIviSwtchPathVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSwtchPath_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSwtchPath_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSwtchPath_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSwtchPath_CanConnect(This,Channel1,Channel2,PathCapability)	\
    ( (This)->lpVtbl -> CanConnect(This,Channel1,Channel2,PathCapability) ) 

#define IIviSwtchPath_Connect(This,Channel1,Channel2)	\
    ( (This)->lpVtbl -> Connect(This,Channel1,Channel2) ) 

#define IIviSwtchPath_Disconnect(This,Channel1,Channel2)	\
    ( (This)->lpVtbl -> Disconnect(This,Channel1,Channel2) ) 

#define IIviSwtchPath_DisconnectAll(This)	\
    ( (This)->lpVtbl -> DisconnectAll(This) ) 

#define IIviSwtchPath_GetPath(This,Channel1,Channel2,PathList)	\
    ( (This)->lpVtbl -> GetPath(This,Channel1,Channel2,PathList) ) 

#define IIviSwtchPath_get_IsDebounced(This,pVal)	\
    ( (This)->lpVtbl -> get_IsDebounced(This,pVal) ) 

#define IIviSwtchPath_SetPath(This,PathList)	\
    ( (This)->lpVtbl -> SetPath(This,PathList) ) 

#define IIviSwtchPath_WaitForDebounce(This,MaxTimeMilliseconds)	\
    ( (This)->lpVtbl -> WaitForDebounce(This,MaxTimeMilliseconds) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSwtchPath_INTERFACE_DEFINED__ */


#ifndef __IIviSwtchScan_INTERFACE_DEFINED__
#define __IIviSwtchScan_INTERFACE_DEFINED__

/* interface IIviSwtchScan */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSwtchScan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5280-a398-11d4-ba58-000064657374")
    IIviSwtchScan : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureList( 
            /* [in] */ BSTR List,
            /* [in] */ IviSwtchScanModeEnum Mode) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureTrigger( 
            /* [in] */ DOUBLE ScanDelay,
            /* [in] */ IviSwtchTriggerInputEnum TriggerInput,
            /* [in] */ IviSwtchAdvancedOutputEnum AdvancedOutput) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Initiate( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsScanning( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE WaitForScanComplete( 
            /* [in] */ LONG MaxTimeMilliseconds) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Continuous( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Continuous( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfColumns( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfRows( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AdvancedOutput( 
            /* [in] */ IviSwtchAdvancedOutputEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedOutput( 
            /* [retval][out] */ IviSwtchAdvancedOutputEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Input( 
            /* [in] */ IviSwtchTriggerInputEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Input( 
            /* [retval][out] */ IviSwtchTriggerInputEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_List( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_List( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ IviSwtchScanModeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ IviSwtchScanModeEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSwtchScanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSwtchScan * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSwtchScan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSwtchScan * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureList )( 
            IIviSwtchScan * This,
            /* [in] */ BSTR List,
            /* [in] */ IviSwtchScanModeEnum Mode);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureTrigger )( 
            IIviSwtchScan * This,
            /* [in] */ DOUBLE ScanDelay,
            /* [in] */ IviSwtchTriggerInputEnum TriggerInput,
            /* [in] */ IviSwtchAdvancedOutputEnum AdvancedOutput);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initiate )( 
            IIviSwtchScan * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IIviSwtchScan * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsScanning )( 
            IIviSwtchScan * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviSwtchScan * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *WaitForScanComplete )( 
            IIviSwtchScan * This,
            /* [in] */ LONG MaxTimeMilliseconds);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Continuous )( 
            IIviSwtchScan * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Continuous )( 
            IIviSwtchScan * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfColumns )( 
            IIviSwtchScan * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfRows )( 
            IIviSwtchScan * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdvancedOutput )( 
            IIviSwtchScan * This,
            /* [in] */ IviSwtchAdvancedOutputEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedOutput )( 
            IIviSwtchScan * This,
            /* [retval][out] */ IviSwtchAdvancedOutputEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviSwtchScan * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviSwtchScan * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Input )( 
            IIviSwtchScan * This,
            /* [in] */ IviSwtchTriggerInputEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Input )( 
            IIviSwtchScan * This,
            /* [retval][out] */ IviSwtchTriggerInputEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_List )( 
            IIviSwtchScan * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_List )( 
            IIviSwtchScan * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Mode )( 
            IIviSwtchScan * This,
            /* [in] */ IviSwtchScanModeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            IIviSwtchScan * This,
            /* [retval][out] */ IviSwtchScanModeEnum *pVal);
        
        END_INTERFACE
    } IIviSwtchScanVtbl;

    interface IIviSwtchScan
    {
        CONST_VTBL struct IIviSwtchScanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSwtchScan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSwtchScan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSwtchScan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSwtchScan_ConfigureList(This,List,Mode)	\
    ( (This)->lpVtbl -> ConfigureList(This,List,Mode) ) 

#define IIviSwtchScan_ConfigureTrigger(This,ScanDelay,TriggerInput,AdvancedOutput)	\
    ( (This)->lpVtbl -> ConfigureTrigger(This,ScanDelay,TriggerInput,AdvancedOutput) ) 

#define IIviSwtchScan_Initiate(This)	\
    ( (This)->lpVtbl -> Initiate(This) ) 

#define IIviSwtchScan_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IIviSwtchScan_get_IsScanning(This,pVal)	\
    ( (This)->lpVtbl -> get_IsScanning(This,pVal) ) 

#define IIviSwtchScan_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IIviSwtchScan_WaitForScanComplete(This,MaxTimeMilliseconds)	\
    ( (This)->lpVtbl -> WaitForScanComplete(This,MaxTimeMilliseconds) ) 

#define IIviSwtchScan_put_Continuous(This,newVal)	\
    ( (This)->lpVtbl -> put_Continuous(This,newVal) ) 

#define IIviSwtchScan_get_Continuous(This,pVal)	\
    ( (This)->lpVtbl -> get_Continuous(This,pVal) ) 

#define IIviSwtchScan_get_NumberOfColumns(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberOfColumns(This,pVal) ) 

#define IIviSwtchScan_get_NumberOfRows(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberOfRows(This,pVal) ) 

#define IIviSwtchScan_put_AdvancedOutput(This,newVal)	\
    ( (This)->lpVtbl -> put_AdvancedOutput(This,newVal) ) 

#define IIviSwtchScan_get_AdvancedOutput(This,pVal)	\
    ( (This)->lpVtbl -> get_AdvancedOutput(This,pVal) ) 

#define IIviSwtchScan_put_Delay(This,newVal)	\
    ( (This)->lpVtbl -> put_Delay(This,newVal) ) 

#define IIviSwtchScan_get_Delay(This,pVal)	\
    ( (This)->lpVtbl -> get_Delay(This,pVal) ) 

#define IIviSwtchScan_put_Input(This,newVal)	\
    ( (This)->lpVtbl -> put_Input(This,newVal) ) 

#define IIviSwtchScan_get_Input(This,pVal)	\
    ( (This)->lpVtbl -> get_Input(This,pVal) ) 

#define IIviSwtchScan_put_List(This,newVal)	\
    ( (This)->lpVtbl -> put_List(This,newVal) ) 

#define IIviSwtchScan_get_List(This,pVal)	\
    ( (This)->lpVtbl -> get_List(This,pVal) ) 

#define IIviSwtchScan_put_Mode(This,newVal)	\
    ( (This)->lpVtbl -> put_Mode(This,newVal) ) 

#define IIviSwtchScan_get_Mode(This,pVal)	\
    ( (This)->lpVtbl -> get_Mode(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSwtchScan_INTERFACE_DEFINED__ */


#ifndef __IIviSwtchChannels_INTERFACE_DEFINED__
#define __IIviSwtchChannels_INTERFACE_DEFINED__

/* interface IIviSwtchChannels */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSwtchChannels;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5281-a398-11d4-ba58-000064657374")
    IIviSwtchChannels : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviSwtchChannel **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *Name) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSwtchChannelsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSwtchChannels * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSwtchChannels * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSwtchChannels * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviSwtchChannels * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviSwtchChannel **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviSwtchChannels * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviSwtchChannels * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *Name);
        
        END_INTERFACE
    } IIviSwtchChannelsVtbl;

    interface IIviSwtchChannels
    {
        CONST_VTBL struct IIviSwtchChannelsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSwtchChannels_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSwtchChannels_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSwtchChannels_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSwtchChannels_get_Item(This,Name,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Name,pVal) ) 

#define IIviSwtchChannels_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviSwtchChannels_get_Name(This,Index,Name)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSwtchChannels_INTERFACE_DEFINED__ */


#ifndef __IIviSwtchChannel_INTERFACE_DEFINED__
#define __IIviSwtchChannel_INTERFACE_DEFINED__

/* interface IIviSwtchChannel */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSwtchChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5282-a398-11d4-ba58-000064657374")
    IIviSwtchChannel : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsConfigurationChannel( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsConfigurationChannel( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsSourceChannel( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsSourceChannel( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Characteristics( 
            /* [retval][out] */ IIviSwtchCharacteristics **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSwtchChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSwtchChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSwtchChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSwtchChannel * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsConfigurationChannel )( 
            IIviSwtchChannel * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConfigurationChannel )( 
            IIviSwtchChannel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsSourceChannel )( 
            IIviSwtchChannel * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSourceChannel )( 
            IIviSwtchChannel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Characteristics )( 
            IIviSwtchChannel * This,
            /* [retval][out] */ IIviSwtchCharacteristics **pVal);
        
        END_INTERFACE
    } IIviSwtchChannelVtbl;

    interface IIviSwtchChannel
    {
        CONST_VTBL struct IIviSwtchChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSwtchChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSwtchChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSwtchChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSwtchChannel_put_IsConfigurationChannel(This,newVal)	\
    ( (This)->lpVtbl -> put_IsConfigurationChannel(This,newVal) ) 

#define IIviSwtchChannel_get_IsConfigurationChannel(This,pVal)	\
    ( (This)->lpVtbl -> get_IsConfigurationChannel(This,pVal) ) 

#define IIviSwtchChannel_put_IsSourceChannel(This,newVal)	\
    ( (This)->lpVtbl -> put_IsSourceChannel(This,newVal) ) 

#define IIviSwtchChannel_get_IsSourceChannel(This,pVal)	\
    ( (This)->lpVtbl -> get_IsSourceChannel(This,pVal) ) 

#define IIviSwtchChannel_get_Characteristics(This,pVal)	\
    ( (This)->lpVtbl -> get_Characteristics(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSwtchChannel_INTERFACE_DEFINED__ */


#ifndef __IIviSwtchCharacteristics_INTERFACE_DEFINED__
#define __IIviSwtchCharacteristics_INTERFACE_DEFINED__

/* interface IIviSwtchCharacteristics */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviSwtchCharacteristics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5283-a398-11d4-ba58-000064657374")
    IIviSwtchCharacteristics : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ACCurrentCarryMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ACCurrentSwitchingMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ACPowerCarryMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ACPowerSwitchingMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ACVoltageMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Bandwidth( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DCCurrentCarryMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DCCurrentSwitchingMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DCPowerCarryMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DCPowerSwitchingMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DCVoltageMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Impedance( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SettlingTime( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_WireMode( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviSwtchCharacteristicsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviSwtchCharacteristics * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviSwtchCharacteristics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviSwtchCharacteristics * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ACCurrentCarryMax )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ACCurrentSwitchingMax )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ACPowerCarryMax )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ACPowerSwitchingMax )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ACVoltageMax )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCCurrentCarryMax )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCCurrentSwitchingMax )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCPowerCarryMax )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCPowerSwitchingMax )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCVoltageMax )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Impedance )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SettlingTime )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WireMode )( 
            IIviSwtchCharacteristics * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IIviSwtchCharacteristicsVtbl;

    interface IIviSwtchCharacteristics
    {
        CONST_VTBL struct IIviSwtchCharacteristicsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviSwtchCharacteristics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviSwtchCharacteristics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviSwtchCharacteristics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviSwtchCharacteristics_get_ACCurrentCarryMax(This,pVal)	\
    ( (This)->lpVtbl -> get_ACCurrentCarryMax(This,pVal) ) 

#define IIviSwtchCharacteristics_get_ACCurrentSwitchingMax(This,pVal)	\
    ( (This)->lpVtbl -> get_ACCurrentSwitchingMax(This,pVal) ) 

#define IIviSwtchCharacteristics_get_ACPowerCarryMax(This,pVal)	\
    ( (This)->lpVtbl -> get_ACPowerCarryMax(This,pVal) ) 

#define IIviSwtchCharacteristics_get_ACPowerSwitchingMax(This,pVal)	\
    ( (This)->lpVtbl -> get_ACPowerSwitchingMax(This,pVal) ) 

#define IIviSwtchCharacteristics_get_ACVoltageMax(This,pVal)	\
    ( (This)->lpVtbl -> get_ACVoltageMax(This,pVal) ) 

#define IIviSwtchCharacteristics_get_Bandwidth(This,pVal)	\
    ( (This)->lpVtbl -> get_Bandwidth(This,pVal) ) 

#define IIviSwtchCharacteristics_get_DCCurrentCarryMax(This,pVal)	\
    ( (This)->lpVtbl -> get_DCCurrentCarryMax(This,pVal) ) 

#define IIviSwtchCharacteristics_get_DCCurrentSwitchingMax(This,pVal)	\
    ( (This)->lpVtbl -> get_DCCurrentSwitchingMax(This,pVal) ) 

#define IIviSwtchCharacteristics_get_DCPowerCarryMax(This,pVal)	\
    ( (This)->lpVtbl -> get_DCPowerCarryMax(This,pVal) ) 

#define IIviSwtchCharacteristics_get_DCPowerSwitchingMax(This,pVal)	\
    ( (This)->lpVtbl -> get_DCPowerSwitchingMax(This,pVal) ) 

#define IIviSwtchCharacteristics_get_DCVoltageMax(This,pVal)	\
    ( (This)->lpVtbl -> get_DCVoltageMax(This,pVal) ) 

#define IIviSwtchCharacteristics_get_Impedance(This,pVal)	\
    ( (This)->lpVtbl -> get_Impedance(This,pVal) ) 

#define IIviSwtchCharacteristics_get_SettlingTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SettlingTime(This,pVal) ) 

#define IIviSwtchCharacteristics_get_WireMode(This,pVal)	\
    ( (This)->lpVtbl -> get_WireMode(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviSwtchCharacteristics_INTERFACE_DEFINED__ */

#endif /* __IviSwtchLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


