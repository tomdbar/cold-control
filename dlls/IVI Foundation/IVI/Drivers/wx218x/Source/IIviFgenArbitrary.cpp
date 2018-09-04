/******************************************************************************
 *                                                                         
 *               Copyright 2010 Tabor Electronics Ltd.
 *               All rights reserved.
 *
 *****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

             /* ClearMemory */
HRESULT WX218x::IIviFgenArbitrary_ClearMemory()
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::ClearMemory();

	return hr;
}

                           /* Gain */
HRESULT WX218x::IIviFgenArbitrary_get_Gain(BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::get_Gain(ChannelName, val);

	return hr;
}

HRESULT WX218x::IIviFgenArbitrary_put_Gain(BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::put_Gain(ChannelName, val);

	return hr;
}

                           /* Offset */
HRESULT WX218x::IIviFgenArbitrary_get_Offset(BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::get_Offset(ChannelName, val);

	return hr;
}

HRESULT WX218x::IIviFgenArbitrary_put_Offset(BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::put_Offset(ChannelName, val);

	return hr;
}

                         /* SampleRate */
HRESULT WX218x::IIviFgenArbitrary_get_SampleRate(double* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::get_SampleRate(val);

	return hr;
}

HRESULT WX218x::IIviFgenArbitrary_put_SampleRate(double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::put_SampleRate(val);

	return hr;
}

HRESULT WX218x::IIviFgenArbitrary_get_Sequence(IIviFgenArbitrarySequence** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IIviFgenArbitrary_get_Waveform(IIviFgenArbitraryWaveform** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}