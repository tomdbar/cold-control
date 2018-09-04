/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Output */
HRESULT WX218x::IWX218x_get_Output(IWX218xChannel** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* AM */
HRESULT WX218x::IWX218x_get_AM(IWX218xAM** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* ActiveChannel */
HRESULT WX218x::ActiveChannel_RangeCheck(LPCTSTR pszPropertyName, BSTR val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(val);

   if (m_ChannelCount == 2)
   {
      if(strChanCheck.CompareNoCase(_T("Channel1")) && strChanCheck.CompareNoCase(_T("Channel2")))
         hr = err.InvalidValue(_T("val"), val);
   }

   if (m_ChannelCount == 3)
   {
      if(strChanCheck.CompareNoCase(_T("Channel1")) && strChanCheck.CompareNoCase(_T("Channel2")) && strChanCheck.CompareNoCase(_T("Channel3")))
         hr = err.InvalidValue(_T("val"), val);
   }

   if (m_ChannelCount == 4)
   {
      if(strChanCheck.CompareNoCase(_T("Channel1")) && strChanCheck.CompareNoCase(_T("Channel2")) && strChanCheck.CompareNoCase(_T("Channel3")) && strChanCheck.CompareNoCase(_T("Channel4")))
         hr = err.InvalidValue(_T("val"), val);
   }

   return hr;
}

HRESULT WX218x::IWX218x_get_ActiveChannel(BSTR* val)
{
	HRESULT hr = S_OK;
   CString strChanRead;

   // Free the string that is passed in
   ::SysFreeString(*val);

   if (m_ChannelCount == 2 || m_ChannelCount == 3 || m_ChannelCount == 4)
      hr = io.Queryf(_T(":INST:SEL?"), _T("%$Cs"), &strChanRead);

   else
      strChanRead = _T(CHAN_A);

   if (!strChanRead.CompareNoCase(_T(CHAN_A)))
   {
      //Saving active channel
      m_strCurrentChannel = _T("Channel1");

      *val = ::SysAllocString(OLESTR("Channel1"));
      if (*val == NULL)
         hr = err.OutOfMemory();
   }

   else if (!strChanRead.CompareNoCase(_T(CHAN_B)))
   {
      //Saving active channel
      m_strCurrentChannel = _T("Channel2");

      *val = ::SysAllocString(OLESTR("Channel2"));
      if (*val == NULL)
         hr = err.OutOfMemory();
   }

   else if (!strChanRead.CompareNoCase(_T(CHAN_C)))
   {
      //Saving active channel
      m_strCurrentChannel = _T("Channel3");

      *val = ::SysAllocString(OLESTR("Channel3"));
      if (*val == NULL)
         hr = err.OutOfMemory();
   }

   else if (!strChanRead.CompareNoCase(_T(CHAN_D)))
   {
      //Saving active channel
      m_strCurrentChannel = _T("Channel4");

      *val = ::SysAllocString(OLESTR("Channel4"));
      if (*val == NULL)
         hr = err.OutOfMemory();
   }

   else
      hr = err.UnknownChannelName(strChanRead);

   return hr;
}

HRESULT WX218x::IWX218x_put_ActiveChannel(BSTR val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(val);
   CString strChanSend;

   if(!strChanCheck.CompareNoCase(_T("Channel1")))
      strChanSend = _T(CHAN_A);

   else if(!strChanCheck.CompareNoCase(_T("Channel2")))
      strChanSend = _T(CHAN_B);

   else if(!strChanCheck.CompareNoCase(_T("Channel3")))
      strChanSend = _T(CHAN_C);

   else 
      strChanSend = _T(CHAN_D);

   if (m_ChannelCount == 2 || m_ChannelCount == 3 || m_ChannelCount == 4)
      hr = io.Printf(_T(":INST:SEL %$Cs"),strChanSend);

   //Saving active channel
   m_strCurrentChannel = strChanCheck;

   return hr;
}

/* StandardWaveform */
HRESULT WX218x::IWX218x_get_StandardWaveform(IWX218xStandardWaveform** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* Arbitrary */
HRESULT WX218x::IWX218x_get_Arbitrary(IWX218xArbitrary** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* CarrierModulation */
HRESULT WX218x::IWX218x_get_CarrierModulation(IWX218xCarrierModulation** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* Couple */
HRESULT WX218x::IWX218x_get_Couple(IWX218xCouple** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* FM */
HRESULT WX218x::IWX218x_get_FM(IWX218xFM** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* Markers */
HRESULT WX218x::IWX218x_get_Markers(IWX218xMarkers** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* Trigger */
HRESULT WX218x::IWX218x_get_Trigger(IWX218xTrigger** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* StateStorage */
HRESULT WX218x::IWX218x_get_StateStorage(IWX218xStateStorage** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* XInstrument */
HRESULT WX218x::IWX218x_get_XInstrument(IWX218xXInstrument** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* DigitalPulse */
HRESULT WX218x::IWX218x_get_DigitalPulse(IWX218xDigitalPulse** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

/* Sweep */
HRESULT WX218x::IWX218x_get_Sweep(IWX218xSweep** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}


HRESULT WX218x::IWX218x_get_DigitalPatternOutput(IWX218xDigitalPatternOutput** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IWX218x_get_CHIRP(IWX218xCHIRP** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IWX218x_get_FSK(IWX218xFSK** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IWX218x_get_ASK(IWX218xASK** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IWX218x_get_FHOP(IWX218xFHOP** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IWX218x_get_AHOP(IWX218xAHOP** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IWX218x_get_Pattern(IWX218xPattern** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IWX218x_get_PSK(IWX218xPSK** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

HRESULT WX218x::IWX218x_get_QAM(IWX218xQAM** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

//========================================== Skew ==================================================
HRESULT WX218x::IWX218x_get_Skew(BSTR Channel, double* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":INST:SKEW?")); 
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218x_put_Skew(BSTR Channel, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":INST:SKEW %+17.9E")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218x_Skew_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   if (val < INSTR_SKEW_MIN || val > INSTR_SKEW_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}


HRESULT WX218x::IWX218x_SetActiveChannel(BSTR ChName)
{
	HRESULT hr = S_OK;

   hr = _IWX218x::put_ActiveChannel(ChName);
   
   return hr;
}


/* InitiateGeneration */
HRESULT WX218x::IWX218x_InitiateGeneration()
{
	HRESULT hr = S_OK;

   if (GetSimulate())
      return hr;

   hr = io.Printf(_T(":ENAB"));

   return hr;
}

/* AbortGeneration */
HRESULT WX218x::IWX218x_AbortGeneration()
{
	HRESULT hr = S_OK;

   if (GetSimulate())
      return hr;

   hr = io.Printf(_T(":ABOR"));

   return hr;
}

//======================================================================================================================================================
//                                                           - SendCmd -
HRESULT WX218x::IWX218x_SendCmd(BSTR Command)
{
	//Sending scipi command (not query) to the instrument
	HRESULT hr = S_OK;
    CString strCommandSend = COLE2T(Command);

    if (GetSimulate())
      return hr;
  
    hr = io.Printf(strCommandSend);

    return hr;
}

//=======================================================================================================================================================
//                                              - ReadQuery -
HRESULT WX218x::IWX218x_ReadQuery(BSTR SendBuff, BSTR* ReadBuff)
{
	//Sending command (query) to the instrument and read answer
	HRESULT hr = S_OK;
	CString strCommandSend = COLE2T(SendBuff);
	CString strBuffRead;
	bool isEmpty;

	 if (GetSimulate())
      return hr;

	 isEmpty  = strCommandSend.IsEmpty(); 

	 if (isEmpty == true)
	 {
		hr = err.CommandEmpty();
		return hr;
     }
	
   // Free the string that is passed in
   ::SysFreeString(*ReadBuff);

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strBuffRead);
   *ReadBuff = strBuffRead.AllocSysString();
   if (*ReadBuff == NULL)
   {
     hr = err.OutOfMemory();
	 return hr;
   }
  
   return hr;
}
