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
#include <float.h>
#include "ntlutil.h"


//////////////////////////////////////////////////////////////////////////
// Printf format string tokens
//

// IMPORTANT: token numeric values must be consecutive, starting from zero

__declspec(selectany) LPCSTR g_rgPrintfFormatStringTokens[] = {

#define PRINTF_LITERAL_CHARS										0
		"[^%]+|(%%)",

#define PRINTF_INTEGER												1
		"%\\b*[-+0 ]*((@1)|(@2)|(@3)|(@H)|(@Q)|(@B)\\b*)?(\\z|(0*\\*)\\b*)?(\\.\\z|\\*\\b*)?[lhbI]?[dioux]",

#define PRINTF_INTEGER_ARRAY										2
		"%\\b*[-+0 ]*((@1)|(@2)|(@3)|(@H)|(@Q)|(@B)\\b*)?(\\z|(0*\\*)\\b*)?(\\.\\z|\\*\\b*)?,|(\\([,;:strn]\\))\\b*(\\z|\\*\\b*)?(\\$S\\b*)?[lhbI]?[dioux]",

#define PRINTF_FLOAT												3
		"%\\b*[-+0 ]*((@1)|(@2)|(@3)|(@H)|(@Q)|(@B)\\b*)?(\\z|(0*\\*)\\b*)?(\\.\\z|\\*\\b*)?[lL]?[feEgG]",

#define PRINTF_FLOAT_ARRAY											4
		"%\\b*[-+0 ]*((@1)|(@2)|(@3)|(@H)|(@Q)|(@B)\\b*)?(\\z|(0*\\*)\\b*)?(\\.\\z|\\*\\b*)?,|(\\([,;:strn]\\))\\b*(\\z|\\*\\b*)?(\\$S\\b*)?[lL]?[feEgG]",

#define PRINTF_DEFINITE_BLOCK										5
		"%\\b*(\\z|\\*\\b*)?(\\$S\\b*)?[hlzZI]?b",

#define PRINTF_INDEFINITE_BLOCK										6
		"%\\b*(\\z|\\*\\b*)?(\\$S\\b*)?[hlzZI]?B",

#define PRINTF_RAW_BINARY											7
		"%\\b*(\\z|\\*\\b*)?((\\!ob)|(\\!ol)\\b*)?(\\$S\\b*)?[hlI]?y",

#define PRINTF_CHAR													8
		"%\\b*-?\\b*(\\z|\\*\\b*)?(\\.(\\z|\\*)\\b*)?c",

#define PRINTF_STRING												9
		"%\\b*-?\\b*(\\z|\\*\\b*)?(\\.(\\z|\\*)\\b*)?(\\$B|C\\b*)?[qQ]?s",

#define PRINTF_STRING_ARRAY											10
		"%\\b*-?\\b*(\\z|\\*\\b*)?(\\.(\\z|\\*)\\b*)?,|(\\([,;:strn]\\))\\b*(\\z|\\*\\b*)?(\\$S\\b*)?(\\$B|C\\b*)?[qQ]?s",

#define PRINTF_ENUM													11
		"%\\b*\\{\\b*[a-zA-Z0-9_]+\\b*\\}\\b*-?\\b*(\\z|\\*\\b*)?(\\.(\\z|\\*)\\b*)?[qQ]?s",

#define PRINTF_ENUM_ARRAY											12
		"%\\b*\\{\\b*[a-zA-Z0-9_]+\\b*\\}\\b*-?\\b*(\\z|\\*\\b*)?(\\.(\\z|\\*)\\b*)?,|(\\([,;:strn]\\))\\b*(\\z|\\*\\b*)?(\\$S\\b*)?[qQ]?s",

		NULL	// <== REQUIRED: End of array marker
};

//////////////////////////////////////////////////////////////////////////
// Scanf format string tokens
//

// IMPORTANT: token numeric values must be consecutive, starting from zero

__declspec(selectany) LPCSTR g_rgScanfFormatStringTokens[] = {

#define SCANF_LITERAL_CHARS											0
		"[^%]+|(%%)",

#define SCANF_INTEGER												1
		"%\\b*(\\*\\b*)?((@1)|(@2)|(@3)|(@H)|(@Q)|(@B)\\b*)?(\\z|#\\b*)?[lhbI]?[dioux]",

#define SCANF_INTEGER_ARRAY											2
		"%\\b*(\\*\\b*)?((@1)|(@2)|(@3)|(@H)|(@Q)|(@B)\\b*)?(\\z|#\\b*)?,|(\\([,;:strn]+\\))\\b*(\\z|#\\b*)?(\\$S\\b*)?[lhbI]?[dioux]",

#define SCANF_FLOAT													3
		"%\\b*(\\*\\b*)?((@1)|(@2)|(@3)|(@H)|(@Q)|(@B)\\b*)?(\\z|#\\b*)?[lL]?[feEgG]",

#define SCANF_FLOAT_ARRAY											4
		"%\\b*(\\*\\b*)?((@1)|(@2)|(@3)|(@H)|(@Q)|(@B)\\b*)?(\\z|#\\b*)?,|(\\([,;:strn]+\\))\\b*(\\z|#\\b*)?(\\$S\\b*)?[lL]?[feEgG]",

#define SCANF_DEFINITE_BLOCK										5
		"%\\b*(\\*\\b*)?(\\z|#\\b*)?(\\$S\\b*)?[hlzZI]?b",

#define SCANF_RAW_BINARY											6
		"%\\b*(\\*\\b*)?(\\z|#\\b*)?((\\!ob)|(\\!ol)\\b*)?(\\$S\\b*)?[hlI]?y",

#define SCANF_CHAR													7
		"%\\b*(\\*\\b*)?(\\z|#\\b*)?c",

#define SCANF_CHARS_UNTIL_LINEFEED									8
		"%\\b*(\\*\\b*)?(\\z|#\\b*)?(\\$B|C\\b*)?T",

#define SCANF_CHARS_UNTIL_END									    9
		"%\\b*(\\*\\b*)?(\\z|#\\b*)?(\\$B|C\\b*)?t",

#define SCANF_STRING_NO_WHITESPACE									10
		"%\\b*(\\*\\b*)?(\\z|#\\b*)?(\\$B|C\\b*)?s",

#define SCANF_STRING_WITH_WHITESPACE								11
		"%\\b*(\\*\\b*)?(\\z|#\\b*)?(\\$B|C\\b*)?\\[(\\^)?[^\\]]*\\]",

#define SCANF_STRING_ARRAY											12
		"%\\b*(\\*\\b*)?(\\z|#\\b*)?,|(\\([,;:strn]+\\))\\b*(\\z|#\\b*)?(\\$S\\b*)?(\\$B|C\\b*)?[qQ]?s",

#define SCANF_ENUM_NO_WHITESPACE									13
		"%\\b*\\{\\b*[a-zA-Z0-9_]+\\b*\\}\\b*(\\*\\b*)?(\\z|#\\b*)?[qQ]?s",

#define SCANF_ENUM_WITH_WHITESPACE									14
		"%\\b*\\{\\b*[a-zA-Z0-9_]+\\b*\\}\\b*(\\*\\b*)?(\\z|#\\b*)?\\[(\\^)?[^\\]]*\\]",

#define SCANF_ENUM_ARRAY											15
		"%\\b*\\{\\b*[a-zA-Z0-9_]+\\b*\\}\\b*(\\*\\b*)?(\\z|#\\b*)?,|(\\([,;:strn]+\\))\\b*(\\z|#\\b*)?(\\$S\\b*)?[qQ]?s",


		NULL	// <== REQUIRED: End of array marker
};

///////////////////////////////////////////////////////////////////////////////
//
//	CFormattedIo
//

///////////////////////////////////////////////////////////////
//
//   Printf, VPrintf
//
//		HRESULT Return Values:
//
//		E_INVALIDARG
//			- Format string is null or has an invalid format specifier.
//			- IIoBuffer pointer is null.
//		E_UNEXPECTED
//			- Failed to write to output buffer before completed scanning of format string.

inline HRESULT CFormattedIo::Printf(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = VPrintf(pBuf, pEnumFormatter, strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CFormattedIo::Printf(CString& strBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = VPrintf(strBuf, pEnumFormatter, strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CFormattedIo::Printf(LPSTR pszBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = VPrintf(pszBuf, cbBuf, pEnumFormatter, strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CFormattedIo::Printf(BYTE* pBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = VPrintf(pBuf, cbBuf, pEnumFormatter, strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CFormattedIo::PrintfIgnoreArrays(CString& strBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	CCStringWriter bufWriter(strBuf);
	hr = VPrintf(&bufWriter, pEnumFormatter, strFormat, argList, true);

	va_end(argList);

	return hr;
}

inline HRESULT CFormattedIo::VPrintf(CString& strBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList)
{
	HRESULT hr = S_OK;

	CCStringWriter bufWriter(strBuf);
	hr = VPrintf(&bufWriter, pEnumFormatter, strFormat, argList);

	return hr;
}

inline HRESULT CFormattedIo::VPrintf(LPSTR pszBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList)
{
	HRESULT hr = S_OK;

	hr = VPrintf((BYTE*)pszBuf, cbBuf, pEnumFormatter, strFormat, argList);

	return hr;
}

inline HRESULT CFormattedIo::VPrintf(BYTE* pBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList)
{
	HRESULT hr = S_OK;

	CMemoryBuffer memBuf(NULL, 0, pBuf, cbBuf);
	hr = VPrintf(&memBuf, pEnumFormatter, strFormat, argList);

	return hr;
}

inline HRESULT CFormattedIo::VPrintf(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList, bool bIgnoreArrays)
{
	if (pBuf == NULL)
		return E_INVALIDARG;

	long lLen = strFormat.GetLength();
	if (lLen == 0)
		return S_OK;

	CT2A szTemp(strFormat);
	LPSTR pszFormat = szTemp.m_psz;

	HRESULT hr = S_OK;

	CAtlArray<FormatStringToken> rgTokens;
	hr = ParsePrintfFormatString(pszFormat, rgTokens);
	
	for (int i = 0; i < (int)rgTokens.GetCount() && SUCCEEDED(hr); i++)
	{
		FormatStringToken token = rgTokens.GetAt(i);

		switch (token.m_nType)
		{
			case PRINTF_LITERAL_CHARS:
			{
				hr = PrintLiteralChars(pBuf, token);
				break;
			}						
			case PRINTF_CHAR:
			{
				hr = PrintCharacter(pBuf, token, argList);
				break;
			}						
			case PRINTF_STRING:
			{
				hr = PrintString(pBuf, token, argList);
				break;
			}						
			case PRINTF_STRING_ARRAY:
			{
				if (!bIgnoreArrays)
				{
					hr = PrintStringArray(pBuf, token, argList);
				}
				break;
			}						
			case PRINTF_ENUM:
			{
				hr = PrintEnum(pBuf, pEnumFormatter, token, argList);
				break;
			}						
			case PRINTF_ENUM_ARRAY:
			{
				if (!bIgnoreArrays)
				{
					hr = PrintEnumArray(pBuf, pEnumFormatter, token, argList);
				}
				break;
			}						
			case PRINTF_INTEGER:
			{
				hr = PrintInteger(pBuf, token, argList);
				break;
			}						
			case PRINTF_INTEGER_ARRAY:
			{
				if (!bIgnoreArrays)
				{
					hr = PrintIntegerArray(pBuf, token, argList);
				}
				break;
			}						
			case PRINTF_FLOAT:
			{
				hr = PrintFloat(pBuf, token, argList);
				break;
			}						
			case PRINTF_FLOAT_ARRAY:
			{
				if (!bIgnoreArrays)
				{
					hr = PrintFloatArray(pBuf, token, argList);
				}
				break;
			}						
			case PRINTF_DEFINITE_BLOCK:
			{
				if (!bIgnoreArrays)
				{
					hr = Print488Block(pBuf, token, argList, true);
				}
				break;
			}						
			case PRINTF_INDEFINITE_BLOCK:
			{
				if (!bIgnoreArrays)
				{
					hr = Print488Block(pBuf, token, argList, false);
				}
				break;
			}						
			case PRINTF_RAW_BINARY:
			{
				if (!bIgnoreArrays)
				{
					hr = PrintRawBinary(pBuf, token, argList);
				}
				break;
			}						
			default:
			{
				ATLASSERT(!_T("Unexpected Printf format string token."));
				hr = E_INVALIDARG;
				break;
			}
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintLiteralChars(IIoBuffer* pBuf, FormatStringToken token)
{
	HRESULT hr = S_OK;

	for (int i = 0; i < token.m_lLen && SUCCEEDED(hr); i++)
	{
		// Flush when we see a LF character
		char ch = token.m_psz[i];
		if (ch == '%' && i > 0 && token.m_psz[i-1] == '%')
		{
			// The second percent ('%') of a double-percent ('%%') was encountered.  A double percent
			// is used to indicate a single literal percent character should be output.  The first
			// percent of the pair was already written, so we simply continue;
			continue;
		}
		
		hr = pBuf->Write(ch, ch == '\n');
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintCharacter(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	hr = PreprocessPrintfFormatString(strFmt, argList);
	if (SUCCEEDED(hr))
	{
		char ch = va_arg(argList, char);

		CStringA strResult;
		strResult.Format(strFmt, ch);

		long cbActual;
		int nLen = strResult.GetLength();
		hr = pBuf->Write(strResult, &cbActual, false);
		if (SUCCEEDED(hr))
		{
			if (cbActual != nLen)
				hr = E_UNEXPECTED;
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintString(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	hr = PreprocessPrintfFormatString(strFmt, argList);
	if (SUCCEEDED(hr))
	{
		if (strFmt.Find("$B") > 0)
		{
			BSTR bstr = va_arg(argList, BSTR);
			if (bstr == NULL)
				return E_INVALIDARG;


			hr = PrintString(pBuf, strFmt, bstr, false);
		}
		else if (strFmt.Find("$C") > 0)
		{
			CString str = va_arg(argList, CString);

			strFmt.Replace("$C", "");

			hr = PrintString(pBuf, strFmt, str, false);
		}
		else
		{
			LPCTSTR psz = va_arg(argList, LPTSTR);
			if (psz == NULL)
				return E_INVALIDARG;

			CString str(psz);
			hr = PrintString(pBuf, strFmt, str, false);
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintString(IIoBuffer* pBuf, const CStringA& strFmtIn, BSTR bstr, bool bFlush)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;
	strFmt.Replace("$B", "");

	CString str = COLE2T(bstr);
	CT2A sz = str;
	hr = PrintString(pBuf, strFmt, sz.m_psz, bFlush);

	return hr;
}

inline HRESULT CFormattedIo::PrintString(IIoBuffer* pBuf, const CStringA& strFmtIn, const CString& str, bool bFlush)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;
	strFmt.Replace("$C", "");

	CT2A sz = str;
	hr = PrintString(pBuf, strFmt, sz.m_psz, bFlush);

	return hr;
}

inline HRESULT CFormattedIo::PrintString(IIoBuffer* pBuf, const CStringA& strFmtIn, LPCSTR psz, bool bFlush)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;
	CStringA str;

	// Check if it should be enclosed in quotes
	if (strFmt.Find('q') >= 0)
	{
		// Enclose in single quotes
		strFmt.Replace("q", "");
		str.Format("'%s'", psz);
	}
	else if (strFmt.Find('Q') >= 0)
	{
		// Enclose in double quotes
		strFmt.Replace("Q", "");
		str.Format("\"%s\"", psz);
	}
	else
	{
		str = psz;
	}

	CStringA strResult;
	strResult.Format(strFmt, str);

	int nLen = strResult.GetLength();
	long cbActual;
	hr = pBuf->Write(strResult, &cbActual, bFlush);
	if (SUCCEEDED(hr))
	{
		if (cbActual != nLen)
			hr = E_UNEXPECTED;
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintStringArray(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	// If it's a SAFEARRAYs, then it must contain a BSTR
	if (strFmt.Find("$S") > 0 && strFmt.Find("$B") < 0 )
		return E_UNEXPECTED;
	
	if (strFmt.Find("$B") > 0)
	{
		hr = PrintStringArray<BSTR>(pBuf, strFmt, argList);
	}
	else if (strFmt.Find("$C") > 0)
	{
		hr = PrintStringArray<CString>(pBuf, strFmt, argList);
	}
	else
	{
		hr = PrintStringArray<LPCSTR>(pBuf, strFmt, argList);
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::PrintStringArray(IIoBuffer* pBuf, CStringA& strFmt, va_list& argList)
{
	HRESULT hr = S_OK;

	long lArraySize;
	T* pArray = NULL;
	SAFEARRAY* psa = NULL;
	char chDelim;
	hr = PreprocessPrintfArrayFormatString<T>(strFmt, argList, &lArraySize, &pArray, &psa, &chDelim);
	if (SUCCEEDED(hr))
	{
		if (psa != NULL)
		{
			hr = ::SafeArrayAccessData(psa, (void**)&pArray);
		}

		for (long i = 0; i < lArraySize && SUCCEEDED(hr); i++)
		{
			hr = PrintString(pBuf, strFmt, pArray[i], false);
			if (SUCCEEDED(hr) && i < (lArraySize - 1))
			{
				hr = pBuf->Write(chDelim, false);
			}
		}

		if (psa != NULL)
		{
			HRESULT hr2 = ::SafeArrayUnaccessData(psa);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintEnum(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList)
{
	if (pEnumFormatter == NULL)
	{
		ATLASSERT(!_T("Enum format specifier encountered with no enum formatter object provided."));
		return E_INVALIDARG;
	}

	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	CStringA strEnumName;
	hr = PreprocessPrintfFormatString(strFmt, argList, &strEnumName);
	if (SUCCEEDED(hr))
	{
		// Check for VARIANT_BOOL, since it's just a short
		long lEnumVal = strEnumName == _T("VARIANT_BOOL") ? va_arg(argList, VARIANT_BOOL) : va_arg(argList, long);

		hr = PrintEnum(pBuf, pEnumFormatter, strFmt, strEnumName, lEnumVal, false);
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintEnum(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CStringA& strFmt, const CStringA& strEnumName, long lEnumVal, bool bFlush)
{
	HRESULT hr = S_OK;

	CString strVal;
	hr = pEnumFormatter->EnumToStringEx(CString(strEnumName), lEnumVal, strVal);
	if (SUCCEEDED(hr))
	{
		hr = PrintString(pBuf, strFmt, strVal, bFlush);
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintEnumArray(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList)
{
	if (pEnumFormatter == NULL)
	{
		ATLASSERT(!_T("Enum format specifier encountered with no enum formatter object provided."));
		return E_INVALIDARG;
	}

	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	CStringA strEnumName;
	hr = PreprocessPrintfFormatString(strFmt, argList, &strEnumName);
	if (SUCCEEDED(hr))
	{
		ATLASSERT(!strEnumName.IsEmpty());
		if (strEnumName.IsEmpty())
			return E_INVALIDARG;

		if (strEnumName == _T("VARIANT_BOOL"))
		{
			hr = PrintEnumArray<short>(pBuf, pEnumFormatter, strFmt, argList, strEnumName);
		}
		else
		{
			hr = PrintEnumArray<long>(pBuf, pEnumFormatter, strFmt, argList, strEnumName);
		}
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::PrintEnumArray(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, CStringA& strFmt, va_list& argList, const CStringA& strEnumName)
{
	HRESULT hr = S_OK;

	long lArraySize;
	T* pArray = NULL;
	SAFEARRAY* psa = NULL;
	char chDelim;
	hr = PreprocessPrintfArrayFormatString(strFmt, argList, &lArraySize, &pArray, &psa, &chDelim);
	if (SUCCEEDED(hr))
	{
		if (pArray != NULL)
		{
			for (long i = 0; i < lArraySize && SUCCEEDED(hr); i++)
			{
				hr = PrintEnum(pBuf, pEnumFormatter, strFmt, strEnumName, pArray[i], false);
				if (SUCCEEDED(hr) && i < (lArraySize - 1))
				{
					hr = pBuf->Write(chDelim, false);
				}
			}
		}
		else if (psa != NULL)
		{
			for (long i = 0; i < lArraySize && SUCCEEDED(hr); i++)
			{
				T enumVal;
				hr = ::SafeArrayGetElement(psa, &i, &enumVal);
				if (SUCCEEDED(hr))
				{
					hr = PrintEnum(pBuf, pEnumFormatter, strFmt, strEnumName, enumVal, false);
					if (SUCCEEDED(hr) && i < (lArraySize - 1))
					{
						hr = pBuf->Write(chDelim, false);
					}
				}
			}
		}
		else
		{
			ATLASSERT(false);
		}
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::PreprocessPrintfArrayFormatString(CStringA& strFmt, va_list& argList, long* plArraySize, T** ppArrayArg, SAFEARRAY** ppsaArrayArg, char* pchDelim)
{
	if (ppArrayArg == NULL)
		return E_POINTER;

	if (ppsaArrayArg == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	*ppArrayArg = NULL;
	*ppsaArrayArg = NULL;

	hr = PreprocessPrintfFormatString(strFmt, argList);
	if (SUCCEEDED(hr))
	{
		CStringA strDelimList;
		hr = PreprocessArrayFormatString(strFmt, plArraySize, strDelimList);
		if (SUCCEEDED(hr))
		{
			ATLASSERT(strDelimList.GetLength() == 1);
			*pchDelim = strDelimList.GetAt(0);

			if (strFmt.Find("$S") > 0)
			{
				SAFEARRAY* psa = va_arg(argList, SAFEARRAY*);
				if (psa == NULL)
					return E_INVALIDARG;

				strFmt.Replace("$S", "");

				hr = ValidateSafeArray<T>(psa);
				if (FAILED(hr))
					return hr;

				*ppsaArrayArg = psa;
			}
			else
			{
				// C-style array => size must be specified
				if (*plArraySize < 0)
					return E_UNEXPECTED;

				*ppArrayArg = va_arg(argList, T*);
				if (*ppArrayArg == NULL)
					return E_INVALIDARG;
			}

			if (*ppsaArrayArg != NULL)
			{
				// Make sure they don't specify a size greater than the actual SAFEARRAY
				long lUBound;
				hr = ::SafeArrayGetUBound(*ppsaArrayArg, 1, &lUBound);
				if (SUCCEEDED(hr))
				{
					if (*plArraySize > 0)
					{
						*plArraySize = min(*plArraySize, lUBound + 1);
					}
					else
					{
						*plArraySize = lUBound + 1;
					}
				}
			}
		}
	}

	return hr;
}

// Dummy specializations for unsupported SAFEARRAY types
template <>
inline HRESULT ValidateSafeArray<CString>(SAFEARRAY* psa, IErrorReporter* pErr)
{
	NTL_UNUSED(psa);
	NTL_UNUSED(pErr);

	return E_UNEXPECTED;
}

template <>
inline HRESULT ValidateSafeArray<LPCSTR>(SAFEARRAY* psa, IErrorReporter* pErr)
{
	NTL_UNUSED(psa);
	NTL_UNUSED(pErr);

	return E_UNEXPECTED;
}

template <typename T>
HRESULT CFormattedIo::PreprocessPrintfEnumArrayFormatString(CStringA& strFmt, va_list& argList, long* plArraySize, T** ppArrayArg, SAFEARRAY** ppsaArrayArg, char* pchDelim, CStringA& strEnumName)
{
	HRESULT hr = S_OK;

	hr = PreprocessPrintfFormatString(strFmt, argList, &strEnumName);
	if (SUCCEEDED(hr))
	{
		hr = PreprocessPrintfArrayFormatString(strFmt, argList, plArraySize, ppArrayArg, pchDelim, ppsaArrayArg);
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintInteger(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	hr = PreprocessPrintfFormatString(strFmt, argList);
	if (SUCCEEDED(hr))
	{
		int nIndex = strFmt.Find('b');
		if (nIndex > 0)
		{
			BYTE bVal = va_arg(argList, BYTE);

			// Remove 'b' modifier so CString::Format can handle it
			strFmt.Delete(nIndex);

			hr = PrintNumber(pBuf, strFmt, bVal);
		}
		else
		{
			nIndex = strFmt.Find('I');
			if (nIndex > 0)
			{
				__int64 llVal = va_arg(argList, __int64);

				// Replace 'I' modifier with "I64", which is what CString::Format uses for Int64
				strFmt.Replace("I", "I64");
				
				hr = PrintNumber(pBuf, strFmt, llVal);
			}
			else
			{
				if (strFmt.Find('h') > 0)
				{
					short sVal = va_arg(argList, short);
				
					hr = PrintNumber(pBuf, strFmt, sVal);
				}
				else
				{
					// Default is Int32 if no modifier is specified
					long lVal = va_arg(argList, long);

					hr = PrintNumber(pBuf, strFmt, lVal);
				}
			}
		}
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::PrintNumber(IIoBuffer* pBuf, const CStringA& strFmt, T val)
{
	HRESULT hr = S_OK;

	CStringA strResult;
	int n488ModifierIndex = strFmt.Find("@", 1);
	if (n488ModifierIndex > 0)
	{
		hr = Format488Number(strFmt, n488ModifierIndex, val, strResult);
	}
	else
	{
		strResult.Format(strFmt, val);		
	}

	if (SUCCEEDED(hr))
	{
		long cbActual;
		int nLen = strResult.GetLength();
		hr = pBuf->Write(strResult, &cbActual, false);
		if (SUCCEEDED(hr))
		{
			if (cbActual != nLen)
				hr = E_UNEXPECTED;
		}
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::Format488Number(const CStringA& strFmtIn, int nModifierIndex, T val, CStringA& strResult)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;

	CStringA str488Prefix;
	if (strFmt.GetAt(nModifierIndex + 1) == 'B')
	{
		// Special case handling for binary, since this is not supported by CString::Format
		hr = Format488BinaryNumber(strFmt, val, strResult);
	}
	else
	{
		// Remove any 'h', 'l', 'L', 'b', or 'I' modifier, since we'll be casting to fixed types
		char ch = strFmt.GetAt(strFmt.GetLength() - 2);
		if (ch == 'h' || ch == 'l' || ch == 'L' || ch == 'b' || ch == 'I')
		{
			strFmt.Delete(strFmt.GetLength() - 2, 1);
		}

		if (strFmt.GetAt(nModifierIndex + 1) == 'H')
		{
			str488Prefix = "#H";
			strFmt.SetAt(strFmt.GetLength() - 1, 'X');
			strFmt.Delete(nModifierIndex, 2);

			Format488Integer(strFmt, val, strResult);
		}
		else if (strFmt.GetAt(nModifierIndex + 1) == 'Q')
		{
			str488Prefix = "#Q";
			strFmt.SetAt(strFmt.GetLength() - 1, 'o');
			strFmt.Delete(nModifierIndex, 2);

			Format488Integer(strFmt, val, strResult);
		}
		else if (strFmt.GetAt(nModifierIndex + 1) == '1')
		{
			strFmt.Delete(nModifierIndex, 2);
			strFmt.SetAt(strFmt.GetLength() - 1, 'd');
			
			Format488Integer(strFmt, val, strResult);
		}
		else if (strFmt.GetAt(nModifierIndex + 1) == '2')
		{
			strFmt.SetAt(strFmt.GetLength() - 1, 'f');
			strFmt.Delete(nModifierIndex, 2);
			strResult.Format(strFmt, (double)val);
		}
		else if (strFmt.GetAt(nModifierIndex + 1) == '3')
		{
			strFmt.SetAt(strFmt.GetLength() - 1, 'E');
			strFmt.Delete(nModifierIndex, 2);
			strResult.Format(strFmt, (double)val);
		}
		else
		{
			ATLASSERT(!_T("Unexpected integer modifier"));
			hr = E_UNEXPECTED;
		}

		if (SUCCEEDED(hr) && !str488Prefix.IsEmpty())
		{
			// We must properly honor the field width and precision
			if (strFmt.Find('-') > 0)
			{
				// Left alignment => Result was padded on the right with spaces

				// Example: "#H001B   "  
				CStringA strNum = strResult.SpanExcluding(" ");
				CStringA strTrailingWhitespace = strResult.Mid(strNum.GetLength());
				strTrailingWhitespace.Delete(0, 2);
				strResult = str488Prefix + strNum + strTrailingWhitespace;
			}
			else
			{
				// Right alignment

				if (strResult.GetAt(0) == ' ')
				{
					// Result was padded on the left with spaces
					// Example: "    #H1B"
					CStringA strLeadingSpace = strResult.SpanIncluding(" ");
					strLeadingSpace.Delete(0, 2);
					strResult = strLeadingSpace + str488Prefix + strResult.Trim();
				}
				else if (strResult.GetAt(0) == '0')
				{
					// Result was padded on the left with zeros, but some of them 
					// may need to be preserved, based on the specified precision.
					// Example: "#H0001B"

					// We have to get the precision specified to see how many
					// leading zeros (if any) we can delete.
					int nPrecisionIndex = strFmt.Find('.');
					if (nPrecisionIndex > 0)
					{
						// A precision was specified, so get the value
						// and make sure the result is at least that long,
						// not including the 488 prefix
						int nPrecision = atoi(strFmt.Mid(nPrecisionIndex + 1));
						if (strResult.GetLength() > nPrecision)
						{
							strResult = strResult.Mid(1);
							if (strResult.GetLength() > nPrecision)
							{
								strResult = strResult.Mid(1);
							}
						}

						strResult = str488Prefix + strResult;
					}
					else
					{
						// No precision was specified, so we can delete
						// leading zeros.
						CStringA strLeadingZeros = strResult.SpanIncluding("0");
						strResult = strResult.Mid(strLeadingZeros.GetLength());
						strLeadingZeros.Delete(0, 2);
						strResult = str488Prefix + strLeadingZeros + strResult;
					}
				}
				else
				{
					strResult = str488Prefix + strResult;
				}
			}
		}
	}

	return hr;
}

template <typename T>
void CFormattedIo::Format488Integer(const CStringA& strFmt, T val, CStringA& strResult)
{
	strResult.Format(strFmt, (long)(val + 0.5));
}

template <>
inline void CFormattedIo::Format488Integer(const CStringA& strFmtIn, __int64 val, CStringA& strResult)
{
	// Add "I64" modifier required by CString
	CStringA strFmt = strFmtIn;
	strFmt.Insert(strFmt.GetLength() - 1, "I64");
	strResult.Format(strFmt, val);
}

template <typename T>
HRESULT CFormattedIo::Format488BinaryNumber(const CStringA& strFmtIn, T val, CStringA& strResult)
{
	HRESULT hr = S_OK;

	// We must manually convert and format the value, since
	// CString::Format does not handle binary conversion.

	// Remove "I64", if present, since we will interpret that as a field width
	CStringA strFmt = strFmtIn;
	strFmt.Replace("I64", "");

	// Check if a field width was specified
	int nFieldWidth = -1;
	int nPrecision = -1;
	bool bLeadingZero = false;
	for (int i = 0; i < (int)strFmt.GetLength(); i++)
	{
		if (strFmt.GetAt(i) == '.')
		{
			// Found precision specified first, so no field width is present
			nPrecision = atoi(strFmt.Mid(i + 1));
			break;
		}

		if (!bLeadingZero && nFieldWidth < 0 && strFmt.GetAt(i) == '0')
		{
			bLeadingZero = true;
			continue;
		}

		if (IsDigit(strFmt.GetAt(i)))
		{
			nFieldWidth = atoi(strFmt.Mid(i));
		}
	}

	IntegerToBinaryString(val, strResult);

	// Add leading zeros, if necessary, to satisfy any requested precision
	while (strResult.GetLength() < nPrecision)
		strResult = '0' + strResult;

	strResult = "#B" + strResult;

	if (nFieldWidth > 0 && nFieldWidth > strResult.GetLength())
	{
		// We need to align and pad properly
		if (strFmt.Find('-') > 0)
		{
			// Left align
			// We always pad with spaces, since padding with zeros would
			// change the numeric value.
			while (strResult.GetLength() < nFieldWidth)
				strResult.AppendChar(' ');
		}
		else
		{
			// Right align
			if (bLeadingZero && nPrecision < 0)
			{
				// Pad with zeros (but only if the precision wasn't specified)
				while (strResult.GetLength() < nFieldWidth)
					strResult.Insert(2, '0');
			}
			else
			{
				// Pad with spaces
				while (strResult.GetLength() < nFieldWidth)
					strResult.Insert(0, ' ');
			}
		}
	}

	return hr;
}

template <typename T>
void CFormattedIo::IntegerToBinaryString(T val, CStringA& strResult)
{
	char szVal[100];
	_itoa_s((long)(val + 0.5), szVal, 100, 2);

	strResult = szVal;
}


template <>
inline void CFormattedIo::IntegerToBinaryString(__int64 val, CStringA& strResult)
{
	char szVal[100];
	_i64toa_s((__int64)(val + 0.5), szVal, 100, 2);

	strResult = szVal;
}

inline HRESULT CFormattedIo::PrintFloat(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	hr = PreprocessPrintfFormatString(strFmt, argList);
	if (SUCCEEDED(hr))
	{
		// Note that we always pop a double irrespective of an 'l' or 'L' modifier.
		// This is because floats are extended to double on the stack.
		double dVal = va_arg(argList, double);

		hr = PrintNumber(pBuf, strFmt, dVal);
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintIntegerArray(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	int nIndex = strFmt.Find('b');
	if (nIndex > 0)
	{
		// Remove 'b' modifier so CString::Format can handle it
		strFmt.Delete(nIndex);

		hr = PrintNumericArray<BYTE>(pBuf, strFmt, argList);
	}
	else
	{
		nIndex = strFmt.Find('I');
		if (nIndex > 0)
		{
			// Replace 'I' modifier with "I64", which is what CString::Format uses for Int64.
			strFmt.Replace("I", "I64");

			hr = PrintNumericArray<__int64>(pBuf, strFmt, argList);
		}
		else
		{
			if (strFmt.Find('h') > 0)
			{
				hr = PrintNumericArray<short>(pBuf, strFmt, argList);
			}
			else
			{
				// Default is Int32 if no modifier is specified
				hr = PrintNumericArray<long>(pBuf, strFmt, argList);
			}
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintFloatArray(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	if (strFmt.Find('L') > 0)
	{
		hr = PrintNumericArray<long double>(pBuf, strFmt, argList);
	}
	else if (strFmt.Find('l') > 0)
	{
		hr = PrintNumericArray<double>(pBuf, strFmt, argList);
	}
	else
	{
		hr = PrintNumericArray<float>(pBuf, strFmt, argList);
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::PrintNumericArray(IIoBuffer* pBuf, const CStringA& strFmtIn, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;			

	long lArraySize;
	T* pArray = NULL;
	SAFEARRAY* psa = NULL;
	char chDelim;
	hr = PreprocessPrintfArrayFormatString<T>(strFmt, argList, &lArraySize, &pArray, &psa, &chDelim);
	if (SUCCEEDED(hr))
	{
		if (psa != NULL)
		{
			hr = ::SafeArrayAccessData(psa, (void**)&pArray);
		}

		for (int i = 0; i < lArraySize && SUCCEEDED(hr); i++)
		{
			hr = PrintNumber(pBuf, strFmt, pArray[i]);
			if (SUCCEEDED(hr) && i < (lArraySize - 1))
			{
				hr = pBuf->Write(chDelim, false);
			}
		}

		if (psa != NULL)
		{
			HRESULT hr2 = ::SafeArrayUnaccessData(psa);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::Print488Block(IIoBuffer* pBuf, FormatStringToken token, va_list& argList, bool isDefiniteLength)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	char ch = strFmt.GetAt(strFmt.GetLength() - 2);

	if (ch == 'h')
	{
		hr = Print488Block<short>(pBuf, strFmt, argList, isDefiniteLength);
	}
	else if (ch == 'l')
	{
		hr = Print488Block<long>(pBuf, strFmt, argList, isDefiniteLength);
	}
	else if (ch == 'I')
	{
		hr = Print488Block<__int64>(pBuf, strFmt, argList, isDefiniteLength);
	}
	else if (ch == 'z')
	{
		hr = Print488Block<float>(pBuf, strFmt, argList, isDefiniteLength);
	}
	else if (ch == 'Z')
	{
		hr = Print488Block<double>(pBuf, strFmt, argList, isDefiniteLength);
	}
	else
	{
		// Default is BYTE for definite blocks
		hr = Print488Block<BYTE>(pBuf, strFmt, argList, isDefiniteLength);
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::Print488Block(IIoBuffer* pBuf, const CStringA& strFmtIn, va_list& argList, bool isDefiniteLength)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;

	hr = PreprocessPrintfFormatString(strFmt, argList);
	if (SUCCEEDED(hr))
	{
		// Check if the array size has been specified
		long lArraySize = -1;
		for (int i = 0; i < (int)strFmt.GetLength(); i++)
		{
			if (IsDigit(strFmt.GetAt(i)))
			{
				lArraySize = atoi(strFmt.Mid(i));
				break;
			}
		}

		T* pArray = NULL;

		SAFEARRAY* psa = NULL;
		if (strFmt.Find("$S") > 0)
		{
			// SafeArray
			psa = va_arg(argList, SAFEARRAY*);
			if (psa == NULL)
				return E_INVALIDARG;

			hr = ::SafeArrayAccessData(psa, (void**)&pArray);
			if (SUCCEEDED(hr))
			{
				long lUBound;
				hr = ::SafeArrayGetUBound(psa, 1, &lUBound);
				if (SUCCEEDED(hr))
				{
					if (lArraySize > 0)
					{
						lArraySize = min(lArraySize, lUBound + 1);
					}
					else
					{
						lArraySize = lUBound + 1;
					}
				}
			}
		}
		else
		{
			// C-style array
			// Size must be specified
			if (lArraySize < 0)
				return E_UNEXPECTED;

			pArray = va_arg(argList, T*);
			if (pArray == NULL)
				return E_INVALIDARG;
		}

		if (isDefiniteLength)
		{
			// Write out the definite block header
			CStringA strBlockSize;
			strBlockSize.Format("%d", lArraySize * sizeof(T));

			CStringA strHeader;
			strHeader.Format("#%d%s", strBlockSize.GetLength(), strBlockSize);

			hr = pBuf->Write(strHeader, NULL, false);
		}
		else
		{
			// Write out the indefinite block header
			hr = pBuf->Write("#0", NULL, false);
		}

		if (SUCCEEDED(hr))
		{
			for (int i = 0; i < lArraySize && SUCCEEDED(hr); i++)
			{
				T val = pArray[i];
				if (pBuf->GetBigEndian())
				{
					hr = SwapBytes(val);
				}

				if (SUCCEEDED(hr))
				{
					long cbDesired = sizeof(T);
					long cbActual;
					hr = pBuf->Write((BYTE*)&val, cbDesired, &cbActual, false);
					if (SUCCEEDED(hr))
					{
						if (cbActual != cbDesired)
							return E_UNEXPECTED;
					}
				}
			}

			if (!isDefiniteLength)
			{
				long cbActual;
				hr = pBuf->Write("\n", &cbActual, false);
				if (SUCCEEDED(hr))
				{
					if (cbActual != 1)
						return E_UNEXPECTED;
				}
			}
		}

		if (psa != NULL)
		{
			HRESULT hr2 = ::SafeArrayUnaccessData(psa);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::PrintRawBinary(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	char ch = strFmt.GetAt(strFmt.GetLength() - 2);

	if (ch == 'h')
	{
		hr = PrintRawBinary<short>(pBuf, strFmt, argList);
	}
	else if (ch == 'l' && 
		strFmt.GetAt(strFmt.GetLength() - 3) != 'o')	// handle swap modifier "!ol"
	{
		hr = PrintRawBinary<long>(pBuf, strFmt, argList);
	}
	else if (ch == 'I')
	{
		hr = PrintRawBinary<__int64>(pBuf, strFmt, argList);
	}
	else
	{
		// Default format for %y is BYTE
		hr = PrintRawBinary<BYTE>(pBuf, strFmt, argList);
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::PrintRawBinary(IIoBuffer* pBuf, const CStringA& strFmtIn, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;

	hr = PreprocessPrintfFormatString(strFmt, argList);
	if (SUCCEEDED(hr))
	{
		// Check if the array size has been specified
		long lArraySize = -1;
		for (int i = 0; i < (int)strFmt.GetLength(); i++)
		{
			if (IsDigit(strFmt.GetAt(i)))
			{
				lArraySize = atoi(strFmt.Mid(i));
				break;
			}
		}

		T* pArray = NULL;
		long lActualArraySize;
		SAFEARRAY* psa = NULL;
		hr = GetInputArrayArgument(strFmt, argList, &pArray, &lActualArraySize, &psa);
		if (SUCCEEDED(hr))
		{
			if (strFmt.Find("$S") < 0)
			{
				// C-style arrays must have an array size specified
				if (lArraySize < 0)
					return E_UNEXPECTED;
			}
			else if (lArraySize < 0)
			{
				lArraySize = lActualArraySize;
			}

			if (strFmt.Find("!ol") > 0)
			{
				// Little-endian byte order, which is machine native, so we can write the data directly
				long cbDesired = lArraySize * sizeof(T);
				long cbActual;
				hr = pBuf->Write((BYTE*)pArray, cbDesired, &cbActual, false);
				if (SUCCEEDED(hr))
				{
					if (cbActual != cbDesired)
						hr = E_UNEXPECTED;
				}
			}
			else
			{
				// Big endian byte ordering, so we must do the byte swapping
				for (int i = 0; i < lArraySize && SUCCEEDED(hr); i++)
				{
					T swappedVal = pArray[i];
					hr = SwapBytes(swappedVal);
					if (SUCCEEDED(hr))
					{
						long cbDesired = sizeof(T);
						long cbActual;
						hr = pBuf->Write((BYTE*)&swappedVal, cbDesired, &cbActual, false);
						if (SUCCEEDED(hr))
						{
							if (cbActual != cbDesired)
								hr = E_UNEXPECTED;
						}
					}
				}
			}
		}

		if (psa != NULL)
		{
			HRESULT hr2 = ::SafeArrayUnaccessData(psa);
			hr = FAILED(hr) ? hr : hr2;
		}
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::GetInputArrayArgument(const CStringA& strFmt, va_list& argList, T** ppArrayArg, long* plArraySize, SAFEARRAY** ppsaArrayArg)
{
	HRESULT hr = S_OK;

	if (ppArrayArg == NULL)
		return E_POINTER;

	if (ppsaArrayArg == NULL)
		return E_POINTER;

	*ppArrayArg = NULL;
	*ppsaArrayArg = NULL;

	SAFEARRAY* psa = NULL;
	if (strFmt.Find("$S") > 0)
	{
		// SafeArray
		psa = va_arg(argList, SAFEARRAY*);
		if (psa == NULL)
			return E_INVALIDARG;

		hr = ::SafeArrayAccessData(psa, (void**)ppArrayArg);
		if (SUCCEEDED(hr))
		{
			long lUBound;
			hr = ::SafeArrayGetUBound(psa, 1, &lUBound);
			if (SUCCEEDED(hr))
			{
				*plArraySize = lUBound + 1;
				*ppsaArrayArg = psa;
			}
		}
	}
	else
	{
		// C-style array
		// Size must be specified
		*ppArrayArg = va_arg(argList, T*);
		if (*ppArrayArg == NULL)
			return E_INVALIDARG;

		*plArraySize = -1;
	}

	return hr;
}

inline HRESULT CFormattedIo::PreprocessPrintfFormatString(CStringA& strFmt, va_list& argList, CStringA* pstrEnumName)
{
	HRESULT hr = S_OK;

	if (pstrEnumName != NULL)
	{
		// Remove the enum name specifier
		hr = ParseEnumSpecifierFromFormatString(strFmt, pstrEnumName);
		if (FAILED(hr))
			return hr;
	}

	// Replace any '*' specifiers with an argument from the stack
	int nIndex = 0;
	while ((nIndex = strFmt.Find('*')) > 0)
	{
		// Field width, precision, and array size parameters are always int's, as per the VISA spec
		int nArg = va_arg(argList, int);

		CStringA strArg;
		strArg.Format("%d", nArg);

		strFmt = strFmt.Mid(0, nIndex) + strArg + strFmt.Mid(nIndex + 1);
	}

	return hr;
}

///////////////////////////////////////////////////////////////
//
//   Scanf
//
//		HRESULT Return Values:
//		E_INVALIDARG
//			- Format string is null or has an invalid format specifier.
//			- IIoBuffer pointer is null.
//			- Chunk size is <= 0.
//		E_UNEXPECTED
//			- Input data did not match format string.

inline HRESULT CFormattedIo::Scanf(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = VScanf(pBuf, pEnumFormatter, strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CFormattedIo::Scanf(const CString& strBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = VScanf(strBuf, pEnumFormatter, strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CFormattedIo::Scanf(LPCSTR pszBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = VScanf(pszBuf, pEnumFormatter, strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CFormattedIo::Scanf(BYTE* pBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...)
{
	HRESULT hr = S_OK;

	va_list argList;
	va_start(argList, strFormat);

	hr = VScanf(pBuf, cbBuf, pEnumFormatter, strFormat, argList);

	va_end(argList);

	return hr;
}

inline HRESULT CFormattedIo::VScanf(const CString& strBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList)
{
	HRESULT hr = S_OK;

	CT2A szBuf(strBuf);
	hr = VScanf(LPCSTR(szBuf), pEnumFormatter, strFormat, argList);

	return hr;
}

inline HRESULT CFormattedIo::VScanf(LPCSTR pszBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList)
{
	HRESULT hr = S_OK;

	hr = VScanf((BYTE*)pszBuf, (long)strlen(pszBuf), pEnumFormatter, strFormat, argList);

	return hr;
}

inline HRESULT CFormattedIo::VScanf(BYTE* pBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList)
{
	HRESULT hr = S_OK;

	CMemoryBuffer memBuf(pBuf, cbBuf, NULL, 0);
	hr = VScanf(&memBuf, pEnumFormatter, strFormat, argList);

	return hr;
}

inline HRESULT CFormattedIo::VScanf(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList)
{
	if (pBuf == NULL)
		return E_INVALIDARG;

	long lLen = strFormat.GetLength();
	if (lLen == 0)
		return S_OK;

	CT2A szTemp(strFormat);
	LPCSTR pszFormat = szTemp.m_psz;

	HRESULT hr = S_OK;

	CAtlArray<FormatStringToken> rgTokens;
	hr = ParseScanfFormatString(pszFormat, rgTokens);
	hr = FAILED(hr) ? hr : S_DATA_AVAILABLE;
	
	for (int i = 0; i < (int)rgTokens.GetCount() && hr == S_DATA_AVAILABLE; i++)
	{
		FormatStringToken token = rgTokens.GetAt(i);
 
		switch (token.m_nType)
		{
			case SCANF_LITERAL_CHARS:
			{
				hr = ScanLiteralChars(pBuf, token);
				break;
			}						
			case SCANF_CHAR:
			{
				hr = ScanCharacters(pBuf, token, argList);
				break;
			}						
			case SCANF_CHARS_UNTIL_LINEFEED:
			{
				hr = ScanCharactersUntilLinefeed(pBuf, token, argList);
				break;
			}						
			case SCANF_CHARS_UNTIL_END:
			{
				hr = ScanCharactersUntilEnd(pBuf, token, argList);
				break;
			}						
			case SCANF_STRING_NO_WHITESPACE:
			{
				hr = ScanStringNoWhitespace(pBuf, token, argList);
				break;
			}						
			case SCANF_STRING_WITH_WHITESPACE:
			{
				hr = ScanStringWithWhitespace(pBuf, token, argList);
				break;
			}						
			case SCANF_STRING_ARRAY:
			{
				hr = ScanStringArray(pBuf, NULL, token, argList);
				break;
			}						
			case SCANF_INTEGER:
			{
				hr = ScanInteger(pBuf, token, argList);
				break;
			}						
			case SCANF_INTEGER_ARRAY:
			{
				hr = ScanIntegerArray(pBuf, token, argList);
				break;
			}						
			case SCANF_FLOAT:
			{
				hr = ScanFloat(pBuf, token, argList);
				break;
			}						
			case SCANF_FLOAT_ARRAY:
			{
				hr = ScanFloatArray(pBuf, token, argList);
				break;
			}						
			case SCANF_DEFINITE_BLOCK:
			{
				hr = Scan488Block(pBuf, token, argList);
				break;
			}						
			case SCANF_RAW_BINARY:
			{
				hr = ScanRawBinary(pBuf, token, argList);
				break;
			}	
			case SCANF_ENUM_NO_WHITESPACE:
			{
				hr = ScanEnumNoWhitespace(pBuf, pEnumFormatter, token, argList);
				break;
			}
			case SCANF_ENUM_WITH_WHITESPACE:
			{
				hr = ScanEnumWithWhitespace(pBuf, pEnumFormatter, token, argList);
				break;
			}
			case SCANF_ENUM_ARRAY:
			{
				hr = ScanEnumArray(pBuf, pEnumFormatter, token, argList);
				break;
			}
			default:
			{
				ATLASSERT(!_T("Unexpected Scanf format string token."));
				hr = E_INVALIDARG;
				break;
			}
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::ScanLiteralChars(IIoBuffer* pBuf, FormatStringToken token)
{
	HRESULT hr = S_DATA_AVAILABLE;

	CStringA strFmt(token.m_psz, token.m_lLen);

	// Input stream must match format string, character by character.  Whitespace characters
	// in the format string need not have corresponding whitespace characters in the input stream,
	// but if there are then a single whitespace character in the format string matches all 
	// consecutive whitespace characters in the input.
	for (int i = 0; i < strFmt.GetLength() && hr == S_DATA_AVAILABLE; i++)
	{
		char chExpected = strFmt.GetAt(i);

		if (chExpected == '%' && i > 0 && strFmt.GetAt(i-1) == '%')
		{
			// The second percent ('%') of a double-percent ('%%') was encountered.  A double percent
			// is used to indicate a single literal percent character should be scanned.  The first
			// percent of the pair was already scanned, so we simply continue;
			continue;
		}

		char chActual;
		hr = pBuf->Read(chActual);
		if (SUCCEEDED(hr))
		{
			if (isspace(chExpected))
			{
				// Skip all whitespace in format string
				while (i < strFmt.GetLength() && isspace(chExpected))
				{
					chExpected = strFmt.GetAt(i);
					i++;
				}

				// If we're at the end of the format string, we're done
				if (i == strFmt.GetLength())
				{
					if (!isspace(chActual))
					{
						HRESULT hr2 = pBuf->UnReadChar();
						hr = FAILED(hr2) ? hr2 : hr;
					}
					break;
				}

				i--;

				// Skip all whitespace in input stream
				while (hr == S_DATA_AVAILABLE && isspace(chActual))
				{
					hr = pBuf->Read(chActual);
				}

				if (SUCCEEDED(hr))
				{
					hr = chActual == chExpected ? hr : E_UNEXPECTED;
				}
			}
			else
			{
				// Format string is not a whitespace, so the input must match
				hr = chActual == chExpected ? hr : E_UNEXPECTED;
			}
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::ScanCharacters(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	bool bSuppressAssignment;
	long lFieldWidth;
	long* pFieldWidthArg = NULL;
	hr = PreprocessScanfFormatString(strFmt, argList, &bSuppressAssignment, &lFieldWidth, &pFieldWidthArg);
	if (SUCCEEDED(hr))
	{
		// Default field width for %c is 1
		lFieldWidth = lFieldWidth > 0 ? lFieldWidth : 1;

		long cbExpected = lFieldWidth;
		long cbActual;
		if (bSuppressAssignment)
		{
			// User didn't pass in a buffer argument, so we must allocate a temp one
			char* pBufTemp = (char*)::malloc(lFieldWidth);
			if (FAILED(hr))
				return E_OUTOFMEMORY;

			hr = pBuf->Read(pBufTemp, cbExpected, &cbActual, false);
			
			::free(pBufTemp);
		}
		else
		{
			// Read directly into the user-provided buffer
			LPSTR pszArg = va_arg(argList, LPSTR);
			if (pszArg == NULL)
				return E_INVALIDARG;

			hr = pBuf->Read(pszArg, cbExpected, &cbActual, false);
			if (SUCCEEDED(hr) && pFieldWidthArg != NULL)
			{
				*pFieldWidthArg = cbActual;
			}
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::ScanCharactersUntilLinefeed(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	hr = ScanString(pBuf, token, argList, "\n", NULL, ScanPastMaxChars | AppendStopChar | AddNullTerminator);

	return hr;
}

inline HRESULT CFormattedIo::ScanCharactersUntilEnd(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	hr = ScanString(pBuf, token, argList, NULL, NULL, ScanPastMaxChars | AddNullTerminator);

	return hr;
}

inline HRESULT CFormattedIo::ScanStringNoWhitespace(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	hr = ScanString(pBuf, token, argList, " ", NULL, IgnoreWhitespace | ScanPastMaxChars |  AddNullTerminator);

	return hr;
}

inline HRESULT CFormattedIo::ScanStringWithWhitespace(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strCharSetFmt;
	char szDelim[2];
	hr = GetDelimiterListAndCharSet(token, szDelim, strCharSetFmt);
	if (SUCCEEDED(hr))
	{
		hr = ScanString(pBuf, token, argList, szDelim[0] == NULL ? NULL : szDelim, strCharSetFmt, AddNullTerminator | AdjustMaxCharsOnVariableFieldWidth);
	}

	return hr;
}

inline HRESULT CFormattedIo::GetDelimiterListAndCharSet(FormatStringToken token, LPSTR pszDelim, CStringA& strCharSetFmt)
{
	HRESULT hr = S_OK;

	// Make a format string that is suitable for use with sscanf on individual characters.
	// It should be of the form "%1[^abcd]".  Note the field width of 1 is critical.
	CStringA strFmt(token.m_psz, token.m_lLen);
	int nLBracketIndex = strFmt.Find('[');
	if (nLBracketIndex < 0)
		return E_INVALIDARG;

	int nRBracketIndex = strFmt.Find(']');
	if (nRBracketIndex < 0)
		return E_INVALIDARG;

	// Optimize for single-character case
	int nCharSetLen = nRBracketIndex - nLBracketIndex - 1;
	pszDelim[0] = NULL;
	pszDelim[1] = NULL;
	strCharSetFmt.Empty();
	if (nCharSetLen == 2 && strFmt.GetAt(nLBracketIndex + 1) == '^')
	{
		pszDelim[0] = strFmt.GetAt(nLBracketIndex + 2);
	}
	else
	{
		strCharSetFmt = "%1" + strFmt.Mid(nLBracketIndex, nCharSetLen + 2);
	}

	return hr;
}

inline HRESULT CFormattedIo::ScanStringArray(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	if (strFmt.Find("$B") > 0 )
	{
		hr = ScanStringArray<BSTR>(pBuf, pEnumFormatter, strFmt, argList, 0);
	}
	else if (strFmt.Find("$C") > 0 )
	{
		hr = ScanStringArray<CString>(pBuf, pEnumFormatter, strFmt, argList, 0);
	}
	else 
	{
		hr = ScanStringArray<LPSTR>(pBuf, pEnumFormatter, strFmt, argList, 0);
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::ScanStringArray(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CStringA& strFmtIn, va_list& argList, int fOptions)
{
	HRESULT hr = S_OK;

	CStringA strFmt  = strFmtIn;

	bool bSuppressAssignment;
	long lFieldWidth;
	long lArraySize;
	long* plArraySizeArg = NULL;
	CStringA strDelimList;
	CStringA strEnumName;
	T* pArrayArg = NULL;
	SAFEARRAY** ppsaArrayArg = NULL;
	hr = PreprocessScanfArrayFormatString(strFmt, argList, &bSuppressAssignment, &lFieldWidth, &lArraySize, &plArraySizeArg, &pArrayArg, &ppsaArrayArg, strDelimList, &strEnumName);
	if (SUCCEEDED(hr))
	{
		// The field width must be specified if the output is a C-style string
		if (lFieldWidth < 0 && strFmt.Find("$B") < 0 && strFmt.Find("$C") < 0 && strEnumName.IsEmpty())
			return E_UNEXPECTED;

		if (strFmt.Right(2).GetAt(0) == 'Q')
		{
			fOptions |= Quoted | StripQuotes;
		}
		else if (strFmt.Right(2).GetAt(0) == 'q')
		{
			fOptions |= Quoted;
		}

		// Leading whitespace should not be considered if spaces are in the delimiter list
		if (strDelimList.Find(' ') >= 0)
		{
			fOptions |= IgnoreWhitespace;
		}

		hr = S_DATA_AVAILABLE;

		CAtlArray<T> rgElements;
		long cElementsActual = 0;
		while (cElementsActual != lArraySize && hr == S_DATA_AVAILABLE)
		{
			CString str; 
			char chLastCharRead;
			hr = ScanString(pBuf, lFieldWidth, NULL, strDelimList, NULL, fOptions | DiscardStopChar, &str, &chLastCharRead);
			if (SUCCEEDED(hr))
			{
				cElementsActual++;

				if (pArrayArg != NULL || ppsaArrayArg != NULL)
				{
					if (fOptions & IgnoreWhitespace)
					{
						str.Trim();
					}

					if (fOptions & StripQuotes)
					{
						if ((str.GetAt(0) == '"' && str.Right(1).GetAt(0) == '"' ) || 
							(str.GetAt(0) == '\'' && str.Right(1).GetAt(0) == '\''))
						{
							str = str.Mid(1, str.GetLength() - 2);
							str.Trim();
						}
					}

					// For C-style arrays, we assign each element as we go, whereas for 
					// SAFEARRAYs we collect them and assign them all at the end.
					if (pArrayArg != NULL)
					{
						HRESULT hr2 = AssignStringArrayElement(str, pEnumFormatter, strEnumName, lFieldWidth, cElementsActual - 1, pArrayArg);
						hr = FAILED(hr2) ? hr2 : hr;
					}
					else if (ppsaArrayArg != NULL)
					{
						T val;
						HRESULT hr2 = ConvertStringToArg(str, pEnumFormatter, strEnumName, val);
						hr = FAILED(hr2) ? hr2 : hr;
						if (SUCCEEDED(hr))
						{
							rgElements.Add(val);
						}
					}
				}

				// We're done if we didn't read a delimiter after the string
				if (chLastCharRead == NULL || strDelimList.Find(chLastCharRead) < 0)
					break;
				
				// If the delimiter we read was a whitespace, then we need to keep eating whitespace
				if (isspace(chLastCharRead) && hr == S_DATA_AVAILABLE)
				{
					hr = SkipWhitespace(pBuf, chLastCharRead);
					if (SUCCEEDED(hr))
					{
						// Stop if char after whitespace is not a delimiter
						if (strDelimList.Find(chLastCharRead) < 0)
							break;
					}
				}
			} 
		}

		if (SUCCEEDED(hr) && ppsaArrayArg != NULL)
		{
			// Free any SAFEARRAY memory passed in to avoid a leak
			if (*ppsaArrayArg != NULL)
			{
				HRESULT hr2 = ::SafeArrayDestroy(*ppsaArrayArg);
				hr = FAILED(hr2) ? hr2 : hr;
			}

			if (SUCCEEDED(hr))
			{
				HRESULT hr2 = AssignStringSafeArray(rgElements, ppsaArrayArg);
				hr = FAILED(hr2) ? hr2 : hr;
			}
		}

		if (SUCCEEDED(hr) && plArraySizeArg != NULL)
		{
			*plArraySizeArg = cElementsActual;
		}
	}

	return hr;
}

template <> 
inline HRESULT CFormattedIo::AssignStringArrayElement(const CString& strIn, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, long lFieldWidth, int nIndex, LPSTR* pArrayArg)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(pEnumFormatter);
	NTL_UNUSED(strEnumName);

	CT2A sz = strIn;

	// Field width does not include the NULL
	::strncpy_s(pArrayArg[nIndex], lFieldWidth + 1, sz.m_psz, lFieldWidth);

	return hr;
}

template <> 
inline HRESULT CFormattedIo::AssignStringArrayElement(const CString& strIn, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, long lFieldWidth, int nIndex, BSTR* pArrayArg)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(pEnumFormatter);
	NTL_UNUSED(strEnumName);
	NTL_UNUSED(lFieldWidth);

	pArrayArg[nIndex] = strIn.AllocSysString();

	return hr;
}

template <> 
inline HRESULT CFormattedIo::AssignStringArrayElement(const CString& strIn, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, long lFieldWidth, int nIndex, CString* pArrayArg)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(pEnumFormatter);
	NTL_UNUSED(strEnumName);
	NTL_UNUSED(lFieldWidth);

	pArrayArg[nIndex] = strIn;

	return hr;
}

template <> 
inline HRESULT CFormattedIo::AssignStringArrayElement(const CString& strIn, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, long lFieldWidth, int nIndex, long* pArrayArg)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(lFieldWidth);

	ATLASSERT(pEnumFormatter != NULL);

	long lVal;
	hr = pEnumFormatter->EnumFromStringEx(CString(strEnumName), strIn, lVal);
	if (SUCCEEDED(hr))
	{
		pArrayArg[nIndex] = lVal;
	}

	return hr;
}

template <> 
inline HRESULT CFormattedIo::AssignStringArrayElement(const CString& strIn, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, long lFieldWidth, int nIndex, short* pArrayArg)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(lFieldWidth);

	ATLASSERT(pEnumFormatter != NULL);

	long lVal;
	hr = pEnumFormatter->EnumFromStringEx(CString(strEnumName), strIn, lVal);
	if (SUCCEEDED(hr))
	{
		pArrayArg[nIndex] = (short)lVal;
	}

	return hr;
}

template <>
inline HRESULT CFormattedIo::ConvertStringToArg(const CString& strIn, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, BSTR& bstrOut)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(pEnumFormatter);
	NTL_UNUSED(strEnumName);

	bstrOut = strIn.AllocSysString();

	return hr;
}

template <>
inline HRESULT CFormattedIo::ConvertStringToArg(const CString& strEnumVal, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, long& lEnumVal)
{
	HRESULT hr = S_OK;

	ATLASSERT(pEnumFormatter != NULL);

	hr = pEnumFormatter->EnumFromStringEx(CString(strEnumName), strEnumVal, lEnumVal);

	return hr;
}

template <>
inline HRESULT CFormattedIo::ConvertStringToArg(const CString& strEnumVal, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, short& sBoolVal)
{
	HRESULT hr = S_OK;

	ATLASSERT(pEnumFormatter != NULL);

	long lBoolVal;
	hr = pEnumFormatter->EnumFromStringEx(CString(strEnumName), strEnumVal, lBoolVal);
	if (SUCCEEDED(hr))
	{
		sBoolVal = (short)lBoolVal;
	}

	return hr;
}

template <>
inline HRESULT CFormattedIo::ConvertStringToArg(const CString& strEnumVal, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, CString& strVal)
{
	NTL_UNUSED(strEnumVal);
	NTL_UNUSED(pEnumFormatter);
	NTL_UNUSED(strEnumName);
	NTL_UNUSED(strVal);

	ATLASSERT(false);

	return E_UNEXPECTED;
}

template <>
inline HRESULT CFormattedIo::ConvertStringToArg(const CString& strEnumVal, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, LPSTR& szVal)
{
	NTL_UNUSED(strEnumVal);
	NTL_UNUSED(pEnumFormatter);
	NTL_UNUSED(strEnumName);
	NTL_UNUSED(szVal);

	ATLASSERT(false);

	return E_UNEXPECTED;
}

template <typename T>
HRESULT CFormattedIo::AssignStringSafeArray(CAtlArray<T>& rgElements, SAFEARRAY** ppsa)
{
	if (ppsa == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	CComSafeArray<T> sa;
	sa.Create((ULONG)rgElements.GetCount());

	for (int i = 0; i < (int)rgElements.GetCount(); i++)
	{
		sa.SetAt(i, rgElements[i], false);
	}

	*ppsa = sa.Detach();

	return hr;
}

template <>
inline HRESULT CFormattedIo::AssignStringSafeArray(CAtlArray<LPSTR>& rgElements, SAFEARRAY** ppsa)
{
	NTL_UNUSED(rgElements);
	NTL_UNUSED(ppsa);

	ATLASSERT(false);

	return E_UNEXPECTED;
}

template <>
inline HRESULT CFormattedIo::AssignStringSafeArray(CAtlArray<CString>& rgElements, SAFEARRAY** ppsa)
{
	NTL_UNUSED(rgElements);
	NTL_UNUSED(ppsa);

	ATLASSERT(false);

	return E_UNEXPECTED;
}

inline HRESULT CFormattedIo::ScanEnumNoWhitespace(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList)
{
	if (pEnumFormatter == NULL)
	{
		ATLASSERT(!_T("Enum format specifier encountered with no enum formatter object provided."));
		return E_INVALIDARG;
	}

	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	// Note that we ignore the field width for enum strings.
	bool bSuppressAssignment;
	long* pFieldWidthArg = NULL;
	CStringA strEnumName;
	hr = PreprocessScanfFormatString(strFmt, argList, &bSuppressAssignment, NULL, &pFieldWidthArg, &strEnumName);
	if (SUCCEEDED(hr))
	{
		// Allocate a buffer to hold the scanned string
		long lMaxChars = pEnumFormatter->GetMaxStringLength(CString(strEnumName));	
	
		int fOptions = IgnoreWhitespace | AddNullTerminator;
		if (strFmt.Right(2).GetAt(0) == 'Q')
		{
			fOptions |= Quoted | StripQuotes;
			lMaxChars += 2;
		}
		else if (strFmt.Right(2).GetAt(0) == 'q')
		{
			fOptions |= Quoted;
			lMaxChars += 2;
		}

		LPSTR pszEnum = NULL;
		if (!bSuppressAssignment)
		{
			pszEnum = (LPSTR)::malloc(lMaxChars + 1);	// Account for terminating NULL
			if (pszEnum == NULL)
				return E_OUTOFMEMORY;
		}

		hr = ScanString(pBuf, lMaxChars, pFieldWidthArg, " ", NULL, fOptions, pszEnum);
		if (SUCCEEDED(hr) && !bSuppressAssignment)
		{
			if (strEnumName.CompareNoCase("VARIANT_BOOL") == 0)
			{
				short* psBoolArg = va_arg(argList, short*);
				if (psBoolArg == NULL)
					return E_INVALIDARG;

				long lVal;
				HRESULT hr2 = pEnumFormatter->EnumFromStringEx(CString(strEnumName), CString(pszEnum), lVal);
				hr = FAILED(hr2) ? hr2 : hr;
				if (SUCCEEDED(hr))
				{
					*psBoolArg = (short)lVal;
				}
			}
			else
			{
				long* plEnumArg = va_arg(argList, long*);
				if (plEnumArg == NULL)
					return E_INVALIDARG;

				HRESULT hr2 = pEnumFormatter->EnumFromStringEx(CString(strEnumName), CString(pszEnum), *plEnumArg);
				hr = FAILED(hr2) ? hr2 : hr;
			}
		}

		if (pszEnum != NULL)
		{
			::free(pszEnum);
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::ScanEnumWithWhitespace(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList)
{
	if (pEnumFormatter == NULL)
	{
		ATLASSERT(!_T("Enum format specifier encountered with no enum formatter object provided."));
		return E_INVALIDARG;
	}

	HRESULT hr = S_OK;

	CStringA strCharSetFmt;
	char szDelim[2];
	hr = GetDelimiterListAndCharSet(token, szDelim, strCharSetFmt);
	if (SUCCEEDED(hr))
	{
		//hr = ScanString(pBuf, token, argList, szDelim[0] == NULL ? NULL : szDelim, strCharSetFmt, AddNullTerminator | AdjustMaxCharsOnVariableFieldWidth);

		CStringA strFmt(token.m_psz, token.m_lLen);

		// Note that we ignore the field width for enum strings
		bool bSuppressAssignment;
		long* pFieldWidthArg = NULL;
		CStringA strEnumName;
		hr = PreprocessScanfFormatString(strFmt, argList, &bSuppressAssignment, NULL, &pFieldWidthArg, &strEnumName);
		if (SUCCEEDED(hr))
		{
			// Allocate a buffer to hold the scanned string
			long lMaxChars = pEnumFormatter->GetMaxStringLength(CString(strEnumName));	

			LPSTR pszEnum = NULL;
			if (!bSuppressAssignment)
			{
				pszEnum = (LPSTR)::malloc(lMaxChars + 1);	// Account for terminating NULL
				if (pszEnum == NULL)
					return E_OUTOFMEMORY;
			}

			hr = ScanString(pBuf, lMaxChars, pFieldWidthArg, szDelim[0] == NULL ? NULL : szDelim, strCharSetFmt, AddNullTerminator, pszEnum);
			if (SUCCEEDED(hr) && !bSuppressAssignment)
			{
				if (strEnumName.CompareNoCase("VARIANT_BOOL") == 0)
				{
					short* psBoolArg = va_arg(argList, short*);
					if (psBoolArg == NULL)
						return E_INVALIDARG;

					long lVal;
					HRESULT hr2 = pEnumFormatter->EnumFromStringEx(CString(strEnumName), CString(pszEnum), lVal);
					hr = FAILED(hr2) ? hr2 : hr;
					if (SUCCEEDED(hr))
					{
						*psBoolArg = (short)lVal;
					}
				}
				else
				{
					long* plEnumArg = va_arg(argList, long*);
					if (plEnumArg == NULL)
						return E_INVALIDARG;

					HRESULT hr2 = pEnumFormatter->EnumFromStringEx(CString(strEnumName), CString(pszEnum), *plEnumArg);
					hr = FAILED(hr2) ? hr2 : hr;
				}
			}

			if (pszEnum != NULL)
			{
				::free(pszEnum);
			}
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::ScanEnumArray(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList)
{
	if (pEnumFormatter == NULL)
	{
		ATLASSERT(!_T("Enum format specifier encountered with no enum formatter object provided."));
		return E_INVALIDARG;
	}

	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	CStringA strTemp = strFmt;
	strTemp.MakeUpper();
	if (strFmt.Find("{VARIANT_BOOL}") > 0)
	{
		hr = ScanStringArray<short>(pBuf, pEnumFormatter, strFmt, argList, AddNullTerminator | IgnoreWhitespace | StripQuotes);
	}
	else
	{
		hr = ScanStringArray<long>(pBuf, pEnumFormatter, strFmt, argList, AddNullTerminator | IgnoreWhitespace | StripQuotes);
	}

	return hr;
}

inline HRESULT CFormattedIo::ScanString(IIoBuffer* pBuf, FormatStringToken token, va_list& argList, LPCSTR pszDelimList, LPCSTR pszCharSetFmt, int fOptions)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	bool bSuppressAssignment;
	long lFieldWidth;
	long* pFieldWidthArg = NULL;
	hr = PreprocessScanfFormatString(strFmt, argList, &bSuppressAssignment, &lFieldWidth, &pFieldWidthArg);
	if (SUCCEEDED(hr))
	{
		long lMaxChars;
		if (lFieldWidth > 0 && (fOptions & AdjustMaxCharsOnVariableFieldWidth))
		{
			// For some format specifiers (namely "%[]"), the maximum number of characters we will copy
			// into the output buffer depends upon how the field width was specified (if specified at all).
			// If the field width was specified using a constant in the format string, then the 
			// maximum number of characters is equal to the field width.  If the field width was specified
			// using an argument, then the maximum number of characters is one less than the field width.

			lMaxChars = pFieldWidthArg == NULL ? lFieldWidth : lFieldWidth - 1;
		}
		else
		{
			// Field width includes the NULL terminator.  Thus, the most characters we
			// can copy into the user buffer is lFieldWidth - 1.
			lMaxChars = lFieldWidth > 0 ? lFieldWidth - 1 : -1;
		}

		if (strFmt.Find("$B") > 0)
		{
			BSTR* pbstrArg = NULL;
			if (!bSuppressAssignment)
			{
				hr = GetScanfStringArgumentPointer(argList, lMaxChars, &pbstrArg);
			}

			if (SUCCEEDED(hr))
			{
				// Read in as a CString and then assign to a BSTR, since CString has efficient memory reallocation
				CString strArg;
				hr = ScanString(pBuf, lMaxChars, pFieldWidthArg, pszDelimList, pszCharSetFmt, fOptions, bSuppressAssignment ? NULL : &strArg);
				if (SUCCEEDED(hr) && !bSuppressAssignment)
				{
					// Free any BSTR passed in before overwriting to avoid a memory leak
					if (*pbstrArg != NULL)
					{
						::SysFreeString(*pbstrArg);
					}

					*pbstrArg = strArg.AllocSysString();
				}
			}
		}
		else if (strFmt.Find("$C") > 0)
		{
			CString* pstrArg = NULL;
			if (!bSuppressAssignment)
			{
				hr = GetScanfStringArgumentPointer(argList, lMaxChars, &pstrArg);
			}

			if (SUCCEEDED(hr))
			{
				hr = ScanString(pBuf, lMaxChars, pFieldWidthArg, pszDelimList, pszCharSetFmt, fOptions, pstrArg);
			}
		}
		else
		{
			LPSTR pszArg = NULL;;
			if (!bSuppressAssignment)
			{
				hr = GetScanfStringArgumentPointer(argList, lMaxChars, &pszArg);
			}

			if (SUCCEEDED(hr))
			{
				hr = ScanString(pBuf, lMaxChars, pFieldWidthArg, pszDelimList, pszCharSetFmt, fOptions, pszArg);
			}
		}
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::ScanString(IIoBuffer* pBuf, long lMaxChars, long* pFieldWidthArg, LPCSTR pszDelimList, LPCSTR pszCharSetFmt, int fOptions, T* pArg, char* pchLastCharRead)
{
	if (pchLastCharRead != NULL)
	{
		*pchLastCharRead = NULL;
	}

	HRESULT hr = S_DATA_AVAILABLE;

	char ch = 0;
	long cCharsScanned = 0;		// Doesn't include ignored whitespace
	long cCharsCopied = 0;		// Characters actually copied into user buffer
	bool bInsideDoubleQuotes = false;
	bool bInsideSingleQuotes = false;
	bool bStarted = false;
	while (cCharsScanned != lMaxChars && hr == S_DATA_AVAILABLE)
	{
		hr = pBuf->Read(ch);
		if (FAILED(hr))
			break;

		bool bIsSpace = isspace(ch) != 0;
		bStarted |= !(fOptions & IgnoreWhitespace) || !bIsSpace;
		if (!bStarted)
			continue;

		if (!bInsideSingleQuotes && !bInsideDoubleQuotes && IsStopChar(ch, pszDelimList, pszCharSetFmt))
			break;

		// Copy the character read into the buffer
		if (pArg != NULL && cCharsCopied != lMaxChars)
		{
			if (!(fOptions & Quoted)  || 
				(bInsideDoubleQuotes && ch != '"') || 
				(bInsideSingleQuotes && ch != '\'') || 
				(ch == '"' && !(fOptions & StripQuotes)) || 
				(ch == '\'' && !(fOptions & StripQuotes)))
			{
				HRESULT hr2 = AppendString(pArg, ch, cCharsCopied);
				hr = FAILED(hr2) ? hr2 : hr;

				cCharsCopied++;
			}
		}

		bInsideDoubleQuotes = (fOptions & Quoted) && 
			((bInsideDoubleQuotes && ch != '"') || 
			(ch == '"' && !bInsideDoubleQuotes && !bInsideSingleQuotes));
		
		bInsideSingleQuotes = (fOptions & Quoted) && 
			((bInsideSingleQuotes && ch != '\'') || 
			(ch == '\'' && !bInsideDoubleQuotes && !bInsideSingleQuotes));

		cCharsScanned++;
	}

	if (SUCCEEDED(hr))
	{
		if (pArg != NULL)
		{
			// If we stopped because we read a delimiter char, then add it, if requested
			if (hr == S_DATA_AVAILABLE && cCharsScanned != lMaxChars && fOptions & AppendStopChar)
			{
				HRESULT hr2 = AppendString(pArg, ch, cCharsCopied);
				hr = FAILED(hr2) ? hr2 : hr;

				cCharsCopied++;
			}

			// Add a NULL terminator, if requested
			if (SUCCEEDED(hr) && fOptions & AddNullTerminator)
			{
				HRESULT hr2 = TerminateScannedString(pArg, cCharsCopied);
				hr = FAILED(hr2) ? hr2 : hr;
			}

			if (pFieldWidthArg != NULL)
			{
				*pFieldWidthArg = cCharsCopied;
			}
		}

		if (SUCCEEDED(hr))
		{
			if (hr == S_DATA_AVAILABLE && cCharsScanned == lMaxChars)
			{
				// We stopped because we reached the max char count.  
				// If requested, we keep reading until the stop char is reached or the end of input.
				if ((fOptions & ScanPastMaxChars) && hr == S_DATA_AVAILABLE)
				{ 
					do 
					{
						hr = pBuf->Read(ch);
					} while (hr == S_DATA_AVAILABLE && !IsStopChar(ch, pszDelimList, pszCharSetFmt));

					// Special case for whitespace-delimeted strings, where we want to keep
					// eating whitespace until the next non-whitespace.
					if (hr == S_DATA_AVAILABLE && pszDelimList != NULL && strlen(pszDelimList) == 1 && pszDelimList[0] == ' ')
					{
						hr = SkipWhitespace(pBuf, ch);
						if (hr == S_DATA_AVAILABLE && !(fOptions & DiscardStopChar))
						{
							HRESULT hr2 = pBuf->UnReadChar();
							hr = FAILED(hr2) ? hr2 : hr;
						}
					}
				}
			}
			else
			{
				// We stopped because we read a delimiter character, so we must
				// return it to the buffer unless asked not to or we've already appended it.
				if (hr == S_DATA_AVAILABLE && !(fOptions & AppendStopChar) && !(fOptions & DiscardStopChar))
				{
					HRESULT hr2 = pBuf->UnReadChar();
					hr = FAILED(hr2) ? hr2 : hr;
				}
			}

			if (hr == S_DATA_AVAILABLE && pchLastCharRead != NULL)
			{
				*pchLastCharRead = ch;
			}
		}
	}

	return hr;
}

template <>
inline HRESULT CFormattedIo::AppendString(LPSTR psz, char ch, int nIndex)
{
	HRESULT hr = S_OK;

	psz[nIndex] = ch;

	return hr;
}

template <>
inline HRESULT CFormattedIo::AppendString(CString* pstr, char ch, int nIndex)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(nIndex);

	pstr->AppendChar(ch);

	return hr;
}

template <>
inline HRESULT CFormattedIo::TerminateScannedString(char* pArg, int nIndex)
{
	HRESULT hr = S_OK;

	hr = AppendString(pArg, NULL, nIndex);

	return hr;
}

template <>
inline HRESULT CFormattedIo::TerminateScannedString(CString* pArg, int nIndex)
{
	NTL_UNUSED(pArg);
	NTL_UNUSED(nIndex);

	// Don't terminate CString

	return S_OK;
}

inline bool CFormattedIo::IsStopChar(char ch, LPCSTR pszDelimList, LPCSTR pszCharSetFmt)
{
	if (pszDelimList != NULL)
	{
		return strchr(pszDelimList, ch) != NULL;
	} 
	else if (pszCharSetFmt != NULL)
	{
		// Use sscanf because it supports ranges, such as "%[a-z0-9]".
		char szDummy[2] = { NULL, NULL };
		return sscanf_s(&ch, pszCharSetFmt, szDummy, sizeof(szDummy)) == 0;
	}

	return false;
}

inline HRESULT CFormattedIo::ScanInteger(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	bool bSuppressAssignment;
	long lFieldWidth;
	long* pFieldWidthArg = NULL;
	hr = PreprocessScanfFormatString(strFmt, argList, &bSuppressAssignment, &lFieldWidth, &pFieldWidthArg);
	if (SUCCEEDED(hr))
	{
		if (strFmt.Right(2).GetAt(0) == 'b')
		{
			BYTE bVal;
			hr = ScanInteger(pBuf, strFmt, lFieldWidth, &bVal);
			if (SUCCEEDED(hr) && !bSuppressAssignment)
			{
				HRESULT hr2 = AssignNumericArg(bVal, argList);
				hr = FAILED(hr2) ? hr2 : hr;
			}
		}
		else if (strFmt.Right(2).GetAt(0) == 'h')
		{
			short sVal;
			hr = ScanInteger(pBuf, strFmt, lFieldWidth, &sVal);
			if (SUCCEEDED(hr) && !bSuppressAssignment)
			{
				HRESULT hr2 = AssignNumericArg(sVal, argList);
				hr = FAILED(hr2) ? hr2 : hr;
			}
		}
		else if (strFmt.Right(2).GetAt(0) == 'I')
		{
			__int64 llVal;
			hr = ScanInteger(pBuf, strFmt, lFieldWidth, &llVal);
			if (SUCCEEDED(hr) && !bSuppressAssignment)
			{
				HRESULT hr2 = AssignNumericArg(llVal, argList);
				hr = FAILED(hr2) ? hr2 : hr;
			}
		}
		else
		{
			long lVal;
			hr = ScanInteger(pBuf, strFmt, lFieldWidth, &lVal);
			if (SUCCEEDED(hr) && !bSuppressAssignment)
			{
				HRESULT hr2 = AssignNumericArg(lVal, argList);
				hr = FAILED(hr2) ? hr2 : hr;
			}
		}
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::ScanInteger(IIoBuffer* pBuf, const CStringA& strFmtIn, long lFieldWidth, T* pVal)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;

	int n488ModifierIndex = strFmt.Find("@");
	if (n488ModifierIndex > 0)
	{
		char ch488Modifier = strFmt.GetAt(n488ModifierIndex + 1);
		strFmt.Delete(n488ModifierIndex, 2);

		hr = Scan488Number(pBuf, strFmt, ch488Modifier, lFieldWidth, pVal);

		return hr;
	}

	CStringA strConvBuf;
	strConvBuf.Preallocate(SCANF_CONVERSION_BUFFER_SIZE);

	int nRadix = 10;
	if (strFmt.Right(1) == "x" || strFmt.Right(1) == "X")
	{
		// Expect a hex number that MAY prefixed with "0x"
		nRadix = 16;
	}
	else if (strFmt.Right(1) == "o" || strFmt.Right(1) == "O")
	{
		// Expect an octal number
		nRadix = 8;
	}

	char ch;
	hr = SkipWhitespace(pBuf, ch);
	if (SUCCEEDED(hr))
	{
		long cCharsRead = 1;
		strConvBuf.AppendChar(ch);

		// Look for leading '+' or '-'
		if (ch == '+' || ch == '-')
		{
			// Error if there is only a '+' or '-' sign scanned
			if (cCharsRead == lFieldWidth)
				return E_UNEXPECTED;

			// Read the next character, which should be a digit
			hr = pBuf->Read(ch);
			if (FAILED(hr))
				return hr;

			if (!IsDigit(ch, nRadix))
				return E_UNEXPECTED;
			
			cCharsRead++;
			strConvBuf.AppendChar(ch);
		}

		if (nRadix == 16)
		{
			// Validate the "0x" prefix, if present
			if (ch == '0')
			{
				// Read the next character, which should be an 'x' or a digit
				hr = pBuf->Read(ch);
				if (FAILED(hr))
					return hr;
				
				cCharsRead++;
				strConvBuf.AppendChar(ch);

				if (ch == 'x' && ch != 'X')
				{
					// Error if there is only "0x" (or "+0x" or "-0x")
					if (cCharsRead == lFieldWidth)
						return E_UNEXPECTED;

					hr = pBuf->Read(ch);
					if (FAILED(hr))
						return hr;				

					if (!IsDigit(ch, nRadix))
						return E_UNEXPECTED;

					cCharsRead++;
					strConvBuf.AppendChar(ch);
				}
			}
		}

		// Read from the buffer as long as we see digits (or until the end of input).
		while (hr == S_DATA_AVAILABLE && cCharsRead != lFieldWidth && IsDigit(ch, nRadix))
		{
			hr = pBuf->Read(ch);
			if (SUCCEEDED(hr) && IsDigit(ch, nRadix))
			{
				strConvBuf.AppendChar(ch);
				cCharsRead++;
			}
		};

		if (SUCCEEDED(hr))
		{
			if (!IsDigit(ch, nRadix))
			{
				// We read a non-digit, so put it back
				HRESULT hr2 = pBuf->UnReadChar();
				hr = FAILED(hr2) ? hr2 : hr;
			}

			HRESULT hr2 = StringToNumber(strConvBuf, pVal, nRadix);
			hr = FAILED(hr2) ? hr2 : hr;
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::ScanIntegerArray(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	if (strFmt.Find('b') > 0)
	{
		hr = ScanNumericArray<BYTE>(pBuf, strFmt, argList);
	}
	else if (strFmt.Find('h') > 0)
	{
		hr = ScanNumericArray<short>(pBuf, strFmt, argList);
	}
	else if (strFmt.Find('I') > 0)
	{
		hr = ScanNumericArray<__int64>(pBuf, strFmt, argList);
	}
	else
	{
		// Default is Int32
		hr = ScanNumericArray<long>(pBuf, strFmt, argList);
	}

	return hr;
}

inline HRESULT CFormattedIo::ScanFloatArray(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	if (strFmt.Find('L') > 0)
	{
		hr = ScanNumericArray<double>(pBuf, strFmt, argList);
	}
	else if (strFmt.Find('l') > 0)
	{
		hr = ScanNumericArray<double>(pBuf, strFmt, argList);
	}
	else
	{
		hr = ScanNumericArray<float>(pBuf, strFmt, argList);
	}

	return hr;
}

template <>
inline HRESULT CFormattedIo::ScanNumber(IIoBuffer* pBuf, const CStringA& strFmt, long lFieldWidth, double* pVal)
{
	HRESULT hr = S_OK;

	hr = ScanFloat(pBuf, strFmt, lFieldWidth, pVal);

	return hr;
}

template <>
inline HRESULT CFormattedIo::ScanNumber(IIoBuffer* pBuf, const CStringA& strFmt, long lFieldWidth, float* pVal)
{
	HRESULT hr = S_OK;

	hr = ScanFloat(pBuf, strFmt, lFieldWidth, pVal);

	return hr;
}

template <>
inline HRESULT CFormattedIo::ScanNumber(IIoBuffer* pBuf, const CStringA& strFmt, long lFieldWidth, __int64* pVal)
{
	HRESULT hr = S_OK;

	hr = ScanInteger(pBuf, strFmt, lFieldWidth, pVal);

	return hr;
}

template <>
inline HRESULT CFormattedIo::ScanNumber(IIoBuffer* pBuf, const CStringA& strFmt, long lFieldWidth, long* pVal)
{
	HRESULT hr = S_OK;

	hr = ScanInteger(pBuf, strFmt, lFieldWidth, pVal);

	return hr;
}

template <>
inline HRESULT CFormattedIo::ScanNumber(IIoBuffer* pBuf, const CStringA& strFmt, long lFieldWidth, short* pVal)
{
	HRESULT hr = S_OK;

	hr = ScanInteger(pBuf, strFmt, lFieldWidth, pVal);

	return hr;
}

template <>
inline HRESULT CFormattedIo::ScanNumber(IIoBuffer* pBuf, const CStringA& strFmt, long lFieldWidth, BYTE* pVal)
{
	HRESULT hr = S_OK;

	hr = ScanInteger(pBuf, strFmt, lFieldWidth, pVal);

	return hr;
}

template <typename T>
HRESULT CFormattedIo::ScanNumericArray(IIoBuffer* pBuf, const CStringA& strFmtIn, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;

	bool bSuppressAssignment;
	long lFieldWidth;
	long lArraySize;
	long* plArraySizeArg = NULL;
	T* pArrayArg = NULL;
	SAFEARRAY** ppsaArrayArg = NULL;
	CStringA strDelimList;
	hr = PreprocessScanfArrayFormatString<T>(strFmt, argList, &bSuppressAssignment, &lFieldWidth, &lArraySize, &plArraySizeArg, &pArrayArg, &ppsaArrayArg, strDelimList);
	if (SUCCEEDED(hr))
	{
		ATLASSERT(pArrayArg != NULL || ppsaArrayArg != NULL || bSuppressAssignment);
		if (pArrayArg == NULL && ppsaArrayArg == NULL && !bSuppressAssignment)
			return E_UNEXPECTED;

		hr = S_DATA_AVAILABLE;
		CComSafeArray<T> saArrayArg;
		long cElementsActual = 0;
		while (hr == S_DATA_AVAILABLE && cElementsActual != lArraySize)
		{
			T val;
			hr = ScanNumber(pBuf, strFmt, lFieldWidth, &val);
			if (SUCCEEDED(hr))
			{
				cElementsActual++;

				if (pArrayArg != NULL)
				{
					pArrayArg[cElementsActual - 1] = val;
				}
				else if (ppsaArrayArg != NULL)
				{
					HRESULT hr2 = saArrayArg.Add(val);
					hr = FAILED(hr2) ? hr2 : hr;
				}

				if (hr == S_DATA_AVAILABLE)
				{
					char chLast;
					hr = SkipWhitespace(pBuf, chLast);
					if (strDelimList.Find(chLast) < 0)
						break;
				}
			}
		}

		if (SUCCEEDED(hr) && !bSuppressAssignment)
		{
			if (ppsaArrayArg != NULL && saArrayArg != NULL)
			{
				// Free any SAFEARRAY memory passed in to avoid a leak
				if (*ppsaArrayArg != NULL)
				{
					HRESULT hr2 = ::SafeArrayDestroy(*ppsaArrayArg);
					hr = FAILED(hr2) ? hr2 : hr;
				}

				if (SUCCEEDED(hr))
				{
					*ppsaArrayArg = saArrayArg.Detach();
				}
			}

			if (plArraySizeArg != NULL)
			{
				*plArraySizeArg = cElementsActual;
			}
		}
	}

	return hr;
}

template <typename T>
inline HRESULT CFormattedIo::Scan488Number(IIoBuffer* pBuf, const CStringA& strFmt, char ch488Modifier, long lFieldWidth, T* pVal)
{
	HRESULT hr = S_OK;

	int nRadix;
	hr = Get488Radix(ch488Modifier, &nRadix);
	if (SUCCEEDED(hr))
	{
		if (nRadix == 10)
		{
			// NR1, NR2, or NR3
			// We scan these just like floats
			hr = ScanFloat(pBuf, strFmt, lFieldWidth, pVal);
		}
		else
		{
			// Scan as an integer, since this is either @H, @Q, or @B
			CStringA strConvBuf;
			strConvBuf.Preallocate(SCANF_CONVERSION_BUFFER_SIZE);

			hr = Scan488Header(pBuf, ch488Modifier);
			if (SUCCEEDED(hr))
			{
				// Read from the buffer as long as we see digits (or until the end of input).
				// We ignore the field width in order to match what VISA does.
				char ch;
				long cCharsRead = 0;
				do
				{
					hr = pBuf->Read(ch);
					if (SUCCEEDED(hr) && IsDigit(ch, nRadix))
					{
						strConvBuf.AppendChar(ch);
						cCharsRead++;
					}
				} while (hr == S_DATA_AVAILABLE && IsDigit(ch, nRadix));

				if (SUCCEEDED(hr))
				{
					if (!IsDigit(ch, nRadix))
					{
						// We read a non-digit, so put it back
						HRESULT hr2 = pBuf->UnReadChar();
						hr = FAILED(hr2) ? hr2 : hr;
					}

					HRESULT hr2 = StringToNumber(strConvBuf, pVal, nRadix);
					hr = FAILED(hr2) ? hr2 : hr;
				}
			}
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::Scan488Header(IIoBuffer* pBuf, char ch488Modifier)
{
	HRESULT hr = S_OK;

	char ch;
	hr = SkipWhitespace(pBuf, ch);
	if (SUCCEEDED(hr))
	{
		if (ch != '#')
			return E_UNEXPECTED;

		hr = pBuf->Read(ch);
		if (SUCCEEDED(hr))
		{
			if (ch != ch488Modifier)
				return E_UNEXPECTED;
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::Get488Radix(char ch488Modifier, int* pnRadix)
{
	if (pnRadix == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	*pnRadix = -1;
	switch (ch488Modifier)
	{
		case 'H':
			*pnRadix = 16;
			break;
		case 'Q':
			*pnRadix = 8;
			break;
		case 'B':
			*pnRadix = 2;
			break;
		case '1':
		case '2':
		case '3':
			*pnRadix = 10;
			break;
		default:
			ATLASSERT(!_T("Unexpected 488.2 modifier."));
			return E_UNEXPECTED;
	}

	return hr;
}

inline HRESULT CFormattedIo::ScanFloat(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	bool bSuppressAssignment;
	long lFieldWidth;
	long* pFieldWidthArg = NULL;
	hr = PreprocessScanfFormatString(strFmt, argList, &bSuppressAssignment, &lFieldWidth, &pFieldWidthArg);
	if (SUCCEEDED(hr))
	{
		bool bIsSinglePrecision = strFmt.Right(2).GetAt(0) != 'l' &&
								  strFmt.Right(2).GetAt(0) != 'L';

		if (bIsSinglePrecision)
		{
			float fVal;
			hr = ScanFloat(pBuf, strFmt, lFieldWidth, &fVal);
			if (SUCCEEDED(hr) && !bSuppressAssignment)
			{
				HRESULT hr2 = AssignNumericArg(fVal, argList);
				hr = FAILED(hr2) ? hr2 : hr;
			}
		}
		else
		{
			double dVal;
			hr = ScanFloat(pBuf, strFmt, lFieldWidth, &dVal);
			if (SUCCEEDED(hr) && !bSuppressAssignment)
			{
				HRESULT hr2 = AssignNumericArg(dVal, argList);
				hr = FAILED(hr2) ? hr2 : hr;
			}
		}
	}

	return hr;
}

template <typename T>
inline HRESULT CFormattedIo::ScanFloat(IIoBuffer* pBuf, const CStringA& strFmtIn, long lFieldWidth, T* pVal)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;

	int n488ModifierIndex = strFmt.Find("@");
	if (n488ModifierIndex > 0)
	{
		char ch488Modifier = strFmt.GetAt(n488ModifierIndex + 1);
		strFmt.Delete(n488ModifierIndex, 2);

		hr = Scan488Number(pBuf, strFmt, ch488Modifier, lFieldWidth, pVal);

		return hr;
	}

	CStringA strConvBuf;
	strConvBuf.Preallocate(SCANF_CONVERSION_BUFFER_SIZE);

	enum ScanState
	{
		Start,			// +3.14E-15
						// ^--------
		Integral,		// +3.14E-15
						// -^-------
		Fraction,		// +3.14E-15
						// ---^-----
		ExponentStart,	// +3.14E-15
						// -----^---
		Exponent		// +3.14E-15
						// ------^--
	};

	hr = S_DATA_AVAILABLE;
	ScanState eState = Start;
	char ch;
	long cCharsRead = 0;
	while (hr == S_DATA_AVAILABLE && cCharsRead != lFieldWidth)
	{	
		hr = pBuf->Read(ch);
		if (FAILED(hr))
			break;

		if (ch == '+' || ch == '-')
		{
			if (eState == Start)
			{
				eState = Integral;
			}
			else if (eState == ExponentStart)
			{
				eState = Exponent;
			}
			else
			{
				break;
			}
		}
		else if (ch == '.')
		{
			if (eState == Start || eState == Integral)
			{
				eState = Fraction;
			}
			else
			{
				break;
			}
		}
		else if (ch == 'e' || ch == 'E')
		{
			if (eState == Integral || eState == Fraction)
			{
				eState = ExponentStart;
			}
			else
			{
				break;
			}
		}
		else if (eState == Start && isspace(ch))
		{
			continue;
		}
		else if (IsDigit(ch))
		{
			if (eState == Start)
			{
				eState = Integral;
			}
			else if (eState == ExponentStart)
			{
				eState = Exponent;
			}
		}
		else
		{
			break;
		}

		strConvBuf.AppendChar(ch);
		cCharsRead++;
	}

	if (SUCCEEDED(hr))
	{
		if (cCharsRead != lFieldWidth)
		{
			// We read one too many, so put it back
			HRESULT hr2 = pBuf->UnReadChar();
			hr = FAILED(hr2) ? hr2 : hr;
		}

		HRESULT hr2 = StringToNumber(strConvBuf, pVal);
		hr = FAILED(hr2) ? hr2 : hr;
	}

	return hr;
}

inline HRESULT CFormattedIo::Scan488Block(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	char ch = strFmt.GetAt(strFmt.GetLength() - 2);

	if (ch == 'h')
	{
		hr = Scan488Block<short>(pBuf, strFmt, argList);
	}
	else if (ch == 'l')
	{
		hr = Scan488Block<long>(pBuf, strFmt, argList);
	}
	else if (ch == 'I')
	{
		hr = Scan488Block<__int64>(pBuf, strFmt, argList);
	}
	else if (ch == 'z')
	{
		hr = Scan488Block<float>(pBuf, strFmt, argList);
	}
	else if (ch == 'Z')
	{
		hr = Scan488Block<double>(pBuf, strFmt, argList);
	}
	else
	{
		// Default is BYTE for 488.2 binary block
		hr = Scan488Block<BYTE>(pBuf, strFmt, argList);
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::Scan488Block(IIoBuffer* pBuf, const CStringA& strFmtIn, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;

	bool bSuppressAssignment;
	long* plArraySizeArg = NULL;
	hr = PreprocessScanfFormatString(strFmt, argList, &bSuppressAssignment, NULL, &plArraySizeArg);
	if (SUCCEEDED(hr))
	{
		// Check if the array size has been specified
		long lArraySize = -1;
		for (int i = 0; i < (int)strFmt.GetLength(); i++)
		{
			if (IsDigit(strFmt.GetAt(i)))
			{
				lArraySize = atoi(strFmt.Mid(i));
				break;
			}
		}

		// Scan the 488.2 header
		// #<bytes in count><count><count bytes of data>
		char ch;
		hr = pBuf->Read(ch);
		if (FAILED(hr))
			return hr;

		if (ch != '#')
			return E_UNEXPECTED;

		// Read the number of bytes in the count field
		hr = pBuf->Read(ch);
		if (FAILED(hr))
			return hr;

		long cbHeader = ch - '0';
		ATLASSERT(cbHeader < DEFINITE_BLOCK_COUNT_FIELD_LENGTH_MAX);
		char szCount[DEFINITE_BLOCK_COUNT_FIELD_LENGTH_MAX];
		szCount[cbHeader] = NULL;

		long cbActual;
		hr = pBuf->Read(szCount, cbHeader, &cbActual, false);
		if (FAILED(hr))
			return hr;
			
		if (cbHeader != cbActual)
			return E_UNEXPECTED;

		long cbBlock = atoi(szCount);

		if (bSuppressAssignment)
		{
			hr = ScanRawBinaryAndDiscard<T>(pBuf, lArraySize, plArraySizeArg, cbBlock);
		}
		else if (strFmt.Find("$S") > 0)
		{
			hr = ScanRawBinaryToSafeArray<T>(pBuf, argList, lArraySize, plArraySizeArg, cbBlock, pBuf->GetBigEndian());
		}
		else
		{
			hr = ScanRawBinaryToBuffer<T>(pBuf, argList, lArraySize, plArraySizeArg, cbBlock, pBuf->GetBigEndian());
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::ScanRawBinary(IIoBuffer* pBuf, FormatStringToken token, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt(token.m_psz, token.m_lLen);

	char ch = strFmt.GetAt(strFmt.GetLength() - 2);

	if (ch == 'h')
	{
		hr = ScanRawBinary<short>(pBuf, strFmt, argList);
	}
	else if (ch == 'l' && 
		strFmt.GetAt(strFmt.GetLength() - 3) != 'o')	// handle swap modifier "!ol"
	{
		hr = ScanRawBinary<long>(pBuf, strFmt, argList);
	}
	else if (ch == 'I')
	{
		hr = ScanRawBinary<__int64>(pBuf, strFmt, argList);
	}
	else
	{
		hr = ScanRawBinary<BYTE>(pBuf, strFmt, argList);
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::ScanRawBinary(IIoBuffer* pBuf, const CStringA& strFmtIn, va_list& argList)
{
	HRESULT hr = S_OK;

	CStringA strFmt = strFmtIn;

	bool bSuppressAssignment;
	long* plArraySizeArg = NULL;
	hr = PreprocessScanfFormatString(strFmt, argList, &bSuppressAssignment, NULL, &plArraySizeArg);
	if (SUCCEEDED(hr))
	{
		// Get the array size
		long lArraySize = -1;
		for (int i = 0; i < (int)strFmt.GetLength(); i++)
		{
			if (IsDigit(strFmt.GetAt(i)))
			{
				lArraySize = atoi(strFmt.Mid(i));
				break;
			}
		}

		if (bSuppressAssignment)
		{
			hr = ScanRawBinaryAndDiscard<T>(pBuf, lArraySize, plArraySizeArg, -1);
		}
		else if (strFmt.Find("$S") > 0)
		{
			hr = ScanRawBinaryToSafeArray<T>(pBuf, argList, lArraySize, plArraySizeArg, -1, strFmt.Find("!ol") < 0);
		}
		else
		{
			hr = ScanRawBinaryToBuffer<T>(pBuf, argList, lArraySize, plArraySizeArg, -1, strFmt.Find("!ol") < 0);
		}
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::ScanRawBinaryAndDiscard(IIoBuffer* pBuf, long lArraySize, long* plArraySizeArg, long cbBlock)
{
	HRESULT hr = S_OK;

	long cbActual = 0;
	if (lArraySize < 0 && cbBlock < 0)
	{
		// User isn't interested in the data and we don't know how much to read, so just flush
		hr = pBuf->FlushRead();
	}
	else
	{
		// Allocate a buffer into which we read (and then discard) the correct number of bytes
		long cbExpected = cbBlock > 0 ? cbBlock : lArraySize * sizeof(T);
		BYTE* pBufTemp = (BYTE*)::malloc(cbExpected);
		if (pBufTemp == NULL)
			return E_OUTOFMEMORY;

		hr = pBuf->ReadBinaryBlockData(pBufTemp, cbExpected, &cbActual, false);

		::free(pBufTemp);
	}

	if (SUCCEEDED(hr) && plArraySizeArg != NULL)
	{
		*plArraySizeArg = cbActual / sizeof(T);
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::ScanRawBinaryToSafeArray(IIoBuffer* pBuf, va_list& argList, long lArraySize, long* plArraySizeArg, long cbBlock, bool bSwapBytes)
{
	HRESULT hr = S_OK;

	SAFEARRAY** ppsaArrayArg = va_arg(argList, SAFEARRAY**);
	if (ppsaArrayArg == NULL)
		return E_INVALIDARG;

	long cbActual = 0;
	if (lArraySize < 0 && cbBlock < 0)
	{
		// Read everything that is available
		long cbChunk = 500 * sizeof(T);
		T* pTempBuf = (T*)::malloc(cbChunk); 
		if (pTempBuf == NULL)
			return E_OUTOFMEMORY;

		CComSafeArray<T> saData;
		saData.Create();			
		do
		{
			long cbChunkActual;
			hr = pBuf->ReadBinaryBlockData((BYTE*)pTempBuf, cbChunk, &cbChunkActual, false);
			if (SUCCEEDED(hr))
			{
				cbActual += cbChunkActual;
				long cElements = cbChunkActual / sizeof(T);
				
				if (bSwapBytes)
				{
					SwapBytes(pTempBuf, cElements);
				}

				saData.Add(cElements, pTempBuf);
			}
		} while (hr == S_DATA_AVAILABLE);

		::free(pTempBuf);

		if (SUCCEEDED(hr) && saData != NULL)
		{
			// Free any SAFEARRAY memory passed in to avoid a leak
			if (*ppsaArrayArg != NULL)
			{
				HRESULT hr2 = ::SafeArrayDestroy(*ppsaArrayArg);
				hr = FAILED(hr2) ? hr2 : hr;
			}

			if (SUCCEEDED(hr))
			{
				*ppsaArrayArg = saData.Detach();
			}
		}
	}
	else
	{
		// We'll either read the entire block, if specified, (and trim later) 
		// or we'll read exactly what the user asked for.
		long cbExpected = cbBlock > 0 ? cbBlock : lArraySize * sizeof(T);
		CComSafeArray<T> saData;
		hr = saData.Create(cbExpected);
		if (SUCCEEDED(hr))
		{
			T* pData = NULL;
			hr = ::SafeArrayAccessData(saData.m_psa, (void**)&pData);
			if (SUCCEEDED(hr))
			{
				hr = pBuf->ReadBinaryBlockData((BYTE*)pData, cbExpected, &cbActual, false);
				if (SUCCEEDED(hr))
				{
					// Trim to the user-requested size or the actual size read
					long cElementsRead = cbActual / sizeof(T);
					long cElements = lArraySize > 0 ? min(lArraySize, cElementsRead) : cElementsRead;
					cbActual = cElements * sizeof(T);

					HRESULT hr2 = ::SafeArrayUnaccessData(saData.m_psa);
					hr = FAILED(hr2) ? hr2 : hr;
					if (SUCCEEDED(hr))
					{
						hr2 = saData.Resize(cElements);	
						hr = FAILED(hr2) ? hr2 : hr;

						hr2 = ::SafeArrayAccessData(saData.m_psa, (void**)&pData);
						hr = (SUCCEEDED(hr) && FAILED(hr2)) ? hr2 : hr;
					}

					if (SUCCEEDED(hr) && bSwapBytes)
					{
						SwapBytes(pData, cElements);
					}
				}
				
				HRESULT hr2 = ::SafeArrayUnaccessData(saData.m_psa);
				hr = FAILED(hr) ? hr : hr2;

				if (SUCCEEDED(hr) && saData != NULL)
				{
					// Free any SAFEARRAY memory passed in to avoid a leak
					if (*ppsaArrayArg != NULL)
					{
						HRESULT hr2 = ::SafeArrayDestroy(*ppsaArrayArg);
						hr = FAILED(hr2) ? hr2 : hr;
					}

					if (SUCCEEDED(hr))
					{
						*ppsaArrayArg = saData.Detach();
					}
				}
			}
		}
	}

	if (SUCCEEDED(hr) && plArraySizeArg != NULL)
	{
		*plArraySizeArg = cbActual / sizeof(T);
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::ScanRawBinaryToBuffer(IIoBuffer* pBuf, va_list& argList, long lArraySize, long* plArraySizeArg, long cbBlock, bool bSwapBytes)
{
	HRESULT hr = S_OK;

	// C-style array => size must be specified
	if (lArraySize < 0)
		return E_UNEXPECTED;

	T* pArrayArg = va_arg(argList, T*);
	if (pArrayArg == NULL)
		return E_INVALIDARG;

	long cbActual = 0;
	if (cbBlock > 0 && lArraySize < cbBlock * (long)sizeof(T))
	{
		// They have requested less data than is actually in the block, so we have no choice 
		// but to allocate a temporary array, read the entire block into that array and then 
		// copy into the user buffer.
		BYTE* pBufTemp = (BYTE*)::malloc(cbBlock);
		if (pBufTemp == NULL)
			return E_OUTOFMEMORY;

		hr = pBuf->ReadBinaryBlockData(pBufTemp, cbBlock, &cbActual, false);

		::memcpy(pArrayArg, pBufTemp, min(lArraySize * (long)sizeof(T), cbActual));

		::free(pBufTemp);
	}
	else
	{
		// The user buffer is big enough to hold the entire block, or we don't know how big the block is
		hr = pBuf->ReadBinaryBlockData((BYTE*)pArrayArg, lArraySize * sizeof(T), &cbActual, false);
	}

	if (SUCCEEDED(hr))
	{
		if (bSwapBytes)
		{
			SwapBytes(pArrayArg, cbActual / sizeof(T));
		}

		if (plArraySizeArg != NULL)
		{
			*plArraySizeArg = cbActual / sizeof(T);
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::GetScanfStringArgumentPointer(va_list& argList, long lMaxChars, LPSTR* ppszArg)
{
	if (ppszArg == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	NTL_UNUSED(lMaxChars);

	*ppszArg = NULL;

	*ppszArg = va_arg(argList, LPSTR);
	if (*ppszArg == NULL)
		return E_INVALIDARG;

	return hr;
}

inline HRESULT CFormattedIo::GetScanfStringArgumentPointer(va_list& argList, long lMaxChars, BSTR** ppbstrArg)
{
	if (ppbstrArg == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	NTL_UNUSED(lMaxChars);

	*ppbstrArg = NULL;

	BSTR* pbstrArg = va_arg(argList, BSTR*);
	if (pbstrArg == NULL)
		return E_INVALIDARG;

	*ppbstrArg = pbstrArg;

	return hr;
}

inline HRESULT CFormattedIo::GetScanfStringArgumentPointer(va_list& argList, long lMaxChars, CString** ppstrArg)
{
	if (ppstrArg == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	*ppstrArg = NULL;

	CString* pstrArg = va_arg(argList, CString*);
	if (pstrArg == NULL)
		return E_INVALIDARG;

	// Clear any contents passed in
	pstrArg->Empty();

	*ppstrArg = pstrArg;

	// Preallocate the CString for efficiency
	if (lMaxChars > 0)
	{
		pstrArg->Preallocate(lMaxChars + 1);
	}
	else
	{
		pstrArg->Preallocate(SCANF_DEFAULT_STRING_LENGTH);
	}

	return hr;
}

inline HRESULT CFormattedIo::SkipWhitespace(IIoBuffer* pBuf, char& ch)
{
	HRESULT hr = S_OK;

	ch = -1;
	do
	{
		hr = pBuf->Read(ch);
	} while (isspace(ch) && hr == S_DATA_AVAILABLE);

	return hr;
}

template <typename T>
HRESULT CFormattedIo::AssignNumericArg(T val, va_list& argList)
{
	HRESULT hr = S_OK;

	T* pArg = va_arg(argList, T*);
	if (pArg == NULL)
		return E_INVALIDARG;

	*pArg = val;

	return hr;
}

template <>
inline HRESULT CFormattedIo::StringToNumber(const CStringA& strConvBuf, double* pVal, int nRadix)
{
	if (pVal == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	double val = 0;
	LPCSTR pszStart = LPCSTR(strConvBuf);
	LPSTR pszEnd = NULL;
	
	if (nRadix == 10)
	{
		val = strtod(pszStart, &pszEnd);
		if (val == HUGE_VAL || val == -HUGE_VAL)
		{
			return E_UNEXPECTED;
		}
	}
	else
	{
		val = strtol(pszStart, &pszEnd, nRadix);
		if (val == LONG_MAX || val == LONG_MIN)
		{
			return E_UNEXPECTED;
		}
	}

	if (pszEnd == pszStart)
	{
		// Couldn't convert
		return E_UNEXPECTED;
	}

	*pVal = val;

	return hr;
}

template <>
inline HRESULT CFormattedIo::StringToNumber(const CStringA& strConvBuf, float* pVal, int nRadix)
{
	if (pVal == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	double dVal;
	hr = StringToNumber(strConvBuf, &dVal, nRadix);
	if (SUCCEEDED(hr))
	{
		if (fabs(dVal) > FLT_MAX || (fabs(dVal) > DBL_MIN && fabs(dVal) < FLT_MIN))
		{
			return E_UNEXPECTED;
		}

		*pVal = (float)dVal;
	}

	return hr;
}

template <>
inline HRESULT CFormattedIo::StringToNumber(const CStringA& strConvBuf, __int64* pVal, int nRadix)
{
	if (pVal == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	LPCSTR pszStart = LPCSTR(strConvBuf);
	LPSTR pszEnd = NULL;
	
	__int64 val = _strtoi64(pszStart, &pszEnd, nRadix);

	if (pszEnd == pszStart)
	{
		// Couldn't convert
		return E_UNEXPECTED;
	}

	if (val == _I64_MAX || val == _I64_MIN)
	{
		return E_UNEXPECTED;
	}

	*pVal = val;

	return hr;
}

template <>
inline HRESULT CFormattedIo::StringToNumber(const CStringA& strConvBuf, long* pVal, int nRadix)
{
	if (pVal == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	__int64 llVal;
	hr = StringToNumber(strConvBuf, &llVal, nRadix);
	if (SUCCEEDED(hr))
	{
		if (llVal > _I32_MAX || llVal < _I32_MIN)
		{
			return E_UNEXPECTED;
		}
	
		*pVal = (long)llVal;
	}

	return hr;
}

template <>
inline HRESULT CFormattedIo::StringToNumber(const CStringA& strConvBuf, short* pVal, int nRadix)
{
	if (pVal == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	__int64 llVal;
	hr = StringToNumber(strConvBuf, &llVal, nRadix);
	if (SUCCEEDED(hr))
	{
		if (llVal > _I16_MAX || llVal < _I16_MIN)
		{
			return E_UNEXPECTED;
		}

		*pVal = (short)llVal;
	}

	return hr;
}

template <>
inline HRESULT CFormattedIo::StringToNumber(const CStringA& strConvBuf, BYTE* pVal, int nRadix)
{
	if (pVal == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	__int64 llVal;
	hr = StringToNumber(strConvBuf, &llVal, nRadix);
	if (SUCCEEDED(hr))
	{
		if (llVal > _UI8_MAX || llVal < 0)
		{
			return E_UNEXPECTED;
		}

		*pVal = (BYTE)llVal;
	}

	return hr;
}

inline HRESULT CFormattedIo::PreprocessScanfFormatString(CStringA& strFmt, va_list& argList, bool* pbSuppressAssignment, long* plFieldWidth, long** pplSizeArg, CStringA* pstrEnumName)
{
	if (pbSuppressAssignment == NULL)
		return E_POINTER;

	*pbSuppressAssignment = false;

	HRESULT hr = S_OK;

	if (pstrEnumName != NULL)
	{
		// Remove the enum name specifier
		hr = ParseEnumSpecifierFromFormatString(strFmt, pstrEnumName);
		if (FAILED(hr))
			return hr;
	}

	// Remove the assignment suppression operator, if it exists
	int nIndex = 1;
	while (isspace(strFmt.GetAt(nIndex)))
		nIndex++;

	*pbSuppressAssignment = strFmt.GetAt(nIndex) == '*';
	if (*pbSuppressAssignment)
	{
		strFmt.Delete(nIndex);
	}

	// Replace any '#' specifiers with an argument from the stack
	int nPoundIndex = 0;
	while ((nPoundIndex = strFmt.Find('#')) > 0)
	{
		// Exclude any characters found inside a '%[]' specifier
		int nLBracketIndex = strFmt.Find('[');
		if (nLBracketIndex > 0 && nPoundIndex >= nLBracketIndex)
			break;

		long* plSizeArg = va_arg(argList, long*);
		if (plSizeArg == NULL)
			return E_INVALIDARG;

		CStringA strArg;
		strArg.Format("%d", *plSizeArg);

		strFmt = strFmt.Mid(0, nPoundIndex) + strArg + strFmt.Mid(nPoundIndex + 1);

		if (pplSizeArg != NULL)
		{
			// Store a pointer to the size arg so that it can be updated later with 
			// the actual size. Note that even though more than one size arg can be 
			// present (field width and array size), we only need to keep the last one 
			// because it's always the one that needs to get updated on output.
			*pplSizeArg = plSizeArg;
		}
	}

	if (plFieldWidth != NULL)
	{
		int nFieldWidthIndex = 1;
		int n488ModifierIndex = strFmt.Find('@');
		if (n488ModifierIndex > 0)
		{
			nFieldWidthIndex = n488ModifierIndex + 2;
		}

		// atoi returns zero if it couldn't convert.
		*plFieldWidth = atoi(strFmt.Mid(nFieldWidthIndex));		
		*plFieldWidth = *plFieldWidth == 0 ? -1 : *plFieldWidth; 
	}

	return hr;
}

template <typename T>
HRESULT CFormattedIo::PreprocessScanfArrayFormatString(CStringA& strFmt, va_list& argList, bool* pbSuppressAssignment, long* plFieldWidth, long* plArraySize, long** pplArraySizeArg, T** ppArrayArg, SAFEARRAY*** pppsaArrayArg, CStringA& strDelimList, CStringA* pstrEnumName)
{
	if (ppArrayArg == NULL)
		return E_POINTER;

	if (pppsaArrayArg == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	*ppArrayArg = NULL;
	*pppsaArrayArg = NULL;

	hr = PreprocessScanfFormatString(strFmt, argList, pbSuppressAssignment, plFieldWidth, pplArraySizeArg, pstrEnumName);
	if (SUCCEEDED(hr))
	{
		hr = PreprocessArrayFormatString(strFmt, plArraySize, strDelimList);
		if (SUCCEEDED(hr) && !*pbSuppressAssignment)
		{
			if (strFmt.Find("$S") > 0)
			{
				*pppsaArrayArg = va_arg(argList, SAFEARRAY**);
				if (*pppsaArrayArg == NULL)
					return E_INVALIDARG;

				strFmt.Replace("$S", "");
			}
			else
			{
				// C-style array => size must be specified
				if (*plArraySize < 0)
					return E_UNEXPECTED;

				*ppArrayArg = va_arg(argList, T*);
				if (*ppArrayArg == NULL)
					return E_INVALIDARG;
			}
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::PreprocessArrayFormatString(CStringA& strFmt, long* plArraySize, CStringA& strDelimList)
{
	if (plArraySize == NULL)
		return E_POINTER;

	HRESULT hr = S_OK;

	*plArraySize = -1;

	int nArraySizeIndexStart = 0;

	// Look to see if a set of delimiters was specified in parentheses
	int nLParenIndex = strFmt.Find('(');
	if (nLParenIndex > 0)
	{
		int nRParenIndex = strFmt.Find(')');

		strDelimList.Empty();
		for (int nIndex = nLParenIndex + 1; nIndex < nRParenIndex; nIndex++)
		{
			char chDelim = strFmt.GetAt(nIndex);
			switch (chDelim)
			{
				case 's':
					strDelimList.AppendChar(' ');
					break;
				case 't':
					strDelimList.AppendChar('\t');
					break;
				case 'r':
					strDelimList.AppendChar('\r');
					break;
				case 'n':
					strDelimList.AppendChar('\n');
					break;
				case ',':
				case ';':
				case ':':
					strDelimList.AppendChar(chDelim);
					break;
				default:
					return E_INVALIDARG;
					break;
			}
		}

		// Remove the delimiter specifier
		strFmt.Delete(nLParenIndex, nRParenIndex - nLParenIndex + 1);

		nArraySizeIndexStart = nLParenIndex;
	}
	else
	{
		int nCommaIndex = strFmt.Find(',');
		ATLASSERT(nCommaIndex > 0);
		if (nCommaIndex < 0)
			return E_UNEXPECTED;

		strDelimList = ',';

		// Remove the comma
		strFmt.Delete(nCommaIndex, 1);

		nArraySizeIndexStart = nCommaIndex;
	}
	
	// Check if the array size has been specified
	long lArraySizeIndex = -1;
	long lArraySize = -1;
	for (int i = nArraySizeIndexStart; i < (int)strFmt.GetLength(); i++)
	{
		if (IsDigit(strFmt.GetAt(i)))
		{
			lArraySizeIndex = i;
			lArraySize = atoi(strFmt.Mid(i));

			// Remove the array size from the format string
			int nArraySizeLen = 0;
			while (IsDigit(strFmt.GetAt(i)) && nArraySizeLen < (int)strFmt.GetLength())
			{
				nArraySizeLen++;
				i++;
			}

			strFmt.Delete(lArraySizeIndex, nArraySizeLen);

			break;
		}
	}

	*plArraySize = lArraySize;

	return hr;
}

inline HRESULT CFormattedIo::ParseEnumSpecifierFromFormatString(CStringA& strFmt, CStringA* pstrEnumName)
{
	if (pstrEnumName == NULL)
		return E_INVALIDARG;

	HRESULT hr = S_OK;

	int nIndexLBrace = strFmt.Find('{');
	if (nIndexLBrace >= 0)
	{
		int nIndexRBrace = strFmt.Find('}');
		if (nIndexRBrace > nIndexLBrace)
		{
			*pstrEnumName = strFmt.Mid(nIndexLBrace + 1, nIndexRBrace - nIndexLBrace - 1);
			pstrEnumName->Trim();

			strFmt = strFmt.Mid(0, nIndexLBrace) + strFmt.Mid(nIndexRBrace + 1);
		}
	}

	return hr;
}

inline bool CFormattedIo::IsDigit(char ch, int nRadix)
{
	switch (nRadix)
	{
		case 10:
			return isdigit(ch) != 0;
		case 2:
			return ch == '1' || ch == '0';
		case 8:
			return isdigit(ch) != 0 && ch < '8';
		case 16:
			return isxdigit(ch) != 0;
		default:
			ATLASSERT(!_T("Unsupported radix."));
			return false;
	}
}

inline HRESULT CFormattedIo::ParsePrintfFormatString(LPCSTR pszFormat, CAtlArray<FormatStringToken>& rgTokens)
{
	HRESULT hr = S_OK;

	static CAtlRegExp<CAtlRECharTraitsA>* pParser = NULL;
	hr = GetPrintfFormatStringParser(&pParser);
	if (FAILED(hr))
		return hr;

	LPCSTR pszNext = pszFormat;
	FormatStringToken token;
	while (GetFormatStringToken(pParser, pszNext, &pszNext, token))
	{
		rgTokens.Add(token);
	}

	// We must match the entire format string, else it's a parse error
	if (pszNext != NULL && *pszNext != NULL)
	{
		hr = E_UNEXPECTED;
	}

	return hr;
}

inline HRESULT CFormattedIo::ParseScanfFormatString(LPCSTR pszFormat, CAtlArray<FormatStringToken>& rgTokens)
{
	HRESULT hr = S_OK;

	static CAtlRegExp<CAtlRECharTraitsA>* pParser = NULL;
	hr = GetScanfFormatStringParser(&pParser);
	if (FAILED(hr))
		return hr;

	LPCSTR pszNext = pszFormat;
	FormatStringToken token;
	while (GetFormatStringToken(pParser, pszNext, &pszNext, token))
	{
		rgTokens.Add(token);
	}

	// We must match the entire format string, else it's a parse error
	if (pszNext != NULL && *pszNext != NULL)
	{
		hr = E_UNEXPECTED;
	}

	return hr;
}

inline HRESULT CFormattedIo::GetPrintfFormatStringParser(CAtlRegExp<CAtlRECharTraitsA>** ppParser)
{
	HRESULT hr = S_OK;

	CStringA strRegExp = "^";	// Prefix expression with caret "^" to ensure the match starts from the
								// beginning of the current position in the format string.
	int nToken = 0;
	while (g_rgPrintfFormatStringTokens[nToken] != NULL)
	{
		// Enclose each token in braces so that it becomes its own
		// match group with a corresponding group number that will
		// be the token identifier.
		strRegExp += "{" + CStringA(g_rgPrintfFormatStringTokens[nToken]) + "}|";
		nToken++;
	}
	strRegExp = strRegExp.TrimRight('|');

	if (nToken == 0)
	{
		ATLASSERT(!_T("Parser token map is empty."));
		return E_FAIL;
	}

	static CAtlRegExp<CAtlRECharTraitsA> parser;
	static bool bInitialized = false;
	if (!bInitialized)
	{
		REParseError pe = parser.Parse(strRegExp);
		ATLASSERT(pe == REPARSE_ERROR_OK);
		if (pe != REPARSE_ERROR_OK)
			return E_FAIL;

		bInitialized = true;
	}

	*ppParser = &parser;

	return hr;
}

inline HRESULT CFormattedIo::GetScanfFormatStringParser(CAtlRegExp<CAtlRECharTraitsA>** ppParser)
{
	HRESULT hr = S_OK;

	CStringA strRegExp = "^";	// Prefix expression with caret "^" to ensure the match starts from the
								// beginning of the current position in the format string.
	int nToken = 0;
	while (g_rgScanfFormatStringTokens[nToken] != NULL)
	{
		// Enclose each token in braces so that it becomes its own
		// match group with a corresponding group number that will
		// be the token identifier.
		strRegExp += "{" + CStringA(g_rgScanfFormatStringTokens[nToken]) + "}|";
		nToken++;
	}
	strRegExp = strRegExp.TrimRight('|');

	if (nToken == 0)
	{
		ATLASSERT(!_T("Parser token map is empty."));
		return E_FAIL;
	}

	static CAtlRegExp<CAtlRECharTraitsA> parser;
	static bool bInitialized = false;
	if (!bInitialized)
	{
		REParseError pe = parser.Parse(strRegExp);
		ATLASSERT(pe == REPARSE_ERROR_OK);
		if (pe != REPARSE_ERROR_OK)
			return E_FAIL;

		bInitialized = true;
	}

	*ppParser = &parser;

	return hr;
}

inline bool CFormattedIo::GetFormatStringToken(CAtlRegExp<CAtlRECharTraitsA>* pParser, LPCSTR pszFormat, LPCSTR* ppszNext, FormatStringToken& token)
{
	LPCSTR pszNext = NULL;
	CAtlREMatchContext<CAtlRECharTraitsA> mc;
	if (pParser->Match(pszFormat, &mc, &pszNext))
	{	
		for (UINT nGroup = 0; nGroup < mc.m_uNumGroups; nGroup++)
		{
			LPCSTR pszStart = NULL;
			LPCSTR pszEnd = NULL;
			mc.GetMatch(nGroup, &pszStart, &pszEnd);
			ptrdiff_t nLength = pszEnd - pszStart;
			if (nLength > 0)
			{
				// We can safely return immediately because we know that
				// the regular expression is written in such a way that 
				// only one group matches per call to CAtlREMatchContext::Match.
				token.m_nType = nGroup;
				token.m_psz = pszStart;
				token.m_lLen = (long)nLength;

				if (ppszNext != NULL)
				{
					*ppszNext = pszNext;
				}

				return true;
			}
		}
	}

	return false;
}

///////////////////////////////////////////////////////////////////////////////
// CMemoryBuffer

inline CFormattedIo::CMemoryBuffer::CMemoryBuffer(BYTE* pReadBuf, long cbReadBuf, BYTE* pWriteBuf, long cbWriteBuf)
	: m_pReadBufStart(pReadBuf), 
	  m_pReadBufCurPos(pReadBuf),
	  m_cbReadBuf(cbReadBuf),
	  m_pWriteBufStart(pWriteBuf), 
	  m_pWriteBufCurPos(pWriteBuf),
	  m_cbWriteBuf(cbWriteBuf),
	  m_bBigEndian(true)
{
}

inline HRESULT CFormattedIo::CMemoryBuffer::Read(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	if (m_pReadBufStart == NULL)
		return E_POINTER;

	long cbAvailable = GetNumReadBufferBytesAvailable();
	if (cbAvailable == 0)
		return E_UNEXPECTED;

	long cbRead = min(cbDesired, cbAvailable);

	::memcpy(pBuf, m_pReadBufCurPos, cbRead);

	m_pReadBufCurPos += cbRead;

	if (pcbActual != NULL)
	{
		*pcbActual = cbRead;
	}

	if (bFlush)
	{
		hr = FlushRead();
	}
	else
	{
		cbAvailable = GetNumReadBufferBytesAvailable();
		hr = cbAvailable > 0 ? S_DATA_AVAILABLE : S_OK;
	}

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::Read(LPSTR pszBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	hr = Read((BYTE*)pszBuf, cbDesired, pcbActual, bFlush);

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::Read(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush)
{
	HRESULT hr = S_OK;
	
	if (ppsaBuf == NULL)
		return E_POINTER;

	*ppsaBuf = NULL;

	long cbAvailable = GetNumReadBufferBytesAvailable();
	if (cbAvailable == 0)
		return E_UNEXPECTED;

	long cbRead = min(cbDesired, cbAvailable);
	
	SAFEARRAY* psa = ::SafeArrayCreateVectorEx(VT_UI1, 0, cbRead, NULL);
	if (psa == NULL)
		return E_OUTOFMEMORY;

	BYTE* pBuf = NULL;
	hr = ::SafeArrayAccessData(psa, (void**)pBuf);
	if (SUCCEEDED(hr))
	{
		long cbActual;
		hr = Read(pBuf, cbRead, &cbActual, bFlush);

		HRESULT hr2 = ::SafeArrayUnaccessData(psa);
		hr = FAILED(hr) ? hr : hr2;

		if (SUCCEEDED(hr))
		{
			*ppsaBuf = psa;
		}
		else
		{
			::SafeArrayDestroy(psa);
		}

		if (SUCCEEDED(hr) && bFlush)
		{
			HRESULT hr2 = FlushRead();
			hr = FAILED(hr2) ? hr2 : hr;
		}
	}
	
	return S_OK;
}

inline HRESULT CFormattedIo::CMemoryBuffer::Read(BSTR* pbstrBuf, long cbDesired, bool bFlush)
{
	HRESULT hr = S_OK;

	long cbAvailable = GetNumReadBufferBytesAvailable();
	if (cbAvailable == 0)
		return E_UNEXPECTED;

	long cbRead = min(cbDesired, cbAvailable);

	BYTE* pBuf = (BYTE*)::malloc(cbRead + 1);		// Make room for NULL terminator need for SysAllocStringByteLen
	if (pBuf == NULL)
		return E_OUTOFMEMORY;

	long cbActual;
	hr = Read(pBuf, cbRead, &cbActual, bFlush);
	if (SUCCEEDED(hr))
	{
		// Add NULL terminator for SysAllocStringByteLen
		pBuf[cbActual] = NULL;
		BSTR bstr = ::SysAllocStringByteLen((LPSTR)pBuf, cbActual);
		if (bstr == NULL)
			return E_OUTOFMEMORY;

		*pbstrBuf = bstr;

		if (SUCCEEDED(hr) && bFlush)
		{
			hr = FlushRead();
		}
	}

	::free(pBuf);

	return S_OK;
}

inline HRESULT CFormattedIo::CMemoryBuffer::Read(char& ch)
{
	HRESULT hr = S_OK;

	hr = Read((BYTE*)&ch, 1, NULL, false);

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::UnReadChar()
{
	HRESULT hr = S_OK;

	// Can't push a char onto the buffer if we're already at the very beginning
	if (m_pReadBufCurPos == m_pReadBufStart)
		return E_OUTOFMEMORY;

	m_pReadBufCurPos--;

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::ReadBinaryBlockData(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	hr = Read(pBuf, cbDesired, pcbActual, bFlush);

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::Write(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	if (m_pWriteBufStart == NULL)
		return E_POINTER;

	long cbAvailable = GetNumWriteBufferBytesAvailable();
	if (cbAvailable < cbDesired)
	{
		ATLASSERT(!_T("Tried to write past the end of the buffer."));
		return E_UNEXPECTED;
	}

	long cbWritten = min(cbDesired, cbAvailable);

	::memcpy(m_pWriteBufCurPos, pBuf, cbWritten);

	m_pWriteBufCurPos += cbWritten;

	if (pcbActual != NULL)
	{
		*pcbActual = cbWritten;
	}

	if (bFlush)
	{
		hr = FlushWrite(true);
	}

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::Write(LPCSTR pszBuf, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	long cbDesired = (long)strlen(pszBuf);

	hr = Write((BYTE*)pszBuf, cbDesired, pcbActual, bFlush);

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::Write(SAFEARRAY* psaBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	BYTE* pBuf = NULL;
	hr = ::SafeArrayAccessData(psaBuf, (void**)&pBuf);
	if (SUCCEEDED(hr))
	{
		hr = Write(pBuf, cbDesired, pcbActual, bFlush);

		HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
		hr = FAILED(hr) ? hr : hr2;

		if (SUCCEEDED(hr) & bFlush)
		{
			hr = FlushWrite(true);
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::Write(BSTR bstrBuf, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	long cbDesired = (long)::SysStringLen(bstrBuf);
	LPSTR pszBuf = CW2A(bstrBuf);
	hr = Write((BYTE*)pszBuf, cbDesired, pcbActual, bFlush);

	if (SUCCEEDED(hr) & bFlush)
	{
		hr = FlushWrite(true);
	}

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::Write(char ch, bool bFlush)
{
	HRESULT hr = S_OK;

	hr = Write((BYTE*)&ch, 1, NULL, bFlush);

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::FlushRead()
{
	HRESULT hr = S_OK;

	if (m_pReadBufStart == NULL)
		return E_POINTER;

	m_pReadBufCurPos = m_pReadBufStart;

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::FlushWrite(bool bSendEnd)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(bSendEnd);

	// Do nothing

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::SetBufferSize(IoBufferMask eMask, long cbSize)
{
	NTL_UNUSED(eMask);
	NTL_UNUSED(cbSize);

	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline HRESULT CFormattedIo::CMemoryBuffer::GetReadBufferSize(long* pcbSize)
{
	HRESULT hr = S_OK;

	if (pcbSize == NULL)
		return E_POINTER;

	*pcbSize = m_cbReadBuf;

	return hr;
}

inline HRESULT CFormattedIo::CMemoryBuffer::GetWriteBufferSize(long* pcbSize)
{
	HRESULT hr = S_OK;

	if (pcbSize == NULL)
		return E_POINTER;

	*pcbSize = m_cbWriteBuf;

	return hr;
}

inline bool CFormattedIo::CMemoryBuffer::GetBigEndian() const
{
	return m_bBigEndian;
}

inline void CFormattedIo::CMemoryBuffer::SetBigEndian(bool bBigEndian)
{
	m_bBigEndian = bBigEndian;
}

inline long CFormattedIo::CMemoryBuffer::GetNumReadBufferBytesAvailable() const
{
	return (long)(m_cbReadBuf - (m_pReadBufCurPos - m_pReadBufStart));
}

inline long CFormattedIo::CMemoryBuffer::GetNumWriteBufferBytesAvailable() const
{
	return (long)(m_cbWriteBuf - (m_pWriteBufCurPos - m_pWriteBufStart));
}

///////////////////////////////////////////////////////////////////////////////
// CCStringWriter

inline CFormattedIo::CCStringWriter::CCStringWriter(CString& strBuf)
	: m_strBuf(strBuf)
{
}

inline HRESULT CFormattedIo::CCStringWriter::Read(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	NTL_UNUSED(pBuf);
	NTL_UNUSED(cbDesired);
	NTL_UNUSED(pcbActual);
	NTL_UNUSED(bFlush);

	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline HRESULT CFormattedIo::CCStringWriter::Read(LPSTR pszBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	NTL_UNUSED(pszBuf);
	NTL_UNUSED(cbDesired);
	NTL_UNUSED(pcbActual);
	NTL_UNUSED(bFlush);

	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline HRESULT CFormattedIo::CCStringWriter::Read(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush)
{
	NTL_UNUSED(ppsaBuf);
	NTL_UNUSED(cbDesired);
	NTL_UNUSED(bFlush);

	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline HRESULT CFormattedIo::CCStringWriter::Read(BSTR* pbstrBuf, long cbDesired, bool bFlush)
{
	NTL_UNUSED(pbstrBuf);
	NTL_UNUSED(cbDesired);
	NTL_UNUSED(bFlush);

	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline HRESULT CFormattedIo::CCStringWriter::Read(char& ch)
{
	NTL_UNUSED(ch);

	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline HRESULT CFormattedIo::CCStringWriter::UnReadChar()
{
	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline HRESULT CFormattedIo::CCStringWriter::ReadBinaryBlockData(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	NTL_UNUSED(pBuf);
	NTL_UNUSED(cbDesired);
	NTL_UNUSED(pcbActual);
	NTL_UNUSED(bFlush);

	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline HRESULT CFormattedIo::CCStringWriter::Write(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	for (int i = 0; i < cbDesired; i++)
	{
		m_strBuf.AppendChar((TCHAR)pBuf[i]);
	}

	if (pcbActual != NULL)
	{
		*pcbActual = cbDesired;
	}

	if (bFlush)
	{
		hr = FlushWrite(true);
	}

	return hr;
}

inline HRESULT CFormattedIo::CCStringWriter::Write(LPCSTR pszBuf, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	hr = Write((BYTE*)pszBuf, (long)strlen(pszBuf), pcbActual, bFlush);

	return hr;
}

inline HRESULT CFormattedIo::CCStringWriter::Write(SAFEARRAY* psaBuf, long cbDesired, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	BYTE* pBuf = NULL;
	hr = ::SafeArrayAccessData(psaBuf, (void**)&pBuf);
	if (SUCCEEDED(hr))
	{
		hr = Write(pBuf, cbDesired, pcbActual, bFlush);

		HRESULT hr2 = ::SafeArrayUnaccessData(psaBuf);
		hr = FAILED(hr) ? hr : hr2;

		if (SUCCEEDED(hr) & bFlush)
		{
			hr = FlushWrite(true);
		}
	}

	return hr;
}

inline HRESULT CFormattedIo::CCStringWriter::Write(BSTR bstrBuf, long* pcbActual, bool bFlush)
{
	HRESULT hr = S_OK;

	long cbDesired = (long)::SysStringLen(bstrBuf);
	LPSTR pszBuf = CW2A(bstrBuf);
	hr = Write((BYTE*)pszBuf, cbDesired, pcbActual, bFlush);

	if (SUCCEEDED(hr) & bFlush)
	{
		hr = FlushWrite(true);
	}

	return hr;
}

inline HRESULT CFormattedIo::CCStringWriter::Write(char ch, bool bFlush)
{
	HRESULT hr = S_OK;

	hr = Write((BYTE*)&ch, 1, NULL, bFlush);

	return hr;
}

inline HRESULT CFormattedIo::CCStringWriter::FlushRead()
{
	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline HRESULT CFormattedIo::CCStringWriter::FlushWrite(bool bSendEnd)
{
	HRESULT hr = S_OK;

	NTL_UNUSED(bSendEnd);

	// Do nothing

	return hr;
}

inline HRESULT CFormattedIo::CCStringWriter::SetBufferSize(IoBufferMask eMask, long cbSize)
{
	NTL_UNUSED(eMask);
	NTL_UNUSED(cbSize);
	
	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline HRESULT CFormattedIo::CCStringWriter::GetReadBufferSize(long* pcbSize)
{
	NTL_UNUSED(pcbSize);

	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline HRESULT CFormattedIo::CCStringWriter::GetWriteBufferSize(long* pcbSize)
{
	NTL_UNUSED(pcbSize);

	ATLASSERT(!_T("Not supported."));

	return E_NOTIMPL;
}

inline bool CFormattedIo::CCStringWriter::GetBigEndian() const
{
	ATLASSERT(!_T("Not supported."));

	return false;
}

inline void CFormattedIo::CCStringWriter::SetBigEndian(bool bBigEndian)
{
	NTL_UNUSED(bBigEndian);

	ATLASSERT(!_T("Not supported."));
}



