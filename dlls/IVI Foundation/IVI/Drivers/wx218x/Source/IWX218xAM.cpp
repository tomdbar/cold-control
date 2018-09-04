/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Enabled */
HRESULT WX218x::IWX218xAM_get_Enabled(BSTR Channel, VARIANT_BOOL* val)
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

   if (!strResponse.CompareNoCase(_T("AM")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xAM_put_Enabled(BSTR Channel, VARIANT_BOOL val)
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
      strEnabled = _T("AM");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MOD:TYPE %s")), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Internal Depth */
HRESULT WX218x::IWX218xAM_InternalDepth_RangeCheck(LPCTSTR pszPropertyName, double val)
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
      valMin = AM_DEPTH_MIN;
      valMax = AM_DEPTH_MAX_WX2184; 
     break;

     default:
      valMin = AM_DEPTH_MIN;
      valMax = AM_DEPTH_MAX; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xAM_get_InternalDepth(double* val)
{
   HRESULT hr = S_OK;

   hr = io.Queryf(_T(":AM:DEPT?"), _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xAM_put_InternalDepth(double val)
{
   HRESULT hr = S_OK;

   hr = io.Printf(_T(":AM:DEPT %Lf"),val);

   return hr;
}

/* Internal Frequency */
HRESULT WX218x::IWX218xAM_InternalFrequency_RangeCheck(LPCTSTR pszPropertyName, double val)
{
   HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   valMax = AM_FREQ_MAX; 

   //Getting modelNumber
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
      valMin = AM_FREQ_MIN; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = AM_FREQ_MIN; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMin = AM_FREQ_MIN_WS835X; 
     break;

     default:
       valMin = AM_FREQ_MIN; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xAM_get_InternalFrequency(double* val)
{
   HRESULT hr = S_OK;

   hr = io.Queryf(_T(":AM:INT:FREQ?"), _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xAM_put_InternalFrequency(double val)
{
   HRESULT hr = S_OK;

   hr = io.Printf(_T(":AM:INT:FREQ %Lf"),val);

   return hr;
}

//==========================================================================================================
//                           - ConfigureAMEnabled -
HRESULT WX218x::IWX218xAM_ConfigureAMEnabled(BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

   hr = _IWX218xAM::put_Enabled(Channel, Enabled);

	return hr;
}

/* Internal Waveform */
HRESULT WX218x::IWX218xAM_get_InternalWaveform(WX218xAMInternalWaveformEnum* val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":AM:FUNC?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("SIN")))
      *val = WX218xAMInternalWaveformSine;

   else if (!strResponse.CompareNoCase(_T("TRI")))
      *val = WX218xAMInternalWaveformTriangle;

   else if (!strResponse.CompareNoCase(_T("SQU")))
      *val = WX218xAMInternalWaveformSquare;

   else if (!strResponse.CompareNoCase(_T("RAMP")))
      *val = WX218xAMInternalWaveformRamp;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xAM_put_InternalWaveform(WX218xAMInternalWaveformEnum val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strEnum;

   switch (val)
   {
   case WX218xAMInternalWaveformSine:
      strCommandSend = _T(":AM:FUNC SIN");
      break;

   case WX218xAMInternalWaveformTriangle:
      strCommandSend = _T(":AM:FUNC TRI");
      break;

   case WX218xAMInternalWaveformSquare:
      strCommandSend = _T(":AM:FUNC SQU");
      break;

   case WX218xAMInternalWaveformRamp:
      strCommandSend = _T(":AM:FUNC RAMP");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum, strEnum);
      return hr;
   }

   hr = io.Printf(strCommandSend);

   return hr;
}

/* ConfigureInternal */
HRESULT WX218x::IWX218xAM_ConfigureInternal(double Depth, WX218xAMInternalWaveformEnum Waveform, double Frequency)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strCommand, strWaveform, strEnum;

   //Checking parameters range
   //Depth
   hr = WX218x::IWX218xAM_InternalDepth_RangeCheck(_T("Depth"), Depth);
   if (!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Depth"), Depth);
      return hr;
   }

   //Frequency
   hr = WX218x::IWX218xAM_InternalFrequency_RangeCheck(_T("Frequency"), Frequency);
   if (!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Frequency"), Frequency);
      return hr;
   }

   if (GetSimulate())
   {
      hr = _IWX218xAM::put_InternalDepth(Depth);
      hr = _IWX218xAM::put_InternalWaveform(Waveform);
      hr = _IWX218xAM::put_InternalFrequency(Frequency);
      return hr;
   }

   switch (Waveform)
   {
   case WX218xAMInternalWaveformSine:
      strWaveform = _T(":AM:FUNC SIN");
      break;

   case WX218xAMInternalWaveformTriangle:
      strWaveform = _T(":AM:FUNC TRI");
      break;

   case WX218xAMInternalWaveformSquare:
      strWaveform = _T(":AM:FUNC SQU");
      break;

   case WX218xAMInternalWaveformRamp:
      strWaveform = _T(":AM:FUNC RAMP");
      break;

   default:
      EnumToName(Waveform, strEnum);
      hr = err.ValueNotSupported(strEnum, strEnum);
      return hr;
   }

   strCommandSend.Format(_T(":AM:DEPT %d;:AM:INT:FREQ %Lf;%s"), (int)Depth, Frequency, strWaveform);

   hr = io.Printf(strCommandSend);

   return hr;
}




