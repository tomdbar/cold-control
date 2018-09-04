// IviFgenSequenceManager.h: interface for the CIviFgenSequenceManager class
//
////////////////////////////////////////////////////////////////////////////

#if _MSC_VER > 1000
#pragma once
#endif   //      _MSC_VER > 1000

#include <string>
#include <map>

#include "WX218xDef.h"

using namespace std;  

typedef map <int, string>    MapHandleToName;
typedef map <string, long>	  MapNameToHandle;

class CIviFgenSequenceManager
{
public:
   CIviFgenSequenceManager(void);
   virtual ~CIviFgenSequenceManager(void);
   void Initialize();
   void InitializeForChannel(int chanIndex);
   //long m_SeqCount[2]; 

   //NEW 27.06.2013 change by Ira
   long m_SeqCount[CHAN_COUNT_MAX]; 

   long CreateSequence(string& strName, int chanIndex);
   void CreateSequenceName(string& strName, long& SeqIndexName);
   bool GetSequenceHandle(string strSeqName, long* pSeqHandle);
   bool GetSequenceName(long lSeqHandle, string& strSeqName);

   bool HandleExists(long lSeqHandle);
   void DeleteHandle(long lSeqHandle);  

   int CheckCorrectHandleChannel(CString strChannel, long Handle); 
   int CheckCorrectHandleChannel4Ch(CString strChannel, long Handle);  
   HRESULT GetChannelByHandle(long Handle, CString &strChannel);       
   void CleanSequenceMap(int chanIndex);   
   long GetSeqIndexFromHandle (long seqHandle); 
   long GetOppositeSeqHandle (long seqHandle);

protected:
   MapNameToHandle			m_mapNameToHandle;			// key = sequence name, value = sequence handle
   MapHandleToName			m_mapHandleToName;			// key = sequence handle, value = sequence name

   //long m_lNextHandle[2];  //array that containts next sequence handle to allocate for CHAN_A and CHAN_B 

   //NEW 27.06.2013 change by Ira
   long m_lNextHandle[CHAN_COUNT_MAX];  //array that containts next sequence handle to allocate for CHAN_A, CHAN_B, CHAN_C or CHAN_D
};
