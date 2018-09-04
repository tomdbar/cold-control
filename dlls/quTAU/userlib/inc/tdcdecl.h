/******************************************************************************
 *
 *  Project:        TDC Control Library
 *
 *  Filename:       tdcdecl.h
 *
 *  Purpose:        Basic declarations and definitions
 *
 *  Author:         NHands GmbH & Co KG
 */
/*****************************************************************************/
/** @file tdcdecl.h
 *  @brief Technical declarations for the DLL interface and basic type defs.
 */
/*****************************************************************************/
/* $Id: tdcdecl.h,v 1.2 2015/07/10 13:34:26 trurl Exp $ */

#ifndef __TDCDECL_H
#define __TDCDECL_H

/** @name Technical declarations for the DLL interface
 *  @{
 */
#ifdef __cplusplus
#define EXTC extern "C"                        /**< For use with C++       */
#else
#define EXTC extern                            /**< For use with C         */
#endif

#ifdef unix
#define TDC_API EXTC                           /**< Not required for Unix  */
#define TDC_CC                                 /**< Not required for Unix  */
#else
#define TDC_CC     __stdcall                   /**< Calling convention     */
#ifdef  TDC_EXPORTS
#define TDC_API EXTC __declspec(dllexport)     /**< Internal DLL interface */
#else
#define TDC_API EXTC __declspec(dllimport)     /**< External DLL interface */
#endif
#endif
/* @} */


/** @name Portable data types
 *
 *  Integer data types of well defined byte length.
 *  double is portable by itself. bool is defined in C99 but not
 *  supported by all relevant compilers - we use our own type for
 *  clarification of interfaces.
 *  @{
 */
#ifdef _MSC_VER
typedef __int8  Int8;              /**< 8  bit integer for MSVC */
typedef __int32 Int32;             /**< 32 bit integer for MSVC */
typedef __int64 Int64;             /**< 64 bit integer for MSVC */
typedef __int32 Bln32;             /**< integer used as boolean */
#define LLXFORMAT "I64x"
#define LLDFORMAT "I64d"
#else
#include <inttypes.h>
typedef int8_t  Int8;              /**< 8  bit integer for GCC  */
typedef int32_t Int32;             /**< 32 bit integer for GCC  */
typedef int64_t Int64;             /**< 64 bit integer for GCC  */
typedef int32_t Bln32;             /**< integer used as boolean */
#define LLXFORMAT PRIx64
#define LLDFORMAT PRId64
#endif
/* @} */


/** @name Return values of the functions
 *
 *  All functions of this lib - as far as they can fail - return
 *  one of these constants for success control.
 *  @{
 */
#define TDC_Ok               0     /**< Success */
#define TDC_Error          (-1)    /**< Unspecified error */
#define TDC_Timeout          1     /**< Receive timed out */
#define TDC_NotConnected     2     /**< No connection was established */
#define TDC_DriverError      3     /**< Error accessing the USB driver */
#define TDC_DeviceLocked     7     /**< Can't connect device because already in use */
#define TDC_Unknown          8     /**< Unknown error */
#define TDC_NoDevice         9     /**< Invalid device number used in call */
#define TDC_OutOfRange      10     /**< Parameter in function call is out of range */
#define TDC_CantOpen        11     /**< Failed to open specified file */
#define TDC_NotInitialized  12     /**< Library has not been initialized */
#define TDC_NotEnabled      13     /**< Requested Feature is not enabled */
#define TDC_NotAvailable    14     /**< Requested Feature is not available */
/* @} */


#endif
