/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* HiPassWidth */
HRESULT WX218x::IWX218xTriggerSmartTrigger_HiPassWidth_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double val_min, val_max;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      val_min = SMART_TRIG_MIN_WX2184;
      val_max = SMART_TRIG_MAX_WX2184; 
     break;

     default:
      val_min = SMART_TRIG_MIN;
      val_max = SMART_TRIG_MAX; 
    }

   if ( val < val_min || val > val_max ) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xTriggerSmartTrigger_get_HiPassWidth(BSTR Channel, double* val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:FILT:HPAS:WIDT?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xTriggerSmartTrigger_put_HiPassWidth(BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRIG:FILT:HPAS:WIDT %+17.9E")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* HiPassEnabled */
HRESULT WX218x::IWX218xTriggerSmartTrigger_get_HiPassEnabled(BSTR Channel, VARIANT_BOOL* val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:FILT:HPAS:STAT?"));
   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xTriggerSmartTrigger_put_HiPassEnabled(BSTR Channel, VARIANT_BOOL val)
{
   HRESULT hr = S_OK;
   CString strEnabled, strChanSend, strCommandSend;
   CString strChanCheck = COLE2T(Channel);

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (val == VARIANT_TRUE)
      strEnabled = _T("ON");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRIG:FILT:HPAS:STAT %s")), strEnabled);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* LowPassWidth */
HRESULT WX218x::IWX218xTriggerSmartTrigger_get_LowPassWidth(BSTR Channel, double* val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:FILT:LPAS:WIDT?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xTriggerSmartTrigger_put_LowPassWidth(BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRIG:FILT:LPAS:WIDT %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

//====================================================================================================
//                                      - ConfigureSmartTrigLowPassWidth -
HRESULT WX218x::IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassWidth(BSTR Channel, double Width)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTriggerSmartTrigger::put_LowPassWidth(Channel, Width);

	return hr;
}

//====================================================================================================
//                                     - ConfigureSmartTrigLowPassState -
HRESULT WX218x::IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassState(BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTriggerSmartTrigger::put_LowPassEnabled(Channel, State);

	return hr;
}

//=======================================================================================================
//                                         - ConfigureSmartTrigHoldoffState -
HRESULT WX218x::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoffState(BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTriggerSmartTrigger::put_HoldoffEnabled(Channel, State);

	return hr;
}

//=======================================================================================================
//                                    - ConfigureSmartTrigHoldoff -
HRESULT WX218x::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoff(BSTR Channel, double Holdoff)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTriggerSmartTrigger::put_Holdoff(Channel, Holdoff);

	return hr;
}

//=======================================================================================================
//                                 - ConfigureSmartTrigHiPassWidth -
HRESULT WX218x::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassWidth(BSTR Channel, double Width)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTriggerSmartTrigger::put_HiPassWidth(Channel, Width);

	return hr;
}

//========================================================================================================
//                                   - ConfigureSmartTrigHiPassEnabled -
HRESULT WX218x::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassEnabled(BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTriggerSmartTrigger::put_HiPassEnabled(Channel, State);

	return hr;
}

/* LowPassEnabled */
HRESULT WX218x::IWX218xTriggerSmartTrigger_get_LowPassEnabled(BSTR Channel, VARIANT_BOOL* val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:FILT:LPAS:STAT?"));
   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xTriggerSmartTrigger_put_LowPassEnabled(BSTR Channel, VARIANT_BOOL val)
{
   HRESULT hr = S_OK;
   CString strEnabled, strChanSend, strCommandSend;
   CString strChanCheck = COLE2T(Channel);

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (val == VARIANT_TRUE)
      strEnabled = _T("ON");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRIG:FILT:LPAS:STAT %s")), strEnabled);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Holdoff */
HRESULT WX218x::IWX218xTriggerSmartTrigger_Holdoff_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;

   if (val != 0.0)
   {
      if ( val < TRIG_HOLDOFF_MIN || val > TRIG_HOLDOFF_MAX ) 
         hr = err.InvalidValue(_T("val"), val);
   }

   return hr;
}

HRESULT WX218x::IWX218xTriggerSmartTrigger_get_Holdoff(BSTR Channel, double* val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:HOLD?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xTriggerSmartTrigger_put_Holdoff(BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRIG:HOLD %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xTriggerSmartTrigger_get_HoldoffEnabled(BSTR Channel, VARIANT_BOOL* val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:HOLD:STAT?"));
   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xTriggerSmartTrigger_put_HoldoffEnabled(BSTR Channel, VARIANT_BOOL val)
{
   HRESULT hr = S_OK;
   CString strEnabled, strChanSend, strCommandSend;
   CString strChanCheck = COLE2T(Channel);

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (val == VARIANT_TRUE)
      strEnabled = _T("ON");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRIG:HOLD:STAT %s")), strEnabled);
   hr = io.Printf(strCommandSend);

   return hr;
}



