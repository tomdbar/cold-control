/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#pragma warning( push )
#pragma warning( disable : 4481 )	// C4481: nonstandard extension used

#include <atlcoll.h>
#include <ivivisatype.h>


///////////////////////////////////////////////////////////////////////////////
//
//	Error constants used from NTL
 
#ifndef _IVIC_ERROR_BASE_DEFINES_
#define _IVIC_ERROR_BASE_DEFINES_

#define IVIC_WARN_BASE                           (0x3FFA0000L)
#define IVIC_CROSS_CLASS_WARN_BASE               (IVIC_WARN_BASE + 0x1000)
#define IVIC_CLASS_WARN_BASE                     (IVIC_WARN_BASE + 0x2000)
#define IVIC_SPECIFIC_WARN_BASE                  (IVIC_WARN_BASE + 0x4000)

#define IVIC_ERROR_BASE                          (0xBFFA0000L)
#define IVIC_CROSS_CLASS_ERROR_BASE              (IVIC_ERROR_BASE + 0x1000)
#define IVIC_CLASS_ERROR_BASE                    (IVIC_ERROR_BASE + 0x2000)
#define IVIC_SPECIFIC_ERROR_BASE                 (IVIC_ERROR_BASE + 0x4000)
#define IVIC_LXISYNC_ERROR_BASE                  (IVIC_ERROR_BASE + 0x2000)

#define IVIC_ERROR_INVALID_ATTRIBUTE             (IVIC_ERROR_BASE + 0x000C)
#define IVIC_ERROR_TYPES_DO_NOT_MATCH            (IVIC_ERROR_BASE + 0x0015)
#define IVIC_ERROR_IVI_ATTR_NOT_WRITABLE         (IVIC_ERROR_BASE + 0x000D)
#define IVIC_ERROR_IVI_ATTR_NOT_READABLE         (IVIC_ERROR_BASE + 0x000E)
#define IVIC_ERROR_BADLY_FORMED_SELECTOR         (IVIC_ERROR_BASE + 0x0066)
#define IVIC_ERROR_INVALID_SESSION_HANDLE        (IVIC_ERROR_BASE + 0x1190)
#define IVIC_ERROR_NULL_POINTER                  (IVIC_ERROR_BASE + 0x0058)
#define IVIC_ERROR_CANNOT_RECOVER                (IVIC_ERROR_BASE + 0x0000)

#endif


///////////////////////////////////////////////////////////////////////////////
//
//	Attribute getter/setter callbacks
//

typedef ViStatus (_VI_FUNC * IviCGetAttributeViInt32) (ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue);
typedef ViStatus (_VI_FUNC * IviCGetAttributeViInt64) (ViSession Vi, ViConstString RepCapIdentifier, ViInt64* AttributeValue);
typedef ViStatus (_VI_FUNC * IviCGetAttributeViReal64) (ViSession Vi, ViConstString RepCapIdentifier, ViReal64* AttributeValue);
typedef ViStatus (_VI_FUNC * IviCGetAttributeViBoolean) (ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue);
typedef ViStatus (_VI_FUNC * IviCGetAttributeViSession) (ViSession Vi, ViConstString RepCapIdentifier, ViSession* AttributeValue);
typedef ViStatus (_VI_FUNC * IviCGetAttributeViString) (ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[]);

typedef ViStatus (_VI_FUNC * IviCSetAttributeViInt32) (ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue);
typedef ViStatus (_VI_FUNC * IviCSetAttributeViInt64) (ViSession Vi, ViConstString RepCapIdentifier, ViInt64 AttributeValue);
typedef ViStatus (_VI_FUNC * IviCSetAttributeViReal64) (ViSession Vi, ViConstString RepCapIdentifier, ViReal64 AttributeValue);
typedef ViStatus (_VI_FUNC * IviCSetAttributeViBoolean) (ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue);
typedef ViStatus (_VI_FUNC * IviCSetAttributeViSession) (ViSession Vi, ViConstString RepCapIdentifier, ViSession AttributeValue);
typedef ViStatus (_VI_FUNC * IviCSetAttributeViString) (ViSession Vi, ViConstString RepCapIdentifier, ViConstString AttributeValue);


///////////////////////////////////////////////////////////////////////////////
//
//	IviCAttributeType
//

enum IviCAttributeType
{
	AttrTypeUninitialized,
	AttrViInt32,
	AttrViInt64,
	AttrViReal64,
	AttrViBoolean,
	AttrViSession,
	AttrViString,
};


///////////////////////////////////////////////////////////////////////////////
//
//	IviCAttributeGetter
//

union IviCAttributeGetter
{
	IviCGetAttributeViInt32 pViInt32;
	IviCGetAttributeViInt64 pViInt64;
	IviCGetAttributeViReal64 pViReal64;
	IviCGetAttributeViBoolean pViBoolean;
	IviCGetAttributeViSession pViSession;
	IviCGetAttributeViString pViString;
};


///////////////////////////////////////////////////////////////////////////////
//
//	IviCAttributeSetter
//

union IviCAttributeSetter
{
	IviCSetAttributeViInt32 pViInt32;
	IviCSetAttributeViInt64 pViInt64;
	IviCSetAttributeViReal64 pViReal64;
	IviCSetAttributeViBoolean pViBoolean;
	IviCSetAttributeViSession pViSession;
	IviCSetAttributeViString pViString;
};


///////////////////////////////////////////////////////////////////////////////
//
//	CIviCAttributeInfo
//

class CIviCAttributeInfo
{
public:
	CIviCAttributeInfo()
		: m_attributeType(AttrTypeUninitialized)
	{
		memset(&m_attributeGetter, 0, sizeof(m_attributeGetter));
		memset(&m_attributeSetter, 0, sizeof(m_attributeSetter));
	}

	CIviCAttributeInfo(IviCGetAttributeViInt32 getter, IviCSetAttributeViInt32 setter)
		: m_attributeType(AttrViInt32)
	{
		m_attributeGetter.pViInt32 = getter;
		m_attributeSetter.pViInt32 = setter;
	}

	CIviCAttributeInfo(IviCGetAttributeViInt64 getter, IviCSetAttributeViInt64 setter)
		: m_attributeType(AttrViInt64)
	{
		m_attributeGetter.pViInt64 = getter;
		m_attributeSetter.pViInt64 = setter;
	}

	CIviCAttributeInfo(IviCGetAttributeViReal64 getter, IviCSetAttributeViReal64 setter)
		: m_attributeType(AttrViReal64)
	{
		m_attributeGetter.pViReal64 = getter;
		m_attributeSetter.pViReal64 = setter;
	}

	CIviCAttributeInfo(IviCGetAttributeViBoolean getter, IviCSetAttributeViBoolean setter)
		: m_attributeType(AttrViBoolean)
	{
		m_attributeGetter.pViBoolean = getter;
		m_attributeSetter.pViBoolean = setter;
	}

	CIviCAttributeInfo(IviCGetAttributeViSession getter, IviCSetAttributeViSession setter)
		: m_attributeType(AttrViSession)
	{
		m_attributeGetter.pViSession = getter;
		m_attributeSetter.pViSession = setter;
	}

	CIviCAttributeInfo(IviCGetAttributeViString getter, IviCSetAttributeViString setter)
		: m_attributeType(AttrViString)
	{
		m_attributeGetter.pViString = getter;
		m_attributeSetter.pViString = setter;
	}

	IviCAttributeType GetType() const { return m_attributeType; }
	IviCAttributeGetter GetGetter() const { return m_attributeGetter; }
	IviCAttributeSetter GetSetter() const { return m_attributeSetter; }

private:
	IviCAttributeType m_attributeType;
	IviCAttributeGetter m_attributeGetter;
	IviCAttributeSetter m_attributeSetter;
};


///////////////////////////////////////////////////////////////////////////////
//
//	CIviCAttributeManager
//

class CIviCAttributeManager
{
public:
	CIviCAttributeManager()
	{
		m_bInitialized = false;
	}

	bool GetInitialized() { return m_bInitialized; } const
	void SetInitialized(bool bInit) { m_bInitialized = bInit; }

	void Add(ViAttr attributeId, IviCGetAttributeViInt32 getter, IviCSetAttributeViInt32 setter)
	{
		m_map.SetAt(attributeId, CIviCAttributeInfo(getter, setter));
	}

	void Add(ViAttr attributeId, IviCGetAttributeViInt64 getter, IviCSetAttributeViInt64 setter)
	{
		m_map.SetAt(attributeId, CIviCAttributeInfo(getter, setter));
	}

	void Add(ViAttr attributeId, IviCGetAttributeViReal64 getter, IviCSetAttributeViReal64 setter)
	{
		m_map.SetAt(attributeId, CIviCAttributeInfo(getter, setter));
	}

	void Add(ViAttr attributeId, IviCGetAttributeViBoolean getter, IviCSetAttributeViBoolean setter)
	{
		m_map.SetAt(attributeId, CIviCAttributeInfo(getter, setter));
	}

	void Add(ViAttr attributeId, IviCGetAttributeViSession getter, IviCSetAttributeViSession setter)
	{
		m_map.SetAt(attributeId, CIviCAttributeInfo(getter, setter));
	}

	void Add(ViAttr attributeId, IviCGetAttributeViString getter, IviCSetAttributeViString setter)
	{
		m_map.SetAt(attributeId, CIviCAttributeInfo(getter, setter));
	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCGetAttributeViInt32* getter)
	{
		ViStatus status = VI_SUCCESS;

		*getter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViInt32)
			{
				if (info.GetGetter().pViInt32 != NULL)
				{
					*getter = info.GetGetter().pViInt32;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_READABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCSetAttributeViInt32* setter)
	{
		ViStatus status = VI_SUCCESS;

		*setter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViInt32)
			{
				if (info.GetSetter().pViInt32 != NULL)
				{
					*setter = info.GetSetter().pViInt32;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_WRITABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCGetAttributeViInt64* getter)
	{
		ViStatus status = VI_SUCCESS;

		*getter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViInt64)
			{
				if (info.GetGetter().pViInt64 != NULL)
				{
					*getter = info.GetGetter().pViInt64;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_READABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCSetAttributeViInt64* setter)
	{
		ViStatus status = VI_SUCCESS;

		*setter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViInt64)
			{
				if (info.GetSetter().pViInt64 != NULL)
				{
					*setter = info.GetSetter().pViInt64;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_WRITABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCGetAttributeViReal64* getter)
	{
		ViStatus status = VI_SUCCESS;

		*getter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViReal64)
			{
				if (info.GetGetter().pViReal64 != NULL)
				{
					*getter = info.GetGetter().pViReal64;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_READABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCSetAttributeViReal64* setter)
	{
		ViStatus status = VI_SUCCESS;

		*setter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViReal64)
			{
				if (info.GetSetter().pViReal64 != NULL)
				{
					*setter = info.GetSetter().pViReal64;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_WRITABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCGetAttributeViBoolean* getter)
	{
		ViStatus status = VI_SUCCESS;

		*getter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViBoolean)
			{
				if (info.GetGetter().pViBoolean != NULL)
				{
					*getter = info.GetGetter().pViBoolean;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_READABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCSetAttributeViBoolean* setter)
	{
		ViStatus status = VI_SUCCESS;

		*setter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViBoolean)
			{
				if (info.GetSetter().pViBoolean != NULL)
				{
					*setter = info.GetSetter().pViBoolean;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_WRITABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCGetAttributeViSession* getter)
	{
		ViStatus status = VI_SUCCESS;

		*getter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViSession)
			{
				if (info.GetGetter().pViSession != NULL)
				{
					*getter = info.GetGetter().pViSession;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_READABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCSetAttributeViSession* setter)
	{
		ViStatus status = VI_SUCCESS;

		*setter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViSession)
			{
				if (info.GetSetter().pViSession != NULL)
				{
					*setter = info.GetSetter().pViSession;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_WRITABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCGetAttributeViString* getter)
	{
		ViStatus status = VI_SUCCESS;

		*getter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViString)
			{
				if (info.GetGetter().pViString != NULL)
				{
					*getter = info.GetGetter().pViString;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_READABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

	ViStatus Lookup(ViSession Vi, ViAttr attributeId, IviCSetAttributeViString* setter)
	{
		ViStatus status = VI_SUCCESS;

		*setter = NULL;

		CIviCAttributeInfo info;
		if (m_map.Lookup(attributeId, info))
		{
			if (info.GetType() == AttrViString)
			{
				if (info.GetSetter().pViString != NULL)
				{
					*setter = info.GetSetter().pViString;
				}
				else
				{
					status = ReportError(Vi, IVIC_ERROR_IVI_ATTR_NOT_WRITABLE);
				}
			}
			else
			{
				status = ReportError(Vi, IVIC_ERROR_TYPES_DO_NOT_MATCH);
			}
		}
		else
		{
			status = ReportError(Vi, IVIC_ERROR_INVALID_ATTRIBUTE);
		}
			
		return status;

	}

protected:
	virtual ViStatus ReportError(ViSession Vi, ViInt32 ErrorCode) abstract;

private:
	bool m_bInitialized;
	CAtlMap<ViAttr, CIviCAttributeInfo> m_map;
};

#pragma warning( pop )
