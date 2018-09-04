

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 28 13:58:42 2016
 */
/* Compiler settings for IviFgenTypeLib.idl:
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


#ifndef __IviFgenTypeLib_h__
#define __IviFgenTypeLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIviFgen_FWD_DEFINED__
#define __IIviFgen_FWD_DEFINED__
typedef interface IIviFgen IIviFgen;

#endif 	/* __IIviFgen_FWD_DEFINED__ */


#ifndef __IIviFgenOutput_FWD_DEFINED__
#define __IIviFgenOutput_FWD_DEFINED__
typedef interface IIviFgenOutput IIviFgenOutput;

#endif 	/* __IIviFgenOutput_FWD_DEFINED__ */


#ifndef __IIviFgenStandardWaveform_FWD_DEFINED__
#define __IIviFgenStandardWaveform_FWD_DEFINED__
typedef interface IIviFgenStandardWaveform IIviFgenStandardWaveform;

#endif 	/* __IIviFgenStandardWaveform_FWD_DEFINED__ */


#ifndef __IIviFgenArbitrary_FWD_DEFINED__
#define __IIviFgenArbitrary_FWD_DEFINED__
typedef interface IIviFgenArbitrary IIviFgenArbitrary;

#endif 	/* __IIviFgenArbitrary_FWD_DEFINED__ */


#ifndef __IIviFgenArbitraryWaveform_FWD_DEFINED__
#define __IIviFgenArbitraryWaveform_FWD_DEFINED__
typedef interface IIviFgenArbitraryWaveform IIviFgenArbitraryWaveform;

#endif 	/* __IIviFgenArbitraryWaveform_FWD_DEFINED__ */


#ifndef __IIviFgenArbitrarySequence_FWD_DEFINED__
#define __IIviFgenArbitrarySequence_FWD_DEFINED__
typedef interface IIviFgenArbitrarySequence IIviFgenArbitrarySequence;

#endif 	/* __IIviFgenArbitrarySequence_FWD_DEFINED__ */


#ifndef __IIviFgenTrigger_FWD_DEFINED__
#define __IIviFgenTrigger_FWD_DEFINED__
typedef interface IIviFgenTrigger IIviFgenTrigger;

#endif 	/* __IIviFgenTrigger_FWD_DEFINED__ */


#ifndef __IIviFgenAM_FWD_DEFINED__
#define __IIviFgenAM_FWD_DEFINED__
typedef interface IIviFgenAM IIviFgenAM;

#endif 	/* __IIviFgenAM_FWD_DEFINED__ */


#ifndef __IIviFgenFM_FWD_DEFINED__
#define __IIviFgenFM_FWD_DEFINED__
typedef interface IIviFgenFM IIviFgenFM;

#endif 	/* __IIviFgenFM_FWD_DEFINED__ */


#ifndef __IIviFgen2_FWD_DEFINED__
#define __IIviFgen2_FWD_DEFINED__
typedef interface IIviFgen2 IIviFgen2;

#endif 	/* __IIviFgen2_FWD_DEFINED__ */


#ifndef __IIviFgenOutput2_FWD_DEFINED__
#define __IIviFgenOutput2_FWD_DEFINED__
typedef interface IIviFgenOutput2 IIviFgenOutput2;

#endif 	/* __IIviFgenOutput2_FWD_DEFINED__ */


#ifndef __IIviFgenArbitrary2_FWD_DEFINED__
#define __IIviFgenArbitrary2_FWD_DEFINED__
typedef interface IIviFgenArbitrary2 IIviFgenArbitrary2;

#endif 	/* __IIviFgenArbitrary2_FWD_DEFINED__ */


#ifndef __IIviFgenArbitraryWaveform2_FWD_DEFINED__
#define __IIviFgenArbitraryWaveform2_FWD_DEFINED__
typedef interface IIviFgenArbitraryWaveform2 IIviFgenArbitraryWaveform2;

#endif 	/* __IIviFgenArbitraryWaveform2_FWD_DEFINED__ */


#ifndef __IIviFgenArbitrarySequence2_FWD_DEFINED__
#define __IIviFgenArbitrarySequence2_FWD_DEFINED__
typedef interface IIviFgenArbitrarySequence2 IIviFgenArbitrarySequence2;

#endif 	/* __IIviFgenArbitrarySequence2_FWD_DEFINED__ */


#ifndef __IIviFgenTrigger2_FWD_DEFINED__
#define __IIviFgenTrigger2_FWD_DEFINED__
typedef interface IIviFgenTrigger2 IIviFgenTrigger2;

#endif 	/* __IIviFgenTrigger2_FWD_DEFINED__ */


#ifndef __IIviFgenTriggerAdvance_FWD_DEFINED__
#define __IIviFgenTriggerAdvance_FWD_DEFINED__
typedef interface IIviFgenTriggerAdvance IIviFgenTriggerAdvance;

#endif 	/* __IIviFgenTriggerAdvance_FWD_DEFINED__ */


#ifndef __IIviFgenTriggerHold_FWD_DEFINED__
#define __IIviFgenTriggerHold_FWD_DEFINED__
typedef interface IIviFgenTriggerHold IIviFgenTriggerHold;

#endif 	/* __IIviFgenTriggerHold_FWD_DEFINED__ */


#ifndef __IIviFgenTriggerResume_FWD_DEFINED__
#define __IIviFgenTriggerResume_FWD_DEFINED__
typedef interface IIviFgenTriggerResume IIviFgenTriggerResume;

#endif 	/* __IIviFgenTriggerResume_FWD_DEFINED__ */


#ifndef __IIviFgenTriggerStart_FWD_DEFINED__
#define __IIviFgenTriggerStart_FWD_DEFINED__
typedef interface IIviFgenTriggerStart IIviFgenTriggerStart;

#endif 	/* __IIviFgenTriggerStart_FWD_DEFINED__ */


#ifndef __IIviFgenTriggerStop_FWD_DEFINED__
#define __IIviFgenTriggerStop_FWD_DEFINED__
typedef interface IIviFgenTriggerStop IIviFgenTriggerStop;

#endif 	/* __IIviFgenTriggerStop_FWD_DEFINED__ */


#ifndef __IIviFgenDataMarkers_FWD_DEFINED__
#define __IIviFgenDataMarkers_FWD_DEFINED__
typedef interface IIviFgenDataMarkers IIviFgenDataMarkers;

#endif 	/* __IIviFgenDataMarkers_FWD_DEFINED__ */


#ifndef __IIviFgenDataMarker_FWD_DEFINED__
#define __IIviFgenDataMarker_FWD_DEFINED__
typedef interface IIviFgenDataMarker IIviFgenDataMarker;

#endif 	/* __IIviFgenDataMarker_FWD_DEFINED__ */


#ifndef __IIviFgenSparseMarkers_FWD_DEFINED__
#define __IIviFgenSparseMarkers_FWD_DEFINED__
typedef interface IIviFgenSparseMarkers IIviFgenSparseMarkers;

#endif 	/* __IIviFgenSparseMarkers_FWD_DEFINED__ */


#ifndef __IIviFgenSparseMarker_FWD_DEFINED__
#define __IIviFgenSparseMarker_FWD_DEFINED__
typedef interface IIviFgenSparseMarker IIviFgenSparseMarker;

#endif 	/* __IIviFgenSparseMarker_FWD_DEFINED__ */


#ifndef __IIviFgenSampleClock_FWD_DEFINED__
#define __IIviFgenSampleClock_FWD_DEFINED__
typedef interface IIviFgenSampleClock IIviFgenSampleClock;

#endif 	/* __IIviFgenSampleClock_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_IviFgenTypeLib_0000_0000 */
/* [local] */ 

#pragma once
#pragma once
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#pragma once
#pragma once


extern RPC_IF_HANDLE __MIDL_itf_IviFgenTypeLib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IviFgenTypeLib_0000_0000_v0_0_s_ifspec;


#ifndef __IviFgenLib_LIBRARY_DEFINED__
#define __IviFgenLib_LIBRARY_DEFINED__

/* library IviFgenLib */
/* [helpfile][helpstring][version][uuid] */ 


























typedef /* [helpcontext][helpstring] */ 
enum IviFgenErrorCodesEnum
    {
        E_IVIFGEN_TRIGGER_NOT_SOFTWARE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x1001 ) ),
        E_IVIFGEN_NO_WFMS_AVAILABLE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2004 ) ),
        E_IVIFGEN_WFM_IN_USE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2008 ) ),
        E_IVIFGEN_NO_SEQS_AVAILABLE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x2009 ) ),
        E_IVIFGEN_SEQ_IN_USE	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x200d ) ),
        E_IVIFGEN_INVALID_WFM_CHANNEL	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x200e ) )
    } 	IviFgenErrorCodesEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenOutputModeEnum
    {
        IviFgenOutputModeFunction	= 0,
        IviFgenOutputModeArbitrary	= 1,
        IviFgenOutputModeSequence	= 2
    } 	IviFgenOutputModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenReferenceClockSourceEnum
    {
        IviFgenReferenceClockSourceInternal	= 0,
        IviFgenReferenceClockSourceExternal	= 1,
        IviFgenReferenceClockSourceRTSI	= 101
    } 	IviFgenReferenceClockSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenOperationModeEnum
    {
        IviFgenOperationModeContinuous	= 0,
        IviFgenOperationModeBurst	= 1
    } 	IviFgenOperationModeEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenWaveformEnum
    {
        IviFgenWaveformSine	= 1,
        IviFgenWaveformSquare	= 2,
        IviFgenWaveformTriangle	= 3,
        IviFgenWaveformRampUp	= 4,
        IviFgenWaveformRampDown	= 5,
        IviFgenWaveformDC	= 6
    } 	IviFgenWaveformEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenTriggerSourceEnum
    {
        IviFgenTriggerSourceExternal	= 1,
        IviFgenTriggerSourceSoftware	= 2,
        IviFgenTriggerSourceInternal	= 3,
        IviFgenTriggerSourceTTL0	= 111,
        IviFgenTriggerSourceTTL1	= 112,
        IviFgenTriggerSourceTTL2	= 113,
        IviFgenTriggerSourceTTL3	= 114,
        IviFgenTriggerSourceTTL4	= 115,
        IviFgenTriggerSourceTTL5	= 116,
        IviFgenTriggerSourceTTL6	= 117,
        IviFgenTriggerSourceTTL7	= 118,
        IviFgenTriggerSourceECL0	= 119,
        IviFgenTriggerSourceECL1	= 120,
        IviFgenTriggerSourcePXIStar	= 131,
        IviFgenTriggerSourceRTSI0	= 141,
        IviFgenTriggerSourceRTSI1	= 142,
        IviFgenTriggerSourceRTSI2	= 143,
        IviFgenTriggerSourceRTSI3	= 144,
        IviFgenTriggerSourceRTSI4	= 145,
        IviFgenTriggerSourceRTSI5	= 146,
        IviFgenTriggerSourceRTSI6	= 147
    } 	IviFgenTriggerSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenAMSourceEnum
    {
        IviFgenAMSourceInternal	= 0,
        IviFgenAMSourceExternal	= 1
    } 	IviFgenAMSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenAMInternalWaveformEnum
    {
        IviFgenAMInternalWaveformSine	= 1,
        IviFgenAMInternalWaveformSquare	= 2,
        IviFgenAMInternalWaveformTriangle	= 3,
        IviFgenAMInternalWaveformRampUp	= 4,
        IviFgenAMInternalWaveformRampDown	= 5
    } 	IviFgenAMInternalWaveformEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenFMSourceEnum
    {
        IviFgenFMSourceInternal	= 0,
        IviFgenFMSourceExternal	= 1
    } 	IviFgenFMSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenFMInternalWaveformEnum
    {
        IviFgenFMInternalWaveformSine	= 1,
        IviFgenFMInternalWaveformSquare	= 2,
        IviFgenFMInternalWaveformTriangle	= 3,
        IviFgenFMInternalWaveformRampUp	= 4,
        IviFgenFMInternalWaveformRampDown	= 5
    } 	IviFgenFMInternalWaveformEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenBinaryAlignmentEnum
    {
        IviFgenBinaryAlignmentLeft	= 0,
        IviFgenBinaryAlignmentRight	= 1
    } 	IviFgenBinaryAlignmentEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenMarkerPolarityEnum
    {
        IviFgenMarkerPolarityActiveHigh	= 0,
        IviFgenMarkerPolarityActiveLow	= 1
    } 	IviFgenMarkerPolarityEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenSampleClockSourceEnum
    {
        IviFgenSampleClockSourceInternal	= 0,
        IviFgenSampleClockSourceExternal	= 1
    } 	IviFgenSampleClockSourceEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenTerminalConfigurationEnum
    {
        IviFgenTerminalConfigurationSingleEnded	= 0,
        IviFgenTerminalConfigurationDifferential	= 1
    } 	IviFgenTerminalConfigurationEnum;

typedef /* [helpcontext][helpstring][v1_enum][public] */ 
enum IviFgenTriggerSlopeEnum
    {
        IviFgenTriggerSlopePositive	= 0,
        IviFgenTriggerSlopeNegative	= 1,
        IviFgenTriggerSlopeEither	= 2
    } 	IviFgenTriggerSlopeEnum;


EXTERN_C const IID LIBID_IviFgenLib;

#ifndef __IIviFgen_INTERFACE_DEFINED__
#define __IIviFgen_INTERFACE_DEFINED__

/* interface IIviFgen */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgen;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed521a-a398-11d4-ba58-000064657374")
    IIviFgen : public IIviDriver
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE InitiateGeneration( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AbortGeneration( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Output( 
            /* [retval][out] */ IIviFgenOutput **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ IIviFgenTrigger **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StandardWaveform( 
            /* [retval][out] */ IIviFgenStandardWaveform **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Arbitrary( 
            /* [retval][out] */ IIviFgenArbitrary **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AM( 
            /* [retval][out] */ IIviFgenAM **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FM( 
            /* [retval][out] */ IIviFgenFM **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgen * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgen * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgen * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviFgen * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviFgen * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviFgen * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviFgen * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviFgen * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviFgen * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitiateGeneration )( 
            IIviFgen * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *AbortGeneration )( 
            IIviFgen * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Output )( 
            IIviFgen * This,
            /* [retval][out] */ IIviFgenOutput **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            IIviFgen * This,
            /* [retval][out] */ IIviFgenTrigger **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardWaveform )( 
            IIviFgen * This,
            /* [retval][out] */ IIviFgenStandardWaveform **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arbitrary )( 
            IIviFgen * This,
            /* [retval][out] */ IIviFgenArbitrary **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AM )( 
            IIviFgen * This,
            /* [retval][out] */ IIviFgenAM **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FM )( 
            IIviFgen * This,
            /* [retval][out] */ IIviFgenFM **pVal);
        
        END_INTERFACE
    } IIviFgenVtbl;

    interface IIviFgen
    {
        CONST_VTBL struct IIviFgenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgen_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgen_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgen_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgen_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviFgen_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviFgen_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviFgen_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviFgen_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviFgen_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviFgen_InitiateGeneration(This)	\
    ( (This)->lpVtbl -> InitiateGeneration(This) ) 

#define IIviFgen_AbortGeneration(This)	\
    ( (This)->lpVtbl -> AbortGeneration(This) ) 

#define IIviFgen_get_Output(This,pVal)	\
    ( (This)->lpVtbl -> get_Output(This,pVal) ) 

#define IIviFgen_get_Trigger(This,pVal)	\
    ( (This)->lpVtbl -> get_Trigger(This,pVal) ) 

#define IIviFgen_get_StandardWaveform(This,pVal)	\
    ( (This)->lpVtbl -> get_StandardWaveform(This,pVal) ) 

#define IIviFgen_get_Arbitrary(This,pVal)	\
    ( (This)->lpVtbl -> get_Arbitrary(This,pVal) ) 

#define IIviFgen_get_AM(This,pVal)	\
    ( (This)->lpVtbl -> get_AM(This,pVal) ) 

#define IIviFgen_get_FM(This,pVal)	\
    ( (This)->lpVtbl -> get_FM(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgen_INTERFACE_DEFINED__ */


#ifndef __IIviFgenOutput_INTERFACE_DEFINED__
#define __IIviFgenOutput_INTERFACE_DEFINED__

/* interface IIviFgenOutput */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed521b-a398-11d4-ba58-000064657374")
    IIviFgenOutput : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Impedance( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Impedance( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OutputMode( 
            /* [in] */ IviFgenOutputModeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OutputMode( 
            /* [retval][out] */ IviFgenOutputModeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OperationMode( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenOperationModeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OperationMode( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenOperationModeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceClockSource( 
            /* [in] */ IviFgenReferenceClockSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceClockSource( 
            /* [retval][out] */ IviFgenReferenceClockSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenOutput * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviFgenOutput * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviFgenOutput * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Impedance )( 
            IIviFgenOutput * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Impedance )( 
            IIviFgenOutput * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputMode )( 
            IIviFgenOutput * This,
            /* [in] */ IviFgenOutputModeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputMode )( 
            IIviFgenOutput * This,
            /* [retval][out] */ IviFgenOutputModeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OperationMode )( 
            IIviFgenOutput * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenOperationModeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OperationMode )( 
            IIviFgenOutput * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenOperationModeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceClockSource )( 
            IIviFgenOutput * This,
            /* [in] */ IviFgenReferenceClockSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceClockSource )( 
            IIviFgenOutput * This,
            /* [retval][out] */ IviFgenReferenceClockSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviFgenOutput * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviFgenOutput * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IIviFgenOutputVtbl;

    interface IIviFgenOutput
    {
        CONST_VTBL struct IIviFgenOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenOutput_put_Enabled(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,ChannelName,newVal) ) 

#define IIviFgenOutput_get_Enabled(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,ChannelName,pVal) ) 

#define IIviFgenOutput_put_Impedance(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Impedance(This,ChannelName,newVal) ) 

#define IIviFgenOutput_get_Impedance(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Impedance(This,ChannelName,pVal) ) 

#define IIviFgenOutput_put_OutputMode(This,newVal)	\
    ( (This)->lpVtbl -> put_OutputMode(This,newVal) ) 

#define IIviFgenOutput_get_OutputMode(This,pVal)	\
    ( (This)->lpVtbl -> get_OutputMode(This,pVal) ) 

#define IIviFgenOutput_put_OperationMode(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_OperationMode(This,ChannelName,newVal) ) 

#define IIviFgenOutput_get_OperationMode(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_OperationMode(This,ChannelName,pVal) ) 

#define IIviFgenOutput_put_ReferenceClockSource(This,newVal)	\
    ( (This)->lpVtbl -> put_ReferenceClockSource(This,newVal) ) 

#define IIviFgenOutput_get_ReferenceClockSource(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferenceClockSource(This,pVal) ) 

#define IIviFgenOutput_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviFgenOutput_get_Name(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,Index,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenOutput_INTERFACE_DEFINED__ */


#ifndef __IIviFgenStandardWaveform_INTERFACE_DEFINED__
#define __IIviFgenStandardWaveform_INTERFACE_DEFINED__

/* interface IIviFgenStandardWaveform */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenStandardWaveform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed521c-a398-11d4-ba58-000064657374")
    IIviFgenStandardWaveform : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenWaveformEnum Waveform,
            /* [in] */ DOUBLE Amplitude,
            /* [in] */ DOUBLE DCOffset,
            /* [in] */ DOUBLE Frequency,
            /* [in] */ DOUBLE StartPhase) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DutyCycleHigh( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DutyCycleHigh( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Amplitude( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Amplitude( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DCOffset( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DCOffset( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_StartPhase( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartPhase( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Waveform( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenWaveformEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Waveform( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenWaveformEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenStandardWaveformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenStandardWaveform * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenStandardWaveform * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenWaveformEnum Waveform,
            /* [in] */ DOUBLE Amplitude,
            /* [in] */ DOUBLE DCOffset,
            /* [in] */ DOUBLE Frequency,
            /* [in] */ DOUBLE StartPhase);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DutyCycleHigh )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DutyCycleHigh )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Amplitude )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Amplitude )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DCOffset )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DCOffset )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartPhase )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPhase )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Waveform )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenWaveformEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Waveform )( 
            IIviFgenStandardWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenWaveformEnum *pVal);
        
        END_INTERFACE
    } IIviFgenStandardWaveformVtbl;

    interface IIviFgenStandardWaveform
    {
        CONST_VTBL struct IIviFgenStandardWaveformVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenStandardWaveform_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenStandardWaveform_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenStandardWaveform_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenStandardWaveform_Configure(This,ChannelName,Waveform,Amplitude,DCOffset,Frequency,StartPhase)	\
    ( (This)->lpVtbl -> Configure(This,ChannelName,Waveform,Amplitude,DCOffset,Frequency,StartPhase) ) 

#define IIviFgenStandardWaveform_put_DutyCycleHigh(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_DutyCycleHigh(This,ChannelName,newVal) ) 

#define IIviFgenStandardWaveform_get_DutyCycleHigh(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_DutyCycleHigh(This,ChannelName,pVal) ) 

#define IIviFgenStandardWaveform_put_Amplitude(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Amplitude(This,ChannelName,newVal) ) 

#define IIviFgenStandardWaveform_get_Amplitude(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Amplitude(This,ChannelName,pVal) ) 

#define IIviFgenStandardWaveform_put_DCOffset(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_DCOffset(This,ChannelName,newVal) ) 

#define IIviFgenStandardWaveform_get_DCOffset(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_DCOffset(This,ChannelName,pVal) ) 

#define IIviFgenStandardWaveform_put_Frequency(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Frequency(This,ChannelName,newVal) ) 

#define IIviFgenStandardWaveform_get_Frequency(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Frequency(This,ChannelName,pVal) ) 

#define IIviFgenStandardWaveform_put_StartPhase(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_StartPhase(This,ChannelName,newVal) ) 

#define IIviFgenStandardWaveform_get_StartPhase(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_StartPhase(This,ChannelName,pVal) ) 

#define IIviFgenStandardWaveform_put_Waveform(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Waveform(This,ChannelName,newVal) ) 

#define IIviFgenStandardWaveform_get_Waveform(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Waveform(This,ChannelName,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenStandardWaveform_INTERFACE_DEFINED__ */


#ifndef __IIviFgenArbitrary_INTERFACE_DEFINED__
#define __IIviFgenArbitrary_INTERFACE_DEFINED__

/* interface IIviFgenArbitrary */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenArbitrary;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed521d-a398-11d4-ba58-000064657374")
    IIviFgenArbitrary : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ClearMemory( void) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Gain( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Gain( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SampleRate( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SampleRate( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Sequence( 
            /* [retval][out] */ IIviFgenArbitrarySequence **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Waveform( 
            /* [retval][out] */ IIviFgenArbitraryWaveform **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenArbitraryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenArbitrary * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenArbitrary * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenArbitrary * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearMemory )( 
            IIviFgenArbitrary * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gain )( 
            IIviFgenArbitrary * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gain )( 
            IIviFgenArbitrary * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            IIviFgenArbitrary * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IIviFgenArbitrary * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleRate )( 
            IIviFgenArbitrary * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleRate )( 
            IIviFgenArbitrary * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sequence )( 
            IIviFgenArbitrary * This,
            /* [retval][out] */ IIviFgenArbitrarySequence **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Waveform )( 
            IIviFgenArbitrary * This,
            /* [retval][out] */ IIviFgenArbitraryWaveform **pVal);
        
        END_INTERFACE
    } IIviFgenArbitraryVtbl;

    interface IIviFgenArbitrary
    {
        CONST_VTBL struct IIviFgenArbitraryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenArbitrary_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenArbitrary_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenArbitrary_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenArbitrary_ClearMemory(This)	\
    ( (This)->lpVtbl -> ClearMemory(This) ) 

#define IIviFgenArbitrary_put_Gain(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Gain(This,ChannelName,newVal) ) 

#define IIviFgenArbitrary_get_Gain(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Gain(This,ChannelName,pVal) ) 

#define IIviFgenArbitrary_put_Offset(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Offset(This,ChannelName,newVal) ) 

#define IIviFgenArbitrary_get_Offset(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Offset(This,ChannelName,pVal) ) 

#define IIviFgenArbitrary_put_SampleRate(This,newVal)	\
    ( (This)->lpVtbl -> put_SampleRate(This,newVal) ) 

#define IIviFgenArbitrary_get_SampleRate(This,pVal)	\
    ( (This)->lpVtbl -> get_SampleRate(This,pVal) ) 

#define IIviFgenArbitrary_get_Sequence(This,pVal)	\
    ( (This)->lpVtbl -> get_Sequence(This,pVal) ) 

#define IIviFgenArbitrary_get_Waveform(This,pVal)	\
    ( (This)->lpVtbl -> get_Waveform(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenArbitrary_INTERFACE_DEFINED__ */


#ifndef __IIviFgenArbitraryWaveform_INTERFACE_DEFINED__
#define __IIviFgenArbitraryWaveform_INTERFACE_DEFINED__

/* interface IIviFgenArbitraryWaveform */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenArbitraryWaveform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed521f-a398-11d4-ba58-000064657374")
    IIviFgenArbitraryWaveform : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG Handle,
            /* [in] */ DOUBLE Gain,
            /* [in] */ DOUBLE Offset) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Clear( 
            /* [in] */ LONG Handle) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ LONG *Handle) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberWaveformsMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Quantum( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SizeMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SizeMin( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenArbitraryWaveformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenArbitraryWaveform * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenArbitraryWaveform * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenArbitraryWaveform * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenArbitraryWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG Handle,
            /* [in] */ DOUBLE Gain,
            /* [in] */ DOUBLE Offset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IIviFgenArbitraryWaveform * This,
            /* [in] */ LONG Handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IIviFgenArbitraryWaveform * This,
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ LONG *Handle);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IIviFgenArbitraryWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviFgenArbitraryWaveform * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberWaveformsMax )( 
            IIviFgenArbitraryWaveform * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Quantum )( 
            IIviFgenArbitraryWaveform * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeMax )( 
            IIviFgenArbitraryWaveform * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeMin )( 
            IIviFgenArbitraryWaveform * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IIviFgenArbitraryWaveformVtbl;

    interface IIviFgenArbitraryWaveform
    {
        CONST_VTBL struct IIviFgenArbitraryWaveformVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenArbitraryWaveform_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenArbitraryWaveform_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenArbitraryWaveform_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenArbitraryWaveform_Configure(This,ChannelName,Handle,Gain,Offset)	\
    ( (This)->lpVtbl -> Configure(This,ChannelName,Handle,Gain,Offset) ) 

#define IIviFgenArbitraryWaveform_Clear(This,Handle)	\
    ( (This)->lpVtbl -> Clear(This,Handle) ) 

#define IIviFgenArbitraryWaveform_Create(This,Data,Handle)	\
    ( (This)->lpVtbl -> Create(This,Data,Handle) ) 

#define IIviFgenArbitraryWaveform_put_Frequency(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Frequency(This,ChannelName,newVal) ) 

#define IIviFgenArbitraryWaveform_get_Frequency(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Frequency(This,ChannelName,pVal) ) 

#define IIviFgenArbitraryWaveform_get_NumberWaveformsMax(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberWaveformsMax(This,pVal) ) 

#define IIviFgenArbitraryWaveform_get_Quantum(This,pVal)	\
    ( (This)->lpVtbl -> get_Quantum(This,pVal) ) 

#define IIviFgenArbitraryWaveform_get_SizeMax(This,pVal)	\
    ( (This)->lpVtbl -> get_SizeMax(This,pVal) ) 

#define IIviFgenArbitraryWaveform_get_SizeMin(This,pVal)	\
    ( (This)->lpVtbl -> get_SizeMin(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenArbitraryWaveform_INTERFACE_DEFINED__ */


#ifndef __IIviFgenArbitrarySequence_INTERFACE_DEFINED__
#define __IIviFgenArbitrarySequence_INTERFACE_DEFINED__

/* interface IIviFgenArbitrarySequence */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenArbitrarySequence;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed521e-a398-11d4-ba58-000064657374")
    IIviFgenArbitrarySequence : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG Handle,
            /* [in] */ DOUBLE Gain,
            /* [in] */ DOUBLE Offset) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Clear( 
            /* [in] */ LONG Handle) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ SAFEARRAY * *WfmHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [retval][out] */ LONG *Handle) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LengthMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LengthMin( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LoopCountMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberSequencesMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenArbitrarySequenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenArbitrarySequence * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenArbitrarySequence * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenArbitrarySequence * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenArbitrarySequence * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG Handle,
            /* [in] */ DOUBLE Gain,
            /* [in] */ DOUBLE Offset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IIviFgenArbitrarySequence * This,
            /* [in] */ LONG Handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IIviFgenArbitrarySequence * This,
            /* [in] */ SAFEARRAY * *WfmHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [retval][out] */ LONG *Handle);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LengthMax )( 
            IIviFgenArbitrarySequence * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LengthMin )( 
            IIviFgenArbitrarySequence * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoopCountMax )( 
            IIviFgenArbitrarySequence * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberSequencesMax )( 
            IIviFgenArbitrarySequence * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IIviFgenArbitrarySequenceVtbl;

    interface IIviFgenArbitrarySequence
    {
        CONST_VTBL struct IIviFgenArbitrarySequenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenArbitrarySequence_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenArbitrarySequence_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenArbitrarySequence_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenArbitrarySequence_Configure(This,ChannelName,Handle,Gain,Offset)	\
    ( (This)->lpVtbl -> Configure(This,ChannelName,Handle,Gain,Offset) ) 

#define IIviFgenArbitrarySequence_Clear(This,Handle)	\
    ( (This)->lpVtbl -> Clear(This,Handle) ) 

#define IIviFgenArbitrarySequence_Create(This,WfmHandle,LoopCount,Handle)	\
    ( (This)->lpVtbl -> Create(This,WfmHandle,LoopCount,Handle) ) 

#define IIviFgenArbitrarySequence_get_LengthMax(This,pVal)	\
    ( (This)->lpVtbl -> get_LengthMax(This,pVal) ) 

#define IIviFgenArbitrarySequence_get_LengthMin(This,pVal)	\
    ( (This)->lpVtbl -> get_LengthMin(This,pVal) ) 

#define IIviFgenArbitrarySequence_get_LoopCountMax(This,pVal)	\
    ( (This)->lpVtbl -> get_LoopCountMax(This,pVal) ) 

#define IIviFgenArbitrarySequence_get_NumberSequencesMax(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberSequencesMax(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenArbitrarySequence_INTERFACE_DEFINED__ */


#ifndef __IIviFgenTrigger_INTERFACE_DEFINED__
#define __IIviFgenTrigger_INTERFACE_DEFINED__

/* interface IIviFgenTrigger */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5220-a398-11d4-ba58-000064657374")
    IIviFgenTrigger : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_BurstCount( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BurstCount( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InternalRate( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InternalRate( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSourceEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenTrigger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenTrigger * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviFgenTrigger * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BurstCount )( 
            IIviFgenTrigger * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BurstCount )( 
            IIviFgenTrigger * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalRate )( 
            IIviFgenTrigger * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalRate )( 
            IIviFgenTrigger * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviFgenTrigger * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviFgenTrigger * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSourceEnum *pVal);
        
        END_INTERFACE
    } IIviFgenTriggerVtbl;

    interface IIviFgenTrigger
    {
        CONST_VTBL struct IIviFgenTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenTrigger_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IIviFgenTrigger_put_BurstCount(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_BurstCount(This,ChannelName,newVal) ) 

#define IIviFgenTrigger_get_BurstCount(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_BurstCount(This,ChannelName,pVal) ) 

#define IIviFgenTrigger_put_InternalRate(This,newVal)	\
    ( (This)->lpVtbl -> put_InternalRate(This,newVal) ) 

#define IIviFgenTrigger_get_InternalRate(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalRate(This,pVal) ) 

#define IIviFgenTrigger_put_Source(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,ChannelName,newVal) ) 

#define IIviFgenTrigger_get_Source(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,ChannelName,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenTrigger_INTERFACE_DEFINED__ */


#ifndef __IIviFgenAM_INTERFACE_DEFINED__
#define __IIviFgenAM_INTERFACE_DEFINED__

/* interface IIviFgenAM */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenAM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5221-a398-11d4-ba58-000064657374")
    IIviFgenAM : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureInternal( 
            /* [in] */ DOUBLE Depth,
            /* [in] */ IviFgenAMInternalWaveformEnum Waveform,
            /* [in] */ DOUBLE Frequency) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenAMSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenAMSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InternalDepth( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InternalDepth( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InternalFrequency( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InternalFrequency( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InternalWaveform( 
            /* [in] */ IviFgenAMInternalWaveformEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InternalWaveform( 
            /* [retval][out] */ IviFgenAMInternalWaveformEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenAMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenAM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenAM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenAM * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureInternal )( 
            IIviFgenAM * This,
            /* [in] */ DOUBLE Depth,
            /* [in] */ IviFgenAMInternalWaveformEnum Waveform,
            /* [in] */ DOUBLE Frequency);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviFgenAM * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviFgenAM * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviFgenAM * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenAMSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviFgenAM * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenAMSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalDepth )( 
            IIviFgenAM * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalDepth )( 
            IIviFgenAM * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalFrequency )( 
            IIviFgenAM * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalFrequency )( 
            IIviFgenAM * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalWaveform )( 
            IIviFgenAM * This,
            /* [in] */ IviFgenAMInternalWaveformEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalWaveform )( 
            IIviFgenAM * This,
            /* [retval][out] */ IviFgenAMInternalWaveformEnum *pVal);
        
        END_INTERFACE
    } IIviFgenAMVtbl;

    interface IIviFgenAM
    {
        CONST_VTBL struct IIviFgenAMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenAM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenAM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenAM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenAM_ConfigureInternal(This,Depth,Waveform,Frequency)	\
    ( (This)->lpVtbl -> ConfigureInternal(This,Depth,Waveform,Frequency) ) 

#define IIviFgenAM_put_Enabled(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,ChannelName,newVal) ) 

#define IIviFgenAM_get_Enabled(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,ChannelName,pVal) ) 

#define IIviFgenAM_put_Source(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,ChannelName,newVal) ) 

#define IIviFgenAM_get_Source(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,ChannelName,pVal) ) 

#define IIviFgenAM_put_InternalDepth(This,newVal)	\
    ( (This)->lpVtbl -> put_InternalDepth(This,newVal) ) 

#define IIviFgenAM_get_InternalDepth(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalDepth(This,pVal) ) 

#define IIviFgenAM_put_InternalFrequency(This,newVal)	\
    ( (This)->lpVtbl -> put_InternalFrequency(This,newVal) ) 

#define IIviFgenAM_get_InternalFrequency(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalFrequency(This,pVal) ) 

#define IIviFgenAM_put_InternalWaveform(This,newVal)	\
    ( (This)->lpVtbl -> put_InternalWaveform(This,newVal) ) 

#define IIviFgenAM_get_InternalWaveform(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalWaveform(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenAM_INTERFACE_DEFINED__ */


#ifndef __IIviFgenFM_INTERFACE_DEFINED__
#define __IIviFgenFM_INTERFACE_DEFINED__

/* interface IIviFgenFM */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenFM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47ed5222-a398-11d4-ba58-000064657374")
    IIviFgenFM : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ConfigureInternal( 
            /* [in] */ DOUBLE Deviation,
            /* [in] */ IviFgenFMInternalWaveformEnum Waveform,
            /* [in] */ DOUBLE Frequency) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenFMSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenFMSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InternalDeviation( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InternalDeviation( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InternalFrequency( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InternalFrequency( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InternalWaveform( 
            /* [in] */ IviFgenFMInternalWaveformEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InternalWaveform( 
            /* [retval][out] */ IviFgenFMInternalWaveformEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenFMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenFM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenFM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenFM * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConfigureInternal )( 
            IIviFgenFM * This,
            /* [in] */ DOUBLE Deviation,
            /* [in] */ IviFgenFMInternalWaveformEnum Waveform,
            /* [in] */ DOUBLE Frequency);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviFgenFM * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviFgenFM * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviFgenFM * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenFMSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviFgenFM * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenFMSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalDeviation )( 
            IIviFgenFM * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalDeviation )( 
            IIviFgenFM * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalFrequency )( 
            IIviFgenFM * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalFrequency )( 
            IIviFgenFM * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalWaveform )( 
            IIviFgenFM * This,
            /* [in] */ IviFgenFMInternalWaveformEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalWaveform )( 
            IIviFgenFM * This,
            /* [retval][out] */ IviFgenFMInternalWaveformEnum *pVal);
        
        END_INTERFACE
    } IIviFgenFMVtbl;

    interface IIviFgenFM
    {
        CONST_VTBL struct IIviFgenFMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenFM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenFM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenFM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenFM_ConfigureInternal(This,Deviation,Waveform,Frequency)	\
    ( (This)->lpVtbl -> ConfigureInternal(This,Deviation,Waveform,Frequency) ) 

#define IIviFgenFM_put_Enabled(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,ChannelName,newVal) ) 

#define IIviFgenFM_get_Enabled(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,ChannelName,pVal) ) 

#define IIviFgenFM_put_Source(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,ChannelName,newVal) ) 

#define IIviFgenFM_get_Source(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,ChannelName,pVal) ) 

#define IIviFgenFM_put_InternalDeviation(This,newVal)	\
    ( (This)->lpVtbl -> put_InternalDeviation(This,newVal) ) 

#define IIviFgenFM_get_InternalDeviation(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalDeviation(This,pVal) ) 

#define IIviFgenFM_put_InternalFrequency(This,newVal)	\
    ( (This)->lpVtbl -> put_InternalFrequency(This,newVal) ) 

#define IIviFgenFM_get_InternalFrequency(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalFrequency(This,pVal) ) 

#define IIviFgenFM_put_InternalWaveform(This,newVal)	\
    ( (This)->lpVtbl -> put_InternalWaveform(This,newVal) ) 

#define IIviFgenFM_get_InternalWaveform(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalWaveform(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenFM_INTERFACE_DEFINED__ */


#ifndef __IIviFgen2_INTERFACE_DEFINED__
#define __IIviFgen2_INTERFACE_DEFINED__

/* interface IIviFgen2 */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgen2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130b3-a39b-11d4-ba58-000064657374")
    IIviFgen2 : public IIviDriver
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE InitiateGeneration( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AbortGeneration( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Output( 
            /* [retval][out] */ IIviFgenOutput2 **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Trigger( 
            /* [retval][out] */ IIviFgenTrigger2 **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StandardWaveform( 
            /* [retval][out] */ IIviFgenStandardWaveform **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Arbitrary( 
            /* [retval][out] */ IIviFgenArbitrary2 **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AM( 
            /* [retval][out] */ IIviFgenAM **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FM( 
            /* [retval][out] */ IIviFgenFM **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DataMarkers( 
            /* [retval][out] */ IIviFgenDataMarkers **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SparseMarkers( 
            /* [retval][out] */ IIviFgenSparseMarkers **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SampleClock( 
            /* [retval][out] */ IIviFgenSampleClock **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgen2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgen2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgen2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgen2 * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriverOperation )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviDriverOperation **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviDriverIdentity **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviDriverUtility **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IIviFgen2 * This,
            /* [in] */ BSTR ResourceName,
            /* [in] */ VARIANT_BOOL IdQuery,
            /* [in] */ VARIANT_BOOL Reset,
            /* [optional][in] */ BSTR OptionString);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IIviFgen2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIviFgen2 * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitiateGeneration )( 
            IIviFgen2 * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *AbortGeneration )( 
            IIviFgen2 * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Output )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviFgenOutput2 **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Trigger )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviFgenTrigger2 **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardWaveform )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviFgenStandardWaveform **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arbitrary )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviFgenArbitrary2 **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AM )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviFgenAM **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FM )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviFgenFM **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataMarkers )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviFgenDataMarkers **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SparseMarkers )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviFgenSparseMarkers **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleClock )( 
            IIviFgen2 * This,
            /* [retval][out] */ IIviFgenSampleClock **pVal);
        
        END_INTERFACE
    } IIviFgen2Vtbl;

    interface IIviFgen2
    {
        CONST_VTBL struct IIviFgen2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgen2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgen2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgen2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgen2_get_DriverOperation(This,pVal)	\
    ( (This)->lpVtbl -> get_DriverOperation(This,pVal) ) 

#define IIviFgen2_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IIviFgen2_get_Utility(This,pVal)	\
    ( (This)->lpVtbl -> get_Utility(This,pVal) ) 

#define IIviFgen2_Initialize(This,ResourceName,IdQuery,Reset,OptionString)	\
    ( (This)->lpVtbl -> Initialize(This,ResourceName,IdQuery,Reset,OptionString) ) 

#define IIviFgen2_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IIviFgen2_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 


#define IIviFgen2_InitiateGeneration(This)	\
    ( (This)->lpVtbl -> InitiateGeneration(This) ) 

#define IIviFgen2_AbortGeneration(This)	\
    ( (This)->lpVtbl -> AbortGeneration(This) ) 

#define IIviFgen2_get_Output(This,pVal)	\
    ( (This)->lpVtbl -> get_Output(This,pVal) ) 

#define IIviFgen2_get_Trigger(This,pVal)	\
    ( (This)->lpVtbl -> get_Trigger(This,pVal) ) 

#define IIviFgen2_get_StandardWaveform(This,pVal)	\
    ( (This)->lpVtbl -> get_StandardWaveform(This,pVal) ) 

#define IIviFgen2_get_Arbitrary(This,pVal)	\
    ( (This)->lpVtbl -> get_Arbitrary(This,pVal) ) 

#define IIviFgen2_get_AM(This,pVal)	\
    ( (This)->lpVtbl -> get_AM(This,pVal) ) 

#define IIviFgen2_get_FM(This,pVal)	\
    ( (This)->lpVtbl -> get_FM(This,pVal) ) 

#define IIviFgen2_get_DataMarkers(This,pVal)	\
    ( (This)->lpVtbl -> get_DataMarkers(This,pVal) ) 

#define IIviFgen2_get_SparseMarkers(This,pVal)	\
    ( (This)->lpVtbl -> get_SparseMarkers(This,pVal) ) 

#define IIviFgen2_get_SampleClock(This,pVal)	\
    ( (This)->lpVtbl -> get_SampleClock(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgen2_INTERFACE_DEFINED__ */


#ifndef __IIviFgenOutput2_INTERFACE_DEFINED__
#define __IIviFgenOutput2_INTERFACE_DEFINED__

/* interface IIviFgenOutput2 */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenOutput2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130b4-a39b-11d4-ba58-000064657374")
    IIviFgenOutput2 : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Impedance( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Impedance( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OutputMode( 
            /* [in] */ IviFgenOutputModeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OutputMode( 
            /* [retval][out] */ IviFgenOutputModeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OperationMode( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenOperationModeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OperationMode( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenOperationModeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceClockSource( 
            /* [in] */ IviFgenReferenceClockSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceClockSource( 
            /* [retval][out] */ IviFgenReferenceClockSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TerminalConfiguration( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTerminalConfigurationEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TerminalConfiguration( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTerminalConfigurationEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenOutput2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenOutput2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenOutput2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenOutput2 * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IIviFgenOutput2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IIviFgenOutput2 * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Impedance )( 
            IIviFgenOutput2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Impedance )( 
            IIviFgenOutput2 * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputMode )( 
            IIviFgenOutput2 * This,
            /* [in] */ IviFgenOutputModeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputMode )( 
            IIviFgenOutput2 * This,
            /* [retval][out] */ IviFgenOutputModeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OperationMode )( 
            IIviFgenOutput2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenOperationModeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OperationMode )( 
            IIviFgenOutput2 * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenOperationModeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReferenceClockSource )( 
            IIviFgenOutput2 * This,
            /* [in] */ IviFgenReferenceClockSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferenceClockSource )( 
            IIviFgenOutput2 * This,
            /* [retval][out] */ IviFgenReferenceClockSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviFgenOutput2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviFgenOutput2 * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TerminalConfiguration )( 
            IIviFgenOutput2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTerminalConfigurationEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TerminalConfiguration )( 
            IIviFgenOutput2 * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTerminalConfigurationEnum *pVal);
        
        END_INTERFACE
    } IIviFgenOutput2Vtbl;

    interface IIviFgenOutput2
    {
        CONST_VTBL struct IIviFgenOutput2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenOutput2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenOutput2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenOutput2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenOutput2_put_Enabled(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Enabled(This,ChannelName,newVal) ) 

#define IIviFgenOutput2_get_Enabled(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,ChannelName,pVal) ) 

#define IIviFgenOutput2_put_Impedance(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Impedance(This,ChannelName,newVal) ) 

#define IIviFgenOutput2_get_Impedance(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Impedance(This,ChannelName,pVal) ) 

#define IIviFgenOutput2_put_OutputMode(This,newVal)	\
    ( (This)->lpVtbl -> put_OutputMode(This,newVal) ) 

#define IIviFgenOutput2_get_OutputMode(This,pVal)	\
    ( (This)->lpVtbl -> get_OutputMode(This,pVal) ) 

#define IIviFgenOutput2_put_OperationMode(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_OperationMode(This,ChannelName,newVal) ) 

#define IIviFgenOutput2_get_OperationMode(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_OperationMode(This,ChannelName,pVal) ) 

#define IIviFgenOutput2_put_ReferenceClockSource(This,newVal)	\
    ( (This)->lpVtbl -> put_ReferenceClockSource(This,newVal) ) 

#define IIviFgenOutput2_get_ReferenceClockSource(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferenceClockSource(This,pVal) ) 

#define IIviFgenOutput2_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviFgenOutput2_get_Name(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,Index,pVal) ) 

#define IIviFgenOutput2_put_TerminalConfiguration(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_TerminalConfiguration(This,ChannelName,newVal) ) 

#define IIviFgenOutput2_get_TerminalConfiguration(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_TerminalConfiguration(This,ChannelName,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenOutput2_INTERFACE_DEFINED__ */


#ifndef __IIviFgenArbitrary2_INTERFACE_DEFINED__
#define __IIviFgenArbitrary2_INTERFACE_DEFINED__

/* interface IIviFgenArbitrary2 */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenArbitrary2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130b5-a39b-11d4-ba58-000064657374")
    IIviFgenArbitrary2 : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ClearMemory( void) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Gain( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Gain( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SampleRate( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SampleRate( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BinaryAlignment( 
            /* [retval][out] */ IviFgenBinaryAlignmentEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DataMask( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DataMask( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SampleBitResolution( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Sequence( 
            /* [retval][out] */ IIviFgenArbitrarySequence2 **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Waveform( 
            /* [retval][out] */ IIviFgenArbitraryWaveform2 **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenArbitrary2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenArbitrary2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenArbitrary2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenArbitrary2 * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearMemory )( 
            IIviFgenArbitrary2 * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gain )( 
            IIviFgenArbitrary2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gain )( 
            IIviFgenArbitrary2 * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            IIviFgenArbitrary2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            IIviFgenArbitrary2 * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SampleRate )( 
            IIviFgenArbitrary2 * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleRate )( 
            IIviFgenArbitrary2 * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinaryAlignment )( 
            IIviFgenArbitrary2 * This,
            /* [retval][out] */ IviFgenBinaryAlignmentEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataMask )( 
            IIviFgenArbitrary2 * This,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataMask )( 
            IIviFgenArbitrary2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SampleBitResolution )( 
            IIviFgenArbitrary2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sequence )( 
            IIviFgenArbitrary2 * This,
            /* [retval][out] */ IIviFgenArbitrarySequence2 **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Waveform )( 
            IIviFgenArbitrary2 * This,
            /* [retval][out] */ IIviFgenArbitraryWaveform2 **pVal);
        
        END_INTERFACE
    } IIviFgenArbitrary2Vtbl;

    interface IIviFgenArbitrary2
    {
        CONST_VTBL struct IIviFgenArbitrary2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenArbitrary2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenArbitrary2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenArbitrary2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenArbitrary2_ClearMemory(This)	\
    ( (This)->lpVtbl -> ClearMemory(This) ) 

#define IIviFgenArbitrary2_put_Gain(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Gain(This,ChannelName,newVal) ) 

#define IIviFgenArbitrary2_get_Gain(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Gain(This,ChannelName,pVal) ) 

#define IIviFgenArbitrary2_put_Offset(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Offset(This,ChannelName,newVal) ) 

#define IIviFgenArbitrary2_get_Offset(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Offset(This,ChannelName,pVal) ) 

#define IIviFgenArbitrary2_put_SampleRate(This,newVal)	\
    ( (This)->lpVtbl -> put_SampleRate(This,newVal) ) 

#define IIviFgenArbitrary2_get_SampleRate(This,pVal)	\
    ( (This)->lpVtbl -> get_SampleRate(This,pVal) ) 

#define IIviFgenArbitrary2_get_BinaryAlignment(This,pVal)	\
    ( (This)->lpVtbl -> get_BinaryAlignment(This,pVal) ) 

#define IIviFgenArbitrary2_put_DataMask(This,newVal)	\
    ( (This)->lpVtbl -> put_DataMask(This,newVal) ) 

#define IIviFgenArbitrary2_get_DataMask(This,pVal)	\
    ( (This)->lpVtbl -> get_DataMask(This,pVal) ) 

#define IIviFgenArbitrary2_get_SampleBitResolution(This,pVal)	\
    ( (This)->lpVtbl -> get_SampleBitResolution(This,pVal) ) 

#define IIviFgenArbitrary2_get_Sequence(This,pVal)	\
    ( (This)->lpVtbl -> get_Sequence(This,pVal) ) 

#define IIviFgenArbitrary2_get_Waveform(This,pVal)	\
    ( (This)->lpVtbl -> get_Waveform(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenArbitrary2_INTERFACE_DEFINED__ */


#ifndef __IIviFgenArbitraryWaveform2_INTERFACE_DEFINED__
#define __IIviFgenArbitraryWaveform2_INTERFACE_DEFINED__

/* interface IIviFgenArbitraryWaveform2 */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenArbitraryWaveform2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130b7-a39b-11d4-ba58-000064657374")
    IIviFgenArbitraryWaveform2 : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG Handle,
            /* [in] */ DOUBLE Gain,
            /* [in] */ DOUBLE Offset) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Clear( 
            /* [in] */ LONG Handle) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ LONG *Handle) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Frequency( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Frequency( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Handle( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Handle( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberWaveformsMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Quantum( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SizeMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SizeMin( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateChannelWaveform( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ LONG *Handle) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateChannelWaveformInt16( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ LONG *Handle) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateChannelWaveformInt32( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ LONG *Handle) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SizeMax64( 
            /* [retval][out] */ __int64 *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SizeMin64( 
            /* [retval][out] */ __int64 *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenArbitraryWaveform2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenArbitraryWaveform2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenArbitraryWaveform2 * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG Handle,
            /* [in] */ DOUBLE Gain,
            /* [in] */ DOUBLE Offset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [in] */ LONG Handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ LONG *Handle);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frequency )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frequency )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Handle )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Handle )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberWaveformsMax )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Quantum )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeMax )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeMin )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateChannelWaveform )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ LONG *Handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateChannelWaveformInt16 )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ LONG *Handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateChannelWaveformInt32 )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ SAFEARRAY * *Data,
            /* [retval][out] */ LONG *Handle);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeMax64 )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [retval][out] */ __int64 *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeMin64 )( 
            IIviFgenArbitraryWaveform2 * This,
            /* [retval][out] */ __int64 *pVal);
        
        END_INTERFACE
    } IIviFgenArbitraryWaveform2Vtbl;

    interface IIviFgenArbitraryWaveform2
    {
        CONST_VTBL struct IIviFgenArbitraryWaveform2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenArbitraryWaveform2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenArbitraryWaveform2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenArbitraryWaveform2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenArbitraryWaveform2_Configure(This,ChannelName,Handle,Gain,Offset)	\
    ( (This)->lpVtbl -> Configure(This,ChannelName,Handle,Gain,Offset) ) 

#define IIviFgenArbitraryWaveform2_Clear(This,Handle)	\
    ( (This)->lpVtbl -> Clear(This,Handle) ) 

#define IIviFgenArbitraryWaveform2_Create(This,Data,Handle)	\
    ( (This)->lpVtbl -> Create(This,Data,Handle) ) 

#define IIviFgenArbitraryWaveform2_put_Frequency(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Frequency(This,ChannelName,newVal) ) 

#define IIviFgenArbitraryWaveform2_get_Frequency(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Frequency(This,ChannelName,pVal) ) 

#define IIviFgenArbitraryWaveform2_put_Handle(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Handle(This,ChannelName,newVal) ) 

#define IIviFgenArbitraryWaveform2_get_Handle(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Handle(This,ChannelName,pVal) ) 

#define IIviFgenArbitraryWaveform2_get_NumberWaveformsMax(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberWaveformsMax(This,pVal) ) 

#define IIviFgenArbitraryWaveform2_get_Quantum(This,pVal)	\
    ( (This)->lpVtbl -> get_Quantum(This,pVal) ) 

#define IIviFgenArbitraryWaveform2_get_SizeMax(This,pVal)	\
    ( (This)->lpVtbl -> get_SizeMax(This,pVal) ) 

#define IIviFgenArbitraryWaveform2_get_SizeMin(This,pVal)	\
    ( (This)->lpVtbl -> get_SizeMin(This,pVal) ) 

#define IIviFgenArbitraryWaveform2_CreateChannelWaveform(This,ChannelName,Data,Handle)	\
    ( (This)->lpVtbl -> CreateChannelWaveform(This,ChannelName,Data,Handle) ) 

#define IIviFgenArbitraryWaveform2_CreateChannelWaveformInt16(This,ChannelName,Data,Handle)	\
    ( (This)->lpVtbl -> CreateChannelWaveformInt16(This,ChannelName,Data,Handle) ) 

#define IIviFgenArbitraryWaveform2_CreateChannelWaveformInt32(This,ChannelName,Data,Handle)	\
    ( (This)->lpVtbl -> CreateChannelWaveformInt32(This,ChannelName,Data,Handle) ) 

#define IIviFgenArbitraryWaveform2_get_SizeMax64(This,pVal)	\
    ( (This)->lpVtbl -> get_SizeMax64(This,pVal) ) 

#define IIviFgenArbitraryWaveform2_get_SizeMin64(This,pVal)	\
    ( (This)->lpVtbl -> get_SizeMin64(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenArbitraryWaveform2_INTERFACE_DEFINED__ */


#ifndef __IIviFgenArbitrarySequence2_INTERFACE_DEFINED__
#define __IIviFgenArbitrarySequence2_INTERFACE_DEFINED__

/* interface IIviFgenArbitrarySequence2 */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenArbitrarySequence2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130b6-a39b-11d4-ba58-000064657374")
    IIviFgenArbitrarySequence2 : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG Handle,
            /* [in] */ DOUBLE Gain,
            /* [in] */ DOUBLE Offset) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Clear( 
            /* [in] */ LONG Handle) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ SAFEARRAY * *WfmHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [retval][out] */ LONG *Handle) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Handle( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Handle( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LengthMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LengthMin( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LoopCountMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumberSequencesMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DepthMax( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenArbitrarySequence2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenArbitrarySequence2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenArbitrarySequence2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenArbitrarySequence2 * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenArbitrarySequence2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG Handle,
            /* [in] */ DOUBLE Gain,
            /* [in] */ DOUBLE Offset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IIviFgenArbitrarySequence2 * This,
            /* [in] */ LONG Handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IIviFgenArbitrarySequence2 * This,
            /* [in] */ SAFEARRAY * *WfmHandle,
            /* [in] */ SAFEARRAY * *LoopCount,
            /* [retval][out] */ LONG *Handle);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Handle )( 
            IIviFgenArbitrarySequence2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Handle )( 
            IIviFgenArbitrarySequence2 * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LengthMax )( 
            IIviFgenArbitrarySequence2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LengthMin )( 
            IIviFgenArbitrarySequence2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoopCountMax )( 
            IIviFgenArbitrarySequence2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberSequencesMax )( 
            IIviFgenArbitrarySequence2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DepthMax )( 
            IIviFgenArbitrarySequence2 * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IIviFgenArbitrarySequence2Vtbl;

    interface IIviFgenArbitrarySequence2
    {
        CONST_VTBL struct IIviFgenArbitrarySequence2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenArbitrarySequence2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenArbitrarySequence2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenArbitrarySequence2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenArbitrarySequence2_Configure(This,ChannelName,Handle,Gain,Offset)	\
    ( (This)->lpVtbl -> Configure(This,ChannelName,Handle,Gain,Offset) ) 

#define IIviFgenArbitrarySequence2_Clear(This,Handle)	\
    ( (This)->lpVtbl -> Clear(This,Handle) ) 

#define IIviFgenArbitrarySequence2_Create(This,WfmHandle,LoopCount,Handle)	\
    ( (This)->lpVtbl -> Create(This,WfmHandle,LoopCount,Handle) ) 

#define IIviFgenArbitrarySequence2_put_Handle(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Handle(This,ChannelName,newVal) ) 

#define IIviFgenArbitrarySequence2_get_Handle(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Handle(This,ChannelName,pVal) ) 

#define IIviFgenArbitrarySequence2_get_LengthMax(This,pVal)	\
    ( (This)->lpVtbl -> get_LengthMax(This,pVal) ) 

#define IIviFgenArbitrarySequence2_get_LengthMin(This,pVal)	\
    ( (This)->lpVtbl -> get_LengthMin(This,pVal) ) 

#define IIviFgenArbitrarySequence2_get_LoopCountMax(This,pVal)	\
    ( (This)->lpVtbl -> get_LoopCountMax(This,pVal) ) 

#define IIviFgenArbitrarySequence2_get_NumberSequencesMax(This,pVal)	\
    ( (This)->lpVtbl -> get_NumberSequencesMax(This,pVal) ) 

#define IIviFgenArbitrarySequence2_get_DepthMax(This,pVal)	\
    ( (This)->lpVtbl -> get_DepthMax(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenArbitrarySequence2_INTERFACE_DEFINED__ */


#ifndef __IIviFgenTrigger2_INTERFACE_DEFINED__
#define __IIviFgenTrigger2_INTERFACE_DEFINED__

/* interface IIviFgenTrigger2 */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenTrigger2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130b8-a39b-11d4-ba58-000064657374")
    IIviFgenTrigger2 : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_BurstCount( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BurstCount( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InternalRate( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InternalRate( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSourceEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Advance( 
            /* [retval][out] */ IIviFgenTriggerAdvance **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Hold( 
            /* [retval][out] */ IIviFgenTriggerHold **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Resume( 
            /* [retval][out] */ IIviFgenTriggerResume **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ IIviFgenTriggerStart **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Stop( 
            /* [retval][out] */ IIviFgenTriggerStop **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenTrigger2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenTrigger2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenTrigger2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenTrigger2 * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviFgenTrigger2 * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BurstCount )( 
            IIviFgenTrigger2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BurstCount )( 
            IIviFgenTrigger2 * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InternalRate )( 
            IIviFgenTrigger2 * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalRate )( 
            IIviFgenTrigger2 * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviFgenTrigger2 * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviFgenTrigger2 * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSourceEnum *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Advance )( 
            IIviFgenTrigger2 * This,
            /* [retval][out] */ IIviFgenTriggerAdvance **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hold )( 
            IIviFgenTrigger2 * This,
            /* [retval][out] */ IIviFgenTriggerHold **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resume )( 
            IIviFgenTrigger2 * This,
            /* [retval][out] */ IIviFgenTriggerResume **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IIviFgenTrigger2 * This,
            /* [retval][out] */ IIviFgenTriggerStart **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stop )( 
            IIviFgenTrigger2 * This,
            /* [retval][out] */ IIviFgenTriggerStop **pVal);
        
        END_INTERFACE
    } IIviFgenTrigger2Vtbl;

    interface IIviFgenTrigger2
    {
        CONST_VTBL struct IIviFgenTrigger2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenTrigger2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenTrigger2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenTrigger2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenTrigger2_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IIviFgenTrigger2_put_BurstCount(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_BurstCount(This,ChannelName,newVal) ) 

#define IIviFgenTrigger2_get_BurstCount(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_BurstCount(This,ChannelName,pVal) ) 

#define IIviFgenTrigger2_put_InternalRate(This,newVal)	\
    ( (This)->lpVtbl -> put_InternalRate(This,newVal) ) 

#define IIviFgenTrigger2_get_InternalRate(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalRate(This,pVal) ) 

#define IIviFgenTrigger2_put_Source(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,ChannelName,newVal) ) 

#define IIviFgenTrigger2_get_Source(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,ChannelName,pVal) ) 

#define IIviFgenTrigger2_get_Advance(This,pVal)	\
    ( (This)->lpVtbl -> get_Advance(This,pVal) ) 

#define IIviFgenTrigger2_get_Hold(This,pVal)	\
    ( (This)->lpVtbl -> get_Hold(This,pVal) ) 

#define IIviFgenTrigger2_get_Resume(This,pVal)	\
    ( (This)->lpVtbl -> get_Resume(This,pVal) ) 

#define IIviFgenTrigger2_get_Start(This,pVal)	\
    ( (This)->lpVtbl -> get_Start(This,pVal) ) 

#define IIviFgenTrigger2_get_Stop(This,pVal)	\
    ( (This)->lpVtbl -> get_Stop(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenTrigger2_INTERFACE_DEFINED__ */


#ifndef __IIviFgenTriggerAdvance_INTERFACE_DEFINED__
#define __IIviFgenTriggerAdvance_INTERFACE_DEFINED__

/* interface IIviFgenTriggerAdvance */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenTriggerAdvance;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130bd-a39b-11d4-ba58-000064657374")
    IIviFgenTriggerAdvance : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR Source,
            /* [in] */ IviFgenTriggerSlopeEnum Slope) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSlopeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenTriggerAdvanceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenTriggerAdvance * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenTriggerAdvance * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenTriggerAdvance * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenTriggerAdvance * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR Source,
            /* [in] */ IviFgenTriggerSlopeEnum Slope);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviFgenTriggerAdvance * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviFgenTriggerAdvance * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviFgenTriggerAdvance * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviFgenTriggerAdvance * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviFgenTriggerAdvance * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSlopeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviFgenTriggerAdvance * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviFgenTriggerAdvance * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Threshold )( 
            IIviFgenTriggerAdvance * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Threshold )( 
            IIviFgenTriggerAdvance * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviFgenTriggerAdvanceVtbl;

    interface IIviFgenTriggerAdvance
    {
        CONST_VTBL struct IIviFgenTriggerAdvanceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenTriggerAdvance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenTriggerAdvance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenTriggerAdvance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenTriggerAdvance_Configure(This,ChannelName,Source,Slope)	\
    ( (This)->lpVtbl -> Configure(This,ChannelName,Source,Slope) ) 

#define IIviFgenTriggerAdvance_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IIviFgenTriggerAdvance_put_Delay(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Delay(This,ChannelName,newVal) ) 

#define IIviFgenTriggerAdvance_get_Delay(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Delay(This,ChannelName,pVal) ) 

#define IIviFgenTriggerAdvance_put_Slope(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Slope(This,ChannelName,newVal) ) 

#define IIviFgenTriggerAdvance_get_Slope(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Slope(This,ChannelName,pVal) ) 

#define IIviFgenTriggerAdvance_put_Source(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,ChannelName,newVal) ) 

#define IIviFgenTriggerAdvance_get_Source(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,ChannelName,pVal) ) 

#define IIviFgenTriggerAdvance_put_Threshold(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Threshold(This,ChannelName,newVal) ) 

#define IIviFgenTriggerAdvance_get_Threshold(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Threshold(This,ChannelName,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenTriggerAdvance_INTERFACE_DEFINED__ */


#ifndef __IIviFgenTriggerHold_INTERFACE_DEFINED__
#define __IIviFgenTriggerHold_INTERFACE_DEFINED__

/* interface IIviFgenTriggerHold */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenTriggerHold;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130bb-a39b-11d4-ba58-000064657374")
    IIviFgenTriggerHold : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR Source,
            /* [in] */ IviFgenTriggerSlopeEnum Slope) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSlopeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenTriggerHoldVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenTriggerHold * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenTriggerHold * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenTriggerHold * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenTriggerHold * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR Source,
            /* [in] */ IviFgenTriggerSlopeEnum Slope);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviFgenTriggerHold * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviFgenTriggerHold * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviFgenTriggerHold * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviFgenTriggerHold * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviFgenTriggerHold * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSlopeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviFgenTriggerHold * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviFgenTriggerHold * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Threshold )( 
            IIviFgenTriggerHold * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Threshold )( 
            IIviFgenTriggerHold * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviFgenTriggerHoldVtbl;

    interface IIviFgenTriggerHold
    {
        CONST_VTBL struct IIviFgenTriggerHoldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenTriggerHold_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenTriggerHold_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenTriggerHold_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenTriggerHold_Configure(This,ChannelName,Source,Slope)	\
    ( (This)->lpVtbl -> Configure(This,ChannelName,Source,Slope) ) 

#define IIviFgenTriggerHold_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IIviFgenTriggerHold_put_Delay(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Delay(This,ChannelName,newVal) ) 

#define IIviFgenTriggerHold_get_Delay(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Delay(This,ChannelName,pVal) ) 

#define IIviFgenTriggerHold_put_Slope(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Slope(This,ChannelName,newVal) ) 

#define IIviFgenTriggerHold_get_Slope(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Slope(This,ChannelName,pVal) ) 

#define IIviFgenTriggerHold_put_Source(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,ChannelName,newVal) ) 

#define IIviFgenTriggerHold_get_Source(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,ChannelName,pVal) ) 

#define IIviFgenTriggerHold_put_Threshold(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Threshold(This,ChannelName,newVal) ) 

#define IIviFgenTriggerHold_get_Threshold(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Threshold(This,ChannelName,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenTriggerHold_INTERFACE_DEFINED__ */


#ifndef __IIviFgenTriggerResume_INTERFACE_DEFINED__
#define __IIviFgenTriggerResume_INTERFACE_DEFINED__

/* interface IIviFgenTriggerResume */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenTriggerResume;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130bc-a39b-11d4-ba58-000064657374")
    IIviFgenTriggerResume : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR Source,
            /* [in] */ IviFgenTriggerSlopeEnum Slope) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSlopeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenTriggerResumeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenTriggerResume * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenTriggerResume * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenTriggerResume * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenTriggerResume * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR Source,
            /* [in] */ IviFgenTriggerSlopeEnum Slope);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviFgenTriggerResume * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviFgenTriggerResume * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviFgenTriggerResume * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviFgenTriggerResume * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviFgenTriggerResume * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSlopeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviFgenTriggerResume * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviFgenTriggerResume * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Threshold )( 
            IIviFgenTriggerResume * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Threshold )( 
            IIviFgenTriggerResume * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviFgenTriggerResumeVtbl;

    interface IIviFgenTriggerResume
    {
        CONST_VTBL struct IIviFgenTriggerResumeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenTriggerResume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenTriggerResume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenTriggerResume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenTriggerResume_Configure(This,ChannelName,Source,Slope)	\
    ( (This)->lpVtbl -> Configure(This,ChannelName,Source,Slope) ) 

#define IIviFgenTriggerResume_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IIviFgenTriggerResume_put_Delay(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Delay(This,ChannelName,newVal) ) 

#define IIviFgenTriggerResume_get_Delay(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Delay(This,ChannelName,pVal) ) 

#define IIviFgenTriggerResume_put_Slope(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Slope(This,ChannelName,newVal) ) 

#define IIviFgenTriggerResume_get_Slope(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Slope(This,ChannelName,pVal) ) 

#define IIviFgenTriggerResume_put_Source(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,ChannelName,newVal) ) 

#define IIviFgenTriggerResume_get_Source(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,ChannelName,pVal) ) 

#define IIviFgenTriggerResume_put_Threshold(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Threshold(This,ChannelName,newVal) ) 

#define IIviFgenTriggerResume_get_Threshold(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Threshold(This,ChannelName,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenTriggerResume_INTERFACE_DEFINED__ */


#ifndef __IIviFgenTriggerStart_INTERFACE_DEFINED__
#define __IIviFgenTriggerStart_INTERFACE_DEFINED__

/* interface IIviFgenTriggerStart */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenTriggerStart;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130b9-a39b-11d4-ba58-000064657374")
    IIviFgenTriggerStart : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR Source,
            /* [in] */ IviFgenTriggerSlopeEnum Slope) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSlopeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenTriggerStartVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenTriggerStart * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenTriggerStart * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenTriggerStart * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenTriggerStart * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR Source,
            /* [in] */ IviFgenTriggerSlopeEnum Slope);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviFgenTriggerStart * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviFgenTriggerStart * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviFgenTriggerStart * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviFgenTriggerStart * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSlopeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviFgenTriggerStart * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviFgenTriggerStart * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Threshold )( 
            IIviFgenTriggerStart * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Threshold )( 
            IIviFgenTriggerStart * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviFgenTriggerStartVtbl;

    interface IIviFgenTriggerStart
    {
        CONST_VTBL struct IIviFgenTriggerStartVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenTriggerStart_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenTriggerStart_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenTriggerStart_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenTriggerStart_Configure(This,ChannelName,Source,Slope)	\
    ( (This)->lpVtbl -> Configure(This,ChannelName,Source,Slope) ) 

#define IIviFgenTriggerStart_put_Delay(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Delay(This,ChannelName,newVal) ) 

#define IIviFgenTriggerStart_get_Delay(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Delay(This,ChannelName,pVal) ) 

#define IIviFgenTriggerStart_put_Slope(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Slope(This,ChannelName,newVal) ) 

#define IIviFgenTriggerStart_get_Slope(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Slope(This,ChannelName,pVal) ) 

#define IIviFgenTriggerStart_put_Source(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,ChannelName,newVal) ) 

#define IIviFgenTriggerStart_get_Source(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,ChannelName,pVal) ) 

#define IIviFgenTriggerStart_put_Threshold(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Threshold(This,ChannelName,newVal) ) 

#define IIviFgenTriggerStart_get_Threshold(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Threshold(This,ChannelName,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenTriggerStart_INTERFACE_DEFINED__ */


#ifndef __IIviFgenTriggerStop_INTERFACE_DEFINED__
#define __IIviFgenTriggerStop_INTERFACE_DEFINED__

/* interface IIviFgenTriggerStop */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenTriggerStop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130ba-a39b-11d4-ba58-000064657374")
    IIviFgenTriggerStop : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR Source,
            /* [in] */ IviFgenTriggerSlopeEnum Slope) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SendSoftwareTrigger( void) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Slope( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSlopeEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Slope( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSlopeEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold( 
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold( 
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenTriggerStopVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenTriggerStop * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenTriggerStop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenTriggerStop * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenTriggerStop * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR Source,
            /* [in] */ IviFgenTriggerSlopeEnum Slope);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSoftwareTrigger )( 
            IIviFgenTriggerStop * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviFgenTriggerStop * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviFgenTriggerStop * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Slope )( 
            IIviFgenTriggerStop * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ IviFgenTriggerSlopeEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Slope )( 
            IIviFgenTriggerStop * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ IviFgenTriggerSlopeEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviFgenTriggerStop * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviFgenTriggerStop * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Threshold )( 
            IIviFgenTriggerStop * This,
            /* [in] */ BSTR ChannelName,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Threshold )( 
            IIviFgenTriggerStop * This,
            /* [in] */ BSTR ChannelName,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IIviFgenTriggerStopVtbl;

    interface IIviFgenTriggerStop
    {
        CONST_VTBL struct IIviFgenTriggerStopVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenTriggerStop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenTriggerStop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenTriggerStop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenTriggerStop_Configure(This,ChannelName,Source,Slope)	\
    ( (This)->lpVtbl -> Configure(This,ChannelName,Source,Slope) ) 

#define IIviFgenTriggerStop_SendSoftwareTrigger(This)	\
    ( (This)->lpVtbl -> SendSoftwareTrigger(This) ) 

#define IIviFgenTriggerStop_put_Delay(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Delay(This,ChannelName,newVal) ) 

#define IIviFgenTriggerStop_get_Delay(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Delay(This,ChannelName,pVal) ) 

#define IIviFgenTriggerStop_put_Slope(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Slope(This,ChannelName,newVal) ) 

#define IIviFgenTriggerStop_get_Slope(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Slope(This,ChannelName,pVal) ) 

#define IIviFgenTriggerStop_put_Source(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,ChannelName,newVal) ) 

#define IIviFgenTriggerStop_get_Source(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,ChannelName,pVal) ) 

#define IIviFgenTriggerStop_put_Threshold(This,ChannelName,newVal)	\
    ( (This)->lpVtbl -> put_Threshold(This,ChannelName,newVal) ) 

#define IIviFgenTriggerStop_get_Threshold(This,ChannelName,pVal)	\
    ( (This)->lpVtbl -> get_Threshold(This,ChannelName,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenTriggerStop_INTERFACE_DEFINED__ */


#ifndef __IIviFgenDataMarkers_INTERFACE_DEFINED__
#define __IIviFgenDataMarkers_INTERFACE_DEFINED__

/* interface IIviFgenDataMarkers */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenDataMarkers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130be-a39b-11d4-ba58-000064657374")
    IIviFgenDataMarkers : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Name,
            /* [in] */ BSTR SourceChannel,
            /* [in] */ LONG BitPosition,
            /* [in] */ BSTR Destination) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE DisableAll( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR OutputName,
            /* [retval][out] */ IIviFgenDataMarker **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *Name) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenDataMarkersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenDataMarkers * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenDataMarkers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenDataMarkers * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenDataMarkers * This,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR SourceChannel,
            /* [in] */ LONG BitPosition,
            /* [in] */ BSTR Destination);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *DisableAll )( 
            IIviFgenDataMarkers * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviFgenDataMarkers * This,
            /* [in] */ BSTR OutputName,
            /* [retval][out] */ IIviFgenDataMarker **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviFgenDataMarkers * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviFgenDataMarkers * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *Name);
        
        END_INTERFACE
    } IIviFgenDataMarkersVtbl;

    interface IIviFgenDataMarkers
    {
        CONST_VTBL struct IIviFgenDataMarkersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenDataMarkers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenDataMarkers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenDataMarkers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenDataMarkers_Configure(This,Name,SourceChannel,BitPosition,Destination)	\
    ( (This)->lpVtbl -> Configure(This,Name,SourceChannel,BitPosition,Destination) ) 

#define IIviFgenDataMarkers_DisableAll(This)	\
    ( (This)->lpVtbl -> DisableAll(This) ) 

#define IIviFgenDataMarkers_get_Item(This,OutputName,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,OutputName,pVal) ) 

#define IIviFgenDataMarkers_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviFgenDataMarkers_get_Name(This,Index,Name)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenDataMarkers_INTERFACE_DEFINED__ */


#ifndef __IIviFgenDataMarker_INTERFACE_DEFINED__
#define __IIviFgenDataMarker_INTERFACE_DEFINED__

/* interface IIviFgenDataMarker */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenDataMarker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130c1-a39b-11d4-ba58-000064657374")
    IIviFgenDataMarker : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Amplitude( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Amplitude( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_BitPosition( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BitPosition( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Destination( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Destination( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ IviFgenMarkerPolarityEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ IviFgenMarkerPolarityEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SourceChannel( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SourceChannel( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenDataMarkerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenDataMarker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenDataMarker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenDataMarker * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Amplitude )( 
            IIviFgenDataMarker * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Amplitude )( 
            IIviFgenDataMarker * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitPosition )( 
            IIviFgenDataMarker * This,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitPosition )( 
            IIviFgenDataMarker * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviFgenDataMarker * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviFgenDataMarker * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Destination )( 
            IIviFgenDataMarker * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Destination )( 
            IIviFgenDataMarker * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviFgenDataMarker * This,
            /* [in] */ IviFgenMarkerPolarityEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviFgenDataMarker * This,
            /* [retval][out] */ IviFgenMarkerPolarityEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceChannel )( 
            IIviFgenDataMarker * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceChannel )( 
            IIviFgenDataMarker * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IIviFgenDataMarkerVtbl;

    interface IIviFgenDataMarker
    {
        CONST_VTBL struct IIviFgenDataMarkerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenDataMarker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenDataMarker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenDataMarker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenDataMarker_put_Amplitude(This,newVal)	\
    ( (This)->lpVtbl -> put_Amplitude(This,newVal) ) 

#define IIviFgenDataMarker_get_Amplitude(This,pVal)	\
    ( (This)->lpVtbl -> get_Amplitude(This,pVal) ) 

#define IIviFgenDataMarker_put_BitPosition(This,newVal)	\
    ( (This)->lpVtbl -> put_BitPosition(This,newVal) ) 

#define IIviFgenDataMarker_get_BitPosition(This,pVal)	\
    ( (This)->lpVtbl -> get_BitPosition(This,pVal) ) 

#define IIviFgenDataMarker_put_Delay(This,newVal)	\
    ( (This)->lpVtbl -> put_Delay(This,newVal) ) 

#define IIviFgenDataMarker_get_Delay(This,pVal)	\
    ( (This)->lpVtbl -> get_Delay(This,pVal) ) 

#define IIviFgenDataMarker_put_Destination(This,newVal)	\
    ( (This)->lpVtbl -> put_Destination(This,newVal) ) 

#define IIviFgenDataMarker_get_Destination(This,pVal)	\
    ( (This)->lpVtbl -> get_Destination(This,pVal) ) 

#define IIviFgenDataMarker_put_Polarity(This,newVal)	\
    ( (This)->lpVtbl -> put_Polarity(This,newVal) ) 

#define IIviFgenDataMarker_get_Polarity(This,pVal)	\
    ( (This)->lpVtbl -> get_Polarity(This,pVal) ) 

#define IIviFgenDataMarker_put_SourceChannel(This,newVal)	\
    ( (This)->lpVtbl -> put_SourceChannel(This,newVal) ) 

#define IIviFgenDataMarker_get_SourceChannel(This,pVal)	\
    ( (This)->lpVtbl -> get_SourceChannel(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenDataMarker_INTERFACE_DEFINED__ */


#ifndef __IIviFgenSparseMarkers_INTERFACE_DEFINED__
#define __IIviFgenSparseMarkers_INTERFACE_DEFINED__

/* interface IIviFgenSparseMarkers */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenSparseMarkers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130bf-a39b-11d4-ba58-000064657374")
    IIviFgenSparseMarkers : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ BSTR Name,
            /* [in] */ LONG WfmHandle,
            /* [in] */ SAFEARRAY * *Indexes,
            /* [in] */ BSTR Destination) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE DisableAll( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviFgenSparseMarker **pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *Name) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenSparseMarkersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenSparseMarkers * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenSparseMarkers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenSparseMarkers * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IIviFgenSparseMarkers * This,
            /* [in] */ BSTR Name,
            /* [in] */ LONG WfmHandle,
            /* [in] */ SAFEARRAY * *Indexes,
            /* [in] */ BSTR Destination);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *DisableAll )( 
            IIviFgenSparseMarkers * This);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IIviFgenSparseMarkers * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IIviFgenSparseMarker **pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IIviFgenSparseMarkers * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IIviFgenSparseMarkers * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ BSTR *Name);
        
        END_INTERFACE
    } IIviFgenSparseMarkersVtbl;

    interface IIviFgenSparseMarkers
    {
        CONST_VTBL struct IIviFgenSparseMarkersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenSparseMarkers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenSparseMarkers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenSparseMarkers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenSparseMarkers_Configure(This,Name,WfmHandle,Indexes,Destination)	\
    ( (This)->lpVtbl -> Configure(This,Name,WfmHandle,Indexes,Destination) ) 

#define IIviFgenSparseMarkers_DisableAll(This)	\
    ( (This)->lpVtbl -> DisableAll(This) ) 

#define IIviFgenSparseMarkers_get_Item(This,Name,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Name,pVal) ) 

#define IIviFgenSparseMarkers_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IIviFgenSparseMarkers_get_Name(This,Index,Name)	\
    ( (This)->lpVtbl -> get_Name(This,Index,Name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenSparseMarkers_INTERFACE_DEFINED__ */


#ifndef __IIviFgenSparseMarker_INTERFACE_DEFINED__
#define __IIviFgenSparseMarker_INTERFACE_DEFINED__

/* interface IIviFgenSparseMarker */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenSparseMarker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130c2-a39b-11d4-ba58-000064657374")
    IIviFgenSparseMarker : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetIndexes( 
            /* [retval][out] */ SAFEARRAY * *Indexes) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetIndexes( 
            /* [in] */ SAFEARRAY * *Indexes) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Amplitude( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Amplitude( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Destination( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Destination( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Polarity( 
            /* [in] */ IviFgenMarkerPolarityEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Polarity( 
            /* [retval][out] */ IviFgenMarkerPolarityEnum *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_WfmHandle( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_WfmHandle( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenSparseMarkerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenSparseMarker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenSparseMarker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenSparseMarker * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIndexes )( 
            IIviFgenSparseMarker * This,
            /* [retval][out] */ SAFEARRAY * *Indexes);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIndexes )( 
            IIviFgenSparseMarker * This,
            /* [in] */ SAFEARRAY * *Indexes);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Amplitude )( 
            IIviFgenSparseMarker * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Amplitude )( 
            IIviFgenSparseMarker * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            IIviFgenSparseMarker * This,
            /* [in] */ DOUBLE newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            IIviFgenSparseMarker * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Destination )( 
            IIviFgenSparseMarker * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Destination )( 
            IIviFgenSparseMarker * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Polarity )( 
            IIviFgenSparseMarker * This,
            /* [in] */ IviFgenMarkerPolarityEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polarity )( 
            IIviFgenSparseMarker * This,
            /* [retval][out] */ IviFgenMarkerPolarityEnum *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WfmHandle )( 
            IIviFgenSparseMarker * This,
            /* [in] */ LONG newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WfmHandle )( 
            IIviFgenSparseMarker * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IIviFgenSparseMarkerVtbl;

    interface IIviFgenSparseMarker
    {
        CONST_VTBL struct IIviFgenSparseMarkerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenSparseMarker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenSparseMarker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenSparseMarker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenSparseMarker_GetIndexes(This,Indexes)	\
    ( (This)->lpVtbl -> GetIndexes(This,Indexes) ) 

#define IIviFgenSparseMarker_SetIndexes(This,Indexes)	\
    ( (This)->lpVtbl -> SetIndexes(This,Indexes) ) 

#define IIviFgenSparseMarker_put_Amplitude(This,newVal)	\
    ( (This)->lpVtbl -> put_Amplitude(This,newVal) ) 

#define IIviFgenSparseMarker_get_Amplitude(This,pVal)	\
    ( (This)->lpVtbl -> get_Amplitude(This,pVal) ) 

#define IIviFgenSparseMarker_put_Delay(This,newVal)	\
    ( (This)->lpVtbl -> put_Delay(This,newVal) ) 

#define IIviFgenSparseMarker_get_Delay(This,pVal)	\
    ( (This)->lpVtbl -> get_Delay(This,pVal) ) 

#define IIviFgenSparseMarker_put_Destination(This,newVal)	\
    ( (This)->lpVtbl -> put_Destination(This,newVal) ) 

#define IIviFgenSparseMarker_get_Destination(This,pVal)	\
    ( (This)->lpVtbl -> get_Destination(This,pVal) ) 

#define IIviFgenSparseMarker_put_Polarity(This,newVal)	\
    ( (This)->lpVtbl -> put_Polarity(This,newVal) ) 

#define IIviFgenSparseMarker_get_Polarity(This,pVal)	\
    ( (This)->lpVtbl -> get_Polarity(This,pVal) ) 

#define IIviFgenSparseMarker_put_WfmHandle(This,newVal)	\
    ( (This)->lpVtbl -> put_WfmHandle(This,newVal) ) 

#define IIviFgenSparseMarker_get_WfmHandle(This,pVal)	\
    ( (This)->lpVtbl -> get_WfmHandle(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenSparseMarker_INTERFACE_DEFINED__ */


#ifndef __IIviFgenSampleClock_INTERFACE_DEFINED__
#define __IIviFgenSampleClock_INTERFACE_DEFINED__

/* interface IIviFgenSampleClock */
/* [unique][oleautomation][helpcontext][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IIviFgenSampleClock;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f0f130c0-a39b-11d4-ba58-000064657374")
    IIviFgenSampleClock : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OutputEnabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OutputEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Source( 
            /* [in] */ IviFgenSampleClockSourceEnum newVal) = 0;
        
        virtual /* [helpcontext][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ IviFgenSampleClockSourceEnum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIviFgenSampleClockVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIviFgenSampleClock * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIviFgenSampleClock * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIviFgenSampleClock * This);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OutputEnabled )( 
            IIviFgenSampleClock * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputEnabled )( 
            IIviFgenSampleClock * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Source )( 
            IIviFgenSampleClock * This,
            /* [in] */ IviFgenSampleClockSourceEnum newVal);
        
        /* [helpcontext][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IIviFgenSampleClock * This,
            /* [retval][out] */ IviFgenSampleClockSourceEnum *pVal);
        
        END_INTERFACE
    } IIviFgenSampleClockVtbl;

    interface IIviFgenSampleClock
    {
        CONST_VTBL struct IIviFgenSampleClockVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIviFgenSampleClock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIviFgenSampleClock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIviFgenSampleClock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIviFgenSampleClock_put_OutputEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_OutputEnabled(This,newVal) ) 

#define IIviFgenSampleClock_get_OutputEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_OutputEnabled(This,pVal) ) 

#define IIviFgenSampleClock_put_Source(This,newVal)	\
    ( (This)->lpVtbl -> put_Source(This,newVal) ) 

#define IIviFgenSampleClock_get_Source(This,pVal)	\
    ( (This)->lpVtbl -> get_Source(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIviFgenSampleClock_INTERFACE_DEFINED__ */

#endif /* __IviFgenLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


