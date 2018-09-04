/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/
#include "ntlcoercion.h"

inline CDriver::CDriver()
{
	m_bInitialized = false;

	m_pTracer = new CTracer();
}

inline CDriver::~CDriver()
{
	if (m_pCoercionLog != NULL)
		delete m_pCoercionLog;

	if (m_pTracer != NULL)
		delete m_pTracer;
}

inline HRESULT CDriver::InternalFinalConstruct()
{
	HRESULT hr = S_OK;

	hr = __super::InternalFinalConstruct();
	if (SUCCEEDED(hr))
	{
		// Call user's construction code
		hr = OnFinalConstruct();

		// Must initialize coercion log here because the DriverInfo object is not available 
		// when the CDriver ctor executes.
		m_pCoercionLog = new CCoercionLog(m_driverInfo.m_lCoercionLogSize);
	}

	return hr;
}

inline void CDriver::InternalFinalRelease()
{
	// Call user's destruction code FIRST
	OnFinalRelease();

	__super::InternalFinalRelease();
}

inline HRESULT CDriver::InternalFinalInitialize()
{
	HRESULT hr = S_OK;

	hr = InitNode(this, NULL);
	if (SUCCEEDED(hr))
	{
		// Call user's custom initialization code
		hr = OnFinalInitialize();
		if (SUCCEEDED(hr))
		{
			hr = FinalInitializeRepCaps();
		}
	}

	return hr;
}

inline HRESULT CDriver::InternalFinalClose()
{
	HRESULT hr = S_OK;

	// Call user's custom close code FIRST
	hr = FinalCloseRepCaps();
	if (SUCCEEDED(hr))
	{
		hr = OnFinalClose();
		if (SUCCEEDED(hr))
		{
			hr = CloseNode();
		}
	}

	return hr;
}

// IIviDriver
inline STDMETHODIMP CDriver::Initialize(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
{
	if (ResourceName == NULL)
		return ReportInvalidValueError(_T("Initialize"), _T("ResourceName"), (long)0);

	if (m_bInitialized)
		return GetErrorReporter().AlreadyInitialized();

	HRESULT hr = S_OK;

	m_bIdQuery = IdQuery != VARIANT_FALSE;
	m_bReset = Reset != VARIANT_FALSE;

	hr = ParseConfiguration(ResourceName, OptionString);
	if (SUCCEEDED(hr))
	{
		if (SUCCEEDED(hr) && m_bInterchangeCheck && !m_driverInfo.m_bInterchangeCheckSupported)
		{
			// If the user hasn't indicated interchangeability checking is supported, then we return an error
			// since NTL does not provide this capability by default.
			hr = GetErrorReporter().BadOptionValue(_T("True"), _T("Interchange checking is not supported by the driver."));
		}

		if (SUCCEEDED(hr))
		{
			hr = InitializeTracer();
			if (SUCCEEDED(hr))
			{
				hr = InitializeIO();
				if (SUCCEEDED(hr))
				{
					// If any failure occurs from this point on, we need to close the I/O
					m_bInitialized = true;

					if (GetQueryInstrStatus())
					{
						hr = ClearIOStatus();
					}

					if (SUCCEEDED(hr))
					{
						hr = InitializeIdentification();
						if (SUCCEEDED(hr))
						{
							if (IdQuery != VARIANT_FALSE)
							{
								if (!InstrumentSupported())
								{
									CString strMsg;
									strMsg.Format(_T("Unrecognized model: %s."), m_strModel);
									hr = GetErrorReporter().InstrumentIdQueryFailed(strMsg);
								}
							}

							if (SUCCEEDED(hr))
							{
								hr = InternalFinalInitialize();
							}

							if (SUCCEEDED(hr) && (Reset != VARIANT_FALSE))
							{
								hr = CComQIPtr<IIviDriverUtility>(static_cast<CNode*>(this))->Reset();
								if (FAILED(hr))
								{
									hr = GetErrorReporter().InstrumentResetFailed();
								}
							}
						}
					}

					if (FAILED(hr))
					{
						CloseIO();

						m_bInitialized = false;
					}
				}
			}
		}
	}

	return hr;
}

inline HRESULT CDriver::InitializeIO()
{
	HRESULT hr = S_OK;

	if (!m_bSimulate)
	{
		hr = GetIo().Initialize(m_strResourceDescriptor, this, &GetErrorReporter(), this);
		if (hr == E_IVI_RESOURCE_UNKNOWN)
		{
			CString strErr;
			strErr.Format(_T("Resource descriptor = %s."), m_strResourceDescriptor);
			hr = GetErrorReporter().ResourceUnknown(strErr);
		}
	}

	return hr;
}

inline HRESULT CDriver::ClearIOStatus()
{
	HRESULT hr = S_OK;

	if (!m_bSimulate)
	{
		hr = GetIo().WriteString(_T("*CLS"));
	}

	return hr;
}

inline HRESULT CDriver::CloseIO()
{
	HRESULT hr = S_OK;

	if (!m_bSimulate)
	{
		// Developers can override this to do their own I/O or close dependent DLLs instead of using DriverIOManager
		//
		hr = GetIo().Close();
	}

	return hr;
}

inline HRESULT CDriver::LoadDriverConfiguration(IIviDriverSessionPtr spDriverSession)
{
	if (spDriverSession == NULL)
		return ReportInvalidValueError(_T("LoadDriverConfiguration"), _T("pDriverSession"), (long)0);

	HRESULT hr = S_OK;

	try
	{
		hr = BuildVirtualNameMaps(spDriverSession);
		if (SUCCEEDED(hr))
		{
			m_strResourceDescriptor = _T("");
			IIviHardwareAssetPtr spHardwareAsset = spDriverSession->HardwareAsset;
			if (spHardwareAsset != NULL)
			{
				_bstr_t bstrResourceDescriptor = spHardwareAsset->IOResourceDescriptor;
				m_strResourceDescriptor = COLE2T(bstrResourceDescriptor);
			}
			m_bCache = spDriverSession->Cache != VARIANT_FALSE;
			m_bInterchangeCheck = spDriverSession->InterchangeCheck != VARIANT_FALSE;
			m_bQueryInstrStatus = spDriverSession->QueryInstrStatus != VARIANT_FALSE;
			m_bRangeCheck = spDriverSession->RangeCheck != VARIANT_FALSE;
			m_bRecordCoercions = spDriverSession->RecordCoercions != VARIANT_FALSE;
			m_bSimulate = spDriverSession->Simulate != VARIANT_FALSE;

			CString strDriverSetup = COLE2T(spDriverSession->DriverSetup);
			hr = ProcessInitOptionStringDriverSetup(strDriverSetup);
		}
	}
	catch (_com_error& e)
	{
		hr = e.Error();
	}

	return hr;
}

inline HRESULT CDriver::LoadConfigurableInitialSettings(IIviDriverSessionPtr spDriverSession)
{
	if (spDriverSession == NULL)
		return ReportInvalidValueError(_T("LoadDriverConfiguration"), _T("spDriverSession"), (long)0);

	HRESULT hr = S_OK;

	try
	{
		IIviStructurePtr spConfigSettings = spDriverSession->DataComponents->Item["Configurable Initial Settings"];
		if (spConfigSettings != NULL)
		{
			hr = LoadConfigurableInitialSettings(spConfigSettings);
		}
	}
	catch (_com_error&)
	{
		// Not really an error => just means no configurable initial settings on driver session
	}

	return hr;
}

inline HRESULT CDriver::LoadConfigurableInitialSettings(IIviSoftwareModulePtr spSoftwareModule)
{
	if (spSoftwareModule == NULL)
		return ReportInvalidValueError(_T("LoadConfigurableInitialSettings"), _T("spSoftwareModule"), (long)0);

	HRESULT hr = S_OK;

	try
	{
		IIviStructurePtr spConfigSettings = spSoftwareModule->DataComponents->Item["Configurable Initial Settings"];
		if (spConfigSettings != NULL)
		{
			hr = LoadConfigurableInitialSettings(spConfigSettings);
		}
	}
	catch (_com_error&)
	{
		// Not really an error => just no configuration initial settings on this software module
	}

	return hr;
}

inline HRESULT CDriver::LoadConfigurableInitialSettings(IIviStructurePtr spConfigSettings)
{
	if (spConfigSettings == NULL)
		return ReportInvalidValueError(_T("LoadConfigurableInitialSettings"), _T("spConfigSettings"), (long)0);

	HRESULT hr = S_OK;

	try
	{
		IIviDataComponentCollectionPtr spDataComponents = spConfigSettings->DataComponents;
		if (spDataComponents != NULL)
		{
			for (int i = 0; i < spDataComponents->Count; i++)
			{
				IIviDataComponentPtr spConfigSetting = spDataComponents->Item[i+1];
				CString strName = COLE2T(spConfigSetting->Name);
				strName.Trim();
				strName.MakeLower();
				CString strType = COLE2T(spConfigSetting->Type);
				if (strType.CompareNoCase(_T("String")) == 0)
				{
					IIviStringPtr spString = spConfigSetting;
					m_mapConfigSettings[strName] = CComVariant(spString->Value.GetBSTR());
				}
				else if (strType.CompareNoCase(_T("Integer")) == 0)
				{
					IIviIntegerPtr spInteger = spConfigSetting;
					m_mapConfigSettings[strName] = CComVariant(spInteger->Value);
				}
				else if (strType.CompareNoCase(_T("Real")) == 0)
				{
					IIviRealPtr spReal = spConfigSetting;
					m_mapConfigSettings[strName] = CComVariant(spReal->Value);
				}
				else if (strType.CompareNoCase(_T("Boolean")) == 0)
				{
					IIviBooleanPtr spBoolean = spConfigSetting;
					m_mapConfigSettings[strName] = CComVariant(spBoolean->Value);
				}
				else if (strType.CompareNoCase(_T("Structure")) == 0)
				{
					// Skip structures
				}
				else if (strType.CompareNoCase(_T("APIReference")) == 0)
				{
					// Skip API references
				}
			}

			hr = ProcessConfigurableInitialSettings();
		}
	}
	catch (_com_error& e)
	{
		hr = e.Error();
	}

	return hr;
}

inline HRESULT CDriver::ProcessConfigurableInitialSettings()
{
	// The only configurable initial setting we currently support automatically is the simulated "model"
	CString strSimulatedModel;
	if (GetConfigSetting(_T("model"), strSimulatedModel))
	{
		m_strModel = strSimulatedModel;
	}

	return S_OK;
}

inline HRESULT CDriver::ProcessInitOptionString(const CString& strOptionStringIn)
{
	HRESULT hr = S_OK;

	m_mapInherentOptions.RemoveAll();

	if (!strOptionStringIn.IsEmpty())
	{
		CString strOptionString = strOptionStringIn;
		CString strOptionStringUpper = strOptionString;
		strOptionStringUpper.MakeUpper();

		// Look for the DriverSetup information
		int nLen = strOptionString.GetLength();
		int nDriverSetupKeyLength = 0;
		int nDriverSetupIndex = strOptionStringUpper.Find(_T("DRIVERSETUP="));
		if (nDriverSetupIndex >= 0)
		{
			nDriverSetupKeyLength = 12;
		}
		else
		{
			// Handle possibility of whitespace after DRIVERSETUP
			nDriverSetupIndex = strOptionStringUpper.Find(_T("DRIVERSETUP "));
			if (nDriverSetupIndex >= 0)
			{
				nDriverSetupKeyLength = 12;
				for (int i = nDriverSetupIndex + 12; i < strOptionStringUpper.GetLength(); i++)
				{
					nDriverSetupKeyLength++;
					if (strOptionStringUpper.GetAt(i) == '=')
						break;
	
					if (!_istspace(strOptionStringUpper.GetAt(i)))
					{
						nDriverSetupKeyLength = 0;
						break;
					}
				}
			}
		}

		if (nDriverSetupKeyLength > 0)
		{
			CString strDriverSetupString = strOptionString.Right(nLen - nDriverSetupIndex - nDriverSetupKeyLength);
			strOptionString = strOptionString.Left(nDriverSetupIndex);
			hr = ProcessInitOptionStringDriverSetup(strDriverSetupString);
		}

		if (SUCCEEDED(hr))
		{
			CAtlMap<CString, CString> mapPairs;
			hr = ParseNameValuePairs(strOptionString, mapPairs);
			if (SUCCEEDED(hr))
			{
				POSITION pos = mapPairs.GetStartPosition();
				while ((pos != NULL) && SUCCEEDED(hr))
				{
					CString strName;
					CString strValue;
					mapPairs.GetNextAssoc(pos, strName, strValue);
					hr = ProcessInitOptionStringInherentAttribute(strName, strValue);
				}
			}
		}
	}

	return hr;
}

inline HRESULT CDriver::ProcessInitOptionStringDriverSetup(const CString& strDriverSetupString)
{
	HRESULT hr = S_OK;

	m_mapDriverSetupOptions.RemoveAll();
	m_strDriverSetup = strDriverSetupString;

	// The AcPwr spec provides that a special NumPhases:# parameter can be used to
	// configure multiphase power sources.  If that expression appears in the driver
	// setup string, normalize "NumPhases:" to "NumPhases=" so that the standard
	// name/value pair parsing is unaffected by the use of : as a name/value delimiter.
	CString strNormalizedDriverSetupString(strDriverSetupString);
	strNormalizedDriverSetupString.Replace(_T("NumPhases:"), _T("NumPhases="));

	// Try to parse out name-value pairs, if they exist
	CAtlMap<CString, CString> mapPairs;
	hr = ParseNameValuePairs(strNormalizedDriverSetupString, mapPairs);
	if (SUCCEEDED(hr))
	{
		POSITION pos = mapPairs.GetStartPosition();
		while ((pos != NULL) && SUCCEEDED(hr))
		{
			CString strName;
			CString strValue;
			mapPairs.GetNextAssoc(pos, strName, strValue);
			hr = ProcessInitOptionStringDriverSetupAttribute(strName, strValue);
		}
	}

	return hr;
}

inline HRESULT CDriver::ProcessInitOptionStringDriverSetupAttribute(const CString& strName, const CString& strValue) 
{
	HRESULT hr = S_OK;

	CString strNameTemp = strName;
	strNameTemp.Trim();
	strNameTemp.MakeLower();

	if (strNameTemp.CompareNoCase(_T("Model")) == 0)
	{
		m_strModel = strValue;
	}
	else if (strNameTemp.CompareNoCase(_T("Trace")) == 0)
	{
		if (strValue.CompareNoCase(_T("true")) == 0 || strValue.CompareNoCase(_T("VI_TRUE")) == 0 || strValue.CompareNoCase(_T("1")) == 0)
		{
			hr = m_pTracer->SetTraceEnabled(true);
		}
		else if (strValue.CompareNoCase(_T("false")) == 0 || strValue.CompareNoCase(_T("VI_FALSE")) == 0 || strValue.CompareNoCase(_T("0")) == 0)
		{
			hr = m_pTracer->SetTraceEnabled(false);
		}
		else
		{
			hr = GetErrorReporter().BadOptionValue(strValue);
		}
	}
	else if (strNameTemp.CompareNoCase(_T("TraceName")) == 0)
	{
		hr = m_pTracer->SetTraceName(strValue);
	}
	else if (strNameTemp.CompareNoCase(_T("TraceSizeMax")) == 0)
	{
		hr = m_pTracer->SetTraceSizeMax(_ttol(strValue));
	}
	else if (strNameTemp.CompareNoCase(_T("TraceArray")) == 0)
	{
		if (strValue.CompareNoCase(_T("true")) == 0 || strValue.CompareNoCase(_T("VI_TRUE")) == 0 || strValue.CompareNoCase(_T("1")) == 0)
		{
			hr = m_pTracer->SetTraceArray(true);
		}
		else if (strValue.CompareNoCase(_T("false")) == 0 || strValue.CompareNoCase(_T("VI_FALSE")) == 0 || strValue.CompareNoCase(_T("0")) == 0)
		{
			hr = m_pTracer->SetTraceArray(false);
		}
		else
		{
			hr = GetErrorReporter().BadOptionValue(strValue);
		}
	}
	else if (strNameTemp.CompareNoCase(_T("TraceArraySizeMax")) == 0)
	{
		hr = m_pTracer->SetTraceArraySizeMax(_ttol(strValue));
	}
	else if (strNameTemp.CompareNoCase(_T("TraceSaveInterval")) == 0)
	{
		hr = m_pTracer->SetTraceSaveInterval(_ttol(strValue));
	}
	else if (strNameTemp.CompareNoCase(_T("TraceTransform")) == 0)
	{	
		hr = m_pTracer->SetTraceTransformPath(CPath(strValue));
	}

	// Add the pair to the option/value map
	m_mapDriverSetupOptions[strNameTemp] = strValue;

	return hr;
}

inline HRESULT CDriver::ParseConfiguration(BSTR bstrResourceDescriptor, BSTR bstrOptionString)
{
	HRESULT hr = S_OK;

	try
	{
		CString strOptionString = COLE2T(bstrOptionString);
		m_strInitOptionString = strOptionString;

		m_strResourceDescriptor.Empty();
		m_strLogicalName.Empty();
		m_mapInherentOptions.RemoveAll();
		m_mapDriverSetupOptions.RemoveAll();
		m_mapConfigSettings.RemoveAll();
		m_mapLowerVirtualNameToPhysicalName.RemoveAll();
		m_mapLowerPhysicalNameToVirtualName.RemoveAll();

		m_bCache = true;				// IVI-defined default value
		m_bInterchangeCheck = false;	// IVI-defined default value
		m_bQueryInstrStatus = false;	// IVI-defined default value
		m_bRangeCheck = true;			// IVI-defined default value
		m_bRecordCoercions = false;		// IVI-defined default value
		m_bSimulate = false;			// IVI-defined default value

		IIviConfigStorePtr spConfigStore;
		hr = NtlLoadConfigStore(spConfigStore);
		if (SUCCEEDED(hr))
		{
			// Lookup the provided resource descriptor to see if it's a logical name
			IIviDriverSessionPtr spDriverSession = NULL;
			hr = NtlLoadDriverSession(spConfigStore, bstrResourceDescriptor, spDriverSession);
			if (SUCCEEDED(hr) && (spDriverSession != NULL))
			{
				// Found the associated driver session
				m_strLogicalName = COLE2T(bstrResourceDescriptor);

				hr = LoadDriverConfiguration(spDriverSession);
				if (SUCCEEDED(hr))
				{
					hr = LoadConfigurableInitialSettings(spDriverSession);
					if (SUCCEEDED(hr))
					{
						// Values in the init option string override any found in the config store
						hr = ProcessInitOptionString(strOptionString);
						if (SUCCEEDED(hr))
						{
							if (spDriverSession->SoftwareModule != NULL)
							{
								hr = BuildPhysicalNameMap(spDriverSession->SoftwareModule);
							}
						}
					}
				}
			}
			else
			{
				// Resource descriptor is not a logical name
				m_strResourceDescriptor = COLE2T(bstrResourceDescriptor);		

				//	Load the config settings from the software module
				IIviSoftwareModulePtr spSoftwareModule = NtlGetSoftwareModule(spConfigStore, LPCTSTR(m_driverInfo.m_strSoftwareModuleName));
				if (spSoftwareModule != NULL)
				{
					hr = LoadConfigurableInitialSettings(spSoftwareModule);
					if (SUCCEEDED(hr))
					{
						// Values in the init option string override any found in the config store
						hr = ProcessInitOptionString(strOptionString);
						if (SUCCEEDED(hr))
						{
							hr = BuildPhysicalNameMap(spSoftwareModule);
						}
					}
				}
				else
				{
					hr = GetErrorReporter().CannotRecover(_T("Software module could not be loaded from the IVI Configuration Store."));
				}
			}
		}
		else
		{
			// Couldn't create the ConfigStore object so parse the driver's configuration 
			// options from the provided option string
			m_strResourceDescriptor = COLE2T(bstrResourceDescriptor);		
			hr = ProcessInitOptionString(strOptionString);
		}

		if (GetSimulate() && m_strModel.IsEmpty())
		{
			// Set the default model since we didn't pick it up from the Software Module or Driver Session
			m_strModel = m_driverInfo.m_strDefaultSimulatedModel;
		}

		// Remember the original values of these options so that they can be restored if IIviDriver::ResetWithDefaults is called
		m_bCacheOriginal = m_bCache;
		m_bInterchangeCheckOriginal = m_bInterchangeCheck;
		m_bQueryInstrStatusOriginal = m_bQueryInstrStatus;
		m_bRangeCheckOriginal = m_bRangeCheck;
		m_bRecordCoercionsOriginal = m_bRecordCoercions;
		m_bSimulateOriginal = m_bSimulate;
	}
	catch (_com_error& e)
	{
		hr = e.Error();
	}

	return hr;
}

inline HRESULT CDriver::ProcessInitOptionStringInherentAttribute(const CString& strName, const CString& strValue) 
{
	if (strName.IsEmpty())
		return ReportInvalidValueError(_T("ProcessInitOption"), _T("strNameIn"), (long)0);

	if (strValue.IsEmpty())
		return ReportInvalidValueError(_T("ProcessInitOption"), _T("strValueIn"), (long)0);

	HRESULT hr = S_OK;

	CString strNameTemp = strName;
	CString strValueTemp = strValue;

	strNameTemp.Trim();
	strValueTemp.Trim();

	strNameTemp.MakeLower();

	if (strNameTemp.CompareNoCase(_T("cache")) == 0)
	{
		if (strValueTemp.CompareNoCase(_T("true")) == 0 || strValue.CompareNoCase(_T("VI_TRUE")) == 0 || strValueTemp.CompareNoCase(_T("1")) == 0)
		{
			m_bCache = true;
		}
		else if (strValueTemp.CompareNoCase(_T("false")) == 0 || strValue.CompareNoCase(_T("VI_FALSE")) == 0 || strValueTemp.CompareNoCase(_T("0")) == 0)
		{
			m_bCache = false;
		}
		else
		{
			hr = GetErrorReporter().BadOptionValue(strValue);
		}
	}
	else if (strNameTemp.CompareNoCase(_T("interchangecheck")) == 0)
	{
		if (strValueTemp.CompareNoCase(_T("true")) == 0 || strValue.CompareNoCase(_T("VI_TRUE")) == 0 || strValueTemp.CompareNoCase(_T("1")) == 0)
		{
			m_bInterchangeCheck = true;
		}
		else if (strValueTemp.CompareNoCase(_T("false")) == 0 || strValue.CompareNoCase(_T("VI_FALSE")) == 0 || strValueTemp.CompareNoCase(_T("0")) == 0)
		{
			m_bInterchangeCheck = false;
		}
		else
		{
			hr = GetErrorReporter().BadOptionValue(strValue);
		}
	}
	else if (strNameTemp.CompareNoCase(_T("queryinstrstatus")) == 0)
	{
		if (strValueTemp.CompareNoCase(_T("true")) == 0 || strValue.CompareNoCase(_T("VI_TRUE")) == 0 || strValueTemp.CompareNoCase(_T("1")) == 0)
		{
			m_bQueryInstrStatus = true;
		}
		else if (strValueTemp.CompareNoCase(_T("false")) == 0 || strValue.CompareNoCase(_T("VI_FALSE")) == 0 || strValueTemp.CompareNoCase(_T("0")) == 0)
		{
			m_bQueryInstrStatus = false;
		}
		else
		{
			hr = GetErrorReporter().BadOptionValue(strValue);
		}
	}
	else if (strNameTemp.CompareNoCase(_T("rangecheck")) == 0)
	{
		if (strValueTemp.CompareNoCase(_T("true")) == 0 || strValue.CompareNoCase(_T("VI_TRUE")) == 0 || strValueTemp.CompareNoCase(_T("1")) == 0)
		{
			m_bRangeCheck = true;
		}
		else if (strValueTemp.CompareNoCase(_T("false")) == 0 || strValue.CompareNoCase(_T("VI_FALSE")) == 0 || strValueTemp.CompareNoCase(_T("0")) == 0)
		{
			m_bRangeCheck = false;
		}
		else
		{
			hr = GetErrorReporter().BadOptionValue(strValue);
		}
	}
	else if (strNameTemp.CompareNoCase(_T("recordcoercions")) == 0)
	{
		if (strValueTemp.CompareNoCase(_T("true")) == 0 || strValue.CompareNoCase(_T("VI_TRUE")) == 0 || strValueTemp.CompareNoCase(_T("1")) == 0)
		{
			m_bRecordCoercions = true;
		}
		else if (strValueTemp.CompareNoCase(_T("false")) == 0 || strValue.CompareNoCase(_T("VI_FALSE")) == 0 || strValueTemp.CompareNoCase(_T("0")) == 0)
		{
			m_bRecordCoercions = false;
		}
		else
		{
			hr = GetErrorReporter().BadOptionValue(strValue);
		}
	}
	else if (strNameTemp.CompareNoCase(_T("simulate")) == 0)
	{
		if (strValueTemp.CompareNoCase(_T("true")) == 0 || strValue.CompareNoCase(_T("VI_TRUE")) == 0 || strValueTemp.CompareNoCase(_T("1")) == 0)
		{
			m_bSimulate = true;
		}
		else if (strValueTemp.CompareNoCase(_T("false")) == 0 || strValue.CompareNoCase(_T("VI_FALSE")) == 0 || strValueTemp.CompareNoCase(_T("0")) == 0)
		{
			m_bSimulate = false;
		}
		else
		{
			hr = GetErrorReporter().BadOptionValue(strValue);
		}
	}

	if (SUCCEEDED(hr))
	{
		// Add the pair to the option/value map
		m_mapInherentOptions[strNameTemp] = strValueTemp;
	}

	return hr;
}

inline STDMETHODIMP CDriver::Close() 
{
	if (!GetInitialized())
		return GetErrorReporter().NotInitialized();

	HRESULT hr = S_OK;

	hr = m_pTracer->Close();
	ATLASSERT(SUCCEEDED(hr));

	hr = CloseIO();

	// It's important to delete all cache entries when closing, else there
	// will be an error if we try and re-initialize the same driver instance.
	DestroyAllCacheEntries();

	m_bInitialized = false;

	hr = InternalFinalClose();

	return hr;
}

inline HRESULT CDriver::PollInstrumentErrors()
{
	HRESULT hr = S_OK;

	if (GetQueryInstrStatus())
	{
		hr = GetIo().WriteStringNoPoll(_T("*ESR?"));
		if (SUCCEEDED(hr))
		{
			CString strResp;
			hr = GetIo().ReadStringNoPoll(strResp);
			if (SUCCEEDED(hr))
			{
				long lValue = _ttol(strResp);

				if ((lValue & 4) != 0 || (lValue & 8) != 0 || (lValue & 16) != 0 || (lValue & 32) != 0)
				{
					hr = E_FAIL;
				}
			}
			else
			{
				GetIo().Clear();
			}
		}
		else
		{
			GetIo().Clear();
		}

		if (FAILED(hr))
		{
			hr = GetErrorReporter().InstrumentStatus();
		}
	}

	return hr;
}


///////////////////////////////////////////////////////////////////////////////
// IEnumFormatter

inline HRESULT CDriver::EnumToStringEx(const CString& strEnumName, long lVal, CString& strVal)
{
	HRESULT hr = S_OK;

	const IEnumCommandConverter* pConverter = GetEnumCommandConverter(strEnumName, GetCurrentContext()->GetMethodIdentifier());
	ATLASSERT(pConverter != NULL);
	if (pConverter == NULL)
	{
		CString strErr;
		strErr.Format(_T("Unrecognized enum name '%s'."), strEnumName);
		hr = GetErrorReporter().CannotRecover(strErr);
	}
	else
	{
		if (!pConverter->ValueToString(GetModel(), lVal, strVal))
		{
			hr = GetErrorReporter().InvalidValue(_T("nVal"), lVal);
		}
	}

	return hr;
}

inline HRESULT CDriver::EnumFromStringEx(const CString& strEnumName, const CString& strVal, long& lVal)
{
	HRESULT hr = S_OK;

	const IEnumCommandConverter* pConverter = GetEnumCommandConverter(strEnumName, GetCurrentContext()->GetMethodIdentifier());
	ATLASSERT(pConverter != NULL);
	if (pConverter == NULL)
	{
		CString strErr;
		strErr.Format(_T("Unrecognized enum name '%s'."), strEnumName);
		hr = GetErrorReporter().CannotRecover(strErr);
	}
	else
	{
		if (!pConverter->ValueFromString(GetModel(), strVal, lVal))
		{
			CString strErr;
			strErr.Format(_T("Unexpected value '%s' for enum '%s'."), strVal, strEnumName);
			hr = GetErrorReporter().UnexpectedResponse(strErr);
		}
	}

	return hr;
}

inline long CDriver::GetMaxStringLength(const CString& strEnumName)
{
	long lMaxLen = 0;
	const IEnumCommandConverter* pConverter = GetEnumCommandConverter(strEnumName, GetCurrentContext()->GetMethodIdentifier());
	if (pConverter != NULL)
	{
		lMaxLen = max(lMaxLen, pConverter->GetMaxStringLength());
	}

	return lMaxLen;
}

inline HRESULT CDriver::InitializeIdentification()
{
	if (m_bSimulate)
		return S_OK;

	CString strID;
	HRESULT hr = GetIo().QueryString(_T("*IDN?"), strID);
	if (SUCCEEDED(hr))
	{
		CString strIdentification = strID;
		CString strManufacturer;
		CString strModel;
		CString strSerialNumber;
		CString strFirmwareRevision;

		CString strToken;
		int curPos = 0;
		strManufacturer = strID.Tokenize(_T(","), curPos).Trim();
		if (curPos >= 0)
		{
			strModel = strID.Tokenize(_T(","), curPos).Trim();
		}

		if (curPos >= 0)
		{
			strSerialNumber = strID.Tokenize(_T(","), curPos).Trim();
		}

		if (curPos >= 0)
		{
			strFirmwareRevision = strID.Tokenize(_T(","), curPos).Trim();
		}

		SetIdentificationInfo(strIdentification, strManufacturer, strModel, strSerialNumber, strFirmwareRevision);
	}
	
	return hr;
}

inline STDMETHODIMP CDriver::get_Initialized(VARIANT_BOOL* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_Initialized"), _T("val"));

	*val = m_bInitialized ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

// IIviDriverUtility
inline STDMETHODIMP CDriver::Disable()
{
	HRESULT hr = S_OK;

	if (!GetSimulate())
	{
		// *OPC? is sent to make sure that we hold off
		// until the reset has completed. This is needed
		// when communicating using serial bus.
		long lResult = 0;
		hr = GetIo().QueryNumber(_T("*RST;*OPC?"), &lResult, true, m_driverInfo.m_lDisableTimeout);
	}

	return hr;
}

inline STDMETHODIMP CDriver::ErrorQuery(long* ErrorCode, BSTR* ErrorMessage)
{
	if (ErrorMessage == NULL)
		return GetErrorReporter().NullPointer(_T("ErrorQuery"), _T("ErrorMessage"));
	if ((*ErrorMessage) != NULL)
		::SysFreeString(*ErrorMessage);
	*ErrorMessage = NULL;

	if (ErrorCode == NULL)
		return GetErrorReporter().NullPointer(_T("ErrorQuery"), _T("ErrorCode"));
	*ErrorCode = 0;

	HRESULT hr = S_OK;

	if (!GetSimulate())
	{
		bool bQueryInstrStatus = m_bQueryInstrStatus;
		m_bQueryInstrStatus = false;

		CString strResp;
		hr = GetIo().Queryf(_T(":SYST:ERR?"), _T("%d,%$Ct"), ErrorCode, &strResp);
		if (SUCCEEDED(hr))
		{
			*ErrorMessage = strResp.Trim().Trim('"').Trim().AllocSysString();
		}
		else
		{
			hr = GetErrorReporter().UnexpectedResponse();
		}

		m_bQueryInstrStatus = bQueryInstrStatus;
	}
	else
	{
		*ErrorCode = 0;
		*ErrorMessage = CComBSTR("No error.").Detach();
	}

	return hr;
}

inline STDMETHODIMP CDriver::LockObject()
{
	// This function shall return the Function Not Supported error when the 
	// user calls this function. (IVI 3.2 section 6.16)
	return GetErrorReporter().MethodNotSupported(_T("LockObject"));
}

inline STDMETHODIMP CDriver::Reset()
{
	HRESULT hr = S_OK;

	if (!GetSimulate())
	{
		// *OPC? is sent to make sure that we hold off
		// until the reset has completed. This is needed
		// when communicating using serial bus.
		long lResult = 0;
		hr = GetIo().QueryNumber(_T("*RST;*OPC?"), &lResult, true, m_driverInfo.m_lResetTimeout);
	}

	InternalResetObjectState();

	InvalidateCacheAll();

	return hr;
}

inline STDMETHODIMP CDriver::ResetWithDefaults()
{
	HRESULT hr = S_OK;

	if (!GetSimulate())
	{
		// *OPC? is sent to make sure that we hold off
		// until the reset has completed. This is needed
		// when communicating using serial bus.
		long lResult = 0;
		hr = GetIo().QueryNumber(_T("*RST;*OPC?"), &lResult, true, m_driverInfo.m_lResetTimeout);
	}

	InternalResetObjectState();

	InvalidateCacheAll();

	if (SUCCEEDED(hr))
	{
		hr = ResetDefaults();
	}

	return hr;
}

inline STDMETHODIMP CDriver::SelfTest(long* TestResult, BSTR* TestMessage)
{
	if (TestMessage == NULL)
		return GetErrorReporter().NullPointer(_T("SelfTest"), _T("TestResult"));
	if ((*TestMessage) != NULL)
		::SysFreeString(*TestMessage);
	*TestMessage = NULL;
	
	if (TestResult == NULL)
		return GetErrorReporter().NullPointer(_T("SelfTest"), _T("TestMessage"));
	*TestResult = 0;
	
	HRESULT hr = S_OK;

	if (!GetSimulate())
	{
		hr = GetIo().QueryNumber(_T("*TST?"), TestResult, true, m_driverInfo.m_lSelfTestTimeout);
		if (SUCCEEDED(hr))
		{
			if (*TestResult == 0)
			{
				*TestMessage = ::SysAllocString(OLESTR("Selftest passed"));
			}
			else
			{
				*TestMessage = ::SysAllocString(OLESTR("Selftest failed"));
			}
		}
	}
	else
	{
		*TestResult = 0;
		*TestMessage = CComBSTR("Selftest passed").Detach();
	}

	return hr;
}

inline STDMETHODIMP CDriver::UnlockObject()
{
	// This function shall return the Function Not Supported error when the 
	// user calls this function. (IVI 3.2 section 6.23)
	return GetErrorReporter().MethodNotSupported(_T("UnlockObject"));
}

// IIviComponentIdentity
inline STDMETHODIMP CDriver::get_Description(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_Description"), _T("val"));
	*val = NULL;

#ifdef _WIN64
	// For 64-bit build, we need to append some hard coded text as specified in IVI 3.2
	CString strFullDescription = m_driverInfo.m_strDriverDescription + _T(" [Compiled for 64-bit.]");
	*val = strFullDescription.AllocSysString();
#else
	*val = m_driverInfo.m_strDriverDescription.AllocSysString();
#endif

	return S_OK;
}

inline STDMETHODIMP CDriver::get_Revision(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_Revision"), _T("val"));
	*val = NULL;

	*val = m_driverInfo.m_strDriverRevision.AllocSysString();

	return S_OK;
}

inline STDMETHODIMP CDriver::get_Vendor(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_Vendor"), _T("val"));
	*val = NULL;

	*val = m_driverInfo.m_strDriverVendor.AllocSysString();

	return S_OK;
}

// IIviDriverIdentity
inline STDMETHODIMP CDriver::get_GroupCapabilities(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_GroupCapabilities"), _T("val"));
	*val = NULL;

	*val = m_driverInfo.m_strGroupCapabilities.AllocSysString();

	return S_OK;
}

inline STDMETHODIMP CDriver::get_Identifier(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_Identifier"), _T("val"));
	*val = NULL;

	*val = m_driverInfo.m_strDriverIdentifier.AllocSysString();

	return S_OK;
}

inline STDMETHODIMP CDriver::get_InstrumentFirmwareRevision(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_InstrumentFirmwareRevision"), _T("val"));
	*val = NULL;

	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		// When simulating, the instrument firmware revision is the driver revision
		CString strFirmwareRevision =  CString(_T("Sim")) + m_driverInfo.m_strDriverRevision;
		*val = strFirmwareRevision.AllocSysString();
	}
	else
	{
		*val = m_strFirmwareRevision.AllocSysString();
	}

	return hr;
}

inline STDMETHODIMP CDriver::get_InstrumentManufacturer(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_InstrumentManufacturer"), _T("val"));
	*val = NULL;

	HRESULT hr = S_OK;

	if (GetSimulate())
	{
		// When simulating, the instrument manufacturer is the driver vendor
		*val = m_driverInfo.m_strDriverVendor.AllocSysString();
	}
	else
	{
		*val = m_strManufacturer.AllocSysString();
	}

	return hr;
}

inline STDMETHODIMP CDriver::get_InstrumentModel(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_InstrumentModel"), _T("val"));
	*val = NULL;

	HRESULT hr = S_OK;

	*val = m_strModel.AllocSysString();

	return hr;
}

inline STDMETHODIMP CDriver::get_SpecificationMajorVersion(long* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_SpecificationMajorVersion"), _T("val"));
	*val = 0;

	*val = m_driverInfo.m_lSpecificationMajorVersion;

	return S_OK;
}

inline STDMETHODIMP CDriver::get_SpecificationMinorVersion(long* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_SpecificationMinorVersion"), _T("val"));
	*val = 0;

	*val = m_driverInfo.m_lSpecificationMinorVersion;

	return S_OK;
}

inline STDMETHODIMP CDriver::get_SupportedInstrumentModels(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_SupportedInstrumentModels"), _T("val"));
	*val = NULL;

	// Returns a comma-separated list of names of instrument models with which the 
	// IVI specific driver is compatible. The string has no white space except 
	// possibly embedded in the instrument model names. (IVI 3.2 section 5.34)
	*val = m_driverInfo.m_strSupportedModels.AllocSysString();

	return S_OK;
}

// IIviDriverOperation
inline STDMETHODIMP CDriver::get_LogicalName(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_LogicalName"), _T("val"));

	*val = ::SysAllocString(CT2OLE(m_strLogicalName));

	return S_OK;
}

inline STDMETHODIMP CDriver::get_IoResourceDescriptor(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_IoResourceDescriptor"), _T("val"));

	*val = ::SysAllocString(CT2OLE(m_strResourceDescriptor));

	return S_OK;
}

inline STDMETHODIMP CDriver::get_Cache(VARIANT_BOOL* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_Cache"), _T("val"));

	*val = m_bCache ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

inline STDMETHODIMP CDriver::put_Cache(VARIANT_BOOL val)
{
	m_bCache = (val != VARIANT_FALSE);

	if (val == VARIANT_FALSE)
	{
		InvalidateAllAttributes();
	}

	return S_OK;
}

inline STDMETHODIMP CDriver::get_InterchangeCheck(VARIANT_BOOL* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_InterchangeCheck"), _T("val"));

	*val = m_bInterchangeCheck ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

inline STDMETHODIMP CDriver::put_InterchangeCheck(VARIANT_BOOL val)
{
	if ((val != VARIANT_FALSE) && !m_driverInfo.m_bInterchangeCheckSupported)
		return GetErrorReporter().ValueNotSupported(_T("VARIANT_TRUE"), _T("val"), _T("put_InterchangeCheck"));

	m_bInterchangeCheck = (val != VARIANT_FALSE);

	return S_OK;
}

inline STDMETHODIMP CDriver::get_QueryInstrumentStatus(VARIANT_BOOL* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_QueryInstrumentStatus"), _T("val"));

	*val = m_bQueryInstrStatus ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

inline STDMETHODIMP CDriver::put_QueryInstrumentStatus(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	m_bQueryInstrStatus = (val != VARIANT_FALSE);

	if (m_bQueryInstrStatus)
	{
		if (!GetSimulate())
		{
			// Clear any old errors that may be in the queue.
			// We do this to prevent the next driver method/property to
			// from finding errors in the error queue that could have been
			// generated by previous methods/properties when QueryInstrStatus was off.
			hr = ClearIOStatus();
		}
	}

	return hr;
}

inline STDMETHODIMP CDriver::get_RangeCheck(VARIANT_BOOL* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_RangeCheck"), _T("val"));

	*val = m_bRangeCheck ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

inline STDMETHODIMP CDriver::put_RangeCheck(VARIANT_BOOL val)
{
	m_bRangeCheck = (val != VARIANT_FALSE);

	return S_OK;
}

inline STDMETHODIMP CDriver::get_RecordCoercions(VARIANT_BOOL* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_RecordCoercions"), _T("val"));

	*val = m_bRecordCoercions ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

inline STDMETHODIMP CDriver::put_RecordCoercions(VARIANT_BOOL val)
{
	m_bRecordCoercions = (val != VARIANT_FALSE);

	return S_OK;
}

inline STDMETHODIMP CDriver::get_Simulate(VARIANT_BOOL* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_Simulate"), _T("val"));

	*val = m_bSimulate ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

inline STDMETHODIMP CDriver::put_Simulate(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	// If the IVI specific driver is initialized with Simulate set to True, the 
	// specific driver shall return the Cannot Change Simulation State error if 
	// the user attempts to set Simulate to False prior to calling the Close 
	// function. (IVI 3.2)
	if (m_bSimulateOriginal && (val == VARIANT_FALSE))
		return GetErrorReporter().CannotChangeSimulateState();
	
	m_bSimulate = (val != VARIANT_FALSE);

	return hr;
}

inline STDMETHODIMP CDriver::get_DriverSetup(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_DriverSetup"), _T("val"));
	*val = NULL;

	HRESULT hr = S_OK;

	*val = ::SysAllocString(CT2OLE(m_strDriverSetup));

	return hr;
}

inline STDMETHODIMP CDriver::InvalidateAllAttributes()
{
	HRESULT hr = S_OK;

	InvalidateCacheAll();

	return hr;
}

inline STDMETHODIMP CDriver::ClearInterchangeWarnings()
{
	return GetErrorReporter().MethodNotSupported(_T("ClearInterchangeWarnings"));
}

inline STDMETHODIMP CDriver::GetNextInterchangeWarning(BSTR* pbstrWarning)
{
	if (pbstrWarning == NULL)
		return GetErrorReporter().NullPointer(_T("GetNextInterchangeWarning"), _T("pbstrWarning"));
	*pbstrWarning = NULL;

	return GetErrorReporter().MethodNotSupported(_T("GetNextInterchangeWarning"));
}

inline STDMETHODIMP CDriver::ResetInterchangeCheck()
{
	return GetErrorReporter().MethodNotSupported(_T("ResetInterchangeCheck"));
}

inline STDMETHODIMP CDriver::GetNextCoercionRecord(BSTR* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("GetNextCoercionRecord"), _T("val"));
	*val = NULL;

	if (GetRecordCoercions())
	{
		*val = ::SysAllocString(CT2OLE(GetCoercionLog()->GetNextRecordAndRemove()));
	}
	else
	{
		*val = CComBSTR("").Detach();
	}

	return S_OK;
}

// IIviClassWrapper
inline STDMETHODIMP CDriver::AttachToExistingCSession(long Vi)
{
	NTL_UNUSED(Vi);

	HRESULT hr = S_OK;

	hr = GetErrorReporter().MethodNotSupported(_T("AttachToExistingCSession"));

	return hr;
}

inline STDMETHODIMP CDriver::get_NativeCHandle(long* val)
{
	if (val == NULL)
		return GetErrorReporter().NullPointer(_T("get_NativeCHandle"), _T("val"));
	*val = 0;

	HRESULT hr = S_OK;

	hr = GetErrorReporter().PropertyNotSupported(_T("get_NativeCHandle"));

	return hr;
}


inline HRESULT CDriver::LoadDriverResourceString(UINT nID, BSTR* pbstr)
{
	if (pbstr == NULL)
		return GetErrorReporter().NullPointer(_T("LoadDriverResourceString"), _T("pbstr"));
	*pbstr = NULL;

	HRESULT hr = ::LoadDriverResourceString(nID, pbstr);

	return hr;
}

inline HRESULT CDriver::ResetDefaults()
{
	HRESULT hr = S_OK;

	if (SUCCEEDED(hr))
	{
		hr = CComQIPtr<IIviDriverOperation>(static_cast<CNode*>(this))->put_Cache(m_bCacheOriginal ? VARIANT_TRUE : VARIANT_FALSE);
	}

	if (SUCCEEDED(hr))
	{
		hr = CComQIPtr<IIviDriverOperation>(static_cast<CNode*>(this))->put_InterchangeCheck(m_bInterchangeCheckOriginal ? VARIANT_TRUE : VARIANT_FALSE);
	}

	if (SUCCEEDED(hr))
	{
		hr = CComQIPtr<IIviDriverOperation>(static_cast<CNode*>(this))->put_QueryInstrumentStatus(m_bQueryInstrStatusOriginal ? VARIANT_TRUE : VARIANT_FALSE);
	}

	if (SUCCEEDED(hr))
	{
		hr = CComQIPtr<IIviDriverOperation>(static_cast<CNode*>(this))->put_RangeCheck(m_bRangeCheckOriginal ? VARIANT_TRUE : VARIANT_FALSE);
	}

	if (SUCCEEDED(hr))
	{
		hr = CComQIPtr<IIviDriverOperation>(static_cast<CNode*>(this))->put_RecordCoercions(m_bRecordCoercionsOriginal ? VARIANT_TRUE : VARIANT_FALSE);
	}

	if (SUCCEEDED(hr))
	{
		hr = CComQIPtr<IIviDriverOperation>(static_cast<CNode*>(this))->put_Simulate(m_bSimulateOriginal ? VARIANT_TRUE : VARIANT_FALSE);
	}

	return hr;
}

inline void CDriver::SetIdentificationInfo(
	const CString& strIdentification, 
	const CString& strManufacturer,
	const CString& strModel,
	const CString& strSerialNumber,
	const CString& strFirmwareRevision) 
{ 
	m_strIdentification = strIdentification;
	m_strManufacturer = strManufacturer;
	m_strModel = strModel;
	m_strSerialNumber = strSerialNumber;
	m_strFirmwareRevision = strFirmwareRevision;
}

inline CDriverInfo& CDriver::GetDriverInfo()
{
	return m_driverInfo;
}

inline CString CDriver::GetInherentOptionValue(const CString& strName) const
{
	CString strOptionName = strName;
	strOptionName.MakeLower();

	CString strValue;
	m_mapInherentOptions.Lookup(strOptionName, strValue);
	
	return strValue;
}

inline CString CDriver::GetDriverSetupOptionValue(const CString& strName) const
{
	CString strOptionName = strName;
	strOptionName.MakeLower();

	CString strValue;
	m_mapDriverSetupOptions.Lookup(strOptionName, strValue);
	
	return strValue;
}

inline bool CDriver::GetConfigSetting(const CString& strName, CComVariant& varValue) const
{
	CString strLowerName = strName;
	strLowerName.MakeLower();

	bool bFound = m_mapConfigSettings.Lookup(strLowerName, varValue);

	return bFound;
}

inline bool CDriver::GetConfigSetting(const CString& strName, CString& strValue) const
{
	CComVariant varValue;
	bool bFound = GetConfigSetting(strName, varValue);
	if (bFound)
	{
		bFound = varValue.vt == VT_BSTR;
		if (bFound)
		{
			strValue = COLE2T(varValue.bstrVal);
		}
	}

	return bFound;
}

inline bool CDriver::GetConfigSetting(const CString& strName, int& nValue) const
{
	CComVariant varValue;
	bool bFound = GetConfigSetting(strName, varValue);
	if (bFound)
	{
		bFound = varValue.ChangeType(VT_I4) == S_OK;
		if (bFound)
		{
			nValue = varValue.intVal;
		}
	}

	return bFound;
}

inline bool CDriver::GetConfigSetting(const CString& strName, double& dblValue) const
{
	CComVariant varValue;
	bool bFound = GetConfigSetting(strName, varValue);
	if (bFound)
	{
		bFound = varValue.ChangeType(VT_R8) == S_OK;
		if (bFound)
		{
			dblValue = varValue.dblVal;
		}
	}

	return bFound;
}

inline bool  CDriver::GetConfigSetting(const CString& strName, bool& bValue) const
{
	CComVariant varValue;
	bool bFound = GetConfigSetting(strName, varValue);
	if (bFound)
	{
		bFound = varValue.ChangeType(VT_BOOL) == S_OK;
		if (bFound)
		{
			bValue = varValue.boolVal != VARIANT_FALSE;
		}
	}

	return bFound;
}

inline HRESULT CDriver::BuildVirtualNameMaps(IIviDriverSessionPtr& spDriverSession)
{
	HRESULT hr = S_OK;

	try
	{
		m_mapLowerVirtualNameToPhysicalName.RemoveAll();
		m_mapLowerPhysicalNameToVirtualName.RemoveAll();

		IIviVirtualNameCollectionPtr spVirtualNames = spDriverSession->VirtualNames;
		for (long nVirtualName = 0; nVirtualName < spVirtualNames->Count; nVirtualName++)
		{
			IIviVirtualNamePtr spVirtualName = spVirtualNames->GetItem(nVirtualName + 1);
			_bstr_t bstrVirtualName = spVirtualName->Name;
			_bstr_t bstrMapTo = spVirtualName->MapTo;
			IIviVirtualRangeCollectionPtr spVirtualRanges = spVirtualName->VirtualRanges;
			if (spVirtualRanges->Count == 0)
			{
				CString strVirtualName = COLE2T(bstrVirtualName);
				CString strVirtualNameLower = strVirtualName;
				strVirtualNameLower.MakeLower();

				CString strPhysicalName = COLE2T(bstrMapTo);
				CString strPhysicalNameLower = strPhysicalName;
				strPhysicalNameLower.MakeLower();

				m_mapLowerVirtualNameToPhysicalName[strVirtualNameLower] = strPhysicalName;
				m_mapLowerPhysicalNameToVirtualName[strPhysicalNameLower] = strVirtualName;
			}
			else
			{
				for (long nVirtualRange = 0; nVirtualRange < spVirtualRanges->Count; nVirtualRange++)
				{
					IIviVirtualRangePtr spVirtualRange = spVirtualRanges->GetItem(nVirtualRange + 1);
					for (long nVirtualRangeVal = spVirtualRange->Min; nVirtualRangeVal <= spVirtualRange->Max; nVirtualRangeVal++)
					{
						CString strVirtualName;
						strVirtualName.Format(_T("%s%d"), COLE2T(bstrVirtualName), nVirtualRangeVal);
						CString strVirtualNameLower = strVirtualName;
						strVirtualNameLower.MakeLower();

						CString strPhysicalName;
						strPhysicalName.Format(_T("%s%d"), COLE2T(bstrMapTo), nVirtualRangeVal + spVirtualRange->StartingPhysicalIndex - spVirtualRange->Min);
						CString strPhysicalNameLower = strPhysicalName;
						strPhysicalNameLower.MakeLower();

						m_mapLowerVirtualNameToPhysicalName[strVirtualNameLower] = strPhysicalName;
						m_mapLowerPhysicalNameToVirtualName[strPhysicalNameLower] = strVirtualName;
					}
				}
			}
		}
	}
	catch (_com_error& e)
	{
		hr = e.Error();
	}

	return hr;
}

inline HRESULT CDriver::BuildPhysicalNameMap(IIviSoftwareModulePtr& spSoftwareModule)
{
	HRESULT hr = S_OK;

	try
	{
		IIviPhysicalNameCollectionPtr spPhysicalNames = spSoftwareModule->PhysicalNames;
		for (long nPhysicalName = 0; nPhysicalName < spPhysicalNames->Count; nPhysicalName++)
		{
			IIviPhysicalNamePtr spPhysicalName = spPhysicalNames->GetItem(_variant_t(nPhysicalName + 1));

			CString strPhysicalName = COLE2T(spPhysicalName->Name);
			CString strRCName = COLE2T(spPhysicalName->RCName);

			m_mapPhysicalNameToRepCapName[strPhysicalName] = strRCName;
		}
	}
	catch (_com_error& e)
	{
		hr = e.Error();
	}

	return hr;
}

inline CString CDriver::TranslateVirtualName(const CString& strVirtualName) const
{
	CString strName = strVirtualName;
	strName.MakeLower();

	CString strPhysicalName;
	if (!m_mapLowerVirtualNameToPhysicalName.Lookup(strName, strPhysicalName))
	{
		// Virtual name not found, so we assume this is a physical name
		strPhysicalName = strVirtualName;
	}

	int iQualifiedNameSeparatorIndex = strPhysicalName.Find(_T("!!"));
	if (iQualifiedNameSeparatorIndex >= 0)
	{
		// It's a physical name qualified by the repcap name
		// Only return the unqualified physical name
		strPhysicalName = strPhysicalName.Right(strPhysicalName.GetLength() - iQualifiedNameSeparatorIndex - 2);
	}

	return strPhysicalName;
}

inline CString CDriver::TranslatePhysicalName(const CString& strPhysicalName) const
{
	CString strName = strPhysicalName;
	strName.MakeLower();

	CString strVirtualName;
	if (!m_mapLowerPhysicalNameToVirtualName.Lookup(strName, strVirtualName))
	{
		// Physical name not found, so virtual name is the same as the physical name
		strVirtualName = strPhysicalName;
	}

	return strVirtualName;
}

inline CString CDriver::TranslatePhysicalNameToExportedPhysicalName(const CString& strRepCapName, const CString& strPhysicalName) const
{
	CString strExportedPhysicalName;

	// Determine if the driver exports the physical name as a qualified name or unqualified name
	CString strMappedRepCapName;
	CString strQualifiedName = strRepCapName + _T("!!") + strPhysicalName;
	if (m_mapPhysicalNameToRepCapName.Lookup(strQualifiedName, strMappedRepCapName))
	{
		strExportedPhysicalName = strQualifiedName;
	}
	else
	{
		strExportedPhysicalName =  strPhysicalName;
	}

	return strExportedPhysicalName;
}

inline bool CDriver::GetInitialized() const
{
	return m_bInitialized;
}

inline bool CDriver::GetCache() const
{
	return m_bCache;
}

inline bool CDriver::GetInterchangeCheck() const
{
	return m_bInterchangeCheck;
}

inline bool CDriver::GetQueryInstrStatus() const
{
	return m_bQueryInstrStatus;
}

inline void CDriver::SetQueryInstrStatus(bool val)
{
	m_bQueryInstrStatus = val;
}

inline bool CDriver::GetRangeCheck() const
{
	return m_bRangeCheck;
}

inline bool CDriver::GetRecordCoercions() const
{
	return m_bRecordCoercions;
}

inline bool CDriver::GetSimulate() const
{
	return m_bSimulate;
}

inline bool CDriver::GetReset() const
{
	return m_bReset;
}

inline bool CDriver::GetIdQuery() const
{
	return m_bIdQuery;
}

inline CString CDriver::GetModel() const
{
	CString strModel;
	if (GetInitialized())
	{
		strModel = m_strModel;
	}

	return strModel;
}

inline CString CDriver::GetSerialNumber() const
{
	return m_strSerialNumber;
}

inline CString CDriver::GetResourceDescriptor() const
{
	return m_strResourceDescriptor;
}

inline const CDriver* CDriver::GetDriver() const
{
	return this;
}

inline CDriver* CDriver::GetDriver()
{
	return this;
}

inline CCoercionLog* CDriver::GetCoercionLog() const
{
	return m_pCoercionLog;
}

inline CTracer* CDriver::GetTracer() const
{
	return m_pTracer;
}

inline const CCallContext* CDriver::GetCurrentContext() const
{
	CCallContextLock lock(const_cast<CComAutoCriticalSection&>(m_csCallContext));
	return m_rgpCallContext.GetHead();
}

inline HRESULT CDriver::InitializeTracer()
{
	HRESULT hr = S_OK;

	CString strDriverIdentifier;
	CComBSTR bstrDriverIdentifier;
	hr = get_Identifier(&bstrDriverIdentifier);
	if (SUCCEEDED(hr))
	{
		strDriverIdentifier = COLE2T(bstrDriverIdentifier);
		hr = m_pTracer->SetDriverIdentifier(strDriverIdentifier);
		if (SUCCEEDED(hr))
		{
			hr = m_pTracer->InitializeListeners();
			if (SUCCEEDED(hr))
			{
				if (m_pTracer->GetTraceEnabled())
				{
					hr = m_pTracer->StartTrace();
				}
			}
		}
	}

	return hr;
}

inline HRESULT CDriver::SetTraceEnabled(VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	if (val != VARIANT_FALSE)
	{
		// Setting it to on:
		// If it's already enabled, set the trace state to Running
		// If it's not enabled, call m_pTracer->SetTraceEnabled, and then StartTrace
		if (m_pTracer->GetTraceEnabled())
		{
			if (m_pTracer->GetTraceState() != TraceStateDataFull)
			{
				m_pTracer->SetTraceState(TraceStateRunning);
			}
		}
		else
		{
			hr = m_pTracer->SetTraceEnabled(true);
			if (SUCCEEDED(hr))
			{
				hr = m_pTracer->StartTrace();
			}
		}
	}
	else
	{
		// Setting it to off:
		// If it's already enabled, set the trace state to Stopped
		// If it's not enabled, nothing to do
		if (m_pTracer->GetTraceOn())
		{
			m_pTracer->SetTraceState(TraceStateStopped);
		}
		else
		{
			// Nothing to do
		}
	}

	return hr;
}

inline HRESULT CDriver::GetTraceEnabled(VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	*val = m_pTracer->GetTraceOn() ? VARIANT_TRUE : VARIANT_FALSE;
	
	return hr;
}

inline void CDriver::PushCallContext(const CCallContext* pCallContext)
{
	CCallContextLock lock(m_csCallContext);
	m_rgpCallContext.AddHead(pCallContext);
}

inline void CDriver::PopCallContextNoReturn()
{
	CCallContextLock lock(m_csCallContext);
	m_rgpCallContext.RemoveHeadNoReturn();
}

inline const CCallContext* CDriver::PopCallContext()
{
	CCallContextLock lock(m_csCallContext);
	return m_rgpCallContext.RemoveHead();
}
