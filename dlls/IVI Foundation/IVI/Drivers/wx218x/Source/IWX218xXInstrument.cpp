/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Enabled */
HRESULT WX218x::IWX218xXInstrument_get_Enabled(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":XINS:STAT?");

   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
   {
      *val = VARIANT_TRUE;
   }
   else
   {
      *val = VARIANT_FALSE;
   }

   return hr;
}

HRESULT WX218x::IWX218xXInstrument_put_Enabled(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;
   CString strEnabled, strCommandSend;

   if (val == VARIANT_TRUE)
      strEnabled = _T("ON");
   else
      strEnabled = _T("OFF");

   strCommandSend.Format(_T(":XINS:STAT %s"), strEnabled);

   hr = io.Printf(strCommandSend);

   return hr;
}

/* Mode */
HRESULT WX218x::IWX218xXInstrument_get_Mode(WX218xXInstrumentModeEnum* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":XINS:MODE?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("MAST")))
      *val = WX218xXInstrumentModeMaster;

   else if (!strResponse.CompareNoCase(_T("SLAV")))
      *val = WX218xXInstrumentModeSlave;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xXInstrument_put_Mode(WX218xXInstrumentModeEnum val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strEnum;

   switch (val)
   {
   case WX218xXInstrumentModeMaster:
      strCommandSend = _T(":XINS:MODE MAST");
      break;

   case WX218xXInstrumentModeSlave:
      strCommandSend = _T(":XINS:MODE SLAV");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   hr = io.Printf(strCommandSend);

   return hr;
}

/* Offset */
HRESULT WX218x::IWX218xXInstrument_get_Offset(long* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend;

   strCommandSend = _T(":XINS:OFFS?");

   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xXInstrument_put_Offset(long val)
{
	HRESULT hr = S_OK;
   CString strCommandSend;

   strCommandSend.Format(_T(":XINS:OFFS %d"), val);

   hr = io.Printf(strCommandSend);

   return hr;
}

//=========================================================================================================
//                            ModeAdv
HRESULT WX218x::IWX218xXInstrument_get_ModeAdv(WX218xXInstrumentModeAdvEnum* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":XINS:MODE?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("MAST")))
      *val = WX218xXInstrumentModeAdvMaster;

   else if (!strResponse.CompareNoCase(_T("SLAV")))
      *val = WX218xXInstrumentModeAdvSlave;

   else if (!strResponse.CompareNoCase(_T("MSL")))
      *val = WX218xXInstrumentModeAdvMSlave;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xXInstrument_put_ModeAdv(WX218xXInstrumentModeAdvEnum val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strEnum;

   switch (val)
   {
   case WX218xXInstrumentModeAdvMaster:
      strCommandSend = _T(":XINS:MODE MAST");
      break;

   case WX218xXInstrumentModeAdvSlave:
      strCommandSend = _T(":XINS:MODE SLAV");
      break;

   case WX218xXInstrumentModeAdvMSlave:
      strCommandSend = _T(":XINS:MODE MSL");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   hr = io.Printf(strCommandSend);
   

   return hr;
}

//===============================================================================================
//                                   - ConfigureXInstrumentOffset -
HRESULT WX218x::IWX218xXInstrument_ConfigureXInstrumentOffset(long Offset)
{
	HRESULT hr = S_OK;

   hr = _IWX218xXInstrument::put_Offset(Offset);

	return hr;
}

//================================================================================================
//                                - ConfigureXInstrumentModeAdv -
HRESULT WX218x::IWX218xXInstrument_ConfigureXInstrumentModeAdv(WX218xXInstrumentModeAdvEnum ModeAdv)
{
	HRESULT hr = S_OK;

   hr = _IWX218xXInstrument::put_ModeAdv(ModeAdv);

	return hr;
}

//=========================================================================================
//                              - ConfigureXInstrumentMode -
HRESULT WX218x::IWX218xXInstrument_ConfigureXInstrumentMode(WX218xXInstrumentModeEnum Mode)
{
	HRESULT hr = S_OK;

   hr = _IWX218xXInstrument::put_Mode(Mode);

	return hr;
}

//===============================================================================
//                     - ConfigureXInstrumentEnabled -
HRESULT WX218x::IWX218xXInstrument_ConfigureXInstrumentEnabled(VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

   hr = _IWX218xXInstrument::put_Enabled(State);

	return hr;
}

HRESULT WX218x::IWX218xXInstrument_Offset_RangeCheck(LPCTSTR pszPropertyName, long val)
{
	HRESULT hr = S_OK;

   if (abs(val) < XINSTR_OFFSET_MIN || abs(val) > m_MemorySize) 
      hr = err.InvalidValue(_T("val"), val);
   

   return hr;
}
