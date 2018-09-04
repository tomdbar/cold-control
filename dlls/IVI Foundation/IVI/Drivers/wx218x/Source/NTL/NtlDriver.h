/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <stdarg.h>
#include <atlstr.h>
#include <atlcoll.h>
#include <atltrace.h>
#include <atlpath.h>

///////////////////////////////////////////////////////////////////////////////
//
//	Functions defined in driver
//

CLSID GetDriverCLSID();


///////////////////////////////////////////////////////////////
//
//   CDriverInfo
//

class CDriverInfo
{
public:
	CDriverInfo()
		: m_lDisableTimeout(30000), m_lResetTimeout(30000), m_lSelfTestTimeout(30000)
	{}
	~CDriverInfo() {}

public:
	CString m_strSoftwareModuleName;
	CString m_strDriverIdentifier;
	CString m_strDriverVendor;
	CString m_strDriverDescription;
	CString m_strDriverRevision;
	CString m_strGroupCapabilities;
	CString m_strSupportedModels;
	CString m_strDefaultSimulatedModel;
	long m_lSpecificationMinorVersion;
	long m_lSpecificationMajorVersion;
	bool m_bInterchangeCheckSupported;
	bool m_bResetSupported;
	bool m_bSelfTestSupported;
	bool m_bRevisionQuerySupported;
	bool m_bIdQuerySupported;
	long m_lSelfTestTimeout;
	long m_lDisableTimeout;
	long m_lResetTimeout;
	long m_lCoercionLogSize;
};

///////////////////////////////////////////////////////////////////////////////
//
//	CDriver
//

class CDriver :
	public CNode,
	public IEnumFormatter
{
protected:
	CDriver();
	~CDriver();

protected:
	// CNode overrides
	virtual HRESULT InternalFinalConstruct();
	virtual void InternalFinalRelease();

	HRESULT InternalFinalInitialize();
	HRESULT InternalFinalClose();

protected:
	virtual HRESULT OnFinalConstruct() abstract;			// Implemented in user code
	virtual void OnFinalRelease() abstract;					// Implemented in user code

protected:
	// IIviDriver methods
	STDMETHOD(Close)();
	STDMETHOD(Initialize)(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString);
    STDMETHOD(get_Initialized)(VARIANT_BOOL *val);

	// IIviDriverUtility methods
	STDMETHOD(Disable)();
	STDMETHOD(ErrorQuery)(long* ErrorCode, BSTR* ErrorMessage);
	STDMETHOD(LockObject)();
	STDMETHOD(Reset)();
	STDMETHOD(ResetWithDefaults)();
	STDMETHOD(SelfTest)(long* TestResult, BSTR* TestMessage);
	STDMETHOD(UnlockObject)();

	// IIviComponentIdentity
	STDMETHOD(get_Description)(BSTR *val);
	STDMETHOD(get_Revision)(BSTR *val);
	STDMETHOD(get_Vendor)(BSTR *val);

	// IIviDriverIdentity
	STDMETHOD(get_GroupCapabilities)(BSTR *val);
	STDMETHOD(get_Identifier)(BSTR *val);
	STDMETHOD(get_InstrumentFirmwareRevision)(BSTR *val);
	STDMETHOD(get_InstrumentManufacturer)(BSTR *val);
	STDMETHOD(get_InstrumentModel)(BSTR *val);
	STDMETHOD(get_SpecificationMajorVersion)(long *val);
	STDMETHOD(get_SpecificationMinorVersion)(long *val);
	STDMETHOD(get_SupportedInstrumentModels)(BSTR *val);

	// IIviDriverOperation methods
	STDMETHOD(get_LogicalName)(BSTR *val);
	STDMETHOD(get_IoResourceDescriptor)(BSTR *val);
	STDMETHOD(get_Cache)(VARIANT_BOOL *val);
	STDMETHOD(put_Cache)(VARIANT_BOOL val);
	STDMETHOD(get_InterchangeCheck)(VARIANT_BOOL *val);
	STDMETHOD(put_InterchangeCheck)(VARIANT_BOOL val);
	STDMETHOD(get_QueryInstrumentStatus)(VARIANT_BOOL *val);
	STDMETHOD(put_QueryInstrumentStatus)(VARIANT_BOOL val);
	STDMETHOD(get_RangeCheck)(VARIANT_BOOL *val);
	STDMETHOD(put_RangeCheck)(VARIANT_BOOL val);
	STDMETHOD(get_RecordCoercions)(VARIANT_BOOL *val);
	STDMETHOD(put_RecordCoercions)(VARIANT_BOOL val);
	STDMETHOD(get_Simulate)(VARIANT_BOOL *val);
	STDMETHOD(put_Simulate)(VARIANT_BOOL val);
	STDMETHOD(get_DriverSetup)(BSTR *val);
	STDMETHOD(InvalidateAllAttributes)();
	STDMETHOD(ClearInterchangeWarnings)();
	STDMETHOD(GetNextInterchangeWarning)(BSTR* val);
	STDMETHOD(ResetInterchangeCheck)();
	STDMETHOD(GetNextCoercionRecord)(BSTR* val);
	
	// IIviClassWrapper
	STDMETHOD(AttachToExistingCSession)(long Vi);
	STDMETHOD(get_NativeCHandle)(long *val);

private:
	HRESULT ParseConfiguration(BSTR bstrResourceDescriptor, BSTR bstrOptionString);
	HRESULT ProcessInitOptionStringInherentAttribute(const CString& strName, const CString& strValue);
	HRESULT ProcessInitOptionStringDriverSetup(const CString& strDriverSetupString);
	HRESULT ProcessInitOptionStringDriverSetupAttribute(const CString& strName, const CString& strValue);

	HRESULT LoadDriverConfiguration(IIviDriverSessionPtr spDriverSession);
	HRESULT LoadConfigurableInitialSettings(IIviDriverSessionPtr spDriverSession);
	HRESULT LoadConfigurableInitialSettings(IIviSoftwareModulePtr spSoftwareModule);
	HRESULT LoadConfigurableInitialSettings(IIviStructurePtr spConfigSettings);
	HRESULT ProcessConfigurableInitialSettings();
	HRESULT ProcessInitOptionString(const CString& strOptionString);
	HRESULT LoadDriverResourceString(UINT nID, BSTR* pbstrResourceString);

	// NOTE: For some inexplicable reason, the spDriverSession must be passed by 
	// reference to this function.  Otherwise an exception is thrown, presumably
	// due to a reference counting error of some sort.  Oddly, this only occurs
	// when a driver is compiled with managed extensions enabled.
	HRESULT BuildVirtualNameMaps(IIviDriverSessionPtr& spDriverSession);
	HRESULT BuildPhysicalNameMap(IIviSoftwareModulePtr& spSoftwareModule);

	///////////////////////////////////////////////////////////////////////////////
	// IInstrErrorPoller
public:
	virtual HRESULT PollInstrumentErrors() override;
	
	///////////////////////////////////////////////////////////////////////////////
	// IEnumFormatter
public:
	virtual HRESULT EnumToStringEx(const CString& strEnumName, long lVal, CString& strVal) override;
	virtual HRESULT EnumFromStringEx(const CString& strEnumName, const CString& strVal, long& lVal) override;
	virtual long GetMaxStringLength(const CString& strEnumName) override;

	// Developer-customizable functions
protected:
	virtual HRESULT InitializeIdentification();
	virtual HRESULT InitializeIO();
	virtual HRESULT ClearIOStatus();
	virtual HRESULT CloseIO();
	virtual HRESULT ResetDefaults();

public:
	void SetIdentificationInfo(const CString& strIdentification, const CString& strManufacturer, const CString& strModel, const CString& strSerialNumber, const CString& strFirmwareRevision); 

	CDriverInfo& GetDriverInfo();

	virtual CString GetInherentOptionValue(const CString& strName) const;
	virtual CString GetDriverSetupOptionValue(const CString& strName) const;

	virtual bool GetConfigSetting(const CString& strName, CComVariant& varValue) const;
	virtual bool GetConfigSetting(const CString& strName, CString& strValue) const;
	virtual bool GetConfigSetting(const CString& strName, int& nValue) const;
	virtual bool GetConfigSetting(const CString& strName, double& dblValue) const;
	virtual bool GetConfigSetting(const CString& strName, bool& bValue) const;

	virtual CString TranslatePhysicalName(const CString& strPhysicalName) const;
	virtual CString TranslateVirtualName(const CString& strVirtualName) const;
	virtual CString TranslatePhysicalNameToExportedPhysicalName(const CString& strRepCapName, const CString& strPhysicalName) const;

	virtual CString GetModel() const;
	virtual CString GetSerialNumber() const;

	virtual bool GetInitialized() const;

	virtual bool GetCache() const;
	virtual bool GetInterchangeCheck() const;
	virtual bool GetQueryInstrStatus() const;
	virtual void SetQueryInstrStatus(bool val);		// Included only for compatibility with Nimbus 1
	virtual bool GetRangeCheck() const;
	virtual bool GetRecordCoercions() const;
	virtual bool GetSimulate() const;
	virtual bool GetReset() const;
	virtual bool GetIdQuery() const;

	virtual CString GetResourceDescriptor() const;

protected:
	// CNode overrides
	virtual const CDriver* GetDriver() const; 
	virtual CDriver* GetDriver(); 

public:
	virtual CCoercionLog* GetCoercionLog() const;

private:
	HRESULT InitializeTracer();

protected:
	HRESULT SetTraceEnabled(VARIANT_BOOL val);
	HRESULT GetTraceEnabled(VARIANT_BOOL* val);

public:
	// CNode overrides
	virtual CTracer* GetTracer() const;
	virtual const CCallContext* GetCurrentContext() const;

private:
	void PushCallContext(const CCallContext* pCallContext);
	void PopCallContextNoReturn();
	const CCallContext* PopCallContext();

private:
	bool m_bCache;
	bool m_bInterchangeCheck;
	bool m_bQueryInstrStatus;
	bool m_bRangeCheck;
	bool m_bRecordCoercions;
	bool m_bSimulate;

	bool m_bCacheOriginal;
	bool m_bInterchangeCheckOriginal;
	bool m_bQueryInstrStatusOriginal;
	bool m_bRangeCheckOriginal;
	bool m_bRecordCoercionsOriginal;
	bool m_bSimulateOriginal;

	bool m_bReset;
	bool m_bIdQuery;

	bool m_bInitialized; 

	CString m_strInitOptionString;
	CString m_strLogicalName;
	CString m_strResourceDescriptor;
	CString m_strDriverSetup;
	CString m_strManufacturer;
	CString m_strModel;
	CString m_strSerialNumber;
	CString m_strFirmwareRevision;
	CString m_strIdentification;

	CAtlMap<CString, CString> m_mapInherentOptions;
	CAtlMap<CString, CString> m_mapDriverSetupOptions;
	CAtlMap<CString, CComVariant> m_mapConfigSettings;
	CAtlMap<CString, CString> m_mapLowerVirtualNameToPhysicalName;
	CAtlMap<CString, CString> m_mapLowerPhysicalNameToVirtualName;
	CAtlMap<CString, CString> m_mapPhysicalNameToRepCapName;

private:
	CDriverInfo m_driverInfo;
	CCoercionLog* m_pCoercionLog;
	CTracer* m_pTracer;
	CAtlList<const CCallContext*> m_rgpCallContext;

	CComAutoCriticalSection m_csCallContext;
	typedef CComCritSecLock<CComAutoCriticalSection> CCallContextLock;

public:
	friend class ForwardingShimImpl;
	friend class CCallContextManager;
};

///////////////////////////////////////////////////////////////////////////////
//
//	_Driver
//

template <class NodeClass>
class _Driver :
	public CDriver,
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<NodeClass, &__uuidof(NodeClass)>,
	public ISupportErrorInfo,
	public IProvideClassInfo2Impl<&__uuidof(NodeClass), NULL, &CAtlModule::m_libid, TYPELIB_VERSION_MAJOR, TYPELIB_VERSION_MINOR>
{
};

///////////////////////////////////////////////////////////////
//
//   CCallContextManager
//

class CCallContextManager
{
public:
	CCallContextManager(CDriver* pDriver, const CCallContext* pCallContext)
		: m_pDriver(pDriver)
	{
		m_pDriver->PushCallContext(pCallContext);
	}

	~CCallContextManager()
	{
		m_pDriver->PopCallContextNoReturn();
	}

private:
	CDriver* m_pDriver;
};

	///////////////////////////////////////////////////////////////////////////////
	// Inline includes

#include "ntldriver.inl"

