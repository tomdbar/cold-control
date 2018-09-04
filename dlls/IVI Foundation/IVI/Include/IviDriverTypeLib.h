

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:54:36 2016
 */
/* Compiler settings for IviDriverTypeLib.idl:
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


#ifndef __IviDriverTypeLib_h__
#define __IviDriverTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviDriver_FWD_DEFINED__
#define __IIviDriver_FWD_DEFINED__
typedef interface IIviDriver IIviDriver;

#endif 	/* __IIviDriver_FWD_DEFINED__ */


#ifndef __IIviDriverUtility_FWD_DEFINED__
#define __IIviDriverUtility_FWD_DEFINED__
typedef interface IIviDriverUtility IIviDriverUtility;

#endif 	/* __IIviDriverUtility_FWD_DEFINED__ */


#ifndef __IIviComponentIdentity_FWD_DEFINED__
#define __IIviComponentIdentity_FWD_DEFINED__
typedef interface IIviComponentIdentity IIviComponentIdentity;

#endif 	/* __IIviComponentIdentity_FWD_DEFINED__ */


#ifndef __IIviDriverIdentity_FWD_DEFINED__
#define __IIviDriverIdentity_FWD_DEFINED__
typedef interface IIviDriverIdentity IIviDriverIdentity;

#endif 	/* __IIviDriverIdentity_FWD_DEFINED__ */


#ifndef __IIviDriverOperation_FWD_DEFINED__
#define __IIviDriverOperation_FWD_DEFINED__
typedef interface IIviDriverOperation IIviDriverOperation;

#endif 	/* __IIviDriverOperation_FWD_DEFINED__ */


#ifndef __IIviClassWrapper_FWD_DEFINED__
#define __IIviClassWrapper_FWD_DEFINED__
typedef interface IIviClassWrapper IIviClassWrapper;

#endif 	/* __IIviClassWrapper_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __IviDriverLib_LIBRARY_DEFINED__
#define __IviDriverLib_LIBRARY_DEFINED__

/* library IviDriverLib */
/* [helpfile][helpstring][version][uuid] */ 

#pragma once
#pragma once
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#pragma once
#pragma once







typedef /* [helpcontext][helpstring] */ 
enum IviDriver_ErrorCodes
    {
        S_IVI_SUCCESS	= ( HRESULT  )0,
        E_IVI_CANNOT_RECOVER	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7000 ) ),
        E_IVI_INSTRUMENT_STATUS	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7001 ) ),
        E_IVI_CANNOT_OPEN_FILE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7002 ) ),
        E_IVI_READING_FILE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7003 ) ),
        E_IVI_WRITING_FILE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7004 ) ),
        E_IVI_INVALID_PATHNAME	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x700b ) ),
        E_IVI_INVALID_VALUE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7010 ) ),
        E_IVI_METHOD_NOT_SUPPORTED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7011 ) ),
        E_IVI_PROPERTY_NOT_SUPPORTED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7012 ) ),
        E_IVI_VALUE_NOT_SUPPORTED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7013 ) ),
        E_IVI_NOT_INITIALIZED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x701d ) ),
        E_IVI_UNKNOWN_CHANNEL_NAME	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7020 ) ),
        E_IVI_TOO_MANY_OPEN_FILES	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7023 ) ),
        E_IVI_CHANNEL_NAME_REQUIRED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7044 ) ),
        E_IVI_MISSING_OPTION_NAME	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7049 ) ),
        E_IVI_MISSING_OPTION_VALUE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x704a ) ),
        E_IVI_BAD_OPTION_NAME	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x704b ) ),
        E_IVI_BAD_OPTION_VALUE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x704c ) ),
        E_IVI_OUT_OF_MEMORY	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7056 ) ),
        E_IVI_OPERATION_PENDING	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7057 ) ),
        E_IVI_NULL_POINTER	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7058 ) ),
        E_IVI_UNEXPECTED_RESPONSE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7059 ) ),
        E_IVI_FILE_NOT_FOUND	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x705b ) ),
        E_IVI_INVALID_FILE_FORMAT	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x705c ) ),
        E_IVI_STATUS_NOT_AVAILABLE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x705d ) ),
        E_IVI_ID_QUERY_FAILED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x705e ) ),
        E_IVI_RESET_FAILED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x705f ) ),
        E_IVI_RESOURCE_UNKNOWN	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7060 ) ),
        E_IVI_ALREADY_INITIALIZED	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7061 ) ),
        E_IVI_CANNOT_CHANGE_SIMULATION_STATE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7062 ) ),
        E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7063 ) ),
        E_IVI_INVALID_RANGE_IN_SELECTOR	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7064 ) ),
        E_IVI_UNKNOWN_NAME_IN_SELECTOR	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7065 ) ),
        E_IVI_BADLY_FORMED_SELECTOR	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7066 ) ),
        E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7067 ) ),
        S_IVI_NSUP_ID_QUERY	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7065 ) ),
        S_IVI_NSUP_RESET	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7066 ) ),
        S_IVI_NSUP_SELF_TEST	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7067 ) ),
        S_IVI_NSUP_ERROR_QUERY	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7068 ) ),
        S_IVI_NSUP_REV_QUERY	= ( HRESULT  )(( ( ( ( unsigned long  )0 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x7069 ) )
    } 	IviDriver_ErrorCodes;


EXTERN_C const IID LIBID_IviDriverLib;

#ifndef __IIviDriver_INTERFACE_DEFINED__
#define __IIviDriver_INTERFACE_DEFINED__

/* interface IIviDriver */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 




EXTERN_C const IID IID_IIviDriver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5184-a398-11d4-ba58-000064657374")
    IIviDriver : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DriverOperation( 
            /* [retval][out] */ IIviDriverOperation **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Identity( 
            /* [retval][out] */ IIviDriverIdentity **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Utility( 
            /* [retval][out] */ IIviDriverUtility **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Initialized( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDriverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDriver * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDriver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDriver * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviDriver * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviDriver * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviDriver * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviDriver * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviDriver * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviDriver * This);
        
        END_INTERFACE
    } IIviDriverVtbl;

    interface IIviDriver
    {
        CONST_VTBL struct IIviDriverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDriver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDriver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDriver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDriver_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviDriver_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviDriver_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviDriver_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviDriver_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviDriver_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDriver_INTERFACE_DEFINED__ */


#ifndef __IIviDriverUtility_INTERFACE_DEFINED__
#define __IIviDriverUtility_INTERFACE_DEFINED__

/* interface IIviDriverUtility */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDriverUtility;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5189-a398-11d4-ba58-000064657374")
    IIviDriverUtility : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ResetWithDefaults( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Disable( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SelfTest( 
            /* [out][in] */ long *TestResult,
            /* [out][in] */ BSTR *TestMessage) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ErrorQuery( 
            /* [out][in] */ long *ErrorCode,
            /* [out][in] */ BSTR *ErrorMessage) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE LockObject( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE UnlockObject( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDriverUtilityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDriverUtility * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDriverUtility * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDriverUtility * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IIviDriverUtility * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResetWithDefaults )( 
            IIviDriverUtility * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Disable )( 
            IIviDriverUtility * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SelfTest )( 
            IIviDriverUtility * This,
            /* [out][in] */ long *TestResult,
            /* [out][in] */ BSTR *TestMessage);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ErrorQuery )( 
            IIviDriverUtility * This,
            /* [out][in] */ long *ErrorCode,
            /* [out][in] */ BSTR *ErrorMessage);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *LockObject )( 
            IIviDriverUtility * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnlockObject )( 
            IIviDriverUtility * This);
        
        END_INTERFACE
    } IIviDriverUtilityVtbl;

    interface IIviDriverUtility
    {
        CONST_VTBL struct IIviDriverUtilityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDriverUtility_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDriverUtility_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDriverUtility_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDriverUtility_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IIviDriverUtility_ResetWithDefaults(This)	\
    ( (This)->lpVtbl -> ResetWithDefaults(This) ) 

#define IIviDriverUtility_Disable(This)	\
    ( (This)->lpVtbl -> Disable(This) ) 

#define IIviDriverUtility_SelfTest(This,TestResult,TestMessage)	\
    ( (This)->lpVtbl -> SelfTest(This,TestResult,TestMessage) ) 

#define IIviDriverUtility_ErrorQuery(This,ErrorCode,ErrorMessage)	\
    ( (This)->lpVtbl -> ErrorQuery(This,ErrorCode,ErrorMessage) ) 

#define IIviDriverUtility_LockObject(This)	\
    ( (This)->lpVtbl -> LockObject(This) ) 

#define IIviDriverUtility_UnlockObject(This)	\
    ( (This)->lpVtbl -> UnlockObject(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDriverUtility_INTERFACE_DEFINED__ */


#ifndef __IIviComponentIdentity_INTERFACE_DEFINED__
#define __IIviComponentIdentity_INTERFACE_DEFINED__

/* interface IIviComponentIdentity */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviComponentIdentity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5185-a398-11d4-ba58-000064657374")
    IIviComponentIdentity : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Revision( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Vendor( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviComponentIdentityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviComponentIdentity * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviComponentIdentity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviComponentIdentity * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IIviComponentIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Revision )( 
            IIviComponentIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vendor )( 
            IIviComponentIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IIviComponentIdentityVtbl;

    interface IIviComponentIdentity
    {
        CONST_VTBL struct IIviComponentIdentityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviComponentIdentity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviComponentIdentity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviComponentIdentity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviComponentIdentity_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IIviComponentIdentity_get_Revision(This,pVal)	\
    ( (This)->lpVtbl -> get_Revision(This,pVal) ) 

#define IIviComponentIdentity_get_Vendor(This,pVal)	\
    ( (This)->lpVtbl -> get_Vendor(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviComponentIdentity_INTERFACE_DEFINED__ */


#ifndef __IIviDriverIdentity_INTERFACE_DEFINED__
#define __IIviDriverIdentity_INTERFACE_DEFINED__

/* interface IIviDriverIdentity */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDriverIdentity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5186-a398-11d4-ba58-000064657374")
    IIviDriverIdentity : public IIviComponentIdentity
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InstrumentManufacturer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InstrumentModel( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InstrumentFirmwareRevision( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Identifier( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SupportedInstrumentModels( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SpecificationMajorVersion( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SpecificationMinorVersion( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GroupCapabilities( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDriverIdentityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDriverIdentity * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDriverIdentity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDriverIdentity * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IIviDriverIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Revision )( 
            IIviDriverIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vendor )( 
            IIviDriverIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InstrumentManufacturer )( 
            IIviDriverIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InstrumentModel )( 
            IIviDriverIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InstrumentFirmwareRevision )( 
            IIviDriverIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identifier )( 
            IIviDriverIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportedInstrumentModels )( 
            IIviDriverIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpecificationMajorVersion )( 
            IIviDriverIdentity * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpecificationMinorVersion )( 
            IIviDriverIdentity * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GroupCapabilities )( 
            IIviDriverIdentity * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IIviDriverIdentityVtbl;

    interface IIviDriverIdentity
    {
        CONST_VTBL struct IIviDriverIdentityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDriverIdentity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDriverIdentity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDriverIdentity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDriverIdentity_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IIviDriverIdentity_get_Revision(This,pVal)	\
    ( (This)->lpVtbl -> get_Revision(This,pVal) ) 

#define IIviDriverIdentity_get_Vendor(This,pVal)	\
    ( (This)->lpVtbl -> get_Vendor(This,pVal) ) 


#define IIviDriverIdentity_get_InstrumentManufacturer(This,pVal)	\
    ( (This)->lpVtbl -> get_InstrumentManufacturer(This,pVal) ) 

#define IIviDriverIdentity_get_InstrumentModel(This,pVal)	\
    ( (This)->lpVtbl -> get_InstrumentModel(This,pVal) ) 

#define IIviDriverIdentity_get_InstrumentFirmwareRevision(This,pVal)	\
    ( (This)->lpVtbl -> get_InstrumentFirmwareRevision(This,pVal) ) 

#define IIviDriverIdentity_get_Identifier(This,pVal)	\
    ( (This)->lpVtbl -> get_Identifier(This,pVal) ) 

#define IIviDriverIdentity_get_SupportedInstrumentModels(This,pVal)	\
    ( (This)->lpVtbl -> get_SupportedInstrumentModels(This,pVal) ) 

#define IIviDriverIdentity_get_SpecificationMajorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_SpecificationMajorVersion(This,pVal) ) 

#define IIviDriverIdentity_get_SpecificationMinorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_SpecificationMinorVersion(This,pVal) ) 

#define IIviDriverIdentity_get_GroupCapabilities(This,pVal)	\
    ( (This)->lpVtbl -> get_GroupCapabilities(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDriverIdentity_INTERFACE_DEFINED__ */


#ifndef __IIviDriverOperation_INTERFACE_DEFINED__
#define __IIviDriverOperation_INTERFACE_DEFINED__

/* interface IIviDriverOperation */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviDriverOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5188-a398-11d4-ba58-000064657374")
    IIviDriverOperation : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LogicalName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IoResourceDescriptor( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Cache( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Cache( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InterchangeCheck( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InterchangeCheck( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_QueryInstrumentStatus( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_QueryInstrumentStatus( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RangeCheck( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RangeCheck( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RecordCoercions( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RecordCoercions( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Simulate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Simulate( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DriverSetup( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE InvalidateAllAttributes( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ClearInterchangeWarnings( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetNextInterchangeWarning( 
            /* [retval][out] */ BSTR *InterchangeWarning) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ResetInterchangeCheck( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetNextCoercionRecord( 
            /* [retval][out] */ BSTR *CoercionRecord) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviDriverOperationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviDriverOperation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviDriverOperation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviDriverOperation * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogicalName )( 
            IIviDriverOperation * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IoResourceDescriptor )( 
            IIviDriverOperation * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Cache )( 
            IIviDriverOperation * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Cache )( 
            IIviDriverOperation * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InterchangeCheck )( 
            IIviDriverOperation * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InterchangeCheck )( 
            IIviDriverOperation * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_QueryInstrumentStatus )( 
            IIviDriverOperation * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_QueryInstrumentStatus )( 
            IIviDriverOperation * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RangeCheck )( 
            IIviDriverOperation * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RangeCheck )( 
            IIviDriverOperation * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecordCoercions )( 
            IIviDriverOperation * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RecordCoercions )( 
            IIviDriverOperation * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Simulate )( 
            IIviDriverOperation * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Simulate )( 
            IIviDriverOperation * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverSetup )( 
            IIviDriverOperation * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InvalidateAllAttributes )( 
            IIviDriverOperation * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearInterchangeWarnings )( 
            IIviDriverOperation * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNextInterchangeWarning )( 
            IIviDriverOperation * This,
            /* [retval][out] */ BSTR *InterchangeWarning);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResetInterchangeCheck )( 
            IIviDriverOperation * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNextCoercionRecord )( 
            IIviDriverOperation * This,
            /* [retval][out] */ BSTR *CoercionRecord);
        
        END_INTERFACE
    } IIviDriverOperationVtbl;

    interface IIviDriverOperation
    {
        CONST_VTBL struct IIviDriverOperationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviDriverOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviDriverOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviDriverOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviDriverOperation_get_LogicalName(This,pVal)	\
    ( (This)->lpVtbl -> get_LogicalName(This,pVal) ) 

#define IIviDriverOperation_get_IoResourceDescriptor(This,pVal)	\
    ( (This)->lpVtbl -> get_IoResourceDescriptor(This,pVal) ) 

#define IIviDriverOperation_get_Cache(This,pVal)	\
    ( (This)->lpVtbl -> get_Cache(This,pVal) ) 

#define IIviDriverOperation_put_Cache(This,newVal)	\
    ( (This)->lpVtbl -> put_Cache(This,newVal) ) 

#define IIviDriverOperation_get_InterchangeCheck(This,pVal)	\
    ( (This)->lpVtbl -> get_InterchangeCheck(This,pVal) ) 

#define IIviDriverOperation_put_InterchangeCheck(This,newVal)	\
    ( (This)->lpVtbl -> put_InterchangeCheck(This,newVal) ) 

#define IIviDriverOperation_get_QueryInstrumentStatus(This,pVal)	\
    ( (This)->lpVtbl -> get_QueryInstrumentStatus(This,pVal) ) 

#define IIviDriverOperation_put_QueryInstrumentStatus(This,newVal)	\
    ( (This)->lpVtbl -> put_QueryInstrumentStatus(This,newVal) ) 

#define IIviDriverOperation_get_RangeCheck(This,pVal)	\
    ( (This)->lpVtbl -> get_RangeCheck(This,pVal) ) 

#define IIviDriverOperation_put_RangeCheck(This,newVal)	\
    ( (This)->lpVtbl -> put_RangeCheck(This,newVal) ) 

#define IIviDriverOperation_get_RecordCoercions(This,pVal)	\
    ( (This)->lpVtbl -> get_RecordCoercions(This,pVal) ) 

#define IIviDriverOperation_put_RecordCoercions(This,newVal)	\
    ( (This)->lpVtbl -> put_RecordCoercions(This,newVal) ) 

#define IIviDriverOperation_get_Simulate(This,pVal)	\
    ( (This)->lpVtbl -> get_Simulate(This,pVal) ) 

#define IIviDriverOperation_put_Simulate(This,newVal)	\
    ( (This)->lpVtbl -> put_Simulate(This,newVal) ) 

#define IIviDriverOperation_get_DriverSetup(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverSetup(This,pVal) ) 

#define IIviDriverOperation_InvalidateAllAttributes(This)	\
    ( (This)->lpVtbl -> InvalidateAllAttributes(This) ) 

#define IIviDriverOperation_ClearInterchangeWarnings(This)	\
    ( (This)->lpVtbl -> ClearInterchangeWarnings(This) ) 

#define IIviDriverOperation_GetNextInterchangeWarning(This,InterchangeWarning)	\
    ( (This)->lpVtbl -> GetNextInterchangeWarning(This,InterchangeWarning) ) 

#define IIviDriverOperation_ResetInterchangeCheck(This)	\
    ( (This)->lpVtbl -> ResetInterchangeCheck(This) ) 

#define IIviDriverOperation_GetNextCoercionRecord(This,CoercionRecord)	\
    ( (This)->lpVtbl -> GetNextCoercionRecord(This,CoercionRecord) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviDriverOperation_INTERFACE_DEFINED__ */


#ifndef __IIviClassWrapper_INTERFACE_DEFINED__
#define __IIviClassWrapper_INTERFACE_DEFINED__

/* interface IIviClassWrapper */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviClassWrapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed518a-a398-11d4-ba58-000064657374")
    IIviClassWrapper : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AttachToExistingCSession( 
            /* [in] */ long Vi) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NativeCHandle( 
            /* [retval][out] */ long *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviClassWrapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviClassWrapper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviClassWrapper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviClassWrapper * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *AttachToExistingCSession )( 
            IIviClassWrapper * This,
            /* [in] */ long Vi);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NativeCHandle )( 
            IIviClassWrapper * This,
            /* [retval][out] */ long *pVal);
        
        END_INTERFACE
    } IIviClassWrapperVtbl;

    interface IIviClassWrapper
    {
        CONST_VTBL struct IIviClassWrapperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviClassWrapper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviClassWrapper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviClassWrapper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviClassWrapper_AttachToExistingCSession(This,Vi)	\
    ( (This)->lpVtbl -> AttachToExistingCSession(This,Vi) ) 

#define IIviClassWrapper_get_NativeCHandle(This,pVal)	\
    ( (This)->lpVtbl -> get_NativeCHandle(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviClassWrapper_INTERFACE_DEFINED__ */

#endif /* __IviDriverLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


