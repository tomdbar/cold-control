/******************************************************************************
*                                                                         
*               Copyright 2010-2012 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

#pragma warning(disable : 4996)

#pragma warning(disable : 4996)

                                /* Baud */
HRESULT WX218x::IWX218xQAM_Baud_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
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
       valMin = QAM_BAUD_MIN;
       valMax = QAM_BAUD_MAX;
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
       valMin = QAM_BAUD_MIN;
       valMax = QAM_BAUD_MAX;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
       valMin = QAM_BAUD_MIN;
       valMax = QAM_BAUD_MAX_WX128XB;
     break;

     case MNM_WS8351:
     case MNM_WS8352:
       valMin = QAM_BAUD_MIN;
       valMax = QAM_BAUD_MAX_WS835X;
     break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
       valMin = QAM_BAUD_MIN;
       valMax = QAM_BAUD_MAX_WX2184;
     break;

     default:
       valMin = QAM_BAUD_MIN;
       valMax = QAM_BAUD_MAX;
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xQAM_get_Baud(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":QAM:BAUD?"));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xQAM_put_Baud(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":QAM:BAUD %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                                   /* Type */
HRESULT WX218x::IWX218xQAM_get_Type(BSTR Channel, WX218xQamTypeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":QAM:TYPE?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("16QAM")))
      *val = WX218xQamType16QAM;

   else if (!strResponse.CompareNoCase(_T("64QAM")))
      *val = WX218xQamType64QAM;

   else if (!strResponse.CompareNoCase(_T("256QAM")))
      *val = WX218xQamType256QAM;

   else if (!strResponse.CompareNoCase(_T("USER")))
      *val = WX218xQamTypeUSER;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xQAM_put_Type(BSTR Channel, WX218xQamTypeEnum val)
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
   case WX218xQamType16QAM:
      strCommand = _T(":QAM:TYPE 16QAM");
      break;

   case WX218xQamType64QAM:
      strCommand = _T(":QAM:TYPE 64QAM");
      break;

   case WX218xQamType256QAM:
      strCommand = _T(":QAM:TYPE 256QAM");
      break;

   case WX218xQamTypeUSER:
      strCommand = _T(":QAM:TYPE USER");
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
HRESULT WX218x::IWX218xQAM_Marker_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
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
      valMin = QAM_MARKER_MIN;
      valMax = QAM_MARKER_MAX_WX2184;
     break;

     default:
      valMin = QAM_MARKER_MIN;
      valMax = QAM_MARKER_MAX;
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xQAM_get_Marker(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":QAM:MARK?"));
   io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xQAM_put_Marker(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":QAM:MARK %d")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

                                /* Carrier Enabled */
HRESULT WX218x::IWX218xQAM_get_CarrierEnabled(BSTR Channel, VARIANT_BOOL* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":QAM:CARR:STAT?")); 
   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;


   return hr;
}

HRESULT WX218x::IWX218xQAM_put_CarrierEnabled(BSTR Channel, VARIANT_BOOL val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":QAM:CARR:STAT %s")), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xQAM_get_Enabled(BSTR Channel, VARIANT_BOOL* val)
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

   if (!strResponse.CompareNoCase(_T("QAM")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xQAM_put_Enabled(BSTR Channel, VARIANT_BOOL val)
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
      strEnabled = _T("QAM");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MOD:TYPE %s")), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

//=====================================================================================================
//                             - ConfigureQAMType -
HRESULT WX218x::IWX218xQAM_ConfigureQAMType(BSTR Channel, WX218xQamTypeEnum Type)
{
	HRESULT hr = S_OK;

   hr = _IWX218xQAM::put_Type(Channel, Type);

	return hr;
}

//========================================================================================================
//                           - ConfigureQAMMarker -
HRESULT WX218x::IWX218xQAM_ConfigureQAMMarker(BSTR Channel, long Marker)
{
	HRESULT hr = S_OK;

   hr = _IWX218xQAM::put_Marker(Channel, Marker);

	return hr;
}

//=========================================================================================================
//                           - ConfigureQAMState -
HRESULT WX218x::IWX218xQAM_ConfigureQAMState(BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

   hr = _IWX218xQAM::put_Enabled(Channel, State);

	return hr;
}

//=============================================================================================================
//                          - ConfigureQAMCarrierState -
HRESULT WX218x::IWX218xQAM_ConfigureQAMCarrierState(BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

   hr = _IWX218xQAM::put_CarrierEnabled(Channel, State);

	return hr;
}

//================================================================================================================
//                         - ConfigureQAMBaud -
HRESULT WX218x::IWX218xQAM_ConfigureQAMBaud(BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xQAM::put_Baud(Channel, val);

	return hr;
}

//=================================== CreateQAMDataAdv ==============================================================
HRESULT WX218x::IWX218xQAM_CreateQAMDataAdv(BSTR Channel, SAFEARRAY** Data)
{
   //Different this function from CreateQAMData that current function get Data array in int type and
   //another function in byte.Doing this for LabView 
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeArray;
   long lBoundArray, indexArray;
   long uBoundArray;
   SAFEARRAY* psaData = *Data;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long qamDataLengthByte, totalBytes = 0;
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
      lengthMin = QAM_DATA_LENGTH_MIN;
      lengthMax = QAM_DATA_LENGTH_MAX_WX2184;
     break;

     default:
      lengthMin = QAM_DATA_LENGTH_MIN;
      lengthMax = QAM_DATA_LENGTH_MAX;
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
      hr = ReportInvalidValueError(_T("CreateQAMData"), _T("Data"), _T("Size of Data array"));
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

   qamDataLengthByte = sizeof(BYTE) * sizeArray; 
   binData = new unsigned char[qamDataLengthByte];
   memset(binData, '\0', qamDataLengthByte);

   //We must save the start of this pointer
   p0 = binData;

   for (indexArray = lBoundArray; indexArray < sizeArray; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaData, &indexArray, &valueArray);

       //Checking Data range
      if (valueArray < QAM_DATA_MIN || valueArray > QAM_DATA_MAX)
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
      //*((unsigned char*)p0) = (unsigned char)('0' + valueArray);
      *((unsigned char*)p0) = (unsigned char)(valueArray);
      p0 += sizeof(unsigned char);

      totalBytes = p0 - binData;

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_QAM);

   if (binData)
      delete [] binData;


   return hr;

	return hr;
}

//==================================== LoadQAMUserDataFile ===============================================================
HRESULT WX218x::IWX218xQAM_LoadQAMUserDataFile(BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strChannel, strFileName, strExtension, strFormatValue;
   long lengthFile, lengthString, numBytes, fileSize, file_count;
   unsigned char* binData = VI_NULL;
   double dataUser;
   long qamDataLengthByte, ii, totalBytes;
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

   if (fileSize/2 < QAM_USER_DATA_LENGTH_MIN || fileSize/2 > QAM_USER_DATA_LENGTH_MAX)
     {
        hr = ReportInvalidValueError(_T("LoadFHOPDataFile"), _T("FileName"), _T("Size of file"));
        return hr;
     }

    qamDataLengthByte = sizeof(double) * fileSize; 
    binData = new unsigned char[qamDataLengthByte];
    memset(binData, '\0', qamDataLengthByte);

    file_count = 0;
    ii = 0;

    //We must save the start of this pointer
   p0 = binData;

    ii = 0;
      while (file_count < fileSize && !feof(wfmFile))
       {
        fscanf(wfmFile, "%lg", &dataUser);
        if (dataUser < QAM_USER_DATA_MIN || dataUser> QAM_USER_DATA_MAX)
          {
           strFormatValue.Format(_T("(%Lf)"), dataUser);
           hr = err.InvalidFileData(strFormatValue);

           if (binData)
            delete [] binData;

           fclose(wfmFile);

           return hr;
          }//the data is invalid

        //Putting in binData value from the file
        *((double*)p0) = (double)dataUser;
        p0 += sizeof(double);

       file_count ++;
       ii++;
    }//end while

   //Now we need to calculate total bytes
      totalBytes = p0 - binData;

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_QAM_USER);

   fclose(wfmFile);

   if (binData)
      delete [] binData;

   return hr;
}

//======================================== LoadQAMDataFile ===============================================================
HRESULT WX218x::IWX218xQAM_LoadQAMDataFile(BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strChannel, strFileName, strExtension, strFormatValue;
   long lengthFile, lengthString, numBytes, fileSize, file_count;
   unsigned char* binData = VI_NULL;
   int data;
   long qamDataLengthByte, ii, totalBytes;
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
      lengthMin = QAM_DATA_LENGTH_MIN;
      lengthMax = QAM_DATA_LENGTH_MAX_WX2184;
     break;

     default:
      lengthMin = QAM_DATA_LENGTH_MIN;
      lengthMax = QAM_DATA_LENGTH_MAX;
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

    fileSize = 0;
    //Getting file size
    hr = WX218x::GetAsciiFileSize(strFileName, fileSize);
    if (!SUCCEEDED(hr))
     return hr;

    //Checking if fileSize is correct
    if (fileSize < lengthMin || fileSize > lengthMax)
     {
        hr = ReportInvalidValueError(_T("LoadQAMDataFile"), _T("FileName"), _T("Size of file"));
        return hr;
     }

    qamDataLengthByte = sizeof(unsigned char) * fileSize; 
    binData = new unsigned char[qamDataLengthByte];
    memset(binData, '\0', qamDataLengthByte);

    file_count = 0;
    ii = 0;

    //We must save the start of this pointer
   p0 = binData;

    
      while (file_count < fileSize && !feof(wfmFile))
       {
        fscanf(wfmFile, "%d", &data);
        //Checking if data in file are correct
        if (data < QAM_DATA_MIN || data > QAM_DATA_MAX)
        {
         strFormatValue.Format(_T("(%d)"), data);
         hr = err.InvalidFileData(strFormatValue);

         if (binData)
          delete [] binData;

         fclose(wfmFile);

         return hr;
        }

     
       //Putting in binData value from the file
        *((unsigned char*)p0) = (unsigned char)data;
        p0 += sizeof(unsigned char);

       file_count ++;
    }//end while

    //Now we need to calculate total bytes
      totalBytes = p0 - binData;

       //Setting Active Channel
      hr = _IWX218x::put_ActiveChannel(Channel);

      hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_QAM);


    fclose(wfmFile);

   if (binData)
      delete [] binData;

   return hr;
}

                                /* CreateQAMUserData */
HRESULT WX218x::IWX218xQAM_CreateQAMUserData(BSTR Channel, SAFEARRAY** DataI, SAFEARRAY** DataQ)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeArrayDataI, sizeArrayDataQ;
   long lBoundArray, indexArray;
   long uBoundArray;
   SAFEARRAY* psaDataI = *DataI;
   SAFEARRAY* psaDataQ = *DataQ;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long qamUserDataLengthByte, totalBytes = 0;
   double valueDataI, valueDataQ;
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

   //Getting size of array DataI
   sizeArrayDataI = psaDataI->rgsabound->cElements;

   if ((sizeArrayDataI< QAM_USER_DATA_LENGTH_MIN) || (sizeArrayDataI > QAM_USER_DATA_LENGTH_MAX))
   {
      hr = ReportInvalidValueError(_T("CreateQAMUserData"), _T("Data"), _T("Size of QAM DataI array"));
      return hr;
   }

   //Getting size of array DataQ
   sizeArrayDataQ= psaDataQ->rgsabound->cElements;

   if ((sizeArrayDataQ< QAM_USER_DATA_LENGTH_MIN) || (sizeArrayDataQ > QAM_USER_DATA_LENGTH_MAX))
   {
      hr = ReportInvalidValueError(_T("CreateQAMUserData"), _T("Data"), _T("Size of QAM DataQ array"));
      return hr;
   }

   //Checking if sizes of two arrays (DataI and DataQ are equals)
    if (sizeArrayDataI != sizeArrayDataQ)
   {
      hr = err.SizeArrayNotEqual(_T(""));
      return hr;
   }

    //Checking if lower bound and upper bound of the array DataI is valid

   //Checking the lower bound of the dimension
   lBoundArray = psaDataI->rgsabound->lLbound;

   //Checking if lower bound of array DataQ  is zero
   if (lBoundArray != 0)
   {
      hr = err.LboundArrayZero(_T("Data Array"));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaDataI, 1, &uBoundArray);

   //Checking if upper bound of arrays is not zero
   if ((uBoundArray == 0))
   {
      hr = err.UpperBoundZero(_T("Data Array"));
      return hr;
   }

    //Checking if lower bound and upper bound of the array DataQ is valid

   //Checking the lower bound of the dimension
   lBoundArray = psaDataQ->rgsabound->lLbound;

   //Checking if lower bound of array DataQ  is zero
   if (lBoundArray != 0)
   {
      hr = err.LboundArrayZero(_T("Data Array"));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaDataQ, 1, &uBoundArray);

   //Checking if upper bound of arrays is not zero
   if ((uBoundArray == 0))
   {
      hr = err.UpperBoundZero(_T("Data Array"));
      return hr;
   }

   qamUserDataLengthByte = sizeof(double) * sizeArrayDataI * 2; 
   binData = new unsigned char[qamUserDataLengthByte];
   memset(binData, '\0', qamUserDataLengthByte);

   //We must save the start of this pointer
   p0 = binData;

   for (indexArray = lBoundArray; indexArray < sizeArrayDataI; indexArray++) //access elements in all arrays
   {
      //Getting element from array DataI
      hr = SafeArrayGetElement(psaDataI, &indexArray, &valueDataI);

       //Checking DataI range
      if (valueDataI < QAM_USER_DATA_MIN || valueDataI > QAM_USER_DATA_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), valueDataI);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("Data"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);

         if (binData)
          delete [] binData;
         return hr;
      }

      //Getting element from array DataQ
      hr = SafeArrayGetElement(psaDataQ, &indexArray, &valueDataQ);

       //Checking Data range
      if (valueDataQ < QAM_USER_DATA_MIN|| valueDataQ > QAM_USER_DATA_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), valueDataQ);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("Data"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);

         if (binData)
          delete [] binData;
         return hr;
      }

      //Putting in binData value from arrays
      *((double*)p0) = (double)valueDataI;
      p0 += sizeof(double);

       *((double*)p0) = (double)valueDataQ;
      p0 += sizeof(double);

     }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_QAM_USER);

   if (binData)
      delete [] binData;


   return hr;
}

                              /* CreateQAMData */
HRESULT WX218x::IWX218xQAM_CreateQAMData(BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeArray;
   long lBoundArray, indexArray;
   long uBoundArray;
   SAFEARRAY* psaData = *Data;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long qamDataLengthByte, totalBytes = 0;
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
      lengthMin = QAM_DATA_LENGTH_MIN;
      lengthMax = QAM_DATA_LENGTH_MAX_WX2184;
     break;

     default:
      lengthMin = QAM_DATA_LENGTH_MIN;
      lengthMax = QAM_DATA_LENGTH_MAX;
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
      hr = ReportInvalidValueError(_T("CreateQAMData"), _T("Data"), _T("Size of Data array"));
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

   qamDataLengthByte = sizeof(BYTE) * sizeArray; 
   binData = new unsigned char[qamDataLengthByte];
   memset(binData, '\0', qamDataLengthByte);

   //We must save the start of this pointer
   p0 = binData;

   for (indexArray = lBoundArray; indexArray < sizeArray; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaData, &indexArray, &valueArray);

       //Checking Data range
      if (valueArray < QAM_DATA_MIN || valueArray > QAM_DATA_MAX)
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
      //*((unsigned char*)p0) = (unsigned char)('0' + valueArray);
      *((unsigned char*)p0) = (unsigned char)(valueArray);
      p0 += sizeof(unsigned char);

      totalBytes = p0 - binData;

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_QAM);

   if (binData)
      delete [] binData;


   return hr;

}




