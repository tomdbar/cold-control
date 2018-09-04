

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

MIDL_DEFINE_GUID(IID, LIBID_IviCounterLib,0x47ed512b,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounter,0x47ed5378,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterChannels,0x47ed5379,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterChannel,0x47ed537a,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterFrequency,0x47ed5383,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterPeriod,0x47ed5384,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterPulseWidth,0x47ed537b,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterDutyCycle,0x47ed537c,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterEdgeTime,0x47ed537d,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterFrequencyRatio,0x47ed537e,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterTimeInterval,0x47ed537f,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterPhase,0x47ed5380,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterTotalizeContinuous,0x47ed5385,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterTotalizeGated,0x47ed5386,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterTotalizeTimed,0x47ed5381,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterArm,0x47ed5382,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterArmStart,0x47ed5387,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterArmStartExternal,0x47ed5388,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterArmStop,0x47ed5389,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterArmStopExternal,0x47ed538a,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterMeasurement,0x47ed538c,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);


MIDL_DEFINE_GUID(IID, IID_IIviCounterVoltage,0x47ed538d,0xa398,0x11d4,0xba,0x58,0x00,0x00,0x64,0x65,0x73,0x74);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



