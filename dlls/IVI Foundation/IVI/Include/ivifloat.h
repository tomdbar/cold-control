/************************************************************************
    IviFloat.h

    This source file was developed by and is the property of National 
    Instruments.  Use and distribution of this file is governed by 
    US Copyright law and the IVI Foundation Shared Open-Source Component 
    Licensing agreement. 

    Copyright 2008, National Instruments
*************************************************************************/

#ifndef IVIFLOAT_HEADER_H
#define IVIFLOAT_HEADER_H

#include "IviVisaType.h"

#ifdef __cplusplus
	extern "C" {
#endif

/* Defined Value Constants */
#define IVIFLOAT_VAL_TYPE_NORMAL	0L
#define IVIFLOAT_VAL_TYPE_NAN		1L
#define IVIFLOAT_VAL_TYPE_POS_INF	2L
#define IVIFLOAT_VAL_TYPE_NEG_INF	3L

/* Functions */
ViReal64 _VI_FUNC IviFloat_PosInf(void);
ViReal64 _VI_FUNC IviFloat_NegInf(void);
ViReal64 _VI_FUNC IviFloat_NaN(void);
ViInt32 _VI_FUNC IviFloat_GetType(ViReal64 v);

#ifdef __cplusplus
	}
#endif

#endif /* IVIFLOAT_HEADER_H */
