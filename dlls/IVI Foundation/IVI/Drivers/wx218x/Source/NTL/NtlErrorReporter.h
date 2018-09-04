/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <stdarg.h>
#include <atlstr.h>

///////////////////////////////////////////////////////////////////////////////
//
//	IErrorReporter
//

interface IErrorReporter
{
	virtual HRESULT ReportError(HRESULT hr, const CString& strMessage) const abstract;

	virtual HRESULT Report(UINT uResid, ...) const abstract;
	virtual HRESULT ReportV(UINT uResid, va_list argList) const abstract;
	virtual HRESULT ReportEx(UINT uResid, LPCTSTR szDetails, ...) const abstract;
	virtual HRESULT ReportExV(UINT uResid, LPCTSTR szDetails, va_list argList) const abstract;

	// Nimbus-defined errors
	virtual HRESULT IoError(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT IoTimeoutError(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT ModelNotSupported(const CString& strModel = _T(""), const CString& strDetails = _T("")) const abstract;

	// IIviDriverTypeLib errors
	virtual HRESULT MethodNotSupported(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT MethodNotSupported(LPCTSTR pszMethod, const CString& strDetails = _T("")) const abstract;

	virtual HRESULT PropertyNotSupported(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT PropertyNotSupported(LPCTSTR pszProperty, const CString& strDetails = _T("")) const abstract;

	virtual HRESULT InvalidValue(LPCTSTR pszParam, const CString& strValue, const CString& strDetails = _T("")) const abstract;
	virtual HRESULT InvalidValue(LPCTSTR pszParam, BSTR bstrValue, const CString& strDetails = _T(""))  const abstract;
	virtual HRESULT InvalidValue(LPCTSTR pszParam, LPCTSTR pszValue, const CString& strDetails = _T(""))  const abstract;
	virtual HRESULT InvalidValue(LPCTSTR pszParam, double dValue, const CString& strFormat = _T("%.15g"), const CString& strDetails = _T(""))  const abstract;
	virtual HRESULT InvalidValue(LPCTSTR pszParam, long lValue, const CString& strFormat = _T("%d"), const CString& strDetails = _T(""))  const abstract;
	virtual HRESULT InvalidValue(LPCTSTR pszParam, bool bValue, const CString& strDetails = _T(""))  const abstract;

	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, const CString& strValue, const CString& strDetails = _T("")) const abstract;
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, BSTR bstrValue, const CString& strDetails = _T(""))  const abstract;
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, LPCTSTR pszValue, const CString& strDetails = _T(""))  const abstract;
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, double dValue, const CString& strFormat = _T("%.15g"), const CString& strDetails = _T(""))  const abstract;
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, long lValue, const CString& strFormat = _T("%d"), const CString& strDetails = _T(""))  const abstract;
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, bool bValue, const CString& strDetails = _T(""))  const abstract;

	virtual HRESULT AlreadyInitialized(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT BadOptionName(LPCTSTR pszOptionName, const CString& strDetails = _T("")) const abstract;
	virtual HRESULT BadOptionValue(LPCTSTR pszOptionValue, const CString& strDetails = _T("")) const abstract;
	virtual HRESULT BadlyFormedSelector(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT CannotChangeSimulateState(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT CannotOpenFile(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT CannotRecover(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT ChannelNameRequired(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT FileNotFound(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT InstrumentIdQueryFailed(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT InstrumentStatus(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT InvalidFileFormat(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT InvalidNumberOfLevelsInSelector(LPCTSTR pszRepCap, const CString& strDetails = _T("")) const abstract;
	virtual HRESULT InvalidPathName(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT InvalidRangeInSelector(LPCTSTR pszRange	, LPCTSTR pszRepCap, const CString& strDetails = _T("")) const abstract;
	virtual HRESULT MissingOptionName(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT MissingOptionValue(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT NotInitialized(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT NullPointer(LPCTSTR pszMethod, LPCTSTR pszParam, const CString& strDetails = _T("")) const abstract;
	virtual HRESULT NullPointer(LPCTSTR pszParam, const CString& strDetails = _T("")) const abstract;
	virtual HRESULT OperationPending(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT OutOfMemory(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT ReadingFile(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT InstrumentResetFailed(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT ResourceUnknown(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT StatusNotAvailable(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT TooManyOpenFiles(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT UnexpectedResponse(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT UnknownChannelName(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT UnknownNameInSelector(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT UnknownPhysicalIdentifier(const CString& strDetails = _T(""))  const abstract;
	virtual HRESULT ValueNotSupported(LPCTSTR pszValue, LPCTSTR pszParam, LPCTSTR pszMethod, const CString& strDetails = _T("")) const abstract;
	virtual HRESULT ValueNotSupported(LPCTSTR pszValue, LPCTSTR pszParam, const CString& strDetails = _T("")) const abstract;
	virtual HRESULT WritingFile(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT ErrorQueryNotSupported(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT IdQueryNotSupported(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT ResetNotSupported(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT RevisionQueryNotSupported(const CString& strDetails = _T("")) const abstract;
	virtual HRESULT SelfTestNotSupported(const CString& strDetails = _T("")) const abstract;
};


///////////////////////////////////////////////////////////////////////////////
//
//	CErrorReporter
//

class CErrorReporter abstract
	: public IErrorReporter
{
protected:
	CErrorReporter(const CLSID& clsid, ICallContextProvider* pCallContextProvider);

public:
	virtual HRESULT ReportError(HRESULT hr, const CString& strMessage) const;

	virtual HRESULT Report(UINT uResid, ...) const;
	virtual HRESULT ReportV(UINT uResid, va_list argList) const;
	virtual HRESULT ReportEx(UINT uResid, LPCTSTR szDetails, ...) const;
	virtual HRESULT ReportExV(UINT uResid, LPCTSTR szDetails, va_list argList) const;

protected:
	virtual HRESULT Format(UINT uResid, va_list argList, CString& strError) const;
	virtual HRESULT SetError(UINT uResid, const CString& strError) const abstract;

	CString GetCurrentMethod() const;

protected:
	CLSID m_clsid;
	ICallContextProvider* m_pCallContextProvider;
};

	///////////////////////////////////////////////////////////////////////////////
	// Inline includes

#include "ntlerrorreporter.inl"
