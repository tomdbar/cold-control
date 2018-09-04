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


////////////////////////////////////////////////////////////////////////////////
//
//	Forward declarations
//

class CDriver;

///////////////////////////////////////////////////////////////////////////////
//
//	CRepCap
//

class CRepCap :
	public CNode
{
protected:
	CRepCap();
	virtual ~CRepCap();

private:
	HRESULT InternalFinalInitialize();
	HRESULT InternalFinalClose();

public:	
	virtual CString GetInherentOptionValue(const CString& strName) const;
	virtual CString GetDriverSetupOptionValue(const CString& strName) const;

	virtual bool GetConfigSetting(const CString& strName, CComVariant& varValue) const;
	virtual bool GetConfigSetting(const CString& strName, CString& strValue) const;
	virtual bool GetConfigSetting(const CString& strName, int& nValue) const;
	virtual bool GetConfigSetting(const CString& strName, double& dblValue) const;
	virtual bool GetConfigSetting(const CString& strName, bool& bValue) const;

	virtual CString TranslateVirtualName(const CString& strVirtualName) const;
	virtual CString TranslatePhysicalName(const CString& strPhysicalName) const;
	virtual CString TranslatePhysicalNameToExportedPhysicalName(const CString& strRepCapName, const CString& strPhysicalName) const;

	virtual CString GetModel() const;

	virtual bool GetInitialized() const;

	virtual bool GetCache() const;
	virtual bool GetInterchangeCheck() const;
	virtual bool GetQueryInstrStatus() const;
	virtual bool GetRangeCheck() const;
	virtual bool GetRecordCoercions() const;
	virtual bool GetSimulate() const;

	virtual CString GetResourceDescriptor() const;
	
///////////////////////////////////////////////////////////////////////////////
// IInstrErrorPoller
public:
	virtual HRESULT PollInstrumentErrors() sealed override;

	// CNode overrides
public:
	virtual CTracer* GetTracer() const;
	virtual const CCallContext* GetCurrentContext() const;

private:
	virtual CCoercionLog* GetCoercionLog() const;

public:
    void SetInstanceName(const CString& strName);
	const CString& GetInstanceName() const;

	void SetInstanceIndex(int nIndex);
	int GetInstanceIndex() const;

protected:
	// CNode overrides
	virtual const CDriver* GetDriver() const; 
	virtual CDriver* GetDriver(); 
	virtual CString GetRepCapIdentifier();

private:
    CString m_strInstanceName;
	int m_nInstanceIndex;
	CString m_strRepCapIdentifier;

public:
	friend class ForwardingShimImpl;
	friend class CNode;
};

///////////////////////////////////////////////////////////////////////////////
//
//	_RepCap
//

template <class NodeClass>
class _RepCap : 
	public CRepCap,
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<NodeClass, &__uuidof(NodeClass)>,
	public ISupportErrorInfo
{
};

	///////////////////////////////////////////////////////////////////////////////
	// Inline includes

#include "ntlrepcap.inl"
