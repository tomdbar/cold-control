/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

HRESULT WX218x::IIviDriverUtility_Disable()
{
   HRESULT hr = S_OK;

   hr = DriverBase::Disable();

   return hr;
}

HRESULT WX218x::IIviDriverUtility_ErrorQuery(long* ErrorCode, BSTR* ErrorMessage)
{
   HRESULT hr = S_OK;

   hr = DriverBase::ErrorQuery(ErrorCode, ErrorMessage);

   return hr;
}

HRESULT WX218x::IIviDriverUtility_LockObject()
{
   HRESULT hr = S_OK;

   hr = DriverBase::LockObject();

   return hr;
}

HRESULT WX218x::IIviDriverUtility_Reset()
{
   HRESULT hr = S_OK;
   CString strActiveChannel, strCommandSend;
   int ii, val;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   //Setting default to active channel
   m_strCurrentChannel = _T("Channel1");

   if (GetSimulate()) //temporary close for offline
      return hr;

   hr = io.Printf(_T("*CLS")); //temporary close for offline

   //hr = DriverBase::Reset(); 
   hr = io.Printf(_T("*RST")); //temporary close for offline

   //NEW 2.04.2014 only for WX2184 or WX1284
   //Adding delay if model is WX2184, becouse we recieve Timeout
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
     Sleep(10000);

   //NEW 2.06.2014 doing this for WX2184 becouse was Timeout
    //if (modelNumber != MNM_WX2184)
    //{
      strCommandSend = _T("*OPC?");
      hr = io.Queryf(strCommandSend, _T("%d"), &val);
    //}
 

   if(SUCCEEDED(hr))
   {
      //Cleaning waveform map for all channels
      m_waveformManager.Initialize();

      //Cleaning sequence for all channels
      m_sequenceManager.Initialize();

      //NEW 28.10.2012
      m_digitalManager.Initialize();

      //Updating waveform size available for all channels
      for (ii = 0; ii< m_ChannelCount; ii++)
      {
         m_SizeAvailable[ii] = m_MemorySize;

         //NEW 28.10.2012
         m_SizeAvailableDigital[ii] = m_MemorySize/2;

      }


   }//end if, SUCCEEDED(hr)

   return hr;
}

HRESULT WX218x::IIviDriverUtility_ResetWithDefaults()
{
   HRESULT hr = S_OK;

   hr = _IIviDriverUtility::Reset();
   //hr = DriverBase::ResetWithDefaults();

   return hr;
}

HRESULT WX218x::IIviDriverUtility_SelfTest(long* TestResult, BSTR* TestMessage)
{
   HRESULT hr = S_OK;

   //hr = DriverBase::SelfTest(TestResult, TestMessage);
   //hr = IDS_S_IVI_NSUP_SELF_TEST;

   //hr = ReportError(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, _T("Frequency"));

   hr = err.SelfTestNotSupported();


   return hr;
}

HRESULT WX218x::IIviDriverUtility_UnlockObject()
{
   HRESULT hr = S_OK;

   hr = DriverBase::UnlockObject();

   return hr;
}