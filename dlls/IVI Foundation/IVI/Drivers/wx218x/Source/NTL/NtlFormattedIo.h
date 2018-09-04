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
#include "ntlcallcontext.h"
#include "ntlerrorreporter.h"

#define S_DATA_AVAILABLE	MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x102)

///////////////////////////////////////////////////////////////////////////////
//
//	IIoBuffer
//

enum IoBufferMask
{
	IoReadBuffer,
	IoWriteBuffer,
	IoReadAndWriteBuffers
};

interface IIoBuffer
{
	virtual HRESULT Read(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) abstract;
	virtual HRESULT Read(LPSTR pszBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) abstract;
	virtual HRESULT Read(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush = true) abstract;
	virtual HRESULT Read(BSTR* pbstrBuf, long cbDesired, bool bFlush = true) abstract;
	virtual HRESULT Read(char& ch) abstract;
	virtual HRESULT UnReadChar() abstract;
	virtual HRESULT ReadBinaryBlockData(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) abstract;

	virtual HRESULT Write(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) abstract;
	virtual HRESULT Write(LPCSTR pszBuf, long* pcbActual = NULL, bool bFlush = true) abstract;
	virtual HRESULT Write(SAFEARRAY* psaBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) abstract;
	virtual HRESULT Write(BSTR bstrBuf, long* pcbActual = NULL, bool bFlush = true) abstract;
	virtual HRESULT Write(char ch, bool bFlush = true) abstract;
	
	virtual HRESULT FlushRead() abstract;
	virtual HRESULT FlushWrite(bool bSendEnd) abstract;
	
	virtual HRESULT SetBufferSize(IoBufferMask eMask, long cbSize) abstract;
	virtual HRESULT GetReadBufferSize(long* pcbSize) abstract;
	virtual HRESULT GetWriteBufferSize(long* pcbSize) abstract;

	virtual bool GetBigEndian() const abstract;
	virtual void SetBigEndian(bool bBigEndian) abstract;
};

///////////////////////////////////////////////////////////////////////////////
//
//	IEnumFormatter
//

interface IEnumFormatter
{
	virtual HRESULT EnumToStringEx(const CString& strEnumName, long lVal, CString& strVal) abstract;
	virtual HRESULT EnumFromStringEx(const CString& strEnumName, const CString& strVal, long& lVal) abstract;
	virtual long GetMaxStringLength(const CString& strEnumName) abstract;
};

///////////////////////////////////////////////////////////////////////////////
//
//	CFormattedIo
//

#define DEFINITE_BLOCK_COUNT_FIELD_LENGTH_MAX		20		// IEEE 488.2 currently sets this to 9, so we have plenty 

#define SCANF_DEFAULT_STRING_LENGTH					100
#define SCANF_DEFAULT_ARRAY_LENGTH					25
#define	SCANF_CONVERSION_BUFFER_SIZE				100		// Longest string atof can handle

enum ScanfStringOptions
{
	IgnoreWhitespace = 1,		// Does not apply to whitespace in quotes
	ScanPastMaxChars = 2,
	AddNullTerminator = 4,
	Quoted = 8,
	StripQuotes = 16,
	AdjustMaxCharsOnVariableFieldWidth = 32,
	DiscardStopChar = 64,
	AppendStopChar = 128
};

class CFormattedIo
{
public:
	struct FormatStringToken
	{
		int m_nType;
		LPCSTR m_psz;
		long m_lLen;
	};

	static HRESULT Printf(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...);
	static HRESULT Printf(CString& strBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...);
	static HRESULT Printf(LPSTR pszBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...);
	static HRESULT Printf(BYTE* pBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...);
	static HRESULT PrintfIgnoreArrays(CString& strBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...);
	
	static HRESULT VPrintf(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList, bool bIgnoreArrays = false);
	static HRESULT VPrintf(CString& strBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList);
	static HRESULT VPrintf(LPSTR pszBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList);
	static HRESULT VPrintf(BYTE* pBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList);

	static HRESULT Scanf(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...);
	static HRESULT Scanf(const CString& strBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...);	
	static HRESULT Scanf(LPCSTR pszBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...);	
	static HRESULT Scanf(BYTE* pBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString strFormat, ...);	
	
	static HRESULT VScanf(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList);
	static HRESULT VScanf(const CString& strBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList);	
	static HRESULT VScanf(LPCSTR pszBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList);	
	static HRESULT VScanf(BYTE* pBuf, long cbBuf, IEnumFormatter* pEnumFormatter, const CString& strFormat, va_list& argList);	

	static HRESULT ParsePrintfFormatString(LPCSTR pszFormat, CAtlArray<FormatStringToken>& rgTokens);
	static HRESULT ParseScanfFormatString(LPCSTR pszFormat, CAtlArray<FormatStringToken>& rgTokens);

public:
	class CMemoryBuffer :
		public IIoBuffer
	{
	public:
		CMemoryBuffer(BYTE* pReadBuf, long cbReadBuf, BYTE* pWriteBuf, long cbWriteBuf);

		virtual HRESULT Read(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Read(LPSTR pszBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Read(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush = true) override;
		virtual HRESULT Read(BSTR* pbstrBuf, long cbDesired, bool bFlush = true) override;
		virtual HRESULT Read(char& ch) override;
		virtual HRESULT UnReadChar() override;
		virtual HRESULT ReadBinaryBlockData(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) override;

		virtual HRESULT Write(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Write(LPCSTR pszBuf, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Write(SAFEARRAY* psaBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Write(BSTR bstrBuf, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Write(char ch, bool bFlush = true) override;

		virtual HRESULT FlushRead() override;
		virtual HRESULT FlushWrite(bool bSendEnd) override;
		
		virtual HRESULT SetBufferSize(IoBufferMask eMask, long cbSize) override;
		virtual HRESULT GetReadBufferSize(long* pcbSize) override;
		virtual HRESULT GetWriteBufferSize(long* pcbSize) override;

		virtual bool GetBigEndian() const override;
		virtual void SetBigEndian(bool bBigEndian) override;

	protected:
		virtual long GetNumReadBufferBytesAvailable() const;
		virtual long GetNumWriteBufferBytesAvailable() const;

	private:
		long m_cbReadBuf;
		long m_cbWriteBuf;

		BYTE* m_pReadBufStart;
		BYTE* m_pReadBufCurPos;

		BYTE* m_pWriteBufStart;
		BYTE* m_pWriteBufCurPos;

		bool m_bBigEndian;
	};

	class CCStringWriter :
		public IIoBuffer
	{
	public:
		CCStringWriter(CString& strBuf);

		virtual HRESULT Read(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Read(LPSTR pszBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Read(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush = true) override;
		virtual HRESULT Read(BSTR* pbstrBuf, long cbDesired, bool bFlush = true) override;
		virtual HRESULT Read(char& ch) override;
		virtual HRESULT UnReadChar() override;
		virtual HRESULT ReadBinaryBlockData(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) override;

		virtual HRESULT Write(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Write(LPCSTR pszBuf, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Write(SAFEARRAY* psaBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Write(BSTR bstrBuf, long* pcbActual = NULL, bool bFlush = true) override;
		virtual HRESULT Write(char ch, bool bFlush = true) override;

		virtual HRESULT FlushRead() override;
		virtual HRESULT FlushWrite(bool bSendEnd) override;
		
		virtual HRESULT SetBufferSize(IoBufferMask eMask, long cbSize) override;
		virtual HRESULT GetReadBufferSize(long* pcbSize) override;
		virtual HRESULT GetWriteBufferSize(long* pcbSize) override;

		virtual bool GetBigEndian() const override;
		virtual void SetBigEndian(bool bBigEndian) override;

	private:
		CString& m_strBuf;
		long m_lPos;
	};

public:
	static HRESULT GetPrintfFormatStringParser(CAtlRegExp<CAtlRECharTraitsA>** ppParser);
	static HRESULT GetScanfFormatStringParser(CAtlRegExp<CAtlRECharTraitsA>** ppParser);
	static bool GetFormatStringToken(CAtlRegExp<CAtlRECharTraitsA>* pParser, LPCSTR pszFormat, LPCSTR* ppszNext, FormatStringToken& token);

	static HRESULT PrintLiteralChars(IIoBuffer* pBuf, FormatStringToken token);
	static HRESULT PrintCharacter(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	static HRESULT PrintString(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	static HRESULT PrintString(IIoBuffer* pBuf, const CStringA& strFmt, const CString& str, bool bFlush);
	static HRESULT PrintString(IIoBuffer* pBuf, const CStringA& strFmt, BSTR bstr, bool bFlush);
	static HRESULT PrintString(IIoBuffer* pBuf, const CStringA& strFmt, LPCSTR psz, bool bFlush);

	static HRESULT PrintStringArray(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	template <typename T>
	static HRESULT PrintStringArray(IIoBuffer* pBuf, CStringA& strFmt, va_list& argList);
	
	static HRESULT PrintEnum(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList);
	static HRESULT PrintEnum(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CStringA& strFmt, const CStringA& strEnumName, long lEnumVal, bool bFlush);

	static HRESULT PrintEnumArray(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList);

	template <typename T>
	static HRESULT PrintEnumArray(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, CStringA& strFmt, va_list& argList, const CStringA& strEnumName);

	static HRESULT PrintInteger(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);
	static HRESULT PrintIntegerArray(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	static HRESULT PrintFloat(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);
	static HRESULT PrintFloatArray(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	template <typename T>
	static HRESULT PrintNumber(IIoBuffer* pBuf, const CStringA& strFmt, T val);

	template <typename T>
	static HRESULT PrintNumericArray(IIoBuffer* pBuf, const CStringA& strFmt, va_list& argList);

	template <typename T>
	static HRESULT Format488Number(const CStringA& strFmt, int nModifierIndex, T val, CStringA& strResult);

	template <typename T>
	static void Format488Integer(const CStringA& strFmt, T val, CStringA& strResult);

	template <typename T>
	static HRESULT Format488BinaryNumber(const CStringA& strFmt, T val, CStringA& strResult);
	
	template <typename T>
	static void IntegerToBinaryString(T val, CStringA& strResult);

	static HRESULT Print488Block(IIoBuffer* pBuf, FormatStringToken token, va_list& argList, bool isDefiniteLength);

	template <typename T>
	static HRESULT Print488Block(IIoBuffer* pBuf, const CStringA& strFmtIn, va_list& argList, bool isDefiniteLength);

	static HRESULT PrintRawBinary(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	template <typename T>
	static HRESULT PrintRawBinary(IIoBuffer* pBuf, const CStringA& strFmtIn, va_list& argList);

	template <typename T>
	static HRESULT GetInputArrayArgument(const CStringA& strFmt, va_list& argList, T** ppArray, long* plArraySize, SAFEARRAY** ppsa);

	static HRESULT PreprocessPrintfFormatString(CStringA& strFmt, va_list& argList, CStringA* pstrEnumName = NULL);

	template <typename T>
	static HRESULT PreprocessPrintfArrayFormatString(CStringA& strFmt, va_list& argList, long* plArraySize, T** ppArray, SAFEARRAY** ppsa, char* pchDelimiter);

	template <typename T>
	static HRESULT PreprocessPrintfEnumArrayFormatString(CStringA& strFmt, va_list& argList, long* plArraySize, T** ppArray, SAFEARRAY** ppsa, char* pchDelimiter, CStringA& strEnumName);

	static HRESULT ScanLiteralChars(IIoBuffer* pBuf, FormatStringToken token);

	static HRESULT ScanCharacters(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);
	static HRESULT ScanCharactersUntilLinefeed(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);
	static HRESULT ScanCharactersUntilEnd(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	static HRESULT ScanStringNoWhitespace(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);	
	static HRESULT ScanStringWithWhitespace(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);	
	static HRESULT GetDelimiterListAndCharSet(FormatStringToken token, LPSTR pszDelim, CStringA& strCharSetFmt);

	static HRESULT ScanEnumNoWhitespace(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList);
	static HRESULT ScanEnumWithWhitespace(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList);
	static HRESULT ScanEnumArray(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList);

	static HRESULT ScanString(IIoBuffer* pBuf, FormatStringToken token, va_list& argList, LPCSTR pszDelimList, LPCSTR pszCharSetFmt, int fOptions);

	template <typename T>
	static HRESULT ScanString(IIoBuffer* pBuf, long lMaxChars, long* pFieldWidthArg, LPCSTR pszDelimLIst, LPCSTR pszCharSetFmt, int fOptions, T* pArg, char* pchLastCharRead = NULL);

	template <typename T>
	static HRESULT TerminateScannedString(T* pArg, int nIndex);

	static bool IsStopChar(char ch, LPCSTR pszDelimList, LPCSTR pszCharSetFmt);

	template <typename T>
	static HRESULT AppendString(T* str, char ch, int nIndex);

	static HRESULT ScanStringArray(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, FormatStringToken token, va_list& argList);

	template <typename T>
	static HRESULT ScanStringArray(IIoBuffer* pBuf, IEnumFormatter* pEnumFormatter, const CStringA& strFmt, va_list& argList, int fOptions);

	template <typename T>
	static HRESULT AssignStringArrayElement(const CString& strIn, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, long lFieldWidth, int nIndex, T* pArrayArg);

	template <typename T>
	static HRESULT AssignStringSafeArray(CAtlArray<T>& rgElements, SAFEARRAY** ppsa);

	template <typename T>
	static HRESULT ConvertStringToArg(const CString& strIn, IEnumFormatter* pEnumFormatter, const CStringA& strEnumName, T& lEnumVal);

	static HRESULT ScanInteger(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	template <typename T>
	static HRESULT ScanInteger(IIoBuffer* pBuf, const CStringA& strFmt, long lFieldWidth, T* pVal);

	static HRESULT ScanIntegerArray(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	static HRESULT ScanFloat(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	template <typename T>
	static HRESULT ScanFloat(IIoBuffer* pBuf, const CStringA& strFmt, long lFieldWidth, T* pVal);

	static HRESULT ScanFloatArray(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	template <typename T>
	static HRESULT Scan488Number(IIoBuffer* pBuf, const CStringA& strFmt, char ch488Modifier, long lFieldWidth, T* pVal);

	static HRESULT Scan488Header(IIoBuffer* pBuf, char ch488Modifier);
	static HRESULT Get488Radix(char ch488Modifier, int* pnRadix);

	template <typename T>
	static HRESULT ScanNumber(IIoBuffer* pBuf, const CStringA& strFmt, long lFieldWidth, T* pVal);

	template <typename T>
	static HRESULT ScanNumericArray(IIoBuffer* pBuf, const CStringA& strFmt, va_list& argList);

	static HRESULT Scan488Block(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	template <typename T>
	static HRESULT Scan488Block(IIoBuffer* pBuf, const CStringA& strFmtIn, va_list& argList);

	static HRESULT ScanRawBinary(IIoBuffer* pBuf, FormatStringToken token, va_list& argList);

	template <typename T>
	static HRESULT ScanRawBinary(IIoBuffer* pBuf, const CStringA& strFmtIn, va_list& argList);

	template <typename T>
	static HRESULT ScanRawBinaryAndDiscard(IIoBuffer* pBuf, long lArraySize, long* plArraySizeArg, long cbData);
 
	template <typename T>
	static HRESULT ScanRawBinaryToSafeArray(IIoBuffer* pBuf, va_list& argList, long lArraySize, long* plArraySizeArg, long cbData, bool bSwapBytes);

	template <typename T>
	static HRESULT ScanRawBinaryToBuffer(IIoBuffer* pBuf, va_list& argList, long lArraySize, long* plArraySizeArg, long cbData, bool bSwapBytes);

	static HRESULT SkipWhitespace(IIoBuffer* pBuf, char& ch);

	template <typename T>
	static HRESULT AssignNumericArg(T val, va_list& argList);

	template <typename T>
	static HRESULT StringToNumber(const CStringA& strConvBuf, T* pVal, int nRadix = 10);

	static HRESULT PreprocessScanfFormatString(CStringA& strFmt, va_list& argList, bool* pbSuppressAssignment, long* plFieldWidth, long** pplSizeArg, CStringA* pstrEnumName = NULL);

	template <typename T>
	static HRESULT PreprocessScanfArrayFormatString(CStringA& strFmt, va_list& argList, bool* pbSuppressAssignment, long* plFieldWidth, long* plArraySize, long** pplArraySizeArg, T** ppArrayArg, SAFEARRAY*** pppsaArrayArg, CStringA& strDelimList, CStringA* pstrEnumName = NULL);

	static HRESULT PreprocessArrayFormatString(CStringA& strFmt, long* plArraySize, CStringA& strDelimList);

	static HRESULT GetScanfStringArgumentPointer(va_list& argList, long lMaxChars, LPSTR* ppszArg);
	static HRESULT GetScanfStringArgumentPointer(va_list& argList, long lMaxChars, CString** ppstrArg);
	static HRESULT GetScanfStringArgumentPointer(va_list& argList, long lMaxChars, BSTR** ppbstrArg);

	static HRESULT ParseEnumSpecifierFromFormatString(CStringA& strFmt, CStringA* pstrEnumName);
	static bool IsDigit(char ch, int nRadix = 10);
};

	///////////////////////////////////////////////////////////////////////////////
	// Inline includes

#include "ntlformattedio.inl"
