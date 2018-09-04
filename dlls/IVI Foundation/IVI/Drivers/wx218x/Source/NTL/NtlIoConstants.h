/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <stdarg.h>

enum IoDataType
{
	IoDataTypeByte,
	IoDataTypeInt16,
	IoDataTypeInt32,
	IoDataTypeInt64,
	IoDataTypeReal32,
	IoDataTypeReal64,
	IoDataTypeString
};

enum IoSessionType
{
	Visa,
	VisaCom,
	Custom
};

enum IoLockType
{
	IoLockExclusive,
	IoLockShared
};
