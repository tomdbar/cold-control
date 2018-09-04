#include "stdafx.h"
#include "IviFgenDigitalManager.h"

CIviFgenDigitalManager::CIviFgenDigitalManager()
{
   Initialize();
}

CIviFgenDigitalManager::~CIviFgenDigitalManager()
{

}

void CIviFgenDigitalManager::Initialize()
{
   int ii, jj;

   for (ii=0; ii<CHAN_COUNT_MAX; ii++)
      m_WfmCountDigital[ii] = 0;

   //NEW 25.10.2012 setting segment size 0 to arrays m_ArrayArbSeg and m_ArrayDigSeg
   for (ii = 0; ii < CHAN_COUNT_MAX ; ii++) //channel count
      for (jj = 0; jj < MAX_NUM_SEGMENTS; jj++)
      {
         m_ArrayDigSeg[ii][jj] = 0;
      }


}

void CIviFgenDigitalManager::InitializeForChannel(int chanIndex)
{
  m_WfmCountDigital[chanIndex - 1] = 0;
}

//===================================================================================================
//                           - ClearArbSegments - 
void CIviFgenDigitalManager::ClearArbSegments(int chanIndex, long segNum)
{
  //Function that recieves channelIndex and segNum and sets zero into array m_ArrayDigSeg
   //if chanIndex == -1 - cleaning for all channels
   //if segNum == -1 - cleaning for all segments

   int ii, jj;

   //Checking if chanIndex == -1, and segNum = -1
   if (chanIndex == -1 && segNum == -1)  //all channels, all segments
   {
   for (ii = 0; ii < CHAN_COUNT_MAX; ii ++)
      for (jj = 0; jj < MAX_NUM_SEGMENTS; jj ++)
         m_ArrayDigSeg[ii][jj] = 0;
   }//end if,all channels, all segments 

   else if (chanIndex != -1 && segNum == -1) //one channel, all segments
   {
     for (jj = 0; jj < MAX_NUM_SEGMENTS; jj ++)
         m_ArrayDigSeg[chanIndex][jj] = 0;
   }//end else, one channel, all segments

   else if (chanIndex == -1 && segNum != -1)  //all channels, one segment
   {
     for (ii = 0; ii < CHAN_COUNT_MAX; ii ++)
         m_ArrayDigSeg[ii][segNum] = 0;  
   }//end else, all channels, one segment

    else if (chanIndex != -1 && segNum != -1) //one channel, one segment
   {
     for (jj = 0; jj < MAX_NUM_SEGMENTS; jj ++)
         m_ArrayDigSeg[chanIndex][segNum] = 0;
   }//end else, one channel, one segment


}