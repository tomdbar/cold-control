/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <stdarg.h>
#include <ntlvisa.h>
#include <visa.h>

// Disable the warning about "dominate" base class implementations that occurs because
// we are using virtual inheritance between IIoSession, IVisaSession, et. al.
#pragma warning( push )
#pragma warning( disable : 4250 )	// C4250: 'class1' : inherits 'class2::member' via dominance

#define VISAC_DEFAULT_STRING_LEN	1024

///////////////////////////////////////////////////////////////////////////////
//
//	Forward declarations
//

interface IVisaCSession;
interface IVisaCLowLevelIo;
interface IVisaCSessionInfo;
interface IVisaCMemoryIo;
interface IVisaCEventManager;
interface IVisaCDirectIo;

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaCSession
//

interface IVisaCSession : 
	public virtual IVisaIoSession
{
	__declspec(property(get=get_LowLevel)) IVisaCLowLevelIo& LowLevel;
	virtual IVisaCLowLevelIo& get_LowLevel() abstract;

	__declspec(property(get=get_SessionInfo)) IVisaCSessionInfo& SessionInfo;
	virtual IVisaCSessionInfo& get_SessionInfo() abstract;

	__declspec(property(get=get_Memory)) IVisaCMemoryIo& Memory;
	virtual IVisaCMemoryIo& get_Memory() abstract;

	__declspec(property(get=get_DirectIo)) IVisaCDirectIo& DirectIo;
	virtual IVisaCDirectIo& get_DirectIo() abstract;

	__declspec(property(get=get_EventManager)) IVisaCEventManager& EventManager;
	virtual IVisaCEventManager& get_EventManager() abstract;
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaCLowLevelIo
//

interface IVisaCLowLevelIo :
	public virtual IVisaLowLevelIo
{
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaCSessionInfo
//

interface IVisaCSessionInfo : 
	public virtual IVisaSessionInfo
{
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaCMemoryIo
//

interface IVisaCMemoryIo :
	public virtual IVisaMemoryIo
{
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaCDirectIo
//

interface IVisaCDirectIo
{
	virtual HRESULT GetSession(ViSession* pSession) abstract;
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaCEventManager
//

interface IVisaCEventManager
{
	virtual HRESULT SetMaximumQueueLength(long val) abstract;
	virtual HRESULT GetMaximumQueueLength(long* pVal) abstract;

	virtual HRESULT EnableEvent(VisaEventType eEventType, VisaEventMechanism eMech) abstract;
	virtual HRESULT DisableEvent(VisaEventType eEventType, VisaEventMechanism eMech) abstract;

	virtual HRESULT DiscardEvents(VisaEventType eEventType, VisaEventMechanism eMech) abstract;

	virtual HRESULT InstallHandler(VisaEventType eEventType, ViHndlr pHandler, void* pvUserHandle) abstract;
	virtual HRESULT UninstallHandler(VisaEventType eEventType, ViHndlr pHandler, void* pvUserHandle) abstract;

	virtual HRESULT WaitOnEvent(long lWaitTimeout, VisaEventType eEventType, VisaEventType* peOutEventType, UINT32* plOutContext) abstract;
};


///////////////////////////////////////////////////////////////////////////////
//
//	CVisaCSession
//

class CVisaCSession :
	public CVisaSession,
	public IVisaCSession,
	public IVisaCLowLevelIo,
	public IVisaCSessionInfo,
	public IVisaCMemoryIo,
	public IVisaCEventManager,
	public IVisaCDirectIo
{
public:
	CVisaCSession();
	virtual ~CVisaCSession();

	///////////////////////////////////////////////////////////////////////////////
	// IVisaCSession

	virtual HRESULT Initialize(const CString& strResourceDescriptor, IInstrErrorPoller* pErrorPoller, IErrorReporter* pErrorReporter, IEnumFormatter* pEnumFormatter) override;
	virtual HRESULT Close() override;

	virtual HRESULT ReadStatusByte(short* psStatusByte) override;
	virtual HRESULT Clear() override;

	virtual HRESULT SetTimeout(long lTimeout) override;
	virtual HRESULT GetTimeout(long* plTimeout) override;

	virtual HRESULT SetProtocol(VisaIoProtocol eProtocol) override;
	virtual HRESULT GetProtocol(VisaIoProtocol* peProtocol) override;
	
	virtual HRESULT SetTerminationCharacter(UCHAR cTermChar) override;
	virtual HRESULT GetTerminationCharacter(UCHAR* pcTermChar) override;

	virtual HRESULT SetTerminationCharacterEnabled(bool bEnabled) override;
	virtual HRESULT GetTerminationCharacterEnabled(bool* pbEnabled) override;

	virtual HRESULT Lock(IoLockType eLockType, long lLockTimeout, const CString& strRequestedKey, CString& strAccessKey) override;
	virtual HRESULT Unlock() override;

	virtual HRESULT SetAttribute(long lAttribute, UINT8 uchValue) override;
	virtual HRESULT SetAttribute(long lAttribute, UINT16 usValue) override;
	virtual HRESULT SetAttribute(long lAttribute, UINT32 ulValue) override;
	virtual HRESULT SetAttribute(long lAttribute, UINT64 ullValue) override;
	virtual HRESULT SetAttribute(long lAttribute, bool bValue) override;
	virtual HRESULT SetAttribute(long lAttribute, const CString& strValue) override;

	virtual HRESULT GetAttribute(long lAttribute, UINT8* puchValue) override;
	virtual HRESULT GetAttribute(long lAttribute, UINT16* pusValue) override;
	virtual HRESULT GetAttribute(long lAttribute, UINT32* pulValue) override;
	virtual HRESULT GetAttribute(long lAttribute, UINT64* pullValue) override;
	virtual HRESULT GetAttribute(long lAttribute, bool* pbValue) override;
	virtual HRESULT GetAttribute(long lAttribute, CString& strValue) override;

	///////////////////////////////////////////////////////////////////////////////
	// IVisaCLowLevelIo

	virtual HRESULT LowLevelReadNoPoll(BYTE* pBuf, long cbDesired, long* plActual, long lTimeout = CUR_TIMEOUT) override;
	virtual HRESULT LowLevelReadNoPoll(SAFEARRAY** ppsaBuf, long cbDesired, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT LowLevelReadStringNoPoll(CString& strBuf, long cchDesired, long lTimeout = CUR_TIMEOUT)  override;
	virtual HRESULT LowLevelReadStringNoPoll(BSTR* pbstrBuf, long cchDesired, long lTimeout = CUR_TIMEOUT) override;

	virtual HRESULT LowLevelWriteNoPoll(BYTE* pBuf, long cbDesired, long* plActual = NULL, long lTimeout = CUR_TIMEOUT) override;	
	virtual HRESULT LowLevelWriteNoPoll(SAFEARRAY* psaBuf, long cbDesired = -1, long* plActual = NULL, long lTimeout = CUR_TIMEOUT) override;	

	virtual HRESULT LowLevelWriteStringNoPoll(const CString& strBuf, long* pcchActual = NULL, long lTimeout = CUR_TIMEOUT)  override;
	virtual HRESULT LowLevelWriteStringNoPoll(BSTR bstrBuf, long* pcchActual = NULL, long lTimeout = CUR_TIMEOUT)  override;	

	virtual HRESULT ReadAsync(BYTE* pBuf, long cbDesired, ULONG* plJobId) override;

	virtual HRESULT WriteAsync(BYTE* pBuf, long cbDesired, ULONG* plJobId) override;
	virtual HRESULT WriteAsync(SAFEARRAY** ppsaBuf, long cbDesired, ULONG* plJobId) override;

	virtual HRESULT AssertTrigger(VisaTriggerProtocol eProtocol) override;

	virtual HRESULT SetSendEndEnabled(bool bEnabled) override;
	virtual HRESULT GetSendEndEnabled(bool* pbEnabled) override;

	///////////////////////////////////////////////////////////////////////////////
	// IVisaCSessionInfo

	virtual HRESULT GetResourceName(CString& strName) override;

	virtual HRESULT GetInterfaceName(CString& strName) override;
	virtual HRESULT GetInterfaceType(VisaInterfaceType* peType) override;
	virtual HRESULT GetInterfaceNumber(UINT16* pusNumber) override;

	virtual HRESULT GetSessionType(CString& strType) override;

	virtual HRESULT GetManufacturerName(CString& strName) override;
	virtual HRESULT GetManufacturerId(UINT16* pusId) override;

	///////////////////////////////////////////////////////////////////////////////
	// IVisaCMemoryIo

	virtual HRESULT In8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT8* puVal) override;
	virtual HRESULT In16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT16* psVal) override;
	virtual HRESULT In32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32* plVal) override;
	virtual HRESULT In64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT64* pllVal) override;

	virtual HRESULT Out8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT8 uVal) override;
	virtual HRESULT Out16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT16 sVal) override;
	virtual HRESULT Out32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 lVal) override;
	virtual HRESULT Out64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT64 llVal) override;

	virtual HRESULT MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT8* pBuf) override;
	virtual HRESULT MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) override;
	virtual HRESULT MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT8>& saBuf) override;

	virtual HRESULT MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT16* pBuf) override;
	virtual HRESULT MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) override;
	virtual HRESULT MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT16>& saBuf) override;

	virtual HRESULT MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT32* pBuf) override;
	virtual HRESULT MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) override;
	virtual HRESULT MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT32>& saBuf) override;

	virtual HRESULT MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT64* pBuf) override;
	virtual HRESULT MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) override;
	virtual HRESULT MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT64>& saBuf) override;

	virtual HRESULT MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT8* pBuf) override;
	virtual HRESULT MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) override;
	virtual HRESULT MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT8>& saBuf) override;

	virtual HRESULT MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT16* pBuf) override;
	virtual HRESULT MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) override;
	virtual HRESULT MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT16>& saBuf) override;

	virtual HRESULT MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT32* pBuf) override;
	virtual HRESULT MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) override;
	virtual HRESULT MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT32>& saBuf) override;

	virtual HRESULT MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT64* pBuf) override;
	virtual HRESULT MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) override;
	virtual HRESULT MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT64>& saBuf) override;

	virtual HRESULT Move(VisaAddressSpace eSrcSpace, UINT64 ullSrcOffset, VisaDataWidth eSrcWidth, VisaAddressSpace eDestSpace, UINT64 ullDestOffset, VisaDataWidth eDestWidth, UINT32 ulLength) override;

	virtual HRESULT MoveAsync(VisaAddressSpace eSrcSpace, UINT64 ullSrcOffset, VisaDataWidth eSrcWidth, VisaAddressSpace eDestSpace, UINT64 ullDestOffset, VisaDataWidth eDestWidth, UINT32 ulLength, UINT32* plJobId) override;

	virtual HRESULT SetSourceBigEndian(bool bBigEndian) override;
	virtual HRESULT GetSourceBigEndian(bool* pbBigEndian)  override;

	virtual HRESULT SetDestinationBigEndian(bool bBigEndian)  override;
	virtual HRESULT GetDestinationBigEndian(bool* pbBigEndian) override;

	virtual HRESULT SetSourceIncrement(long lIncrement) override;
	virtual HRESULT GetSourceIncrement(long* plIncrement) override;

	virtual HRESULT SetDestinationIncrement(long lIncrement) override;
	virtual HRESULT GetDestinationIncrement(long* plIncrement) override;

	virtual HRESULT AllocateMemory(UINT64 ullSize, UINT64* pullOffset) override;

	virtual HRESULT FreeMemory(UINT64 ullOffset) override;

	///////////////////////////////////////////////////////////////////////////////
	// IVisaCDirectIo

	virtual HRESULT GetSession(ViSession* pSession);

	///////////////////////////////////////////////////////////////////////////////
	// IVisaCEventManager

	virtual HRESULT SetMaximumQueueLength(long val) override;
	virtual HRESULT GetMaximumQueueLength(long* pVal) override;

	virtual HRESULT EnableEvent(VisaEventType eEventType, VisaEventMechanism eMech) override;
	virtual HRESULT DisableEvent(VisaEventType eEventType, VisaEventMechanism eMech) override;

	virtual HRESULT DiscardEvents(VisaEventType eEventType, VisaEventMechanism eMech) override;

	virtual HRESULT InstallHandler(VisaEventType eEventType, ViHndlr pHandler, void* pvUserHandle) override;
	virtual HRESULT UninstallHandler(VisaEventType eEventType, ViHndlr pHandler, void* pvUserHandle) override;

	virtual HRESULT WaitOnEvent(long lWaitTimeout, VisaEventType eEventType, VisaEventType* peOutEventType, UINT32* plOutContext) override;

	///////////////////////////////////////////////////////////////////////////////
	// Interface reference properties

	virtual IVisaCLowLevelIo& get_LowLevel() override { return *this; }
	virtual IVisaCSessionInfo& get_SessionInfo() override { return *this; }
	virtual IVisaCMemoryIo& get_Memory() override { return *this; }
	virtual IVisaCDirectIo& get_DirectIo() override { return *this; }
	virtual IVisaCEventManager& get_EventManager() override { return *this; }

	///////////////////////////////////////////////////////////////////////////////
	// Helpers

protected:
	HRESULT TranslateStatus(ViStatus status);
	HRESULT TranslateAddressSpace(VisaAddressSpace eSpace, short* psSpace);
	HRESULT TranslateDataWidth(VisaDataWidth eWidth, short* psVisaWidth);
	HRESULT TranslateEventType(VisaEventType eEventType, ViEventType* peVisaType);
	HRESULT TranslateEventType(ViEventType eVisaType, VisaEventType* peEventType);
	HRESULT TranslateEventMechanism(VisaEventMechanism eEventMechanism, short* psVisaMechanism);

protected:
	ViSession m_resourceManager;
	ViSession m_session;
};

	///////////////////////////////////////////////////////////////////////////////
	// Inline includes

#include "ntlvisac.inl"

#pragma warning( pop )	// C4250: 'class1' : inherits 'class2::member' via dominance
