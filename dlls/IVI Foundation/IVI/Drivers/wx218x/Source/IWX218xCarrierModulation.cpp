/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Frequency */
HRESULT WX218x::IWX218xCarrierModulation_Frequency_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   valMin = CARR_FREQ_MIN; 

   //Getting modelNumber
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      valMax = CARR_FREQ_MAX; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      valMax = CARR_FREQ_MAX_WX218XB; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
      valMax = CARR_FREQ_MAX_WX218XC; 
     break;

     case MNM_WX1281C:
     case MNM_WX1282C:
      valMax = CARR_FREQ_MAX_WX128XC; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      valMax = CARR_FREQ_MAX_WX128XB; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMax = CARR_FREQ_MAX_WS835X; 
     break;

     default:
       valMax = SAMPLE_RATE_MAX; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xCarrierModulation_get_Frequency(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":MOD:CARR?")); 
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xCarrierModulation_put_Frequency(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MOD:CARR %Lf")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Waveform */
HRESULT WX218x::IWX218xCarrierModulation_get_Waveform(BSTR Channel, WX218xCarrierModulationWaveformEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":MOD:CARR:FUNC?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("SIN")))
      *val = WX218xCarrierModulationWaveformSine;

   else if (!strResponse.CompareNoCase(_T("TRI")))
      *val = WX218xCarrierModulationWaveformTriangle;

   else if (!strResponse.CompareNoCase(_T("SQU")))
      *val = WX218xCarrierModulationWaveformSquare;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xCarrierModulation_put_Waveform(BSTR Channel, WX218xCarrierModulationWaveformEnum val)
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
   case WX218xCarrierModulationWaveformSine:
      strCommand = _T(":MOD:CARR:FUNC SIN");
      break;

   case WX218xCarrierModulationWaveformTriangle:
      strCommand = _T(":MOD:CARR:FUNC TRI");
      break;

   case WX218xCarrierModulationWaveformSquare:
      strCommand = _T(":MOD:CARR:FUNC SQU");
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
//                                    - ConfigureCarrWaveform -
HRESULT WX218x::IWX218xCarrierModulation_ConfigureCarrWaveform(BSTR Channel, WX218xCarrierModulationWaveformEnum Waveform)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCarrierModulation::put_Waveform(Channel, Waveform);

	return hr;
}

//=================================================================================================
//                             - ConfigureCarrFreq -
HRESULT WX218x::IWX218xCarrierModulation_ConfigureCarrFreq(BSTR Channel, double Freq)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCarrierModulation::put_Frequency(Channel, Freq);

	return hr;
}
                           


