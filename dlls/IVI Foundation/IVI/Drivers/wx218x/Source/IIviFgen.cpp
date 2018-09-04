/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

HRESULT WX218x::IIviFgen_InitiateGeneration()
{
	HRESULT hr = S_OK;

   hr = _IWX218x::InitiateGeneration();

   return hr;
}

HRESULT WX218x::IIviFgen_AbortGeneration()
{
	HRESULT hr = S_OK;

   hr = _IWX218x::AbortGeneration();

   return hr;
}

HRESULT WX218x::IIviFgen_get_Output(IIviFgenOutput** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IIviFgen_get_Trigger(IIviFgenTrigger** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IIviFgen_get_StandardWaveform(IIviFgenStandardWaveform** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IIviFgen_get_Arbitrary(IIviFgenArbitrary** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IIviFgen_get_AM(IIviFgenAM** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IIviFgen_get_FM(IIviFgenFM** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}