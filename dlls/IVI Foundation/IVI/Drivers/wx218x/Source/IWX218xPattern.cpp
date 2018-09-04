/******************************************************************************
*                                                                         
*               Copyright 2010-2012 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"


                  /* Baud */
HRESULT WX218x::IWX218xPattern_Baud_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double val_min, val_max;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {

     case MNM_WX2181B:
     case MNM_WX2182B:
     case MNM_WX2181BD:
     case MNM_WX2182BD:
      val_min = PATTERN_PREDEFINED_BAUD_MIN;
      val_max = PATTERN_PREDEFINED_BAUD_MAX;
     break;

     case MNM_WX2182C:
     case MNM_WX2181C:
     case MNM_WX1281C:
     case MNM_WX1282C:
      val_min = PATTERN_PREDEFINED_BAUD_MIN;
      val_max = PATTERN_PREDEFINED_BAUD_MAX;
     break;

     case MNM_WX1281B:
     case MNM_WX1282B:
     case MNM_WX1281BD:
     case MNM_WX1282BD:
      val_min = PATTERN_PREDEFINED_BAUD_MIN;
      val_max = PATTERN_PREDEFINED_BAUD_MAX_WX128XB;
     break;

     case MNM_WS8351:
     case MNM_WS8352:
      val_min = PATTERN_PREDEFINED_BAUD_MIN;
      val_max = PATTERN_PREDEFINED_BAUD_MAX_WS835X;
     break;

     case MNM_WX2184:
     case MNM_WX1284:
	 case MNM_WX2184C:
     case MNM_WX1284C:
      val_min = PATTERN_PREDEFINED_BAUD_MIN_WX2184;
      val_max = PATTERN_PREDEFINED_BAUD_MAX_WX2184;
     break;

     default:
      val_min = PATTERN_PREDEFINED_BAUD_MIN;
      val_max = PATTERN_PREDEFINED_BAUD_MAX;
    }

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_get_Baud(BSTR Channel, double* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:BAUD?"));
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:BAUD?"));

   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_put_Baud(BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:BAUD %+17.9E")), val);
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:BAUD %+17.9E")), val);

   hr = io.Printf(strCommandSend);

   return hr;
}

                        /* Level */
HRESULT WX218x::IWX218xPattern_Level_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
	HRESULT hr = S_OK;
   long valMin, valMax;
   
   valMin = PATTERN_PREDEFINED_LEVEL_MIN;
   valMax = PATTERN_PREDEFINED_LEVEL_MAX;

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}
HRESULT WX218x::IWX218xPattern_get_Level(BSTR Channel, long* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:LEV?"));
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:LEV?"));

   io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_put_Level(BSTR Channel, long val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:LEV %d")), val);
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:LEV %d")), val);

   hr = io.Printf(strCommandSend);

   return hr;
}

                  /* Mode */
HRESULT WX218x::IWX218xPattern_get_Mode(BSTR Channel, WX218xPatternModeEnum* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:MODE?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   //it's different scipi for WX2184 and other models
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184
   {
    if (!strResponse.CompareNoCase(_T("COMP")))
      *val = WX218xPatternModeComposer;

     else if (!strResponse.CompareNoCase(_T("PRED")))
       *val = WX218xPatternModePredefined;

     else
       hr = err.UnexpectedResponse(strResponse);
   }//end if, it is WX2184 

   else //it is not WX2184
   {
    if (!strResponse.CompareNoCase(_T("COMP")))
      *val = WX218xPatternModeComposer;

    else if (!strResponse.CompareNoCase(_T("PRBS")))
      *val = WX218xPatternModePredefined;

    else
      hr = err.UnexpectedResponse(strResponse);
   }//end else, it is not WX2184

   return hr;
}

HRESULT WX218x::IWX218xPattern_put_Mode(BSTR Channel, WX218xPatternModeEnum val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strCommand, strEnum;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   switch (val)
   {
   case WX218xPatternModeComposer:
      strCommand = _T(":PATT:MODE COMP");
      break;

   case WX218xPatternModePredefined:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       strCommand = _T(":PATT:MODE PRED");
      else
       strCommand = _T(":PATT:MODE PRBS");
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

                                 /* Predefined Type */
HRESULT WX218x::IWX218xPattern_get_PredefinedType(BSTR Channel, WX218xPatternPredefinedTypeEnum* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:TYPE?"));
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:TYPE?"));

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("PRBS7")))
      *val = WX218xPatternPredefinedTypePRBS7;

   else if (!strResponse.CompareNoCase(_T("PRBS9")))
      *val = WX218xPatternPredefinedTypePRBS9;

   else if (!strResponse.CompareNoCase(_T("PRBS11")))
      *val = WX218xPatternPredefinedTypePRBS11;

   else if (!strResponse.CompareNoCase(_T("PRBS15")))
      *val = WX218xPatternPredefinedTypePRBS15;

   else if (!strResponse.CompareNoCase(_T("PRBS23")))
      *val = WX218xPatternPredefinedTypePRBS23;

   else if (!strResponse.CompareNoCase(_T("PRBS31")))
      *val = WX218xPatternPredefinedTypePRBS31;

   else if (!strResponse.CompareNoCase(_T("USER")))
      *val = WX218xPatternPredefinedTypeUSER;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xPattern_put_PredefinedType(BSTR Channel, WX218xPatternPredefinedTypeEnum val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strCommand, strEnum;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   switch (val)
   {
   case WX218xPatternPredefinedTypePRBS7:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       strCommand = _T(":PATT:PRED:TYPE PRBS7");
      else
       strCommand = _T(":PATT:PRBS:TYPE PRBS7");
      break;

   case WX218xPatternPredefinedTypePRBS9:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       strCommand = _T(":PATT:PRED:TYPE PRBS9");
      else
       strCommand = _T(":PATT:PRBS:TYPE PRBS9");
      break;

   case WX218xPatternPredefinedTypePRBS11:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       strCommand = _T(":PATT:PRED:TYPE PRBS11");
      else
       strCommand = _T(":PATT:PRBS:TYPE PRBS11");
      break;

   case WX218xPatternPredefinedTypePRBS15:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       strCommand = _T(":PATT:PRED:TYPE PRBS15");
      else
       strCommand = _T(":PATT:PRBS:TYPE PRBS15");
      break;

   case WX218xPatternPredefinedTypePRBS23:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       strCommand = _T(":PATT:PRED:TYPE PRBS23");
      else
       strCommand = _T(":PATT:PRBS:TYPE PRBS23");
      break;

   case WX218xPatternPredefinedTypePRBS31:
      strCommand = _T(":PATT:PRED:TYPE PRBS31");
      break;

   case WX218xPatternPredefinedTypeUSER:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
       strCommand = _T(":PATT:PRED:TYPE USER");
      else
       strCommand = _T(":PATT:PRBS:TYPE USER");
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

                        /* High Level */
HRESULT WX218x::IWX218xPattern_HighLevel_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double val_min, val_max;
   
   val_min = PATTERN_PREDEFINED_HIGH_LEVEL_MIN;
   val_max = PATTERN_PREDEFINED_HIGH_LEVEL_MAX;

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_get_HighLevel(BSTR Channel, double* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
  
   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:LEV:HIGH?"));
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:LEV:HIGH?"));

   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_put_HighLevel(BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:LEV:HIGH %Lf")), val);
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:LEV:HIGH %Lf")), val);

   hr = io.Printf(strCommandSend);

   return hr;
}

                           /* Low Level */
HRESULT WX218x::IWX218xPattern_LowLevel_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double val_min, val_max;
   
   val_min = PATTERN_PREDEFINED_LOW_LEVEL_MIN;
   val_max = PATTERN_PREDEFINED_LOW_LEVEL_MAX;

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_get_LowLevel(BSTR Channel, double* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:LEV:LOW?"));
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:LEV:LOW?"));

   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_put_LowLevel(BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:LEV:LOW %Lf")), val);
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:LEV:LOW %Lf")), val);

   hr = io.Printf(strCommandSend);

   return hr;
}

                             /* Loop */
HRESULT WX218x::IWX218xPattern_Loop_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
	HRESULT hr = S_OK;
   double val_min, val_max;
   
   val_min = PATTERN_PREDEFINED_LOOP_MIN;
   val_max = PATTERN_PREDEFINED_LOOP_MAX;

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_get_Loop(BSTR Channel, long* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:LOOP?"));
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:LOOP?"));

   io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_put_Loop(BSTR Channel, long val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:LOOP %d")), val);
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:LOOP %d")), val);

   hr = io.Printf(strCommandSend);

   return hr;
}

                                /* Preamble */
HRESULT WX218x::IWX218xPattern_Preamble_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
	HRESULT hr = S_OK;
   long val_min, val_max;
   
   val_min = PATTERN_PREDEFINED_PREAMBLE_MIN;
   //val_max = PATTERN_PREDEFINED_PREAMBLE_MAX;
   val_max = m_MemorySize;

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_get_Preamble(BSTR Channel, long* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:PRE?"));
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:PRE?"));

   io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_put_Preamble(BSTR Channel, long val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:PRE %d")), val);
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:PRE %d")), val);

   hr = io.Printf(strCommandSend);

   return hr;
}

                             /* Length */
HRESULT WX218x::IWX218xPattern_Length_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
	HRESULT hr = S_OK;
   long val_min, val_max;
   
   val_min = PATTERN_PREDEFINED_LENGTH_MIN;
   //val_max = PATTERN_PREDEFINED_LENGTH_MAX;

   val_max = m_MemorySize;

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_get_Length(BSTR Channel, long* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:LENG?"));
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:LENG?"));

   io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xPattern_put_Length(BSTR Channel, long val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRED:LENG %d")), val);
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":PATT:PRBS:LENG %d")), val);

   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xPattern_get_Composer(IWX218xPatternComposer** val)
{
	HRESULT hr = S_OK;

	hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

	return hr;
}

//===============================================================================================
//                             - ConfigurePatternPredType -
HRESULT WX218x::IWX218xPattern_ConfigurePatternPredType(BSTR Channel, WX218xPatternPredefinedTypeEnum val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPattern::put_PredefinedType(Channel, val);

	return hr;
}

//=================================================================================================
//                                 - ConfigurePatternPreamble -
HRESULT WX218x::IWX218xPattern_ConfigurePatternPreamble(BSTR Channel, long val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPattern::put_Preamble(Channel, val);

	return hr;
}

//===================================================================================================
//                        - ConfigurePatternMode -
HRESULT WX218x::IWX218xPattern_ConfigurePatternMode(BSTR Channel, WX218xPatternModeEnum val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPattern::put_Mode(Channel, val);

	return hr;
}

//====================================================================================
//                            - ConfigurePatternLowLevel -
HRESULT WX218x::IWX218xPattern_ConfigurePatternLowLevel(BSTR Channel, double LowLevel)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPattern::put_LowLevel(Channel, LowLevel);

	return hr;
}

//=======================================================================================
//                              - ConfigurePatternLoop -
HRESULT WX218x::IWX218xPattern_ConfigurePatternLoop(BSTR Channel, long Loop)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPattern::put_Loop(Channel, Loop);

	return hr;
}

//=========================================================================================
//                            - ConfigurePatternLevel -
HRESULT WX218x::IWX218xPattern_ConfigurePatternLevel(BSTR Channel, long Level)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPattern::put_Level(Channel, Level);

	return hr;
}

//============================================================================================
//                                 - ConfigurePatternLength -
HRESULT WX218x::IWX218xPattern_ConfigurePatternLength(BSTR Channel, long Length)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPattern::put_Length(Channel, Length);

	return hr;
}

//=============================================================================================
//                                - ConfigurePatternHighLevel -
HRESULT WX218x::IWX218xPattern_ConfigurePatternHighLevel(BSTR Channel, double HighLevel)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPattern::put_HighLevel(Channel, HighLevel);

	return hr;
}

//=================================================================================================
//                                  - ConfigurePatternBaud - 
HRESULT WX218x::IWX218xPattern_ConfigurePatternBaud(BSTR Channel, double Baud)
{
	HRESULT hr = S_OK;

   hr = _IWX218xPattern::put_Baud(Channel, Baud);

	return hr;
}


//==================================== Create Pattern Data =================================
HRESULT WX218x::IWX218xPattern_CreatePatternData(BSTR Channel, SAFEARRAY** Data)
{
	//Function that gets array of chars, that valid values are:
   //if level = 2: '0','1'
   //if level = 3: '0','1','-'
   //if level = 4: '0','1','2','3'
   //if level = 5: '0','1','2','3','-'
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeArray;
   long lBoundArray, indexArray;
   long uBoundArray, pattDataLengthBytes, totalBytes;
   SAFEARRAY* psaArray = *Data;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   unsigned char valueArrayChar;
   unsigned char* binData = VI_NULL;
   unsigned char* p0 = VI_NULL;  //we need this pointer at the end of the loop for know total bytes

   //Checking parameter Active channel
   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (GetSimulate()) //temporary close for offline
   {
    return hr;
   }

   //Getting size of array
   sizeArray = psaArray->rgsabound->cElements;

   //Checking size of array
   if ((sizeArray< PATTERN_PREDEFINED_DATA_LENGTH_MIN) || (sizeArray > PATTERN_PREDEFINED_DATA_LENGTH_MAX))
   {
      hr = ReportInvalidValueError(_T("CreatePatternData"), _T("Data"), _T("Size of Data array"));
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundArray = psaArray->rgsabound->lLbound;

   //Checking if lower bound of array  is zero
   if (lBoundArray != 0)
   {
      hr = err.LboundArrayZero(_T("Data Array"));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaArray, 1, &uBoundArray);

   //Checking if upper bound of arrays is not zero
   if ((uBoundArray == 0))
   {
      hr = err.UpperBoundZero(_T("Data Array"));
      return hr;
   }

   //Accesing every element in array Data
   for (indexArray = lBoundArray; indexArray < sizeArray; indexArray++)  //Loop for Data array
   {
      hr = SafeArrayGetElement(psaArray, &indexArray, &valueArrayChar);

      //Checking if value is correct
      if (valueArrayChar != '0' && valueArrayChar != '1' && valueArrayChar != '2' && valueArrayChar != '3' && valueArrayChar != '-')
      {
         strFormatValue.Format(_T("(%s)"), valueArrayChar);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("Data"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for Data array

   pattDataLengthBytes = sizeof(unsigned char) * sizeArray; 
   binData = new unsigned char[pattDataLengthBytes];
   memset(binData, '\0', pattDataLengthBytes);

   //We must save the start of this pointer
   p0 = binData;

   for (indexArray = lBoundArray; indexArray < sizeArray; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaArray, &indexArray, &valueArrayChar);

      //Putting in binData value from data
      *p0 = (unsigned char)valueArrayChar;
      p0 += sizeof(unsigned char);

      totalBytes = p0 - binData;

   }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_PATTERN_PREDEFINED);

   if (binData)
      delete [] binData;

   return hr;
}











