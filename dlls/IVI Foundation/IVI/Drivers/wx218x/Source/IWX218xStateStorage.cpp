/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* CellStore */
HRESULT WX218x::IWX218xStateStorage_CellRecall_RangeCheck(LPCTSTR pszPropertyName, long val)
{
   HRESULT hr = S_OK;

   if (val < STATE_CELL_MIN || val > STATE_CELL_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xStateStorage_get_CellStore(long* val)
{
   HRESULT hr = S_OK;

   hr = io.Queryf(_T(":SYST:STOR:CELL?"), _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xStateStorage_put_CellStore(long val)
{
   HRESULT hr = S_OK;

   hr = io.Printf(_T(":SYST:STOR:CELL %d"),val);

   return hr;
}

/* CellRecall */
HRESULT WX218x::IWX218xStateStorage_get_CellRecall(long* val)
{
   HRESULT hr = S_OK;

   hr = io.Queryf(_T(":SYST:REC:CELL?"), _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xStateStorage_put_CellRecall(long val)
{
   HRESULT hr = S_OK;

   hr = io.Printf(_T(":SYST:REC:CELL %d"),val);

   return hr;
}

/* ConfigurationStore */
HRESULT WX218x::IWX218xStateStorage_get_ConfigurationStore(WX218xStateStorageConfigurationEnum* val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":SYST:STOR:CONF?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("SET")))
      *val = WX218xStateStorageConfigurationSetup;

   else if (!strResponse.CompareNoCase(_T("WAVE")))
      *val = WX218xStateStorageConfigurationWave;

   else if (!strResponse.CompareNoCase(_T("ALL")))
      *val = WX218xStateStorageConfigurationAll;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xStateStorage_put_ConfigurationStore(WX218xStateStorageConfigurationEnum val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strEnum;

   switch (val)
   {
   case WX218xStateStorageConfigurationSetup:
      strCommandSend = _T(":SYST:STOR:CONF SET");
      break;

   case WX218xStateStorageConfigurationWave:
      strCommandSend = _T(":SYST:STOR:CONF WAVE");
      break;

   case WX218xStateStorageConfigurationAll:
      strCommandSend = _T(":SYST:STOR:CONF ALL");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   hr = io.Printf(strCommandSend);

   return hr;
}

/* TargetStore */
HRESULT WX218x::IWX218xStateStorage_get_TargetStore(WX218xStateStorageTargetEnum* val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":SYST:STOR:TARG?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("INT")))
      *val = WX218xStateStorageTargetINT;

   else if (!strResponse.CompareNoCase(_T("USB")))
      *val = WX218xStateStorageTargetUSB;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xStateStorage_put_TargetStore(WX218xStateStorageTargetEnum val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strEnum;

   switch (val)
   {
   case WX218xStateStorageTargetINT:
      strCommandSend = _T(":SYST:STOR:TARG INT");
      break;

   case WX218xStateStorageTargetUSB:
      strCommandSend = _T(":SYST:STOR:TARG USB");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   hr = io.Printf(strCommandSend);

   return hr;
}

/* ConfigurationRecall */
HRESULT WX218x::IWX218xStateStorage_get_ConfigurationRecall(WX218xStateStorageRecalConfigurationEnum* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   if (GetSimulate())
   {
     *val = WX218xStateStorageRecalConfigurationEmpty;
     return hr;
   }

   strCommandSend = _T(":SYST:REC:CONF?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("SET")))
      *val = WX218xStateStorageRecalConfigurationSetup;

   else if (!strResponse.CompareNoCase(_T("WAVE")))
      *val = WX218xStateStorageRecalConfigurationWave;

   else if (!strResponse.CompareNoCase(_T("ALL")))
      *val = WX218xStateStorageRecalConfigurationAll;

   else if (!strResponse.CompareNoCase(_T("EMPT")) || !strResponse.CompareNoCase(_T("EMPTY")))
      *val = WX218xStateStorageRecalConfigurationEmpty;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

//==============================================================================================================
//                                     - StoreEnabled -
HRESULT WX218x::IWX218xStateStorage_get_StoreEnabled(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":SYST:STOR:STAT?"); 
   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ENAB")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xStateStorage_put_StoreEnabled(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;
   CString strEnabled, strCommandSend;

   if (val == VARIANT_TRUE)
      strEnabled = _T("ENAB");
   else
      strEnabled = _T("DIS");

   strCommandSend.Format(_T(":SYST:STOR:STAT %s"), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

//======================================================================================================================
//                                  - RecallEnabled -
HRESULT WX218x::IWX218xStateStorage_get_RecallEnabled(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":SYST:REC:STAT?"); 
   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ENAB")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xStateStorage_put_RecallEnabled(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;
   CString strEnabled, strCommandSend;

   if (val == VARIANT_TRUE)
      strEnabled = _T("ENAB");
   else
      strEnabled = _T("DIS");

   strCommandSend.Format(_T(":SYST:REC:STAT %s"), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}
//===================================================================================================================

/* TargetRecall */
HRESULT WX218x::IWX218xStateStorage_get_TargetRecall(WX218xStateStorageTargetEnum* val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   strCommandSend = _T(":SYST:REC:TARG?");

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("INT")))
      *val = WX218xStateStorageTargetINT;

   else if (!strResponse.CompareNoCase(_T("USB")))
      *val = WX218xStateStorageTargetUSB;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xStateStorage_put_TargetRecall(WX218xStateStorageTargetEnum val)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strEnum;

   switch (val)
   {
   case WX218xStateStorageTargetINT:
      strCommandSend = _T(":SYST:REC:TARG INT");
      break;

   case WX218xStateStorageTargetUSB:
      strCommandSend = _T(":SYST:REC:TARG USB");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   hr = io.Printf(strCommandSend);

   return hr;
}

/* Clear */
HRESULT WX218x::IWX218xStateStorage_Clear()
{
   HRESULT hr = S_OK;

   if (GetSimulate())
      return hr;

   hr = io.Printf(_T(":SYST:STOR:CLE"));

   return hr;
}

/* Recall */
HRESULT WX218x::IWX218xStateStorage_Recall(long Cell, WX218xStateStorageTargetEnum Target)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strTarget, strEnum;

   // Checking parameters ranges
   //Cell
   hr = WX218x::IWX218xStateStorage_CellRecall_RangeCheck(_T("Cell"), Cell);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Cell"), Cell);
      return hr;
   }

   if (GetSimulate())
   {
      hr = _IWX218xStateStorage::put_CellRecall(Cell);
      hr = _IWX218xStateStorage::put_TargetRecall(Target);
      return hr;
   }

   switch (Target)
   {
   case WX218xStateStorageTargetINT:
      strTarget = _T(":SYST:REC:TARG INT");
      break;

   case WX218xStateStorageTargetUSB:
      strTarget = _T(":SYST:REC:TARG USB");
      break;

   default:
      EnumToName(Target, strEnum);
      hr = err.ValueNotSupported(strEnum, strEnum);
      return hr;
   }

   strCommandSend.Format(_T(":SYST:REC:CELL %d;%s;:SYST:REC:UPD"), Cell, strTarget);
   hr = io.Printf(strCommandSend);

   Sleep(20);

   return hr;
}

/* Store */
HRESULT WX218x::IWX218xStateStorage_Store(long Cell, WX218xStateStorageConfigurationEnum Configuration, WX218xStateStorageTargetEnum Target)
{
   HRESULT hr = S_OK;
   CString strCommandSend, strConfiguration, strTarget, strEnum;

   // Checking parameters ranges
   //Cell
   hr = WX218x::IWX218xStateStorage_CellRecall_RangeCheck(_T("Cell"), Cell);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Cell"), Cell);
      return hr;
   }

   if (GetSimulate())
   {
      hr = _IWX218xStateStorage::put_CellStore(Cell);
      hr = _IWX218xStateStorage::put_ConfigurationStore(Configuration);
      hr = _IWX218xStateStorage::put_TargetStore(Target);
      return hr;
   }

   switch (Configuration)
   {
   case WX218xStateStorageConfigurationSetup:
      strConfiguration = _T(":SYST:STOR:CONF SET");
      break;

   case WX218xStateStorageConfigurationWave:
      strConfiguration = _T(":SYST:STOR:CONF WAVE");
      break;

   case WX218xStateStorageConfigurationAll:
      strConfiguration = _T(":SYST:STOR:CONF ALL");
      break;

   default:
      EnumToName(Configuration, strEnum);
      hr = err.ValueNotSupported(strEnum, strEnum);
      return hr;
   }

   switch (Target)
   {
   case WX218xStateStorageTargetINT:
      strTarget = _T(":SYST:STOR:TARG INT");
      break;

   case WX218xStateStorageTargetUSB:
      strTarget = _T(":SYST:STOR:TARG USB");
      break;

   default:
      EnumToName(Target, strEnum);
      hr = err.ValueNotSupported(strEnum, strEnum);
      return hr;
   }

   strCommandSend.Format(_T(":SYST:STOR:CELL %d;%s;%s;:SYST:STOR:UPD"), Cell, strConfiguration, strTarget);
   hr = io.Printf(strCommandSend);

   Sleep(20);

   return hr;
}

/* Load */
HRESULT WX218x::IWX218xStateStorage_Load()
{
   HRESULT hr = S_OK;

   if (GetSimulate())
      return hr;

   hr = io.Printf(_T(":SYST:REC:UPD"));

   Sleep(20);

   return hr;
}

/* Save */
HRESULT WX218x::IWX218xStateStorage_Save()
{
   HRESULT hr = S_OK;

   if (GetSimulate())
      return hr;

   hr = io.Printf(_T(":SYST:STOR:UPD"));

   Sleep(20);

   return hr;
}

