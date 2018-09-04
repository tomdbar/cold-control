/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <stdarg.h>
#include "ntlio.h"
#include "ntlvisaconstants.h"

// Disable the warning about "dominate" base class implementations that occurs because
// we are using virtual inheritance between IIoSession, IVisaSession, et. al.
#pragma warning( push )
#pragma warning( disable : 4250 )	// C4250: 'class1' : inherits 'class2::member' via dominance

///////////////////////////////////////////////////////////////////////////////
//
//	Forward declarations
//

interface IVisaIoSession;
interface IVisaLowLevelIo;
interface IVisaSessionInfo;
interface IVisaMemoryIo;

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaIoSession
//

interface IVisaIoSession : 
	public virtual IIoSession
{
	virtual HRESULT SetProtocol(VisaIoProtocol eProtocol) abstract;
	virtual HRESULT GetProtocol(VisaIoProtocol* peProtocol) abstract;	

	virtual HRESULT SetAttribute(long lAttribute, UINT8 uchValue) abstract;
	virtual HRESULT SetAttribute(long lAttribute, UINT16 usValue) abstract;
	virtual HRESULT SetAttribute(long lAttribute, UINT32 ulValue) abstract;
	virtual HRESULT SetAttribute(long lAttribute, UINT64 ullValue) abstract;
	virtual HRESULT SetAttribute(long lAttribute, bool bValue) abstract;
	virtual HRESULT SetAttribute(long lAttribute, const CString& strValue) abstract;

	virtual HRESULT GetAttribute(long lAttribute, UINT8* puchValue) abstract;
	virtual HRESULT GetAttribute(long lAttribute, UINT16* pusValue) abstract;
	virtual HRESULT GetAttribute(long lAttribute, UINT32* pulValue) abstract;
	virtual HRESULT GetAttribute(long lAttribute, UINT64* pullValue) abstract;
	virtual HRESULT GetAttribute(long lAttribute, bool* pbValue) abstract;
	virtual HRESULT GetAttribute(long lAttribute, CString& strValue) abstract;
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaLowLevelIo
//

interface IVisaLowLevelIo :
	public virtual ILowLevelIo
{
	virtual HRESULT ReadAsync(BYTE* pBuf, long cbDesired, ULONG* plJobId) abstract;

	virtual HRESULT WriteAsync(BYTE* pBuf, long cbDesired, ULONG* plJobId) abstract;
	virtual HRESULT WriteAsync(SAFEARRAY** ppsaBuf, long cbDesired, ULONG* plJobId) abstract;

	virtual HRESULT AssertTrigger(VisaTriggerProtocol eProtocol) abstract;
};


///////////////////////////////////////////////////////////////////////////////
//
//	IVisaSessionInfo
//

interface IVisaSessionInfo
{
	virtual HRESULT GetResourceName(CString& strName) abstract;

	virtual HRESULT GetInterfaceName(CString& strName) abstract;
	virtual HRESULT GetInterfaceType(VisaInterfaceType* peType) abstract;
	virtual HRESULT GetInterfaceNumber(UINT16* pusNumber) abstract;

	virtual HRESULT GetSessionType(CString& strType) abstract;

	virtual HRESULT GetManufacturerName(CString& strName) abstract;
	virtual HRESULT GetManufacturerId(UINT16* pusId) abstract;
};

///////////////////////////////////////////////////////////////////////////////
//
//	IVisaMemoryIo
//

interface IVisaMemoryIo
{
	virtual HRESULT In8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT8* puVal) abstract;
	virtual HRESULT In16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT16* psVal) abstract;
	virtual HRESULT In32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32* plVal) abstract;
	virtual HRESULT In64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT64* pllVal) abstract;

	virtual HRESULT Out8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT8 uVal) abstract;
	virtual HRESULT Out16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT16 sVal) abstract;
	virtual HRESULT Out32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 lVal) abstract;
	virtual HRESULT Out64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT64 llVal) abstract;

	virtual HRESULT MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT8* pBuf) abstract;
	virtual HRESULT MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) abstract;
	virtual HRESULT MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT8>& saBuf) abstract;

	virtual HRESULT MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT16* pBuf) abstract;
	virtual HRESULT MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) abstract;
	virtual HRESULT MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT16>& saBuf) abstract;

	virtual HRESULT MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT32* pBuf) abstract;
	virtual HRESULT MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) abstract;
	virtual HRESULT MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT32>& saBuf) abstract;

	virtual HRESULT MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT64* pBuf) abstract;
	virtual HRESULT MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) abstract;
	virtual HRESULT MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT64>& saBuf) abstract;

	virtual HRESULT MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT8* pBuf) abstract;
	virtual HRESULT MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) abstract;
	virtual HRESULT MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT8>& saBuf) abstract;

	virtual HRESULT MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT16* pBuf) abstract;
	virtual HRESULT MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) abstract;
	virtual HRESULT MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT16>& saBuf) abstract;

	virtual HRESULT MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT32* pBuf) abstract;
	virtual HRESULT MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) abstract;
	virtual HRESULT MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT32>& saBuf) abstract;

	virtual HRESULT MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT64* pBuf) abstract;
	virtual HRESULT MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) abstract;
	virtual HRESULT MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT64>& saBuf) abstract;

	virtual HRESULT Move(VisaAddressSpace eSrcSpace, UINT64 ullSrcOffset, VisaDataWidth eSrcWidth, VisaAddressSpace eDestSpace, UINT64 ullDestOffset, VisaDataWidth eDestWidth, UINT32 ulLength) abstract;

	virtual HRESULT MoveAsync(VisaAddressSpace eSrcSpace, UINT64 ullSrcOffset, VisaDataWidth eSrcWidth, VisaAddressSpace eDestSpace, UINT64 ullDestOffset, VisaDataWidth eDestWidth, UINT32 ulLength, UINT32* plJobId) abstract;

	virtual HRESULT SetSourceBigEndian(bool bBigEndian) abstract;
	virtual HRESULT GetSourceBigEndian(bool* pbBigEndian)  abstract;

	virtual HRESULT SetDestinationBigEndian(bool bBigEndian)  abstract;
	virtual HRESULT GetDestinationBigEndian(bool* pbBigEndian) abstract;

	virtual HRESULT SetSourceIncrement(long lIncrement) abstract;
	virtual HRESULT GetSourceIncrement(long* plIncrement) abstract;

	virtual HRESULT SetDestinationIncrement(long lIncrement) abstract;
	virtual HRESULT GetDestinationIncrement(long* plIncrement) abstract;

	virtual HRESULT AllocateMemory(UINT64 ullSize, UINT64* pullOffset) abstract;

	virtual HRESULT FreeMemory(UINT64 ullOffset) abstract;
};

///////////////////////////////////////////////////////////////////////////////
//
//	CVisaSession
//

class CVisaSession abstract : 
	public virtual CIoSession,
	public virtual IVisaIoSession,
	public virtual IVisaLowLevelIo,
	public virtual IVisaSessionInfo,
	public virtual IVisaMemoryIo
{
protected:
	virtual HRESULT FinalInitialize() override;

public:
	///////////////////////////////////////////////////////////////////////////////
	// IVisaIoSession

	virtual HRESULT SetProtocol(VisaIoProtocol eProtocol) abstract;
	virtual HRESULT GetProtocol(VisaIoProtocol* peProtocol) abstract;	

	///////////////////////////////////////////////////////////////////////////////
	// IVisaLowLevelIo

	virtual HRESULT ReadAsync(BYTE* pBuf, long cbDesired, ULONG* plJobId) abstract;

	virtual HRESULT WriteAsync(BYTE* pBuf, long cbDesired, ULONG* plJobId) abstract;
	virtual HRESULT WriteAsync(SAFEARRAY** ppsaBuf, long cbDesired, ULONG* plJobId) abstract;

	virtual HRESULT AssertTrigger(VisaTriggerProtocol eProtocol) abstract;

	///////////////////////////////////////////////////////////////////////////////
	// IVisaSessionInfo

	virtual HRESULT GetResourceName(CString& strName) abstract;

	virtual HRESULT GetInterfaceName(CString& strName) abstract;
	virtual HRESULT GetInterfaceType(VisaInterfaceType* peType) abstract;
	virtual HRESULT GetInterfaceNumber(UINT16* pusNumber) abstract;

	virtual HRESULT GetSessionType(CString& strType) abstract;

	virtual HRESULT GetManufacturerName(CString& strName) abstract;
	virtual HRESULT GetManufacturerId(UINT16* pusId) abstract;

	///////////////////////////////////////////////////////////////////////////////
	// IVisaMemoryIo

	virtual HRESULT In8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT8* puVal) abstract;
	virtual HRESULT In16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT16* psVal) abstract;
	virtual HRESULT In32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32* plVal) abstract;
	virtual HRESULT In64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT64* pllVal) abstract;

	virtual HRESULT Out8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT8 uVal) abstract;
	virtual HRESULT Out16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT16 sVal) abstract;
	virtual HRESULT Out32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 lVal) abstract;
	virtual HRESULT Out64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT64 llVal) abstract;

	virtual HRESULT MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT8* pBuf) abstract;
	virtual HRESULT MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) abstract;
	virtual HRESULT MoveIn8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT8>& saBuf) abstract;

	virtual HRESULT MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT16* pBuf) abstract;
	virtual HRESULT MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) abstract;
	virtual HRESULT MoveIn16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT16>& saBuf) abstract;

	virtual HRESULT MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT32* pBuf) abstract;
	virtual HRESULT MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) abstract;
	virtual HRESULT MoveIn32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT32>& saBuf) abstract;

	virtual HRESULT MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT64* pBuf) abstract;
	virtual HRESULT MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY** ppsaBuf) abstract;
	virtual HRESULT MoveIn64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, CComSafeArray<UINT64>& saBuf) abstract;

	virtual HRESULT MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT8* pBuf) abstract;
	virtual HRESULT MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) abstract;
	virtual HRESULT MoveOut8(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT8>& saBuf) abstract;

	virtual HRESULT MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT16* pBuf) abstract;
	virtual HRESULT MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) abstract;
	virtual HRESULT MoveOut16(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT16>& saBuf) abstract;

	virtual HRESULT MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT32* pBuf) abstract;
	virtual HRESULT MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) abstract;
	virtual HRESULT MoveOut32(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT32>& saBuf) abstract;

	virtual HRESULT MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, UINT64* pBuf) abstract;
	virtual HRESULT MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, SAFEARRAY* psaBuf) abstract;
	virtual HRESULT MoveOut64(VisaAddressSpace eSpace, UINT64 ullOffset, UINT32 ulLength, const CComSafeArray<UINT64>& saBuf) abstract;

	virtual HRESULT Move(VisaAddressSpace eSrcSpace, UINT64 ullSrcOffset, VisaDataWidth eSrcWidth, VisaAddressSpace eDestSpace, UINT64 ullDestOffset, VisaDataWidth eDestWidth, UINT32 ulLength) abstract;

	virtual HRESULT MoveAsync(VisaAddressSpace eSrcSpace, UINT64 ullSrcOffset, VisaDataWidth eSrcWidth, VisaAddressSpace eDestSpace, UINT64 ullDestOffset, VisaDataWidth eDestWidth, UINT32 ulLength, UINT32* plJobId) abstract;

	virtual HRESULT SetSourceBigEndian(bool bBigEndian) abstract;
	virtual HRESULT GetSourceBigEndian(bool* pbBigEndian)  abstract;

	virtual HRESULT SetDestinationBigEndian(bool bBigEndian)  abstract;
	virtual HRESULT GetDestinationBigEndian(bool* pbBigEndian) abstract;

	virtual HRESULT SetSourceIncrement(long lIncrement) abstract;
	virtual HRESULT GetSourceIncrement(long* plIncrement) abstract;

	virtual HRESULT SetDestinationIncrement(long lIncrement) abstract;
	virtual HRESULT GetDestinationIncrement(long* plIncrement) abstract;

	virtual HRESULT AllocateMemory(UINT64 ullSize, UINT64* pullOffset) abstract;

	virtual HRESULT FreeMemory(UINT64 ullOffset) abstract;
};

	///////////////////////////////////////////////////////////////////////////////
	// Resource string parsing

bool ParseVisaResource(const CString& strResource, VisaInterfaceType* peType = NULL, short* psIntfNum = NULL);
bool ParseVisaResource(const CString& strResource, VisaInterfaceType* peType, short* psIntfNum, CString& strResourceClass);

	///////////////////////////////////////////////////////////////////////////////
	// Inline includes

#include "ntlvisa.inl"

#pragma warning( pop )	// C4250: 'class1' : inherits 'class2::member' via dominance
