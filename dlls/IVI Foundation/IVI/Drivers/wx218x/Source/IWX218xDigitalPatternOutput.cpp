/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/
#include "stdafx.h"
#include "CoWX218x.h"

#pragma warning(disable : 4996)

/* Delay */
HRESULT WX218x::IWX218xDigitalPatternOutput_Delay_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long index, double val)
{
	HRESULT hr = S_OK;
   double val_min, val_max;
   long indexMin, indexMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      val_min = DIGITAL_PATTERN_DEL_MIN_WX2184;
      val_max = DIGITAL_PATTERN_DEL_MAX_WX2184;
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      break;

     default:
      val_min = DIGITAL_PATTERN_DEL_MIN;
      val_max = DIGITAL_PATTERN_DEL_MAX;
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
    }

  if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) //it is WX2184
   {
    //Checking Digital port
    //If digital port is BOTH, the index must be from 1 to 30, not 15,16
    //If digital port is 1, the index must be from 1 to 14
    //If digital port is 2, the index must be from 17 to 30
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
      if (valPort == WX218xDigPortPort1)
      {
       indexMin = 1;
       indexMax = 14; 
      }

      else if (valPort == WX218xDigPortPort2)
      {
       indexMin = 17;
       indexMax =30; 
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      }

       if (valPort == WX218xDigPortPortBoth && (index == 15 || index == 16))
       {
        //Index 15,16 not allowed when Port is Both
          hr = err.DigPortBitIndex();
          return hr;
       }//end if,

    }//end if, it is WX2184

   //Checking Bit Index
    hr = WX218x_long_range(_T("Bit Index"), indexMin, indexMax, index);
    if(!SUCCEEDED(hr))
     return hr;

    //Now checking delay
    if (val < val_min || val > val_max) 
      hr = err.InvalidValue(_T("val"), val);

   //If it is WX2184, checking if exist Digital pod
  // if (modelNumber == MNM_WX2184 && m_DigitalExist == 0)
   //   hr = err.DigPodNotExist();

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_get_BitDelay(BSTR Channel, long Index, double* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;  //variable for know if digital pod is present
   long indexMin, indexMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) //it is WX2184
   {
    //Checking Digital port
    //If digital port is BOTH, the index must be from 1 to 30, not 15,16
    //If digital port is 1, the index must be from 1 to 14
    //If digital port is 2, the index must be from 17 to 30
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
      if (valPort == WX218xDigPortPort1)
      {
       indexMin = 1;
       indexMax = 14; 
      }

      else if (valPort == WX218xDigPortPort2)
      {
       indexMin = 17;
       indexMax =30; 
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      }

       if (valPort == WX218xDigPortPortBoth && (Index == 15 || Index == 16))
       {
        //Index 15,16 not allowed when Port is Both
          hr = err.DigPortBitIndex();
          return hr;
       }//end if,

    }//end if, it is WX2184

    //Checking Bit Index
   hr = WX218x_long_range(_T("Bit Index"), indexMin, indexMax, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
      //Checking if digital pod is present for current channel
      hr = WX218x::get_PodPresent(Channel, &podPresent);

      if (!podPresent)
      {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
      }

    }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T(":DIG:BIT%d:DEL?"), Index); 
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:BIT%d:DEL?")), Index); 

   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_BitDelay(BSTR Channel, long Index, double val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;
   long indexMin, indexMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) //it is WX2184
   {
    //Checking Digital port
    //If digital port is BOTH, the index must be from 1 to 30, not 15,16
    //If digital port is 1, the index must be from 1 to 14
    //If digital port is 2, the index must be from 17 to 30
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
      if (valPort == WX218xDigPortPort1)
      {
       indexMin = 1;
       indexMax = 14; 
      }

      else if (valPort == WX218xDigPortPort2)
      {
       indexMin = 17;
       indexMax =30; 
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      }

       if (valPort == WX218xDigPortPortBoth && (Index == 15 || Index == 16))
       {
        //Index 15,16 not allowed when Port is Both
          hr = err.DigPortBitIndex();
          return hr;
       }//end if,

    }//end if, it is WX2184

    //Checking Bit Index
   hr = WX218x_long_range(_T("Bit Index"), indexMin, indexMax, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
      hr = err.DigPodNotPresent(strChanSend);
      return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
     strCommandSend.Format(_T(":DIG:BIT%d:DEL %+17.9E"), Index, val); 
   else
     strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:BIT%d:DEL %+17.9E")), Index, val); 

    hr = io.Printf(strCommandSend);

    return hr;
}

/* High Level */
HRESULT WX218x::IWX218xDigitalPatternOutput_HighLevel_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long index, double val)
{
	HRESULT hr = S_OK;
   long indexMin, indexMax;
   double valMin, valMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      valMin = DIGITAL_PATTERN_HIGH_LEVEL_MIN;
      valMax = DIGITAL_PATTERN_HIGH_LEVEL_MAX;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
      valMin = DIGITAL_PATTERN_HIGH_LEVEL_MIN;
      valMax = DIGITAL_PATTERN_HIGH_LEVEL_MAX;
    }

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) //it is WX2184
   {
    //Checking Digital port
    //If digital port is BOTH, the index must be from 1 to 30, not 15,16
    //If digital port is 1, the index must be from 1 to 14
    //If digital port is 2, the index must be from 17 to 30
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
      if (valPort == WX218xDigPortPort1)
      {
       indexMin = 1;
       indexMax = 14; 
      }

      else if (valPort == WX218xDigPortPort2)
      {
       indexMin = 17;
       indexMax =30; 
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      }

       if (valPort == WX218xDigPortPortBoth && (index == 15 || index == 16))
       {
        //Index 15,16 not allowed when Port is Both
          hr = err.DigPortBitIndex();
          return hr;
       }//end if,

    }//end if, it is WX2184

    //Checking Bit Index
   hr = WX218x_long_range(_T("Bit Index"), indexMin, indexMax, index);
   if(!SUCCEEDED(hr))
      return hr;

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_get_BitHighLevel(BSTR Channel, long Index, double* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;
   long indexMin, indexMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) //it is WX2184
   {
    //Checking Digital port
    //If digital port is BOTH, the index must be from 1 to 30, not 15,16
    //If digital port is 1, the index must be from 1 to 14
    //If digital port is 2, the index must be from 17 to 30
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
      if (valPort == WX218xDigPortPort1)
      {
       indexMin = 1;
       indexMax = 14; 
      }

      else if (valPort == WX218xDigPortPort2)
      {
       indexMin = 17;
       indexMax =30; 
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      }

       if (valPort == WX218xDigPortPortBoth && (Index == 15 || Index == 16))
       {
        //Index 15,16 not allowed when Port is Both
          hr = err.DigPortBitIndex();
          return hr;
       }//end if,

    }//end if, it is WX2184

    //Checking Bit Index
   hr = WX218x_long_range(_T("Bit Index"), indexMin, indexMax, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T(":DIG:BIT%d:LEV:HIGH?"), Index);
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:BIT%d:LEV:HIGH?")), Index);

   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_BitHighLevel(BSTR Channel, long Index, double val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;
   long indexMin, indexMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) //it is WX2184
   {
    //Checking Digital port
    //If digital port is BOTH, the index must be from 1 to 30, not 15,16
    //If digital port is 1, the index must be from 1 to 14
    //If digital port is 2, the index must be from 17 to 30
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
      if (valPort == WX218xDigPortPort1)
      {
       indexMin = 1;
       indexMax = 14; 
      }

      else if (valPort == WX218xDigPortPort2)
      {
       indexMin = 17;
       indexMax =30; 
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      }

       if (valPort == WX218xDigPortPortBoth && (Index == 15 || Index == 16))
       {
        //Index 15,16 not allowed when Port is Both
          hr = err.DigPortBitIndex();
          return hr;
       }//end if,

    }//end if, it is WX2184
    //Checking Bit Index
   hr = WX218x_long_range(_T("Bit Index"), indexMin, indexMax, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T(":DIG:BIT%d:LEV:HIGH %Lf"), Index, val); 
   else
     strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:BIT%d:LEV:HIGH %Lf")), Index, val); 

   hr = io.Printf(strCommandSend);

   return hr;
}

/* Low Level */
HRESULT WX218x::IWX218xDigitalPatternOutput_LowLevel_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long index, double val)
{
	HRESULT hr = S_OK;
   long indexMin, indexMax;
   double valMin, valMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      valMin = DIGITAL_PATTERN_LOW_LEVEL_MIN;
      valMax = DIGITAL_PATTERN_LOW_LEVEL_MAX;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
      valMin = DIGITAL_PATTERN_LOW_LEVEL_MIN;
      valMax = DIGITAL_PATTERN_LOW_LEVEL_MAX;
    }

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) //it is WX2184
   {
    //Checking Digital port
    //If digital port is BOTH, the index must be from 1 to 30, not 15,16
    //If digital port is 1, the index must be from 1 to 14
    //If digital port is 2, the index must be from 17 to 30
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
      if (valPort == WX218xDigPortPort1)
      {
       indexMin = 1;
       indexMax = 14; 
      }

      else if (valPort == WX218xDigPortPort2)
      {
       indexMin = 17;
       indexMax =30; 
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      }

       if (valPort == WX218xDigPortPortBoth && (index == 15 || index == 16))
       {
        //Index 15,16 not allowed when Port is Both
          hr = err.DigPortBitIndex();
          return hr;
       }//end if,

    }//end if, it is WX2184
    //Checking Bit Index
   hr = WX218x_long_range(_T("Bit Index"), indexMin, indexMax, index);
   if(!SUCCEEDED(hr))
      return hr;

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_get_BitLowLevel(BSTR Channel, long Index, double* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;
   long indexMin, indexMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) //it is WX2184
   {
    //Checking Digital port
    //If digital port is BOTH, the index must be from 1 to 30, not 15,16
    //If digital port is 1, the index must be from 1 to 14
    //If digital port is 2, the index must be from 17 to 30
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
      if (valPort == WX218xDigPortPort1)
      {
       indexMin = 1;
       indexMax = 14; 
      }

      else if (valPort == WX218xDigPortPort2)
      {
       indexMin = 17;
       indexMax =30; 
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      }

       if (valPort == WX218xDigPortPortBoth && (Index == 15 || Index == 16))
       {
        //Index 15,16 not allowed when Port is Both
          hr = err.DigPortBitIndex();
          return hr;
       }//end if,

    }//end if, it is WX2184

    //Checking Bit Index
   hr = WX218x_long_range(_T("Bit Index"), indexMin, indexMax, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T(":DIG:BIT%d:LEV:LOW?"), Index);
   else
     strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:BIT%d:LEV:LOW?")), Index);

   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_BitLowLevel(BSTR Channel, long Index, double val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;
   long indexMin, indexMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) //it is WX2184
   {
    //Checking Digital port
    //If digital port is BOTH, the index must be from 1 to 30, not 15,16
    //If digital port is 1, the index must be from 1 to 14
    //If digital port is 2, the index must be from 17 to 30
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
      if (valPort == WX218xDigPortPort1)
      {
       indexMin = 1;
       indexMax = 14; 
      }

      else if (valPort == WX218xDigPortPort2)
      {
       indexMin = 17;
       indexMax =30; 
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      }

       if (valPort == WX218xDigPortPortBoth && (Index == 15 || Index == 16))
       {
        //Index 15,16 not allowed when Port is Both
          hr = err.DigPortBitIndex();
          return hr;
       }//end if,

    }//end if, it is WX2184

    //Checking Bit Index
   hr = WX218x_long_range(_T("Bit Index"), indexMin, indexMax, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T(":DIG:BIT%d:LEV:LOW %Lf"), Index, val);
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:BIT%d:LEV:LOW %Lf")), Index, val);

   hr = io.Printf(strCommandSend);

   return hr;
}

/* Delay Mode */
HRESULT WX218x::IWX218xDigitalPatternOutput_get_DelayMode(BSTR Channel, WX218xDigPatternDelayModeEnum* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();


   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }

    }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend = _T(":DIG:DEL:MOD?");
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:DEL:MOD?"));

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("COMM")))
      *val = WX218xDigPatternDelayModeCommon;

   else if (!strResponse.CompareNoCase(_T("SEP")))
      *val = WX218xDigPatternDelayModeSeparate;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_DelayMode(BSTR Channel, WX218xDigPatternDelayModeEnum val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strCommand, strEnum;
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   switch (val)
   {
   case WX218xDigPatternDelayModeCommon:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
       strCommand = _T(":DIG:DEL:MOD COMM");
      else
       strCommand = _T(":SOUR:DIG:DEL:MOD COMM");

      break;

   case WX218xDigPatternDelayModeSeparate:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
       strCommand = _T(":DIG:DEL:MOD SEP");
      else
       strCommand = _T(":SOUR:DIG:DEL:MOD SEP");

      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
    //Checking if digital pod is present for current channel
    hr = WX218x::get_PodPresent(Channel, &podPresent);

    if (!podPresent)
    {
     hr = err.DigPodNotPresent(strChanSend);
     return hr;
    }

   }//end if, it is not WX2184

   strCommandSend.Format(_T("%s"), strCommand);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* Level Mode */
HRESULT WX218x::IWX218xDigitalPatternOutput_get_LevelMode(BSTR Channel, WX218xDigPatternLevelModeEnum* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   //Checking if digital pod is present for current channel
   hr = WX218x::get_PodPresent(Channel, &podPresent);

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
    if (!podPresent)
    {
     hr = err.DigPodNotPresent(strChanSend);
     return hr;
    }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend = _T(":DIG:VOLT:MOD?");
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:VOLT:MOD?"));

   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("COMM")))
      *val = WX218xDigPatternLevelModeCommon;

   else if (!strResponse.CompareNoCase(_T("SEP")))
      *val = WX218xDigPatternLevelModeSeparate;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_LevelMode(BSTR Channel, WX218xDigPatternLevelModeEnum val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strCommand, strEnum;
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   switch (val)
   {
   case WX218xDigPatternLevelModeCommon:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
       strCommand = _T(":DIG:VOLT:MOD COMM");
      else
       strCommand = _T(":SOUR:DIG:VOLT:MOD COMM");

      break;

   case WX218xDigPatternLevelModeSeparate:
      if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
       strCommand = _T(":DIG:VOLT:MOD SEP");
      else
       strCommand = _T(":SOUR:DIG:VOLT:MOD SEP");

      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   //Checking if digital pod is present for current channel
   hr = WX218x::get_PodPresent(Channel, &podPresent);

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
    if (!podPresent)
    {
     hr = err.DigPodNotPresent(strChanSend);
     return hr;
    }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T("%s"), strCommand);
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T("%s")), strCommand);

   hr = io.Printf(strCommandSend);

   return hr;
}

/* Active Bit */
HRESULT WX218x::IWX218xDigitalPatternOutput_ActiveBit_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
	HRESULT hr = S_OK;
   long indexMin, indexMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
    }

   if (val < indexMin || val > indexMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}


/* Enabled */
HRESULT WX218x::IWX218xDigitalPatternOutput_get_BitEnabled(BSTR Channel, long Index, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;
   long podPresent = 0;
   long indexMin, indexMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) //it is WX2184
   {
    //Checking Digital port
    //If digital port is BOTH, the index must be from 1 to 30, not 15,16
    //If digital port is 1, the index must be from 1 to 14
    //If digital port is 2, the index must be from 17 to 30
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
      if (valPort == WX218xDigPortPort1)
      {
       indexMin = 1;
       indexMax = 14; 
      }

      else if (valPort == WX218xDigPortPort2)
      {
       indexMin = 17;
       indexMax =30; 
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      }

       if (valPort == WX218xDigPortPortBoth && (Index == 15 || Index == 16))
       {
        //Index 15,16 not allowed when Port is Both
          hr = err.DigPortBitIndex();
          return hr;
       }//end if,

    }//end if, it is WX2184

    //Checking Bit Index
   hr = WX218x_long_range(_T("Bit Index"), indexMin, indexMax, Index);
   if(!SUCCEEDED(hr))
      return hr;

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T(":DIG:BIT%d:STAT?"), Index); 
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:BIT%d:STAT?")), Index);

   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;


   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_BitEnabled(BSTR Channel, long Index, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;
   CString strEnabled, strChanSend, strCommandSend;
   CString strChanCheck = COLE2T(Channel);
   long podPresent = 0;
   long indexMin, indexMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
    }

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) //it is WX2184
   {
    //Checking Digital port
    //If digital port is BOTH, the index must be from 1 to 30, not 15,16
    //If digital port is 1, the index must be from 1 to 14
    //If digital port is 2, the index must be from 17 to 30
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
      if (valPort == WX218xDigPortPort1)
      {
       indexMin = 1;
       indexMax = 14; 
      }

      else if (valPort == WX218xDigPortPort2)
      {
       indexMin = 17;
       indexMax =30; 
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX_WX2184;
      }

       if (valPort == WX218xDigPortPortBoth && (Index == 15 || Index == 16))
       {
        //Index 15,16 not allowed when Port is Both
          hr = err.DigPortBitIndex();
          return hr;
       }//end if,

    }//end if, it is WX2184

    //Checking if Bit Index doesn't equal to zero
   if (Index != 0)
   {
    //Checking Bit Index
   hr = WX218x_long_range(_T("Bit Index"), indexMin, indexMax, Index);
   if(!SUCCEEDED(hr))
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (val == VARIANT_TRUE)
      strEnabled = _T("ON");
   else
      strEnabled = _T("OFF");

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T(":DIG:BIT%d:STAT %s"), Index, strEnabled);
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:BIT%d:STAT %s")), Index, strEnabled);

   hr = io.Printf(strCommandSend);

   return hr;
}

/* Delay */
HRESULT WX218x::IWX218xDigitalPatternOutput_CommonDelay_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   double valMin, valMax;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();
   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      valMin = DIGITAL_PATTERN_DEL_MIN_WX2184; 
      valMax = DIGITAL_PATTERN_DEL_MAX_WX2184; 
      break;

     default:
      valMin = DIGITAL_PATTERN_DEL_MIN; 
      valMax = DIGITAL_PATTERN_DEL_MAX; 
    }

   if (val < valMin || val > valMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_get_Delay(BSTR Channel, double* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T(":DIG:DEL?")); 
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:DEL?"))); 

   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_Delay(BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T(":DIG:DEL %+17.9E"), val); 
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:DEL %+17.9E")), val); 

   hr = io.Printf(strCommandSend);

   return hr;
}


/* Enabled */
HRESULT WX218x::IWX218xDigitalPatternOutput_get_Enabled(BSTR Channel, VARIANT_BOOL *val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend = _T(":DIG:STAT?"); 
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:STAT?")); 

   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;


   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_Enabled(BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;
   CString strEnabled, strChanSend, strCommandSend;
   CString strChanCheck = COLE2T(Channel);
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

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

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
    strCommandSend.Format(_T(":DIG:STAT %s"), strEnabled); 
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:STAT %s")), strEnabled); 

   hr = io.Printf(strCommandSend);

   return hr;
}

/* High Level */
HRESULT WX218x::IWX218xDigitalPatternOutput_HighLevel1_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   if (val < DIGITAL_PATTERN_HIGH_LEVEL_MIN || val > DIGITAL_PATTERN_HIGH_LEVEL_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_get_HighLevel(BSTR Channel, double* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
      strCommandSend.Format(_T(":DIG:VOLT:LEV:HIGH?"));
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:VOLT:HIGH?")));

   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_HighLevel(BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
      return hr;
     }
   }//end if, it is not 

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
      strCommandSend.Format(_T(":DIG:VOLT:LEV:HIGH %Lf"), val); 
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:VOLT:HIGH %Lf")), val); 

   hr = io.Printf(strCommandSend);

   return hr;
}

/* Low Level */
HRESULT WX218x::IWX218xDigitalPatternOutput_LowLevel1_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

   if (val < DIGITAL_PATTERN_LOW_LEVEL_MIN || val > DIGITAL_PATTERN_LOW_LEVEL_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_get_LowLevel(BSTR Channel, double* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C)
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T(":DIG:VOLT:LOW?"));
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:VOLT:LOW?")));

   io.Queryf(strCommandSend, _T("%Lf"), val);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_LowLevel(BSTR Channel, double val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;
   long podPresent = 0;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C)
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C)
    strCommandSend.Format(_T(":DIG:VOLT:LOW %Lf"), val); 
   else
    strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:VOLT:LOW %Lf")), val);

   hr = io.Printf(strCommandSend);

   return hr;
}

//===================================== PodPresent ==========================================================
HRESULT WX218x::IWX218xDigitalPatternOutput_get_PodPresent(BSTR Channel, long* val)
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

    //if (modelNumber == MNM_WX2184 && m_DigitalExist == 0)
   // {
      //hr = err.DigPodNotExist();
      //return hr;
    //}

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C || modelNumber == MNM_WX2182C || modelNumber == MNM_WX2181C || modelNumber == MNM_WX1281C || modelNumber == MNM_WX1282C) 
      strCommandSend = _T(":DIG:PORT:PRES?");
   else
    strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":DIG:PRES?"));

   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

//=================================== Emphasis Enabled ================================================
HRESULT WX218x::IWX218xDigitalPatternOutput_get_EmphasisEnabled(BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strResponse;
   long podPresent = 0;

   hr = WX218x::ActiveChannel_RangeCheck(_T("Channel"), Channel);
   if(!SUCCEEDED(hr))
   {
      hr = err.InvalidValue(_T("Channel"), Channel);
      return hr;
   }

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

    //Checking if digital pod is present for current channel
   hr = WX218x::get_PodPresent(Channel, &podPresent);

   if (!podPresent)
   {
     hr = err.DigPodNotPresent(strChanSend);
     return hr;
   }

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:EMP?")); 
   io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("ON")))
      *val = VARIANT_TRUE;
   else
      *val = VARIANT_FALSE;


   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_EmphasisEnabled(BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;
   CString strEnabled, strChanSend, strCommandSend;
   CString strChanCheck = COLE2T(Channel);
   long podPresent = 0;

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

    //Checking if digital pod is present for current channel
   hr = WX218x::get_PodPresent(Channel, &podPresent);

   if (!podPresent)
   {
     hr = err.DigPodNotPresent(strChanSend);
     return hr;
   }

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SOUR:DIG:EMP %s")), strEnabled); 
   hr = io.Printf(strCommandSend);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_get_FormatData(BSTR Channel, WX218xDigFormatDataEnum* val)
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

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FORM:DATA?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("COMM")))
      *val = WX218xDigFormatDataCommon;

   else if (!strResponse.CompareNoCase(_T("SEP")))
      *val = WX218xDigFormatDataSeparate;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_FormatData(BSTR Channel, WX218xDigFormatDataEnum val)
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

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   switch (val)
   {
   case WX218xDigFormatDataCommon:
      strCommand = _T(":FORM:DATA COMM");
      break;

   case WX218xDigFormatDataSeparate:
      strCommand = _T(":FORM:DATA SEP");
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

HRESULT WX218x::IWX218xDigitalPatternOutput_get_ArbResolution(BSTR Channel, WX218xArbitraryResolutionEnum* val)
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

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":FORM:ARB:RES?"));
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("1P")))
      *val = WX218xArbitraryResolution1P;

   else if (!strResponse.CompareNoCase(_T("2P")))
      *val = WX218xArbitraryResolution2P;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_ArbResolution(BSTR Channel, WX218xArbitraryResolutionEnum val)
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

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   switch (val)
   {
   case WX218xArbitraryResolution1P:
      strCommand = _T(":FORM:ARB:RES 1P");
      break;

   case WX218xArbitraryResolution2P:
      strCommand = _T(":FORM:ARB:RES 2P");
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

//===========================================================================================================
//                               - DigClock -
HRESULT WX218x::IWX218xDigitalPatternOutput_get_DigClock(WX218xDigitalClockEnum* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   //if (modelNumber == MNM_WX2184 && m_DigitalExist == 0)
   //{
      //hr = err.DigPodNotExist();
      //return hr;
   //}

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   strCommandSend = _T(":DIG:CLOC?");
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("SDR")))
      *val = WX218xDigitalClockSDR;

   else if (!strResponse.CompareNoCase(_T("DDR")))
      *val = WX218xDigitalClockDDR;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_DigClock(WX218xDigitalClockEnum val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strCommand, strEnum;
   int modelNumber;

   modelNumber = FuncReturnModelNumber();

   //if (modelNumber == MNM_WX2184 && m_DigitalExist == 0)
   //{
     // hr = err.DigPodNotExist();
      //return hr;
   //}

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   switch (val)
   {
   case WX218xDigitalClockSDR:
      strCommand = _T(":DIG:CLOC SDR");
      break;

   case WX218xDigitalClockDDR:
      strCommand = _T(":DIG:CLOC DDR");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   strCommandSend.Format(_T("%s"), strCommand);
   hr = io.Printf(strCommandSend);

   return hr;
}

//=======================================================================================================
//                                     - DigPort -
HRESULT WX218x::IWX218xDigitalPatternOutput_get_DigPort(WX218xDigPortEnum* val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strResponse;

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   strCommandSend = _T(":DIG:PORT?");
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("1")))
      *val = WX218xDigPortPort1;

   else if (!strResponse.CompareNoCase(_T("2")))
      *val = WX218xDigPortPort2;

   else if (!strResponse.CompareNoCase(_T("BOTH")))
      *val = WX218xDigPortPortBoth;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_put_DigPort(WX218xDigPortEnum val)
{
	HRESULT hr = S_OK;
   CString strCommandSend, strCommand, strEnum;

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   switch (val)
   {
   case WX218xDigPortPort1:
      strCommand = _T(":DIG:PORT 1");
      break;

   case WX218xDigPortPort2:
      strCommand = _T(":DIG:PORT 2");
      break;

   case WX218xDigPortPortBoth:
      strCommand = _T(":DIG:PORT BOTH");
      break;

   default:
      EnumToName(val, strEnum);
      hr = err.ValueNotSupported(strEnum,strEnum);
      return hr;
   }

   strCommandSend.Format(_T("%s"), strCommand);
   hr = io.Printf(strCommandSend);

   return hr;
}

//=======================================================================================================
//                                     - ConfigureDigClock -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigClock(WX218xDigitalClockEnum DigClock)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_DigClock(DigClock);

	return hr;
}

//===========================================================================================================
//                                   - LoadDigitalDataAsciiFile -
HRESULT WX218x::IWX218xDigitalPatternOutput_LoadDigitalDataAsciiFile(BSTR FileName, long Segment)
{
	 //=======================================================================================================
   //Recieving digital ascii data (every point is of type unsigned int) and download to Digital
   //If segment number doesn't exist on Arbitrary, return error;

    //Download digital data in to the instrument.
   //For WX2184 only.
   //Every point is of type unsigned int.
   //Segment number must be already defined on Channel1 (2).
   //Size of digital data must be: size of arbitrary/2
	HRESULT hr = S_OK;
   CString strCommand, hdrTrace, cmdBuff, strChannel;
   CString strFormatSegNum, strFormatSegSize, strFormatSegSize2;
   long stbLoops = 0;    //size of Data
   long wfmSizeMin;
   long segSizeArb, segSizeDig;
   int flagUpdate = 1;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len;
   CString strSystErr = _T("*OPC?\n");
   long podPresent = 0;
   FILE *wfmFile = VI_NULL;
   CString strFileName, strExtension;
   long lengthFile, lengthString, numBytes, fileSize, tmpSize, wfmSize;
   unsigned long *binData = VI_NULL;
   unsigned short *binDataShort = VI_NULL;
   unsigned long dataLong;
   long file_count;
   int modelNumber, digPortNum;
   int segArbExist = 0;
   WX218xDigPortEnum valEnumPort;

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

  // if (modelNumber == MNM_WX2184 && m_DigitalExist == 0)
  // {
     // hr = err.DigPodNotExist();
     // return hr;
   //}

   //Checking range of Segment

   //Checking in array for Arbitrary memory if already was download in this segment (Arbitrary memory)
   //Segment must be already defined on Arbitrary
   segSizeArb = m_waveformManager.m_ArrayArbSeg[0][Segment-1];

   if (segSizeArb == 0) //segment was not defined on Arbitrary
   {
      //strFormatSegNum.Format(_T("(%d)"), Segment);
      //hr = err.SegNotExist(strFormatSegNum);
      //return hr;  

      segArbExist = 0;  //for know that before download digital data we need to define arbitrary segment
   }

   else
   {
    segArbExist = 1;  //we don't need to define arbitrary segment
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

    //Open Ascii File for reading 
    wfmFile = fopen(tmpChar, "rt"); 

    delete [] tmpChar;
    delete [] tmpStr;

    if (!wfmFile)  //Can not open file 
    {
     hr = err.CannotOpenFile(strFileName);
     return hr;
    }//end if,Can not open file

    //Getting file size
    hr = WX218x::GetHexAsciiFileSize(FileName, fileSize);
    if (!SUCCEEDED(hr))
    {
     if (wfmFile)
               fclose(wfmFile);
            return hr;
    }

   //Calculate waveform size
   wfmSize = fileSize; 

   wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184/2; //becouse if in arbitrary segment defined as 1024, so in the digital must be 1024/2 

   //Checking now waveform size (file size)
  
   if ((wfmSize< wfmSizeMin) || (wfmSize > m_MemorySize/2) || (wfmSize%m_WfmQuantum))
   {
      hr = ReportInvalidValueError(_T("LoadDigitalDataBinaryFile"), _T("File"), _T("File size"));
      return hr;
   }

   if (segSizeArb != 0 && segSizeArb != wfmSize*2) //in arbitrary memory in this segment was already something download
   {
    strFormatSegNum.Format(_T("(%d)"), Segment);
    strFormatSegSize.Format(_T("(%d)"), segSizeArb/2);
    strFormatSegSize2.Format(_T("(%d)"), segSizeArb);
    hr = err.SegsizeDigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
    return hr; 
    
   }//end if,in arbitrary memory in this segment was already something download 

   //Before download digital data in to the digital memory checking in array Digital if already something was 
   //download in this segment
   segSizeDig = m_digitalManager.m_ArrayDigSeg[0][Segment-1];

   if(segSizeDig != wfmSize && segSizeDig !=0)
   {
      //In this segment was already download another data with another size
     strFormatSegNum.Format(_T("(%d)"), Segment);
     strFormatSegSize.Format(_T("(%d)"), segSizeDig);
     hr = err.SegmentNotEmpty(strFormatSegSize, strFormatSegNum);
     return hr; 
   }   

  if (GetSimulate())  //temporary close for offline
  {
    return hr;
  }

  //NEW 7.04.2014
  //Checking every point is 2 byte or 4 byte 
    _IWX218xDigitalPatternOutput::get_DigPort(&valEnumPort);

    if (valEnumPort == WX218xDigPortPort1 || valEnumPort == WX218xDigPortPort2)
       digPortNum = 1;  //every point must be 2 bytes
    else
      digPortNum = 0; //every point must be 4 bytes

    if (digPortNum == 1)  //every point is 2 byte
     binDataShort = new unsigned short [fileSize];
    else //every point is 4 byte
     binData = new unsigned long [fileSize];

   file_count = 0;

   if (digPortNum == 1) //every point is 2 byte
   {
     while (file_count < wfmSize && !feof(wfmFile))
     {
       fscanf(wfmFile, "%X", &dataLong);
       binDataShort[file_count] = (short)dataLong;
       file_count ++;
     }

   }//end if, every point is 2 byte

   else //every point is 4 byte
   {
     while (file_count < wfmSize && !feof(wfmFile))
     {
       fscanf(wfmFile, "%X", &dataLong);
       binData[file_count] = dataLong;
       file_count ++;
     }  
   }//end else, every point is 4 byte

   fclose(wfmFile);
   
   //Checking if we need to define arbitrary segement
   if (segArbExist == 0)
   {
     //Define segment
   strCommand.Format(_T(":TRAC:DEF %d,%d"), Segment, wfmSize*2);
   hr = io.Printf(strCommand);  //temporary close for offline
   }
   //Set active segment
   strCommand.Format(_T(":TRAC:SEL %d"), Segment);
   hr = io.Printf(strCommand);  //temporary close for offline

   switch (interfaceType)
   {
    case VI_INTF_GPIB:
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);
     
      do
      {
       hr = io.ReadStatusByte(&statusByte);
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */

      if (digPortNum == 1)  //every point is 2 byte
      {
        WX218x::makeHeader (":DIG:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
        // Send a header and data of binary block
        hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

        hr = WX218x::writeBinaryBlock ((BYTE*)binDataShort, 2*wfmSize);  //temporary close for offline
      }//end if, every point is 2 byte

      else //every point is 4 byte
      {
        WX218x::makeHeader (":DIG:DATA #", 4*wfmSize, bufHeader, sizeof (bufHeader));
        // Send a header and data of binary block
        hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

        hr = WX218x::writeBinaryBlock ((BYTE*)binData, 4*wfmSize);  //temporary close for offline
      }//end else, every point is 4 byte
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */

      if (digPortNum == 1)  //every point is 2 byte
      {
        WX218x::makeHeader (":DIG:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
        hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
        // Send a header and data of binary block
        hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

        hr = WX218x::writeBinaryBlock ((BYTE*)binDataShort, 2*wfmSize);  //temporary close for offline
        hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

      }//end if, every point is 2 byte

      else  //every point is 4 byte
      {
        WX218x::makeHeader (":DIG:DATA #", 4*wfmSize, bufHeader, sizeof (bufHeader));
        hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
        // Send a header and data of binary block
        hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

        hr = WX218x::writeBinaryBlock ((BYTE*)binData, 4*wfmSize);  //temporary close for offline
        hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      }//end else, every point is 4 byte
      break;

    default:  //TCPIP
      /* convert a UNCODE to BYTE array */

       if (digPortNum == 1)  //every point is 2 byte
       {
         WX218x::makeHeader (":DIG:DATA #", 2*wfmSize, bufHeader, sizeof (bufHeader));
         hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
         // Send a header and data of binary block
         hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline

         hr = WX218x::writeBinaryBlock ((BYTE*)binDataShort, 2*wfmSize);  //temporary close for offline
         hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
       }//end if,every point is 2 byte

       else //every point is 4 byte
       {
         WX218x::makeHeader (":DIG:DATA #", 4*wfmSize, bufHeader, sizeof (bufHeader));
         hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
         // Send a header and data of binary block
         hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline

         hr = WX218x::writeBinaryBlock ((BYTE*)binData, 4*wfmSize);  //temporary close for offline
         hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
       }//end else, every point is 4 byte

   }//end switch interfaceType 

   //NEW 28.10.2012
   //Saving in array digital size of this segment
   m_digitalManager.m_ArrayDigSeg[0][Segment-1] = wfmSize;

   if (binData)
      delete [] binData;

   if (binDataShort)
      delete [] binDataShort;

   if (wfmFile)
      fclose(wfmFile);

   return hr;
}

//=================================================================================================
//                                      - LoadDigitalDataBinaryFile -
HRESULT WX218x::IWX218xDigitalPatternOutput_LoadDigitalDataBinaryFile(BSTR FileName, long Segment)
{
   //=======================================================================================================
   //Recieving digital binary data (every point 4 byte or 2 bytes) and download to Digital
   //If segment number doesn't exist on Arbitrary, return error;

    //Download digital data in to the instrument.
   //For WX2184 only.
   //Every point is 4 byte if Digital Port is BOTH.
    //Every point is 2 byte if Digital Port is 1 or 2.
   //Segment number must be already defined on Channel1 (2).
   //Size of digital data must be: size of arbitrary/2
	HRESULT hr = S_OK;
   CString strCommand, hdrTrace, cmdBuff, strChannel;
   CString strFormatSegNum, strFormatSegSize, strFormatSegSize2;
   long stbLoops = 0;    //size of Data
   long wfmSizeMin;
   long segSizeArb, segSizeDig;
   int flagUpdate = 1;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len;
   CString strSystErr = _T("*OPC?\n");
   long podPresent = 0;
   FILE *wfmFile = VI_NULL;
   CString strFileName, strExtension;
   long lengthFile, lengthString, numBytes, fileSize, tmpSize, wfmSize;
   //unsigned long *binData = VI_NULL;
   unsigned char *binData = VI_NULL;
   int modelNumber;
   int digPortNum;   //variable for know every point should be 2 bytes or 4 bytes
   WX218xDigPortEnum valEnumPort;
   int segArbExist = 0;     //variable for know if already in arbitrary was define segment

   modelNumber = FuncReturnModelNumber();

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

  // if (modelNumber == MNM_WX2184 && m_DigitalExist == 0)
  // {
     // hr = err.DigPodNotExist();
     // return hr;
   //}

   //Checking range of Segment

   //Checking in array for Arbitrary memory if already was download in this segment (Arbitrary memory)
   //Segment must be already defined on Arbitrary
   segSizeArb = m_waveformManager.m_ArrayArbSeg[0][Segment-1];

   if (segSizeArb == 0) //segment was not defined on Arbitrary
   {
      //strFormatSegNum.Format(_T("(%d)"), Segment);
      //hr = err.SegNotExist(strFormatSegNum);
      //return hr;  

      //Before download digital data, define this segment in arbitrary
      segArbExist = 0;
   }

   else
   {
     //In current segment in arbitrary was already download data
     segArbExist = 1;  
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

    //Open Binary File for reading 
    wfmFile = fopen(tmpChar, "rb"); 

    delete [] tmpChar;
    delete [] tmpStr;

    if (!wfmFile)  //Can not open file 
    {
     hr = err.CannotOpenFile(strFileName);
     return hr;
    }//end if,Can not open file

    //Getting file size
    hr = WX218x::GetFileSize(wfmFile, &fileSize);
    if (!SUCCEEDED(hr))
    {
     if (wfmFile)
               fclose(wfmFile);
            return hr;
    }

    //Before calculating waveform size, checking Digital Port
    _IWX218xDigitalPatternOutput::get_DigPort(&valEnumPort);

    if (valEnumPort == WX218xDigPortPort1 || valEnumPort == WX218xDigPortPort2)
       digPortNum = 1;  //every point must be 2 bytes
    else
      digPortNum = 0; //every point must be 4 bytes


   //Calculate waveform size
    if (digPortNum == 1)  //every point is 2 bytes
      wfmSize = fileSize/2; 
    else
     wfmSize = fileSize/4;  //becouse every point 4 byte

   wfmSizeMin = WAVEFORM_SIZE_MIN_WX2184/2; //becouse if in arbitrary segment defined as 1024, so in the digital must be 1024/2 

   //Checking now waveform size (file size)
  
   if ((wfmSize< wfmSizeMin) || (wfmSize > m_MemorySize/2) || (wfmSize%m_WfmQuantum))
   {
      hr = ReportInvalidValueError(_T("LoadDigitalDataBinaryFile"), _T("File"), _T("File size"));
      return hr;
   }

   if (segSizeArb != 0 && segSizeArb != wfmSize*2) //in arbitrary memory in this segment was already something download
   {
     strFormatSegNum.Format(_T("(%d)"), Segment);
     strFormatSegSize.Format(_T("(%d)"), segSizeArb/2);
     strFormatSegSize2.Format(_T("(%d)"), segSizeArb);
     hr = err.SegsizeDigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
     return hr; 
    
   }//end if,in arbitrary memory in this segment was already something download 

   //Before download digital data in to the digital memory checking in array Digital if already something was 
   //download in this segment
   segSizeDig = m_digitalManager.m_ArrayDigSeg[0][Segment-1];

   if(segSizeDig != wfmSize && segSizeDig !=0)
   {
      //In this segment was already download another data with another size
      strFormatSegNum.Format(_T("(%d)"), Segment);
      strFormatSegSize.Format(_T("(%d)"), segSizeDig);
      hr = err.SegmentNotEmpty(strFormatSegSize, strFormatSegNum);
      return hr; 
   }   

  if (GetSimulate())  //temporary close for offline
  {
    return hr;
  }

   //Checking if digital pod is present for current channel
   //hr = WX218x::get_PodPresent(_T("Channel1"), &podPresent); //close temporary for check

  // if (!podPresent)
  // {
   //  hr = err.DigPodNotPresent(_T("Channel1"));
   //  return hr;
   //}

   //binData = new unsigned long [fileSize];
  binData = new unsigned char [fileSize];

   tmpSize = fread(binData, sizeof(ViByte), fileSize, wfmFile);
   if (tmpSize != fileSize)  //Invalid reading file
   {
    hr = err.ReadingFile(strFileName);
    if (binData)
     delete [] binData;

    if (wfmFile)
    //Close file that was open
    hr = fclose(wfmFile);

    return hr;  
   }//end if, Invalid reading file

   //Define arbitrary segment if there is no data in arbitrary
   if (segArbExist == 0)
   {
      //Define arb segment
     strCommand.Format(_T(":TRAC:DEF %d,%d"), Segment, wfmSize*2);
     hr = io.Printf(strCommand);  //temporary close for offline
   }
   //Set active segment
   strCommand.Format(_T(":TRAC:SEL %d"), Segment);
   hr = io.Printf(strCommand);  //temporary close for offline

   switch (interfaceType)
   {
    case VI_INTF_GPIB:
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);
     
      do
      {
       hr = io.ReadStatusByte(&statusByte);
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      //WX218x::makeHeader (":DIG:DATA #", 4*wfmSize, bufHeader, sizeof (bufHeader));
      WX218x::makeHeader (":DIG:DATA #", fileSize, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      //hr = WX218x::writeBinaryBlock ((BYTE*)binData, 4*wfmSize);  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)binData, fileSize);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      //WX218x::makeHeader (":DIG:DATA #", 4*wfmSize, bufHeader, sizeof (bufHeader));
      WX218x::makeHeader (":DIG:DATA #", fileSize, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      //hr = WX218x::writeBinaryBlock ((BYTE*)binData, 4*wfmSize);  //temporary close for offline
      hr = WX218x::writeBinaryBlock ((BYTE*)binData, fileSize);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

    default:  //TCPIP
      /* convert a UNCODE to BYTE array */
       //WX218x::makeHeader (":DIG:DATA #", 4*wfmSize, bufHeader, sizeof (bufHeader));
       WX218x::makeHeader (":DIG:DATA #", fileSize, bufHeader, sizeof (bufHeader));
       hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
       hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline

       //hr = WX218x::writeBinaryBlock ((BYTE*)binData, 4*wfmSize);  //temporary close for offline
       hr = WX218x::writeBinaryBlock ((BYTE*)binData, fileSize);  //temporary close for offline
       hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   //NEW 28.10.2012
   //Saving in array digital size of this segment
   m_digitalManager.m_ArrayDigSeg[0][Segment-1] = wfmSize;

   if (binData)
      delete [] binData;

   
   if (wfmFile)
      fclose(wfmFile);

   return hr;
}

//=====================================================================================================
//                                         - CreateDigPatternDataAdv -


//===========================================================================================================
//                                 - ConfigureDigPattLowLevel -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattLowLevel(BSTR Channel, double LowLevel)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_LowLevel(Channel, LowLevel);

	return hr;
}

HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattLevelMode(BSTR Channel, WX218xDigPatternLevelModeEnum LevelMode)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_LevelMode(Channel, LevelMode);

	return hr;
}

//=========================================================================================================
//                                    - ConfigureDigPattHighLevel -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattHighLevel(BSTR Channel, double HighLevel)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_HighLevel(Channel, HighLevel);

	return hr;
}

//=============================================================================================================
//                                           - ConfigureDigPattFormatData -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattFormatData(BSTR Channel, WX218xDigFormatDataEnum FormatData)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_FormatData(Channel, FormatData);

	return hr;
}

//==============================================================================================================
//                              - ConfigureDigPattEnabled -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattEnabled(BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_Enabled(Channel, val); 

	return hr;
}

//================================================================================================================
//                                        - ConfigureDigPattEmphasisEnabled -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattEmphasisEnabled(BSTR Channel, VARIANT_BOOL EmphasisEnabled)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_EmphasisEnabled(Channel, EmphasisEnabled);

	return hr;
}

//============================================================================================================
//                                    - ConfigureDigPattDelayMode -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattDelayMode(BSTR Channel, WX218xDigPatternDelayModeEnum DelayMode)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_DelayMode(Channel, DelayMode);

	return hr;
}

//=============================================================================================================
//                                        - ConfigureDigPattDelay -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattDelay(BSTR Channel, double Delay)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_Delay(Channel, Delay);

	return hr;
}

//===============================================================================================================
//                                        - ConfigureDigPattBitLowLevel -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattBitLowLevel(BSTR Channel, long BitIndex, double BitLowLevel)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_BitLowLevel(Channel, BitIndex, BitLowLevel);

	return hr;
}

//===============================================================================================================
//                                     - ConfigureDigPattBitHighLevel -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattBitHighLevel(BSTR Channel, long BitIndex, double BitHighLevel)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_BitHighLevel(Channel, BitIndex, BitHighLevel);

	return hr;
}

//==============================================================================================================
//                                         - ConfigureDigPattBitEnabled -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattBitEnabled(BSTR Channel, long BitIndex, VARIANT_BOOL BitEnabled)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_BitEnabled(Channel, BitIndex, BitEnabled);

	return hr;
}

//============================================================================================================
//                                      - ConfigureDigPattBitDelay -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattBitDelay(BSTR Channel, long BitIndex, double BitDelay)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_BitDelay(Channel, BitIndex, BitDelay);

	return hr;
}

//================================================================================================================
//                                        - ConfigureDigPattArbResolution -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattArbResolution(BSTR Channel, WX218xArbitraryResolutionEnum ArbResolution)
{
	HRESULT hr = S_OK;

   hr = _IWX218xDigitalPatternOutput::put_ArbResolution(Channel, ArbResolution);

	return hr;
}

//================================================================================================================
//                                  - CreateDigPatternParamData1 -
HRESULT WX218x::IWX218xDigitalPatternOutput_CreateDigPatternParamData1(BSTR Channel, SAFEARRAY** State, SAFEARRAY** Delay, SAFEARRAY** HighLevel, SAFEARRAY** LowLevel)
{
	HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeState, sizeDelay, sizeHighLevel, sizeLowLevel;
   long lBoundState, lBoundDelay, lBoundHighLevel, lBoundLowLevel, indexArray;
   long uBoundState, uBoundDelay, uBoundHighLevel, uBoundLowLevel;
   SAFEARRAY* psaState = *State;
   SAFEARRAY* psaDelay = *Delay;
   SAFEARRAY* psaHighLevel = *HighLevel;
   SAFEARRAY* psaLowLevel = *LowLevel;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long lenDigPatternStruct, digPatternLengthByte, totalBytes = 0;
   long valueArrayState;
   double valueArrayDelay;
   double valueArrayHighLevel, valueArrayLowLevel;
   unsigned char* binData = VI_NULL;
   unsigned char* p0 = VI_NULL;  //we need this pointer at the end of the loop for know total bytes
   long podPresent = 0, indexMin, indexMax;
   double delayMin, delayMax, highLevelMin, highLevelMax, lowLevelMin, lowLevelMax;
   int modelNumber;
   WX218xDigPortEnum valPort;
    
   modelNumber = FuncReturnModelNumber();

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

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

    else //it is WX2184
   {
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
    
      if (valPort == WX218xDigPortPort1 || valPort == WX218xDigPortPort2)
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX;
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_PARAM_MAX_WX2184;
      }
   }//end else, it is WX2184

    switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      delayMin = DIGITAL_PATTERN_DEL_MIN_WX2184;
      delayMax = DIGITAL_PATTERN_DEL_MAX_WX2184;
      highLevelMin = DIGITAL_PATTERN_HIGH_LEVEL_MIN_WX2184;
      highLevelMax = DIGITAL_PATTERN_HIGH_LEVEL_MAX_WX2184;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
      delayMin = DIGITAL_PATTERN_DEL_MIN;
      delayMax = DIGITAL_PATTERN_DEL_MAX;
      highLevelMin = DIGITAL_PATTERN_HIGH_LEVEL_MIN;
      highLevelMax = DIGITAL_PATTERN_HIGH_LEVEL_MAX;
    }

   sizeState = psaState->rgsabound->cElements;
   sizeDelay = psaDelay->rgsabound->cElements;
   sizeHighLevel = psaHighLevel->rgsabound->cElements;
   sizeLowLevel = psaLowLevel->rgsabound->cElements;

   if ((sizeState< indexMin) || (sizeState > indexMax))
   {
      hr = ReportInvalidValueError(_T("CreateDigPatternParamData"), _T("State"), _T("Size of Bit state array"));
      return hr;
   }

   if ((sizeDelay< indexMin) || (sizeDelay > indexMax))
   {
      hr = ReportInvalidValueError(_T("CreateDigPatternParamData"), _T("Delay"), _T("Size of Delay array"));
      return hr;
   }

   if ((sizeHighLevel< indexMin) || (sizeHighLevel > indexMax))
   {
      hr = ReportInvalidValueError(_T("CreateDigPatternParamData"), _T("High Level"), _T("Size of High Level array"));
      return hr;
   }

   if ((sizeLowLevel< indexMin) || (sizeLowLevel > indexMax))
   {
      hr = ReportInvalidValueError(_T("CreateDigPatternParamData"), _T("Low Level"), _T("Size of Low Level array"));
      return hr;
   }

   //Make sure that size of State is equal to Delay, HighLevel and LowLevel
   if ((sizeState != sizeDelay) && (sizeState != sizeHighLevel && (sizeState != sizeLowLevel) && (sizeDelay != sizeHighLevel) && (sizeDelay != sizeLowLevel) && (sizeHighLevel != sizeLowLevel)))
   {
      hr = err.SizeArrayNotEqual(_T(""));
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundState = psaState->rgsabound->lLbound;
   lBoundDelay = psaDelay->rgsabound->lLbound;
   lBoundHighLevel = psaHighLevel->rgsabound->lLbound;
   lBoundLowLevel = psaLowLevel->rgsabound->lLbound;

   //Checking if lower bound of array State  is zero
   if (lBoundState != 0)
   {
      hr = err.LboundArrayZero(_T("Bit State Array"));
      return hr;
   }

   //Checking if lower bound of Delay Array  is zero
   if (lBoundDelay != 0)
   {
      hr = err.LboundArrayZero(_T("Delay Array"));
      return hr;
   }

   //Checking if lower bound of HighLevel Array  is zero
   if (lBoundHighLevel != 0)
   {
      hr = err.LboundArrayZero(_T("High Level Array"));
      return hr;
   }

   //Checking if lower bound of LowLevel Array  is zero
   if (lBoundLowLevel != 0)
   {
      hr = err.LboundArrayZero(_T("Low Level Array"));
      return hr;
   }

   //Make sure that lBound is the same value
   if ((lBoundState != lBoundDelay) && (lBoundState != lBoundHighLevel && (lBoundState != lBoundLowLevel) && (lBoundDelay != lBoundHighLevel) && (lBoundDelay != lBoundLowLevel) && (lBoundHighLevel != lBoundLowLevel)))
   {
      hr = err.LboundArrayEqual(_T(""));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaState, 1, &uBoundState);
   hr = ::SafeArrayGetUBound(psaDelay, 1, &uBoundDelay);
   hr = ::SafeArrayGetUBound(psaHighLevel, 1, &uBoundHighLevel);
   hr = ::SafeArrayGetUBound(psaLowLevel, 1, &uBoundLowLevel);

   //Checking if upper bound of arrays is not zero
   if ((uBoundState == 0))
   {
      hr = err.UpperBoundZero(_T("Bit State Array"));
      return hr;
   }

   if (uBoundDelay == 0)
   {
      hr = err.UpperBoundZero(_T("Delay Array"));
      return hr;
   }

   if (uBoundHighLevel == 0)
   {
      hr = err.UpperBoundZero(_T("High Level Array"));
      return hr;
   }

   if (uBoundLowLevel == 0)
   {
      hr = err.UpperBoundZero(_T("Low Level Array"));
      return hr;
   }

   //Make sure that uBound is the same value
   if ((uBoundState != uBoundDelay) && (uBoundState != uBoundHighLevel && (uBoundState != uBoundLowLevel) && (uBoundDelay != uBoundHighLevel) && (uBoundDelay != uBoundLowLevel) && (uBoundHighLevel != uBoundLowLevel)))
   {
      hr = err.UboundArrayEqual(_T(""));
      return hr;
   }

   //Accesing every element in array BitState
   for (indexArray = lBoundState; indexArray < sizeState; indexArray++)  //Loop for Bit State array
   {
      hr = SafeArrayGetElement(psaState, &indexArray, &valueArrayState);

      //Checking Bit State range
      if (valueArrayState < 0 || valueArrayState > 1)
      {
           strFormatValue.Format(_T("(%d)"), valueArrayState);
           strFormatElement.Format(_T("(%d)"), indexArray);
           strFormatParameter.Format(_T("(%s)"), _T("Bit State"));
           hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
           return hr;
      }

   }//end for, Loop for Bit State array

   //Accesing every element in array Delay
   for (indexArray = lBoundDelay; indexArray < sizeDelay; indexArray++)  //Loop for Delay array
   {
      hr = SafeArrayGetElement(psaDelay, &indexArray, &valueArrayDelay);
      //Checking Loop count range
      if (valueArrayDelay < delayMin || valueArrayDelay > delayMax)
      {
         strFormatValue.Format(_T("(%Lf)"), valueArrayDelay);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("Delay"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for Delay array

   //Accesing every element in array High Level
   for (indexArray = lBoundHighLevel; indexArray < sizeHighLevel; indexArray++)  //Loop for High Level array
   {
      hr = SafeArrayGetElement(psaHighLevel, &indexArray, &valueArrayHighLevel);
      //Checking High Level range
      if (valueArrayHighLevel < highLevelMin || valueArrayHighLevel > highLevelMax)
      {
         strFormatValue.Format(_T("(%Lf)"), valueArrayHighLevel);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("High Level"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for High Level array

   //Accesing every element in array Low Level
   for (indexArray = lBoundLowLevel; indexArray < sizeLowLevel; indexArray++)  //Loop for Low Level array
   {
      hr = SafeArrayGetElement(psaLowLevel, &indexArray, &valueArrayLowLevel);
      //Checking Low Level range
      if (valueArrayLowLevel < DIGITAL_PATTERN_LOW_LEVEL_MIN || valueArrayLowLevel > DIGITAL_PATTERN_LOW_LEVEL_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), valueArrayLowLevel);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("Low Level"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for Low Level array

   lenDigPatternStruct = sizeof(DIG_PATTERN_PARAM_INF); 
   digPatternLengthByte = lenDigPatternStruct * sizeState; 
   binData = new unsigned char[digPatternLengthByte];
   memset(binData, '\0', digPatternLengthByte);

   //We must save the start of this pointer
   p0 = binData;



   for (indexArray = lBoundState; indexArray < sizeState; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaState, &indexArray, &valueArrayState);
      hr = SafeArrayGetElement(psaDelay, &indexArray, &valueArrayDelay);
      hr = SafeArrayGetElement(psaHighLevel, &indexArray, &valueArrayHighLevel);
      hr = SafeArrayGetElement(psaLowLevel, &indexArray, &valueArrayLowLevel);

      //First put State
       //Putting in binData value State
      *((unsigned char *)p0) = (unsigned char)valueArrayState;
      p0 += sizeof(unsigned char);

      //Second put Delay
      //Putting in binData value Delay
      *((double*)p0) = (double)valueArrayDelay;
      p0 += sizeof(double);

      totalBytes = p0 - binData;

      //Put Low Level
       //Putting in binData value Low Level
      *((float*)p0) = (float)valueArrayLowLevel;
      p0 += sizeof(float);

      //Put High Level
      //Putting in binData value High Level
      *((float*)p0) = (float)valueArrayHighLevel;
      p0 += sizeof(float);

      totalBytes = p0 - binData;

     }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_DIGITAL_PATTERN_PARAM);

   if (binData)
      delete [] binData;


   return hr;
}

/* Create Dig Pattern Param Data */
HRESULT WX218x::IWX218xDigitalPatternOutput_CreateDigPatternParamData(BSTR Channel, SAFEARRAY** State, SAFEARRAY** Delay, SAFEARRAY** HighLevel, SAFEARRAY** LowLevel)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   long sizeState, sizeDelay, sizeHighLevel, sizeLowLevel;
   long lBoundState, lBoundDelay, lBoundHighLevel, lBoundLowLevel, indexArray;
   long uBoundState, uBoundDelay, uBoundHighLevel, uBoundLowLevel;
   SAFEARRAY* psaState = *State;
   SAFEARRAY* psaDelay = *Delay;
   SAFEARRAY* psaHighLevel = *HighLevel;
   SAFEARRAY* psaLowLevel = *LowLevel;
   CString strChanSend, strFormatValue, strFormatElement, strFormatParameter;
   long lenDigPatternStruct, digPatternLengthByte, totalBytes = 0;
   BYTE valueArrayState;
   double valueArrayDelay;
   double valueArrayHighLevel, valueArrayLowLevel;
   unsigned char* binData = VI_NULL;
   unsigned char* p0 = VI_NULL;  //we need this pointer at the end of the loop for know total bytes
   long podPresent = 0, indexMin, indexMax;
   double delayMin, delayMax, highLevelMin, highLevelMax, lowLevelMin, lowLevelMax;
   int modelNumber;
   WX218xDigPortEnum valPort;

   modelNumber = FuncReturnModelNumber();

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

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   hr = WX218x::VerifyIsValidForModel(WX2184X_FAM | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C);
   if (hr) //not supported
    return hr; 

   if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C && modelNumber != MNM_WX2182C && modelNumber != MNM_WX2181C && modelNumber != MNM_WX1281C && modelNumber != MNM_WX1282C) //it is not WX2184
   {
     //Checking if digital pod is present for current channel
     hr = WX218x::get_PodPresent(Channel, &podPresent);

     if (!podPresent)
     {
       hr = err.DigPodNotPresent(strChanSend);
       return hr;
     }
   }//end if, it is not WX2184

   else //it is WX2184
   {
      hr = _IWX218xDigitalPatternOutput::get_DigPort(&valPort);
    
      if (valPort == WX218xDigPortPort1 || valPort == WX218xDigPortPort2)
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_MAX;
      }

      else
      {
       indexMin = DIGITAL_BIT_INDEX_MIN;
       indexMax = DIGITAL_BIT_INDEX_PARAM_MAX_WX2184;
      }
   }//end else, it is WX2184

   switch (modelNumber)
   {
    case MNM_WX2184:
    case MNM_WX1284:
	case MNM_WX2184C:
    case MNM_WX1284C:
    case MNM_WX2182C:
    case MNM_WX2181C:
    case MNM_WX1281C:
    case MNM_WX1282C:
      delayMin = DIGITAL_PATTERN_DEL_MIN_WX2184;
      delayMax = DIGITAL_PATTERN_DEL_MAX_WX2184;
      highLevelMin = DIGITAL_PATTERN_HIGH_LEVEL_MIN_WX2184;
      highLevelMax = DIGITAL_PATTERN_HIGH_LEVEL_MAX_WX2184;
      break;

     default:
      indexMin = DIGITAL_BIT_INDEX_MIN;
      indexMax = DIGITAL_BIT_INDEX_MAX;
      delayMin = DIGITAL_PATTERN_DEL_MIN;
      delayMax = DIGITAL_PATTERN_DEL_MAX;
      highLevelMin = DIGITAL_PATTERN_HIGH_LEVEL_MIN;
      highLevelMax = DIGITAL_PATTERN_HIGH_LEVEL_MAX;
    }

   sizeState = psaState->rgsabound->cElements;
   sizeDelay = psaDelay->rgsabound->cElements;
   sizeHighLevel = psaHighLevel->rgsabound->cElements;
   sizeLowLevel = psaLowLevel->rgsabound->cElements;

   if ((sizeState< indexMin) || (sizeState > indexMax))
   {
      hr = ReportInvalidValueError(_T("CreateDigPatternParamData"), _T("State"), _T("Size of Bit state array"));
      return hr;
   }

   if ((sizeDelay< indexMin) || (sizeDelay > indexMax))
   {
      hr = ReportInvalidValueError(_T("CreateDigPatternParamData"), _T("Delay"), _T("Size of Delay array"));
      return hr;
   }

   if ((sizeHighLevel< indexMin) || (sizeHighLevel > indexMax))
   {
      hr = ReportInvalidValueError(_T("CreateDigPatternParamData"), _T("High Level"), _T("Size of High Level array"));
      return hr;
   }

   if ((sizeLowLevel< indexMin) || (sizeLowLevel > indexMax))
   {
      hr = ReportInvalidValueError(_T("CreateDigPatternParamData"), _T("Low Level"), _T("Size of Low Level array"));
      return hr;
   }

   //Make sure that size of State is equal to Delay, HighLevel and LowLevel
   if ((sizeState != sizeDelay) && (sizeState != sizeHighLevel && (sizeState != sizeLowLevel) && (sizeDelay != sizeHighLevel) && (sizeDelay != sizeLowLevel) && (sizeHighLevel != sizeLowLevel)))
   {
      hr = err.SizeArrayNotEqual(_T(""));
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundState = psaState->rgsabound->lLbound;
   lBoundDelay = psaDelay->rgsabound->lLbound;
   lBoundHighLevel = psaHighLevel->rgsabound->lLbound;
   lBoundLowLevel = psaLowLevel->rgsabound->lLbound;

   //Checking if lower bound of array State  is zero
   if (lBoundState != 0)
   {
      hr = err.LboundArrayZero(_T("Bit State Array"));
      return hr;
   }

   //Checking if lower bound of Delay Array  is zero
   if (lBoundDelay != 0)
   {
      hr = err.LboundArrayZero(_T("Delay Array"));
      return hr;
   }

   //Checking if lower bound of HighLevel Array  is zero
   if (lBoundHighLevel != 0)
   {
      hr = err.LboundArrayZero(_T("High Level Array"));
      return hr;
   }

   //Checking if lower bound of LowLevel Array  is zero
   if (lBoundLowLevel != 0)
   {
      hr = err.LboundArrayZero(_T("Low Level Array"));
      return hr;
   }

   //Make sure that lBound is the same value
   if ((lBoundState != lBoundDelay) && (lBoundState != lBoundHighLevel && (lBoundState != lBoundLowLevel) && (lBoundDelay != lBoundHighLevel) && (lBoundDelay != lBoundLowLevel) && (lBoundHighLevel != lBoundLowLevel)))
   {
      hr = err.LboundArrayEqual(_T(""));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaState, 1, &uBoundState);
   hr = ::SafeArrayGetUBound(psaDelay, 1, &uBoundDelay);
   hr = ::SafeArrayGetUBound(psaHighLevel, 1, &uBoundHighLevel);
   hr = ::SafeArrayGetUBound(psaLowLevel, 1, &uBoundLowLevel);

   //Checking if upper bound of arrays is not zero
   if ((uBoundState == 0))
   {
      hr = err.UpperBoundZero(_T("Bit State Array"));
      return hr;
   }

   if (uBoundDelay == 0)
   {
      hr = err.UpperBoundZero(_T("Delay Array"));
      return hr;
   }

   if (uBoundHighLevel == 0)
   {
      hr = err.UpperBoundZero(_T("High Level Array"));
      return hr;
   }

   if (uBoundLowLevel == 0)
   {
      hr = err.UpperBoundZero(_T("Low Level Array"));
      return hr;
   }

   //Make sure that uBound is the same value
   if ((uBoundState != uBoundDelay) && (uBoundState != uBoundHighLevel && (uBoundState != uBoundLowLevel) && (uBoundDelay != uBoundHighLevel) && (uBoundDelay != uBoundLowLevel) && (uBoundHighLevel != uBoundLowLevel)))
   {
      hr = err.UboundArrayEqual(_T(""));
      return hr;
   }

   //Accesing every element in array BitState
   for (indexArray = lBoundState; indexArray < sizeState; indexArray++)  //Loop for Bit State array
   {
      hr = SafeArrayGetElement(psaState, &indexArray, &valueArrayState);

      //Checking Bit State range
      if (valueArrayState < 0 || valueArrayState > 1)
      {
         //NEW 27.11.2013 add by Ira
         //Doing this for LabView Wrapper
         if (valueArrayState == 49)
            valueArrayState = 1;
         else if (valueArrayState == 48)
            valueArrayState = 0;

         else //data not valid
         {
           strFormatValue.Format(_T("(%d)"), valueArrayState);
           strFormatElement.Format(_T("(%d)"), indexArray);
           strFormatParameter.Format(_T("(%s)"), _T("Bit State"));
           hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
           return hr;
         }//end else, data not valid
      }

   }//end for, Loop for Bit State array

   //Accesing every element in array Delay
   for (indexArray = lBoundDelay; indexArray < sizeDelay; indexArray++)  //Loop for Delay array
   {
      hr = SafeArrayGetElement(psaDelay, &indexArray, &valueArrayDelay);
      //Checking Loop count range
      if (valueArrayDelay < delayMin || valueArrayDelay > delayMax)
      {
         strFormatValue.Format(_T("(%Lf)"), valueArrayDelay);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("Delay"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for Delay array

   //Accesing every element in array High Level
   for (indexArray = lBoundHighLevel; indexArray < sizeHighLevel; indexArray++)  //Loop for High Level array
   {
      hr = SafeArrayGetElement(psaHighLevel, &indexArray, &valueArrayHighLevel);
      //Checking High Level range
      if (valueArrayHighLevel < highLevelMin || valueArrayHighLevel > highLevelMax)
      {
         strFormatValue.Format(_T("(%Lf)"), valueArrayHighLevel);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("High Level"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for High Level array

   //Accesing every element in array Low Level
   for (indexArray = lBoundLowLevel; indexArray < sizeLowLevel; indexArray++)  //Loop for Low Level array
   {
      hr = SafeArrayGetElement(psaLowLevel, &indexArray, &valueArrayLowLevel);
      //Checking Low Level range
      if (valueArrayLowLevel < DIGITAL_PATTERN_LOW_LEVEL_MIN || valueArrayLowLevel > DIGITAL_PATTERN_LOW_LEVEL_MAX)
      {
         strFormatValue.Format(_T("(%Lf)"), valueArrayLowLevel);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("Low Level"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for Low Level array

   lenDigPatternStruct = sizeof(DIG_PATTERN_PARAM_INF); 
   digPatternLengthByte = lenDigPatternStruct * sizeState; 
   binData = new unsigned char[digPatternLengthByte];
   memset(binData, '\0', digPatternLengthByte);

   //We must save the start of this pointer
   p0 = binData;



   for (indexArray = lBoundState; indexArray < sizeState; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaState, &indexArray, &valueArrayState);
      hr = SafeArrayGetElement(psaDelay, &indexArray, &valueArrayDelay);
      hr = SafeArrayGetElement(psaHighLevel, &indexArray, &valueArrayHighLevel);
      hr = SafeArrayGetElement(psaLowLevel, &indexArray, &valueArrayLowLevel);

      //By the first put State
       //NEW 27.11.2013 add by Ira
      //Doing this for LabView wrapper
       if (valueArrayState == 49)
        valueArrayState = 1;

       if (valueArrayState == 48)
        valueArrayState = 0;

       //Putting in binData value State
      *((unsigned char *)p0) = (unsigned char)valueArrayState;
      p0 += sizeof(unsigned char);

      //Second put Delay
      //Putting in binData value Delay
      *((double*)p0) = (double)valueArrayDelay;
      p0 += sizeof(double);

      //Put low level
      //Putting in binData value Low Level
      *((float*)p0) = (float)valueArrayLowLevel;
      p0 += sizeof(float);

      //Put High Level
      //Putting in binData value High Level
      *((float*)p0) = (float)valueArrayHighLevel;
      p0 += sizeof(float);

    }//end for,access elements in all arrays

   //Now we need calculate total bytes
   totalBytes = p0 - binData;

    //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   hr = WX218x::LoadGeneralData(totalBytes, binData, TYPE_DIGITAL_PATTERN_PARAM);

   if (binData)
      delete [] binData;


   return hr;
}



/* Load Digital Pattern From File */
HRESULT WX218x::IWX218xDigitalPatternOutput_LoadDigitalPatternFromFile(BSTR Channel, BSTR FileName, long Segment)
{
	HRESULT hr = S_OK;
   FILE *wfmFile = VI_NULL;
   CString strFileName, strExtension;
   long lengthFile, pos, lengthString, numBytes, fileSize, tmpSize, wfmSize, index, file_count;
   double *binData = VI_NULL;
   short int *pwData = VI_NULL;
   double * wfmData = VI_NULL;
   double divider_14bit = 8192.0;
   double divider_current = 8192.0;
   double data;
   long lIndex;

   divider_current = divider_14bit;

   strFileName = COLE2T(FileName);

   lengthFile = strFileName.GetLength();
   lengthString = strFileName.GetLength() + 1;

   if (!lengthFile)
   {
      hr = err.InvalidValue(_T("FileName"), FileName);
      return hr;
   }

   //Checking file extension
   pos = strFileName.Find(_T("."));
   if (pos == -1)
   {
      hr = err.InvalidValue(_T("FileName"), FileName);
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
            return hr;
         }//end if,Can not open file

         //Getting file size
         hr = WX218x::GetFileSize(wfmFile, &fileSize);
         if (!SUCCEEDED(hr))
         {
            if (wfmFile)
               fclose(wfmFile);
            return hr;
         }

         binData = new double [fileSize];

         tmpSize = fread(binData, sizeof(ViByte), fileSize, wfmFile);
         if (tmpSize != fileSize)  //Invalid reading file
         {
            hr = err.ReadingFile(strFileName);
            if (binData)
               delete [] binData;

            if (wfmFile)
               //Close file that was open
               hr = fclose(wfmFile);

            return hr;  
         }//end if, Invalid reading file

         //Calculate waveform size
         wfmSize = fileSize/2;

         wfmData = new double [wfmSize];

         pwData = (short int*)binData;

         for (index = 0; index < wfmSize; index++)
         {
            wfmData[index] = (double)(pwData[index]/divider_current);
         }
      }//end if,Binary file 

      else if (!strExtension.CompareNoCase(_T("asc"))) //Ascci file
      {
         wfmSize = 0;
         //Getting file size
         hr = WX218x::GetAsciiFileSize(strFileName, wfmSize);
         if (!SUCCEEDED(hr))
         {
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

         binData = new double [wfmSize];

         file_count = 0;

         while (file_count < wfmSize && !feof(wfmFile))
         {
            fscanf(wfmFile, "%lg", &data);
            binData[file_count] = data;
            file_count ++;
         }

         fclose(wfmFile);

         wfmData = new double [wfmSize];

         for (index = 0; index < wfmSize; index++)
         {
            wfmData[index] = (double)(binData[index]/divider_current);
         }
      }//end else, ASCII file

      else //Invalid file extension
      {
         hr = err.InvalidValue(_T("FileName"), FileName);
         return hr;  
      }//end else,Invalid file extension 

   }//end else, Checking if File with exention ".wav" or ".asc"

   SAFEARRAY *psaWfmData = ::SafeArrayCreateVector(VT_R8, 0, wfmSize);

   if (psaWfmData != NULL)
   {
      for (lIndex = 0; lIndex < wfmSize; lIndex ++)
      {
         data = wfmData[lIndex];
         hr = ::SafeArrayPutElement(psaWfmData, &lIndex, (void*)&data);
         if (FAILED(hr))
            break;
      }//end for
   }//end if, psaWfmData != NULL 

   hr = _IWX218xDigitalPatternOutput::CreateDigPatternData(Channel,&psaWfmData, Segment); 

   ::SafeArrayDestroy(psaWfmData);

   if (binData)
      delete [] binData;

   if (wfmData)
      delete [] wfmData;

   if (wfmFile)
      fclose(wfmFile);

   return hr;
}

/* Create Digital Pattern Data */
HRESULT WX218x::IWX218xDigitalPatternOutput_CreateDigPatternData(BSTR Channel, SAFEARRAY** Data, long Segment)
{
	HRESULT hr = S_OK;
   CString strCommand, hdrTrace, cmdBuff, strChannel;
   CString strFormatSegNum, strFormatSegSize, strFormatSegSize2;
   long cnt, stbLoops = 0;    //size of Data
   long lBoundArray, wfmSizeMin;
   long segSizeArb, sizeAvDig, segSizeDig;
   int ii, indexChan, flagUpdate = 1;
   unsigned short posScope_16bit = POS_SCOPE_16BIT;
   double negScope_16bit = NEG_SCOPE_16BIT;
   unsigned short posScope_current = POS_SCOPE_16BIT;
   double negScope_current = NEG_SCOPE_16BIT;
   char buff[512] = "";
   BYTE bufHeader[256];
   short statusByte;
   BYTE bufRead[256];
   long bActual = 0, len;
   CString strSystErr = _T("*OPC?\n");
   WX218xDigFormatDataEnum dataFormatEnum;
   short dataFormat;  //variable for know it is Separate or Common
   long podPresent = 0;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend;


   //flagUpdate is variable for know user want download data in the segment where already was something
   //or in to another segment

   if (GetSimulate())  //temporary close for offline
   {
      return hr;
   }

   //Converting BSTR to CString
   strChannel = COLE2T(Channel);

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strChannel);

   strChanSend = WX218x::ReturnChannelSend(strChanCheck);

   //Checking if digital pod is present for current channel
   hr = WX218x::get_PodPresent(Channel, &podPresent);

   if (!podPresent)
   {
     hr = err.DigPodNotPresent(strChanSend);
     return hr;
   }

   posScope_current = posScope_16bit;
   negScope_current = negScope_16bit;
   wfmSizeMin = DIGITAL_PATTERN_SIZE_MIN;

   // Make sure the number of points provided is less than the maximum memory size
   SAFEARRAY* psa = *Data;

   cnt = psa->rgsabound->cElements;  //getting size of array

   //Getting lower bound of array
   lBoundArray = psa->rgsabound->lLbound;

   if (lBoundArray != 0)
   {
      hr = err.LboundArrayZero(_T(""));
      return hr;
   }

   if ((cnt< wfmSizeMin) || (cnt > m_MemorySize) || (cnt%m_WfmQuantum))
   {
      hr = ReportInvalidValueError(_T("Create"), _T("Data"), _T("Num data points"));
      return hr;
   }

   //Before define segment checking format data is Separate or Common
   //If mode is Separate, sending to the firmware command: :TRAC:DEF cnt*2
   //If mode is Common, sending to the firmware command: :TRAC:DEF cnt
   //Creating handle for arbitrary and saving cnt*2
     hr = WX218x::IWX218xDigitalPatternOutput_get_FormatData(Channel, &dataFormatEnum);
     if (dataFormatEnum == WX218xDigFormatDataCommon)
        dataFormat = 1;  //Common data format
     else
        dataFormat = 0;  //Separate data format

   //NEW 28.10.2012
   //Checking in array for Arbitrary memory if already was download in this segment (Arbitrary memory)
   segSizeArb = m_waveformManager.m_ArrayArbSeg[indexChan-1][Segment-1];
   if (segSizeArb != 0 && segSizeArb != cnt*2) //in arbitrary memory in this segment was already something download
   {
     strFormatSegNum.Format(_T("(%d)"), Segment);
     strFormatSegSize.Format(_T("(%d)"), segSizeArb/2);
     strFormatSegSize2.Format(_T("(%d)"), segSizeArb);
     hr = err.SegsizeDigNotequal(strFormatSegNum, strFormatSegSize2, strFormatSegSize);
     return hr; 
    
   }//end if,in arbitrary memory in this segment was already something download 

   //Before download digital data in to the digital memory checking in array Digital if already something was 
   //download in this segment
   segSizeDig = m_digitalManager.m_ArrayDigSeg[indexChan-1][Segment-1];
   if(segSizeDig == cnt)
   {
       //User want download data in to the segment that already was another data with the same size
      //We don't need to update available size
      flagUpdate = 0;
   }

   else if(segSizeDig != cnt && segSizeDig !=0)
   {
      //In this segment was already download another data with another size
      strFormatSegNum.Format(_T("(%d)"), Segment);
      strFormatSegSize.Format(_T("(%d)"), segSizeDig);
      hr = err.SegmentNotEmpty(strFormatSegSize, strFormatSegNum);
      return hr; 
   }

   double* pvData = (double*) psa->pvData;
   double checkPoint;

   unsigned short* pBlock = new unsigned short[cnt];
   unsigned short point;

   for (ii=lBoundArray; ii<cnt; ii++)
   {
      checkPoint = *(pvData+ii);

      //Checking that every element in pvData must be between -1 to +1
      if (checkPoint < -1.0 || checkPoint > 1.0) //invalid value in waveform data
      {
         strCommand.Format(_T("Element number %d = %.3Lf"), ii, checkPoint);
         hr = ReportInvalidValueError(_T("Create"), _T("Data"), strCommand);

         delete [] pBlock;
         return hr;
      }//end if,invalid value in waveform data 

      point = posScope_current + (unsigned short)(negScope_current * checkPoint);
      pBlock[ii] = point;
   }

   //Temporary for check
   if (GetSimulate())  //temporary close for offline
   {
      delete [] pBlock;
      return hr;
   }

   //Setting Active Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   
     if (dataFormat == 0)  //Separate data format
     {
       strCommand.Format(_T(":TRAC:DEF %d,%d"), Segment, cnt*2);
       hr = io.Printf(strCommand);  //temporary close for offline

     }//end if, Separate data format

     else //Common data format
     {
       strCommand.Format(_T(":TRAC:DEF %d,%d"), Segment, cnt);
       hr = io.Printf(strCommand);  //temporary close for offline
     }//end else, Common data format

     //Set active segment
     strCommand.Format(_T(":TRAC:SEL %d"), Segment);
     hr = io.Printf(strCommand);  //temporary close for offline

   switch (interfaceType)
   {
    case VI_INTF_GPIB:
      len = strSystErr.GetLength();
      WX218x::strtobyte(bufHeader, sizeof(bufHeader), strSystErr);
      hr = io.Write(bufHeader, len);
     
      do
      {
       hr = io.ReadStatusByte(&statusByte);
      } while (( (statusByte & 0x10) != 0x10) && (stbLoops++ < GPIB_STB) );  //18.01.2011 changing by Ronen

      hr = io.Read (bufRead, (long)sizeof(bufRead), &bActual);

      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":SOUR:DIG:DATA #", 2*cnt, bufHeader, sizeof (bufHeader));
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*cnt);  //temporary close for offline
      break;

   case VI_INTF_ASRL:
   case VI_INTF_USB:
      /* convert a UNCODE to BYTE array */
      WX218x::makeHeader (":SOUR:DIG:DATA #", 2*cnt, bufHeader, sizeof (bufHeader));
      hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
      hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

      hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*cnt);  //temporary close for offline
      hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
      break;

    default:  //TCPIP
      /* convert a UNCODE to BYTE array */
       WX218x::makeHeader (":SOUR:DIG:DATA #", 2*cnt, bufHeader, sizeof (bufHeader));
       hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
      // Send a header and data of binary block
       hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));   //temporary close for offline

       hr = WX218x::writeBinaryBlock ((BYTE*)pBlock, 2*cnt);  //temporary close for offline
       hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

   }//end switch interfaceType 

   //NEW 28.10.2012
   //Saving in array digital size of this segment
   m_digitalManager.m_ArrayDigSeg[indexChan-1][Segment-1] = cnt;

    //Updating waveform size available for digital memory
   //Doing this only if download was another segment size
   if (flagUpdate)
   {
     sizeAvDig = m_SizeAvailableDigital[indexChan-1] - cnt;  
     m_SizeAvailableDigital[indexChan-1] = sizeAvDig; 
   }

   delete [] pBlock;

   return hr;
}

//===================================================================================================================
//                                    - ConfigureDigPattDigPort -
HRESULT WX218x::IWX218xDigitalPatternOutput_ConfigureDigPattDigPort(WX218xDigPortEnum DigPort)
{
	HRESULT hr = S_OK;

    hr = _IWX218xDigitalPatternOutput::put_DigPort(DigPort);

	return hr;
}






