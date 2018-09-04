/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Enabled */
HRESULT WX218x::IWX218xSweep_get_Enabled(BSTR Channel, VARIANT_BOOL* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":MOD:TYPE?")); 
   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("SWE")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xSweep_put_Enabled(BSTR Channel, VARIANT_BOOL val)
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
      strEnabled = _T("SWE");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MOD:TYPE %s")), strEnabled);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* FrequencyStart */
HRESULT WX218x::IWX218xSweep_FrequencyStart_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   //Getting modelNumber
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      valMin = SWEEP_FREQ_MIN; 
      valMax = SWEEP_FREQ_MAX; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = SWEEP_FREQ_MIN; 
      valMax = SWEEP_FREQ_MAX; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      valMin = SWEEP_FREQ_MIN; 
      valMax = SWEEP_FREQ_MAX_WX128X; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMin = SWEEP_FREQ_MIN_WS835X; 
      valMax = SWEEP_FREQ_MAX_WS835X; 
     break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      valMin = SWEEP_FREQ_MIN_WX2184; 
      valMax = SWEEP_FREQ_MAX_WX2184; 
     break;

     default:
      valMin = SWEEP_FREQ_MIN; 
      valMax = SWEEP_FREQ_MAX; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xSweep_get_FrequencyStart(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SWE:FREQ?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xSweep_put_FrequencyStart(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SWE:FREQ %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* FrequencyStop */
HRESULT WX218x::IWX218xSweep_get_FrequencyStop(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SWE:FREQ:STOP?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xSweep_put_FrequencyStop(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SWE:FREQ:STOP %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Time */
HRESULT WX218x::IWX218xSweep_Time_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   //Getting modelNumber
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
     case MNM_WS8351:
     case MNM_WS8352:
      valMin = SWEEP_TIME_MIN; 
      valMax = SWEEP_TIME_MAX; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      valMin = SWEEP_TIME_MIN; 
      valMax = SWEEP_TIME_MAX_WX; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = SWEEP_TIME_MIN; 
      valMax = SWEEP_TIME_MAX_WX; 
     break;

     default:
      valMin = SWEEP_TIME_MIN; 
      valMax = SWEEP_TIME_MAX; 
    }

   if (val <  valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xSweep_get_Time(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SWE:TIME?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xSweep_put_Time(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SWE:TIME %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

//================================================================================================
//                          - ConfigureSweepTime -
HRESULT WX218x::IWX218xSweep_ConfigureSweepTime(BSTR Channel, double Time)
{
	HRESULT hr = S_OK;

   hr = _IWX218xSweep::put_Time(Channel, Time);

	return hr;
}

//==================================================================================================
//                              - ConfigureSweepSpacing -
HRESULT WX218x::IWX218xSweep_ConfigureSweepSpacing(BSTR Channel, WX218xSweepSpacingEnum Spacing)
{
	HRESULT hr = S_OK;

   hr = _IWX218xSweep::put_Spacing(Channel, Spacing);

	return hr;
}

//==========================================================================================
//                               - ConfigureSweepMarker -
HRESULT WX218x::IWX218xSweep_ConfigureSweepMarker(BSTR Channel, double Marker)
{
	HRESULT hr = S_OK;

   hr = _IWX218xSweep::put_Marker(Channel, Marker);

	return hr;
}

//==============================================================================================
//                            - ConfigureSweepFreqStop -
HRESULT WX218x::IWX218xSweep_ConfigureSweepFreqStop(BSTR Channel, double FreqStop)
{
	HRESULT hr = S_OK;

   hr = _IWX218xSweep::put_FrequencyStop(Channel, FreqStop);

	return hr;
}

//=================================================================================================
//                             - ConfigureSweepFreqStart -
HRESULT WX218x::IWX218xSweep_ConfigureSweepFreqStart(BSTR Channel, double FreqStart)
{
	HRESULT hr = S_OK;

   hr = _IWX218xSweep::put_FrequencyStart(Channel, FreqStart);

	return hr;
}

//==================================================================================================
//                               - ConfigureSweepState -
HRESULT WX218x::IWX218xSweep_ConfigureSweepState(BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

   hr = _IWX218xSweep::put_Enabled(Channel, State);

	return hr;
}

//====================================================================================================
//                               - ConfigureSweepDirection -
HRESULT WX218x::IWX218xSweep_ConfigureSweepDirection(BSTR Channel, WX218xSweepDirectionEnum Direction)
{
	HRESULT hr = S_OK;

   hr = _IWX218xSweep::put_Direction(Channel, Direction);

	return hr;
}

/* Marker */
HRESULT WX218x::IWX218xSweep_get_Marker(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SWE:MARK?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xSweep_put_Marker(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SWE:MARK %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Direction */
HRESULT WX218x::IWX218xSweep_get_Direction(BSTR Channel, WX218xSweepDirectionEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SWE:DIR?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("UP")))
      *val = WX218xSweepDirectionUp;

   else if (!strResponse.CompareNoCase(_T("DOWN")))
      *val = WX218xSweepDirectionDown;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xSweep_put_Direction(BSTR Channel, WX218xSweepDirectionEnum val)
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
   case WX218xSweepDirectionUp:
      strCommand = _T(":SWE:DIR UP");
      break;

   case WX218xSweepDirectionDown:
      strCommand = _T(":SWE:DIR DOWN");
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

/* Spacing */
HRESULT WX218x::IWX218xSweep_get_Spacing(BSTR Channel, WX218xSweepSpacingEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SWE:SPAC?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("LIN")))
      *val = WX218xSweepSpacingLin;

   else if (!strResponse.CompareNoCase(_T("LOG")))
      *val = WX218xSweepSpacingLog;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xSweep_put_Spacing(BSTR Channel, WX218xSweepSpacingEnum val)
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
   case WX218xSweepSpacingLin:
      strCommand = _T(":SWE:SPAC LIN");
      break;

   case WX218xSweepSpacingLog:
      strCommand = _T(":SWE:SPAC LOG");
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






