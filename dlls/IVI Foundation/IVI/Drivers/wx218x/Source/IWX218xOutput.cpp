/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

HRESULT WX218x::IWX218xChannel_get_Enabled(BSTR Channel, VARIANT_BOOL* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":OUTP?")); 
   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;


   return hr;
}

HRESULT WX218x::IWX218xChannel_put_Enabled(BSTR Channel, VARIANT_BOOL val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":OUTP %s")), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xChannel_get_Count(long* val)
{
   HRESULT hr = S_OK;
   
   *val = m_ChannelCount;
  
   return hr;
}

/* Output Mode */
HRESULT WX218x::IWX218xChannel_get_OutputMode(WX218xOutputModeEnum* val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":FUNC:MODE?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("FIX")))
      *val = WX218xOutputModeFunction;

   else if (!strResponse.CompareNoCase(_T("USER")))
      *val = WX218xOutputModeArbitrary;

   else if (!strResponse.CompareNoCase(_T("SEQ")))
   {
      //Not for WS8351,WS8352
      hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
      if (hr)
       hr = err.UnexpectedResponse(strResponse);
      else
       *val = WX218xOutputModeSequence;
   }

   else if (!strResponse.CompareNoCase(_T("ASEQ")))
   {
      //Not for WS8351,WS8352
      hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
      if (hr)
       hr = err.UnexpectedResponse(strResponse);
      else
       *val = WX218xOutputModeASequence;
    }

   else if (!strResponse.CompareNoCase(_T("MOD")))
      *val = WX218xOutputModeModulation;

   else if (!strResponse.CompareNoCase(_T("PULS")))
      *val = WX218xOutputModeDPulse;

   else if (!strResponse.CompareNoCase(_T("PATT")))
   {
      //Not for WX2181,WX2182
      hr = WX218x::VerifyIsValidForModel(WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WS835X_FAM | WX2184X_FAM);
      if (hr)
       hr = err.UnexpectedResponse(strResponse);
      else
      *val = WX218xOutputModePattern;
   }

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xChannel_put_OutputMode(WX218xOutputModeEnum val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strEnum, strModel;

   strModel = GetModel();

   switch (val)
   {
   case WX218xOutputModeFunction:
      strCommandSend = _T(":FUNC:MODE FIX");
      break;

   case WX218xOutputModeArbitrary:
      strCommandSend = _T(":FUNC:MODE USER");
      break;

   case WX218xOutputModeSequence:
      //Not for WS8351,WS8352
      hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
      if (!hr)
        strCommandSend = _T(":FUNC:MODE SEQ");
      else
      {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
       return hr;
      } 
      break;

   case WX218xOutputModeASequence:
      //Not for WS8351,WS8352
      hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
      if (!hr)
        strCommandSend = _T(":FUNC:MODE ASEQ");
      else
      {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
       return hr;
      } 
     break;

   case WX218xOutputModeModulation:
      strCommandSend = _T(":FUNC:MODE MOD");
      break;

   case WX218xOutputModeDPulse:
      strCommandSend = _T(":FUNC:MODE PULS");
      break;

   case WX218xOutputModePattern:
      //Not for WX2181,WX2182
      hr = WX218x::VerifyIsValidForModel(WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WS835X_FAM | WX2184X_FAM);
      if (!hr)
        strCommandSend = _T(":FUNC:MODE PATT");
      else
      {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
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

HRESULT WX218x::IWX218xChannel_OutputMode_RangeCheck(LPCTSTR pszPropertyName, WX218xOutputModeEnum val)
{
	HRESULT hr = S_OK;
   CString strModel, strEnum;

	if (val == WX218xOutputModeSequence)
   {
     //Not for WS8351,WS8352
     hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
     if (hr)
     {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
     }
   }

   if (val == WX218xOutputModeASequence)
   {
     //Not for WS8351,WS8352
     hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
     if (hr)
     {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
     }
   }

   if (val == WX218xOutputModePattern)
   {
     //Not for WX2181,WX2182
     hr = WX218x::VerifyIsValidForModel(WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WS835X_FAM | WX2184X_FAM);
     if (hr)
     {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
     }
   }
	 
	return hr;
}
/* Reference Clock Source */
HRESULT WX218x::IWX218xChannel_get_ReferenceClockSource(WX218xReferenceClockSourceEnum* val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":ROSC:SOUR?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("INT")))
      *val = WX218xReferenceClockSourceInternal;

   else if (!strResponse.CompareNoCase(_T("EXT")))
      *val = WX218xReferenceClockSourceExternal;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xChannel_put_ReferenceClockSource(WX218xReferenceClockSourceEnum val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strEnum;

   switch (val)
   {
   case WX218xReferenceClockSourceInternal:
      strCommandSend = _T(":ROSC:SOUR INT");
      break;

   case WX218xReferenceClockSourceExternal:
      strCommandSend = _T(":ROSC:SOUR EXT");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   hr = io.Printf(strCommandSend);

   return hr;
}

/* Operation Mode */
HRESULT WX218x::IWX218xChannel_get_OperationMode(BSTR Channel, WX218xOperationModeEnum* val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;
   int count;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":INIT:CONT?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
      *val = WX218xOperationModeContinuous;

   else if (!strResponse.CompareNoCase(_T("OFF"))) //it is not Continuous
   {
      strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":INIT:GATE?")); 
      hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

      if (!strResponse.CompareNoCase(_T("ON")))
         *val = WX218xOperationModeGate;

      else if (!strResponse.CompareNoCase(_T("OFF"))) //it is Trigger or Burst
      {
         strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRIG:COUN?")); 
         hr = io.Queryf(strCommandSend, _T("%d"), &count);

         if (count ==1)
            *val = WX218xOperationModeTrigger;
         else
            *val = WX218xOperationModeBurst;

      }//end else,it is Trigger or Burst

      else
         hr = err.UnexpectedResponse(strResponse);

   }//end else,it is not Continuous 

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xChannel_put_OperationMode(BSTR Channel, WX218xOperationModeEnum val)
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
   case WX218xOperationModeContinuous:
      strCommand = _T(":INIT:CONT ON");
      break;

   case WX218xOperationModeTrigger:
      strCommand = _T(":INIT:CONT OFF;:TRIG:COUN 1;:INIT:GATE OFF");
      break;

   case WX218xOperationModeBurst:
      strCommand = _T(":INIT:CONT OFF;:TRIG:COUN 2;:INIT:GATE OFF");
      break;

   case WX218xOperationModeGate:
      strCommand = _T(":INIT:CONT OFF;:INIT:GATE ON");
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

HRESULT WX218x::IWX218xChannel_get_Sync(IWX218xChannelSync** val)
{
   HRESULT hr = S_OK;

   hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

   return hr;
}

//=====================================================================================================
//                              - External Frequency -
HRESULT WX218x::IWX218xChannel_get_ExtFrequency(BSTR Channel, WX218xExtFrequencyEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SOUR:ROSC:EXT:FREQ?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("10M")))
      *val = WX218xExtFrequency10M;

   else if (!strResponse.CompareNoCase(_T("20M")))
      *val = WX218xExtFrequency20M;

   else if (!strResponse.CompareNoCase(_T("50M")))
      *val = WX218xExtFrequency50M;

   else if (!strResponse.CompareNoCase(_T("100M")))
      *val = WX218xExtFrequency100M;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xChannel_put_ExtFrequency(BSTR Channel, WX218xExtFrequencyEnum val)
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
   case WX218xExtFrequency10M:
      strCommand = _T(":SOUR:ROSC:EXT:FREQ 10M");
      break;

   case WX218xExtFrequency20M:
      strCommand = _T(":SOUR:ROSC:EXT:FREQ 20M");
      break;

   case WX218xExtFrequency50M:
      strCommand = _T(":SOUR:ROSC:EXT:FREQ 50M");
      break;

   case WX218xExtFrequency100M:
      strCommand = _T(":SOUR:ROSC:EXT:FREQ 100M");
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

//==================================================================================================
//                                - ConfigureCoupleAllCh -
HRESULT WX218x::IWX218xChannel_ConfigureCoupleAllCh(WX218xOutputCoupleEnum Couple)
{
	HRESULT hr = S_OK;
   CString strCommandSend,strCommand, strEnum, strModel;

   if (GetSimulate()) //temporary close for offline
      return hr;

   strModel = GetModel();
  
   switch (Couple)
   {
   case WX218xOutputCoupleDC:
      strCommand = _T(":OUTP:COUP:ALL DC");
    break;

   case WX218xOutputCoupleAC:
     EnumToName(Couple, strEnum);
     hr = err.FeatureNotSupported(strEnum, strModel);
     return hr;
     break;

   case WX218xOutputCoupleHV:
      strCommand = _T(":OUTP:COUP:ALL HV");
     break;

   default:
      EnumToName(Couple, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   strCommandSend.Format(_T("%s"), strCommand);
   hr = io.Printf(strCommandSend);

   return hr;
}

//====================================================================================================
//                                - ConfigureOutputStateAllCh -
HRESULT WX218x::IWX218xChannel_ConfigureOutputStateAllCh(VARIANT_BOOL State)
{
	HRESULT hr = S_OK;
   CString strEnabled, strChanSend, strCommandSend;

   if (GetSimulate()) //temporary close for offline
      return hr;

   if (State == VARIANT_TRUE)
      strEnabled = _T("ON");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(_T(":OUTP:STAT:ALL %s"), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

//====================================================================================================
//                              - ConfigureExtFrequency -
HRESULT WX218x::IWX218xChannel_ConfigureExtFrequency(BSTR Channel, WX218xExtFrequencyEnum ExtFrequency)
{
	HRESULT hr = S_OK;

   hr = _IWX218xChannel::put_ExtFrequency(Channel, ExtFrequency);

	return hr;
}

//======================================================================================================
//                               - ConfigureRefExtFrequency -
HRESULT WX218x::IWX218xChannel_ConfigureRefExtFrequency(BSTR Channel, double ExtFreq)
{
	HRESULT hr = S_OK;

   hr = _IWX218xChannel::put_RefExtFrequency(Channel, ExtFreq);

	return hr;
}

/* Couple */
HRESULT WX218x::IWX218xChannel_get_Couple(BSTR Channel, WX218xOutputCoupleEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":OUTP:COUP?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("DC")))
   {
      hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
      if (hr)
       hr = err.UnexpectedResponse(strResponse);
      else
       *val = WX218xOutputCoupleDC;
   }

   else if (!strResponse.CompareNoCase(_T("AC")))
   {
      hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM);
      if (hr)
       hr = err.UnexpectedResponse(strResponse);
      else
       *val = WX218xOutputCoupleAC;
   }

   else if (!strResponse.CompareNoCase(_T("HV")))
   {
     hr = WX218x::VerifyIsValidForModel(WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
     if (hr)
      hr = err.UnexpectedResponse(strResponse);
     else
       *val = WX218xOutputCoupleHV;
   }

   else
     hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xChannel_put_Couple(BSTR Channel, WX218xOutputCoupleEnum val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strCommand, strEnum, strModel;

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
   case WX218xOutputCoupleDC:
      hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
      if (!hr)
        strCommand = _T(":OUTP:COUP DC");
      else
      {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
       return hr;
      } 
      break;

   case WX218xOutputCoupleAC:
      hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM);
      if (!hr)
       strCommand = _T(":OUTP:COUP AC");
      else
      {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
       return hr;
      } 
      break;

   case WX218xOutputCoupleHV:
      hr = WX218x::VerifyIsValidForModel(WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
      if (!hr)
       strCommand = _T(":OUTP:COUP HV");
      else //it is not WX2181B/WX2182B
      {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
       return hr;
      }//end else,it is not WX2181B/WX2182B 
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

HRESULT WX218x::IWX218xOutput_Couple_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, WX218xOutputCoupleEnum val)
{
	HRESULT hr = S_OK;
   CString strModel, strEnum;

   strModel = GetModel();

	if (val == WX218xOutputCoupleHV)
   {
     hr = WX218x::VerifyIsValidForModel(WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
     if (hr)
     {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
     }
   }

   if (val == WX218xOutputCoupleDC)
   {
     hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM | WX2184X_FAM);
     if (hr)
     {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
     }
   }

   if (val == WX218xOutputCoupleAC)
   {
     hr = WX218x::VerifyIsValidForModel(WX218X_FAM | WX218XB_FAM | WX128XB_FAM | WX218XBD_FAM | WX128XBD_FAM);
     if (hr)
     {
       EnumToName(val, strEnum);
       hr = err.FeatureNotSupported(strEnum, strModel);
     }
   }
	 
	return hr;
}

/* Name */
HRESULT WX218x::IWX218xChannel_get_Name(long Index, BSTR* val)
{
   HRESULT hr = S_OK;

   //Checking parameter index
   if (Index < CHAN_INDEX_MIN || Index > CHAN_INDEX_MAX)
   {
     hr = err.InvalidValue(_T("Index"), Index);
     return hr;
   }
  
  switch (Index)
   {
   case 1:
      *val = ::SysAllocString(OLESTR("Channel1"));
      if (*val == NULL)
         hr = err.OutOfMemory();
      break;

   case 2:
      *val = ::SysAllocString(OLESTR("Channel2"));
      if (*val == NULL)
         hr = err.OutOfMemory();
      break;

   case 3:
      *val = ::SysAllocString(OLESTR("Channel3"));
      if (*val == NULL)
         hr = err.OutOfMemory();
      break;

   case 4:
      *val = ::SysAllocString(OLESTR("Channel4"));
      if (*val == NULL)
         hr = err.OutOfMemory();
      break;
   }

   return hr;
}

/* RefExtFrequency */
HRESULT WX218x::IWX218xOutput_RefExtFrequency_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double valMin, valMax;

   valMin = ROSC_EXT_FREQ_MIN;
   valMax = ROSC_EXT_FREQ_MAX;
    
   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xChannel_get_RefExtFrequency(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ROSC:EXT:FREQ?")); 
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xChannel_put_RefExtFrequency(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":ROSC:EXT:FREQ %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}







