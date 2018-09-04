/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

///////////////////////////////////////////////////////////////////////////////
// IIoSession

inline CIoSession::CIoSession()
	: m_spBuf(NULL), m_pErrPoller(NULL), m_pErrReporter(NULL), m_strTrailingForReads(_T("\n")), m_strTrailingForWrites(_T("\n"))
{
}

inline CIoSession::~CIoSession()
{
}

inline HRESULT CIoSession::Initialize(const CString& strResourceDescriptor, IInstrErrorPoller* pErrorPoller, IErrorReporter* pErrorReporter, IEnumFormatter* pEnumFormatter)
{
	ATLASSERT(pErrorPoller != NULL);
	if (pErrorPoller == NULL)
		return E_POINTER;

	ATLASSERT(pErrorReporter != NULL);
	if (pErrorReporter == NULL)
		return E_POINTER;

	ATLASSERT(pEnumFormatter != NULL);
	if (pEnumFormatter == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	NTL_UNUSED(strResourceDescriptor);

	CStringA strTrailingForReads(m_strTrailingForReads);
	CStringA strTrailingForWrites(m_strTrailingForWrites);

	// Make sure smart pointer is NULL before attaching, else ATL will assert.
	// It will be non-NULL if the user calls Initialize twice without a Close in between.
	m_spBuf.Free();
	m_spBuf.Attach(new CInstrBuffer(this, pErrorReporter, (BYTE*)LPCSTR(strTrailingForReads), strTrailingForReads.GetLength(), (BYTE*)LPCSTR(strTrailingForWrites), strTrailingForWrites.GetLength()));

	if (m_spBuf == NULL)
		return pErrorReporter->OutOfMemory(_T("Failed to create the formatted I/O read and write buffers."));

	m_pErrPoller = pErrorPoller;
	m_pErrReporter = pErrorReporter;
	m_pEnumFormatter = pEnumFormatter;

	return hr;
}

inline HRESULT CIoSession::FinalInitialize()
{
	HRESULT hr = S_OK;

	return hr;
}

inline HRESULT CIoSession::Close()
{
	HRESULT hr = S_OK;

	m_spBuf.Free();

	m_pErrPoller = NULL;
	m_pErrReporter = NULL;
	m_pEnumFormatter = NULL;

	return hr;
}

inline bool CIoSession::Initialized() const
{
	return m_spBuf != NULL;
}

inline CString CIoSession::GetTrailingForReads() const
{ 
	return m_strTrailingForReads; 
}

inline void CIoSession::SetTrailingForReads(const CString& str)
{ 
	m_strTrailingForReads = str; 

	CStringA strTrailing(str);
	m_spBuf->SetTrailingForReads((BYTE*)LPCSTR(strTrailing), strTrailing.GetLength());
}

inline CString CIoSession::GetTrailingForWrites() const
{ 
	return m_strTrailingForWrites; 
}

inline void CIoSession::SetTrailingForWrites(const CString& str) 
{ 
	m_strTrailingForWrites = str; 

	CStringA strTrailing(str);
	m_spBuf->SetTrailingForWrites((BYTE*)LPCSTR(strTrailing), strTrailing.GetLength());
}

inline bool CIoSession::GetInstrumentBigEndian() const
{
	return m_spBuf->GetBigEndian();
}

inline void CIoSession::SetInstrumentBigEndian(bool bBigEndian)
{
	m_spBuf->SetBigEndian(bBigEndian);
}

inline HRESULT CIoSession::SetBufferSize(IoBufferMask eMask, long cbSize)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = m_spBuf->SetBufferSize(eMask, cbSize);

	return hr;
}

inline HRESULT CIoSession::GetReadBufferSize(long* pcbSize)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = m_spBuf->GetReadBufferSize(pcbSize);

	return hr;
}

inline HRESULT CIoSession::GetWriteBufferSize(long* pcbSize)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = m_spBuf->GetWriteBufferSize(pcbSize);

	return hr;
}

inline HRESULT CIoSession::FlushWrite(bool bSendEnd, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	hr = m_spBuf->FlushWrite(bSendEnd);

	return hr;
}

inline HRESULT CIoSession::FlushRead(long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	hr = m_spBuf->FlushRead();

	return hr;
}

inline HRESULT CIoSession::Printf(const CString strFormat, ...)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = CFormattedIo::VPrintf(m_spBuf, m_pEnumFormatter, strFormat, argList);

	va_end(argList);

	if (SUCCEEDED(hr))
	{
		hr = FlushWrite();
		if (SUCCEEDED(hr))
		{
			hr = PollInstrumentErrors();
		}
	}

	return hr;
}

inline HRESULT CIoSession::VPrintf(const CString strFormat, va_list& argList, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = VPrintfNoPoll(strFormat, argList, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = FlushWrite(true, lTimeout);
		if (SUCCEEDED(hr))
		{
			hr = PollInstrumentErrors();
		}
	}

	return hr;
}

inline HRESULT CIoSession::VPrintfNoPoll(const CString strFormat, va_list& argList, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	hr = CFormattedIo::VPrintf(m_spBuf, m_pEnumFormatter, strFormat, argList);

	return hr;
}

inline HRESULT CIoSession::PrintfNoPoll(const CString strFormat, ...)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = CFormattedIo::VPrintf(m_spBuf, m_pEnumFormatter, strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CIoSession::Scanf(const CString strFormat, ...)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = CFormattedIo::VScanf(m_spBuf, m_pEnumFormatter, strFormat, argList);

	va_end(argList);

	if (SUCCEEDED(hr))
	{
		// We must flush here because we're going to poll.  ScanfNoPoll does not flush.
		hr = FlushRead();
		if (SUCCEEDED(hr))
		{
			hr = PollInstrumentErrors();
		}
	}

	return hr;
}

inline HRESULT CIoSession::ScanfNoPoll(const CString strFormat, ...)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = CFormattedIo::VScanf(m_spBuf, m_pEnumFormatter, strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CIoSession::ScanfWithTimeout(const CString strFormat, long lTimeout, ...)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, lTimeout);

	hr = CFormattedIo::VScanf(m_spBuf, m_pEnumFormatter, strFormat, argList);

	va_end(argList);

	if (SUCCEEDED(hr))
	{
		// We must flush here because we're going to poll.  ScanfWithTimeoutNoPoll does not flush.
		hr = FlushRead();
		if (SUCCEEDED(hr))
		{
			hr = PollInstrumentErrors();
		}
	}

	return hr;
}

inline HRESULT CIoSession::ScanfWithTimeoutNoPoll(const CString strFormat, long lTimeout, ...)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, lTimeout);

	hr = CFormattedIo::VScanf(m_spBuf, m_pEnumFormatter, strFormat, argList);

	va_end(argList);

	return hr;
}

inline  HRESULT CIoSession::VScanf(const CString strFormat, va_list& argList, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = VScanfNoPoll(strFormat, argList, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = FlushRead(lTimeout);
		if (SUCCEEDED(hr))
		{
			hr = PollInstrumentErrors();
		}
	}

	return hr;
}

inline  HRESULT CIoSession::VScanfNoPoll(const CString strFormat, va_list& argList, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();
	
	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	hr = CFormattedIo::VScanf(m_spBuf, m_pEnumFormatter, strFormat, argList);

	return hr;
}

inline HRESULT CIoSession::Queryf(const CString strWriteFormat, const CString strReadFormat, ...)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strReadFormat);

	hr = VQueryf(strWriteFormat, strReadFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CIoSession::QueryfNoPoll(const CString strWriteFormat, const CString strReadFormat, ...)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strReadFormat);

	hr = VQueryfNoPoll(strWriteFormat, strReadFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CIoSession::QueryfWithTimeout(const CString strWriteFormat, const CString strReadFormat, long lTimeout, ...)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, lTimeout);

	hr = VQueryf(strWriteFormat, strReadFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CIoSession::QueryfWithTimeoutNoPoll(const CString strWriteFormat, const CString strReadFormat, long lTimeout, ...)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, lTimeout);

	hr = VQueryfNoPoll(strWriteFormat, strReadFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CIoSession::VQueryf(const CString strWriteFormat, const CString strReadFormat, va_list& argList, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = VQueryfNoPoll(strWriteFormat, strReadFormat, argList, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::VQueryfNoPoll(const CString strWriteFormat, const CString strReadFormat, va_list& argList, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	hr = FlushRead();
	if (SUCCEEDED(hr))
	{
		hr = CFormattedIo::VPrintf(m_spBuf, m_pEnumFormatter, strWriteFormat, argList);
		if (SUCCEEDED(hr))
		{
			hr = FlushWrite();
			if (SUCCEEDED(hr))
			{
				hr = CFormattedIo::VScanf(m_spBuf, m_pEnumFormatter, strReadFormat, argList);
			}
		}
	}

	return hr;
}

inline HRESULT CIoSession::PollInstrumentErrors()
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = m_pErrPoller->PollInstrumentErrors();

	return hr;
}

inline HRESULT CIoSession::QueryString(const CString& strCommand, CString& strResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadString(strResult, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryString(const CString& strCommand, BSTR* pbstrResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadString(pbstrResult, lTimeout);
	}

	return hr;
}


inline HRESULT CIoSession::QueryStringNoPoll(const CString& strCommand, CString& strResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadStringNoPoll(strResult, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryStringNoPoll(const CString& strCommand, BSTR* pbstrResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadStringNoPoll(pbstrResult, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryNumber(const CString& strCommand, double* pdResult, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryNumberNoPoll(strCommand, pdResult, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryNumber(const CString& strCommand, float* pfResult, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryNumberNoPoll(strCommand, pfResult, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryNumber(const CString& strCommand, long* plResult, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryNumberNoPoll(strCommand, plResult, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryNumber(const CString& strCommand, short* psResult, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryNumberNoPoll(strCommand, psResult, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryNumber(const CString& strCommand, BYTE* pbResult, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryNumberNoPoll(strCommand, pbResult, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryNumberNoPoll(const CString& strCommand, double* pdResult, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadNumberNoPoll(pdResult, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryNumberNoPoll(const CString& strCommand, float* pfResult, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadNumberNoPoll(pfResult, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryNumberNoPoll(const CString& strCommand, long* plResult, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadNumberNoPoll(plResult, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryNumberNoPoll(const CString& strCommand, short* psResult, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadNumberNoPoll(psResult, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryNumberNoPoll(const CString& strCommand, BYTE* pbResult, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadNumberNoPoll(pbResult, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryList(const CString& strCommand, double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryListNoPoll(strCommand, pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryList(const CString& strCommand, float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryListNoPoll(strCommand, pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryList(const CString& strCommand, long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryListNoPoll(strCommand, pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryList(const CString& strCommand, short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryListNoPoll(strCommand, pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryList(const CString& strCommand, BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryListNoPoll(strCommand, pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryList(const CString& strCommand, CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryListNoPoll(strCommand, pbstrValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryList(const CString& strCommand, SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = QueryListNoPoll(strCommand, ppsaData, eType, strListSeparator, lTimeout);

	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::QueryListNoPoll(const CString& strCommand, double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadListNoPoll(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryListNoPoll(const CString& strCommand, float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadListNoPoll(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryListNoPoll(const CString& strCommand, long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadListNoPoll(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryListNoPoll(const CString& strCommand, short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadListNoPoll(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryListNoPoll(const CString& strCommand, BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadListNoPoll(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryListNoPoll(const CString& strCommand, CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadListNoPoll(pbstrValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::QueryListNoPoll(const CString& strCommand, SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, true, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = ReadListNoPoll(ppsaData, eType, strListSeparator, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteString(const CString& strData, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strData, bFlush, lTimeout);

	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteString(BSTR bstrData, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(bstrData, bFlush, lTimeout);

	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteString(LPCTSTR pszData, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(pszData, bFlush, lTimeout);

	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteStringNoPoll(const CString& strData, bool bFlush, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	CT2A pszData = strData;
	hr = m_spBuf->Write((BYTE*)LPSTR(pszData), strData.GetLength(), NULL, bFlush);

	return hr;
}

inline HRESULT CIoSession::WriteStringNoPoll(BSTR bstrData, bool bFlush, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	hr = m_spBuf->Write(bstrData, NULL, bFlush);

	return hr;
}

inline HRESULT CIoSession::WriteStringNoPoll(LPCTSTR pszData, bool bFlush, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	CT2A pszDataA = pszData;
	hr = m_spBuf->Write((BYTE*)LPSTR(pszDataA), (long)strlen(pszDataA), NULL, bFlush);

	return hr;
}

inline HRESULT CIoSession::WriteNumber(double dValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteNumberNoPoll(dValue, bFlush, lTimeout);

	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumber(float fValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteNumberNoPoll(fValue, bFlush, lTimeout);

	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumber(long lValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteNumberNoPoll(lValue, bFlush, lTimeout);

	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumber(short sValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteNumberNoPoll(sValue, bFlush, lTimeout);

	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumber(BYTE cValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteNumberNoPoll(cValue, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumber(const CString& strCommand, double dValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteNumber(dValue, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumber(const CString& strCommand, float fValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteNumber(fValue, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumber(const CString& strCommand, long lValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteNumber(lValue, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumber(const CString& strCommand, short sValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteNumber(sValue, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumber(const CString& strCommand, BYTE cValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteNumber(cValue, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumberNoPoll(double dValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	// Write number in NR2 format, as per VISA-COM spec
	CString str;
	str.Format(_T("%f"), dValue);
	hr = WriteStringNoPoll(str, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteNumberNoPoll(float fValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	// Write number in NR2 format, as per VISA-COM spec
	CString str;
	str.Format(_T("%f"), fValue);
	hr = WriteStringNoPoll(str, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteNumberNoPoll(long lValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	// Write number in NR1 format, as per VISA-COM spec
	CString str;
	str.Format(_T("%d"), lValue);
	hr = WriteStringNoPoll(str, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteNumberNoPoll(short sValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	// Write number in NR2 format, as per VISA-COM spec
	CString str;
	str.Format(_T("%d"), sValue);
	hr = WriteStringNoPoll(str, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteNumberNoPoll(BYTE cValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	// Write number in NR2 format, as per VISA-COM spec
	CString str;
	str.Format(_T("%d"), cValue);
	hr = WriteStringNoPoll(str, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteNumberNoPoll(const CString& strCommand, double dValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteNumberNoPoll(dValue, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumberNoPoll(const CString& strCommand, float fValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteNumberNoPoll(fValue, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumberNoPoll(const CString& strCommand, long lValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteNumberNoPoll(lValue, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumberNoPoll(const CString& strCommand, short sValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteNumberNoPoll(sValue, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteNumberNoPoll(const CString& strCommand, BYTE cValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteNumberNoPoll(cValue, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(double* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteListNoPoll(pValues, lLength, strListSeparator, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(float* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteListNoPoll(pValues, lLength, strListSeparator, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(long* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteListNoPoll(pValues, lLength, strListSeparator, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(short* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteListNoPoll(pValues, lLength, strListSeparator, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(BYTE* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteListNoPoll(pValues, lLength, strListSeparator, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(SAFEARRAY* psaValues, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteListNoPoll(psaValues, strListSeparator, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(const CString& strCommand, double* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteList(pValues, lLength, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(const CString& strCommand, float* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteList(pValues, lLength, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(const CString& strCommand, long* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteList(pValues, lLength, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(const CString& strCommand, short* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteList(pValues, lLength, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(const CString& strCommand, BYTE* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteList(pValues, lLength, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteList(const CString& strCommand, SAFEARRAY* psaValues, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteList(psaValues, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(double* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteListNoPoll<double>(pValues, lLength, strListSeparator, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(float* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteListNoPoll<float>(pValues, lLength, strListSeparator, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(long* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteListNoPoll<long>(pValues, lLength, strListSeparator, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(short* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteListNoPoll<short>(pValues, lLength, strListSeparator, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(BYTE* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteListNoPoll<BYTE>(pValues, lLength, strListSeparator, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(const CString& strCommand, double* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteListNoPoll(pValues, lLength, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(const CString& strCommand, float* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteListNoPoll(pValues, lLength, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(const CString& strCommand, long* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteListNoPoll(pValues, lLength, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(const CString& strCommand, short* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteListNoPoll(pValues, lLength, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(const CString& strCommand, BYTE* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteListNoPoll(pValues, lLength, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(const CString& strCommand, SAFEARRAY* psaValues, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteListNoPoll(psaValues, strListSeparator, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteListNoPoll(SAFEARRAY* psaValues, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ValidateSafeArray(psaValues, VT_NULL, m_pErrReporter);
	if (FAILED(hr))
		return hr;

	VARTYPE vt;
	hr = ::SafeArrayGetVartype(psaValues, &vt);
	if (SUCCEEDED(hr))
	{
		void* pvData = NULL;
		hr = ::SafeArrayAccessData(psaValues, &pvData);
		if (SUCCEEDED(hr))
		{
			long lUBound;
			hr = ::SafeArrayGetUBound(psaValues, 1, &lUBound);
			if (SUCCEEDED(hr))
			{
				long lLength = lUBound + 1;
				switch (vt)
				{
					case VT_UI1:
					{
						hr = WriteListNoPoll((BYTE*)pvData, lLength, strListSeparator, bFlush, lTimeout);
						break;
					}
					case VT_I2:
					{
						hr = WriteListNoPoll((short*)pvData, lLength, strListSeparator, bFlush, lTimeout);
						break;
					}
					case VT_I4:
					{
						hr = WriteListNoPoll((long*)pvData, lLength, strListSeparator, bFlush, lTimeout);
						break;
					}
					case VT_R4:
					{
						hr = WriteListNoPoll((float*)pvData, lLength, strListSeparator, bFlush, lTimeout);
						break;
					}
					case VT_R8:
					{
						hr = WriteListNoPoll((double*)pvData, lLength, strListSeparator, bFlush, lTimeout);
						break;
					}
					default:
						hr = m_pErrReporter->InvalidValue(_T("pszValues"), _T("<Unknown Array Type>"), _T("Unknown type of array passed to WriteList function."));
						break;
				}
			}

			hr = ::SafeArrayUnaccessData(psaValues);
		}
	}

	return hr;
}

template <typename T>
HRESULT CIoSession::WriteListNoPoll(T* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	for (int i = 0; i < lLength && SUCCEEDED(hr); i++)
	{
		hr = WriteNumberNoPoll(pValues[i], false, lTimeout);
		if (SUCCEEDED(hr) && i < (lLength - 1))
		{
			hr = WriteStringNoPoll(strListSeparator, false, lTimeout);
		}
	}

	if (SUCCEEDED(hr) && bFlush)
	{
		hr = FlushWrite(true, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(double* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(pValues, lLength, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(float* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(pValues, lLength, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(long* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(pValues, lLength, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(short* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(pValues, lLength, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(BYTE* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(pValues, lLength, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(SAFEARRAY* psaValues, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(psaValues, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(const CString& strCommand, double* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(strCommand, pValues, lLength, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(const CString& strCommand, float* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(strCommand, pValues, lLength, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(const CString& strCommand, long* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(strCommand, pValues, lLength, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(const CString& strCommand, short* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(strCommand, pValues, lLength, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(const CString& strCommand, BYTE* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(strCommand, pValues, lLength, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlock(const CString& strCommand, SAFEARRAY* psaValues, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll(strCommand, psaValues, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(double* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll<double>(pValues, lLength, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(float* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll<float>(pValues, lLength, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(long* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll<long>(pValues, lLength, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(short* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll<short>(pValues, lLength, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(BYTE* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteBinaryBlockNoPoll<BYTE>(pValues, lLength, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(SAFEARRAY* psaValues, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ValidateSafeArray(psaValues, VT_NULL, m_pErrReporter);
	if (FAILED(hr))
		return hr;

	VARTYPE vt;
	hr = ::SafeArrayGetVartype(psaValues, &vt);
	if (SUCCEEDED(hr))
	{
		void* pvData = NULL;
		hr = ::SafeArrayAccessData(psaValues, &pvData);
		if (SUCCEEDED(hr))
		{
			long lUBound;
			hr = ::SafeArrayGetUBound(psaValues, 1, &lUBound);
			if (SUCCEEDED(hr))
			{
				long lLength = lUBound + 1;
				switch (vt)
				{
					case VT_UI1:
					{
						hr = WriteBinaryBlockNoPoll((BYTE*)pvData, lLength, bFlush, lTimeout);
						break;
					}
					case VT_I2:
					{
						hr = WriteBinaryBlockNoPoll((short*)pvData, lLength, bFlush, lTimeout);
						break;
					}
					case VT_I4:
					{
						hr = WriteBinaryBlockNoPoll((long*)pvData, lLength, bFlush, lTimeout);
						break;
					}
					case VT_R4:
					{
						hr = WriteBinaryBlockNoPoll((float*)pvData, lLength, bFlush, lTimeout);
						break;
					}
					case VT_R8:
					{
						hr = WriteBinaryBlockNoPoll((double*)pvData, lLength, bFlush, lTimeout);
						break;
					}
					default:
						hr = m_pErrReporter->InvalidValue(_T("pszValues"), _T("<Unknown Array Type>"), _T("Unknown type of array passed to WriteList function."));
						break;
				}
			}

			hr = ::SafeArrayUnaccessData(psaValues);
		}
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(const CString& strCommand, double* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteBinaryBlockNoPoll(pValues, lLength, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(const CString& strCommand, float* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteBinaryBlockNoPoll(pValues, lLength, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(const CString& strCommand, long* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteBinaryBlockNoPoll(pValues, lLength, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(const CString& strCommand, short* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteBinaryBlockNoPoll(pValues, lLength, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(const CString& strCommand, BYTE* pValues, long lLength, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteBinaryBlockNoPoll(pValues, lLength, bFlush, lTimeout);
	}

	return hr;
}

inline HRESULT CIoSession::WriteBinaryBlockNoPoll(const CString& strCommand, SAFEARRAY* psaValues, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteStringNoPoll(strCommand, false, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = WriteBinaryBlockNoPoll(psaValues, bFlush, lTimeout);
	}

	return hr;
}

template <typename T>
HRESULT CIoSession::WriteBinaryBlockNoPoll(T* pValues, long lLength, bool bFlush, long lTimeout)
{
	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	long cbBlock = lLength * sizeof(T);

	CStringA strBlockSize;
	strBlockSize.Format("%d", cbBlock);

	CStringA strHeader;
	strHeader.Format("#%d%s", strBlockSize.GetLength(), strBlockSize);

	hr = WriteNoPoll((BYTE*)LPCSTR(strHeader), strHeader.GetLength(), NULL, false);
	if (SUCCEEDED(hr))
	{
		if (GetInstrumentBigEndian())
		{
			for (int i = 0; i < lLength && SUCCEEDED(hr); i++)
			{
				T val = pValues[i];
				hr = SwapBytes(val);
				if (SUCCEEDED(hr))
				{
					long cbActual;
					hr = WriteNoPoll((BYTE*)&val, sizeof(T), &cbActual, i == lLength - 1);
					if (SUCCEEDED(hr) && cbActual < sizeof(T))
					{
						CString strErr;
						strErr.Format(_T("Binary block write only successfully sent %d of %d data bytes to the device."), i * sizeof(T), cbBlock);
						hr = m_pErrReporter->IoError(strErr);
					}
				}
			}
		}		
		else 
		{
			long cbActual;
			hr = WriteNoPoll((BYTE*)pValues, cbBlock, &cbActual, bFlush);
			if (SUCCEEDED(hr) && cbActual < cbBlock)
			{
				CString strErr;
				strErr.Format(_T("Binary block write only successfully sent %d of %d data bytes to the device."), cbActual, cbBlock);
				hr = m_pErrReporter->IoError(strErr);
			}
		}
	}

	return hr;
}

inline HRESULT CIoSession::ReadString(CString& strResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadStringNoPoll(strResult, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadString(BSTR* pbstrResult, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadStringNoPoll(pbstrResult, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadStringNoPoll(CString& strResult, long lTimeout)
{
	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	// Read until an END condition or termchar is encountered
	strResult.Empty();

	// We don't know how much to ask for at a time, so just use the buffer size
	long cbChunk;
	hr = m_spBuf->GetReadBufferSize(&cbChunk);
	if (FAILED(hr))
		return hr;

	BYTE* pTempBuf = (BYTE*)::malloc(cbChunk); 
	if (pTempBuf == NULL)
		return m_pErrReporter->OutOfMemory(_T("Couldn't allocate temporary buffer."));

	do
	{
		long cbActual;
		hr = ReadNoPoll(pTempBuf, cbChunk, &cbActual, false);
		if (SUCCEEDED(hr))
		{
			strResult.Append(CA2T(LPCSTR(pTempBuf)), cbActual);
		}
	} while (hr == S_DATA_AVAILABLE);

	::free(pTempBuf);

	return hr;
}

inline HRESULT CIoSession::ReadStringNoPoll(BSTR* pbstrResult, long lTimeout)
{
	if (pbstrResult == NULL)
		return m_pErrReporter->NullPointer(_T("pbstrResult"));

	*pbstrResult = NULL;

	HRESULT hr = S_OK;

	CString strBuf;
	hr = ReadStringNoPoll(strBuf, lTimeout);
	if (SUCCEEDED(hr))
	{
		*pbstrResult = ::SysAllocString(CT2OLE(strBuf));
	}

	return hr;
}

inline HRESULT CIoSession::ReadNumber(double* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll(pValue, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadNumber(float* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll(pValue, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadNumber(long* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll(pValue, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadNumber(short* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll(pValue, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadNumber(BYTE* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll(pValue, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadNumberNoPoll(double* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll<double>(pValue, bFlush, lTimeout);
	
	return hr;
}

inline HRESULT CIoSession::ReadNumberNoPoll(float* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll<float>(pValue, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadNumberNoPoll(long* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll<long>(pValue, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadNumberNoPoll(short* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll<short>(pValue, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadNumberNoPoll(BYTE* pValue, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll<BYTE>(pValue, bFlush, lTimeout);

	return hr;
}

template <typename T>
HRESULT CIoSession::ReadNumberNoPoll(T* pValue, bool bFlush, long lTimeout)
{
	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	double dValue;
	hr = CFormattedIo::ScanFloat<double>(m_spBuf, "%e", SCANF_CONVERSION_BUFFER_SIZE, &dValue);
	if (SUCCEEDED(hr))
	{
		if (bFlush)
		{
			hr = m_spBuf->FlushRead();
		}

		if (SUCCEEDED(hr))
		{
			hr = CheckForOverflowOrUnderflow<T>(dValue);
			if (SUCCEEDED(hr))
			{
				*pValue = (T)dValue;
			}
		}
	}

	return hr;
}

inline HRESULT CIoSession::ReadList(double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadList(float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadList(long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadList(short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadList(BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadList(CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll(pbstrValues, lMaxLength, plActualLength, strListSeparator, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadList(SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll(ppsaData, eType, strListSeparator, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadListNoPoll(double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll<double>(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadListNoPoll(float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll<float>(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadListNoPoll(long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll<long>(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadListNoPoll(short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll<short>(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadListNoPoll(BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadListNoPoll<BYTE>(pValues, lMaxLength, plActualLength, strListSeparator, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadListNoPoll(CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_DATA_AVAILABLE;

	CT2A pszSeparator = strListSeparator;

	long lActualLength = 0;
	while (lActualLength != lMaxLength && hr == S_DATA_AVAILABLE)
	{
		CString strElement;
		char chLastCharRead;
		hr = CFormattedIo::ScanString(m_spBuf, -1, NULL, pszSeparator, NULL, DiscardStopChar, &strElement, &chLastCharRead);
		if (SUCCEEDED(hr))
		{
			// Don't add empty elements.  This matches what the VISA Formatted I/O component does.
			if (!strElement.IsEmpty())
			{
				lActualLength++;

				if (lActualLength == lMaxLength || hr != S_DATA_AVAILABLE)
				{
					// Remove the trailing characters from the last element
					long lTrailingLen = m_strTrailingForReads.GetLength();
					if (strElement.GetLength() >= lTrailingLen)
					{
						if (strElement.Right(lTrailingLen) == m_strTrailingForReads)
						{
							strElement.Truncate(strElement.GetLength() - lTrailingLen);
						}
					}
				}

				pbstrValues[lActualLength - 1] = strElement;
			}
			
			// We're done if we didn't read a delimiter after the string
			if (chLastCharRead == NULL || strListSeparator.Find(chLastCharRead) < 0)
				break;
			
			// If the delimiter we read was a whitespace, then we need to keep eating whitespace
			if (isspace(chLastCharRead) && hr == S_DATA_AVAILABLE)
			{
				hr = CFormattedIo::SkipWhitespace(m_spBuf, chLastCharRead);
				if (SUCCEEDED(hr))
				{
					// Stop if char after whitespace is not a delimiter
					if (strListSeparator.Find(chLastCharRead) < 0)
						break;
				}
			}
		} 
	}


	if (SUCCEEDED(hr))
	{		
		if (plActualLength != NULL)
		{
			*plActualLength = lActualLength;
		}

		hr = FlushRead();
	}

	return hr;
}

inline HRESULT CIoSession::ReadListNoPoll(SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator, long lTimeout)
{
	if (ppsaData == NULL)
		return m_pErrReporter->NullPointer(_T("ppsaData"));

	HRESULT hr = S_OK;

	// Free memory for array passed in so that we don't leak
	if (*ppsaData != NULL)
	{
		hr = ::SafeArrayDestroy(*ppsaData);
		if (FAILED(hr)) return hr;
	}
	
	*ppsaData = NULL;

	switch (eType)
	{
		case IoDataTypeByte:
		{
			hr = ReadSafeArrayListNoPoll<BYTE>(ppsaData, strListSeparator, lTimeout);
			break;
		}
		case IoDataTypeInt16:
		{
			hr = ReadSafeArrayListNoPoll<short>(ppsaData, strListSeparator, lTimeout);
			break;
		}
		case IoDataTypeInt32:
		{
			hr = ReadSafeArrayListNoPoll<long>(ppsaData, strListSeparator, lTimeout);
			break;
		}
		case IoDataTypeReal32:
		{
			hr = ReadSafeArrayListNoPoll<float>(ppsaData, strListSeparator, lTimeout);
			break;
		}
		case IoDataTypeReal64:
		{
			hr = ReadSafeArrayListNoPoll<double>(ppsaData, strListSeparator, lTimeout);
			break;
		}
		case IoDataTypeString:
		{
			hr = ReadSafeArrayListNoPoll<BSTR>(ppsaData, strListSeparator, lTimeout);
			break;
		}
		default:
		{
			CString strErr;
			strErr.Format(_T("%d"), eType);
			hr = m_pErrReporter->InvalidValue(_T("eType"), strErr);
			break;
		}
	}

	return hr;
}

template <typename T>
HRESULT CIoSession::ReadSafeArrayListNoPoll(SAFEARRAY** ppsaData, const CString& strListSeparator, long lTimeout)
{
	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	long cTotalElements = 0;
	long lChunkSize = DEFAULT_BUFFER_SIZE / sizeof(T);
	SAFEARRAY* psa = CreateSafeArray<T>(lChunkSize);
	if (FAILED(hr))
		return m_pErrReporter->OutOfMemory(_T("Could not allocate SAFEARRAY memory."));

	long cElementsRead;
	do
	{
		T* pData = NULL;
		hr = ::SafeArrayAccessData(psa, (void**)&pData);
		if (SUCCEEDED(hr))
		{
			pData += cTotalElements;
			hr = ReadListNoPoll(pData, lChunkSize, &cElementsRead, strListSeparator, CUR_TIMEOUT);

			HRESULT hr2 = ::SafeArrayUnaccessData(psa);
			hr = FAILED(hr) ? hr : hr2;
			if (SUCCEEDED(hr))
			{
				cTotalElements += cElementsRead;

				if (cElementsRead < lChunkSize)
				{
					// We're done reading, so resize the array appropriately
					SAFEARRAYBOUND bound;
					bound.lLbound = 0;
					bound.cElements = cTotalElements;
					hr = ::SafeArrayRedim(psa, &bound);
					if (SUCCEEDED(hr))
					{
						*ppsaData = psa;
						break;
					}
				}
				else
				{
					// We read a full chunk, so there's probably more data, so we
					// have to allocate another chunk to make room.
					SAFEARRAYBOUND bound;
					bound.lLbound = 0;
					bound.cElements = cTotalElements + lChunkSize;
					hr = ::SafeArrayRedim(psa, &bound);
				}
			}
		} 
	} while (SUCCEEDED(hr));
		
	return hr;
}

template <>
inline  SAFEARRAY* CIoSession::CreateSafeArray<BYTE>(long cElements)
{
	return ::SafeArrayCreateVectorEx(VT_UI1, 0, cElements, NULL);
}

template <>
inline  SAFEARRAY* CIoSession::CreateSafeArray<short>(long cElements)
{
	return ::SafeArrayCreateVectorEx(VT_I2, 0, cElements, NULL);
}

template <>
inline  SAFEARRAY* CIoSession::CreateSafeArray<long>(long cElements)
{
	return ::SafeArrayCreateVectorEx(VT_I4, 0, cElements, NULL);
}

template <>
inline  SAFEARRAY* CIoSession::CreateSafeArray<float>(long cElements)
{
	return ::SafeArrayCreateVectorEx(VT_R4, 0, cElements, NULL);
}

template <>
inline  SAFEARRAY* CIoSession::CreateSafeArray<double>(long cElements)
{
	return ::SafeArrayCreateVectorEx(VT_R8, 0, cElements, NULL);
}

template <>
inline  SAFEARRAY* CIoSession::CreateSafeArray<BSTR>(long cElements)
{
	return ::SafeArrayCreateVectorEx(VT_BSTR, 0, cElements, NULL);
}

template <typename T>
inline HRESULT CIoSession::ReadListNoPoll(T* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_DATA_AVAILABLE;

	int nLength = 0;
	for (int i = 0; i < lMaxLength && hr == S_DATA_AVAILABLE; i++)
	{
		double dValue;
		hr = CFormattedIo::ScanFloat<double>(m_spBuf, "%e", SCANF_CONVERSION_BUFFER_SIZE, &dValue);
		if (SUCCEEDED(hr))
		{
			HRESULT hr2 = CheckForOverflowOrUnderflow<T>(dValue);
			hr = FAILED(hr2) ? hr2 : hr;
			if (SUCCEEDED(hr))
			{
				pValues[i] = (T)dValue;
				nLength++;

				if (hr == S_DATA_AVAILABLE)
				{
					// Skip whitespace after number (unless it's a delimiter)
					char ch = -1;
					do
					{
						hr = m_spBuf->Read(ch);

					} while (isspace(ch) && strListSeparator.Find(ch) < 0 && hr == S_DATA_AVAILABLE);

					if (SUCCEEDED(hr))
					{
						// Check if the next character is a delimiter
						if (strListSeparator.Find(ch) < 0)
							break;
					}
				}
			}
		}
	}

	if (SUCCEEDED(hr))
	{
		if (plActualLength != NULL)
		{
			*plActualLength = nLength;
		}

		hr = FlushRead();
	}

	return hr;
}

template <>
inline HRESULT CIoSession::ReadListNoPoll(BSTR* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout)
{
	HRESULT hr = S_OK;
	
	long lActualLength;
	CComBSTR* pbstrValues = new CComBSTR[lMaxLength];
	hr = ReadListNoPoll(pbstrValues, lMaxLength, &lActualLength, strListSeparator, lTimeout);
	if (SUCCEEDED(hr))
	{
		for (int i = 0; i < lActualLength; i++)
		{
			pValues[i] = pbstrValues[i].Detach();
		}
	}

	delete[] pbstrValues;

	if (plActualLength != NULL)
	{
		*plActualLength = lActualLength;
	}

	return hr;
}

template <typename T>
inline HRESULT CIoSession::ReadListElement(T* pValue, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll(pValue, false, lTimeout);

	return hr;
}

template <>
inline HRESULT CIoSession::ReadListElement(double* pValue, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll(pValue, false, lTimeout);

	return hr;
}

template <>
inline HRESULT CIoSession::ReadListElement(float* pValue, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNumberNoPoll(pValue, false, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlock(double* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadBinaryBlockNoPoll(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlock(float* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadBinaryBlockNoPoll(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlock(long* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadBinaryBlockNoPoll(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlock(short* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadBinaryBlockNoPoll(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlock(BYTE* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadBinaryBlockNoPoll(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlock(SAFEARRAY** psaData, IoDataType eType, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadBinaryBlockNoPoll(psaData, eType, bSeekToBlock, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlockNoPoll(double* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadBinaryBlockNoPoll<double>(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlockNoPoll(float* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadBinaryBlockNoPoll<float>(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlockNoPoll(long* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadBinaryBlockNoPoll<long>(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlockNoPoll(short* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadBinaryBlockNoPoll<short>(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlockNoPoll(BYTE* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadBinaryBlockNoPoll<BYTE>(pValues, lMaxLength, plActualLength, bSeekToBlock, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlockNoPoll(SAFEARRAY** ppsaData, IoDataType eType, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	if (ppsaData == NULL)
		return m_pErrReporter->NullPointer(_T("ppsaData"));

	HRESULT hr = S_OK;

	// Free memory for array passed in so that we don't leak
	if (*ppsaData != NULL)
	{
		hr = ::SafeArrayDestroy(*ppsaData);
		if (FAILED(hr)) return hr;
	}

	switch (eType)
	{
		case IoDataTypeByte:
		{
			hr = ReadSafeArrayBinaryBlockNoPoll<BYTE>(ppsaData, bSeekToBlock, bFlush, lTimeout);
			break;
		}
		case IoDataTypeInt16:
		{
			hr = ReadSafeArrayBinaryBlockNoPoll<short>(ppsaData, bSeekToBlock, bFlush, lTimeout);
			break;
		}
		case IoDataTypeInt32:
		{
			hr = ReadSafeArrayBinaryBlockNoPoll<long>(ppsaData, bSeekToBlock, bFlush, lTimeout);
			break;
		}
		case IoDataTypeReal32:
		{
			hr = ReadSafeArrayBinaryBlockNoPoll<float>(ppsaData, bSeekToBlock, bFlush, lTimeout);
			break;
		}
		case IoDataTypeReal64:
		{
			hr = ReadSafeArrayBinaryBlockNoPoll<double>(ppsaData, bSeekToBlock, bFlush, lTimeout);
			break;
		}
		default:
		{
			CString strErr;
			strErr.Format(_T("%d"), eType);
			hr = m_pErrReporter->InvalidValue(_T("eType"), strErr);
			break;
		}
	}

	return hr;
}

template <typename T>
inline HRESULT CIoSession::ReadBinaryBlockNoPoll(T* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	long cbBlock;
	hr = ReadBinaryBlockHeader(bSeekToBlock, &cbBlock);
	if (SUCCEEDED(hr))
	{
		hr = ReadBinaryBlockData(pValues, lMaxLength, cbBlock, plActualLength, bFlush);
	}

	return hr;
}

template <typename T>
inline HRESULT CIoSession::ReadBinaryBlockData(T* pValues, long lMaxLength, long cbBlock, long* plActualLength, bool bFlush)
{
	HRESULT hr = S_OK;

	long cbDesired = min(lMaxLength * (long)sizeof(T), cbBlock);
	long cbActual;
	hr = m_spBuf->ReadBinaryBlockData((BYTE*)pValues, cbDesired, &cbActual, false /* defer */);
	if (SUCCEEDED(hr))
	{
		long cElements = cbActual / sizeof(T);
		if (GetInstrumentBigEndian())
		{
			hr = SwapBytes(pValues, cElements);
		}

		if (plActualLength != NULL)
		{
			*plActualLength = cElements;
		}

		if (bFlush)
		{
			// We didn't flush on the previous read because the FlushRead function does a blind read of 1000 bytes.
			// Since termchar is off during a blind read, a SOCKET connection will timeout if we do a blind read.  
			// So, we precisely read the amount of data left in the instrument.
			long cbToFlush = cbBlock - cbActual + 1;
			while (cbToFlush > 0 && SUCCEEDED(hr))
			{
				BYTE rgData[1000];
				long cbActualTemp;
				hr = m_spBuf->ReadBinaryBlockData(rgData, min(cbToFlush, 1000), &cbActualTemp, false);
				cbToFlush -= cbActualTemp;
			}
		}
	}

	return hr;
}

template <typename T>
HRESULT CIoSession::ReadSafeArrayBinaryBlockNoPoll(SAFEARRAY** ppsaData, bool bSeekToBlock, bool bFlush, long lTimeout)
{
	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	long cbBlock;
	hr = ReadBinaryBlockHeader(bSeekToBlock, &cbBlock);
	if (SUCCEEDED(hr))
	{
		// Create an array big enough to hold the entire block
		long cElements = cbBlock / sizeof(T);
		SAFEARRAY* psa = CreateSafeArray<T>(cElements);
		if (FAILED(hr))
			return m_pErrReporter->OutOfMemory(_T("Could not allocate SAFEARRAY memory."));

		T* pData = NULL;
		hr = ::SafeArrayAccessData(psa, (void**)&pData);
		if (SUCCEEDED(hr))
		{
			long cElementsRead;
			hr = ReadBinaryBlockData(pData, cElements, cbBlock, &cElementsRead, bFlush);
			HRESULT hr2 = ::SafeArrayUnaccessData(psa);
			hr = FAILED(hr) ? hr : hr2;
			if (SUCCEEDED(hr) && cElementsRead < cElements)
			{
				// We didn't read everything we were expecting, so resize the SAFEARRAY
				SAFEARRAYBOUND bound;
				bound.lLbound = 0;
				bound.cElements = cElementsRead;
				hr = ::SafeArrayRedim(psa, &bound);
			}

			if (SUCCEEDED(hr))
			{
				*ppsaData = psa;
			}
		}
	}

	return hr;
}

inline HRESULT CIoSession::ReadBinaryBlockHeader(bool bSeekToBlock, long* pcbBlock)
{
	HRESULT hr = S_OK;

	// Format is:
	// #<length of size field><block size>

	if (bSeekToBlock)
	{
		char ch;
		do
		{
			hr = ReadNoPoll(ch);
		} while (ch != '#' && SUCCEEDED(hr));
	}
	else
	{
		char ch;
		hr = ReadNoPoll(ch);
		if (SUCCEEDED(hr) && ch != '#')
		{
			hr = m_pErrReporter->UnexpectedResponse(_T("Binary block header not found."));
		}
	}

	if (SUCCEEDED(hr))
	{
		char ch;
		hr = ReadNoPoll(ch);
		if (SUCCEEDED(hr))
		{
			if (!isdigit(ch))
			{
				hr = m_pErrReporter->UnexpectedResponse(_T("Binary block header not found."));
			}
			else
			{
				long cbSizeField = ch - '0';
				char szSizeField[50];
				long cbActual;
				hr = ReadNoPoll((BYTE*)szSizeField, cbSizeField, &cbActual, false);
				if (SUCCEEDED(hr))
				{
					if (cbActual != cbSizeField)
					{
						hr = m_pErrReporter->UnexpectedResponse(_T("Binary block header not found."));
					}
					else
					{
						szSizeField[cbSizeField] = NULL;

						LPSTR pszEnd = NULL;
						*pcbBlock = strtol(szSizeField, &pszEnd, 10);
						if (pszEnd == szSizeField)
						{
							// Couldn't convert
							hr = m_pErrReporter->UnexpectedResponse(_T("Binary block header not found."));
						}
					}
				}
			}
		}
	}

	return hr;
}

inline HRESULT CIoSession::Write(char ch, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteNoPoll(ch, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::Write(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteNoPoll(pBuf, cbDesired, pcbActual, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::Write(SAFEARRAY* psaBuf, long cbDesired, long* pcbActual, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteNoPoll(psaBuf, cbDesired, pcbActual, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::WriteNoPoll(char ch, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = WriteNoPoll((BYTE*)&ch, 1, NULL, bFlush, lTimeout);

	return hr;
}

inline HRESULT CIoSession::WriteNoPoll(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	hr = m_spBuf->Write(pBuf, cbDesired, pcbActual, bFlush);

	return hr;
}

inline HRESULT CIoSession::WriteNoPoll(SAFEARRAY* psaBuf, long cbDesired, long* pcbActual, bool bFlush, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	hr = m_spBuf->Write(psaBuf, cbDesired, pcbActual, bFlush);

	return hr;
}

inline HRESULT CIoSession::Read(char& ch, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNoPoll(ch, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::Read(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNoPoll(pBuf, cbDesired, pcbActual, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::Read(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNoPoll(ppsaBuf, cbDesired, bFlush, lTimeout);
	if (SUCCEEDED(hr) && bFlush)
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::ReadNoPoll(char& ch, long lTimeout)
{
	HRESULT hr = S_OK;

	hr = ReadNoPoll((BYTE*)&ch, 1, NULL, false, lTimeout);

	return hr;
}

inline HRESULT CIoSession::ReadNoPoll(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	hr = m_spBuf->Read(pBuf, cbDesired, pcbActual, bFlush);

	return hr;
}

inline HRESULT CIoSession::ReadNoPoll(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	hr = m_spBuf->Read(ppsaBuf, cbDesired, bFlush);

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// ILowLevelIo

inline HRESULT CIoSession::LowLevelRead(BYTE* pBuf, long cbDesired, long* plActual, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = LowLevelReadNoPoll(pBuf, cbDesired, plActual, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::LowLevelRead(SAFEARRAY** ppsaBuf, long cbDesired, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = LowLevelReadNoPoll(ppsaBuf, cbDesired, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::LowLevelReadString(BSTR* pbstrBuf, long cchDesired, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = LowLevelReadStringNoPoll(pbstrBuf, cchDesired, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::LowLevelReadString(CString& strBuf, long cchDesired, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = LowLevelReadStringNoPoll(strBuf, cchDesired, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::LowLevelWrite(BYTE* pBuf, long cbDesired, long* plActual, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = LowLevelWriteNoPoll(pBuf, cbDesired, plActual, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::LowLevelWrite(SAFEARRAY* psaBuf, long cbDesired, long* plActual, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = LowLevelWriteNoPoll(psaBuf, cbDesired, plActual, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::LowLevelWriteString(BSTR bstrBuf, long* pcchActual, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = LowLevelWriteStringNoPoll(bstrBuf, pcchActual, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::LowLevelWriteString(const CString& strBuf, long* pcchActual, long lTimeout)
{
	if (!Initialized()) return m_pErrReporter->NotInitialized();

	HRESULT hr = S_OK;

	hr = LowLevelWriteStringNoPoll(strBuf, pcchActual, lTimeout);
	if (SUCCEEDED(hr))
	{
		hr = PollInstrumentErrors();
	}

	return hr;
}

inline HRESULT CIoSession::RemoveTrailing(CString& strBuf) const
{
	HRESULT hr = S_OK;

	long lLen = strBuf.GetLength();
	long lTrailingLen = GetTrailingForReads().GetLength();

	if (strBuf.Right(lTrailingLen) == GetTrailingForReads())
	{
		strBuf.Truncate(lLen - lTrailingLen);
	}

	return hr;
}

template <>
inline HRESULT CIoSession::CheckForOverflowOrUnderflow<double>(double dValue)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(dValue);

	return hr;
}

template <>
inline HRESULT CIoSession::CheckForOverflowOrUnderflow<float>(double dValue)
{
	HRESULT hr = S_OK;

	if (fabs(dValue) > FLT_MAX || (fabs(dValue) > DBL_MIN && fabs(dValue) < FLT_MIN))
	{
		CString strErr;
		strErr.Format(_T("Overflow or underflow reading value of '%e' into a single-precision float."), dValue);
		return m_pErrReporter->IoError(strErr);
	}

	return hr;
}

template <>
inline HRESULT CIoSession::CheckForOverflowOrUnderflow<long>(double dValue)
{
	HRESULT hr = S_OK;

	if (dValue > _I32_MAX || dValue < _I32_MIN)
	{
		CString strErr;
		strErr.Format(_T("Overflow or underflow reading value of '%e' into a long."), dValue);
		return m_pErrReporter->IoError(strErr);
	}

	return hr;
}

template <>
inline HRESULT CIoSession::CheckForOverflowOrUnderflow<short>(double dValue)
{
	HRESULT hr = S_OK;

	if (dValue > _I16_MAX || dValue < _I16_MIN)
	{
		CString strErr;
		strErr.Format(_T("Overflow or underflow reading value of '%e' into a short."), dValue);
		return m_pErrReporter->IoError(strErr);
	}

	return hr;
}

template <>
inline HRESULT CIoSession::CheckForOverflowOrUnderflow<BYTE>(double dValue)
{
	HRESULT hr = S_OK;

	if (dValue > _UI8_MAX || dValue < 0)
	{
		CString strErr;
		strErr.Format(_T("Overflow or underflow reading value of '%e' into a BYTE."), dValue);
		return m_pErrReporter->IoError(strErr);
	}

	return hr;
}


///////////////////////////////////////////////////////////////////////////////
// CInstrBuffer

inline CInstrBuffer::CInstrBuffer(ILowLevelIo* pIo, IErrorReporter* pErr, BYTE* pTrailingForReads, long cbTrailingForReads, BYTE* pTrailingForWrites, long cbTrailingForWrites)
	: m_pIo(pIo), m_pErrReporter(pErr), m_pReadBuf(NULL), m_pWriteBuf(NULL), m_bEndOfInput(true), m_bEndOfInputOnLastRefill(true), m_bBigEndian(true)
{
	HRESULT hr = S_OK;

	m_pTrailingForReads = (BYTE*)::malloc(cbTrailingForReads);	
	m_cbTrailingForReads = cbTrailingForReads;

	::memcpy_s(m_pTrailingForReads, cbTrailingForReads, pTrailingForReads, cbTrailingForReads);

	m_pTrailingForWrites = (BYTE*)::malloc(cbTrailingForWrites);	
	m_cbTrailingForWrites = cbTrailingForWrites;

	::memcpy_s(m_pTrailingForWrites, cbTrailingForWrites, pTrailingForWrites, cbTrailingForWrites);

	hr = InitializeReadBuffer(DEFAULT_BUFFER_SIZE);
	ATLASSERT(SUCCEEDED(hr));

	hr = InitializeWriteBuffer(DEFAULT_BUFFER_SIZE);
	ATLASSERT(SUCCEEDED(hr));
}

inline CInstrBuffer::~CInstrBuffer()
{
	HRESULT hr = S_OK;

	if (m_pTrailingForReads != NULL)
		::free(m_pTrailingForReads);

	if (m_pTrailingForWrites != NULL)
		::free(m_pTrailingForWrites);

	hr = CloseReadBuffer();
	ATLASSERT(SUCCEEDED(hr));

	hr = CloseWriteBuffer();
	ATLASSERT(SUCCEEDED(hr));
}

inline HRESULT CInstrBuffer::InitializeReadBuffer(long cbCapacity)
{
	HRESULT hr = S_OK;

	hr = CloseReadBuffer();
	if (SUCCEEDED(hr))
	{
		m_pReadBuf = (BYTE*)::malloc(cbCapacity);
		if (m_pReadBuf == NULL)
		{
			CString strErr;
			strErr.Format(_T("Couldn't allocate formatted I/O read buffer with a capacity of %d bytes."), cbCapacity);
			return m_pErrReporter->OutOfMemory(strErr);
		}

		::memset(m_pReadBuf, 0, cbCapacity);

		m_cbReadCapacity = cbCapacity;
		m_cbReadDataLoaded = 0;
		m_cbReadDataLoadedWithoutTrailing = 0;
		m_lReadPos = 0;
		m_bEndOfInput = true;
		m_bEndOfInputOnLastRefill = true;
	}

	return S_OK;
}

inline HRESULT CInstrBuffer::InitializeWriteBuffer(long cbCapacity)
{
	HRESULT hr = S_OK;

	hr = CloseWriteBuffer();
	if (SUCCEEDED(hr))
	{
		// Allocate extra space for the trailing characters so that we don't have to reallocate on flushes
		m_pWriteBuf = (BYTE*)::malloc(cbCapacity + m_cbTrailingForWrites);
		if (m_pWriteBuf == NULL)
		{
			CString strErr;
			strErr.Format(_T("Couldn't allocate formatted I/O write buffer with a capacity of %d bytes."), cbCapacity);
			return m_pErrReporter->OutOfMemory(strErr);
		}

		::memset(m_pWriteBuf, 0, cbCapacity + m_cbTrailingForWrites);

		m_cbWriteCapacity = cbCapacity;
		m_cbWriteDataLoaded = 0;
	}

	return hr;
}

inline HRESULT CInstrBuffer::CloseReadBuffer()
{
	if (m_pReadBuf != NULL)
		::free(m_pReadBuf);

	return S_OK;
}

inline HRESULT CInstrBuffer::CloseWriteBuffer()
{
	if (m_pWriteBuf != NULL)
		::free(m_pWriteBuf);

	return S_OK;
}

inline HRESULT CInstrBuffer::Read(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("pBuf"));

	HRESULT hr = S_OK;

	if (cbDesired > 0 && m_cbReadDataLoadedWithoutTrailing == 0)
	{
		// We must go to the instrument initially
		hr = RefillReadBuffer();
	}

	long cbTotalRead = 0;
	do
	{
		if (m_cbReadDataLoadedWithoutTrailing > 0)
		{
			// Read from the buffer
			long cbCurChunk = min(cbDesired - cbTotalRead, m_cbReadDataLoadedWithoutTrailing);
			HRESULT hr2 = BufferRead(pBuf, cbCurChunk, true);
			hr = FAILED(hr2) ? hr2 : hr;
			if (SUCCEEDED(hr))
			{
				cbTotalRead += cbCurChunk;
				pBuf += cbCurChunk;
			}
		}

		long cbNeeded = cbDesired - cbTotalRead;
		if (cbNeeded > m_cbReadDataLoadedWithoutTrailing && !m_bEndOfInput)
		{
			hr = RefillReadBuffer();
		}
	} while (cbTotalRead < cbDesired && m_cbReadDataLoadedWithoutTrailing > 0 && SUCCEEDED(hr));

	if (pcbActual != NULL)
	{
		*pcbActual = cbTotalRead;
	}

	if (SUCCEEDED(hr))
	{
		if (bFlush)
		{
			hr = FlushRead();
		}
		else
		{
			if (m_cbReadDataLoadedWithoutTrailing > 0)
			{
				hr = S_DATA_AVAILABLE;
			}
			else if (m_cbReadDataLoadedWithoutTrailing == 0)
			{
				hr = m_bEndOfInput ? S_OK : S_DATA_AVAILABLE;
			}
		}
	}

	return hr;
}

inline HRESULT CInstrBuffer::Read(LPSTR pszBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	hr = Read((BYTE*)pszBuf, cbDesired, pcbActual, bFlush);

	return hr;
}

inline HRESULT CInstrBuffer::Read(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("ppsaBuf"));

	*ppsaBuf = NULL;

	HRESULT hr = S_OK;

	SAFEARRAY* psa = ::SafeArrayCreateVectorEx(VT_UI1, 0, cbDesired, NULL);
	if (psa == NULL)
		return m_pErrReporter->OutOfMemory(_T("Could not allocate SAFEARRAY memory for Read."));

	BYTE* pBuf = NULL;
	hr = ::SafeArrayAccessData(psa, (void**)&pBuf);
	if (SUCCEEDED(hr))
	{
		long cbActual;
		hr = Read(pBuf, cbDesired, &cbActual, bFlush);

		HRESULT hr2 = ::SafeArrayUnaccessData(psa);
		hr = FAILED(hr) ? hr : hr2;

		if (SUCCEEDED(hr) && cbActual < cbDesired)
		{
			// Need to resize the outgoing array
			SAFEARRAYBOUND bound;
			bound.lLbound = 0;
			bound.cElements = cbActual;
			hr = ::SafeArrayRedim(psa, &bound);
		}

		if (SUCCEEDED(hr))
		{
			*ppsaBuf = psa;
		}
		else
		{
			hr = ::SafeArrayDestroy(psa);
		}
	}

	return hr;
}

inline HRESULT CInstrBuffer::Read(BSTR* pbstrBuf, long cbDesired, bool bFlush)
{
	if (pbstrBuf == NULL)
		return m_pErrReporter->NullPointer(_T("pbstrBuf"));

	*pbstrBuf = NULL;

	HRESULT hr = S_OK;

	BYTE* pBuf = (BYTE*)::malloc(cbDesired + 1);	// Make room for NULL terminator needed for SysAllocStringByteLen
	if (pBuf == NULL)
		return m_pErrReporter->OutOfMemory(_T("Could not allocate BSTR memory for Read."));

	long cbActual;
	hr = Read(pBuf, cbDesired, &cbActual, bFlush);
	if (SUCCEEDED(hr))
	{
		// Add NULL terminator for SysAllocStringByteLen
		pBuf[cbActual] = NULL;
		BSTR bstr = ::SysAllocStringByteLen((LPSTR)pBuf, cbActual);
		if (bstr == NULL)
			return m_pErrReporter->OutOfMemory(_T("Could not allocate BSTR memory for Read."));

		*pbstrBuf = bstr;
	}

	::free(pBuf);

	return hr;
}

inline HRESULT CInstrBuffer::Read(char& ch)
{
	HRESULT hr = S_OK;

	hr = Read((BYTE*)&ch, 1, NULL, false);

	return hr;
}

inline HRESULT CInstrBuffer::UnReadChar()
{
	HRESULT hr = S_OK;

	// Can't push a char onto the buffer if we're already at the very beginning
	if (m_lReadPos == 0)
		return m_pErrReporter->OutOfMemory(_T("Can't push character back into read buffer.  Buffer has not been read from."));

	// Restore the EOI indicator if we're pushing back the last character before EOI (that caused it to be cleared)
	if (m_cbReadDataLoadedWithoutTrailing == 0)
	{
		m_bEndOfInput = m_bEndOfInputOnLastRefill;
	}

	m_lReadPos--;
	m_cbReadDataLoaded++;
	m_cbReadDataLoadedWithoutTrailing++;

	return hr;
}

inline HRESULT CInstrBuffer::ReadBinaryBlockData(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("pBuf"));

	HRESULT hr = S_OK;

	// Disable the termchar if it's enabled
	bool bTermCharEnabled;
	hr = m_pIo->GetTerminationCharacterEnabled(&bTermCharEnabled);
	if (SUCCEEDED(hr))
	{
		if (bTermCharEnabled)
		{
			hr = m_pIo->SetTerminationCharacterEnabled(false);
		}

		if (SUCCEEDED(hr))
		{
			// We read all data left in the buffer and then try and read from the instrument
			long cbBufferData = min(cbDesired, m_cbReadDataLoaded);
			long cbDeviceData = cbDesired - cbBufferData;
			hr = BufferRead(pBuf, cbBufferData, false);
			if (SUCCEEDED(hr))
			{
				if (cbDeviceData > 0)
				{
					hr = m_pIo->LowLevelReadNoPoll(pBuf + cbBufferData, cbDeviceData, pcbActual);
					if (SUCCEEDED(hr))
					{
						if (pcbActual != NULL)
						{
							*pcbActual += cbBufferData;
						}

						m_bEndOfInput = hr != S_DATA_AVAILABLE;
						m_bEndOfInputOnLastRefill = m_bEndOfInput;
					}
				}
				else
				{
					if (pcbActual != NULL)
					{
						*pcbActual = cbDesired;
					}
				}

				if (bFlush)
				{
					hr = FlushRead();
				}
			}

			// Re-enable the termchar if previously enabled
			if (bTermCharEnabled)
			{
				HRESULT hr2 = m_pIo->SetTerminationCharacterEnabled(true);
				hr = FAILED(hr) ? hr : hr2;
			}
		}
	}

	return hr;
}

inline HRESULT CInstrBuffer::Write(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("pBuf"));

	HRESULT hr = S_OK;

	hr = BufferWrite(pBuf, cbDesired, pcbActual, bFlush);

	return hr;
}

inline HRESULT CInstrBuffer::Write(LPCSTR pszBuf, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	long cbDesired = (long)strlen(pszBuf);

	hr = BufferWrite((BYTE*)pszBuf, cbDesired, pcbActual, bFlush);

	return hr;
}

inline HRESULT CInstrBuffer::Write(SAFEARRAY* psaBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	hr = ValidateSafeArray(psaBuf, VT_UI1, m_pErrReporter);
	if (FAILED(hr))
		return hr;

	BYTE* pBuf = NULL;
	hr = ::SafeArrayAccessData(psaBuf, (void**)&pBuf);
	if (SUCCEEDED(hr))
	{
		hr = BufferWrite(pBuf, cbDesired, pcbActual, bFlush);

		HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
		hr = FAILED(hr) ? hr : hr2;
	}

	return hr;
}

inline HRESULT CInstrBuffer::Write(BSTR bstrBuf, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	long cbDesired = (long)::SysStringLen(bstrBuf);
	CW2A pszBuf = bstrBuf;
	hr = BufferWrite((BYTE*)LPSTR(pszBuf), cbDesired, pcbActual, bFlush);

	return hr;
}

inline HRESULT CInstrBuffer::Write(char ch, bool bFlush)
{
	HRESULT hr = S_OK;

	hr = BufferWrite((BYTE*)&ch, 1, NULL, bFlush);

	return hr;
}

inline HRESULT CInstrBuffer::RefillReadBuffer()
{
	HRESULT hr = S_OK;

	// We only refill the read buffer when it's empty
	ATLASSERT(m_cbReadDataLoaded == 0);
	ATLASSERT(m_cbReadDataLoadedWithoutTrailing == 0);

	hr = m_pIo->LowLevelReadNoPoll(m_pReadBuf, m_cbReadCapacity, &m_cbReadDataLoaded);
	if (SUCCEEDED(hr))
	{
		m_lReadPos = 0;

		m_bEndOfInput = hr != S_DATA_AVAILABLE;
		m_bEndOfInputOnLastRefill = m_bEndOfInput;

		m_cbReadDataLoadedWithoutTrailing = GetNumBytesLoadedWithoutTrailing();
	}

	return hr;
}

inline HRESULT CInstrBuffer::BufferRead(BYTE* pBuf, long cbDesired, bool bRemoveTrailing)
{
	HRESULT hr = S_OK;

	ATLASSERT(cbDesired <= (bRemoveTrailing ? m_cbReadDataLoadedWithoutTrailing : m_cbReadDataLoaded));
	if (cbDesired <= (bRemoveTrailing ? m_cbReadDataLoadedWithoutTrailing : m_cbReadDataLoaded))
	{
		errno_t err = ::memcpy_s(pBuf, cbDesired, (void*)&m_pReadBuf[m_lReadPos], cbDesired);
		if (err)
		{
			CString strErr;
			strErr.Format(_T("Failed copying data from formatted I/O read buffer to user buffer."));
			hr = m_pErrReporter->OutOfMemory(strErr);
		}
		else
		{
			m_cbReadDataLoaded -= cbDesired;
			m_cbReadDataLoadedWithoutTrailing = max(0, m_cbReadDataLoadedWithoutTrailing - cbDesired);
			m_lReadPos += cbDesired;
			
			ATLASSERT(m_cbReadDataLoaded >= 0);
			ATLASSERT(m_cbReadDataLoadedWithoutTrailing >= 0);
			ATLASSERT(m_lReadPos <= m_cbReadCapacity);

			if (bRemoveTrailing && m_bEndOfInput && m_cbTrailingForReads > 0 && m_cbReadDataLoaded == m_cbTrailingForReads)
			{
				if (::memcmp(m_pReadBuf + m_lReadPos + m_cbReadDataLoaded - m_cbTrailingForReads, m_pTrailingForReads, m_cbTrailingForReads) == 0)
				{
					m_cbReadDataLoaded -= m_cbTrailingForReads;
					m_lReadPos += m_cbTrailingForReads;
				}
			}
		}
	}

	return hr;
}

inline HRESULT CInstrBuffer::BufferWrite(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	long cbTotalWritten = 0;
	do
	{
		long cbAvailable = m_cbWriteCapacity - m_cbWriteDataLoaded;
		long cbCurChunk = min(cbDesired - cbTotalWritten, cbAvailable);
		errno_t err = ::memcpy_s((void*)&m_pWriteBuf[m_cbWriteDataLoaded], cbDesired, (void*)pBuf, cbCurChunk);
		if (err)
		{
			CString strErr;
			strErr.Format(_T("Failed copying data from user buffer to formatted I/O write buffer."));
			return m_pErrReporter->OutOfMemory(strErr);
		}

		cbTotalWritten += cbCurChunk;
		m_cbWriteDataLoaded += cbCurChunk;
		pBuf += cbCurChunk;

		if (m_cbWriteDataLoaded == m_cbWriteCapacity)
		{
			// Buffer is full, so flush it (but don't send EOI, or termchar)
			hr = FlushWrite(false);
		}

	} while (cbTotalWritten < cbDesired && SUCCEEDED(hr));

	if (bFlush)
	{
		hr = FlushWrite(bFlush);
	}

	if (SUCCEEDED(hr) && pcbActual != NULL)
	{
		*pcbActual = cbTotalWritten;
	}

	return hr;
}

inline HRESULT CInstrBuffer::FlushRead()
{
	HRESULT hr = S_OK;

	// If the read buffer has no EOI in it, keep reading until an EOI is encountered
	if (!m_bEndOfInputOnLastRefill)
	{
		do
		{
			CComBSTR bstr;
			hr = m_pIo->LowLevelReadStringNoPoll(&bstr, 1000);
		} while (hr == S_DATA_AVAILABLE);
	}

	::memset(m_pReadBuf, 0, m_cbReadCapacity);

	m_cbReadDataLoaded = 0;
	m_cbReadDataLoadedWithoutTrailing = 0;
	m_lReadPos = 0;
	m_bEndOfInput = true;
	m_bEndOfInputOnLastRefill = true;

	return hr;
}

inline HRESULT CInstrBuffer::FlushWrite(bool bSendEnd)
{
	HRESULT hr = S_OK;

	if (m_cbWriteDataLoaded > 0)
	{
		bool bReenableSendEnd = false;
		if (!bSendEnd)
		{
			// We must disable EOI if the user asked us not to send it with this flush
			bool bSendEndEnabled;
			hr = m_pIo->GetSendEndEnabled(&bSendEndEnabled);
			if (SUCCEEDED(hr) && bSendEndEnabled)
			{
				hr = m_pIo->SetSendEndEnabled(false);
				bReenableSendEnd = true;
			}
		}

		if (SUCCEEDED(hr))
		{
			long cbDataToSend = m_cbWriteDataLoaded;
			if (SUCCEEDED(hr) && bSendEnd)
			{
				long cbAppended;
				hr = AppendTrailingForWrites(&cbAppended);
				if (SUCCEEDED(hr))
				{
					cbDataToSend += cbAppended;
				}
			}

			if (SUCCEEDED(hr))
			{
				long cbActual;
				hr = m_pIo->LowLevelWriteNoPoll(m_pWriteBuf, cbDataToSend, &cbActual);
				if (SUCCEEDED(hr))
				{
					if (cbActual < cbDataToSend)
					{
						CString strErr;
						strErr.Format(_T("Flush of formatted I/O write buffer only successfully sent %d of %d bytes to the device."), cbActual, cbDataToSend);
						hr = m_pErrReporter->IoError(strErr);
					}

					::memset(m_pWriteBuf, 0, m_cbWriteCapacity + m_cbTrailingForWrites);

					m_cbWriteDataLoaded = 0;
				}
			}
		}

		if (bReenableSendEnd)
		{
			HRESULT hr2 = m_pIo->SetSendEndEnabled(true);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	return hr;
}

inline HRESULT CInstrBuffer::SetBufferSize(IoBufferMask eMask, long cbSize)
{
	HRESULT hr = S_OK;
	
	if (eMask == IoReadBuffer || eMask == IoReadAndWriteBuffers)
	{
		hr = FlushRead();
		if (SUCCEEDED(hr))
		{
			hr = InitializeReadBuffer(cbSize);
		}
	}

	if (SUCCEEDED(hr) && (eMask == IoWriteBuffer || eMask == IoReadAndWriteBuffers))
	{
		hr = FlushWrite(true);
		if (SUCCEEDED(hr))
		{
			hr = InitializeWriteBuffer(cbSize);
		}
	}

	return hr;
}

inline HRESULT CInstrBuffer::GetReadBufferSize(long* pcbSize)
{
	HRESULT hr = S_OK;

	if (pcbSize == NULL)
		return E_POINTER;

	*pcbSize = m_cbReadCapacity;

	return hr;
}

inline HRESULT CInstrBuffer::GetWriteBufferSize(long* pcbSize)
{
	HRESULT hr = S_OK;

	if (pcbSize == NULL)
		return E_POINTER;

	*pcbSize = m_cbWriteCapacity;

	return hr;
}

inline HRESULT CInstrBuffer::SetTrailingForWrites(BYTE* pTrailing, long cbTrailing)
{
	HRESULT hr = S_OK;

	if (m_pTrailingForWrites != NULL)
		::free(m_pTrailingForWrites);

	m_pTrailingForWrites = (BYTE*)::malloc(cbTrailing);
	m_cbTrailingForWrites = cbTrailing;

	::memcpy_s(m_pTrailingForWrites, cbTrailing, pTrailing, cbTrailing);

	m_pWriteBuf = (BYTE*)::realloc(m_pWriteBuf, m_cbWriteCapacity + cbTrailing);
	if (m_pWriteBuf == NULL)
	{
		CString strErr;
		strErr.Format(_T("Couldn't allocate formatted I/O write buffer with a capacity of %d bytes."), m_cbWriteCapacity);
		return m_pErrReporter->OutOfMemory(strErr);
	}

	return hr;
}

inline HRESULT CInstrBuffer::SetTrailingForReads(BYTE* pTrailing, long cbTrailing)
{
	HRESULT hr = S_OK;

	if (m_pTrailingForReads != NULL)
		::free(m_pTrailingForReads);

	m_pTrailingForReads = (BYTE*)::malloc(cbTrailing);
	m_cbTrailingForReads = cbTrailing;

	::memcpy_s(m_pTrailingForReads, cbTrailing, pTrailing, cbTrailing);

	return hr;
}

inline bool CInstrBuffer::GetBigEndian() const
{
	return m_bBigEndian;
}

inline void CInstrBuffer::SetBigEndian(bool bBigEndian)
{
	m_bBigEndian = bBigEndian;
}

inline HRESULT CInstrBuffer::AppendTrailingForWrites(long* pcbAppended)
{
	HRESULT hr = S_OK;

	if (pcbAppended == NULL)
		return E_POINTER;

	*pcbAppended = 0;

	if (m_cbTrailingForWrites > 0)
	{
		bool bDataEndsWithTrailing = m_cbWriteDataLoaded >= m_cbTrailingForWrites &&
			::memcmp(m_pWriteBuf + m_cbWriteDataLoaded - m_cbTrailingForWrites, m_pTrailingForWrites, m_cbTrailingForWrites) == 0;

		if (!bDataEndsWithTrailing)
		{
			::memcpy_s(m_pWriteBuf + m_cbWriteDataLoaded, m_cbTrailingForWrites, m_pTrailingForWrites, m_cbTrailingForWrites);
			*pcbAppended += m_cbTrailingForWrites;
		}
	}

	return hr;
}

inline long CInstrBuffer::GetNumBytesLoadedWithoutTrailing()
{
	if (m_bEndOfInput && m_cbTrailingForReads > 0 && m_cbReadDataLoaded >= m_cbTrailingForReads)
	{
		if (::memcmp(m_pReadBuf + m_lReadPos + m_cbReadDataLoaded - m_cbTrailingForReads, m_pTrailingForReads, m_cbTrailingForReads) == 0)
		{
			return m_cbReadDataLoaded - m_cbTrailingForReads;
		}
	}

	return m_cbReadDataLoaded;
}
