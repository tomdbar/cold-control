

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_IviPwrMeterLib,0x47ed5128,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviPwrMeter,0x47ed5314,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviPwrMeterAveraging,0x47ed5315,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviPwrMeterChannel,0x47ed5316,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviPwrMeterChannels,0x47ed5317,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviPwrMeterDutyCycleCorrection,0x47ed5318,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviPwrMeterMeasurement,0x47ed5319,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviPwrMeterRange,0x47ed531a,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviPwrMeterReferenceOscillator,0x47ed531b,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviPwrMeterTrigger,0x47ed531c,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviPwrMeterInternalTrigger,0x47ed531d,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



