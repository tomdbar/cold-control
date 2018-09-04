/******************************************************************************
*                                                                         
*               Copyright 2010-2012 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

#pragma warning(disable : 4996)

/* Time */
HRESULT WX218x::IWX218xFHOP_Time_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
   HRESULT hr = S_OK;
   double val_min, val_max;

   val_min = FHOP_TIME_MIN;
   val_max = FHOP_TIME_MAX;

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xFHOP_get_Time(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FHOP:DWEL:TIME?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xFHOP_put_Time(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":FHOP:DWEL:TIME %+17.9E")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Marker */
HRESULT WX218x::IWX218xFHOP_Marker_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
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
      valMin = FHOP_MARKER_MIN;
      valMax = FHOP_MARKER_MAX_WX2184;
     break;

     default:
      valMin = FHOP_MARKER_MIN;
      valMax = FHOP_MARKER_MAX;
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xFHOP_get_Marker(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FHOP:MARK?")); 
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xFHOP_put_Marker(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":FHOP:MARK %d")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Dweel Mode */
HRESULT WX218x::IWX218xFHOP_get_DwellMode(BSTR Channel, WX218xFHOPDwellModeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FHOP:DWEL:MODE?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("FIX")))
      *val = WX218xFHOPDwellModeFixed;

   else if (!strResponse.CompareNoCase(_T("VAR")))
      *val = WX218xFHOPDwellModeVariable;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xFHOP_put_DwellMode(BSTR Channel, WX218xFHOPDwellModeEnum val)
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
   case WX218xFHOPDwellModeFixed:
      strCommand = _T(":FHOP:DWEL:MODE FIX");
      break;

   case WX218xFHOPDwellModeVariable:
      strCommand = _T(":FHOP:DWEL:MODE VAR");
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

//========================= FHOP Enabled ============================================
HRESULT WX218x::IWX218xFHOP_get_Enabled(BSTR Channel, VARIANT_BOOL* val)
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

   if (!strResponse.CompareNoCase(_T("FHOP")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xFHOP_put_Enabled(BSTR Channel, VARIANT_BOOL val)
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
      strEnabled = _T("FHOP");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MOD:TYPE %s")), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xFHOP_ConfigureFHOPTime(BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFHOP::put_Time(Channel, val);

	return hr;
}

//====================================================================================================
//                              - ConfigureFHOPMarker -
HRESULT WX218x::IWX218xFHOP_ConfigureFHOPMarker(BSTR Channel, long val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFHOP::put_Marker(Channel, val);

	return hr;
}

//========================================================================================================
//                                 - ConfigureFHOPEnabled -
HRESULT WX218x::IWX218xFHOP_ConfigureFHOPEnabled(BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFHOP::put_Enabled(Channel, val);

	return hr;
}

//===========================================================================================================
//                                - ConfigureFHOPDwellMode -
HRESULT WX218x::IWX218xFHOP_ConfigureFHOPDwellMode(BSTR Channel, WX218xFHOPDwellModeEnum val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xFHOP::put_DwellMode(Channel, val);

	return hr;
}

//================================= LoadFHOPVarDataFile =========================================================
HRESULT WX218x::IWX218xFHOP_LoadFHOPVarDataFile(BSTR Channel, BSTR FileName)
{
   HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strChannel, strFileName, strExtension, strFormatValue;
   long lengthFile, lengthString, numBytes, fileSize, file_count;
   unsigned char* binData = VI_NULL;
   double data;
   long fhopDataLengthByte, ii, totalBytes;
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

   if (fileSize/2 < FHOP_DATA_LENGTH_MIN || fileSize/2 > FHOP_DATA_LENGTH_MAX)
   {
      hr = ReportInvalidValueError(_T("LoadFHOPDataFile"), _T("FileName"), _T("Size of file"));
      return hr;
   }


   fhopDataLengthByte = sizeof(double) * fileSize; 
   binData = new unsigned char[fhopDataLengthByte];
   memset(binData, '\0', fhopDataLengthByte);

   file_count = 0;
   ii = 0;

   //We must save the start of this pointer
   p0 = binData;

   ii = 0;
   while (file_count < fileSize && !feof(wfmFile))
   {
      fscanf(wfmFile, "%lg", &data);
      if (ii % 2)  //checking  dweel time
      {
         if (data < FHOP_TIME_MIN || data > FHOP_TIME_MAX)
         {
            strFormatValue.Format(_T("(%Lf)"), data);
            hr = err.InvalidFileData(strFormatValue);

            if (binData)
               delete [] binData;

            fclose(wfmFile);

            return hr;
         } //data is invalid
      }//end if, checking dwell time

      else //checking frequency
      {
         if (data < FHOP_FREQ_DATA_MIN || data> FHOP_FREQ_DATA_MAX)
         {
            strFormatValue.Format(_T("(%Lf)"), data);
            hr = err.InvalidFileData(strFormatValue);

            if (binData)
               delete [] binData;

            fclose(wfmFile);

            return hr;
         }//the data is invalid

      }//end else, checking frequency



      //Putting in binData value from the file
      *((double*)p0) = (double)data;
      p0 += sizeof(double);

      file_count ++;
      ii++;
   }//end while

   //Now we need to calculate total bytes
   totalBytes = p0 - binData;

   //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_FHOP_VAR);

   fclose(wfmFile);

   if (binData)
      delete [] binData;

   return hr;
}

//=============================== LoadFHOPFixDataFile ==============================================================
HRESULT WX218x::IWX218xFHOP_LoadFHOPFixDataFile(BSTR Channel, BSTR FileName)
{
   HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strChannel, strFileName, strExtension, strFormatValue;
   long lengthFile, lengthString, numBytes, fileSize, file_count;
   unsigned char* binData = VI_NULL;
   double data;
   long fhopDataLengthByte, ii, totalBytes;
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

   if (fileSize < FHOP_DATA_LENGTH_MIN || fileSize > FHOP_DATA_LENGTH_MAX)
   {
      hr = ReportInvalidValueError(_T("LoadFHOPDataFile"), _T("FileName"), _T("Size of file"));
      return hr;
   }

   fhopDataLengthByte = sizeof(double) * fileSize; 
   binData = new unsigned char[fhopDataLengthByte];
   memset(binData, '\0', fhopDataLengthByte);

   file_count = 0;
   ii = 0;

   //We must save the start of this pointer
   p0 = binData;

   while (file_count < fileSize && !feof(wfmFile))
   {
      fscanf(wfmFile, "%lg", &data);
      //Checking if data in file are correct
      if (data < FHOP_FREQ_DATA_MIN || data > FHOP_FREQ_DATA_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), data);
         hr = err.InvalidFileData(strFormatValue);

         if (binData)
            delete [] binData;

         fclose(wfmFile);

         return hr;
      }


      //Putting in binData value from the file
      *((double*)p0) = (double)data;
      p0 += sizeof(double);

      file_count ++;
   }//end while

   //Now we need to calculate total bytes
   totalBytes = p0 - binData;

   //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_FHOP_FIX);

   fclose(wfmFile);

   if (binData)
      delete [] binData;

   return hr;
}


//======================================= Create FHOP Variable Data ===========================================
HRESULT WX218x::IWX218xFHOP_CreateFHOPVariableData(BSTR Channel, SAFEARRAY** FreqData, SAFEARRAY** DwellTimeData)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeArrayFreq, sizeArrayDwell;
   long lBoundArray, indexArray;
   long uBoundArray;
   SAFEARRAY* psaFreqData = *FreqData;
   SAFEARRAY* psaDwellData = *DwellTimeData;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long fhopVarDataLengthByte, totalBytes = 0;
   double valueFreq, valueDwell;
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
      lengthMin = FHOP_DATA_LENGTH_MIN;
      lengthMax = FHOP_DATA_LENGTH_MAX_WX2184;
     break;

     default:
      lengthMin = FHOP_DATA_LENGTH_MIN;
      lengthMax = FHOP_DATA_LENGTH_MAX;
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

   //Getting size of array FreqData
   sizeArrayFreq = psaFreqData->rgsabound->cElements;

   if ((sizeArrayFreq< lengthMin) || (sizeArrayFreq > lengthMax))
   {
      hr = ReportInvalidValueError(_T("CreateFHOPVariableData"), _T("Data"), _T("Size of Freq.Data array"));
      return hr;
   }

   //Getting size of array DwellTimeData
   sizeArrayDwell= psaDwellData->rgsabound->cElements;

   if ((sizeArrayDwell< lengthMin) || (sizeArrayDwell > lengthMax))
   {
      hr = ReportInvalidValueError(_T("CreateFHOPVariableData"), _T("Data"), _T("Size of Dwell Time Data array"));
      return hr;
   }

   //Checking if sizes of two arrays (Freq and Dwell Time are equals)
   if (sizeArrayFreq != sizeArrayDwell)
   {
      hr = err.SizeArrayNotEqual(_T(""));
      return hr;
   }

   //Checking if lower bound and upper bound of the array Freq is valid

   //Checking the lower bound of the dimension
   lBoundArray = psaFreqData->rgsabound->lLbound;

   //Checking if lower bound of array Freq  is zero
   if (lBoundArray != 0)
   {
      hr = err.LboundArrayZero(_T("Data Array"));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaFreqData, 1, &uBoundArray);

   //Checking if upper bound of arrays is not zero
   if ((uBoundArray == 0))
   {
      hr = err.UpperBoundZero(_T("Data Array"));
      return hr;
   }

   //Checking if lower bound and upper bound of the array Dwell Time is valid

   //Checking the lower bound of the dimension
   lBoundArray = psaDwellData->rgsabound->lLbound;

   //Checking if lower bound of array Freq  is zero
   if (lBoundArray != 0)
   {
      hr = err.LboundArrayZero(_T("Data Array"));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaDwellData, 1, &uBoundArray);

   //Checking if upper bound of arrays is not zero
   if ((uBoundArray == 0))
   {
      hr = err.UpperBoundZero(_T("Data Array"));
      return hr;
   }

   fhopVarDataLengthByte = sizeof(double) * sizeArrayFreq * 2; 
   binData = new unsigned char[fhopVarDataLengthByte];
   memset(binData, '\0', fhopVarDataLengthByte);

   //We must save the start of this pointer
   p0 = binData;

   for (indexArray = lBoundArray; indexArray < sizeArrayFreq; indexArray++) //access elements in all arrays
   {
      //Getting element from array Frequency
      hr = SafeArrayGetElement(psaFreqData, &indexArray, &valueFreq);

      //Checking Data range
      if (valueFreq < FHOP_FREQ_DATA_MIN || valueFreq > FHOP_FREQ_DATA_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), valueFreq);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("Data"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);

         if (binData)
            delete [] binData;
         return hr;
      }

      //Getting element from array Dwell Time
      hr = SafeArrayGetElement(psaDwellData, &indexArray, &valueDwell);

      //Checking Data range
      if (valueDwell < FHOP_TIME_MIN || valueDwell > FHOP_TIME_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), valueDwell);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("Data"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);

         if (binData)
            delete [] binData;
         return hr;
      }

      //Putting in binData value from arrays
      *((double*)p0) = (double)valueFreq;
      p0 += sizeof(double);

      *((double*)p0) = (double)valueDwell;
      p0 += sizeof(double);

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

   //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_FHOP_VAR);

   if (binData)
      delete [] binData;


   return hr;
}

//==================================== Create FHOP Fixed Data ========================================
HRESULT WX218x::IWX218xFHOP_CreateFHOPFixedData(BSTR Channel, SAFEARRAY** Data)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeArray;
   long lBoundArray, indexArray;
   long uBoundArray;
   SAFEARRAY* psaData = *Data;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long fhopDataLengthByte, totalBytes = 0;
   double valueArray;
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
      lengthMin = FHOP_DATA_LENGTH_MIN;
      lengthMax = FHOP_DATA_LENGTH_MAX_WX2184;
     break;

     default:
      lengthMin = FHOP_DATA_LENGTH_MIN;
      lengthMax = FHOP_DATA_LENGTH_MAX;
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
      hr = ReportInvalidValueError(_T("CreateFHOPFixedData"), _T("Data"), _T("Size of Data array"));
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

   fhopDataLengthByte = sizeof(double) * sizeArray; 
   binData = new unsigned char[fhopDataLengthByte];
   memset(binData, '\0', fhopDataLengthByte);

   //We must save the start of this pointer
   p0 = binData;

   for (indexArray = lBoundArray; indexArray < sizeArray; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaData, &indexArray, &valueArray);

      //Checking Data range
      if (valueArray < FHOP_FREQ_DATA_MIN || valueArray > FHOP_FREQ_DATA_MAX)
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
      *((double*)p0) = (double)valueArray;
      p0 += sizeof(double);

      totalBytes = p0 - binData;

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

   //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_FHOP_FIX);

   if (binData)
      delete [] binData;


   return hr;
}




