/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Offset */
HRESULT WX218x::IWX218xCouple_get_Offset(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":INST:COUP:OFFS?")); 
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xCouple_put_Offset(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":INST:COUP:OFFS %d")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Enabled */
HRESULT WX218x::IWX218xCouple_get_Enabled(VARIANT_BOOL* val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":INST:COUP:STAT?");

   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
   {
      *val = VARIANT_TRUE;
      m_CoupleEnabled = true;
   }
   else
   {
      *val = VARIANT_FALSE;
      m_CoupleEnabled = false;
   }

   return hr;
}

HRESULT WX218x::IWX218xCouple_put_Enabled(VARIANT_BOOL val)
{
   HRESULT hr = S_OK;
   CString strEnabled, strCommandSend;

   if (val == VARIANT_TRUE)
      strEnabled = _T("ON");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(_T(":INST:COUP:STAT %s"), strEnabled);

   hr = io.Printf(strCommandSend);
   if (SUCCEEDED(hr))
   {
      if (val == VARIANT_TRUE)
         m_CoupleEnabled = true;
      else
         m_CoupleEnabled = false;
   }

   return hr;
}

/* Skew */
HRESULT WX218x::IWX218xCouple_Skew_RangeCheck(LPCTSTR pszPropertyName, double val)
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
      val_min = COUPLE_SKEW_MIN_WX2184;
      val_max = COUPLE_SKEW_MAX_WX2184; 
     break;

     case MNM_WX2181C:
     case MNM_WX2182C:
      val_min = COUPLE_SKEW_MIN_WX218XC;
      val_max = COUPLE_SKEW_MAX_WX218XC; 
     break;

     case MNM_WX1281C:
     case MNM_WX1282C:
      val_min = COUPLE_SKEW_MIN_WX128XC;
      val_max = COUPLE_SKEW_MAX_WX128XC; 
     break;

     default:
      val_min = COUPLE_SKEW_MIN;
      val_max = COUPLE_SKEW_MAX; 
    }

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xCouple_get_Skew(double* val)
{
   HRESULT hr = S_OK;
   CString strCommandSend;

   strCommandSend = _T(":INST:COUP:SKEW?");

   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xCouple_put_Skew(double val)
{
   HRESULT hr = S_OK;
   CString strCommandSend;

   strCommandSend.Format(_T(":INST:COUP:SKEW %+17.9E"), val);

   hr = io.Printf(strCommandSend);

   return hr;
}

//===========================================================================================================
//                                - ConfigureCoupleSkew -
HRESULT WX218x::IWX218xCouple_ConfigureCoupleSkew(double Skew)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCouple::put_Skew(Skew);

	return hr;
}

//======================================================================================
//                              - ConfigureCoupleOffset -
HRESULT WX218x::IWX218xCouple_ConfigureCoupleOffset(BSTR Channel, long Offset)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCouple::put_Offset(Channel, Offset);

	return hr;
}

//====================================================================================
//                                       - ConfigureCoupleEnabled -
HRESULT WX218x::IWX218xCouple_ConfigureCoupleEnabled(VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCouple::put_Enabled(Enabled);

	return hr;
}




