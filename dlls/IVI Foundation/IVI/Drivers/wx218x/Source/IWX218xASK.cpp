/******************************************************************************
*                                                                         
*               Copyright 2010-2012 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

#pragma warning(disable : 4996)

                  /* Start Amplitude */
HRESULT WX218x::IWX218xASK_StartAmplitude_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double valMin, valMax;
   
   valMin = ASK_START_AMPL_MIN;
   valMax = ASK_START_AMPL_MAX;

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xASK_get_StartAmplitude(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ASK:AMPL:STAR?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xASK_put_StartAmplitude(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":ASK:AMPL:STAR %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                               /* Shift Amplitude */
HRESULT WX218x::IWX218xASK_ShiftAmplitude_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double valMin, valMax;
   
   valMin = ASK_SHIFT_AMPL_MIN;
   valMax = ASK_SHIFT_AMPL_MAX;

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xASK_get_ShiftAmplitude(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ASK:AMPL:SHIF?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xASK_put_ShiftAmplitude(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":ASK:AMPL:SHIF %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                             /* Baud */
HRESULT WX218x::IWX218xASK_Baud_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
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
      valMin = ASK_BAUD_MIN;
      valMax = ASK_BAUD_MAX;
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      valMin = ASK_BAUD_MIN;
      valMax = ASK_BAUD_MAX;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      valMin = ASK_BAUD_MIN;
      valMax = ASK_BAUD_MAX_WX128XB;
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      valMin = ASK_BAUD_MIN;
      valMax = ASK_BAUD_MAX_WS835X;
     break;

     case MNM_WX2184:
      valMin = ASK_BAUD_MIN;
      valMax = ASK_BAUD_MAX_WX2184;
     break;

	 case MNM_WX2184C:
	 case MNM_WX1284C:
      valMin = ASK_BAUD_MIN;
      valMax = ASK_BAUD_MAX_WX2184C;
     break;

     case MNM_WX1284:
	  valMin = ASK_BAUD_MIN;
      valMax = ASK_BAUD_MAX_WX1284;
     break;

     default:
      valMin = ASK_BAUD_MIN;
      valMax = ASK_BAUD_MAX;
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xASK_get_Baud(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ASK:BAUD?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xASK_put_Baud(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":ASK:BAUD %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                            /* Marker */
HRESULT WX218x::IWX218xASK_Marker_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
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
      valMin = ASK_MARKER_MIN;
      valMax = ASK_MARKER_MAX_WX2184; 
     break;

     default:
      valMin = ASK_MARKER_MIN;
      valMax = ASK_MARKER_MAX; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xASK_get_Marker(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ASK:MARK?"));
   io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xASK_put_Marker(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":ASK:MARK %d")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

//================================= ASK Enabled =========================================
HRESULT WX218x::IWX218xASK_get_Enabled(BSTR Channel, VARIANT_BOOL* val)
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

   if (!strResponse.CompareNoCase(_T("ASK")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xASK_put_Enabled(BSTR Channel, VARIANT_BOOL val)
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
      strEnabled = _T("ASK");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MOD:TYPE %s")), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

//=================================================================================================
//                               - ConfigureASKStartAmplitude -
HRESULT WX218x::IWX218xASK_ConfigureASKStartAmplitude(BSTR Channel, double StartAmpl)
{
	HRESULT hr = S_OK;

   hr = _IWX218xASK::put_StartAmplitude(Channel, StartAmpl);

	return hr;
}

//==================================================================================================
//                             - ConfigureASKShiftAmplitude -
HRESULT WX218x::IWX218xASK_ConfigureASKShiftAmplitude(BSTR Channel, double ShiftAmpl)
{
	HRESULT hr = S_OK;

   hr = _IWX218xASK::put_ShiftAmplitude(Channel, ShiftAmpl);

	return hr;
}

//================================================================================================
//                                - ConfigureASKMarker - 
HRESULT WX218x::IWX218xASK_ConfigureASKMarker(BSTR Channel, long Marker)
{
	HRESULT hr = S_OK;

   hr = _IWX218xASK::put_Marker(Channel, Marker);

	return hr;
}

//====================================================================================================
//                              - ConfigureASKEnabled -
HRESULT WX218x::IWX218xASK_ConfigureASKEnabled(BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

   hr = _IWX218xASK::put_Enabled(Channel, Enabled);

	return hr;
}

//======================================================================================================
//                                      - ConfigureASKBaud -
HRESULT WX218x::IWX218xASK_ConfigureASKBaud(BSTR Channel, double Baud)
{
	HRESULT hr = S_OK;

   hr = _IWX218xASK::put_Baud(Channel, Baud);

	return hr;
}

//============================== CreateASKDataAdv ===========================================================
HRESULT WX218x::IWX218xASK_CreateASKDataAdv(BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeArray;
   long lBoundArray, indexArray;
   long uBoundArray;
   SAFEARRAY* psaData = *Data;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long askDataLengthByte, totalBytes = 0;
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
      lengthMin = ASK_DATA_LENGTH_MIN;
      lengthMax = ASK_DATA_LENGTH_MAX_WX2184;
     break;

     default:
      lengthMin = ASK_DATA_LENGTH_MIN;
      lengthMax = ASK_DATA_LENGTH_MAX;
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
      hr = ReportInvalidValueError(_T("CreateASKData"), _T("Data"), _T("Size of Data array"));
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

   askDataLengthByte = sizeof(BYTE) * sizeArray; 
   binData = new unsigned char[askDataLengthByte];
   memset(binData, '\0', askDataLengthByte);

   //We must save the start of this pointer
   p0 = binData;

   for (indexArray = lBoundArray; indexArray < sizeArray; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaData, &indexArray, &valueArray);

       //Checking Data range
      if (valueArray < ASK_DATA_MIN || valueArray > ASK_DATA_MAX)
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
      //*((unsigned char*)p0) = (unsigned char)('0' + valueArray);  //temporary for check
      *((unsigned char*)p0) = (unsigned char)(valueArray);  //temporary for check
      p0 += sizeof(unsigned char);

      totalBytes = p0 - binData;

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_ASK);

   if (binData)
      delete [] binData;


   return hr;
}

//=================================== LoadASKDataFile =========================================================
HRESULT WX218x::IWX218xASK_LoadASKDataFile(BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strChannel, strFileName, strExtension, strFormatValue;
   long lengthFile, lengthString, numBytes, wfmSize, file_count;
   unsigned char* binData = VI_NULL;
   int data;
   long lengthMin, lengthMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      lengthMin = ASK_DATA_LENGTH_MIN;
      lengthMax = ASK_DATA_LENGTH_MAX_WX2184;
     break;

     default:
      lengthMin = ASK_DATA_LENGTH_MIN;
      lengthMax = ASK_DATA_LENGTH_MAX;
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

    wfmSize = 0;
    //Getting file size
    hr = WX218x::GetAsciiFileSize(strFileName, wfmSize);
    if (!SUCCEEDED(hr))
     return hr;

    binData = new unsigned char [wfmSize];

    file_count = 0;

    while (file_count < wfmSize && !feof(wfmFile))
    {
     fscanf(wfmFile, "%d", &data);
     //Checking if data in file are correct
     if (data < ASK_DATA_MIN || data > ASK_DATA_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), data);
         hr = err.InvalidFileData(strFormatValue);

         if (binData)
          delete [] binData;

         return hr;
      }

     
     //binData[file_count] = (ViByte)('0'+data);  //27.07.2013 close becouse Nadav did it in binary way
     binData[file_count] = (ViByte)(data);  //binary way
     file_count ++;
    }

    fclose(wfmFile);

    //Checking if file_count is in correct range
    if ((file_count< lengthMin) || (file_count > lengthMax))
    {
      strFormatValue.Format(_T("(%d)"), file_count);
      hr = err.InvalidFileLength(strFormatValue);

      if (binData)
        delete [] binData;

         return hr;
    }

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(file_count, binData, TYPE_ASK);

   if (binData)
      delete [] binData;

   return hr;
}

//===================================== Create ASK Data ===============================================
HRESULT WX218x::IWX218xASK_CreateASKData(BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeArray;
   long lBoundArray, indexArray;
   long uBoundArray;
   SAFEARRAY* psaData = *Data;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long askDataLengthByte, totalBytes = 0;
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
      lengthMin = ASK_DATA_LENGTH_MIN;
      lengthMax = ASK_DATA_LENGTH_MAX_WX2184;
     break;

     default:
      lengthMin = ASK_DATA_LENGTH_MIN;
      lengthMax = ASK_DATA_LENGTH_MAX;
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
      hr = ReportInvalidValueError(_T("CreateASKData"), _T("Data"), _T("Size of Data array"));
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

   askDataLengthByte = sizeof(BYTE) * sizeArray; 
   binData = new unsigned char[askDataLengthByte];
   memset(binData, '\0', askDataLengthByte);

   //We must save the start of this pointer
   p0 = binData;

   for (indexArray = lBoundArray; indexArray < sizeArray; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaData, &indexArray, &valueArray);

       //Checking Data range
      if (valueArray < ASK_DATA_MIN || valueArray > ASK_DATA_MAX)
      {
         //NEW 27.11.2013 add by Ira
         //Doing this for LabView Wrapper
         if (valueArray == 49)
            valueArray = 1;
         else if (valueArray == 48)
            valueArray = 0;

         else //the data was wrong
         {
           strFormatValue.Format(_T("(%d)"), valueArray);
           strFormatElement.Format(_T("(%d)"), indexArray);
           strFormatParameter.Format(_T("(%s)"), _T("Data"));
           hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);

           if (binData)
            delete [] binData;
           return hr;
         }//end else the data was wrong
      }

      //Putting in binData value from array
      //*((unsigned char*)p0) = (unsigned char)('0' + valueArray);  //temporary for check
      *((unsigned char*)p0) = (unsigned char)(valueArray);  //temporary for check
      p0 += sizeof(unsigned char);

      totalBytes = p0 - binData;

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_ASK);

   if (binData)
      delete [] binData;


   return hr;
}








