/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

HRESULT WX218x::IIviDriver_Close()
{
	HRESULT hr = S_OK;

	hr = DriverBase::Close();

	return hr;
}

HRESULT WX218x::IIviDriver_Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
{
	HRESULT hr = S_OK;

	hr = DriverBase::Initialize(ResourceName, IdQuery, Reset, OptionString);

	return hr;
}

HRESULT WX218x::IIviDriver_get_Identity(IIviDriverIdentity** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IIviDriver_get_Utility(IIviDriverUtility** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IIviDriver_get_Initialized(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Initialized(val);

	return hr;
}

HRESULT WX218x::IIviDriver_get_DriverOperation(IIviDriverOperation** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}