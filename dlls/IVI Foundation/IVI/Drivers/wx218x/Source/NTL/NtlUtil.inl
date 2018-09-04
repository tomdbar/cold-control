/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <atlstr.h>
#include <atlrx.h>
#include <atlcoll.h>
#include <atlpath.h>
#include <atlsafe.h>
#include <math.h>
#include <memory.h>

///////////////////////////////////////////////////////////////
//
//   String parsing helpers
//

inline HRESULT ParseNameValuePairs(const CString& strSource, CAtlMap<CString, CString>& mapPairs)
{
	HRESULT hr = S_OK;

	CString str = strSource;
	CT2W szTemp(str);
	LPWSTR psz = szTemp.m_psz;
	LPCWSTR pszNext = psz;

	CAtlRegExp<CAtlRECharTraitsW> re;
	REParseError pe = re.Parse(L"{[^,=]+=[^,=]+}");
	if (pe == REPARSE_ERROR_OK)
	{
		CAtlREMatchContext<CAtlRECharTraitsW> mc;
		while (re.Match(pszNext, &mc, &pszNext) && SUCCEEDED(hr))
		{	
			LPCWSTR pszStart = NULL;
			LPCWSTR pszEnd = NULL;
			mc.GetMatch(0, &pszStart, &pszEnd);
			if ((pszStart != NULL) && (pszEnd != NULL))
			{
				CStringW strPairW;
				while (pszStart != pszEnd)
				{
					strPairW += *pszStart;
					pszStart++;
				}
				CString strPair(strPairW);
				int nPos = 0;
				CString strName = strPair.Tokenize(_T("="), nPos);
				CString strValue = strPair.Tokenize(_T("="), nPos);
				strName = strName.Trim();
				strValue = strValue.Trim();
				mapPairs[strName] = strValue;
			}
		}
	}

	return hr;
}

template <typename T>
inline T StringToElement(const CString& str);

template <>
inline double StringToElement<double>(const CString& str)
{
	return _tcstod(str, NULL);
}

template <>
inline float StringToElement<float>(const CString& str)
{
	return (float)_tcstod(str, NULL);
}

template <>
inline long StringToElement<long>(const CString& str)
{
	return _ttol(str);
}

template <>
inline int StringToElement<int>(const CString& str)
{
	return _ttoi(str);
}

template <>
inline short StringToElement<short>(const CString& str)
{
	return (short)_ttoi(str);
}

template <>
inline BYTE StringToElement<BYTE>(const CString& str)
{
	return (BYTE)_ttoi(str);
}

template <>
inline BSTR StringToElement<BSTR>(const CString& str)
{
	return str.AllocSysString();
}

inline SAFEARRAY* ParseBoolList(const CString& str, const CString strDelim)
{
	CComSafeArray<VARIANT_BOOL, VT_BOOL> sa;

	int curPos = 0;
	CString strToken = str.Tokenize(strDelim, curPos);
	while (strToken != _T(""))
	{
		short sVal = StringToElement<short>(strToken);
		VARIANT_BOOL bVal = sVal != 0 ? VARIANT_TRUE : VARIANT_FALSE;
		sa.Add(bVal);
		strToken = str.Tokenize(strDelim, curPos);
	}

	return sa.Detach();
}


template <typename T>
inline SAFEARRAY* ParseList(const CString& str, const CString strDelim)
{
	CComSafeArray<T> sa;

	int curPos = 0;
	CString strToken = str.Tokenize(strDelim, curPos);
	while (strToken != _T(""))
	{
		T val = StringToElement<T>(strToken);
		sa.Add(val);
		strToken = str.Tokenize(strDelim, curPos);
	}

	return sa.Detach();
}

///////////////////////////////////////////////////////////////
//
//   Simulation helpers
//

template <typename T>
inline SAFEARRAY* _LoadArray(UINT uResid)
{
	CString str;
	if (str.LoadString(uResid))
	{
		return ParseList<T>(str);
	}

	return NULL;
}

template <>
inline SAFEARRAY* LoadArray<double>(UINT uResid)
{
	return _LoadArray<double>(uResid);
}

template <>
inline SAFEARRAY* LoadArray<float>(UINT uResid)
{
	return _LoadArray<float>(uResid);
}

template <>
inline SAFEARRAY* LoadArray<long>(UINT uResid)
{
	return _LoadArray<long>(uResid);
}

template <>
inline SAFEARRAY* LoadArray<int>(UINT uResid)
{
	return _LoadArray<int>(uResid);
}

template <>
inline SAFEARRAY* LoadArray<short>(UINT uResid)
{
	return _LoadArray<short>(uResid);
}

template <>
inline SAFEARRAY* LoadArray<BYTE>(UINT uResid)
{
	return _LoadArray<BYTE>(uResid);
}

template <>
inline SAFEARRAY* LoadArray<BSTR>(UINT uResid)
{
	return _LoadArray<BSTR>(uResid);
}

inline SAFEARRAY* LoadBoolArray(UINT uResid)
{
	CString str;
	if (str.LoadString(uResid))
	{
		return ParseBoolList(str);
	}

	return NULL;
}

///////////////////////////////////////////////////////////////
//
//   File info helper classes
//

inline CFileInfo::CFileInfo(CString strPath)
	: m_strPath(strPath)
{
}

inline CString CFileInfo::GetComments() 
{ 
	return GetFileInfoString(_T("Comments")); 
}

inline CString CFileInfo::GetCompanyName() 
{ 
	return GetFileInfoString(_T("CompanyName")); 
}

inline CString CFileInfo::GetFileVersion() 
{ 
	return GetFileInfoString(_T("FileVersion")); 
}

inline CString CFileInfo::GetFileDescription() 
{ 
	return GetFileInfoString(_T("FileDescription")); 
}

inline CString CFileInfo::GetInternalName() 
{ 
	return GetFileInfoString(_T("InternalName")); 
}

inline CString CFileInfo::GetLegalCopyright() 
{ 
	return GetFileInfoString(_T("LegalCopyright")); 
}

inline CString CFileInfo::GetLegalTrademarks() 
{ 
	return GetFileInfoString(_T("LegalTrademarks")); 
}

inline CString CFileInfo::GetOriginalFilename() 
{ 
	return GetFileInfoString(_T("OriginalFilename")); 
}

inline CString CFileInfo::GetProductName() 
{ 
	return GetFileInfoString(_T("ProductName")); 
}

inline CString CFileInfo::GetProductVersion() 
{ 
	return GetFileInfoString(_T("ProductVersion")); 
}

inline CString CFileInfo::GetPrivateBuild() 
{ 
	return GetFileInfoString(_T("PrivateBuild")); 
}

inline CString CFileInfo::GetSpecialBuild() 
{ 
	return GetFileInfoString(_T("SpecialBuild")); 
}

inline CString CFileInfo::GetFileInfoString(const CString& strInfoName)
{
	CString strFileInfoString;
	DWORD dwHandle;
	DWORD dwSize = ::GetFileVersionInfoSize(m_strPath, &dwHandle);
	if (dwSize > 0)
	{
		BYTE* pbData = new BYTE[dwSize];
		BOOL bRet = ::GetFileVersionInfo(m_strPath, 0, dwSize, pbData);
		if (bRet)
		{
			DWORD* pBuffer;
			UINT uVerLen;
			bRet = ::VerQueryValue(pbData, _T("\\VarFileInfo\\Translation"), (void**)&pBuffer, &uVerLen);  
			if (bRet && uVerLen > 0)
			{
				UINT uSize;
				CString strInfoPath;
				strInfoPath.Format(_T("\\StringFileInfo\\%04hX%04hX\\%s"), LOWORD(*pBuffer), HIWORD(*pBuffer), strInfoName);

				LPTSTR pszInfoPath = strInfoPath.GetBuffer();
				BOOL bRet = ::VerQueryValue(pbData, pszInfoPath, (void**)&pBuffer, &uSize);
				if (bRet)
				{
					strFileInfoString = (LPTSTR)pBuffer;
				}
			}
		}

		if (pbData != NULL)
			delete[] pbData;
	}

	return strFileInfoString;
}

///////////////////////////////////////////////////////////////////////////////
//	IVI install helpers

inline CPath GetIVIStandardRootDirectory()
{
	CPath pathIVI;
	CRegKey regKey;
	LONG lRet = regKey.Open(HKEY_LOCAL_MACHINE, _T("SOFTWARE\\IVI"), KEY_READ);
	ATLASSERT(lRet == ERROR_SUCCESS);
	if (lRet == ERROR_SUCCESS)
	{
		TCHAR szPath[MAX_PATH];
		ULONG ulCnt = MAX_PATH;
		lRet = regKey.QueryStringValue(_T("IviStandardRootDir"), szPath, &ulCnt);
		ATLASSERT(lRet == ERROR_SUCCESS);
		if (lRet == ERROR_SUCCESS)
		{
			pathIVI = szPath;
		}
	}

	return pathIVI;
}

inline CString GetIVISharedComponentVersion()
{
	CPath pathIVIBinDirectory;
	pathIVIBinDirectory.Combine(GetIVIStandardRootDirectory(), _T("Bin"));

	CPath pathSharedComponentVersionDLL;
	pathSharedComponentVersionDLL.Combine(pathIVIBinDirectory, _T("IVISharedComponentVersion.dll"));

	CFileInfo fileInfo(pathSharedComponentVersionDLL);

	return fileInfo.GetFileVersion();
}

inline CString GetDriverVendor()
{
	CString strDriverVendor;

	TCHAR szModulePath[MAX_PATH];
	DWORD dwFLen = ::GetModuleFileName(_AtlBaseModule.GetModuleInstance(), szModulePath, MAX_PATH);
	if (dwFLen > 0 && dwFLen < MAX_PATH)
	{
		CFileInfo fileInfo(szModulePath);
		strDriverVendor = fileInfo.GetCompanyName();
	}

	return strDriverVendor;
}


///////////////////////////////////////////////////////////////////////////////
//	Resource helpers

inline HRESULT LoadDriverResourceString(UINT nID, BSTR* pbstr)
{
	*pbstr = NULL;

	HRESULT hr = S_OK;
	TCHAR szBuf[RESOURCE_STRING_MAX];
	if (::LoadString(_AtlBaseModule.GetModuleInstance(), nID, szBuf, RESOURCE_STRING_MAX))
	{
		*pbstr = ::SysAllocString(CT2OLE(szBuf));
	}

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
//	Miscellaneous helpers

inline CVersion::CVersion(int nMajor, int nMinor, int nBuild, int nRev)
	: m_nMajor(nMajor), m_nMinor(nMinor), m_nBuild(nBuild), m_nRev(nRev)
{
}

inline int CVersion::GetMajor() const 
{ 
	return m_nMajor; 
}

inline int CVersion::GetMinor() const 
{ 
	return m_nMinor; 
}

inline int CVersion::GetBuild() const 
{ 
	return m_nBuild; 
}

inline int CVersion::GetRevision() const 
{ 
	return m_nRev; 
}

inline CString CVersion::ToString(bool bIncludeRevision)
{
	CString str;
	if (bIncludeRevision)
	{
		str.Format(_T("%d.%d.%d.%d"), m_nMajor, m_nMinor, m_nBuild, m_nRev);
	}
	else
	{
		str.Format(_T("%d.%d.%d"), m_nMajor, m_nMinor, m_nBuild);
	}

	return str;
}

template <typename T>
HRESULT SwapBytes(T* pValues, long cElements)
{
	HRESULT hr = S_OK;

	for (int i = 0; i < cElements && SUCCEEDED(hr); i++)
	{
		T val = pValues[i];
		hr = SwapBytes(val);
		if (SUCCEEDED(hr))
		{
			pValues[i] = val;
		}
	}

	return hr;
}

template <>
inline HRESULT SwapBytes(BYTE* pValues, long cElements)
{
	NTL_UNUSED(pValues);
	NTL_UNUSED(cElements);

	// Do nothing

	return S_OK;
}

template <>
inline HRESULT SwapBytes<BYTE>(BYTE& val)
{
	NTL_UNUSED(val);

	// Do nothing

	return S_OK;
}

template <>
inline HRESULT SwapBytes<short>(short& val)
{
	val = _byteswap_ushort((USHORT)val);

	return S_OK;
}

template <>
inline HRESULT SwapBytes<long>(long& val)
{
	val = _byteswap_ulong((ULONG)val);

	return S_OK;
}

template <>
inline HRESULT SwapBytes<__int64>(__int64& val)
{
	val = _byteswap_uint64((UINT64)val);

	return S_OK;
}

template <>
inline HRESULT SwapBytes<float>(float& val)
{
	ULONG ulVal = _byteswap_ulong(*(ULONG*)&val);
	val = *(float*)&ulVal;

	return S_OK;
}

template <>
inline HRESULT SwapBytes<double>(double& val)
{
	UINT64 ullVal = _byteswap_uint64(*(UINT64*)&val);
	val = *(double*)&ullVal;

	return S_OK;
}

inline HRESULT ValidateSafeArray(SAFEARRAY* psa, VARTYPE expectedType, IErrorReporter* pErr)
{
	HRESULT hr = S_OK;

	if (psa == NULL)
	{
		if (pErr != NULL)
		{
			return pErr->NullPointer(_T("SAFEARRAY is NULL."));
		}
		else
		{
			return E_POINTER;
		}
	}

	UINT nDims = ::SafeArrayGetDim(psa);
	if (nDims != 1)
	{
		if (pErr != NULL)
		{
			return pErr->InvalidValue(_T("psa"), _T("<Unknown Value>"), _T("SAFEARRAY is not one-dimensional."));
		}
		else
		{
			return E_INVALIDARG;
		}
	}
	
	long lLBound;
	hr = ::SafeArrayGetLBound(psa, 1, &lLBound);
	if (FAILED(hr) || lLBound != 0)
	{
		if (pErr != NULL)
		{
			return pErr->InvalidValue(_T("psa"), _T("<Unknown Value>"), _T("SAFEARRAY is not zero-based."));
		}
		else
		{
			return E_INVALIDARG;
		}
	}

	if (expectedType != VT_NULL)
	{
		VARTYPE vt;
		hr = ::SafeArrayGetVartype(psa, &vt);
		if (FAILED(hr) || vt != expectedType)
		{
			if (pErr != NULL)
			{
				return pErr->InvalidValue(_T("psa"), _T("<Unknown Value>"), _T("SAFEARRAY was not of the expected type."));
			}
			else
			{
				return E_INVALIDARG;
			}
		}
	}


	return hr;
}

template <>
inline HRESULT ValidateSafeArray<BSTR>(SAFEARRAY* psa, IErrorReporter* pErr)
{
	return ValidateSafeArray(psa, VT_BSTR, pErr);
}

template <>
inline HRESULT ValidateSafeArray<BYTE>(SAFEARRAY* psa, IErrorReporter* pErr)
{
	return ValidateSafeArray(psa, VT_UI1, pErr);
}

template <>
inline HRESULT ValidateSafeArray<short>(SAFEARRAY* psa, IErrorReporter* pErr)
{
	return ValidateSafeArray(psa, VT_I2, pErr);
}

template <>
inline HRESULT ValidateSafeArray<long>(SAFEARRAY* psa, IErrorReporter* pErr)
{
	return ValidateSafeArray(psa, VT_I4, pErr);
}

template <>
inline HRESULT ValidateSafeArray<__int64>(SAFEARRAY* psa, IErrorReporter* pErr)
{
	return ValidateSafeArray(psa, VT_I8, pErr);
}

template <>
inline HRESULT ValidateSafeArray<float>(SAFEARRAY* psa, IErrorReporter* pErr)
{
	return ValidateSafeArray(psa, VT_R4, pErr);
}

template <>
inline HRESULT ValidateSafeArray<double>(SAFEARRAY* psa, IErrorReporter* pErr)
{
	return ValidateSafeArray(psa, VT_R8, pErr);
}

template <>
inline HRESULT ValidateSafeArray<long double>(SAFEARRAY* psa, IErrorReporter* pErr)
{
	return ValidateSafeArray(psa, VT_R8, pErr);
}

inline HRESULT GetSafeArrayVectorSizeInfo(SAFEARRAY* psa, int* pnLowerBound, int* pnCount)
{
	HRESULT hr = S_OK;

	*pnLowerBound = 0;
	*pnCount = 0;

	long nLowerBound = 0;
	hr = ::SafeArrayGetLBound(psa, 1, &nLowerBound);
	if (SUCCEEDED(hr))
	{
		long nUpperBound = 0;
		hr = ::SafeArrayGetUBound(psa, 1, &nUpperBound);
		if (SUCCEEDED(hr))
		{
			*pnLowerBound = nLowerBound;
			*pnCount = nUpperBound - nLowerBound + 1;
		}
	}

	return hr;
}
