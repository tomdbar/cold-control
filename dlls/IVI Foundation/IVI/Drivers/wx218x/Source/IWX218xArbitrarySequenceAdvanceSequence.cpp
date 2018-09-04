/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

#pragma warning(disable : 4996)

/* Mode */
HRESULT WX218x::IWX218xArbitrarySequenceAdvanceSequence_get_Mode(BSTR Channel, WX218xAdvanceSequenceModeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ASEQ:ADV?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("AUTO")))
      *val = WX218xAdvanceSequenceModeAuto;

   else if (!strResponse.CompareNoCase(_T("ONCE")))
      *val = WX218xAdvanceSequenceModeOnce;

   else if (!strResponse.CompareNoCase(_T("STEP")))
      *val = WX218xAdvanceSequenceModeStep;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequenceAdvanceSequence_put_Mode(BSTR Channel, WX218xAdvanceSequenceModeEnum val)
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
   case WX218xAdvanceSequenceModeAuto:
      strCommand = _T(":ASEQ:ADV AUTO");
      break;

   case WX218xAdvanceSequenceModeOnce:
      strCommand = _T(":ASEQ:ADV ONCE");
      break;

   case WX218xAdvanceSequenceModeStep:
      strCommand = _T(":ASEQ:ADV STEP");
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

/* SyncLock */
HRESULT WX218x::IWX218xArbitrarySequenceAdvanceSequence_SyncLock_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
   HRESULT hr = S_OK;

   if (val < ASEQ_STEP_MIN || val > ASEQ_STEP_MAX) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequenceAdvanceSequence_get_SyncLock(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ASEQ:SYNC:LOCK?")); 
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequenceAdvanceSequence_put_SyncLock(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":ASEQ:SYNC:LOCK %d")), val); 
   hr = io.Printf(strCommandSend);

   return hr;
}

//============================================================================================================
//                                          - CreateAdvSequence1 -
HRESULT WX218x::IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence1(SAFEARRAY** SeqHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag)
{
	HRESULT hr = S_OK;
   long sizeSeqHandle, sizeLoopCount, lBoundHandle, lBoundLoop, lBoundJump, indexArray, valueArray, sizeJumpFlag, uBoundHandle, uBoundLoop, uBoundJump;
   long valueArrayHandle, valueArrayLoopCount, seqIndex;
   //unsigned char valueArrayJumpFlag;
   long valueArrayJumpFlag;
   int stepNum = 1;
   int aseqLoopMax;
   CString strActiveChannel, strChanSend, strFormatHandle, strFormatChannel;
   CString strFormatValue, strFormatElement, strFormatParameter, strCommand;
   SAFEARRAY* psaHandle = *SeqHandle;
   SAFEARRAY* psaLoopCount = *LoopCount;
   SAFEARRAY* psaJumpFlag = *JumpFlag;
   CString strModel;
   int modelNumber;

   if (GetSimulate()) //temporary close for offline
      return hr;

   strModel = GetModel();
   if (!strModel.CompareNoCase(_T("WX2181")) || !strModel.CompareNoCase(_T("WX2182")))
      aseqLoopMax = ASEQ_LOOP_MAX;

   else
      aseqLoopMax = ASEQ_LOOP_MAX_B;

   sizeSeqHandle = psaHandle->rgsabound->cElements;
   sizeLoopCount = psaLoopCount->rgsabound->cElements;
   sizeJumpFlag = psaJumpFlag->rgsabound->cElements;

   if ((sizeSeqHandle< COUNT_ASEQ_STEP_MIN) || (sizeSeqHandle > ASEQ_STEP_MAX))
   {
      hr = ReportInvalidValueError(_T("CreateAdvSequence"), _T("SeqHandle"), _T("Size of SeqHandle array"));
      return hr;
   }

   if ((sizeLoopCount< COUNT_ASEQ_STEP_MIN) || (sizeLoopCount > ASEQ_STEP_MAX))
   {
      hr = ReportInvalidValueError(_T("CreateAdvSequence"), _T("LoopCount"), _T("Size of Loop Count array"));
      return hr;
   }

   if ((sizeJumpFlag< COUNT_ASEQ_STEP_MIN) || (sizeJumpFlag > ASEQ_STEP_MAX))
   {
      hr = ReportInvalidValueError(_T("CreateAdvSequence"), _T("JumpFlag"), _T("Size of JumpFlag array"));
      return hr;
   }

   //Make sure that size of SeqHandle is equal to LoopCount
   if ((sizeSeqHandle != sizeLoopCount) && (sizeSeqHandle != sizeJumpFlag && (sizeJumpFlag != sizeLoopCount)))
   {
      hr = err.HandleLoopJumpNotEqual(_T(""));
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundHandle = psaHandle->rgsabound->lLbound;
   lBoundLoop = psaLoopCount->rgsabound->lLbound;
   lBoundJump = psaJumpFlag->rgsabound->lLbound;

   //Checking if lower bound of arrays is zero
   if ((lBoundHandle != 0) || (lBoundLoop != 0) || (lBoundJump != 0))
   {
      hr = err.LboundArrayZero(_T(""));
      return hr;
   }

   //Make sure that lBound is the same value
   if ((lBoundHandle != lBoundLoop) && (lBoundHandle != lBoundJump && (lBoundJump != lBoundLoop)))
   {
      hr = err.LboundArrayEqual(_T(""));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaHandle, 1, &uBoundHandle);
   hr = ::SafeArrayGetUBound(psaLoopCount, 1, &uBoundLoop);
   hr = ::SafeArrayGetUBound(psaJumpFlag, 1, &uBoundJump);

   //Make sure that uBound is the same value
   if ((uBoundHandle != uBoundLoop) && (uBoundHandle != uBoundJump && (uBoundJump != uBoundLoop)))
   {
      hr = err.UboundArrayEqual(_T(""));
      return hr;
   }

   //Getting Active Channel
   strActiveChannel = m_strCurrentChannel;

   //Getting channel send
   strChanSend = WX218x::ReturnChannelSend(strActiveChannel);

    //Checking model number
   modelNumber = FuncReturnModelNumber();

   //Accesing every element in array SeqHandle
   for (indexArray = lBoundHandle; indexArray < sizeSeqHandle; indexArray++)  //Loop for WfmHandle array
   {
      hr = SafeArrayGetElement(psaHandle, &indexArray, &valueArray);
      //Checking if this Sequence handle exist
      if (m_sequenceManager.HandleExists(valueArray)) //Sequence Handle exist
      {
         if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C) //it is not WX2184
         {
           //Check correct Handle and Channel
           hr = m_sequenceManager.CheckCorrectHandleChannel(strChanSend, valueArray);
         }//end if,it is not WX2184

         else //it is WX2184
         {
          //Check correct Handle and Channel
           hr = m_sequenceManager.CheckCorrectHandleChannel4Ch(strChanSend, valueArray);
         }//end else,it is WX2184

         if (!SUCCEEDED(hr))
         {
            strFormatHandle.Format(_T("(%d)"), valueArray);
            strFormatChannel.Format(_T("(%s)"),strChanSend);
            hr = err.HandleChannelNotExist(strFormatHandle,strFormatChannel);
            return hr;
         }

      }//end if,Sequence Handle exist

      else //Handle not exist
      {
         hr = ReportInvalidValueError(_T("CreateAdvSequence"), _T("SeqHandle"), valueArray);
         return hr;
      }//end else, Handle not exist

   }//end for, Loop for SeqHandle array

   //Accesing every element in array LoopCount
   for (indexArray = lBoundLoop; indexArray < sizeLoopCount; indexArray++)  //Loop for LoopCount array
   {
      hr = SafeArrayGetElement(psaLoopCount, &indexArray, &valueArray);
      //Checking Loop count range
      if (valueArray < ASEQ_LOOP_MIN || valueArray > aseqLoopMax)
      {
         strFormatValue.Format(_T("(%d)"), valueArray);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("LoopCount"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for LoopCount array

   //Accesing every element in array JumpFlag
   for (indexArray = lBoundJump; indexArray < sizeJumpFlag; indexArray++)  //Loop for JumpFlag array
   {
      hr = SafeArrayGetElement(psaJumpFlag, &indexArray, &valueArray);
      //Checking Loop count range
      if (valueArray < SEQ_JUMP_FLAG_MIN || valueArray > SEQ_JUMP_FLAG_MAX)
      {
          strFormatValue.Format(_T("(%d)"), valueArray);
          strFormatElement.Format(_T("(%d)"), indexArray);
          strFormatParameter.Format(_T("(%s)"), _T("JumpFlag"));
          hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
          return hr;
         
      }

   }//end for, Loop for JumpFlag array

   stepNum = 1;
   for (indexArray = lBoundHandle; indexArray < sizeSeqHandle; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaHandle, &indexArray, &valueArrayHandle);
      hr = SafeArrayGetElement(psaLoopCount, &indexArray, &valueArrayLoopCount);
      hr = SafeArrayGetElement(psaJumpFlag, &indexArray, &valueArrayJumpFlag);

      //Getting seqIndex from valueArrayHandle
      seqIndex = m_sequenceManager.GetSeqIndexFromHandle(valueArrayHandle);

      strCommand.Format(_T(":ASEQ:DEF %d,%d,%d,%d"), stepNum, seqIndex, valueArrayLoopCount, valueArrayJumpFlag);

      hr = io.Printf(strCommand);  //temporary close for offline

      stepNum++;

   }//end for,access elements in all arrays

   return hr;
}

/* DeleteAdvSequence */
HRESULT WX218x::IWX218xArbitrarySequenceAdvanceSequence_DeleteAdvSequence()
{
   HRESULT hr = S_OK;

   if (GetSimulate()) //temporary close for offline
      return hr;

   hr = io.Printf(_T(":ASEQ:DEL"));  //temporary close for offline

   return hr;
}

/* CreateAdvSequence */
HRESULT WX218x::IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence(SAFEARRAY** SeqHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag)
{
   HRESULT hr = S_OK;
   long sizeSeqHandle, sizeLoopCount, lBoundHandle, lBoundLoop, lBoundJump, indexArray, valueArray, sizeJumpFlag, uBoundHandle, uBoundLoop, uBoundJump;
   long valueArrayHandle, valueArrayLoopCount, seqIndex;
   unsigned char valueArrayJumpFlag;
   int stepNum = 1;
   int aseqLoopMax;
   CString strActiveChannel, strChanSend, strFormatHandle, strFormatChannel;
   CString strFormatValue, strFormatElement, strFormatParameter, strCommand;
   SAFEARRAY* psaHandle = *SeqHandle;
   SAFEARRAY* psaLoopCount = *LoopCount;
   SAFEARRAY* psaJumpFlag = *JumpFlag;
   CString strModel;
   int modelNumber;

   if (GetSimulate()) //temporary close for offline
      return hr;

   strModel = GetModel();
   if (!strModel.CompareNoCase(_T("WX2181")) || !strModel.CompareNoCase(_T("WX2182")))
      aseqLoopMax = ASEQ_LOOP_MAX;

   else
      aseqLoopMax = ASEQ_LOOP_MAX_B;

   sizeSeqHandle = psaHandle->rgsabound->cElements;
   sizeLoopCount = psaLoopCount->rgsabound->cElements;
   sizeJumpFlag = psaJumpFlag->rgsabound->cElements;

   if ((sizeSeqHandle< COUNT_ASEQ_STEP_MIN) || (sizeSeqHandle > ASEQ_STEP_MAX))
   {
      hr = ReportInvalidValueError(_T("CreateAdvSequence"), _T("SeqHandle"), _T("Size of SeqHandle array"));
      return hr;
   }

   if ((sizeLoopCount< COUNT_ASEQ_STEP_MIN) || (sizeLoopCount > ASEQ_STEP_MAX))
   {
      hr = ReportInvalidValueError(_T("CreateAdvSequence"), _T("LoopCount"), _T("Size of Loop Count array"));
      return hr;
   }

   if ((sizeJumpFlag< COUNT_ASEQ_STEP_MIN) || (sizeJumpFlag > ASEQ_STEP_MAX))
   {
      hr = ReportInvalidValueError(_T("CreateAdvSequence"), _T("JumpFlag"), _T("Size of JumpFlag array"));
      return hr;
   }

   //Make sure that size of SeqHandle is equal to LoopCount
   if ((sizeSeqHandle != sizeLoopCount) && (sizeSeqHandle != sizeJumpFlag && (sizeJumpFlag != sizeLoopCount)))
   {
      hr = err.HandleLoopJumpNotEqual(_T(""));
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundHandle = psaHandle->rgsabound->lLbound;
   lBoundLoop = psaLoopCount->rgsabound->lLbound;
   lBoundJump = psaJumpFlag->rgsabound->lLbound;

   //Checking if lower bound of arrays is zero
   if ((lBoundHandle != 0) || (lBoundLoop != 0) || (lBoundJump != 0))
   {
      hr = err.LboundArrayZero(_T(""));
      return hr;
   }

   //Make sure that lBound is the same value
   if ((lBoundHandle != lBoundLoop) && (lBoundHandle != lBoundJump && (lBoundJump != lBoundLoop)))
   {
      hr = err.LboundArrayEqual(_T(""));
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaHandle, 1, &uBoundHandle);
   hr = ::SafeArrayGetUBound(psaLoopCount, 1, &uBoundLoop);
   hr = ::SafeArrayGetUBound(psaJumpFlag, 1, &uBoundJump);

   //Make sure that uBound is the same value
   if ((uBoundHandle != uBoundLoop) && (uBoundHandle != uBoundJump && (uBoundJump != uBoundLoop)))
   {
      hr = err.UboundArrayEqual(_T(""));
      return hr;
   }

   //Getting Active Channel
   strActiveChannel = m_strCurrentChannel;

   //Getting channel send
   strChanSend = WX218x::ReturnChannelSend(strActiveChannel);

    //Checking model number
   modelNumber = FuncReturnModelNumber();

   //Accesing every element in array SeqHandle
   for (indexArray = lBoundHandle; indexArray < sizeSeqHandle; indexArray++)  //Loop for WfmHandle array
   {
      hr = SafeArrayGetElement(psaHandle, &indexArray, &valueArray);
      //Checking if this Sequence handle exist
      if (m_sequenceManager.HandleExists(valueArray)) //Sequence Handle exist
      {
         if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C) //it is not WX2184
         {
           //Check correct Handle and Channel
           hr = m_sequenceManager.CheckCorrectHandleChannel(strChanSend, valueArray);
         }//end if,it is not WX2184

         else //it is WX2184
         {
          //Check correct Handle and Channel
           hr = m_sequenceManager.CheckCorrectHandleChannel4Ch(strChanSend, valueArray);
         }//end else,it is WX2184

         if (!SUCCEEDED(hr))
         {
            strFormatHandle.Format(_T("(%d)"), valueArray);
            strFormatChannel.Format(_T("(%s)"),strChanSend);
            hr = err.HandleChannelNotExist(strFormatHandle,strFormatChannel);
            return hr;
         }

      }//end if,Sequence Handle exist

      else //Handle not exist
      {
         hr = ReportInvalidValueError(_T("CreateAdvSequence"), _T("SeqHandle"), valueArray);
         return hr;
      }//end else, Handle not exist

   }//end for, Loop for SeqHandle array

   //Accesing every element in array LoopCount
   for (indexArray = lBoundLoop; indexArray < sizeLoopCount; indexArray++)  //Loop for LoopCount array
   {
      hr = SafeArrayGetElement(psaLoopCount, &indexArray, &valueArray);
      //Checking Loop count range
      if (valueArray < ASEQ_LOOP_MIN || valueArray > aseqLoopMax)
      {
         strFormatValue.Format(_T("(%d)"), valueArray);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("LoopCount"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         return hr;
      }

   }//end for, Loop for LoopCount array

   //Accesing every element in array JumpFlag
   for (indexArray = lBoundJump; indexArray < sizeJumpFlag; indexArray++)  //Loop for JumpFlag array
   {
      hr = SafeArrayGetElement(psaJumpFlag, &indexArray, &valueArray);
      //Checking Loop count range
      if (valueArray < SEQ_JUMP_FLAG_MIN || valueArray > SEQ_JUMP_FLAG_MAX)
      {
         //NEW 27.11.2013 add by Ira
         //Doing this for LabView wrapper
         if (valueArray == 49)
          valueArray = 1;
         else if (valueArray == 48)
          valueArray = 0;

         else
         {
          strFormatValue.Format(_T("(%d)"), valueArray);
          strFormatElement.Format(_T("(%d)"), indexArray);
          strFormatParameter.Format(_T("(%s)"), _T("JumpFlag"));
          hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
          return hr;
         }
      }

   }//end for, Loop for JumpFlag array

   stepNum = 1;
   for (indexArray = lBoundHandle; indexArray < sizeSeqHandle; indexArray++) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaHandle, &indexArray, &valueArrayHandle);
      hr = SafeArrayGetElement(psaLoopCount, &indexArray, &valueArrayLoopCount);
      hr = SafeArrayGetElement(psaJumpFlag, &indexArray, &valueArrayJumpFlag);

      //Getting seqIndex from valueArrayHandle
      seqIndex = m_sequenceManager.GetSeqIndexFromHandle(valueArrayHandle);

      //NEW 27.11.2013 add by Ira
      //Doing this for LabView Wrapper
      if (valueArrayJumpFlag == 49)
       valueArrayJumpFlag = 1;

      if (valueArrayJumpFlag == 48)
       valueArrayJumpFlag = 0;

      strCommand.Format(_T(":ASEQ:DEF %d,%d,%d,%d"), stepNum, seqIndex, valueArrayLoopCount, valueArrayJumpFlag);

      hr = io.Printf(strCommand);  //temporary close for offline

      stepNum++;

   }//end for,access elements in all arrays

   return hr;
}

//=========================================================================================================================
//                                         - Once Count -
HRESULT WX218x::IWX218xArbitrarySequenceAdvanceSequence_get_OnceCount(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":ASEQ:ONC:COUN?")); 
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequenceAdvanceSequence_put_OnceCount(BSTR Channel, long val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;

   //Checking range values
    if (val < ASEQ_ONCE_COUNT_MIN || val > ASEQ_ONCE_COUNT_MAX)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":ASEQ:ONC:COUN %d")), val); 

   hr = io.Printf(strCommandSend);

   return hr;
}

//=====================================================================================================
//                                        - ConfigureOnceCount -
HRESULT WX218x::IWX218xArbitrarySequenceAdvanceSequence_ConfigureOnceCount(BSTR Channel, long Count)
{
	HRESULT hr = S_OK;

	hr = _IWX218xArbitrarySequenceAdvanceSequence::put_OnceCount(Channel, Count);

	return hr;
}
