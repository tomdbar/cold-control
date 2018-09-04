/*---------------------------------------------------------------------------*/
/* Distributed by Agilent Technologies.                                      */
/*                                                                           */
/* Do not modify the contents of this file.                                  */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/* Title   : VISAEXT.H                                                       */
/* Purpose : Include file for the VISA Extension Library                     */
/*                                                                           */
/*---------------------------------------------------------------------------*/

#ifndef __VISAEXT_HEADER__
#define __VISAEXT_HEADER__

#if defined(__cplusplus) || defined(__cplusplus__)
   extern "C" {
#endif

/* Use BeginMacro to give a starting bracket {, allocate the array, and
   record the session handle.
*/

typedef struct {
   ViUInt16     command;
   ViAddr       address;
   ViUInt32     parm1;
   ViUInt32     parm2;
} ViMacroExtElem, *PViMacroExtElem;

#define VI_MACROEXT_DELAY          (0x0001)
#define VI_MACROEXT_POLLSTAT16     (0x0010)
#define VI_MACROEXT_POKE8          (0x0020)
#define VI_MACROEXT_POKE16         (0x0021)
#define VI_MACROEXT_POKE32         (0x0022)
#define VI_MACROEXT_READMODWRITE16 (0x0030)
#define VI_MACROEXT_PEEK8          (0x0040)
#define VI_MACROEXT_PEEK16         (0x0041)
#define VI_MACROEXT_PEEK32         (0x0042)
#define VI_MACROEXT_SESSION        (0xfffe)
#define VI_MACROEXT_END            (0xffff)

#define MAX_MACRO_ELEMENTS         (16)


#define viMacroExtBegin(session) \
   { \
      ViMacroExtElem macroArray[MAX_MACRO_ELEMENTS + 1]; \
      ViUInt32 whereMacroNow = 1; \
      macroArray[0].command  = VI_MACROEXT_SESSION; \
      macroArray[0].address  = 0; \
      macroArray[0].parm1    = session; \
      macroArray[0].parm2    = 0;

/* Use this function to 'reset' the macro and begin a new one
 */

#define viMacroExtReset() \
     (whereMacroNow = 1, \
      VI_SUCCESS);

/* Use these macro-functions to build the array
*/

#define viMacroExtDelay(uSec) \
   (whereMacroNow < MAX_MACRO_ELEMENTS) ? \
      macroArray[whereMacroNow].command = VI_MACROEXT_DELAY, \
      macroArray[whereMacroNow].address = 0, \
      macroArray[whereMacroNow].parm1   = uSec, \
      macroArray[whereMacroNow].parm2   = 0, \
      whereMacroNow++, \
      VI_SUCCESS \
   : \
      VI_ERROR_INV_SETUP;

#define viMacroExtPollStatus16(addrOffset, andMask, cmpValue) \
   (whereMacroNow < MAX_MACRO_ELEMENTS) ? \
      macroArray[whereMacroNow].command = VI_MACROEXT_POLLSTAT16, \
      macroArray[whereMacroNow].address = addrOffset, \
      macroArray[whereMacroNow].parm1   = andMask, \
      macroArray[whereMacroNow].parm2   = cmpValue, \
      whereMacroNow++, \
      VI_SUCCESS \
   : \
      VI_ERROR_INV_SETUP;

#define viMacroExtPeek8(addrOffset, pValue) \
   (whereMacroNow < MAX_MACRO_ELEMENTS) ? \
      macroArray[whereMacroNow].command = VI_MACROEXT_PEEK8, \
      macroArray[whereMacroNow].address = addrOffset, \
      macroArray[whereMacroNow].parm1   = (unsigned long)pValue, \
      macroArray[whereMacroNow].parm2   = 0, \
      whereMacroNow++, \
      VI_SUCCESS \
   : \
      VI_ERROR_INV_SETUP;

#define viMacroExtPeek16(addrOffset, pValue) \
   (whereMacroNow < MAX_MACRO_ELEMENTS) ? \
      macroArray[whereMacroNow].command = VI_MACROEXT_PEEK16, \
      macroArray[whereMacroNow].address = addrOffset, \
      macroArray[whereMacroNow].parm1   = (unsigned long)pValue, \
      macroArray[whereMacroNow].parm2   = 0, \
      whereMacroNow++, \
      VI_SUCCESS \
   : \
      VI_ERROR_INV_SETUP;

#define viMacroExtPeek32(addrOffset, pValue) \
   (whereMacroNow < MAX_MACRO_ELEMENTS) ? \
      macroArray[whereMacroNow].command = VI_MACROEXT_PEEK32, \
      macroArray[whereMacroNow].address = addrOffset, \
      macroArray[whereMacroNow].parm1   = (unsigned long)pValue, \
      macroArray[whereMacroNow].parm2   = 0, \
      whereMacroNow++, \
      VI_SUCCESS \
   : \
      VI_ERROR_INV_SETUP;

#define viMacroExtPoke8(addrOffset, value) \
   (whereMacroNow < MAX_MACRO_ELEMENTS) ? \
      macroArray[whereMacroNow].command = VI_MACROEXT_POKE8, \
      macroArray[whereMacroNow].address = addrOffset, \
      macroArray[whereMacroNow].parm1   = value, \
      macroArray[whereMacroNow].parm2   = 0, \
      whereMacroNow++, \
      VI_SUCCESS \
   : \
      VI_ERROR_INV_SETUP;

#define viMacroExtPoke16(addrOffset, value) \
   (whereMacroNow < MAX_MACRO_ELEMENTS) ? \
      macroArray[whereMacroNow].command = VI_MACROEXT_POKE16, \
      macroArray[whereMacroNow].address = addrOffset, \
      macroArray[whereMacroNow].parm1   = value, \
      macroArray[whereMacroNow].parm2   = 0, \
      whereMacroNow++, \
      VI_SUCCESS \
   : \
      VI_ERROR_INV_SETUP;

#define viMacroExtPoke32(addrOffset, value) \
   (whereMacroNow < MAX_MACRO_ELEMENTS) ? \
      macroArray[whereMacroNow].command = VI_MACROEXT_POKE32, \
      macroArray[whereMacroNow].address = addrOffset, \
      macroArray[whereMacroNow].parm1   = value, \
      macroArray[whereMacroNow].parm2   = 0, \
      whereMacroNow++, \
      VI_SUCCESS \
   : \
      VI_ERROR_INV_SETUP;

#define viMacroExtReadModWrite16(addrOffset, andMask, orMask) \
   (whereMacroNow < MAX_MACRO_ELEMENTS) ? \
      macroArray[whereMacroNow].command = VI_MACROEXT_READMODWRITE16, \
      macroArray[whereMacroNow].address = addrOffset, \
      macroArray[whereMacroNow].parm1   = andMask, \
      macroArray[whereMacroNow].parm2   = orMask, \
      whereMacroNow++, \
      VI_SUCCESS \
   : \
      VI_ERROR_INV_SETUP;

/* Now it's time to go to work.
*/

#define viMacroExtSendNow() \
   viMacroExt(macroArray[0].parm1, macroArray, whereMacroNow);
      

#define viMacroExtEnd() \
   }


ViStatus _VI_FUNC  viMacroExt(ViSession vi, ViMacroExtElem macroArray[], ViUInt32 size);

#if defined(__cplusplus) || defined(__cplusplus__)
   }
#endif


#endif // __VISAEXT_HEADER__
