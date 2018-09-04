/******************************************************************************
*                                                                         
*               Copyright 2010-2012 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

#pragma warning(disable : 4996)

                       /* Start Phase */
HRESULT WX218x::IWX218xPSK_StartPhase_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double valMin, valMax;
   
   valMin = PSK_START_PHASE_MIN;
   valMax = PSK_START_PHASE_MAX;

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}
HRESULT WX218x::IWX218xPSK_get_StartPhase(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PSK:PHAS:STAR?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}
HRESULT WX218x::IWX218xPSK_put_StartPhase(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PSK:PHAS:STAR %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                     /*- Shift Phase */

HRESULT WX218x::IWX218xPSK_ShiftPhase_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double valMin, valMax;
   
   valMin = PSK_SHIFT_PHASE_MIN;
   valMax = PSK_SHIFT_PHASE_MAX;

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPSK_get_ShiftPhase(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PSK:PHAS:SHIF?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xPSK_put_ShiftPhase(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PSK:PHAS:SHIF %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                     /* Rate */

HRESULT WX218x::IWX218xPSK_Rate_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double valMin, valMax;

   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = PSK_RATE_MIN;
      valMax = PSK_RATE_MAX_WX128XC;
     break;

     default:
      valMin = PSK_RATE_MIN;
      valMax = PSK_RATE_MAX;
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPSK_get_Rate(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PSK:RATE?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xPSK_put_Rate(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PSK:RATE %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                         /* Type */

HRESULT WX218x::IWX218xPSK_get_Type(BSTR Channel, WX218xPskTypeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PSK:TYPE?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("PSK")))
      *val = WX218xPskTypePSK;

   else if (!strResponse.CompareNoCase(_T("BPSK")))
      *val = WX218xPskTypeBPSK;

   else if (!strResponse.CompareNoCase(_T("QPSK")))
      *val = WX218xPskTypeQPSK;

   else if (!strResponse.CompareNoCase(_T("OQPSK")))
      *val = WX218xPskTypeOQPSK;

   else if (!strResponse.CompareNoCase(_T("DQPSK")))
      *val = WX218xPskTypeDQPSK;

   else if (!strResponse.CompareNoCase(_T("8PSK")))
      *val = WX218xPskType8PSK;

   else if (!strResponse.CompareNoCase(_T("16PSK")))
      *val = WX218xPskType16PSK;

   else if (!strResponse.CompareNoCase(_T("USER")))
      *val = WX218xPskTypeUSER;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xPSK_put_Type(BSTR Channel, WX218xPskTypeEnum val)
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
   case WX218xPskTypePSK:
      strCommand = _T(":PSK:TYPE PSK");
      break;

   case WX218xPskTypeBPSK:
      strCommand = _T(":PSK:TYPE BPSK");
      break;

   case WX218xPskTypeQPSK:
      strCommand = _T(":PSK:TYPE QPSK");
      break;

   case WX218xPskTypeOQPSK:
      strCommand = _T(":PSK:TYPE OQPSK");
      break;

   case WX218xPskTypeDQPSK:
      strCommand = _T(":PSK:TYPE DQPSK");
      break;

   case WX218xPskType8PSK:
      strCommand = _T(":PSK:TYPE 8PSK");
      break;

   case WX218xPskType16PSK:
      strCommand = _T(":PSK:TYPE 16PSK");
      break;

   case WX218xPskTypeUSER:
      strCommand = _T(":PSK:TYPE USER");
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

                   /* Marker */

HRESULT WX218x::IWX218xPSK_Marker_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
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
      valMin = PSK_MARKER_MIN;
      valMax = PSK_MARKER_MAX_WX2184;
     break;

     default:
      valMin = PSK_MARKER_MIN;
      valMax = PSK_MARKER_MAX;
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPSK_get_Marker(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PSK:MARK?"));
   io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xPSK_put_Marker(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PSK:MARK %d")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                        /* Baud */
HRESULT WX218x::IWX218xPSK_Baud_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
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
      valMin = PSK_BAUD_MIN;
      valMax = PSK_BAUD_MAX;
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = PSK_BAUD_MIN;
      valMax = PSK_BAUD_MAX;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      valMin = PSK_BAUD_MIN;
      valMax = PSK_BAUD_MAX_WX128XB;
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMin = PSK_BAUD_MIN;
      valMax = PSK_BAUD_MAX_WS835X;
     break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      valMin = PSK_BAUD_MIN_WX2184;
      valMax = PSK_BAUD_MAX_WX2184;
     break;

     default:
      valMin = PSK_BAUD_MIN;
      valMax = PSK_BAUD_MAX;
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPSK_get_Baud(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PSK:BAUD?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xPSK_put_Baud(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PSK:BAUD %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                          /* Carrier Enabled */
HRESULT WX218x::IWX218xPSK_get_CarrierEnabled(BSTR Channel, VARIANT_BOOL* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PSK:CARR:STAT?")); 
   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;


   return hr;
}

HRESULT WX218x::IWX218xPSK_put_CarrierEnabled(BSTR Channel, VARIANT_BOOL val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PSK:CARR:STAT %s")), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xPSK_get_Enabled(BSTR Channel, VARIANT_BOOL* val)
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

   if (!strResponse.CompareNoCase(_T("PSK")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xPSK_put_Enabled(BSTR Channel, VARIANT_BOOL val)
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
      strEnabled = _T("PSK");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MOD:TYPE %s")), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

//----------------------------------------------------------------------------------------
//                           - ConfigurePSKType -
HRESULT WX218x::IWX218xPSK_ConfigurePSKType(BSTR Channel, WX218xPskTypeEnum Type)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPSK::put_Type(Channel, Type);

	return hr;
}

//==========================================================================================
//                           - ConfigurePSKStartPhase -
HRESULT WX218x::IWX218xPSK_ConfigurePSKStartPhase(BSTR Channel, double StartPhase)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPSK::put_StartPhase(Channel, StartPhase);

	return hr;
}

//==========================================================================================
//                                - ConfigurePSKShiftPhase -
HRESULT WX218x::IWX218xPSK_ConfigurePSKShiftPhase(BSTR Channel, double ShiftPhase)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPSK::put_ShiftPhase(Channel, ShiftPhase);

	return hr;
}

//==============================================================================================
//                           - ConfigurePSKRate -
HRESULT WX218x::IWX218xPSK_ConfigurePSKRate(BSTR Channel, double Rate)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPSK::put_Rate(Channel, Rate);

	return hr;
}

//================================================================================================
//                              - ConfigurePSKMarker -
HRESULT WX218x::IWX218xPSK_ConfigurePSKMarker(BSTR Channel, long Marker)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPSK::put_Marker(Channel, Marker);

	return hr;
}

//================================================================================================
//                              - ConfigurePSKState -
HRESULT WX218x::IWX218xPSK_ConfigurePSKState(BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPSK::put_Enabled(Channel, State);

	return hr;
}

//====================================================================================================
//                           - ConfigurePSKCarrierState -
HRESULT WX218x::IWX218xPSK_ConfigurePSKCarrierState(BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPSK::put_CarrierEnabled(Channel, State);

	return hr;
}

//==========================================================================================================
//                          - ConfigurePSKBaud -
HRESULT WX218x::IWX218xPSK_ConfigurePSKBaud(BSTR Channel, double Baud)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPSK::put_Baud(Channel, Baud);

	return hr;
}

//===================================== CreatePSKDataAdv =========================================================
HRESULT WX218x::IWX218xPSK_CreatePSKDataAdv(BSTR Channel, SAFEARRAY** Data)
{
   //Different this function from CreatePSKData that last gets array of bytes and
   //current gets array of int.Doing this for LabView
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeArray;
   long lBoundArray, indexArray;
   long uBoundArray;
   SAFEARRAY* psaData = *Data;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long pskDataLengthByte, totalBytes = 0;
   long valueArray;
   unsigned char* binData = VI_NULL;
   unsigned char* p0 = VI_NULL;  //we need this pointer at the end of the loop for know total bytes
   long lengthMin, lengthMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      lengthMin = PSK_DATA_LENGTH_MIN;
      lengthMax = PSK_DATA_LENGTH_MAX_WX2184;
     break;

     default:
      lengthMin = PSK_DATA_LENGTH_MIN;
      lengthMax = PSK_DATA_LENGTH_MAX;
    }

   //Checking parameter Active channel
   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   if (GetSimulate()) //temporary close for offline
   {
    return hr;
   }

   //Getting size of array
   sizeArray = psaData->rgsabound->cElements;

   if ((sizeArray< lengthMin) || (sizeArray > lengthMax))
   {
      hr = ReportInvalidValueError(_T("CreatePSKData"), _T("Data"), _T("Size of Data array"));
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundArray = psaData->rgsabound->lLbound;

   //Checking if lower bound of array AmplLevel  is zero
   if (lBoundArray != 0)
   {
      hr = err.LboundArrayZero(_T("Data Array"));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaData, 1, &uBoundArray);

   //Checking if upper bound of arrays is not zero
   if ((uBoundArray == 0))
   {
      hr = err.UpperBoundZero(_T("Data Array"));
      return hr;
   }

   pskDataLengthByte = sizeof(BYTE) * sizeArray; 
   binData = new unsigned char[pskDataLengthByte];
   memset(binData, '\0', pskDataLengthByte);

   //We must save the start of this pointer
   p0 = binData;

   for (indexArray = lBoundArray; indexArray < sizeArray; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaData, &indexArray, &valueArray);

       //Checking Data range
      if (valueArray < PSK_DATA_MIN || valueArray > PSK_DATA_MAX)
      {  
           strFormatValue.Format(_T("(%d)"), valueArray);
           strFormatElement.Format(_T("(%d)"), indexArray);
           strFormatParameter.Format(_T("(%s)"), _T("Data"));
           hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);

           if (binData)
            delete [] binData;
          return hr;
         
      }

      //Putting in binData value from array
      *((unsigned char*)p0) = (unsigned char)(valueArray);
      p0 += sizeof(unsigned char);

      totalBytes = p0 - binData;

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_PSK);

   if (binData)
      delete [] binData;


   return hr;
}

//=================================== LoadPSKUserDataFile ===============================================================
HRESULT WX218x::IWX218xPSK_LoadPSKUserDataFile(BSTR Channel, BSTR FileName)
{
    //Size of Data array must be 2^number. If for example size od Data array will be 6
   //User will get error "Invalid table length
   HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strChannel, strFileName, strExtension, strFormatValue;
   long lengthFile, lengthString, numBytes, fileSize, file_count;
   unsigned char* binData = VI_NULL;
   double dataUserPsk;

   long pskDataLengthByte, ii, totalBytes;
   unsigned char* p0 = VI_NULL;  //we need this pointer at the end of the loop for know total bytes

   //Checking parameter Active channel
   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   if (GetSimulate()) //temporary close for offline
   {
      return hr;
   }

   strFileName = COLE2T(FileName);

   lengthFile = strFileName.GetLength();
   lengthString = strFileName.GetLength() + 1;

   if (!lengthFile)
   {
      hr = err.InvalidValue(_T("FileName"), FileName);
      return hr;
   }

   //Converting CString to char*/TCHAR
   char *tmpChar = new char [lengthString];
   TCHAR *tmpStr = new TCHAR [lengthString];

   _tcscpy_s(tmpStr, lengthString, strFileName);
   numBytes = wcstombs(tmpChar, tmpStr, lengthString);

   //Open Asccii File for reading 
   wfmFile = fopen(tmpChar, "rt");

   delete [] tmpChar;
   delete [] tmpStr;

   if (!wfmFile)  //Can not open file 
   {
      hr = err.CannotOpenFile(strFileName);
      return hr;
   }//end if,Can not open file

   fileSize = 0;

   //Getting file size
   hr = WX218x::GetAsciiFileSize(strFileName, fileSize);
   if (!SUCCEEDED(hr))
      return hr;


   if (fileSize < PSK_USER_DATA_LENGTH_MIN || fileSize > PSK_USER_DATA_LENGTH_MAX)
   {
      hr = ReportInvalidValueError(_T("LoadUserPSKDataFile"), _T("FileName"), _T("Size of file"));
      return hr;
   }

   pskDataLengthByte = sizeof(double) * fileSize; 
   binData = new unsigned char[pskDataLengthByte];
   memset(binData, '\0', pskDataLengthByte);

   file_count = 0;
   ii = 0;

   //We must save the start of this pointer
   p0 = binData;

   while (file_count < fileSize && !feof(wfmFile))
   {
      fscanf(wfmFile, "%lg", &dataUserPsk);
      //Checking if data in file are correct
      if (dataUserPsk < PSK_START_PHASE_MIN || dataUserPsk > PSK_START_PHASE_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), dataUserPsk);
         hr = err.InvalidFileData(strFormatValue);

         if (binData)
            delete [] binData;

         fclose(wfmFile);

         return hr;
      }


      //Putting in binData value from the file
      *((double*)p0) = (double)dataUserPsk;
      p0 += sizeof(double);

      file_count ++;
   }//end while

   //Now we need to calculate total bytes
   totalBytes = p0 - binData;

   //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_PSK_USER);

   fclose(wfmFile);

   if (binData)
      delete [] binData;

   return hr;
}

//===================================== LoadPSKDataFile ================================================================
HRESULT WX218x::IWX218xPSK_LoadPSKDataFile(BSTR Channel, BSTR FileName)
{
   HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strChannel, strFileName, strExtension, strFormatValue;
   long lengthFile, lengthString, numBytes, fileSize, file_count;
   unsigned char* binData = VI_NULL;
   int dataPsk;
   long lengthMin, lengthMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      lengthMin = PSK_DATA_LENGTH_MIN;
      lengthMax = PSK_DATA_LENGTH_MAX_WX2184;
     break;

     default:
      lengthMin = PSK_DATA_LENGTH_MIN;
      lengthMax = PSK_DATA_LENGTH_MAX;
    }

   long pskDataLengthByte, ii, totalBytes;
   unsigned char* p0 = VI_NULL;  //we need this pointer at the end of the loop for know total bytes

   //Checking parameter Active channel
   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   if (GetSimulate()) //temporary close for offline
   {
      return hr;
   }

   strFileName = COLE2T(FileName);

   lengthFile = strFileName.GetLength();
   lengthString = strFileName.GetLength() + 1;

   if (!lengthFile)
   {
      hr = err.InvalidValue(_T("FileName"), FileName);
      return hr;
   }

   //Converting CString to char*/TCHAR
   char *tmpChar = new char [lengthString];
   TCHAR *tmpStr = new TCHAR [lengthString];

   _tcscpy_s(tmpStr, lengthString, strFileName);
   numBytes = wcstombs(tmpChar, tmpStr, lengthString);

   //Open Asccii File for reading 
   wfmFile = fopen(tmpChar, "rt");

   delete [] tmpChar;
   delete [] tmpStr;

   if (!wfmFile)  //Can not open file 
   {
      hr = err.CannotOpenFile(strFileName);
      return hr;
   }//end if,Can not open file

   fileSize = 0;

   //Getting file size
   hr = WX218x::GetAsciiFileSize(strFileName, fileSize);
   if (!SUCCEEDED(hr))
      return hr;

   //Checking if fileSize is correct
   if (fileSize < lengthMin || fileSize > lengthMax)
   {
      hr = ReportInvalidValueError(_T("LoadPSKDataFile"), _T("FileName"), _T("Size of file"));
      return hr;
   }

   pskDataLengthByte = sizeof(unsigned char) * fileSize; 
   binData = new unsigned char[pskDataLengthByte];
   memset(binData, '\0', pskDataLengthByte);

   file_count = 0;
   ii = 0;

   //We must save the start of this pointer
   p0 = binData;

   while (file_count < fileSize && !feof(wfmFile))
   {
      fscanf(wfmFile, "%d", &dataPsk);
      //Checking if data in file are correct
      if (dataPsk < PSK_DATA_MIN || dataPsk > PSK_DATA_MAX)
      {
         strFormatValue.Format(_T("(%d)"), dataPsk);
         hr = err.InvalidFileData(strFormatValue);

         if (binData)
            delete [] binData;

         fclose(wfmFile);

         return hr;
      }


      //Putting in binData value from the file
      *((unsigned char*)p0) = (unsigned char)dataPsk;
      p0 += sizeof(unsigned char);

      file_count ++;
   }//end while

   //Now we need to calculate total bytes
   totalBytes = p0 - binData;

   //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_PSK);

   fclose(wfmFile);

   if (binData)
      delete [] binData;

   return hr;
}

                                /* CreatePSKUserData */
HRESULT WX218x::IWX218xPSK_CreatePSKUserData(BSTR Channel, SAFEARRAY** Data)
{
   //Size of Data array must be 2^number. If for example size od Data array will be 6
   //User will get error "Invalid table length
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeArray;
   long lBoundArray, indexArray;
   long uBoundArray;
   SAFEARRAY* psaData = *Data;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long pskUserDataLengthByte, totalBytes = 0;
   double valueArray;
   unsigned char* binData = VI_NULL;
   unsigned char* p0 = VI_NULL;  //we need this pointer at the end of the loop for know total bytes

   //Checking parameter Active channel
   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   if (GetSimulate()) //temporary close for offline
   {
    return hr;
   }

   //Getting size of array
   sizeArray = psaData->rgsabound->cElements;

   if ((sizeArray< PSK_USER_DATA_LENGTH_MIN) || (sizeArray > PSK_USER_DATA_LENGTH_MAX))
   {
      hr = ReportInvalidValueError(_T("CreatePSKUserdData"), _T("Data"), _T("Size of Data array"));
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundArray = psaData->rgsabound->lLbound;

   //Checking if lower bound of array AmplLevel  is zero
   if (lBoundArray != 0)
   {
      hr = err.LboundArrayZero(_T("Data Array"));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaData, 1, &uBoundArray);

   //Checking if upper bound of arrays is not zero
   if ((uBoundArray == 0))
   {
      hr = err.UpperBoundZero(_T("Data Array"));
      return hr;
   }

   //pskUserDataLengthByte = sizeof(float) * sizeArray; 
   pskUserDataLengthByte = sizeof(double) * sizeArray; 
   binData = new unsigned char[pskUserDataLengthByte];
   memset(binData, '\0', pskUserDataLengthByte);

   //We must save the start of this pointer
   p0 = binData;

   for (indexArray = lBoundArray; indexArray < sizeArray; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaData, &indexArray, &valueArray);

       //Checking Data range
      if (valueArray < PSK_START_PHASE_MIN || valueArray > PSK_START_PHASE_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), valueArray);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("Data"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);

         if (binData)
          delete [] binData;
         return hr;
      }

      //Putting in binData value from array
      //*((float*)p0) = (float)valueArray;
      *((double*)p0) = (double)valueArray;
      //p0 += sizeof(float);
      p0 += sizeof(double);

      totalBytes = p0 - binData;

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_PSK_USER);

   if (binData)
      delete [] binData;


   return hr;
}

                         /* CreatePSKData */
HRESULT WX218x::IWX218xPSK_CreatePSKData(BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeArray;
   long lBoundArray, indexArray;
   long uBoundArray;
   SAFEARRAY* psaData = *Data;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long pskDataLengthByte, totalBytes = 0;
   BYTE valueArray;
   unsigned char* binData = VI_NULL;
   unsigned char* p0 = VI_NULL;  //we need this pointer at the end of the loop for know total bytes
   long lengthMin, lengthMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      lengthMin = PSK_DATA_LENGTH_MIN;
      lengthMax = PSK_DATA_LENGTH_MAX_WX2184;
     break;

     default:
      lengthMin = PSK_DATA_LENGTH_MIN;
      lengthMax = PSK_DATA_LENGTH_MAX;
    }

   //Checking parameter Active channel
   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   if (GetSimulate()) //temporary close for offline
   {
    return hr;
   }

   //Getting size of array
   sizeArray = psaData->rgsabound->cElements;

   if ((sizeArray< lengthMin) || (sizeArray > lengthMax))
   {
      hr = ReportInvalidValueError(_T("CreatePSKData"), _T("Data"), _T("Size of Data array"));
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundArray = psaData->rgsabound->lLbound;

   //Checking if lower bound of array AmplLevel  is zero
   if (lBoundArray != 0)
   {
      hr = err.LboundArrayZero(_T("Data Array"));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaData, 1, &uBoundArray);

   //Checking if upper bound of arrays is not zero
   if ((uBoundArray == 0))
   {
      hr = err.UpperBoundZero(_T("Data Array"));
      return hr;
   }

   pskDataLengthByte = sizeof(BYTE) * sizeArray; 
   binData = new unsigned char[pskDataLengthByte];
   memset(binData, '\0', pskDataLengthByte);

   //We must save the start of this pointer
   p0 = binData;

   for (indexArray = lBoundArray; indexArray < sizeArray; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaData, &indexArray, &valueArray);

       //Checking Data range
      if (valueArray < PSK_DATA_MIN || valueArray > PSK_DATA_MAX)
      {
         //NEW 27.11.2013 add by Ira
         //For LabView wrapper
         if (valueArray == 48)
            valueArray = 0;
         else if (valueArray == 49)
            valueArray = 1;
         else if (valueArray == 50)
            valueArray = 2;
         else if (valueArray == 51)
            valueArray = 3;
         else if (valueArray == 52)
            valueArray = 4;
         else if (valueArray == 53)
            valueArray = 5;
         else if (valueArray == 54)
            valueArray = 6;
         else if (valueArray == 55)
            valueArray = 7;
         else if (valueArray == 56)
            valueArray = 8;
         else if (valueArray == 57)
            valueArray = 9;
         else if (valueArray == 65 || valueArray == 97)
            valueArray = 10;
         else if (valueArray == 66 || valueArray == 98)
            valueArray = 11;
         else if (valueArray == 67 || valueArray == 99)
            valueArray = 12;
         else if (valueArray == 68 || valueArray == 100)
            valueArray = 13;
         else if (valueArray == 69 || valueArray == 101)
            valueArray = 14;
         else if (valueArray == 70 || valueArray == 102)
            valueArray = 15;

         else //invalid data
         {
           strFormatValue.Format(_T("(%d)"), valueArray);
           strFormatElement.Format(_T("(%d)"), indexArray);
           strFormatParameter.Format(_T("(%s)"), _T("Data"));
           hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);

           if (binData)
            delete [] binData;
          return hr;
         }//end else, invalid data
      }

      //Putting in binData value from array
      *((unsigned char*)p0) = (unsigned char)(valueArray);
      p0 += sizeof(unsigned char);

      totalBytes = p0 - binData;

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_PSK);

   if (binData)
      delete [] binData;


   return hr;
}





