/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#define NTL_UNUSED(x) x

#pragma warning( push )
#pragma warning( disable : 4481 )	// C4481: nonstandard extension used

// Add support for calling .NET assemblies
#ifdef NTL_MANAGED_CPP_EXTENSIONS
#include <vcclr.h>
#endif

#include "ivifloat.h"
#include "ntlcallcontext.h"
#include "ntlerrorreporter.h"
#include "ntlutil.h"
#include "ntlconfigstore.h"
#include "ntltrace.h"
#include "ntlinstrmodel.h"
#include "ntlenumutil.h"
#include "ntlformattedio.h"

#ifndef NTL_NO_IO
#include "ntlio.h"
#endif

#include "ntlnode.h"
#include "ntlrepcap.h"

#ifndef NTL_NO_IO
#ifndef NTL_NO_VISACOM
#include "ntlvisacom.h"
#endif	// NTL_NO_VISACOM

#ifndef NTL_NO_VISA
#include "ntlvisac.h"
#endif	// NTL_NO_VISA
#endif // NTL_NO_IO

#include "ntlstatecache.h"
#include "ntlcoercion.h"
#include "ntldriver.h"
#include "ntlnode.inl"

#define NIMBUS_OBJECT_ENTRY_AUTO(ClassName) \
	OBJECT_ENTRY_AUTO(__uuidof(ClassName), ClassName)

#define NIMBUS_OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(ClassName) \
	OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(ClassName), ClassName)

#pragma warning( pop )
