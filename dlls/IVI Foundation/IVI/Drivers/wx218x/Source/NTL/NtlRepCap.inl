/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/
#include "ntldriver.h"
#include "ntlcoercion.h"

inline CRepCap::CRepCap()
	: m_nInstanceIndex(0)
{
}

inline CRepCap::~CRepCap()
{
}

inline HRESULT CRepCap::InternalFinalInitialize()
{
	HRESULT hr = S_OK;

	// Call user's custom initialization code
	hr = OnFinalInitialize();
	if (SUCCEEDED(hr))
	{
		hr = FinalInitializeRepCaps();
	}

	return hr;
}

inline HRESULT CRepCap::InternalFinalClose()
{
	HRESULT hr = S_OK;

	// Call user's custom close code FIRST
	hr = FinalCloseRepCaps();
	if (SUCCEEDED(hr))
	{
		hr = OnFinalClose();
	}

	return hr;
}

inline void CRepCap::SetInstanceName(const CString& strName)
{
	m_strInstanceName = strName;
}

inline const CString& CRepCap::GetInstanceName() const
{
	return m_strInstanceName;
}

inline void CRepCap::SetInstanceIndex(int nIndex)
{
	m_nInstanceIndex = nIndex;
}

inline int CRepCap::GetInstanceIndex() const
{
	return m_nInstanceIndex;
}

inline const CDriver* CRepCap::GetDriver() const
{
	return m_pRoot->GetDriver();
}

inline CDriver* CRepCap::GetDriver()
{
	return m_pRoot->GetDriver();
}

inline CString CRepCap::GetRepCapIdentifier()
{
	// This string is lazy-initialized
	if (m_strRepCapIdentifier == _T(""))
	{
		// Format is, for example:  <ParentRepCapIdentifier>.Agilent54600Trace[trace1]
		CString strParentRepCapIdentifier = m_pParent->GetRepCapIdentifier();
		if (strParentRepCapIdentifier != _T(""))
		{
			strParentRepCapIdentifier += _T(".");
		}

		m_strRepCapIdentifier.Format(_T("%s%s[%s]"), strParentRepCapIdentifier, GetClassName(), TranslatePhysicalName(GetInstanceName()));
	}

	return m_strRepCapIdentifier;
}

inline CString CRepCap::GetInherentOptionValue(const CString& strOptionName) const
{
	CString strValue;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		strValue = GetDriver()->GetInherentOptionValue(strOptionName);
	}

	return strValue;
}

inline CString CRepCap::GetDriverSetupOptionValue(const CString& strOptionName) const
{
	CString strValue;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		strValue = GetDriver()->GetDriverSetupOptionValue(strOptionName);
	}

	return strValue;
}

inline bool CRepCap::GetConfigSetting(const CString& strName, CComVariant& varValue) const
{
	bool bFound = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		bFound = GetDriver()->GetConfigSetting(strName, varValue);
	}

	return bFound;
}

inline bool CRepCap::GetConfigSetting(const CString& strName, CString& strValue) const
{
	bool bFound = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		bFound = GetDriver()->GetConfigSetting(strName, strValue);
	}

	return bFound;
}

inline bool CRepCap::GetConfigSetting(const CString& strName, int& nValue) const
{
	bool bFound = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		bFound = GetDriver()->GetConfigSetting(strName, nValue);
	}

	return bFound;
}

inline bool CRepCap::GetConfigSetting(const CString& strName, double& dblValue) const
{
	bool bFound = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		bFound = GetDriver()->GetConfigSetting(strName, dblValue);
	}

	return bFound;
}

inline bool CRepCap::GetConfigSetting(const CString& strName, bool& bValue) const
{
	bool bFound = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		bFound = GetDriver()->GetConfigSetting(strName, bValue);
	}

	return bFound;
}

inline CString CRepCap::TranslateVirtualName(const CString& strVirtualName) const
{
	CString strPhysicalName;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		strPhysicalName = GetDriver()->TranslateVirtualName(strVirtualName);
	}

	return strPhysicalName;
}

inline CString CRepCap::TranslatePhysicalName(const CString& strPhysicalName) const
{
	CString strVirtualName;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		strVirtualName = GetDriver()->TranslateVirtualName(strPhysicalName);
	}

	return strVirtualName;
}

inline CString CRepCap::TranslatePhysicalNameToExportedPhysicalName(const CString& strRepCapName, const CString& strPhysicalName) const
{
	CString strExportedPhysicalName;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		strExportedPhysicalName = GetDriver()->TranslatePhysicalNameToExportedPhysicalName(strRepCapName, strPhysicalName);
	}

	return strExportedPhysicalName;
}

inline CString CRepCap::GetModel() const
{
	CString strModel;
	if (GetInitialized())
	{
		strModel = GetDriver()->GetModel();
	}

	return strModel;
}

inline bool CRepCap::GetInitialized() const
{
	return (m_pRoot != NULL);
}

inline bool CRepCap::GetCache() const
{
	bool bVal = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{ 
		bVal = GetDriver()->GetCache();
	}

	return bVal;
}

inline bool CRepCap::GetInterchangeCheck() const
{
	bool bVal = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{ 
		bVal = GetDriver()->GetInterchangeCheck();
	}

	return bVal;
}

inline bool CRepCap::GetQueryInstrStatus() const
{
	bool bVal = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{ 
		bVal = GetDriver()->GetQueryInstrStatus();
	}

	return bVal;
}

inline bool CRepCap::GetRangeCheck() const
{
	bool bVal = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{ 
		bVal = GetDriver()->GetRangeCheck();
	}

	return bVal;
}

inline bool CRepCap::GetRecordCoercions() const
{
	bool bVal = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{ 
		bVal = GetDriver()->GetRecordCoercions();
	}

	return bVal;
}

inline bool CRepCap::GetSimulate() const
{
	bool bVal = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{ 
		bVal = GetDriver()->GetSimulate();
	}

	return bVal;
}

inline CString CRepCap::GetResourceDescriptor() const
{
	CString strResourceDescriptor;
	if (GetInitialized())
	{
		strResourceDescriptor = GetDriver()->GetResourceDescriptor();
	}

	return strResourceDescriptor;
}

inline CCoercionLog* CRepCap::GetCoercionLog() const
{
	CCoercionLog* pCoercionLog = NULL;
	if (GetInitialized())
	{
		pCoercionLog = GetDriver()->GetCoercionLog();
	}

	return pCoercionLog;
}

inline HRESULT CRepCap::PollInstrumentErrors()
{
	HRESULT hr = S_OK;

	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{ 
		hr = GetDriver()->PollInstrumentErrors();
	}

	return hr;
}

inline CTracer* CRepCap::GetTracer() const
{
	CTracer* pTracer = NULL;
	if (GetInitialized())
	{
		pTracer = GetDriver()->GetTracer();
	}

	return pTracer;
}

inline const CCallContext* CRepCap::GetCurrentContext() const
{
	const CCallContext* pCallContext = NULL;
	if (GetInitialized())
	{
		pCallContext = GetDriver()->GetCurrentContext();
	}

	return pCallContext;
}
