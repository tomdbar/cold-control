/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Enabled */
HRESULT WX218x::IWX218xChannelSync_get_Enabled(BSTR Channel, VARIANT_BOOL* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":OUTP:SYNC?")); 
   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xChannelSync_put_Enabled(BSTR Channel, VARIANT_BOOL val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":OUTP:SYNC %s")), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Function */
HRESULT WX218x::IWX218xChannelSync_get_Function(BSTR Channel, WX218xOutputSyncFunctionEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":OUTP:SYNC:FUNC?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("PULS")))
      *val = WX218xOutputSyncFunctionPulse;

   else if (!strResponse.CompareNoCase(_T("WCOM")))
      *val = WX218xOutputSyncFunctionWCOM;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xChannelSync_put_Function(BSTR Channel, WX218xOutputSyncFunctionEnum val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strCommand, strEnum;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   switch (val)
   {
   case WX218xOutputSyncFunctionPulse:
      strCommand = _T(":OUTP:SYNC:FUNC PULS");
      break;

   case WX218xOutputSyncFunctionWCOM:
      strCommand = _T(":OUTP:SYNC:FUNC WCOM");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T("%s")), strCommand); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Position */
HRESULT WX218x::IWX218xChannelSync_Position_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
	HRESULT hr = S_OK;
   long maxValue;

   maxValue = m_MemorySize-32;

   if (val < SYNC_POSITION_MIN || val > maxValue) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xChannelSync_get_Position(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":OUTP:SYNC:POS?"));
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xChannelSync_put_Position(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":OUTP:SYNC:POS %d")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Source */
HRESULT WX218x::IWX218xChannelSync_get_Source(WX218xOutputSyncSourceEnum* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;
   int modelNumber;

    modelNumber = FuncReturnModelNumber();

   strCommandSend = _T(":OUTP:SYNC:SOUR?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("CH1")) || !strResponse.CompareNoCase(_T("1")))
      *val = WX218xOutputSyncSourceCH1;

   else if (!strResponse.CompareNoCase(_T("CH2")) || !strResponse.CompareNoCase(_T("2")))
      *val = WX218xOutputSyncSourceCH2;

   else if (!strResponse.CompareNoCase(_T("CH3")) || !strResponse.CompareNoCase(_T("3"))) //only for WX2184
   {
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       *val = WX218xOutputSyncSourceCH3;
      else
       hr = err.UnexpectedResponse(strResponse);
   }

   else if (!strResponse.CompareNoCase(_T("CH4")) || !strResponse.CompareNoCase(_T("4"))) //only for WX2184
   {
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       *val = WX218xOutputSyncSourceCH4;
      else
       hr = err.UnexpectedResponse(strResponse);
   }

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xChannelSync_put_Source(WX218xOutputSyncSourceEnum val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strEnum;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   switch (val)
   {
   case WX218xOutputSyncSourceCH1:
      strCommandSend = _T(":OUTP:SYNC:SOUR CH1");
      break;

   case WX218xOutputSyncSourceCH2:
      strCommandSend = _T(":OUTP:SYNC:SOUR CH2");
      break;

   case WX218xOutputSyncSourceCH3: //only for WX2184
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       strCommandSend = _T(":OUTP:SYNC:SOUR CH3");
      else
      {
        EnumToName(val, strEnum);
        hr = err.ValueNotSupported(strEnum,strEnum);
        return hr;
      }
      break;

   case WX218xOutputSyncSourceCH4:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       strCommandSend = _T(":OUTP:SYNC:SOUR CH4");
      else
      {
        EnumToName(val, strEnum);
        hr = err.ValueNotSupported(strEnum,strEnum);
        return hr;
      }
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   hr = io.Printf(strCommandSend);

   return hr;
}

/* Width */
HRESULT WX218x::IWX218xChannelSync_get_Width(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":OUTP:SYNC:WIDT?"));
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xChannelSync_put_Width(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":OUTP:SYNC:WIDT %d")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xChannelSync_ConfigureSyncWidth(BSTR Channel, long Width)
{
	HRESULT hr = S_OK;

   hr = _IWX218xChannelSync::put_Width(Channel, Width);

	return hr;
}

//==================================================================================================
//                                  - ConfigureSyncSource -
HRESULT WX218x::IWX218xChannelSync_ConfigureSyncSource(WX218xOutputSyncSourceEnum Source)
{
	HRESULT hr = S_OK;

   hr = _IWX218xChannelSync::put_Source(Source);

	return hr;
}

//======================================================================================================
//                                 - ConfigureSyncPosition - 
HRESULT WX218x::IWX218xChannelSync_ConfigureSyncPosition(BSTR Channel, long Position)
{
	HRESULT hr = S_OK;

   hr = _IWX218xChannelSync::put_Position(Channel, Position);

	return hr;
}

//=========================================================================================================
//                                  - ConfigureSyncFunction -
HRESULT WX218x::IWX218xChannelSync_ConfigureSyncFunction(BSTR Channel, WX218xOutputSyncFunctionEnum Function)
{
	HRESULT hr = S_OK;

   hr = _IWX218xChannelSync::put_Function(Channel, Function);

	return hr;
}

//=========================================================================================================
//                               - ConfigureSyncEnabled -
HRESULT WX218x::IWX218xChannelSync_ConfigureSyncEnabled(BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

   hr = _IWX218xChannelSync::put_Enabled(Channel, Enabled);

	return hr;
}

HRESULT WX218x::IWX218xChannelSync_Width_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

   if (val < SYNC_WIDTH_MIN || val > (m_MemorySize-32)) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}



