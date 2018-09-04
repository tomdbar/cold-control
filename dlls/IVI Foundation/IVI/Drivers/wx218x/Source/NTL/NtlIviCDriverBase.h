/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2008
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <ivicshared.h>
#include <stdarg.h>
#include <atlstr.h>
#include <math.h>
#include "atlrx.h"
#include "ntlvisatypeconversion.h"
#include "ntliviccommon.h"
#include "ntlcallcontext.h"
#include "ntlerrorreporter.h"
#include "ntlutil.h"

#if ! defined (IVIC_DRIVER_TRACE)
#define IVIC_TRACE //
#elif defined (IVIC_DRIVER_TRACE) // IVIC_DRIVER_TRACE is ON
#define IVIC_TRACE	ATLTRACE
#endif // IVIC_DRIVER_TRACE

#define SELECTOR_STATUS_BADLY_FORMED_SELECTOR	0xBFFA0000L + 0x66
#define SELECTOR_STATUS_INVALID_RANGE			0xBFFA0000L + 0x64
#define SELECTOR_STATUS_INVALID_NUM_LEVELS		0xBFFA0000L + 0x63

///////////////////////////////////////////////////////////////////////////////
//
//	Functions and classes defined in this file
//

class CIviCErrorMap;
class CIviCErrorMessageMap;
class CIviCAttributeMap;

inline HRESULT CreateDriver(IUnknown** ppUnk);
inline ViStatus GetDriver(ViSession session, IUnknown** ppUnk);
inline ViStatus GetUninitializedDriver(ViSession session, IUnknown** ppUnk);
inline ViStatus AddDriver(IUnknown* pDriver, ViSession* session);
inline ViStatus RemoveDriver(ViSession session);

template <typename Q>
inline ViStatus GetDriverInterface(ViSession session, Q** pp, bool bInitializeRequired);

template <typename Q>
inline ViStatus GetDriverInterface(ViSession session, Q** pp);

CIviCAttributeMap* GetAttributeMap();
CIviCErrorMap* GetErrorMap();
CIviCErrorMessageMap* GetErrorMessageMap();

CString GetErrorMessage(ViStatus error);
ViStatus ReportError(ViSession session, ViStatus error, LPCTSTR pszDescription);
ViStatus ReportError(ViSession session, ViStatus error);
ViStatus ReportErrorUsingComErrorInfoDescription(ViSession session, ViStatus error);
ViStatus TranslateHRESULT(ViSession session, HRESULT hr);


///////////////////////////////////////////////////////////////////////////////
//
//	Functions defined in driver
//

CLSID GetDriverCLSID();
CString GetPrefix();

void InitializeAttributeMap(CIviCAttributeMap* pMap);
void InitializeErrorMap(CIviCErrorMap* pMap);
void InitializeErrorMessageMap(CIviCErrorMessageMap* pMap);

ViStatus TranslateUnknownHRESULT(ViSession session, HRESULT hr);


///////////////////////////////////////////////////////////////////////////////
//
//	CIviCErrorMap
//

class CIviCErrorMap
{
public:
	CIviCErrorMap()
	{
		m_bInitialized = false;
	}

	bool GetInitialized() { return m_bInitialized; }
	void SetInitialized(bool bInit) { m_bInitialized = bInit; }

	void Add(HRESULT hr, ViStatus status)
	{
		m_map.SetAt(hr, status);
	}

	bool Lookup(HRESULT hr, ViStatus& status)
	{
		return m_map.Lookup(hr, status);
	}


private:
	bool m_bInitialized;
	CAtlMap<HRESULT, ViStatus> m_map;
};


///////////////////////////////////////////////////////////////////////////////
//
//	CIviCErrorMessageMap
//

class CIviCErrorMessageMap
{
public:
	CIviCErrorMessageMap()
	{
		m_bInitialized = false;
	}

	bool GetInitialized() { return m_bInitialized; }
	void SetInitialized(bool bInit) { m_bInitialized = bInit; }

	void Add(ViStatus status, const CString& strMessage)
	{
		m_map.SetAt(status, strMessage);
	}

	bool Lookup(ViStatus status, CString& strMessage)
	{
		return m_map.Lookup(status, strMessage);
	}

private:
	bool m_bInitialized;
	CAtlMap<ViStatus, CString> m_map;
};


///////////////////////////////////////////////////////////////////////////////
//
//	CIviCAttributeMap
//

class CIviCAttributeMap : public CIviCAttributeManager
{
protected:
	virtual ViStatus ReportError(ViSession Vi, ViInt32 ErrorCode)
	{
		return ::ReportError(Vi, ErrorCode);
	}
};

///////////////////////////////////////////////////////////////////////////////
//
//	CSessionLock
//
//  This class is used to obtain a session lock for an IVI-C function to
//  protect that function from being called on the same session simultaneously 
//  from multiple threads.

class CSessionLock
{
public:
	CSessionLock(ViSession session)
		: m_session(session)
	{
		if (session != VI_NULL)
		{
			ViStatus status = IviSession_Lock(session, VI_NULL);
			ATLASSERT(status == VI_SUCCESS);
		}
	}

	~CSessionLock()
	{
		if (m_session != VI_NULL)
		{
			ViStatus status = IviSession_Unlock(m_session, VI_NULL);
			ATLASSERT(status == VI_SUCCESS);
		}
	}

private:
	ViSession m_session;
};

///////////////////////////////////////////////////////////////////////////////
//
//	Global variables
// 
//  The information contained in these variables is read-only, so it can be shared
//  amongst multiple driver sessions.
//

__declspec(selectany) CIviCErrorMap _ErrorMap;
__declspec(selectany) CIviCErrorMessageMap _ErrorMessageMap;
__declspec(selectany) CIviCAttributeMap _AttributeMap;

///////////////////////////////////////////////////////////////////////////////
//
//	Helper functions
//

inline HRESULT EnsureComInitialization()
{
	HRESULT hr = S_OK;;

	// We use a thread local variable (internal value maintained on a per-thread basis) to keep track of 
	// whether or not COM has been initialized by the driver for a particular thread.  Note that this flag
	// does NOT get set to True if we determine that the client initialized COM.
	static CThreadLocal<bool> bCoInitCalledByDriver(false);

	// Make sure COM has been initialized on this thread
	if (!bCoInitCalledByDriver.GetValue())
	{
		// The driver has not called CoInit on this thread, so we call CoInit to see if the client has called it.
		// Note that we try to put the thread in the MTA, because the client into the STA means the client will need to pump messages.
		hr = ::CoInitializeEx(NULL, COINIT_MULTITHREADED);
		if (hr == RPC_E_CHANGED_MODE)
		{
			// The client initialized COM in the STA, so they are controlling CoInit/Unit
			hr = S_OK;
		}
		else if (hr == S_FALSE)
		{
			// The client already initialized COM in the MTA, so they are controlling CoInit/Unit and we must call CoUnit
			// in order for them to retain control over loading/unloading COM.
			::CoUninitialize();

			hr = S_OK;
		}
		else
		{
			// The client has not initialized COM, so the driver will control COM loading
			ATLASSERT(SUCCEEDED(hr));
			if (SUCCEEDED(hr))
			{
				// Mark this thread as being initialized for COM by the driver
				bCoInitCalledByDriver.SetValue(true);
			}
		}
	}

	return hr;
}

inline HRESULT CreateDriver(IUnknown** ppUnk)
{
	*ppUnk = NULL;

	HRESULT hr = EnsureComInitialization();
	if (SUCCEEDED(hr))
	{
		hr = ::CoCreateInstance(GetDriverCLSID(), NULL, CLSCTX_ALL, __uuidof(IUnknown), (void**)ppUnk);
		ATLASSERT(SUCCEEDED(hr));

		ATLASSERT(*ppUnk != NULL);
	}

	return hr;
}

inline ViStatus GetDriver(ViSession session, IUnknown** ppUnk)
{
	CSessionLock lock(session);

	ViStatus status = VI_SUCCESS;
	HRESULT hr = EnsureComInitialization();
	if (FAILED(hr))
	{
		status = ReportError(session, IVIC_ERROR_CANNOT_RECOVER, _T("Could not initialize COM."));
	}
	else
	{
		ViAddr sessionData = VI_NULL;
		status = IviSession_GetDataPtr(session, &sessionData);
		if (status == VI_SUCCESS)
		{
			DWORD dwCookie = reinterpret_cast<DWORD>(sessionData);
		
			CComPtr<IGlobalInterfaceTable> spGIT;
			hr = spGIT.CoCreateInstance(CLSID_StdGlobalInterfaceTable);
			ATLASSERT(SUCCEEDED(hr));
			if (FAILED(hr))
			{
				status = ReportError(session, IVIC_ERROR_CANNOT_RECOVER, _T("Could not access global interface table."));
			}
			else 
			{
				HRESULT hr = spGIT->GetInterfaceFromGlobal(dwCookie, IID_IUnknown, (void**)ppUnk);
				ATLASSERT(SUCCEEDED(hr));
				if (FAILED(hr))
				{
					status = ReportError(session, IVIC_ERROR_CANNOT_RECOVER, _T("Could not retrieve pointer to IVI-COM driver from global interface table."));
				}
			}
		}
	}

	return status;
}
 
inline ViStatus GetUninitializedDriver(ViSession session, IUnknown** ppUnk)
{
	ViStatus status = VI_SUCCESS;

	if (session == VI_NULL)
	{
		HRESULT hr = CreateDriver(ppUnk);
		if (SUCCEEDED(hr))
		{
			status = VI_SUCCESS;
		}
		else
		{
			status = VI_ERROR;
		}
	}
	else
	{
		status = GetDriver(session, ppUnk);
	}

	return status;
}

inline ViStatus AddDriver(IUnknown* pDriver, ViSession* session)
{
	*session = VI_NULL;

	ViStatus status = IviSession_New(session);
	ATLASSERT(status == VI_SUCCESS);
	if (status == VI_SUCCESS)
	{
		CComPtr<IGlobalInterfaceTable> spGIT;
		HRESULT hr = spGIT.CoCreateInstance(CLSID_StdGlobalInterfaceTable);
		ATLASSERT(SUCCEEDED(hr));
		if (FAILED(hr))
		{
			status = ReportError(*session, IVIC_ERROR_CANNOT_RECOVER, _T("Could not access global interface table."));
		}
		else
		{
			DWORD dwCookie;
			hr = spGIT->RegisterInterfaceInGlobal(pDriver, __uuidof(pDriver), &dwCookie);
			ATLASSERT(SUCCEEDED(hr));
			if (FAILED(hr))
			{
				status = ReportError(*session, IVIC_ERROR_CANNOT_RECOVER, _T("Could not register IVI-COM driver pointer in global interface table."));
			}
			else
			{
				status = IviSession_SetDataPtr(*session, reinterpret_cast<ViAddr>(dwCookie));
				ATLASSERT(status == VI_SUCCESS);
			}
		}
	}

	return status;
}

inline ViStatus RemoveDriver(ViSession session)
{
	ViAddr sessionData = VI_NULL;
	ViStatus status = IviSession_GetDataPtr(session, &sessionData);
	if (status == VI_SUCCESS)
	{
		DWORD dwCookie = reinterpret_cast<DWORD>(sessionData);
	
		CComPtr<IGlobalInterfaceTable> spGIT;
		HRESULT hr = spGIT.CoCreateInstance(CLSID_StdGlobalInterfaceTable);
		ATLASSERT(SUCCEEDED(hr));
		if (FAILED(hr))
		{
			status = ReportError(session, IVIC_ERROR_CANNOT_RECOVER, _T("Could not access global interface table."));
		}
		else
		{
			HRESULT hr = spGIT->RevokeInterfaceFromGlobal(dwCookie);
			ATLASSERT(SUCCEEDED(hr));
			if (FAILED(hr))
			{
				status = ReportError(session, IVIC_ERROR_CANNOT_RECOVER, _T("Could not remove IVI-COM driver pointer from global interface table."));
			}
		}

		ViStatus status2 = IviSession_Dispose(session);
		ATLASSERT(status2 == VI_SUCCESS);
		
		status = status != VI_SUCCESS ? status : status2;
	}

	return status;
}

template <typename Q>
inline ViStatus GetDriverInterface(ViSession session, Q** pp, bool bInitializeRequired)
{
	*pp = NULL;

	CComPtr<IUnknown> spDriver;
	ViStatus status;
	if (bInitializeRequired)
	{
		status = GetDriver(session, &spDriver);
	}
	else
	{
		status = GetUninitializedDriver(session, &spDriver);
	}

	if (status == VI_SUCCESS)
	{
		HRESULT hr = spDriver->QueryInterface(pp);
		ATLASSERT(SUCCEEDED(hr));
		ATLASSERT(*pp != NULL);
		status = TranslateHRESULT(session, hr);
	}

	return status;
}

template <typename Q>
inline ViStatus GetDriverInterface(ViSession session, Q** pp)
{
	return GetDriverInterface(session, pp, true);
}

inline CIviCAttributeMap* GetAttributeMap()
{
	CComAutoCriticalSection cs;
	cs.Lock();

	if (!_AttributeMap.GetInitialized())
	{
		InitializeAttributeMap(&_AttributeMap);
		_AttributeMap.SetInitialized(true);
	}

	cs.Unlock();

	return &_AttributeMap;
}

inline CIviCErrorMap* GetErrorMap()
{
	CComAutoCriticalSection cs;
	cs.Lock();

	if (!_ErrorMap.GetInitialized())
	{
		InitializeErrorMap(&_ErrorMap);
		_ErrorMap.SetInitialized(true);
	}

	cs.Unlock();

	return &_ErrorMap;
}

inline CIviCErrorMessageMap* GetErrorMessageMap()
{
	CComAutoCriticalSection cs;
	cs.Lock();

	if (!_ErrorMessageMap.GetInitialized())
	{
		InitializeErrorMessageMap(&_ErrorMessageMap);
		_ErrorMessageMap.SetInitialized(true);
	}

	cs.Unlock();

	return &_ErrorMessageMap;
}

inline CString GetErrorMessage(ViStatus error)
{
	CIviCErrorMessageMap* pMap = GetErrorMessageMap();

	CString strMessage;
	
	pMap->Lookup(error, strMessage);

	return strMessage;
}

inline ViStatus ReportError(ViSession session, ViStatus error, LPCTSTR pszDescription)
{
	IviSession_SetError(session, error, CT2A(pszDescription));

	return error;
}

inline ViStatus ReportError(ViSession session, ViStatus error)
{
	return ReportError(session, error, GetErrorMessage(error));
}

inline ViStatus ReportErrorUsingComErrorInfoDescription(ViSession session, ViStatus error)
{
	CComPtr<IErrorInfo> spErrorInfo;
	if (::GetErrorInfo(0, &spErrorInfo) == S_OK)
	{
		CString strMessage;

		CComBSTR bstrDesc;
		if (SUCCEEDED(spErrorInfo->GetDescription(&bstrDesc)))
		{
			strMessage = COLE2T(bstrDesc);
		}

		error = ReportError(session, error, strMessage);
	}

	return error;
}

inline ViStatus TranslateHRESULT(ViSession session, HRESULT hr)
{
	ViStatus error = VI_SUCCESS;

	if (hr != S_OK)
	{
		CIviCErrorMap* pMap = GetErrorMap();
		ViStatus status;
		if (pMap->Lookup(hr, status))
		{
			error = ReportErrorUsingComErrorInfoDescription(session, status);
		}
		else
		{
			error = TranslateUnknownHRESULT(session, hr);
		}
	}

	return error;
}


///////////////////////////////////////////////////////////////////////////////
//
//	CRepCapSelector
//

class CRepCapSelector
{
public:
	CRepCapSelector(ViConstString RepCapSelector)
	{
		m_strSelector = _T("");

		if (RepCapSelector != VI_NULL)
		{
			m_strSelector = CA2T(RepCapSelector);
		}

		m_bParsed = false;
	}

	~CRepCapSelector()
	{
	}

private:
	CString m_strSelector;
	bool m_bParsed;
	typedef CAtlArray<CString> CIdentifierArray;
	CAtlArray<CIdentifierArray> m_tableIdentifiers;		// Rows are identifiers, Columns are repcap levels

public:
	ViStatus GetIdentifierCount(ViSession session, bool bAcceptRange, int* pnCount)
	{
		ViStatus status = VI_SUCCESS;

		ATLASSERT(pnCount != NULL);
		if (pnCount == NULL)
			return VI_ERROR;
		*pnCount = 0;

		status = Parse(session, bAcceptRange);
		if (status == VI_SUCCESS)
		{
			*pnCount = (int)m_tableIdentifiers.GetCount();
		}

		return status;
	}

	ViStatus GetIdentifierAtLevel(ViSession session, bool bAcceptRange, int nIdentifierIndex, int nLevel, CString& strIdentifier)
	{
		ViStatus status = VI_SUCCESS;

		status = Parse(session, bAcceptRange);
		if (status == VI_SUCCESS)
		{
			if (nIdentifierIndex >= (int)m_tableIdentifiers.GetCount())
			{
				ATLASSERT(!_T("Identifier index out of range."));
				return ReportBadlyFormedSelectorError(session);
			}

			if (nLevel >= (int)m_tableIdentifiers[nIdentifierIndex].GetCount())
			{
				return ReportInvalidNumLevelsError(session);
			}

			strIdentifier = m_tableIdentifiers[nIdentifierIndex][nLevel];
		}

		return status;
	}

private:
	ViStatus Parse(ViSession session, bool bAcceptRange)
	{
		ViStatus status = VI_SUCCESS;

		// Example selector string is:
		// "a1-a3:b2:[c5,c7]"
		// 
		// Expands to:
		// "a1:b2:c5, a1:b2:c7, a2:b2:c5, a2:b2:c7, a3:b2:c5, a3:b2:c7"
		// 
		// Whereas a selector string of: 
		// "a1-a3:b2:c5,c7"
		// 
		// Expands to:
		// "a1:b2:c5, a2:b2:c5, a3:b2:c5, c7"
		//
		// Format of a selector with qualified identifiers
		// "channel!!a1-channel!!a3:channel!!b2::[channel!!c5,channel!!c7]
		//
		// The order of precedence is square brackets ([]), hyphen (-), colon (:), and comma (,).  
		// Each operator is evaluated from left to right.  

		// We only need to parse once for this instance of the class
		// We don't parse in the constructor so that we can return an error

		if (m_bParsed)
			return status;

		m_bParsed = true;

		if (m_strSelector.IsEmpty())
		{
			// This allows the IVI-C client to pass in an empty string (or VI_NULL)
			// and have that passed in to IVI-COM as an empty string

			size_t nRow = m_tableIdentifiers.Add();
			m_tableIdentifiers[nRow].Add(_T(""));

			return status;
		}

		int nSelectorPos = 0;
		CAtlList<CIdentifierArray> stackCurIdentifiers;
		CString strSegment = m_strSelector.Tokenize(_T(":"), nSelectorPos);
		while (!strSegment.IsEmpty() && status == VI_SUCCESS) 
		{
			// Each segment is of the form:
			// "a1-a3,a5,a9"
			// OR
			// "[a1-a3,a5,a9]
			// OR
			// "[channel!!a1-channel!!a3,channel!!a5,channel!!a9]

			stackCurIdentifiers.AddTail();

			strSegment.Trim();
			bool bSquareBrackets = false;
			if (strSegment.Left(1) == _T("["))
			{
				if (strSegment.Right(1) != _T("]"))
					return ReportBadlyFormedSelectorError(session);

				strSegment = strSegment.Mid(1, strSegment.GetLength() - 2);
				bSquareBrackets = true;
			}

			int nListElement = 0;
			int nListPos = 0;
			CString strListElement = strSegment.Tokenize(_T(","), nListPos);
			while (!strListElement.IsEmpty() && status == VI_SUCCESS) 
			{
				status = ParseListElement(session, strListElement, bSquareBrackets, nListElement, stackCurIdentifiers, bAcceptRange);
				
				nListElement++;
				strListElement = strSegment.Tokenize(_T(","), nListPos);
			}

			strSegment = m_strSelector.Tokenize(_T(":"), nSelectorPos);
		}

		if (status == VI_SUCCESS)
		{
			status = AddIdentifiers(session, stackCurIdentifiers);
			stackCurIdentifiers.RemoveAll();

			if (status == VI_SUCCESS)	
			{
				// Make sure all identifiers are unique
				CAtlList<CString> listIdentifiers;
				for (UINT nIdentifier = 0; nIdentifier < m_tableIdentifiers.GetCount(); nIdentifier++)
				{
					CString strIdentifier;
					for (UINT nLevel = 0; nLevel < m_tableIdentifiers[nIdentifier].GetCount(); nLevel++)
					{
						strIdentifier.Append(m_tableIdentifiers[nIdentifier][nLevel]);
						strIdentifier.Append(_T(":"));
					}

					if (listIdentifiers.Find(strIdentifier) != NULL)
						return ReportBadlyFormedSelectorError(session);

					listIdentifiers.AddTail(strIdentifier);
				}
			}
		}

		return status;
	}

	ViStatus ParseListElement(ViSession session, const CString& strListElement, bool bSquareBrackets, int nListElement, CAtlList<CIdentifierArray>& stackCurIdentifiers, bool bAcceptRange)
	{
		ViStatus status = VI_SUCCESS;

		// Each list is of the form:
		// "a1"
		// OR
		// "a1-a3"
		// OR
		// "channel!!a1-channel!!a3"

		if (nListElement > 0 && !bSquareBrackets)
		{
			status = AddIdentifiers(session, stackCurIdentifiers);
			if (status != VI_SUCCESS)
				return status;

			stackCurIdentifiers.RemoveAll();
			stackCurIdentifiers.AddTail();
		}

		static CAtlRegExp<>* pParser = NULL;
		status = GetParser(&pParser);
		if (status != VI_SUCCESS)
			return status;

		CAtlREMatchContext<> mc;
		if (!pParser->Match(strListElement, &mc))
			return ReportBadlyFormedSelectorError(session);

		LPCTSTR pszRangeLowerNameStart = NULL;
		int nRangeLowerNameLen;
		int nRangeLowerBound;
		for (UINT nGroup = 0; nGroup < mc.m_uNumGroups && status == VI_SUCCESS; nGroup++)
		{
			LPCTSTR pszStart = NULL;
			LPCTSTR pszEnd = NULL;
			mc.GetMatch(nGroup, &pszStart, &pszEnd);
			int nLength = (int)(pszEnd - pszStart);
			if (nLength == 0)
				continue;

			switch (nGroup)
			{
				case RangeLowerName:
				{
					if (!bAcceptRange)
						status = ReportBadlyFormedSelectorError(session);

					pszRangeLowerNameStart = pszStart;
					nRangeLowerNameLen = nLength;
					break;
				}
				case RangeLowerNumber:
				{
					nRangeLowerBound = _ttoi(pszStart);
					break;
				}
				case RangeUpperName:
				{
					if (_tcsnicmp(pszStart, pszRangeLowerNameStart, nLength) != 0)
					{
						status = ReportInvalidRangeError(session);
					}
					break;
				}
				case RangeUpperNumber:
				{
					int nRangeUpperBound = _ttoi(pszStart);
					if (nRangeUpperBound >= nRangeLowerBound)
					{
						CString strBaseName(pszRangeLowerNameStart, nRangeLowerNameLen);
						for (int i = nRangeLowerBound; i <= nRangeUpperBound && status == VI_SUCCESS; i++)
						{
							CString strIdentifier;
							strIdentifier.Format(_T("%s%d"), strBaseName, i);
							stackCurIdentifiers.GetTail().Add(strIdentifier);
						}
					}
					else
					{
						status = ReportInvalidRangeError(session);
					}
					break;
				}
				case SingleIdentifier:
				{
					CString strIdentifier(pszStart, nLength);
					stackCurIdentifiers.GetTail().Add(strIdentifier);
					break;
				}
				default:
					ATLASSERT(!_T("Unexpected selector token."));
					status = VI_ERROR;
					break;
			}
		}

		return status;
	}

	ViStatus GetParser(CAtlRegExp<>** ppParser)
	{	
		ViStatus status = VI_SUCCESS;

		// Each list is of the form:
		// "a1"
		// OR
		// "a1-a3"
		// OR
		// "channel!!a1-channel!!a3"

		static CAtlRegExp<> parser;
		static bool bParserInitialized = false;
		if (!bParserInitialized)
		{
			REParseError pe = parser.Parse(
				_T("^(")
				_T("(\\b*{[a-zA-Z_!]+?}{[0-9]+}\\b*-\\b*{[a-zA-Z_!]+?}{[0-9]+}\\b*)|") 		// Range
				_T("(\\b*{[a-zA-Z_!0-9]+}\\b*)")											// Single identifier
				_T(")$")
				);
			ATLASSERT(pe == REPARSE_ERROR_OK);
			if (pe != REPARSE_ERROR_OK)
				status = VI_ERROR;

			bParserInitialized = true;
		}

		*ppParser = &parser;

		return status;
	}

	enum SelectorToken
	{
		RangeLowerName = 0,
		RangeLowerNumber = 1,
		RangeUpperName = 2,
		RangeUpperNumber = 3,
		SingleIdentifier = 4
	};

	ViStatus AddIdentifiers(ViSession session, CAtlList<CIdentifierArray>& stackIdentifiers)
	{
		ViStatus status = VI_SUCCESS;

		// Every row in the table should have the same number of columns, as this means every identifier 
		// has the same number of repcap levels.  If not, this is an error condition.
		if (m_tableIdentifiers.GetCount() > 0 && m_tableIdentifiers[0].GetCount() != stackIdentifiers.GetCount())
			return ReportInvalidNumLevelsError(session);

		AddIdentifiersRecurse(stackIdentifiers, stackIdentifiers.GetHeadPosition(), 0);

		return status;
	}

	void AddIdentifiersRecurse(CAtlList<CIdentifierArray>& stackIdentifiers, POSITION posLevel, int nLevel)
	{
		CIdentifierArray& rgIdentifiers = stackIdentifiers.GetNext(posLevel);
		for (UINT nIdentifier = 0; nIdentifier < rgIdentifiers.GetCount(); nIdentifier++)
		{
			if (posLevel == NULL)
			{
				// No child levels, so add a new row
				size_t nNewRow = m_tableIdentifiers.Add();
				for (int nCol = 0; nCol <= nLevel; nCol++)
				{
					m_tableIdentifiers[nNewRow].Add();
				}

				m_tableIdentifiers[nNewRow][nLevel] = rgIdentifiers[nIdentifier];
			}
			else
			{
				// Add rows of child levels, recursively
				size_t nFirstChildRow = m_tableIdentifiers.GetCount();
				AddIdentifiersRecurse(stackIdentifiers, posLevel, nLevel + 1);

				for (size_t nRow = nFirstChildRow; nRow < m_tableIdentifiers.GetCount(); nRow++)
				{
					m_tableIdentifiers[nRow][nLevel] = rgIdentifiers[nIdentifier];
				}
			}
		}
	}

	ViStatus ReportBadlyFormedSelectorError(ViSession session)
	{
		ViStatus status = IviSession_SetError(session, SELECTOR_STATUS_BADLY_FORMED_SELECTOR, "The repeated capability selector is badly-formed.");
		if (status == VI_SUCCESS)
		{
			status = SELECTOR_STATUS_BADLY_FORMED_SELECTOR;
		}

		return status;
	}

	ViStatus ReportInvalidRangeError(ViSession session)
	{
		ViStatus status = IviSession_SetError(session, SELECTOR_STATUS_INVALID_RANGE, "Invalid range specified in repeated capability selector.");
		if (status == VI_SUCCESS)
		{
			status = SELECTOR_STATUS_INVALID_RANGE;
		}

		return status;
	}

	ViStatus ReportInvalidNumLevelsError(ViSession session)
	{
		ViStatus status = IviSession_SetError(session, SELECTOR_STATUS_INVALID_NUM_LEVELS, "Invalid or inconsistent number of levels specified in repeated capability selector.");
		if (status == VI_SUCCESS)
		{
			status = SELECTOR_STATUS_INVALID_NUM_LEVELS;
		}

		return status;
	}
};

