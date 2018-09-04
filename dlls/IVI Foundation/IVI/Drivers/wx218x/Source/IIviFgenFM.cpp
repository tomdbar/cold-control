/******************************************************************************
 *                                                                         
 *               Copyright 2010 Tabor Electronics Ltd.
 *               All rights reserved.
 *
 *****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

                                 /* ConfigureInternal */
HRESULT WX218x::IIviFgenFM_ConfigureInternal(double Deviation, IviFgenFMInternalWaveformEnum Waveform, double Frequency)
{
	HRESULT hr = S_OK;
   WX218xFMInternalWaveformEnum eWaveformTabor;

   switch (Waveform)
   {
    case IviFgenFMInternalWaveformSine:
      eWaveformTabor = WX218xFMInternalWaveformSine;
      break;

    case IviFgenFMInternalWaveformTriangle:
      eWaveformTabor = WX218xFMInternalWaveformTriangle;
      break;

    case IviFgenFMInternalWaveformSquare:
      eWaveformTabor = WX218xFMInternalWaveformSquare;
      break;

    case IviFgenFMInternalWaveformRampUp:
      eWaveformTabor = WX218xFMInternalWaveformRamp;
      break;

   case IviFgenFMInternalWaveformRampDown:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenFMInternalWaveformRampDown"), _T("Waveform"), _T("ConfigureInternal"));
      return hr;
   }

   hr = _IWX218xFM::ConfigureInternal(Deviation, eWaveformTabor, Frequency);

	return hr;
}

                                /* Enabled */
HRESULT WX218x::IIviFgenFM_get_Enabled(BSTR ChannelName, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFM::get_Enabled(ChannelName, val);

	return hr;
}

HRESULT WX218x::IIviFgenFM_put_Enabled(BSTR ChannelName, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFM::put_Enabled(ChannelName, val);

	return hr;
}

                          /* InternalDeviation */
HRESULT WX218x::IIviFgenFM_get_InternalDeviation(double* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFM::get_InternalDeviation(val);

	return hr;
}

HRESULT WX218x::IIviFgenFM_put_InternalDeviation(double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFM::put_InternalDeviation(val);

	return hr;
}

                           /* InternalFrequency */
HRESULT WX218x::IIviFgenFM_get_InternalFrequency(double* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFM::get_InternalFrequency(val);

	return hr;
}

HRESULT WX218x::IIviFgenFM_put_InternalFrequency(double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFM::put_InternalFrequency(val);

	return hr;
}

                               /* InternalWaveform */
HRESULT WX218x::IIviFgenFM_get_InternalWaveform(IviFgenFMInternalWaveformEnum* val)
{
	HRESULT hr = S_OK;
   WX218xFMInternalWaveformEnum eWaveform;
   hr = _IWX218xFM::get_InternalWaveform(&eWaveform);
   if (SUCCEEDED(hr))
   {
      switch (eWaveform)
      {
       case WX218xFMInternalWaveformSine:
          *val = IviFgenFMInternalWaveformSine;
          break;

       case WX218xFMInternalWaveformTriangle:
          *val = IviFgenFMInternalWaveformTriangle;
          break;

       case WX218xFMInternalWaveformSquare:
          *val = IviFgenFMInternalWaveformSquare;
          break;

       case WX218xFMInternalWaveformRamp:
          *val = IviFgenFMInternalWaveformRampUp;
          break;

      default:
         hr = err.UnexpectedResponse();
         break;

      }
   }

   return hr;
}

HRESULT WX218x::IIviFgenFM_put_InternalWaveform(IviFgenFMInternalWaveformEnum val)
{
	HRESULT hr = S_OK;

   switch (val)
   {
    case IviFgenFMInternalWaveformSine:
       hr = _IWX218xFM::put_InternalWaveform(WX218xFMInternalWaveformSine);
       break;

    case IviFgenFMInternalWaveformTriangle:
       hr = _IWX218xFM::put_InternalWaveform(WX218xFMInternalWaveformTriangle);
       break;

    case IviFgenFMInternalWaveformSquare:
       hr = _IWX218xFM::put_InternalWaveform(WX218xFMInternalWaveformSquare);
       break;

    case IviFgenFMInternalWaveformRampUp:
       hr = _IWX218xFM::put_InternalWaveform(WX218xFMInternalWaveformRamp);
       break;

    case IviFgenFMInternalWaveformRampDown:
       hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenFMInternalWaveformRampDown"), _T("val"), _T("put_InternalWaveform"));
       break;
   }

   return hr;
}

                          /* Source */
HRESULT WX218x::IIviFgenFM_get_Source(BSTR ChannelName, IviFgenFMSourceEnum* val)
{
	HRESULT hr = S_OK;

	hr = ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("Source"));
	return hr;
}

HRESULT WX218x::IIviFgenFM_put_Source(BSTR ChannelName, IviFgenFMSourceEnum val)
{
	HRESULT hr = S_OK;

	hr = ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("Source"));
	return hr;
}