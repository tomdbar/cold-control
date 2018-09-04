/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <stdarg.h>
#include <atlstr.h>
#include <atlsafe.h>
#include <atlconv.h>
#include <math.h>
#include <ntlcallcontext.h>
#include <ntlutil.h>
#include <ntlformattedio.h>
#include <ntlioconstants.h>
#include <ntlerrorreporter.h>

// Disable the warning about "dominate" base class implementations that occurs because
// we are using virtual inheritance between IIoSession, IVisaSession, et. al.
#pragma warning( push )
#pragma warning( disable : 4250 )	// C4250: 'class1' : inherits 'class2::member' via dominance

#define CUR_TIMEOUT					-2
#define DEFAULT_TIMEOUT				2000
#define DEFAULT_BUFFER_SIZE			4096

#define DECLARE_SET_AND_RESTORE_TIMEOUT(x) CTimeoutManager tomgr(this, x);

///////////////////////////////////////////////////////////////////////////////
//
//	Forward declarations
//

interface IIoSession;
interface ILowLevelIo;

///////////////////////////////////////////////////////////////////////////////
//
//	CInstrBuffer
//

class CInstrBuffer :
	public IIoBuffer
{
public:
	CInstrBuffer(ILowLevelIo* pIo, IErrorReporter* pErr, BYTE* pTrailingForReads, long cbTrailingForReads, BYTE* pTrailingForWrites, long cbTrailingForWrites);
	virtual ~CInstrBuffer();

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

	virtual bool GetBigEndian() const sealed override;
	virtual void SetBigEndian(bool bBigEndian) sealed override;

public:
	HRESULT SetTrailingForWrites(BYTE* pTrailing, long cbTrailing);
	HRESULT SetTrailingForReads(BYTE* pTrailing, long cbTrailing);

protected:
	HRESULT InitializeReadBuffer(long cbCapacity);
	HRESULT InitializeWriteBuffer(long cbCapacity);
	HRESULT CloseReadBuffer();
	HRESULT CloseWriteBuffer();
	HRESULT RefillReadBuffer();
	HRESULT BufferRead(BYTE* pBuf, long cbDesired, bool bRemoveTrailing);
	HRESULT BufferWrite(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush);
	HRESULT AppendTrailingForWrites(long* pcbAppended);
	long GetNumBytesLoadedWithoutTrailing(); 

private:
	ILowLevelIo* m_pIo;
	IErrorReporter* m_pErrReporter;

	BYTE* m_pReadBuf;
	BYTE* m_pWriteBuf;

	long m_cbReadCapacity;
	long m_cbWriteCapacity;

	long m_cbReadDataLoaded;
	long m_cbReadDataLoadedWithoutTrailing;
	long m_cbWriteDataLoaded;

	long m_lReadPos;
	bool m_bEndOfInput;					// True if last device read got an EOI, AND the buffer is empty
	bool m_bEndOfInputOnLastRefill;		// True if last device read got an EOI

	BYTE* m_pTrailingForWrites;
	long m_cbTrailingForWrites;

	BYTE* m_pTrailingForReads;
	long m_cbTrailingForReads;

	bool m_bBigEndian;
};

///////////////////////////////////////////////////////////////////////////////
//
//	IInstrErrorPoller
//

interface IInstrErrorPoller
{
	virtual HRESULT PollInstrumentErrors() abstract;
};

///////////////////////////////////////////////////////////////////////////////
//
//	IIoSession
//

interface IIoSession
{
	virtual HRESULT Initialize(const CString& strResourceDescriptor, IInstrErrorPoller* pErrorPoller, IErrorReporter* pErrorReporter, IEnumFormatter* pEnumFormatter) abstract;
	virtual HRESULT Close() abstract;

	virtual HRESULT ReadStatusByte(short* psStatusByte) abstract;
	virtual HRESULT Clear() abstract;

	virtual CString GetTrailingForReads() const abstract;
	virtual void SetTrailingForReads(const CString& str) abstract;

	virtual CString GetTrailingForWrites() const abstract;
	virtual void SetTrailingForWrites(const CString& str) abstract;

	virtual bool GetInstrumentBigEndian() const abstract;
	virtual void SetInstrumentBigEndian(bool bBigEndian) abstract;

	virtual HRESULT SetTimeout(long lTimeout) abstract;
	virtual HRESULT GetTimeout(long* plTimeout) abstract;

	virtual HRESULT SetTerminationCharacter(UCHAR cTermChar) abstract;
	virtual HRESULT GetTerminationCharacter(UCHAR* pcTermChar) abstract;

	virtual HRESULT SetTerminationCharacterEnabled(bool bEnabled) abstract;
	virtual HRESULT GetTerminationCharacterEnabled(bool* pbEnabled) abstract;

	virtual HRESULT SetBufferSize(IoBufferMask eMask, long cbSize) abstract;
	virtual HRESULT GetReadBufferSize(long* pcbSize) abstract;
	virtual HRESULT GetWriteBufferSize(long* pcbSize) abstract;

	virtual HRESULT FlushWrite(bool bSendEnd = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT FlushRead(long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT Lock(IoLockType eLockType, long lLockTimeout, const CString& strRequestedKey, CString& strAccessKey) abstract;
	virtual HRESULT Unlock() abstract;

	virtual HRESULT PollInstrumentErrors() abstract;

	virtual HRESULT Printf(const CString strFormat, ...) abstract;
	virtual HRESULT PrintfNoPoll(const CString strFormat, ...) abstract;

	virtual HRESULT VPrintf(const CString strFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) abstract;	
	virtual HRESULT VPrintfNoPoll(const CString strFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) abstract;	

	virtual HRESULT Scanf(const CString strFormat, ...) abstract;
	virtual HRESULT ScanfNoPoll(const CString strFormat, ...) abstract;
	
	virtual HRESULT ScanfWithTimeout(const CString strFormat, long lTimeout, ...) abstract;
	virtual HRESULT ScanfWithTimeoutNoPoll(const CString strFormat, long lTimeout, ...) abstract;

	virtual HRESULT VScanf(const CString strFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) abstract;	
	virtual HRESULT VScanfNoPoll(const CString strFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) abstract;	

	virtual HRESULT Queryf(const CString strWriteFormat, const CString strReadFormat, ...) abstract;
	virtual HRESULT QueryfNoPoll(const CString strWriteFormat, const CString strReadFormat, ...) abstract;
	
	virtual HRESULT QueryfWithTimeout(const CString strWriteFormat, const CString strReadFormat, long lTimeout, ...) abstract;
	virtual HRESULT QueryfWithTimeoutNoPoll(const CString strWriteFormat, const CString strReadFormat, long lTimeout, ...) abstract;

	virtual HRESULT VQueryf(const CString strWriteFormat, const CString strReadFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) abstract;	
	virtual HRESULT VQueryfNoPoll(const CString strWriteFormat, const CString strReadFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) abstract;	

public:
	virtual HRESULT QueryString(const CString& strCommand, CString& strResult, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryString(const CString& strCommand, BSTR* pbstrResult, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT QueryStringNoPoll(const CString& strCommand, CString& strResult, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryStringNoPoll(const CString& strCommand, BSTR* pbstrResult, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT QueryNumber(const CString& strCommand, double* pdResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT)  abstract;
	virtual HRESULT QueryNumber(const CString& strCommand, float* pfResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryNumber(const CString& strCommand, long* plResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryNumber(const CString& strCommand, short* psResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryNumber(const CString& strCommand, BYTE* pbResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT QueryNumberNoPoll(const CString& strCommand, double* pdResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT)  abstract;
	virtual HRESULT QueryNumberNoPoll(const CString& strCommand, float* pfResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryNumberNoPoll(const CString& strCommand, long* plResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryNumberNoPoll(const CString& strCommand, short* psResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryNumberNoPoll(const CString& strCommand, BYTE* pbResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT QueryList(const CString& strCommand, double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryList(const CString& strCommand, float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryList(const CString& strCommand, long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryList(const CString& strCommand, short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryList(const CString& strCommand, BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryList(const CString& strCommand, CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryList(const CString& strCommand, SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT QueryListNoPoll(const CString& strCommand, double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT Write(char ch, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT Write(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT Write(SAFEARRAY* psaBuf, long cbDesired = -1, long* pcbActual = NULL, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteNoPoll(char ch, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNoPoll(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNoPoll(SAFEARRAY* psaBuf, long cbDesired = -1, long* pcbActual = NULL, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteString(const CString& strData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteString(BSTR bstrData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteString(LPCTSTR pszData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteStringNoPoll(const CString& strData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteStringNoPoll(BSTR bstrData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteStringNoPoll(LPCTSTR pszData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteNumber(double dValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumber(float fValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumber(long lValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumber(short sValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumber(BYTE cValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteNumber(const CString& strCommand, double dValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumber(const CString& strCommand, float fValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumber(const CString& strCommand, long lValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumber(const CString& strCommand, short sValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumber(const CString& strCommand, BYTE cValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteNumberNoPoll(double dValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumberNoPoll(float fValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumberNoPoll(long lValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumberNoPoll(short sValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumberNoPoll(BYTE cValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteNumberNoPoll(const CString& strCommand, double dValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumberNoPoll(const CString& strCommand, float fValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumberNoPoll(const CString& strCommand, long lValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumberNoPoll(const CString& strCommand, short sValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteNumberNoPoll(const CString& strCommand, BYTE cValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteList(double* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteList(float* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteList(long* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteList(short* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteList(BYTE* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteList(SAFEARRAY* psaValues, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteList(const CString& strCommand, double* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteList(const CString& strCommand, float* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteList(const CString& strCommand, long* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteList(const CString& strCommand, short* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteList(const CString& strCommand, BYTE* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteList(const CString& strCommand, SAFEARRAY* psaValues, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteListNoPoll(double* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteListNoPoll(float* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteListNoPoll(long* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteListNoPoll(short* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteListNoPoll(BYTE* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteListNoPoll(SAFEARRAY* psaValues, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteListNoPoll(const CString& strCommand, double* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteListNoPoll(const CString& strCommand, float* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteListNoPoll(const CString& strCommand, long* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteListNoPoll(const CString& strCommand, short* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteListNoPoll(const CString& strCommand, BYTE* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteListNoPoll(const CString& strCommand, SAFEARRAY* psaValues, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteBinaryBlock(double* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlock(float* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlock(long* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlock(short* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlock(BYTE* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlock(SAFEARRAY* psaValues, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteBinaryBlock(const CString& strCommand, double* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlock(const CString& strCommand, float* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlock(const CString& strCommand, long* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlock(const CString& strCommand, short* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlock(const CString& strCommand, BYTE* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlock(const CString& strCommand, SAFEARRAY* psaValues, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteBinaryBlockNoPoll(double* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlockNoPoll(float* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlockNoPoll(long* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlockNoPoll(short* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlockNoPoll(BYTE* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlockNoPoll(SAFEARRAY* psaValues, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, double* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, float* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, long* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, short* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, BYTE* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, SAFEARRAY* psaValues, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT Read(char& ch, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT Read(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT Read(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT ReadNoPoll(char& ch, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadNoPoll(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadNoPoll(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT ReadString(CString& strResult, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadString(BSTR* pbstrResult, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT ReadStringNoPoll(CString& strResult, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadStringNoPoll(BSTR* pbstrResult, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT ReadNumber(double* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadNumber(float* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadNumber(long* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadNumber(short* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadNumber(BYTE* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT ReadNumberNoPoll(double* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadNumberNoPoll(float* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadNumberNoPoll(long* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadNumberNoPoll(short* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadNumberNoPoll(BYTE* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT ReadList(double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadList(float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadList(long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadList(short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadList(BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadList(CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadList(SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT ReadListNoPoll(double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadListNoPoll(float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadListNoPoll(long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadListNoPoll(short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadListNoPoll(BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadListNoPoll(CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadListNoPoll(SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT ReadBinaryBlock(double* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadBinaryBlock(float* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadBinaryBlock(long* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadBinaryBlock(short* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadBinaryBlock(BYTE* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadBinaryBlock(SAFEARRAY** psaData, IoDataType eType, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT ReadBinaryBlockNoPoll(double* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadBinaryBlockNoPoll(float* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadBinaryBlockNoPoll(long* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadBinaryBlockNoPoll(short* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadBinaryBlockNoPoll(BYTE* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT ReadBinaryBlockNoPoll(SAFEARRAY** psaData, IoDataType eType, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) abstract;
};

///////////////////////////////////////////////////////////////////////////////
//
//	ILowLevelIo
//

interface ILowLevelIo
{
	virtual HRESULT SetTerminationCharacterEnabled(bool bEnabled) abstract;
	virtual HRESULT GetTerminationCharacterEnabled(bool* pbEnabled) abstract;

	virtual HRESULT SetSendEndEnabled(bool bEnabled) abstract;
	virtual HRESULT GetSendEndEnabled(bool* pbEnabled) abstract;

	virtual HRESULT LowLevelRead(BYTE* pBuf, long cbDesired, long* plActual, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT LowLevelRead(SAFEARRAY** ppsaBuf, long cbDesired, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT LowLevelReadNoPoll(BYTE* pBuf, long cbDesired, long* plActual, long lTimeout = CUR_TIMEOUT) abstract;
	virtual HRESULT LowLevelReadNoPoll(SAFEARRAY** ppsaBuf, long cbDesired, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT LowLevelReadString(CString& strBuf, long cchDesired, long lTimeout = CUR_TIMEOUT)  abstract;
	virtual HRESULT LowLevelReadString(BSTR* pbstrBuf, long cchDesired, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT LowLevelReadStringNoPoll(CString& strBuf, long cchDesired, long lTimeout = CUR_TIMEOUT)  abstract;
	virtual HRESULT LowLevelReadStringNoPoll(BSTR* pbstrBuf, long cchDesired, long lTimeout = CUR_TIMEOUT) abstract;

	virtual HRESULT LowLevelWrite(BYTE* pBuf, long cbDesired, long* plActual = NULL, long lTimeout = CUR_TIMEOUT) abstract;	
	virtual HRESULT LowLevelWrite(SAFEARRAY* psaBuf, long cbDesired = -1, long* plActual = NULL, long lTimeout = CUR_TIMEOUT) abstract;	

	virtual HRESULT LowLevelWriteNoPoll(BYTE* pBuf, long cbDesired, long* plActual = NULL, long lTimeout = CUR_TIMEOUT) abstract;	
	virtual HRESULT LowLevelWriteNoPoll(SAFEARRAY* psaBuf, long cbDesired = -1, long* plActual = NULL, long lTimeout = CUR_TIMEOUT) abstract;	

	virtual HRESULT LowLevelWriteString(const CString& strBuf, long* pcchActual = NULL, long lTimeout = CUR_TIMEOUT)  abstract;	
	virtual HRESULT LowLevelWriteString(BSTR bstrBuf, long* pcchActual = NULL, long lTimeout = CUR_TIMEOUT) abstract;	

	virtual HRESULT LowLevelWriteStringNoPoll(const CString& strBuf, long* pcchActual = NULL, long lTimeout = CUR_TIMEOUT)  abstract;
	virtual HRESULT LowLevelWriteStringNoPoll(BSTR bstrBuf, long* pcchActual = NULL, long lTimeout = CUR_TIMEOUT)  abstract;	
};

///////////////////////////////////////////////////////////////////////////////
//
//	CIoSession
//

class CIoSession abstract : 
	public virtual IIoSession,
	public virtual ILowLevelIo
{
public:
	CIoSession();
	virtual ~CIoSession();
 
	virtual HRESULT Initialize(const CString& strResourceDescriptor, IInstrErrorPoller* pErrorPoller, IErrorReporter* pErrorReporter, IEnumFormatter* pEnumFormatter) override;
	virtual HRESULT Close() override;

	virtual CString GetTrailingForReads() const sealed override;
	virtual void SetTrailingForReads(const CString& str) sealed override;

	virtual CString GetTrailingForWrites() const sealed override;
	virtual void SetTrailingForWrites(const CString& str) sealed override;

	virtual bool GetInstrumentBigEndian() const sealed override;
	virtual void SetInstrumentBigEndian(bool bBigEndian) sealed override;

	virtual HRESULT SetBufferSize(IoBufferMask eMask, long cbSize) sealed override;
	virtual HRESULT GetReadBufferSize(long* pcbSize) sealed override;
	virtual HRESULT GetWriteBufferSize(long* pcbSize) sealed override;

	virtual HRESULT FlushWrite(bool bSendEnd = true, long lTimeout = CUR_TIMEOUT) sealed override;
	virtual HRESULT FlushRead(long lTimeout = CUR_TIMEOUT) sealed override;

protected:
	virtual HRESULT FinalInitialize();
	virtual HRESULT PollInstrumentErrors();

public:	
	virtual HRESULT Printf(const CString strFormat, ...) sealed override;
	virtual HRESULT PrintfNoPoll(const CString strFormat, ...) sealed override;

	virtual HRESULT VPrintf(const CString strFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) sealed override;	
	virtual HRESULT VPrintfNoPoll(const CString strFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) sealed override;	

	virtual HRESULT Scanf(const CString strFormat, ...) sealed override;
	virtual HRESULT ScanfNoPoll(const CString strFormat, ...) sealed override;

	virtual HRESULT ScanfWithTimeout(const CString strFormat, long lTimeout, ...) sealed override;
	virtual HRESULT ScanfWithTimeoutNoPoll(const CString strFormat, long lTimeout, ...) sealed override;

	virtual HRESULT VScanf(const CString strFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) sealed override;	
	virtual HRESULT VScanfNoPoll(const CString strFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) sealed override;	

	virtual HRESULT Queryf(const CString strWriteFormat, const CString strReadFormat, ...) sealed override;
	virtual HRESULT QueryfNoPoll(const CString strWriteFormat, const CString strReadFormat, ...) sealed override;

	virtual HRESULT QueryfWithTimeout(const CString strWriteFormat, const CString strReadFormat, long lTimeout, ...) sealed override;
	virtual HRESULT QueryfWithTimeoutNoPoll(const CString strWriteFormat, const CString strReadFormat, long lTimeout, ...) sealed override;

	virtual HRESULT VQueryf(const CString strWriteFormat, const CString strReadFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) sealed override;	
	virtual HRESULT VQueryfNoPoll(const CString strWriteFormat, const CString strReadFormat, va_list& argList, long lTimeout = CUR_TIMEOUT) sealed override;	

protected:

public:
	virtual HRESULT QueryString(const CString& strCommand, CString& strResult, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryString(const CString& strCommand, BSTR* pbstrResult, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT QueryStringNoPoll(const CString& strCommand, CString& strResult, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryStringNoPoll(const CString& strCommand, BSTR* pbstrResult, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT QueryNumber(const CString& strCommand, double* pdResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryNumber(const CString& strCommand, float* pfResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryNumber(const CString& strCommand, long* plResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryNumber(const CString& strCommand, short* psResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryNumber(const CString& strCommand, BYTE* pbResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT QueryNumberNoPoll(const CString& strCommand, double* pdResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryNumberNoPoll(const CString& strCommand, float* pfResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryNumberNoPoll(const CString& strCommand, long* plResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryNumberNoPoll(const CString& strCommand, short* psResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryNumberNoPoll(const CString& strCommand, BYTE* pbResult, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT QueryList(const CString& strCommand, double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryList(const CString& strCommand, float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryList(const CString& strCommand, long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryList(const CString& strCommand, short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryList(const CString& strCommand, BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryList(const CString& strCommand, CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryList(const CString& strCommand, SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT QueryListNoPoll(const CString& strCommand, double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT QueryListNoPoll(const CString& strCommand, SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator = _T(","), long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT Write(char ch, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT Write(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT Write(SAFEARRAY* psaBuf, long cbDesired = -1, long* pcbActual = NULL, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteNoPoll(char ch, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNoPoll(BYTE* pBuf, long cbDesired, long* pcbActual = NULL, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNoPoll(SAFEARRAY* psaBuf, long cbDesired = -1, long* pcbActual = NULL, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteString(const CString& strData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteString(BSTR bstrData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteString(LPCTSTR pszData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteStringNoPoll(const CString& strData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteStringNoPoll(BSTR bstrData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteStringNoPoll(LPCTSTR pszData, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteNumber(double dValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumber(float fValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumber(long lValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumber(short sValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumber(BYTE cValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteNumber(const CString& strCommand, double dValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumber(const CString& strCommand, float fValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumber(const CString& strCommand, long lValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumber(const CString& strCommand, short sValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumber(const CString& strCommand, BYTE cValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteNumberNoPoll(double dValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumberNoPoll(float fValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumberNoPoll(long lValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumberNoPoll(short sValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumberNoPoll(BYTE cValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteNumberNoPoll(const CString& strCommand, double dValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumberNoPoll(const CString& strCommand, float fValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumberNoPoll(const CString& strCommand, long lValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumberNoPoll(const CString& strCommand, short sValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteNumberNoPoll(const CString& strCommand, BYTE cValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteList(double* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteList(float* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteList(long* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteList(short* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteList(BYTE* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteList(SAFEARRAY* psaValues, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteList(const CString& strCommand, double* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteList(const CString& strCommand, float* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteList(const CString& strCommand, long* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteList(const CString& strCommand, short* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteList(const CString& strCommand, BYTE* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteList(const CString& strCommand, SAFEARRAY* psaValues, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteListNoPoll(double* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteListNoPoll(float* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteListNoPoll(long* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteListNoPoll(short* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteListNoPoll(BYTE* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteListNoPoll(SAFEARRAY* psaValues, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteListNoPoll(const CString& strCommand, double* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteListNoPoll(const CString& strCommand, float* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteListNoPoll(const CString& strCommand, long* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteListNoPoll(const CString& strCommand, short* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteListNoPoll(const CString& strCommand, BYTE* pValues, long lLength, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteListNoPoll(const CString& strCommand, SAFEARRAY* psaValues, const CString& strListSeparator = _T(","), bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteBinaryBlock(double* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlock(float* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlock(long* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlock(short* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlock(BYTE* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlock(SAFEARRAY* psaValues, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteBinaryBlock(const CString& strCommand, double* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlock(const CString& strCommand, float* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlock(const CString& strCommand, long* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlock(const CString& strCommand, short* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlock(const CString& strCommand, BYTE* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlock(const CString& strCommand, SAFEARRAY* psaValues, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteBinaryBlockNoPoll(double* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlockNoPoll(float* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlockNoPoll(long* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlockNoPoll(short* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlockNoPoll(BYTE* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlockNoPoll(SAFEARRAY* psaValues, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, double* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, float* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, long* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, short* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, BYTE* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT WriteBinaryBlockNoPoll(const CString& strCommand, SAFEARRAY* psaValues, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT Read(char& ch, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT Read(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT Read(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT ReadNoPoll(char& ch, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadNoPoll(BYTE* pBuf, long cbDesired, long* pcbActual, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadNoPoll(SAFEARRAY** ppsaBuf, long cbDesired, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT ReadString(CString& strResult, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadString(BSTR* pbstrResult, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT ReadStringNoPoll(CString& strResult, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadStringNoPoll(BSTR* pbstrResult, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT ReadNumber(double* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadNumber(float* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadNumber(long* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadNumber(short* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadNumber(BYTE* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT ReadNumberNoPoll(double* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadNumberNoPoll(float* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadNumberNoPoll(long* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadNumberNoPoll(short* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadNumberNoPoll(BYTE* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT ReadList(double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadList(float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadList(long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadList(short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadList(BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadList(CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadList(SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT ReadListNoPoll(double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadListNoPoll(float* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadListNoPoll(long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadListNoPoll(short* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadListNoPoll(BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadListNoPoll(CComBSTR* pbstrValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadListNoPoll(SAFEARRAY** ppsaData, IoDataType eType, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT ReadBinaryBlock(double* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadBinaryBlock(float* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadBinaryBlock(long* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadBinaryBlock(short* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadBinaryBlock(BYTE* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadBinaryBlock(SAFEARRAY** psaData, IoDataType eType, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT ReadBinaryBlockNoPoll(double* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadBinaryBlockNoPoll(float* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadBinaryBlockNoPoll(long* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadBinaryBlockNoPoll(short* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadBinaryBlockNoPoll(BYTE* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT ReadBinaryBlockNoPoll(SAFEARRAY** psaData, IoDataType eType, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT) override;

	///////////////////////////////////////////////////////////////////////////////
	// ILowLevelIo
	//
	
	virtual HRESULT LowLevelRead(BYTE* pBuf, long cbDesired, long* plActual, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT LowLevelRead(SAFEARRAY** ppsaBuf, long cbDesired, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT LowLevelReadString(CString& strBuf, long cchDesired, long lTimeout = CUR_TIMEOUT)  override;
	virtual HRESULT LowLevelReadString(BSTR* pbstrBuf, long cchDesired, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT LowLevelWrite(BYTE* pBuf, long cbDesired, long* plActual = NULL, long lTimeout = CUR_TIMEOUT) override;	
	virtual HRESULT LowLevelWrite(SAFEARRAY* psaBuf, long cbDesired = -1, long* plActual = NULL, long lTimeout = CUR_TIMEOUT) override;	

	virtual HRESULT LowLevelWriteString(const CString& strBuf, long* pcchActual = NULL, long lTimeout = CUR_TIMEOUT)  override;	
	virtual HRESULT LowLevelWriteString(BSTR bstrBuf, long* pcchActual = NULL, long lTimeout = CUR_TIMEOUT) override;	

	///////////////////////////////////////////////////////////////////////////////
	// CTimeoutManager
	//

protected:
	class CTimeoutManager
	{
	public:
		CTimeoutManager(IIoSession* pSession, const long lTimeout = CUR_TIMEOUT) 
			: m_lPrevTimeout(-2), m_pSession(pSession)
		{
			if (lTimeout > -2)
			{
				// User specified a desired timeout or an infinite timeout.
				HRESULT hr = m_pSession->GetTimeout(&m_lPrevTimeout);
				ATLASSERT(SUCCEEDED(hr));
				if (SUCCEEDED(hr))
				{
					m_pSession->SetTimeout(lTimeout);
				}
			}
		}

		~CTimeoutManager()
		{
			// If necessary, restore the timeout
			if (m_lPrevTimeout != CUR_TIMEOUT)
			{
				// A new timeout was not specified
				m_pSession->SetTimeout(m_lPrevTimeout);
			}
		}
	private:
		long m_lPrevTimeout;
		IIoSession* m_pSession;
	};

	// Helper functions
	bool Initialized() const;

	template <typename T>
	HRESULT WriteListNoPoll(T* pValues, long lLength, const CString& strListSeparator, bool bFlush, long lTimeout);

	template <typename T>
	HRESULT WriteBinaryBlockNoPoll(T* pValues, long lLength, bool bFlush, long lTimeout);

	template <typename T>
	HRESULT ReadListNoPoll(T* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout);

	template <typename T>
	HRESULT ReadSafeArrayListNoPoll(SAFEARRAY** ppsaData, const CString& strListSeparator, long lTimeout);

	template <typename T>
	HRESULT ReadBinaryBlockNoPoll(T* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock, bool bFlush, long lTimeout);
	
	template <typename T>
	HRESULT ReadSafeArrayBinaryBlockNoPoll(SAFEARRAY** ppsaData, bool bSeekToBlock, bool bFlush, long lTimeout);

	HRESULT ReadBinaryBlockHeader(bool bSeekToBlock, long* pcbBlock);

	template <typename T>
	HRESULT ReadBinaryBlockData(T* pValues, long lMaxLength, long cbBlock, long* plActualLength, bool bFlush);

	template <typename T>
	HRESULT ReadListElement(T* pValue, long lTimeout);

	template <typename T>
	HRESULT ReadNumberNoPoll(T* pValue, bool bFlush, long lTimeout);

	template <typename T>
	SAFEARRAY* CreateSafeArray(long cElements);

	HRESULT RemoveTrailing(CString& strBuf) const;

	template <typename T>
	HRESULT CheckForOverflowOrUnderflow(double dValue);

protected:
	IInstrErrorPoller* m_pErrPoller;
	IErrorReporter* m_pErrReporter;
	IEnumFormatter* m_pEnumFormatter;
	CAutoPtr<CInstrBuffer> m_spBuf;

	CString m_strTrailingForReads;			// Trailing characters to automatically remove from instrument response strings
	CString m_strTrailingForWrites;			// Trailing characters to automatically append to instrument commands
};

	///////////////////////////////////////////////////////////////////////////////
	// Inline includes

#include "ntlio.inl"

#pragma warning( pop )	// C4250: 'class1' : inherits 'class2::member' via dominance
