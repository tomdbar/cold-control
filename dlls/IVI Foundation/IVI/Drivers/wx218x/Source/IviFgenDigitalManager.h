// IviFgenDigitalManager.h: interface for the CIviFgenDigitalManager class
//
////////////////////////////////////////////////////////////////////////////

#if _MSC_VER > 1000
#pragma once
#endif   //      _MSC_VER > 1000

#include <string>

#include "WX218xDef.h"

using namespace std;  

class CIviFgenDigitalManager
{
public:
   CIviFgenDigitalManager();
   virtual ~CIviFgenDigitalManager();

   void Initialize();
   void InitializeForChannel(int chanIndex);
   //long m_WfmCountDigital[2]; 

   //NEW 27.06.2013 change by Ira
   long m_WfmCountDigital[4]; 

   long m_ArrayDigSeg[CHAN_COUNT_MAX][MAX_NUM_SEGMENTS];  //array that containts segment sizes for Digital memory
   void ClearArbSegments(int chanIndex, long segNum);  //cleaning data from m_ArrayDigSeg
};


