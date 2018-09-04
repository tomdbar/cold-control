/******************************************************************************
*                                                                         
*               Copyright 2010 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

#pragma warning(disable : 4996)

/* Clear */
HRESULT WX218x::IWX218xArbitrarySequence_Clear(long Handle)
{
   HRESULT hr = S_OK;
   string strSeqName;
   CString strChannel, strCommandSend, strChanSend;
   long indexHandle, seqHandleOpposite;
   CString strActiveChannel;
   int indexChan, indexChanOpposite;
   int modelNumber;

   if (GetSimulate())  //temporary close for offline
      return hr;

    //Checking model number
   modelNumber = FuncReturnModelNumber();

   //Checking if user want to delete all sequences
   if (Handle == SEQ_ALL)  //user want to delete all sequences
   {
      hr = io.Printf(_T(":SEQ:DEL:ALL")); //temporary close for offline
      if(SUCCEEDED(hr))
      {
         //Getting Active Channel
         strActiveChannel = m_strCurrentChannel;

         //Getting index of Active Channel
         indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

         //Cleaning sequence map for selected channel
         m_sequenceManager.CleanSequenceMap(indexChan);

         //NEW 29.10.2013
         //Doing this only for WX2184
         if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
         {
           //Getting index of Opposite Channel
           indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel);

         //Cleaning sequence map for opposite channel
         m_sequenceManager.CleanSequenceMap(indexChanOpposite);
         }//end if, it is WX2184
      }

   }//end if, user want to delete all sequences

   else  //user want to delete only one sequence
   {
      if (m_sequenceManager.HandleExists(Handle)) //Handle exist
      {
         //m_sequenceManager.GetSequenceName(Handle, strSeqName); //close becouse there is no sequence names

         //Getting Channel by Handle
         hr = m_sequenceManager.GetChannelByHandle(Handle, strChannel);

         strChanSend = WX218x::ReturnChannelSend(strChannel);

         //Getting index of Handle
         indexHandle = m_sequenceManager.GetSeqIndexFromHandle(Handle);

         strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SEQ:DEL %d")), indexHandle);
         hr = io.Printf(strCommandSend); //close for offline

         if(SUCCEEDED(hr))
         {
            //Deleting Handle from map
            m_sequenceManager.DeleteHandle(Handle);

            //NEW 29.10.2013
            //Doing this only for WX2184
            if(modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184
            {
              //Getting sequence handle for opposite channel
               seqHandleOpposite = m_sequenceManager.GetOppositeSeqHandle(Handle);
               m_sequenceManager.DeleteHandle(seqHandleOpposite);

            }//end if,it is WX2184
         }

      }//end if, Handle exist

      else  //Handle not exist
      {
         hr = ReportInvalidValueError(_T("Clear"), _T("Handle"), Handle); 
         return hr;
      }//end else, Handle not exist

   }//end else, user want to delete only one sequence 

   return hr;
}

/* Configure */
HRESULT WX218x::IWX218xArbitrarySequence_Configure(BSTR Channel, long Handle, double Gain, double Offset)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend, strFormatHandle, strFormatChannel;
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

   //Checking if Handle exist
   if (m_sequenceManager.HandleExists(Handle)) //Sequence Handle exist
   {
      //Getting sequence name from handle
      string strSeqName;
      m_sequenceManager.GetSequenceName(Handle, strSeqName); //close becouse there is no sequence names

      //NEW 29.10.2013
      if (modelNumber != MNM_WX2184 && modelNumber != MNM_WX1284 && modelNumber != MNM_WX2184C && modelNumber != MNM_WX1284C) //it is not WX2184 and not WX1284
      {
        hr = m_sequenceManager.CheckCorrectHandleChannel(strChanSend, Handle);
      }
      else //it is WX2184
      {
        hr = m_sequenceManager.CheckCorrectHandleChannel4Ch(strChanSend, Handle);
      }//end else, it is WX2184

      if(!SUCCEEDED(hr))
      {
        strFormatHandle.Format(_T("(%d)"), Handle);
        strFormatChannel.Format(_T("(%s)"),strChanSend);
        hr = err.HandleChannelNotExist(strFormatHandle,strFormatChannel);
        return hr;
      }
     
      //Getting index of sequence Handle
      indexHandle = m_sequenceManager.GetSeqIndexFromHandle(Handle);

      strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SEQ:SEL %d")), indexHandle);
      hr = io.Printf(strCommandSend); //temporary close for offline
      if(SUCCEEDED(hr))
      {
         hr = _IWX218xArbitrary::put_Gain(Channel, Gain);
         hr = _IWX218xArbitrary::put_Offset(Channel, Offset);
      }

   }//end if, Sequence Handle exist

   else //Sequence Handle not exist
   {
      hr = ReportInvalidValueError(_T("Configure"), _T("Handle"), Handle);
      return hr;
   }//end else,Sequence Handle not exist 

   return hr;
}

/* Create */
HRESULT WX218x::IWX218xArbitrarySequence_Create(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, long* val)
{
   HRESULT hr = S_OK;
   long sizeWfmHandle, sizeLoopCount, lBoundHandle, lBoundLoop;
   SAFEARRAY* psaHandle = *WfmHandle;
   SAFEARRAY* psaLoopCount = *LoopCount;
   signed char data;
   CString strModel;
   long seqStepMax;

   if (GetSimulate())  //temporary close for offline
   {
      *val = 1;    //Sequence Handle = 1 for offline
      return hr;
   }

   strModel = GetModel();
   if (!strModel.CompareNoCase(_T("WX2181")) || !strModel.CompareNoCase(_T("WX2181")))
      seqStepMax = SEQ_STEP_MAX;
   else
      seqStepMax = SEQ_STEP_MAX_B;

   //Getting size of WfmHandle array and LoopCount array
   sizeWfmHandle = psaHandle->rgsabound->cElements;
   sizeLoopCount = psaLoopCount->rgsabound->cElements;

   if ((sizeWfmHandle< COUNT_SEQ_STEP_MIN) || (sizeWfmHandle > seqStepMax))
   {
      hr = ReportInvalidValueError(_T("Create"), _T("WfmHandle"), _T("Size of WfmHandle array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   if ((sizeLoopCount< COUNT_SEQ_STEP_MIN) || (sizeLoopCount > seqStepMax))
   {
      hr = ReportInvalidValueError(_T("Create"), _T("LoopCount"), _T("Size of Loop Count array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   //Make sure that size of WfmHandle is equal to LoopCount
   if (sizeWfmHandle != sizeLoopCount)
   {
      hr = err.HandleLoopNotEqual(_T(""));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   SAFEARRAY *psaJumpFlag = ::SafeArrayCreateVector(VT_UI1, 0, sizeWfmHandle);

   if (psaJumpFlag != NULL)
   {
      for (long lIndex = 0; lIndex < sizeWfmHandle; lIndex ++)
      {
         data = 0;
         hr = ::SafeArrayPutElement(psaJumpFlag, &lIndex, (void*)&data);
         if (FAILED(hr))
            break;
      }//end for
   }//end if, psaJumpFlag != NULL 

   //Checking the lower bound of the dimension
   lBoundHandle = psaHandle->rgsabound->lLbound;
   lBoundLoop = psaLoopCount->rgsabound->lLbound;

   hr = _IWX218xArbitrarySequence::CreateSequenceAdv(WfmHandle, LoopCount, &psaJumpFlag,val);

   ::SafeArrayDestroy(psaJumpFlag);

   return hr;
}

/* LengthMax */
HRESULT WX218x::IWX218xArbitrarySequence_get_LengthMax(long* val)
{
   HRESULT hr = S_OK;
   CString strModel;

   strModel = GetModel();
   if (!strModel.CompareNoCase(_T("WX2181")) || !strModel.CompareNoCase(_T("WX2182"))) 
     *val = SEQ_STEP_MAX;

   else
    *val = SEQ_STEP_MAX_B;

   return hr;
}

/* LengthMin */
HRESULT WX218x::IWX218xArbitrarySequence_get_LengthMin(long* val)
{
   HRESULT hr = S_OK;

   *val = COUNT_SEQ_STEP_MIN;

   return hr;
}

/* LoopCountMax */
HRESULT WX218x::IWX218xArbitrarySequence_get_LoopCountMax(long* val)
{
   HRESULT hr = S_OK;
   CString strModel;

   strModel = GetModel();
   if (!strModel.CompareNoCase(_T("WX2181")) || !strModel.CompareNoCase(_T("WX2182")))
    *val = SEQ_LOOP_MAX;

   else
    *val = SEQ_LOOP_MAX_B;

   return hr;
}

/* NumberSequenceMax */
HRESULT WX218x::IWX218xArbitrarySequence_get_NumberSequenceMax(long* val)
{
   HRESULT hr = S_OK;

   *val = SEQ_NUMBER_SEQUENCE_MAX; 

   return hr;
}

/* AdvanceMode */
HRESULT WX218x::IWX218xArbitrarySequence_get_AdvanceMode(BSTR Channel, WX218xSequenceAdvanceModeEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SEQ:ADV?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("AUTO")))
      *val = WX218xSequenceAdvanceModeAuto;

   else if (!strResponse.CompareNoCase(_T("ONCE")))
      *val = WX218xSequenceAdvanceModeOnce;

   else if (!strResponse.CompareNoCase(_T("STEP")))
      *val = WX218xSequenceAdvanceModeStep;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequence_put_AdvanceMode(BSTR Channel, WX218xSequenceAdvanceModeEnum val)
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
   case WX218xSequenceAdvanceModeAuto:
      strCommand = _T(":SEQ:ADV AUTO");
      break;

   case WX218xSequenceAdvanceModeOnce:
      strCommand = _T(":SEQ:ADV ONCE");
      break;

   case WX218xSequenceAdvanceModeStep:
      strCommand = _T(":SEQ:ADV STEP");
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


/* AdvanceSequence */
HRESULT WX218x::IWX218xArbitrarySequence_get_AdvanceSequence(IWX218xArbitrarySequenceAdvanceSequence** val)
{
   HRESULT hr = S_OK;

   hr = InternalQueryInterface(this, _GetEntries(), __uuidof(*val), reinterpret_cast<void**>(val));

   return hr;
}

/* QuickSequence */
HRESULT WX218x::IWX218xArbitrarySequence_QuickSequence_RangeCheck(LPCTSTR pszPropertyName, long val)
{
	HRESULT hr = S_OK;

   if (val < 0 || val > 1) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequence_get_QuickSequence(long* val)
{
	HRESULT hr = S_OK;

	*val = m_IsQuickSeq;

	return hr;
}

HRESULT WX218x::IWX218xArbitrarySequence_put_QuickSequence(long val)
{
	HRESULT hr = S_OK;

	m_IsQuickSeq = val; 

	return hr;
}

                                     /* - Prestep */
HRESULT WX218x::IWX218xArbitrarySequence_get_Prestep(BSTR Channel, WX218xSequencePrestepEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SEQ:PRES?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("WAVE")))
      *val = WX218xSequencePrestepWave;

   else if (!strResponse.CompareNoCase(_T("DC")))
      *val = WX218xSequencePrestepDC;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequence_put_Prestep(BSTR Channel, WX218xSequencePrestepEnum val)
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
   case WX218xSequencePrestepWave:
      strCommand = _T(":SEQ:PRES WAVE");
      break;

   case WX218xSequencePrestepDC:
      strCommand = _T(":SEQ:PRES DC");
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

//========================================================================================================
//                             - ConfigureSeqTiming -
HRESULT WX218x::IWX218xArbitrarySequence_ConfigureSeqTiming(BSTR Channel, WX218xSequenceTimingEnum Timing)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::put_Timing(Channel, Timing);

	return hr;
}

//======================================================================================================
//                                       - ConfigureSeqSyncLock -
HRESULT WX218x::IWX218xArbitrarySequence_ConfigureSeqSyncLock(BSTR Channel, long SyncLock)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::put_SyncLock(Channel, SyncLock);

	return hr;
}

//======================================================================================================
//                                        - ConfigureSeqSource -
HRESULT WX218x::IWX218xArbitrarySequence_ConfigureSeqSource(BSTR Channel, WX218xSequenceSourceEnum Source)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::put_Source(Channel, Source);

	return hr;
}

//=========================================================================================================
//                                     - ConfigureSeqPrestep -
HRESULT WX218x::IWX218xArbitrarySequence_ConfigureSeqPrestep(BSTR Channel, WX218xSequencePrestepEnum Prestep)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::put_Prestep(Channel, Prestep);

	return hr;
}

//============================================================================================================
//                                    - ConfigureSeqJumpEvent -
HRESULT WX218x::IWX218xArbitrarySequence_ConfigureSeqJumpEvent(BSTR Channel, WX218xSequenceJumpEventEnum JumpEvent)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::put_JumpEvent(Channel, JumpEvent);

	return hr;
}

//===========================================================================================================
//                             - ConfigureAdvanceMode - 
HRESULT WX218x::IWX218xArbitrarySequence_ConfigureAdvanceMode(BSTR Channel, WX218xSequenceAdvanceModeEnum AdvanceMode)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::put_AdvanceMode(Channel, AdvanceMode);

	return hr;
}

//=============================================================================================================
//                                          - CreateSequenceAdv1 - 
HRESULT WX218x::IWX218xArbitrarySequence_CreateSequenceAdv1(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag, long* val)
{
   //Different between this function and function "CreateSequenceAdv" is that current function
   //recieves array of JumpFlag as long and in another function this array is as byte
   //Doing this for Labview (were problems with array of bytes)
	HRESULT hr = S_OK;
   long sizeWfmHandle, sizeLoopCount, lBoundHandle, lBoundLoop, lBoundJump, indexArray, valueArray, sizeJumpFlag, uBoundHandle, uBoundLoop, uBoundJump;
   long seqCount, seqIndexName, wfmIndex, seqIndexNameOpposite;
   long valueArrayHandle, valueArrayLoopCount;
   //unsigned char valueArrayJumpFlag;
   long valueArrayJumpFlag; 
   int indexChan, stepNum = 1;
   CString strActiveChannel, strChanSend, strFormatHandle, strFormatChannel;
   CString strFormatValue, strFormatElement, strFormatParameter, strCommand, strSeqName, strWfmName;
   CString strSeqNameOpposite;
   string name, nameOpposite;
   string wfmName;
   char buff[512]="";
   SAFEARRAY* psaHandle = *WfmHandle;
   SAFEARRAY* psaLoopCount = *LoopCount;
   SAFEARRAY* psaJumpFlag = *JumpFlag;
   long lenSeqStruct, seqLengthByte;
   unsigned char* binData = VI_NULL;
   long dp = 0;
   char buffSegNum[23]="";
   BYTE bufHeader[256];
   CString strModel;
   long seqStepMax, seqLoopMax;
   int modelNumber, indexChanOpposite;
   long handleSeqOpposite;

   DWL_SEQ_TBL_INF *pSeq;

   //5.02.2012  Temporary close for checking something in Matlab
   if (GetSimulate()) //temporary close for offline
   {
      *val = 1;    //Sequence Handle = 1 for offline
      return hr;
   }

   strModel = GetModel();
   if (!strModel.CompareNoCase(_T("WX2181")) || !strModel.CompareNoCase(_T("WX2182")))
   {
      seqStepMax = SEQ_STEP_MAX;
      seqLoopMax = SEQ_LOOP_MAX;
   }

   else
   {
      seqStepMax = SEQ_STEP_MAX_B;
      seqLoopMax = SEQ_LOOP_MAX_B;
   }

   sizeWfmHandle = psaHandle->rgsabound->cElements;
   sizeLoopCount = psaLoopCount->rgsabound->cElements;
   sizeJumpFlag = psaJumpFlag->rgsabound->cElements;

   if ((sizeWfmHandle< COUNT_SEQ_STEP_MIN) || (sizeWfmHandle > seqStepMax))
   {
      hr = ReportInvalidValueError(_T("CreateSequenceAdv"), _T("WfmHandle"), _T("Size of WfmHandle array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   if ((sizeLoopCount< COUNT_SEQ_STEP_MIN) || (sizeLoopCount > seqStepMax))
   {
      hr = ReportInvalidValueError(_T("CreateSequenceAdv"), _T("LoopCount"), _T("Size of Loop Count array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   
   if ((sizeJumpFlag< COUNT_SEQ_STEP_MIN) || (sizeJumpFlag > seqStepMax))
   {
      hr = ReportInvalidValueError(_T("CreateSequenceAdv"), _T("JumpFlag"), _T("Size of JumpFlag array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   //Make sure that size of WfmHandle is equal to LoopCount
   if ((sizeWfmHandle != sizeLoopCount) && (sizeWfmHandle != sizeJumpFlag && (sizeJumpFlag != sizeLoopCount)))
   {
      hr = err.HandleLoopJumpNotEqual(_T(""));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundHandle = psaHandle->rgsabound->lLbound;
   lBoundLoop = psaLoopCount->rgsabound->lLbound;
   lBoundJump = psaJumpFlag->rgsabound->lLbound;

   //Checking if lower bound of Handle Array  is zero
   if (lBoundHandle != 0)
   {
      hr = err.LboundArrayZero(_T("Handle Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

    //Checking if lower bound of Loop Array  is zero
   if (lBoundLoop != 0)
   {
      hr = err.LboundArrayZero(_T("Loop Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

    //Checking if lower bound of Jump Array  is zero
   if (lBoundJump != 0)
   {
      hr = err.LboundArrayZero(_T("Jump Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   //Make sure that lBound is the same value
   if ((lBoundHandle != lBoundLoop) && (lBoundHandle != lBoundJump && (lBoundJump != lBoundLoop)))
   {
      hr = err.LboundArrayEqual(_T(""));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaHandle, 1, &uBoundHandle);
   hr = ::SafeArrayGetUBound(psaLoopCount, 1, &uBoundLoop);
   hr = ::SafeArrayGetUBound(psaJumpFlag, 1, &uBoundJump);


   //31.01.2012  Temporary close by Ira becouse in MATLAB doesn't work

   //Checking if upper bound of arrays is not zero
   if ((uBoundHandle == 0))
   {
      hr = err.UpperBoundZero(_T("Handle Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   if (uBoundLoop == 0)
   {
      hr = err.UpperBoundZero(_T("Loop Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   if (uBoundJump == 0)
   {
      hr = err.UpperBoundZero(_T("Jump Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   //Make sure that uBound is the same value
   if ((uBoundHandle != uBoundLoop) && (uBoundHandle != uBoundJump && (uBoundJump != uBoundLoop)))
   {
     hr = err.UboundArrayEqual(_T(""));
     *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
     return hr;
   }


   //5.02.2012  Temporary close for checking something in Matlab
   if (GetSimulate()) //temporary close for offline
   {
     *val = 1;    //Sequence Handle = 1 for offline
      return hr;
   }

   //NEW 29.10.2013  
   //Doing this for WX2184
    //Checking model number
   modelNumber = FuncReturnModelNumber();

   //Getting Active Channel
   strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

   //Getting channel send
   strChanSend = WX218x::ReturnChannelSend(strActiveChannel);

   seqCount = m_sequenceManager.m_SeqCount[indexChan-1];

   //Making sequence index name
   if (indexChan == 1)
      seqIndexName = VAL_FIRST_SEQUENCE_HANDLE_CHAN_A + seqCount;

   else if (indexChan == 2)//indexChan = 2
      seqIndexName = VAL_FIRST_SEQUENCE_HANDLE_CHAN_B + seqCount; 

   else if (indexChan == 3)//indexChan = 3
      seqIndexName = VAL_FIRST_SEQUENCE_HANDLE_CHAN_C + seqCount; 

   else //indexChan = 4
      seqIndexName = VAL_FIRST_SEQUENCE_HANDLE_CHAN_D + seqCount; 

   //NEW 29.10.2013
   //Doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)//it is WX2184
   {
      //Getting index of opposite channel and creating all that needs  for opposite channel
      indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel); 

      //Making sequence index name for opposite channel
      if (indexChanOpposite == 1)
       seqIndexNameOpposite = VAL_FIRST_SEQUENCE_HANDLE_CHAN_A + seqCount;

      else if (indexChanOpposite == 2)//indexChan = 2
       seqIndexNameOpposite = VAL_FIRST_SEQUENCE_HANDLE_CHAN_B + seqCount; 

      else if (indexChanOpposite == 3)//indexChan = 3
       seqIndexNameOpposite = VAL_FIRST_SEQUENCE_HANDLE_CHAN_C + seqCount; 

      else //indexChan = 4
       seqIndexNameOpposite = VAL_FIRST_SEQUENCE_HANDLE_CHAN_D + seqCount; 

   }//end if, it is WX2184

   //Accesing every element in array WfmHandle
   for (indexArray = lBoundHandle; indexArray < sizeWfmHandle; indexArray++)  //Loop for WfmHandle array
   {
      hr = SafeArrayGetElement(psaHandle, &indexArray, &valueArray);
      //Checking if this waveform handle exist
      if (m_waveformManager.HandleExists(valueArray)) //Waveform Handle exist
      {
         //Check correct Handle and Channel

         //NEW 29.10.2013
         if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184
         {
           hr = m_waveformManager.CheckCorrectHandleChannel4Ch(strChanSend, valueArray);
           if (!SUCCEEDED(hr))
           {
            strFormatHandle.Format(_T("(%d)"), valueArray);
            strFormatChannel.Format(_T("(%s)"),strChanSend);
            hr = err.HandleChannelNotExist(strFormatHandle,strFormatChannel);
            *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
            return hr;
           }

         }//end if, it is WX2184

         else //it is not WX2184
         {
           hr = m_waveformManager.CheckCorrectHandleChannel(strChanSend, valueArray);
           if (!SUCCEEDED(hr))
           {
            strFormatHandle.Format(_T("(%d)"), valueArray);
            strFormatChannel.Format(_T("(%s)"),strChanSend);
            hr = err.HandleChannelNotExist(strFormatHandle,strFormatChannel);
            *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
            return hr;
           }
          }//end else, it is not WX2184

      }//end if,Waveform Handle exist


      else //Handle not exist
      {
         hr = ReportInvalidValueError(_T("CreateSequenceAdv"), _T("WfmHandle"), valueArray);
         *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
         return hr;
      }//end else, Handle not exist


   }//end for, Loop for WfmHandle array

   //Accesing every element in array LoopCount
   for (indexArray = lBoundLoop; indexArray < sizeLoopCount; indexArray++)  //Loop for LoopCount array
   {
      hr = SafeArrayGetElement(psaLoopCount, &indexArray, &valueArray);
      //Checking Loop count range
      if (valueArray < SEQ_LOOP_MIN || valueArray > seqLoopMax)
      {
         strFormatValue.Format(_T("(%d)"), valueArray);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("LoopCount"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
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
         *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
         return hr;
      }

   }//end for, Loop for JumpFlag array

   m_sequenceManager.CreateSequenceName(name, seqIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strSeqName = buff;

   //NEW 29.10.2013
   //Doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
      //Creating sequence name for opposite channel
      m_sequenceManager.CreateSequenceName(nameOpposite, seqIndexNameOpposite);
      sprintf_s(buff, sizeof(buff), "%s", name.c_str());

      strSeqNameOpposite = buff;
   }

   //Open this command if is sequence number
   strCommand.Format(_T(":SEQ:SEL %d"), seqCount+1);

  hr = io.Printf(strCommand);  //temporary close for offline

   if (m_IsQuickSeq)
   {
      lenSeqStruct = sizeof(DWL_SEQ_TBL_INF); 
      seqLengthByte = lenSeqStruct * sizeWfmHandle; 
      binData = new unsigned char[seqLengthByte];
      pSeq = (DWL_SEQ_TBL_INF *) binData;
   }

   stepNum = 1;
   for (indexArray = lBoundHandle; indexArray < sizeWfmHandle; indexArray++, dp+= lenSeqStruct) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaHandle, &indexArray, &valueArrayHandle);
      hr = SafeArrayGetElement(psaLoopCount, &indexArray, &valueArrayLoopCount);
      hr = SafeArrayGetElement(psaJumpFlag, &indexArray, &valueArrayJumpFlag);

      //Getting Waveform Index from Handle
      wfmIndex = m_waveformManager.GetWfmIndexFromHandle(valueArrayHandle);

      //Checking if there is quick sequence load
      if (m_IsQuickSeq)
      {
         pSeq[indexArray].repNum = valueArrayLoopCount;
         pSeq[indexArray].segNum = (unsigned short) wfmIndex;
         pSeq[indexArray].jumpFlag = (unsigned char)valueArrayJumpFlag;
      }

      else  //there is no quick sequence load
      {
         strCommand.Format(_T(":SEQ:DEF %d,%d,%d,%d"), stepNum, wfmIndex, valueArrayLoopCount, valueArrayJumpFlag);
         hr = io.Printf(strCommand);  //temporary close for offline

      }//end else, there is no quick sequence load

      stepNum++;

   }//end for,access elements in all arrays


   if (m_IsQuickSeq)
   {
      switch (interfaceType)
      {
      case VI_INTF_GPIB:
         /* convert a UNCODE to BYTE array */
         WX218x::makeHeader (":SEQ:DATA#", seqLengthByte, bufHeader, sizeof (bufHeader));
         hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
         // Send a header and data of binary block
         hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

         hr = WX218x::writeBinaryBlock ((BYTE*)binData, seqLengthByte);  //temporary close for offline
         hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

         break;

      case VI_INTF_ASRL:
      case VI_INTF_USB:
         /* convert a UNCODE to BYTE array */
         WX218x::makeHeader (":SEQ:DATA #", seqLengthByte, bufHeader, sizeof (bufHeader));
         hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
         // Send a header and data of binary block
         hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

         hr = WX218x::writeBinaryBlock ((BYTE*)binData, seqLengthByte);  //temporary close for offline
         hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
         break;

      default:  //TCPIP
         /* convert a UNCODE to BYTE array */
         WX218x::makeHeader (":SEQ:DATA #", seqLengthByte, bufHeader, sizeof (bufHeader));
         hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
         // Send a header and data of binary block
         hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

         hr = WX218x::writeBinaryBlock ((BYTE*)binData, seqLengthByte);  //temporary close for offline
         hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

      }//end switch interfaceType 
   }


   //Now saving creating sequence in map
   *val = m_sequenceManager.CreateSequence(name, indexChan);  //saving creating sequence in map
   m_sequenceManager.m_SeqCount[indexChan-1]++;

   //NEW 29.10.2013
   //Doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
     //Now saving creating sequence in map for opposite channel
    handleSeqOpposite = m_sequenceManager.CreateSequence(nameOpposite, indexChanOpposite);  //saving creating sequence in map
    m_sequenceManager.m_SeqCount[indexChanOpposite-1]++;
   }

   if (binData)
      delete [] binData;


   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequence_SetActiveSequence(BSTR Channel, long SeqNum)
{
	HRESULT hr = S_OK;
   CString strCommandSend;

    //Checking range of SegNum1 and SegNum2
   if (SeqNum < SEQ_NUMBER_MIN || SeqNum > SEQ_NUMBER_MAX)
   {
    hr = err.InvalidValue(_T("val"), SeqNum);
    return hr;
   }

    //Sending Channel
   hr = _IWX218x::put_ActiveChannel(Channel);

   if (GetSimulate())
      return hr;

   strCommandSend.Format(_T(":SEQ:SEL %d"), SeqNum);
   hr = io.Printf(strCommandSend);

   return hr;
}

//=========================================================================================================
//                           - SetCoupleActiveSequence - 
HRESULT WX218x::IWX218xArbitrarySequence_SetCoupleActiveSequence(long SeqNum1, long SeqNum2)
{
	HRESULT hr = S_OK;
   CString strCommand;

   //Checking range of SeqNum1 and SeqNum2
   if (SeqNum1 < SEQ_NUMBER_MIN || SeqNum1 > SEQ_NUMBER_MAX)
   {
    hr = err.InvalidValue(_T("val"), SeqNum1);
    return hr;
   }

   if (SeqNum2 < SEQ_NUMBER_MIN || SeqNum2 > SEQ_NUMBER_MAX)
   {
    hr = err.InvalidValue(_T("val"), SeqNum2);
    return hr;
   }

   if (GetSimulate())
      return hr;

   strCommand.Format(_T(":SEQ:SEL:COUP %d,%d"), SeqNum1,SeqNum2);
   hr = io.Printf(strCommand);

   return hr;
}



/* JumpEvent */
HRESULT WX218x::IWX218xArbitrarySequence_get_JumpEvent(BSTR Channel, WX218xSequenceJumpEventEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SEQ:JUMP:EVEN?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("BUS")))
      *val = WX218xSequenceJumpEventBus;

   else if (!strResponse.CompareNoCase(_T("EVEN")))
      *val = WX218xSequenceJumpEventEvent;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequence_put_JumpEvent(BSTR Channel, WX218xSequenceJumpEventEnum val)
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
   case WX218xSequenceJumpEventBus:
      strCommand = _T(":SEQ:JUMP:EVEN BUS");
      break;

   case WX218xSequenceJumpEventEvent:
      strCommand = _T(":SEQ:JUMP:EVEN EVEN");
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


/* Source */
HRESULT WX218x::IWX218xArbitrarySequence_get_Source(BSTR Channel, WX218xSequenceSourceEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SEQ:SEL:SOUR?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("BUS")))
      *val = WX218xSequenceSourceBus;

   else if (!strResponse.CompareNoCase(_T("EXT")))
      *val = WX218xSequenceSourceExternal;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequence_put_Source(BSTR Channel, WX218xSequenceSourceEnum val)
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
   case WX218xSequenceSourceBus:
      strCommand = _T(":SEQ:SEL:SOUR BUS");
      break;

   case WX218xSequenceSourceExternal:
      strCommand = _T(":SEQ:SEL:SOUR EXT");
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

/* Timing */
HRESULT WX218x::IWX218xArbitrarySequence_get_Timing(BSTR Channel, WX218xSequenceTimingEnum* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SEQ:SEL:TIM?")); 
   hr = io.Queryf(strCommandSend, _T("%$Cs"), &strResponse);

   if (!strResponse.CompareNoCase(_T("COH")))
      *val = WX218xSequenceTimingCoherent;

   else if (!strResponse.CompareNoCase(_T("IMM")))
      *val = WX218xSequenceTimingImmediate;

   else
      hr = err.UnexpectedResponse(strResponse);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequence_put_Timing(BSTR Channel, WX218xSequenceTimingEnum val)
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
   case WX218xSequenceTimingCoherent:
      strCommand = _T(":SEQ:SEL:TIM COH");
      break;

   case WX218xSequenceTimingImmediate:
      strCommand = _T(":SEQ:SEL:TIM IMM");
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
HRESULT WX218x::IWX218xArbitrarySequence_SyncLock_RangeCheck(LPCTSTR pszPropertyName, BSTR Channel, long val)
{
   HRESULT hr = S_OK;
   long seqStepMax;
   CString strModel;

   strModel = GetModel();
   if (!strModel.CompareNoCase(_T("WX2181")) || !strModel.CompareNoCase(_T("WX2182")))
      seqStepMax = SEQ_STEP_MAX;
   else
      seqStepMax = SEQ_STEP_MAX_B;

   if (val < SEQ_STEP_MIN || val > seqStepMax) 
      hr = err.InvalidValue(_T("val"), val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequence_get_SyncLock(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SEQ:SYNC:LOCK?")); 
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequence_put_SyncLock(BSTR Channel, long val)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SEQ:SYNC:LOCK %d")), val);
   hr = io.Printf(strCommandSend);

   return hr;
}

/* CreateSequenceAdv */
HRESULT WX218x::IWX218xArbitrarySequence_CreateSequenceAdv(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag, long* val)
{
   HRESULT hr = S_OK;
   long sizeWfmHandle, sizeLoopCount, lBoundHandle, lBoundLoop, lBoundJump, indexArray, valueArray, sizeJumpFlag, uBoundHandle, uBoundLoop, uBoundJump;
   long seqCount, seqIndexName, wfmIndex, seqIndexNameOpposite;
   long valueArrayHandle, valueArrayLoopCount;
   unsigned char valueArrayJumpFlag;
   int indexChan, stepNum = 1;
   CString strActiveChannel, strChanSend, strFormatHandle, strFormatChannel;
   CString strFormatValue, strFormatElement, strFormatParameter, strCommand, strSeqName, strWfmName;
   CString strSeqNameOpposite;
   string name, nameOpposite;
   string wfmName;
   char buff[512]="";
   SAFEARRAY* psaHandle = *WfmHandle;
   SAFEARRAY* psaLoopCount = *LoopCount;
   SAFEARRAY* psaJumpFlag = *JumpFlag;
   long lenSeqStruct, seqLengthByte;
   unsigned char* binData = VI_NULL;
   long dp = 0;
   char buffSegNum[23]="";
   BYTE bufHeader[256];
   CString strModel;
   long seqStepMax, seqLoopMax;
   int modelNumber, indexChanOpposite;
   long handleSeqOpposite;

   DWL_SEQ_TBL_INF *pSeq;

   //5.02.2012  Temporary close for checking something in Matlab
   if (GetSimulate()) //temporary close for offline
   {
      *val = 1;    //Sequence Handle = 1 for offline
      return hr;
   }

   strModel = GetModel();
   if (!strModel.CompareNoCase(_T("WX2181")) || !strModel.CompareNoCase(_T("WX2182")))
   {
      seqStepMax = SEQ_STEP_MAX;
      seqLoopMax = SEQ_LOOP_MAX;
   }

   else
   {
      seqStepMax = SEQ_STEP_MAX_B;
      seqLoopMax = SEQ_LOOP_MAX_B;
   }

   sizeWfmHandle = psaHandle->rgsabound->cElements;
   sizeLoopCount = psaLoopCount->rgsabound->cElements;
   sizeJumpFlag = psaJumpFlag->rgsabound->cElements;

   if ((sizeWfmHandle< COUNT_SEQ_STEP_MIN) || (sizeWfmHandle > seqStepMax))
   {
      hr = ReportInvalidValueError(_T("CreateSequenceAdv"), _T("WfmHandle"), _T("Size of WfmHandle array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   if ((sizeLoopCount< COUNT_SEQ_STEP_MIN) || (sizeLoopCount > seqStepMax))
   {
      hr = ReportInvalidValueError(_T("CreateSequenceAdv"), _T("LoopCount"), _T("Size of Loop Count array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   
   if ((sizeJumpFlag< COUNT_SEQ_STEP_MIN) || (sizeJumpFlag > seqStepMax))
   {
      hr = ReportInvalidValueError(_T("CreateSequenceAdv"), _T("JumpFlag"), _T("Size of JumpFlag array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   //Make sure that size of WfmHandle is equal to LoopCount
   if ((sizeWfmHandle != sizeLoopCount) && (sizeWfmHandle != sizeJumpFlag && (sizeJumpFlag != sizeLoopCount)))
   {
      hr = err.HandleLoopJumpNotEqual(_T(""));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   //Checking the lower bound of the dimension
   lBoundHandle = psaHandle->rgsabound->lLbound;
   lBoundLoop = psaLoopCount->rgsabound->lLbound;
   lBoundJump = psaJumpFlag->rgsabound->lLbound;

   //Checking if lower bound of Handle Array  is zero
   if (lBoundHandle != 0)
   {
      hr = err.LboundArrayZero(_T("Handle Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

    //Checking if lower bound of Loop Array  is zero
   if (lBoundLoop != 0)
   {
      hr = err.LboundArrayZero(_T("Loop Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

    //Checking if lower bound of Jump Array  is zero
   if (lBoundJump != 0)
   {
      hr = err.LboundArrayZero(_T("Jump Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   //Make sure that lBound is the same value
   if ((lBoundHandle != lBoundLoop) && (lBoundHandle != lBoundJump && (lBoundJump != lBoundLoop)))
   {
      hr = err.LboundArrayEqual(_T(""));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   //Checking the upper bound of the dimension
   hr = ::SafeArrayGetUBound(psaHandle, 1, &uBoundHandle);
   hr = ::SafeArrayGetUBound(psaLoopCount, 1, &uBoundLoop);
   hr = ::SafeArrayGetUBound(psaJumpFlag, 1, &uBoundJump);


   //31.01.2012  Temporary close by Ira becouse in MATLAB doesn't work

   //Checking if upper bound of arrays is not zero
   if ((uBoundHandle == 0))
   {
      hr = err.UpperBoundZero(_T("Handle Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   if (uBoundLoop == 0)
   {
      hr = err.UpperBoundZero(_T("Loop Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   if (uBoundJump == 0)
   {
      hr = err.UpperBoundZero(_T("Jump Array"));
      *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
      return hr;
   }

   //Make sure that uBound is the same value
   if ((uBoundHandle != uBoundLoop) && (uBoundHandle != uBoundJump && (uBoundJump != uBoundLoop)))
   {
     hr = err.UboundArrayEqual(_T(""));
     *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
     return hr;
   }


   //5.02.2012  Temporary close for checking something in Matlab
   if (GetSimulate()) //temporary close for offline
   {
     *val = 1;    //Sequence Handle = 1 for offline
      return hr;
   }

   //NEW 29.10.2013  
   //Doing this for WX2184
    //Checking model number
   modelNumber = FuncReturnModelNumber();

   //Getting Active Channel
   strActiveChannel = m_strCurrentChannel;

   //Getting index of Active Channel
   indexChan = WX218x::ReturnChannelIndex(strActiveChannel);

   //Getting channel send
   strChanSend = WX218x::ReturnChannelSend(strActiveChannel);

   seqCount = m_sequenceManager.m_SeqCount[indexChan-1];

   //Making sequence index name
   if (indexChan == 1)
      seqIndexName = VAL_FIRST_SEQUENCE_HANDLE_CHAN_A + seqCount;

   else if (indexChan == 2)//indexChan = 2
      seqIndexName = VAL_FIRST_SEQUENCE_HANDLE_CHAN_B + seqCount; 

   else if (indexChan == 3)//indexChan = 3
      seqIndexName = VAL_FIRST_SEQUENCE_HANDLE_CHAN_C + seqCount; 

   else //indexChan = 4
      seqIndexName = VAL_FIRST_SEQUENCE_HANDLE_CHAN_D + seqCount; 

   //NEW 29.10.2013
   //Doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)//it is WX2184
   {
      //Getting index of opposite channel and creating all that needs  for opposite channel
      indexChanOpposite = WX218x::ReturnChannelIndexOpposite(strActiveChannel); 

      //Making sequence index name for opposite channel
      if (indexChanOpposite == 1)
       seqIndexNameOpposite = VAL_FIRST_SEQUENCE_HANDLE_CHAN_A + seqCount;

      else if (indexChanOpposite == 2)//indexChan = 2
       seqIndexNameOpposite = VAL_FIRST_SEQUENCE_HANDLE_CHAN_B + seqCount; 

      else if (indexChanOpposite == 3)//indexChan = 3
       seqIndexNameOpposite = VAL_FIRST_SEQUENCE_HANDLE_CHAN_C + seqCount; 

      else //indexChan = 4
       seqIndexNameOpposite = VAL_FIRST_SEQUENCE_HANDLE_CHAN_D + seqCount; 

   }//end if, it is WX2184

   //Accesing every element in array WfmHandle
   for (indexArray = lBoundHandle; indexArray < sizeWfmHandle; indexArray++)  //Loop for WfmHandle array
   {
      hr = SafeArrayGetElement(psaHandle, &indexArray, &valueArray);
      //Checking if this waveform handle exist
      if (m_waveformManager.HandleExists(valueArray)) //Waveform Handle exist
      {
         //Check correct Handle and Channel

         //NEW 29.10.2013
         if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C) //it is WX2184
         {
           hr = m_waveformManager.CheckCorrectHandleChannel4Ch(strChanSend, valueArray);
           if (!SUCCEEDED(hr))
           {
            strFormatHandle.Format(_T("(%d)"), valueArray);
            strFormatChannel.Format(_T("(%s)"),strChanSend);
            hr = err.HandleChannelNotExist(strFormatHandle,strFormatChannel);
            *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
            return hr;
           }

         }//end if, it is WX2184

         else //it is not WX2184
         {
           hr = m_waveformManager.CheckCorrectHandleChannel(strChanSend, valueArray);
           if (!SUCCEEDED(hr))
           {
            strFormatHandle.Format(_T("(%d)"), valueArray);
            strFormatChannel.Format(_T("(%s)"),strChanSend);
            hr = err.HandleChannelNotExist(strFormatHandle,strFormatChannel);
            *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
            return hr;
           }
          }//end else, it is not WX2184

      }//end if,Waveform Handle exist


      else //Handle not exist
      {
         hr = ReportInvalidValueError(_T("CreateSequenceAdv"), _T("WfmHandle"), valueArray);
         *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
         return hr;
      }//end else, Handle not exist


   }//end for, Loop for WfmHandle array

   //Accesing every element in array LoopCount
   for (indexArray = lBoundLoop; indexArray < sizeLoopCount; indexArray++)  //Loop for LoopCount array
   {
      hr = SafeArrayGetElement(psaLoopCount, &indexArray, &valueArray);
      //Checking Loop count range
      if (valueArray < SEQ_LOOP_MIN || valueArray > seqLoopMax)
      {
         strFormatValue.Format(_T("(%d)"), valueArray);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("LoopCount"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
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
         //NEW 26.11.2013 add by Ira
         //Checking if it is 49 or 48
         //Doing this becouse from LabView is sending string like this "1001"
         if (valueArray == 48)
            valueArray = 0;
         else if (valueArray == 49)
            valueArray = 1;

         else
         {
         strFormatValue.Format(_T("(%d)"), valueArray);
         strFormatElement.Format(_T("(%d)"), indexArray);
         strFormatParameter.Format(_T("(%s)"), _T("JumpFlag"));
         hr = err.ElementArrayNotValid(strFormatValue, strFormatElement, strFormatParameter);
         *val = 0;    //if Sequence Handle = 0, there was error in function and sequence was not created
         return hr;
         }
      }

   }//end for, Loop for JumpFlag array

   m_sequenceManager.CreateSequenceName(name, seqIndexName);
   sprintf_s(buff, sizeof(buff), "%s", name.c_str());

   strSeqName = buff;

   //NEW 29.10.2013
   //Doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
      //Creating sequence name for opposite channel
      m_sequenceManager.CreateSequenceName(nameOpposite, seqIndexNameOpposite);
      sprintf_s(buff, sizeof(buff), "%s", name.c_str());

      strSeqNameOpposite = buff;
   }

   //Open this command if is sequence number
   strCommand.Format(_T(":SEQ:SEL %d"), seqCount+1);

  hr = io.Printf(strCommand);  //temporary close for offline

   if (m_IsQuickSeq)
   {
      lenSeqStruct = sizeof(DWL_SEQ_TBL_INF); 
      seqLengthByte = lenSeqStruct * sizeWfmHandle; 
      binData = new unsigned char[seqLengthByte];
      pSeq = (DWL_SEQ_TBL_INF *) binData;
   }

   stepNum = 1;
   for (indexArray = lBoundHandle; indexArray < sizeWfmHandle; indexArray++, dp+= lenSeqStruct) //access elements in all arrays
   {
      hr = SafeArrayGetElement(psaHandle, &indexArray, &valueArrayHandle);
      hr = SafeArrayGetElement(psaLoopCount, &indexArray, &valueArrayLoopCount);
      hr = SafeArrayGetElement(psaJumpFlag, &indexArray, &valueArrayJumpFlag);

      //NEW 26.11.2013 add by Ira
      //Doing this becouse from LabView is sending string like this "101"
      if (valueArrayJumpFlag == 49)
         valueArrayJumpFlag = 1;

      if (valueArrayJumpFlag == 48)
         valueArrayJumpFlag = 0;

      //Getting Waveform Index from Handle
      wfmIndex = m_waveformManager.GetWfmIndexFromHandle(valueArrayHandle);

      //Checking if there is quick sequence load
      if (m_IsQuickSeq)
      {
         pSeq[indexArray].repNum = valueArrayLoopCount;
         pSeq[indexArray].segNum = (unsigned short) wfmIndex;
         pSeq[indexArray].jumpFlag = valueArrayJumpFlag;
      }

      else  //there is no quick sequence load
      {
         strCommand.Format(_T(":SEQ:DEF %d,%d,%d,%d"), stepNum, wfmIndex, valueArrayLoopCount, valueArrayJumpFlag);
         hr = io.Printf(strCommand);  //temporary close for offline

      }//end else, there is no quick sequence load

      stepNum++;

   }//end for,access elements in all arrays


   if (m_IsQuickSeq)
   {
      switch (interfaceType)
      {
      case VI_INTF_GPIB:
         /* convert a UNCODE to BYTE array */
         WX218x::makeHeader (":SEQ:DATA#", seqLengthByte, bufHeader, sizeof (bufHeader));
         hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
         // Send a header and data of binary block
         hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

         hr = WX218x::writeBinaryBlock ((BYTE*)binData, seqLengthByte);  //temporary close for offline
         hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

         break;

      case VI_INTF_ASRL:
      case VI_INTF_USB:
         /* convert a UNCODE to BYTE array */
         WX218x::makeHeader (":SEQ:DATA #", seqLengthByte, bufHeader, sizeof (bufHeader));
         hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
         // Send a header and data of binary block
         hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

         hr = WX218x::writeBinaryBlock ((BYTE*)binData, seqLengthByte);  //temporary close for offline
         hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline
         break;

      default:  //TCPIP
         /* convert a UNCODE to BYTE array */
         WX218x::makeHeader (":SEQ:DATA #", seqLengthByte, bufHeader, sizeof (bufHeader));
         hr = io.LowLevel.SetSendEndEnabled (false);  //temporary close for offline
         // Send a header and data of binary block
         hr = io.LowLevel.LowLevelWrite ((BYTE*)bufHeader, strlen((const char *)bufHeader));  //temporary close for offline

         hr = WX218x::writeBinaryBlock ((BYTE*)binData, seqLengthByte);  //temporary close for offline
         hr = io.get_LowLevel().SetSendEndEnabled (true);  //temporary close for offline

      }//end switch interfaceType 
   }


   //Now saving creating sequence in map
   *val = m_sequenceManager.CreateSequence(name, indexChan);  //saving creating sequence in map
   m_sequenceManager.m_SeqCount[indexChan-1]++;

   //NEW 29.10.2013
   //Doing this only for WX2184
   if (modelNumber == MNM_WX2184 || modelNumber == MNM_WX1284 || modelNumber == MNM_WX2184C || modelNumber == MNM_WX1284C)
   {
     //Now saving creating sequence in map for opposite channel
    handleSeqOpposite = m_sequenceManager.CreateSequence(nameOpposite, indexChanOpposite);  //saving creating sequence in map
    m_sequenceManager.m_SeqCount[indexChanOpposite-1]++;
   }

   if (binData)
      delete [] binData;


   return hr;
}

//======================================================================================================
//                                       - Once Count -
HRESULT WX218x::IWX218xArbitrarySequence_get_OnceCount(BSTR Channel, long* val)
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

   strCommandSend = WX218x::MakeSCPIString(strChanSend, _T(":SEQ:ONC:COUN?")); 
   hr = io.Queryf(strCommandSend, _T("%d"), val);

   return hr;
}

HRESULT WX218x::IWX218xArbitrarySequence_put_OnceCount(BSTR Channel, long val)
{
   HRESULT hr = S_OK;
   CString strChanCheck = COLE2T(Channel);
   CString strChanSend, strCommandSend;

   //Checking range values
    if (val < SEQ_ONCE_COUNT_MIN || val > SEQ_ONCE_COUNT_MAX)
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

   strCommandSend.Format(WX218x::MakeSCPIString(strChanSend, _T(":SEQ:ONC:COUN %d")), val); 

   hr = io.Printf(strCommandSend);

   return hr;
}

//===================================================================================================================================================
//                                        - ConfigureOnceCount -
HRESULT WX218x::IWX218xArbitrarySequence_ConfigureOnceCount(BSTR Channel, long Count)
{
	HRESULT hr = S_OK;

	hr = _IWX218xArbitrarySequence::put_OnceCount(Channel, Count);

	return hr;
}




