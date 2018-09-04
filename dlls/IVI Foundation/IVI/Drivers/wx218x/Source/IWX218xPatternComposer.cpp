/******************************************************************************
*                                                                         
*               Copyright 2010-2012 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

//======================================== Transition Type =========================================================
HRESULT WX218x::IWX218xPatternComposer_get_TransitionType(BSTR Channel, WX218xPatternComposerTransitionTypeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:COMP:TRAN:TYPE?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("FAST")))
      *val = WX218xPatternComposerTransitionTypeFast;

   else if (!strResponse.CompareNoCase(_T("LIN")))
      *val = WX218xPatternComposerTransitionTypeLinear;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xPatternComposer_put_TransitionType(BSTR Channel, WX218xPatternComposerTransitionTypeEnum val)
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
   case WX218xPatternComposerTransitionTypeFast:
      strCommand = _T(":PATT:COMP:TRAN:TYPE FAST");
      break;

   case WX218xPatternComposerTransitionTypeLinear:
      strCommand = _T(":PATT:COMP:TRAN:TYPE LIN");
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

//=====================================Fast Start ===========================================================
HRESULT WX218x::IWX218xPatternComposer_FastStart_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
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
      val_min = PATTERN_COMPOSER_FAST_START_MIN_WX2184;
      val_max = PATTERN_COMPOSER_FAST_START_MAX_WX2184;
      break;

    default:
      val_min = PATTERN_COMPOSER_FAST_START_MIN;
      val_max = PATTERN_COMPOSER_FAST_START_MAX;
      break;
   }
   
   

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPatternComposer_get_LinearStart(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:COMP:LIN:STAR?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xPatternComposer_put_LinearStart(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:COMP:LIN:STAR %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

//==================================== Resolution======================================================
HRESULT WX218x::IWX218xPatternComposer_Resolution_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
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
      valMin = PATTERN_COMPOSER_RESOLUTION_MIN_WX2184;
      valMax = PATTERN_COMPOSER_RESOLUTION_MAX_WX2184;
     break;

     default:
      valMin = PATTERN_COMPOSER_RESOLUTION_MIN;
      valMax = PATTERN_COMPOSER_RESOLUTION_MAX;
    }
   
   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPatternComposer_get_Resolution(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:COMP:RES?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xPatternComposer_put_Resolution(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:COMP:RES %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

//======================================= Resolution Type====================================
HRESULT WX218x::IWX218xPatternComposer_get_ResolutionType(BSTR Channel, WX218xPatternResTypeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:COMP:RES:TYPE?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("AUTO")))
      *val = WX218xPatternResTypeAuto;

   else if (!strResponse.CompareNoCase(_T("USER")))
      *val = WX218xPatternResTypeUser;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xPatternComposer_put_ResolutionType(BSTR Channel, WX218xPatternResTypeEnum val)
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
   case WX218xPatternResTypeAuto:
      strCommand = _T(":PATT:COMP:RES:TYPE AUTO");
      break;

   case WX218xPatternResTypeUser:
      strCommand = _T(":PATT:COMP:RES:TYPE USER");
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

//======================================================================================================================
//                                - FastStart -
HRESULT WX218x::IWX218xPatternComposer_get_FastStart(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:COMP:FAST:STAR?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xPatternComposer_put_FastStart(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:COMP:FAST:STAR %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

//======================================================================================================
//                                      - ConfigurePatternCompTransType -
HRESULT WX218x::IWX218xPatternComposer_ConfigurePatternCompTransType(BSTR Channel, WX218xPatternComposerTransitionTypeEnum TransitionType)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPatternComposer::put_TransitionType(Channel, TransitionType);

	return hr;
}

//=========================================================================================================
//                                        - ConfigurePatternCompResType -
HRESULT WX218x::IWX218xPatternComposer_ConfigurePatternCompResType(BSTR Channel, WX218xPatternResTypeEnum ResType)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPatternComposer::put_ResolutionType(Channel, ResType);

	return hr;
}

//=======================================================================================================
//                                     - ConfigurePatternCompResolution -
HRESULT WX218x::IWX218xPatternComposer_ConfigurePatternCompResolution(BSTR Channel, double Resolution)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPatternComposer::put_Resolution(Channel, Resolution);

	return hr;
}

//============================================================================================================
//                                     - ConfigurePatternCompLinearStart -
HRESULT WX218x::IWX218xPatternComposer_ConfigurePatternCompLinearStart(BSTR Channel, double LinearStart)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPatternComposer::put_LinearStart(Channel, LinearStart);

	return hr;
}

//==============================================================================================================
//                                      - ConfigurePatternCompFastStart -
HRESULT WX218x::IWX218xPatternComposer_ConfigurePatternCompFastStart(BSTR Channel, double FastStart)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPatternComposer::put_FastStart(Channel, FastStart);

	return hr;
}

//=========================================Create Pattern Composer Linear Data ==========================================
HRESULT WX218x::IWX218xPatternComposer_CreatePatternComposerLinearData(BSTR Channel, SAFEARRAY** AmplLevel, SAFEARRAY** DwellTime)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeAmplLevel, sizeDwellTime;
   long lBoundAmplLevel, lBoundDwellTime, indexArray;
   long uBoundAmplLevel, uBoundDwellTime;
   SAFEARRAY* psaAmplLevel = *AmplLevel;
   SAFEARRAY* psaDwellTime = *DwellTime;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long lenPatternComposerStruct, pattComposerLengthByte, totalBytes = 0;
   double valueArrayAmplLevel;
   double valueArrayDwellTime;
   unsigned char* binData = VI_NULL;
   unsigned char* p0 = VI_NULL;  //we need this pointer at the end of the loop for know total bytes

   //Checking parameter Active channel
   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (GetSimulate()) //temporary close for offline
   {
    return hr;
   }

   sizeAmplLevel = psaAmplLevel->rgsabound->cElements;
   sizeDwellTime = psaDwellTime->rgsabound->cElements;

   if ((sizeAmplLevel< PATTERN_COMPOSER_LIN_DATA_LENGTH_MIN) || (sizeAmplLevel > PATTERN_COMPOSER_LIN_DATA_LENGTH_MAX))
   {
      hr = ReportInvalidValueError(_T("CreatePatternComposerLinearData"), _T("AmplLevel"), _T("Size of AmplLevel array"));
      return hr;
   }

   if ((sizeDwellTime< PATTERN_COMPOSER_LIN_DATA_LENGTH_MIN) || (sizeDwellTime > PATTERN_COMPOSER_LIN_DATA_LENGTH_MAX))
   {
      hr = ReportInvalidValueError(_T("CreatePatternComposerLinearData"), _T("DwellTime"), _T("Size of DwellTime array"));
      return hr;
   }

   //Make sure that size of AmplLevel is equal to DwellTime
   if ((sizeAmplLevel != sizeDwellTime))
   {
      hr = err.SizeArrayNotEqual(_T(""));
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundAmplLevel = psaAmplLevel->rgsabound->lLbound;
   lBoundDwellTime = psaDwellTime->rgsabound->lLbound;

   //Checking if lower bound of array AmplLevel  is zero
   if (lBoundAmplLevel != 0)
   {
      hr = err.LboundArrayZero(_T("AmplLevel Array"));
      return hr;
   }

   //Checking if lower bound of DwellTime Array  is zero
   if (lBoundDwellTime != 0)
   {
      hr = err.LboundArrayZero(_T("DwellTime Array"));
      return hr;
   }

   //Make sure that lBound is the same value
   if (lBoundAmplLevel != lBoundDwellTime)
   {
      hr = err.LboundArrayEqual(_T(""));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaAmplLevel, 1, &uBoundAmplLevel);
   hr = ::SafeArrayGetUBound(psaDwellTime, 1, &uBoundDwellTime);

   //Checking if upper bound of arrays is not zero
   if ((uBoundAmplLevel == 0))
   {
      hr = err.UpperBoundZero(_T("AmplLevel Array"));
      return hr;
   }

   if (uBoundDwellTime == 0)
   {
      hr = err.UpperBoundZero(_T("DwellTime Array"));
      return hr;
   }

   //Make sure that uBound is the same value
   if ((uBoundAmplLevel != uBoundDwellTime))
   {
      hr = err.UboundArrayEqual(_T(""));
      return hr;
   }

   //Accesing every element in array AmplLevel
   for (indexArray = lBoundAmplLevel; indexArray < sizeAmplLevel; indexArray++)  //Loop for AmplLevel array
   {
      hr = SafeArrayGetElement(psaAmplLevel, &indexArray, &valueArrayAmplLevel);

      //Checking AmplLevel range
      if (valueArrayAmplLevel < PATTERN_COMPOSER_AMPL_LEVEL_MIN || valueArrayAmplLevel > PATTERN_COMPOSER_AMPL_LEVEL_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), valueArrayAmplLevel);
         strFormatElement.Format(_T("(%Lf)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("AmplLevel"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for AmplLevel array

   //Accesing every element in array DwellTime
   for (indexArray = lBoundDwellTime; indexArray < sizeDwellTime; indexArray++)  //Loop for DwellTime array
   {
      hr = SafeArrayGetElement(psaDwellTime, &indexArray, &valueArrayDwellTime);
      //Checking Loop count range
      if (valueArrayDwellTime < PATTERN_COMPOSER_DWELL_TIME_MIN || valueArrayDwellTime > PATTERN_COMPOSER_DWELL_TIME_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), valueArrayDwellTime);
         strFormatElement.Format(_T("(%Lf)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("DwellTime"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for DwellTime array

   lenPatternComposerStruct = sizeof(PATTERN_COMPOSER_INF); 
   pattComposerLengthByte = lenPatternComposerStruct * sizeAmplLevel; 
   binData = new unsigned char[pattComposerLengthByte];
   memset(binData, '\0', pattComposerLengthByte);

   //We must save the start of this pointer
   p0 = binData;



   for (indexArray = lBoundAmplLevel; indexArray < sizeAmplLevel; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaAmplLevel, &indexArray, &valueArrayAmplLevel);
      hr = SafeArrayGetElement(psaDwellTime, &indexArray, &valueArrayDwellTime);

      //Putting in binData value AmplLevel
      //*p0 = (float)valueArrayAmplLevel;
      *((float*)p0) = (float)valueArrayAmplLevel;
      p0 += sizeof(float);

      //Putting in binData value DwellTime
      //*p0 = (double)valueArrayDwellTime;
      *((double*)p0) = (double)valueArrayDwellTime;
      p0 += sizeof(double);

      totalBytes = p0 - binData;

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_PATTERN_COMPOSER_LINEAR);

   if (binData)
      delete [] binData;


   return hr;
}

//=========================================== Load Pattern File ==========================================================
HRESULT WX218x::IWX218xPatternComposer_LoadPatternFile(BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	//hr = E_NOTIMPL; // TODO

	return hr;
}

//============================================= Create Pattern Composer Start Data =========================================
HRESULT WX218x::IWX218xPatternComposer_CreatePatternComposerFastData(BSTR Channel, SAFEARRAY** AmplLevel, SAFEARRAY** DwellTime)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeAmplLevel, sizeDwellTime;
   long lBoundAmplLevel, lBoundDwellTime, indexArray;
   long uBoundAmplLevel, uBoundDwellTime;
   SAFEARRAY* psaAmplLevel = *AmplLevel;
   SAFEARRAY* psaDwellTime = *DwellTime;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long lenPatternComposerStruct, pattComposerLengthByte, totalBytes = 0;
   double valueArrayAmplLevel;
   double valueArrayDwellTime;
   unsigned char* binData = VI_NULL;
   unsigned char* p0 = VI_NULL;  //we need this pointer at the end of the loop for know total bytes

   //Checking parameter Active channel
   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (GetSimulate()) //temporary close for offline
   {
    return hr;
   }

   sizeAmplLevel = psaAmplLevel->rgsabound->cElements;
   sizeDwellTime = psaDwellTime->rgsabound->cElements;

   if ((sizeAmplLevel< PATTERN_COMPOSER_START_DATA_LENGTH_MIN) || (sizeAmplLevel > PATTERN_COMPOSER_START_DATA_LENGTH_MAX))
   {
      hr = ReportInvalidValueError(_T("CreatePatternComposerFastData"), _T("AmplLevel"), _T("Size of AmplLevel array"));
      return hr;
   }

   if ((sizeDwellTime< PATTERN_COMPOSER_START_DATA_LENGTH_MIN) || (sizeDwellTime > PATTERN_COMPOSER_START_DATA_LENGTH_MAX))
   {
      hr = ReportInvalidValueError(_T("CreatePatternComposerFastData"), _T("DwellTime"), _T("Size of DwellTime array"));
      return hr;
   }

   //Make sure that size of AmplLevel is equal to DwellTime
   if ((sizeAmplLevel != sizeDwellTime))
   {
      hr = err.SizeArrayNotEqual(_T(""));
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundAmplLevel = psaAmplLevel->rgsabound->lLbound;
   lBoundDwellTime = psaDwellTime->rgsabound->lLbound;

   //Checking if lower bound of array AmplLevel  is zero
   if (lBoundAmplLevel != 0)
   {
      hr = err.LboundArrayZero(_T("AmplLevel Array"));
      return hr;
   }

   //Checking if lower bound of DwellTime Array  is zero
   if (lBoundDwellTime != 0)
   {
      hr = err.LboundArrayZero(_T("DwellTime Array"));
      return hr;
   }

   //Make sure that lBound is the same value
   if (lBoundAmplLevel != lBoundDwellTime)
   {
      hr = err.LboundArrayEqual(_T(""));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaAmplLevel, 1, &uBoundAmplLevel);
   hr = ::SafeArrayGetUBound(psaDwellTime, 1, &uBoundDwellTime);

   //Checking if upper bound of arrays is not zero
   if ((uBoundAmplLevel == 0))
   {
      hr = err.UpperBoundZero(_T("AmplLevel Array"));
      return hr;
   }

   if (uBoundDwellTime == 0)
   {
      hr = err.UpperBoundZero(_T("DwellTime Array"));
      return hr;
   }

   //Make sure that uBound is the same value
   if ((uBoundAmplLevel != uBoundDwellTime))
   {
      hr = err.UboundArrayEqual(_T(""));
      return hr;
   }

   //Accesing every element in array AmplLevel
   for (indexArray = lBoundAmplLevel; indexArray < sizeAmplLevel; indexArray++)  //Loop for AmplLevel array
   {
      hr = SafeArrayGetElement(psaAmplLevel, &indexArray, &valueArrayAmplLevel);

      //Checking AmplLevel range
      if (valueArrayAmplLevel < PATTERN_COMPOSER_AMPL_LEVEL_MIN || valueArrayAmplLevel > PATTERN_COMPOSER_AMPL_LEVEL_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), valueArrayAmplLevel);
         strFormatElement.Format(_T("(%Lf)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("AmplLevel"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for AmplLevel array

   //Accesing every element in array DwellTime
   for (indexArray = lBoundDwellTime; indexArray < sizeDwellTime; indexArray++)  //Loop for DwellTime array
   {
      hr = SafeArrayGetElement(psaDwellTime, &indexArray, &valueArrayDwellTime);
      //Checking Loop count range
      if (valueArrayDwellTime < PATTERN_COMPOSER_DWELL_TIME_MIN || valueArrayDwellTime > PATTERN_COMPOSER_DWELL_TIME_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), valueArrayDwellTime);
         strFormatElement.Format(_T("(%Lf)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("DwellTime"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for DwellTime array

   lenPatternComposerStruct = sizeof(PATTERN_COMPOSER_INF); 
   pattComposerLengthByte = lenPatternComposerStruct * sizeAmplLevel; 
   binData = new unsigned char[pattComposerLengthByte];
   memset(binData, '\0', pattComposerLengthByte);

   //We must save the start of this pointer
   p0 = binData;



   for (indexArray = lBoundAmplLevel; indexArray < sizeAmplLevel; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaAmplLevel, &indexArray, &valueArrayAmplLevel);
      hr = SafeArrayGetElement(psaDwellTime, &indexArray, &valueArrayDwellTime);

      //Putting in binData value AmplLevel
      //*p0 = (float)valueArrayAmplLevel;   2.01.2012 close by Ira, doesn't work
      *((float*)p0) = (float)valueArrayAmplLevel; 
      p0 += sizeof(float);

      //Putting in binData value DwellTime
      //*p0 = (double)valueArrayDwellTime;   //2.01.2012  close by Ira, doesn't work
      *((double*)p0) = (double)valueArrayDwellTime;
      p0 += sizeof(double);

      totalBytes = p0 - binData;

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

   hr = WX218x::LoadGeneralData(totalBytes, (unsigned char *)binData, TYPE_PATTERN_COMPOSER_FAST);

   if (binData)
      delete [] binData;


   return hr;
}


