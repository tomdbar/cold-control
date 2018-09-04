/******************************************************************************
*                                                                         
*               Copyright 2009-2010 Tabor Technologies
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

HRESULT WX218x::IIviFgenOutput_get_Count(long* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xChannel::get_Count(val);

   return hr;
}

HRESULT WX218x::IIviFgenOutput_get_Enabled(BSTR ChannelName, VARIANT_BOOL* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xChannel::get_Enabled(ChannelName, val);

   return hr;
}

HRESULT WX218x::IIviFgenOutput_put_Enabled(BSTR ChannelName, VARIANT_BOOL val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xChannel::put_Enabled(ChannelName, val);

   return hr;
}

HRESULT WX218x::IIviFgenOutput_get_Impedance(BSTR ChannelName, double* val)
{
   HRESULT hr = S_OK;

   hr = ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("Impedance"));

   return hr;
}

HRESULT WX218x::IIviFgenOutput_put_Impedance(BSTR ChannelName, double val)
{
   HRESULT hr = S_OK;

   hr = ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("Impedance"));

   return hr;
}

HRESULT WX218x::IIviFgenOutput_get_Name(long Index, BSTR* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xChannel::get_Name(Index, val);

   return hr;
}

HRESULT WX218x::IIviFgenOutput_get_OperationMode(BSTR ChannelName, IviFgenOperationModeEnum* val)
{
   HRESULT hr = S_OK;
   WX218xOperationModeEnum eOperationMode;
   hr = _IWX218xChannel::get_OperationMode(ChannelName, &eOperationMode);
   if (SUCCEEDED(hr))
   {
      switch (eOperationMode)
      {
      case WX218xOperationModeContinuous:
         *val = IviFgenOperationModeContinuous;
         break;

      case WX218xOperationModeBurst:
         *val = IviFgenOperationModeBurst;
         break;

      case WX218xOperationModeTrigger:
         hr = err.UnexpectedResponse();
         break;

      case WX218xOperationModeGate:
         hr = err.UnexpectedResponse();
         break;

      default:
         hr = err.UnexpectedResponse();
         break;
      }
   }

   return hr;
}

HRESULT WX218x::IIviFgenOutput_put_OperationMode(BSTR ChannelName, IviFgenOperationModeEnum val)
{
   HRESULT hr = S_OK;

   switch (val)
   {
   case IviFgenOperationModeContinuous:
      hr = _IWX218xChannel::put_OperationMode(ChannelName, WX218xOperationModeContinuous);
      break;

   case IviFgenOperationModeBurst:
      hr = _IWX218xChannel::put_OperationMode(ChannelName, WX218xOperationModeBurst);
      break;
   }

   return hr;
}

HRESULT WX218x::IIviFgenOutput_get_OutputMode(IviFgenOutputModeEnum* val)
{
   HRESULT hr = S_OK;
   WX218xOutputModeEnum eOutputMode;
   hr = _IWX218xChannel::get_OutputMode(&eOutputMode);
   if (SUCCEEDED(hr))
   {
      switch (eOutputMode)
      {
      case WX218xOutputModeFunction:
         *val = IviFgenOutputModeFunction;
         break;

      case WX218xOutputModeArbitrary:
         *val = IviFgenOutputModeArbitrary;
         break;

      case WX218xOutputModeSequence:
         *val = IviFgenOutputModeSequence;
         break;

      case WX218xOutputModeASequence:
         hr = err.UnexpectedResponse();
         break;

      case WX218xOutputModeModulation:
         hr = err.UnexpectedResponse();
         break;

      case WX218xOutputModeDPulse:
         hr = err.UnexpectedResponse();
         break;

      default:
         hr = err.UnexpectedResponse();
         break;

      }
   }

   return hr;
}

HRESULT WX218x::IIviFgenOutput_put_OutputMode(IviFgenOutputModeEnum val)
{
   HRESULT hr = S_OK;

   switch (val)
   {
   case IviFgenOutputModeFunction:
      hr = _IWX218xChannel::put_OutputMode(WX218xOutputModeFunction);
      break;

   case IviFgenOutputModeArbitrary:
      hr = _IWX218xChannel::put_OutputMode(WX218xOutputModeArbitrary);
      break;

   case IviFgenOutputModeSequence:
      hr = _IWX218xChannel::put_OutputMode(WX218xOutputModeSequence);
      break;
   }

   return hr;
}

HRESULT WX218x::IIviFgenOutput_get_ReferenceClockSource(IviFgenReferenceClockSourceEnum* val)
{
   HRESULT hr = S_OK;
   WX218xReferenceClockSourceEnum eRefClockSource;
   hr = _IWX218xChannel::get_ReferenceClockSource(&eRefClockSource);
   if (SUCCEEDED(hr))
   {
      switch (eRefClockSource)
      {
      case WX218xReferenceClockSourceInternal:
         *val = IviFgenReferenceClockSourceInternal;
         break;

      case WX218xReferenceClockSourceExternal:
         *val = IviFgenReferenceClockSourceExternal;
         break;

      default:
         hr = err.UnexpectedResponse();
         break;

      }
   }

   return hr;
}

HRESULT WX218x::IIviFgenOutput_put_ReferenceClockSource(IviFgenReferenceClockSourceEnum val)
{
   HRESULT hr = S_OK;

   switch (val)
   {
   case IviFgenReferenceClockSourceInternal:
      hr = _IWX218xChannel::put_ReferenceClockSource(WX218xReferenceClockSourceInternal);
      break;

   case IviFgenReferenceClockSourceExternal:
      hr = _IWX218xChannel::put_ReferenceClockSource(WX218xReferenceClockSourceExternal);
      break;

   case IviFgenReferenceClockSourceRTSI:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenReferenceClockSourceRTSI"), _T("val"), _T("put_ReferenceClockSource"));
      break;
   }

   return hr;
}