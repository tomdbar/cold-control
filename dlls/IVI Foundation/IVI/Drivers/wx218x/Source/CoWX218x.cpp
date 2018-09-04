#include "stdafx.h"
#include "CoWX218x.h"

#pragma warning(disable : 4996)



//========================================- ResetObjectState - ================================================== 
void WX218x::ResetObjectState()
{
	// Use this function to initialize member variables and any cached data.
	// This function is automatically called in the following circumstances.
	//   1) After IIviDriver::Initialize, just BEFORE FinalInitialize is called
	//   2) After IIviDriverUtility::Reset
	//   3) After IIviDriverUtility::ResetWithDefaults
}

//======================================== - OnFinalConstruct - ================================================== 
HRESULT WX218x::OnFinalConstruct()
{
	// Use this function to perform any driver-specific initialization just AFTER object construction.
	// This function is only called ONCE -- even if Initialize and Close are called multiple times
	// on the same driver instance.

	HRESULT hr = S_OK;

    return hr;
}

//======================================== - OnFinalRelease - ===================================================== 
void WX218x::OnFinalRelease()
{
	// Use this function to perform any driver-specific clean-up just BEFORE object destruction.
	// This function is only called ONCE -- even if Initialize and Close are called multiple times
	// on the same driver instance.
}

//======================================== - OnFinalInitialize - ================================================== 
HRESULT WX218x::OnFinalInitialize()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Initialize	
   HRESULT hr = S_OK;
   CString strOpt;
   UINT32 help_interfaceType;
   int modelNumber, ii;

   m_strCurrentChannel = _T("Channel1");
   m_IsQuickSeq = 1;
   m_FastDownload = 0;   //download waveforms via visa

   if (GetSimulate())
   {
      m_ChannelCount = 2;
      m_MemorySize = MEMORY_SIZE_16M;
      m_MaxNumWaveforms = MAX_NUM_SEGMENTS;
      interfaceType = VI_INTF_TCPIP; 
      m_DigitalExist = 0;   //there is no pod

      for (ii = 0; ii < CHAN_COUNT_MAX; ii++) //loop for all channels
      {
         m_SizeAvailable[ii] = m_MemorySize;  //arbitrary memory
         m_SizeAvailableDigital[ii] = m_MemorySize/2;  //digital memory

      }//end for,loop for all channels

      m_CoupleEnabled = false;

      //NEW 27.11.2011
      m_WfmQuantum = WAVEFORM_QUANTUM_32;
      return hr;
   }

   hr = io.GetAttribute(VI_ATTR_INTF_TYPE, (UINT32 *)&help_interfaceType);
   interfaceType = (UINT16)(help_interfaceType & 0xFFFF);

   switch (interfaceType)
   {
    case VI_INTF_GPIB:
      io.SetTrailingForWrites(_T("\0"));  //25.01.2010 Add by Alexey
      break;

    case VI_INTF_ASRL:
    case VI_INTF_USB:
      io.SetTrailingForReads(_T("\n"));
      break;

     default:  //TCPIP
      io.SetTrailingForReads(_T("\n"));
    }

   hr = io.Queryf(_T("*OPT?"), _T("%$Cs"), &strOpt);   //temporary close, doesn't work
   //strOpt = _T("432");  //temporary;

   if (!strOpt.CompareNoCase(_T("116")))
   {
     m_ChannelCount = 1;
     m_MemorySize = MEMORY_SIZE_16M;
     m_OptionNum = 0;
     m_DigitalExist = 0;
   }

   else if (!strOpt.CompareNoCase(_T("116D")))
   {
     m_ChannelCount = 1;
     m_MemorySize = MEMORY_SIZE_16M;
     m_OptionNum = 0;
     m_DigitalExist = 1;
   }

   else if (!strOpt.CompareNoCase(_T("216")))
   {
     m_ChannelCount = 2;
     m_MemorySize = MEMORY_SIZE_16M;
     m_OptionNum = 0;
     m_DigitalExist = 0;
   }

   else if (!strOpt.CompareNoCase(_T("216D")))  
   {
      m_ChannelCount = 2;
      m_MemorySize = MEMORY_SIZE_16M;
      m_OptionNum = 1;  
      m_DigitalExist = 1;
   }

   else if (!strOpt.CompareNoCase(_T("132")))
   {
     m_ChannelCount = 1;
     m_MemorySize = MEMORY_SIZE_32M;
     m_OptionNum = 2;
     m_DigitalExist = 0;
   }

   else if (!strOpt.CompareNoCase(_T("132D")))
   {
     m_ChannelCount = 1;
     m_MemorySize = MEMORY_SIZE_32M;
     m_OptionNum = 2;
     m_DigitalExist = 1;
   }

   else if (!strOpt.CompareNoCase(_T("232")))
   {
     m_ChannelCount = 2;
     m_MemorySize = MEMORY_SIZE_32M;
     m_OptionNum = 2;
     m_DigitalExist = 0;
   }

   else if (!strOpt.CompareNoCase(_T("164")))
   {
      m_ChannelCount = 1;
      m_MemorySize = MEMORY_SIZE_64M;
      m_OptionNum = 1;
      m_DigitalExist = 0;
   }

   else if (!strOpt.CompareNoCase(_T("264")))
   {
      m_ChannelCount = 2;
      m_MemorySize = MEMORY_SIZE_64M;
      m_OptionNum = 1;
      m_DigitalExist = 0;
   }//end else,264

   //NEW 24.11.2011  add by Ira, must check
   else if (!strOpt.CompareNoCase(_T("1512")))  //512K
   {
      m_ChannelCount = 1;
      m_MemorySize = MEMORY_SIZE_512K;
      m_OptionNum = 3;  //ask Ronen if it's correct option number 
      m_DigitalExist = 0;
   }

    //NEW 10.03.2013  add by Ira
   else if (!strOpt.CompareNoCase(_T("108")))  //8M
   {
      m_ChannelCount = 1;
      m_MemorySize = MEMORY_SIZE_8M;
      m_OptionNum = 1;  
      m_DigitalExist = 0;
   }

   else if (!strOpt.CompareNoCase(_T("208")))  //8M
   {
      m_ChannelCount = 2;
      m_MemorySize = MEMORY_SIZE_8M;
      m_OptionNum = 1; 
      m_DigitalExist = 0;
   }

   else if (!strOpt.CompareNoCase(_T("416")))  //16M, 4 channels
   {
      m_ChannelCount = 4;
      m_MemorySize = MEMORY_SIZE_16M;
      m_OptionNum = 1; 
      m_DigitalExist = 0;
   }

   else if (!strOpt.CompareNoCase(_T("432")))  //32M, 4 channels
   {
      m_ChannelCount = 4;
      m_MemorySize = MEMORY_SIZE_32M;
      m_OptionNum = 1; 
      m_DigitalExist = 0;
   }

   else if (!strOpt.CompareNoCase(_T("4032D")))  //32M, 4 channels, pod Exist
   {
      m_ChannelCount = 4;
      m_MemorySize = MEMORY_SIZE_32M;
      m_OptionNum = 1;  
      m_DigitalExist = 1;
   }

   else if (!strOpt.CompareNoCase(_T("432D")))  //32M, 4 channels, pod Exist
   {
      m_ChannelCount = 4;
      m_MemorySize = MEMORY_SIZE_32M;
      m_OptionNum = 1;  
      m_DigitalExist = 1;
   }

   else if (!strOpt.CompareNoCase(_T("4016D")))  //32M, 4 channels, pod Exist
   {
      m_ChannelCount = 4;
      m_MemorySize = MEMORY_SIZE_16M;
      m_OptionNum = 1;  
      m_DigitalExist = 1;
   }
   else if (!strOpt.CompareNoCase(_T("416D")))  //32M, 4 channels, pod Exist
   {
      m_ChannelCount = 4;
      m_MemorySize = MEMORY_SIZE_16M;
      m_OptionNum = 1;  
      m_DigitalExist = 1;
   }

   else if (!strOpt.CompareNoCase(_T("4032")))  //32M, 4 channels, pod not Exist
   {
      m_ChannelCount = 4;
      m_MemorySize = MEMORY_SIZE_32M;
      m_OptionNum = 1;  
      m_DigitalExist = 0;
   }

   else if (!strOpt.CompareNoCase(_T("4016")))  //32M, 4 channels, pod not Exist
   {
      m_ChannelCount = 4;
      m_MemorySize = MEMORY_SIZE_16M;
      m_OptionNum = 1;  
      m_DigitalExist = 0;
   }

   //================================================================================================
    else if (!strOpt.CompareNoCase(_T("2032D")))  //32M, 2 channels, pod Exist
   {
      m_ChannelCount = 2;
      m_MemorySize = MEMORY_SIZE_32M;
      m_OptionNum = 1;  
      m_DigitalExist = 1;
   }

   else if (!strOpt.CompareNoCase(_T("232D")))  //32M, 2 channels, pod Exist
   {
      m_ChannelCount = 2;
      m_MemorySize = MEMORY_SIZE_32M;
      m_OptionNum = 1;  
      m_DigitalExist = 1;
   }

   else if (!strOpt.CompareNoCase(_T("2016D")))  
   {
      m_ChannelCount = 2;
      m_MemorySize = MEMORY_SIZE_16M;
      m_OptionNum = 1;  
      m_DigitalExist = 1;
   }

   else if (!strOpt.CompareNoCase(_T("2032")))  //32M, 2 channels, pod not Exist
   {
      m_ChannelCount = 2;
      m_MemorySize = MEMORY_SIZE_32M;
      m_OptionNum = 1;  
      m_DigitalExist = 0;
   }

   else if (!strOpt.CompareNoCase(_T("2016")))  
   {
      m_ChannelCount = 2;
      m_MemorySize = MEMORY_SIZE_16M;
      m_OptionNum = 1;  
      m_DigitalExist = 0;
   }
//====================================================================================================
   else //512K two channels
   {
      m_ChannelCount = 2;
      m_MemorySize = MEMORY_SIZE_512K;
      m_OptionNum = 3;  //ask Ronen if it's correct option number 
   }

   m_MaxNumWaveforms = MAX_NUM_SEGMENTS;

   for (ii = 0; ii < CHAN_COUNT_MAX; ii++) //loop for all channels
      {
         m_SizeAvailable[ii] = m_MemorySize;  //arbitrary memory
         m_SizeAvailableDigital[ii] = m_MemorySize/2;  //digital memory

      }//end for,loop for all channels

   m_CoupleEnabled = false;

   //NEW 27.11.2011
   //Getting model number
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
        m_WfmQuantum = WAVEFORM_QUANTUM_32;
        m_Opt32ResPoint = 1;
       break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     //NEW 29.07.2014
        if (m_MemorySize == MEMORY_SIZE_32M)
        {
         m_WfmQuantum = WAVEFORM_QUANTUM_16;
          m_Opt32ResPoint = 1;
        }

        else
        {
         m_WfmQuantum = WAVEFORM_QUANTUM_32;
         m_Opt32ResPoint = 1;
        }
       break;

     case MNM_WX2181BD:
     case MNM_WX2182BD:
        m_WfmQuantum = WAVEFORM_QUANTUM_32;
        m_Opt32ResPoint = 1;
       break;

    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
        m_WfmQuantum = WAVEFORM_QUANTUM_16;
        m_Opt32ResPoint = 1;
       break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:

        //Checking with specific command it is 32 or 16
        m_WfmQuantum = WAVEFORM_QUANTUM_32;
        m_Opt32ResPoint = 1;
       break;

     case MNM_WS8351:
     case MNM_WS8352:
        m_WfmQuantum = WAVEFORM_QUANTUM_16;
        m_Opt32ResPoint = 0;
       break;

    //NEW 8.09.2013  must check if it's correct
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
        m_WfmQuantum = WAVEFORM_QUANTUM_16;
        m_Opt32ResPoint = 1;
       break;

     default:
      m_WfmQuantum = WAVEFORM_QUANTUM_32;
      m_Opt32ResPoint = 1;
     break;

   }

   //NEW 16.01.2011
   //Set the I/O session timeout value to 5000ms
   hr = io.SetTimeout(5000);  // (Oshi want)

   return hr;
}

//================================================== - OnFinalClose - =========================================== 
HRESULT WX218x::OnFinalClose()
{
	// Use this function to perform any driver-specific actions immediately after each call to IIviDriver::Close
	
	HRESULT hr = S_OK;

	return hr;
}

//================================================== - ReturnChannelSend - ====================================== 
CString WX218x::ReturnChannelSend(CString strChan)
{
   CString strChanSend;

   if (!strChan.CompareNoCase(_T("Channel1")))
      strChanSend = CHAN_A;
   else if (!strChan.CompareNoCase(_T("Channel2")))
      strChanSend = CHAN_B;
   else if (!strChan.CompareNoCase(_T("Channel3")))
      strChanSend = CHAN_C;
   else
      strChanSend = CHAN_D;

   return strChanSend;
}

//=============================================- ReturnChannelIndex - =============================================
int WX218x::ReturnChannelIndex(CString strChan)
{
   int chanIndex;

   if (!strChan.CompareNoCase(_T("Channel1")))
      chanIndex = 1;

   else if (!strChan.CompareNoCase(_T("Channel2")))
      chanIndex = 2;

   else if (!strChan.CompareNoCase(_T("Channel3")))
      chanIndex = 3;

   else
      chanIndex = 4;

   return chanIndex;

}

//=============================================- ReturnChannelIndexOpposite - =============================================
int WX218x::ReturnChannelIndexOpposite(CString strChan)
{
   //Function that recieved current channel and return index for opposite channel
   //Use this function only for WX2184 or WX1284
   int chanIndexOpposite;

   if (!strChan.CompareNoCase(_T("Channel1")))
      chanIndexOpposite = 2;

   else if (!strChan.CompareNoCase(_T("Channel2")))
      chanIndexOpposite = 1;

   else if (!strChan.CompareNoCase(_T("Channel3")))
      chanIndexOpposite = 4;

   else
      chanIndexOpposite = 3;

   return chanIndexOpposite;

}

//===============================================-  ConvertFromCStringTostring - =====================================
void WX218x::ConvertFromCStringTostring(CString strFrom, string& strTo)
{
   int lengthString, numBytes;

   lengthString = strFrom.GetLength() + 1;

   TCHAR *tmpStr = new TCHAR[lengthString];
   _tcscpy_s (tmpStr, lengthString, strFrom);

   char *tmpChar = new char[lengthString];

   numBytes = wcstombs (tmpChar, tmpStr, lengthString);  //coping from TCHAR to char*

   strTo = tmpChar;

   delete [] tmpStr;
   delete [] tmpChar;
}

//================================================ - GetFileSize - =====================================================
HRESULT WX218x::GetFileSize(FILE *hFile, long *fileSize)
{
   HRESULT hr = S_OK;

   hr = fseek(hFile, 0L, SEEK_END);

   if (!SUCCEEDED(hr))
      return hr;

   *fileSize  = ftell(hFile);

   hr = fseek(hFile, 0L, SEEK_SET);
   if (!SUCCEEDED(hr))
      return hr;

   return hr;
}

//========================================================- GetAsciiFileSize = ============================================
HRESULT WX218x::GetAsciiFileSize (CString strFileName, long &file_count)
{
   HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   double data;
   long lengthString, numBytes;

   file_count = 0;

   lengthString = strFileName.GetLength() + 1;

   //Converting CString to char*/TCHAR
   char *tmpChar = new char [lengthString];
   TCHAR *tmpStr = new TCHAR [lengthString];

   _tcscpy_s(tmpStr, lengthString, strFileName);
   numBytes = wcstombs(tmpChar, tmpStr, lengthString);

   //Open Ascii File for reading 
   wfmFile = fopen(tmpChar, "rt"); 

   delete [] tmpChar;
   delete [] tmpStr;

   if (!wfmFile)  //Can not open file 
   {
      hr = err.CannotOpenFile(strFileName);
      return hr;
   }//end if,Can not open file

   while (!feof(wfmFile))
   {
      fscanf(wfmFile, "%lg", &data);
      file_count++;
   }

   fclose (wfmFile);

   return hr;

}

//========================================================- GetAsciiFileSize = ============================================
HRESULT WX218x::GetCSVFileSize (CString strFileName, long &file_count)
{
  HRESULT hr = S_OK;
  int pos;
  CString strLine, strData;
  char buffLine[512] = "";

  file_count = 0;

   ifstream infile;
   infile.open(strFileName);
   if(!infile.good()) //can not open file
   {
      hr = err.CannotOpenFile(strFileName);
      return hr;
   }

  std::ifstream data(strFileName);

  std::string line;
  while(std::getline(data, line))
  {
     file_count++;

  }//end while

   return hr;

}

//========================================================- GetHexAsciiFileSize = ============================================
HRESULT WX218x::GetHexAsciiFileSize (CString strFileName, long &file_count)
{
   HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   unsigned long dataLong;
   long lengthString, numBytes;

   file_count = 0;

   lengthString = strFileName.GetLength() + 1;

   //Converting CString to char*/TCHAR
   char *tmpChar = new char [lengthString];
   TCHAR *tmpStr = new TCHAR [lengthString];

   _tcscpy_s(tmpStr, lengthString, strFileName);
   numBytes = wcstombs(tmpChar, tmpStr, lengthString);

   //Open Ascii File for reading 
   wfmFile = fopen(tmpChar, "rt"); 

   delete [] tmpChar;
   delete [] tmpStr;

   if (!wfmFile)  //Can not open file 
   {
      hr = err.CannotOpenFile(strFileName);
      return hr;
   }//end if,Can not open file

   while (!feof(wfmFile))
   {
      fscanf(wfmFile, "%X", &dataLong);
      file_count++;
   }

   fclose (wfmFile);

   return hr;

}

//=============================================================================================================================
/*                                                            - writeBinaryBlock-  */
HRESULT WX218x::writeBinaryBlock(BYTE * block, size_t n)
{
   //n - parameter that containts wfmSize in bytes
   HRESULT hr = S_OK;
   long timeout_save, timeout_set;


   size_t bas = 0, len, ii;

   switch (interfaceType)
   {

     case VI_INTF_GPIB:
      len = CHUNK_SIZE_GPIB;

      io.GetTimeout(&timeout_save);

      timeout_set = n/20;

      if (timeout_save != timeout_set)
       io.SetTimeout(max(timeout_save, timeout_set));

      for (ii = 0; bas <n; bas += len)
      {
         ii = min(len, n - bas);
         hr = io.LowLevel.LowLevelWrite ((BYTE*)(block+bas), ii);  //must sending without \n 

         //Sleep(20);
      }

      if (timeout_save != timeout_set)
       io.SetTimeout(timeout_save);

      break;

      case VI_INTF_ASRL:
      case VI_INTF_USB:
      len = CHUNK_SIZE_LAN;

      for (ii = 0; bas <n; bas += len)
      {
         ii = min(len, n - bas);
         hr = io.LowLevel.LowLevelWrite ((BYTE*)(block+bas), ii);  //must sending without \n 
      }

      break;

     default:  //TCPIP
      len = CHUNK_SIZE_LAN;

      for (ii = 0; bas <n; bas += len)
      {
         ii = min(len, n - bas);
         hr = io.LowLevel.LowLevelWrite ((BYTE*)(block+bas), ii);  //must sending without \n 
      }

   }

  return hr;
}

//=============================================================================================================================
/*                                               - makeHeader-  */
BYTE * WX218x::makeHeader(const char * hdr, size_t n, BYTE * buf, size_t len)
{
   char tmp[32], s[256];

   sprintf (tmp, "%d", n);
   size_t r = sprintf ((char *)s, "%s%d%s", hdr, strlen (tmp), tmp);

   if (r+1 < len) {
      strcpy ((char *)buf, s);
      return( buf );
   }

   return( NULL );
}
/* strtobyte */
BYTE * WX218x::strtobyte(BYTE * lhs, size_t n, CString &rhs)
{
   //Function that convert from cString to BYTE*
   TCHAR ch;
   int i;

   if ((size_t)(rhs.GetLength()+1) > n) return( NULL );

   for ( i = 0; i < rhs.GetLength(); i++) {
      ch = rhs.GetAt(i);
      lhs[i] = ch & 0xFF;
   }

   /* string terminator */
   lhs[i] = '\0'; 

   return( lhs );
}

//===============================================================================================================================
//                                    - double_range -
HRESULT WX218x::WX218x_double_range(LPCTSTR pszPropertyName, double min, double max, double val)
{
   HRESULT hr = S_OK;

   if (val < min || val > max) 
      hr = err.InvalidValue(pszPropertyName, val);

   return hr;
}

//===================================================================================================================================
//                                        - long_range - 
HRESULT WX218x::WX218x_long_range(LPCTSTR pszPropertyName, long min, long max, long val)
{
   HRESULT hr = S_OK;

   if (val < min || val > max) 
      hr = err.InvalidValue(pszPropertyName, val);

   return hr;
}

//=======================================================================================================================================
//                                                         - VerifyIsValidForModel - 
HRESULT WX218x::VerifyIsValidForModel (unsigned long mask)
{
   HRESULT hr = S_OK;
   CString strModel;
   unsigned long modelMask = 0x0;

   //Function returns 0 if all is good

   strModel = GetModel();

   //strModel = _T("WX2181");  //only for check

   if (!strModel.CompareNoCase(_T("WX2181")))
      modelMask = MNM_WX2181;

   else if (!strModel.CompareNoCase(_T("WX2182")))
      modelMask = MNM_WX2182;

   else if (!strModel.CompareNoCase(_T("WX2181B")))
      modelMask = MNM_WX2181B;

   else if (!strModel.CompareNoCase(_T("WX2182B")))
      modelMask = MNM_WX2182B;

   else if (!strModel.CompareNoCase(_T("WX1281B")))
      modelMask = MNM_WX1281B;

   else if (!strModel.CompareNoCase(_T("WX1282B")))
      modelMask = MNM_WX1282B;

   else if (!strModel.CompareNoCase(_T("WS8351")))
      modelMask = MNM_WS8351;

   else if (!strModel.CompareNoCase(_T("WS8352")))
      modelMask = MNM_WS8352;

   else if (!strModel.CompareNoCase(_T("WX2181B-D")))
      modelMask = MNM_WX2181BD;

   else if (!strModel.CompareNoCase(_T("WX2182B-D")))
      modelMask = MNM_WX2182BD;

   else if (!strModel.CompareNoCase(_T("WX1281B-D")))
      modelMask = MNM_WX1281BD;

   else if (!strModel.CompareNoCase(_T("WX1282B-D")))
      modelMask = MNM_WX1282BD;

   else if (!strModel.CompareNoCase(_T("WX2184")))
      modelMask = MNM_WX2184;

    else if (!strModel.CompareNoCase(_T("WX2184C")))
      modelMask = MNM_WX2184C;

   else if (!strModel.CompareNoCase(_T("WX1284")))
      modelMask = MNM_WX1284;

   else if (!strModel.CompareNoCase(_T("WX1284C")))
      modelMask = MNM_WX1284C;

   else if (!strModel.CompareNoCase(_T("WX2182C")))
      modelMask = MNM_WX2182C;

   else if (!strModel.CompareNoCase(_T("WX2181C")))
      modelMask = MNM_WX2181C;

   else if (!strModel.CompareNoCase(_T("WX1281C")))
      modelMask = MNM_WX1281C;

   else if (!strModel.CompareNoCase(_T("WX1282C")))
      modelMask = MNM_WX1282C;

   else
      modelMask = 0x0;

   if (!(mask & modelMask))
      hr = err.ModelNotSupported();

   return hr;

}

//=================================================================================================================================
//                                                    - FuncReturnModelNumber -
int WX218x::FuncReturnModelNumber()
{
   CString strModel;
   int modelNumber;

   strModel = GetModel();
   if (!strModel.CompareNoCase(_T("WX2181")))
    modelNumber = MNM_WX2181;

   else if (!strModel.CompareNoCase(_T("WX2182")))
    modelNumber = MNM_WX2182;

   else if (!strModel.CompareNoCase(_T("WX2181B")))
    modelNumber = MNM_WX2181B;

   else if (!strModel.CompareNoCase(_T("WX2182B")))
    modelNumber = MNM_WX2182B;

   else if (!strModel.CompareNoCase(_T("WX2182C")))
    modelNumber = MNM_WX2182C;

   else if (!strModel.CompareNoCase(_T("WX2181C")))
    modelNumber = MNM_WX2181C;

   else if (!strModel.CompareNoCase(_T("WX1281C")))
    modelNumber = MNM_WX1281C;

   else if (!strModel.CompareNoCase(_T("WX1282C")))
    modelNumber = MNM_WX1282C;

   else if (!strModel.CompareNoCase(_T("WX1281B")))
    modelNumber = MNM_WX1281B;

   else if (!strModel.CompareNoCase(_T("WX1282B")))
    modelNumber = MNM_WX1282B;

   else if (!strModel.CompareNoCase(_T("WS8351")))
    modelNumber = MNM_WS8351;

   else if (!strModel.CompareNoCase(_T("WS8352")))
    modelNumber = MNM_WS8352;

   else if (!strModel.CompareNoCase(_T("WX2181B-D")))
    modelNumber = MNM_WX2181BD;

   else if (!strModel.CompareNoCase(_T("WX2182B-D")))
    modelNumber = MNM_WX2182BD;

   else if (!strModel.CompareNoCase(_T("WX1281B-D")))
    modelNumber = MNM_WX1281BD;

   else if (!strModel.CompareNoCase(_T("WX1282B-D")))
    modelNumber = MNM_WX1282BD;

   else if (!strModel.CompareNoCase(_T("WX2184")))
    modelNumber = MNM_WX2184;

   else if (!strModel.CompareNoCase(_T("WX2184C")))
    modelNumber = MNM_WX2184C;

   else if (!strModel.CompareNoCase(_T("WX1284")))
    modelNumber = MNM_WX1284;

   else if (!strModel.CompareNoCase(_T("WX1284C")))
    modelNumber = MNM_WX1284C;

   else
    modelNumber = -1;

   return modelNumber;
}

//=================================== - LoadGeneralData ============================================ 
HRESULT WX218x::LoadGeneralData(ViInt32 bytes, unsigned char* data, ViInt32 type)
{
   HRESULT hr = S_OK;
   BYTE bufHeader[256];
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   switch (type)
   {
   case TYPE_FSK:
      WX218x::makeHeader (":FSK:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_PSK:
      WX218x::makeHeader (":PSK:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_PSK_USER:
      WX218x::makeHeader (":PSK:USER:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_FHOP_FIX:
      WX218x::makeHeader (":FHOP:FIX:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_FHOP_VAR:
      WX218x::makeHeader (":FHOP:VAR:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_ASK:
      WX218x::makeHeader (":ASK:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_AHOP_FIX:
      WX218x::makeHeader (":AHOP:FIX:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_AHOP_VAR:
      WX218x::makeHeader (":AHOP:VAR:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_QAM:
      WX218x::makeHeader (":QAM:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_QAM_USER:
      WX218x::makeHeader (":QAM:USER:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_PATTERN_PREDEFINED:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       WX218x::makeHeader (":PATT:PRED:DATA#", bytes, bufHeader, sizeof (bufHeader));
      else
       WX218x::makeHeader (":PATT:PRBS:DATA#", bytes, bufHeader, sizeof (bufHeader));

      break;

   case TYPE_PATTERN_COMPOSER_FAST:
      WX218x::makeHeader (":PATT:COMP:FAST:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_PATTERN_COMPOSER_LINEAR:
      WX218x::makeHeader (":PATT:COMP:LIN:DATA#", bytes, bufHeader, sizeof (bufHeader));
      break;

   case TYPE_DIGITAL_PATTERN_PARAM:
      WX218x::makeHeader (":DIG:PAR#", bytes, bufHeader, sizeof (bufHeader));
      break;

   }

   if (!data)
   {
      hr = err.DataArrayEmpty();
      return hr;
   }

   if (GetSimulate()) //temporary close for offline
   {
      return hr;
   }

   switch (interfaceType)
   {
   case VI_INTF_GPIB:
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)data, bytes);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)data, bytes);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

   default:  //TCPIP
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)data, bytes);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   return hr;
}

//NEW 13.05.2014===========================================================================================
//                               - BuildCombinedWave
void WX218x::BuildCombinedWave(const unsigned short* pDat1, 
                               const unsigned short* pDat2, 
                               unsigned long length, 
                               unsigned short* outBuff)
{
   //Checking define WX2184_ADD_32PT, if it defined, add prefix 32points
	unsigned long n;
	unsigned short m;
	
	unsigned short* ptr1 = &outBuff[POINTS_PER_ADDR];
	unsigned short* ptr2 = &outBuff[0];
	
#ifdef WX2184_ADD_32PT
	for (n = 0; n < POINTS_PER_ADDR; ++n, ++ptr1, ++ptr2)
	{
		*ptr1 = *pDat1;
		*ptr2 = *pDat2;
	}
	
	ptr1 += POINTS_PER_ADDR;
	ptr2 += POINTS_PER_ADDR;
#endif

	n = 0;	
	while (n < length)
	{		
		if (n + POINTS_PER_ADDR < length)
			m = POINTS_PER_ADDR;
		else
			m = length - n;
			
		memcpy(ptr1, pDat1, m * sizeof(unsigned short));
		memcpy(ptr2, pDat2, m * sizeof(unsigned short));
		
		n += m;
		pDat1 += m;
		pDat2 += m;
		ptr1 += m + POINTS_PER_ADDR;
		ptr2 += m + POINTS_PER_ADDR;
	}
}
