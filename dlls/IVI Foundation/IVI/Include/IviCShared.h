/************************************************************************
    IviCShared.h

    This source file was developed by and is the property of National 
    Instruments.  Use and distribution of this file is governed by 
    US Copyright law and the IVI Foundation Shared Open-Source Component 
    Licensing agreement. 

    Copyright 2008, National Instruments
*************************************************************************/
#ifndef IVI_C_SHARED_H
#define IVI_C_SHARED_H

#include "IviVisaType.h"

#ifdef __cplusplus
	extern"C"{
#endif


/**************************************
/ IviSession Functions
/*************************************/
ViStatus _VI_FUNC IviSession_New(ViSession *handle);

ViStatus _VI_FUNC IviSession_SetDataPtr(ViSession handle,
                                        ViAddr dataPtr);

ViStatus _VI_FUNC IviSession_GetDataPtr(ViSession handle,
                                        ViAddr *dataPtr);

ViStatus _VI_FUNC IviSession_Lock(ViSession handle,
                                  ViBoolean *hasLock);

ViStatus _VI_FUNC IviSession_Unlock(ViSession handle,
                                    ViBoolean *hasLock);

ViStatus _VI_FUNC IviSession_SetError(ViSession handle,
                                      ViStatus code,
                                      ViConstString description);

ViStatus _VI_FUNC IviSession_GetError(ViSession handle,
                                      ViInt32 descriptionBufferSize,
                                      ViStatus *code,
                                      ViChar description[]);

ViStatus _VI_FUNC IviSession_ClearError(ViSession handle);

ViStatus _VI_FUNC IviSession_Dispose (ViSession handle);

/**************************************
/ IviSessionError Functions
/*************************************/
ViStatus _VI_FUNC IviSessionError_SetErrorCode(ViSession handle,
                                               ViStatus code);

ViStatus _VI_FUNC IviSessionError_GetErrorCode(ViSession handle,
                                               ViStatus *code);

ViStatus _VI_FUNC IviSessionError_SetErrorDescription(ViSession handle,
                                                      ViConstString description);

ViStatus _VI_FUNC IviSessionError_GetErrorDescription(ViSession handle,
                                                      ViConstString *errordescription);

/**************************************
/ IviDriverLoader Typedefs
/*************************************/
typedef struct IviDriverLoaderStruct* IviDriverLoader;

/**************************************
/ IviDriverLoader Functions
/*************************************/
ViStatus _VI_FUNC IviDriverLoader_New (ViConstString path,
                                       ViConstString prefix,
                                       IviDriverLoader* handle);

ViStatus _VI_FUNC IviDriverLoader_GetFunctionPtr(IviDriverLoader handle,
                                                 ViConstString functionName,
                                                 ViAddr *functionPtr);

ViStatus _VI_FUNC IviDriverLoader_GetFunctionPtrByCompleteName(IviDriverLoader handle,
                                                               ViConstString completeName,
                                                               ViAddr *functionPtr);

void _VI_FUNC IviDriverLoader_Dispose(IviDriverLoader handle);

/**************************************
/ IviErrorMessage Typedefs
/*************************************/
#ifdef WIN32
  #pragma pack(push)
  #pragma pack(4)
#endif

typedef struct {
	ViStatus errorCode;
	ViConstString errorMessage;
} IviErrorTableEntry;

typedef IviErrorTableEntry* IviErrorTable;

#ifdef WIN32
  #pragma pack(pop)
#endif

/**************************************
/ IviErrorMessage Functions
/*************************************/
ViStatus _VI_FUNC IviErrorMessage_Get (ViStatus errorCode,
                                       IviErrorTable errorTable,
                                       ViConstString* errorMessage);

ViStatus _VI_FUNC IviErrorMessage_FormatWithElaboration (ViConstString errorMessage,
                                                         ViConstString errorElaboration,
                                                         ViInt32 errorDescriptionBufferSize,
                                                         ViChar errorDescription[]);


/**************************************
/ IviThreadError Functions
/*************************************/
ViStatus _VI_FUNC IviThreadError_SetErrorCode (ViStatus code);

ViStatus _VI_FUNC IviThreadError_SetErrorDescription (ViConstString description);

ViStatus _VI_FUNC IviThreadError_GetErrorCode (ViStatus* code);

ViStatus _VI_FUNC IviThreadError_GetErrorDescription (ViConstString* description);

/**************************************
/ IviMultithreadLock Typedefs
/*************************************/
typedef struct IviMultithreadLockStruct* IviMultithreadLock;

/**************************************
/ IviMultithreadLock Functions
/*************************************/
ViStatus _VI_FUNC IviMultithreadLock_New(IviMultithreadLock* lock);

void _VI_FUNC IviMultithreadLock_Acquire(IviMultithreadLock lock);

void _VI_FUNC IviMultithreadLock_Release(IviMultithreadLock lock);

void _VI_FUNC IviMultithreadLock_Dispose(IviMultithreadLock lock);

/**************************************
/ IviThreadVar Typedefs
/*************************************/
typedef void (*IviThreadVarFreeFuncPtr) (ViAddr ptr);

typedef struct IviThreadVarStruct* IviThreadVar;

/**************************************
/ IviThreadVar Functions
/*************************************/
ViStatus _VI_FUNC IviThreadVar_New(IviThreadVarFreeFuncPtr freeFn,
                                   IviThreadVar* token);

void _VI_FUNC IviThreadVar_SetValueViAddr(IviThreadVar token,
                                          ViAddr val);

void _VI_FUNC IviThreadVar_GetValueViAddr(IviThreadVar token,
                                          ViAddr* val);

void _VI_FUNC IviThreadVar_Dispose(IviThreadVar token);


/**************************************
/ C Shared Component-Defined Status Codes
/*************************************/
#define IVI_ERROR_INVALID_SESSION_HANDLE        0xBFFA1190L
#define IVI_ERROR_CANNOT_CREATE_LOCK            0xBFFA1198L
#define IVI_ERROR_CANNOT_CREATE_THREAD_LOCAL    0xBFFA11A0L

#ifdef __cplusplus
	}
#endif

#endif // IVI_C_SHARED_H
