/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Enabled */
HRESULT WX218x::IWX218xFM_get_Enabled(BSTR Channel, VARIANT_BOOL* val)
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

   if (!strResponse.CompareNoCase(_T("FM")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xFM_put_Enabled(BSTR Channel, VARIANT_BOOL val)
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
      strEnabled = _T("FM");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MOD:TYPE %s")), strEnabled);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* InternalDeviation */
HRESULT WX218x::IWX218xFM_InternalDeviation_RangeCheck(LPCTSTR pszPropertyName, double val)
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
      valMin = FM_DEVIATION_MIN; 
      valMax = FM_DEVIATION_MAX; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      valMin = FM_DEVIATION_MIN; 
      valMax = FM_DEVIATION_MAX; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
      valMin = FM_DEVIATION_MIN; 
      valMax = FM_DEVIATION_MAX_WX218XC; 
     break;

     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = FM_DEVIATION_MIN; 
      valMax = FM_DEVIATION_MAX_WX128XC; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      valMin = FM_DEVIATION_MIN_WX128XB; 
      valMax = FM_DEVIATION_MAX_WX128XB; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMin = FM_DEVIATION_MIN_WS835X; 
      valMax = FM_DEVIATION_MAX_WS835X; 
     break;

     case MNM_WX2184:
	 case MNM_WX2184C:
      valMin = FM_DEVIATION_MIN_WX2184; 
      valMax = FM_DEVIATION_MAX_WX2184; 
     break;

     case MNM_WX1284:
	 case MNM_WX1284C:
      valMin = FM_DEVIATION_MIN_WX2184; 
      valMax = FM_DEVIATION_MAX_WX1284; 
     break;

     default:
       valMin = FM_DEVIATION_MIN; 
       valMax = FM_DEVIATION_MAX; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xFM_get_InternalDeviation(double* val)
{
   HRESULT hr = S_OK;

   hr = io.Queryf(_T(":FM:DEV?"), _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xFM_put_InternalDeviation(double val)
{
   HRESULT hr = S_OK;

   hr = io.Printf(_T(":FM:DEV %Lf"),val);

   return hr;
}

/* InternalFrequency */
HRESULT WX218x::IWX218xFM_InternalFrequency_RangeCheck(LPCTSTR pszPropertyName, double val)
{
   HRESULT hr = S_OK;
   double val_min, val_max;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      val_min = FM_FREQ_MIN;
      val_max = FM_FREQ_MAX; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
      val_min = FM_FREQ_MIN;
      val_max = FM_FREQ_MAX_WX218XC; 
     break;

     case MNM_WX1281C:
     case MNM_WX1282C:
      val_min = FM_FREQ_MIN;
      val_max = FM_FREQ_MAX_WX128XC; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      val_min = FM_FREQ_MIN;
      val_max = FM_FREQ_MAX_WX128XB; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      val_min = FM_FREQ_MIN;
      val_max = FM_FREQ_MAX_WS835X; 
     break;

     case MNM_WX2184:
	 case MNM_WX2184C:
      val_min = FM_FREQ_MIN;
      val_max = FM_FREQ_MAX_WX2184; 
     break;

     case MNM_WX1284:
	 case MNM_WX1284C:
      val_min = FM_FREQ_MIN;
      val_max = FM_FREQ_MAX_WX1284; 
     break;

     default:
      val_min = FM_FREQ_MIN;
      val_max = FM_FREQ_MAX; 
    }

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xFM_get_InternalFrequency(double* val)
{
   HRESULT hr = S_OK;

   hr = io.Queryf(_T(":FM:FREQ?"), _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xFM_put_InternalFrequency(double val)
{
   HRESULT hr = S_OK;

   hr = io.Printf(_T(":FM:FREQ %Lf"),val);

   return hr;
}

/* InternalWaveform */
HRESULT WX218x::IWX218xFM_get_InternalWaveform(WX218xFMInternalWaveformEnum* val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":FM:FUNC?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("SIN")))
      *val = WX218xFMInternalWaveformSine;

   else if (!strResponse.CompareNoCase(_T("TRI")))
      *val = WX218xFMInternalWaveformTriangle;

   else if (!strResponse.CompareNoCase(_T("SQU")))
      *val = WX218xFMInternalWaveformSquare;

   else if (!strResponse.CompareNoCase(_T("RAMP")))
      *val = WX218xFMInternalWaveformRamp;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xFM_put_InternalWaveform(WX218xFMInternalWaveformEnum val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strEnum;

   switch (val)
   {
   case WX218xFMInternalWaveformSine:
      strCommandSend = _T(":FM:FUNC SIN");
      break;

   case WX218xFMInternalWaveformTriangle:
      strCommandSend = _T(":FM:FUNC TRI");
      break;

   case WX218xFMInternalWaveformSquare:
      strCommandSend = _T(":FM:FUNC SQU");
      break;

   case WX218xFMInternalWaveformRamp:
      strCommandSend = _T(":FM:FUNC RAMP");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   hr = io.Printf(strCommandSend);

   return hr;
}

/* Marker */
HRESULT WX218x::IWX218xFM_Marker_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
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
      valMin = FM_MARKER_MIN; 
      valMax = FM_MARKER_MAX; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = FM_MARKER_MIN; 
      valMax = FM_MARKER_MAX; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
       valMin = FM_MARKER_MIN; 
       valMax = FM_MARKER_MAX_WX128XB; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMin = FM_MARKER_MIN; 
      valMax = FM_MARKER_MAX_WS835X; 
     break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      valMin = FM_MARKER_MIN; 
      valMax = FM_MARKER_MAX_WX2184; 
     break;

     default:
      valMin = FM_MARKER_MIN; 
      valMax = FM_MARKER_MAX; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xFM_get_Marker(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FM:MARK?")); 
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xFM_put_Marker(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":FM:MARK %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

//=======================================================================================================
//                              - ConfigureFMMarker -
HRESULT WX218x::IWX218xFM_ConfigureFMMarker(BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFM::put_Marker(Channel, val);

	return hr;
}

//==========================================================================================================
//                              - ConfigureFMEnabled -
HRESULT WX218x::IWX218xFM_ConfigureFMEnabled(BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFM::put_Enabled(Channel, val);

	return hr;
}

/* ConfigureInternal */
HRESULT WX218x::IWX218xFM_ConfigureInternal(double Deviation, WX218xFMInternalWaveformEnum Waveform, double Frequency)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strCommand, strWaveform, strEnum;

   //Checking parameter ranges
   //Deviation
   hr  = WX218x::IWX218xFM_InternalDeviation_RangeCheck(_T("Deviation"), Deviation);
   if (!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Deviation"), Deviation);
      return hr;
   }

   //Frequency
   hr  = WX218x::IWX218xFM_InternalFrequency_RangeCheck(_T("Frequency"), Frequency);
   if (!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Frequency"), Frequency);
      return hr;
   }

   if (GetSimulate())
   {
      hr = _IWX218xFM::put_InternalDeviation(Deviation);
      hr = _IWX218xFM::put_InternalWaveform(Waveform);
      hr = _IWX218xFM::put_InternalFrequency(Frequency);
      return hr;
   }

   switch (Waveform)
   {
   case WX218xFMInternalWaveformSine:
      strWaveform = _T(":FM:FUNC SIN");
      break;

   case WX218xFMInternalWaveformTriangle:
      strWaveform = _T(":FM:FUNC TRI");
      break;

   case WX218xFMInternalWaveformSquare:
      strWaveform = _T(":FM:FUNC SQU");
      break;

   case WX218xFMInternalWaveformRamp:
      strWaveform = _T(":FM:FUNC RAMP");
      break;

   default:
      EnumToName(Waveform, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   strCommandSend.Format(_T(":FM:DEV %Lf;:FM:FREQ %Lf;%s"), Deviation, Frequency, strWaveform);

   hr = io.Printf(strCommandSend);

   return hr;
}




