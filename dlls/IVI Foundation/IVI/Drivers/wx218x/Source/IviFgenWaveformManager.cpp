#include "stdafx.h"
#include "IviFgenWaveformManager.h"

CIviFgenWaveformManager::CIviFgenWaveformManager()
{
   Initialize();
}

CIviFgenWaveformManager::~CIviFgenWaveformManager()
{

}

void CIviFgenWaveformManager::Initialize()
{
   int ii, jj;

   m_mapNameToHandle.clear();
   m_mapHandleToName.clear();

   m_lNextHandle[0] = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A;
   m_lNextHandle[1] = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B;

   //NEW 27.06.2013 add by Ira
   m_lNextHandle[2] = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C;
   m_lNextHandle[3] = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D;

   for (ii=0; ii<CHAN_COUNT_MAX; ii++)
      m_WfmCount[ii] = 0;

   //NEW 25.10.2012 setting segment size 0 to arrays m_ArrayArbSeg and m_ArrayDigSeg
   for (ii = 0; ii < CHAN_COUNT_MAX ; ii++) //channel count
      for (jj = 0; jj < MAX_NUM_SEGMENTS; jj++)
      {
         m_ArrayArbSeg[ii][jj] = 0;
      }


}

void CIviFgenWaveformManager::InitializeForChannel(int chanIndex)
{
   if (chanIndex == 1)  //CHAN_A
      m_lNextHandle[chanIndex - 1] = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A;

   else if (chanIndex == 2)  //CHAN_B
      m_lNextHandle[chanIndex - 1] = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B;

   else if (chanIndex == 3)  //CHAN_C
      m_lNextHandle[chanIndex - 1] = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C;

   else   //CHAN_D
      m_lNextHandle[chanIndex - 1] = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D;

   m_WfmCount[chanIndex - 1] = 0;
}

long CIviFgenWaveformManager::CreateWaveform(string& strName, int chanIndex)
{
   // Make up a name if one is not provided
   m_mapHandleToName[m_lNextHandle[chanIndex-1]] = strName;
   m_mapNameToHandle[strName] = m_lNextHandle[chanIndex-1];

   return m_lNextHandle[chanIndex-1]++;
}

void CIviFgenWaveformManager::CreateWaveformName(string& strName, long& WfmIndexName)
{
   char szName[50];
   if (strName.empty())
   {   
      sprintf_s(szName, 50, "ARB%d", (WfmIndexName));
      strName = szName;
   }
}
bool CIviFgenWaveformManager::GetWaveformHandle(string strWfmName, long* plWfmHandle)
{
   *plWfmHandle = -1;
   MapNameToHandle::iterator it = m_mapNameToHandle.find(strWfmName);
   bool bFound = it != m_mapNameToHandle.end();
   if (bFound)
   {
      *plWfmHandle = it->second;
   }

   return bFound;
}

bool CIviFgenWaveformManager::GetWaveformName(long lWfmHandle, string& strWfmName)
{
   MapHandleToName::iterator it = m_mapHandleToName.find(lWfmHandle);
   bool bFound = it != m_mapHandleToName.end();
   if (bFound)
   {
      strWfmName = it->second;
   }

   return bFound;
}
bool CIviFgenWaveformManager::HandleExists(long lWfmHandle)
{
   return m_mapHandleToName.find(lWfmHandle) != m_mapHandleToName.end();
}

void CIviFgenWaveformManager::DeleteHandle(long lWfmHandle)
{
   //Receiving number of Handle, finding this Handle in map and delete it
   string strWfmName;
   MapHandleToName::size_type sizeMapHandle;
   MapNameToHandle::size_type sizeMapName;

   sizeMapHandle = m_mapHandleToName.size();
   sizeMapName = m_mapNameToHandle.size();

   MapHandleToName::iterator itHandle = m_mapHandleToName.find(lWfmHandle);
   bool bFoundHandle = itHandle != m_mapHandleToName.end();
   if (bFoundHandle) //Waveform Handle was found and we can delete it
   {
      //Getting waveform name of this handle
      GetWaveformName(lWfmHandle, strWfmName);
      m_mapHandleToName.erase(itHandle);
      sizeMapHandle = m_mapHandleToName.size();

      MapNameToHandle::iterator itName = m_mapNameToHandle.find(strWfmName);
      bool bFoundName = itName != m_mapNameToHandle.end();
      if (bFoundName) //Waveform Name was found and we can delete it
      {
         m_mapNameToHandle.erase(itName);
         sizeMapName = m_mapNameToHandle.size();
      }
   }//end if,Waveform Handle was found and we can delete it

}

HRESULT CIviFgenWaveformManager::CheckCorrectHandleChannel(CString strChannel, long Handle)  
{
   //Function that recieve Channel and Waveform Handle and checks if Handle is for selected Channel
   //if all is ok function return 0, else function return -1
   HRESULT ok = S_OK;
   CString strFormatHandle, strFormatChannel;

   if (strChannel == CHAN_A)
   {
      if (Handle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_B)
         ok = -1;
   }

   else if (strChannel == CHAN_B)//ChannelB
   {
      if (Handle < VAL_FIRST_WAVEFORM_HANDLE_CHAN_B || Handle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_C)
         ok = -1;
   }//ChannelB

   else if (strChannel == CHAN_C)//ChannelC
   {
      if (Handle < VAL_FIRST_WAVEFORM_HANDLE_CHAN_C || Handle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_D)
         ok = -1;
   }//ChannelB

   else //ChannelD
   {
      if (Handle < VAL_FIRST_WAVEFORM_HANDLE_CHAN_D || Handle > VAL_LAST_WAVEFORM_HANDLE_CHAN_D)
         ok = -1;
   }//ChannelB

   return ok;
}

//=====================================================================================================
//                                     - CheckCorrectHandleChannel4Ch -
HRESULT CIviFgenWaveformManager::CheckCorrectHandleChannel4Ch(CString strChannel, long Handle)  
{
   //Function that recieve Channel and Waveform Handle and checks if Handle is for selected Channel
   //if all is ok function return 0, else function return -1
   //This function only for model WX2184 becouse in this model one sequence table is for both (Ch1 and Ch2) and
   //another seq. table is for (CH3 and CH4)
   HRESULT ok = S_OK;
   CString strFormatHandle, strFormatChannel;

   if (strChannel == CHAN_A || strChannel == CHAN_B)
   {
      if (Handle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_C)
         ok = -1;
   }

   if (strChannel == CHAN_C || strChannel == CHAN_D)
   {
      if (Handle < VAL_FIRST_WAVEFORM_HANDLE_CHAN_C)
         ok = -1;
   }//ChannelB

   return ok;
}

//==================================================================================================================
//                                       - GetChannelByHandle - 
HRESULT CIviFgenWaveformManager::GetChannelByHandle(long Handle, CString &strChannel)
{
   //Function that recieve Handle and return Channel
   HRESULT hr = S_OK;

   if (Handle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_D)
      strChannel = _T("Channel4");

   else if (Handle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_C && Handle < VAL_FIRST_WAVEFORM_HANDLE_CHAN_D)
      strChannel = _T("Channel3");

   else if (Handle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_B && Handle < VAL_FIRST_WAVEFORM_HANDLE_CHAN_C)
      strChannel = _T("Channel2");

   else
      strChannel = _T("Channel1");

   return hr;
}

void CIviFgenWaveformManager::CleanWaveformMap(int chanIndex)
{
   //Function that recieves channel index and clean data from map
   long wfmCount, Handle; 
   int ii;

   //Getting count of waveforms for selected channel
   wfmCount = m_WfmCount[chanIndex-1];

   if (chanIndex == 1) //Channel1
   {
      Handle = VAL_FIRST_WAVEFORM_HANDLE_CHAN_A;
      for (ii=0; ii<wfmCount; ii++)
      {
         DeleteHandle(Handle);
         Handle++;
      }

   }//end if, Channel1

   else if (chanIndex == 2) //Channel2
   {
      Handle = VAL_FIRST_WAVEFORM_HANDLE_CHAN_B;
      for (ii=0; ii<wfmCount; ii++)
      {
         DeleteHandle(Handle);
         Handle++;
      }

   }//end if, Channel1

   else if (chanIndex == 3) //Channel3
   {
      Handle = VAL_FIRST_WAVEFORM_HANDLE_CHAN_C;
      for (ii=0; ii<wfmCount; ii++)
      {
         DeleteHandle(Handle);
         Handle++;
      }

   }//end if, Channel1

   else //Channel4
   {
      Handle = VAL_FIRST_WAVEFORM_HANDLE_CHAN_D;
      for (ii=0; ii<wfmCount; ii++)
      {
         DeleteHandle(Handle);
         Handle++;
      }

   }//Channel2

   //Cleaning data from m_waveformManager
   InitializeForChannel(chanIndex);
}

//===================================================================================================
//                           - ClearArbSegments - 
void CIviFgenWaveformManager::ClearArbSegments(int chanIndex, long segNum)
{
  //Function that recieves channelIndex and segNum and sets zero into array m_ArrayArbSeg
   //if chanIndex == -1 - cleaning for all channels
   //if segNum == -1 - cleaning for all segments

   int ii, jj;

   //Checking if chanIndex == -1, and segNum = -1
   if (chanIndex == -1 && segNum == -1)  //all channels, all segments
   {
   for (ii = 0; ii < CHAN_COUNT_MAX; ii ++)
      for (jj = 0; jj < MAX_NUM_SEGMENTS; jj ++)
         m_ArrayArbSeg[ii][jj] = 0;
   }//end if,all channels, all segments 

   else if (chanIndex != -1 && segNum == -1) //one channel, all segments
   {
     for (jj = 0; jj < MAX_NUM_SEGMENTS; jj ++)
         m_ArrayArbSeg[chanIndex][jj] = 0;
   }//end else, one channel, all segments

   else if (chanIndex == -1 && segNum != -1)  //all channels, one segment
   {
     for (ii = 0; ii < CHAN_COUNT_MAX; ii ++)
         m_ArrayArbSeg[ii][segNum] = 0;  
   }//end else, all channels, one segment

    else if (chanIndex != -1 && segNum != -1) //one channel, one segment
   {
     for (jj = 0; jj < MAX_NUM_SEGMENTS; jj ++)
         m_ArrayArbSeg[chanIndex][segNum] = 0;
   }//end else, one channel, one segment


}

long CIviFgenWaveformManager::GetWfmIndexFromHandle (long wfmHandle)
{
   //Function that recieve waveform Handle and return index
   long index;

   if (wfmHandle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_D)
      index = wfmHandle - VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + 1;

   else if (wfmHandle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_C)
      index = wfmHandle - VAL_FIRST_WAVEFORM_HANDLE_CHAN_C + 1;

   else if (wfmHandle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_B)
      index = wfmHandle - VAL_FIRST_WAVEFORM_HANDLE_CHAN_B + 1;

   else
      index = wfmHandle;

   return index;
}

//================================================================================================================
//                                 - GetOppositeWfmHandle -
long CIviFgenWaveformManager::GetOppositeWfmHandle (long wfmHandle)
{
   //Function that recieve waveform Handle of the current and return 
   //Waveform handle for the opposite channel
   long wfmHandleOpposite;

   if (wfmHandle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_D)
      wfmHandleOpposite = wfmHandle - MAX_NUM_SEGMENTS;

   else if (wfmHandle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_C && wfmHandle < VAL_FIRST_WAVEFORM_HANDLE_CHAN_D)
      wfmHandleOpposite = wfmHandle + MAX_NUM_SEGMENTS;

   else if (wfmHandle >= VAL_FIRST_WAVEFORM_HANDLE_CHAN_B && wfmHandle < VAL_FIRST_WAVEFORM_HANDLE_CHAN_C)
      wfmHandleOpposite = wfmHandle - MAX_NUM_SEGMENTS;

   else
      wfmHandleOpposite = wfmHandle + MAX_NUM_SEGMENTS;

   return wfmHandleOpposite;
}