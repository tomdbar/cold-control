/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* SampleRate */
HRESULT WX218x::IWX218xArbitrary_SampleRate_RangeCheck(LPCTSTR pszPropertyName, double val)
{
   HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   valMin = SAMPLE_RATE_MIN; 

   //Getting modelNumber
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      valMax = SAMPLE_RATE_MAX; 
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      valMax = SAMPLE_RATE_MAX_WX218XB; 
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
      valMax = SAMPLE_RATE_MAX_WX218XC; 
     break;

     case MNM_WX1281C:
     case MNM_WX1282C:
      valMax = SAMPLE_RATE_MAX_WX128XC; 
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      valMax = SAMPLE_RATE_MAX_WX128XB; 
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMax = SAMPLE_RATE_MAX_WS835X; 
     break;

     case MNM_WX2184:
	 case MNM_WX2184C:
      valMin = SAMPLE_RATE_MIN_WX2184; 
      valMax = SAMPLE_RATE_MAX_WX2184; 
     break;

     case MNM_WX1284:
	 case MNM_WX1284C:
      valMin = SAMPLE_RATE_MIN_WX1284; 
      valMax = SAMPLE_RATE_MAX_WX1284; 
     break;

     default:
       valMax = SAMPLE_RATE_MAX; 
    }

     if (val < valMin || val > valMax)
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrary_get_SampleRate(double* val)
{
   HRESULT hr = S_OK;

   hr = io.Queryf(_T(":FREQ:RAST?"), _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrary_put_SampleRate(double val)
{
   HRESULT hr = S_OK;

   hr = io.Printf(_T(":FREQ:RAST %Lf"),val);

   return hr;
}

/* Sample Rate Source */
HRESULT WX218x::IWX218xArbitrary_get_SampleRateSource(BSTR Channel, WX218xSampleRateSourceEnum* val)
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

    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FREQ:RAST:SOUR?")); 
    hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("INT")))
      *val = WX218xSampleRateSourceInternal;

   else if (!strResponse.CompareNoCase(_T("EXT")))
      *val = WX218xSampleRateSourceExternal;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xArbitrary_put_SampleRateSource(BSTR Channel, WX218xSampleRateSourceEnum val)
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
   case WX218xSampleRateSourceInternal:
      strCommand = _T(":FREQ:RAST:SOUR INT");
      break;

   case WX218xSampleRateSourceExternal:
      strCommand = _T(":FREQ:RAST:SOUR EXT");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum, strEnum);
      return hr;
   }

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T("%s")), strCommand);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* ClockDivider */
HRESULT WX218x::IWX218xArbitrary_ClockDivider_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
   HRESULT hr = S_OK;

   if (val < CLOCK_DIVIDER_MIN || val > CLOCK_DIVIDER_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrary_get_ClockDivider(BSTR Channel, long* val)
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

    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FREQ:RAST:DIV?")); 
    hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrary_put_ClockDivider(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":FREQ:RAST:DIV %d")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Gain */
HRESULT WX218x::IWX218xArbitrary_get_Gain(BSTR Channel, double* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::get_Amplitude(Channel, val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrary_put_Gain(BSTR Channel, double val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_Amplitude(Channel, val);

   return hr;
}

/* Offset */
HRESULT WX218x::IWX218xArbitrary_get_Offset(BSTR Channel, double* val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::get_DCOffset(Channel, val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrary_put_Offset(BSTR Channel, double val)
{
   HRESULT hr = S_OK;

   hr = _IWX218xStandardWaveform::put_DCOffset(Channel, val);

   return hr;
}

/* get_Waveform */
HRESULT WX218x::IWX218xArbitrary_get_Waveform(IWX218xArbitraryWaveform** val)
{
   HRESULT hr = S_OK;

   hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

   return hr;
}

/* get_Sequence */
HRESULT WX218x::IWX218xArbitrary_get_Sequence(IWX218xArbitrarySequence** val)
{
   HRESULT hr = S_OK;

   hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

   return hr;
}

//================================================================================================
//                            - Freq Rast Divider -
HRESULT WX218x::IWX218xArbitrary_get_FreqRastDivider(BSTR Channel, WX218xFreqDividerEnum* val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;
   int valResp;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SOUR:FREQ:RAST:DIV?")); 
   hr = io.Queryf(strCommandSend, _T("%d"), &valResp);

   if (valResp == 1)
      *val = WX218xFreqDividerDiv1;

   else if (valResp == 2)
      *val = WX218xFreqDividerDiv2;

   else if (valResp == 4)
      *val = WX218xFreqDividerDiv4;

   else if (valResp == 8)
      *val = WX218xFreqDividerDiv8;

   else if (valResp == 16)
      *val = WX218xFreqDividerDiv16;

   else
   {
      strResponse.Format(_T("%d"), valResp);
      hr = err.UnexpectedResponse(strResponse);
   }

   return hr;
}

HRESULT WX218x::IWX218xArbitrary_put_FreqRastDivider(BSTR Channel, WX218xFreqDividerEnum val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strEnum;
   int valSend;

   switch (val)
   {
   case WX218xFreqDividerDiv1:
      valSend = 1;
      break;

   case WX218xFreqDividerDiv2:
      valSend = 2;
      break;

   case WX218xFreqDividerDiv4:
      valSend = 4;
      break;

   case WX218xFreqDividerDiv8:
      valSend = 1;
      break;

   case WX218xFreqDividerDiv16:
      valSend = 16;
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:FREQ:RAST:DIV %d")), valSend); 
   hr = io.Printf(strCommandSend);

   return hr;
}

//========================================================================================================
//                              - ConfigureArbTiming -
HRESULT WX218x::IWX218xArbitrary_ConfigureArbTiming(BSTR Channel, WX218xArbitraryTimingEnum Timing)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::put_Timing(Channel, Timing); 

	return hr;
}

//=========================================================================================================
//                                - ConfigureArbSource -
HRESULT WX218x::IWX218xArbitrary_ConfigureArbSource(BSTR Channel, WX218xArbitrarySourceEnum Source)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::put_Source(Channel, Source);

	return hr;
}

//================================================================================================
//                              - ConfigureSampleRateSource -
HRESULT WX218x::IWX218xArbitrary_ConfigureSampleRateSource(BSTR Channel, WX218xSampleRateSourceEnum SampleRateSource)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::put_SampleRateSource(Channel, SampleRateSource);

	return hr;
}


//=================================================================================================
//                             - ConfigureClockDivider -
HRESULT WX218x::IWX218xArbitrary_ConfigureClockDivider(BSTR Channel, long ClockDivider)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::put_ClockDivider(Channel, ClockDivider);

	return hr;
}

/* Source */
HRESULT WX218x::IWX218xArbitrary_get_Source(BSTR Channel, WX218xArbitrarySourceEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRAC:SEL:SOUR?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("BUS")))
      *val = WX218xArbitrarySourceBus;

   else if (!strResponse.CompareNoCase(_T("EXT")))
      *val = WX218xArbitrarySourceExternal;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xArbitrary_put_Source(BSTR Channel, WX218xArbitrarySourceEnum val)
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
   case WX218xArbitrarySourceBus:
      strCommand = _T(":TRAC:SEL:SOUR BUS");
      break;

   case WX218xArbitrarySourceExternal:
      strCommand = _T(":TRAC:SEL:SOUR EXT");
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

/* Timing */
HRESULT WX218x::IWX218xArbitrary_get_Timing(BSTR Channel, WX218xArbitraryTimingEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":TRAC:SEL:TIM?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("COH")))
      *val = WX218xArbitraryTimingCoherent;

   else if (!strResponse.CompareNoCase(_T("IMM")))
      *val = WX218xArbitraryTimingImmediate;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xArbitrary_put_Timing(BSTR Channel, WX218xArbitraryTimingEnum val)
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
   case WX218xArbitraryTimingCoherent:
      strCommand = _T(":TRAC:SEL:TIM COH");
      break;

   case WX218xArbitraryTimingImmediate:
      strCommand = _T(":TRAC:SEL:TIM IMM");
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

/* SetSampleRateMax */
HRESULT WX218x::IWX218xArbitrary_SetSampleRateMax()
{
   HRESULT hr = S_OK;
   CString strCommandSend;
   double valPut;
   int modelNumber; 

   if (GetSimulate())
   {
     modelNumber = FuncReturnModelNumber();
     switch (modelNumber)
     {
       case MNM_WX2181:
       case MNM_WX2182:
        valPut = SAMPLE_RATE_MAX;
       break;

       case MNM_WX2181B:
       case MNM_WX2182B:
       case MNM_WX2181BD:
       case MNM_WX2182BD:
        valPut = SAMPLE_RATE_MAX_WX218XB;
       break;

       case MNM_WX2182C:
       case MNM_WX2181C:
       case MNM_WX1281C:
       case MNM_WX1282C:
        valPut = SAMPLE_RATE_MAX_WX218XB;
       break;

       case MNM_WX1281B:
       case MNM_WX1282B:
       case MNM_WX1281BD:
       case MNM_WX1282BD:
        valPut = SAMPLE_RATE_MAX_WX128XB;
       break;

       case MNM_WS8351:
       case MNM_WS8352:
        valPut = SAMPLE_RATE_MAX_WS835X;
       break;

       case MNM_WX2184:
       case MNM_WX1284:
	   case MNM_WX2184C:
       case MNM_WX1284C:
        valPut = SAMPLE_RATE_MAX_WX2184;
       break;

      default:
        valPut = SAMPLE_RATE_MAX;
    }

      hr = _IWX218xArbitrary::put_SampleRate(valPut);
      return hr;
   }

   strCommandSend = (_T(":FREQ:RAST MAX"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* SetSampleRateMin */
HRESULT WX218x::IWX218xArbitrary_SetSampleRateMin()
{
   HRESULT hr = S_OK;
   CString strCommandSend;

   if (GetSimulate())
   {
      hr = _IWX218xArbitrary::put_SampleRate(10.0E6);
      return hr;
   }

   strCommandSend = (_T(":FREQ:RAST MIN"));
   hr = io.Printf(strCommandSend);

   return hr;
}

/* ClearMemory */
HRESULT WX218x::IWX218xArbitrary_ClearMemory()
{
   HRESULT hr = S_OK;
   BSTR bstrChan;
   CString strActiveChannel;
   int indexChan;

   if (GetSimulate()) //temporary close for offline
      return hr;

   hr = io.Printf(_T(":TRAC:DEL:ALL"));
   hr = io.Printf(_T(":SEQ:DEL:ALL"));

   if(SUCCEEDED(hr))
   {
      //Getting Active Channel
      hr = _IWX218x::get_ActiveChannel(&bstrChan);
      if (!SUCCEEDED(hr))
         return hr;

      strActiveChannel = COLE2T(bstrChan);
      ::SysFreeString(bstrChan);

      //Getting index of Active Channel
      indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

      //Cleaning waveform map for selected channel
      m_waveformManager.CleanWaveformMap(indexChan);

      //Cleaning sequence map for selected channel
      m_sequenceManager.CleanSequenceMap(indexChan);

      //Updating size available for selected channel
      m_SizeAvailable[indexChan - 1] = m_MemorySize;

      //NEW 28.10.2012
       m_SizeAvailableDigital[indexChan - 1] = m_MemorySize/2;

       m_waveformManager.ClearArbSegments(indexChan-1, -1); //cleaning all segments in array for Arbitrary memory
       m_digitalManager.ClearArbSegments(indexChan-1, -1);  //cleaning all segments in array for Digital memory

   }

   return hr;
}

//=====================================================================================================================================================
//                                                    - ConfigureFreqRastDivider -
HRESULT WX218x::IWX218xArbitrary_ConfigureFreqRastDivider(BSTR Channel, WX218xFreqDividerEnum Divider)
{
  HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::put_FreqRastDivider(Channel, Divider);

   return hr;
}

//======================================================================================================================================================
//                                              - ConfigureArbGain -
HRESULT WX218x::IWX218xArbitrary_ConfigureArbGain(BSTR Channel, double Gain)
{
   HRESULT hr = S_OK;

   hr = _IWX218xArbitrary::put_Gain(Channel, Gain);

   return hr;
}

//======================================================================================================================================================
//                                            - ConfigureArbOffset -
HRESULT WX218x::IWX218xArbitrary_ConfigureArbOffset(BSTR Channel, double Offset)
{
	HRESULT hr = S_OK;

	 hr = _IWX218xArbitrary::put_Offset(Channel, Offset);

	return hr;
}

//======================================================================================================================================================
//                                      - ConfigureArbSampleRate -
HRESULT WX218x::IWX218xArbitrary_ConfigureArbSampleRate(double SampleRate)
{
	HRESULT hr = S_OK;

	 hr = _IWX218xArbitrary::put_SampleRate(SampleRate);

	return hr;
}


