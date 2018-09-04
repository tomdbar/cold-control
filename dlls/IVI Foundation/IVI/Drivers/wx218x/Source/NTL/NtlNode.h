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
class CRepCap;
class CCoercionLog;
class CCacheEntryBase;
template <typename T> class CCacheEntry;

///////////////////////////////////////////////////////////////
//
//   CRepCapDescriptor
//

typedef CRepCap* (* RepCapCreatorFunc)();
typedef const CString* (* RepCapStaticNamesFunc)();

class CRepCapDescriptor
{
public:
	CRepCapDescriptor(const CString& strClassName, RepCapCreatorFunc pCreatorFunc, RepCapStaticNamesFunc pStaticNamesFunc)
		: m_strClassName(strClassName), m_pCreatorFunc(pCreatorFunc), m_pStaticNamesFunc(pStaticNamesFunc)
	{
	}

	const CString& GetClassName() const { return m_strClassName; }
	const RepCapCreatorFunc GetCreatorFunc() const { return m_pCreatorFunc; }
	const RepCapStaticNamesFunc GetStaticNamesFunc() const { return m_pStaticNamesFunc; }

private:
	CString m_strClassName;
	RepCapCreatorFunc m_pCreatorFunc;
	RepCapStaticNamesFunc m_pStaticNamesFunc;
};

typedef CAtlArray<CRepCap*> RepCapArray;
typedef CAtlMap<CString, RepCapArray*> RepCapMap;					// key = repcap class name, value = RepCapArray


///////////////////////////////////////////////////////////////
//
//   Constants
//

#define MAX_ENUM_STRING			1024
#define MAX_BOOL_STRING			1024
#define DEFAULT_STRING_LENGTH	1024

///////////////////////////////////////////////////////////////
//
//   Data types for deprecated I/O functions
//	(Included for backwards compatibility only)
//

enum NtlAsciiType
{
    NtlAsciiType_I2 = 2,
    NtlAsciiType_I4 = 3,
    NtlAsciiType_R4 = 4,
    NtlAsciiType_R8 = 5,
    NtlAsciiType_BSTR = 8,
    NtlAsciiType_Any = 12,
    NtlAsciiType_UI1 = 17
};

enum NtlBinaryType
{
    NtlBinaryType_I2 = 2,
    NtlBinaryType_I4 = 3,
    NtlBinaryType_R4 = 4,
    NtlBinaryType_R8 = 5,
    NtlBinaryType_UI1 = 17
};

enum NtlBufferMask
{
    NTLIO_IN_BUF = 16,
    NTLIO_OUT_BUF = 32,
    NTLIO_IN_AND_OUT_BUFS = 48
};

///////////////////////////////////////////////////////////////
//
//   CNode
//

class CNode :
	public IUnknown,
	public IInstrErrorPoller,
	public ICallContextProvider
{
protected:
	CNode();
	virtual ~CNode();

	virtual HRESULT InternalFinalConstruct();
	virtual void InternalFinalRelease();

	virtual HRESULT OnFinalInitialize() abstract;								// Implemented in user code
	virtual HRESULT OnFinalClose() abstract;									// Implemented in user code

	template <typename T>
	T* GetRoot() const;

	template <typename T>
	T* GetParent() const;

	virtual const CDriver* GetDriver() const abstract; 
	virtual CDriver* GetDriver() abstract; 

private:
	HRESULT InitNode(CNode* pRoot, CNode* pParent);
	HRESULT CloseNode();											

protected:
	void InternalResetObjectState();
	virtual void ResetObjectState();

private:
	virtual void SetRoot(CNode* pRoot);
	virtual void SetParent(CNode* pParent);

	virtual bool IsRoot() const;

public:
	virtual CTracer* GetTracer() const abstract;

	virtual IIoSession& GetIo() abstract;										// Implemented in generated code
	virtual IErrorReporter& GetErrorReporter() abstract;						// Implemented in generated code

protected:
	virtual const CString& GetClassName() const abstract;						// Implemented in generated code

public:
	virtual CString GetModel() const abstract;
	virtual CString GetResourceDescriptor() const abstract;

	virtual CString GetInherentOptionValue(const CString& strName) const abstract;
	virtual CString GetDriverSetupOptionValue(const CString& strName) const abstract;

	virtual bool GetConfigSetting(const CString& strName, CComVariant& varValue) const abstract;
	virtual bool GetConfigSetting(const CString& strName, CString& strValue) const abstract;
	virtual bool GetConfigSetting(const CString& strName, int& nValue) const abstract;
	virtual bool GetConfigSetting(const CString& strName, double& dblValue) const abstract;
	virtual bool GetConfigSetting(const CString& strName, bool& bValue) const abstract;

	virtual CString TranslateVirtualName(const CString& strVirtualName) const abstract;
	virtual CString TranslatePhysicalName(const CString& strPhysicalName) const abstract;
	virtual CString TranslatePhysicalNameToExportedPhysicalName(const CString& strRepCapName, const CString& strPhysicalName) const abstract;

	virtual bool GetInitialized() const abstract;

	virtual bool GetCache() const abstract;
	virtual bool GetInterchangeCheck() const abstract;
	virtual bool GetQueryInstrStatus() const abstract;
	virtual bool GetRangeCheck() const abstract;
	virtual bool GetRecordCoercions() const abstract;
	virtual bool GetSimulate() const abstract;

	virtual bool InstrumentSupported() const;
	virtual bool InstrumentInFamily(const CString& strFamily) const;
	virtual bool InstrumentIsModel(const CString& strModel) const;
	virtual bool ModelInFamily(const CString& strModel, const CString& strFamily) const;

	///////////////////////////////////////////////////////////////////////////////
	// Repeated capabilities
public:
	virtual HRESULT GetDynamicRepCapNames(const CString& strRepCapClassName, CAtlArray<CString>& rgRepCapNames);

protected:
	virtual const CRepCapDescriptor** GetRepCapDescriptors() const abstract;	// Implemented in generated code

	template <typename RepCapClass>
	int GetRepCapCount() const;

	template <typename RepCapClass>
	RepCapClass* GetRepCap(const CString& strInstanceName) const;

	template <typename RepCapClass>
	RepCapClass* GetRepCap(int nIndex) const;

	CRepCap* GetRepCapItem(const CString& strRepCapName, int nIndex) const;

	template <typename RepCapClass>
	HRESULT AddRepCapItem(BSTR bstrInstanceName);

	template <typename RepCapClass>
	HRESULT RemoveRepCapItem(BSTR bstrInstanceName);

	template <typename RepCapClass>
	HRESULT GetRepCapItemCount(long* plCount);

	template <typename RepCapClass>
	HRESULT GetRepCapItemName(long lIndex, BSTR* pbstrInstanceName);

	template <typename RepCapClass, typename ItfType>
	HRESULT GetRepCapItem(CComBSTR bstrInstanceName, ItfType** ppRepCap);

private:
	HRESULT FinalInitializeRepCaps();
	HRESULT FinalCloseRepCaps();

	HRESULT CreateRepCap(const CRepCapDescriptor*  pRepCapDescriptor);
	HRESULT DeleteRepCap(const CRepCapDescriptor*  pRepCapDescriptor);

	const CRepCapDescriptor* LookupRepCap(const CString& strRepCapClassName) const;

	///////////////////////////////////////////////////////////////////////////////
	// Formatting utility functions
protected:
	HRESULT Printf(CString& strBuf, const CString strFormat, ...);
	HRESULT Printf(LPSTR pszBuf, long cbBuf, const CString strFormat, ...);
	HRESULT Printf(BYTE* pBuf, long cbBuf, const CString strFormat, ...);
	
	HRESULT VPrintf(CString& strBuf, const CString& strFormat, va_list& argList);
	HRESULT VPrintf(LPSTR pszBuf, long cbBuf, const CString& strFormat, va_list& argList);
	HRESULT VPrintf(BYTE* pBuf, long cbBuf, const CString& strFormat, va_list& argList);
	
	HRESULT Scanf(const CString& strBuf, const CString strFormat, ...);	
	HRESULT Scanf(LPCSTR pszBuf, const CString strFormat, ...);	
	HRESULT Scanf(BYTE* pBuf, long cbBuf, const CString strFormat, ...);	

	HRESULT VScanf(const CString& strBuf, const CString& strFormat, va_list& argList);	
	HRESULT VScanf(LPCSTR pszBuf, const CString& strFormat, va_list& argList);	
	HRESULT VScanf(BYTE* pBuf, long cbBuf, const CString& strFormat, va_list& argList);	

	///////////////////////////////////////////////////////////////////////////////
	// Instrument command functions
protected:
	virtual HRESULT InstrPrintCommand();
	virtual HRESULT InstrPrintCommand(SAFEARRAY* psaDummyArg, ...);

	virtual HRESULT InstrPrintCommandNoPoll();
	virtual HRESULT InstrPrintCommandNoPoll(SAFEARRAY* psaDummyArg, ...);

	virtual HRESULT InstrQueryResponse(long lTimeout, ...);

	template <typename T>
	bool EnumToCommand(T enumVal, CString& strCommand) const;
 
	template <typename T>
	bool EnumFromResponse(const CString& strCommand, T& enumVal) const;
  
	bool BoolToCommand(VARIANT_BOOL bVal, CString& strCommand) const;				// Implemented in generated code
	bool BoolFromResponse(const CString& strCommand, VARIANT_BOOL& bVal) const;		// Implemented in generated code
  
	template <typename T>
	bool EnumToName(T enumVal, CString& strName) const;
 
	template <typename T>
	bool EnumFromName(const CString& strName, T& enumVal) const;

	const CString& GetInstrCommand() const;
	const CString& GetInstrResponse() const;

	void PushInstrCommand(const CString& strCmd);
	void PushInstrResponse(const CString& strResp);

	CString PopInstrCommand();
	CString PopInstrResponse();

	void PopInstrCommandNoReturn();
	void PopInstrResponseNoReturn();

	///////////////////////////////////////////////////////////////////////////////
	// Coercion
public:
	template <typename T>
	T CoerceUp(T val, int nAllowedValuesCount, T allowedValues[]);

	template <typename T>
	T CoerceDown(T val, int nAllowedValuesCount, T allowedValues[]);

	virtual CCoercionLog* GetCoercionLog() const abstract;
	virtual CString GetRepCapIdentifier();

	///////////////////////////////////////////////////////////////////////////////
	// State caching
public:
	void InvalidateCache();
	void InvalidateCacheAll();
	void InvalidateCacheEntry(const CString& strPath);

	template <typename T>
	void InitializeCacheEntry(const CString& strKey, T value);

	template <typename T>
	void UpdateCacheEntry(const CString& strKey, T value);

	template <typename T>
	void GetCacheEntryValue(const CString& strKey, T* value);

	template <typename T>
	CCacheEntry<T>* GetOrCreateCacheEntry(const CString& strKey);

	CCacheEntryBase* GetCacheEntry(const CString& strPath);

	void DestroyAllCacheEntries();

	template <typename T>
	bool CacheContainsValue(const CString& strPath, T value) const;

	template <typename T>
	void UpdateCache(const CString& strPath, T value);

	template <typename T>
	bool GetCachedValue(const CString& strPath, T* pValue) const;

private:
	CCacheEntryBase* GetCacheEntry(CAtlArray<CString>& rgRepCapSpecs, const CString& strKey);
	static const CString ParseCacheEntryPath(const CString& strPath, CAtlArray<CString>& rgRepCapSpecs);
	static long ParseRepCapSpec(const CString& strRepCapSpec, CString& strRepCapName);

private:
	CNode* m_pRoot;
	CNode* m_pParent;
	RepCapMap m_mapChildRepCaps;

	CAtlList<CString> m_rgCommands;									// instrument command stack
	CAtlList<CString> m_rgResponses;								// instrument response stack
	static CString m_strEmptyCommand;

	typedef CAtlMap<CString, CCacheEntryBase*>	CacheEntryMap;		// key = cache entry key, value = CCacheEntryBase
	CacheEntryMap m_mapCacheEntries;

public:
	friend class CRepCap;
	friend class CDriver;
	friend class ForwardingShimImpl;

	///////////////////////////////////////////////////////////////////////////////
	// Deprecated functions -- included for backwards compatibility only
public:
	// Use error object instead
	virtual HRESULT ReportError(UINT uResid, ...);

	// Use error object instead
	virtual HRESULT ReportErrorEx(UINT uResid, LPCTSTR szErrorDetails, ...);

	// Use error object instead
	virtual HRESULT ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, BSTR bstrValue);

	// Use error object instead
	virtual HRESULT ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, LPCTSTR pszValue);

	// Use error object instead
	virtual HRESULT ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, double dValue);

	// Use error object instead
	virtual HRESULT ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, float Value);

	// Use error object instead
	virtual HRESULT ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, long lValue);

	// Use error object instead
	virtual HRESULT ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, short sValue);

	// Use error object instead
	virtual HRESULT ReportInvalidValueError(LPCTSTR pszMethod, LPCTSTR pszParam, BYTE cValue);

	// Use error object instead
	virtual HRESULT ReportIOError();

	// Use error object instead
	virtual HRESULT ReportIOTimeoutError();

	// Use EnumToCommand instead
	template <typename T>
	bool EnumToString(T enumVal, CString& strCommand);

	// Use EnumFromResponse instead
	template <typename T>
	bool EnumFromString(const CString& strCommand, T& enumVal);

	// Use BoolToCommand instead
	bool BoolToString(VARIANT_BOOL bVal, CString& strCommand);

	// Use BoolFromResponse instead
	bool BoolFromString(const CString& strCommand, VARIANT_BOOL& bVal);

	// Deprecated: Use the overload that returns a bool.
	template <typename T>
	CString EnumToString(T enumVal);

	// Deprecated: Use the overload that returns a bool.
	template <typename T>
	T EnumFromString(const CString& strCommand);

	// These functions have new "const" versions
	virtual bool InstrumentSupported();
	virtual bool InstrumentInFamily(const CString& strFamily);
	virtual bool InstrumentIsModel(const CString& strModel);
	virtual bool ModelInFamily(const CString& strModel, const CString& strFamily);

#ifndef NTL_NO_IO
	HRESULT SetTrailingForReads(const CString& strTrailing);
	HRESULT SetTrailingForWrites(const CString& strTrailing);

	HRESULT GetTerminationCharacterEnabled(bool* pbEnable);
	HRESULT SetTerminationCharacterEnabled(bool bEnable);

	virtual HRESULT DeviceClear();
	virtual HRESULT ReadSTB(long* plStatus);

	virtual HRESULT SetIOTimeout(long lTimeout);
	virtual HRESULT GetIOTimeout(long* plTimeout);

	virtual HRESULT InstrQueryCommand(double* pdResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQueryCommand(float* pfResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQueryCommand(long* plResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQueryCommand(short* psResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQueryCommand(BYTE* pbResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQueryCommand(CString& strResult, long cchDesired, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQueryCommand(BSTR* pbstrResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQueryCommandBool(VARIANT_BOOL* plResult, long lTimeout = CUR_TIMEOUT);

	template <typename T>
	HRESULT InstrQueryCommandEnum(T* peResult, long lTimeout = CUR_TIMEOUT);

	virtual HRESULT InstrPrintf(LPCTSTR pszFormat, ...);
	virtual HRESULT InstrPrintfNoPoll(LPCTSTR pszFormat, ...);
	virtual HRESULT InstrQuery(const CString& strCommand, double* pdResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQuery(const CString& strCommand, float* pfResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQuery(const CString& strCommand, long* plResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQuery(const CString& strCommand, short* psResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQuery(const CString& strCommand, BYTE* pbResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQuery(const CString& strCommand, CString& strResult, long cchDesired, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrQueryf(LPCTSTR pszWriteFormat, double* pdResult, ...);
	virtual HRESULT InstrQueryf(LPCTSTR pszWriteFormat, float* pfResult, ...);
	virtual HRESULT InstrQueryf(LPCTSTR pszWriteFormat, long* plResult, ...);
	virtual HRESULT InstrQueryf(LPCTSTR pszWriteFormat, short* psResult, ...);
	virtual HRESULT InstrQueryf(LPCTSTR pszWriteFormat, BYTE* pbResult, ...);
	virtual HRESULT InstrQueryf(LPCTSTR pszWriteFormat, CString& strResult, long cchDesired, ...);

	virtual HRESULT InstrRead(BYTE* pBuf, long cbDesired, long* plActualLength, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrRead(CString& strResult, long cbDesired, long lTimeout = CUR_TIMEOUT, bool bRemoveTrailing = true);
	virtual HRESULT InstrRead(SAFEARRAY** ppsa, long cbDesired = -1, long lTimeout = CUR_TIMEOUT);

	virtual HRESULT InstrWrite(BYTE* pBuf, long cbDesired, long* pcbActual, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrWrite(const CString& strCommand, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrWrite(SAFEARRAY* psa, long cbDesired = -1, long lTimeout = CUR_TIMEOUT);

	virtual HRESULT InstrWriteNoPoll(BYTE* pBuf, long cbDesired, long* pcbActual, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrWriteNoPoll(const CString& strCommand, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT InstrWriteNoPoll(SAFEARRAY* psa, long cbDesired = -1, long lTimeout = CUR_TIMEOUT);

	virtual HRESULT FormattedWriteString(const CString& strData, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteNumber(double val, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteNumber(long val, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteNumber(BYTE val, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteNumber(VARIANT data, NtlAsciiType type, bool bFlush = true, long lTimeout = CUR_TIMEOUT);

	virtual HRESULT FormattedWriteList(double* pValues, long lLength, const CString& strListSeparator, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteList(long* pValues, long lLength, const CString& strListSeparator, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteList(BYTE* pValues, long lLength, const CString& strListSeparator, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteList(SAFEARRAY* psa, NtlAsciiType type, const CString& strListSeparator, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteList(VARIANT data, NtlAsciiType type, const CString& strListSeparator, bool bFlush = true, long lTimeout = CUR_TIMEOUT);

	virtual HRESULT FormattedWriteIEEEBlock(const CString& strCommand, double* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteIEEEBlock(const CString& strCommand, long* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteIEEEBlock(const CString& strCommand, short* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteIEEEBlock(const CString& strCommand, BYTE* pValues, long lLength, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteIEEEBlock(const CString& strCommand, VARIANT data, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedWriteIEEEBlock(const CString& strCommand, SAFEARRAY* pData, bool bFlush = true, long lTimeout = CUR_TIMEOUT);

	virtual HRESULT FormattedReadString(CString& strResult, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadString(BSTR* pbstrResult, long lTimeout = CUR_TIMEOUT);

	virtual HRESULT FormattedReadNumber(double* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadNumber(long* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadNumber(BYTE* pValue, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadNumber(NtlAsciiType type, VARIANT* pData, bool bFlush = true, long lTimeout = CUR_TIMEOUT);

	virtual HRESULT FormattedReadList(double* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadList(long* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadList(BYTE* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadList(CComBSTR* pValues, long lMaxLength, long* plActualLength, const CString& strListSeparator, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadList(NtlAsciiType type, const CString& strListSeparator, VARIANT* pData, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadList(NtlAsciiType type, const CString& strListSeparator, SAFEARRAY** pData, long lTimeout = CUR_TIMEOUT);

	virtual HRESULT FormattedReadIEEEBlock(double* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadIEEEBlock(long* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadIEEEBlock(BYTE* pValues, long lMaxLength, long* plActualLength, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadIEEEBlock(NtlBinaryType type, VARIANT* pData, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedReadIEEEBlock(NtlBinaryType type, SAFEARRAY** pData, bool bSeekToBlock = false, bool bFlush = true, long lTimeout = CUR_TIMEOUT);

	virtual HRESULT FormattedFlushWrite(bool bSendEnd = true, long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedFlushRead(long lTimeout = CUR_TIMEOUT);
	virtual HRESULT FormattedSetBufferSize(NtlBufferMask mask, long lSize);
#endif // NTL_NO_IO	

#ifdef NTL_MANAGED_CPP_EXTENSIONS
	typedef System::Byte ManagedByteArray __gc[];
	typedef System::Int16 ManagedInt16Array __gc[];
	typedef System::Int32 ManagedInt32Array __gc[];
	typedef System::Double ManagedDoubleArray __gc[];

	HRESULT ConvertSystemArrayToSAFEARRAY(System::Byte data __gc[], SAFEARRAY** ppsa);
	HRESULT ConvertSystemArrayToSAFEARRAY(System::Int16 data __gc[], SAFEARRAY** ppsa);
	HRESULT ConvertSystemArrayToSAFEARRAY(System::Int32 data __gc[], SAFEARRAY** ppsa);
	HRESULT ConvertSystemArrayToSAFEARRAY(System::Double data __gc[], SAFEARRAY** ppsa);

	HRESULT ConvertSAFEARRAYToSystemArray(SAFEARRAY* psa, ManagedByteArray* data);
	HRESULT ConvertSAFEARRAYToSystemArray(SAFEARRAY* psa, ManagedInt16Array* data);
	HRESULT ConvertSAFEARRAYToSystemArray(SAFEARRAY* psa, ManagedInt32Array* data);
	HRESULT ConvertSAFEARRAYToSystemArray(SAFEARRAY* psa, ManagedDoubleArray* data);
#endif // NTL_MANAGED_CPP_EXTENSIONS

	// END of deprecated functions
	///////////////////////////////////////////////////////////////////////////////
};
