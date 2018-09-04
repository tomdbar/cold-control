/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/


inline  CErrorReporter::CErrorReporter(const CLSID& clsid, ICallContextProvider* pCallContextProvider)
	: m_clsid(clsid), m_pCallContextProvider(pCallContextProvider)
{
}

inline HRESULT CErrorReporter::ReportError(HRESULT hr, const CString& strMessage) const
{
	CT2A szMessage = strMessage;
	return AtlReportError(m_clsid, szMessage, GUID_NULL, hr);
}

inline	HRESULT CErrorReporter::Report(UINT uResid, ...) const
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, uResid);

	hr = ReportV(uResid, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CErrorReporter::ReportV(UINT uResid, va_list argList) const
{
	HRESULT hr = S_OK;

	CString strError;
	hr = Format(uResid, argList, strError);
	if (SUCCEEDED(hr))
	{
		hr = SetError(uResid, strError);
	}

	return hr;
}

inline HRESULT CErrorReporter::ReportEx(UINT uResid, LPCTSTR szDetails, ...) const
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, szDetails);

	hr = ReportExV(uResid, szDetails, argList);
	
	va_end(argList);

	return hr;
}

inline HRESULT CErrorReporter::ReportExV(UINT uResid, LPCTSTR szDetails, va_list argList) const
{
	HRESULT hr = S_OK;

	CString strError;
	hr = Format(uResid, argList, strError);
	if (SUCCEEDED(hr))
	{
		if (_tcslen(szDetails) != 0)
		{
			// Append the error details to the base error message
			strError += "\r\n";
			strError += szDetails;
		}

		hr = SetError(uResid, strError);
	}

	return hr;
}
	
inline HRESULT CErrorReporter::Format(UINT uResid, va_list argList, CString& strError) const
{
	// Retrieve desired message in the correct language from the message 
	// table and format it using the variable argument list provided.

	HRESULT hr = S_OK;

	LANGID langid = 0;    
	LPVOID lpMsgBuf;										
	if (::FormatMessage(
			FORMAT_MESSAGE_FROM_HMODULE |
			FORMAT_MESSAGE_ALLOCATE_BUFFER,
			_AtlBaseModule.GetModuleInstance(), 
			uResid, 
			langid,
			(LPTSTR) &lpMsgBuf, 
			0, 
			&argList) == 0)
	{
		// Failed to load resource and format resource
		::FormatMessage(
			FORMAT_MESSAGE_FROM_SYSTEM |
			FORMAT_MESSAGE_ALLOCATE_BUFFER |
			FORMAT_MESSAGE_IGNORE_INSERTS,
			NULL, 
			GetLastError(), 
			langid,
			(LPTSTR) &lpMsgBuf, 
			0, 
			NULL);

		char szBuf[500];
		sprintf_s(szBuf, 500, "Internal Error: Unable to retrieve and format error message from message table.\nResource ID = %d\nLanguage ID = %d\nReason = '%s'", uResid, langid, (LPTSTR) lpMsgBuf);

		return AtlReportError(m_clsid, szBuf, GUID_NULL, 0);
	}

	strError = (LPTSTR)lpMsgBuf;
	strError.Trim();

	LocalFree(lpMsgBuf);

	return hr;
}

inline CString CErrorReporter::GetCurrentMethod() const
{
	return m_pCallContextProvider->GetCurrentContext()->GetMethodName();
}
