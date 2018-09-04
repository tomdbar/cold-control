/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

///////////////////////////////////////////////////////////////////////////////
// IVisaComSession

inline CVisaComSession::CVisaComSession()
	: m_pSession(NULL), m_pFormatted(NULL), m_pMessage(NULL), m_pAsyncMessage(NULL), m_pRegister(NULL), m_pSharedRegister(NULL), m_pEventManager(NULL)
{
}

inline CVisaComSession::~CVisaComSession()
{
}

inline HRESULT CVisaComSession::Initialize(const CString& strResourceDescriptor, IInstrErrorPoller* pErrorPoller, IErrorReporter* pErrorReporter, IEnumFormatter* pEnumFormatter)
{
	HRESULT hr = S_OK;

	hr = __super::Initialize(strResourceDescriptor, pErrorPoller, pErrorReporter, pEnumFormatter);
	if (SUCCEEDED(hr))
	{
		IResourceManager* pResourceManager = NULL;
		hr = ::CoCreateInstance(__uuidof(ResourceManager), NULL, CLSCTX_ALL, __uuidof(IResourceManager), (void**)&pResourceManager);
		if (FAILED(hr))
		{
			// An incomplete installation of VISA-COM supplied by Agilent may not have the global resource manager
			// in this case try with the Agilent resource manager
			hr = ::CoCreateInstance(CLSID_AgilentSRM, NULL, CLSCTX_ALL, __uuidof(IResourceManager), (void**)&pResourceManager);
		}

		if (SUCCEEDED(hr))
		{
			CComBSTR bstrOptionString("");
			hr = pResourceManager->Open(CComBSTR(CT2OLE(strResourceDescriptor)), NO_LOCK, DEFAULT_TIMEOUT, bstrOptionString, &m_pSession);

			if (SUCCEEDED(hr))
			{
				hr = m_pSession->QueryInterface(__uuidof(IMessage), (void**)&m_pMessage);
				if (SUCCEEDED(hr))
				{
					hr = m_pSession->QueryInterface(__uuidof(IEventManager), (void**)&m_pEventManager);
					if (SUCCEEDED(hr))
					{
						HRESULT hr2 = m_pSession->QueryInterface(__uuidof(IRegister), (void**)&m_pRegister);
						if (FAILED(hr2))
						{
							// Not a fatal error since many interface types don't support IRegister
							m_pRegister = NULL;
						}

						hr2 = m_pSession->QueryInterface(__uuidof(IAsyncMessage), (void**)&m_pAsyncMessage);
						if (FAILED(hr2))
						{
							// Not a fatal error since some interface types don't support IAsyncMessage
							m_pAsyncMessage = NULL;
						}

						hr2 = m_pSession->QueryInterface(__uuidof(ISharedRegister), (void**)&m_pSharedRegister);
						if (FAILED(hr2))
						{
							// Not a fatal error since some interface types don't support ISharedRegister
							m_pSharedRegister = NULL;
						}

						hr = ::CoCreateInstance(__uuidof(FormattedIO488), NULL, CLSCTX_ALL, __uuidof(IFormattedIO488), (void**)&m_pFormatted);
						if (SUCCEEDED(hr))
						{
							hr = m_pFormatted->putref_IO(m_pMessage);
						}
						else
						{
							hr = AtlReportError(__uuidof(FormattedIO488), _T("Could not create instance of VISA-COM FormattedIO488 Component. Make sure this component is properly installed."), __uuidof(IFormattedIO488), hr);
						}
					}
				}
			}
			else
			{
				hr = m_pErrReporter->IoError(_T("Failed to open VISA resource."));
			}

			pResourceManager->Release();
		}
		else
		{
			// Couldn't create the VISA-COM resource manager
			hr = AtlReportError(__uuidof(ResourceManager), _T("Could not create instance of VISA-COM Global Resource Manager Component. Make sure it is installed properly."), __uuidof(IResourceManager), hr);
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = __super::FinalInitialize();
	}

	return hr;
}

inline HRESULT CVisaComSession::Close()
{
	HRESULT hr = S_OK;

	hr = __super::Close();
	if (SUCCEEDED(hr))
	{
		if (m_pFormatted != NULL)
		{
			m_pFormatted->Release();
			m_pFormatted = NULL;
		}
		
		if (m_pMessage != NULL)
		{
			m_pMessage->Release();
			m_pMessage = NULL;
		}

		if (m_pRegister != NULL)
		{
			m_pRegister->Release();
			m_pRegister = NULL;
		}

		if (m_pAsyncMessage != NULL)
		{
			m_pAsyncMessage->Release();
			m_pAsyncMessage = NULL;
		}

		if (m_pSharedRegister != NULL)
		{
			m_pSharedRegister->Release();
			m_pSharedRegister = NULL;
		}

		if (m_pEventManager != NULL)
		{
			m_pEventManager->Release();
			m_pEventManager = NULL;
		}

		if (m_pSession != NULL)
		{
			hr = m_pSession->Close();

			m_pSession->Release();
			m_pSession = NULL;
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::GetLastStatus(HRESULT* pStatus)
{
	if (pStatus == NULL)
		return m_pErrReporter->NullPointer(_T("GetLastStatus"), _T("pStatus"));

	return m_pSession->get_LastStatus(pStatus);
}

inline HRESULT CVisaComSession::ReadStatusByte(short* psStatusByte)
{
	if (psStatusByte == NULL)
		return m_pErrReporter->NullPointer(_T("ReadStatusBte"), _T("psStatusByte"));

	return m_pMessage->ReadSTB(psStatusByte);
}

inline HRESULT CVisaComSession::Clear()
{
	return m_pMessage->Clear();
}

inline HRESULT CVisaComSession::SetTimeout(long lTimeout)
{
	return m_pSession->put_Timeout(lTimeout);
}

inline HRESULT CVisaComSession::GetTimeout(long* plTimeout)
{
	if (plTimeout == NULL)
		return m_pErrReporter->NullPointer(_T("GetTimeout"), _T("plTimeout"));

	return m_pSession->get_Timeout(plTimeout);
}

inline HRESULT CVisaComSession::SetProtocol(VisaIoProtocol eProtocol)
{
	HRESULT hr = S_OK;
	IOProtocol eVisaProtocol = PROT_NORMAL;
	switch (eProtocol)
	{
		case VisaProtocolNormal:
			eVisaProtocol = PROT_NORMAL;
			break;
		case VisaProtocol4882Strs:
			eVisaProtocol = PROT_4882_STRS;
			break;
		case VisaProtocolFdc:
			eVisaProtocol = PROT_FDC;
			break;
		case VisaProtocolHs488:
			eVisaProtocol = PROT_HS488;
			break;
		case VisaProtocolUsbTmcVendor:
			eVisaProtocol = PROT_USBTMC_VENDOR;
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA I/O protocol."));
			break;
	}

	if (SUCCEEDED(hr))
	{
		hr = m_pMessage->put_IOProtocol(eVisaProtocol);
	}

	return hr;
}

inline HRESULT CVisaComSession::GetProtocol(VisaIoProtocol* peProtocol)
{
	if (peProtocol == NULL)
		return m_pErrReporter->NullPointer(_T("GetProtocol"), _T("peProtocol"));

	HRESULT hr = S_OK;

	IOProtocol eVisaProtocol;
	hr = m_pMessage->get_IOProtocol(&eVisaProtocol);
	if (SUCCEEDED(hr))
	{
		// We need to mask off the upper 16 bits, since some VISA-COM implementations do
		// not do this correctly
		eVisaProtocol = (IOProtocol)((long)eVisaProtocol & 0x0000FFFF);
		switch (eVisaProtocol)
		{
			case PROT_NORMAL:
				*peProtocol = VisaProtocolNormal;
				break;
			case PROT_4882_STRS:
				*peProtocol = VisaProtocol4882Strs;
				break;
			case PROT_FDC:
				*peProtocol = VisaProtocolFdc;
				break;
			case PROT_HS488:
				*peProtocol = VisaProtocolHs488;
				break;
			case PROT_USBTMC_VENDOR:
				*peProtocol = VisaProtocolUsbTmcVendor;
				break;
			default:
				hr = m_pErrReporter->IoError(_T("Unsupported VISA I/O protocol."));
				break;
		}
	}

	return hr;
}
	
inline HRESULT CVisaComSession::SetTerminationCharacter(UCHAR cTermChar)
{
	HRESULT hr = S_OK;

	hr = m_pMessage->put_TerminationCharacter(cTermChar);

	return hr;
}

inline HRESULT CVisaComSession::GetTerminationCharacter(UCHAR* pcTermChar)
{
	if (pcTermChar == NULL)
		return m_pErrReporter->NullPointer(_T("GetTerminationCharacter"), _T("pcTermChar"));

	HRESULT hr = S_OK;

	hr = m_pMessage->get_TerminationCharacter(pcTermChar);
	
	return hr;
}

inline HRESULT CVisaComSession::SetTerminationCharacterEnabled(bool bEnabled)
{
	HRESULT hr = S_OK;

	hr = m_pMessage->put_TerminationCharacterEnabled(bEnabled ? VARIANT_TRUE : VARIANT_FALSE);

	return hr;
}

inline HRESULT CVisaComSession::GetTerminationCharacterEnabled(bool* pbEnabled)
{
	if (pbEnabled == NULL)
		return m_pErrReporter->NullPointer(_T("GetTerminationCharacterEnabled"), _T("pbEnabled"));

	HRESULT hr = S_OK;

	VARIANT_BOOL bEnabled;
	hr = m_pMessage->get_TerminationCharacterEnabled(&bEnabled);
	if (SUCCEEDED(hr))
	{
		*pbEnabled = bEnabled != VARIANT_FALSE;
	}

	return hr;
}

inline HRESULT CVisaComSession::Lock(IoLockType eLockType, long lLockTimeout, const CString& strRequestedKey, CString& strAccessKey)
{
	HRESULT hr = S_OK;
	AccessMode eVisaMode = EXCLUSIVE_LOCK;
	if (eLockType == IoLockExclusive)
	{
		eVisaMode = EXCLUSIVE_LOCK;
	}
	else if (eLockType == IoLockShared)
	{
		eVisaMode = SHARED_LOCK;
	}
	else 
	{
		hr = m_pErrReporter->IoError(_T("Unsupported VISA session access mode."));
	}

	if (SUCCEEDED(hr))
	{
		CComBSTR bstrAccessKey;
		hr = m_pSession->LockRsrc(eVisaMode, lLockTimeout, CT2OLE(strRequestedKey), &bstrAccessKey);
		if (SUCCEEDED(hr))
		{
			strAccessKey = COLE2T(bstrAccessKey);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::Unlock()
{
	HRESULT hr = S_OK;

	hr = m_pSession->UnlockRsrc();

	return hr;
}

inline HRESULT CVisaComSession::SetAttribute(long lAttribute, UINT8 uchValue)
{
	HRESULT hr = S_OK;

	// Send attribute as a long, as some VISA-COM implementations mistakently require this
	hr = m_pSession->SetAttribute(lAttribute, CComVariant((long)uchValue));

	return hr;
}

inline HRESULT CVisaComSession::SetAttribute(long lAttribute, UINT16 usValue)
{
	HRESULT hr = S_OK;

	// Send attribute as a long, as some VISA-COM implementations mistakently require this
	hr = m_pSession->SetAttribute(lAttribute, CComVariant((long)usValue));

	return hr;
}

inline HRESULT CVisaComSession::SetAttribute(long lAttribute, UINT32 ulValue)
{
	HRESULT hr = S_OK;

	// Send attribute as a long, as some VISA-COM implementations mistakently require this
	hr = m_pSession->SetAttribute(lAttribute, CComVariant((long)ulValue));

	return hr;
}

inline HRESULT CVisaComSession::SetAttribute(long lAttribute, UINT64 ullValue)
{
	HRESULT hr = S_OK;

	hr = m_pSession->SetAttribute(lAttribute, CComVariant((__int64)ullValue));

	return hr;
}

inline HRESULT CVisaComSession::SetAttribute(long lAttribute, bool bValue)
{
	HRESULT hr = S_OK;

	// Send attribute as a long, as some VISA-COM implementations mistakently require this
	hr = m_pSession->SetAttribute(lAttribute, CComVariant(bValue ? 1L : 0L));

	return hr;
}

inline HRESULT CVisaComSession::SetAttribute(long lAttribute, const CString& strValue)
{
	HRESULT hr = S_OK;

	hr = m_pSession->SetAttribute(lAttribute, CComVariant(CT2OLE(strValue)));

	return hr;
}

inline HRESULT CVisaComSession::GetAttribute(long lAttribute, UINT8* puchValue)
{
	if (puchValue == NULL)
		return m_pErrReporter->NullPointer(_T("GetAttribute"), _T("puchValue"));

	HRESULT hr = S_OK;

	CComVariant varValue;
	hr = m_pSession->GetAttribute(lAttribute, &varValue);
	if (SUCCEEDED(hr))
	{
		hr = varValue.ChangeType(VT_UI1);
		if (SUCCEEDED(hr))
		{
			*puchValue = varValue.bVal;
		}
		else
		{
			CString strErr;
			strErr.Format(_T("GetAttribute could not convert attribute with ID %d to a UINT8 value."), lAttribute);
			hr = m_pErrReporter->IoError(strErr);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::GetAttribute(long lAttribute, UINT16* pusValue)
{
	if (pusValue == NULL)
		return m_pErrReporter->NullPointer(_T("GetAttribute"), _T("pusValue"));

	HRESULT hr = S_OK;

	CComVariant varValue;
	hr = m_pSession->GetAttribute(lAttribute, &varValue);
	if (SUCCEEDED(hr))
	{
		hr = varValue.ChangeType(VT_UI2);
		if (SUCCEEDED(hr))
		{
			*pusValue = varValue.uiVal;
		}
		else
		{
			CString strErr;
			strErr.Format(_T("GetAttribute could not convert attribute with ID %d to a UINT16 value."), lAttribute);
			hr = m_pErrReporter->IoError(strErr);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::GetAttribute(long lAttribute, UINT32* pulValue)
{
	if (pulValue == NULL)
		return m_pErrReporter->NullPointer(_T("GetAttribute"), _T("pulValue"));

	HRESULT hr = S_OK;

	CComVariant varValue;
	hr = m_pSession->GetAttribute(lAttribute, &varValue);
	if (SUCCEEDED(hr))
	{
		hr = varValue.ChangeType(VT_UI4);
		if (SUCCEEDED(hr))
		{
			*pulValue = varValue.ulVal;
		}
		else
		{
			CString strErr;
			strErr.Format(_T("GetAttribute could not convert attribute with ID %d to a UINT32 value."), lAttribute);
			hr = m_pErrReporter->IoError(strErr);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::GetAttribute(long lAttribute, UINT64* pullValue)
{
	if (pullValue == NULL)
		return m_pErrReporter->NullPointer(_T("GetAttribute"), _T("pullValue"));

	HRESULT hr = S_OK;

	CComVariant varValue;
	hr = m_pSession->GetAttribute(lAttribute, &varValue);
	if (SUCCEEDED(hr))
	{
		hr = varValue.ChangeType(VT_UI8);
		if (SUCCEEDED(hr))
		{
			*pullValue = varValue.ullVal;
		}
		else
		{
			CString strErr;
			strErr.Format(_T("GetAttribute could not convert attribute with ID %d to a UINT64 value."), lAttribute);
			hr = m_pErrReporter->IoError(strErr);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::GetAttribute(long lAttribute, bool* pbValue)
{
	if (pbValue == NULL)
		return m_pErrReporter->NullPointer(_T("GetAttribute"), _T("pbValue"));

	HRESULT hr = S_OK;

	CComVariant varValue;
	hr = m_pSession->GetAttribute(lAttribute, &varValue);
	if (SUCCEEDED(hr))
	{
		hr = varValue.ChangeType(VT_BOOL);
		if (SUCCEEDED(hr))
		{
			*pbValue = varValue.boolVal != VARIANT_FALSE;
		}
		else
		{
			CString strErr;
			strErr.Format(_T("GetAttribute could not convert attribute with ID %d to a boolean value."), lAttribute);
			hr = m_pErrReporter->IoError(strErr);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::GetAttribute(long lAttribute, CString& strValue)
{
	HRESULT hr = S_OK;

	CComVariant varValue;
	hr = m_pSession->GetAttribute(lAttribute, &varValue);
	if (SUCCEEDED(hr))
	{
		hr = varValue.ChangeType(VT_BSTR);
		if (SUCCEEDED(hr))
		{
			strValue.Empty();
			strValue.Append(COLE2T(varValue.bstrVal));
		}
		else
		{
			CString strErr;
			strErr.Format(_T("GetAttribute could not convert attribute with ID %d to a string value."), lAttribute);
			hr = m_pErrReporter->IoError(strErr);
		}
	}

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// IVisaComLowLevelIo

inline HRESULT CVisaComSession::LowLevelReadNoPoll(BYTE* pBuf, long cbDesired, long* plActual, long lTimeout)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelReadNoPoll"), _T("pBuf"));

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	SAFEARRAY* psa = NULL;
	HRESULT hrRead = m_pMessage->Read(cbDesired, &psa);
	if (SUCCEEDED(hrRead))
	{
		long lUBound;
		hr = ::SafeArrayGetUBound(psa, 1, &lUBound);
		if (SUCCEEDED(hr))
		{
			BYTE* pData = NULL;
			hr = ::SafeArrayAccessData(psa, (void**)&pData);
			if (SUCCEEDED(hr))
			{
				long lActual = lUBound + 1;

				errno_t err = ::memcpy_s(pBuf, cbDesired, pData, lActual);
				if (err)
				{
					hr = m_pErrReporter->IoError(_T("Read function failed to copy data into the user buffer."));
				}
				else
				{
					if (plActual != NULL)
					{
						*plActual = lActual;
					}
				}

				HRESULT hr2 = ::SafeArrayUnaccessData(psa);
				hr = FAILED(hr) ? hr : hr2;
			}
		}

		HRESULT hr2 = ::SafeArrayDestroy(psa);
		hr = FAILED(hr) ? hr : hr2;
	}

	hr = FAILED(hr) ? hr : hrRead;

	if (hr == NTL_S_VISA_MAX_CNT)
	{
		hr = S_DATA_AVAILABLE;
	}
	else if (hr == NTL_S_VISA_TERM_CHAR)
	{
		hr = S_OK;
	}

	return hr;
}

inline HRESULT CVisaComSession::LowLevelReadNoPoll(SAFEARRAY** ppsaBuf, long cbDesired, long lTimeout)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelReadNoPoll"), _T("ppsaBuf"));

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);
	
	HRESULT hr = S_OK;

	hr = m_pMessage->Read(cbDesired, ppsaBuf);

	if (hr == NTL_S_VISA_MAX_CNT)
	{
		hr = S_DATA_AVAILABLE;
	}
	else if (hr == NTL_S_VISA_TERM_CHAR)
	{
		hr = S_OK;
	}

	return hr;
}

inline HRESULT CVisaComSession::LowLevelReadStringNoPoll(CString& strBuf, long cchDesired, long lTimeout)
{
	HRESULT hr = S_OK;

	CComBSTR bstr;
	hr = LowLevelReadStringNoPoll(&bstr, cchDesired, lTimeout);
	if (SUCCEEDED(hr))
	{
		strBuf.Empty();
		strBuf.Append(COLE2T(bstr));
	}

	return hr;
}

inline HRESULT CVisaComSession::LowLevelReadStringNoPoll(BSTR* pbstrBuf, long cchDesired, long lTimeout)
{
	if (pbstrBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelReadStringNoPoll"), _T("pbstrBuf"));

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);
	
	HRESULT hr = S_OK;

	hr = m_pMessage->ReadString(cchDesired, pbstrBuf);

	if (hr == NTL_S_VISA_MAX_CNT)
	{
		hr = S_DATA_AVAILABLE;
	}
	else if (hr == NTL_S_VISA_TERM_CHAR)
	{
		hr = S_OK;
	}

	return hr;
}

inline HRESULT CVisaComSession::LowLevelWriteNoPoll(BYTE* pBuf, long cbDesired, long* plActual, long lTimeout)	
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelWriteNoPoll"), _T("pBuf"));

	HRESULT hr = S_OK;

	SAFEARRAY* psa = ::SafeArrayCreateVectorEx(VT_UI1, 0, cbDesired, NULL);
	if (psa == NULL)
	{
		hr = m_pErrReporter->IoError(_T("Write could not allocate SAFEARRAY."));
	}
	else
	{
		BYTE* pData = NULL;
		hr = ::SafeArrayAccessData(psa, (void**)&pData);
		if (SUCCEEDED(hr))
		{
			errno_t err = ::memcpy_s(pData, cbDesired, pBuf, cbDesired);

			HRESULT hr2 = ::SafeArrayUnaccessData(psa);

			if (err)
			{
				hr = m_pErrReporter->IoError(_T("Write could not copy data to SAFEARRAY."));
			}
			else
			{
				hr = FAILED(hr) ? hr : hr2;
				if (SUCCEEDED(hr))
				{
					hr = LowLevelWriteNoPoll(psa, cbDesired, plActual, lTimeout);
				}
			}
		}

		HRESULT hr2 = ::SafeArrayDestroy(psa);
		hr = FAILED(hr) ? hr : hr2;
	}

	return hr;
}

inline HRESULT CVisaComSession::LowLevelWriteNoPoll(SAFEARRAY* psaBuf, long cbDesired, long* plActual, long lTimeout)	
{
	if (psaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelWriteNoPoll"), _T("psaBuf"));

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	long lActual;
	hr = m_pMessage->Write(&psaBuf, cbDesired, &lActual);
	if (SUCCEEDED(hr) && plActual != NULL)
	{
		*plActual = lActual;
	}

	return hr;
}

inline HRESULT CVisaComSession::LowLevelWriteStringNoPoll(const CString& strBuf, long* pcchActual, long lTimeout)	
{
	HRESULT hr = S_OK;

	hr = LowLevelWriteStringNoPoll(CT2OLE(strBuf), pcchActual, lTimeout);

	return hr;
}

inline HRESULT CVisaComSession::LowLevelWriteStringNoPoll(BSTR bstrBuf, long* pcchActual, long lTimeout)	
{
	if (bstrBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelWriteStringNoPoll"), _T("bstrBuf"));

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;

	// We have to pass a non-NULL output parameter as VISA seems to return E_POINTER otherwise
	long cchActual;
	hr = m_pMessage->WriteString(bstrBuf, &cchActual);
	if (SUCCEEDED(hr) && pcchActual != NULL)
	{
		*pcchActual = cchActual;
	}

	return hr;
}

inline HRESULT CVisaComSession::ReadAsync(BYTE* pBuf, long cbDesired, ULONG* plJobId)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("ReadAsync"), _T("pBuf"));

	if (m_pAsyncMessage == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support asynchronous messaging operations."));

	// NOTE: As per the VISA spec, the read buffer is ignored for VISA-COM

	return m_pAsyncMessage->Read(cbDesired, (long*)plJobId);
}

inline HRESULT CVisaComSession::WriteAsync(BYTE* pBuf, long cbDesired, ULONG* plJobId)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("WriteAsync"), _T("pBuf"));

	HRESULT hr = S_OK;

	SAFEARRAY* psa = ::SafeArrayCreateVectorEx(VT_UI1, 0, cbDesired, NULL);
	if (psa == NULL)
		return m_pErrReporter->OutOfMemory(_T("Could not allocate SAFEARRAY memory for WriteAsync."));

	BYTE* pData = NULL;
	hr = ::SafeArrayAccessData(psa, (void**)&pData);
	if (SUCCEEDED(hr))
	{
		errno_t err = ::memcpy_s(pData, cbDesired, pBuf, cbDesired);
		if (err)
		{
			hr = m_pErrReporter->IoError(_T("WriteAsync function failed to copy data from the user buffer."));
		}

		HRESULT hr2 = ::SafeArrayUnaccessData(psa);
		hr = FAILED(hr) ? hr : hr2;
	}

	if (SUCCEEDED(hr))
	{
		hr = WriteAsync(&psa, cbDesired, plJobId);
	}
	
	HRESULT hr2 = ::SafeArrayDestroy(psa);
	hr = FAILED(hr) ? hr : hr2;

	return hr;
}

inline HRESULT CVisaComSession::WriteAsync(SAFEARRAY** ppsaBuf, long cbDesired, ULONG* plJobId)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("WriteAsync"), _T("ppsaBuf"));

	if (m_pAsyncMessage == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support asynchronous messaging operations."));

	return m_pAsyncMessage->Write(ppsaBuf, cbDesired, (long*)plJobId);
}

inline HRESULT CVisaComSession::AssertTrigger(VisaTriggerProtocol eProtocol)
{
	HRESULT hr = S_OK;
	TriggerProtocol eVisaProtocol = TRIG_PROT_DEFAULT;
	switch (eProtocol)
	{
		case VisaTriggerProtocolDefault:
			eVisaProtocol = TRIG_PROT_DEFAULT;
			break;
		case VisaTriggerProtocolOn:
			eVisaProtocol = TRIG_PROT_ON;
			break;
		case VisaTriggerProtocolOff:
			eVisaProtocol = TRIG_PROT_OFF;
			break;
		case VisaTriggerProtocolSync:
			eVisaProtocol = TRIG_PROT_SYNC;
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA trigger protocol."));
			break;
	}

	if (SUCCEEDED(hr))
	{
		hr = m_pMessage->AssertTrigger(eVisaProtocol);
	}

	return hr;
}

inline HRESULT CVisaComSession::SetSendEndEnabled(bool bEnabled)
{
	HRESULT hr = S_OK;

	hr = m_pMessage->put_SendEndEnabled(bEnabled ? VARIANT_TRUE : VARIANT_FALSE);

	return hr;
}


inline HRESULT CVisaComSession::GetSendEndEnabled(bool* pbEnabled)
{
	if (pbEnabled == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	VARIANT_BOOL bEnabled;
	hr = m_pMessage->get_SendEndEnabled(&bEnabled);
	if (SUCCEEDED(hr))
	{
		*pbEnabled = bEnabled != VARIANT_FALSE;
	}

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// IVisaComSessionInfo

inline HRESULT CVisaComSession::GetResourceName(CString& strName)		
{
	HRESULT hr = S_OK;

	CComBSTR bstrResourceName;
	hr = m_pSession->get_ResourceName(&bstrResourceName);
	if (SUCCEEDED(hr))
	{
		strName = COLE2T(bstrResourceName);
	}

	return hr;
}

inline HRESULT CVisaComSession::GetInterfaceName(CString& strName)
{
	HRESULT hr = S_OK;

	CComBSTR bstrName;
	hr = m_pSession->get_HardwareInterfaceName(&bstrName);
	if (SUCCEEDED(hr))
	{
		strName = COLE2T(bstrName);
	}

	return hr;
}

inline HRESULT CVisaComSession::GetInterfaceType(VisaInterfaceType* peType)
{
	if (peType == NULL)
		return m_pErrReporter->NullPointer(_T("GetInterfaceType"), _T("peType"));

	HRESULT hr = S_OK;

	short sType;
	hr = m_pSession->get_HardwareInterfaceType(&sType);
	if (SUCCEEDED(hr))
	{
		if (sType == INTF_GPIB)
		{
			*peType = VisaInterfaceGpib;
		}
		else if (sType == INTF_VXI)
		{
			*peType = VisaInterfaceVxi;
		}
		else if (sType == INTF_GPIB_VXI)
		{
			*peType = VisaInterfaceGpibVxi;
		}
		else if (sType == INTF_ASRL)
		{
			*peType = VisaInterfaceSerial;
		}
		else if (sType == INTF_TCPIP)
		{
			*peType = VisaInterfaceTcpip;
		}
		else if (sType == INTF_USB)
		{
			*peType = VisaInterfaceUsb;
		}
		else if (sType == VI_INTF_PXI)
		{
			*peType = VisaInterfacePxi;
		}
		else
		{
			*peType = VisaInterfaceOther;
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::GetInterfaceNumber(UINT16* pusNumber)
{
	if (pusNumber == NULL)
		return m_pErrReporter->NullPointer(_T("GetInterfaceNumber"), _T("pusNumber"));

	return m_pSession->get_HardwareInterfaceNumber((short*)pusNumber);
}

inline HRESULT CVisaComSession::GetSessionType(CString& strType)
{
	HRESULT hr = S_OK;

	CComBSTR bstrType;
	hr = m_pSession->get_SessionType(&bstrType);
	if (SUCCEEDED(hr))
	{
		strType = COLE2T(bstrType);
	}

	return hr;
}

inline HRESULT CVisaComSession::GetManufacturerName(CString& strName)
{
	HRESULT hr = S_OK;

	CComBSTR bstrName;
	hr = m_pSession->get_SoftwareManufacturerName(&bstrName);
	if (SUCCEEDED(hr))
	{
		strName = COLE2T(bstrName);
	}

	return hr;
}

inline HRESULT CVisaComSession::GetManufacturerId(UINT16* pusId)
{
	if (pusId == NULL)
		return m_pErrReporter->NullPointer(_T("GetManufacturerId"), _T("pusId"));

	return m_pSession->get_SoftwareManufacturerID((short*)pusId);
}

///////////////////////////////////////////////////////////////////////////////
// IVisaComMemoryIo

inline HRESULT CVisaComSession::In8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT8* puVal)
{
	if (puVal == NULL)
		return m_pErrReporter->NullPointer(_T("In8"), _T("puVal"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->In8(sSpace, (LONG)ullOffset, puVal);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::In16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT16* psVal)
{
	if (psVal == NULL)
		return m_pErrReporter->NullPointer(_T("In16"), _T("psVal"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->In16(sSpace, (LONG)ullOffset, (short*)psVal);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::In32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32* plVal)
{
	if (plVal == NULL)
		return m_pErrReporter->NullPointer(_T("In32"), _T("plVal"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->In32(sSpace, (LONG)ullOffset, (long*)plVal);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::In64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT64* pllVal)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	NTL_UNUSED(eSpace);
	NTL_UNUSED(ullOffset);
	NTL_UNUSED(pllVal);

	return m_pErrReporter->IoError(_T("The VISA-COM session does not support 64-bit register-based operations."));
}

inline HRESULT CVisaComSession::Out8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT8 uVal)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->Out8(sSpace, (LONG)ullOffset, uVal);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::Out16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT16 sVal)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->Out16(sSpace, (LONG)ullOffset, sVal);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::Out32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 lVal)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->Out32(sSpace, (LONG)ullOffset, lVal);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::Out64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT64 llVal)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	NTL_UNUSED(eSpace);
	NTL_UNUSED(ullOffset);
	NTL_UNUSED(llVal);

	return m_pErrReporter->IoError(_T("The VISA-COM session does not support 64-bit register-based operations."));
}

inline HRESULT CVisaComSession::MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT8* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn8"), _T("pBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	SAFEARRAY* psaBuf = NULL;
	hr = MoveIn8(eSpace, ullOffset, ulLength, &psaBuf);
	if (SUCCEEDED(hr))
	{
		UINT8* pData = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)&pData);
		if (SUCCEEDED(hr))
		{
			errno_t err = ::memcpy_s(pBuf, ulLength * sizeof(UINT8), pData, ulLength * sizeof(UINT8));
			if (err)
			{
				hr = m_pErrReporter->IoError(_T("MoveIn8 function failed to copy data into the user buffer."));
			}

			HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
			hr = FAILED(hr) ? hr : hr2;
		}

		HRESULT hr2 = ::SafeArrayDestroy(psaBuf);
		hr = FAILED(hr) ? hr : hr2;
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn8"), _T("ppsaBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->MoveIn8(sSpace, (LONG)ullOffset, ulLength, ppsaBuf);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT8>& saBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	SAFEARRAY* psaBuf = NULL;
	hr = MoveIn8(eSpace, ullOffset, ulLength, &psaBuf);
	if (SUCCEEDED(hr))
	{
		hr = saBuf.Destroy();
		if (SUCCEEDED(hr))
		{
			hr = saBuf.Attach(psaBuf);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT16* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn16"), _T("pBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	SAFEARRAY* psaBuf = NULL;
	hr = MoveIn16(eSpace, ullOffset, ulLength, &psaBuf);
	if (SUCCEEDED(hr))
	{
		UINT16* pData = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)&pData);
		if (SUCCEEDED(hr))
		{
			errno_t err = ::memcpy_s(pBuf, ulLength * sizeof(UINT16), pData, ulLength * sizeof(UINT16));
			if (err)
			{
				hr = m_pErrReporter->IoError(_T("MoveIn16 function failed to copy data into the user buffer."));
			}

			HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
			hr = FAILED(hr) ? hr : hr2;
		}

		HRESULT hr2 = ::SafeArrayDestroy(psaBuf);
		hr = FAILED(hr) ? hr : hr2;
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn16"), _T("ppsaBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->MoveIn16(sSpace, (LONG)ullOffset, ulLength, ppsaBuf);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT16>& saBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	SAFEARRAY* psaBuf = NULL;
	hr = MoveIn16(eSpace, ullOffset, ulLength, &psaBuf);
	if (SUCCEEDED(hr))
	{
		hr = saBuf.Destroy();
		if (SUCCEEDED(hr))
		{
			hr = saBuf.Attach(psaBuf);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT32* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn32"), _T("pBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	SAFEARRAY* psaBuf = NULL;
	hr = MoveIn32(eSpace, ullOffset, ulLength, &psaBuf);
	if (SUCCEEDED(hr))
	{
		UINT32* pData = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)&pData);
		if (SUCCEEDED(hr))
		{
			errno_t err = ::memcpy_s(pBuf, ulLength * sizeof(UINT32), pData, ulLength * sizeof(UINT32));
			if (err)
			{
				hr = m_pErrReporter->IoError(_T("MoveIn32 function failed to copy data into the user buffer."));
			}

			HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
			hr = FAILED(hr) ? hr : hr2;
		}

		HRESULT hr2 = ::SafeArrayDestroy(psaBuf);
		hr = FAILED(hr) ? hr : hr2;
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn32"), _T("ppsaBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->MoveIn32(sSpace, (LONG)ullOffset, ulLength, ppsaBuf);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT32>& saBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	SAFEARRAY* psaBuf = NULL;
	hr = MoveIn32(eSpace, ullOffset, ulLength, &psaBuf);
	if (SUCCEEDED(hr))
	{
		hr = saBuf.Destroy();
		if (SUCCEEDED(hr))
		{
			hr = saBuf.Attach(psaBuf);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT64* pBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	NTL_UNUSED(eSpace);
	NTL_UNUSED(ullOffset);
	NTL_UNUSED(ulLength);
	NTL_UNUSED(pBuf);

	return m_pErrReporter->IoError(_T("The VISA-COM session does not support 64-bit register-based operations."));
}

inline HRESULT CVisaComSession::MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	NTL_UNUSED(eSpace);
	NTL_UNUSED(ullOffset);
	NTL_UNUSED(ulLength);
	NTL_UNUSED(ppsaBuf);

	return m_pErrReporter->IoError(_T("The VISA-COM session does not support 64-bit register-based operations."));
}

inline HRESULT CVisaComSession::MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT64>& saBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	NTL_UNUSED(eSpace);
	NTL_UNUSED(ullOffset);
	NTL_UNUSED(ulLength);
	NTL_UNUSED(saBuf);

	return m_pErrReporter->IoError(_T("The VISA-COM session does not support 64-bit register-based operations."));
}

inline HRESULT CVisaComSession::MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT8* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut8"), _T("pBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	SAFEARRAY* psa = ::SafeArrayCreateVectorEx(VT_UI1, 0, ulLength, NULL);
	if (psa == NULL)
	{
		hr = m_pErrReporter->IoError(_T("MoveOut8 could not allocate SAFEARRAY."));
	}
	else
	{
		BYTE* pData = NULL;
		hr = ::SafeArrayAccessData(psa, (void**)&pData);
		if (SUCCEEDED(hr))
		{
			errno_t err = ::memcpy_s(pData, ulLength * sizeof(UINT8), pBuf, ulLength * sizeof(UINT8));

			HRESULT	hr2 = ::SafeArrayUnaccessData(psa);

			if (err)
			{
				hr = m_pErrReporter->IoError(_T("MoveOut8 could not copy data to SAFEARRAY."));
			}
			else
			{
				hr = MoveOut8(eSpace, ullOffset, ulLength, psa);
			}

			hr = FAILED(hr) ? hr : hr2;
		}

		HRESULT hr2 = ::SafeArrayDestroy(psa);
		hr = FAILED(hr) ? hr : hr2;
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf)
{
	if (psaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut8"), _T("psaBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->MoveOut8(sSpace, (LONG)ullOffset, ulLength, &psaBuf);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT8>& saBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	return MoveOut8(eSpace, ullOffset, ulLength, saBuf.m_psa);
}

inline HRESULT CVisaComSession::MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT16* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut16"), _T("pBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	SAFEARRAY* psa = ::SafeArrayCreateVectorEx(VT_UI2, 0, ulLength, NULL);
	if (psa == NULL)
	{
		hr = m_pErrReporter->IoError(_T("MoveOut16 could not allocate SAFEARRAY."));
	}
	else
	{
		UINT16* pData = NULL;
		hr = ::SafeArrayAccessData(psa, (void**)&pData);
		if (SUCCEEDED(hr))
		{
			errno_t err = ::memcpy_s(pData, ulLength * sizeof(UINT16), pBuf, ulLength * sizeof(UINT16));

			HRESULT	hr2 = ::SafeArrayUnaccessData(psa);

			if (err)
			{
				hr = m_pErrReporter->IoError(_T("MoveOut16 could not copy data to SAFEARRAY."));
			}
			else
			{
				hr = MoveOut16(eSpace, ullOffset, ulLength, psa);
			}

			hr = FAILED(hr) ? hr : hr2;
		}

		HRESULT hr2 = ::SafeArrayDestroy(psa);
		hr = FAILED(hr) ? hr : hr2;
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf)
{
	if (psaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut16"), _T("psaBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->MoveOut16(sSpace, (LONG)ullOffset, ulLength, &psaBuf);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT16>& saBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	return MoveOut16(eSpace, ullOffset, ulLength, saBuf.m_psa);
}

inline HRESULT CVisaComSession::MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT32* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut32"), _T("pBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	SAFEARRAY* psa = ::SafeArrayCreateVectorEx(VT_UI4, 0, ulLength, NULL);
	if (psa == NULL)
	{
		hr = m_pErrReporter->IoError(_T("MoveOut32 could not allocate SAFEARRAY."));
	}
	else
	{
		UINT32* pData = NULL;
		hr = ::SafeArrayAccessData(psa, (void**)&pData);
		if (SUCCEEDED(hr))
		{
			errno_t err = ::memcpy_s(pData, ulLength * sizeof(UINT32), pBuf, ulLength * sizeof(UINT32));

			HRESULT	hr2 = ::SafeArrayUnaccessData(psa);

			if (err)
			{
				hr = m_pErrReporter->IoError(_T("MoveOut32 could not copy data to SAFEARRAY."));
			}
			else
			{
				hr = MoveOut32(eSpace, ullOffset, ulLength, psa);
			}

			hr = FAILED(hr) ? hr : hr2;
		}

		HRESULT hr2 = ::SafeArrayDestroy(psa);
		hr = FAILED(hr) ? hr : hr2;
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf)
{
	if (psaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut32"), _T("psaBuf"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		short sSpace;
		hr = TranslateAddressSpace(eSpace, &sSpace);
		if (SUCCEEDED(hr))
		{
			hr = m_pRegister->MoveOut32(sSpace, (LONG)ullOffset, ulLength, &psaBuf);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT32>& saBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	return MoveOut32(eSpace, ullOffset, ulLength, saBuf.m_psa);
}

inline HRESULT CVisaComSession::MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT64* pBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	NTL_UNUSED(eSpace);
	NTL_UNUSED(ullOffset);
	NTL_UNUSED(ulLength);
	NTL_UNUSED(pBuf);

	return m_pErrReporter->IoError(_T("The VISA-COM session does not support 64-bit register-based operations."));
}

inline HRESULT CVisaComSession::MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	NTL_UNUSED(eSpace);
	NTL_UNUSED(ullOffset);
	NTL_UNUSED(ulLength);
	NTL_UNUSED(psaBuf);

	return m_pErrReporter->IoError(_T("The VISA-COM session does not support 64-bit register-based operations."));
}

inline HRESULT CVisaComSession::MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT64>& saBuf)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	NTL_UNUSED(eSpace);
	NTL_UNUSED(ullOffset);
	NTL_UNUSED(ulLength);
	NTL_UNUSED(saBuf);

	return m_pErrReporter->IoError(_T("The VISA-COM session does not support 64-bit register-based operations."));
}

inline HRESULT CVisaComSession::Move(VisaAddressSpace eSrcSpace, UINT64 ullSrcOffset, VisaDataWidth eSrcWidth, VisaAddressSpace eDestSpace, UINT64 ullDestOffset, VisaDataWidth eDestWidth, UINT32 ulLength)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullSrcOffset);
	if (SUCCEEDED(hr))
	{
		hr = ValidateAddressSpaceOffset(ullDestOffset);
		if (SUCCEEDED(hr))
		{
			short sSrcSpace;
			hr = TranslateAddressSpace(eSrcSpace, &sSrcSpace);
			if (SUCCEEDED(hr))
			{
				short sDestSpace;
				hr = TranslateAddressSpace(eDestSpace, &sDestSpace);
				if (SUCCEEDED(hr))
				{
					DataWidth eVisaSrcWidth;
					hr = TranslateDataWidth(eSrcWidth, &eVisaSrcWidth);
					if (SUCCEEDED(hr))
					{
						DataWidth eVisaDestWidth;
						hr = TranslateDataWidth(eDestWidth, &eVisaDestWidth);
						if (SUCCEEDED(hr))
						{
							hr = m_pRegister->Move(sSrcSpace, (long)ullSrcOffset, eVisaSrcWidth, sDestSpace, (long)ullDestOffset, eVisaDestWidth, (long)ulLength);
						}
					}
				}
			}
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::MoveAsync(VisaAddressSpace eSrcSpace, UINT64 ullSrcOffset, VisaDataWidth eSrcWidth, VisaAddressSpace eDestSpace, UINT64 ullDestOffset, VisaDataWidth eDestWidth, UINT32 ulLength, UINT32* plJobId)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	NTL_UNUSED(eSrcSpace);
	NTL_UNUSED(ullSrcOffset);
	NTL_UNUSED(eSrcWidth);
	NTL_UNUSED(eDestSpace);
	NTL_UNUSED(ullDestOffset);
	NTL_UNUSED(eDestWidth);
	NTL_UNUSED(ulLength);
	NTL_UNUSED(plJobId);

	return m_pErrReporter->IoError(_T("The VISA-COM session does not support the MoveAsync operation."));
}

inline HRESULT CVisaComSession::SetSourceBigEndian(bool bBigEndian)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	return m_pRegister->put_SourceBigEndian(bBigEndian ? VARIANT_TRUE : VARIANT_FALSE);
}

inline HRESULT CVisaComSession::GetSourceBigEndian(bool* pbBigEndian)
{
	if (pbBigEndian == NULL)
		return m_pErrReporter->NullPointer(_T("GetSourceBigEndian"), _T("pbBigEndian"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	VARIANT_BOOL bBigEndian;
	hr = m_pRegister->get_SourceBigEndian(&bBigEndian);
	if (SUCCEEDED(hr))
	{
		*pbBigEndian = bBigEndian != VARIANT_FALSE;
	}

	return hr;
}

inline HRESULT CVisaComSession::SetDestinationBigEndian(bool bBigEndian)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	return m_pRegister->put_DestinationBigEndian(bBigEndian ? VARIANT_TRUE : VARIANT_FALSE);
}

inline HRESULT CVisaComSession::GetDestinationBigEndian(bool* pbBigEndian)
{
	if (pbBigEndian == NULL)
		return m_pErrReporter->NullPointer(_T("GetDestinationBigEndian"), _T("pbBigEndian"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	HRESULT hr = S_OK;

	VARIANT_BOOL bBigEndian;
	hr = m_pRegister->get_DestinationBigEndian(&bBigEndian);
	if (SUCCEEDED(hr))
	{
		*pbBigEndian = bBigEndian != VARIANT_FALSE;
	}

	return hr;
}

inline HRESULT CVisaComSession::SetSourceIncrement(long lIncrement)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	return m_pRegister->put_SourceIncrement(lIncrement);
}

inline HRESULT CVisaComSession::GetSourceIncrement(long* plIncrement)
{
	if (plIncrement == NULL)
		return m_pErrReporter->NullPointer(_T("GetSourceIncrement"), _T("plIncrement"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	return m_pRegister->get_SourceIncrement(plIncrement);
}

inline HRESULT CVisaComSession::SetDestinationIncrement(long lIncrement)
{
	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	return m_pRegister->put_DestinationIncrement(lIncrement);
}

inline HRESULT CVisaComSession::GetDestinationIncrement(long* plIncrement)
{
	if (plIncrement == NULL)
		return m_pErrReporter->NullPointer(_T("GetDestinationIncrement"), _T("plIncrement"));

	if (m_pRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support register-based operations."));

	return m_pRegister->get_DestinationIncrement(plIncrement);
}

inline HRESULT CVisaComSession::AllocateMemory(UINT64 ullSize, UINT64* pullOffset)
{
	if (pullOffset == NULL)
		return m_pErrReporter->NullPointer(_T("AllocateMemory"), _T("pullOffset"));

	if (m_pSharedRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support shared memory register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullSize);
	if (SUCCEEDED(hr))
	{
		long lOffset;
		hr = m_pSharedRegister->AllocateMemory((long)ullSize, &lOffset);
		if (SUCCEEDED(hr))
		{
			*pullOffset = lOffset;
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::FreeMemory(UINT64 ullOffset)
{
	if (m_pSharedRegister == NULL)
		return m_pErrReporter->IoError(_T("The VISA-COM session does not support shared memory register-based operations."));

	HRESULT hr = S_OK;

	hr = ValidateAddressSpaceOffset(ullOffset);
	if (SUCCEEDED(hr))
	{
		hr = m_pSharedRegister->FreeMemory((long)ullOffset);
	}

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// IVisaComDirectIo

inline HRESULT CVisaComSession::GetIVisaSessionPointer(IVisaSession** ppVisaSession)
{
	if (ppVisaSession == NULL) 
		return E_POINTER;

	HRESULT hr = S_OK;

	if (m_pSession == NULL)
	{
		*ppVisaSession = NULL;
	}
	else
	{
		(*ppVisaSession = m_pSession)->AddRef();
	}

	return hr;
}

inline HRESULT CVisaComSession::GetIMessagePointer(IMessage** ppMessage)
{
	if (ppMessage == NULL) 
		return E_POINTER;

	HRESULT hr = S_OK;
	
	if (m_pMessage == NULL)
	{
		*ppMessage = NULL;
	}
	else
	{
		(*ppMessage = m_pMessage)->AddRef();
	}

	return hr;
}


inline HRESULT CVisaComSession::GetIAsyncMessagePointer(IAsyncMessage** ppAsyncMessage)
{
	if (ppAsyncMessage == NULL) 
		return E_POINTER;

	HRESULT hr = S_OK;
	
	if (m_pAsyncMessage == NULL)
	{
		*ppAsyncMessage = NULL;
	}
	else
	{
		(*ppAsyncMessage = m_pAsyncMessage)->AddRef();
	}

	return hr;
}

inline HRESULT CVisaComSession::GetIRegisterPointer(IRegister** ppRegister)
{
	if (ppRegister == NULL) 
		return E_POINTER;

	HRESULT hr = S_OK;
	
	if (m_pRegister == NULL)
	{
		*ppRegister = NULL;
	}
	else
	{
		(*ppRegister = m_pRegister)->AddRef();
	}

	return hr;
}

inline HRESULT CVisaComSession::GetISharedRegisterPointer(ISharedRegister** ppSharedRegister)
{
	if (ppSharedRegister == NULL) 
		return E_POINTER;

	HRESULT hr = S_OK;
	
	if (m_pSharedRegister == NULL)
	{
		*ppSharedRegister = NULL;
	}
	else
	{
		(*ppSharedRegister = m_pSharedRegister)->AddRef();
	}

	return hr;
}

inline HRESULT CVisaComSession::GetIFormattedIO488Pointer(IFormattedIO488** ppFormatted)
{
	if (ppFormatted == NULL) 
		return E_POINTER;

	HRESULT hr = S_OK;

	if (m_pFormatted == NULL)
	{
		*ppFormatted = NULL;
		hr = S_FALSE;		
	}
	else
	{
		(*ppFormatted = m_pFormatted)->AddRef();
	}

	return hr;
}
inline HRESULT CVisaComSession::GetIEventManagerPointer(IEventManager** ppEventManager)
{
	if (ppEventManager == NULL) 
		return E_POINTER;

	HRESULT hr = S_OK;

	if (ppEventManager == NULL)
	{
		*ppEventManager = NULL;
		hr = S_FALSE;		
	}
	else
	{
		(*ppEventManager = m_pEventManager)->AddRef();
	}

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// IVisaComEventManager

inline HRESULT CVisaComSession::SetMaximumQueueLength(long val)
{
	return m_pEventManager->put_MaximumQueueLength(val);
}

inline HRESULT CVisaComSession::GetMaximumQueueLength(long* pVal)
{
	return m_pEventManager->get_MaximumQueueLength(pVal);
}

inline HRESULT CVisaComSession::EnableEvent(VisaEventType eEventType, VisaEventMechanism eMech, long lCustomEventType)
{
	HRESULT hr = S_OK;

	EventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		EventMechanism eVisaEventMechanism;
		hr = TranslateEventMechanism(eMech, &eVisaEventMechanism);
		if (SUCCEEDED(hr))
		{
			hr = m_pEventManager->EnableEvent(eVisaEventType, eVisaEventMechanism, lCustomEventType);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::DisableEvent(VisaEventType eEventType, VisaEventMechanism eMech, long lCustomEventType)
{
	HRESULT hr = S_OK;

	EventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		EventMechanism eVisaEventMechanism;
		hr = TranslateEventMechanism(eMech, &eVisaEventMechanism);
		if (SUCCEEDED(hr))
		{
			hr = m_pEventManager->DisableEvent(eVisaEventType, eVisaEventMechanism, lCustomEventType);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::DiscardEvents(VisaEventType eEventType, VisaEventMechanism eMech, long lCustomEventType)
{
	HRESULT hr = S_OK;

	EventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		EventMechanism eVisaEventMechanism;
		hr = TranslateEventMechanism(eMech, &eVisaEventMechanism);
		if (SUCCEEDED(hr))
		{
			hr = m_pEventManager->DiscardEvents(eVisaEventType, eVisaEventMechanism, lCustomEventType);
		}
	}

	return hr;
}

inline HRESULT CVisaComSession::InstallHandler(VisaEventType eEventType, IEventHandler* pHandler, long lUserHandle, long lCustomEventType)
{
	HRESULT hr = S_OK;

	EventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		hr = m_pEventManager->InstallHandler(eVisaEventType, pHandler, lUserHandle, lCustomEventType);
	}

	return hr;
}

inline HRESULT CVisaComSession::UninstallHandler(VisaEventType eEventType, long lUserHandle, long lCustomEventType)
{
	HRESULT hr = S_OK;

	EventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		hr = m_pEventManager->UninstallHandler(eVisaEventType, lUserHandle, lCustomEventType);
	}

	return hr;
}

inline HRESULT CVisaComSession::WaitOnEvent(long lWaitTimeout, VisaEventType eEventType, long lCustomEventType, IEvent** ppEvent)
{
	HRESULT hr = S_OK;

	EventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		hr = m_pEventManager->WaitOnEvent(lWaitTimeout, eVisaEventType, lCustomEventType, ppEvent);
	}

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// Helpers

inline HRESULT CVisaComSession::TranslateAddressSpace(VisaAddressSpace eSpace, short* psSpace)
{
	HRESULT hr = S_OK;

	switch (eSpace)
	{
		case VisaA16Space:
			*psSpace = VI_A16_SPACE;
			break;
		case VisaA24Space:
			*psSpace = VI_A24_SPACE;
			break;
		case VisaA32Space:
			*psSpace = VI_A32_SPACE;
			break;
		case VisaA64Space:
			*psSpace = VI_A64_SPACE;
			break;
		case VisaPxiCfgSpace:
			*psSpace = VI_PXI_CFG_SPACE;
			break;
		case VisaPxiBar0Space:
			*psSpace = VI_PXI_BAR0_SPACE;
			break;
		case VisaPxiBar1Space:
			*psSpace = VI_PXI_BAR1_SPACE;
			break;
		case VisaPxiBar2Space:
			*psSpace = VI_PXI_BAR2_SPACE;
			break;
		case VisaPxiBar3Space:
			*psSpace = VI_PXI_BAR3_SPACE;
			break;
		case VisaPxiBar4Space:
			*psSpace = VI_PXI_BAR4_SPACE;
			break;
		case VisaPxiBar5Space:
			*psSpace = VI_PXI_BAR5_SPACE;
			break;
		case VisaPxiAllocSpace:
			*psSpace = VI_PXI_ALLOC_SPACE;
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA address space."));
			break;
	}

	return hr;
}

inline HRESULT CVisaComSession::TranslateDataWidth(VisaDataWidth eWidth, DataWidth* peVisaWidth)
{
	HRESULT hr = S_OK;

	switch (eWidth)
	{
		case VisaDataWidth8:
			*peVisaWidth = WIDTH_8;
			break;
		case VisaDataWidth16:
			*peVisaWidth = WIDTH_16;
			break;
		case VisaDataWidth32:
			*peVisaWidth = WIDTH_32;
			break;
		case VisaDataWidth64:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA data width."));
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA data width."));
			break;
	}

	return hr;
}

inline HRESULT CVisaComSession::ValidateAddressSpaceOffset(UINT64 ullOffset)
{
	HRESULT hr = S_OK;

	// VISA-COM currently only allows you to pass in a 32-bit offset, so we check for overflow
	if (ullOffset > LONG_MAX)
	{
		hr = m_pErrReporter->IoError(_T("Address space offset is greater than the 32-bit maximum value supported by VISA-COM."));
	}

	return hr;
}

inline HRESULT CVisaComSession::TranslateEventType(VisaEventType eEventType, EventType* peVisaEventType)
{
	HRESULT hr = S_OK;

	switch (eEventType)
	{
		case VisaEventAllEvents:
			*peVisaEventType = ALL_ENABLED_EVENTS;
			break;
		case VisaEventIoCompletion:
			*peVisaEventType = EVENT_IO_COMPLETION;
			break;
		case VisaEventTrig:
			*peVisaEventType = EVENT_TRIG;
			break;
		case VisaEventServiceReq:
			*peVisaEventType = EVENT_SERVICE_REQ;
			break;
		case VisaEventException:
			*peVisaEventType = EVENT_EXCEPTION;
			break;
		case VisaEventGpibCic:
			*peVisaEventType = EVENT_GPIB_CIC;
			break;
		case VisaEventGpibTalk:
			*peVisaEventType = EVENT_GPIB_TALK;
			break;
		case VisaEventGpibListen:
			*peVisaEventType = EVENT_GPIB_LISTEN;
			break;
		case VisaEventVxiVmeSysfail:
			*peVisaEventType = EVENT_VXI_VME_SYSFAIL;
			break;
		case VisaEventVxiVmeSysreset:
			*peVisaEventType = EVENT_VXI_VME_SYSRESET;
			break;
		case VisaEventVxiVmeIntr:
			*peVisaEventType = EVENT_VXI_VME_INTR;
			break;
		case VisaEventVxiSigP:
			*peVisaEventType = EVENT_VXI_SIGP;
			break;
		case VisaEventTcpipConnect:
			*peVisaEventType = EVENT_TCPIP_CONNECT;
			break;
		case VisaEventUsbIntr:
			*peVisaEventType = EVENT_USB_INTR;
			break;
		case VisaEventCustom:
			*peVisaEventType = CUSTOM_EVENT_TYPE;
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA event type."));
			break;
	}

	return hr;
}

inline HRESULT CVisaComSession::TranslateEventMechanism(VisaEventMechanism eEventMechanism, EventMechanism* peVisaMechanism)
{
	HRESULT hr = S_OK;

	switch (eEventMechanism)
	{
		case VisaEventMechanismAll:
			*peVisaMechanism = EVENT_ALL_MECH;
			break;
		case VisaEventMechanismQuery:
			*peVisaMechanism = EVENT_QUEUE;
			break;
		case VisaEventMechanismHndlr:
			*peVisaMechanism = EVENT_HNDLR;
			break;
		case VisaEventMechanismSuspendHndlr:
			*peVisaMechanism = EVENT_SUSPEND_HNDLR;
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA event mechanism."));
			break;
	}

	return hr;
}
