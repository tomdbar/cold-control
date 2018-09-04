/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

/* Delay */
HRESULT WX218x::IWX218xMarkers_Delay_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long Index, double val)
{
   HRESULT hr = S_OK;
   int valIndexMin, valIndexMax;
   int modelNumber;

   valIndexMin = MARKER_INDEX_MIN;

   modelNumber = FuncReturnModelNumber();
  
   valIndexMax = MARKER_INDEX_MAX;
  
   if (Index < valIndexMin || Index > valIndexMax) 
      hr = err.InvalidValue(_T("Index"), Index);

   if (val < MARKER_DELAY_MIN || val > MARKER_DELAY_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_get_Delay(BSTR Channel, long Index, double* val)
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

   switch (modelNumber)
   {
   case MNM_WX2184:
   case MNM_WX1284:
   case MNM_WX2184C:
   case MNM_WX1284C:
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:SEL %d")), Index);
      hr = io.Printf(strCommandSend);

      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:DEL?"))); 
      io.Queryf(strCommandSend, _T("%Lf"), val);
      break;

   default:
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:DEL?")), Index); 
      io.Queryf(strCommandSend, _T("%Lf"), val);
      break;
   }

   

   return hr;
}

HRESULT WX218x::IWX218xMarkers_put_Delay(BSTR Channel, long Index, double val)
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

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
       strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:SEL %d")), Index);
      hr = io.Printf(strCommandSend);

      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:DEL %+17.9E")), val);
      hr = io.Printf(strCommandSend);
      break;

    default:
     strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:DEL %+17.9E")), Index, val);
     hr = io.Printf(strCommandSend);
     break;
   }

  return hr;
}

/* Enabled */
HRESULT WX218x::IWX218xMarkers_get_Enabled(BSTR Channel, long Index, VARIANT_BOOL* val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;
   int valIndexMin, valIndexMax;
   int modelNumber;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   valIndexMin = MARKER_INDEX_MIN;

   modelNumber = FuncReturnModelNumber();
  
   valIndexMax = MARKER_INDEX_MAX;
     
   //Checking Marker Index
   hr = WX218x_long_range(_T("Index"), valIndexMin, valIndexMax, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   switch (modelNumber)
   {
   case MNM_WX2184:
   case MNM_WX1284:
   case MNM_WX2184C:
   case MNM_WX1284C:
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:SEL %d")), Index);
      hr = io.Printf(strCommandSend);

       strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK:STAT?"))); 
       io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);
      break;

   default:
       strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:STAT?")), Index); 
       io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);
      break;
   }

  if (!strResponse.CompareNoCase(_T("ON")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;

   return hr;
}

HRESULT WX218x::IWX218xMarkers_put_Enabled(BSTR Channel, long Index, VARIANT_BOOL val)
{
   HRESULT hr = S_OK;
   CString strEnabled, strChanSend, strCommandSend;
   CString strChanCheck = COLE2T(Channel);
   int valIndexMin, valIndexMax;
   int modelNumber;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   valIndexMin = MARKER_INDEX_MIN;

   modelNumber = FuncReturnModelNumber();
  
   valIndexMax = MARKER_INDEX_MAX;
     
   //Checking Marker Index
   hr = WX218x_long_range(_T("Index"), valIndexMin, valIndexMax, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (val == VARIANT_TRUE)
      strEnabled = _T("ON");
   else
      strEnabled = _T("OFF");

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
       strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:SEL %d")), Index);
      hr = io.Printf(strCommandSend);

      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK:STAT %s")), strEnabled); 
      hr = io.Printf(strCommandSend);
      break;

    default:
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:STAT %s")), Index, strEnabled); 
      hr = io.Printf(strCommandSend);
      break;
   }

   return hr;
}

/* HighLevel */
HRESULT WX218x::IWX218xMarkers_HighLevel_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long Index, double val)
{
   HRESULT hr = S_OK;

   if (Index < MARKER_INDEX_MIN || Index > MARKER_INDEX_MAX) 
      hr = err.InvalidValue(_T("Index"), Index);

   if (val < MARKER_HIGH_LEVEL_MIN || val > MARKER_HIGH_LEVEL_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_get_HighLevel(BSTR Channel, long Index, double* val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:VOLT:LEV:HIGH?")), Index);
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_put_HighLevel(BSTR Channel, long Index, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:VOLT:LEV:HIGH %Lf")), Index, val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* LowLevel */
HRESULT WX218x::IWX218xMarkers_LowLevel_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long Index, double val)
{
   HRESULT hr = S_OK;

   if (Index < MARKER_INDEX_MIN || Index > MARKER_INDEX_MAX) 
      hr = err.InvalidValue(_T("Index"), Index);

   if (val < MARKER_LOW_LEVEL_MIN || val > MARKER_LOW_LEVEL_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_get_LowLevel(BSTR Channel, long Index, double* val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:VOLT:LEV:LOW?")), Index);
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_put_LowLevel(BSTR Channel, long Index, double val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:VOLT:LEV:LOW %Lf")), Index, val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Position */
HRESULT WX218x::IWX218xMarkers_Position_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long Index, long val)
{
   HRESULT hr = S_OK;
   int valIndexMin, valIndexMax;
   int modelNumber;

   valIndexMin = MARKER_INDEX_MIN;

   modelNumber = FuncReturnModelNumber();
  
   valIndexMax = MARKER_INDEX_MAX;
     
   if (Index < valIndexMin || Index > valIndexMax) 
      hr = err.InvalidValue(_T("Index"), Index);

   if (val < MARKER_POSITION_MIN || val > (m_MemorySize-4)) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_get_Position(BSTR Channel, long Index, long* val)
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

   switch (modelNumber)
   {
   case MNM_WX2184:
   case MNM_WX1284:
   case MNM_WX2184C:
   case MNM_WX1284C:
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:SEL %d")), Index);
      hr = io.Printf(strCommandSend);

      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK:POS?")));
      io.Queryf(strCommandSend, _T("%d"), val);
      break;

   default:
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:POS?")), Index);
      io.Queryf(strCommandSend, _T("%d"), val);
      break;
   }

   

   return hr;
}

HRESULT WX218x::IWX218xMarkers_put_Position(BSTR Channel, long Index, long val)
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

   switch (modelNumber)
   {
   case MNM_WX2184:
   case MNM_WX1284:
   case MNM_WX2184C:
   case MNM_WX1284C:
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:SEL %d")), Index);
      hr = io.Printf(strCommandSend);

      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK:POS %d")), val);
      hr = io.Printf(strCommandSend);
      break;

   default:
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:POS %d")), Index, val);
      hr = io.Printf(strCommandSend);
      break;
   }
   
   return hr;
}

/* Width */
HRESULT WX218x::IWX218xMarkers_Width_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long Index, long val)
{
   HRESULT hr = S_OK;
   int valIndexMin, valIndexMax;
   int modelNumber;

   valIndexMin = MARKER_INDEX_MIN;

   modelNumber = FuncReturnModelNumber();
  
   valIndexMax = MARKER_INDEX_MAX;
     
   if (Index < valIndexMin || Index > valIndexMax) 
      hr = err.InvalidValue(_T("Index"), Index);

   if (val < MARKER_WIDTH_MIN || val > (m_MemorySize- 4)) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_get_Width(BSTR Channel, long Index, long* val)
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

   switch (modelNumber)
   {
   case MNM_WX2184:
   case MNM_WX1284:
   case MNM_WX2184C:
   case MNM_WX1284C:
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:SEL %d")), Index);
      hr = io.Printf(strCommandSend);

      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK:WIDT?")));
      io.Queryf(strCommandSend, _T("%d"), val);
      break;

   default:
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:WIDT?")), Index);
      io.Queryf(strCommandSend, _T("%d"), val);
      break;
   }

   return hr;
}

HRESULT WX218x::IWX218xMarkers_put_Width(BSTR Channel, long Index, long val)
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

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
       strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:SEL %d")), Index);
      hr = io.Printf(strCommandSend);

      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK:WIDT %d")), val);
      hr = io.Printf(strCommandSend);
      break;

    default:
      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:WIDT %d")), Index, val);
      hr = io.Printf(strCommandSend);
      break;
   }

   

   return hr;
}

/* Control */
HRESULT WX218x::IWX218xMarkers_get_Control(BSTR Channel, long Index, WX218xMarkerControlEnum* val)
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

   //Checking Marker Index
   hr = WX218x_long_range(_T("Index"), MARKER_INDEX_MIN, MARKER_INDEX_MAX, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:CONT?")), Index);
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("LOC")))
      *val = WX218xMarkerControlLocal;

   else if (!strResponse.CompareNoCase(_T("REM")))
      *val = WX218xMarkerControlRemote;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_put_Control(BSTR Channel, long Index, WX218xMarkerControlEnum val)
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

   //Checking Marker Index
   hr = WX218x_long_range(_T("Index"), MARKER_INDEX_MIN, MARKER_INDEX_MAX, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   switch (val)
   {
   case WX218xMarkerControlLocal:
      strCommand.Format(_T(":MARK%d:CONT LOC"), Index);
      break;

   case WX218xMarkerControlRemote:
      strCommand.Format(_T(":MARK%d:CONT REM"), Index);
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

//=============================================================================================================================
//                                             - MarkerIndex-
HRESULT WX218x::IWX218xMarkers_get_MarkerIndex(BSTR Channel, long* val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:SEL?"))); 
   io.Queryf(strCommandSend, _T("%d"), val);

   return hr;	
}

HRESULT WX218x::IWX218xMarkers_put_MarkerIndex(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:SEL %d")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_MarkerIndex_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
	HRESULT hr = S_OK;
   long val_min, val_max;

   val_min = MARKER_INDEX_MIN;
   val_max = MARKER_INDEX_MAX;

   if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

//=====================================================================================================================================
//                                      - Source -
HRESULT WX218x::IWX218xMarkers_get_Source(BSTR Channel, WX218xMarkerSourceEnum* val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK:SOUR?")));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("WAVE")))
      *val = WX218xMarkerSourceWave;

   else if (!strResponse.CompareNoCase(_T("USER")))
      *val = WX218xMarkerSourceUser;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_put_Source(BSTR Channel, WX218xMarkerSourceEnum val)
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
   case WX218xMarkerSourceWave:
      strCommand.Format(_T(":MARK:SOUR WAVE"));
      break;

   case WX218xMarkerSourceUser:
      strCommand.Format(_T(":MARK:SOUR USER"));
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

//==============================================================================================
//                          - MarkerRefresh -
HRESULT WX218x::IWX218xMarkers_MarkerRefresh(BSTR Channel)
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

   if (GetSimulate())
    return hr;

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:MARK:SOUR:USER:REFR")));
   hr = io.Printf(strCommandSend);

   return hr;
}

//========================================================================================
//                               - ConfigureMarkerWidth -
HRESULT WX218x::IWX218xMarkers_ConfigureMarkerWidth(BSTR Channel, long Index, long Width)
{
	HRESULT hr = S_OK;

   hr = _IWX218xMarkers::put_Width(Channel, Index, Width);

	return hr;
}

//============================================================================================
//                                - ConfigureMarkerSource -
HRESULT WX218x::IWX218xMarkers_ConfigureMarkerSource(BSTR Channel, WX218xMarkerSourceEnum Source)
{
	HRESULT hr = S_OK;

   hr = _IWX218xMarkers::put_Source(Channel, Source);

	return hr;
}

//==============================================================================================
//                                   - ConfigureMarkerPosition -
HRESULT WX218x::IWX218xMarkers_ConfigureMarkerPosition(BSTR Channel, long Index, long Position)
{
	HRESULT hr = S_OK;

   hr = _IWX218xMarkers::put_Position(Channel, Index, Position);

	return hr;
}

//=================================================================================================
//                                 - ConfigureMarkerIndex -
HRESULT WX218x::IWX218xMarkers_ConfigureMarkerIndex(BSTR Channel, long Index)
{
	HRESULT hr = S_OK;

   hr = _IWX218xMarkers::put_MarkerIndex(Channel, Index);

	return hr;
}

//=====================================================================================================
//                                    - ConfigureMarkerLowLevel -
HRESULT WX218x::IWX218xMarkers_ConfigureMarkerLowLevel(BSTR Channel, long Index, double LowLevel)
{
	HRESULT hr = S_OK;

   hr = _IWX218xMarkers::put_LowLevel(Channel, Index, LowLevel);

	return hr;
}

//=========================================================================================================
//                                     - ConfigureMarkerHighLevel -
HRESULT WX218x::IWX218xMarkers_ConfigureMarkerHighLevel(BSTR Channel, long Index, double HighLevel)
{
	HRESULT hr = S_OK;

   hr = _IWX218xMarkers::put_HighLevel(Channel, Index, HighLevel);

	return hr;
}

//==========================================================================================================
//                                   - ConfigureMarkerEnabled -
HRESULT WX218x::IWX218xMarkers_ConfigureMarkerEnabled(BSTR Channel, long Index, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

   hr = _IWX218xMarkers::put_Enabled(Channel, Index, Enabled);

	return hr;
}

//===========================================================================================================
//                                  - ConfigureMarkerDelay -
HRESULT WX218x::IWX218xMarkers_ConfigureMarkerDelay(BSTR Channel, long Index, double Delay)
{
	HRESULT hr = S_OK;

   hr = _IWX218xMarkers::put_Delay(Channel, Index, Delay);

	return hr;
}

//================================================================================================================
//                              - ConfigureMarkerControl -
HRESULT WX218x::IWX218xMarkers_ConfigureMarkerControl(BSTR Channel, long Index, WX218xMarkerControlEnum Control)
{
	HRESULT hr = S_OK;

   hr = _IWX218xMarkers::put_Control(Channel, Index, Control);

	return hr;
}
//====================================================================================================================================

//=============================================================================================================================
/* Refresh */
HRESULT WX218x::IWX218xMarkers_Refresh(BSTR Channel, long Index)
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

   //Checking Marker Index
   hr = WX218x_long_range(_T("Index"), MARKER_INDEX_MIN, MARKER_INDEX_MAX, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (GetSimulate())
    return hr;

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK%d:CONT:LOC:REFR")), Index);
   hr = io.Printf(strCommandSend);

   return hr;
}

//=========================================================================================================================================================
//                                                     - High Level -
HRESULT WX218x::IWX218xMarkers_get_HighLevel4Ch(BSTR Channel, double* val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK:VOLT:LEV:HIGH?")));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_put_HighLevel4Ch(BSTR Channel, double val)
{
	HRESULT hr = S_OK;
	CString strChanCheck = COLE2T(Channel);
    CString strChanSend, strCommandSend;

	//Checking range
	if (val < MARKER_HIGH_LEVEL_MIN || val > MARKER_HIGH_LEVEL_MAX)
    {
      hr = err.InvalidValue(_T("val"), val);
	  return hr;
	}

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK:VOLT:LEV:HIGH %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

//=====================================================================================================================================================
//                                              - ConfigureMarkerHighLevel4Ch -
HRESULT WX218x::IWX218xMarkers_ConfigureMarkerHighLevel4Ch(BSTR Channel, double HighLevel)
{
  HRESULT hr = S_OK;

   hr = _IWX218xMarkers::put_HighLevel4Ch(Channel,  HighLevel);

   return hr;
}

//=========================================================================================================================================================
//                                      - Low Level 4Ch.
HRESULT WX218x::IWX218xMarkers_get_LowLevel4Ch(BSTR Channel, double* val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK:VOLT:LEV:LOW?")));
   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xMarkers_put_LowLevel4Ch(BSTR Channel, double val)
{
	HRESULT hr = S_OK;
	CString strChanCheck = COLE2T(Channel);
    CString strChanSend, strCommandSend;

	//Checking range
	if (val < MARKER_LOW_LEVEL_MIN || val > MARKER_LOW_LEVEL_MAX)
    {
      hr = err.InvalidValue(_T("val"), val);
	  return hr;
	}

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":MARK:VOLT:LEV:LOW %Lf")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

//=================================================================================================================================
//                                   - ConfigureMarkerLowLevel4Ch -
HRESULT WX218x::IWX218xMarkers_ConfigureMarkerLowLevel4Ch(BSTR Channel, double LowLevel)
{
   HRESULT hr = S_OK;

   hr = _IWX218xMarkers::put_LowLevel4Ch(Channel,  LowLevel);

   return hr;
}








