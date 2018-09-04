/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/ 

__declspec(selectany) CString CNode::m_strEmptyCommand = _T("");


inline CNode::CNode()
	: m_pRoot(NULL), m_pParent(NULL)
{
}

inline CNode::~CNode()
{
	POSITION pos = m_mapCacheEntries.GetStartPosition();
	while (pos != NULL)
	{
		delete m_mapCacheEntries.GetNextValue(pos);
	}
}

inline HRESULT CNode::InternalFinalConstruct()
{
	HRESULT hr = S_OK;

	return hr;
}

inline void CNode::InternalFinalRelease()
{
	if (m_pRoot != NULL && m_pParent != NULL)	/* don't do Release on ourself */
	{
		m_pRoot->Release();
		m_pRoot = NULL;
	}

	if (m_pParent != NULL)
	{
		m_pParent->Release();
		m_pParent = NULL;
	}
}

inline HRESULT CNode::InitNode(CNode* pRoot, CNode* pParent)
{
	HRESULT hr = S_OK;

	SetRoot(pRoot);
	SetParent(pParent);

	ResetObjectState();

	const CRepCapDescriptor** pRepCapDescriptorArray = GetRepCapDescriptors();
	while (*pRepCapDescriptorArray != NULL && SUCCEEDED(hr))
	{
		hr = CreateRepCap(*pRepCapDescriptorArray);

		pRepCapDescriptorArray++;
	}

	return hr;
}

inline HRESULT CNode::CloseNode()
{
	HRESULT hr = S_OK;

	const CRepCapDescriptor** pRepCapDescriptorArray = GetRepCapDescriptors();
	while (*pRepCapDescriptorArray != NULL && SUCCEEDED(hr))
	{
		hr = DeleteRepCap(*pRepCapDescriptorArray);

		pRepCapDescriptorArray++;
	}

	SetRoot(NULL);
	SetParent(NULL);

	return hr;
}

inline void CNode::InternalResetObjectState()
{
	ResetObjectState();

	POSITION pos = m_mapChildRepCaps.GetStartPosition();
	while (pos != NULL)
	{
		RepCapArray* pRepCapArray = m_mapChildRepCaps.GetNextValue(pos);
		for (int i = 0; i < (int)pRepCapArray->GetCount(); i++)
		{
			pRepCapArray->GetAt(i)->InternalResetObjectState();
		}
	}
}

inline void CNode::ResetObjectState()
{
	// Do nothing by default.  User code can override this
}

template <typename T>
T* CNode::GetRoot() const
{
	return static_cast<T*>(m_pRoot);
}

template <typename T>
T* CNode::GetParent() const
{
	return static_cast<T*>(m_pParent);
}

inline void CNode::SetRoot(CNode* pRoot)
{
	if (m_pRoot != pRoot)
	{
		if (m_pRoot != NULL && !IsRoot())
			m_pRoot->Release();

		m_pRoot = pRoot;

		if (m_pRoot != NULL && !IsRoot())	/* don't AddRef on ourself */
			m_pRoot->AddRef();
	}
}

inline bool CNode::IsRoot() const
{
	return (const_cast<CNode*>(this) == m_pRoot);
}

inline void CNode::SetParent(CNode* pParent)
{
	if (m_pParent != pParent)
	{
		if (m_pParent != NULL)
			m_pParent->Release();

		m_pParent = pParent;

		if (m_pParent != NULL)
			m_pParent->AddRef();
	}
}

inline HRESULT CNode::GetDynamicRepCapNames(const CString& strRepCapClassName, CAtlArray<CString>& rgRepCapNames)
{
	NTL_UNUSED(strRepCapClassName);
	NTL_UNUSED(rgRepCapNames);

	return S_OK;
}

inline bool CNode::InstrumentSupported() const
{
	bool bRet = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		const InstrModelMap* pModelMap = CInstrumentModelManager::GetModelMap();
		CString strModel = GetModel();
		CString strFamily;
		bRet = pModelMap->Lookup(strModel, strFamily);
	}

	return bRet;
}

inline bool CNode::InstrumentInFamily(const CString& strFamily) const
{
	bool bRet = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		CString strModel = GetModel();
		bRet = ModelInFamily(strModel, strFamily);
	}

	return bRet;
}

inline bool CNode::InstrumentIsModel(const CString& strModel) const
{
	bool bRet = false;
	ATLASSERT(GetInitialized());
	if (GetInitialized())
	{
		bRet = GetModel() == strModel;
	}

	return bRet;
}

inline bool CNode::ModelInFamily(const CString& strModel, const CString& strFamily) const
{
	bool bRet = false;
	InstrModelMap* pModelMap = NULL;
	if (CInstrumentModelManager::GetFamilyMap()->Lookup(strFamily, pModelMap))
	{
		CString strFamilyDummy;
		bRet = pModelMap->Lookup(strModel, strFamilyDummy);
	}

	return bRet;
}

template <typename T>
inline bool CNode::CacheContainsValue(const CString& strPath, T value) const
{
	bool bContainsValue = false;
	if (GetCache())
	{
		CCacheEntry<T>* pCacheEntry = GetOrCreateCacheEntry<T>(strPath);
		if (pCacheEntry != NULL)
		{
			bContainsValue = pCacheEntry->ContainsValue(value, GetModel(), this);
		}
	}

	return bContainsValue;
}

template <typename T>
inline void CNode::UpdateCache(const CString& strPath, T value)
{
	if (GetCache())
	{
		CCacheEntry<T>* pCacheEntry = GetOrCreateCacheEntry<T>(strPath);
		if (pCacheEntry != NULL)
		{
			pCacheEntry->UpdateValue(value);
		}
	}
}

template <typename T>
inline bool CNode::GetCachedValue(const CString& strPath, T* pValue) const
{
	bool bFound = false;
	if (GetCache())
	{
		CCacheEntry<T>* pCacheEntry = GetOrCreateCacheEntry<T>(strPath);
		if (pCacheEntry != NULL)
		{
			bFound = pCacheEntry->GetValue(pValue, this);
		}
	}

	return bFound;
}

template <typename T>
inline T CNode::CoerceUp(T val, int nAllowedValuesCount, T allowedValues[])
{
	// IMPORTANT: allowed values must be in numerical order (min...max)

	T coercedVal = CCoercionUtility::CoerceUp(val, nAllowedValuesCount, allowedValues);
	if (coercedVal != val)
	{
		GetCoercionLog()->AddRecord(val, coercedVal, GetRepCapIdentifier(), GetCurrentContext()->GetMethodIdentifier());
	}

	return coercedVal;
}

template <typename T>
inline T CNode::CoerceDown(T val, int nAllowedValuesCount, T allowedValues[])
{
	// IMPORTANT: allowed values must be in numerical order (min...max)

	T coercedVal = CCoercionUtility::CoerceDown(val, nAllowedValuesCount, allowedValues);
	if (coercedVal != val)
	{
		GetCoercionLog()->AddRecord(val, coercedVal, GetRepCapIdentifier(), GetCurrentContext()->GetMethodIdentifier());
	}

	return coercedVal;
}

template <typename RepCapClass>
inline int CNode::GetRepCapCount() const
{
	int nCount = -1;

	RepCapArray* pRepCapArray = NULL;
	if (m_mapChildRepCaps.Lookup(RepCapClass::ClassName(), pRepCapArray))
	{
		nCount = (int)pRepCapArray->GetCount();
	}

	return nCount;
}

template <typename RepCapClass>
inline RepCapClass* CNode::GetRepCap(const CString& strInstanceName) const
{
	RepCapArray* pRepCapArray = NULL;
	if (m_mapChildRepCaps.Lookup(RepCapClass::ClassName(), pRepCapArray))
	{
		CString strPhysicalName = TranslateVirtualName(strInstanceName);
		bool bFound = false;
		for (UINT i = 0; i < pRepCapArray->GetCount(); i++)
		{
			// Case-insensitive comparison
			CRepCap* pRepCap = pRepCapArray->GetAt(i);
			if (strPhysicalName.CompareNoCase(pRepCap->GetInstanceName()) == 0)
			{
				return reinterpret_cast<RepCapClass*>(pRepCap);
			}
		}
	}

	return NULL;
}

template <typename RepCapClass>
inline RepCapClass* CNode::GetRepCap(int nIndex) const
{
	return reinterpret_cast<RepCapClass*>(GetRepCapItem(RepCapClass::ClassName(), nIndex));
}

inline CRepCap* CNode::GetRepCapItem(const CString& strRepCapName, int nIndex) const
{
	RepCapArray* pRepCapArray = NULL;
	if (m_mapChildRepCaps.Lookup(strRepCapName, pRepCapArray))
	{
		if (nIndex < (int)pRepCapArray->GetCount())
		{
			CRepCap* pRepCap = pRepCapArray->GetAt(nIndex);
			return pRepCap;
		}
	}

	return NULL;
}

inline HRESULT CNode::CreateRepCap(const CRepCapDescriptor*  pRepCapDescriptor)
{
	HRESULT hr = S_OK;

	// Populate the child repcap name map with all static repcap names
	CAtlArray<CString> rgRepCapNames;
	const CString* pstrNames = (*pRepCapDescriptor->GetStaticNamesFunc())();
	int i = 0;
	while (!pstrNames[i].IsEmpty())
	{
		rgRepCapNames.Add(pstrNames[i]);
		i++;
	}

	CString strRepCapClassName = pRepCapDescriptor->GetClassName();

	// Populate the child repcap name map with all dynamic repcap names
	CAtlArray<CString> rgDynamicRepNames;
	hr = GetDynamicRepCapNames(strRepCapClassName, rgDynamicRepNames);
	if (SUCCEEDED(hr))
	{
		for (i = 0; i < (int)rgDynamicRepNames.GetCount(); i++)
		{
			rgRepCapNames.Add(rgDynamicRepNames[i]);
		}

		// Create all the instances of this repeated capability
		RepCapArray* pRepCapArray = new RepCapArray;
		for (i = 0; i < (int)rgRepCapNames.GetCount() && SUCCEEDED(hr); i++)
		{
			CRepCap* pRepCap = (*pRepCapDescriptor->GetCreatorFunc())();
			pRepCap->AddRef();

			pRepCap->SetInstanceName(rgRepCapNames.GetAt(i));
			pRepCap->SetInstanceIndex(i);

			pRepCapArray->Add(pRepCap);

			hr = pRepCap->InitNode(m_pRoot, this);
		}

		if (SUCCEEDED(hr))
		{
			m_mapChildRepCaps[strRepCapClassName] = pRepCapArray;
		}
	}

	return hr;
}

inline HRESULT CNode::FinalInitializeRepCaps()
{
	HRESULT hr = S_OK;

	POSITION pos = m_mapChildRepCaps.GetStartPosition();
	while (pos != NULL)
	{
		RepCapArray* pRepCapArray = m_mapChildRepCaps.GetNextValue(pos);
		for (int i = 0; i < (int)pRepCapArray->GetCount() && SUCCEEDED(hr); i++)
		{
			hr = pRepCapArray->GetAt(i)->InternalFinalInitialize();
		}
	}

	return hr;
}

inline HRESULT CNode::FinalCloseRepCaps()
{
	HRESULT hr = S_OK;

	POSITION pos = m_mapChildRepCaps.GetStartPosition();
	while (pos != NULL)
	{
		RepCapArray* pRepCapArray = m_mapChildRepCaps.GetNextValue(pos);
		for (int i = 0; i < (int)pRepCapArray->GetCount() && SUCCEEDED(hr); i++)
		{
			hr = pRepCapArray->GetAt(i)->InternalFinalClose();
		}
	}

	return hr;
}

inline HRESULT CNode::DeleteRepCap(const CRepCapDescriptor* pRepCapDescriptor)
{
	HRESULT hr = S_OK;

	RepCapArray* pRepCapArray = NULL;
	m_mapChildRepCaps.Lookup(pRepCapDescriptor->GetClassName(), pRepCapArray);

	// pRepCapArray could be NULL if GetDynamicRepCapNames is called and fails
	if (pRepCapArray != NULL)
	{
		for (UINT i = 0; i < pRepCapArray->GetCount() && SUCCEEDED(hr); i++)
		{
			hr = pRepCapArray->GetAt(i)->CloseNode();
			pRepCapArray->GetAt(i)->Release();
		}

		delete pRepCapArray;
	}

	return hr;
}

inline const CRepCapDescriptor* CNode::LookupRepCap(const CString& strRepCapClassName) const
{
	const CRepCapDescriptor* pRepCapDescriptor = NULL;

	const CRepCapDescriptor** pRepCapDescriptorArray = GetRepCapDescriptors();
	while (*pRepCapDescriptorArray != NULL && pRepCapDescriptor == NULL)
	{
		if ((*pRepCapDescriptorArray)->GetClassName() == strRepCapClassName)
		{
			pRepCapDescriptor = *pRepCapDescriptorArray;
		}

		pRepCapDescriptorArray++;
	}

	return pRepCapDescriptor;
}

template <typename RepCapClass>
inline HRESULT CNode::AddRepCapItem(BSTR bstrInstanceName)
{
	HRESULT hr = S_OK;

	RepCapArray* pRepCapArray = NULL;
	m_mapChildRepCaps.Lookup(RepCapClass::ClassName(), pRepCapArray);
	ATLASSERT(pRepCapArray != NULL);
	if (pRepCapArray == NULL)
		return E_UNEXPECTED;

	// Next available index
	int nRepCapIndex = (int)pRepCapArray->GetCount();

	const CRepCapDescriptor* pRepCapDescriptor = LookupRepCap(RepCapClass::ClassName());
	ATLASSERT(pRepCapDescriptor != NULL);
	if (pRepCapDescriptor == NULL)
		return E_UNEXPECTED;

	CRepCap* pRepCap = (*pRepCapDescriptor->GetCreatorFunc())();
	pRepCap->AddRef();

	CString strInstanceName = COLE2T(bstrInstanceName);
	pRepCap->SetInstanceName(strInstanceName);
	pRepCap->SetInstanceIndex(nRepCapIndex);

	pRepCapArray->Add(pRepCap);

	hr = pRepCap->InitNode(m_pRoot, this);

	return hr;
}

template <typename RepCapClass>
inline HRESULT CNode::RemoveRepCapItem(BSTR bstrInstanceName)
{
	HRESULT hr = S_OK;

	CString strInstanceName = COLE2T(bstrInstanceName);

	RepCapArray* pRepCapArray = NULL;
	m_mapChildRepCaps.Lookup(RepCapClass::ClassName(), pRepCapArray);
	ATLASSERT(pRepCapArray != NULL);
	if (pRepCapArray == NULL)
		return E_UNEXPECTED;

	CString strPhysicalName = TranslateVirtualName(strInstanceName);
	bool bFound = false;
	for (UINT i = 0; i < pRepCapArray->GetCount(); i++)
	{
		// Case-insensitive comparison
		CRepCap* pRepCap = pRepCapArray->GetAt(i);
		if (strPhysicalName.CompareNoCase(pRepCap->GetInstanceName()) == 0)
		{
			// We have found our item

			hr = pRepCap->CloseNode();
			pRepCap->Release();

			// Decrement by 1 the instance index of all the instances that follow
			// the instance we are about to remove
			for (UINT j = i + 1; j < pRepCapArray->GetCount(); j++)
			{
				CRepCap* pRepCap2 = pRepCapArray->GetAt(j);
				int nUpdatedInstanceIndex = pRepCap2->GetInstanceIndex() - 1;
				
				pRepCap2->SetInstanceIndex(nUpdatedInstanceIndex);
			}

			pRepCapArray->RemoveAt(i);

			bFound = true;
			break;
		}
	}

	if (!bFound)
		hr = GetErrorReporter().UnknownPhysicalIdentifier();

	return hr;
}


template <typename RepCapClass>
inline HRESULT CNode::GetRepCapItemCount(long* plCount)
{
	if (plCount == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	RepCapArray* pRepCapArray = NULL;
	if (!m_mapChildRepCaps.Lookup(RepCapClass::ClassName(), pRepCapArray))
		return E_UNEXPECTED;

	*plCount = (long)pRepCapArray->GetCount();

	return hr;
}

template <typename RepCapClass>
inline HRESULT CNode::GetRepCapItemName(long lIndex, BSTR* pbstrInstanceName)
{
	if (pbstrInstanceName == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;
	
	RepCapArray* pRepCapArray = NULL;
	if (!m_mapChildRepCaps.Lookup(RepCapClass::ClassName(), pRepCapArray))
		return E_UNEXPECTED;

	// NOTE: IVI-COM indexing is 1-based
	if ((lIndex < 1) || (lIndex > (long)pRepCapArray->GetCount()))
		return GetErrorReporter().InvalidValue(_T("Index"), lIndex);

	// Get the proper name to return, based on what is exported in the config store (either the qualified or unqualified physical name)
	CString strName = TranslatePhysicalNameToExportedPhysicalName(RepCapClass::RepCapName(), pRepCapArray->GetAt(lIndex - 1)->GetInstanceName());

	*pbstrInstanceName = strName.AllocSysString();

	return hr;
}


template <typename RepCapClass, typename ItfType>
inline HRESULT CNode::GetRepCapItem(CComBSTR bstrInstanceName, ItfType** ppRepCap)
{
	if (ppRepCap == NULL)
		return E_POINTER;
	*ppRepCap = NULL;

	HRESULT hr = S_OK;

	CString strInstanceName = COLE2T(bstrInstanceName);
	strInstanceName.Trim();

	RepCapArray* pRepCapArray = NULL;
	if (!m_mapChildRepCaps.Lookup(RepCapClass::ClassName(), pRepCapArray))
		return E_UNEXPECTED;

	if (pRepCapArray->GetCount() == 1 && strInstanceName.IsEmpty())
	{
		// If there is only one repcap instance, IVI requires that we accept an empty name string
		return pRepCapArray->GetAt(0)->QueryInterface(ppRepCap);
	}

	CString strPhysicalName = TranslateVirtualName(strInstanceName);
	bool bFound = false;
	for (UINT i = 0; i < pRepCapArray->GetCount(); i++)
	{
		// Case-insensitive comparison
		CRepCap* pRepCap = pRepCapArray->GetAt(i);
		if (strPhysicalName.CompareNoCase(pRepCap->GetInstanceName()) == 0)
		{
			bFound = true;
			hr = pRepCap->QueryInterface(ppRepCap);
			break;
		}
	}

	if (!bFound)
		hr = GetErrorReporter().UnknownPhysicalIdentifier();

	return hr;
}

inline HRESULT CNode::ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, BSTR bstrValue)
{
	HRESULT hr;

	// Important: Can't use COLE2T here for a variable argument
	CString strValue(bstrValue);
	hr = GetErrorReporter().InvalidValue(pszMethod, pszParam, LPCTSTR(strValue));

	return hr;
}

inline HRESULT CNode::ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, LPCTSTR pszValue)
{
	HRESULT hr;

	hr = GetErrorReporter().InvalidValue(pszMethod, pszParam, pszValue);

	return hr;
}

inline HRESULT CNode::ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, double dValue)
{
	HRESULT hr;

	hr = GetErrorReporter().InvalidValue(pszMethod, pszParam, dValue);

	return hr;
}

inline HRESULT CNode::ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, float fValue)
{
	HRESULT hr;

	hr = GetErrorReporter().InvalidValue(pszMethod, pszParam, fValue);

	return hr;
}

inline HRESULT CNode::ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, long lValue)
{
	HRESULT hr;

	hr = GetErrorReporter().InvalidValue(pszMethod, pszParam, lValue);

	return hr;
}

inline HRESULT CNode::ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, short sValue)
{
	HRESULT hr;

	hr = GetErrorReporter().InvalidValue(pszMethod, pszParam, (long)sValue);

	return hr;
}

inline HRESULT CNode::ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, BYTE cValue)
{
	HRESULT hr = S_OK;

	hr = GetErrorReporter().InvalidValue(pszMethod, pszParam, (long)cValue);

	return hr;
}

inline HRESULT CNode::ReportError(UINT uResid, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, uResid);

	hr = GetErrorReporter().ReportV(uResid, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CNode::ReportErrorEx(UINT uResid, LPCTSTR szErrorDetails, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, szErrorDetails);

	hr = GetErrorReporter().ReportExV(uResid, szErrorDetails, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CNode::ReportIOError()
{
	HRESULT hr;

	IErrorInfo* pErrorInfo = NULL;
	hr = GetErrorInfo(NULL, &pErrorInfo);
	if (hr == S_OK)
	{
		CComBSTR bstrDescription;
		hr = pErrorInfo->GetDescription(&bstrDescription);
		if (SUCCEEDED(hr))
		{
			CString strDescription(bstrDescription);
			hr = GetErrorReporter().IoError(strDescription);
		}
		else
		{
			hr = GetErrorReporter().IoError();
		}

		pErrorInfo->Release();
	}
	else
	{
		hr = GetErrorReporter().IoError();
	}

	return hr;
}

inline HRESULT CNode::ReportIOTimeoutError()
{
	HRESULT hr;

	IErrorInfo* pErrorInfo = NULL;
	hr = GetErrorInfo(NULL, &pErrorInfo);
	if (hr == S_OK)
	{
		CComBSTR bstrDescription;
		hr = pErrorInfo->GetDescription(&bstrDescription);
		if (SUCCEEDED(hr))
		{
			CString strDescription(bstrDescription);
			hr = GetErrorReporter().IoTimeoutError(strDescription);
		}
		else
		{
			hr = GetErrorReporter().IoTimeoutError();
		}

		pErrorInfo->Release();
	}
	else
	{
		hr = GetErrorReporter().IoTimeoutError();
	}

	return hr;
}

inline CString CNode::GetRepCapIdentifier() 
{ 
	// Not a repcap, by default
	return _T("");
}

inline void CNode::InvalidateCacheAll()
{
	// Invalidates all cache data on all objects in the driver
	if (m_pRoot != NULL)
	{
		m_pRoot->InvalidateCache();
	}
}

inline void CNode::InvalidateCache()
{
	// Invalidates all cache data on this object AND all child repcaps
	POSITION pos = m_mapCacheEntries.GetStartPosition();
	while (pos != NULL)
	{
		CCacheEntryBase* pEntry = m_mapCacheEntries.GetNextValue(pos);
		pEntry->Invalidate();
	}

	pos = m_mapChildRepCaps.GetStartPosition();
	while (pos != NULL)
	{
		RepCapArray* pRepCapArray = m_mapChildRepCaps.GetNextValue(pos);
		for (int i = 0; i < (int)pRepCapArray->GetCount(); i++)
		{
			pRepCapArray->GetAt(i)->InvalidateCache();
		}
	}
}

inline void CNode::InvalidateCacheEntry(const CString& strPath)
{
	// Invalidates a single cache entry
	CCacheEntryBase* pEntry = GetCacheEntry(strPath);
	if (pEntry != NULL)
	{
		pEntry->Invalidate();
	}
}

template <typename T>
void CNode::InitializeCacheEntry(const CString& strKey, T value)
{
	CCacheEntryBase* pEntryBase = GetCacheEntry(strKey);
	ATLASSERT(pEntryBase == NULL);
	if (pEntryBase == NULL)
	{
		CCacheEntry<T>* pEntry = GetOrCreateCacheEntry<T>(strKey);
		ATLASSERT(pEntry != NULL);
		pEntry->UpdateValue(value);
	}
}

template <typename T>
void CNode::UpdateCacheEntry(const CString& strKey, T value)
{
	CCacheEntryBase* pEntryBase = GetCacheEntry(strKey);
	ATLASSERT(pEntryBase != NULL);
	if (pEntryBase != NULL)
	{
		CCacheEntry<T>* pEntry = (CCacheEntry<T>*)(pEntryBase);
		pEntry->UpdateValue(value);
	}
}

template <typename T>
void CNode::GetCacheEntryValue(const CString& strKey, T* value)
{
	CCacheEntryBase* pEntryBase = GetCacheEntry(strKey);
	ATLASSERT(pEntryBase != NULL);
	if (pEntryBase != NULL)
	{
		CCacheEntry<T>* pEntry = (CCacheEntry<T>*)(pEntryBase);
		pEntry->GetValue(value);
	}
}

template <typename T>
CCacheEntry<T>* CNode::GetOrCreateCacheEntry(const CString& strKey)
{
	// This function only looks in THIS object's cache
	CCacheEntry<T>* pEntry = NULL;
	CCacheEntryBase* pEntryBase = NULL;
	bool bFound = m_mapCacheEntries.Lookup(strKey, pEntryBase);
	if (!bFound)
	{	
		// Entry has not been allocated, so allocate one
		pEntry = new CCacheEntry<T>();

		m_mapCacheEntries[strKey] = pEntry;
	}
	else
	{
		pEntry = static_cast<CCacheEntry<T>*>(pEntryBase);
	}

	return pEntry;
}

inline CCacheEntryBase* CNode::GetCacheEntry(const CString& strPath)
{
	CAtlArray<CString> rgRepCapSpecs;
	CString strKey = ParseCacheEntryPath(strPath, rgRepCapSpecs);

	CCacheEntryBase* pCacheEntry = NULL;
	if (rgRepCapSpecs.GetCount() > 0)
	{
		// Get cache entry from another node in the object model
		if (rgRepCapSpecs[0].CompareNoCase(_T("Driver")) == 0)
		{
			// This is an absolute path => starts from the ROOT object
			if (m_pRoot != NULL)
			{
				CString strNewPath = strPath;
				strNewPath.Delete(0, 7);	// remove "Driver."
				pCacheEntry = m_pRoot->GetCacheEntry(strNewPath);
			}
		}
		else
		{
			// This is a relative path => starts from THIS object
			pCacheEntry = GetCacheEntry(rgRepCapSpecs, strKey);

			// NOTE: Can't reference rgRepCapSpecs after this point, because previous call has emptied it
		}
	}
	else
	{
		// Get cache entry from this object's cache map
		m_mapCacheEntries.Lookup(strKey, pCacheEntry);
	}

	return pCacheEntry;
}

inline CCacheEntryBase* CNode::GetCacheEntry(CAtlArray<CString>& rgRepCapSpecs, const CString& strKey)
{
	// NOTE: This function will remove elements from the input array rgRepCapSpecs
	CCacheEntryBase* pCacheEntry = NULL;
	if (rgRepCapSpecs.GetCount() > 0)
	{
		// We're referencing a cache entry on a child repcap, so delegate to our immediate child's CNode
		CString strRepCapSpec = rgRepCapSpecs[0];
		rgRepCapSpecs.RemoveAt(0);

		CString strRepCapName;
		long lRepCapIndex = ParseRepCapSpec(strRepCapSpec, strRepCapName);
		CNode* pRepCap = GetRepCapItem(strRepCapName, lRepCapIndex);
		if (pRepCap == NULL)
		{
			ATLASSERT(!"Invalid repeated capability name.");
		}
		else
		{
			pCacheEntry = pRepCap->GetCacheEntry(rgRepCapSpecs, strKey);
		}
	}
	else
	{
		// We're referencing a cache entry on THIS repcap
		m_mapCacheEntries.Lookup(strKey, pCacheEntry);
	}

	return pCacheEntry;
}

inline const CString CNode::ParseCacheEntryPath(const CString& strPathIn, CAtlArray<CString>& rgRepCapSpecs)
{
	// Format of cache entry path is: "Channels[0].Measurements[45].IAgilentMeasurement.Frequency"
	rgRepCapSpecs.RemoveAll();

	CString strPath = strPathIn;
	CString strKey;

	// Parse out the parts of the path
	CAtlArray<CString> rgParts;
	int nPos = 0;
	CString strToken = strPath.Tokenize(_T("."), nPos);
	while (strToken != _T(""))
	{
		rgParts.Add(strToken);
		strToken = strPath.Tokenize(_T("."), nPos);
	}

	if (rgParts.GetCount() < 2)
	{
		ATLASSERT(!"Invalid format for coupling specification.");
		return _T("");
	}
	else if (rgParts.GetCount() == 2)
	{
		// This is a simple path that references a cache entry on this object
		strKey = rgParts[0] + "." + rgParts[1];
	}
	else
	{
		// This is a complex path that references a cache entry on a child repcap
		
		// Strip off the cache entry key
		strKey = rgParts[rgParts.GetCount() - 2] + "." + rgParts[rgParts.GetCount() - 1];
		rgParts.RemoveAt(rgParts.GetCount() - 1);
		rgParts.RemoveAt(rgParts.GetCount() - 1);

		rgRepCapSpecs.InsertArrayAt(0, &rgParts);
	}

	return strKey;
}

inline long CNode::ParseRepCapSpec(const CString& strRepCapSpecIn, CString& strRepCapName)
{
	// Format of strRepCapSpec is: "RepCapName[Index]"
	CString strRepCapSpec = strRepCapSpecIn;
	long lRepCapIndex = -1;
	strRepCapSpec.Trim();
	int lLeftBracketIndex = strRepCapSpec.Find('[');
	if (lLeftBracketIndex > 0)
	{
		strRepCapName = strRepCapSpec.Left(lLeftBracketIndex);
		CString strRepCapIndex = strRepCapSpec.Right(strRepCapSpec.GetLength() - lLeftBracketIndex - 1);
		strRepCapIndex.TrimRight(']');
		lRepCapIndex = _ttol(strRepCapIndex);
	}

	return lRepCapIndex;
}

inline void CNode::DestroyAllCacheEntries()
{
	m_mapCacheEntries.RemoveAll();
}

template <>
const CEnumCommandConverter<VARIANT_BOOL>* GetEnumCommandConverter<VARIANT_BOOL>(const CString& strMethodIdentifier);

template <typename T>
bool CNode::EnumToCommand(T enumVal, CString& strCommand) const
{
	const CEnumCommandConverter<T>* pConverter = GetEnumCommandConverter<T>(GetCurrentContext()->GetMethodIdentifier());
	ATLASSERT(pConverter != NULL);
	if (pConverter != NULL)
	{
		return pConverter->ValueToString(GetModel(), enumVal, strCommand);
	}

	return false;
}

template <typename T>
bool CNode::EnumFromResponse(const CString& strCommand, T& enumVal) const
{
	const CEnumCommandConverter<T>* pConverter = GetEnumCommandConverter<T>(GetCurrentContext()->GetMethodIdentifier());
	ATLASSERT(pConverter != NULL);
	if (pConverter != NULL)
	{
		return pConverter->ValueFromString(GetModel(), strCommand, enumVal);
	}

	return false;
}

template <typename T>
bool CNode::EnumToName(T enumVal, CString& strName) const
{
	const CEnumNameConverter<T>* pConverter = GetEnumNameConverter<T>();
	ATLASSERT(pConverter != NULL);
	if (pConverter != NULL)
	{
		return pConverter->ValueToName(enumVal, strName);
	}

	return false;
}

template <typename T>
bool CNode::EnumFromName(const CString& strName, T& enumVal) const
{
	const CEnumNameConverter<T>* pConverter = GetEnumNameConverter<T>();
	ATLASSERT(pConverter != NULL);
	if (pConverter != NULL)
	{
		return pConverter->ValueFromName(strName, enumVal);
	}

	return false;
}

inline const CString& CNode::GetInstrCommand() const
{
	return m_rgCommands.IsEmpty() ? m_strEmptyCommand : m_rgCommands.GetHead();
}

inline const CString& CNode::GetInstrResponse() const
{
	return m_rgResponses.IsEmpty() ? m_strEmptyCommand : m_rgResponses.GetHead();
}

inline void CNode::PushInstrCommand(const CString& strCmd)
{
	m_rgCommands.AddHead(strCmd);
}

inline CString CNode::PopInstrCommand()
{
	ATLASSERT(!m_rgCommands.IsEmpty());

	return m_rgCommands.RemoveHead();
}

inline void CNode::PopInstrCommandNoReturn()
{
	ATLASSERT(!m_rgCommands.IsEmpty());

	m_rgCommands.RemoveHeadNoReturn();
}

inline void CNode::PushInstrResponse(const CString& strCmd)
{
	m_rgResponses.AddHead(strCmd);
}

inline CString CNode::PopInstrResponse()
{
	ATLASSERT(!m_rgResponses.IsEmpty());

	return m_rgResponses.RemoveHead();
}

inline void CNode::PopInstrResponseNoReturn()
{
	ATLASSERT(!m_rgResponses.IsEmpty());

	m_rgResponses.RemoveHeadNoReturn();
}

///////////////////////////////////////////////////////////////////////////
// Deprecated functions
//

template <typename T>
bool CNode::EnumToString(T enumVal, CString& strCommand)
{
	return EnumToCommand(enumVal, strCommand);
}

template <typename T>
CString CNode::EnumToString(T enumVal)
{
	CString strCommand;
	EnumToString(enumVal, strCommand);

	return strCommand;
}

template <typename T>
bool CNode::EnumFromString(const CString& strCommand, T& enumVal)
{
	return EnumFromResponse(strCommand, enumVal);
}

template <typename T>
T CNode::EnumFromString(const CString& strCommand)
{
	T enumVal;
	EnumFromString(strCommand, enumVal);

	return enumVal;
}

inline bool CNode::BoolToString(VARIANT_BOOL bVal, CString& strCommand)
{
	return BoolToCommand(bVal, strCommand);
}

inline bool CNode::InstrumentSupported()
{
	return static_cast<const CNode*>(this)->InstrumentSupported();
}

inline bool CNode::InstrumentInFamily(const CString& strFamily)
{
	return static_cast<const CNode*>(this)->InstrumentInFamily(strFamily);
}

inline bool CNode::InstrumentIsModel(const CString& strModel)
{
	return static_cast<const CNode*>(this)->InstrumentIsModel(strModel);
}

inline bool CNode::ModelInFamily(const CString& strModel, const CString& strFamily)
{
	return static_cast<const CNode*>(this)->ModelInFamily(strModel, strFamily);
}

inline bool CNode::BoolFromString(const CString& strCommand, VARIANT_BOOL& bVal)
{
	return BoolFromResponse(strCommand, bVal);
}

#ifndef NTL_NO_IO
inline HRESULT CNode::SetTrailingForReads(const CString& strTrailing)
{
	HRESULT hr = S_OK;

	GetIo().SetTrailingForReads(strTrailing);

	return hr;
}

inline HRESULT CNode::SetTrailingForWrites(const CString& strTrailing)
{
	HRESULT hr = S_OK;

	GetIo().SetTrailingForWrites(strTrailing);

	return hr;
}

inline HRESULT CNode::GetTerminationCharacterEnabled(bool* pbEnable)
{
	HRESULT hr = S_OK;

	GetIo().GetTerminationCharacterEnabled(pbEnable);

	return hr;
}

inline HRESULT CNode::SetTerminationCharacterEnabled(bool bEnable)
{
	HRESULT hr = S_OK;

	GetIo().SetTerminationCharacterEnabled(bEnable);

	return hr;
}

inline HRESULT CNode::DeviceClear()
{
	HRESULT hr = S_OK;

	hr = GetIo().Clear();

	return hr;
}

inline HRESULT CNode::ReadSTB(long* plStatus)
{
	HRESULT hr = S_OK;

	short sStatus;
	hr = GetIo().ReadStatusByte(&sStatus);
	if (SUCCEEDED(hr))
	{
		*plStatus = sStatus;
	}

	return hr;
}

inline HRESULT CNode::SetIOTimeout(long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().SetTimeout(lTimeout);

	return hr;
}

inline HRESULT CNode::GetIOTimeout(long* plTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().GetTimeout(plTimeout);

	return hr;
}

inline HRESULT CNode::InstrPrintf(LPCTSTR pszFormat, ...)
{
	HRESULT hr = S_OK;

	// IMPORTANT: Strings in the variable argument list must be LPCTSTR or CString, NOT BSTR or LPWSTR
	va_list argList;
	va_start(argList, pszFormat);

	hr = GetIo().VPrintf(CString(pszFormat), argList);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().FlushWrite();
	}

	va_end(argList);

	return hr;
}

inline HRESULT CNode::InstrPrintfNoPoll(LPCTSTR pszFormat, ...)
{
	HRESULT hr = S_OK;

	// IMPORTANT: Strings in the variable argument list must be LPCTSTR or CString, NOT BSTR or LPWSTR
	va_list argList;
	va_start(argList, pszFormat);

	hr = GetIo().VPrintfNoPoll(CString(pszFormat), argList);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().FlushWrite();
	}

	va_end(argList);

	return hr;
}

inline HRESULT CNode::InstrQuery(const CString& strCommand, double* pdResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().QueryNumber(strCommand, pdResult, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrQuery(const CString& strCommand, float* pfResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().QueryNumber(strCommand, pfResult, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrQuery(const CString& strCommand, long* plResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().QueryNumber(strCommand, plResult, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrQuery(const CString& strCommand, short* psResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().QueryNumber(strCommand, psResult, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrQuery(const CString& strCommand, BYTE* pbResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().QueryNumber(strCommand, pbResult, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrQuery(const CString& strCommand, CString& strResult, long cchDesired, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().QueryfWithTimeout(strCommand, _T("%#$Cs"), lTimeout, &cchDesired, &strResult);

	return hr;
}

inline HRESULT CNode::InstrQueryf(LPCTSTR pszWriteFormat, double* pdResult, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, pdResult);

	hr = GetIo().VPrintfNoPoll(CString(pszWriteFormat), argList);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().FlushWrite();
		if (SUCCEEDED(hr))
		{
			hr = GetIo().ReadNumber(pdResult);
		}
	}
	
	va_end(argList);

	return hr;
}

inline HRESULT CNode::InstrQueryf(LPCTSTR pszWriteFormat, float* pfResult, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, pfResult);

	hr = GetIo().VPrintfNoPoll(CString(pszWriteFormat), argList);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().FlushWrite();
		if (SUCCEEDED(hr))
		{
			hr = GetIo().ReadNumber(pfResult);
		}
	}
	
	va_end(argList);

	return hr;
}

inline HRESULT CNode::InstrQueryf(LPCTSTR pszWriteFormat, long* plResult, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, plResult);

	hr = GetIo().VPrintfNoPoll(CString(pszWriteFormat), argList);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().FlushWrite();
		if (SUCCEEDED(hr))
		{
			hr = GetIo().ReadNumber(plResult);
		}
	}
	
	va_end(argList);

	return hr;
}

inline HRESULT CNode::InstrQueryf(LPCTSTR pszWriteFormat, short* psResult, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, psResult);

	hr = GetIo().VPrintfNoPoll(CString(pszWriteFormat), argList);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().FlushWrite();
		if (SUCCEEDED(hr))
		{
			hr = GetIo().ReadNumber(psResult);
		}
	}
	
	va_end(argList);

	return hr;
}

inline HRESULT CNode::InstrQueryf(LPCTSTR pszWriteFormat, BYTE* pbResult, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, pbResult);

	hr = GetIo().VPrintfNoPoll(CString(pszWriteFormat), argList);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().FlushWrite();
		if (SUCCEEDED(hr))
		{
			hr = GetIo().ReadNumber(pbResult);
		}
	}
	
	va_end(argList);

	return hr;
}

inline HRESULT CNode::InstrQueryf(LPCTSTR pszWriteFormat, CString& strResult, long cchDesired, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, cchDesired);

	hr = GetIo().VPrintfNoPoll(CString(pszWriteFormat), argList);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().FlushWrite();
		if (SUCCEEDED(hr))
		{
			hr = GetIo().ReadString(strResult);
		}
	}
	
	va_end(argList);

	return hr;
}

inline HRESULT CNode::InstrRead(BYTE* pBuf, long cbDesired, long* plActualLength, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().Read(pBuf, cbDesired, plActualLength, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrRead(CString& strResult, long cchDesired, long lTimeout, bool bRemoveTrailing)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(cchDesired);

	CString strTrailing = GetIo().GetTrailingForReads();
	if (!bRemoveTrailing)
	{
		GetIo().SetTrailingForReads(_T(""));
	}

	hr = GetIo().ReadString(strResult, lTimeout);

	if (!bRemoveTrailing)
	{
		GetIo().SetTrailingForReads(strTrailing);
	}

	return hr;
}

inline HRESULT CNode::InstrRead(SAFEARRAY** ppsa, long cbDesired, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().Read(ppsa, cbDesired, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrWrite(BYTE* pBuf, long cbDesired, long* pcbActual, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().Write(pBuf, cbDesired, pcbActual, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrWrite(const CString& strCommand, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteString(strCommand, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrWrite(SAFEARRAY* psa, long cbDesired, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().Write(psa, cbDesired, NULL, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrWriteNoPoll(BYTE* pBuf, long cbDesired, long* pcbActual, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteNoPoll(pBuf, cbDesired, pcbActual, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrWriteNoPoll(const CString& strCommand, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteStringNoPoll(strCommand, true, lTimeout);

	return hr;
}

inline HRESULT CNode::InstrWriteNoPoll(SAFEARRAY* psa, long cbDesired, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteNoPoll(psa, cbDesired, NULL, true, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteString(const CString& strData, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteString(strData, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteNumber(double val, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteNumber(val, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteNumber(long val, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteNumber(val, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteNumber(BYTE val, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteNumber(val, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteNumber(VARIANT data, NtlAsciiType type, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(type);

	ATLASSERT((data.vt & VT_ARRAY) == 0);

	switch (data.vt)
	{
		case VT_UI1:
			hr = GetIo().WriteNumber(data.bVal, bFlush, lTimeout);
			break;
		case VT_I2:
			hr = GetIo().WriteNumber(data.iVal, bFlush, lTimeout);
			break;
		case VT_I4:
			hr = GetIo().WriteNumber(data.lVal, bFlush, lTimeout);
			break;
		case VT_R4:
			hr = GetIo().WriteNumber(data.fltVal, bFlush, lTimeout);
			break;
		case VT_R8:
			hr = GetIo().WriteNumber(data.dblVal, bFlush, lTimeout);
			break;
		default:
			ATLASSERT(!_T("Unexpected data type."));
			hr = E_INVALIDARG;
			break;
	}

	return hr;
}

inline HRESULT CNode::FormattedWriteList(double* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteList(pValues, lLength, strListSeparator, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteList(long* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteList(pValues, lLength, strListSeparator, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteList(BYTE* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteList(pValues, lLength, strListSeparator, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteList(SAFEARRAY* psa, NtlAsciiType type, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(type);

	hr = GetIo().WriteList(psa, strListSeparator, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteList(VARIANT data, NtlAsciiType type, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(type);

	ATLASSERT((data.vt & VT_ARRAY) != 0);

	SAFEARRAY* psa = NULL;
	if ((data.vt & VT_BYREF) != 0)
	{
		psa = *data.pparray;
	}
	else
	{
		psa = data.parray;
	}

	hr = GetIo().WriteList(psa, strListSeparator, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteIEEEBlock(const CString& strCommand, double* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteBinaryBlock(strCommand, pValues, lLength, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteIEEEBlock(const CString& strCommand, long* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteBinaryBlock(strCommand, pValues, lLength, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteIEEEBlock(const CString& strCommand, short* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteBinaryBlock(strCommand, pValues, lLength, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteIEEEBlock(const CString& strCommand, BYTE* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteBinaryBlock(strCommand, pValues, lLength, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteIEEEBlock(const CString& strCommand, VARIANT data, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	ATLASSERT((data.vt & VT_ARRAY) != 0);

	SAFEARRAY* psa = NULL;
	if ((data.vt & VT_BYREF) != 0)
	{
		psa = *data.pparray;
	}
	else
	{
		psa = data.parray;
	}

	hr = GetIo().WriteBinaryBlock(strCommand, psa, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedWriteIEEEBlock(const CString& strCommand, SAFEARRAY* pData, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().WriteBinaryBlock(strCommand, pData, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadString(CString& strResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadString(strResult, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadString(BSTR* pbstrResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadString(pbstrResult, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadNumber(double* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadNumber(pValue, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadNumber(long* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadNumber(pValue, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadNumber(BYTE* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadNumber(pValue, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadNumber(NtlAsciiType type, VARIANT* pData, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(type);

	double dVal;
	hr = GetIo().ReadNumber(&dVal, bFlush, lTimeout);
	if (SUCCEEDED(hr))
	{
		CComVariant var(dVal);
		hr = var.Detach(pData);
	}

	return hr;
}

inline HRESULT CNode::FormattedReadList(double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadList(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadList(long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadList(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadList(BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadList(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadList(CComBSTR* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadList(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadList(NtlAsciiType type, const CString& strListSeparator, VARIANT* pData, long lTimeout)
{
	HRESULT hr = S_OK;

	IoDataType eType = IoDataTypeByte;
	switch (type)
	{
		case NtlAsciiType_UI1:
			eType = IoDataTypeByte;
			break;
		case NtlAsciiType_I2:
			eType = IoDataTypeInt16;
			break;
		case NtlAsciiType_I4:
			eType = IoDataTypeInt32;
			break;
		case NtlAsciiType_R4:
			eType = IoDataTypeReal32;
			break;
		case NtlAsciiType_R8:
			eType = IoDataTypeReal64;
			break;
		case NtlAsciiType_BSTR:
			eType = IoDataTypeString;
			break;
		default:
			ATLASSERT(!_T("Unexpected data type."));
			hr = E_INVALIDARG;
			break;
	}

	if (SUCCEEDED(hr))
	{
		SAFEARRAY* psa = NULL;
		hr = GetIo().ReadList(&psa, eType, strListSeparator, lTimeout);
		if (SUCCEEDED(hr))
		{
			::VariantInit(pData);
			hr = ::SafeArrayGetVartype(psa, &pData->vt);
			if (SUCCEEDED(hr))
			{
				pData->vt |= VT_ARRAY;
				pData->parray = psa;
			}
		}
	}

	return hr;
}

inline HRESULT CNode::FormattedReadList(NtlAsciiType type, const CString& strListSeparator, SAFEARRAY** pData, long lTimeout)
{
	HRESULT hr = S_OK;

	IoDataType eType = IoDataTypeByte;
	switch (type)
	{
		case NtlAsciiType_UI1:
			eType = IoDataTypeByte;
			break;
		case NtlAsciiType_I2:
			eType = IoDataTypeInt16;
			break;
		case NtlAsciiType_I4:
			eType = IoDataTypeInt32;
			break;
		case NtlAsciiType_R4:
			eType = IoDataTypeReal32;
			break;
		case NtlAsciiType_R8:
			eType = IoDataTypeReal64;
			break;
		case NtlAsciiType_BSTR:
			eType = IoDataTypeString;
			break;
		default:
			ATLASSERT(!_T("Unexpected data type."));
			hr = E_INVALIDARG;
			break;
	}

	if (SUCCEEDED(hr))
	{
		hr = GetIo().ReadList(pData, eType, strListSeparator, lTimeout);
	}

	return hr;
}

inline HRESULT CNode::FormattedReadIEEEBlock(double* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadBinaryBlock(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadIEEEBlock(long* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadBinaryBlock(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadIEEEBlock(BYTE* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().ReadBinaryBlock(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedReadIEEEBlock(NtlBinaryType type, VARIANT* pData, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	IoDataType eType = IoDataTypeByte;
	switch (type)
	{
		case NtlBinaryType_UI1:
			eType = IoDataTypeByte;
			break;
		case NtlBinaryType_I2:
			eType = IoDataTypeInt16;
			break;
		case NtlBinaryType_I4:
			eType = IoDataTypeInt32;
			break;
		case NtlBinaryType_R4:
			eType = IoDataTypeReal32;
			break;
		case NtlBinaryType_R8:
			eType = IoDataTypeReal64;
			break;
		default:
			ATLASSERT(!_T("Unexpected data type."));
			hr = E_INVALIDARG;
			break;
	}

	if (SUCCEEDED(hr))
	{
		SAFEARRAY* psa = NULL;
		hr = GetIo().ReadBinaryBlock(&psa, eType, bSeekToBlock, bFlush, lTimeout);
		if (SUCCEEDED(hr))
		{
			::VariantInit(pData);
			hr = ::SafeArrayGetVartype(psa, &pData->vt);
			if (SUCCEEDED(hr))
			{
				pData->vt |= VT_ARRAY;
				pData->parray = psa;
			}
		}
	}

	return hr;
}

inline HRESULT CNode::FormattedReadIEEEBlock(NtlBinaryType type, SAFEARRAY** pData, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	IoDataType eType = IoDataTypeByte;
	switch (type)
	{
		case NtlBinaryType_UI1:
			eType = IoDataTypeByte;
			break;
		case NtlBinaryType_I2:
			eType = IoDataTypeInt16;
			break;
		case NtlBinaryType_I4:
			eType = IoDataTypeInt32;
			break;
		case NtlBinaryType_R4:
			eType = IoDataTypeReal32;
			break;
		case NtlBinaryType_R8:
			eType = IoDataTypeReal64;
			break;
		default:
			ATLASSERT(!_T("Unexpected data type."));
			hr = E_INVALIDARG;
			break;
	}

	if (SUCCEEDED(hr))
	{
		hr = GetIo().ReadBinaryBlock(pData, eType, bSeekToBlock, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CNode::FormattedFlushWrite(bool bSendEnd, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().FlushWrite(bSendEnd, lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedFlushRead(long lTimeout)
{
	HRESULT hr = S_OK;

	hr = GetIo().FlushRead(lTimeout);

	return hr;
}

inline HRESULT CNode::FormattedSetBufferSize(NtlBufferMask mask, long lSize)
{
	HRESULT hr = S_OK;

	IoBufferMask ioMask = IoReadAndWriteBuffers;
	switch (mask)
	{
		case NTLIO_IN_BUF:
			ioMask = IoReadBuffer;
			break;
		case NTLIO_OUT_BUF:
			ioMask = IoWriteBuffer;
			break;
		case NTLIO_IN_AND_OUT_BUFS:
			ioMask = IoReadAndWriteBuffers;
			break;
		default:
			ATLASSERT(!_T("Unexpected buffer mask."));
			hr = E_INVALIDARG;
			break;
	}
	
	if (SUCCEEDED(hr))
	{
		hr = GetIo().SetBufferSize(ioMask, lSize);
	}

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// Formatting utility functions

inline HRESULT CNode::Printf(CString& strBuf, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = CFormattedIo::VPrintf(strBuf, GetDriver(), strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CNode::Printf(LPSTR pszBuf, long cbBuf, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = CFormattedIo::VPrintf(pszBuf, cbBuf, GetDriver(), strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CNode::Printf(BYTE* pBuf, long cbBuf, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = CFormattedIo::VPrintf(pBuf, cbBuf, GetDriver(), strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CNode::VPrintf(CString& strBuf, const CString& strFormat, va_list& argList)
{
	HRESULT hr = S_OK;

	hr = CFormattedIo::VPrintf(strBuf, GetDriver(), strFormat, argList);

	return hr;
}

inline HRESULT CNode::VPrintf(LPSTR pszBuf, long cbBuf, const CString& strFormat, va_list& argList)
{
	HRESULT hr = S_OK;

	hr = CFormattedIo::VPrintf(pszBuf, cbBuf, GetDriver(), strFormat, argList);

	return hr;
}

inline HRESULT CNode::VPrintf(BYTE* pBuf, long cbBuf, const CString& strFormat, va_list& argList)
{
	HRESULT hr = S_OK;

	hr = CFormattedIo::VPrintf(pBuf, cbBuf, GetDriver(), strFormat, argList);

	return hr;
}
	
inline HRESULT CNode::Scanf(const CString& strBuf, const CString strFormat, ...)	
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = CFormattedIo::VScanf(strBuf, GetDriver(), strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CNode::Scanf(LPCSTR pszBuf, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = CFormattedIo::VScanf(pszBuf, GetDriver(), strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CNode::Scanf(BYTE* pBuf, long cbBuf, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = CFormattedIo::VScanf(pBuf, cbBuf, GetDriver(), strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CNode::VScanf(const CString& strBuf, const CString& strFormat, va_list& argList)
{
	HRESULT hr = S_OK;

	hr = CFormattedIo::VScanf(strBuf, GetDriver(), strFormat, argList);

	return hr;
}

inline HRESULT CNode::VScanf(LPCSTR pszBuf, const CString& strFormat, va_list& argList)	
{
	HRESULT hr = S_OK;

	hr = CFormattedIo::VScanf(pszBuf, GetDriver(), strFormat, argList);

	return hr;
}

inline HRESULT CNode::VScanf(BYTE* pBuf, long cbBuf, const CString& strFormat, va_list& argList)
{
	HRESULT hr = S_OK;

	hr = CFormattedIo::VScanf(pBuf, cbBuf, GetDriver(), strFormat, argList);

	return hr;
}

inline HRESULT CNode::InstrPrintCommand()
{
	HRESULT hr = S_OK;

	CString strCommand = GetInstrCommand();

	hr = GetIo().WriteString(strCommand);

	return hr;
}

inline HRESULT CNode::InstrPrintCommand(SAFEARRAY* psaDummyArg, ...)
{
	HRESULT hr = S_OK;

	CString strCommand = GetInstrCommand();

	va_list argList;
	va_start(argList, psaDummyArg);

	hr = GetIo().VPrintf(strCommand, argList);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().FlushWrite();
	}

	va_end(argList);

	return hr;
}

inline HRESULT CNode::InstrPrintCommandNoPoll()
{
	HRESULT hr = S_OK;

	CString strCommand = GetInstrCommand();

	hr = GetIo().WriteStringNoPoll(strCommand);

	return hr;
}

inline HRESULT CNode::InstrPrintCommandNoPoll(SAFEARRAY* psaDummyArg, ...)
{
	HRESULT hr = S_OK;

	CString strCommand = GetInstrCommand();

	va_list argList;
	va_start(argList, psaDummyArg);

	hr = GetIo().VPrintfNoPoll(strCommand, argList);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().FlushWrite();
	}

	va_end(argList);

	return hr;
}

inline HRESULT CNode::InstrQueryResponse(long lTimeout, ...)
{
	HRESULT hr = S_OK;

	CString strCommand = GetInstrCommand();
	CString strResponse = GetInstrResponse();

	va_list argList;
	va_start(argList, lTimeout);

	hr = GetIo().VPrintfNoPoll(strCommand, argList, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().FlushWrite(true, lTimeout);
		if (SUCCEEDED(hr))
		{
			hr = GetIo().VScanf(strResponse, argList, lTimeout);
		}
	}

	va_end(argList);

	return hr;
}

inline HRESULT CNode::InstrQueryCommand(double* pdResult, long lTimeout)
{
	HRESULT hr = S_OK;

	CString strCommand = GetInstrCommand();

	hr = GetIo().WriteStringNoPoll(strCommand);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().ReadNumber(pdResult, true, lTimeout);
	}

	return hr;
}

inline HRESULT CNode::InstrQueryCommand(float* pfResult, long lTimeout)
{
	HRESULT hr = S_OK;

	CString strCommand = GetInstrCommand();

	hr = GetIo().WriteStringNoPoll(strCommand);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().ReadNumber(pfResult, true, lTimeout);
	}

	return hr;
}

inline HRESULT CNode::InstrQueryCommand(long* plResult, long lTimeout)
{
	HRESULT hr = S_OK;

	CString strCommand = GetInstrCommand();

	hr = GetIo().WriteStringNoPoll(strCommand);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().ReadNumber(plResult, true, lTimeout);
	}

	return hr;
}

inline HRESULT CNode::InstrQueryCommand(short* psResult, long lTimeout)
{
	HRESULT hr = S_OK;

	CString strCommand = GetInstrCommand();

	hr = GetIo().WriteStringNoPoll(strCommand);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().ReadNumber(psResult, true, lTimeout);
	}

	return hr;
}

inline HRESULT CNode::InstrQueryCommand(BYTE* pbResult, long lTimeout)
{
	HRESULT hr = S_OK;

	CString strCommand = GetInstrCommand();

	hr = GetIo().WriteStringNoPoll(strCommand);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().ReadNumber(pbResult, true, lTimeout);
	}

	return hr;
}

inline HRESULT CNode::InstrQueryCommand(CString& strResult, long cchDesired, long lTimeout)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(cchDesired);

	CString strCommand = GetInstrCommand();

	hr = GetIo().WriteStringNoPoll(strCommand);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().ReadString(strResult, lTimeout);
	}

	return hr;
}

inline HRESULT CNode::InstrQueryCommand(BSTR* pbstrResult, long lTimeout)
{
	HRESULT hr = S_OK;

	CString strCommand = GetInstrCommand();

	hr = GetIo().WriteStringNoPoll(strCommand);
	if (SUCCEEDED(hr))
	{
		hr = GetIo().ReadString(pbstrResult, lTimeout);
	}

	return hr;
}

inline HRESULT CNode::InstrQueryCommandBool(VARIANT_BOOL* plResult, long lTimeout)
{
	if (plResult == NULL)
		return E_POINTER;
	*plResult = VARIANT_FALSE;

	HRESULT hr = S_OK;

	hr = InstrQueryCommandEnum(plResult, lTimeout);

	return hr;
}

template <typename T>
HRESULT CNode::InstrQueryCommandEnum(T* peResult, long lTimeout)
{
	if (peResult == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	CString strEnumString;
	hr = InstrQueryCommand(strEnumString, MAX_ENUM_STRING, lTimeout);
	if (SUCCEEDED(hr))
	{
		bool bFound = EnumFromResponse<T>(strEnumString, *peResult);
		if (!bFound)
		{
			CString strErr;
			strErr.Format(_T("Method %s received unrecognized string '%s'."), GetCurrentContext()->GetMethodIdentifier(), strEnumString);
			hr = GetErrorReporter().UnexpectedResponse(strErr);
		}
	}

	return hr;
}

#endif // NTL_NO_IO	

#ifdef NTL_MANAGED_CPP_EXTENSIONS
inline HRESULT CNode::ConvertSystemArrayToSAFEARRAY(System::Double data __gc[], SAFEARRAY** ppsa)
{
	HRESULT hr = S_OK;

	if (data != NULL)
	{
		SAFEARRAY* psa = ::SafeArrayCreateVectorEx(VT_R8, 0, data->Length, NULL);
		if (psa != NULL)
		{
			void* pvData = NULL;
			hr = ::SafeArrayAccessData(psa, &pvData);
			if (SUCCEEDED(hr))
			{
				System::IntPtr dest(pvData);
				System::Runtime::InteropServices::Marshal::Copy(data, 0, dest, data->Length);
				::SafeArrayUnaccessData(psa);

				*ppsa = psa;
			}
		}
		else
		{
			hr = GetErrorReporter().OutOfMemory();
		}
	}
	else
	{
		*ppsa = NULL;
	}

	return hr;
}

inline HRESULT CNode::ConvertSystemArrayToSAFEARRAY(System::Int32 data __gc[], SAFEARRAY** ppsa)
{
	HRESULT hr = S_OK;

	if (data != NULL)
	{
		SAFEARRAY* psa = ::SafeArrayCreateVectorEx(VT_I4, 0, data->Length, NULL);
		if (psa != NULL)
		{
			void* pvData = NULL;
			hr = ::SafeArrayAccessData(psa, &pvData);
			if (SUCCEEDED(hr))
			{
				System::IntPtr dest(pvData);
				System::Runtime::InteropServices::Marshal::Copy(data, 0, dest, data->Length);
				::SafeArrayUnaccessData(psa);

				*ppsa = psa;
			}
		}
		else
		{
			hr = GetErrorReporter().OutOfMemory();
		}
	}
	else
	{
		*ppsa = NULL;
	}

	return hr;
}

inline HRESULT CNode::ConvertSystemArrayToSAFEARRAY(System::Int16 data __gc[], SAFEARRAY** ppsa)
{
	HRESULT hr = S_OK;

	if (data != NULL)
	{
		SAFEARRAY* psa = ::SafeArrayCreateVectorEx(VT_I2, 0, data->Length, NULL);
		if (psa != NULL)
		{
			void* pvData = NULL;
			hr = ::SafeArrayAccessData(psa, &pvData);
			if (SUCCEEDED(hr))
			{
				System::IntPtr dest(pvData);
				System::Runtime::InteropServices::Marshal::Copy(data, 0, dest, data->Length);
				::SafeArrayUnaccessData(psa);

				*ppsa = psa;
			}
		}
		else
		{
			hr = GetErrorReporter().OutOfMemory();
		}
	}
	else
	{
		*ppsa = NULL;
	}

	return hr;
}

inline HRESULT CNode::ConvertSystemArrayToSAFEARRAY(System::Byte data __gc[], SAFEARRAY** ppsa)
{
	HRESULT hr = S_OK;

	if (data != NULL)
	{
		SAFEARRAY* psa = ::SafeArrayCreateVectorEx(VT_UI1, 0, data->Length, NULL);
		if (psa != NULL)
		{
			void* pvData = NULL;
			hr = ::SafeArrayAccessData(psa, &pvData);
			if (SUCCEEDED(hr))
			{
				System::IntPtr dest(pvData);
				System::Runtime::InteropServices::Marshal::Copy(data, 0, dest, data->Length);
				::SafeArrayUnaccessData(psa);

				*ppsa = psa;
			}
		}
		else
		{
			hr = GetErrorReporter().OutOfMemory();
		}
	}
	else
	{
		*ppsa = NULL;
	}

	return hr;
}

inline HRESULT CNode::ConvertSAFEARRAYToSystemArray(SAFEARRAY* psa, ManagedDoubleArray* data)
{
	HRESULT hr = S_OK;

	if (psa != NULL)
	{
		int nLowerBound;
		int nCount;
		hr = GetSafeArrayVectorSizeInfo(psa, &nLowerBound, &nCount);
		if (SUCCEEDED(hr))
		{
			void* pvData = NULL;
			hr = ::SafeArrayAccessData(psa, &pvData);
			if (SUCCEEDED(hr))
			{
				System::IntPtr src(pvData);
				System::Double dest __gc[] = new System::Double __gc[nCount];

				System::Runtime::InteropServices::Marshal::Copy(src, dest, nLowerBound, nCount);

				*data = dest;

				::SafeArrayUnaccessData(psa);
			}
		}
	}
	else
	{
		*data = NULL;
	}

	return hr;
}

inline HRESULT CNode::ConvertSAFEARRAYToSystemArray(SAFEARRAY* psa, ManagedInt32Array* data)
{
	HRESULT hr = S_OK;

	if (psa != NULL)
	{
		int nLowerBound;
		int nCount;
		hr = GetSafeArrayVectorSizeInfo(psa, &nLowerBound, &nCount);
		if (SUCCEEDED(hr))
		{
			void* pvData = NULL;
			hr = ::SafeArrayAccessData(psa, &pvData);
			if (SUCCEEDED(hr))
			{
				System::IntPtr src(pvData);
				System::Int32 dest __gc[] = new System::Int32 __gc[nCount];

				System::Runtime::InteropServices::Marshal::Copy(src, dest, nLowerBound, nCount);

				*data = dest;

				::SafeArrayUnaccessData(psa);
			}
		}
	}
	else
	{
		*data = NULL;
	}

	return hr;
}

inline HRESULT CNode::ConvertSAFEARRAYToSystemArray(SAFEARRAY* psa, ManagedInt16Array* data)
{
	HRESULT hr = S_OK;

	if (psa != NULL)
	{
		int nLowerBound;
		int nCount;
		hr = GetSafeArrayVectorSizeInfo(psa, &nLowerBound, &nCount);
		if (SUCCEEDED(hr))
		{
			void* pvData = NULL;
			hr = ::SafeArrayAccessData(psa, &pvData);
			if (SUCCEEDED(hr))
			{
				System::IntPtr src(pvData);
				System::Int16 dest __gc[] = new System::Int16 __gc[nCount];

				System::Runtime::InteropServices::Marshal::Copy(src, dest, nLowerBound, nCount);

				*data = dest;

				::SafeArrayUnaccessData(psa);
			}
		}
	}
	else
	{
		*data = NULL;
	}

	return hr;
}

inline HRESULT CNode::ConvertSAFEARRAYToSystemArray(SAFEARRAY* psa, ManagedByteArray* data)
{
	HRESULT hr = S_OK;

	if (psa != NULL)
	{
		int nLowerBound;
		int nCount;
		hr = GetSafeArrayVectorSizeInfo(psa, &nLowerBound, &nCount);
		if (SUCCEEDED(hr))
		{
			void* pvData = NULL;
			hr = ::SafeArrayAccessData(psa, &pvData);
			if (SUCCEEDED(hr))
			{
				System::IntPtr src(pvData);
				System::Byte dest __gc[] = new System::Byte __gc[nCount];

				System::Runtime::InteropServices::Marshal::Copy(src, dest, nLowerBound, nCount);

				*data = dest;

				::SafeArrayUnaccessData(psa);
			}
		}
	}
	else
	{
		*data = NULL;
	}

	return hr;
}

#endif // NTL_MANAGED_CPP_EXTENSIONS