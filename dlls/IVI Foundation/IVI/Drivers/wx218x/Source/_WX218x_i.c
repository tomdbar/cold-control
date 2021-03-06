

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu Dec 18 11:14:07 2014
 */
/* Compiler settings for WX218x.nimbus.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 7.00.0555 
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

MIDL_DEFINE_GUID(IID, LIBID_WX218xLib,0xeb5ffd1f,0x180b,0x400e,0x9f,0xed,0x46,0xaf,0x13,0xb6,0x59,0x82);


MIDL_DEFINE_GUID(IID, IID_IWX218x,0x5f53bb41,0xb729,0x45db,0x8c,0x3e,0x6b,0x9c,0x93,0x2b,0x88,0x98);


MIDL_DEFINE_GUID(IID, IID_IWX218xChannel,0x7c73a664,0x20bb,0x4490,0x90,0x91,0x06,0x40,0x50,0x7a,0x55,0x1d);


MIDL_DEFINE_GUID(IID, IID_IWX218xAM,0xdf8beabf,0x8254,0x4003,0xbb,0x83,0x9a,0x59,0x7d,0xf1,0xe6,0xaa);


MIDL_DEFINE_GUID(IID, IID_IWX218xChannelSync,0x7e13f2a4,0x751b,0x4bc3,0x81,0x97,0x91,0xf8,0x57,0x6a,0x54,0x28);


MIDL_DEFINE_GUID(IID, IID_IWX218xStandardWaveform,0x5897b7fa,0x6a10,0x4b53,0x8a,0x2e,0x16,0xb4,0x3e,0x06,0xda,0x76);


MIDL_DEFINE_GUID(IID, IID_IWX218xArbitrary,0x2cb79de8,0xc3f8,0x4552,0x86,0x19,0xa6,0xaf,0x9d,0xa4,0x10,0x8f);


MIDL_DEFINE_GUID(IID, IID_IWX218xArbitraryWaveform,0x5cb181df,0x5a2c,0x4013,0xb1,0x7e,0xd3,0x6e,0x40,0x74,0x29,0xb6);


MIDL_DEFINE_GUID(IID, IID_IWX218xArbitrarySequence,0x27cd29ca,0xaac3,0x441f,0xaf,0x84,0x4b,0x6f,0x38,0x3b,0x20,0x2b);


MIDL_DEFINE_GUID(IID, IID_IWX218xArbitrarySequenceAdvanceSequence,0x807128bd,0x9c38,0x4a56,0xa2,0x9c,0x38,0xbb,0x1b,0x75,0x1f,0x24);


MIDL_DEFINE_GUID(IID, IID_IWX218xCarrierModulation,0xf944e9c8,0x4f6b,0x44f4,0x87,0x6b,0x55,0xba,0x62,0x6d,0xf9,0x0b);


MIDL_DEFINE_GUID(IID, IID_IWX218xCouple,0x214b8d58,0xdf85,0x492c,0x86,0xe9,0xea,0x6c,0xea,0x3a,0xa8,0x51);


MIDL_DEFINE_GUID(IID, IID_IWX218xFM,0x26fb734a,0x5020,0x4ee9,0xbf,0x9d,0xc9,0xe0,0xc1,0xb1,0x3b,0x96);


MIDL_DEFINE_GUID(IID, IID_IWX218xMarkers,0xc97f8049,0x93d5,0x4947,0x97,0xfc,0x5d,0x6d,0x70,0xbf,0xf3,0x40);


MIDL_DEFINE_GUID(IID, IID_IWX218xTrigger,0xb6c58a67,0x73cd,0x4bd2,0x9a,0xf7,0x43,0xd5,0xdd,0xb8,0xa5,0x0b);


MIDL_DEFINE_GUID(IID, IID_IWX218xTriggerARM,0xd8b6d07c,0xb950,0x4ef9,0xbd,0x11,0x1c,0x44,0x68,0x0d,0x25,0x65);


MIDL_DEFINE_GUID(IID, IID_IWX218xTriggerSmartTrigger,0x25f6e0ef,0x20f1,0x41d5,0xb5,0xca,0xfe,0x91,0x56,0x91,0x86,0x23);


MIDL_DEFINE_GUID(IID, IID_IWX218xStateStorage,0x6c7601bf,0x38fc,0x4ea0,0x88,0xaa,0x49,0x90,0x73,0x97,0x7c,0x17);


MIDL_DEFINE_GUID(IID, IID_IWX218xXInstrument,0x54438c1e,0xa052,0x494f,0xbd,0xf8,0x18,0x0c,0x25,0x2e,0x5d,0x9d);


MIDL_DEFINE_GUID(IID, IID_IWX218xDigitalPulse,0xfd6bcbbf,0x3ff4,0x46d3,0xbf,0x01,0x21,0xe7,0x7e,0x1c,0x0f,0xd3);


MIDL_DEFINE_GUID(IID, IID_IWX218xSweep,0xb8c8f51d,0x10c8,0x4f4e,0x82,0x79,0xcc,0x05,0xa4,0x0c,0xc8,0x8f);


MIDL_DEFINE_GUID(IID, IID_IWX218xDigitalPatternOutput,0x4cc1f33e,0x5660,0x4cc1,0xa9,0x58,0x2f,0xf0,0x13,0x7d,0xfc,0x52);


MIDL_DEFINE_GUID(IID, IID_IWX218xCHIRP,0xba1968fa,0xb591,0x4460,0x99,0x0f,0xec,0xb9,0x21,0xce,0x5b,0xd7);


MIDL_DEFINE_GUID(IID, IID_IWX218xFSK,0x19eadc91,0x8a35,0x46f9,0xb0,0x07,0xb0,0xf0,0x40,0x25,0x35,0xdd);


MIDL_DEFINE_GUID(IID, IID_IWX218xASK,0xdd45b2ef,0xec02,0x46a8,0x92,0xa0,0x66,0x6c,0x10,0xbc,0xef,0x66);


MIDL_DEFINE_GUID(IID, IID_IWX218xFHOP,0xc854b823,0xba84,0x4294,0xbe,0x4f,0x38,0x3d,0x28,0x41,0x46,0x5c);


MIDL_DEFINE_GUID(IID, IID_IWX218xAHOP,0xd8c391ad,0x9e34,0x4ac7,0xb4,0xd5,0x65,0x64,0x3a,0x21,0x43,0x2d);


MIDL_DEFINE_GUID(IID, IID_IWX218xPattern,0x3b7fd226,0x21cd,0x42cd,0x94,0x3f,0xa6,0x23,0x5a,0x63,0x62,0xfc);


MIDL_DEFINE_GUID(IID, IID_IWX218xPatternComposer,0x1d6036f8,0xdf37,0x4c92,0xb3,0x0c,0xab,0x88,0x52,0x09,0xad,0x73);


MIDL_DEFINE_GUID(IID, IID_IWX218xPSK,0x41b28e43,0x47bb,0x4a5b,0xa0,0x5c,0xa4,0x68,0x37,0xb2,0xf0,0x7d);


MIDL_DEFINE_GUID(IID, IID_IWX218xQAM,0xe823dbcb,0x3f91,0x422c,0x8e,0xd0,0x08,0xb9,0x7f,0x97,0x93,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_WX218x,0x185d62a6,0x86bc,0x4b0d,0x8f,0xef,0xf3,0x5f,0x0a,0x0f,0xc9,0x43);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



