/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#ifndef NTL_UNUSED
#define NTL_UNUSED(x) x
#endif

#include <atlstr.h>
#include <atlrx.h>
#include <atlcoll.h>
#include <atlpath.h>
#include <atlsafe.h>
#include <math.h>
#include "ntlerrorreporter.h"

///////////////////////////////////////////////////////////////
//
//   String parsing helpers
//

HRESULT ParseNameValuePairs(const CString& strSource, CAtlMap<CString, CString>& mapPairs);

SAFEARRAY* ParseBoolList(const CString& str, const CString strDelim = _T(", "));

template <typename T>
SAFEARRAY* ParseList(const CString& str, const CString strDelim = _T(", "));

template <typename T>
inline T StringToElement(const CString& str);

template <>
inline double StringToElement<double>(const CString& str);

template <>
inline float StringToElement<float>(const CString& str);

template <>
inline long StringToElement<long>(const CString& str);

template <>
inline int StringToElement<int>(const CString& str);

template <>
inline short StringToElement<short>(const CString& str);

template <>
inline BYTE StringToElement<BYTE>(const CString& str);

template <>
inline BSTR StringToElement<BSTR>(const CString& str);


///////////////////////////////////////////////////////////////
//
//   Simulation helpers
//

template <typename T>
SAFEARRAY* LoadArray(UINT uResid);

template <typename T>
SAFEARRAY* _LoadArray(UINT uResid);

SAFEARRAY* LoadBoolArray(UINT uResid);

///////////////////////////////////////////////////////////////
//
//   File info helper classes
//

#pragma comment(lib, "version")

class CFileInfo
{
public:
	CFileInfo(CString strPath);

	CString GetComments();
	CString GetCompanyName();
	CString GetFileVersion();
	CString GetFileDescription();
	CString GetInternalName();
	CString GetLegalCopyright();
	CString GetLegalTrademarks(); 
	CString GetOriginalFilename();
	CString GetProductName();
	CString GetProductVersion();
	CString GetPrivateBuild();
	CString GetSpecialBuild();

protected:
	CString GetFileInfoString(const CString& strInfoName);

private:
	CString m_strPath;
};


///////////////////////////////////////////////////////////////
//
//   IVI install helpers
//

inline CPath GetIVIStandardRootDirectory();

inline CString GetIVISharedComponentVersion();

inline CString GetDriverVendor();

///////////////////////////////////////////////////////////////////////////////
//	Resource helpers

#define RESOURCE_STRING_MAX		1024

inline HRESULT LoadDriverResourceString(UINT nID, BSTR* pbstr);

///////////////////////////////////////////////////////////////////////////////
//
//  CThreadLocal
// 
//	This class manages the TLS functions (TlsAlloc and friends) and allows you
//  to create a thread local variable.  It is intended as a replacement for 
//  __declspec(thread), which does not work on operating systems before Windows
//  Vista and does not work with the CLR.

template <typename T>
class CThreadLocal
{
public:
	CThreadLocal(const T& value)
	{
		this->threadLocalIndex = ::TlsAlloc();
		this->SetValue(value);
	}

	CThreadLocal()
	{
		this->threadLocalIndex = ::TlsAlloc();
	}

	virtual ~CThreadLocal()
	{
		this->DeleteValue();
		::TlsFree(this->threadLocalIndex);
	}

	void SetValue(const T &value)
	{
		T* currentPointer = this->GetPointer();
		if (currentPointer == NULL)
		{
			this->SetPointer(new T(value));
		}
		else
		{
			*currentPointer = value;
		}
	}

	T &GetValue(void)
	{
		T* currentPointer = this->GetPointer();
		if (currentPointer == NULL)
		{
			this->SetPointer(new T());
		}

		return *this->GetPointer();
	}

	void DeleteValue()
	{
		T* currentPointer = this->GetPointer();
		if (currentPointer != NULL)
		{
			delete currentPointer;
			this->SetPointer(NULL);
		}
	}

private:
	DWORD threadLocalIndex;

	CThreadLocal(CThreadLocal const&);

	T *GetPointer(void)
	{
		return static_cast<T*>(::TlsGetValue(this->threadLocalIndex));
	}

	void SetPointer(T *value)
	{
		::TlsSetValue(this->threadLocalIndex, static_cast<void*>(value));
	}
};

///////////////////////////////////////////////////////////////////////////////
//	Miscellaneous helpers
//
class CVersion
{
public:
	CVersion(int nMajor, int nMinor, int nBuild, int nRev);

	int GetMajor() const;
	int GetMinor() const;
	int GetBuild() const;
	int GetRevision() const;

	CString ToString(bool bIncludeRevision);

protected:
	int m_nMajor;
	int m_nMinor;
	int m_nBuild;
	int m_nRev;
};

template <typename T>
static HRESULT SwapBytes(T* pValues, long cElements);

template <typename T>
static HRESULT SwapBytes(T& val);

template <typename T>
HRESULT ValidateSafeArray(SAFEARRAY* psa, IErrorReporter* pErr = NULL);

HRESULT ValidateSafeArray(SAFEARRAY* psa, VARTYPE expectedType = VT_NULL, IErrorReporter* pErr = NULL);

HRESULT GetSafeArrayVectorSizeInfo(SAFEARRAY* psa, int* pnLowerBound, int* pnCount);
	
///////////////////////////////////////////////////////////////////////////////
// Inline includes

#include "ntlutil.inl"
