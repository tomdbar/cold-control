/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

///////////////////////////////////////////////////////////////////////////////
// IVisaCSession

inline CVisaCSession::CVisaCSession()
	: m_session(NULL), m_resourceManager(NULL)
{
}

inline CVisaCSession::~CVisaCSession()
{
}

inline HRESULT CVisaCSession::Initialize(const CString& strResourceDescriptor, IInstrErrorPoller* pErrorPoller, IErrorReporter* pErrorReporter, IEnumFormatter* pEnumFormatter)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	hr = __super::Initialize(strResourceDescriptor, pErrorPoller, pErrorReporter, pEnumFormatter);
	if (SUCCEEDED(hr))
	{
		status = viOpenDefaultRM(&m_resourceManager);
		hr = TranslateStatus(status);
		if (SUCCEEDED(hr))
		{
			status = viOpen(m_resourceManager, CT2A(strResourceDescriptor), VI_NO_LOCK, DEFAULT_TIMEOUT, &m_session);
			hr = TranslateStatus(status);
			if (SUCCEEDED(hr))
			{
				hr = __super::FinalInitialize();
			}
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::Close()
{
	HRESULT hr = S_OK;
	ViStatus status;

	// Closing the resource manager will close all sessions at the same time
	if (m_resourceManager != 0)
	{
		status = viClose(m_resourceManager);
		hr = TranslateStatus(status);
	}

	m_resourceManager = NULL;
	m_session = NULL;

	HRESULT hr2 = __super::Close();
	hr = FAILED(hr) ? hr : hr2;

	return hr;
}

inline HRESULT CVisaCSession::ReadStatusByte(short* psStatusByte)
{
	if (psStatusByte == NULL)
		return m_pErrReporter->NullPointer(_T("ReadStatusBte"), _T("psStatusByte"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viReadSTB(m_session, (USHORT*)psStatusByte);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::Clear()
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viClear(m_session);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::SetTimeout(long lTimeout)
{
	HRESULT hr = S_OK;

	hr = SetAttribute(VI_ATTR_TMO_VALUE, (UINT32)lTimeout);

	return hr;
}

inline HRESULT CVisaCSession::GetTimeout(long* plTimeout)
{
	if (plTimeout == NULL)
		return m_pErrReporter->NullPointer(_T("GetTimeout"), _T("plTimeout"));

	HRESULT hr = S_OK;

	hr = GetAttribute(VI_ATTR_TMO_VALUE, (UINT32*)plTimeout);

	return hr;
}

inline HRESULT CVisaCSession::SetProtocol(VisaIoProtocol eProtocol)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	UINT16 ulProtocol;
	switch (eProtocol)
	{
		case VisaProtocolNormal:
			ulProtocol = VI_PROT_NORMAL;
			break;
		case VisaProtocol4882Strs:
			ulProtocol = VI_PROT_4882_STRS;
			break;
		case VisaProtocolFdc:
			ulProtocol = VI_PROT_FDC;
			break;
		case VisaProtocolHs488:
			ulProtocol = VI_PROT_HS488;
			break;
		case VisaProtocolUsbTmcVendor:
			ulProtocol = VI_PROT_USBTMC_VENDOR;
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA I/O protocol."));
			break;
	}

	if (SUCCEEDED(hr))
	{
		hr = SetAttribute(VI_ATTR_IO_PROT, ulProtocol);
	}

	return hr;
}

inline HRESULT CVisaCSession::GetProtocol(VisaIoProtocol* peProtocol)
{
	if (peProtocol == NULL)
		return m_pErrReporter->NullPointer(_T("GetProtocol"), _T("peProtocol"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	UINT16 ulProtocol;
	hr = GetAttribute(VI_ATTR_IO_PROT, &ulProtocol);
	if (SUCCEEDED(hr))
	{
		switch (ulProtocol)
		{
			case VI_PROT_NORMAL:
				*peProtocol = VisaProtocolNormal;
				break;
			case VI_PROT_4882_STRS:
				*peProtocol = VisaProtocol4882Strs;
				break;
			case VI_PROT_FDC:
				*peProtocol = VisaProtocolFdc;
				break;
			case VI_PROT_HS488:
				*peProtocol = VisaProtocolHs488;
				break;
			case VI_PROT_USBTMC_VENDOR:
				*peProtocol = VisaProtocolUsbTmcVendor;
				break;
			default:
				hr = m_pErrReporter->IoError(_T("Unsupported VISA I/O protocol."));
				break;
		}
	}

	return hr;
}
	
inline HRESULT CVisaCSession::SetTerminationCharacter(UCHAR cTermChar)
{
	HRESULT hr = S_OK;

	hr = SetAttribute(VI_ATTR_TERMCHAR, (UINT32)cTermChar);
	
	return hr;
}

inline HRESULT CVisaCSession::GetTerminationCharacter(UCHAR* pcTermChar)
{
	if (pcTermChar == NULL)
		return m_pErrReporter->NullPointer(_T("GetTerminationCharacter"), _T("pcTermChar"));

	*pcTermChar = 0;

	HRESULT hr = S_OK;

	UINT32 ulTermChar;
	hr = GetAttribute(VI_ATTR_TERMCHAR, &ulTermChar);
	if (SUCCEEDED(hr))
	{
		*pcTermChar = (UCHAR)ulTermChar;
	}

	return hr;
}

inline HRESULT CVisaCSession::SetTerminationCharacterEnabled(bool bEnabled)
{
	HRESULT hr = S_OK;

	hr = SetAttribute(VI_ATTR_TERMCHAR_EN, bEnabled);

	return hr;
}

inline HRESULT CVisaCSession::GetTerminationCharacterEnabled(bool* pbEnabled)
{
	if (pbEnabled == NULL)
		return m_pErrReporter->NullPointer(_T("GetTerminationCharacterEnabled"), _T("pbEnabled"));

	HRESULT hr = S_OK;
	
	hr = GetAttribute(VI_ATTR_TERMCHAR_EN, pbEnabled);

	return hr;
}

inline HRESULT CVisaCSession::Lock(IoLockType eLockType, long lLockTimeout, const CString& strRequestedKey, CString& strAccessKey)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;
	
	ViAccessMode eVisaMode;
	if (eLockType == IoLockExclusive)
	{
		eVisaMode = VI_EXCLUSIVE_LOCK; 
	}
	else if (eLockType == IoLockShared)
	{
		eVisaMode = VI_SHARED_LOCK; 
	}
	else 
	{
		hr = m_pErrReporter->IoError(_T("Unsupported VISA session access mode."));
	}

	if (SUCCEEDED(hr))
	{
		ViChar accessKey[VISAC_DEFAULT_STRING_LEN];
		status = viLock(m_session, eVisaMode, lLockTimeout, CT2A(strRequestedKey), accessKey);
		hr = TranslateStatus(status);
		if (SUCCEEDED(hr))
		{
			strAccessKey = accessKey;
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::Unlock()
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viUnlock(m_session);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::SetAttribute(long lAttribute, UINT8 uchValue)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viSetAttribute(m_session, lAttribute, uchValue);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::SetAttribute(long lAttribute, UINT16 usValue)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viSetAttribute(m_session, lAttribute, usValue);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::SetAttribute(long lAttribute, UINT32 ulValue)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viSetAttribute(m_session, lAttribute, ulValue);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::SetAttribute(long lAttribute, UINT64 ullValue)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	if (ullValue > ULONG_MAX)
	{
		// Make sure we're using 64-bit VISA
		if (sizeof(ViAttrState) != sizeof(UINT64))
		{
			hr = m_pErrReporter->IoError(_T("SetAttribute received an attribute value larger than 32 bits."));
		}
	}

	if (SUCCEEDED(hr))
	{
		status = viSetAttribute(m_session, lAttribute, (ViAttrState)ullValue);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::SetAttribute(long lAttribute, bool bValue)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viSetAttribute(m_session, lAttribute, bValue ? VI_TRUE : VI_FALSE);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::SetAttribute(long lAttribute, const CString& strValue)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	CT2A szValue = strValue;

#pragma warning( push )
#pragma warning( disable : 4311 )	// C4311: 64-bit portability warning.  Safely ignored since visa.h properly
									// defines ViAttrState as a 64-bit value when _WIN64 is defined.
	status = viSetAttribute(m_session, lAttribute, (ViAttrState)(LPSTR)&szValue[0]);
#pragma warning( pop )

	hr = TranslateStatus(status);

	return E_NOTIMPL;
}

inline HRESULT CVisaCSession::GetAttribute(long lAttribute, UINT8* puchValue)
{
	if (puchValue == NULL)
		return m_pErrReporter->NullPointer(_T("GetAttribute"), _T("puchValue"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viGetAttribute(m_session, lAttribute, puchValue);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::GetAttribute(long lAttribute, UINT16* pusValue)
{
	if (pusValue == NULL)
		return m_pErrReporter->NullPointer(_T("GetAttribute"), _T("pusValue"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viGetAttribute(m_session, lAttribute, pusValue);
	hr = TranslateStatus(status);

	return hr;
}
inline HRESULT CVisaCSession::GetAttribute(long lAttribute, UINT32* pulValue)
{
	if (pulValue == NULL)
		return m_pErrReporter->NullPointer(_T("GetAttribute"), _T("pulValue"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viGetAttribute(m_session, lAttribute, pulValue);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::GetAttribute(long lAttribute, UINT64* pullValue)
{
	if (pullValue == NULL)
		return m_pErrReporter->NullPointer(_T("GetAttribute"), _T("pullValue"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viGetAttribute(m_session, lAttribute, pullValue);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::GetAttribute(long lAttribute, bool* pbValue)
{
	if (pbValue == NULL)
		return m_pErrReporter->NullPointer(_T("GetAttribute"), _T("pbValue"));

	*pbValue = false;

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	ViBoolean value;
	status = viGetAttribute(m_session, lAttribute, &value);
	hr = TranslateStatus(status);
	if (SUCCEEDED(hr))
	{
		*pbValue = value != VI_FALSE ? true : false;
	}

	return hr;
}

inline HRESULT CVisaCSession::GetAttribute(long lAttribute, CString& strValue)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	ViChar szValue[VISAC_DEFAULT_STRING_LEN];
	status = viGetAttribute(m_session, lAttribute, szValue);
	hr = TranslateStatus(status);
	if (SUCCEEDED(hr))
	{
		strValue.Empty();
		strValue.Append(CA2T(szValue));
	}

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// IVisaCLowLevelIo

inline HRESULT CVisaCSession::LowLevelReadNoPoll(BYTE* pBuf, long cbDesired, long* plActual, long lTimeout)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelReadNoPoll"), _T("pBuf"));

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	long lActual = 0;
	status = viRead(m_session, pBuf, cbDesired, (ViPUInt32)&lActual);
	hr = TranslateStatus(status);

	if (plActual != NULL)
	{
		*plActual = lActual;
	}

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

inline HRESULT CVisaCSession::LowLevelReadNoPoll(SAFEARRAY** ppsaBuf, long cbDesired, long lTimeout)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelReadNoPoll"), _T("ppsaBuf"));

	*ppsaBuf = NULL;

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	SAFEARRAY* psaBuf = ::SafeArrayCreateVectorEx(VT_UI1, 0, cbDesired, NULL);
	if (psaBuf == NULL)
	{
		hr = m_pErrReporter->IoError(_T("LowLevelReadNoPoll could not allocate SAFEARRAY."));
	}
	else
	{
		BYTE* pBuf = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)pBuf);
		if (SUCCEEDED(hr))
		{
			long cbActual = 0;
			hr = LowLevelReadNoPoll(pBuf, cbDesired, &cbActual, lTimeout);

			HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
			hr = FAILED(hr) ? hr : hr2;

			if (SUCCEEDED(hr))
			{
				if (cbActual < cbDesired)
				{
					SAFEARRAYBOUND bound;
					bound.lLbound = 0;
					bound.cElements = cbActual;
					hr = ::SafeArrayRedim(psaBuf, &bound);
				}
			}
		}
	}
	
	if (SUCCEEDED(hr))
	{
		*ppsaBuf = psaBuf;
	}
	else if (psaBuf != NULL)
	{
		::SafeArrayDestroy(psaBuf);
	}

	return hr;
}

inline HRESULT CVisaCSession::LowLevelReadStringNoPoll(CString& strBuf, long cchDesired, long lTimeout)
{
	HRESULT hr = S_OK;

	BYTE* pBuf = (BYTE*)_malloca(cchDesired + 1);
	if (SUCCEEDED(hr))
	{
		long lActual = 0;
		hr = LowLevelReadNoPoll(pBuf, cchDesired, &lActual, lTimeout);
		if (SUCCEEDED(hr))
		{
			pBuf[lActual] = NULL;
			strBuf = (LPSTR)pBuf;
		}
	}

	if (pBuf != NULL)
	{
		_freea(pBuf);
	}

	return hr;
}

inline HRESULT CVisaCSession::LowLevelReadStringNoPoll(BSTR* pbstrBuf, long cchDesired, long lTimeout)
{
	if (pbstrBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelReadStringNoPoll"), _T("pbstrBuf"));

	*pbstrBuf = NULL;

	HRESULT hr = S_OK;

	BYTE* pBuf = (BYTE*)_malloca(cchDesired + 1);
	if (SUCCEEDED(hr))
	{
		long lActual = 0;
		hr = LowLevelReadNoPoll(pBuf, cchDesired, &lActual, lTimeout);
		if (SUCCEEDED(hr))
		{
			pBuf[lActual] = NULL;
			*pbstrBuf = CComBSTR((LPSTR)pBuf).Detach();
		}
	}

	if (pBuf != NULL)
	{
		_freea(pBuf);
	}

	return hr;
}

inline HRESULT CVisaCSession::LowLevelWriteNoPoll(BYTE* pBuf, long cbDesired, long* plActual, long lTimeout)	
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelWriteNoPoll"), _T("pBuf"));

	DECLARE_SET_AND_RESTORE_TIMEOUT(lTimeout);

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	ViUInt32 lActual;
	status = viWrite(m_session, pBuf, cbDesired, &lActual);
	hr = TranslateStatus(status);
	if (SUCCEEDED(hr) && plActual != NULL)
	{
		*plActual = lActual;
	}

	return hr;
}

inline HRESULT CVisaCSession::LowLevelWriteNoPoll(SAFEARRAY* psaBuf, long cbDesired, long* plActual, long lTimeout)	
{
	if (psaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelWriteNoPoll"), _T("psaBuf"));

	HRESULT hr = S_OK;

	BYTE* pBuf = NULL;
	hr = ::SafeArrayAccessData(psaBuf, (void**)&pBuf);
	if (SUCCEEDED(hr))
	{
		hr = LowLevelWriteNoPoll(pBuf, cbDesired, plActual, lTimeout);

		HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
		hr = FAILED(hr) ? hr : hr2;
	}

	return hr;
}

inline HRESULT CVisaCSession::LowLevelWriteStringNoPoll(const CString& strBuf, long* pcchActual, long lTimeout)	
{
	HRESULT hr = S_OK;

	CStringA strTemp(strBuf);
	hr = LowLevelWriteNoPoll((BYTE*)LPCSTR(strTemp), strTemp.GetLength(), pcchActual, lTimeout);

	return hr;
}

inline HRESULT CVisaCSession::LowLevelWriteStringNoPoll(BSTR bstrBuf, long* pcchActual, long lTimeout)	
{
	if (bstrBuf == NULL)
		return m_pErrReporter->NullPointer(_T("LowLevelWriteStringNoPoll"), _T("bstrBuf"));

	HRESULT hr = S_OK;

	CT2A sz = COLE2T(bstrBuf);
	hr = LowLevelWriteNoPoll((BYTE*)sz.m_psz, (long)strlen(sz), pcchActual, lTimeout);

	return hr;
}

inline HRESULT CVisaCSession::ReadAsync(BYTE* pBuf, long cbDesired, ULONG* plJobId)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("ReadAsync"), _T("pBuf"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viReadAsync(m_session, pBuf, cbDesired, plJobId);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::WriteAsync(BYTE* pBuf, long cbDesired, ULONG* plJobId)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("WriteAsync"), _T("pBuf"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viWriteAsync(m_session, pBuf, cbDesired, plJobId);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::WriteAsync(SAFEARRAY** ppsaBuf, long cbDesired, ULONG* plJobId)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("WriteAsync"), _T("ppsaBuf"));

	HRESULT hr = S_OK;

	BYTE* pBuf = NULL;
	hr = ::SafeArrayAccessData(*ppsaBuf, (void**)&pBuf);
	if (SUCCEEDED(hr))
	{
		hr = WriteAsync(pBuf, cbDesired, plJobId);

		HRESULT hr2 = ::SafeArrayUnaccessData(*ppsaBuf);
		hr = FAILED(hr) ? hr : hr2;
	}

	return hr;
}

inline HRESULT CVisaCSession::AssertTrigger(VisaTriggerProtocol eProtocol)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;
	
	UINT16 usTrigProtocol;
	switch (eProtocol)
	{
		case VisaTriggerProtocolDefault:
			usTrigProtocol = VI_TRIG_PROT_DEFAULT;
			break;
		case VisaTriggerProtocolOn:
			usTrigProtocol = VI_TRIG_PROT_ON;
			break;
		case VisaTriggerProtocolOff:
			usTrigProtocol = VI_TRIG_PROT_OFF;
			break;
		case VisaTriggerProtocolSync:
			usTrigProtocol = VI_TRIG_PROT_SYNC;
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA trigger protocol."));
			break;
	}

	if (SUCCEEDED(hr))
	{
		hr = viAssertTrigger(m_session, usTrigProtocol);
	}

	return hr;
}

inline HRESULT CVisaCSession::SetSendEndEnabled(bool bEnabled)
{
	HRESULT hr = S_OK;

	hr = SetAttribute(VI_ATTR_SEND_END_EN, bEnabled);

	return hr;
}

inline HRESULT CVisaCSession::GetSendEndEnabled(bool* pbEnabled)
{
	HRESULT hr = S_OK;

	hr = GetAttribute(VI_ATTR_SEND_END_EN, pbEnabled);

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// IVisaCSessionInfo

inline HRESULT CVisaCSession::GetResourceName(CString& strName)		
{
	HRESULT hr = S_OK;

	hr = GetAttribute(VI_ATTR_RSRC_NAME, strName);

	return hr;
}

inline HRESULT CVisaCSession::GetInterfaceName(CString& strName)
{
	HRESULT hr = S_OK;

	hr = GetAttribute(VI_ATTR_INTF_INST_NAME, strName);

	return hr;
}

inline HRESULT CVisaCSession::GetInterfaceType(VisaInterfaceType* peType)
{
	if (peType == NULL)
		return m_pErrReporter->NullPointer(_T("GetInterfaceType"), _T("peType"));

	*peType = VisaInterfaceOther;

	HRESULT hr = S_OK;

	UINT16 ulType;
	hr = GetAttribute(VI_ATTR_INTF_TYPE, &ulType);
	if (SUCCEEDED(hr))
	{
		if (ulType == VI_INTF_GPIB)
		{
			*peType = VisaInterfaceGpib;
		}
		else if (ulType == VI_INTF_VXI)
		{
			*peType = VisaInterfaceVxi;
		}
		else if (ulType == VI_INTF_GPIB_VXI)
		{
			*peType = VisaInterfaceGpibVxi;
		}
		else if (ulType == VI_INTF_ASRL)
		{
			*peType = VisaInterfaceSerial;
		}
		else if (ulType == VI_INTF_TCPIP)
		{
			*peType = VisaInterfaceTcpip;
		}
		else if (ulType == VI_INTF_USB)
		{
			*peType = VisaInterfaceUsb;
		}
		else if (ulType == VI_INTF_PXI)
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

inline HRESULT CVisaCSession::GetInterfaceNumber(UINT16* pusNumber)
{
	if (pusNumber == NULL)
		return m_pErrReporter->NullPointer(_T("GetInterfaceNumber"), _T("pusNumber"));

	*pusNumber = 0;

	HRESULT hr = S_OK;

	UINT32 ulNum;
	hr = GetAttribute(VI_ATTR_INTF_NUM, &ulNum);
	if (SUCCEEDED(hr))
	{
		*pusNumber = ulNum;
	}

	return hr;
}

inline HRESULT CVisaCSession::GetSessionType(CString& strType)
{
	HRESULT hr = S_OK;

	hr = GetAttribute(VI_ATTR_RSRC_CLASS, strType);

	return hr;
}

inline HRESULT CVisaCSession::GetManufacturerName(CString& strName)
{
	HRESULT hr = S_OK;

	hr = GetAttribute(VI_ATTR_RSRC_MANF_NAME, strName);

	return hr;
}

inline HRESULT CVisaCSession::GetManufacturerId(UINT16* pusId)
{
	if (pusId == NULL)
		return m_pErrReporter->NullPointer(_T("GetManufacturerId"), _T("pusId"));

	*pusId = 0;

	HRESULT hr = S_OK;

	UINT32 ulId;
	hr = GetAttribute(VI_ATTR_RSRC_MANF_ID, &ulId);
	if (SUCCEEDED(hr))
	{
		*pusId = ulId;
	}

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// IVisaCMemoryIo

inline HRESULT CVisaCSession::In8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT8* puVal)
{
	if (puVal == NULL)
		return m_pErrReporter->NullPointer(_T("In8"), _T("puVal"));

	*puVal = 0;

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viIn8Ex(m_session, sSpace, ullOffset, puVal);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::In16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT16* psVal)
{
	if (psVal == NULL)
		return m_pErrReporter->NullPointer(_T("In16"), _T("psVal"));
	
	*psVal = 0;

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viIn16Ex(m_session, sSpace, ullOffset, psVal);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::In32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32* plVal)
{
	if (plVal == NULL)
		return m_pErrReporter->NullPointer(_T("In32"), _T("plVal"));

	*plVal = 0;

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viIn32Ex(m_session, sSpace, ullOffset, (ViPUInt32)plVal);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::In64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT64* pllVal)
{
	if (pllVal == NULL)
		return m_pErrReporter->NullPointer(_T("In64"), _T("pllVal"));

	*pllVal = 0;

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viIn64Ex(m_session, sSpace, ullOffset, pllVal);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::Out8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT8 uVal)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viOut8Ex(m_session, sSpace, ullOffset,uVal);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::Out16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT16 sVal)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viOut16Ex(m_session, sSpace, ullOffset,sVal);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::Out32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 lVal)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viOut32Ex(m_session, sSpace, ullOffset,lVal);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::Out64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT64 llVal)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viOut64Ex(m_session, sSpace, ullOffset,llVal);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT8* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn8"), _T("pBuf"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viMoveIn8Ex(m_session, sSpace, ullOffset, ulLength, pBuf);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn8"), _T("ppsaBuf"));

	*ppsaBuf = NULL;

	HRESULT hr = S_OK;

	SAFEARRAY* psaBuf = ::SafeArrayCreateVectorEx(VT_UI1, 0, ulLength, NULL);
	if (psaBuf == NULL)
	{
		hr = m_pErrReporter->IoError(_T("MoveIn8 could not allocate SAFEARRAY."));
	}
	else
	{
		BYTE* pBuf = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)pBuf);
		if (SUCCEEDED(hr))
		{
			hr = MoveIn8(eSpace, ullOffset, ulLength, pBuf);

			HRESULT hr2 = ::SafeArrayUnaccessData(*ppsaBuf);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	if (SUCCEEDED(hr))
	{
		*ppsaBuf = psaBuf;
	}
	else if (psaBuf != NULL)
	{
		::SafeArrayDestroy(psaBuf);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT8>& saBuf)
{
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

inline HRESULT CVisaCSession::MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT16* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn16"), _T("pBuf"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viMoveIn16Ex(m_session, sSpace, ullOffset, ulLength, pBuf);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn16"), _T("ppsaBuf"));

	*ppsaBuf = NULL;

	HRESULT hr = S_OK;

	SAFEARRAY* psaBuf = ::SafeArrayCreateVectorEx(VT_UI2, 0, ulLength, NULL);
	if (psaBuf == NULL)
	{
		hr = m_pErrReporter->IoError(_T("MoveIn16 could not allocate SAFEARRAY."));
	}
	else
	{
		UINT16* pBuf = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)pBuf);
		if (SUCCEEDED(hr))
		{
			hr = MoveIn16(eSpace, ullOffset, ulLength, pBuf);

			HRESULT hr2 = ::SafeArrayUnaccessData(*ppsaBuf);
			hr = FAILED(hr) ? hr : hr2;

			if (SUCCEEDED(hr))
			{
				*ppsaBuf = psaBuf;
			}
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT16>& saBuf)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

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

inline HRESULT CVisaCSession::MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT32* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn32"), _T("pBuf"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viMoveIn32Ex(m_session, sSpace, ullOffset, ulLength, (ViAUInt32)pBuf);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn32"), _T("ppsaBuf"));

	*ppsaBuf = NULL;

	HRESULT hr = S_OK;

	SAFEARRAY* psaBuf = ::SafeArrayCreateVectorEx(VT_UI4, 0, ulLength, NULL);
	if (psaBuf == NULL)
	{
		hr = m_pErrReporter->IoError(_T("MoveIn32 could not allocate SAFEARRAY."));
	}
	else
	{
		UINT32* pBuf = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)pBuf);
		if (SUCCEEDED(hr))
		{
			hr = MoveIn32(eSpace, ullOffset, ulLength, pBuf);

			HRESULT hr2 = ::SafeArrayUnaccessData(*ppsaBuf);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	if (SUCCEEDED(hr))
	{
		*ppsaBuf = psaBuf;
	}
	else if (psaBuf != NULL)
	{
		::SafeArrayDestroy(psaBuf);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT32>& saBuf)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

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

inline HRESULT CVisaCSession::MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT64* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn64"), _T("pBuf"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viMoveIn64Ex(m_session, sSpace, ullOffset, ulLength, pBuf);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf)
{
	if (ppsaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveIn64"), _T("ppsaBuf"));

	*ppsaBuf = NULL;

	HRESULT hr = S_OK;

	SAFEARRAY* psaBuf = ::SafeArrayCreateVectorEx(VT_UI8, 0, ulLength, NULL);
	if (psaBuf == NULL)
	{
		hr = m_pErrReporter->IoError(_T("MoveIn8 could not allocate SAFEARRAY."));
	}
	else
	{
		UINT64* pBuf = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)pBuf);
		if (SUCCEEDED(hr))
		{
			hr = MoveIn64(eSpace, ullOffset, ulLength, pBuf);

			HRESULT hr2 = ::SafeArrayUnaccessData(*ppsaBuf);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	if (SUCCEEDED(hr))
	{
		*ppsaBuf = psaBuf;
	}
	else if (psaBuf != NULL)
	{
		::SafeArrayDestroy(psaBuf);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT64>& saBuf)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	SAFEARRAY* psaBuf = NULL;
	hr = MoveIn64(eSpace, ullOffset, ulLength, &psaBuf);
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

inline HRESULT CVisaCSession::MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT8* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut8"), _T("pBuf"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viMoveOut8Ex(m_session, sSpace, ullOffset, ulLength, pBuf);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf)
{
	if (psaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut8"), _T("psaBuf"));

	HRESULT hr = S_OK;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		UINT8* pBuf = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)*pBuf);
		if (SUCCEEDED(hr))
		{
			hr = MoveOut8(eSpace, ullOffset, ulLength, pBuf);

			HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT8>& saBuf)
{
	HRESULT hr = S_OK;

	hr = MoveOut8(eSpace, ullOffset, ulLength, saBuf.m_psa);

	return hr;
}

inline HRESULT CVisaCSession::MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT16* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut16"), _T("pBuf"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viMoveOut16Ex(m_session, sSpace, ullOffset, ulLength, pBuf);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf)
{
	if (psaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut16"), _T("psaBuf"));

	HRESULT hr = S_OK;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		UINT16* pBuf = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)*pBuf);
		if (SUCCEEDED(hr))
		{
			hr = MoveOut16(eSpace, ullOffset, ulLength, pBuf);

			HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT16>& saBuf)
{
	HRESULT hr = S_OK;

	hr = MoveOut16(eSpace, ullOffset, ulLength, saBuf.m_psa);

	return hr;
}

inline HRESULT CVisaCSession::MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT32* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut32"), _T("pBuf"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viMoveOut32Ex(m_session, sSpace, ullOffset, ulLength, (ViAUInt32)pBuf);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf)
{
	if (psaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut32"), _T("psaBuf"));

	HRESULT hr = S_OK;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		UINT32* pBuf = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)&pBuf);
		if (SUCCEEDED(hr))
		{
			hr = MoveOut32(eSpace, ullOffset, ulLength, pBuf);

			HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT32>& saBuf)
{
	HRESULT hr = S_OK;

	hr = MoveOut32(eSpace, ullOffset, ulLength, saBuf.m_psa);

	return hr;
}

inline HRESULT CVisaCSession::MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT64* pBuf)
{
	if (pBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut64"), _T("pBuf"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		status = viMoveOut64Ex(m_session, sSpace, ullOffset, ulLength, pBuf);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf)
{
	if (psaBuf == NULL)
		return m_pErrReporter->NullPointer(_T("MoveOut64"), _T("psaBuf"));

	HRESULT hr = S_OK;

	short sSpace;
	hr = TranslateAddressSpace(eSpace, &sSpace);
	if (SUCCEEDED(hr))
	{
		UINT64* pBuf = NULL;
		hr = ::SafeArrayAccessData(psaBuf, (void**)*pBuf);
		if (SUCCEEDED(hr))
		{
			hr = MoveOut64(eSpace, ullOffset, ulLength, pBuf);

			HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT64>& saBuf)
{
	HRESULT hr = S_OK;

	hr = MoveOut64(eSpace, ullOffset, ulLength, saBuf.m_psa);

	return hr;
}

inline HRESULT CVisaCSession::Move(VisaAddressSpace eSrcSpace, UINT64 ullSrcOffset, VisaDataWidth eSrcWidth, VisaAddressSpace eDestSpace, UINT64 ullDestOffset, VisaDataWidth eDestWidth, UINT32 ulLength)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSrcSpace;
	hr = TranslateAddressSpace(eSrcSpace, &sSrcSpace);
	if (SUCCEEDED(hr))
	{
		short sDestSpace;
		hr = TranslateAddressSpace(eDestSpace, &sDestSpace);
		if (SUCCEEDED(hr))
		{
			short sSrcWidth;
			hr = TranslateDataWidth(eSrcWidth, &sSrcWidth);
			if (SUCCEEDED(hr))
			{
				short sDestWidth;
				hr = TranslateDataWidth(eDestWidth, &sDestWidth);
				if (SUCCEEDED(hr))
				{
					status = viMoveEx(m_session, sSrcSpace, ullSrcOffset, sSrcWidth, sDestSpace, ullDestOffset, sDestWidth, ulLength);
					hr = TranslateStatus(status);
				}
			}
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::MoveAsync(VisaAddressSpace eSrcSpace, UINT64 ullSrcOffset, VisaDataWidth eSrcWidth, VisaAddressSpace eDestSpace, UINT64 ullDestOffset, VisaDataWidth eDestWidth, UINT32 ulLength, UINT32* plJobId)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	short sSrcSpace;
	hr = TranslateAddressSpace(eSrcSpace, &sSrcSpace);
	if (SUCCEEDED(hr))
	{
		short sDestSpace;
		hr = TranslateAddressSpace(eDestSpace, &sDestSpace);
		if (SUCCEEDED(hr))
		{
			short sSrcWidth;
			hr = TranslateDataWidth(eSrcWidth, &sSrcWidth);
			if (SUCCEEDED(hr))
			{
				short sDestWidth;
				hr = TranslateDataWidth(eDestWidth, &sDestWidth);
				if (SUCCEEDED(hr))
				{
					status = viMoveAsyncEx(m_session, sSrcSpace, ullSrcOffset, sSrcWidth, sDestSpace, ullDestOffset, sDestWidth, ulLength, (ViPJobId)plJobId);
					hr = TranslateStatus(status);
				}
			}
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::SetSourceBigEndian(bool bBigEndian)
{
	HRESULT hr = S_OK;

	hr = SetAttribute(VI_ATTR_SRC_BYTE_ORDER, (UINT32)(bBigEndian ? VI_BIG_ENDIAN : VI_LITTLE_ENDIAN));

	return hr;
}

inline HRESULT CVisaCSession::GetSourceBigEndian(bool* pbBigEndian)
{
	if (pbBigEndian == NULL)
		return m_pErrReporter->NullPointer(_T("GetSourceBigEndian"), _T("pbBigEndian"));

	*pbBigEndian = false;

	HRESULT hr = S_OK;

	UINT32 ulValue;
	hr = GetAttribute(VI_ATTR_SRC_BYTE_ORDER, &ulValue);
	if (SUCCEEDED(hr))
	{
		*pbBigEndian = ulValue == VI_BIG_ENDIAN;
	}

	return hr;
}

inline HRESULT CVisaCSession::SetDestinationBigEndian(bool bBigEndian)
{
	HRESULT hr = S_OK;

	hr = SetAttribute(VI_ATTR_DEST_BYTE_ORDER, (UINT32)(bBigEndian ? VI_BIG_ENDIAN : VI_LITTLE_ENDIAN));

	return hr;
}

inline HRESULT CVisaCSession::GetDestinationBigEndian(bool* pbBigEndian)
{
	if (pbBigEndian == NULL)
		return m_pErrReporter->NullPointer(_T("GetDestinationBigEndian"), _T("pbBigEndian"));

	*pbBigEndian = false;

	HRESULT hr = S_OK;

	UINT32 ulValue;
	hr = GetAttribute(VI_ATTR_DEST_BYTE_ORDER, &ulValue);
	if (SUCCEEDED(hr))
	{
		*pbBigEndian = ulValue == VI_BIG_ENDIAN;
	}

	return hr;
}

inline HRESULT CVisaCSession::SetSourceIncrement(long lIncrement)
{
	HRESULT hr = S_OK;

	hr = SetAttribute(VI_ATTR_SRC_INCREMENT, (UINT32)lIncrement);

	return hr;
}

inline HRESULT CVisaCSession::GetSourceIncrement(long* plIncrement)
{
	if (plIncrement == NULL)
		return m_pErrReporter->NullPointer(_T("GetSourceIncrement"), _T("plIncrement"));

	HRESULT hr = S_OK;

	hr = GetAttribute(VI_ATTR_SRC_INCREMENT, (UINT32*)plIncrement);

	return hr;
}

inline HRESULT CVisaCSession::SetDestinationIncrement(long lIncrement)
{
	HRESULT hr = S_OK;

	hr = SetAttribute(VI_ATTR_DEST_INCREMENT, (UINT32)lIncrement);

	return hr;
}

inline HRESULT CVisaCSession::GetDestinationIncrement(long* plIncrement)
{
	if (plIncrement == NULL)
		return m_pErrReporter->NullPointer(_T("GetDestinationIncrement"), _T("plIncrement"));

	HRESULT hr = S_OK;

	hr = GetAttribute(VI_ATTR_DEST_INCREMENT, (UINT32*)plIncrement);

	return hr;
}

inline HRESULT CVisaCSession::AllocateMemory(UINT64 ullSize, UINT64* pullOffset)
{
	if (pullOffset == NULL)
		return m_pErrReporter->NullPointer(_T("AllocateMemory"), _T("pullOffset"));

	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	status = viMemAllocEx(m_session, (ViBusSize)ullSize, pullOffset);
	hr = TranslateStatus(status);

	return hr;
}

inline HRESULT CVisaCSession::FreeMemory(UINT64 ullOffset)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;
	
	status = viMemFreeEx(m_session, ullOffset);
	hr = TranslateStatus(status);

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// IVisaCDirectIo

inline HRESULT CVisaCSession::GetSession(ViSession* pSession)
{
	if (pSession == NULL)
		return E_POINTER;

	*pSession = m_session;

	return S_OK;
}

///////////////////////////////////////////////////////////////////////////////
// IVisaCEventManager

inline HRESULT CVisaCSession::SetMaximumQueueLength(long val)
{
	HRESULT hr = S_OK;

	hr = SetAttribute(VI_ATTR_MAX_QUEUE_LENGTH, (UINT32)val);

	return hr;
}

inline HRESULT CVisaCSession::GetMaximumQueueLength(long* pVal)
{
	HRESULT hr = S_OK;

	hr = GetAttribute(VI_ATTR_MAX_QUEUE_LENGTH, (UINT32*)pVal);

	return hr;
}

inline HRESULT CVisaCSession::EnableEvent(VisaEventType eEventType, VisaEventMechanism eMech)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	ViEventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		short sVisaEventMechanism;
		hr = TranslateEventMechanism(eMech, &sVisaEventMechanism);
		if (SUCCEEDED(hr))
		{
			status = viEnableEvent(m_session, eVisaEventType, sVisaEventMechanism, NULL);
			hr = TranslateStatus(status);
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::DisableEvent(VisaEventType eEventType, VisaEventMechanism eMech)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	ViEventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		short sVisaEventMechanism;
		hr = TranslateEventMechanism(eMech, &sVisaEventMechanism);
		if (SUCCEEDED(hr))
		{
			status = viDisableEvent(m_session, eVisaEventType, sVisaEventMechanism);
			hr = TranslateStatus(status);
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::DiscardEvents(VisaEventType eEventType, VisaEventMechanism eMech)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	ViEventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		short sVisaEventMechanism;
		hr = TranslateEventMechanism(eMech, &sVisaEventMechanism);
		if (SUCCEEDED(hr))
		{
			status = viDiscardEvents(m_session, eVisaEventType, sVisaEventMechanism);
			hr = TranslateStatus(status);
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::InstallHandler(VisaEventType eEventType, ViHndlr pHandler, void* pvUserHandle)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	ViEventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		status = viInstallHandler(m_session, eVisaEventType, pHandler, pvUserHandle);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::UninstallHandler(VisaEventType eEventType, ViHndlr pHandler, void* pvUserHandle)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	ViEventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		status = viUninstallHandler(m_session, eVisaEventType, pHandler, pvUserHandle);
		hr = TranslateStatus(status);
	}

	return hr;
}

inline HRESULT CVisaCSession::WaitOnEvent(long lWaitTimeout, VisaEventType eEventType, VisaEventType* peOutEventType, UINT32* plOutContext)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	ViEventType eVisaEventType;
	hr = TranslateEventType(eEventType, &eVisaEventType);
	if (SUCCEEDED(hr))
	{
		ViEventType eVisaOutEventType;
		status = viWaitOnEvent(m_session, eVisaEventType, lWaitTimeout, &eVisaOutEventType, (ViPEvent)plOutContext);
		hr = TranslateStatus(status);
		if (SUCCEEDED(hr))
		{
			hr = TranslateEventType(eVisaOutEventType, peOutEventType);
		}
	}

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// Helpers

inline HRESULT CVisaCSession::TranslateStatus(ViStatus status)
{
	HRESULT hr = S_OK;

	if (status != VI_SUCCESS)
	{
		if (status == VI_ERROR_TMO)
		{
			hr = m_pErrReporter->IoTimeoutError();
		}
		else
		{
			// The mapping between VISA-C ViStatus results and VISA-COM HRESULTs is
			// defined in Rule 3.1.6. of the VISA-COM spec.
			hr = (status & 0x80000FFF) | 0x00040000;
			if (FAILED(hr))
			{
				ViChar szDesc[VISAC_DEFAULT_STRING_LEN];
				viStatusDesc(m_session, status, szDesc);

				CString strDesc = CA2T(szDesc);
				hr = m_pErrReporter->ReportError(hr, strDesc);
			}
		}
	}

	return hr;
}

inline HRESULT CVisaCSession::TranslateAddressSpace(VisaAddressSpace eSpace, short* psSpace)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

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

inline HRESULT CVisaCSession::TranslateDataWidth(VisaDataWidth eWidth, short* psVisaWidth)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	switch (eWidth)
	{
		case VisaDataWidth8:
			*psVisaWidth = VI_WIDTH_8;
			break;
		case VisaDataWidth16:
			*psVisaWidth = VI_WIDTH_16;
			break;
		case VisaDataWidth32:
			*psVisaWidth = VI_WIDTH_32;
			break;
		case VisaDataWidth64:
			*psVisaWidth = VI_WIDTH_64;
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA data width."));
			break;
	}

	return hr;
}

inline HRESULT CVisaCSession::TranslateEventType(VisaEventType eEventType, ViEventType* peVisaEventType)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	switch (eEventType)
	{
		case VisaEventAllEvents:
			*peVisaEventType = VI_ALL_ENABLED_EVENTS;
			break;
		case VisaEventIoCompletion:
			*peVisaEventType = VI_EVENT_IO_COMPLETION;
			break;
		case VisaEventTrig:
			*peVisaEventType = VI_EVENT_TRIG;
			break;
		case VisaEventServiceReq:
			*peVisaEventType = VI_EVENT_SERVICE_REQ;
			break;
		case VisaEventException:
			*peVisaEventType = VI_EVENT_EXCEPTION;
			break;
		case VisaEventGpibCic:
			*peVisaEventType = VI_EVENT_GPIB_CIC;
			break;
		case VisaEventGpibTalk:
			*peVisaEventType = VI_EVENT_GPIB_TALK;
			break;
		case VisaEventGpibListen:
			*peVisaEventType = VI_EVENT_GPIB_LISTEN;
			break;
		case VisaEventVxiVmeSysfail:
			*peVisaEventType = VI_EVENT_VXI_VME_SYSFAIL;
			break;
		case VisaEventVxiVmeSysreset:
			*peVisaEventType = VI_EVENT_VXI_VME_SYSRESET;
			break;
		case VisaEventVxiVmeIntr:
			*peVisaEventType = VI_EVENT_VXI_VME_INTR;
			break;
		case VisaEventVxiSigP:
			*peVisaEventType = VI_EVENT_VXI_SIGP;
			break;
		case VisaEventTcpipConnect:
			*peVisaEventType = VI_EVENT_TCPIP_CONNECT;
			break;
		case VisaEventUsbIntr:
			*peVisaEventType = VI_EVENT_USB_INTR;
			break;
		case VisaEventCustom:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA event type."));
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA event type."));
			break;
	}

	return hr;
}


inline HRESULT CVisaCSession::TranslateEventType(ViEventType eVisaEventType, VisaEventType* peEventType)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	switch (eVisaEventType)
	{
		case VI_ALL_ENABLED_EVENTS:
			*peEventType = VisaEventAllEvents;
			break;
		case VI_EVENT_IO_COMPLETION:
			*peEventType = VisaEventIoCompletion;
			break;
		case VI_EVENT_TRIG:
			*peEventType = VisaEventTrig;
			break;
		case VI_EVENT_SERVICE_REQ:
			*peEventType = VisaEventServiceReq;
			break;
		case VI_EVENT_EXCEPTION:
			*peEventType = VisaEventException;
			break;
		case VI_EVENT_GPIB_CIC:
			*peEventType = VisaEventGpibCic;
			break;
		case VI_EVENT_GPIB_TALK:
			*peEventType = VisaEventGpibTalk;
			break;
		case VI_EVENT_GPIB_LISTEN:
			*peEventType = VisaEventGpibListen;
			break;
		case VI_EVENT_VXI_VME_SYSFAIL:
			*peEventType = VisaEventVxiVmeSysfail;
			break;
		case VI_EVENT_VXI_VME_SYSRESET:
			*peEventType = VisaEventVxiVmeSysreset;
			break;
		case VI_EVENT_VXI_VME_INTR:
			*peEventType = VisaEventVxiVmeIntr;
			break;
		case VI_EVENT_VXI_SIGP:
			*peEventType = VisaEventVxiSigP;
			break;
		case VI_EVENT_TCPIP_CONNECT:
			*peEventType = VisaEventTcpipConnect;
			break;
		case VI_EVENT_USB_INTR:
			*peEventType = VisaEventUsbIntr;
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA event type."));
			break;
	}

	return hr;
}

inline HRESULT CVisaCSession::TranslateEventMechanism(VisaEventMechanism eEventMechanism, short* psVisaMechanism)
{
	HRESULT hr = S_OK;
	ViStatus status = VI_SUCCESS;

	switch (eEventMechanism)
	{
		case VisaEventMechanismAll:
			*psVisaMechanism = (short)VI_ALL_MECH;
			break;
		case VisaEventMechanismQuery:
			*psVisaMechanism = VI_QUEUE;
			break;
		case VisaEventMechanismHndlr:
			*psVisaMechanism = VI_HNDLR;
			break;
		case VisaEventMechanismSuspendHndlr:
			*psVisaMechanism = VI_SUSPEND_HNDLR;
			break;
		default:
			hr = m_pErrReporter->IoError(_T("Unsupported VISA event mechanism."));
			break;
	}

	return hr;
}
