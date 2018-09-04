/******************************************************************************
 *                                                                         
 *               Copyright 2010 Tabor Electronics Ltd.
 *               All rights reserved.
 *
 *****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

                            /* Clear */
HRESULT WX218x::IIviFgenArbitraryWaveform_Clear(long Handle)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitraryWaveform::Clear(Handle);

	return hr;
}

                         /* Configure */
HRESULT WX218x::IIviFgenArbitraryWaveform_Configure(BSTR ChannelName, long Handle, double Gain, double Offset)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitraryWaveform::Configure(ChannelName, Handle, Gain, Offset);

	return hr;
}

                       /* Create */
HRESULT WX218x::IIviFgenArbitraryWaveform_Create(SAFEARRAY** Data, long* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitraryWaveform::Create(Data, val);

	return hr;
}

                       /* Frequency */
HRESULT WX218x::IIviFgenArbitraryWaveform_get_Frequency(BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

	hr = ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("Frequency"));

	return hr;
}

HRESULT WX218x::IIviFgenArbitraryWaveform_put_Frequency(BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

	hr = ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("Frequency"));

	return hr;
}

                         /* NumberWaveformMax */
HRESULT WX218x::IIviFgenArbitraryWaveform_get_NumberWaveformsMax(long* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitraryWaveform::get_NumberWaveformsMax(val);

	return hr;
}

                        /* Quantum */
HRESULT WX218x::IIviFgenArbitraryWaveform_get_Quantum(long* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitraryWaveform::get_Quantum(val);

	return hr;
}

                         /* SizeMax */
HRESULT WX218x::IIviFgenArbitraryWaveform_get_SizeMax(long* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitraryWaveform::get_SizeMax(val);

	return hr;
}

                       /* SizeMin */
HRESULT WX218x::IIviFgenArbitraryWaveform_get_SizeMin(long* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitraryWaveform::get_SizeMin(val);

	return hr;
}