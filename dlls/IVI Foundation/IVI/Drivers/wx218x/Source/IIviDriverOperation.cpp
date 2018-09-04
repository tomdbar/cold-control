/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

HRESULT WX218x::IIviDriverOperation_get_Cache(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Cache(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_put_Cache(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_Cache(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_ClearInterchangeWarnings()
{
	HRESULT hr = S_OK;

	hr = DriverBase::ClearInterchangeWarnings();

	return hr;
}

HRESULT WX218x::IIviDriverOperation_get_DriverSetup(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_DriverSetup(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_GetNextCoercionRecord(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::GetNextCoercionRecord(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_GetNextInterchangeWarning(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::GetNextInterchangeWarning(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_get_InterchangeCheck(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InterchangeCheck(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_put_InterchangeCheck(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_InterchangeCheck(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_InvalidateAllAttributes()
{
	HRESULT hr = S_OK;

	hr = DriverBase::InvalidateAllAttributes();

	return hr;
}

HRESULT WX218x::IIviDriverOperation_get_IoResourceDescriptor(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_IoResourceDescriptor(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_get_QueryInstrumentStatus(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_QueryInstrumentStatus(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_put_QueryInstrumentStatus(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_QueryInstrumentStatus(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_get_LogicalName(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_LogicalName(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_get_RangeCheck(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_RangeCheck(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_put_RangeCheck(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_RangeCheck(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_get_RecordCoercions(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_RecordCoercions(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_put_RecordCoercions(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_RecordCoercions(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_ResetInterchangeCheck()
{
	HRESULT hr = S_OK;

	hr = DriverBase::ResetInterchangeCheck();

	return hr;
}

HRESULT WX218x::IIviDriverOperation_get_Simulate(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Simulate(val);

	return hr;
}

HRESULT WX218x::IIviDriverOperation_put_Simulate(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::put_Simulate(val);

	return hr;
}