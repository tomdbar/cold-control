// IviFgenWaveformManager.h: interface for the CIviFgenWaveformManager class
// Writted by 
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

class CIviFgenWaveformManager
{
public:
   CIviFgenWaveformManager();
   virtual ~CIviFgenWaveformManager();

   void Initialize();
   void InitializeForChannel(int chanIndex);
   //long m_WfmCount[2];

   //NEW 27.06.2013  change by Ira
   long m_WfmCount[4];

   long CreateWaveform(string& strName, int chanIndex);
   void CreateWaveformName(string& strName, long& WfmIndexName);
   bool GetWaveformHandle(string strWfmName, long* pWfmHandle);
   bool GetWaveformName(long lWfmHandle, string& strWfmName);

   bool HandleExists(long lWfmHandle);
   void DeleteHandle(long lWfmHandle);   

   HRESULT CheckCorrectHandleChannel(CString strChannel, long Handle); 
   HRESULT CheckCorrectHandleChannel4Ch(CString strChannel, long Handle);  
   HRESULT GetChannelByHandle(long Handle, CString &strChannel);        
   void CleanWaveformMap(int chanIndex);   
   long GetWfmIndexFromHandle (long wfmHandle); 
   long GetOppositeWfmHandle (long wfmHandle);

   long m_ArrayArbSeg[CHAN_COUNT_MAX][MAX_NUM_SEGMENTS];  //array that containts segment sizes for Arbitrary memory
   void ClearArbSegments(int chanIndex, long segNum);  //cleaning data from m_ArrayArbSeg
   

protected:
   MapNameToHandle			m_mapNameToHandle;			// key = waveform name, value = waveform handle
   MapHandleToName			m_mapHandleToName;			// key = waveform handle, value = waveform name

   //long m_lNextHandle[2];  //array that containts next waveform handle to allocate for CHAN_A and CHAN_B 
   long m_lNextHandle[4];  //array that containts next waveform handle to allocate for CHAN_A,CHAN_B,CHAN_C or CHAN_D
   


};

