#include "StdAfx.h"
#include "IviFgenSequenceManager.h"

CIviFgenSequenceManager::CIviFgenSequenceManager(void)
{
   Initialize();
}

CIviFgenSequenceManager::~CIviFgenSequenceManager(void)
{
}

void CIviFgenSequenceManager::Initialize()
{
   int ii;

   m_mapNameToHandle.clear();
   m_mapHandleToName.clear();

   m_lNextHandle[0] = VAL_FIRST_SEQUENCE_HANDLE_CHAN_A;
   m_lNextHandle[1] = VAL_FIRST_SEQUENCE_HANDLE_CHAN_B;

   //NEW 27.06.2013 add by Ira Tseitlin
   m_lNextHandle[2] = VAL_FIRST_SEQUENCE_HANDLE_CHAN_C;
   m_lNextHandle[3] = VAL_FIRST_SEQUENCE_HANDLE_CHAN_D;

   for (ii=0; ii<CHAN_COUNT_MAX; ii++)
      m_SeqCount[ii] = 0;
}

//===========================================================================================================
//                           - InitializeForChannel -
void CIviFgenSequenceManager::InitializeForChannel(int chanIndex)
{
   if (chanIndex == 1)  //CHAN_A
      m_lNextHandle[chanIndex - 1] = VAL_FIRST_SEQUENCE_HANDLE_CHAN_A;

   else if (chanIndex == 2)  //CHAN_B
      m_lNextHandle[chanIndex - 1] = VAL_FIRST_SEQUENCE_HANDLE_CHAN_B;

   else if (chanIndex == 3)  //CHAN_C
      m_lNextHandle[chanIndex - 1] = VAL_FIRST_SEQUENCE_HANDLE_CHAN_C;

   else  //CHAN_D
      m_lNextHandle[chanIndex - 1] = VAL_FIRST_SEQUENCE_HANDLE_CHAN_D;

   m_SeqCount[chanIndex - 1] = 0;
}

//============================================================================================================
//                              - CreateSequence -
long CIviFgenSequenceManager::CreateSequence(string& strName, int chanIndex)
{
   // Make up a name if one is not provided
   m_mapHandleToName[m_lNextHandle[chanIndex-1]] = strName;
   m_mapNameToHandle[strName] = m_lNextHandle[chanIndex-1];

   return m_lNextHandle[chanIndex-1]++;
}

//===============================================================================================================
//                                    - CreateSequenceName -
void CIviFgenSequenceManager::CreateSequenceName(string& strName, long& SeqIndexName)
{
   char szName[50];
   if (strName.empty())
   {   
      sprintf_s(szName, 50, "SEQ%d", (SeqIndexName));
      strName = szName;
   }
}

//================================================================================================================
//                                    - GetSequenceHandle -
bool CIviFgenSequenceManager::GetSequenceHandle(string strSeqName, long* plSeqHandle)
{
   *plSeqHandle = -1;
   MapNameToHandle::iterator it = m_mapNameToHandle.find(strSeqName);
   bool bFound = it != m_mapNameToHandle.end();
   if (bFound)
   {
      *plSeqHandle = it->second;
   }

   return bFound;
}

//==============================================================================================================
//                               - GetSequenceName -
bool CIviFgenSequenceManager::GetSequenceName(long lSeqHandle, string& strSeqName)
{
   MapHandleToName::iterator it = m_mapHandleToName.find(lSeqHandle);
   bool bFound = it != m_mapHandleToName.end();
   if (bFound)
   {
      strSeqName = it->second;
   }

   return bFound;
}

//==============================================================================================================
//                                 - HandleExists - 
bool CIviFgenSequenceManager::HandleExists(long lSeqHandle)
{
   return m_mapHandleToName.find(lSeqHandle) != m_mapHandleToName.end();
}

//==============================================================================================================
//                                   - DeleteHandle - 
void CIviFgenSequenceManager::DeleteHandle(long lSeqHandle)
{
   //Receiving number of Handle, finding this Handle in map and delete it
   string strSeqName;
   MapHandleToName::size_type sizeMapHandle;
   MapNameToHandle::size_type sizeMapName;

   sizeMapHandle = m_mapHandleToName.size();
   sizeMapName = m_mapNameToHandle.size();

   MapHandleToName::iterator itHandle = m_mapHandleToName.find(lSeqHandle);
   bool bFoundHandle = itHandle != m_mapHandleToName.end();
   if (bFoundHandle) //Sequence Handle was found and we can delete it
   {
      //Getting sequence name of this handle
      GetSequenceName(lSeqHandle, strSeqName);
      m_mapHandleToName.erase(itHandle);
      sizeMapHandle = m_mapHandleToName.size();

      MapNameToHandle::iterator itName = m_mapNameToHandle.find(strSeqName);
      bool bFoundName = itName != m_mapNameToHandle.end();
      if (bFoundName) //Waveform Name was found and we can delete it
      {
         m_mapNameToHandle.erase(itName);
         sizeMapName = m_mapNameToHandle.size();
      }
   }//end if,Sequence Handle was found and we can delete it

}

//================================================================================================================
//                                    - CheckCorrectHandleChannel -
int CIviFgenSequenceManager::CheckCorrectHandleChannel(CString strChannel, long Handle)  
{
   //Function that recieve Channel and Sequence Handle and checks if Handle is for selected Channel
   HRESULT ok = S_OK;
   CString strFormatHandle, strFormatChannel;

   if (strChannel == CHAN_A)
   {
      if (Handle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_B)
         ok = -1;
   }

   else if (strChannel == CHAN_B)//ChannelB
   {
      if (Handle < VAL_FIRST_SEQUENCE_HANDLE_CHAN_B || Handle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_C)
         ok = -1;
   }//ChannelB

   else if (strChannel == CHAN_C)//ChannelC
   {
      if (Handle < VAL_FIRST_SEQUENCE_HANDLE_CHAN_C || Handle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_D)
         ok = -1;
   }//ChannelB

   else //ChannelD
   {
      if (Handle < VAL_FIRST_SEQUENCE_HANDLE_CHAN_D || Handle > VAL_LAST_SEQUENCE_HANDLE_CHAN_D)
         ok = -1;
   }//ChannelB

   return ok;
}

//================================================================================================================
//                                    - CheckCorrectHandleChannel4Ch -
int CIviFgenSequenceManager::CheckCorrectHandleChannel4Ch(CString strChannel, long Handle)  
{
   //Function that recieve Channel and Sequence Handle and checks if Handle is for selected Channel
   //Use this function only for WX2184 or WX1284
   //Becouse for this model handle for both (CH1 and CH2, CH3 and CH4)) is the same.
   HRESULT ok = S_OK;
   CString strFormatHandle, strFormatChannel;

   if (strChannel == CHAN_A)
   {
      if (Handle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_C)
         ok = -1;
   }

   else if (strChannel == CHAN_B)//ChannelB
   {
      if (Handle < VAL_FIRST_SEQUENCE_HANDLE_CHAN_A || Handle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_C)
         ok = -1;
   }//ChannelB

   else if (strChannel == CHAN_C )//ChannelC
   {
      if (Handle < VAL_FIRST_SEQUENCE_HANDLE_CHAN_C || Handle > VAL_LAST_SEQUENCE_HANDLE_CHAN_D)
         ok = -1;
   }//ChannelB

   else //ChannelD
   {
      if (Handle < VAL_FIRST_SEQUENCE_HANDLE_CHAN_C || Handle > VAL_LAST_SEQUENCE_HANDLE_CHAN_D)
         ok = -1;
   }//ChannelB

   return ok;
}

//================================================================================================================
//                                      - GetChannelByHandle -
HRESULT CIviFgenSequenceManager::GetChannelByHandle(long Handle, CString &strChannel)
{
   //Function that recieve Handle and return Channel
   HRESULT hr = S_OK;

   if (Handle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_D)
      strChannel = _T("Channel4");

   else if (Handle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_C && Handle < VAL_FIRST_SEQUENCE_HANDLE_CHAN_D)
      strChannel = _T("Channel3");

   else if (Handle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_B && Handle < VAL_FIRST_SEQUENCE_HANDLE_CHAN_C)
      strChannel = _T("Channel2");

   else
      strChannel = _T("Channel1");

   return hr;
}

//===============================================================================================================
//                                      - CleanSequenceMap -
void CIviFgenSequenceManager::CleanSequenceMap(int chanIndex)
{
   //Function that recieves channel index and clean data from map
   long seqCount, Handle; 
   int ii;

   //Getting count of sequence for selected channel
   seqCount = m_SeqCount[chanIndex-1];

   if (chanIndex == 1) //Channel1
   {
      Handle = VAL_FIRST_SEQUENCE_HANDLE_CHAN_A;
      for (ii=0; ii<seqCount; ii++)
      {
         DeleteHandle(Handle);
         Handle++;
      }

   }//end if, Channel1

   else if (chanIndex == 2) //Channel2
   {
      Handle = VAL_FIRST_SEQUENCE_HANDLE_CHAN_B;
      for (ii=0; ii<seqCount; ii++)
      {
         DeleteHandle(Handle);
         Handle++;
      }

   }//end if, Channel1

   else if (chanIndex == 3) //Channel3
   {
      Handle = VAL_FIRST_SEQUENCE_HANDLE_CHAN_C;
      for (ii=0; ii<seqCount; ii++)
      {
         DeleteHandle(Handle);
         Handle++;
      }

   }//end if, Channel1

   else //Channel4
   {
      Handle = VAL_FIRST_SEQUENCE_HANDLE_CHAN_D;
      for (ii=0; ii<seqCount; ii++)
      {
         DeleteHandle(Handle);
         Handle++;
      }

   }//Channel2

   //Cleaning data from m_waveformManager
   InitializeForChannel(chanIndex);
}

//================================================================================================================
//                                 - GetSeqIndexFromHandle -
long CIviFgenSequenceManager::GetSeqIndexFromHandle (long seqHandle)
{
   //Function that recieve sequence Handle and return index
   long index;

   if (seqHandle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_D)
      index = seqHandle - VAL_FIRST_SEQUENCE_HANDLE_CHAN_D + 1;

   else if (seqHandle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_C)
      index = seqHandle - VAL_FIRST_SEQUENCE_HANDLE_CHAN_C + 1;

   else if (seqHandle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_B)
      index = seqHandle - VAL_FIRST_SEQUENCE_HANDLE_CHAN_B + 1;

   else
      index = seqHandle;

   return index;
}

//================================================================================================================
//                                 - GetSeqIndexFromHandle -
long CIviFgenSequenceManager::GetOppositeSeqHandle (long seqHandle)
{
   //Function that recieve sequence Handle of the current and return 
   //Sequence handle for the opposite channel
   long seqHandleOpposite;

   if (seqHandle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_D)
      seqHandleOpposite = seqHandle - SEQ_NUMBER_SEQUENCE_MAX;

   else if (seqHandle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_C && seqHandle < VAL_FIRST_SEQUENCE_HANDLE_CHAN_D)
      seqHandleOpposite = seqHandle + SEQ_NUMBER_SEQUENCE_MAX;

   else if (seqHandle >= VAL_FIRST_SEQUENCE_HANDLE_CHAN_B && seqHandle < VAL_FIRST_SEQUENCE_HANDLE_CHAN_C)
      seqHandleOpposite = seqHandle - SEQ_NUMBER_SEQUENCE_MAX;

   else
      seqHandleOpposite = seqHandle + SEQ_NUMBER_SEQUENCE_MAX;

   return seqHandleOpposite;
}

