/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

HRESULT WX218x::IIviComponentIdentity_get_Description(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Description(val);

	return hr;
}

HRESULT WX218x::IIviDriverIdentity_get_GroupCapabilities(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_GroupCapabilities(val);

	return hr;
}

HRESULT WX218x::IIviDriverIdentity_get_Identifier(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Identifier(val);

	return hr;
}

HRESULT WX218x::IIviDriverIdentity_get_InstrumentFirmwareRevision(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InstrumentFirmwareRevision(val);

	return hr;
}

HRESULT WX218x::IIviDriverIdentity_get_InstrumentManufacturer(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InstrumentManufacturer(val);

	return hr;
}

HRESULT WX218x::IIviDriverIdentity_get_InstrumentModel(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_InstrumentModel(val);

	return hr;
}

HRESULT WX218x::IIviComponentIdentity_get_Revision(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Revision(val);

	return hr;
}

HRESULT WX218x::IIviDriverIdentity_get_SupportedInstrumentModels(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_SupportedInstrumentModels(val);

	return hr;
}

HRESULT WX218x::IIviDriverIdentity_get_SpecificationMajorVersion(long* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_SpecificationMajorVersion(val);

	return hr;
}

HRESULT WX218x::IIviDriverIdentity_get_SpecificationMinorVersion(long* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_SpecificationMinorVersion(val);

	return hr;
}

HRESULT WX218x::IIviComponentIdentity_get_Vendor(BSTR* val)
{
	HRESULT hr = S_OK;

	hr = DriverBase::get_Vendor(val);

	return hr;
}