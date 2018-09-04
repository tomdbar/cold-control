/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <atlpath.h>
#include <atltime.h>
#include <atlfile.h>

// CATID required for trace listeners
// {91742AEB-2D3E-4B56-8009-BF3F44AA5918}
static const CATID CATID_IVI_COM_TRACE_LISTENER = 
{ 0x91742aeb, 0x2d3e, 0x4b56, { 0x80, 0x9, 0xbf, 0x3f, 0x44, 0xaa, 0x59, 0x18 } };

///////////////////////////////////////////////////////////////////////////////
//	CTracer
 
typedef enum
{
	TraceStateRunning,
	TraceStateStopped,
	TraceStateDataFull
} TraceState;

class CTracer
{
public:
	CTracer();
	~CTracer();

	HRESULT InitializeListeners();

	TraceState GetTraceState() const;
	void SetTraceState(TraceState eTraceState);

	bool GetTraceOn() const;

	bool GetTraceEnabled() const;
	HRESULT SetTraceEnabled(bool bTraceEnabled);

	int GetTraceSizeMax() const; 
	HRESULT SetTraceSizeMax(int nTraceSizeMax); 

	bool GetTraceArray() const; 
	HRESULT SetTraceArray(bool bTraceArray); 

	int GetTraceArraySizeMax() const;
	HRESULT SetTraceArraySizeMax(int nTraceArraySizeMax);

	int GetTraceSaveInterval() const;
	HRESULT SetTraceSaveInterval(int nTraceSaveInterval);

	const CString& GetTraceName() const;
	HRESULT SetTraceName(const CString& strTraceName);

	const CString& GetDriverIdentifier() const;
	HRESULT SetDriverIdentifier(const CString& strDriverIdentifier);

	const CPath& GetTraceTransformPath();
	HRESULT SetTraceTransformPath(const CPath& pathTransform);

	HRESULT StartTrace();
	HRESULT StopTrace(TraceState eTraceState = TraceStateStopped);

	HRESULT Close();

	HRESULT FlushTraceLog();
	HRESULT CloseTraceLog();

	bool GetClosePending() const;
	bool IsMethodCallStackComplete() const;

	HRESULT WriteStartElement(const CStringA& strName, bool bWriteToListeners = true);
	HRESULT WriteAttributeString(const CStringA& strName, const CStringA& strValue);
	HRESULT WriteEndElement(bool bWriteToListeners = true);

	HRESULT SendTraceEvent(LONG lEventType, const CStringA& strEventData);
	HRESULT CommitTraceListenerEntry();

protected:
	CPath GetTraceLogPathFromTraceName(const CString& strTraceName) const;
	CPath GetTraceLogPathFromTraceName(const CString& strTraceName, const CTime& timeStamp) const;
	CPath GetCurrentTraceDirectory() const;
	CPath GetTraceTransformPathFromFileName(const CString& strFileName) const;
	CPath GetStandardTraceTransformDirectory() const;
	HRESULT CreateTraceLog(const CPath& pathTraceLog);
	HRESULT WriteToTraceLog(const CStringA& strData);
	HRESULT WriteToTraceListenerEntry(const CStringA& strData);

private:
	HRESULT GetTraceListenerEnumerator(IEnumCLSID** ppEnumCLSID);
	HRESULT CreateTraceListenerFromCLSID(const CLSID& clsid);

protected:
	CString m_strTraceName;
	CString m_strDriverIdentifier;
	CPath m_pathTraceTransform;
	bool m_bClosePending;

	CTime m_startTime;
	CTime m_stopTime;
	CTime m_timeLastSave;

	DWORD m_dwProcessId;

protected:
	TraceState m_eTraceState;
	bool m_bTraceEnabled;
	int m_nTraceSizeMax;
	bool m_bTraceArray;
	int m_nTraceArraySizeMax;
	int m_nTraceSaveInterval;

	int m_nIndentLevel;
	bool m_bStartElementPending;
	CAtlFile m_logFile;
	CStringA m_strListenerEntry;

	struct XmlStartElement
	{
		XmlStartElement(const CStringA& _strName) 
		{ 
			strName = _strName; 
			bHasContent = false;
		}

		CStringA strName;
		bool bHasContent;
	};

	CAtlList<XmlStartElement> m_stackStartElements;
	CAtlArray<CComDispatchDriver> m_rgListeners;
};

typedef DWORD (WINAPI* pfnGetProcessId)(HANDLE h);

inline CTracer::CTracer()
{
	m_eTraceState = TraceStateStopped;
	m_bTraceEnabled = false ;
	m_nTraceSizeMax = 1000000;
	m_bTraceArray = false;
	m_nTraceArraySizeMax = 10;
	m_nTraceSaveInterval = 1;
	m_nIndentLevel = 0;
	m_bStartElementPending = false;
	m_bClosePending = false;

	// GetProcessId requires Windows XP or later.  Must call through GetProcAddress so that there is no dependency.
	static pfnGetProcessId getPId = (pfnGetProcessId)::GetProcAddress(::GetModuleHandle(_T("kernel32.dll")), "GetProcessId");
	m_dwProcessId = getPId ? getPId(::GetCurrentProcess()) : 0;
}

inline CTracer::~CTracer()
{
	ATLASSERT(m_eTraceState != TraceStateRunning);
}

inline HRESULT CTracer::InitializeListeners()
{
	HRESULT hr = S_OK;

	IEnumCLSID* pEnumCLSID = NULL;
	hr = GetTraceListenerEnumerator(&pEnumCLSID);
	if (FAILED(hr))
		return hr;

	// Retrieve trace listener CLSIDs 64 at a time
	//
	HRESULT hrEnumCLSID = S_OK;
	enum { MAX_CLSID = 64 };
	CLSID rgCLSID[MAX_CLSID];
	while (hrEnumCLSID == S_OK)
	{
		ULONG cActual = 0;
		hrEnumCLSID = pEnumCLSID->Next(MAX_CLSID, rgCLSID, &cActual);
		if (SUCCEEDED(hrEnumCLSID))
		{
			for (ULONG nCLSIDIndex = 0; nCLSIDIndex < cActual && SUCCEEDED(hr); nCLSIDIndex++)
			{
				hr = CreateTraceListenerFromCLSID(rgCLSID[nCLSIDIndex]);
			}
		}
	}

	pEnumCLSID->Release();

	return hr;
}

inline HRESULT CTracer::GetTraceListenerEnumerator(IEnumCLSID** ppEnumCLSID)
{
	HRESULT hr = S_OK;
	if (ppEnumCLSID == NULL)
		return E_POINTER;
	*ppEnumCLSID = NULL;

	ICatInformation* pCatInfo = NULL;
	hr = CoCreateInstance(CLSID_StdComponentCategoriesMgr, NULL, CLSCTX_ALL, __uuidof(pCatInfo), (void**)&pCatInfo);
	if (SUCCEEDED(hr))
	{
		CATID rgCATID[1];
		rgCATID[0] = CATID_IVI_COM_TRACE_LISTENER; 
		IEnumCLSID* pEnumCLSID = NULL;
		hr = pCatInfo->EnumClassesOfCategories(1, rgCATID, 0, NULL, &pEnumCLSID);
		if (SUCCEEDED(hr) && pEnumCLSID != NULL)
		{
			(*ppEnumCLSID = pEnumCLSID)->AddRef();
			pEnumCLSID->Release();
		}

		pCatInfo->Release();
	}

	return hr;
}

inline HRESULT CTracer::CreateTraceListenerFromCLSID(const CLSID& clsid)
{
	HRESULT hr = S_OK;

	// Note that we always ignore errors from instantiation of trace listeners
	CComPtr<IUnknown> spUnkListener;
	hr = spUnkListener.CoCreateInstance(clsid);
	if (SUCCEEDED(hr))
	{
		CComDispatchDriver spDispListener = spUnkListener;
		ATLASSERT(spDispListener != NULL);
		if (spDispListener != NULL)
		{
			m_rgListeners.Add(spDispListener);
		}
	}

	return S_OK;
}

inline TraceState CTracer::GetTraceState() const
{
	return m_eTraceState;
}

inline void CTracer::SetTraceState(TraceState eTraceState)
{
	m_eTraceState = eTraceState;
}

inline bool CTracer::GetTraceOn() const
{
	return (m_eTraceState == TraceStateRunning);
}

inline bool CTracer::GetTraceEnabled() const
{ 
	return m_bTraceEnabled; 
}

inline int CTracer::GetTraceSizeMax() const 
{ 
	return m_nTraceSizeMax; 
}

inline HRESULT CTracer::SetTraceSizeMax(int nTraceSizeMax) 
{ 
	m_nTraceSizeMax = nTraceSizeMax;
	
	return S_OK; 
}

inline bool CTracer::GetTraceArray() const 
{ 
	return m_bTraceArray; 
}

inline HRESULT CTracer::SetTraceArray(bool bTraceArray) 
{ 
	m_bTraceArray = bTraceArray; 
	
	return S_OK;
}

inline int CTracer::GetTraceArraySizeMax() const 
{ 
	return m_nTraceArraySizeMax; 
}

inline HRESULT CTracer::SetTraceArraySizeMax(int nTraceArraySizeMax) 
{ 
	m_nTraceArraySizeMax = nTraceArraySizeMax;
	
	return S_OK;
}

inline int CTracer::GetTraceSaveInterval() const
{
	return m_nTraceSaveInterval;
}

inline HRESULT CTracer::SetTraceSaveInterval(int nTraceSaveInterval)
{
	m_nTraceSaveInterval = nTraceSaveInterval;

	return S_OK;
}

inline HRESULT CTracer::SetTraceEnabled(bool bTraceEnabled)	
{ 
	HRESULT hr = S_OK;

	// Don't disable it if it's already disabled
	if (!bTraceEnabled && m_bTraceEnabled)		
	{
		// Make sure the tracer is stopped first
		hr = StopTrace();
		ATLASSERT(SUCCEEDED(hr));
	}

	if (SUCCEEDED(hr))
	{
		m_bTraceEnabled = bTraceEnabled;
	}

	return hr;
}

inline const CString& CTracer::GetTraceName() const 
{ 
	return m_strTraceName; 
}

inline HRESULT CTracer::SetTraceName(const CString& strTraceName) 
{ 
	m_strTraceName = strTraceName;
	
	return S_OK; 
}

inline const CString& CTracer::GetDriverIdentifier() const 
{ 
	return m_strDriverIdentifier; 
}

inline HRESULT CTracer::SetDriverIdentifier(const CString& strDriverIdentifier) 
{ 
	m_strDriverIdentifier = strDriverIdentifier;
	
	return S_OK; 
}

inline const CPath& CTracer::GetTraceTransformPath()
{
	return m_pathTraceTransform;
}

inline HRESULT CTracer::SetTraceTransformPath(const CPath& pathTransform)
{
	HRESULT hr = S_OK;

	m_pathTraceTransform = pathTransform;

	return hr;
}


inline HRESULT CTracer::StartTrace()	
{ 
	ATLASSERT(m_eTraceState != TraceStateRunning);
	if (m_eTraceState == TraceStateRunning)
		return E_UNEXPECTED;

	HRESULT hr = S_OK;

	CPath pathTraceLog;
	CTime startTime = CTime::GetCurrentTime();

	if (m_strTraceName.IsEmpty())
	{
		// A trace name wasn't specified, so generate a name using the driver identifier and the current time
		pathTraceLog = GetTraceLogPathFromTraceName(m_strDriverIdentifier, startTime);
	}
	else
	{
		// A trace name was specified, so use the trace name directly
		pathTraceLog = GetTraceLogPathFromTraceName(m_strTraceName);
	}

	hr = CreateTraceLog(pathTraceLog);
	if (SUCCEEDED(hr))
	{
		m_startTime = startTime;
		m_eTraceState = TraceStateRunning;
	}

	return hr;
}

inline HRESULT CTracer::StopTrace(TraceState eTraceState)
{
	if (!m_bTraceEnabled)
		return E_UNEXPECTED;			

	if (m_eTraceState == TraceStateStopped)
		return E_UNEXPECTED;

	HRESULT hr = S_OK;
	if (SUCCEEDED(hr))
	{
		m_eTraceState = eTraceState;
	}

	return hr;
}

inline HRESULT CTracer::Close()
{
	HRESULT hr = S_OK;

	m_bClosePending = true;

	return hr;
}

inline HRESULT CTracer::FlushTraceLog()
{
	HRESULT hr = S_OK;
	CTimeSpan timeElapsedSinceLastSave = CTime::GetCurrentTime() - m_timeLastSave;
	if (timeElapsedSinceLastSave.GetMinutes() >= m_nTraceSaveInterval)
	{
		hr = m_logFile.Flush();
		ATLASSERT(SUCCEEDED(hr));
		if (SUCCEEDED(hr))
		{
			ULONGLONG ulSize;
			hr = m_logFile.GetSize(ulSize);
			ATLASSERT(SUCCEEDED(hr));
			if (ulSize > m_nTraceSizeMax)
			{
				hr = StopTrace(TraceStateDataFull);
				ATLASSERT(SUCCEEDED(hr));
			}
		}

		m_timeLastSave = CTime::GetCurrentTime();
	}

	return hr;
}

inline HRESULT CTracer::CloseTraceLog()
{
	HRESULT hr = S_OK;

	// If we traced anything at all during the session, then the log file handle will be non-NULL and
	// we need to close out the root element tag.
	if (m_logFile.m_h != NULL)
	{
		// Close the root element tag
		WriteEndElement(false);		// </TraceRecords>

		m_logFile.Close();
	}

	m_bClosePending = false;
	m_eTraceState = TraceStateStopped;

	return hr;
}

inline bool CTracer::GetClosePending() const
{
	return m_bClosePending;
}

inline bool CTracer::IsMethodCallStackComplete() const
{
	return m_stackStartElements.GetCount() == 1;
}

inline HRESULT CTracer::WriteStartElement(const CStringA& strName, bool bWriteToListeners)
{
	HRESULT hr = S_OK;

	if (m_bStartElementPending)
	{
		// Our parent element has content, so close out the start tag
		WriteToTraceLog(">\r\n");
		
		if (bWriteToListeners)
		{
			WriteToTraceListenerEntry(">\r\n");
		}
		
		ATLASSERT(m_stackStartElements.GetCount() > 0);
		if (m_stackStartElements.GetCount() > 0)
		{
			// Adjust our parent element's content flag
			m_stackStartElements.GetTail().bHasContent = true;
		}

	}

	m_bStartElementPending = true;

	m_stackStartElements.AddTail(XmlStartElement(strName));

	// Indent
	for (int i = 0; i < m_nIndentLevel; i++)
	{
		WriteToTraceLog("\t");

		if (bWriteToListeners)
		{
			WriteToTraceListenerEntry("\t");
		}
	}

	WriteToTraceLog("<");
	WriteToTraceLog(strName);

	if (bWriteToListeners)
	{
		WriteToTraceListenerEntry("<");
		WriteToTraceListenerEntry(strName);
	}

	m_nIndentLevel++;

	return hr;
}

inline HRESULT CTracer::WriteAttributeString(const CStringA& strName, const CStringA& strValue)
{
	HRESULT hr = S_OK;

	ATLASSERT(m_bStartElementPending);
	if (m_bStartElementPending)
	{
		CStringA strPair;
		strPair.Format(" %s=\"%s\"", strName, strValue);
		WriteToTraceLog(strPair);
		WriteToTraceListenerEntry(strPair);
	}

	return hr;
}

inline HRESULT CTracer::WriteEndElement(bool bWriteToListeners)
{
	HRESULT hr = S_OK;
	
	XmlStartElement startElement = m_stackStartElements.RemoveTail();
	if (startElement.bHasContent)
	{
		// Indent
		for (int i = 0; i < m_nIndentLevel - 1; i++)
		{
			WriteToTraceLog("\t");

			if (bWriteToListeners)
			{
				WriteToTraceListenerEntry("\t");
			}
		}

		WriteToTraceLog("</");
		WriteToTraceLog(startElement.strName);
		WriteToTraceLog(">\r\n");

		if (bWriteToListeners)
		{
			WriteToTraceListenerEntry("</");
			WriteToTraceListenerEntry(startElement.strName);
			WriteToTraceListenerEntry(">\r\n");
		}
	}
	else
	{
		WriteToTraceLog("/>\r\n");

		if (bWriteToListeners)
		{
			WriteToTraceListenerEntry("/>\r\n");
		}
	}
	
	m_bStartElementPending = false;

	m_nIndentLevel--;

	return hr;
}

inline CPath CTracer::GetTraceLogPathFromTraceName(const CString& strTraceName) const
{
	// The input trace name may or may not have the .xml extension already
	CPath pathTraceLog = strTraceName;
	CString strExtension = pathTraceLog.GetExtension();
	if (strExtension.CompareNoCase(_T(".xml")) != 0)
	{
		pathTraceLog.AddExtension(_T(".xml"));
	}

	// If the trace name is actually a fully-qualified path, then use the path as-is
	if (pathTraceLog.IsRelative() || pathTraceLog.IsFileSpec())
	{
		// The resulting path should be relative to the current directory
		CPath pathTemp;
		pathTemp.Combine(GetCurrentTraceDirectory(), pathTraceLog);
		pathTraceLog = pathTemp;
	}

	return pathTraceLog;
}

inline CPath CTracer::GetTraceLogPathFromTraceName(const CString& strTraceName, const CTime& timeStamp) const
{
	// Timestamp format is: "yyyy-mm-dd_hr-min-sec"
	CString strTimeStamp = timeStamp.Format(_T("%Y-%m-%d_%H-%M-%S"));

	// Trace log filename format is: <baseName>_<timestamp>.xml
	CString strFileName = strTraceName + "_" + strTimeStamp + ".xml";

	CPath pathTraceLog;
	pathTraceLog.Combine(GetCurrentTraceDirectory(), strFileName);
	
	return pathTraceLog;
}

inline CPath CTracer::GetCurrentTraceDirectory() const
{
	CPath pathCurDir;
	TCHAR szCurrentDir[MAX_PATH];
	DWORD dRet = ::GetCurrentDirectory(MAX_PATH, szCurrentDir);
	ATLASSERT(dRet != 0);
	if (dRet != 0)
	{
		pathCurDir = szCurrentDir;
	}

	return pathCurDir;
}

inline HRESULT CTracer::CreateTraceLog(const CPath& pathTraceLog)
{
	HRESULT hr = S_OK;

	hr = m_logFile.Create(LPCTSTR(pathTraceLog), FILE_WRITE_DATA, FILE_SHARE_READ, CREATE_ALWAYS);
	ATLASSERT(SUCCEEDED(hr));
	if (SUCCEEDED(hr))
	{
		// Create the XML version processing instruction
		CStringA strTarget = "<?xml version=\"1.0\"?>\r\n";
		WriteToTraceLog(strTarget);

		// Create the XSLT processing instruction
		CPath pathTraceTransform = m_pathTraceTransform;
		CString strTraceTransformPath = CString(m_pathTraceTransform);
		if (strTraceTransformPath.IsEmpty())
		{
			// No transform was specified, so use the default trace name
			pathTraceTransform = GetTraceTransformPathFromFileName(_T("trace.xslt"));
			m_pathTraceTransform = pathTraceTransform;
		}
		else
		{
			// A transform was specified, so determine if it's an absolute path or simply a filename
			if (m_pathTraceTransform.IsFileSpec())
			{
				pathTraceTransform = GetTraceTransformPathFromFileName(CString(m_pathTraceTransform));
				m_pathTraceTransform = pathTraceTransform;
			}
		}

		if (m_pathTraceTransform.FileExists())
		{
			strTarget.Format("<?xml-stylesheet type=\"text/xsl\" href=\"file:\\\\%s\"?>\r\n", CStringA(m_pathTraceTransform));
			WriteToTraceLog(strTarget);
		}

		m_nIndentLevel = 0;
		m_bStartElementPending = false;

		// Create the root element
		WriteStartElement("TraceRecords", false);
	}

	return hr;
}

inline HRESULT CTracer::WriteToTraceLog(const CStringA& strData)
{
	HRESULT hr = S_OK;

	hr = m_logFile.Write(LPCSTR(strData), strData.GetLength());

	return hr;
}

inline HRESULT CTracer::WriteToTraceListenerEntry(const CStringA& strData)
{
	HRESULT hr = S_OK;

	// Don't accumulate listener data if there are no listeners
	if (m_rgListeners.GetCount() > 0)
	{
		m_strListenerEntry.Append(strData);
	}

	return hr;
}

inline HRESULT CTracer::SendTraceEvent(LONG lEventType, const CStringA& strEventData)
{
	HRESULT hr = S_OK;

	// Note that Invoke takes parameters in reverse order.  The signature of the listener method is:
	//
	//	HRESULT OnTraceEvent([in] LONG ProcessId, [in] BSTR DriverIdentifier, [in] LONG EventType, [in] BSTR EventData)
	// 
	CComVariant rgParams[] = { strEventData, lEventType, m_strDriverIdentifier, m_dwProcessId};
	
	for (int i = 0; i < (long)m_rgListeners.GetCount(); i++)
	{
		// We intentionally ignore the HRESULT from the listener
		m_rgListeners[i].InvokeN(OLESTR("OnTraceEvent"), rgParams, _countof(rgParams));
	}

	return hr;
}

inline HRESULT CTracer::CommitTraceListenerEntry()
{
	HRESULT hr = S_OK;

	// Don't commit any data if there are no trace listeners
	if (m_rgListeners.GetCount() > 0)
	{
		// Because the listener entry is not always written to when the log file is written to, it is possible to have an 
		// extraneous angle bracket before the "good" entry data.  So, we manually remove anything before the first angle bracket.
		int nIndex = m_strListenerEntry.Find('<');
		ATLASSERT(nIndex >= 0);
		if (nIndex >= 0)
		{
			CStringA strData = m_strListenerEntry.Mid(nIndex);		
			SendTraceEvent(1, strData);
		}
		
		m_strListenerEntry.Empty();
	}

	return hr;
}

inline CPath CTracer::GetTraceTransformPathFromFileName(const CString& strFileName) const
{
	// The input transform name may or may not have the .xslt extension already
	CPath pathTemp = strFileName;
	CString strExtension = pathTemp.GetExtension();
	if (strExtension.CompareNoCase(_T(".xslt")) != 0)
	{
		pathTemp.AddExtension(_T(".xslt"));
	}

	CPath pathTraceTransform = GetStandardTraceTransformDirectory();
	pathTraceTransform.Combine(pathTraceTransform, pathTemp);

	return pathTraceTransform;
}

inline CPath CTracer::GetStandardTraceTransformDirectory() const
{
	// Drivers running on a Nimbus development machine may have the transform in the following directory:
	// <IviStandardRootDir>\Components\Pacific MindWorks
	//
	// Drivers running on an end user machine will have the transform in the following directory
	// <IviStandardRootDir>\Components\<Vendor>

	// <IviStandardRootDir>\Components
	CPath pathIVI;
	pathIVI.Combine(GetIVIStandardRootDirectory(), _T("Components"));

	// <IviStandardRootDir>\Components\<Vendor>
	CPath pathTransformDir;
	pathTransformDir.Combine(pathIVI, GetDriverVendor());

	if (!pathTransformDir.FileExists())
	{
		// <IviStandardRootDir>\Components\Pacific MindWorks
		pathTransformDir = _T("");
		pathTransformDir.Combine(pathIVI, _T("Pacific MindWorks"));
	}

	return pathTransformDir;
}

///////////////////////////////////////////////////////////////////////////////
//	CParamTrace

typedef enum
{
	ParamDirectionIn,
	ParamDirectionOut,
	ParamDirectionInOut
} ParamDirection;

class CParamTrace 
{
public:
	ParamDirection GetDirection() const;

	HRESULT Serialize(CTracer* pTracer);

private:
	HRESULT SerializeParamValue(CTracer* pTracer);
	HRESULT SerializeSafeArrayParamValue(CTracer* pTracer, SAFEARRAY* psa);

	HRESULT SerializeScalarParamValue(CTracer* pTracer, const CComVariant& varValue);
	CStringA GetDataTypeString(VARTYPE vt, bool bIsArray);

protected:
	CStringA m_strName;
	CComVariant m_varValue;
	SAFEARRAY* m_psaValue;
	SAFEARRAY** m_ppsaValue;
	ParamDirection m_eDirection;
};

inline ParamDirection CParamTrace::GetDirection() const
{
	return m_eDirection;
}

inline HRESULT CParamTrace::Serialize(CTracer* pTracer)
{
	HRESULT hr = S_OK;

	pTracer->WriteAttributeString("Name", m_strName);

	CStringA strDirection;
	if (m_eDirection == ParamDirectionIn)
	{
		strDirection = "In";
	}
	else if (m_eDirection == ParamDirectionOut)
	{
		strDirection = "Out";
	}
	else if (m_eDirection == ParamDirectionInOut)
	{
		strDirection = "InOut";
	}
	else
	{
		ATLASSERT(!_T("Unexpected parameter direction."));
		hr = E_UNEXPECTED;
	}

	pTracer->WriteAttributeString("Direction", strDirection);

	SerializeParamValue(pTracer);
	
	return hr;
}

inline HRESULT CParamTrace::SerializeParamValue(CTracer* pTracer)
{
	HRESULT hr = S_OK;

	if (m_ppsaValue != NULL)
	{
		// This is either an [out] or [in,out] SAFEARRAY parameter
		hr = SerializeSafeArrayParamValue(pTracer, *m_ppsaValue);
	}
	else if (m_psaValue != NULL)
	{
		// This is an [in] SAFEARRAY parameter
		hr = SerializeSafeArrayParamValue(pTracer, m_psaValue);
	}
	else
	{
		hr = SerializeScalarParamValue(pTracer, m_varValue);
	}
	
	return hr;
}

inline HRESULT CParamTrace::SerializeScalarParamValue(CTracer* pTracer, const CComVariant& varValue)
{
	NTL_UNUSED(pTracer);

	HRESULT hr = S_OK;

	CStringA strValue;
	switch (varValue.vt)
	{
		case VT_I1 | VT_BYREF:
			strValue.Format("%d",  *varValue.pbVal);
			break;
		case VT_I1:
			strValue.Format("%d", varValue.bVal);
			break;
		case VT_I2 | VT_BYREF:
			strValue.Format("%d", *varValue.piVal);
			break;
		case VT_I2:
			strValue.Format("%d", varValue.iVal);
			break;
		case VT_I4 | VT_BYREF:
			strValue.Format("%d", *varValue.plVal);
			break;
		case VT_I4:
			strValue.Format("%d", varValue.lVal);
			break;
		case VT_I8 | VT_BYREF:
			strValue.Format("%d", *varValue.pllVal);
			break;
		case VT_I8:
			strValue.Format("%d", varValue.llVal);
			break;
		case VT_UI1 | VT_BYREF:
			strValue.Format("%d", *varValue.pbVal);
			break;
		case VT_UI1:
			strValue.Format("%d", varValue.bVal);
			break;
		case VT_UI2 | VT_BYREF:
			strValue.Format("%d", *varValue.puiVal);
			break;
		case VT_UI2:
			strValue.Format("%d", varValue.uiVal);
			break;
		case VT_UI4 | VT_BYREF:
			strValue.Format("%d", *varValue.pulVal);
			break;
		case VT_UI4:
			strValue.Format("%d", varValue.ulVal);
			break;
		case VT_UI8 | VT_BYREF:
			strValue.Format("%d", *varValue.pullVal);
			break;
		case VT_UI8:
			strValue.Format("%d", varValue.ullVal);
			break;
		case VT_INT | VT_BYREF:
			strValue.Format("%d", *varValue.pintVal);
			break;
		case VT_INT:
			strValue.Format("%d", varValue.intVal);
			break;
		case VT_R4 | VT_BYREF:
			strValue.Format("%.15g", *varValue.pfltVal);
			break;
		case VT_R4:
			strValue.Format("%.15g", varValue.fltVal);
			break;
		case VT_R8 | VT_BYREF:
			strValue.Format("%.15g", *varValue.pdblVal);
			break;
		case VT_R8:
			strValue.Format("%.15g", varValue.dblVal);
			break;
		case VT_BOOL | VT_BYREF:
			strValue = *varValue.pboolVal ? "true" : "false";
			break;
		case VT_BOOL:
			strValue = varValue.boolVal ? "true" : "false";
			break;
		case VT_BSTR | VT_BYREF:
			strValue = *varValue.pbstrVal;
			break;
		case VT_BSTR:
			strValue = varValue.bstrVal;
			break;
		case VT_VARIANT | VT_BYREF:
			strValue = "(variant)";
			break;
		case VT_VARIANT:
			strValue = "(variant)";
			break;
		case VT_DISPATCH | VT_BYREF:
		case VT_DISPATCH:
			strValue = "(interface)";
			break;
		case VT_UNKNOWN | VT_BYREF:
		case VT_UNKNOWN:
			strValue = "(interface)";
			break;
		case VT_NULL:
			strValue = "(null)";
			break;
		case VT_EMPTY:
			strValue = "(empty)";
			break;
		default:
			strValue = "(unknown)";
			break;
	}

	pTracer->WriteAttributeString("Value", strValue);
	pTracer->WriteAttributeString("DataType", GetDataTypeString(varValue.vt, false));

	return hr;
}

inline	HRESULT CParamTrace::SerializeSafeArrayParamValue(CTracer* pTracer, SAFEARRAY* psa)
{
	HRESULT hr = S_OK;
	
	if (psa == NULL)
	{
		pTracer->WriteAttributeString("NumDims", "0");

		return hr;
	}

	// Print out the number of dimensions
	UINT nNumDims = ::SafeArrayGetDim(psa);
	CStringA strNumDims;
	strNumDims.Format("%d", nNumDims);
	pTracer->WriteAttributeString("NumDims", strNumDims);

	// Print out the dimension sizes
	CStringA strDimSizes;
	for (UINT i = 0; i < nNumDims; i++)
	{
		long lDimSize = psa->rgsabound[i].cElements;
		CStringA strDimSize;
		strDimSize.Format("%d", lDimSize);
		strDimSizes += strDimSize;
		if (i < nNumDims - 1)
		{
			strDimSizes += ",";
		}
	}

	if (SUCCEEDED(hr))
	{
		pTracer->WriteAttributeString("DimSizes", strDimSizes);

		VARTYPE vt;
		hr = ::SafeArrayGetVartype(psa, &vt);
		ATLASSERT(SUCCEEDED(hr));
		if (SUCCEEDED(hr))
		{
			// Print out the data type
			pTracer->WriteAttributeString("DataType", GetDataTypeString(vt, true));

			// Only print out the elements for 1-dimensional arrays if option selected
			if (nNumDims == 1 && pTracer->GetTraceArray())
			{
				long lFirstDimSize = psa->rgsabound[0].cElements;
				for (long i = 0; i < lFirstDimSize && i < pTracer->GetTraceArraySizeMax() && SUCCEEDED(hr); i++)
				{
					VARIANT varElement;
					if (vt == VT_VARIANT)
					{
						hr = ::SafeArrayGetElement(psa, &i, &varElement);		// copy into the entire VARIANT
					}
					else
					{
						varElement.vt = vt;
						hr = ::SafeArrayGetElement(psa, &i, &varElement.bVal);	// copy only the data portion of the VARIANT
					}
					ATLASSERT(SUCCEEDED(hr));
					if (SUCCEEDED(hr))
					{
						pTracer->WriteStartElement("Element");
						SerializeScalarParamValue(pTracer, varElement);
						pTracer->WriteEndElement();
					}
				}
			}
		}
	}

	return hr;
}

inline CStringA CParamTrace::GetDataTypeString(VARTYPE vt, bool bIsArray)
{
	CStringA strDataType;
	switch (vt)
	{
		case VT_I1 | VT_BYREF:
		case VT_I1:
			strDataType = bIsArray ? "Char[]" : "Char";
			break;
		case VT_I2 | VT_BYREF:
		case VT_I2:
			strDataType = bIsArray ? "Int16[]" : "Int16";
			break;
		case VT_I4 | VT_BYREF:
		case VT_I4:
			strDataType = bIsArray ? "Int32[]" : "Int32";
			break;
		case VT_I8 | VT_BYREF:
		case VT_I8:
			strDataType = bIsArray ? "Int64[]" : "Int64";
			break;
		case VT_UI1 | VT_BYREF:
		case VT_UI1:
			strDataType = bIsArray ? "Byte[]" : "Byte";
			break;
		case VT_UI2 | VT_BYREF:
		case VT_UI2:
			strDataType = bIsArray ? "UInt16[]" : "UInt16";
			break;
		case VT_UI4 | VT_BYREF:
		case VT_UI4:
			strDataType = bIsArray ? "UInt32[]" : "UInt32";
			break;
		case VT_UI8 | VT_BYREF:
		case VT_UI8:
			strDataType = bIsArray ? "UInt64[]" : "UInt64";
			break;
		case VT_INT | VT_BYREF:
		case VT_INT:
			strDataType = bIsArray ? "Int32[]" : "Int32";
			break;
		case VT_R4 | VT_BYREF:
		case VT_R4:
			strDataType = bIsArray ? "Single[]" : "Single";
			break;
		case VT_R8 | VT_BYREF:
		case VT_R8:
			strDataType = bIsArray ? "Double[]" : "Double";
			break;
		case VT_BOOL | VT_BYREF:
		case VT_BOOL:
			strDataType = bIsArray ? "Boolean[]" : "Boolean";
			break;
		case VT_BSTR | VT_BYREF:
		case VT_BSTR:
			strDataType = bIsArray ? "String[]" : "String";
			break;
		case VT_VARIANT | VT_BYREF:
		case VT_VARIANT:
			strDataType = bIsArray ? "VARIANT[]" : "VARIANT";
			break;
		case VT_DISPATCH | VT_BYREF:
		case VT_DISPATCH:
			strDataType = bIsArray ? "IDispatch[]" : "IDispatch";
			break;
		case VT_UNKNOWN | VT_BYREF:
		case VT_UNKNOWN:
			strDataType = bIsArray ? "IUnknown[]" : "IUnknown";
			break;
		case VT_NULL:
		case VT_EMPTY:
			strDataType = "(unknown)";
			break;
		default:
			strDataType = "(unknown)";
			break;
	}

	return strDataType;
}

///////////////////////////////////////////////////////////////////////////////
//	CInParamTrace

class CInParamTrace : public CParamTrace
{
public:
	template <typename T>
	CInParamTrace(const CStringA& strName, T val)
	{
		m_strName = strName;
		m_eDirection = ParamDirectionIn;

		m_varValue = val;
		m_psaValue = NULL;
		m_ppsaValue = NULL;
	}

	template <>
	CInParamTrace(const CStringA& strName, VARIANT_BOOL val)
	{
		m_strName = strName;
		m_eDirection = ParamDirectionIn;

		m_varValue = val;
		m_varValue.vt = VT_BOOL;
		m_psaValue = NULL;
		m_ppsaValue = NULL;
	}

	template <>
	CInParamTrace(const CStringA& strName, SAFEARRAY* val)
	{
		// This specialization stores the SAFEARRAY parameter as a pointer instead of using the CComVariant member.
		// This avoids the SAFEARRAY copy that is automatically performed by the CComVariant assignment operator.
		m_strName = strName;
		m_eDirection = ParamDirectionIn;
		m_psaValue = val;
		m_ppsaValue = NULL;
	}
};

#define IN_PARAM(x)					new CInParamTrace(#x, x)

///////////////////////////////////////////////////////////////////////////////
//	COutParamTrace

class COutParamTrace : public CParamTrace
{
public:
	template <typename T>
	COutParamTrace(const CStringA& strName, void* pValue, T val)
	{
		m_strName = strName;
		m_eDirection = ParamDirectionOut;
		m_psaValue = NULL;
		m_ppsaValue = NULL;
		m_varValue = val;
		VARTYPE vt = m_varValue.vt;
		m_varValue.Clear();
		m_varValue.pbVal = (BYTE*)pValue;
		m_varValue.vt = (VARTYPE)(vt | VT_BYREF);
	}

	template <>
	COutParamTrace(const CStringA& strName, void* pValue, VARIANT_BOOL val)
	{
		m_strName = strName;
		m_eDirection = ParamDirectionOut;
		m_psaValue = NULL;
		m_ppsaValue = NULL;
		m_varValue = val;
		VARTYPE vt = m_varValue.vt;
		m_varValue.Clear();
		m_varValue.pbVal = (BYTE*)pValue;
		m_varValue.vt = (VARTYPE)(VT_BOOL | VT_BYREF);
	}

	template <>
	COutParamTrace(const CStringA& strName, void* pValue, SAFEARRAY* val)
	{
		// This specialization stores the SAFEARRAY parameter as a pointer instead of using the CComVariant member.
		// This avoids the SAFEARRAY copy that is automatically performed by the CComVariant assignment operator.
		m_strName = strName;
		m_eDirection = ParamDirectionOut;
		m_psaValue = val;
		m_ppsaValue = (SAFEARRAY**)pValue;
	}
};

#define OUT_PARAM(x)				new COutParamTrace(#x, x, *x)

///////////////////////////////////////////////////////////////////////////////
//	CInOutParamTrace

class CInOutParamTrace : public CParamTrace
{
public:
	template <typename T>
	CInOutParamTrace(const CStringA& strName, void* pValue, T val)
	{
		m_strName = strName;
		m_eDirection = ParamDirectionInOut;
		m_psaValue = NULL;
		m_ppsaValue = NULL;
		m_varValue = val;
		VARTYPE vt = m_varValue.vt;
		m_varValue.Clear();
		m_varValue.pbVal = (BYTE*)pValue;
		m_varValue.vt = (VARTYPE)(vt | VT_BYREF);
	}

	template <>
	CInOutParamTrace(const CStringA& strName, void* pValue, VARIANT_BOOL val)
	{
		m_strName = strName;
		m_eDirection = ParamDirectionInOut;
		m_psaValue = NULL;
		m_ppsaValue = NULL;
		m_varValue = val;
		VARTYPE vt = m_varValue.vt;
		m_varValue.Clear();
		m_varValue.pbVal = (BYTE*)pValue;
		m_varValue.vt = (VARTYPE)(VT_BOOL | VT_BYREF);
	}

	template <>
	CInOutParamTrace(const CStringA& strName, void* pValue, SAFEARRAY* val)
	{
		// This specialization stores the SAFEARRAY parameter as a pointer instead of using the CComVariant member.
		// This avoids the SAFEARRAY copy that is automatically performed by the CComVariant assignment operator.
		m_strName = strName;
		m_eDirection = ParamDirectionInOut;
		m_psaValue = val;
		m_ppsaValue = (SAFEARRAY**)pValue;



	}
};

#define INOUT_PARAM(x)				new CInOutParamTrace(#x, x, *x)

///////////////////////////////////////////////////////////////////////////////
//	CMethodTrace

#define MAX_PARAMS	25

class CMethodTrace
{
public:
	CMethodTrace(CTracer* pTracer, LPCTSTR pszIntfName, LPCTSTR pszMethodName, HRESULT* pHr, ...);
	~CMethodTrace();

	virtual HRESULT BeginSerialize();
	virtual HRESULT EndSerialize();

private:
	bool m_bTraceOn;
	CTracer* m_pTracer;
	CString m_strIntfName;
	CString m_strMethodName;
	HRESULT* m_pHr;
	CParamTrace* m_rgpParams[MAX_PARAMS];
	int m_nNumParams;
	__int64 m_llStartCount;
};

inline CMethodTrace::CMethodTrace(CTracer* pTracer, LPCTSTR pszIntfName, LPCTSTR pszMethodName, HRESULT* pHr, ...)
	: m_pTracer(pTracer), 
	  m_strIntfName(pszIntfName), 
	  m_strMethodName(pszMethodName), 
	  m_pHr(pHr),
	  m_bTraceOn(false), 
	  m_nNumParams(0)
{
	// It's important to keep track of all parameters, even if tracing is turned off, 
	// because they are allocated with new and must be deleted in the destructor
	va_list argList;
	va_start(argList, pHr);

	CParamTrace* pParam = va_arg(argList, CParamTrace*);
	for (int i = 0; i < MAX_PARAMS && pParam != NULL; i++)
	{
		m_rgpParams[i] = pParam;
		m_nNumParams++;
		pParam = va_arg(argList, CParamTrace*);
	}

	va_end(argList);

	// Don't trace if tracer is NULL => usually means we're not initialized yet
	if (m_pTracer != NULL)
	{
		if (m_pTracer->GetTraceOn())
		{
			m_bTraceOn = true;

			HRESULT hr = BeginSerialize();
			ATLASSERT(SUCCEEDED(hr));
			NTL_UNUSED(hr);
		}
	}
}

inline CMethodTrace::~CMethodTrace()
{
	HRESULT hr = S_OK;

	if (m_bTraceOn)
	{
		ATLASSERT(m_pTracer != NULL);
		if (m_pTracer != NULL)
		{
			hr = EndSerialize();
			ATLASSERT(SUCCEEDED(hr));
			if (SUCCEEDED(hr))
			{
				hr = m_pTracer->FlushTraceLog();
				ATLASSERT(SUCCEEDED(hr));
			}
		}
	}
	
	if (SUCCEEDED(hr) && m_pTracer != NULL && m_pTracer->GetClosePending())
	{
		hr = m_pTracer->CloseTraceLog();
		ATLASSERT(SUCCEEDED(hr));
	}

	for (int i = 0; i < m_nNumParams; i++)
	{
		delete m_rgpParams[i];
		m_rgpParams[i] = NULL;
	}
}

inline HRESULT CMethodTrace::BeginSerialize()
{
	HRESULT hr = S_OK;

	m_pTracer->WriteStartElement("Method");

	m_pTracer->WriteAttributeString("Name", CStringA(m_strMethodName));
	m_pTracer->WriteAttributeString("Interface", CStringA(m_strIntfName));

	SYSTEMTIME curTime;
	::GetLocalTime(&curTime);
	CStringA strStartTime;
	strStartTime.Format("%d:%d:%d:%d", curTime.wHour, curTime.wMinute, curTime.wSecond, curTime.wMilliseconds);
	m_pTracer->WriteAttributeString("StartTime", strStartTime);

	CStringA strThread;
	strThread.Format("%d", ::GetCurrentThreadId());
	m_pTracer->WriteAttributeString("Thread", strThread);

	LARGE_INTEGER llStartCount;
	::QueryPerformanceCounter(&llStartCount);
	m_llStartCount = llStartCount.QuadPart;

	CStringA strTimestamp;
	strTimestamp.Format("%llu", m_llStartCount);
	m_pTracer->WriteAttributeString("Timestamp", strTimestamp);

	// Serialize only the [in] and [in,out] parameters as children of the method element
	for (int i = 0; i < m_nNumParams; i++)
	{
		CParamTrace* pParam = m_rgpParams[i];
		if ((pParam->GetDirection() == ParamDirectionIn) || (pParam->GetDirection() == ParamDirectionInOut))
		{
			m_pTracer->WriteStartElement("Parameter");
			pParam->Serialize(m_pTracer);
			m_pTracer->WriteEndElement();
		}
	}
	
	return hr;
}

inline HRESULT CMethodTrace::EndSerialize()
{
	HRESULT hr = S_OK;

	static __int64 llCounterFreq = 0;
	if (llCounterFreq == 0)
	{
		LARGE_INTEGER llTempCounterFreq;
		::QueryPerformanceFrequency(&llTempCounterFreq);
		llCounterFreq = llTempCounterFreq.QuadPart;
	}

	LARGE_INTEGER llEndCount;
	::QueryPerformanceCounter(&llEndCount);

	double dExecutionTime = (double)(llEndCount.QuadPart - m_llStartCount) / (double)llCounterFreq;

	// Serialize only the [out] and [in,out] parameters as children of the method element
	for (int i = 0; i < m_nNumParams; i++)
	{
		CParamTrace* pParam = m_rgpParams[i];
		if ((pParam->GetDirection() == ParamDirectionOut) || (pParam->GetDirection() == ParamDirectionInOut))
		{
			m_pTracer->WriteStartElement("Parameter");
			pParam->Serialize(m_pTracer);
			m_pTracer->WriteEndElement();
		}
	}

	m_pTracer->WriteStartElement("HRESULT");

	CStringA strHr;
	strHr.Format("0x%08X", *m_pHr);
	m_pTracer->WriteAttributeString("Value", strHr);

	if (FAILED(*m_pHr))
	{
		CComPtr<IErrorInfo> spErrorInfo;
		if (::GetErrorInfo(0, &spErrorInfo) == S_OK)
		{
			CString strMessage;
			CComBSTR bstrDesc;
			if (SUCCEEDED(spErrorInfo->GetDescription(&bstrDesc)))
			{
				CT2A sz = COLE2T(bstrDesc);
				CStringA strMessage = sz;
				m_pTracer->WriteAttributeString("Message", strMessage);
			}
		}
	}

	m_pTracer->WriteEndElement();	// HRESULT

	m_pTracer->WriteStartElement("Execution");

	CStringA strExecutionTime;
	strExecutionTime.Format("%e", dExecutionTime);
	m_pTracer->WriteAttributeString("ExecutionTime", strExecutionTime);

	m_pTracer->WriteEndElement();	// Execution

	m_pTracer->WriteEndElement();	// Method

	// We only send data to trace listeners when we have a complete method call stack
	if (m_pTracer->IsMethodCallStackComplete())
	{
		m_pTracer->CommitTraceListenerEntry();
	}
	
	return hr;
}