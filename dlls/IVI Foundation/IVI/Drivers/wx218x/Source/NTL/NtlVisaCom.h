/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <stdarg.h>
#include "ntlvisa.h"

#import "GlobMgr.dll" no_namespace, raw_interfaces_only

//uuid(36F6E303-A9CE-11D4-98E5-00108301CB39)
static const GUID CLSID_AgilentSRM =
	 { 0x36F6E303, 0xA9CE, 0x11D4, { 0x98, 0xE5, 0x00, 0x10, 0x83, 0x01, 0xCB, 0x39 } };

// Disable the warning about "dominate" base class implementations that occurs because
// we are using virtual inheritance between IIoSession, IVisaSession, et. al.
#pragma warning( push )
#pragma warning( disable : 4250 )	// C4250: 'class1' : inherits 'class2::member' via dominance

///////////////////////////////////////////////////////////////////////////////
//
//	Forward declarations
//

interface IVisaComSession;
interface IVisaComLowLevelIo;
interface IVisaComSessionInfo;
interface IVisaComMemoryIo;
interface IVisaComEventManager;
interface IVisaComDirectIo;

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaComSession
//

interface IVisaComSession : 
	public virtual IVisaIoSession
{
	__declspec(property(get=get_LowLevel)) IVisaComLowLevelIo& LowLevel;
	virtual IVisaComLowLevelIo& get_LowLevel() abstract;

	__declspec(property(get=get_SessionInfo)) IVisaComSessionInfo& SessionInfo;
	virtual IVisaComSessionInfo& get_SessionInfo() abstract;

	__declspec(property(get=get_Memory)) IVisaComMemoryIo& Memory;
	virtual IVisaComMemoryIo& get_Memory() abstract;

	__declspec(property(get=get_DirectIo)) IVisaComDirectIo& DirectIo;
	virtual IVisaComDirectIo& get_DirectIo() abstract;

	__declspec(property(get=get_EventManager)) IVisaComEventManager& EventManager;
	virtual IVisaComEventManager& get_EventManager() abstract;
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaComLowLevelIo
//

interface IVisaComLowLevelIo :
	public virtual IVisaLowLevelIo
{
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaComSessionInfo
//

interface IVisaComSessionInfo : 
	public virtual IVisaSessionInfo
{
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaComMemoryIo
//

interface IVisaComMemoryIo :
	public virtual IVisaMemoryIo
{
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaComDirectIo
//

interface IVisaComDirectIo
{
	virtual HRESULT GetIVisaSessionPointer(IVisaSession** ppVisaSession) abstract;
	virtual HRESULT GetIFormattedIO488Pointer(IFormattedIO488** ppFormatted) abstract;
	virtual HRESULT GetIMessagePointer(IMessage** ppMessage) abstract;
	virtual HRESULT GetIAsyncMessagePointer(IAsyncMessage** ppAsyncMessage) abstract;
	virtual HRESULT GetIRegisterPointer(IRegister** ppRegister) abstract;
	virtual HRESULT GetISharedRegisterPointer(ISharedRegister** ppSharedRegister) abstract;
	virtual HRESULT GetIEventManagerPointer(IEventManager** ppEventManager) abstract;
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaComEventManager
//

interface IVisaComEventManager
{
	virtual HRESULT SetMaximumQueueLength(long val) abstract;
	virtual HRESULT GetMaximumQueueLength(long* pVal) abstract;

	virtual HRESULT EnableEvent(VisaEventType eEventType, VisaEventMechanism eMech, long lCustomEventType) abstract;
	virtual HRESULT DisableEvent(VisaEventType eEventType, VisaEventMechanism eMech, long lCustomEventType) abstract;

	virtual HRESULT DiscardEvents(VisaEventType eEventType, VisaEventMechanism eMech, long lCustomEventType) abstract;

	virtual HRESULT InstallHandler(VisaEventType eEventType, IEventHandler* pHandler, long lUserHandle, long lCustomEventType) abstract;
	virtual HRESULT UninstallHandler(VisaEventType eEventType, long lUserHandle, long lCustomEventType) abstract;

	virtual HRESULT WaitOnEvent(long lWaitTimeout, VisaEventType eEventType, long lCustomEventType, IEvent** ppEvent) abstract;
};


///////////////////////////////////////////////////////////////////////////////
//
//	CVisaComSession
//

class CVisaComSession : 
	public CVisaSession,
	public IVisaComSession,
	public IVisaComLowLevelIo,
	public IVisaComSessionInfo,
	public IVisaComMemoryIo,
	public IVisaComEventManager,
	public IVisaComDirectIo
{
public:
	CVisaComSession();
	virtual ~CVisaComSession();

	///////////////////////////////////////////////////////////////////////////////
	// IVisaComSession
	
	virtual HRESULT Initialize(const CString& strResourceDescriptor, IInstrErrorPoller* pErrorPoller, IErrorReporter* pErrorReporter, IEnumFormatter* pEnumFormatter) override;
	virtual HRESULT Close() override;

	virtual HRESULT GetLastStatus(HRESULT* pStatus);
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
	// IVisaComLowLevelIo

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
	// IVisaComSessionInfo

	virtual HRESULT GetResourceName(CString& strName) override;

	virtual HRESULT GetInterfaceName(CString& strName) override;
	virtual HRESULT GetInterfaceType(VisaInterfaceType* peType) override;
	virtual HRESULT GetInterfaceNumber(UINT16* pusNumber) override;

	virtual HRESULT GetSessionType(CString& strType) override;

	virtual HRESULT GetManufacturerName(CString& strName) override;
	virtual HRESULT GetManufacturerId(UINT16* pusId) override;

	///////////////////////////////////////////////////////////////////////////////
	// IVisaComMemoryIo

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
	// IVisaComDirectIo

	virtual HRESULT GetIVisaSessionPointer(IVisaSession** ppVisaSession) override;
	virtual HRESULT GetIFormattedIO488Pointer(IFormattedIO488** ppFormatted) override;
	virtual HRESULT GetIMessagePointer(IMessage** ppMessage) override;
	virtual HRESULT GetIAsyncMessagePointer(IAsyncMessage** ppAsyncMessage) override;
	virtual HRESULT GetIRegisterPointer(IRegister** ppRegister) override;
	virtual HRESULT GetISharedRegisterPointer(ISharedRegister** ppSharedRegister) override;
	virtual HRESULT GetIEventManagerPointer(IEventManager** ppEventManager) override;

	///////////////////////////////////////////////////////////////////////////////
	// IVisaComEventManager

	HRESULT SetMaximumQueueLength(long val) override;
	HRESULT GetMaximumQueueLength(long* pVal) override;

	HRESULT EnableEvent(VisaEventType eEventType, VisaEventMechanism eMech, long lCustomEventType) override;
	HRESULT DisableEvent(VisaEventType eEventType, VisaEventMechanism eMech, long lCustomEventType) override;

	HRESULT DiscardEvents(VisaEventType eEventType, VisaEventMechanism eMech, long lCustomEventType) override;

	HRESULT InstallHandler(VisaEventType eEventType, IEventHandler* pHandler, long lUserHandle, long lCustomEventType) override;
	HRESULT UninstallHandler(VisaEventType eEventType, long lUserHandle, long lCustomEventType) override;

	HRESULT WaitOnEvent(long lWaitTimeout, VisaEventType eEventType, long lCustomEventType, IEvent** ppEvent) override;

	///////////////////////////////////////////////////////////////////////////////
	// Interface reference properties

	virtual IVisaComLowLevelIo& get_LowLevel() override { return *this; }
	virtual IVisaComSessionInfo& get_SessionInfo() override { return *this; }
	virtual IVisaComMemoryIo& get_Memory() override { return *this; }
	virtual IVisaComDirectIo& get_DirectIo() override { return *this; }
	virtual IVisaComEventManager& get_EventManager() override { return *this; }

	///////////////////////////////////////////////////////////////////////////////
	// Helpers

protected:
	HRESULT TranslateAddressSpace(VisaAddressSpace eSpace, short* psSpace);
	HRESULT TranslateDataWidth(VisaDataWidth eWidth, DataWidth* peVisaWidth);
	HRESULT TranslateEventType(VisaEventType eEventType, EventType* peVisaType);
	HRESULT TranslateEventMechanism(VisaEventMechanism eEventMechanism, EventMechanism* peVisaMechanism);
	HRESULT ValidateAddressSpaceOffset(UINT64 ullOffset);

protected:
	// Direct VISA-COM I/O pointers
	IVisaSession* m_pSession;
	IFormattedIO488* m_pFormatted;
	IMessage* m_pMessage;
	IAsyncMessage* m_pAsyncMessage;
	IRegister* m_pRegister;
	ISharedRegister* m_pSharedRegister;
	IEventManager* m_pEventManager;
};

	///////////////////////////////////////////////////////////////////////////////
	// Inline includes

#include "ntlvisacom.inl"

#pragma warning( pop )	// C4250: 'class1' : inherits 'class2::member' via dominance
