/******************************************************************************
*                                                                         
*               Copyright 2010-2012 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

                        /* Width */
HRESULT WX218x::IWX218xCHIRP_Width_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double val_min, val_max;
   
   val_min = CHIRP_WIDTH_MIN;
   val_max = CHIRP_WIDTH_MAX;

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_get_Width(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":CHIR:WIDT?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_put_Width(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":CHIR:WIDT %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/*                            - Repetition */
HRESULT WX218x::IWX218xCHIRP_Repetition_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
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
      val_min = CHIRP_REPETITION_MIN;
      val_max = CHIRP_REPETITION_MAX_WX2184;
      break;

   default:
      val_min = CHIRP_REPETITION_MIN;
      val_max = CHIRP_REPETITION_MAX;
      break;

   }
   
   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_get_Repetition(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":CHIR:REP?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_put_Repetition(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":CHIR:REP %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                                    /* Start Frequency */
HRESULT WX218x::IWX218xCHIRP_StartFrequency_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
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
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      val_min = CHIRP_FREQ_START_MIN;
      val_max = CHIRP_FREQ_START_MAX;
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
      val_min = CHIRP_FREQ_START_MIN;
      val_max = CHIRP_FREQ_START_MAX_WX218XC;
     break;

     case MNM_WX1281C:
     case MNM_WX1282C:
      val_min = CHIRP_FREQ_START_MIN;
      val_max = CHIRP_FREQ_START_MAX_WX128XC;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
       val_min = CHIRP_FREQ_START_MIN;
       val_max = CHIRP_FREQ_START_MAX_WX128XB;
     break;

     case MNM_WS8351:
     case MNM_WS8352:
       val_min = CHIRP_FREQ_START_MIN;
       val_max = CHIRP_FREQ_START_MAX_WS835X;
     break;

     default:
       val_min = CHIRP_FREQ_START_MIN;
       val_max = CHIRP_FREQ_START_MAX;
    }

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_get_StartFrequency(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":CHIR:FREQ:STAR?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_put_StartFrequency(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":CHIR:FREQ:STAR %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                                   /* Stop Frequency */
HRESULT WX218x::IWX218xCHIRP_StopFrequency_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
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
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      val_min = CHIRP_FREQ_STOP_MIN;
      val_max = CHIRP_FREQ_STOP_MAX;
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
      val_min = CHIRP_FREQ_STOP_MIN;
      val_max = CHIRP_FREQ_STOP_MAX_WX218XC;
     break;

     case MNM_WX1281C:
     case MNM_WX1282C:
      val_min = CHIRP_FREQ_STOP_MIN;
      val_max = CHIRP_FREQ_STOP_MAX_WX128XC;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
       val_min = CHIRP_FREQ_STOP_MIN;
       val_max = CHIRP_FREQ_STOP_MAX_WX128XB;
     break;

     case MNM_WS8351:
     case MNM_WS8352:
       val_min = CHIRP_FREQ_STOP_MIN;
       val_max = CHIRP_FREQ_STOP_MAX_WS835X;
     break;

     default:
       val_min = CHIRP_FREQ_STOP_MIN;
       val_max = CHIRP_FREQ_STOP_MAX;
    }

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_get_StopFrequency(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":CHIR:FREQ:STOP?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_put_StopFrequency(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":CHIR:FREQ:STOP %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                          /* Marker Frequency */
HRESULT WX218x::IWX218xCHIRP_MarkerFrequency_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
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
      val_min = CHIRP_MARKER_FREQ_MIN;
      val_max = CHIRP_MARKER_FREQ_MAX_WX2184;
      break;

   case MNM_WX2181C:
   case MNM_WX2182C:
      val_min = CHIRP_MARKER_FREQ_MIN;
      val_max = CHIRP_MARKER_FREQ_MAX_WX218XC;
      break;

   case MNM_WX1281C:
   case MNM_WX1282C:
      val_min = CHIRP_MARKER_FREQ_MIN;
      val_max = CHIRP_MARKER_FREQ_MAX_WX128XC;
      break;


   default:
      val_min = CHIRP_MARKER_FREQ_MIN;
      val_max = CHIRP_MARKER_FREQ_MAX;
      break;
   }
   
   

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_get_MarkerFrequency(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":CHIR:MARK:FREQ?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_put_MarkerFrequency(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":CHIR:MARK:FREQ %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                         /* Ampl Depth */
HRESULT WX218x::IWX218xCHIRP_AmplDepth_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double val_min, val_max;
   
   val_min = CHIRP_AMPL_DEPTH_MIN;
   val_max = CHIRP_AMPL_DEPTH_MAX;

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_get_AmplDepth(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":CHIR:AMPL:DEPT?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_put_AmplDepth(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":CHIR:AMPL:DEPT %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                                        /* Frequency Direction */
HRESULT WX218x::IWX218xCHIRP_get_FreqDirection(BSTR Channel, WX218xChirpFreqDirectionEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":CHIR:FREQ:DIR?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("UP")))
      *val = WX218xChirpFreqDirectionUp;

   else if (!strResponse.CompareNoCase(_T("DOWN")))
      *val = WX218xChirpFreqDirectionDown;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_put_FreqDirection(BSTR Channel, WX218xChirpFreqDirectionEnum val)
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
   case WX218xChirpFreqDirectionUp:
      strCommand = _T(":CHIR:FREQ:DIR UP");
      break;

   case WX218xChirpFreqDirectionDown:
      strCommand = _T(":CHIR:FREQ:DIR DOWN");
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

                           /* Freq Spacing */
HRESULT WX218x::IWX218xCHIRP_get_FreqSpacing(BSTR Channel, WX218xChirpFreqSpacingEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":CHIR:FREQ:SPAC?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("LIN")))
      *val = WX218xChirpFreqSpacingLinear;

   else if (!strResponse.CompareNoCase(_T("LOG")))
      *val = WX218xChirpFreqSpacingLog;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_put_FreqSpacing(BSTR Channel, WX218xChirpFreqSpacingEnum val)
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
   case WX218xChirpFreqSpacingLinear:
      strCommand = _T(":CHIR:FREQ:SPAC LIN");
      break;

   case WX218xChirpFreqSpacingLog:
      strCommand = _T(":CHIR:FREQ:SPAC LOG");
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

                          /* Ampl Direction */
HRESULT WX218x::IWX218xCHIRP_get_AmplDirection(BSTR Channel, WX218xChirpAmplitudeDirectionEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":CHIR:AMPL:DIR?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("UP")))
      *val = WX218xChirpAmplitudeDirectionUp;

   else if (!strResponse.CompareNoCase(_T("DOWN")))
      *val = WX218xChirpAmplitudeDirectionDown;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_put_AmplDirection(BSTR Channel, WX218xChirpAmplitudeDirectionEnum val)
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
   case WX218xChirpAmplitudeDirectionUp:
      strCommand = _T(":CHIR:AMPL:DIR UP");
      break;

   case WX218xChirpAmplitudeDirectionDown:
      strCommand = _T(":CHIR:AMPL:DIR DOWN");
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

                          /* Ampl Spacing */
HRESULT WX218x::IWX218xCHIRP_get_AmplSpacing(BSTR Channel, WX218xChirpAmplSpacingEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":CHIR:AMPL:SPAC?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("LIN")))
      *val = WX218xChirpAmplSpacingLin;

   else if (!strResponse.CompareNoCase(_T("LOG")))
      *val = WX218xChirpAmplSpacingLog;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_put_AmplSpacing(BSTR Channel, WX218xChirpAmplSpacingEnum val)
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
   case WX218xChirpAmplSpacingLin:
      strCommand = _T(":CHIR:AMPL:SPAC LIN");
      break;

   case WX218xChirpAmplSpacingLog:
      strCommand = _T(":CHIR:AMPL:SPAC LOG");
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

                     /* Enabled */
HRESULT WX218x::IWX218xCHIRP_get_Enabled(BSTR Channel, VARIANT_BOOL* val)
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

   if (!strResponse.CompareNoCase(_T("CHIR")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xCHIRP_put_Enabled(BSTR Channel, VARIANT_BOOL val)
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
      strEnabled = _T("CHIR");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MOD:TYPE %s")), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

//================================================================================================
//                                     - ConfigureChirpAmplSpacing -
HRESULT WX218x::IWX218xCHIRP_ConfigureChirpAmplSpacing(BSTR Channel, WX218xChirpAmplSpacingEnum AmplSpacing)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCHIRP::put_AmplSpacing(Channel, AmplSpacing);

	return hr;
}

//=================================================================================================
//                            - ConfigureChirpAmplDirection -
HRESULT WX218x::IWX218xCHIRP_ConfigureChirpAmplDirection(BSTR Channel, WX218xChirpAmplitudeDirectionEnum AmplDirection)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCHIRP::put_AmplDirection(Channel, AmplDirection);

	return hr;
}

//=================================================================================================
//                                - ConfigureChirpWidth -
HRESULT WX218x::IWX218xCHIRP_ConfigureChirpWidth(BSTR Channel, double Width)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCHIRP::put_Width(Channel, Width);

	return hr;
}

//===================================================================================================
//                                  - ConfigureChirpStopFreq -
HRESULT WX218x::IWX218xCHIRP_ConfigureChirpStopFreq(BSTR Channel, double StopFreq)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCHIRP::put_StopFrequency(Channel, StopFreq);

	return hr;
}

//====================================================================================================
//                                  - ConfigureChirpStartFreq -
HRESULT WX218x::IWX218xCHIRP_ConfigureChirpStartFreq(BSTR Channel, double StartFreq)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCHIRP::put_StartFrequency(Channel, StartFreq);

	return hr;
}

//======================================================================================================
//                                  - ConfigureChirpRepetition -
HRESULT WX218x::IWX218xCHIRP_ConfigureChirpRepetition(BSTR Channel, double Repetition)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCHIRP::put_Repetition(Channel, Repetition);

	return hr;
}

//========================================================================================================
//                                 - ConfigureChirpMarkerFreq - 
HRESULT WX218x::IWX218xCHIRP_ConfigureChirpMarkerFreq(BSTR Channel, double MarkerFreq)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCHIRP::put_MarkerFrequency(Channel, MarkerFreq);

	return hr;
}

//===========================================================================================================
//                                   - ConfigureChirpFreqSpacing -
HRESULT WX218x::IWX218xCHIRP_ConfigureChirpFreqSpacing(BSTR Channel, WX218xChirpFreqSpacingEnum FreqSpacing)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCHIRP::put_FreqSpacing(Channel, FreqSpacing);

	return hr;
}

//===============================================================================================
//                                 - ConfigureChirpFreqDirection -
HRESULT WX218x::IWX218xCHIRP_ConfigureChirpFreqDirection(BSTR Channel, WX218xChirpFreqDirectionEnum FreqDirection)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCHIRP::put_FreqDirection(Channel, FreqDirection);

	return hr;
}

//=================================================================================================
//                                 - ConfigureChirpEnabled -
HRESULT WX218x::IWX218xCHIRP_ConfigureChirpEnabled(BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCHIRP::put_Enabled(Channel, Enabled);

	return hr;
}

//=====================================================================================================
//                                   - ConfigureChirpAmplDepth -
HRESULT WX218x::IWX218xCHIRP_ConfigureChirpAmplDepth(BSTR Channel, double AmplDepth)
{
	HRESULT hr = S_OK;

   hr = _IWX218xCHIRP::put_AmplDepth(Channel, AmplDepth);

	return hr;
}









