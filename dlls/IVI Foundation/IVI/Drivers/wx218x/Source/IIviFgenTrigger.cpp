/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* BurstCount */
HRESULT WX218x::IIviFgenTrigger_get_BurstCount(BSTR ChannelName, long* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xTrigger::get_BurstCount(ChannelName, val);

   return hr;
}

HRESULT WX218x::IIviFgenTrigger_put_BurstCount(BSTR ChannelName, long val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_BurstCount(ChannelName, val);

   return hr;
}

/* InternalRate */
HRESULT WX218x::IIviFgenTrigger_get_InternalRate(double* val)
{
   HRESULT hr = S_OK;

   hr = ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("InternalRate"));
   return hr;
}

HRESULT WX218x::IIviFgenTrigger_put_InternalRate(double val)
{
   HRESULT hr = S_OK;

   hr = ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("InternalRate"));
   return hr;
}

/* Send Software trigger */
HRESULT WX218x::IIviFgenTrigger_SendSoftwareTrigger()
{
   HRESULT hr = S_OK;

   hr = _IWX218xTrigger::SendSoftwareTrigger();

   return hr;
}

/* Source */
HRESULT WX218x::IIviFgenTrigger_get_Source(BSTR ChannelName, IviFgenTriggerSourceEnum* val)
{
   HRESULT hr = S_OK;
   WX218xTriggerSourceEnum eSource;
   hr = _IWX218xTrigger::get_Source(ChannelName, &eSource);
   if (SUCCEEDED(hr))
   {
      switch (eSource)
      {
      case WX218xTriggerSourceExternal:
         *val = IviFgenTriggerSourceExternal;
         break;

      case WX218xTriggerSourceSoftware:
         *val = IviFgenTriggerSourceSoftware;
         break;

      case WX218xTriggerSourceTimer:
         hr = err.UnexpectedResponse();
         break;

      default:
         hr = err.UnexpectedResponse();
         break;
      }
   }

   return hr;
}

HRESULT WX218x::IIviFgenTrigger_put_Source(BSTR ChannelName, IviFgenTriggerSourceEnum val)
{
   HRESULT hr = S_OK;

   switch (val)
   {
   case IviFgenTriggerSourceExternal:
      hr = _IWX218xTrigger::put_Source(ChannelName, WX218xTriggerSourceExternal);
      break;

   case IviFgenTriggerSourceSoftware:
      hr = _IWX218xTrigger::put_Source(ChannelName, WX218xTriggerSourceSoftware);
      break;

   case IviFgenTriggerSourceInternal:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceInternal"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceTTL0:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceTTL0"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceTTL1:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceTTL1"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceTTL2:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceTTL2"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceTTL3:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceTTL3"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceTTL4:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceTTL4"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceTTL5:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceTTL5"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceTTL6:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceTTL6"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceTTL7:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceTTL7"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceECL0:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceECL0"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceECL1:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceECL1"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourcePXIStar:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourcePXIStar"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceRTSI0:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceRTSI0"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceRTSI1:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceRTSI1"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceRTSI2:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceRTSI2"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceRTSI3:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceRTSI3"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceRTSI4:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceRTSI4"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceRTSI5:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceRTSI5"), _T("val"), _T("put_Source"));
      break;

   case IviFgenTriggerSourceRTSI6:
      hr = ReportError(IDS_E_IVI_VALUE_NOT_SUPPORTED, _T("IviFgenTriggerSourceRTSI6"), _T("val"), _T("put_Source"));
      break;

   }

   return hr;
}