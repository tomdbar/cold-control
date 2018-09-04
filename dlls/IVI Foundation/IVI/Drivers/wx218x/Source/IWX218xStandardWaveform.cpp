/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* HvAmplitude */
HRESULT WX218x::IWX218xStandardWaveform_HvAmplitude_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double valMin, valMax;
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
      valMin = HV_AMPLITUDE_MIN_WX218XB; 
      valMax = HV_AMPLITUDE_MAX_WX218XB; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = HV_AMPLITUDE_MIN_WX218XB; 
      valMax = HV_AMPLITUDE_MAX_WX218XB; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      valMin = HV_AMPLITUDE_MIN_WX128XB; 
      valMax = HV_AMPLITUDE_MAX_WX128XB; 
     break;

     default:
      valMin = HV_AMPLITUDE_MIN_WX218XB; 
      valMax = HV_AMPLITUDE_MAX_WX218XB; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_get_HvAmplitude(BSTR Channel, double* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
      strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":OUTP:COUP HV;:VOLT:HV?")); 
   else
     strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":VOLT:HV?")); 

   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_HvAmplitude(BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":OUTP:COUP HV;:VOLT:HV %Lf")), val); 
   else
     strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":VOLT:HV %Lf")), val); 

   hr = io.Printf(strCommandSend);

   return hr;
}

                            /* Waveform */
HRESULT WX218x::IWX218xStandardWaveform_get_Waveform(BSTR Channel, WX218xWaveformEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FUNC:SHAP?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("SINC")))
      *val = WX218xWaveformSinc;

   else if (!strResponse.CompareNoCase(_T("TRI")))
      *val = WX218xWaveformTriangle;

   else if (!strResponse.CompareNoCase(_T("SQU")))
      *val = WX218xWaveformSquare;

   else if (!strResponse.CompareNoCase(_T("DC")))
      *val = WX218xWaveformDC;

   else if (!strResponse.CompareNoCase(_T("RAMP")))
      *val = WX218xWaveformRampUp;

   else if (!strResponse.CompareNoCase(_T("SIN")))
      *val = WX218xWaveformSine;

   else if (!strResponse.CompareNoCase(_T("GAUS")))
      *val = WX218xWaveformGaussian;

   else if (!strResponse.CompareNoCase(_T("EXP")))
      *val = WX218xWaveformExponential;

   else if (!strResponse.CompareNoCase(_T("NOIS")))
      *val = WX218xWaveformNoise;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_Waveform(BSTR Channel, WX218xWaveformEnum val)
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
   case WX218xWaveformSine:
      strCommand = _T(":FUNC:SHAP SIN");
      break;

   case WX218xWaveformSquare:
      strCommand = _T(":FUNC:SHAP SQU");
      break;

   case WX218xWaveformTriangle:
      strCommand = _T(":FUNC:SHAP TRI");
      break;

   case WX218xWaveformDC:
      strCommand = _T(":FUNC:SHAP DC");
      break;

   case WX218xWaveformRampUp:
   case WX218xWaveformRampDown:
      strCommand = _T(":FUNC:SHAP RAMP");
      break;

   case WX218xWaveformSinc:
      strCommand = _T(":FUNC:SHAP SINC");
      break;

   case WX218xWaveformGaussian:
      strCommand = _T(":FUNC:SHAP GAUS");
      break;

   case WX218xWaveformExponential:
      strCommand = _T(":FUNC:SHAP EXP");
      break;

   case WX218xWaveformNoise:
      strCommand = _T(":FUNC:SHAP NOIS");
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

//=========================================================================================
//                             - ConfigureOffsetAllCh -
HRESULT WX218x::IWX218xStandardWaveform_ConfigureOffsetAllCh(double Offset)
{
	HRESULT hr = S_OK;
   double valMin, valMax;
   CString strCommandSend;

   if (GetSimulate()) //temporary close for offline
    return hr;

   //Checking amplitude range
    valMin = OFFSET_MIN_WX2184;
    valMax = OFFSET_MAX_WX2184; 

   if (Offset < valMin || Offset > valMax)
   {
      hr = err.InvalidValue(_T("val"), Offset);
      return hr;
   }

   strCommandSend.Format(_T(":SOUR:VOLT:LEV:OFFS:ALL %Lf"), Offset); 
   hr = io.Printf(strCommandSend);

   return hr;
}

//=======================================================================================
//                                    - ConfigureHVAmplAllCh -
HRESULT WX218x::IWX218xStandardWaveform_ConfigureHVAmplAllCh(double HVAmplitude)
{
	HRESULT hr = S_OK;
   double valMin, valMax;
   CString strCommandSend;

   if (GetSimulate()) //temporary close for offline
    return hr;

   //Checking amplitude range
    valMin = HV_AMPLITUDE_MIN_WX218XB;
    valMax = HV_AMPLITUDE_MAX_WX218XB; 

   if (HVAmplitude < valMin || HVAmplitude > valMax)
   {
      hr = err.InvalidValue(_T("val"), HVAmplitude);
      return hr;
   }

   strCommandSend.Format(_T(":SOUR:VOLT:LEV:AMPL:HV:ALL %Lf"), HVAmplitude); 
   hr = io.Printf(strCommandSend);

   return hr;
}

//=====================================================================================
//                            - ConfigureAmplitudeAllCh -
HRESULT WX218x::IWX218xStandardWaveform_ConfigureAmplitudeAllCh(double Amplitude)
{
	HRESULT hr = S_OK;
   double ampl_min, ampl_max;
   CString strCommandSend;

   if (GetSimulate()) //temporary close for offline
    return hr;

   //Checking amplitude range
    ampl_min = AMPLITUDE_MIN;
    ampl_max = AMPLITUDE_MAX; 

   if (Amplitude < ampl_min || Amplitude > ampl_max)
   {
      hr = err.InvalidValue(_T("val"), Amplitude);
      return hr;
   }

   strCommandSend.Format(_T(":SOUR:VOLT:LEV:AMPL:DC:ALL %Lf"), Amplitude); 
   hr = io.Printf(strCommandSend);

   return hr;

}

//========================================================================================
//                              - ConfigureSincNCycles -
HRESULT WX218x::IWX218xStandardWaveform_ConfigureSincNCycles(BSTR Channel, long Cycles)
{
	HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_SincNCycle(Channel, Cycles);

	return hr;
}

//=======================================================================================
//                                - ConfigurePower -
HRESULT WX218x::IWX218xStandardWaveform_ConfigurePower(BSTR Channel, double Power)
{
	HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_Power(Channel, Power);

	return hr;
}

//=========================================================================================
//                              - ConfigureHvAmplitude -
HRESULT WX218x::IWX218xStandardWaveform_ConfigureHvAmplitude(BSTR Channel, double HvAmplitude)
{
	HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_HvAmplitude(Channel, HvAmplitude);

	return hr;
}

//===========================================================================================
//                                - ConfigureGauss -
HRESULT WX218x::IWX218xStandardWaveform_ConfigureGauss(BSTR Channel, long Gauss)
{
	HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_GaussExponent(Channel, Gauss);

	return hr;
}

//=============================================================================================
//                                  - ConfigureExponenent -
HRESULT WX218x::IWX218xStandardWaveform_ConfigureExponenent(BSTR Channel, long Exponent)
{
	HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_ExpExponent(Channel, Exponent);

	return hr;
}

//================================================================================================
//                        - ConfigureDutyCycle -
HRESULT WX218x::IWX218xStandardWaveform_ConfigureDutyCycle(BSTR Channel, double DutyCycle)
{
	HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_DutyCycleHigh(Channel, DutyCycle);

	return hr;
}

//====================================================================================================
//                                  - ConfigureDCLevel -
HRESULT WX218x::IWX218xStandardWaveform_ConfigureDCLevel(BSTR Channel, double DcLevel)
{
	HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_DcLevel(Channel, DcLevel);

	return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_Configure(BSTR Channel, WX218xWaveformEnum Waveform, double Amplitude, double DCOffset, double Frequency, double StartPhase)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strCommand, strWaveform, strEnum;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   // Checking parameters ranges
   //Amplitude
   hr = WX218x::IWX218xStandardWaveform_Amplitude_RangeCheck(_T("Amplitude"), Channel, Amplitude);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Amplitude"), Amplitude);
      return hr;
   }

   //DCOffset
   hr = WX218x::DCOffset_RangeCheck(_T("DCOffset"), Channel, DCOffset);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("DCOffset"), DCOffset);
      return hr;
   }

   //Frequency
   hr = WX218x::Frequency_RangeCheck(_T("Frequency"), Channel, Frequency);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Frequency"), Frequency);
      return hr;
   }

   //StartPhase
   hr = WX218x::StartPhase_RangeCheck(_T("StartPhase"), Channel, StartPhase);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("StartPhase"), StartPhase);
      return hr;
   }

   if (GetSimulate())
   {
      hr = _IWX218xStandardWaveform::put_Waveform(Channel, Waveform);
      hr = _IWX218xStandardWaveform::put_Amplitude(Channel, Amplitude);
      hr = _IWX218xStandardWaveform::put_DCOffset(Channel, DCOffset);
      hr = _IWX218xStandardWaveform::put_Frequency(Channel, Frequency);
      hr = _IWX218xStandardWaveform::put_StartPhase(Channel, StartPhase);
      return hr;
   }

   switch (Waveform)
   {
   case WX218xWaveformSine:
      strWaveform = _T(":FUNC:SHAP SIN");
      break;

   case WX218xWaveformSquare:
      strWaveform = _T(":FUNC:SHAP SQU");
      break;

   case WX218xWaveformTriangle:
      strWaveform = _T(":FUNC:SHAP TRI");
      break;

   case WX218xWaveformDC:
      strWaveform = _T(":FUNC:SHAP DC");
      break;

   case WX218xWaveformRampUp:
      strWaveform = _T(":FUNC:SHAP RAMP");
      break;

   case WX218xWaveformRampDown:
      strWaveform = _T(":FUNC:SHAP RAMP");
      break;

   case WX218xWaveformSinc:
      strWaveform = _T(":FUNC:SHAP SINC");
      break;

   case WX218xWaveformGaussian:
      strWaveform = _T(":FUNC:SHAP GAUS");
      break;

   case WX218xWaveformExponential:
      strWaveform = _T(":FUNC:SHAP EXP");
      break;

   case WX218xWaveformNoise:
      strWaveform = _T(":FUNC:SHAP NOIS");
      break;

   default:
      EnumToName(Waveform, strEnum);
      hr = err.ValueNotSupported(strEnum, strEnum);
      return hr;
   }

      if (Waveform == WX218xWaveformSine)
       strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T("%s;:VOLT:LEV:AMPL %Lf;:VOLT:LEV:OFFS %Lf;:FREQ %Lf;:SIN:PHAS %Lf")), strWaveform,Amplitude,DCOffset,Frequency,StartPhase);

      else if (Waveform == WX218xWaveformTriangle)
       strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T("%s;:VOLT:LEV:AMPL %Lf;:VOLT:LEV:OFFS %Lf;:FREQ %Lf;:TRI:PHAS %Lf")), strWaveform,Amplitude,DCOffset,Frequency,StartPhase);

      else
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T("%s;:VOLT:LEV:AMPL %Lf;:VOLT:LEV:OFFS %Lf;:FREQ %Lf")), strWaveform,Amplitude,DCOffset,Frequency);

   hr = io.Printf(strCommandSend);

   return hr;
}

/* SincNCycle */
HRESULT WX218x::SincNCycle_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
   HRESULT hr = S_OK;

   if (val < SINC_NCYCLE_MIN || val > SINC_NCYCLE_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_get_SincNCycle(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SINC:NCYC?")); 
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_SincNCycle(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SINC:NCYC %d")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Amplitude */
HRESULT WX218x::IWX218xStandardWaveform_Amplitude_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double ampl_min, ampl_max;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      ampl_min = AMPLITUDE_MIN;
      ampl_max = AMPLITUDE_MAX; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      ampl_min = AMPLITUDE_MIN;
      ampl_max = AMPLITUDE_MAX; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      ampl_min = AMPLITUDE_MIN;
      ampl_max = AMPLITUDE_MAX; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      ampl_min = AMPLITUDE_MIN;
      ampl_max = AMPLITUDE_MAX; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      ampl_min = AMPLITUDE_MIN_WS835X;
      ampl_max = AMPLITUDE_MAX_WS835X; 
     break;

     default:
      ampl_min = AMPLITUDE_MIN;
      ampl_max = AMPLITUDE_MAX; 
    }

   if (val < ampl_min || val > ampl_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_get_Amplitude(BSTR Channel, double* val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
      strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":OUTP:COUP DC;:VOLT:LEV:AMPL?")); 
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":VOLT:LEV:AMPL?"));

   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_Amplitude(BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":OUTP:COUP DC;:VOLT:LEV:AMPL %Lf")), val); 
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":VOLT:LEV:AMPL %Lf")), val); 

   hr = io.Printf(strCommandSend);

   return hr;
}

/* RampDelay */
HRESULT WX218x::RampDelay_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;

   if (val < RAMP_MIN || val > RAMP_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_get_RampDelay(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":RAMP:DEL?")); 
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_RampDelay(BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   double RampRiseTime, RampFallTime;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   //Getting RampRiseTime
   hr = _IWX218xStandardWaveform::get_RampRiseTime(Channel, &RampRiseTime);
   if(!SUCCEEDED(hr))
      return hr;

   //Getting RampFallTime
   hr = _IWX218xStandardWaveform::get_RampFallTime(Channel, &RampFallTime);
   if(!SUCCEEDED(hr))
      return hr;

   if ((val + RampRiseTime + RampFallTime) > 100.0 )
   {
      hr = ReportError(IDS_E_WX218X_INVALID_CONFIGURATION, _T("Ramp"), _T("put_RampDelay"));
      return hr;
   }

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":RAMP:DEL %Lf")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* RampRiseTime */
HRESULT WX218x::IWX218xStandardWaveform_get_RampRiseTime(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":RAMP:TRAN:LEAD?")); 
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_RampRiseTime(BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   double RampDelay, RampFallTime;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   //Getting RampFallTime
   hr = _IWX218xStandardWaveform::get_RampFallTime(Channel, &RampFallTime);
   if(!SUCCEEDED(hr))
      return hr;

   //Getting RampDelay
   hr = _IWX218xStandardWaveform::get_RampDelay(Channel, &RampDelay);
   if(!SUCCEEDED(hr))
      return hr;

   if ((val + RampFallTime + RampDelay) > 100.0 )
   {
      hr = ReportError(IDS_E_WX218X_INVALID_CONFIGURATION, _T("Ramp"), _T("put_RampRiseTime"));
      return hr;
   }

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":RAMP:TRAN:LEAD %Lf")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* RampFallTime */
HRESULT WX218x::IWX218xStandardWaveform_get_RampFallTime(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":RAMP:TRAN:TRA?")); 
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_RampFallTime(BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   double RampDelay, RampRiseTime;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   //Getting RampRiseTime
   hr = _IWX218xStandardWaveform::get_RampRiseTime(Channel, &RampRiseTime);
   if(!SUCCEEDED(hr))
      return hr;

   //Getting RampDelay
   hr = _IWX218xStandardWaveform::get_RampDelay(Channel, &RampDelay);
   if(!SUCCEEDED(hr))
      return hr;

   if ((val + RampRiseTime + RampDelay) > 100.0 )
   {
      hr = ReportError(IDS_E_WX218X_INVALID_CONFIGURATION, _T("Ramp"), _T("put_RampFallTime"));
      return hr;
   }

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":RAMP:TRAN:TRA %Lf")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* DC Offset */
HRESULT WX218x::DCOffset_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
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
       valMin = OFFSET_MIN_WX2184;
       valMax = OFFSET_MAX_WX2184;
      break;

    default:
       valMin = OFFSET_MIN;
       valMax = OFFSET_MAX;
       break;


   }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}
HRESULT WX218x::IWX218xStandardWaveform_get_DCOffset(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":VOLT:LEV:OFFS?")); 
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_DCOffset(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":VOLT:LEV:OFFS %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* DutyCycleHigh */
HRESULT WX218x::DutyCycleHigh_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;

   if (val < RAMP_MIN || val > RAMP_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}
HRESULT WX218x::IWX218xStandardWaveform_get_DutyCycleHigh(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SQU:DCYC?")); 
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_DutyCycleHigh(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SQU:DCYC %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Waveform */


/* Start Phase */
HRESULT WX218x::StartPhase_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;

   if (val < PHASE_MIN || val > PHASE_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_get_StartPhase(BSTR Channel, double* val)
{
   HRESULT hr = S_OK;
   WX218xWaveformEnum waveform;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;

   //Getting current waveform
  hr = _IWX218xStandardWaveform::get_Waveform(Channel, &waveform);
   if(!SUCCEEDED(hr))
      return hr; 


   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

      if (waveform == WX218xWaveformSine)
       strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SIN:PHAS?"));

      else if (waveform == WX218xWaveformTriangle)
       strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRI:PHAS?"));

      else
         strCommandSend.Empty();

   if (!strCommandSend.IsEmpty())
      hr = io.Queryf(strCommandSend, _T("%Lf"), val);
   else
      hr = ReportError(IDS_E_WX218X_START_PHASE);  


   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_StartPhase(BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   WX218xWaveformEnum waveform;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;

   //Getting current waveform
   hr = _IWX218xStandardWaveform::get_Waveform(Channel, &waveform);
   if(!SUCCEEDED(hr))
      return hr;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (waveform == WX218xWaveformSine)
       strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SIN:PHAS %Lf")), val);

      else if (waveform == WX218xWaveformTriangle)
       strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRI:PHAS %Lf")), val);

      else
         strCommandSend.Empty();

   if (!strCommandSend.IsEmpty())
      hr = io.Printf(strCommandSend);
   else
      hr = ReportError(IDS_E_WX218X_START_PHASE);  


   return hr;
}

/* Frequency */
HRESULT WX218x::Frequency_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   valMin = FREQUENCY_MIN; 

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      valMax = FREQUENCY_MAX; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
     case MNM_WX2184:
	 case MNM_WX2184C:
      valMax = FREQUENCY_MAX_WX218XB; 
     break;

     case MNM_WX1284:
	 case MNM_WX1284C:
      valMax = FREQUENCY_MAX_WX1284; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
      valMax = FREQUENCY_MAX_WX218XC; 
     break;

     case MNM_WX1281C:
     case MNM_WX1282C:
      valMax = FREQUENCY_MAX_WX128XC; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      valMax = FREQUENCY_MAX_WX128XB; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMax = FREQUENCY_MAX_WS835X; 
     break;

     default:
      valMax = FREQUENCY_MAX; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_get_Frequency(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FREQ?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_Frequency(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":FREQ %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}
/* Gauss Exponent */
HRESULT WX218x::GaussExponent_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
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
      valMin = GAUS_EXP_MIN_WX2184;
      valMax = GAUS_EXP_MAX_WX2184; 
     break;

     default:
      valMin = GAUS_EXP_MIN;
      valMax = GAUS_EXP_MAX; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_get_GaussExponent(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":GAUS:EXP?"));
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_GaussExponent(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":GAUS:EXP %d")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}
/* Exponent Exponent */
HRESULT WX218x::ExpExponent_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
   HRESULT hr = S_OK;

   if (val < EXP_EXP_MIN || val > EXP_EXP_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_get_ExpExponent(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":EXP:EXP?"));
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_ExpExponent(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":EXP:EXP %d")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* DC Level */
HRESULT WX218x::DcLevel_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   CString strChan = COLE2T(Channel);
   double valMin, valMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      valMin = DC_LEVEL_MIN_WX2184;
      valMax = DC_LEVEL_MAX_WX2184; 
     break;

     default:
      valMin = DC_LEVEL_MIN;
      valMax = DC_LEVEL_MAX; 
    }

   if (val < valMin || val > valMax) 
    hr = err.InvalidValue(_T("val"), val);
   
   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_get_DcLevel(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":DC?"));
   hr = io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_DcLevel(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":DC %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Power */
HRESULT WX218x::IWX218xStandardWaveform_Power_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double pow_min, pow_max;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      pow_min = POWER_MIN;
      pow_max = POWER_MAX;
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      pow_min = POWER_MIN_WX218XB;
      pow_max = POWER_MAX_WX218XB;
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      pow_min = POWER_MIN_WX218XB;
      pow_max = POWER_MAX_WX218XB;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      pow_min = POWER_MIN_WX128XB;
      pow_max = POWER_MAX_WX128XB;
     break;

     default:
      pow_min = POWER_MIN;
      pow_max = POWER_MAX;
    }

   if (val < pow_min || val > pow_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_get_Power(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":POW?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xStandardWaveform_put_Power(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":POW %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* DacAmplitude */
HRESULT WX218x::IWX218xStandardWaveform_DacAmplitude_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;

   if (val < DAC_AMPLITUDE_MIN || val > DAC_AMPLITUDE_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}


/* SetDCOffsetMax */
HRESULT WX218x::IWX218xStandardWaveform_SetDCOffsetMax(BSTR Channel)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;
   double valMax;

   modelNumber = FuncReturnModelNumber();

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
      valMax = OFFSET_MAX_WX2184;
   else
      valMax = OFFSET_MAX;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (GetSimulate())
   {
      hr = _IWX218xStandardWaveform::put_DCOffset(Channel, valMax);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":VOLT:LEV:OFFS MAX"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* SetDCOffsetMin */
HRESULT WX218x::IWX218xStandardWaveform_SetDCOffsetMin(BSTR Channel)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;
   double valMin;

   modelNumber = FuncReturnModelNumber();
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
      valMin = OFFSET_MIN_WX2184;
   else
      valMin = OFFSET_MIN;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (GetSimulate())
   {
      hr = _IWX218xStandardWaveform::put_DCOffset(Channel, valMin);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":VOLT:LEV:OFFS MIN"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* SetAmplitudeMax */
HRESULT WX218x::IWX218xStandardWaveform_SetAmplitudeMax(BSTR Channel)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   double ampl_max;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      ampl_max = AMPLITUDE_MAX; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      ampl_max = AMPLITUDE_MAX; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      ampl_max = AMPLITUDE_MAX; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      ampl_max = AMPLITUDE_MAX; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      ampl_max = AMPLITUDE_MAX_WS835X; 
     break;

     default:
      ampl_max = AMPLITUDE_MAX; 
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (GetSimulate())
   {
      hr = _IWX218xStandardWaveform::put_Amplitude(Channel, ampl_max);
      return hr;
   }

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
      strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":OUTP:COUP DC;:VOLT:LEV:AMPL MAX"));
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":VOLT:LEV:AMPL MAX"));

   hr = io.Printf(strCommandSend);

   return hr;
}

/* SetAmplitudeMin */
HRESULT WX218x::IWX218xStandardWaveform_SetAmplitudeMin(BSTR Channel)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (GetSimulate())
   {
      hr = _IWX218xStandardWaveform::put_Amplitude(Channel, AMPLITUDE_MIN);
      return hr;
   }

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
      strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":OUTP:COUP DC;:VOLT:LEV:AMPL MIN"));
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":VOLT:LEV:AMPL MIN"));

   hr = io.Printf(strCommandSend);

   return hr;
}

/* SetPowerMax */
HRESULT WX218x::IWX218xStandardWaveform_SetPowerMax(BSTR Channel)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   double pow_max;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      pow_max = POWER_MAX;
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      pow_max = POWER_MAX_WX218XB;
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      pow_max = POWER_MAX_WX218XB;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      pow_max = POWER_MAX_WX128XB;
     break;

     default:
      pow_max = POWER_MAX;
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (GetSimulate())
   {
      hr = _IWX218xStandardWaveform::put_Power(Channel, pow_max);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":POW MAX"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* SetPowerMin */
HRESULT WX218x::IWX218xStandardWaveform_SetPowerMin(BSTR Channel)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   double pow_min;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      pow_min = POWER_MIN;
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      pow_min = POWER_MIN_WX218XB;
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      pow_min = POWER_MIN_WX218XB;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      pow_min = POWER_MIN_WX128XB;
     break;

     default:
      pow_min = POWER_MIN;
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (GetSimulate())
   {
      hr = _IWX218xStandardWaveform::put_Power(Channel, pow_min);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":POW MIN"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* SetFrequencyMax */
HRESULT WX218x::IWX218xStandardWaveform_SetFrequencyMax(BSTR Channel)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   double valMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      valMax = FREQUENCY_MAX; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      valMax = FREQUENCY_MAX_WX218XB; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMax = FREQUENCY_MAX_WX218XB; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      valMax = FREQUENCY_MAX_WX128XB; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMax = FREQUENCY_MAX_WS835X; 
     break;

     default:
      valMax = FREQUENCY_MAX; 
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (GetSimulate())
   {
      hr = _IWX218xStandardWaveform::put_Frequency(Channel, valMax);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FREQ MAX"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* SetFrequencyMin */
HRESULT WX218x::IWX218xStandardWaveform_SetFrequencyMin(BSTR Channel)
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
      hr = _IWX218xStandardWaveform::put_Frequency(Channel, FREQUENCY_MIN);
      return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FREQ MIN"));
   hr = io.Printf(strCommandSend);

   return hr;
}


/* ConfigureRampWaveform */ 
HRESULT WX218x::IWX218xStandardWaveform_ConfigureRampWaveform(BSTR Channel, double Delay, double RiseTime, double FallTime)
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

   // Checking parameters range
   hr = WX218x_double_range(_T("Delay"), RAMP_MIN, RAMP_MAX, Delay);
   if(!SUCCEEDED(hr))
      return hr;

   hr = WX218x_double_range(_T("RiseTime"), RAMP_MIN, RAMP_MAX, RiseTime);
   if(!SUCCEEDED(hr))
      return hr;

   hr = WX218x_double_range(_T("FallTime"), RAMP_MIN, RAMP_MAX, FallTime);
   if(!SUCCEEDED(hr))
      return hr;

   if ((Delay + RiseTime + FallTime) > 100.0 )
   {
      hr = ReportError(IDS_E_WX218X_INVALID_CONFIGURATION, _T("Ramp"), _T("ConfigureRampWaveform"));
      return hr;
   }

   if (GetSimulate())
   {
      hr = _IWX218xStandardWaveform::put_RampDelay(Channel, Delay);
      hr = _IWX218xStandardWaveform::put_RampRiseTime(Channel, RiseTime);
      hr = _IWX218xStandardWaveform::put_RampFallTime(Channel, FallTime);
      return hr; 
   }

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":RAMP:DEL %Lf;:RAMP:TRAN %Lf;:RAMP:TRAN:TRA %Lf")), Delay, RiseTime, FallTime);
   hr = io.Printf(strCommandSend);

   return hr;
}





