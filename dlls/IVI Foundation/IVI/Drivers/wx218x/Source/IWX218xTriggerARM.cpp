/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Level */
HRESULT WX218x::IWX218xTriggerARM_Level_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;

   if ( val < ARM_LEVEL_MIN || val > ARM_LEVEL_MAX ) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xTriggerARM_get_Level(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ARM:LEV?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xTriggerARM_put_Level(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":ARM:LEV %Lf")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Slope */
HRESULT WX218x::IWX218xTriggerARM_get_Slope(BSTR Channel, WX218xArmSlopeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ARM:SLOP?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("POS")))
      *val = WX218xArmSlopePositive;

   else if (!strResponse.CompareNoCase(_T("NEG")))
      *val = WX218xArmSlopeNegative;

   else if (!strResponse.CompareNoCase(_T("EITH"))) //response is EITH
   {
      //Checking if it is not WX2184
      if (strModel.CompareNoCase(_T("WX2184")) && strModel.CompareNoCase(_T("WX1284")) && strModel.CompareNoCase(_T("WX2184C")) && strModel.CompareNoCase(_T("WX1284C")))
       *val = WX218xArmSlopeEither;
      else
         hr = err.UnexpectedResponse(strResponse);
   }//end else if,response is EITH 

   else
      hr = err.UnexpectedResponse(strResponse);
   

   return hr;
}

HRESULT WX218x::IWX218xTriggerARM_put_Slope(BSTR Channel, WX218xArmSlopeEnum val)
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
   case WX218xArmSlopePositive:
      strCommand = _T(":ARM:SLOP POS");
      break;

   case WX218xArmSlopeNegative:
      strCommand = _T(":ARM:SLOP NEG");
      break;

   case WX218xArmSlopeEither:
      //Checking if it is not WX2184
      if (strModel.CompareNoCase(_T("WX2184")) && strModel.CompareNoCase(_T("WX1284")) && strModel.CompareNoCase(_T("WX2184C")) && strModel.CompareNoCase(_T("WX1284C")))
       strCommand = _T(":ARM:SLOP EITH");
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T("%s")), strCommand); 
   hr = io.Printf(strCommandSend);

   return hr;
}

//================================================================================================
//                                    - ConfigureTrigARMSlope -
HRESULT WX218x::IWX218xTriggerARM_ConfigureTrigARMSlope(BSTR Channel, WX218xArmSlopeEnum Slope)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTriggerARM::put_Slope(Channel, Slope);

	return hr;
}

//==================================================================================================
//                                  - ConfigureTrigARMLevel -
HRESULT WX218x::IWX218xTriggerARM_ConfigureTrigARMLevel(BSTR Channel, double Level)
{
	HRESULT hr = S_OK;

   hr = _IWX218xTriggerARM::put_Level(Channel, Level);

	return hr;
}

/* SetTTLLevel */
HRESULT WX218x::IWX218xTriggerARM_SetTtlLevel(BSTR Channel)
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
      return hr;

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ARM:TTL"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* SetECLLevel */
HRESULT WX218x::IWX218xTriggerARM_SetECLLevel(BSTR Channel)
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
      return hr;

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ARM:ECL"));
   hr = io.Printf(strCommandSend);

   return hr;
}

