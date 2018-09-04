/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

#pragma warning(disable : 4996)


//==============================================================================================================
//                                       - Clear -
HRESULT WX218x::IWX218xArbitraryWaveform_Clear(long Handle)
{
   HRESULT hr = S_OK;
   string strWfmName;
   CString strChannel, strCommandSend, strChanSend;
   long indexHandle, indexHandleOpposite, pointSize = 0, sizeDigSegment, HandleOpposite;
   CString strActiveChannel;
   int indexChan, indexChanOpposite;
   int modelNumber;

   if (GetSimulate())  //temporary close for offline
      return hr;

   //Checking model number
   modelNumber = FuncReturnModelNumber();

   if (Handle == WFM_ALL)  //user want to delete all waveforms
   {
      hr = io.Printf(_T(":TRAC:DEL:ALL")); //temporary close for offline
      if(SUCCEEDED(hr)) //was deleting from the firmware
      {
         //Getting Active Channel
         strActiveChannel = m_strCurrentChannel;

         //Getting index of Active Channel
         indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

         //Cleaning waveform map for selected channel
         m_waveformManager.CleanWaveformMap(indexChan);

         //Updating memory size available for selected channel
         m_SizeAvailable[indexChan - 1] = m_MemorySize;

         //NEW 28.10.2012
          m_SizeAvailableDigital[indexChan - 1] = m_MemorySize/2;

         //NEW 28.10.2012
         //Cleaning all segments from current channel
         m_waveformManager.ClearArbSegments(indexChan-1, -1);

          m_digitalManager.ClearArbSegments(indexChan-1, -1);


         //NEW 28.10.2013
         //Doing this only for WX2184

          if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184
          {
           //Getting index of opposite channel and creating handle for opposite channel
           indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

           //Cleaning waveform map for selected opposite channel
           m_waveformManager.CleanWaveformMap(indexChanOpposite);

           //Updating memory size available for selected opposite channel
           m_SizeAvailable[indexChanOpposite - 1] = m_MemorySize;

           m_SizeAvailableDigital[indexChanOpposite - 1] = m_MemorySize/2;

           //Cleaning all segments from opposite channel
           m_waveformManager.ClearArbSegments(indexChanOpposite-1, -1);


           m_digitalManager.ClearArbSegments(indexChanOpposite-1, -1);

         }//end if, it is WX2184

      }//end if, was deleting from the firmware

   }//end if, user want to delete all waveforms

   else  //user want to delete one waveform
   {
      if (m_waveformManager.HandleExists(Handle)) //Handle exist
      {
         //Getting Channel by Handle
         hr = m_waveformManager.GetChannelByHandle(Handle, strChannel);

         //Getting index of Channel
         indexChan = WX218x::ReturnChannelIndex(strChannel);

         strChanSend = WX218x::ReturnChannelSend(strChannel);

         //Getting index of Handle
         indexHandle = m_waveformManager.GetWfmIndexFromHandle(Handle);

         //Getting size of segment that user want to delete
         strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRAC:SEL %d;:TRAC:POIN?")), indexHandle);
         hr = io.Queryf(strCommandSend, _T("%d"), &pointSize);  //temporary close for offline

         strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRAC:DEL %d")), indexHandle);
         hr = io.Printf(strCommandSend); //close for offline

         if(SUCCEEDED(hr)) //was deleting from firmware
         {
            //Deleting Handle from map
            m_waveformManager.DeleteHandle(Handle);

            //Updating waveform size available
            m_SizeAvailable[indexChan - 1] = m_SizeAvailable[indexChan - 1] + pointSize; 

            //NEW 28.10.2012
            //Cleaning this segment from m_ArrayArbSeg
            m_waveformManager.ClearArbSegments(indexChan-1, indexHandle-1);

            //NEW 28.10.2012
            //Checking if in array for digital memory there is something
            sizeDigSegment = m_digitalManager.m_ArrayDigSeg[indexChan-1][indexHandle-1];
            if (sizeDigSegment != 0)//there is something in array digital
            {
              m_SizeAvailableDigital[indexChan - 1] = m_SizeAvailableDigital[indexChan - 1] + sizeDigSegment; 
            }//end if, there is something in array digital

               m_digitalManager.ClearArbSegments(indexChan-1, indexHandle-1);

             //NEW 28.10.2013
             //Doing this only for WX2184

             //Checking model number
             modelNumber = FuncReturnModelNumber();

             if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184
             {
               //Getting opposite handle
               HandleOpposite = m_waveformManager.GetOppositeWfmHandle(Handle);

               //Deleting Opposite Handle from map
               m_waveformManager.DeleteHandle(HandleOpposite);

             //Getting index of opposite channel and creating handle for opposite channel
             indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

            //Updating waveform size available
            m_SizeAvailable[indexChanOpposite - 1] = m_SizeAvailable[indexChanOpposite - 1] + pointSize; 

            //Getting index of Opposite Handle
            indexHandleOpposite = m_waveformManager.GetWfmIndexFromHandle(HandleOpposite);

            //Cleaning this segment from m_ArrayArbSeg
            m_waveformManager.ClearArbSegments(indexChanOpposite-1, indexHandleOpposite-1);

           
            //Checking if in array for digital memory there is something
            sizeDigSegment = m_digitalManager.m_ArrayDigSeg[indexChanOpposite-1][indexHandleOpposite-1];
            if (sizeDigSegment != 0)//there is something in array digital
            {
              m_SizeAvailableDigital[indexChanOpposite - 1] = m_SizeAvailableDigital[indexChanOpposite - 1] + sizeDigSegment; 
            }//end if, there is something in array digital

             m_digitalManager.ClearArbSegments(indexChanOpposite-1, indexHandleOpposite-1);  
             }//end if,it is WX2184 



         }//end if,was deleting from firmware 
         else
         {
            hr = err.IviFgenWfmInUse();
         }
      }//end if,Handle exist

      else //Handle not exist
      {
         hr = ReportInvalidValueError(_T("Clear"), _T("Handle"), Handle);
      }//Handle not exist

   } //end else,user want to delete one waveform 

   return hr;
}

//===========================================================================================================
//                                       -  Configure -
HRESULT WX218x::IWX218xArbitraryWaveform_Configure(BSTR Channel, long Handle, double Gain, double Offset)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strWaveName, strWaveIndex, strFormatHandle, strFormatChannel;
   CString strChanIndex;
   long indexHandle;
   int modelNumber;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   //Check parameters range
   //Check Gain 
   hr = WX218x::IWX218xStandardWaveform_Amplitude_RangeCheck(_T("Gain"), Channel, Gain);
   if (!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Gain"), Gain);
      return hr;
   }

   //Check Offset
   hr = WX218x::DCOffset_RangeCheck(_T("Offset"), Channel, Offset);
   if (!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Offset"), Offset);
      return hr;
   }

   if (GetSimulate())
   {
      Handle=1;  //temporary close for offline
      hr = _IWX218xArbitrary::put_Gain(Channel, Gain);
      hr = _IWX218xArbitrary::put_Offset(Channel, Offset);
      return hr;  //temporary close for offline
   }

    //Checking model number
   modelNumber = FuncReturnModelNumber();

   if (m_waveformManager.HandleExists(Handle))
   {
      string strWfmName;

      //NEW 29.10.2013
      //If model is WX2184, user can send Chan1 and Handle 32001
      //If Chan3 user can send handle 64001 or 96001

      if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C) //it is not WX2184
      {
       hr = m_waveformManager.CheckCorrectHandleChannel(strChanSend, Handle);
      }

      else //it is WX2184
      {
       hr = m_waveformManager.CheckCorrectHandleChannel4Ch(strChanSend, Handle);
      }//end else, it is WX2184 

      if(!SUCCEEDED(hr))
      {
         strFormatHandle.Format(_T("(%d)"), Handle);
         strFormatChannel.Format(_T("(%s)"),strChanSend);
         hr = err.HandleChannelNotExist(strFormatHandle,strFormatChannel);
         return hr;
      }

      //Getting index of waveform Handle
      indexHandle = m_waveformManager.GetWfmIndexFromHandle(Handle);

      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":TRAC:SEL %d")), indexHandle);
      hr = io.Printf(strCommandSend); //temporary close for offline
      if(SUCCEEDED(hr))
        hr = _IWX218xArbitrary::put_Gain(Channel, Gain);  //temporary close for offline

      if (SUCCEEDED(hr))
         hr = _IWX218xArbitrary::put_Offset(Channel, Offset);  //temporary close for offline
   }
   else
      hr = ReportInvalidValueError(_T("Configure"), _T("Handle"), Handle);

   return hr;
}

//============================================================================================================
//                                         -  Create -
HRESULT WX218x::IWX218xArbitraryWaveform_Create(SAFEARRAY** Data, long* val)
{
   //If model is WX2184, this function can be used for trace mode Zero or Single 

   //NEW 22.05.2014
   //For WX2184: must be checking Arbitrary Resolution, if resolution is 2P, 
   // segment size must be: buffer size * 2
   HRESULT hr = S_OK;
   CString strCommand, strWaveName, hdrTrace, cmdBuff, strActiveChannel;
   CString strWaveNameOpposite;
   CString strTmp;
   long cnt, stbLoops = 0, cntOpposite;    //size of Data
   long cntCheck;
   long cntCombine;  //waveform size of combine waveform
   long wfmCount, wfmCountOpposite, wfmIndexName, lBoundArray, sizeAv, wfmSizeMin, sizeAvOpposite;
   long wfmIndexNameOpposite;
   int ii, indexChan, indexChanOpposite;
   unsigned short posScope_12bit = POS_SCOPE_12BIT;
   double negScope_12bit = NEG_SCOPE_12BIT;
   unsigned short posScope_14bit = POS_SCOPE_14BIT;
   double negScope_14bit = NEG_SCOPE_14BIT;
   unsigned short posScope_current = POS_SCOPE_12BIT;
   double negScope_current = NEG_SCOPE_12BIT;
   string name, nameOpposite;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len;
   long sizeDigSeg;
   CString strSystErr = _T("*OPC?\n");
   CString strFormatSegSize, strFormatSegNum, strFormatSegSize2;
   int modelNumber;
   WX218xTraceModeEnum traceModeEnum;
   long handleOpposite;
   int segArbExist = 0;    //variable for know if from digital was already define segment
   WX218xArbitraryResolutionEnum arbRes;  //for know it is 1P or 2P
    _bstr_t bstrChannel;

   arbRes = WX218xArbitraryResolution1P;  //by default

   if (GetSimulate())  //temporary close for offline
   {
     *val = 1;    //Waveform Handle = 1 for offline
     return hr;
   }

   //Checking model number
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      posScope_current = posScope_12bit;
      negScope_current = negScope_12bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN;
      break;

     case MNM_WX2181B:
     case MNM_WX2182B:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
      break;

     case MNM_WX2181BD:
     case MNM_WX2182BD:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
      break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
      break;

     case MNM_WS8351:
     case MNM_WS8352:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WS835X;
      break;

      case MNM_WX2184:
      case MNM_WX1284:
	  case MNM_WX2184C:
      case MNM_WX1284C:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184;
      break;

     default:
      posScope_current = posScope_12bit;
      negScope_current = negScope_12bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN;
       
    }

   // Make sure the number of points provided is less than the maximum memory size
   SAFEARRAY* psa = *Data;

   cnt = psa->rgsabound->cElements;  //getting size of array

   //Getting lower bound of array
   lBoundArray = psa->rgsabound->lLbound;

   if (lBoundArray != 0)
   {
      hr = err.LboundArrayZero(_T(""));
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

    //Getting Active Channel
   strActiveChannel = m_strCurrentChannel;

    //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);


    if (indexChan == 1)
     bstrChannel = _T("Channel1");
    else if  (indexChan == 2)
     bstrChannel = _T("Channel2");
    else if  (indexChan == 3)
     bstrChannel = _T("Channel3");
    else
     bstrChannel = _T("Channel4");

   //NEW 21.10.2013
   //Doing this only for model WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
    //Checking trace mode
    //If trace mode is duplicate or zero , user can use this current function,
    //else, giving message to use function <CreateAdvance>

      hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {  
         *val = 0; 
         return hr;
      }

      /*if (traceModeEnum == WX218xTraceModeDouble)  //19.05.2014 removed from scipi
      {
           strTmp = _T("Normal");

         hr = err.TraceModeNormal(strTmp);
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;

      }//end if, Trace Mode is Normal */


      if ( traceModeEnum == WX218xTraceModeCombine)
      {
        //In the buffer that we recieved there two waveforms.
        //We must calculate size for every channel

#ifdef WX2184_ADD_32PT
       cntCombine = (cnt-32)/2;
#else
      cntCombine = cnt/2;
#endif

      }//end if,traceMode is Combine

      //NEW 22.05.2014
      //Checking Arbitrary Resolution, if it is 2P, segment must be:*2
      hr = WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(bstrChannel, &arbRes);
      if (hr != S_OK)
      {  
         *val = 0; 
         return hr;
      }

   }//end if, modelNumber == MNM_WX2184

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
     //NEW 22.05.2014, checking it is 1P or 2P resolution
     if (arbRes == WX218xArbitraryResolution1P) //it is 1P res
     {
      if ((cntCombine< wfmSizeMin) || (cntCombine > m_MemorySize) || (cntCombine%m_WfmQuantum))
      {
       hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
       *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
       return hr;
       }
     }//end if,it is 1P res

     else //it is 2P res
     {
       if (((cntCombine*2)< wfmSizeMin) || ((cntCombine*2) > m_MemorySize) || ((cntCombine*2)%m_WfmQuantum))
        {
         hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
       }

     }//end else, it is 2P res


   }//end if, it is mode combine

   else //it is not mode Combine
   {
    //NEW 22.05.2014, checking it is 1P or 2P res
    if (arbRes == WX218xArbitraryResolution1P) //it is 1P res
    {
      if ((cnt< wfmSizeMin) || (cnt > m_MemorySize) || (cnt%m_WfmQuantum))
      {
        hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;
       }
      }//end if, it is 1P res

    else //it is 2P res
    {
       if (((cnt*2)< wfmSizeMin) || ((cnt*2) > m_MemorySize) || ((cnt*2)%m_WfmQuantum))
       {
        hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;
       }

    }//end else, it is 2P res
   }//end else, it is not mode Combine


   //strActiveChannel = _T("Channel2");  //temporary for offline

   wfmCount = m_waveformManager.m_WfmCount[indexChan-1];

   //Checking if waveform count is already maximum number 
   if (wfmCount > MAX_NUM_SEGMENTS)
   {
      hr = err.MaxCountSegments();
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine)) //it is mode Combine
   {
    //NEW 22.05.2014, checking it is 1P or 2P res
    if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
    {
    //Checking if there is available memory
     if (cntCombine > m_SizeAvailable[indexChan-1])
     {
       hr = err.NoAvailableMemory();
       *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
       return hr;
     }
    }//end if, it is 1P res

    else //it is 2P res
    {
      //Checking if there is available memory
     if ((cntCombine*2) > m_SizeAvailable[indexChan-1])
     {
       hr = err.NoAvailableMemory();
       *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
       return hr;
     }

    }//end else,it is 2P res 

   }//end if, it is mode Combine

   else //it is not mode Combine
   {
      //NEW 22.05.2014, checking it is 1P or 2P res
      if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
      {
        //Checking if there is available memory
        if (cnt > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
       }
      }//end if, it is 1P res

      else//it is 2P res
      {
        //Checking if there is available memory
        if ((cnt*2) > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
       }

      }//end else, it is 2P res

   }//end else, it is not mode Combine

   //NEW 28.10.2012  Checking this only for models: WX2181BD,WX2182BD,WX1281BD,WX1282BD
   //NEW 18.03.2014  checking for WX2184 to
   //NEW 21.08.2014 checking for WX2181C, WX2182C,WX1281C,WX1282C
   if (modelNumber == MNM_WX2181BD || modelNumber == MNM_WX2182BD || modelNumber == MNM_WX1281BD || modelNumber == MNM_WX1282BD || modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2181C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
    if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2181C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C &&  modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C)
    {
    //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[indexChan-1][wfmCount];

    if (cnt != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
    {
     strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
     strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
     strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
     hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
     *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
     return hr;
    }//end if, in this segment in Digital was already something download

    }//end if, it is not WX2184

    else //it is WX2184 or WX1284 or WX2181C or WX2182C or WX1281C or WX1282C 
    {
     //Checking in array m_ArrayDigSeg if already was any download in Digital segment
     //Checking this only if current channel is 1 or 2

     //NEW 21.08.2014 add by Ira
     if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
     {
     if (indexChan == 1 || indexChan == 2) //doing this only for current channel 1 or 2
     {
       sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

       //Checking it is mode Combine or not
       if (traceModeEnum == WX218xTraceModeCombine)
        cntCheck = cntCombine;
       else
        cntCheck = cnt;

       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
       {

       if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
        {
         strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
         strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
         strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
         hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }//end if, in this segment in Digital was already something download

       }//end if, it is 1P res

       else //it is 2P res
       {
        if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
        {
         strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
         strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
         strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
         hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }//end if, in this segment in Digital was already something download

       }//end else, it is 2P res

        //NEW 8.04.2014
        if (sizeDigSeg != 0)
           segArbExist = 1;   //variable for know that arbitrary segment was already define from digital

     }//end if, doing this only for current channel 1 or 2

    }//end if, it is WX2184 or WX1284

     else //it is WX2181C or WX2182C or WX1281C or WX1282C
     {
      if (indexChan == 1) //doing this only for current channel 1
      {
       sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

        cntCheck = cnt;

       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
       {

       if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
        {
         strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
         strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
         strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
         hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }//end if, in this segment in Digital was already something download

       }//end if, it is 1P res

       else //it is 2P res
       {
        if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
        {
         strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
         strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
         strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
         hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }//end if, in this segment in Digital was already something download

       }//end else, it is 2P res

        //NEW 8.04.2014
        if (sizeDigSeg != 0)
           segArbExist = 1;   //variable for know that arbitrary segment was already define from digital

     }//end if, doing this only for current channel 1

     }//end else, it is WX2181C or WX2182C or WX1281C or WX1282C

     //======================================================================================================
     //NEW 9.04.2014 
     //If mode is None, checking size of segment on opposite channel
     //If size is different, giving error
     //If mode is not NONE (any another mode), count of segments on current channel and opposite channel
     //must be the same.
     //If count of segments are not the same, giving error message to the user,
     //that he should previous delete all segments of the current part if he want to use this trace mode

     //NEW 21.08.2014 doing this only for WX2184 or WX1284
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
      {

      //Getting index of opposite channel and creating handle for opposite channel
      indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

      //Getting count of segments from opposite channel
      wfmCountOpposite = m_waveformManager.m_WfmCount[indexChanOpposite-1];

      if (traceModeEnum != WX218xTraceModeSingle) //trace mode is not Single
      {
         //Checking that count of segments on two opposite channels must be equal
         if (wfmCount != wfmCountOpposite)
         {
           hr = err.CountSegNotEqual();
           *val = 0;
           return hr;
         }
      }//end if, trace mode is not None

      else //it is mode Single
      {
        //Checking if on opposite channel segment is with the same size
          cntOpposite = m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount];

          //NEW 22.05.2014 checking it is 1P or 2P res
          if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
          {
           if (cntOpposite != 0 && cntCheck != cntOpposite)
           {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
           }
          }//end if, it is 1P res

          else //it is 2P res
          {
           if (cntOpposite != 0 && (cntCheck*2) != cntOpposite)
           {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
           }
          }//end else, it is 2P res

      }//end else, it is mode None

      } //end if, it is WX2184 or WX1284
      //========================================================================================================

    }//end else, it is WX2184 or WX1284 or WX2181C or WX2182C or WX1281C or WX1282C 

   }//end if, models BD or WX2184

   double* pvData = (double*) psa->pvData;
   double checkPoint;

   unsigned short* pBlock = new unsigned short[cnt];
   unsigned short point;

   for (ii=lBoundArray; ii<cnt; ii++)
   {
      checkPoint = *(pvData+ii);

      //Doing this not for mode combine

      if ((modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C) || (modelNumber == MNM_WX2184 && traceModeEnum != WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum != WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum != WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum != WX218xTraceModeCombine))
      {
      //Checking that every element in pvData must be between -1 to +1
      if (checkPoint < -1.0 || checkPoint > 1.0) //invalid value in waveform data
      {
         //strCommand.Format(_T("Element number %d = %.3Lf"), ii, checkPoint);
         hr = ReportInvalidValueError(_T("Create"), _T("Data"), strCommand);

         delete [] pBlock;
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
      }//end if,invalid value in waveform data 

      } //end if, checking every point not for Combine

      if ((modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C) || (modelNumber == MNM_WX2184 && traceModeEnum != WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum != WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum != WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum != WX218xTraceModeCombine))
      {
       
       point = posScope_current + (unsigned short)(negScope_current * checkPoint);
      }

      else //it is WX2184
      {
       point = checkPoint;
      }//end else, it is WX2184

      pBlock[ii] = point;
   }

   //Making waveform index name
   if (indexChan == 1)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount; 

   else if (indexChan == 2)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

   else if (indexChan == 3)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;  

   else //indexChan = 4
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

   m_waveformManager.CreateWaveformName(name, wfmIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strWaveName = buff;

   //NEW 22.10.2013 
   //doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
    //NEW 9.04.2014======================================================================================
    //Doing this only for mode not None
    if (traceModeEnum != WX218xTraceModeSingle)
    {
      //Getting index of opposite channel and creating handle for opposite channel
      indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

      //Making waveform index name
      if (indexChanOpposite == 1)
        wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount; 

      else if (indexChanOpposite == 2)
        wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

      else if (indexChanOpposite == 3)
        wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;  

      else //indexChan = 4
        wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

      m_waveformManager.CreateWaveformName(nameOpposite, wfmIndexNameOpposite);
      sprintf_s(buff, sizeof(buff), "%s", name.c_str());

      strWaveNameOpposite = buff;

    }//end if, it is not mode none

   }//end if, is WX2184

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) ||(modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) ||(modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
    if (segArbExist == 0) //arbitrary segment was not defined from Digital
    {
     //NEW 22.05.2014, checking it is 1P or 2P res
     if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
      strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntCombine);
     else //it is 2P res
      strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, (cntCombine*2));

     hr = io.Printf(strCommand);  //temporary close for offline
    }
   }//end if, it is WX2184 and Combine

   else //it is not combine
   {
     if (segArbExist == 0) //arbitrary segment was not defined from Digital
     {
       //NEW 22.05.2014, checking it is 1P or 2P res
       if (arbRes == WX218xArbitraryResolution1P)//it is 1P
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cnt);
       else//it is 2P res
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, (cnt*2));

       hr = io.Printf(strCommand);  //temporary close for offline 
     }
   }//end else, it is not combine
   
   strCommand.Format(_T(":TRAC:SEL %d"), wfmCount+1);
   hr = io.Printf(strCommand);  //temporary close for offline

   //Checking if was enough memory to define segment
   if (!SUCCEEDED(hr))
   {
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

   switch (interfaceType)
   {
    case VI_INTF_GPIB:
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);  //temporary close for offline
     
      do
      {
       hr = io.ReadStatusByte(&statusByte); //temporary close for offline
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cnt, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*cnt);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cnt, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*cnt);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

    default:  //TCPIP
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cnt, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline

     hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*cnt);  //temporary close for offline
     hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   *val = m_waveformManager.CreateWaveform(name, indexChan);  //saving creating waveform in map
   m_waveformManager.m_WfmCount[indexChan-1]++;

   //Updating waveform size available
   //Checking if it is not combine
   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine)) //it is mode Combine
   {
     //NEW 22.05.2014, checking it is 1P or 2P res
     if (arbRes == WX218xArbitraryResolution1P)//it is 1P
      sizeAv = m_SizeAvailable[indexChan-1] - cntCombine; 
     else//it is 2P
      sizeAv = m_SizeAvailable[indexChan-1] - (cntCombine*2); 

     m_SizeAvailable[indexChan-1] = sizeAv;

      //NEW 28.10.2012
     //Saving in array m_ArrayArbSeg size of this segment

     //NEW 22.05.2014, checking it is 1P or 2P res
     if (arbRes == WX218xArbitraryResolution1P)//it is 1P
      m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cntCombine;
     else//it is 2P
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cntCombine*2);

   }//end if, it is mode Combine

   else //it is not Combine
   {
     //NEW 22.05.2014, checking it is 1P or 2P res
     if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
      sizeAv = m_SizeAvailable[indexChan-1] - cnt; 
     else//it is 2P
      sizeAv = m_SizeAvailable[indexChan-1] - (cnt*2); 

     m_SizeAvailable[indexChan-1] = sizeAv;

    //NEW 28.10.2012
    //Saving in array m_ArrayArbSeg size of this segment

    //NEW 22.05.2014, checking it is 1P or 2P
    if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
     m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cnt;
    else//it is 2P
     m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cnt*2);
   }//end else, it is not Combine

  
   //NEW 22.10.2013
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
      //NEW 9.04.2014
      //Doing this only if mode is not None
      if (traceModeEnum != WX218xTraceModeSingle)
      {
        handleOpposite = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);  //saving creating waveform in map
        m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

        if (traceModeEnum == WX218xTraceModeCombine)
        {
          //Updating waveform size available

          //NEW 22.05.2014, checking it is 1P or 2P res
          if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
           sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cntCombine; 
          else
           sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cntCombine*2); 

          m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

          //NEW 28.10.2012
          //Saving in array m_ArrayArbSeg size of this segment

          //NEW 22.05.2014, checking it is 1P or 2P res
          if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
           m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cntCombine;
          else//it is 2P res
           m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cntCombine*2);
         }//end if, it is Combine mode

         else //it is not Combine mode
         {
           //Updating waveform size available

          //NEW 22.05.2014, checking it is 1P or 2P res
           if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
            sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cnt; 
           else//it is 2P res
            sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cnt*2); 

          m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

          //NEW 28.10.2012
          //Saving in array m_ArrayArbSeg size of this segment

          //NEW 22.05.2014, checking it is 1P or 2P res
          if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
           m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cnt;
          else//it is 2P
           m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cnt*2);
         }//end else, it is not Combine mode

        }//end if, it is not mode None

   }//end if, it is WX2184

   delete [] pBlock;

   return hr;
}

//===============================================================================================================
//                                          - Quantum -
HRESULT WX218x::IWX218xArbitraryWaveform_get_Quantum(long* val)
{
   HRESULT hr = S_OK;

   *val = m_WfmQuantum;

   return hr;
}

//=================================================================================================================
//                                          - SizeMin -
HRESULT WX218x::IWX218xArbitraryWaveform_get_SizeMin(long* val)
{
   HRESULT hr = S_OK;
   int modelNumber;

   //Checking model number
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
        *val = WAVEFORM_SIZE_MIN;
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:

      if (m_MemorySize == MEMORY_SIZE_32M)
       *val = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       *val = WAVEFORM_SIZE_MIN_WX218XB;

     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      *val = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      if (m_MemorySize == MEMORY_SIZE_32M)
       *val = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       *val = WAVEFORM_SIZE_MIN_WX218XB;
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      *val = WAVEFORM_SIZE_MIN_WS835X;
     break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      *val = WAVEFORM_SIZE_MIN_WX2184;
     break;

     default:
      *val = WAVEFORM_SIZE_MIN;
    }

   return hr;
}

//========================================= TraceMode ===========================================================
HRESULT WX218x::IWX218xArbitraryWaveform_get_TraceMode(WX218xTraceModeEnum* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":TRAC:MODE?"); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);  //temporary close for offline

   if (!strResponse.CompareNoCase(_T("SING")))
      *val = WX218xTraceModeSingle;

   //else if (!strResponse.CompareNoCase(_T("DOUB")))  //was removed from the scipi
     // *val = WX218xTraceModeDouble;

   else if (!strResponse.CompareNoCase(_T("DUPL")))
      *val = WX218xTraceModeDuplicate;

   else if (!strResponse.CompareNoCase(_T("ZER")))
      *val = WX218xTraceModeZero;

   else if (!strResponse.CompareNoCase(_T("COMB")))
      *val = WX218xTraceModeCombine;

   else
     hr = err.UnexpectedResponse(strResponse);  //temporary close for offline

   return hr;
}

HRESULT WX218x::IWX218xArbitraryWaveform_put_TraceMode(WX218xTraceModeEnum val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strCommand, strEnum;

   switch (val)
   {
   case WX218xTraceModeSingle:
      strCommand = _T(":TRAC:MODE SING");
      break;

   //case WX218xTraceModeDouble:              //was removed from the scipi
     // strCommand = _T(":TRAC:MODE DOUB");
     // break;

   case WX218xTraceModeDuplicate:
      strCommand = _T(":TRAC:MODE DUPL");
      break;

   case WX218xTraceModeZero:
      strCommand = _T(":TRAC:MODE ZER");
      break;

   case WX218xTraceModeCombine:
      strCommand = _T(":TRAC:MODE COMB");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum, strEnum);
      return hr;
   }

   strCommandSend = strCommand;
   hr = io.Printf(strCommandSend);  //temporary close for offline

   return hr;
}

//=========================================================================================================
//                              - FastDownload -
HRESULT WX218x::IWX218xArbitraryWaveform_get_FastDownload(long* val)
{
	//If val is 0, the download waveform for WX2184 will be via visa
   //else will be via dll
   HRESULT hr = S_OK;

	*val = m_FastDownload;

	return hr;
}

HRESULT WX218x::IWX218xArbitraryWaveform_put_FastDownload(long val)
{
	HRESULT hr = S_OK;

	m_FastDownload = val;

	return hr;
}

HRESULT WX218x::IWX218xArbitraryWaveform_FastDownload_RangeCheck(LPCTSTR pszPropertyName, long val)
{
	HRESULT hr = S_OK;

	if (val < 0 || val > 1) 
      hr = err.InvalidValue(_T("val"), val);
	 
	return hr;
}

//=============================================================================================================
//                                     - Download Record -

HRESULT WX218x::IWX218xArbitraryWaveform_get_DownloadRecord(WX218xArbDownloadRecordEnum* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":SYST:DOWN:REC?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ENAB")))
      *val = WX218xArbDownloadRecordEnable;

   else if (!strResponse.CompareNoCase(_T("DIS")))
      *val = WX218xArbDownloadRecordDisable;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xArbitraryWaveform_put_DownloadRecord(WX218xArbDownloadRecordEnum val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strEnum;

   switch (val)
   {
   case WX218xArbDownloadRecordEnable:
      strCommandSend = _T(":SYST:DOWN:REC ENAB");
      break;

   case WX218xArbDownloadRecordDisable:
      strCommandSend = _T(":SYST:DOWN:REC DIS");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   hr = io.Printf(strCommandSend);

   return hr;
}

//==========================================================================================================
//                                        - ConfigureDownloadRecord -
HRESULT WX218x::IWX218xArbitraryWaveform_ConfigureDownloadRecord(WX218xArbDownloadRecordEnum DownloadRecord)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitraryWaveform::put_DownloadRecord(DownloadRecord);

	return hr;
}



//==============================================================================================================
//                                       - LoadAsciiArbWfmFromFileAdv -
HRESULT WX218x::IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFileAdv(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
{
	 //Use this function only for WX2184
   //This function for modes:Combine
	HRESULT hr = S_OK;
   FILE *wfmFile1 = VI_NULL;
   FILE *wfmFile2 = VI_NULL;
   CString strChannel, strFileName1, strFileName2, strExtension1, strExtension2;
   long lengthFile1, lengthFile2, pos1, pos2, lengthString1, lengthString2, numBytes1, numBytes2, fileSize1, fileSize2; 
   long tmpSize1, tmpSize2, wfmSize1, wfmSize2, file_count1, file_count2;
   short * binData1 = VI_NULL;
   short *binData2 = VI_NULL;
   short int *pwData1 = VI_NULL;
   short int *pwData2 = VI_NULL;
   double * wfmData1 = VI_NULL;
   double * wfmData2 = VI_NULL;
   double divider_14bit = 8192.0;
   double divider_current = divider_14bit;
   double data;
   CString strCommand, strWaveName, hdrTrace, cmdBuff, strActiveChannel;
   CString strWaveNameOpposite, strTmp;
   long cntData1, cntData2, cntTotal, stbLoops = 0; 
   long wfmCount, wfmIndexName, sizeAv, wfmSizeMin;
   long sizeAvOpposite, wfmIndexNameOpposite;
   int indexChan, indexChanOpposite, ii, jj;
   string name, nameOpposite;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len, sizeDigSeg;
   CString strSystErr = _T("*OPC?\n");
   CString strFormatSegSize, strFormatSegSize2, strFormatSegNum;
   WX218xTraceModeEnum traceModeEnum;
   int segArbExist = 0;   //variable for know if arbitrary segment was already defined from Digital
   unsigned short posScope_current = POS_SCOPE_14BIT;
   unsigned short* pBlockTotal = VI_NULL;
   double checkPoint;
   unsigned short point;
   WX218xArbitraryResolutionEnum arbRes;  //for know it is 1P or 2P

   arbRes = WX218xArbitraryResolution1P;  //by default

    //NEW 13.05.2014
   unsigned  short  *binDataUs1 = VI_NULL;
   unsigned short *binDataUs2 = VI_NULL;

    if (GetSimulate())  //temporary close for offline
   {
      *Handle1 = 1;    //Waveform Handle = 1 for offline
      *Handle2 = 32001;    //Waveform Handle = 1 for offline
      return hr;
   }

   strChannel = COLE2T(Channel);

   //Doing all for first file
   strFileName1 = COLE2T(FileName1);

   lengthFile1 = strFileName1.GetLength();
   lengthString1 = strFileName1.GetLength() + 1;

   if (!lengthFile1)
   {
      hr = err.InvalidValue(_T("FileName"), FileName1);
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }

         wfmSize1 = 0;
         //Getting file size
         hr = WX218x::GetAsciiFileSize(strFileName1, wfmSize1);
         if (!SUCCEEDED(hr))
         {
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }

         //Converting CString to char*/TCHAR
         char *tmpChar1 = new char [lengthString1];
         TCHAR *tmpStr1 = new TCHAR [lengthString1];

         _tcscpy_s(tmpStr1, lengthString1, strFileName1);
         numBytes1 = wcstombs(tmpChar1, tmpStr1, lengthString1);

         //Open Asccii File for reading 
         wfmFile1 = fopen(tmpChar1, "rt");

         delete [] tmpChar1;
         delete [] tmpStr1;

         if (!wfmFile1)  //Can not open file 
         {
            hr = err.CannotOpenFile(strFileName1);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }//end if,Can not open file

         //binData1 = new double [wfmSize1]; //NEW 12.03.2014  doesn't work when 32M
         binData1 = new short [wfmSize1]; 

         file_count1 = 0;

         while (file_count1 < wfmSize1 && !feof(wfmFile1))
         {
            fscanf(wfmFile1, "%lg", &data);
            //binData1[file_count1] = data;
            binData1[file_count1] = (short)data;
            file_count1 ++;
         }

         fclose(wfmFile1);

   //==========================================================================================================

    //Doing all for second file
   strFileName2 = COLE2T(FileName2);

   lengthFile2 = strFileName2.GetLength();
   lengthString2 = strFileName2.GetLength() + 1;

   if (!lengthFile2)
   {
      hr = err.InvalidValue(_T("FileName"), FileName2);
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      return hr;
   }

     
         wfmSize2 = 0;
         //Getting file size
         hr = WX218x::GetAsciiFileSize(strFileName2, wfmSize2);
         if (!SUCCEEDED(hr))
         {
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

            if (binData1)
             delete [] binData1;

            return hr;
         }

         //Converting CString to char*/TCHAR
         char *tmpChar2 = new char [lengthString2];
         TCHAR *tmpStr2 = new TCHAR [lengthString2];

         _tcscpy_s(tmpStr2, lengthString2, strFileName2);
         numBytes2 = wcstombs(tmpChar2, tmpStr2, lengthString2);

         //Open Asccii File for reading 
         wfmFile2 = fopen(tmpChar2, "rt");

         delete [] tmpChar2;
         delete [] tmpStr2;

         if (!wfmFile2)  //Can not open file 
         {
            hr = err.CannotOpenFile(strFileName2);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

             if (binData1)
             delete [] binData1;

            return hr;
         }//end if,Can not open file

         //binData2 = new double [wfmSize2];  //NEW 12.03.2014  
         binData2 = new short [wfmSize2];

         file_count2 = 0;

         while (file_count2 < wfmSize2 && !feof(wfmFile2))
         {
            fscanf(wfmFile2, "%lg", &data);
            //binData2[file_count2] = data;
            binData2[file_count2] = (short)data;
            file_count2 ++;
         }

         fclose(wfmFile2);

   
   //==============================================================================================================

   //Checking if size of file1 is equal to size of file2
   if (wfmSize1 != wfmSize2)
   {
      hr = err.FileSizeNotEqual(_T(""));
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      if (wfmFile1)
       fclose(wfmFile1);

      if (wfmFile2)
       fclose(wfmFile2);

       return hr;    
   }//end if, the files aren't with the same size

   //Sending Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184;

   cntData1 = wfmSize1;
   cntData2 = wfmSize2;

   //NEW 20.05.2014
   //Doesn't check trace mode, putting to Combine

  
    //Checking trace mode
    //If trace mode is None, Normal or Combine, user can use this current function,
    //else, giving message to use <CreateCustom>

      /*hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }*/


      hr = WX218x::IWX218xArbitraryWaveform_put_TraceMode(WX218xTraceModeCombine);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }

      hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }

      //NEW 20.05.2014 doesn't check trace mode, putting to Combine
     /* if (traceModeEnum == WX218xTraceModeDuplicate || traceModeEnum == WX218xTraceModeZero || traceModeEnum == WX218xTraceModeSingle)
      {
         if (traceModeEnum == WX218xTraceModeDuplicate)
            strTmp = _T("Duplicate");
         else if (traceModeEnum == WX218xTraceModeZero)
            strTmp = _T("Zero");
         else
            strTmp = _T("None");

         hr = err.TraceModeDuplicate(strTmp);
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
         delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }//end if, Trace Mode is None(Single) or Duplicate or Zero*/

       //Checking Arbitrary Resolution, if it is 2P, segment must be:*2
      hr = WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(Channel, &arbRes);
      if (hr != S_OK)
      {  
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }

    //NEW 22.05.2014, checking it is 1P or 2P
    if (arbRes == WX218xArbitraryResolution1P)
    {

   //Checking waveform size for the first buffer
   if ((cntData1< wfmSizeMin) || (cntData1 > m_MemorySize) || (cntData1%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File1"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }

   //Checking waveform size for the second buffer
   if ((cntData2< wfmSizeMin) || (cntData2 > m_MemorySize) || (cntData2%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File2"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }

    }//end if, it is 1P

    else //it is 2P
    {
       //Checking waveform size for the first buffer
       if (((cntData1*2)< wfmSizeMin) || ((cntData1*2) > m_MemorySize) || ((cntData1*2)%m_WfmQuantum))
       {
        hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File1"), _T("Size of File"));
        *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

        if (binData1)
         delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
    }

       //Checking waveform size for the second buffer
       if (((cntData2*2)< wfmSizeMin) || ((cntData2*2) > m_MemorySize) || ((cntData2*2)%m_WfmQuantum))
        {
          hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File2"), _T("Size of File"));
          *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
          *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

          if (binData1)
           delete [] binData1;

          if (binData2)
           delete [] binData2;

         return hr;
    }

    }//end else, it is 2P

   //Checking if two buffer sizes are equal
   if (cntData1 != cntData2)
   {
      hr = err.SizeArrayNotEqual(_T(""));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }
   

   strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

   wfmCount = m_waveformManager.m_WfmCount[indexChan-1];

   //Checking if waveform count is already maximum number 
   if (wfmCount > MAX_NUM_SEGMENTS)
   {
      hr = err.MaxCountSegments();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
   }

   //Checking if there is available memory

   //NEW 22.05.2014, checking it is 1P or 2P
    if (arbRes == WX218xArbitraryResolution1P) //it is 1P
    {
     if (cntData1 > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
     }

    }//end if,it is 1P

    else //it is 2P
    {
     if ((cntData1*2) > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
     }

    }//end else, it is 2P

     //NEW 18.03.2014
     //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

      //Checking this only for current channel 1 or 2
      if (indexChan == 1 || indexChan == 2) //current chan is 1 or 2
      {
        //NEW 22.05.2014, checking it is 1P or 2P
        if (arbRes == WX218xArbitraryResolution1P) //it is 1P
        {
        if (cntData1 != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

           if (binData1)
            delete [] binData1;

           if (binData2)
            delete [] binData2;

           return hr;
         }//end if, in this segment in Digital was already something download

        }//end if, it is 1P

        else //it is 2P
        {
         if ((cntData1*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

           if (binData1)
            delete [] binData1;

           if (binData2)
            delete [] binData2;

           return hr;
         }//end if, in this segment in Digital was already something download

        }//end else,it is 2P 

        //Checking if this segment was already defined from Digital
        if (sizeDigSeg != 0)
           segArbExist = 1;

      }//end if, current chan is 1 or 2

   //Making waveform index name
   if (indexChan == 1)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

   else if (indexChan == 2)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

   else if (indexChan == 3)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

   else //indexChan = 4
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

   m_waveformManager.CreateWaveformName(name, wfmIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strWaveName = buff;

  //Getting index of opposite channel and creating handle for opposite channel
  indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

  //Making waveform index name
  if (indexChanOpposite == 1)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

  else if (indexChanOpposite == 2)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

  else if (indexChanOpposite == 3)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

  else //indexChan = 4
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

  m_waveformManager.CreateWaveformName(nameOpposite, wfmIndexNameOpposite);
  sprintf_s(buff, sizeof(buff), "%s", name.c_str());

  strWaveNameOpposite = buff;

  //NEW 20.05.2014 Double was removed from the scipi
 /*if (traceModeEnum == WX218xTraceModeDouble) //trace mode is Normal(Double)
 {

  //Calculation total size for two waveforms
  cntTotal = cntData1 * 2;

  //Allocation memory for data for both channels
  pBlockTotal = new unsigned short[cntTotal];

  for(jj = 0; jj < cntTotal; )  //loop for both channels and saving data in total buffer
  {
   for (ii = 0; ii < cntData1; ii++) //Loop for first buffer
   {
    checkPoint = binData1[ii];
    point = posScope_current + (unsigned short) checkPoint;
    pBlockTotal[jj] = point;

    jj++;
   }//end for, Loop for first buffer

   for (ii = 0; ii < cntData2; ii++) //Loop for second buffer
   {
    checkPoint = binData2[ii];
    point = posScope_current + (unsigned short) checkPoint;
    pBlockTotal[jj] = point;

    jj++;
   }//end for, Loop for second buffer

  }//end for, loop for both channels and saving data in total buffer

 }//end if, trace mode is Normal(Double)  */


 //else //Trace mode is Combine
 if (traceModeEnum == WX218xTraceModeCombine)
 {
    //Calculation total size for two waveforms
#ifdef WX2184_ADD_32PT
     cntTotal = cntData1 * 2 + 32;
#else
      cntTotal = cntData1 * 2;
#endif

     pBlockTotal = new unsigned short[cntTotal];

     binDataUs1 = new unsigned short [cntData1]; 
     binDataUs2 = new unsigned short [cntData2]; 

   for (ii = 0; ii < cntData1; ii++) //Loop for first buffer
   {
    checkPoint = binData1[ii];
    point = posScope_current + (unsigned short) checkPoint;
    binDataUs1[ii] = point;
   }//end for, Loop for first buffer

   for (ii = 0; ii < cntData2; ii++) //Loop for second buffer
   {
    checkPoint = binData2[ii];
    point = posScope_current + (unsigned short) checkPoint;
    binDataUs2[ii] = point;
   }//end for, Loop for second buffer

    //Call to function that recieves two buffer, length of segment and outputbuffer
     //and combined two waveform
     WX218x::BuildCombinedWave(binDataUs1, binDataUs2, cntData1, pBlockTotal);

     //Free memory
     if (binDataUs1)
      delete [] binDataUs1;

     if (binDataUs2)
      delete [] binDataUs2;

 }//end else, Trace mode is Combine



    if (segArbExist == 0)  //this segment was not define from Digital
    {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P)
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntData1);
      else
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntData1*2);

      hr = io.Printf(strCommand);  //temporary close for offline
    }
  
   strCommand.Format(_T(":TRAC:SEL %d"), wfmCount+1);
   hr = io.Printf(strCommand);  //temporary close for offline

   //Checking if was enough memory to define segment
   if (!SUCCEEDED(hr))
   {
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      if (pBlockTotal)
       delete [] pBlockTotal;

      return hr;
   }

   switch (interfaceType)
   {

   case VI_INTF_GPIB:  //GPIB
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);

      do
      {
         hr = io.ReadStatusByte(&statusByte);
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

   default:  //TCPIP
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   *Handle1 = m_waveformManager.CreateWaveform(name, indexChan);  //saving creating waveform in map
   m_waveformManager.m_WfmCount[indexChan-1]++;

   //Updating waveform size available

   //NEW 22.05.2014, checking it is 1P or 2P
   if (arbRes == WX218xArbitraryResolution1P) //it is 1P
   {
     sizeAv = m_SizeAvailable[indexChan-1] - cntData1;  
     m_SizeAvailable[indexChan-1] = sizeAv; 

      //NEW 28.10.2012
      //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cntData1;

       *Handle2 = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);
       //saving creating waveform in the map
       m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

       //Updating waveform size available
        sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cntData2;
       m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

       m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cntData2;

   }//end if, it is 1P

   else //it is 2P
   {
     sizeAv = m_SizeAvailable[indexChan-1] - (cntData1*2);  
     m_SizeAvailable[indexChan-1] = sizeAv; 

      //NEW 28.10.2012
      //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cntData1*2);

       *Handle2 = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);
       //saving creating waveform in the map
       m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

       //Updating waveform size available
        sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cntData2*2);
       m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

       m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cntData2*2);
   }//end else, it is 2P


   if (binData1)
       delete [] binData1;

   if (binData2)
     delete [] binData2;

    if (pBlockTotal)
      delete [] pBlockTotal;

   if (wfmFile1)
      fclose(wfmFile1);

   if (wfmFile2)
      fclose(wfmFile2);

   return hr;
}

//=========================================================================================================
//                                        - LoadAsciiArbWfmFromFile -
HRESULT WX218x::IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFile(BSTR Channel, BSTR FileName, long* val)
{
   //Function not supported for WX2184 and trace mode Combine

	//Use this function to download waveforms that were created via ArbConnection with markers or
   // without markers in to the arbitrary memory.

   //Every point in the file is 2 bytes, in range from - to +
   //To every point we added half of DAC depend on instrument
   //The file is text file with space
   HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strChannel, strFileName, strExtension;
   CString strWaveNameOpposite;
   long lengthFile, pos, lengthString, numBytes, fileSize, tmpSize, wfmSize, file_count;
   short int *binData = VI_NULL;
   short int *pwData = VI_NULL;
   short int * wfmData = VI_NULL; 
   double divider_12bit = 2048.0;
   double divider_14bit = 8192.0;
   double divider_current = 2048.0;
   double data;
   long cntCheck;
   long wfmIndexNameOpposite;
   CString strCommand, strWaveName, hdrTrace, cmdBuff, strActiveChannel;
   CString strTmp;
   long stbLoops = 0;    //size of Data
   long wfmCount, wfmCountOpposite, wfmIndexName, sizeAv, wfmSizeMin,sizeAvOpposite;
   int ii, indexChan,indexChanOpposite;
   unsigned short posScope_12bit = POS_SCOPE_12BIT;
   double negScope_12bit = NEG_SCOPE_12BIT;
   unsigned short posScope_14bit = POS_SCOPE_14BIT;
   double negScope_14bit = NEG_SCOPE_14BIT;
   unsigned short posScope_current = POS_SCOPE_12BIT;
   double negScope_current = NEG_SCOPE_12BIT;
   string name, nameOpposite;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len;
   long sizeDigSeg;
   CString strSystErr = _T("*OPC?\n");
   CString strFormatSegSize, strFormatSegNum, strFormatSegSize2;
   int modelNumber;
   long cnt, cntOpposite;      //variable that is same to wfmSize
   long cntCombine;  //waveform size of combine waveform
   WX218xTraceModeEnum traceModeEnum;
   long handleOpposite;
   int segArbExist = 0;   //variable for know if arbitrary segment was already defined from Digital
   WX218xArbitraryResolutionEnum arbRes;  //for know it is 1P or 2P

   arbRes = WX218xArbitraryResolution1P;  //by default

    if (GetSimulate())  //temporary close for offline
   {
      *val = 1;    //Waveform Handle = 1 for offline
      return hr;
   }

   //Checking model number
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      posScope_current = posScope_12bit;
      negScope_current = negScope_12bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN;
      break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
      break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
      break;

     case MNM_WS8351:
     case MNM_WS8352:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WS835X;
      break;

      case MNM_WX2184:
      case MNM_WX1284:
	  case MNM_WX2184C:
      case MNM_WX1284C:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184;
      break;

     default:
      posScope_current = posScope_12bit;
      negScope_current = negScope_12bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN;
       
    }

   strChannel = COLE2T(Channel);
   strFileName = COLE2T(FileName);

   lengthFile = strFileName.GetLength();
   lengthString = strFileName.GetLength() + 1;

   if (!lengthFile)
   {
      hr = err.InvalidValue(_T("FileName"), FileName);
      *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }

         wfmSize = 0;
         //Getting file size
         hr = WX218x::GetAsciiFileSize(strFileName, wfmSize);
         if (!SUCCEEDED(hr))
         {
            *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
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
            *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }//end if,Can not open file

         binData = new short  [wfmSize];

         file_count = 0;

         while (file_count < wfmSize && !feof(wfmFile))
         {
            fscanf(wfmFile, "%lg", &data);
            binData[file_count] = (short) data;
            file_count ++;
         }

         fclose(wfmFile);


   //Sending Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   cnt = wfmSize;

   //Doing this only for model WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
   {
    //Checking trace mode
    //If trace mode is duplicate or zero or combine, user can use this current function,
    //else, giving message to use function <CreateAdvance>

      //NEW 30.07.2014
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
      {
      hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {  
         *val = 0; 
         return hr;
      }

      //NEW 20.05.2014 Double was removed from scipi
      /*if (traceModeEnum == WX218xTraceModeDouble)
      {
         strTmp = _T("Normal");

         hr = err.TraceModeNormalFile(strTmp);
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;

      }//end if, Trace Mode is None or Normal */


      if ( traceModeEnum == WX218xTraceModeCombine)
      {
        //In the buffer that we recieved there two waveforms.
        //We must calculate size for every channel

#ifdef WX2184_ADD_32PT
       cntCombine = (cnt-32)/2;
#else
      cntCombine = cnt/2;
#endif


       //NEW 24.04.2014 
        hr = err.TraceModeNotSupp();
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;
        // cntCombine = cnt/2;
      }//end if,traceMode is Combine

      }//end if, it is WX2184 or WX1284

      //Checking Arbitrary Resolution, if it is 2P, segment must be:*2
      hr = WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(Channel, &arbRes);
      if (hr != S_OK)
      {  
         *val = 0;   
         return hr;
      }

   }//end if, modelNumber == MNM_WX2184 or WX1284 or WX2182C

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
     //NEW 22.05.2014, checking it is 1P or 2P
     if (arbRes == WX218xArbitraryResolution1P) //it is 1P res
     {
       if ((cntCombine< wfmSizeMin) || (cntCombine > m_MemorySize) || (cntCombine%m_WfmQuantum))
       {
        hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;
       }

     }//end if, it is 1P res

     else //it is 2P res
     {
       if (((cntCombine*2)< wfmSizeMin) || ((cntCombine*2) > m_MemorySize) || ((cntCombine*2)%m_WfmQuantum))
       {
        hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;
       }

     }//end else, it is 2P res

   }//end if, it is mode combine

   else //it is not mode Combine
   {
    //NEW 22.05.2014, checking it is 1P or 2P
    if (arbRes == WX218xArbitraryResolution1P) //it is 1P
    {
     if ((cnt< wfmSizeMin) || (cnt > m_MemorySize) || (cnt%m_WfmQuantum))
     {
      hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
     }

    }//end if,it is 1P 

    else //it is 2P
    {
     if (((cnt*2)< wfmSizeMin) || ((cnt*2) > m_MemorySize) || ((cnt*2)%m_WfmQuantum))
     {
      hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
     }

    }//end else, it is 2P

   }//end else, it is not mode Combine

   //Getting Active Channel
   strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

   wfmCount = m_waveformManager.m_WfmCount[indexChan-1];

   //Checking if waveform count is already maximum number 
   if (wfmCount > MAX_NUM_SEGMENTS)
   {
      hr = err.MaxCountSegments();
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

     //Checking if there is available memory
     if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
     {
       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P) //it is 1P
       {
        if (cntCombine > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

       }//end if, it is 1P res

       else //it is 2P res
       {
        if ((cntCombine*2) > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

       }//end else, it is 2P res

     }//end if, it is WX2184 and Combine

     else //it is not mode Combine
     {
       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P) //it is 1P res
       {
        if (cnt > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }
       }//end if, it is 1P res

       else //it is 2P
       {
        if ((cnt*2) > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

       }//end else, it is 2P

     }//end else, it is not mode Combine

  //NEW 28.10.2012  Checking this only for models: WX2181BD,WX2182BD,WX1281BD,WX1282BD
     //NEW 18.03.2014 checking this for WX2184 to
   if (modelNumber == MNM_WX2181BD || modelNumber == MNM_WX2182BD || modelNumber == MNM_WX1281BD || modelNumber == MNM_WX1282BD || modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
    if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C) //it is not WX2184, WX1284, WX2182C
    {
    //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[indexChan-1][wfmCount];

    if (cnt != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
    {
     strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
     strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
     strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
     hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
     *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
     return hr;
    }//end if, in this segment in Digital was already something download

    }//end if, it is not WX2184, WX1284, WX2182C

    else //it is WX2184 or WX1284 or WX2182C
    {
      //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

      //Checking this only for current channel 1 or 2 (WX2184,WX1284)
      //Only for channel 1 (WX2182C)

      //NEW 30.07.2014 add by Ira
    if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    {
      if (indexChan == 1 || indexChan == 2) //current chan is 1 or 2
      {
        if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
        {
         if (traceModeEnum == WX218xTraceModeCombine)
          cntCheck = cntCombine;
         else
         cntCheck = cnt;
        }//end if, it is WX2184 or WX1284

        else //it is WX2182C
        {
         cntCheck = cnt;
        }//end else, it is WX2182C

        //NEW 22.05.2014, checking it is 1P or 2P res
        if (arbRes == WX218xArbitraryResolution1P) //it is 1P
        {
        if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end if, it is 1P

        else //it is 2P
        {
         if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end else, it is 2P

        //Now checking if arbitrary segment was already defined from Digital
         if (sizeDigSeg != 0)
            segArbExist = 1;   //arbitrary segment was already defined from Digital

      }//end if, current chan is 1 or 2

    }//end if, it is WX2184 or WX1284

    else //it is WX2182C
    {
      if (indexChan == 1) //current chan is 1
      {
        cntCheck = cnt;
        //NEW 22.05.2014, checking it is 1P or 2P res
        if (arbRes == WX218xArbitraryResolution1P) //it is 1P
        {
        if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end if, it is 1P

        else //it is 2P
        {
         if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end else, it is 2P

        //Now checking if arbitrary segment was already defined from Digital
         if (sizeDigSeg != 0)
            segArbExist = 1;   //arbitrary segment was already defined from Digital

      }//end if, current chan is 1
    }//end else, it is WX2182C

        //======================================================================================================
     //NEW 9.04.2014 
     //If mode is None, checking size of segment on opposite channel
     //If size is different, giving error
     //If mode is not NONE (any another mode), count of segments on current channel and opposite channel
     //must be the same.
     //If count of segments are not the same, giving error message to the user,
     //that he should previous delete all segments of the current part if he want to use this trace mode


      //NEW 30.07.2014 add by Ira
      //Checking this only for WX2184 or WX1284
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
      {
      //Getting index of opposite channel and creating handle for opposite channel
      indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

      //Getting count of segments from opposite channel
      wfmCountOpposite = m_waveformManager.m_WfmCount[indexChanOpposite-1];

      if (traceModeEnum != WX218xTraceModeSingle) //trace mode is not None
      {
         //Checking that count of segments on two opposite channels must be equal
         if (wfmCount != wfmCountOpposite)
         {
           hr = err.CountSegNotEqual();
           *val = 0;
           return hr;
         }
      }//end if, trace mode is not None

      else //it is mode None
      {
        //Checking if on opposite channel segment is with the same size
          cntOpposite = m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount];

          //NEW 22.05.2014, checking it is 1P or 2P
          if (arbRes == WX218xArbitraryResolution1P) //it is 1P
          {
          if (cntOpposite != 0 && cntCheck != cntOpposite)
          {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
          }

          }//end if, it is 1P

          else //it is 2P
          {
           if (cntOpposite != 0 && (cntCheck*2) != cntOpposite)
           {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
           }

          }//end else, it is 2P
      }//end else, it is mode None
      //========================================================================================================

     }//end if, it is WX2184 or WX1284

    }//end else, it is WX2184, or WX2182C, WX1284

   }//end if, models BD or WX2184
  
   double checkPoint;

   unsigned short* pBlock = new unsigned short[wfmSize];
   unsigned short point;

   for (ii=0; ii<wfmSize; ii++)
   {
      checkPoint = binData[ii];  
      point = posScope_current + (unsigned short)checkPoint;
      pBlock[ii] = point;
   }

   //Making waveform index name
   if (indexChan == 1)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount; 

   else if (indexChan == 2)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

   else if (indexChan == 3)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;  

   else //indexChan = 4
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

   m_waveformManager.CreateWaveformName(name, wfmIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strWaveName = buff;

   //NEW 22.10.2013 
   //doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
       if (traceModeEnum != WX218xTraceModeSingle)
       {
         //Getting index of opposite channel and creating handle for opposite channel
         indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

         //Making waveform index name
         if (indexChanOpposite == 1)
          wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount; 

         else if (indexChanOpposite == 2)
           wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

         else if (indexChanOpposite == 3)
           wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;  

         else //indexChan = 4
           wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

         m_waveformManager.CreateWaveformName(nameOpposite, wfmIndexNameOpposite);
         sprintf_s(buff, sizeof(buff), "%s", name.c_str());

         strWaveNameOpposite = buff;
       }//end if, trace mode is not none

   }//end if, is WX2184

    if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
    {
      if (segArbExist == 0) //segment was not defined from digital
      {
       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P) //it is 1P
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntCombine);
       else
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntCombine*2);

       hr = io.Printf(strCommand);  //temporary close for offline 
      }//end if, segment was not defined from digital
    }//end if, it is mode Combine

    else //it is not mode Combine
    {
     if (segArbExist == 0) //segment was not defined from Digital
     {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P)
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cnt);
      else //it is 2P
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cnt*2);

      hr = io.Printf(strCommand);  //temporary close for offline 
     }//end if, segment was not defined from Digital

    }//end else, it is not mode Combine
  
   strCommand.Format(_T(":TRAC:SEL %d"), wfmCount+1);
   hr = io.Printf(strCommand);  //temporary close for offline

   //Checking if was enough memory to define segment
   if (!SUCCEEDED(hr))
   {
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

   switch (interfaceType)
   {
    case VI_INTF_GPIB:
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);  //temporary close for offline
     
      do
      {
       hr = io.ReadStatusByte(&statusByte); //temporary close for offline
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

    default:  //TCPIP
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline

     hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
     hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   *val = m_waveformManager.CreateWaveform(name, indexChan);  //saving creating waveform in map
   m_waveformManager.m_WfmCount[indexChan-1]++;

   //Updating waveform size available
   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      {
       sizeAv = m_SizeAvailable[indexChan-1] - cntCombine;  
       m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cntCombine; 
      }//end if, it is 1P

      else //it is 2P
      {
        sizeAv = m_SizeAvailable[indexChan-1] - (cntCombine*2);  
        m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
        m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cntCombine*2); 
      }//end else, it is 2P

   }//end if, it is mode Combine

   else //it is not mode Combine
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      {
       sizeAv = m_SizeAvailable[indexChan-1] - cnt;  
       m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cnt; 
      }//end if, it is 1P

      else //it is 2P
      {
        sizeAv = m_SizeAvailable[indexChan-1] - (cnt*2);  
        m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cnt*2); 
      }//end else, it is 2P

   }//end else, it is not mode Combine
  

    //NEW 22.10.2013
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
       if (traceModeEnum != WX218xTraceModeSingle)
       {
         handleOpposite = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);  //saving creating waveform in map
         m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

         if (traceModeEnum == WX218xTraceModeCombine)
          {
            //NEW 22.05.2014, checking it is 1P or 2P
            if (arbRes == WX218xArbitraryResolution1P) //it is 1P
            {
            //Updating waveform size available
            sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cntCombine;  
            m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

            //NEW 28.10.2012
            //Saving in array m_ArrayArbSeg size of this segment
             m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cntCombine;
            }//end if, it is 1P

            else //it is 2P
            {
              //Updating waveform size available
              sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cntCombine*2);  
              m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

              //NEW 28.10.2012
              //Saving in array m_ArrayArbSeg size of this segment
               m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cntCombine*2);
            }//end else, it is 2P

           }//end if, it is Combine mode

          else //it is not Combine mode
          {
            //NEW 22.05.2014, checking it is 1P or 2P
            if (arbRes == WX218xArbitraryResolution1P) //it is 1P
            {
            //Updating waveform size available
            sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cnt;  
            m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

            //NEW 28.10.2012
            //Saving in array m_ArrayArbSeg size of this segment
             m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cnt;

            }//end if, it is 1P

            else //it is 2P
            {
              //Updating waveform size available
              sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cnt*2);  
              m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

              //NEW 28.10.2012
              //Saving in array m_ArrayArbSeg size of this segment
               m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cnt*2);

            }//end else, it is 2P
           }//end else, it is not Combine mode

       }//end if, trace mode is not None

   }//end if, it is WX2184

   delete [] pBlock;

   if (binData)
     delete [] binData;

   if (wfmFile)
      fclose(wfmFile);

   return hr;
}

//===============================================================================================================================================================
//=============================================================================================================
//                                      - LoadBinaryArbWfmFromFileAdv -
HRESULT WX218x::IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFileAdv(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
{
	//Use this function only for WX2184
    //This function for modes:Combine
	HRESULT hr = S_OK;
   FILE *wfmFile1 = VI_NULL;
   FILE *wfmFile2 = VI_NULL;
   CString strChannel, strFileName1, strFileName2, strExtension1, strExtension2;
   long lengthFile1, lengthFile2, pos1, pos2, lengthString1, lengthString2, numBytes1, numBytes2, fileSize1, fileSize2; 
   long tmpSize1, tmpSize2, wfmSize1, wfmSize2, file_count1, file_count2;
   short * binData1 = VI_NULL;
   short *binData2 = VI_NULL;
   short int *pwData1 = VI_NULL;
   short int *pwData2 = VI_NULL;
   double * wfmData1 = VI_NULL;
   double * wfmData2 = VI_NULL;
   double divider_14bit = 8192.0;
   double divider_current = divider_14bit;
   double data;
   CString strCommand, strWaveName, hdrTrace, cmdBuff, strActiveChannel;
   CString strWaveNameOpposite, strTmp;
   long cntData1, cntData2, cntTotal, stbLoops = 0; 
   long wfmCount, wfmIndexName, sizeAv, wfmSizeMin;
   long sizeAvOpposite, wfmIndexNameOpposite;
   int indexChan, indexChanOpposite, ii, jj;
   string name, nameOpposite;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len, sizeDigSeg;
   CString strSystErr = _T("*OPC?\n");
   CString strFormatSegSize, strFormatSegSize2, strFormatSegNum;
   WX218xTraceModeEnum traceModeEnum;
   int segArbExist = 0;  //variable for know if segment was already defined from Digital
   unsigned short posScope_current = POS_SCOPE_14BIT;
   unsigned short* pBlockTotal = VI_NULL;
   double checkPoint;
   unsigned short point;
   WX218xArbitraryResolutionEnum arbRes;  //for know it is 1P or 2P

   arbRes = WX218xArbitraryResolution1P;  //by default

    //NEW 13.05.2014
   unsigned  short  *binDataUs1 = VI_NULL;
   unsigned short *binDataUs2 = VI_NULL;


    if (GetSimulate())  //temporary close for offline
   {
      *Handle1 = 1;    //Waveform Handle = 1 for offline
      *Handle2 = 32001;    //Waveform Handle = 1 for offline
      return hr;
   }

   strChannel = COLE2T(Channel);

   //Doing all for first file
   strFileName1 = COLE2T(FileName1);

   lengthFile1 = strFileName1.GetLength();
   lengthString1 = strFileName1.GetLength() + 1;

   if (!lengthFile1)
   {
      hr = err.InvalidValue(_T("FileName"), FileName1);
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }
     
         //Converting CString to char*/TCHAR
         char *tmpChar1 = new char [lengthString1];
         TCHAR *tmpStr1 = new TCHAR [lengthString1];

         _tcscpy_s(tmpStr1, lengthString1, strFileName1);
         numBytes1 = wcstombs(tmpChar1, tmpStr1, lengthString1);

         //Open Binary File for reading 
         wfmFile1 = fopen(tmpChar1, "rb"); 

         delete [] tmpChar1;
         delete [] tmpStr1;

         if (!wfmFile1)  //Can not open file 
         {
            hr = err.CannotOpenFile(strFileName1);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }//end if,Can not open file

         //Getting file size
         hr = WX218x::GetFileSize(wfmFile1, &fileSize1);
         if (!SUCCEEDED(hr))
         {
            if (wfmFile1)
               fclose(wfmFile1);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }

         binData1 = new short [fileSize1];  //NEW 12/03/2014  

         tmpSize1 = fread(binData1, sizeof(ViByte), fileSize1, wfmFile1);
         if (tmpSize1 != fileSize1)  //Invalid reading file
         {
            hr = err.ReadingFile(strFileName1);
            if (binData1)
               delete [] binData1;

            if (wfmFile1)
               //Close file that was open
               hr = fclose(wfmFile1);

            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

            return hr;  
         }//end if, Invalid reading file

         //Calculate waveform size
         wfmSize1 = fileSize1/2;

   //==========================================================================================================

    //Doing all for second file
   strFileName2 = COLE2T(FileName2);

   lengthFile2 = strFileName2.GetLength();
   lengthString2 = strFileName2.GetLength() + 1;

   if (!lengthFile2)
   {
      hr = err.InvalidValue(_T("FileName"), FileName2);
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      return hr;
   }
      
         //Converting CString to char*/TCHAR
         char *tmpChar2 = new char [lengthString2];
         TCHAR *tmpStr2 = new TCHAR [lengthString2];

         _tcscpy_s(tmpStr2, lengthString2, strFileName2);
         numBytes2 = wcstombs(tmpChar2, tmpStr2, lengthString2);

         //Open Binary File for reading 
         wfmFile2 = fopen(tmpChar2, "rb"); 

         delete [] tmpChar2;
         delete [] tmpStr2;

         if (!wfmFile2)  //Can not open file 
         {
            hr = err.CannotOpenFile(strFileName2);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

            if (binData1)
             delete [] binData1;

            return hr;
         }//end if,Can not open file

         //Getting file size
         hr = WX218x::GetFileSize(wfmFile2, &fileSize2);
         if (!SUCCEEDED(hr))
         {
            if (wfmFile2)
               fclose(wfmFile2);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

            if (binData1)
             delete [] binData1;

            return hr;
         }

         //binData2 = new double [fileSize2];  //NEW 12.03.2014 doesn't work with 32M
         binData2 = new short [fileSize2];  

         tmpSize2 = fread(binData2, sizeof(ViByte), fileSize2, wfmFile2);
         if (tmpSize2 != fileSize2)  //Invalid reading file
         {
            hr = err.ReadingFile(strFileName2);
            if (binData1)
               delete [] binData1;

            if (binData2)
               delete [] binData2;

            if (wfmFile1)
               //Close file that was open
               hr = fclose(wfmFile1);

            if (wfmFile2)
               //Close file that was open
               hr = fclose(wfmFile2);

            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

            return hr;  
         }//end if, Invalid reading file

         //Calculate waveform size
         wfmSize2 = fileSize2/2;
   
   //==============================================================================================================

   //Checking if size of file1 is equal to size of file2
   if (wfmSize1 != wfmSize2)
   {
      hr = err.FileSizeNotEqual(_T(""));
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      if (wfmFile1)
       fclose(wfmFile1);

      if (wfmFile2)
       fclose(wfmFile2);

       return hr;    
   }//end if, the files aren't with the same size

   //Sending Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184;

   cntData1 = wfmSize1;
   cntData2 = wfmSize2;

  
    //Checking trace mode
    //If trace mode is Normal, user can use this current function,
    //else, giving message to use <CreateCustom>

      /*hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
           delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      } */

      //NEW 20.05.2014
      //Doesn't check trace mode, putting to Combine
     hr = WX218x::IWX218xArbitraryWaveform_put_TraceMode(WX218xTraceModeCombine);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
           delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }

       hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
           delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      } 

      //NEW 20.05.2014 doesn't check trace mode, putting to combine

      /*if (traceModeEnum == WX218xTraceModeDuplicate || traceModeEnum == WX218xTraceModeZero || traceModeEnum == WX218xTraceModeSingle)
      {
         if (traceModeEnum == WX218xTraceModeDuplicate)
            strTmp = _T("Duplicate");
         else if (traceModeEnum == WX218xTraceModeZero)
            strTmp = _T("Zero");
          else 
            strTmp = _T("None");

         hr = err.TraceModeDuplicate(strTmp);
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }//end if, Trace Mode is None or Normal  */

      hr = WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(Channel, &arbRes);
      if (hr != S_OK)
      {  
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
           delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }

   //NEW 22.05.2014, checking it is 1P or 2P
   if (arbRes == WX218xArbitraryResolution1P) //it is 1P
   {

   //Checking waveform size for the first buffer
   if ((cntData1< wfmSizeMin) || (cntData1 > m_MemorySize) || (cntData1%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File1"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }

   //Checking waveform size for the second buffer
   if ((cntData2< wfmSizeMin) || (cntData2 > m_MemorySize) || (cntData2%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File2"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }

   }//end if, it is 1P

   else //it is 2P
   {
     //Checking waveform size for the first buffer
    if (((cntData1*2)< wfmSizeMin) || ((cntData1*2) > m_MemorySize) || ((cntData1*2)%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File1"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }

   //Checking waveform size for the second buffer
   if (((cntData2*2)< wfmSizeMin) || ((cntData2*2) > m_MemorySize) || ((cntData2*2)%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File2"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }

   }//end else,it is 2P

   //Checking if two buffer sizes are equal
   if (cntData1 != cntData2)
   {
      hr = err.SizeArrayNotEqual(_T(""));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }
   

   strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

   wfmCount = m_waveformManager.m_WfmCount[indexChan-1];

   //Checking if waveform count is already maximum number 
   if (wfmCount > MAX_NUM_SEGMENTS)
   {
      hr = err.MaxCountSegments();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
   }

   //Checking if there is available memory

   //NEW 22.05.2014, checking it is 1P or 2P
   if (arbRes == WX218xArbitraryResolution1P) //it is 1P
   {
     if (cntData1 > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
     }

   }//end if, it is 1P

   else //it is 2P
   {
    if ((cntData1*2) > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
     }

   }//end else, it is 2P

     //NEW 18.03.2014
     //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

      //Checking this only for current channel 1 or 2
      if (indexChan == 1 || indexChan == 2) //current chan is 1 or 2
      {
        //NEW 22.05.2014, checking it is 1P or 2P
        if (arbRes == WX218xArbitraryResolution1P) //it is 1P
        {
        if (cntData1 != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

           if (binData1)
            delete [] binData1;

           if (binData2)
            delete [] binData2;

           return hr;
         }//end if, in this segment in Digital was already something download

        }//end if, it is 1P

        else //it is 2P
        {
         if ((cntData1*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

           if (binData1)
            delete [] binData1;

           if (binData2)
            delete [] binData2;

           return hr;
         }//end if, in this segment in Digital was already something download

        }//end else,it is 2P 

        if (sizeDigSeg != 0)
           segArbExist = 1;  //this segment was already defined from Digital

      }//end if, current chan is 1 or 2

   //Making waveform index name
   if (indexChan == 1)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

   else if (indexChan == 2)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

   else if (indexChan == 3)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

   else //indexChan = 4
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

   m_waveformManager.CreateWaveformName(name, wfmIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strWaveName = buff;

  //Getting index of opposite channel and creating handle for opposite channel
  indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

  //Making waveform index name
  if (indexChanOpposite == 1)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

  else if (indexChanOpposite == 2)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

  else if (indexChanOpposite == 3)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

  else //indexChan = 4
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

  m_waveformManager.CreateWaveformName(nameOpposite, wfmIndexNameOpposite);
  sprintf_s(buff, sizeof(buff), "%s", name.c_str());

  strWaveNameOpposite = buff;

  //NEW 20.05.2014 Double was removed from the scipi
   //NEW 13.05.2014
  //If trace mode is combine, call to function that prepared one buffer
   /*if (traceModeEnum == WX218xTraceModeDouble) //trace mode is Normal(Double)
   {
     //Calculation total size for two waveforms
     cntTotal = cntData1 * 2;

     //Allocation memory for data for both channels
     pBlockTotal = new unsigned short[cntTotal];

     for(jj = 0; jj < cntTotal; )  //loop for both channels and saving data in total buffer
     {
      for (ii = 0; ii < cntData1; ii++) //Loop for first buffer
      {
       checkPoint = binData1[ii];
       point = posScope_current + (unsigned short) checkPoint;
       pBlockTotal[jj] = point;

       jj++;
      }//end for, Loop for first buffer

      for (ii = 0; ii < cntData2; ii++) //Loop for second buffer
      {
       checkPoint = binData2[ii];
       point = posScope_current + (unsigned short) checkPoint;
       pBlockTotal[jj] = point;

       jj++;
      }//end for, Loop for second buffer

     }//end for, loop for both channels and saving data in total buffer

   }//end if, the trace mode is Normal (Double)  */


   //else //The trace mode is Combine
  if (traceModeEnum == WX218xTraceModeCombine)
   {
       //Calculation total size for two waveforms
#ifdef WX2184_ADD_32PT
     cntTotal = cntData1 * 2 + 32;
#else
     cntTotal = cntData1 * 2;
#endif

     pBlockTotal = new unsigned short[cntTotal];

     binDataUs1 = new unsigned short [fileSize1]; 
     binDataUs2 = new unsigned short [fileSize2];

     for (ii = 0; ii < cntData1; ii++) //Loop for first buffer
      {
       checkPoint = binData1[ii];
       point = posScope_current + (unsigned short) checkPoint;
       binDataUs1[ii] = point;

      }//end for, Loop for first buffer

      for (ii = 0; ii < cntData2; ii++) //Loop for second buffer
      {
       checkPoint = binData2[ii];
       point = posScope_current + (unsigned short) checkPoint;
       binDataUs2[ii] = point;

      }//end for, Loop for second buffer

       //Call to function that recieves two buffer, length of segment and outputbuffer
     //and combined two waveform
     WX218x::BuildCombinedWave(binDataUs1, binDataUs2, cntData1, pBlockTotal);

     //Free memory
     if (binDataUs1)
      delete [] binDataUs1;

     if (binDataUs2)
      delete [] binDataUs2;

   }//end else,The trace mode is Combine 

    if (segArbExist == 0)
    {
     //NEW 22.05.2014, checking it is 1P or 2P
     if (arbRes == WX218xArbitraryResolution1P)
      strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntData1);
     else
      strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntData1*2);

     hr = io.Printf(strCommand);  //temporary close for offline
    }
  
   strCommand.Format(_T(":TRAC:SEL %d"), wfmCount+1);
   hr = io.Printf(strCommand);  //temporary close for offline

   //Checking if was enough memory to define segment
   if (!SUCCEEDED(hr))
   {
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      if (pBlockTotal)
       delete [] pBlockTotal;

      return hr;
   }

   switch (interfaceType)
   {

   case VI_INTF_GPIB:  //GPIB
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);

      do
      {
         hr = io.ReadStatusByte(&statusByte);
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

   default:  //TCPIP
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   *Handle1 = m_waveformManager.CreateWaveform(name, indexChan);  //saving creating waveform in map
   m_waveformManager.m_WfmCount[indexChan-1]++;

   //Updating waveform size available

   //NEW 22.05.2014, checking it is 1P or 2P
   if (arbRes == WX218xArbitraryResolution1P) //it is 1P
   {
    sizeAv = m_SizeAvailable[indexChan-1] - cntData1;  
    m_SizeAvailable[indexChan-1] = sizeAv; 

     //NEW 28.10.2012
   //Saving in array m_ArrayArbSeg size of this segment
   m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cntData1;

   }//end if, it is 1P

   else //it is 2P
   {
     sizeAv = m_SizeAvailable[indexChan-1] - (cntData1*2);  
     m_SizeAvailable[indexChan-1] = sizeAv; 

     //NEW 28.10.2012
     //Saving in array m_ArrayArbSeg size of this segment
     m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cntData1*2);

   }//end else, it is 2P

  *Handle2 = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);
  //saving creating waveform in the map
  m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

  //Updating waveform size available

  //NEW 22.05.2014, checkinng it is 1P or 2P
  if (arbRes == WX218xArbitraryResolution1P) //it is 1P
  {
   sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cntData2;
   m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

   m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cntData2;

  }//end if, it is 1P

  else //it is 2P
  {
   sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cntData2*2);
   m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

   m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cntData2*2);
  }//end else, it is 2P


   if (binData1)
       delete [] binData1;

   if (binData2)
       delete [] binData2;

   if (pBlockTotal)
       delete [] pBlockTotal;

   if (wfmFile1)
      fclose(wfmFile1);

   if (wfmFile2)
      fclose(wfmFile2);

   return hr;
}

//=====================================================================================================================================================

//==========================================================================================================
//                             - LoadBinaryArbWfmFromFile -
HRESULT WX218x::IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFile(BSTR Channel, BSTR FileName, long* val)
{
   //Use this function to download binary waveforms that were created via ArbConnection with markers or
   // without markers in to the arbitrary memory.

   //Every point in the file is 2 bytes, in range from - to +
   //To every point we added half of DAC depend on instrument
   HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strChannel, strFileName, strExtension;
   CString strWaveNameOpposite;
   long lengthFile, pos, lengthString, numBytes, fileSize, tmpSize, wfmSize, file_count;
   short int *binData = VI_NULL;
   short int *pwData = VI_NULL;
   short int * wfmData = VI_NULL; 
   double divider_12bit = 2048.0;
   double divider_14bit = 8192.0;
   double divider_current = 2048.0;
   double data;
   long cntCheck;
   long wfmIndexNameOpposite;
   CString strCommand, strWaveName, hdrTrace, cmdBuff, strActiveChannel;
   CString strTmp;
   long stbLoops = 0;    //size of Data
   long wfmCount, wfmCountOpposite, wfmIndexName, sizeAv, wfmSizeMin,sizeAvOpposite;
   int ii, indexChan,indexChanOpposite;
   unsigned short posScope_12bit = POS_SCOPE_12BIT;
   double negScope_12bit = NEG_SCOPE_12BIT;
   unsigned short posScope_14bit = POS_SCOPE_14BIT;
   double negScope_14bit = NEG_SCOPE_14BIT;
   unsigned short posScope_current = POS_SCOPE_12BIT;
   double negScope_current = NEG_SCOPE_12BIT;
   string name, nameOpposite;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len;
   long sizeDigSeg;
   CString strSystErr = _T("*OPC?\n");
   CString strFormatSegSize, strFormatSegNum, strFormatSegSize2;
   int modelNumber;
   long cnt, cntOpposite;      //variable that is same to wfmSize
   long cntCombine;  //waveform size of combine waveform
   WX218xTraceModeEnum traceModeEnum;
   long handleOpposite;
   int segArbExist = 0;   //variable for know if segment was already define from Digital
   WX218xArbitraryResolutionEnum arbRes;  //for know it is 1P or 2P

   arbRes = WX218xArbitraryResolution1P;  //by default

   if (GetSimulate())  //temporary close for offline
   {
      *val = 1;    //Waveform Handle = 1 for offline
      return hr;
   }

   //Checking model number
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
   case MNM_WX2181:
   case MNM_WX2182:
      posScope_current = posScope_12bit;
      negScope_current = negScope_12bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN;
      break;

   case MNM_WX2181B:
   case MNM_WX2182B:
   case MNM_WX2181BD:
   case MNM_WX2182BD:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
      break;

   case MNM_WX2182C:
   case MNM_WX2181C:
   case MNM_WX1281C:
   case MNM_WX1282C:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      break;

   case MNM_WX1281B:
   case MNM_WX1282B:
   case MNM_WX1281BD:
   case MNM_WX1282BD:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
      break;

   case MNM_WS8351:
   case MNM_WS8352:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WS835X;
      break;

   case MNM_WX2184:
   case MNM_WX1284:
   case MNM_WX2184C:
   case MNM_WX1284C:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184;
      break;

   default:
      posScope_current = posScope_12bit;
      negScope_current = negScope_12bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN;

   }

   strChannel = COLE2T(Channel);
   strFileName = COLE2T(FileName);

   lengthFile = strFileName.GetLength();
   lengthString = strFileName.GetLength() + 1;

   if (!lengthFile)
   {
      hr = err.InvalidValue(_T("FileName"), FileName);
      *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }

   //Converting CString to char*/TCHAR
   char *tmpChar = new char [lengthString];
   TCHAR *tmpStr = new TCHAR [lengthString];

   _tcscpy_s(tmpStr, lengthString, strFileName);
   numBytes = wcstombs(tmpChar, tmpStr, lengthString);

   //Open Binary File for reading 
   wfmFile = fopen(tmpChar, "rb"); 

   delete [] tmpChar;
   delete [] tmpStr;

   if (!wfmFile)  //Can not open file 
   {
      hr = err.CannotOpenFile(strFileName);
      *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }//end if,Can not open file

   //Getting file size
   hr = WX218x::GetFileSize(wfmFile, &fileSize);
   if (!SUCCEEDED(hr))
   {
      if (wfmFile)
         fclose(wfmFile);
      *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }

   binData = new short int [fileSize]; 

   tmpSize = fread(binData, sizeof(ViByte), fileSize, wfmFile);
   if (tmpSize != fileSize)  //Invalid reading file
   {
      hr = err.ReadingFile(strFileName);
      if (binData)
         delete [] binData;

      if (wfmFile)
         //Close file that was open
         hr = fclose(wfmFile);

      *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

      return hr;  
   }//end if, Invalid reading file

   //Calculate waveform size
   wfmSize = fileSize/2;

   //Sending Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   cnt = wfmSize;

   //Doing this only for model WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
   {
      //Checking trace mode
      //If trace mode is duplicate or zero or combine, user can use this current function,
      //else, giving message to use function <CreateAdvance>

      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
      {
       hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
       if (hr != S_OK)
       {  
         *val = 0; 
         return hr;
       }
      }//end if, it is WX2184 or WX1284

      //NEW 20.05.2014 Double was removed
      /*if (traceModeEnum == WX218xTraceModeDouble)
      {
         strTmp = _T("Normal");

         hr = err.TraceModeNormalFile(strTmp);
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;

      }//end if, Trace Mode is None or Normal */

      hr = WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(Channel, &arbRes);
      if (hr != S_OK)
      {  
         *val = 0; 
         return hr;
      }


      if ( traceModeEnum == WX218xTraceModeCombine)
      {
         //In the buffer that we recieved there two waveforms.
         //We must calculate size for every channel

#ifdef WX2184_ADD_32PT
         cntCombine = (cnt-32)/2;
#else
         cntCombine = cnt/2;
#endif

         //cntCombine = cnt/2;
      }//end if,traceMode is Combine

   }//end if, modelNumber == MNM_WX2184 or WX1284 or WX2182C

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      {
        if ((cntCombine< wfmSizeMin) || (cntCombine > m_MemorySize) || (cntCombine%m_WfmQuantum))
        {
         hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

      }//end if, it is 1P

      else //it is 2P
      {
       if (((cntCombine*2)< wfmSizeMin) || ((cntCombine*2) > m_MemorySize) || ((cntCombine*2)%m_WfmQuantum))
        {
         hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

      }//end else, it is 2P

   }//end if, it is mode combine

   else //it is not mode Combine
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      {
      if ((cnt< wfmSizeMin) || (cnt > m_MemorySize) || (cnt%m_WfmQuantum))
      {
         hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
      }

      }//end if, it is 1P

      else //it is 2P
      {
       if (((cnt*2)< wfmSizeMin) || ((cnt*2) > m_MemorySize) || ((cnt*2)%m_WfmQuantum))
       {
         hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
       }

      }//end else, it is 2P
   }//end else, it is not mode Combine

   //Getting Active Channel
   strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

   wfmCount = m_waveformManager.m_WfmCount[indexChan-1];

   //Checking if waveform count is already maximum number 
   if (wfmCount > MAX_NUM_SEGMENTS)
   {
      hr = err.MaxCountSegments();
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

   //Checking if there is available memory
   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine)) //it is WX2184 and Combine
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      {
       if (cntCombine > m_SizeAvailable[indexChan-1])
       {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
       }
      }//it is 1P

      else //it is 2P
      {
       if ((cntCombine*2) > m_SizeAvailable[indexChan-1])
       {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
       }

      }//end else, it is 2P

   }//end if, it is WX2184 and Combine

   else //it is not mode Combine
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P)  //it is 1P
      {
      if (cnt > m_SizeAvailable[indexChan-1])
      {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
      }

      }//end if, it is 1P

      else //it is 2P
      {
        if ((cnt*2) > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

      }//end else,it is 2P 
   }//end else, it is not mode Combine

   //NEW 28.10.2012  Checking this only for models: WX2181BD,WX2182BD,WX1281BD,WX1282BD
   //NEW 18.03.2014 checking this for WX2184 to
   if (modelNumber == MNM_WX2181BD || modelNumber == MNM_WX2182BD || modelNumber == MNM_WX1281BD || modelNumber == MNM_WX1282BD || modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C ||  modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
      if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
      {
         //Checking in array m_ArrayDigSeg if already was any download in Digital segment
         sizeDigSeg = m_digitalManager.m_ArrayDigSeg[indexChan-1][wfmCount];

         if (cnt != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
            strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
            strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
            strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
            hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
            *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
            return hr;
         }//end if, in this segment in Digital was already something download

      }//end if, it is not WX2184,WX1284,WX2182C

      else //it is WX2184 or WX1284 or WX2182C
      {
         //Checking in array m_ArrayDigSeg if already was any download in Digital segment
         sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

       if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
       {
         //Checking this only for current channel 1 or 2
         if (indexChan == 1 || indexChan == 2) //current chan is 1 or 2
         {
            if (traceModeEnum == WX218xTraceModeCombine)
               cntCheck = cntCombine;
            else
               cntCheck = cnt;

            //NEW 22.05.2014, checking it is 1P or 2P
            if (arbRes == WX218xArbitraryResolution1P) //it is 1P
            {
            if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
            {
               strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
               strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
               strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
               hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
               *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
               return hr;
            }//end if, in this segment in Digital was already something download

            }//end if, it is 1P

            else //it is 2P
            {
             if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
             {
               strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
               strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
               strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
               hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
               *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
               return hr;
             }//end if, in this segment in Digital was already something download

            }//end else, it is 2P

            if (sizeDigSeg != 0)
               segArbExist = 1;   //this segment was already defined from Digital

         }//end if, current chan is 1 or 2

       }//end if, it is WX2184 or WX1284

       else //it is WX2182C
       {
         if (indexChan == 1) //current chan is 1
         {
               cntCheck = cnt;

            //NEW 22.05.2014, checking it is 1P or 2P
            if (arbRes == WX218xArbitraryResolution1P) //it is 1P
            {
            if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
            {
               strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
               strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
               strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
               hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
               *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
               return hr;
            }//end if, in this segment in Digital was already something download

            }//end if, it is 1P

            else //it is 2P
            {
             if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
             {
               strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
               strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
               strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
               hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
               *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
               return hr;
             }//end if, in this segment in Digital was already something download

            }//end else, it is 2P

            if (sizeDigSeg != 0)
               segArbExist = 1;   //this segment was already defined from Digital

         }//end if, current chan is 1
       }//end if, it is WX2182C

          //======================================================================================================
     //NEW 9.04.2014 
     //If mode is None, checking size of segment on opposite channel
     //If size is different, giving error
     //If mode is not NONE (any another mode), count of segments on current channel and opposite channel
     //must be the same.
     //If count of segments are not the same, giving error message to the user,
     //that he should previous delete all segments of the current part if he want to use this trace mode

       //NEW 31.07.2014 doing this only for WX2184 or WX1284
     if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
     {

      //Getting index of opposite channel and creating handle for opposite channel
      indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

      //Getting count of segments from opposite channel
      wfmCountOpposite = m_waveformManager.m_WfmCount[indexChanOpposite-1];

      if (traceModeEnum != WX218xTraceModeSingle) //trace mode is not Single
      {
         //Checking that count of segments on two opposite channels must be equal
         if (wfmCount != wfmCountOpposite)
         {
           hr = err.CountSegNotEqual();
           *val = 0;
           return hr;
         }
      }//end if, trace mode is not Single

      else //it is mode Single
      {
        //Checking if on opposite channel segment is with the same size
          cntOpposite = m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount];

          //NEW 22.05.2014, checking it is 1P or 2P
          if (arbRes == WX218xArbitraryResolution1P) //it is 1P
          {
          if (cntOpposite != 0 && cntCheck != cntOpposite)
          {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
          }

          }//end if, it is 1P

          else //it is 2P
          {
           if (cntOpposite != 0 && (cntCheck*2) != cntOpposite)
           {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
           }

          }//end else,it is 2P 
      }//end else, it is mode Single

     }//end if, it is WX2184 or WX1284
      //========================================================================================================

      }//end else, it is WX2184 or WX1284 or WX2182C

   }//end if, models BD or WX2184

   double checkPoint;

   unsigned short* pBlock = new unsigned short[wfmSize];
   unsigned short point;

   for (ii=0; ii<wfmSize; ii++)
   {
      checkPoint = binData[ii];  
      point = posScope_current + (unsigned short)checkPoint;
      pBlock[ii] = point;
   }

   //Making waveform index name
   if (indexChan == 1)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount; 

   else if (indexChan == 2)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

   else if (indexChan == 3)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;  

   else //indexChan = 4
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

   m_waveformManager.CreateWaveformName(name, wfmIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strWaveName = buff;

   //NEW 22.10.2013 
   //doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
      if (traceModeEnum != WX218xTraceModeSingle) //trace mode isn't Single
      {
        //Getting index of opposite channel and creating handle for opposite channel
        indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

        //Making waveform index name
        if (indexChanOpposite == 1)
         wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount; 

        else if (indexChanOpposite == 2)
         wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

        else if (indexChanOpposite == 3)
         wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;  

        else //indexChan = 4
         wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

         m_waveformManager.CreateWaveformName(nameOpposite, wfmIndexNameOpposite);
         sprintf_s(buff, sizeof(buff), "%s", name.c_str());

         strWaveNameOpposite = buff;
      }//end if, trace mode isn't NONE

   }//end if, is WX2184

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
      if (segArbExist == 0)
      {
       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P)
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntCombine);
       else
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, (cntCombine*2));

       hr = io.Printf(strCommand);  //temporary close for offline  
      }
   }
   else
   {
      if (segArbExist == 0)
      {
       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P)
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cnt);
       else
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, (cnt*2));

       hr = io.Printf(strCommand);  //temporary close for offline  
      }
   }

   strCommand.Format(_T(":TRAC:SEL %d"), wfmCount+1);
   hr = io.Printf(strCommand);  //temporary close for offline

   //Checking if was enough memory to define segment
   if (!SUCCEEDED(hr))
   {
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

   switch (interfaceType)
   {
   case VI_INTF_GPIB:
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);  //temporary close for offline

      do
      {
         hr = io.ReadStatusByte(&statusByte); //temporary close for offline
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

   default:  //TCPIP
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   *val = m_waveformManager.CreateWaveform(name, indexChan);  //saving creating waveform in map
   m_waveformManager.m_WfmCount[indexChan-1]++;

   //Updating waveform size available
   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      {
       sizeAv = m_SizeAvailable[indexChan-1] - cntCombine;  
       m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cntCombine;  
      }//end if, it is 1P

      else //it is 2P
      {
        sizeAv = m_SizeAvailable[indexChan-1] - (cntCombine*2);  
        m_SizeAvailable[indexChan-1] = sizeAv; 

        //NEW 28.10.2012
        //Saving in array m_ArrayArbSeg size of this segment
        m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cntCombine*2);  
      }//end else,it is 2P 

   }//end if, it is mode Combine

   else //it is not mode Combine
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      {
       sizeAv = m_SizeAvailable[indexChan-1] - cnt;  
       m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cnt; 
      }//end if, it is 1P

      else//it is 2P
      {
       sizeAv = m_SizeAvailable[indexChan-1] - (cnt*2);  
       m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cnt*2); 

      }//end else, it is 2P
   }//end else, it is not mode Combine


   //NEW 22.10.2013
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
      if (traceModeEnum != WX218xTraceModeSingle) //trace mode isn't NONE
      {
        handleOpposite = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);  //saving creating waveform in map
        m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

        if (traceModeEnum == WX218xTraceModeCombine)
        {
         //Updating waveform size available

         //NEW 22.05.2014, checking it is 1P or 2P
         if (arbRes == WX218xArbitraryResolution1P) //it is 1P
         {
          sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cntCombine;  
          m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

          //NEW 28.10.2012
          //Saving in array m_ArrayArbSeg size of this segment
          m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cntCombine;

         }//end if, it is 1P

         else //it is 2P
         {
          sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cntCombine*2);  
          m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

          //NEW 28.10.2012
          //Saving in array m_ArrayArbSeg size of this segment
          m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cntCombine*2);

         }//end else, it is 2P

        }//end if, it is Combine mode

        else //it is not Combine mode
        {
         //NEW 22.05.2014, checking it is 1P or 2P
         if (arbRes == WX218xArbitraryResolution1P) //it is 1P
         {
         //Updating waveform size available
         sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cnt;  
         m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

         //NEW 28.10.2012
         //Saving in array m_ArrayArbSeg size of this segment
         m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cnt;

         }//end if, it is 1P

         else //it is 2P
         {
           //Updating waveform size available
          sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cnt*2);  
          m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

         //NEW 28.10.2012
         //Saving in array m_ArrayArbSeg size of this segment
         m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cnt*2);
         }//end else, it is 2P

        }//end else, it is not Combine mode

      }//end if, trace mode isn't NONE

   }//end if, it is WX2184

   delete [] pBlock;

   if (binData)
      delete [] binData;

   if (wfmFile)
      fclose(wfmFile);

   return hr;
}

//==========================================================================================================
//                                - ConfigureArbWaveTraceMode - 
HRESULT WX218x::IWX218xArbitraryWaveform_ConfigureArbWaveTraceMode(WX218xTraceModeEnum TraceMode)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitraryWaveform::put_TraceMode(TraceMode);

	return hr;
}

//============================================================================================================
//                               - SetActiveSegment -
HRESULT WX218x::IWX218xArbitraryWaveform_SetActiveSegment(BSTR Channel, long SegNum)
{
	HRESULT hr = S_OK;
   CString strCommandSend;

    //Checking range of SegNum1 and SegNum2
   if (SegNum < SEG_NUM_MIN || SegNum > SEG_NUM_MAX)
   {
    hr = err.InvalidValue(_T("val"), SegNum);
    return hr;
   }

    //Sending Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   if (GetSimulate())
      return hr;

   strCommandSend.Format(_T(":TRAC:SEL %d"), SegNum);
   hr = io.Printf(strCommandSend);

   return hr;
}

//==============================================================================================================
//                                 - SetCoupleActiveSegment - 
HRESULT WX218x::IWX218xArbitraryWaveform_SetCoupleActiveSegment(long SegNum1, long SegNum2)
{
	HRESULT hr = S_OK;
   CString strCommand;

   //Checking range of SegNum1 and SegNum2
   if (SegNum1 < SEG_NUM_MIN || SegNum1 > SEG_NUM_MAX)
   {
    hr = err.InvalidValue(_T("val"), SegNum1);
    return hr;
   }

   if (SegNum2 < SEG_NUM_MIN || SegNum2 > SEG_NUM_MAX)
   {
    hr = err.InvalidValue(_T("val"), SegNum2);
    return hr;
   }

   if (GetSimulate())
      return hr;

   strCommand.Format(_T(":TRAC:SEL:COUP %d,%d"), SegNum1,SegNum2);
   hr = io.Printf(strCommand);

   return hr;
}


//=================================================================================================================
//                                          - CreateCustomAdv -
HRESULT WX218x::IWX218xArbitraryWaveform_CreateCustomAdv(SAFEARRAY** Data1, SAFEARRAY** Data2, long* Handle1, long* Handle2)
{
   //Use this function only for WX2184
   //This function for modes:Combine
	HRESULT hr = S_OK;
   CString strCommand, strWaveName, hdrTrace, cmdBuff, strActiveChannel;
   CString strWaveNameOpposite, strTmp;
   long cntData1, cntData2, cntTotal, stbLoops = 0, sizeDigSeg; 
   long wfmCount, wfmIndexName, lBoundArrayData1, lBoundArrayData2, sizeAv, wfmSizeMin;
   long sizeAvOpposite, wfmIndexNameOpposite;
   int indexChan, indexChanOpposite, ii, jj;
   string name, nameOpposite;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len;
   CString strSystErr = _T("*OPC?\n");
   CString strFormatSegSize, strFormatSegSize2, strFormatSegNum;
   WX218xTraceModeEnum traceModeEnum;
   int segArbExist = 0;  //variable for know if segment was already defined from Digital
   unsigned short* pBlockTotal = VI_NULL;
   unsigned short checkPoint;
   WX218xArbitraryResolutionEnum arbRes;  //for know it is 1P or 2P
    _bstr_t bstrChannel;

   arbRes = WX218xArbitraryResolution1P;  //by default

   if (GetSimulate())  //temporary close for offline
   {
      *Handle1 = 1;    //Waveform Handle = 1 for offline
      *Handle2 = 32001;    //Waveform Handle = 1 for offline
      return hr;
   }

   wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184;
    
   // Make sure the number of points provided is less than the maximum memory size
   SAFEARRAY* psaData1 = *Data1;
   SAFEARRAY* psaData2 = *Data2;

   cntData1 = psaData1->rgsabound->cElements;  //getting size of the first array
   cntData2 = psaData2->rgsabound->cElements;  //getting size of the second array

   //Getting lower bound of the first array
   lBoundArrayData1 = psaData1->rgsabound->lLbound;

   //Getting lower bound of the second array
   lBoundArrayData2 = psaData2->rgsabound->lLbound;

   if (lBoundArrayData1 != 0 || lBoundArrayData2 != 0)
   {
      hr = err.LboundArrayZero(_T(""));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

    //Checking trace mode
    //If trace mode is Normal, user can use this current function,
    //else, giving message to use <CreateCustom>

      /*hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;
         return hr;
      }

      if (traceModeEnum == WX218xTraceModeDuplicate || traceModeEnum == WX218xTraceModeZero || traceModeEnum == WX218xTraceModeSingle)
       {
         if (traceModeEnum == WX218xTraceModeDuplicate)
            strTmp = _T("Duplicate");
         else if (traceModeEnum == WX218xTraceModeZero)
            strTmp = _T("Zero");
         else
            strTmp = _T("None");

         hr = err.TraceModeDuplicate(strTmp);
         *Handle1 = 0;
         *Handle2 = 0;

         return hr;
      }//end if, Trace Mode is None or Normal */

    strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

   if (indexChan == 1)
     bstrChannel = _T("Channel1");
    else if  (indexChan == 2)
     bstrChannel = _T("Channel2");
    else if  (indexChan == 3)
     bstrChannel = _T("Channel3");
    else
     bstrChannel = _T("Channel4");

    hr = WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(bstrChannel, &arbRes);
    if (hr != S_OK)
    {
     *Handle1 = 0;
     *Handle2 = 0;
      return hr;
    }

   //NEW 20.05.2014  if current mode is not combine, put mode to Combine
   hr = WX218x::IWX218xArbitraryWaveform_put_TraceMode(WX218xTraceModeCombine);
  if (hr != S_OK)
  {
   *Handle1 = 0;
   *Handle2 = 0;
    return hr;
  }

   hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
   if (hr != S_OK)
   {
     *Handle1 = 0;
     *Handle2 = 0;
     return hr;
   }

   //NEW 22.05.2014, checking it is 1P or 2P
   if (arbRes == WX218xArbitraryResolution1P) //it is 1P
   {
   //Checking waveform size for the first buffer
   if ((cntData1< wfmSizeMin) || (cntData1 > m_MemorySize) || (cntData1%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("Create"), _T("Data1"), _T("Num data points"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
    }
   }//end if, it is 1P

   else //it is 2P
   {
    if (((cntData1*2)< wfmSizeMin) || ((cntData1*2) > m_MemorySize) || ((cntData1*2)%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("Create"), _T("Data1"), _T("Num data points"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
    }
   }//end else, it is 2P

   //Checking waveform size for the second buffer

   //NEW 22.05.2014, checking it is 1P or 2P
   if (arbRes == WX218xArbitraryResolution1P) //it is 1P
   {
   if ((cntData2< wfmSizeMin) || (cntData2 > m_MemorySize) || (cntData2%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("Create"), _T("Data2"), _T("Num data points"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
    }
   }//end if, it is 1P

   else //it is 2P
   {
    if (((cntData2*2)< wfmSizeMin) || ((cntData2*2) > m_MemorySize) || ((cntData2*2)%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("Create"), _T("Data2"), _T("Num data points"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
    }
   }//end else,it is 2P 

   //Checking if two buffer sizes are equal
   if (cntData1 != cntData2)
   {
      hr = err.SizeArrayNotEqual(_T(""));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
    }

   wfmCount = m_waveformManager.m_WfmCount[indexChan-1];

   //Checking if waveform count is already maximum number 
   if (wfmCount > MAX_NUM_SEGMENTS)
   {
      hr = err.MaxCountSegments();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

   //Checking if there is available memory

   //NEW 22.05.2014, checking it is 1P or 2P
   if (arbRes == WX218xArbitraryResolution1P) // it is 1P
   {
     if (cntData1 > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
     }
   }//it is 1P

   else //it is 2P
   {
    if ((cntData1*2) > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
     }
   }//end else, it is 2P

     //NEW 18.03.2014
     //Checking in array m_ArrayDigSeg if already was any download in Digital segment
     //Doing this only for current channel 1 or 2
     if (indexChan == 1 || indexChan == 2) //Current channel is 1 or 2
     {
       sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

       //NEW 22.05.2014, checking if it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P) //it is 1P
       {
         if (cntData1 != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
          strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
          strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
          strFormatSegSize.Format(_T("(%d)"), sizeDigSeg);
          hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
          *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
          *Handle2 = 0;   
          return hr;
         }//end if, in this segment in Digital was already something download
       }//end if, it is 1P

       else //it is 2P
       {
         if ((cntData1*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
          strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
          strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
          strFormatSegSize.Format(_T("(%d)"), sizeDigSeg);
          hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
          *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
          *Handle2 = 0;   
          return hr;
         }//end if, in this segment in Digital was already something download

       }//end else, it is 2P

       if (sizeDigSeg != 0)
        segArbExist = 1;   //segment was already defined from Digital

     }//end if, Current channel is 1 or 2

   //Making waveform index name
   if (indexChan == 1)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

   else if (indexChan == 2)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

   else if (indexChan == 3)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

   else //indexChan = 4
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

   m_waveformManager.CreateWaveformName(name, wfmIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strWaveName = buff;

  //Getting index of opposite channel and creating handle for opposite channel
  indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

  //Making waveform index name
  if (indexChanOpposite == 1)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

  else if (indexChanOpposite == 2)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

  else if (indexChanOpposite == 3)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

  else //indexChan = 4
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

  m_waveformManager.CreateWaveformName(nameOpposite, wfmIndexNameOpposite);
  sprintf_s(buff, sizeof(buff), "%s", name.c_str());

  strWaveNameOpposite = buff;

  //NEW 29.10.2013
  unsigned short* pvData1 = (unsigned short*) psaData1->pvData;
  unsigned short* pvData2 = (unsigned short*) psaData2->pvData;


  //NEW 19.05.2014 Double was removed from scipi
  /*if (traceModeEnum == WX218xTraceModeDouble) //trace mode is Normal(Double)
  {

  //Calculation total size for two waveforms
  cntTotal = cntData1 * 2;

  //Allocation memory for data for both channels
  pBlockTotal = new unsigned short[cntTotal];
 
 /* for(jj = 0; jj < cntTotal; )  //loop for both channels and saving data in total buffer
  {
   for (ii = lBoundArrayData1; ii < cntData1; ii++) //Loop for first buffer
   {
    checkPoint = *(pvData1+ii);
    pBlockTotal[jj] = checkPoint;

    jj++;
   }//end for, Loop for first buffer

   for (ii = lBoundArrayData2; ii < cntData2; ii++) //Loop for second buffer
   {
    checkPoint = *(pvData2+ii);
    pBlockTotal[jj] = checkPoint;

    jj++;
   }//end for, Loop for second buffer 

  }//end for, loop for both channels and saving data in total buffer */



  //Temporary check with memcpy
  //Copy data from the first buffer
 /* memcpy(pBlockTotal, pvData1, cntData1*2);

   //Copy data from the second buffer
  memcpy(pBlockTotal+cntData1, pvData2, cntData2*2);

  }//end if, //trace mode is Normal(Double) */
   

  //else //Trace mode is Combine
  if (traceModeEnum == WX218xTraceModeCombine)
  {
     //Calculation total size for two waveforms
#ifdef WX2184_ADD_32PT
     cntTotal = cntData1 * 2 + 32;
#else
     cntTotal = cntData1 * 2;
#endif

     pBlockTotal = new unsigned short[cntTotal];

    //Call to function that recieves two buffer, length of segment and outputbuffer
   //and combined two waveform
     WX218x::BuildCombinedWave(pvData1, pvData2, cntData1, pBlockTotal);

  }//end else, Trace mode is Combine

    if (segArbExist == 0) //segment was not defined from Digital
    {
     //NEW 22.05.2014 checking it is 1P or 2P
     if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntData1);
     else //it is 2P
      strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntData1*2);

     hr = io.Printf(strCommand);  //temporary close for offline
    }//end if, segment was not defined from Digital
  
   strCommand.Format(_T(":TRAC:SEL %d"), wfmCount+1);
   hr = io.Printf(strCommand);  //temporary close for offline

   //Checking if was enough memory to define segment
   if (!SUCCEEDED(hr))
   {
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (pBlockTotal)
        delete [] pBlockTotal;

      return hr;
   }

   switch (interfaceType)
   {

   case VI_INTF_GPIB:  //GPIB
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);

      do
      {
         hr = io.ReadStatusByte(&statusByte);
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

   default:  //TCPIP
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   *Handle1 = m_waveformManager.CreateWaveform(name, indexChan);  //saving creating waveform in map
   m_waveformManager.m_WfmCount[indexChan-1]++;

   //Updating waveform size available

   //NEW 22.05.2014, checking it is 1P or 2P
   if (arbRes == WX218xArbitraryResolution1P) //it is 1P
   {
     sizeAv = m_SizeAvailable[indexChan-1] - cntData1;  
     m_SizeAvailable[indexChan-1] = sizeAv; 

      //NEW 28.10.2012
      //Saving in array m_ArrayArbSeg size of this segment
      m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cntData1;
    }//end if, it is 1P

   else //it is 2P
   {
     sizeAv = m_SizeAvailable[indexChan-1] - (cntData1*2);  
     m_SizeAvailable[indexChan-1] = sizeAv; 

      //NEW 28.10.2012
      //Saving in array m_ArrayArbSeg size of this segment
      m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cntData1*2);
   }//end else, it is 2P

  *Handle2 = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);
  //saving creating waveform in the map
  m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

  //Updating waveform size available

  //NEW 22.05.2014, checking it is 1P or 2P
  if (arbRes == WX218xArbitraryResolution1P) //it is 1P
  {
    sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cntData2;
    m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

    m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cntData2;
  }//end if, it is 1P

  else //it is 2P
  {
    sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cntData2*2);
    m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

    m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cntData2*2);
  }//end else, it is 2P

  if (pBlockTotal)
   delete [] pBlockTotal;
       
 return hr;
}

//==========================================================================================================
//                                     - LoadArbWfmFromFileAdv -
HRESULT WX218x::IWX218xArbitraryWaveform_LoadArbWfmFromFileAdv(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
{
   //Use this function only for WX2184
   //This function for modes:Combine
	HRESULT hr = S_OK;
   FILE *wfmFile1 = VI_NULL;
   FILE *wfmFile2 = VI_NULL;
   CString strChannel, strFileName1, strFileName2, strExtension1, strExtension2;
   long lengthFile1, lengthFile2, pos1, pos2, lengthString1, lengthString2, numBytes1, numBytes2, fileSize1, fileSize2; 
   long tmpSize1, tmpSize2, wfmSize1, wfmSize2, file_count1, file_count2;
   short * binData1 = VI_NULL;
   short *binData2 = VI_NULL;
   short int *pwData1 = VI_NULL;
   short int *pwData2 = VI_NULL;
   double * wfmData1 = VI_NULL;
   double * wfmData2 = VI_NULL;
   double divider_14bit = 8192.0;
   double divider_current = divider_14bit;
   double data;
   CString strCommand, strWaveName, hdrTrace, cmdBuff, strActiveChannel;
   CString strWaveNameOpposite, strTmp;
   long cntData1, cntData2, cntTotal, stbLoops = 0; 
   long wfmCount, wfmIndexName, sizeAv, wfmSizeMin;
   long sizeAvOpposite, wfmIndexNameOpposite;
   int indexChan, indexChanOpposite, ii, jj;
   string name, nameOpposite;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len, sizeDigSeg;
   CString strSystErr = _T("*OPC?\n");
   CString strFormatSegSize, strFormatSegSize2, strFormatSegNum;
   WX218xTraceModeEnum traceModeEnum;
   int segArbExist = 0;   //variable for know if arbitrary segment was already define from digital
   unsigned short posScope_current = POS_SCOPE_14BIT;
   unsigned short* pBlockTotal = NULL;
   double checkPoint;
   unsigned short point;
   WX218xArbitraryResolutionEnum arbRes;  //for know it is 1P or 2P

   arbRes = WX218xArbitraryResolution1P;  //by default

   //NEW 13.05.2014
   unsigned  short  *binDataUs1 = VI_NULL;
   unsigned short *binDataUs2 = VI_NULL;


   if (GetSimulate())  //temporary close for offline
   {
      *Handle1 = 1;    //Waveform Handle = 1 for offline
      *Handle2 = 32001;    //Waveform Handle = 1 for offline
      return hr;
   }

   strChannel = COLE2T(Channel);

   //Doing all for first file
   strFileName1 = COLE2T(FileName1);

   lengthFile1 = strFileName1.GetLength();
   lengthString1 = strFileName1.GetLength() + 1;

   if (!lengthFile1)
   {
      hr = err.InvalidValue(_T("FileName"), FileName1);
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }

   //Checking file extension for first file
   pos1 = strFileName1.Find(_T("."));
   if (pos1 == -1)
   {
      hr = err.InvalidValue(_T("FileName"), FileName1);
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }

   else  //Checking if File with exention ".wav" or ".asc"
   {
      strExtension1 = strFileName1.Mid(pos1+1);

      if (!strExtension1.CompareNoCase(_T("wav"))) //Binary file
      {
         //Converting CString to char*/TCHAR
         char *tmpChar = new char [lengthString1];
         TCHAR *tmpStr = new TCHAR [lengthString1];

         _tcscpy_s(tmpStr, lengthString1, strFileName1);
         numBytes1 = wcstombs(tmpChar, tmpStr, lengthString1);

         //Open Binary File for reading 
         wfmFile1 = fopen(tmpChar, "rb"); 

         delete [] tmpChar;
         delete [] tmpStr;

         if (!wfmFile1)  //Can not open file 
         {
            hr = err.CannotOpenFile(strFileName1);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }//end if,Can not open file

         //Getting file size
         hr = WX218x::GetFileSize(wfmFile1, &fileSize1);
         if (!SUCCEEDED(hr))
         {
            if (wfmFile1)
               fclose(wfmFile1);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }

         binData1 = new short [fileSize1];  //NEW 12/03/2014  

         tmpSize1 = fread(binData1, sizeof(ViByte), fileSize1, wfmFile1);
         if (tmpSize1 != fileSize1)  //Invalid reading file
         {
            hr = err.ReadingFile(strFileName1);
            if (binData1)
               delete [] binData1;

            if (wfmFile1)
               //Close file that was open
               hr = fclose(wfmFile1);

            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

            return hr;  
         }//end if, Invalid reading file

         //Calculate waveform size
         wfmSize1 = fileSize1/2;

      }//end if,Binary file 

      else if (!strExtension1.CompareNoCase(_T("asc")) || !strExtension1.CompareNoCase(_T("txt"))) //Ascci file or Text file
      {
         wfmSize1 = 0;
         //Getting file size
         hr = WX218x::GetAsciiFileSize(strFileName1, wfmSize1);
         if (!SUCCEEDED(hr))
         {
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }

         //Converting CString to char*/TCHAR
         char *tmpChar = new char [lengthString1];
         TCHAR *tmpStr = new TCHAR [lengthString1];

         _tcscpy_s(tmpStr, lengthString1, strFileName1);
         numBytes1 = wcstombs(tmpChar, tmpStr, lengthString1);

         //Open Asccii File for reading 
         wfmFile1 = fopen(tmpChar, "rt");

         delete [] tmpChar;
         delete [] tmpStr;

         if (!wfmFile1)  //Can not open file 
         {
            hr = err.CannotOpenFile(strFileName1);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }//end if,Can not open file

         //binData1 = new double [wfmSize1]; //NEW 12.03.2014  doesn't work when 32M
         binData1 = new short [wfmSize1]; 

         file_count1 = 0;

         while (file_count1 < wfmSize1 && !feof(wfmFile1))
         {
            fscanf(wfmFile1, "%lg", &data);
            //binData1[file_count1] = data;
            binData1[file_count1] = (short)data;
            file_count1 ++;
         }

         fclose(wfmFile1);

      }//end else, ASCII file

      else //Invalid file extension
      {
         hr = err.InvalidValue(_T("FileName"), FileName1);
         *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
         *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
         return hr;  
      }//end else,Invalid file extension 

   }//end else, Checking if File with exention ".wav" or ".asc"

   //==========================================================================================================

    //Doing all for second file
   strFileName2 = COLE2T(FileName2);

   lengthFile2 = strFileName2.GetLength();
   lengthString2 = strFileName2.GetLength() + 1;

   if (!lengthFile2)
   {
      hr = err.InvalidValue(_T("FileName"), FileName2);
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

      //NEW 14.05.2014
      if (binData1)
      delete [] binData1;

      return hr;
   }

   //Checking file extension for second file
   pos2 = strFileName2.Find(_T("."));
   if (pos2 == -1)
   {
      hr = err.InvalidValue(_T("FileName"), FileName2);
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

       //NEW 14.05.2014
      if (binData1)
       delete [] binData1;

      return hr;
   }

   else  //Checking if File with exention ".wav" or ".asc"
   {
      strExtension2 = strFileName2.Mid(pos2+1);

      if (!strExtension2.CompareNoCase(_T("wav"))) //Binary file
      {
         //Converting CString to char*/TCHAR
         char *tmpChar = new char [lengthString2];
         TCHAR *tmpStr = new TCHAR [lengthString2];

         _tcscpy_s(tmpStr, lengthString2, strFileName2);
         numBytes2 = wcstombs(tmpChar, tmpStr, lengthString2);

         //Open Binary File for reading 
         wfmFile2 = fopen(tmpChar, "rb"); 

         delete [] tmpChar;
         delete [] tmpStr;

         if (!wfmFile2)  //Can not open file 
         {
            hr = err.CannotOpenFile(strFileName2);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

             //NEW 14.05.2014
            if (binData1)
             delete [] binData1;

            return hr;
         }//end if,Can not open file

         //Getting file size
         hr = WX218x::GetFileSize(wfmFile2, &fileSize2);
         if (!SUCCEEDED(hr))
         {
            if (wfmFile2)
               fclose(wfmFile2);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

             //NEW 14.05.2014
             if (binData1)
               delete [] binData1;

            return hr;
         }

         //binData2 = new double [fileSize2];  //NEW 12.03.2014 doesn't work with 32M
         binData2 = new short [fileSize2];  

         tmpSize2 = fread(binData2, sizeof(ViByte), fileSize2, wfmFile2);
         if (tmpSize2 != fileSize2)  //Invalid reading file
         {
            hr = err.ReadingFile(strFileName2);
            if (binData1)
               delete [] binData1;

            if (binData2)
               delete [] binData2;

            if (wfmFile1)
               //Close file that was open
               hr = fclose(wfmFile1);

            if (wfmFile2)
               //Close file that was open
               hr = fclose(wfmFile2);

            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

            return hr;  
         }//end if, Invalid reading file

         //Calculate waveform size
         wfmSize2 = fileSize2/2;


      }//end if,Binary file 

      else if (!strExtension2.CompareNoCase(_T("asc")) || !strExtension2.CompareNoCase(_T("txt"))) //Ascci file or Text file
      {
         wfmSize2 = 0;
         //Getting file size
         hr = WX218x::GetAsciiFileSize(strFileName2, wfmSize2);
         if (!SUCCEEDED(hr))
         {
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

             //NEW 14.05.2014
             if (binData1)
              delete [] binData1;

            return hr;
         }

         //Converting CString to char*/TCHAR
         char *tmpChar = new char [lengthString2];
         TCHAR *tmpStr = new TCHAR [lengthString2];

         _tcscpy_s(tmpStr, lengthString2, strFileName2);
         numBytes2 = wcstombs(tmpChar, tmpStr, lengthString2);

         //Open Asccii File for reading 
         wfmFile2 = fopen(tmpChar, "rt");

         delete [] tmpChar;
         delete [] tmpStr;

         if (!wfmFile2)  //Can not open file 
         {
            hr = err.CannotOpenFile(strFileName2);
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

             //NEW 14.05.2014
             if (binData1)
              delete [] binData1;

            return hr;
         }//end if,Can not open file

         //binData2 = new double [wfmSize2];  //NEW 12.03.2014  
         binData2 = new short [wfmSize2];

         file_count2 = 0;

         while (file_count2 < wfmSize2 && !feof(wfmFile2))
         {
            fscanf(wfmFile2, "%lg", &data);
            //binData2[file_count2] = data;
            binData2[file_count2] = (short)data;
            file_count2 ++;
         }

         fclose(wfmFile2);

      }//end else, ASCII file

      else //Invalid file extension
      {
         hr = err.InvalidValue(_T("FileName"), FileName2);
         *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
         *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

          //NEW 14.05.2014
          if (binData1)
           delete [] binData1;

         return hr;  
      }//end else,Invalid file extension 

   }//end else, Checking if File with exention ".wav" or ".asc"
   //==============================================================================================================

   //Checking if size of file1 is equal to size of file2
   if (wfmSize1 != wfmSize2)
   {
      hr = err.FileSizeNotEqual(_T(""));
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      if (wfmFile1)
       fclose(wfmFile1);

      if (wfmFile2)
       fclose(wfmFile2);

       return hr;    
   }//end if, the files aren't with the same size

   //Sending Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184;

   cntData1 = wfmSize1;
   cntData2 = wfmSize2;

  
    //Checking trace mode
    //If trace mode is Normal(Double) or Combine, user can use this current function,
    //else, giving message to use <CreateCustom>

      /*hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }*/

      //NEW 20.05.2014 Doesn't check trace mode, putting to Combine
     hr = WX218x::IWX218xArbitraryWaveform_put_TraceMode(WX218xTraceModeCombine);
     if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }

      hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }

      /*if (traceModeEnum == WX218xTraceModeDuplicate || traceModeEnum == WX218xTraceModeZero || traceModeEnum == WX218xTraceModeSingle)
      {
         if (traceModeEnum == WX218xTraceModeDuplicate)
            strTmp = _T("Duplicate");
         else if (traceModeEnum == WX218xTraceModeZero)
            strTmp = _T("Zero");
         else 
            strTmp = _T("None");

         hr = err.TraceModeDuplicate(strTmp);
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }//end if, Trace Mode is None or Normal */

        //NEW 22.05.2014
      //Checking Arbitrary Resolution, if it is 2P, segment must be:*2
      hr = WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(Channel, &arbRes);
      if (hr != S_OK)
      {  
         *Handle1 = 0;
         *Handle2 = 0;
         return hr;
      }

   if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
   {

   //Checking waveform size for the first buffer
   if ((cntData1< wfmSizeMin) || (cntData1 > m_MemorySize) || (cntData1%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File1"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }

   //Checking waveform size for the second buffer
   if ((cntData2< wfmSizeMin) || (cntData2 > m_MemorySize) || (cntData2%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File2"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }

   }//end if, it is 1P res

   else //it is 2P res
   {
      //Checking waveform size for the first buffer
   if (((cntData1*2)< wfmSizeMin) || ((cntData1*2) > m_MemorySize) || ((cntData1*2)%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File1"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }

   //Checking waveform size for the second buffer
   if (((cntData2*2)< wfmSizeMin) || ((cntData2*2) > m_MemorySize) || ((cntData2*2)%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File2"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }
   }//end else, it is 2P res

   //Checking if two buffer sizes are equal
   if (cntData1 != cntData2)
   {
      hr = err.SizeArrayNotEqual(_T(""));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }
   

   strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

   wfmCount = m_waveformManager.m_WfmCount[indexChan-1];

   //Checking if waveform count is already maximum number 
   if (wfmCount > MAX_NUM_SEGMENTS)
   {
      hr = err.MaxCountSegments();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
   }

   //NEW 22.05.2014, checking it is 1P or 2P
   if (arbRes == WX218xArbitraryResolution1P) //it is 1P res
   {
   //Checking if there is available memory
     if (cntData1 > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
     }
   }//end if, it is 1P res

   else //it is 2P res
   {
     //Checking if there is available memory
     if ((cntData1*2) > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
     }
   }//end else, it is 2P res

     //NEW 18.03.2014
     //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

      //Checking this only for current channel 1 or 2
      if (indexChan == 1 || indexChan == 2) //current chan is 1 or 2
      {
        //NEW 22.05.2014 checking it is 1P or 2P res
        if (arbRes == WX218xArbitraryResolution1P) //it is 1P res
        {
          if (cntData1 != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
           {
             strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
             strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
             strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
             hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
             *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
             *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

             if (binData1)
              delete [] binData1;

             if (binData2)
              delete [] binData2;

             return hr;
         }//end if, in this segment in Digital was already something download

        }//end if, it is 1P res

        else //it is 2P res
        {
          if ((cntData1*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
           {
             strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
             strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
             strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
             hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
             *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
             *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

             if (binData1)
              delete [] binData1;

             if (binData2)
              delete [] binData2;

             return hr;
          }//end if, in this segment in Digital was already something download

        }//end else, it is 2P res

        //Now checking if this segment was already define from arbitrary
        if (sizeDigSeg != 0)
           segArbExist =1;

      }//end if, current chan is 1 or 2

   //Making waveform index name
   if (indexChan == 1)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

   else if (indexChan == 2)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

   else if (indexChan == 3)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

   else //indexChan = 4
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

   m_waveformManager.CreateWaveformName(name, wfmIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strWaveName = buff;

  //Getting index of opposite channel and creating handle for opposite channel
  indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

  //Making waveform index name
  if (indexChanOpposite == 1)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

  else if (indexChanOpposite == 2)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

  else if (indexChanOpposite == 3)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

  else //indexChan = 4
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

  m_waveformManager.CreateWaveformName(nameOpposite, wfmIndexNameOpposite);
  sprintf_s(buff, sizeof(buff), "%s", name.c_str());

  strWaveNameOpposite = buff;

  //NEW 20.05.2014 Trace mode Double was removed from the scipi

  //NEW 13.05.2014
  //If trace mode is combine, call to function that prepared one buffer
   /*if (traceModeEnum == WX218xTraceModeDouble) //trace mode is Normal(Double)
   {

     //Calculation total size for two waveforms
     cntTotal = cntData1 * 2;

     //Allocation memory for data for both channels
     //unsigned short* pBlockTotal = new unsigned short[cntTotal];
     pBlockTotal = new unsigned short[cntTotal];

     for(jj = 0; jj < cntTotal; )  //loop for both channels and saving data in total buffer
     {
       for (ii = 0; ii < cntData1; ii++) //Loop for first buffer
        {
         checkPoint = binData1[ii];
         point = posScope_current + (unsigned short) checkPoint;
         pBlockTotal[jj] = point;

         jj++;
        }//end for, Loop for first buffer

       for (ii = 0; ii < cntData2; ii++) //Loop for second buffer
       {
        checkPoint = binData2[ii];
        point = posScope_current + (unsigned short) checkPoint;
        pBlockTotal[jj] = point;

        jj++;
        }//end for, Loop for second buffer

       }//end for, loop for both channels and saving data in total buffer
   }//end if, trace mode is Normal(Double)  */



   //else //trace mode is Combine
   if (traceModeEnum == WX218xTraceModeCombine)
   {
     
     //Calculation total size for two waveforms
#ifdef WX2184_ADD_32PT
     cntTotal = cntData1 * 2 + 32;
#else
    cntTotal = cntData1 * 2;
#endif

     pBlockTotal = new unsigned short[cntTotal];

     binDataUs1 = new unsigned short [fileSize1]; 
     binDataUs2 = new unsigned short [fileSize2]; 

     for (ii = 0; ii < cntData1; ii++) //Loop for first buffer
     {
         checkPoint = binData1[ii];
         point = posScope_current + (unsigned short) checkPoint;
         binDataUs1[ii] = point;

      }//end for, Loop for first buffer

     for (ii = 0; ii < cntData2; ii++) //Loop for second buffer
     {
         checkPoint = binData2[ii];
         point = posScope_current + (unsigned short) checkPoint;
         binDataUs2[ii] = point;

      }//end for, Loop for second buffer

     //Call to function that recieves two buffer, length of segment and outputbuffer
     //and combined two waveform
     WX218x::BuildCombinedWave(binDataUs1, binDataUs2, cntData1, pBlockTotal);

     //Free memory
     if (binDataUs1)
      delete [] binDataUs1;

     if (binDataUs2)
      delete [] binDataUs2;
    

   }//end else, trace mode is Combine

   if (segArbExist == 0)  //segment was not defined from Digital
   {
    //NEW 22.05.2014, checking it is 1P or 2P res
    if (arbRes == WX218xArbitraryResolution1P)
     strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntData1);
    else
      strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, (cntData1*2));

    hr = io.Printf(strCommand);  //temporary close for offline
   }
  
   strCommand.Format(_T(":TRAC:SEL %d"), wfmCount+1);
   hr = io.Printf(strCommand);  //temporary close for offline

   //Checking if was enough memory to define segment
   if (!SUCCEEDED(hr))
   {
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      if (pBlockTotal)
       delete [] pBlockTotal;

      return hr;
   }

   switch (interfaceType)
   {

   case VI_INTF_GPIB:  //GPIB
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);

      do
      {
         hr = io.ReadStatusByte(&statusByte);
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

   default:  //TCPIP
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   *Handle1 = m_waveformManager.CreateWaveform(name, indexChan);  //saving creating waveform in map
   m_waveformManager.m_WfmCount[indexChan-1]++;

   //Updating waveform size available

   //NEW 22.05.2014, checking it is 1P or 2P res
   if (arbRes == WX218xArbitraryResolution1P)
   {
     sizeAv = m_SizeAvailable[indexChan-1] - cntData1;  
     m_SizeAvailable[indexChan-1] = sizeAv; 

      //NEW 28.10.2012
      //Saving in array m_ArrayArbSeg size of this segment
      m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cntData1;

      *Handle2 = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);
      //saving creating waveform in the map
      m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

      //Updating waveform size available
      sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cntData2;
      m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

      m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cntData2;

   }//end if, it is 1P res

   else //it is 2P res
   {
     sizeAv = m_SizeAvailable[indexChan-1] - (cntData1*2);  
     m_SizeAvailable[indexChan-1] = sizeAv; 

      //NEW 28.10.2012
      //Saving in array m_ArrayArbSeg size of this segment
      m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cntData1*2);

      *Handle2 = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);
      //saving creating waveform in the map
      m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

      //Updating waveform size available
      sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cntData2*2);
      m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

      m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cntData2*2);
   }//end else, it is 2P res


   if (binData1)
      delete [] binData1;

   if (binData2)
      delete [] binData2;

   if (pBlockTotal)
    delete [] pBlockTotal;
   

   if (wfmFile1)
      fclose(wfmFile1);

   if (wfmFile2)
      fclose(wfmFile2);

   return hr;
}


//============================================================================================================
//                                            - CreateCustom -
HRESULT WX218x::IWX218xArbitraryWaveform_CreateCustom(SAFEARRAY** Data, long* val)
{
	HRESULT hr = S_OK;
   CString strCommand, strWaveName, hdrTrace, cmdBuff, strActiveChannel;
   CString strWaveNameOpposite, strTmp;
   long cnt, cntOpposite, stbLoops = 0, cntCheck; 
   long cntCombine;   //waveform size of combine waveform
   long wfmCount, wfmCountOpposite, wfmIndexName, lBoundArray, sizeAv, wfmSizeMin, sizeDigSeg;
   long sizeAvOpposite, wfmIndexNameOpposite;
   int indexChan, indexChanOpposite;
   string name, nameOpposite;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len;
   CString strSystErr = _T("*OPC?\n");
   int modelNumber;
   CString strFormatSegSize, strFormatSegSize2, strFormatSegNum;
   WX218xTraceModeEnum traceModeEnum;
   long handleOpposite;
   int segArbExist = 0;   //variable for know if arbitrary segment was defined from Digital
   WX218xArbitraryResolutionEnum arbRes;  //for know it is 1P or 2P
    _bstr_t bstrChannel;

   arbRes = WX218xArbitraryResolution1P;  //by default

   if (GetSimulate())  //temporary close for offline
   {
      *val = 1;    //Waveform Handle = 1 for offline
      return hr;
   }

   //Checking model number
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
        wfmSizeMin = WAVEFORM_SIZE_MIN;
     break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      wfmSizeMin = WAVEFORM_SIZE_MIN_WS835X;
     break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184;
     break;

     default:
      wfmSizeMin = WAVEFORM_SIZE_MIN;
    }

   // Make sure the number of points provided is less than the maximum memory size
   SAFEARRAY* psa = *Data;

   cnt = psa->rgsabound->cElements;  //getting size of array

   //Getting lower bound of array
   lBoundArray = psa->rgsabound->lLbound;

   if (lBoundArray != 0)
   {
      hr = err.LboundArrayZero(_T(""));
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

    strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

    if (indexChan == 1)
     bstrChannel = _T("Channel1");
    else if  (indexChan == 2)
     bstrChannel = _T("Channel2");
    else if  (indexChan == 3)
     bstrChannel = _T("Channel3");
    else
     bstrChannel = _T("Channel4");

   //NEW 23.10.2013
   //Doing this only for model WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
    //Checking trace mode
    //If trace mode is Duplicate, Zero or Combine, user can use this current function,
    //else, giving message to use <CreateCustomAdvance>

      hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {
         *val = 0;
         return hr;
      }

      /*if (traceModeEnum == WX218xTraceModeDouble)  //removed from scipi
      {
        strTmp = _T("Normal");

         hr = err.TraceModeNormal(strTmp);
         *val = 0;

         return hr;
      }//end if, Trace Mode is None or Normal*/


      if (traceModeEnum == WX218xTraceModeCombine)
      {
       //In the buffer that we recieved there are two waveforms
       //We must calculate size for every channel
#ifdef WX2184_ADD_32PT
       cntCombine = (cnt-32)/2;
#else
      cntCombine = cnt/2;
#endif

      }//end if, traceMode is Combine

       //NEW 22.05.2014
      //Checking Arbitrary Resolution, if it is 2P, segment must be:*2
      hr = WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(bstrChannel, &arbRes);
      if (hr != S_OK)
      {  
         *val = 0; 
         return hr;
      }

   }//end if, it is WX2184

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
    //NEW 22.05.2014, checking it is 1P or 2P res
    if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
    {
      if ((cntCombine< wfmSizeMin) || (cntCombine > m_MemorySize) || (cntCombine%m_WfmQuantum))
      {
       hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
       *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
       return hr;
      }
    }//end if, it is 1P res

    else//it is 2P res
    {
     if (((cntCombine*2)< wfmSizeMin) || ((cntCombine*2) > m_MemorySize) || ((cntCombine*2)%m_WfmQuantum))
      {
       hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
       *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
       return hr;
      }
    }//end else,it is 2P res

   }//end if, it is mode Combine

   else //it is not mode Combine
   {
    //NEW 22.05.2014, checking it is 1P or 2P res
    if (arbRes == WX218xArbitraryResolution1P)//it is 1P
    {
     if ((cnt< wfmSizeMin) || (cnt > m_MemorySize) || (cnt%m_WfmQuantum))
     {
      hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
     }
    }//end if, it is 1P

    else //it is 2P
    {
     if (((cnt*2)< wfmSizeMin) || ((cnt*2) > m_MemorySize) || ((cnt*2)%m_WfmQuantum))
     {
      hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
     }

    }//end else, it is 2P
   }//end else, it is not mode Combine

   wfmCount = m_waveformManager.m_WfmCount[indexChan-1];

   //Checking if waveform count is already maximum number 
   if (wfmCount > MAX_NUM_SEGMENTS)
   {
      hr = err.MaxCountSegments();
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
    //NEW 22.05.2014, checking it is 1P or 2P res
    if (arbRes == WX218xArbitraryResolution1P)
    {
     //Checking if there is available memory
     if (cntCombine > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
     }

    }//end if, it is 1P

    else//it is 2P
    {
     //Checking if there is available memory
     if ((cntCombine*2) > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
     }

    }//end else, it is 2P
   }//end if, it is mode Combine

   else //it is not mode Combine
   {
     //NEW 22.05.2014, checking it is 1P or 2P
     if (arbRes == WX218xArbitraryResolution1P)//it is 1P
     {
      //Checking if there is available memory
      if (cnt > m_SizeAvailable[indexChan-1])
      {
       hr = err.NoAvailableMemory();
       *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
       return hr;
      }
     }//end if, it is 1P

     else//it is 2P
     {
      //Checking if there is available memory
      if ((cnt*2) > m_SizeAvailable[indexChan-1])
      {
       hr = err.NoAvailableMemory();
       *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
       return hr;
      }

     }//end else, it is 2P
   }//end else,it is not mode Combine 

    //NEW 28.10.2012  Checking this only for models: WX2181BD,WX2182BD,WX1281BD,WX1282BD
   //NEW 18.03.2014 doing this for WX2184 to
   //NEW 24.08.2014 doing this for WX2181C,WX2182C,WX1281C,WX1282C
   if (modelNumber == MNM_WX2181BD || modelNumber == MNM_WX2182BD || modelNumber == MNM_WX1281BD || modelNumber == MNM_WX1282BD || modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2181C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
    if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184,WX1284,WX2181C,WX2182C,WX1281C,WX1282C
    {
    //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[indexChan-1][wfmCount];

      if (cnt != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
       {
        strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
        strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
        strFormatSegSize.Format(_T("(%d)"), sizeDigSeg);
        hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;
       }//end if, in this segment in Digital was already something download

   }//end if, it is not WX2184,WX1284,WX2181C,WX2182C,WX1281C,WX1282C

    else //it is WX2184 or WX1284,WX2181C,WX2182C,WX1281C,WX1282C
    {
      //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      //Doing this only for current channel 1 or 2
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
      {
      if (indexChan == 1 || indexChan == 2) //Current channel is 1 or 2
      {
      
        sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

        if (traceModeEnum == WX218xTraceModeCombine)
         cntCheck = cntCombine;
        else
         cntCheck = cnt;

       //NEW 22.05.2014, checking it is 1P or 2P res
       if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
       {
       if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
       {
        strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
        strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
        strFormatSegSize.Format(_T("(%d)"), sizeDigSeg);
        hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;
       }//end if, in this segment in Digital was already something download 

       }//end if, it is 1P res

       else//it is 2P
       {
        if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
        {
          strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
          strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
          strFormatSegSize.Format(_T("(%d)"), sizeDigSeg);
          hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
          *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
          return hr;
       }//end if, in this segment in Digital was already something download 

       }//end else,it is 2P 

       if (sizeDigSeg != 0)
          segArbExist = 1;    //arbitrary segment was already defined from Digital

     

      

      }//end if, current channel is 1 or 2

       //======================================================================================================
     //NEW 9.04.2014 
     //If mode is None, checking size of segment on opposite channel
     //If size is different, giving error
     //If mode is not NONE (any another mode), count of segments on current channel and opposite channel
     //must be the same.
     //If count of segments are not the same, giving error message to the user,
     //that he should previous delete all segments of the current part if he want to use this trace mode

      //Getting index of opposite channel and creating handle for opposite channel
      indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

      //Getting count of segments from opposite channel
      wfmCountOpposite = m_waveformManager.m_WfmCount[indexChanOpposite-1];

      if (traceModeEnum != WX218xTraceModeSingle) //trace mode is not Single
      {
         //Checking that count of segments on two opposite channels must be equal
         if (wfmCount != wfmCountOpposite)
         {
           hr = err.CountSegNotEqual();
           *val = 0;
           return hr;
         }
      }//end if, trace mode is not None

      else //it is mode Single
      {
        //Checking if on opposite channel segment is with the same size
          cntOpposite = m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount];

          //NEW 22.05.2014, checking it is 1P or 2P
          if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
          {
           if (cntOpposite != 0 && cntCheck != cntOpposite)
           {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
           }
          }//end if, it is 1P

          else//it is 2P res
          {
           if (cntOpposite != 0 && (cntCheck*2) != cntOpposite)
           {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
           }

          }//end else, it is 2P res

      }//end else, it is mode None
      //========================================================================================================
      }//end if, it is WX2184 or WX1284

      else //it is WX2181C,WX2182C,WX1281C,WX1282C
      {
       if (indexChan == 1) //Current channel is 1
      {
      
        sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

       
         cntCheck = cnt;

       //NEW 22.05.2014, checking it is 1P or 2P res
       if (arbRes == WX218xArbitraryResolution1P)//it is 1P res
       {
       if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
       {
        strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
        strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
        strFormatSegSize.Format(_T("(%d)"), sizeDigSeg);
        hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;
       }//end if, in this segment in Digital was already something download 

       }//end if, it is 1P res

       else//it is 2P
       {
        if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
        {
          strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
          strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
          strFormatSegSize.Format(_T("(%d)"), sizeDigSeg);
          hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
          *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
          return hr;
       }//end if, in this segment in Digital was already something download 

       }//end else,it is 2P 

       if (sizeDigSeg != 0)
          segArbExist = 1;    //arbitrary segment was already defined from Digital

     

      

      }//end if, current channel is 1 or 2

      }//end else,it is WX2181C,WX2182C,WX1281C,WX1282C
     

    }//end else, it is WX2184 or WX1284,WX2181C,WX2182C,WX1281C,WX1282C

   }//end if, models BD or WX2184 or WX2181C,WX2182C,WX1281C,WX1282C

   //NEW 7.12.2010
   unsigned short* pvData = (unsigned short*) psa->pvData;

   //Making waveform index name
   if (indexChan == 1)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

   else if (indexChan == 2)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

   else if (indexChan == 3)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

   else //indexChan = 4
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

   m_waveformManager.CreateWaveformName(name, wfmIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strWaveName = buff;

   //NEW 24.10/2013 
   //Doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184
   {
      //NEW 9.04.2014
      if (traceModeEnum != WX218xTraceModeSingle)
      {
        //Getting index of opposite channel and creating handle for opposite channel
        indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

         //Making waveform index name
        if (indexChanOpposite == 1)
         wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

        else if (indexChanOpposite == 2)
          wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

         else if (indexChanOpposite == 3)
           wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

         else //indexChan = 4
          wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

         m_waveformManager.CreateWaveformName(nameOpposite, wfmIndexNameOpposite);
         sprintf_s(buff, sizeof(buff), "%s", name.c_str());

         strWaveNameOpposite = buff;
        } //end if, trace mode is not none

   }//end if, it is WX2184

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
     if (segArbExist == 0) //this segment was not defined from Digital
     {
       //NEW 22.05.2014, checking it is 1P or 2P res
       if (arbRes == WX218xArbitraryResolution1P) //it is 1P res
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntCombine);
       else //it is 2P
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, (cntCombine*2));

       hr = io.Printf(strCommand);  //temporary close for offline  
     }
   }//end if, traceMode is Combine

   else //it is not mode Combine
   {
    if (segArbExist == 0) //this segment was not defined from Digital
    {
     //NEW 22.05.2014, checking it is 1P or 2P res
     if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cnt);
     else //it is 2P
      strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, (cnt*2));

     hr = io.Printf(strCommand);  //temporary close for offline
    }
   }//end else, it is not mode Combine

   strCommand.Format(_T(":TRAC:SEL %d"), wfmCount+1);
   hr = io.Printf(strCommand);  //temporary close for offline

   //Checking if was enough memory to define segment
   if (!SUCCEEDED(hr))
   {
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

   switch (interfaceType)
   {

   case VI_INTF_GPIB:  //GPIB
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);

      do
      {
         hr = io.ReadStatusByte(&statusByte);
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cnt, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pvData, 2*cnt);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cnt, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pvData, 2*cnt);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

   default:  //TCPIP
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cnt, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pvData, 2*cnt);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   *val = m_waveformManager.CreateWaveform(name, indexChan);  //saving creating waveform in map
   m_waveformManager.m_WfmCount[indexChan-1]++;

   //Updating waveform size available

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
    //NEW 22.05.2014, checking it is 1P or 2P res
    if (arbRes == WX218xArbitraryResolution1P) //it is 1P
     sizeAv = m_SizeAvailable[indexChan-1] - cntCombine;
    else //it is 2P
     sizeAv = m_SizeAvailable[indexChan-1] - (cntCombine*2);

    m_SizeAvailable[indexChan-1] = sizeAv; 

     //NEW 28.10.2012
     //Saving in array m_ArrayArbSeg size of this segment

    //NEW 22.05.2014, checking it is 1P or 2P res
     if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cntCombine;
     else //it is 2P
      m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cntCombine*2);
   }

   else //it is not mode Combine, or not WX2184
   {
    //NEW 22.05.2014, checking it is 1P or 2P
    if (arbRes == WX218xArbitraryResolution1P) //it is 1P res
     sizeAv = m_SizeAvailable[indexChan-1] - cnt; 
    else //it is 2P res
     sizeAv = m_SizeAvailable[indexChan-1] - (cnt*2); 

    m_SizeAvailable[indexChan-1] = sizeAv; 

     //NEW 28.10.2012
     //Saving in array m_ArrayArbSeg size of this segment

     //NEW 22.05.2014, checking it is 1P or 2P res
     if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cnt;
     else //it is 2P
      m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cnt*2;
   }
   
   //NEW 22.10.2013
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
       //NEW 9.04.2014
        if (traceModeEnum != WX218xTraceModeSingle)
        {
          handleOpposite = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);
          //saving creating waveform in the map
          m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

          if (traceModeEnum == WX218xTraceModeCombine)
           {
            //Updating waveform size available

             //NEW 22.05.2014, checking it is 1P or 2P res
             if (arbRes == WX218xArbitraryResolution1P) //it is 1P
              sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cntCombine;
             else //it is 2P
               sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cntCombine*2);

             m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

              //Saving in array m_ArrayArbSeg size of this segment

              //NEW 22.05.2014, checking it is 1P or 2P
              if (arbRes == WX218xArbitraryResolution1P) //it is 1P
               m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cntCombine;
              else //it is 2P
               m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cntCombine*2);

             }//end if, trace mode is Combine

            else //it is not mode Combine
            {
               //Updating waveform size available

              //NEW 22.05.2014, checking it is 1P or 2P
              if (arbRes == WX218xArbitraryResolution1P) //it is 1P
               sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cnt;
              else
               sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cnt*2);

              m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

              //NEW 28.10.2012
              //Saving in array m_ArrayArbSeg size of this segment

              //NEW 22.05.2014, checking it is 1P or 2P
              if (arbRes == WX218xArbitraryResolution1P) //it is 1P
               m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cnt;
              else //it is 2P
                m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cnt*2);
             }//end else, it is not mode Combine

        }//end if, it is trace mode not None
       
   }//end if, it is WX2184

   return hr;
}

/* get_SizeMax */
HRESULT WX218x::IWX218xArbitraryWaveform_get_SizeMax(long* val)
{
   HRESULT hr = S_OK;

   *val = m_MemorySize;

   return hr;
}

/* NumberWaveformsMax */
HRESULT WX218x::IWX218xArbitraryWaveform_get_NumberWaveformsMax(long* val)
{
   HRESULT hr = S_OK;

   *val = m_MaxNumWaveforms;

   return hr;
}

/* LoadArbWfmFromFile */
HRESULT WX218x::IWX218xArbitraryWaveform_LoadArbWfmFromFile(BSTR Channel, BSTR FileName, long* val)
{
   
   //NEW 20.05.2014 for WX2184 use this function if trace mode is Single, Duplicate or Zero

   //Use this function to download waveforms that were created via ArbConnection with markers or
   // without markers in to the arbitrary memory.

   //Every point in the file is 2 bytes, in range from - to +
   //To every point we added half of DAC depend on instrument
   HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strChannel, strFileName, strExtension;
   CString strWaveNameOpposite;
   long lengthFile, pos, lengthString, numBytes, fileSize, tmpSize, wfmSize, file_count;
   short int *binData = VI_NULL;
   short int *pwData = VI_NULL;
   short int * wfmData = VI_NULL; 
   double divider_12bit = 2048.0;
   double divider_14bit = 8192.0;
   double divider_current = 2048.0;
   double data;
   long cntCheck;
   long wfmIndexNameOpposite;
   CString strCommand, strWaveName, hdrTrace, cmdBuff, strActiveChannel;
   CString strTmp;
   long stbLoops = 0;    //size of Data
   long wfmCount, wfmCountOpposite, wfmIndexName, sizeAv, wfmSizeMin,sizeAvOpposite;
   int ii, indexChan,indexChanOpposite;
   unsigned short posScope_12bit = POS_SCOPE_12BIT;
   double negScope_12bit = NEG_SCOPE_12BIT;
   unsigned short posScope_14bit = POS_SCOPE_14BIT;
   double negScope_14bit = NEG_SCOPE_14BIT;
   unsigned short posScope_current = POS_SCOPE_12BIT;
   double negScope_current = NEG_SCOPE_12BIT;
   string name, nameOpposite;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len;
   long sizeDigSeg;
   CString strSystErr = _T("*OPC?\n");
   CString strFormatSegSize, strFormatSegNum, strFormatSegSize2;
   int modelNumber;
   long cnt, cntOpposite;      //variable that is same to wfmSize
   long cntCombine;  //waveform size of combine waveform
   WX218xTraceModeEnum traceModeEnum;
   long handleOpposite;
   int segArbExist = 0;    //variable for know if from digital was already define segment
   WX218xArbitraryResolutionEnum arbRes;  //for know it is 1P or 2P

   arbRes = WX218xArbitraryResolution1P;  //by default

    if (GetSimulate())  //temporary close for offline
   {
      *val = 1;    //Waveform Handle = 1 for offline
      return hr;
   }

   //Checking model number
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      posScope_current = posScope_12bit;
      negScope_current = negScope_12bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN;
      break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
      break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
      break;

     case MNM_WS8351:
     case MNM_WS8352:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WS835X;
      break;

      case MNM_WX2184:
      case MNM_WX1284:
	  case MNM_WX2184C:
      case MNM_WX1284C:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184;
      break;

     default:
      posScope_current = posScope_12bit;
      negScope_current = negScope_12bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN;
       
    }

   strChannel = COLE2T(Channel);
   strFileName = COLE2T(FileName);

   lengthFile = strFileName.GetLength();
   lengthString = strFileName.GetLength() + 1;

   if (!lengthFile)
   {
      hr = err.InvalidValue(_T("FileName"), FileName);
      *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }

   //Checking file extension
   pos = strFileName.Find(_T("."));
   if (pos == -1)
   {
      hr = err.InvalidValue(_T("FileName"), FileName);
      *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }

   else  //Checking if File with exention ".wav" or ".asc"
   {
      strExtension = strFileName.Mid(pos+1);

      if (!strExtension.CompareNoCase(_T("wav"))) //Binary file
      {
         //Converting CString to char*/TCHAR
         char *tmpChar = new char [lengthString];
         TCHAR *tmpStr = new TCHAR [lengthString];

         _tcscpy_s(tmpStr, lengthString, strFileName);
         numBytes = wcstombs(tmpChar, tmpStr, lengthString);

         //Open Binary File for reading 
         wfmFile = fopen(tmpChar, "rb"); 

         delete [] tmpChar;
         delete [] tmpStr;

         if (!wfmFile)  //Can not open file 
         {
            hr = err.CannotOpenFile(strFileName);
            *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }//end if,Can not open file

         //Getting file size
         hr = WX218x::GetFileSize(wfmFile, &fileSize);
         if (!SUCCEEDED(hr))
         {
            if (wfmFile)
               fclose(wfmFile);
            *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }

         binData = new short int [fileSize]; 

         tmpSize = fread(binData, sizeof(ViByte), fileSize, wfmFile);
         if (tmpSize != fileSize)  //Invalid reading file
         {
            hr = err.ReadingFile(strFileName);
            if (binData)
               delete [] binData;

            if (wfmFile)
               //Close file that was open
               hr = fclose(wfmFile);

            *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

            return hr;  
         }//end if, Invalid reading file

         //Calculate waveform size
         wfmSize = fileSize/2;

      }//end if,Binary file 

      else if (!strExtension.CompareNoCase(_T("asc")) || !strExtension.CompareNoCase(_T("txt"))) //Ascci file or Text File
      {
         wfmSize = 0;
         //Getting file size
         hr = WX218x::GetAsciiFileSize(strFileName, wfmSize);
         if (!SUCCEEDED(hr))
         {
            *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
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
            *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }//end if,Can not open file

         binData = new short  [wfmSize];

         file_count = 0;

         while (file_count < wfmSize && !feof(wfmFile))
         {
            fscanf(wfmFile, "%lg", &data);
            binData[file_count] = (short) data;
            file_count ++;
         }

         fclose(wfmFile);

      }//end else, ASCII file or Text file

      else //Invalid file extension
      {
         hr = err.InvalidValue(_T("FileName"), FileName);
         *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
         return hr;  
      }//end else,Invalid file extension 

   }//end else, Checking if File with exention ".wav" or ".asc"


   //Sending Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   cnt = wfmSize;

   //Doing this only for model WX2184,WX1284,WX2182C
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
   {
    //Checking trace mode
    //If trace mode is duplicate or zero or combine, user can use this current function,
    //else, giving message to use function <CreateAdvance>

     if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
     {
      hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {  
         *val = 0; 
         return hr;
      }

      //NEW 20.05.2014 mode Double was removed from scipi
      /*if (traceModeEnum == WX218xTraceModeDouble)
      {
         strTmp = _T("Normal");

         hr = err.TraceModeNormalFile(strTmp);
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;

      }//end if, Trace Mode is None or Normal  */


      if ( traceModeEnum == WX218xTraceModeCombine)
      {
        //In the buffer that we recieved there two waveforms.
        //We must calculate size for every channel

#ifdef WX2184_ADD_32PT
       cntCombine = (cnt-32)/2;
#else
       cntCombine = cnt/2;
#endif

        // cntCombine = cnt/2;
      }//end if,traceMode is Combine

     }//end if, it is WX2184 or WX1284

        //NEW 22.05.2014
      //Checking Arbitrary Resolution, if it is 2P, segment must be:*2
      hr = WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(Channel, &arbRes);
      if (hr != S_OK)
      {  
         *val = 0; 
         return hr;
      }

   }//end if, modelNumber == MNM_WX2184 or WX2182C

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
     //NEW 22.05.2014, checking it is 1P or 2P
     if (arbRes == WX218xArbitraryResolution1P) //it is 1P
     {
       if ((cntCombine< wfmSizeMin) || (cntCombine > m_MemorySize) || (cntCombine%m_WfmQuantum))
       {
         hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
       }

     }//end if, it is 1P

     else //it is 2P
     {
      if (((cntCombine*2)< wfmSizeMin) || ((cntCombine*2) > m_MemorySize) || ((cntCombine*2)%m_WfmQuantum))
       {
         hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
       }
     }//end else, it is 2P

   }//end if, it is mode combine

   else //it is not mode Combine
   {
    //NEW 22.05.2014, checking it is 1P or 2P
    if (arbRes == WX218xArbitraryResolution1P) //it is 1P
    {
    if ((cnt< wfmSizeMin) || (cnt > m_MemorySize) || (cnt%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
    }

    }//end if, it is 1P

    else //it is 2P
    {
     if (((cnt*2)< wfmSizeMin) || ((cnt*2) > m_MemorySize) || ((cnt*2)%m_WfmQuantum))
     {
      hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
     }

    }//end else, it is 2P

   }//end else, it is not mode Combine

   //Getting Active Channel
   strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

   wfmCount = m_waveformManager.m_WfmCount[indexChan-1];

   //Checking if waveform count is already maximum number 
   if (wfmCount > MAX_NUM_SEGMENTS)
   {
      hr = err.MaxCountSegments();
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

     //Checking if there is available memory
     if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
     {
       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P) //it is 1P
       {
       if (cntCombine > m_SizeAvailable[indexChan-1])
       {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
       }

       }//end if, it is 1P

       else //it is 2P
       {
        if ((cntCombine*2) > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

       }//end else, it is 2P

     }//it is WX2184 and Combine

     else //it is not mode Combine
     {
       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P) //it is 1P
       {
        if (cnt > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

       }//end if, it is 1P

       else //it is 2P
       {
        if ((cnt*2) > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

       }//end else, it is 2P

     }//end else, it is not mode Combine

  //NEW 28.10.2012  Checking this only for models: WX2181BD,WX2182BD,WX1281BD,WX1282BD,WX2182C
     //NEW 18.03.2014 checking this for WX2184 to
   if (modelNumber == MNM_WX2181BD || modelNumber == MNM_WX2182BD || modelNumber == MNM_WX1281BD || modelNumber == MNM_WX1282BD || modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
    if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184,WX1284,WX2182C
    {
    //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[indexChan-1][wfmCount];

    if (cnt != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
    {
     strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
     strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
     strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
     hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
     *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
     return hr;
    }//end if, in this segment in Digital was already something download

    }//end if, it is not WX2184

    else //it is WX2184 or WX2182C or WX1284
    {
      //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

      //Checking this only for current channel 1 or 2 (for WX2184, WX1284)
      //Only for channel 1 (WX2182C)

      //NEW 30.07.2014 
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
      {
      if (indexChan == 1 || indexChan == 2) //current chan is 1 or 2
      {
        //NEW 30.07.2014
        if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
        {
        if (traceModeEnum == WX218xTraceModeCombine)
         cntCheck = cntCombine;
        else
         cntCheck = cnt;
        }//end if, it is WX2184 or WX1284

        else //it is WX2182C
        {
         cntCheck = cnt;
        }//end else, it is WX2182C

        //NEW 22.05.2014, checking it is 1P or 2P
        if (arbRes == WX218xArbitraryResolution1P) //it is 1P
        {
         if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end if, it is 1P

        else //it is 2P
        {
         if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end else, it is 2P

        //NEW 8.04.2014
        if (sizeDigSeg != 0)
           segArbExist = 1;   //variable for know that arbitrary segment was already define from digital

      }//end if, current chan is 1 or 2

      }//end if, it is WX2184 or WX1284

      else //it is WX2182C
      {
       if (indexChan == 1) //current chan is 1
       {
        cntCheck = cnt;
       
        //NEW 22.05.2014, checking it is 1P or 2P
        if (arbRes == WX218xArbitraryResolution1P) //it is 1P
        {
         if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end if, it is 1P

        else //it is 2P
        {
         if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end else, it is 2P

        //NEW 8.04.2014
        if (sizeDigSeg != 0)
           segArbExist = 1;   //variable for know that arbitrary segment was already define from digital

      }//end if, current chan is 1
      }//end else, it is WX2182C

       //======================================================================================================
     //NEW 9.04.2014 
     //If mode is Single, checking size of segment on opposite channel
     //If size is different, giving error
     //If mode is not Single (any another mode), count of segments on current channel and opposite channel
     //must be the same.
     //If count of segments are not the same, giving error message to the user,
     //that he should previous delete all segments of the current part if he want to use this trace mode


      //NEW 30.07.2014 checking this only for WX2184 or WX1284
       if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
      {
      //Getting index of opposite channel and creating handle for opposite channel
      indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

      //Getting count of segments from opposite channel
      wfmCountOpposite = m_waveformManager.m_WfmCount[indexChanOpposite-1];

      if (traceModeEnum != WX218xTraceModeSingle) //trace mode is not Single
      {
         //Checking that count of segments on two opposite channels must be equal
         if (wfmCount != wfmCountOpposite)
         {
           hr = err.CountSegNotEqual();
           *val = 0;
           return hr;
         }
      }//end if, trace mode is not Single

      else //it is mode Single
      {
        //Checking if on opposite channel segment is with the same size
          cntOpposite = m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount];

          //NEW 22.05.2014, checking it is 1P or 2P
          if (arbRes == WX218xArbitraryResolution1P) //it is 1P
          {
          if (cntOpposite != 0 && cntCheck != cntOpposite)
          {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
          }

          }//end if, it is 1P

          else //it is 2P
          {
           if (cntOpposite != 0 && (cntCheck*2) != cntOpposite)
           {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
           }

          }//end else,it is 2P 

      }//end else, it is mode Single
      //========================================================================================================

     }//end if, it is only WX2184 or WX1284

    }//end else, it is WX2184 or WX2182C or WX1284

   }//end if, models BD or WX2184,WX1284,WX2182C
  
   double checkPoint;

   unsigned short* pBlock = new unsigned short[wfmSize];
   unsigned short point;

     for (ii=0; ii<wfmSize; ii++)
     {
      checkPoint = binData[ii];  
      point = posScope_current + (unsigned short)checkPoint;
      pBlock[ii] = point;
     }

   //Making waveform index name
   if (indexChan == 1)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount; 

   else if (indexChan == 2)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

   else if (indexChan == 3)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;  

   else //indexChan = 4
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

   m_waveformManager.CreateWaveformName(name, wfmIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strWaveName = buff;

   //NEW 22.10.2013 
   //doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
      //NEW 9.04.2014
      if (traceModeEnum != WX218xTraceModeSingle)
      {
        //Getting index of opposite channel and creating handle for opposite channel
        indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

        //Making waveform index name
        if (indexChanOpposite == 1)
         wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount; 

        else if (indexChanOpposite == 2)
         wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

        else if (indexChanOpposite == 3)
         wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;  

         else //indexChan = 4
          wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

          m_waveformManager.CreateWaveformName(nameOpposite, wfmIndexNameOpposite);
          sprintf_s(buff, sizeof(buff), "%s", name.c_str());

          strWaveNameOpposite = buff;

      }//end if, trace mode is not none

   }//end if, is WX2184

    if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine)) //it is mode Combine
    {
     //Checking if segment was already define from digital
     if (segArbExist == 0) //segment was not defined from Digital
     {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntCombine);
      else //it is 2P
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, (cntCombine*2));

      hr = io.Printf(strCommand);  //temporary close for offline  
     }//end if, segment was not defined from Digital
    }//end if, it is mode Combine

    else //it is not mode Combine
    {
     //Checking if segment was already define from digital
     if (segArbExist == 0)
     {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cnt);
      else //it is 2P
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, (cnt*2));

      hr = io.Printf(strCommand);  //temporary close for offline
     }
    }//end else, it is not mode Combine
  
   strCommand.Format(_T(":TRAC:SEL %d"), wfmCount+1);
   hr = io.Printf(strCommand);  //temporary close for offline

   //Checking if was enough memory to define segment
   if (!SUCCEEDED(hr))
   {
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

   switch (interfaceType)
   {
    case VI_INTF_GPIB:
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);  //temporary close for offline
     
      do
      {
       hr = io.ReadStatusByte(&statusByte); //temporary close for offline
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

    default:  //TCPIP
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline

     hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
     hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   *val = m_waveformManager.CreateWaveform(name, indexChan);  //saving creating waveform in map
   m_waveformManager.m_WfmCount[indexChan-1]++;

   //Updating waveform size available
   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P)  //it is 1P
      {
       sizeAv = m_SizeAvailable[indexChan-1] - cntCombine;  
       m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cntCombine;  

       }//end if, it is 1P

      else //it is 2P
      {
         sizeAv = m_SizeAvailable[indexChan-1] - (cntCombine*2);  
         m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cntCombine*2);   
      }//end else,it is 2P

   }//end if, it is mode Combine

   else //it is not mode Combine
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      {
       sizeAv = m_SizeAvailable[indexChan-1] - cnt;  
       m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cnt;  
      } //end if, it is 1P

      else //it is 2P
      {
       sizeAv = m_SizeAvailable[indexChan-1] - (cnt*2);  
       m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cnt*2);  

      }//end else, it is 2P

   }//end else, it is not mode Combine
  

    //NEW 22.10.2013
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
      //NEW 9.04.2014
      if (traceModeEnum != WX218xTraceModeSingle)
      {
         handleOpposite = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);  //saving creating waveform in map
         m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

         if (traceModeEnum == WX218xTraceModeCombine)
         {

           //Updating waveform size available

           //NEW 22.05.2014, checking it is 1P or 2P
           if (arbRes == WX218xArbitraryResolution1P)  //it is 1P
           {
            sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cntCombine;  
            m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

            //NEW 28.10.2012
            //Saving in array m_ArrayArbSeg size of this segment
            m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cntCombine;

           }//end if, it is 1P

           else //it is 2P
           {
            sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cntCombine*2);  
            m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

            //NEW 28.10.2012
            //Saving in array m_ArrayArbSeg size of this segment
            m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cntCombine*2);

           }//end else, it is 2P

         }//end if, it is Combine mode

         else //it is not Combine mode
         {
           //Updating waveform size available

           //NEW 22.05.2014, checking it is 1P or 2P
           if (arbRes == WX218xArbitraryResolution1P) //it is 1P
           {
           sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cnt;  
           m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

           //NEW 28.10.2012
           //Saving in array m_ArrayArbSeg size of this segment
           m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cnt;
           }//end if, it is 1P

           else //it is 2P
           {
            sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cnt*2);  
            m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

           //NEW 28.10.2012
           //Saving in array m_ArrayArbSeg size of this segment
           m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cnt*2;

           }//end else, it is 2P

          }//end else, it is not Combine mode

         }//end if, trace mode is not none

   }//end if, it is WX2184

   delete [] pBlock;

   if (binData)
     delete [] binData;

   if (wfmFile)
      fclose(wfmFile);

   return hr;
}

//======================================================================================================================================================================
//                                                       - LoadCSVFile -
HRESULT WX218x::IWX218xArbitraryWaveform_LoadCSVFile(BSTR Channel, BSTR FileName, long* val)
{

	//===========================================================================================================================================
	 //Function not supported for WX2184 and trace mode Combine

	//Use this function to download waveforms that were created via ArbConnection with markers or
   // without markers in to the arbitrary memory.

   //Every point in the file is 2 bytes, in range from - to +
   //To every point we added half of DAC depend on instrument
   //The file is text file with space
   HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strChannel, strFileName, strExtension;
   CString strWaveNameOpposite;
   long lengthFile, pos, lengthString, numBytes, fileSize, tmpSize, wfmSize, file_count;
   short int *binData = VI_NULL;
   short int *pwData = VI_NULL;
   short int * wfmData = VI_NULL; 
   double divider_12bit = 2048.0;
   double divider_14bit = 8192.0;
   double divider_current = 2048.0;
   double data;
   long cntCheck;
   long wfmIndexNameOpposite;
   CString strCommand, strWaveName, hdrTrace, cmdBuff, strActiveChannel;
   CString strTmp;
   long stbLoops = 0;    //size of Data
   long wfmCount, wfmCountOpposite, wfmIndexName, sizeAv, wfmSizeMin,sizeAvOpposite;
   int ii, indexChan,indexChanOpposite;
   unsigned short posScope_12bit = POS_SCOPE_12BIT;
   double negScope_12bit = NEG_SCOPE_12BIT;
   unsigned short posScope_14bit = POS_SCOPE_14BIT;
   double negScope_14bit = NEG_SCOPE_14BIT;
   unsigned short posScope_current = POS_SCOPE_12BIT;
   double negScope_current = NEG_SCOPE_12BIT;
   string name, nameOpposite;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len;
   long sizeDigSeg;
   CString strSystErr = _T("*OPC?\n");
   CString strFormatSegSize, strFormatSegNum, strFormatSegSize2;
   int modelNumber;
   long cnt, cntOpposite;      //variable that is same to wfmSize
   long cntCombine;  //waveform size of combine waveform
   WX218xTraceModeEnum traceModeEnum;
   long handleOpposite;
   int segArbExist = 0;   //variable for know if arbitrary segment was already defined from Digital
   WX218xArbitraryResolutionEnum arbRes;  //for know it is 1P or 2P
   int posCSV;
   CString strLineCSV, strDataCSV;
   char buffLine[512] = "";
   double dbValueCSV;
   char *stringCSV;

   arbRes = WX218xArbitraryResolution1P;  //by default

   if (GetSimulate())  //temporary close for offline
   {
     *val = 1;    //Waveform Handle = 1 for offline
      return hr;
   }

   //Checking model number
   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
     case MNM_WX2181:
     case MNM_WX2182:
      posScope_current = posScope_12bit;
      negScope_current = negScope_12bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN;
      break;

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
      break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      if (m_MemorySize == MEMORY_SIZE_32M) 
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB_OPT32M;
      else
       wfmSizeMin = WAVEFORM_SIZE_MIN_WX218XB;
      break;

     case MNM_WS8351:
     case MNM_WS8352:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WS835X;
      break;

      case MNM_WX2184:
      case MNM_WX1284:
	  case MNM_WX2184C:
      case MNM_WX1284C:
      posScope_current = posScope_14bit;
      negScope_current = negScope_14bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184;
      break;

     default:
      posScope_current = posScope_12bit;
      negScope_current = negScope_12bit;

      wfmSizeMin = WAVEFORM_SIZE_MIN;
       
    }

   strChannel = COLE2T(Channel);
   strFileName = COLE2T(FileName);



   lengthFile = strFileName.GetLength();
   lengthString = strFileName.GetLength() + 1;

   if (!lengthFile)
   {
      hr = err.InvalidValue(_T("FileName"), FileName);
      *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }

         wfmSize = 0;
         //Getting file size
         hr = WX218x::GetCSVFileSize(strFileName, wfmSize);
         if (!SUCCEEDED(hr))
         {
            *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }

         //Converting CString to char*/TCHAR
         char *tmpChar = new char [lengthString];
         TCHAR *tmpStr = new TCHAR [lengthString];

         _tcscpy_s(tmpStr, lengthString, strFileName);
         numBytes = wcstombs(tmpChar, tmpStr, lengthString);

		 delete [] tmpChar;
         delete [] tmpStr;

//===================== FOR CSV====================================

         //Open CSV File for reading 
         binData = new short  [wfmSize];

         file_count = 0;

	 ifstream infile;
	 infile.open(strFileName);
	 if(!infile.good()) //can not open file
	 {
        hr = err.CannotOpenFile(strFileName);
        *val = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
        return hr;
	 }
	 
    
    std::ifstream dataCSV(strFileName);
	std::string lineCSV;
	while(std::getline(dataCSV, lineCSV))
	{
      //Now in this line we have for example 1,63 (we need only 63) or only 63
	  //Finding comma and read data after comma
	  strLineCSV = lineCSV.data();
	  posCSV = strLineCSV.Find(',');
	  if (posCSV != -1) //line exist from 2 numbers and comma
	  {
        strDataCSV = strLineCSV.Mid(posCSV+1);
	  }//end if, line exist from 2 numbers and comma

	  else //line exist from one number
	  {
        strDataCSV = strLineCSV;
	  }//end else, line exist from one number

	  //Now we need to convert data that is string to double
	  dbValueCSV = _tstof(strDataCSV);
	  binData[file_count] = (short) dbValueCSV;
      file_count ++;

	}//end while

//===============================================

   //Sending Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   cnt = wfmSize;

   //Doing this only for model WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
   {
    //Checking trace mode
    //If trace mode is duplicate or zero or combine, user can use this current function,
    //else, giving message to use function <CreateAdvance>

      //NEW 30.07.2014
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
      {
      hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {  
         *val = 0; 
         return hr;
      }

      //NEW 20.05.2014 Double was removed from scipi
      /*if (traceModeEnum == WX218xTraceModeDouble)
      {
         strTmp = _T("Normal");

         hr = err.TraceModeNormalFile(strTmp);
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;

      }//end if, Trace Mode is None or Normal */


      if ( traceModeEnum == WX218xTraceModeCombine)
      {
        //In the buffer that we recieved there two waveforms.
        //We must calculate size for every channel

#ifdef WX2184_ADD_32PT
       cntCombine = (cnt-32)/2;
#else
      cntCombine = cnt/2;
#endif


       //NEW 24.04.2014 
        hr = err.TraceModeNotSupp();
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;
        // cntCombine = cnt/2;
      }//end if,traceMode is Combine

      }//end if, it is WX2184 or WX1284

      //Checking Arbitrary Resolution, if it is 2P, segment must be:*2
      hr = WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(Channel, &arbRes);
      if (hr != S_OK)
      {  
         *val = 0;   
         return hr;
      }

   }//end if, modelNumber == MNM_WX2184 or WX1284 or WX2182C

   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
     //NEW 22.05.2014, checking it is 1P or 2P
     if (arbRes == WX218xArbitraryResolution1P) //it is 1P res
     {
       if ((cntCombine< wfmSizeMin) || (cntCombine > m_MemorySize) || (cntCombine%m_WfmQuantum))
       {
        hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;
       }

     }//end if, it is 1P res

     else //it is 2P res
     {
       if (((cntCombine*2)< wfmSizeMin) || ((cntCombine*2) > m_MemorySize) || ((cntCombine*2)%m_WfmQuantum))
       {
        hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
        *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        return hr;
       }

     }//end else, it is 2P res

   }//end if, it is mode combine

   else //it is not mode Combine
   {
    //NEW 22.05.2014, checking it is 1P or 2P
    if (arbRes == WX218xArbitraryResolution1P) //it is 1P
    {
     if ((cnt< wfmSizeMin) || (cnt > m_MemorySize) || (cnt%m_WfmQuantum))
     {
      hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
     }

    }//end if,it is 1P 

    else //it is 2P
    {
     if (((cnt*2)< wfmSizeMin) || ((cnt*2) > m_MemorySize) || ((cnt*2)%m_WfmQuantum))
     {
      hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
     }

    }//end else, it is 2P

   }//end else, it is not mode Combine

   //Getting Active Channel
   strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

   wfmCount = m_waveformManager.m_WfmCount[indexChan-1];

   //Checking if waveform count is already maximum number 
   if (wfmCount > MAX_NUM_SEGMENTS)
   {
      hr = err.MaxCountSegments();
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

     //Checking if there is available memory
     if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
     {
       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P) //it is 1P
       {
        if (cntCombine > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

       }//end if, it is 1P res

       else //it is 2P res
       {
        if ((cntCombine*2) > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

       }//end else, it is 2P res

     }//end if, it is WX2184 and Combine

     else //it is not mode Combine
     {
       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P) //it is 1P res
       {
        if (cnt > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }
       }//end if, it is 1P res

       else //it is 2P
       {
        if ((cnt*2) > m_SizeAvailable[indexChan-1])
        {
         hr = err.NoAvailableMemory();
         *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
         return hr;
        }

       }//end else, it is 2P

     }//end else, it is not mode Combine

  //NEW 28.10.2012  Checking this only for models: WX2181BD,WX2182BD,WX1281BD,WX1282BD
     //NEW 18.03.2014 checking this for WX2184 to
   if (modelNumber == MNM_WX2181BD || modelNumber == MNM_WX2182BD || modelNumber == MNM_WX1281BD || modelNumber == MNM_WX1282BD || modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
    if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C) //it is not WX2184, WX1284, WX2182C
    {
    //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[indexChan-1][wfmCount];

    if (cnt != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
    {
     strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
     strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
     strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
     hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
     *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
     return hr;
    }//end if, in this segment in Digital was already something download

    }//end if, it is not WX2184, WX1284, WX2182C

    else //it is WX2184 or WX1284 or WX2182C
    {
      //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

      //Checking this only for current channel 1 or 2 (WX2184,WX1284)
      //Only for channel 1 (WX2182C)

      //NEW 30.07.2014 add by Ira
    if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    {
      if (indexChan == 1 || indexChan == 2) //current chan is 1 or 2
      {
        if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
        {
         if (traceModeEnum == WX218xTraceModeCombine)
          cntCheck = cntCombine;
         else
         cntCheck = cnt;
        }//end if, it is WX2184 or WX1284

        else //it is WX2182C
        {
         cntCheck = cnt;
        }//end else, it is WX2182C

        //NEW 22.05.2014, checking it is 1P or 2P res
        if (arbRes == WX218xArbitraryResolution1P) //it is 1P
        {
        if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end if, it is 1P

        else //it is 2P
        {
         if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end else, it is 2P

        //Now checking if arbitrary segment was already defined from Digital
         if (sizeDigSeg != 0)
            segArbExist = 1;   //arbitrary segment was already defined from Digital

      }//end if, current chan is 1 or 2

    }//end if, it is WX2184 or WX1284

    else //it is WX2182C
    {
      if (indexChan == 1) //current chan is 1
      {
        cntCheck = cnt;
        //NEW 22.05.2014, checking it is 1P or 2P res
        if (arbRes == WX218xArbitraryResolution1P) //it is 1P
        {
        if (cntCheck != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end if, it is 1P

        else //it is 2P
        {
         if ((cntCheck*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           return hr;
         }//end if, in this segment in Digital was already something download

        }//end else, it is 2P

        //Now checking if arbitrary segment was already defined from Digital
         if (sizeDigSeg != 0)
            segArbExist = 1;   //arbitrary segment was already defined from Digital

      }//end if, current chan is 1
    }//end else, it is WX2182C

        //======================================================================================================
     //NEW 9.04.2014 
     //If mode is None, checking size of segment on opposite channel
     //If size is different, giving error
     //If mode is not NONE (any another mode), count of segments on current channel and opposite channel
     //must be the same.
     //If count of segments are not the same, giving error message to the user,
     //that he should previous delete all segments of the current part if he want to use this trace mode


      //NEW 30.07.2014 add by Ira
      //Checking this only for WX2184 or WX1284
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184 or WX1284
      {
      //Getting index of opposite channel and creating handle for opposite channel
      indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

      //Getting count of segments from opposite channel
      wfmCountOpposite = m_waveformManager.m_WfmCount[indexChanOpposite-1];

      if (traceModeEnum != WX218xTraceModeSingle) //trace mode is not None
      {
         //Checking that count of segments on two opposite channels must be equal
         if (wfmCount != wfmCountOpposite)
         {
           hr = err.CountSegNotEqual();
           *val = 0;
           return hr;
         }
      }//end if, trace mode is not None

      else //it is mode None
      {
        //Checking if on opposite channel segment is with the same size
          cntOpposite = m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount];

          //NEW 22.05.2014, checking it is 1P or 2P
          if (arbRes == WX218xArbitraryResolution1P) //it is 1P
          {
          if (cntOpposite != 0 && cntCheck != cntOpposite)
          {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
          }

          }//end if, it is 1P

          else //it is 2P
          {
           if (cntOpposite != 0 && (cntCheck*2) != cntOpposite)
           {
            hr = err.CountSegNotEqual();
            *val = 0;
            return hr;
           }

          }//end else, it is 2P
      }//end else, it is mode None
      //========================================================================================================

     }//end if, it is WX2184 or WX1284

    }//end else, it is WX2184, or WX2182C, WX1284

   }//end if, models BD or WX2184
  
   double checkPoint;

   unsigned short* pBlock = new unsigned short[wfmSize];
   unsigned short point;

   for (ii=0; ii<wfmSize; ii++)
   {
      checkPoint = binData[ii];  
      point = posScope_current + (unsigned short)checkPoint;
      pBlock[ii] = point;
   }

   //Making waveform index name
   if (indexChan == 1)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount; 

   else if (indexChan == 2)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

   else if (indexChan == 3)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;  

   else //indexChan = 4
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

   m_waveformManager.CreateWaveformName(name, wfmIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strWaveName = buff;

   //NEW 22.10.2013 
   //doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
       if (traceModeEnum != WX218xTraceModeSingle)
       {
         //Getting index of opposite channel and creating handle for opposite channel
         indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

         //Making waveform index name
         if (indexChanOpposite == 1)
          wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount; 

         else if (indexChanOpposite == 2)
           wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

         else if (indexChanOpposite == 3)
           wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;  

         else //indexChan = 4
           wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

         m_waveformManager.CreateWaveformName(nameOpposite, wfmIndexNameOpposite);
         sprintf_s(buff, sizeof(buff), "%s", name.c_str());

         strWaveNameOpposite = buff;
       }//end if, trace mode is not none

   }//end if, is WX2184

    if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
    {
      if (segArbExist == 0) //segment was not defined from digital
      {
       //NEW 22.05.2014, checking it is 1P or 2P
       if (arbRes == WX218xArbitraryResolution1P) //it is 1P
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntCombine);
       else
        strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntCombine*2);

       hr = io.Printf(strCommand);  //temporary close for offline 
      }//end if, segment was not defined from digital
    }//end if, it is mode Combine

    else //it is not mode Combine
    {
     if (segArbExist == 0) //segment was not defined from Digital
     {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P)
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cnt);
      else //it is 2P
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cnt*2);

      hr = io.Printf(strCommand);  //temporary close for offline 
     }//end if, segment was not defined from Digital

    }//end else, it is not mode Combine
  
   strCommand.Format(_T(":TRAC:SEL %d"), wfmCount+1);
   hr = io.Printf(strCommand);  //temporary close for offline

   //Checking if was enough memory to define segment
   if (!SUCCEEDED(hr))
   {
      *val = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      return hr;
   }

   switch (interfaceType)
   {
    case VI_INTF_GPIB:
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);  //temporary close for offline
     
      do
      {
       hr = io.ReadStatusByte(&statusByte); //temporary close for offline
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

    default:  //TCPIP
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline

     hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*wfmSize);  //temporary close for offline
     hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   *val = m_waveformManager.CreateWaveform(name, indexChan);  //saving creating waveform in map
   m_waveformManager.m_WfmCount[indexChan-1]++;

   //Updating waveform size available
   if ((modelNumber == MNM_WX2184 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284 && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX2184C && traceModeEnum == WX218xTraceModeCombine) || (modelNumber == MNM_WX1284C && traceModeEnum == WX218xTraceModeCombine))
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      {
       sizeAv = m_SizeAvailable[indexChan-1] - cntCombine;  
       m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cntCombine; 
      }//end if, it is 1P

      else //it is 2P
      {
        sizeAv = m_SizeAvailable[indexChan-1] - (cntCombine*2);  
        m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
        m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cntCombine*2); 
      }//end else, it is 2P

   }//end if, it is mode Combine

   else //it is not mode Combine
   {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P) //it is 1P
      {
       sizeAv = m_SizeAvailable[indexChan-1] - cnt;  
       m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cnt; 
      }//end if, it is 1P

      else //it is 2P
      {
        sizeAv = m_SizeAvailable[indexChan-1] - (cnt*2);  
        m_SizeAvailable[indexChan-1] = sizeAv; 

       //NEW 28.10.2012
       //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cnt*2); 
      }//end else, it is 2P

   }//end else, it is not mode Combine
  

    //NEW 22.10.2013
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
       if (traceModeEnum != WX218xTraceModeSingle)
       {
         handleOpposite = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);  //saving creating waveform in map
         m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

         if (traceModeEnum == WX218xTraceModeCombine)
          {
            //NEW 22.05.2014, checking it is 1P or 2P
            if (arbRes == WX218xArbitraryResolution1P) //it is 1P
            {
            //Updating waveform size available
            sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cntCombine;  
            m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

            //NEW 28.10.2012
            //Saving in array m_ArrayArbSeg size of this segment
             m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cntCombine;
            }//end if, it is 1P

            else //it is 2P
            {
              //Updating waveform size available
              sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cntCombine*2);  
              m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

              //NEW 28.10.2012
              //Saving in array m_ArrayArbSeg size of this segment
               m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cntCombine*2);
            }//end else, it is 2P

           }//end if, it is Combine mode

          else //it is not Combine mode
          {
            //NEW 22.05.2014, checking it is 1P or 2P
            if (arbRes == WX218xArbitraryResolution1P) //it is 1P
            {
            //Updating waveform size available
            sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cnt;  
            m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

            //NEW 28.10.2012
            //Saving in array m_ArrayArbSeg size of this segment
             m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cnt;

            }//end if, it is 1P

            else //it is 2P
            {
              //Updating waveform size available
              sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cnt*2);  
              m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite; 

              //NEW 28.10.2012
              //Saving in array m_ArrayArbSeg size of this segment
               m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cnt*2);

            }//end else, it is 2P
           }//end else, it is not Combine mode

       }//end if, trace mode is not None

   }//end if, it is WX2184

   delete [] pBlock;

   if (binData)
     delete [] binData;

   if (wfmFile)
      fclose(wfmFile);

   return hr;
}

//================================================================================================================================================
//                                            - LoadCSVFileAdv -
HRESULT WX218x::IWX218xArbitraryWaveform_LoadCSVFileAdv(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
{
	 //Use this function only for WX2184
   //This function for modes:Combine
	HRESULT hr = S_OK;
   FILE *wfmFile1 = VI_NULL;
   FILE *wfmFile2 = VI_NULL;
   CString strChannel, strFileName1, strFileName2, strExtension1, strExtension2;
   long lengthFile1, lengthFile2, pos1, pos2, lengthString1, lengthString2, numBytes1, numBytes2, fileSize1, fileSize2; 
   long tmpSize1, tmpSize2, wfmSize1, wfmSize2, file_count1, file_count2;
   short * binData1 = VI_NULL;
   short *binData2 = VI_NULL;
   short int *pwData1 = VI_NULL;
   short int *pwData2 = VI_NULL;
   double * wfmData1 = VI_NULL;
   double * wfmData2 = VI_NULL;
   double divider_14bit = 8192.0;
   double divider_current = divider_14bit;
   double data;
   CString strCommand, strWaveName, hdrTrace, cmdBuff, strActiveChannel;
   CString strWaveNameOpposite, strTmp;
   long cntData1, cntData2, cntTotal, stbLoops = 0; 
   long wfmCount, wfmIndexName, sizeAv, wfmSizeMin;
   long sizeAvOpposite, wfmIndexNameOpposite;
   int indexChan, indexChanOpposite, ii, jj;
   string name, nameOpposite;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len, sizeDigSeg;
   CString strSystErr = _T("*OPC?\n");
   CString strFormatSegSize, strFormatSegSize2, strFormatSegNum;
   WX218xTraceModeEnum traceModeEnum;
   int segArbExist = 0;   //variable for know if arbitrary segment was already defined from Digital
   unsigned short posScope_current = POS_SCOPE_14BIT;
   unsigned short* pBlockTotal = VI_NULL;
   double checkPoint;
   unsigned short point;
   WX218xArbitraryResolutionEnum arbRes;  //for know it is 1P or 2P
   int posCSV;
   CString strLineCSV, strDataCSV;
   char buffLine[512] = "";
   double dbValueCSV;
   //char *stringCSV;

   arbRes = WX218xArbitraryResolution1P;  //by default

    //NEW 13.05.2014
   unsigned  short  *binDataUs1 = VI_NULL;
   unsigned short *binDataUs2 = VI_NULL;

   if (GetSimulate())  //temporary close for offline
   {
    *Handle1 = 1;    //Waveform Handle = 1 for offline
    *Handle2 = 32001;    //Waveform Handle = 1 for offline
     return hr;
   }

   strChannel = COLE2T(Channel);

   //Doing all for first file
   strFileName1 = COLE2T(FileName1);

   lengthFile1 = strFileName1.GetLength();
   lengthString1 = strFileName1.GetLength() + 1;

   if (!lengthFile1)
   {
      hr = err.InvalidValue(_T("FileName"), FileName1);
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      return hr;
   }

         wfmSize1 = 0;
         //Getting file size
         hr = WX218x::GetCSVFileSize(strFileName1, wfmSize1);
         if (!SUCCEEDED(hr))
         {
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            return hr;
         }

         //Converting CString to char*/TCHAR
         char *tmpChar1 = new char [lengthString1];
         TCHAR *tmpStr1 = new TCHAR [lengthString1];

         _tcscpy_s(tmpStr1, lengthString1, strFileName1);
         numBytes1 = wcstombs(tmpChar1, tmpStr1, lengthString1);

         delete [] tmpChar1;
         delete [] tmpStr1;

 //==================CSV1======================================

	 //Open CSV File for reading 
     binData1 = new short  [wfmSize1];

     file_count1 = 0;

	 ifstream infile;
	 infile.open(strFileName1);
	 if(!infile.good()) //can not open file
	 {
        hr = err.CannotOpenFile(strFileName1);
        *Handle1 = 0;
		*Handle2 = 0;
        return hr;
	 }
	 
    
    std::ifstream dataCSV1(strFileName1);
	std::string lineCSV;
	while(std::getline(dataCSV1, lineCSV))
	{
      //Now in this line we have for example 1,63 (we need only 63) or only 63
	  //Finding comma and read data after comma
	  strLineCSV = lineCSV.data();
	  posCSV = strLineCSV.Find(',');
	  if (posCSV != -1) //line exist from 2 numbers and comma
	  {
        strDataCSV = strLineCSV.Mid(posCSV+1);
	  }//end if, line exist from 2 numbers and comma

	  else //line exist from one number
	  {
        strDataCSV = strLineCSV;
	  }//end else, line exist from one number

	  //Now we need to convert data that is string to double
	  dbValueCSV = _tstof(strDataCSV);
	  binData1[file_count1] = (short) dbValueCSV;
      file_count1 ++;

	}//end while

   //==========================================================================================================

    //Doing all for second file
   strFileName2 = COLE2T(FileName2);

   lengthFile2 = strFileName2.GetLength();
   lengthString2 = strFileName2.GetLength() + 1;

   if (!lengthFile2)
   {
      hr = err.InvalidValue(_T("FileName"), FileName2);
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      return hr;
   }

     
         wfmSize2 = 0;
         //Getting file size
         hr = WX218x::GetCSVFileSize(strFileName2, wfmSize2);
         if (!SUCCEEDED(hr))
         {
            *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
            *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

            if (binData1)
             delete [] binData1;

            return hr;
         }

         //Converting CString to char*/TCHAR
         char *tmpChar2 = new char [lengthString2];
         TCHAR *tmpStr2 = new TCHAR [lengthString2];

         _tcscpy_s(tmpStr2, lengthString2, strFileName2);
         numBytes2 = wcstombs(tmpChar2, tmpStr2, lengthString2);

         delete [] tmpChar2;
         delete [] tmpStr2;

		 //==================CSV1======================================

	 //Open CSV File for reading 
     binData2 = new short  [wfmSize2];

     file_count2 = 0;

	 ifstream infile2;
	 infile2.open(strFileName2);
	 if(!infile2.good()) //can not open file
	 {
        hr = err.CannotOpenFile(strFileName2);
        *Handle1 = 0;
		*Handle2 = 0;

		 if (binData1)
             delete [] binData1;

        return hr;
	 }
	 
    
    std::ifstream dataCSV2(strFileName2);
	std::string lineCSV2;
	while(std::getline(dataCSV2, lineCSV2))
	{
      //Now in this line we have for example 1,63 (we need only 63) or only 63
	  //Finding comma and read data after comma
	  strLineCSV = lineCSV2.data();
	  posCSV = strLineCSV.Find(',');
	  if (posCSV != -1) //line exist from 2 numbers and comma
	  {
        strDataCSV = strLineCSV.Mid(posCSV+1);
	  }//end if, line exist from 2 numbers and comma

	  else //line exist from one number
	  {
        strDataCSV = strLineCSV;
	  }//end else, line exist from one number

	  //Now we need to convert data that is string to double
	  dbValueCSV = _tstof(strDataCSV);
	  binData2[file_count2] = (short) dbValueCSV;
      file_count2 ++;

	}//end while

   
   //==============================================================================================================

   //Checking if size of file1 is equal to size of file2
   if (wfmSize1 != wfmSize2)
   {
      hr = err.FileSizeNotEqual(_T(""));
      *Handle1 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created
      *Handle2 = 0;     //if Waveform Handle = 0, there was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      if (wfmFile1)
       fclose(wfmFile1);

      if (wfmFile2)
       fclose(wfmFile2);

       return hr;    
   }//end if, the files aren't with the same size

   //Sending Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184;

   cntData1 = wfmSize1;
   cntData2 = wfmSize2;

   //NEW 20.05.2014
   //Doesn't check trace mode, putting to Combine

  
    //Checking trace mode
    //If trace mode is None, Normal or Combine, user can use this current function,
    //else, giving message to use <CreateCustom>

      /*hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }*/


      hr = WX218x::IWX218xArbitraryWaveform_put_TraceMode(WX218xTraceModeCombine);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }

      hr = WX218x::IWX218xArbitraryWaveform_get_TraceMode(&traceModeEnum);
      if (hr != S_OK)
      {
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }

      //NEW 20.05.2014 doesn't check trace mode, putting to Combine
     /* if (traceModeEnum == WX218xTraceModeDuplicate || traceModeEnum == WX218xTraceModeZero || traceModeEnum == WX218xTraceModeSingle)
      {
         if (traceModeEnum == WX218xTraceModeDuplicate)
            strTmp = _T("Duplicate");
         else if (traceModeEnum == WX218xTraceModeZero)
            strTmp = _T("Zero");
         else
            strTmp = _T("None");

         hr = err.TraceModeDuplicate(strTmp);
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
         delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }//end if, Trace Mode is None(Single) or Duplicate or Zero*/

       //Checking Arbitrary Resolution, if it is 2P, segment must be:*2
      hr = WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(Channel, &arbRes);
      if (hr != S_OK)
      {  
         *Handle1 = 0;
         *Handle2 = 0;

         if (binData1)
          delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
      }

    //NEW 22.05.2014, checking it is 1P or 2P
    if (arbRes == WX218xArbitraryResolution1P)
    {

   //Checking waveform size for the first buffer
   if ((cntData1< wfmSizeMin) || (cntData1 > m_MemorySize) || (cntData1%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File1"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }

   //Checking waveform size for the second buffer
   if ((cntData2< wfmSizeMin) || (cntData2 > m_MemorySize) || (cntData2%m_WfmQuantum))
    {
      hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File2"), _T("Size of File"));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }

    }//end if, it is 1P

    else //it is 2P
    {
       //Checking waveform size for the first buffer
       if (((cntData1*2)< wfmSizeMin) || ((cntData1*2) > m_MemorySize) || ((cntData1*2)%m_WfmQuantum))
       {
        hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File1"), _T("Size of File"));
        *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
        *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

        if (binData1)
         delete [] binData1;

         if (binData2)
          delete [] binData2;

         return hr;
    }

       //Checking waveform size for the second buffer
       if (((cntData2*2)< wfmSizeMin) || ((cntData2*2) > m_MemorySize) || ((cntData2*2)%m_WfmQuantum))
        {
          hr = ReportInvalidValueError(_T("LoadArbWfmFromFileAdv"), _T("File2"), _T("Size of File"));
          *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
          *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

          if (binData1)
           delete [] binData1;

          if (binData2)
           delete [] binData2;

         return hr;
    }

    }//end else, it is 2P

   //Checking if two buffer sizes are equal
   if (cntData1 != cntData2)
   {
      hr = err.SizeArrayNotEqual(_T(""));
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
    }
   

   strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

   wfmCount = m_waveformManager.m_WfmCount[indexChan-1];

   //Checking if waveform count is already maximum number 
   if (wfmCount > MAX_NUM_SEGMENTS)
   {
      hr = err.MaxCountSegments();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
   }

   //Checking if there is available memory

   //NEW 22.05.2014, checking it is 1P or 2P
    if (arbRes == WX218xArbitraryResolution1P) //it is 1P
    {
     if (cntData1 > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
     }

    }//end if,it is 1P

    else //it is 2P
    {
     if ((cntData1*2) > m_SizeAvailable[indexChan-1])
     {
      hr = err.NoAvailableMemory();
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      return hr;
     }

    }//end else, it is 2P

     //NEW 18.03.2014
     //Checking in array m_ArrayDigSeg if already was any download in Digital segment
      sizeDigSeg = m_digitalManager.m_ArrayDigSeg[0][wfmCount];

      //Checking this only for current channel 1 or 2
      if (indexChan == 1 || indexChan == 2) //current chan is 1 or 2
      {
        //NEW 22.05.2014, checking it is 1P or 2P
        if (arbRes == WX218xArbitraryResolution1P) //it is 1P
        {
        if (cntData1 != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

           if (binData1)
            delete [] binData1;

           if (binData2)
            delete [] binData2;

           return hr;
         }//end if, in this segment in Digital was already something download

        }//end if, it is 1P

        else //it is 2P
        {
         if ((cntData1*2) != sizeDigSeg*2 && sizeDigSeg != 0) //in this segment in Digital was already something download
         {
           strFormatSegNum.Format(_T("(%d)"), wfmCount+1);
           strFormatSegSize.Format(_T("(%d)"), sizeDigSeg*2);
           strFormatSegSize2.Format(_T("(%d)"), sizeDigSeg);
           hr = err.SegsizeArbdigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
           *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
           *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

           if (binData1)
            delete [] binData1;

           if (binData2)
            delete [] binData2;

           return hr;
         }//end if, in this segment in Digital was already something download

        }//end else,it is 2P 

        //Checking if this segment was already defined from Digital
        if (sizeDigSeg != 0)
           segArbExist = 1;

      }//end if, current chan is 1 or 2

   //Making waveform index name
   if (indexChan == 1)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

   else if (indexChan == 2)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

   else if (indexChan == 3)
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

   else //indexChan = 4
      wfmIndexName = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

   m_waveformManager.CreateWaveformName(name, wfmIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strWaveName = buff;

  //Getting index of opposite channel and creating handle for opposite channel
  indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

  //Making waveform index name
  if (indexChanOpposite == 1)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A + wfmCount;

  else if (indexChanOpposite == 2)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + wfmCount; 

  else if (indexChanOpposite == 3)
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + wfmCount;   

  else //indexChan = 4
   wfmIndexNameOpposite = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + wfmCount;  

  m_waveformManager.CreateWaveformName(nameOpposite, wfmIndexNameOpposite);
  sprintf_s(buff, sizeof(buff), "%s", name.c_str());

  strWaveNameOpposite = buff;

  //NEW 20.05.2014 Double was removed from the scipi
 /*if (traceModeEnum == WX218xTraceModeDouble) //trace mode is Normal(Double)
 {

  //Calculation total size for two waveforms
  cntTotal = cntData1 * 2;

  //Allocation memory for data for both channels
  pBlockTotal = new unsigned short[cntTotal];

  for(jj = 0; jj < cntTotal; )  //loop for both channels and saving data in total buffer
  {
   for (ii = 0; ii < cntData1; ii++) //Loop for first buffer
   {
    checkPoint = binData1[ii];
    point = posScope_current + (unsigned short) checkPoint;
    pBlockTotal[jj] = point;

    jj++;
   }//end for, Loop for first buffer

   for (ii = 0; ii < cntData2; ii++) //Loop for second buffer
   {
    checkPoint = binData2[ii];
    point = posScope_current + (unsigned short) checkPoint;
    pBlockTotal[jj] = point;

    jj++;
   }//end for, Loop for second buffer

  }//end for, loop for both channels and saving data in total buffer

 }//end if, trace mode is Normal(Double)  */


 //else //Trace mode is Combine
 if (traceModeEnum == WX218xTraceModeCombine)
 {
    //Calculation total size for two waveforms
#ifdef WX2184_ADD_32PT
     cntTotal = cntData1 * 2 + 32;
#else
      cntTotal = cntData1 * 2;
#endif

     pBlockTotal = new unsigned short[cntTotal];

     binDataUs1 = new unsigned short [cntData1]; 
     binDataUs2 = new unsigned short [cntData2]; 

   for (ii = 0; ii < cntData1; ii++) //Loop for first buffer
   {
    checkPoint = binData1[ii];
    point = posScope_current + (unsigned short) checkPoint;
    binDataUs1[ii] = point;
   }//end for, Loop for first buffer

   for (ii = 0; ii < cntData2; ii++) //Loop for second buffer
   {
    checkPoint = binData2[ii];
    point = posScope_current + (unsigned short) checkPoint;
    binDataUs2[ii] = point;
   }//end for, Loop for second buffer

    //Call to function that recieves two buffer, length of segment and outputbuffer
     //and combined two waveform
     WX218x::BuildCombinedWave(binDataUs1, binDataUs2, cntData1, pBlockTotal);

     //Free memory
     if (binDataUs1)
      delete [] binDataUs1;

     if (binDataUs2)
      delete [] binDataUs2;

 }//end else, Trace mode is Combine



    if (segArbExist == 0)  //this segment was not define from Digital
    {
      //NEW 22.05.2014, checking it is 1P or 2P
      if (arbRes == WX218xArbitraryResolution1P)
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntData1);
      else
       strCommand.Format(_T(":TRAC:DEF %d,%d"), wfmCount+1, cntData1*2);

      hr = io.Printf(strCommand);  //temporary close for offline
    }
  
   strCommand.Format(_T(":TRAC:SEL %d"), wfmCount+1);
   hr = io.Printf(strCommand);  //temporary close for offline

   //Checking if was enough memory to define segment
   if (!SUCCEEDED(hr))
   {
      *Handle1 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created
      *Handle2 = 0;    //if Waveform Handle = 0, was error in function and waveform was not created

      if (binData1)
       delete [] binData1;

      if (binData2)
       delete [] binData2;

      if (pBlockTotal)
       delete [] pBlockTotal;

      return hr;
   }

   switch (interfaceType)
   {

   case VI_INTF_GPIB:  //GPIB
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);

      do
      {
         hr = io.ReadStatusByte(&statusByte);
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

   default:  //TCPIP
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":TRAC:DATA #", 2*cntTotal, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)pBlockTotal, 2*cntTotal);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   *Handle1 = m_waveformManager.CreateWaveform(name, indexChan);  //saving creating waveform in map
   m_waveformManager.m_WfmCount[indexChan-1]++;

   //Updating waveform size available

   //NEW 22.05.2014, checking it is 1P or 2P
   if (arbRes == WX218xArbitraryResolution1P) //it is 1P
   {
     sizeAv = m_SizeAvailable[indexChan-1] - cntData1;  
     m_SizeAvailable[indexChan-1] = sizeAv; 

      //NEW 28.10.2012
      //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = cntData1;

       *Handle2 = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);
       //saving creating waveform in the map
       m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

       //Updating waveform size available
        sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - cntData2;
       m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

       m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = cntData2;

   }//end if, it is 1P

   else //it is 2P
   {
     sizeAv = m_SizeAvailable[indexChan-1] - (cntData1*2);  
     m_SizeAvailable[indexChan-1] = sizeAv; 

      //NEW 28.10.2012
      //Saving in array m_ArrayArbSeg size of this segment
       m_waveformManager.m_ArrayArbSeg[indexChan-1][wfmCount] = (cntData1*2);

       *Handle2 = m_waveformManager.CreateWaveform(nameOpposite, indexChanOpposite);
       //saving creating waveform in the map
       m_waveformManager.m_WfmCount[indexChanOpposite-1]++;

       //Updating waveform size available
        sizeAvOpposite = m_SizeAvailable[indexChanOpposite-1] - (cntData2*2);
       m_SizeAvailable[indexChanOpposite-1] = sizeAvOpposite;

       m_waveformManager.m_ArrayArbSeg[indexChanOpposite-1][wfmCount] = (cntData2*2);
   }//end else, it is 2P


   if (binData1)
       delete [] binData1;

   if (binData2)
     delete [] binData2;

    if (pBlockTotal)
      delete [] pBlockTotal;

   if (wfmFile1)
      fclose(wfmFile1);

   if (wfmFile2)
      fclose(wfmFile2);

   return hr;
}


	






