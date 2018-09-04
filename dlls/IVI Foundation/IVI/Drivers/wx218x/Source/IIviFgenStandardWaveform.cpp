/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Amplitude */
HRESULT WX218x::IIviFgenStandardWaveform_get_Amplitude(BSTR ChannelName, double* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::get_Amplitude(ChannelName, val);

   return hr;
}

HRESULT WX218x::IIviFgenStandardWaveform_put_Amplitude(BSTR ChannelName, double val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_Amplitude(ChannelName, val);

   return hr;
}

/* Configure */
HRESULT WX218x::IIviFgenStandardWaveform_Configure(BSTR ChannelName, IviFgenWaveformEnum Waveform, double Amplitude, double DCOffset, double Frequency, double StartPhase)
{
   HRESULT hr = S_OK;
   /*WX218xWaveformEnum eWaveformTabor;

   switch (Waveform)
   {
   case IviFgenWaveformSine:
      eWaveformTabor = WX218xWaveformSine;
      break;

   case IviFgenWaveformSquare:
      eWaveformTabor = WX218xWaveformSquare;
      break;

   case IviFgenWaveformTriangle:
      eWaveformTabor = WX218xWaveformTriangle;
      break;

   case IviFgenWaveformRampUp:
      eWaveformTabor = WX218xWaveformRampUp;
      return hr;

   case IviFgenWaveformRampDown:
     eWaveformTabor = WX218xWaveformRampDown;
      return hr;

   case IviFgenWaveformDC:
      eWaveformTabor = WX218xWaveformDC;
      break;
   }

   hr = _IWX218xStandardWaveform::Configure(ChannelName, eWaveformTabor, Amplitude, DCOffset, Frequency, StartPhase); */

   return hr;
}

/* DCOffset */
HRESULT WX218x::IIviFgenStandardWaveform_get_DCOffset(BSTR ChannelName, double* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::get_DCOffset(ChannelName, val);

   return hr;
}

HRESULT WX218x::IIviFgenStandardWaveform_put_DCOffset(BSTR ChannelName, double val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_DCOffset(ChannelName, val);

   return hr;
}

/* DutyCycleHigh */
HRESULT WX218x::IIviFgenStandardWaveform_get_DutyCycleHigh(BSTR ChannelName, double* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::get_DutyCycleHigh(ChannelName, val);

   return hr;
}

HRESULT WX218x::IIviFgenStandardWaveform_put_DutyCycleHigh(BSTR ChannelName, double val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_DutyCycleHigh(ChannelName, val);

   return hr;
}

/* Frequency */
HRESULT WX218x::IIviFgenStandardWaveform_get_Frequency(BSTR ChannelName, double* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::get_Frequency(ChannelName, val);

   return hr;
}

HRESULT WX218x::IIviFgenStandardWaveform_put_Frequency(BSTR ChannelName, double val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_Frequency(ChannelName, val);

   return hr;
}

/* StartPhase */
HRESULT WX218x::IIviFgenStandardWaveform_get_StartPhase(BSTR ChannelName, double* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::get_StartPhase(ChannelName, val);

   return hr;
}

HRESULT WX218x::IIviFgenStandardWaveform_put_StartPhase(BSTR ChannelName, double val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_StartPhase(ChannelName, val);

   return hr;
}
/* Waveform */
HRESULT WX218x::IIviFgenStandardWaveform_get_Waveform(BSTR ChannelName, IviFgenWaveformEnum* val)
{
   HRESULT hr = S_OK;
   WX218xWaveformEnum eWaveform;
   hr = _IWX218xStandardWaveform::get_Waveform(ChannelName, &eWaveform);
   if (SUCCEEDED(hr))
   {
      switch (eWaveform)
      {
      case WX218xWaveformSine:
         *val = IviFgenWaveformSine;
         break;

      case WX218xWaveformSquare:
         *val = IviFgenWaveformSquare;
         break;

      case WX218xWaveformTriangle:
         *val = IviFgenWaveformTriangle;
         break;

      case WX218xWaveformRampUp:
         *val = IviFgenWaveformRampUp;
         break;

      case WX218xWaveformRampDown:
         *val = IviFgenWaveformRampDown;
         break;

      case WX218xWaveformSinc:
         hr = err.UnexpectedResponse();
         break;

      case WX218xWaveformGaussian:
         hr = err.UnexpectedResponse();
         break;

      case WX218xWaveformExponential:
         hr = err.UnexpectedResponse();
         break;

      case WX218xWaveformNoise:
         hr = err.UnexpectedResponse();
         break;

      case WX218xWaveformDC:
         *val = IviFgenWaveformDC;
         break;

      default:
         hr = err.UnexpectedResponse();
         break;

      }
   }


   return hr;
}

HRESULT WX218x::IIviFgenStandardWaveform_put_Waveform(BSTR ChannelName, IviFgenWaveformEnum val)
{
   HRESULT hr = S_OK;

   switch (val)
   {
   case IviFgenWaveformSine:
      hr = _IWX218xStandardWaveform::put_Waveform(ChannelName, WX218xWaveformSine);
      break;

   case IviFgenWaveformSquare:
      hr = _IWX218xStandardWaveform::put_Waveform(ChannelName, WX218xWaveformSquare);
      break;

   case IviFgenWaveformTriangle:
      hr = _IWX218xStandardWaveform::put_Waveform(ChannelName, WX218xWaveformTriangle);
      break;

   case IviFgenWaveformRampUp:
      hr = _IWX218xStandardWaveform::put_Waveform(ChannelName, WX218xWaveformRampUp);
      break;

   case IviFgenWaveformRampDown:
      hr = _IWX218xStandardWaveform::put_Waveform(ChannelName, WX218xWaveformRampDown);
      break;

   case IviFgenWaveformDC:
      hr = _IWX218xStandardWaveform::put_Waveform(ChannelName, WX218xWaveformDC);
      break;

   } 


   return hr;
}