/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Burst Count */
HRESULT WX218x::BurstCount_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
   HRESULT hr = S_OK;
   long valMin, valMax;
   int modelNumber;

   valMin = TRIG_COUNT_MIN; 

   //Getting modelNumber
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      valMax = TRIG_COUNT_MAX; 
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
      valMax = TRIG_COUNT_MAX_WX218XB; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMax = TRIG_COUNT_MAX_WX218XB; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMax = TRIG_COUNT_MAX_WS835X; 
     break;

     default:
       valMax = TRIG_COUNT_MAX_WX218XB; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_get_BurstCount(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:COUN?"));
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_BurstCount(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRIG:COUN %d")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Source */
HRESULT WX218x::IWX218xTrigger_get_Source(BSTR Channel, WX218xTriggerSourceEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:SOUR?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("EXT")))
      *val = WX218xTriggerSourceExternal;

   else if (!strResponse.CompareNoCase(_T("BUS")))
      *val = WX218xTriggerSourceSoftware;

   else if (!strResponse.CompareNoCase(_T("TIM")))
      *val = WX218xTriggerSourceTimer;

   else if (!strResponse.CompareNoCase(_T("EVEN")))
      *val = WX218xTriggerSourceEvent;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_Source(BSTR Channel, WX218xTriggerSourceEnum val)
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
   case WX218xTriggerSourceExternal:
      strCommand = _T(":TRIG:SOUR EXT");
      break;

   case WX218xTriggerSourceSoftware:
      strCommand = _T(":TRIG:SOUR BUS");
      break;

   case WX218xTriggerSourceTimer:
      strCommand = _T(":TRIG:SOUR TIM");
      break;

   case WX218xTriggerSourceEvent:
      strCommand = _T(":TRIG:SOUR EVEN");
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
/* Delay */
HRESULT WX218x::Delay_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
   HRESULT hr = S_OK;
   long valMin, valMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      valMin = TRIG_DEL_MIN;
      valMax = TRIG_DEL_MAX_WX2184; 
     break;

     default:
      valMin = TRIG_DEL_MIN;
      valMax = TRIG_DEL_MAX; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_get_Delay(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:DEL?"));
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_Delay(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRIG:DEL %d")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Level */
HRESULT WX218x::IWX218xTrigger_Level_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;

   if ( val < TRIG_LEVEL_MIN || val > TRIG_LEVEL_MAX ) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_get_Level(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:LEV?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_Level(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRIG:LEV %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Trigger Mode */
HRESULT WX218x::IWX218xTrigger_get_TriggerMode(BSTR Channel, WX218xTriggerModeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:MODE?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("NORM")))
      *val = WX218xTriggerModeNormal;

   else if (!strResponse.CompareNoCase(_T("OVER")))
      *val = WX218xTriggerModeOverride;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_TriggerMode(BSTR Channel, WX218xTriggerModeEnum val)
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
   case WX218xTriggerModeNormal:
      strCommand = _T(":TRIG:MODE NORM");
      break;

   case WX218xTriggerModeOverride:
      strCommand = _T(":TRIG:MODE OVER");
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

/* Slope */
HRESULT WX218x::IWX218xTrigger_get_Slope(BSTR Channel, WX218xTriggerSlopeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:SLOP?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("POS")))
      *val = WX218xTriggerSlopePositive;

   else if (!strResponse.CompareNoCase(_T("NEG")))
      *val = WX218xTriggerSlopeNegative;

   else if (!strResponse.CompareNoCase(_T("EITH")))
      *val = WX218xTriggerSlopeEither;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_Slope(BSTR Channel, WX218xTriggerSlopeEnum val)
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
   case WX218xTriggerSlopePositive:
      strCommand = _T(":TRIG:SLOP POS");
      break;

   case WX218xTriggerSlopeNegative:
      strCommand = _T(":TRIG:SLOP NEG");
      break;

   case WX218xTriggerSlopeEither:
      strCommand = _T(":TRIG:SLOP EITH");
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

/* TimerTime */
HRESULT WX218x::IWX218xTrigger_Timer_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   valMax = TRIG_TIMER_TIME_MAX; 

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      valMin = TRIG_TIMER_TIME_MIN; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      valMin = TRIG_TIMER_TIME_MIN_WX218XB; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = TRIG_TIMER_TIME_MIN_WX218XB; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      valMin = TRIG_TIMER_TIME_MIN_WX128XB; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMin = TRIG_TIMER_TIME_MIN; 
     break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      valMin = TRIG_TIMER_TIME_MIN_WX2184; 
      valMax = TRIG_TIMER_TIME_MAX_WX2184; 
     break;

     default:
      valMin = TRIG_TIMER_TIME_MIN; 
    }

   if ( val < valMin || val > valMax ) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_get_TimerTime(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:TIM:TIME?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_TimerTime(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRIG:TIM:TIME %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* ContinuousMode */
HRESULT WX218x::IWX218xTrigger_get_ContinuousMode(BSTR Channel, WX218xContinuousModeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":INIT:CONT:ENAB?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("SELF")))
      *val = WX218xContinuousModeSelf;

   else if (!strResponse.CompareNoCase(_T("ARM")))
      *val = WX218xContinuousModeArmed;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_ContinuousMode(BSTR Channel, WX218xContinuousModeEnum val)
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
   case WX218xContinuousModeSelf:
      strCommand = _T(":INIT:CONT:ENAB SELF");
      break;

   case WX218xContinuousModeArmed:
      strCommand = _T(":INIT:CONT:ENAB ARM");
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

/* ContinuousSorce */
HRESULT WX218x::IWX218xTrigger_get_ContinuousSource(BSTR Channel, WX218xContinuousSourceEnum* val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;
   CString strModel;

   strModel = GetModel();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":INIT:CONT:ENAB:SOUR?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("BUS")))
      *val = WX218xContinuousSourceBus;

   else if (!strResponse.CompareNoCase(_T("EVEN")))
      *val = WX218xContinuousSourceEvent;

   else if (!strResponse.CompareNoCase(_T("TRIG")))
   {
      if (!strModel.CompareNoCase(_T("WX2184")) || !strModel.CompareNoCase(_T("WX1284")) || !strModel.CompareNoCase(_T("WX2184C")) || !strModel.CompareNoCase(_T("WX1284C"))) //not for WX2184
       hr = err.UnexpectedResponse(strResponse);
      else
       *val = WX218xContinuousSourceTrigger;
   }

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_ContinuousSource(BSTR Channel, WX218xContinuousSourceEnum val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strCommand, strEnum;
   CString strModel;

   strModel = GetModel();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   switch (val)
   {
   case WX218xContinuousSourceBus:
      strCommand = _T(":INIT:CONT:ENAB:SOUR BUS");
      break;

   case WX218xContinuousSourceEvent:
      strCommand = _T(":INIT:CONT:ENAB:SOUR EVEN");
      break;

   case WX218xContinuousSourceTrigger:
      //Checking if it is not WX2184
      if (!strModel.CompareNoCase(_T("WX2184")) || !strModel.CompareNoCase(_T("WX1284")) || !strModel.CompareNoCase(_T("WX2184C")) || !strModel.CompareNoCase(_T("WX1284C"))) 
      {
       //Trigger is not supported in WX2184
       EnumToName(val, strEnum);
       hr = err.ValueNotSupported(strEnum,strEnum);
       return hr;
      }

      strCommand = _T(":INIT:CONT:ENAB:SOUR TRIG");
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

/* SmartTrigger */
HRESULT WX218x::IWX218xTrigger_get_SmartTrigger(IWX218xTriggerSmartTrigger** val)
{
   HRESULT hr = S_OK;

   hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

   return hr;
}

//=================================================================================================
//                               - Trigger Impedance -
HRESULT WX218x::IWX218xTrigger_get_TriggerImpedance(WX218xTriggerImpedanceEnum* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":TRIG:SEQ:INP:IMP?");
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("50")))
      *val = WX218xTriggerImpedance50;

   else if (!strResponse.CompareNoCase(_T("10K")))
      *val = WX218xTriggerImpedance10K;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_TriggerImpedance(WX218xTriggerImpedanceEnum val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strEnum, strModel;

   switch (val)
   {
   case WX218xTriggerImpedance50:
      strCommandSend = _T(":TRIG:SEQ:INP:IMP 50");
      break;

   case WX218xTriggerImpedance10K:
      strCommandSend = _T(":TRIG:SEQ:INP:IMP 10K");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   hr = io.Printf(strCommandSend);

   return hr;
}

//===========================================================================================
//                               - ConfigureTriggerImpedance -
HRESULT WX218x::IWX218xTrigger_ConfigureTriggerImpedance(WX218xTriggerImpedanceEnum TriggerImpedance)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_TriggerImpedance(TriggerImpedance);

	return hr;
}

//=========================================================================================
//                                 - ConfigureTriggerMode -
HRESULT WX218x::IWX218xTrigger_ConfigureTriggerMode(BSTR Channel, WX218xTriggerModeEnum Mode)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_TriggerMode(Channel, Mode);

	return hr;
}

//============================================================================================
//                                    - ConfigureTrigTimerMode -
HRESULT WX218x::IWX218xTrigger_ConfigureTrigTimerMode(BSTR Channel, WX218xTriggerTimerModeEnum TimerMode)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_TimerMode(Channel, TimerMode);

	return hr;
}

//===============================================================================================
//                                  - ConfigureTrigSource -
HRESULT WX218x::IWX218xTrigger_ConfigureTrigSource(BSTR Channel, WX218xTriggerSourceEnum Source)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_Source(Channel, Source);

	return hr;
}

//==================================================================================================
//                                - ConfigureTrigSlope -
HRESULT WX218x::IWX218xTrigger_ConfigureTrigSlope(BSTR Channel, WX218xTriggerSlopeEnum Slope)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_Slope(Channel, Slope);

	return hr;
}

//===================================================================================================
//                             - ConfigureTrigContSource -
HRESULT WX218x::IWX218xTrigger_ConfigureTrigContSource(BSTR Channel, WX218xContinuousSourceEnum Source)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_ContinuousSource(Channel, Source);

	return hr;
}

//============================================================================================
//                               - ConfigureTrigContMode -
HRESULT WX218x::IWX218xTrigger_ConfigureTrigContMode(BSTR Channel, WX218xContinuousModeEnum ContMode)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_ContinuousMode(Channel, ContMode);

	return hr;
}

//========================================================================================
//                                   - ConfigureTriggerTimerTime -
HRESULT WX218x::IWX218xTrigger_ConfigureTriggerTimerTime(BSTR Channel, double TimerTime)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_TimerTime(Channel, TimerTime);

	return hr;
}

//=============================================================================================
//                            - ConfigureTriggerTimerDelay -
HRESULT WX218x::IWX218xTrigger_ConfigureTriggerTimerDelay(BSTR Channel, long TimerDelay)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_TimerDelay(Channel, TimerDelay);

	return hr;
}

//===============================================================================================
//                              - ConfigureTriggerLevel -
HRESULT WX218x::IWX218xTrigger_ConfigureTriggerLevel(BSTR Channel, double Level)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_Level(Channel, Level);

	return hr;
}

//==================================================================================================
//                             - ConfigureTriggerDelay -
HRESULT WX218x::IWX218xTrigger_ConfigureTriggerDelay(BSTR Channel, long Delay)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_TimerDelay(Channel, Delay);

	return hr;
}

//====================================================================================================
//                              - ConfigureBurstCount -
HRESULT WX218x::IWX218xTrigger_ConfigureBurstCount(BSTR Channel, long Count)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTrigger::put_BurstCount(Channel, Count);

	return hr;
}

/* TimerDelay */
HRESULT WX218x::IWX218xTrigger_TimerDelay_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
   HRESULT hr = S_OK;
   double val_min, val_max;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      val_min = TRIG_TIMER_DELAY_MIN;
      val_max = TRIG_TIMER_DELAY_MAX; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:

      if (m_MemorySize == MEMORY_SIZE_32M)
       val_min = TRIG_TIMER_DELAY_MIN_OPT32M;
      else
       val_min = TRIG_TIMER_DELAY_MIN;

      val_max = TRIG_TIMER_DELAY_MAX; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      val_min = TRIG_TIMER_DELAY_MIN_OPT32M;
      val_max = TRIG_TIMER_DELAY_MAX; 
     break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      val_min = TRIG_TIMER_DELAY_MIN;
      val_max = TRIG_TIMER_DELAY_MAX_WX2184; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      val_min = TRIG_TIMER_DELAY_MIN_WS835X;
      val_max = TRIG_TIMER_DELAY_MAX_WS835X; 
     break;

     default:
      val_min = TRIG_TIMER_DELAY_MIN;
      val_max = TRIG_TIMER_DELAY_MAX; 
    }

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   //Checking if it is even number divisible by 8

   return hr;
}

HRESULT WX218x::IWX218xTrigger_get_TimerDelay(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:TIM:DEL?"));
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_TimerDelay(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRIG:TIM:DEL %d")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* TimerMode */
HRESULT WX218x::IWX218xTrigger_get_TimerMode(BSTR Channel, WX218xTriggerTimerModeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:TIM:MODE?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("TIME")))
      *val = WX218xTriggerTimerModeTime;

   else if (!strResponse.CompareNoCase(_T("DEL")))
      *val = WX218xTriggerTimerModeDelay;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xTrigger_put_TimerMode(BSTR Channel, WX218xTriggerTimerModeEnum val)
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
   case WX218xTriggerTimerModeTime:
      strCommand = _T(":TRIG:TIM:MODE TIME");
      break;

   case WX218xTriggerTimerModeDelay:
      strCommand = _T(":TRIG:TIM:MODE DEL");
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

/* get_ARM */
HRESULT WX218x::IWX218xTrigger_get_ARM(IWX218xTriggerARM** val)
{
   HRESULT hr = S_OK;

   hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

   return hr;
}

/* Set TTL level */
HRESULT WX218x::IWX218xTrigger_SetTTLLevel(BSTR Channel)
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
      hr = _IWX218xTrigger::put_Level(Channel, 1.6);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:TTL"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Set ECL Level */
HRESULT WX218x::IWX218xTrigger_SetECLLevel(BSTR Channel)
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
      hr = _IWX218xTrigger::put_Level(Channel, -1.3);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:ECL"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Send Software Trigger */
HRESULT WX218x::IWX218xTrigger_SendSoftwareTrigger()
{
   HRESULT hr = S_OK;

   if (GetSimulate())
      return hr;

   hr = io.Printf(_T(":TRIG:IMM"));

   return hr;
}




