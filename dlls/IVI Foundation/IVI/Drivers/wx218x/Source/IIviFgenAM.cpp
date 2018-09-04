/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* ConfigureInternal */
HRESULT WX218x::IIviFgenAM_ConfigureInternal(double Depth, IviFgenAMInternalWaveformEnum Waveform, double Frequency)
{
   HRESULT hr = S_OK;
   WX218xAMInternalWaveformEnum eWaveformTabor;

   switch (Waveform)
   {
   case IviFgenAMInternalWaveformSine:
      eWaveformTabor = WX218xAMInternalWaveformSine;
      break;

   case IviFgenAMInternalWaveformTriangle:
      eWaveformTabor = WX218xAMInternalWaveformTriangle;
      break;

   case IviFgenAMInternalWaveformSquare:
      eWaveformTabor = WX218xAMInternalWaveformSquare;
      break;

   case IviFgenAMInternalWaveformRampUp:
      eWaveformTabor = WX218xAMInternalWaveformRamp;
      break;

   case IviFgenAMInternalWaveformRampDown:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenAMInternalWaveformRampDown"), _T("Waveform"), _T("ConfigureInternal"));
      return hr;

   default:
      hr = err.UnexpectedResponse();
      return hr;
   }

   hr = _IWX218xAM::ConfigureInternal(Depth, eWaveformTabor, Frequency);

   return hr;
}

HRESULT WX218x::IIviFgenAM_get_Enabled(BSTR ChannelName, VARIANT_BOOL* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xAM::get_Enabled(ChannelName, val);

   return hr;
}

HRESULT WX218x::IIviFgenAM_put_Enabled(BSTR ChannelName, VARIANT_BOOL val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xAM::put_Enabled(ChannelName, val);

   return hr;
}

HRESULT WX218x::IIviFgenAM_get_InternalDepth(double* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xAM::get_InternalDepth(val);

   return hr;
}

HRESULT WX218x::IIviFgenAM_put_InternalDepth(double val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xAM::put_InternalDepth(val);

   return hr;
}

HRESULT WX218x::IIviFgenAM_get_InternalFrequency(double* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xAM::get_InternalFrequency(val);

   return hr;
}

HRESULT WX218x::IIviFgenAM_put_InternalFrequency(double val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xAM::put_InternalFrequency(val);

   return hr;
}

HRESULT WX218x::IIviFgenAM_get_InternalWaveform(IviFgenAMInternalWaveformEnum* val)
{
   HRESULT hr = S_OK;
   WX218xAMInternalWaveformEnum eWaveform;
   hr = _IWX218xAM::get_InternalWaveform(&eWaveform);
   if (SUCCEEDED(hr))
   {
      switch (eWaveform)
      {
      case WX218xAMInternalWaveformSine:
         *val = IviFgenAMInternalWaveformSine;
         break;

      case WX218xAMInternalWaveformTriangle:
         *val = IviFgenAMInternalWaveformTriangle;
         break;

      case WX218xAMInternalWaveformSquare:
         *val = IviFgenAMInternalWaveformSquare;
         break;

      case WX218xAMInternalWaveformRamp:
         *val = IviFgenAMInternalWaveformRampUp;
         break;

      default:
         hr = err.UnexpectedResponse();
         break;

      }
   }

   return hr;
}

HRESULT WX218x::IIviFgenAM_put_InternalWaveform(IviFgenAMInternalWaveformEnum val)
{
   HRESULT hr = S_OK;

   switch (val)
   {
   case IviFgenAMInternalWaveformSine:
      hr = _IWX218xAM::put_InternalWaveform(WX218xAMInternalWaveformSine);
      break;

   case IviFgenAMInternalWaveformTriangle:
      hr = _IWX218xAM::put_InternalWaveform(WX218xAMInternalWaveformTriangle);
      break;

   case IviFgenAMInternalWaveformSquare:
      hr = _IWX218xAM::put_InternalWaveform(WX218xAMInternalWaveformSquare);
      break;

   case IviFgenAMInternalWaveformRampUp:
      hr = _IWX218xAM::put_InternalWaveform(WX218xAMInternalWaveformRamp);
      break;

   case IviFgenAMInternalWaveformRampDown:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenAMInternalWaveformRampDown"), _T("val"), _T("put_InternalWaveform"));
      break;
   }

   return hr;
}

HRESULT WX218x::IIviFgenAM_get_Source(BSTR ChannelName, IviFgenAMSourceEnum* val)
{
   HRESULT hr = S_OK;

   hr = ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("Source"));
   return hr;
}

HRESULT WX218x::IIviFgenAM_put_Source(BSTR ChannelName, IviFgenAMSourceEnum val)
{
   HRESULT hr = S_OK;

   hr = ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("Source"));
   return hr;
}