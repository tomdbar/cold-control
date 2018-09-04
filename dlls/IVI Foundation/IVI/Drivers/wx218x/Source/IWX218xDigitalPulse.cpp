/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Delay */
HRESULT WX218x::IWX218xDigitalPulse_Delay_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
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
      valMin = PULSE_DEL_MIN; 
      valMax = PULSE_DEL_MAX; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = PULSE_DEL_MIN; 
      valMax = PULSE_DEL_MAX; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMin = PULSE_DEL_MIN_WS835X; 
      valMax = PULSE_DEL_MAX_WS835X; 
      break;
      
      default:
      valMin = PULSE_DEL_MIN; 
      valMax = PULSE_DEL_MAX; 
   }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_get_Delay(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:DEL?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_Delay(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:DEL %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* HighLevel */
HRESULT WX218x::IWX218xDigitalPulse_HighLevel_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double val_min, val_max;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
     case MNM_WS8351:
     case MNM_WS8352:
      val_min = PULSE_HIGH_LEVEL_MIN;
      val_max = PULSE_HIGH_LEVEL_MAX; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      val_min = PULSE_HIGH_LEVEL_MIN_B;
      val_max = PULSE_HIGH_LEVEL_MAX_B; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      val_min = PULSE_HIGH_LEVEL_MIN_B;
      val_max = PULSE_HIGH_LEVEL_MAX_B; 
     break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      val_min = PULSE_HIGH_LEVEL_MIN_WX2184;
      val_max = PULSE_HIGH_LEVEL_MAX_WX2184; 
     break;

     default:
      val_min = PULSE_HIGH_LEVEL_MIN;
      val_max = PULSE_HIGH_LEVEL_MAX; 
    }

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_get_HighLevel(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:HIGH?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_HighLevel(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:HIGH %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* LowLevel */
HRESULT WX218x::IWX218xDigitalPulse_LowLevel_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double val_min, val_max;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
     case MNM_WS8351:
     case MNM_WS8352:
      val_min = PULSE_LOW_LEVEL_MIN;
      val_max = PULSE_LOW_LEVEL_MAX; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      val_min = PULSE_LOW_LEVEL_MIN_B;
      val_max = PULSE_LOW_LEVEL_MAX_B; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      val_min = PULSE_LOW_LEVEL_MIN_B;
      val_max = PULSE_LOW_LEVEL_MAX_B; 
     break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      val_min = PULSE_LOW_LEVEL_MIN_WX2184;
      val_max = PULSE_LOW_LEVEL_MAX_WX2184; 
     break;

     default:
      val_min = PULSE_LOW_LEVEL_MIN;
      val_max = PULSE_LOW_LEVEL_MAX; 
    }

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_get_LowLevel(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:LOW?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_LowLevel(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:LOW %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Configure */
HRESULT WX218x::IWX218xDigitalPulse_get_Configure(BSTR Channel, WX218xPulseConfigureEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:CONF?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("TIME")))
      *val = WX218xPulseConfigureTime;

   else if (!strResponse.CompareNoCase(_T("PERC")))
      *val = WX218xPulseConfigurePercent;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_Configure(BSTR Channel, WX218xPulseConfigureEnum val)
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
   case WX218xPulseConfigureTime:
      strCommand = _T(":PULS:CONF TIME");
      break;

   case WX218xPulseConfigurePercent:
      strCommand = _T(":PULS:CONF PERC");
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

/* DelayPercent */
HRESULT WX218x::IWX218xDigitalPulse_DelayPercent_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;

   if (val < PULSE_PERCENT_MIN || val > PULSE_PERCENT_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_get_DelayPercent(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:DEL:PERC?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_DelayPercent(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:DEL:PERC %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* DoubleDelay */
HRESULT WX218x::IWX218xDigitalPulse_get_DoubleDelay(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:DOUB:DEL?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_DoubleDelay(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:DOUB:DEL %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* DoubleDelayPercent */
HRESULT WX218x::IWX218xDigitalPulse_get_DoubleDelayPercent(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:DOUB:DEL:PERC?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_DoubleDelayPercent(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:DOUB:DEL:PERC %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* LevelControl */
HRESULT WX218x::IWX218xDigitalPulse_get_LevelControl(BSTR Channel, WX218xPulseLevelControlEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:CONT?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("HLOW")))
      *val = WX218xPulseLevelControlHLOW;

   else if (!strResponse.CompareNoCase(_T("AOFF")))
      *val = WX218xPulseLevelControlAOffset;

   else if (!strResponse.CompareNoCase(_T("POS")))
      *val = WX218xPulseLevelControlPositive;

   else if (!strResponse.CompareNoCase(_T("NEG")))
      *val = WX218xPulseLevelControlNegative;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_LevelControl(BSTR Channel, WX218xPulseLevelControlEnum val)
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
   case WX218xPulseLevelControlHLOW:
      strCommand = _T(":PULS:LEV:CONT HLOW");
      break;

   case WX218xPulseLevelControlAOffset:
      strCommand = _T(":PULS:LEV:CONT AOFF");
      break;

   case WX218xPulseLevelControlPositive:
      strCommand = _T(":PULS:LEV:CONT POS");
      break;

   case WX218xPulseLevelControlNegative:
      strCommand = _T(":PULS:LEV:CONT NEG");
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

/* Amplitude */
HRESULT WX218x::IWX218xDigitalPulse_get_Amplitude(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:AMPL?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_Amplitude(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:AMPL %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_Amplitude_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double ampl_min, ampl_max;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
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
      ampl_min = PULSE_AMPLITUDE_MIN;
      ampl_max = PULSE_AMPLITUDE_MAX; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      ampl_min = PULSE_AMPLITUDE_MIN;
      ampl_max = PULSE_AMPLITUDE_MAX; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      ampl_min = PULSE_AMPLITUDE_MIN_WS835X;
      ampl_max = PULSE_AMPLITUDE_MAX_WS835X; 
     break;

     default:
      ampl_min = PULSE_AMPLITUDE_MIN;
      ampl_max = PULSE_AMPLITUDE_MAX; 
    }

   if (val < ampl_min || val > ampl_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

/* Offset */
HRESULT WX218x::IWX218xDigitalPulse_get_Offset(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:OFFS?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_Offset(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:OFFS %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_Offset_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      valMin = PULSE_LEVEL_OFFSET_MIN_WX2184;
      valMax = PULSE_LEVEL_OFFSET_MAX_WX2184; 
     break;

     default:
      valMin = PULSE_LEVEL_OFFSET_MIN;
      valMax = PULSE_LEVEL_OFFSET_MAX; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

/* Mode */
HRESULT WX218x::IWX218xDigitalPulse_get_Mode(BSTR Channel, WX218xPulseModeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:MODE?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("SING")))
      *val = WX218xPulseModeSingle;

   else if (!strResponse.CompareNoCase(_T("DEL")))
      *val = WX218xPulseModeDelayed;

   else if (!strResponse.CompareNoCase(_T("DOUB")))
      *val = WX218xPulseModeDouble;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_Mode(BSTR Channel, WX218xPulseModeEnum val)
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
   case WX218xPulseModeSingle:
      strCommand = _T(":PULS:MODE SING");
      break;

   case WX218xPulseModeDelayed:
      strCommand = _T(":PULS:MODE DEL");
      break;

   case WX218xPulseModeDouble:
      strCommand = _T(":PULS:MODE DOUB");
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

/* Polarity */
HRESULT WX218x::IWX218xDigitalPulse_get_Polarity(BSTR Channel, WX218xPulsePolarityEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:POL?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("NORM")))
      *val = WX218xPulsePolarityNormal;

   else if (!strResponse.CompareNoCase(_T("COMP")))
      *val = WX218xPulsePolarityComplement;

   else if (!strResponse.CompareNoCase(_T("INV")))
      *val = WX218xPulsePolarityInverted;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_Polarity(BSTR Channel, WX218xPulsePolarityEnum val)
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
   case WX218xPulsePolarityNormal:
      strCommand = _T(":PULS:POL NORM");
      break;

   case WX218xPulsePolarityComplement:
      strCommand = _T(":PULS:POL COMP");
      break;

   case WX218xPulsePolarityInverted:
      strCommand = _T(":PULS:POL INV");
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

/* Period */
HRESULT WX218x::IWX218xDigitalPulse_Period_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182: 
      if (m_OptionNum == 0)
       valMax = PULSE_PERIOD_MAX;
      else
       valMax = PULSE_PERIOD_MAX_OPT;

      valMin = PULSE_PERIOD_MIN;
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
       valMin = PULSE_PERIOD_MIN_WX218XB;
       valMax = PULSE_PERIOD_MAX_WX218XB;
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
       valMin = PULSE_PERIOD_MIN_WX218XC;
       valMax = PULSE_PERIOD_MAX_WX218XC;
     break;

     case MNM_WX1281C:
     case MNM_WX1282C:
       valMin = PULSE_PERIOD_MIN_WX128XC;
       valMax = PULSE_PERIOD_MAX_WX128XC;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
       valMin = PULSE_PERIOD_MIN_WX128XB;
       valMax = PULSE_PERIOD_MAX_WX128XB;
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMin = PULSE_PERIOD_MIN_WS835X; 
      valMax = PULSE_PERIOD_MAX_WS835X; 
     break;

     case MNM_WX2184:
	 case MNM_WX2184C:
      valMin = PULSE_PERIOD_MIN_WX2184; 
      valMax = PULSE_PERIOD_MAX_WX2184; 
     break;

     case MNM_WX1284:
	 case MNM_WX1284C:
      valMin = PULSE_PERIOD_MIN_WX1284; 
      valMax = PULSE_PERIOD_MAX_WX1284; 
     break;

     default:
       valMin = PULSE_PERIOD_MIN;
       valMax = PULSE_PERIOD_MAX;
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_get_Period(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:PER?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_Period(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:PER %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Transition */
HRESULT WX218x::IWX218xDigitalPulse_get_Transition(BSTR Channel, WX218xPulseTransitionEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:TRAN:STAT?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("FAST")))
      *val = WX218xPulseTransitionFast;

   else if (!strResponse.CompareNoCase(_T("LIN")))
      *val = WX218xPulseTransitionLinear;

   else if (!strResponse.CompareNoCase(_T("SYMM")))
      *val = WX218xPulseTransitionSymmetrical;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_Transition(BSTR Channel, WX218xPulseTransitionEnum val)
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
   case WX218xPulseTransitionFast:
      strCommand = _T(":PULS:TRAN:STAT FAST");
      break;

   case WX218xPulseTransitionLinear:
      strCommand = _T(":PULS:TRAN:STAT LIN");
      break;

   case WX218xPulseTransitionSymmetrical:
      strCommand = _T(":PULS:TRAN:STAT SYMM");
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

/* RiseTime */
HRESULT WX218x::IWX218xDigitalPulse_RiseTime_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
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
      valMin = PULSE_RISE_TIME_MIN; 
      valMax = PULSE_RISE_TIME_MAX; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
      valMin = PULSE_RISE_TIME_MIN_WX218XC; 
      valMax = PULSE_RISE_TIME_MAX_WX218XC; 
     break;

     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = PULSE_RISE_TIME_MIN_WX128XC; 
      valMax = PULSE_RISE_TIME_MAX_WX128XC; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMin = PULSE_RISE_TIME_MIN_WS835X; 
      valMax = PULSE_RISE_TIME_MAX_WS835X; 
      break;
      
      default:
      valMin = PULSE_RISE_TIME_MIN; 
      valMax = PULSE_RISE_TIME_MAX; 
   }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_get_RiseTime(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:TRAN:LEAD?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_RiseTime(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:TRAN:LEAD %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* RiseTimePercent */
HRESULT WX218x::IWX218xDigitalPulse_get_RiseTimePercent(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:TRAN:LEAD:PERC?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_RiseTimePercent(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:TRAN:LEAD:PERC %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* FallTime */
HRESULT WX218x::IWX218xDigitalPulse_get_FallTime(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:TRAN:TRA?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_FallTime(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:TRAN:TRA %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* FallTimePercent */
HRESULT WX218x::IWX218xDigitalPulse_get_FallTimePercent(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:TRAN:TRA:PERC?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_FallTimePercent(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:TRAN:TRA:PERC %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Width */
HRESULT WX218x::IWX218xDigitalPulse_get_Width(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:WIDT?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_Width(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:WIDT %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_Width_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      valMin = MIN_PULSE_WIDTH; 
      valMax = MAX_PULSE_WIDTH; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      valMin = MIN_PULSE_WIDTH_WX218XB; 
      valMax = MAX_PULSE_WIDTH_WX218XB; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
      valMin = MIN_PULSE_WIDTH_WX218XC; 
      valMax = MAX_PULSE_WIDTH_WX218XC; 
     break;

     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = MIN_PULSE_WIDTH_WX128XC; 
      valMax = MAX_PULSE_WIDTH_WX128XC; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      valMin = MIN_PULSE_WIDTH_WX128XB; 
      valMax = MAX_PULSE_WIDTH_WX128XB; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMin = MIN_PULSE_WIDTH_WS835X; 
      valMax = MAX_PULSE_WIDTH_WS835X; 
      break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      valMin = MIN_PULSE_WIDTH_WX2184; 
      valMax = MAX_PULSE_WIDTH_WX2184; 
      break;

     default:
      valMin = MIN_PULSE_WIDTH; 
      valMax = MAX_PULSE_WIDTH; 
   }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

/* WidthPercent */
HRESULT WX218x::IWX218xDigitalPulse_get_WidthPercent(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:WIDT:PERC?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_put_WidthPercent(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PULS:WIDT:PERC %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

//=========================================================================================
//                                   - ConfigureDigPulseWidthPercent - 
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseWidthPercent(BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_WidthPercent(Channel, val);

	return hr;
}

//============================================================================================
//                                - ConfigureDigPulseWidth -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseWidth(BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_Width(Channel, val);

	return hr;
}

//===========================================================================================
//                                     - ConfigureDigPulseTransition -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseTransition(BSTR Channel, WX218xPulseTransitionEnum val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_Transition(Channel, val); 

	return hr;
}

//===========================================================================================
//                         - ConfigureRiseTimePercent -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureRiseTimePercent(BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_RiseTimePercent(Channel, val);

	return hr;
}

//==============================================================================================
//                                  - ConfigureDigPulseRiseTime -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseRiseTime(BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_RiseTime(Channel, val);

	return hr;
}

//==================================================================================================
//                                  - ConfigureDigPulsePolarity -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulsePolarity(BSTR Channel, WX218xPulsePolarityEnum val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_Polarity(Channel, val);

	return hr;
}

//===================================================================================================
//                                    - ConfigureDigPulsePeriod -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulsePeriod(BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_Period(Channel, val);

	return hr;
}

//=======================================================================================================
//                                   - ConfigureDigPulseOffset -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseOffset(BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_Offset(Channel, val);

	return hr;
}

//=========================================================================================================
//                                      - ConfigureDigPulseMode -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseMode(BSTR Channel, WX218xPulseModeEnum val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_Mode(Channel, val);

	return hr;
}

//===========================================================================================================
//                                   - ConfigureDigPulseLowLevel -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseLowLevel(BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_LowLevel(Channel, val);

	return hr;
}

//==========================================================================================================
//                                   - ConfigureDigPulseLevelControl -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseLevelControl(BSTR Channel, WX218xPulseLevelControlEnum val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_LevelControl(Channel, val);

	return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseHighLevel(BSTR Channel, double HighLevel)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_HighLevel(Channel, HighLevel);

	return hr;
}

//=======================================================================================================
//                                 - ConfigureDigPulseFallTimePercent -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseFallTimePercent(BSTR Channel, double FallTimePercent)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_FallTimePercent(Channel, FallTimePercent); 

	return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseFallTime(BSTR Channel, double FallTime)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_FallTime(Channel, FallTime);

	return hr;
}

//=====================================================================================================
//                                  - ConfigureDigPulseDoubleDelayPercent -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseDoubleDelayPercent(BSTR Channel, double DoubleDelayPercent)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_DoubleDelayPercent(Channel, DoubleDelayPercent);

	return hr;
}

//======================================================================================================
//                                   - ConfigureDigPulseDoubleDelay -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseDoubleDelay(BSTR Channel, double DoubleDelay)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_DoubleDelay(Channel, DoubleDelay);

	return hr;
}

//=======================================================================================================
//                               - ConfigureDigPulseDelayPercent -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseDelayPercent(BSTR Channel, double DelayPercent)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_DelayPercent(Channel, DelayPercent);

	return hr;
}

//=========================================================================================================
//                                   - ConfigureDigPulseDelay -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseDelay(BSTR Channel, double Delay)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_Delay(Channel, Delay);

	return hr;
}

//============================================================================================================
//                                    - ConfigureDigPulseAmplitude -
HRESULT WX218x::IWX218xDigitalPulse_ConfigureDigPulseAmplitude(BSTR Channel, double Amplitude)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPulse::put_Amplitude(Channel, Amplitude);

	return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_SetOffsetMax(BSTR Channel)
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

   if (GetSimulate())
   {
      hr = _IWX218xDigitalPulse::put_Offset(Channel, OFFSET_MAX);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:OFFS MAX"));
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPulse_SetOffsetMin(BSTR Channel)
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

   if (GetSimulate())
   {
      hr = _IWX218xDigitalPulse::put_Offset(Channel, OFFSET_MIN);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:OFFS MIN"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* SetAmplitudeMax */
HRESULT WX218x::IWX218xDigitalPulse_SetAmplitudeMax(BSTR Channel)
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

   if (GetSimulate())
   {
      hr = _IWX218xDigitalPulse::put_Amplitude(Channel, AMPLITUDE_MAX);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:AMPL MAX"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* SetAmplitudeMin */
HRESULT WX218x::IWX218xDigitalPulse_SetAmplitudeMin(BSTR Channel)
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

   if (GetSimulate())
   {
      hr = _IWX218xDigitalPulse::put_Amplitude(Channel, AMPLITUDE_MIN);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PULS:LEV:AMPL MIN"));
   hr = io.Printf(strCommandSend);

   return hr;
}










