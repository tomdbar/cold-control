/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <atlstr.h>
#include <atlsafe.h>
#include <comutil.h>
#include "IviVisaType.h"

#define VI_ERROR           (-2147483647L-1)  /* 0x80000000 */

//////////////////////////////////////////////////////////////////////////////

class CViBoolean
{
public:
	CViBoolean()
	{
		// Support for OUT only
		m_val = VI_FALSE;
	}

	CViBoolean(bool val)
	{
		m_val = val ? VI_TRUE :VI_FALSE;
	}

	CViBoolean(VARIANT_BOOL val)
	{
		// Support for IN / IN-OUT
		m_val = (val != VARIANT_FALSE ? VI_TRUE : VI_FALSE);
	}

	CViBoolean(VARIANT_BOOL* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (*pVal != VARIANT_FALSE ? VI_TRUE : VI_FALSE);
		}
		else
		{
			m_val = VI_FALSE;
		}
	}

	void ToCOMDataType(VARIANT_BOOL* pVal)
	{
		*pVal = ToVariantBool();
	}

	VARIANT_BOOL ToVariantBool()
	{
		return m_val == VI_FALSE ? VARIANT_FALSE : VARIANT_TRUE;
	}

	bool ToBool()
	{
		return m_val == VI_FALSE ? false : true;
	}

	operator VARIANT_BOOL()
	{
		return ToVariantBool();
	}

	operator bool()
	{
		return ToBool();
	}

    operator ViBoolean()
    {
        return GetVal();
    }

	ViBoolean GetVal()
	{
		return m_val;
	}

	ViBoolean* GetPtr()
	{
		return &m_val;
	}

	ViBoolean* operator&()
	{
		return GetPtr();
	}


protected:
	ViBoolean m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CViInt8
{
public:
	CViInt8()
	{
		// Support for OUT only
		m_val = 0;
	}

	CViInt8(BYTE val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CViInt8(short val)
	{
		// Support for IN / IN-OUT
		m_val = (ViInt8)val;
	}

	CViInt8(int val)
	{
		// Support for IN / IN-OUT
		m_val = (ViInt8)val;
	}

	CViInt8(long val)
	{
		// Support for IN / IN-OUT
		m_val = (ViInt8)val;
	}

	CViInt8(BYTE* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CViInt8(short* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (ViInt8)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CViInt8(long* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (ViInt8)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	void ToCOMDataType(BYTE* pVal)
	{
		*pVal = ToByte();
	}

	void ToCOMDataType(short* pVal)
	{
		*pVal = ToShort();
	}

	void ToCOMDataType(long* pVal)
	{
		*pVal = ToLong();
	}

	BYTE ToByte()
	{
		return m_val;
	}

	short ToShort()
	{
		return m_val;
	}

	long ToLong()
	{
		return m_val;
	}

	ViInt8 GetVal()
	{
		return m_val;
	}

	ViInt8* GetPtr()
	{
		return &m_val;
	}

    operator BYTE()
    {
        return ToByte();
    }

    operator short()
    {
        return ToShort();
    }

	operator int()
	{
		return ToLong();
	}

    operator long()
    {
        return ToLong();
    }

	ViInt8* operator&()
	{
		return GetPtr();
	}

protected:
	ViInt8 m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CViUInt8
{
public:
	CViUInt8()
	{
		// Support for OUT only
		m_val = 0;
	}

	CViUInt8(BYTE val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CViUInt8(short val)
	{
		// Support for IN / IN-OUT
		m_val = (ViUInt8)val;
	}

	CViUInt8(int val)
	{
		// Support for IN / IN-OUT
		m_val = (ViUInt8)val;
	}

	CViUInt8(long val)
	{
		// Support for IN / IN-OUT
		m_val = (ViUInt8)val;
	}

	CViUInt8(BYTE* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CViUInt8(short* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (ViUInt8)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CViUInt8(long* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (ViUInt8)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	void ToCOMDataType(BYTE* pVal)
	{
		*pVal = ToByte();
	}

	void ToCOMDataType(short* pVal)
	{
		*pVal = ToShort();
	}

	void ToCOMDataType(long* pVal)
	{
		*pVal = ToLong();
	}

	BYTE ToByte()
	{
		return m_val;
	}

	short ToShort()
	{
		return m_val;
	}

	long ToLong()
	{
		return m_val;
	}

	ViUInt8 GetVal()
	{
		return m_val;
	}

	ViUInt8* GetPtr()
	{
		return &m_val;
	}

    operator BYTE()
    {
        return ToByte();
    }

    operator short()
    {
        return ToShort();
    }

	operator int()
	{
        return ToLong();
	}

    operator long()
    {
        return ToLong();
    }

	ViUInt8* operator&()
	{
		return GetPtr();
	}

protected:
	ViUInt8 m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CViInt16
{
public:
	CViInt16()
	{
		// Support for OUT only
		m_val = 0;
	}

	CViInt16(short val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CViInt16(int val)
	{
		// Support for IN / IN-OUT
		m_val = (ViInt16)val;
	}

	CViInt16(long val)
	{
		// Support for IN / IN-OUT
		m_val = (ViInt16)val;
	}

	CViInt16(short* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CViInt16(long* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (ViInt16)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	void ToCOMDataType(BYTE* pVal)
	{
		*pVal = ToByte();
	}

	void ToCOMDataType(short* pVal)
	{
		*pVal = ToShort();
	}

	void ToCOMDataType(long* pVal)
	{
		*pVal = ToLong();
	}

	BYTE ToByte()
	{
		return (BYTE) m_val;
	}

	short ToShort()
	{
		return m_val;
	}

	long ToLong()
	{
		return m_val;
	}

	ViInt16 GetVal()
	{
		return m_val;
	}

	ViInt16* GetPtr()
	{
		return &m_val;
	}

	operator BYTE()
	{
		return ToByte();
	}

    operator short()
    {
        return ToShort();
    }

    operator int()
    {
        return ToLong();
    }

    operator long()
    {
        return ToLong();
    }

	ViInt16* operator&()
	{
		return GetPtr();
	}

protected:
	ViInt16 m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CViUInt16
{
public:
	CViUInt16()
	{
		// Support for OUT only
		m_val = 0;
	}

	CViUInt16(short val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CViUInt16(int val)
	{
		// Support for IN / IN-OUT
		m_val = (ViUInt16)val;
	}

	CViUInt16(long val)
	{
		// Support for IN / IN-OUT
		m_val = (ViUInt16)val;
	}

	CViUInt16(short* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CViUInt16(long* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (ViUInt16)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	void ToCOMDataType(short* pVal)
	{
		*pVal = ToShort();
	}

	void ToCOMDataType(long* pVal)
	{
		*pVal = ToLong();
	}

	BYTE ToByte()
	{
		return (BYTE) m_val;
	}

	short ToShort()
	{
		return m_val;
	}

	long ToLong()
	{
		return m_val;
	}

	ViUInt16 GetVal()
	{
		return m_val;
	}

	ViUInt16* GetPtr()
	{
		return &m_val;
	}

    operator BYTE()
    {
        return ToByte();
    }

    operator short()
    {
        return ToShort();
    }

    operator int()
    {
        return ToLong();
    }

    operator long()
    {
        return ToLong();
    }

	ViUInt16* operator&()
	{
		return GetPtr();
	}

protected:
	ViUInt16 m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CViInt32
{
public:
	CViInt32()
	{
		// Support for OUT only
		m_val = 0;
	}

	CViInt32(long val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CViInt32(long* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	void ToCOMDataType(BYTE* pVal)
	{
		*pVal = ToByte();
	}

	void ToCOMDataType(short* pVal)
	{
		*pVal = ToShort();
	}

	void ToCOMDataType(long* pVal)
	{
		*pVal = ToLong();
	}

	BYTE ToByte()
	{
		return (BYTE)m_val;
	}

	short ToShort()
	{
		return (short)m_val;
	}

	long ToLong()
	{
		return m_val;
	}

	ViInt32 GetVal()
	{
		return m_val;
	}

	ViInt32* GetPtr()
	{
		return &m_val;
	}

    operator BYTE()
    {
        return ToByte();
    }

    operator short()
    {
        return ToShort();
    }

    operator int()
    {
        return ToLong();
    }

    operator long()
    {
        return ToLong();
    }

	ViInt32* operator&()
	{
		return GetPtr();
	}

protected:
	ViInt32 m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CViUInt32
{
public:
	CViUInt32()
	{
		// Support for OUT only
		m_val = 0;
	}

	CViUInt32(long val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CViUInt32(long* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	void ToCOMDataType(BYTE* pVal)
	{
		*pVal = ToByte();
	}

	void ToCOMDataType(short* pVal)
	{
		*pVal = ToShort();
	}

	void ToCOMDataType(long* pVal)
	{
		*pVal = ToLong();
	}

	BYTE ToByte()
	{
		return (BYTE)m_val;
	}

	short ToShort()
	{
		return (short)m_val;
	}

	long ToLong()
	{
		return m_val;
	}

	ViUInt32 GetVal()
	{
		return m_val;
	}

	ViUInt32* GetPtr()
	{
		return &m_val;
	}

    operator BYTE()
    {
        return ToByte();
    }

    operator short()
    {
        return ToShort();
    }

    operator int()
    {
        return ToLong();
    }

    operator long()
    {
        return ToLong();
    }

	ViUInt32* operator&()
	{
		return GetPtr();
	}

protected:
	ViUInt32 m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CViReal32
{
public:
	CViReal32()
	{
		// Support for OUT only
		m_val = 0.0f;
	}

	CViReal32(float val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CViReal32(double val)
	{
		// Support for IN / IN-OUT
		m_val = (ViReal32) val;
	}

	CViReal32(float* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0.0f;
		}
	}

	CViReal32(double* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (ViReal32)*pVal;
		}
		else
		{
			m_val = 0.0;
		}
	}

	void ToCOMDataType(float* pVal)
	{
		*pVal = ToFloat();
	}

	void ToCOMDataType(double* pVal)
	{
		*pVal = ToDouble();
	}

	float ToFloat()
	{
		return m_val;
	}

	double ToDouble()
	{
		return m_val;
	}

	ViReal32 GetVal()
	{
		return m_val;
	}

	ViReal32* GetPtr()
	{
		return &m_val;
	}

    operator float()
    {
        return ToFloat();
    }

    operator double()
    {
        return ToDouble();
    }

	ViReal32* operator&()
	{
		return GetPtr();
	}

protected:
	ViReal32 m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CViReal64
{
public:
	CViReal64()
	{
		// Support for OUT only
		m_val = 0.0;
	}

	CViReal64(double val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CViReal64(float* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0.0;
		}
	}

	CViReal64(double* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0.0;
		}
	}

	void ToCOMDataType(float* pVal)
	{
		*pVal = ToFloat();
	}

	void ToCOMDataType(double* pVal)
	{
		*pVal = ToDouble();
	}

	float ToFloat()
	{
		return (float)m_val;
	}

	double ToDouble()
	{
		return m_val;
	}

	ViReal64 GetVal()
	{
		return m_val;
	}

	ViReal64* GetPtr()
	{
		return &m_val;
	}

    operator float()
    {
        return ToFloat();
    }

    operator double()
    {
        return ToDouble();
    }

	ViReal64* operator&()
	{
		return GetPtr();
	}

protected:
	ViReal64 m_val;
};

//////////////////////////////////////////////////////////////////////////////

typedef CViInt8 CViChar;
typedef CViUInt8 CViByte;
typedef CViUInt32 CViSession;
typedef CViUInt32 CViVersion;
typedef CViUInt32 CViObject;
typedef CViUInt32 CViAttr;
typedef CViInt32 CViStatus;

//////////////////////////////////////////////////////////////////////////////

template <typename ElementViType>
class CViPrimitiveArray
{
public:
	CViPrimitiveArray()
	{
		m_pVal = NULL;
		m_nSize = 0;
	}

	~CViPrimitiveArray()
	{
		Destroy();
	}

	template <typename ElementCOMDataType>
	void ToCOMDataType(SAFEARRAY** ppsa)
	{
		*ppsa = ToSafeArray<ElementCOMDataType>();
	}

	template <typename ElementCOMDataType>
	SAFEARRAY* ToSafeArray()
	{
		CComSafeArray<ElementCOMDataType> csa;
		HRESULT hr = csa.Create(m_nSize);
		if (SUCCEEDED(hr))
		{
			if (sizeof(ElementCOMDataType) == sizeof(ElementViType))
			{
				// C array element size == SAFEARRAY element size
				// So a memcpy is the fastest way to copy the elements
				::SafeArrayLock(csa.m_psa);
				::memcpy(csa.m_psa->pvData, m_pVal, m_nSize * sizeof(ElementViType));
				::SafeArrayUnlock(csa.m_psa);
			}
			else
			{
				// C array element size != SAFEARRAY element size
				// So we have to copy the elements one at a time
				for (int i = 0; i < m_nSize; i++)
				{
					csa[i] = (ElementCOMDataType)m_pVal[i];
				}
			}

			return csa.Detach();
		}

		return NULL;
	}

	ElementViType* GetVal()
	{
		return m_pVal;
	}

	ElementViType** GetPtr()
	{
		return &m_pVal;
	}

	long GetSize()
	{
		return m_nSize;
	}

	template <typename ElementCOMDataType>
	void Create(SAFEARRAY** ppsa)
	{
		long nLowerBound;
		long nUpperBound;
		
		::SafeArrayGetLBound(*ppsa, 1, &nLowerBound);
		::SafeArrayGetUBound(*ppsa, 1, &nUpperBound);

		long nInputSize = nUpperBound - nLowerBound + 1;

		CreateFromArray<ElementCOMDataType>(*ppsa, nInputSize);
	}
	
	template <typename ElementCOMDataType>
	void Create(SAFEARRAY** ppsa, long nSize)
	{
		CreateFromArray<ElementCOMDataType>(*ppsa, nSize);
	}
	
	template <typename ElementCOMDataType>
	void Create(long nSize)
	{
		CreateFromArray<ElementCOMDataType>(NULL, nSize);
	}

	template <typename ElementCOMDataType>
	void Create(SAFEARRAY* psa, long nSize)
	{
		CreateFromArray<ElementCOMDataType>(psa, nSize);
	}

protected:
	template <typename ElementCOMDataType>
	void CreateFromArray(SAFEARRAY* psa, long nSize)
	{
		m_pVal = new ElementViType[nSize];
		m_nSize = nSize;

		// Pass in a NULL psa for output-only
		if (psa != NULL)
		{
			// Copy the values from the input SAFEARRAY into the C array
			// while making sure we don't overflow the C array (input SAFEARRAY is not necessarily
			// of nSize).
			VARTYPE vt;
			::SafeArrayGetVartype(psa, &vt);

			long nLowerBound;
			long nUpperBound;
			
			::SafeArrayGetLBound(psa, 1, &nLowerBound);
			::SafeArrayGetUBound(psa, 1, &nUpperBound);

			long nInputSize = nUpperBound - nLowerBound + 1;

			if (sizeof(ElementCOMDataType) == sizeof(ElementViType))
			{
				// C array element size == SAFEARRAY element size
				// So a memcpy is the fastest way to copy the elements
				::SafeArrayLock(psa);
				::memcpy(m_pVal, psa->pvData, min(m_nSize, nInputSize) * sizeof(ElementViType));
				::SafeArrayUnlock(psa);
			}
			else
			{
				// C array element size != SAFEARRAY element size
				// So we have to copy the elements one at a time
				CComSafeArray<ElementCOMDataType> csa;
				csa.Attach(psa);
				for (int i = nLowerBound; (i <= nUpperBound) && ((i - nLowerBound) < m_nSize); i++)
				{
					m_pVal[i] = (ElementViType)csa[i];
				}
				csa.Detach();
			}
		}
	}

	void Destroy()
	{
		if (m_pVal != NULL)
		{
			delete[] m_pVal;
			m_pVal = NULL;
		}
	}

protected:
	ElementViType* m_pVal;
	long m_nSize;
};

//////////////////////////////////////////////////////////////////////////////

class CViCharArray : public CViPrimitiveArray<ViChar>
{
public:
	CViCharArray()
	{
	}

	CViCharArray(BSTR bstr)
	{
		Create2(bstr);
	}

	void Create2(BSTR bstr)
	{
		CreateFromString(bstr, ::SysStringLen(bstr));
	}

	void Create2(BSTR* pbstr, long nSize)
	{
		CreateFromString(*pbstr, nSize);
	}

	void ToCOMDataType(BSTR* pbstr)
	{
		*pbstr = ToString();
	}

	BSTR ToString()
	{
		CString str;

		ViChar* p = m_pVal;
		int index = 0;
		while (*p != 0 && index < m_nSize)
		{
			str += *p;
			index++;
			p++;
		}

		return CComBSTR(str).Detach();
	}

protected:
	void CreateFromString(BSTR bstr, long nSize)
	{
		m_pVal = new ViChar[nSize + 1];
		m_nSize = nSize;

		if (bstr != NULL)
		{
			CString str(bstr);
			for (int i = 0; i < str.GetLength(); i++)
			{
				m_pVal[i] = (ViChar)str[i];
			}
			m_pVal[str.GetLength()] = (ViChar)0;
		}
		else
		{
			m_pVal[0] = (ViChar)0;
		}
	}
};

//////////////////////////////////////////////////////////////////////////////

typedef CViPrimitiveArray<ViByte> CViByteArray;
typedef CViPrimitiveArray<ViInt8> CViInt8Array;
typedef CViPrimitiveArray<ViUInt8> CViUInt8Array;
typedef CViPrimitiveArray<ViInt16> CViInt16Array;
typedef CViPrimitiveArray<ViUInt16> CViUInt16Array;
typedef CViPrimitiveArray<ViInt32> CViInt32Array;
typedef CViPrimitiveArray<ViUInt32> CViUInt32Array;
typedef CViPrimitiveArray<ViReal32> CViReal32Array;
typedef CViPrimitiveArray<ViReal64> CViReal64Array;
typedef CViPrimitiveArray<ViBoolean> CViBooleanArray;

typedef CViUInt32 CViAddr;
//typedef CViUInt8Array CViBuf;
typedef CViCharArray CViString;

typedef CViString CViRsrc;

//////////////////////////////////////////////////////////////////////////////

class CVariantBool
{
public:
	CVariantBool()
	{
		// Support for OUT only
		m_val = VARIANT_FALSE;
	}

	CVariantBool(ViBoolean val)
	{
		// Support for IN / IN-OUT
		m_val = (val != VI_FALSE ? VARIANT_TRUE : VARIANT_FALSE);
	}

	CVariantBool(bool val)
	{
		// Support for IN / IN-OUT
		m_val = (val ? VARIANT_TRUE : VARIANT_FALSE);
	}

	CVariantBool(ViBoolean* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (*pVal != VI_FALSE ? VARIANT_TRUE : VARIANT_FALSE);
		}
		else
		{
			m_val = VARIANT_FALSE;
		}
	}

	ViStatus ToViDataType(ViBoolean* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViBoolean();
		return VI_SUCCESS;
	}

	ViBoolean ToViBoolean()
	{
		return m_val == VARIANT_FALSE ?  VI_FALSE : VI_TRUE;
	}

	bool ToBool()
	{
		return m_val == VARIANT_FALSE ?  false : true;
	}

	VARIANT_BOOL GetVal()
	{
		return m_val;
	}

	VARIANT_BOOL* GetPtr()
	{
		return &m_val;
	}

	operator VARIANT_BOOL()
	{
		return GetVal();
	}

	operator ViBoolean()
	{
		return ToViBoolean();
	}

	operator bool()
	{
		return ToBool();
	}

	VARIANT_BOOL* operator&()
	{
		return GetPtr();
	}

protected:
	VARIANT_BOOL m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CByte
{
public:
	CByte()
	{
		// Support for OUT only
		m_val = 0;
	}

	CByte(ViInt8 val)
	{
		// Support for IN / IN-OUT
		m_val = (BYTE) val;
	}

	CByte(ViUInt8 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CByte(ViChar val)
	{
		// Support for IN / IN-OUT
		m_val = (BYTE)val;
	}

	CByte(ViInt16 val)
	{
		m_val = (BYTE)val;
	}

	CByte(ViUInt16 val)
	{
		m_val = (BYTE)val;
	}

	CByte(ViInt32 val)
	{
		// Support for IN / IN-OUT
		m_val = (BYTE)val;
	}

	CByte(ViUInt32 val)
	{
		m_val = (BYTE)val;
	}

	CByte(ViInt8* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (BYTE)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CByte(ViUInt8* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (BYTE)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CByte(ViChar* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (BYTE)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CByte(ViInt16* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (BYTE)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CByte(ViUInt16* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (BYTE)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CByte(ViInt32* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (BYTE)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CByte(ViUInt32* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (BYTE)*pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	ViStatus ToViDataType(ViInt8* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViInt8();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViUInt8* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViUInt8();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViChar* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViChar();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViInt16* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViInt16();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViUInt16* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViUInt16();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViInt32* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViInt32();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViUInt32* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViUInt32();
		return VI_SUCCESS;
	}

	ViInt8 ToViInt8()
	{
		return m_val;
	}

	ViUInt8 ToViUInt8()
	{
		return m_val;
	}

	ViChar ToViChar()
	{
		return m_val;
	}

	ViInt16 ToViInt16()
	{
		return m_val;
	}

	ViUInt16 ToViUInt16()
	{
		return m_val;
	}

	ViInt32 ToViInt32()
	{
		return m_val;
	}

	ViUInt32 ToViUInt32()
	{
		return m_val;
	}

	BYTE GetVal()
	{
		return m_val;
	}

	BYTE* GetPtr()
	{
		return &m_val;
	}

	operator ViInt8()
	{
		return ToViInt8();
	}

	operator ViUInt8()
	{
		return ToViUInt8();
	}

	operator ViChar()
	{
		return ToViChar();
	}

	operator ViInt16()
	{
		return ToViInt16();
	}

	operator ViUInt16()
	{
		return ToViUInt16();
	}

	operator ViInt32()
	{
		return ToViInt32();
	}

	operator ViUInt32()
	{
		return ToViUInt32();
	}

	BYTE* operator&()
	{
		return GetPtr();
	}

protected:
	BYTE m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CShort
{
public:
	CShort()
	{
		// Support for OUT only
		m_val = 0;
	}

	CShort(ViInt8 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CShort(ViUInt8 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CShort(ViChar val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CShort(ViInt16 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CShort(ViUInt16 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CShort(ViInt32 val)
	{
		// Support for IN / IN-OUT
		m_val = (short)val;
	}

	CShort(ViUInt32 val)
	{
		// Support for IN / IN-OUT
		m_val = (short)val;
	}

	CShort(ViInt8* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CShort(ViUInt8* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CShort(ViChar* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CShort(ViInt16* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CShort(ViUInt16* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CShort(ViInt32* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (short)(*pVal);
		}
		else
		{
			m_val = 0;
		}
	}

	CShort(ViUInt32* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (short)(*pVal);
		}
		else
		{
			m_val = 0;
		}
	}

	ViStatus ToViDataType(ViInt8* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViInt8();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViUInt8* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViUInt8();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViChar* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViChar();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViInt16* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViInt16();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViUInt16* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViUInt16();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViInt32* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViInt32();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViUInt32* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViUInt32();
		return VI_SUCCESS;
	}

	ViInt8 ToViInt8()
	{
		return (ViInt8)m_val;
	}

	ViUInt8 ToViUInt8()
	{
		return (ViUInt8)m_val;
	}

	ViChar ToViChar()
	{
		return (ViChar)m_val;
	}

	ViInt16 ToViInt16()
	{
		return m_val;
	}

	ViUInt16 ToViUInt16()
	{
		return (ViUInt16)m_val;
	}

	ViInt32 ToViInt32()
	{
		return m_val;
	}

	ViUInt32 ToViUInt32()
	{
		return m_val;
	}

	short GetVal()
	{
		return m_val;
	}

	short* GetPtr()
	{
		return &m_val;
	}

	operator ViInt8()
	{
		return ToViInt8();
	}

	operator ViUInt8()
	{
		return ToViUInt8();
	}

	operator ViChar()
	{
		return ToViChar();
	}

	operator ViInt16()
	{
		return ToViInt16();
	}

	operator ViUInt16()
	{
		return ToViUInt16();
	}

	operator ViInt32()
	{
		return ToViInt32();
	}

	operator ViUInt32()
	{
		return ToViUInt32();
	}

	short* operator&()
	{
		return GetPtr();
	}

protected:
	short m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CLong
{
public:
	CLong()
	{
		// Support for OUT only
		m_val = 0;
	}

	CLong(ViInt8 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CLong(ViUInt8 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CLong(ViChar val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CLong(ViInt16 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CLong(ViUInt16 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CLong(ViInt32 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CLong(ViUInt32 val)
	{
		// Support for IN / IN-OUT
		m_val = (long)val;
	}

	CLong(ViInt8* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CLong(ViUInt8* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CLong(ViChar* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CLong(ViInt16* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CLong(ViUInt16* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CLong(ViInt32* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0;
		}
	}

	CLong(ViUInt32* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (long)(*pVal);
		}
		else
		{
			m_val = 0;
		}
	}

	ViStatus ToViDataType(ViInt8* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViInt8();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViUInt8* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViUInt8();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViChar* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViChar();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViInt16* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViInt16();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViUInt16* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViUInt16();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViInt32* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViInt32();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViUInt32* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViUInt32();
		return VI_SUCCESS;
	}

	ViInt8 ToViInt8()
	{
		return (ViInt8)m_val;
	}

	ViUInt8 ToViUInt8()
	{
		return (ViUInt8)m_val;
	}

	ViChar ToViChar()
	{
		return (ViChar)m_val;
	}

	ViInt16 ToViInt16()
	{
		return (ViInt16)m_val;
	}

	ViUInt16 ToViUInt16()
	{
		return (ViUInt16)m_val;
	}

	ViInt32 ToViInt32()
	{
		return m_val;
	}

	ViUInt32 ToViUInt32()
	{
		return (ViUInt32)m_val;
	}

	long GetVal()
	{
		return m_val;
	}

	long* GetPtr()
	{
		return &m_val;
	}

	operator ViInt8()
	{
		return ToViInt8();
	}

	operator ViUInt8()
	{
		return ToViUInt8();
	}

	operator ViChar()
	{
		return ToViChar();
	}

	operator ViInt16()
	{
		return ToViInt16();
	}

	operator ViUInt16()
	{
		return ToViUInt16();
	}

	operator ViInt32()
	{
		return ToViInt32();
	}

	operator ViUInt32()
	{
		return ToViUInt32();
	}

	long* operator&()
	{
		return GetPtr();
	}

protected:
	long m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CFloat
{
public:
	CFloat()
	{
		// Support for OUT only
		m_val = 0.0f;
	}

	CFloat(ViReal32 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CFloat(ViReal64 val)
	{
		// Support for IN / IN-OUT
		m_val = (float)val;
	}

	CFloat(ViReal32* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0.0f;
		}
	}

	CFloat(ViReal64* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = (float)*pVal;
		}
		else
		{
			m_val = 0.0f;
		}
	}

	ViStatus ToViDataType(ViReal32* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViReal32();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViReal64* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViReal64();
		return VI_SUCCESS;
	}

	ViReal32 ToViReal32()
	{
		return m_val;
	}

	ViReal64 ToViReal64()
	{
		return m_val;
	}

	float GetVal()
	{
		return m_val;
	}

	float* GetPtr()
	{
		return &m_val;
	}

	operator ViReal32()
	{
		return ToViReal32();
	}

	operator ViReal64()
	{
		return ToViReal64();
	}

	float* operator&()
	{
		return GetPtr();
	}

protected:
	float m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CDouble
{
public:
	CDouble()
	{
		// Support for OUT only
		m_val = 0.0;
	}

	CDouble(ViReal32 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CDouble(ViReal64 val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CDouble(ViReal32* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0.0;
		}
	}

	CDouble(ViReal64* pVal)
	{
		// Support for IN-OUT / OUT
		if (pVal != NULL)
		{
			m_val = *pVal;
		}
		else
		{
			m_val = 0.0;
		}
	}

	ViStatus ToViDataType(ViReal32* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViReal32();
		return VI_SUCCESS;
	}

	ViStatus ToViDataType(ViReal64* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = ToViReal64();
		return VI_SUCCESS;
	}

	ViReal32 ToViReal32()
	{
		return (ViReal32)m_val;
	}

	ViReal64 ToViReal64()
	{
		return m_val;
	}

	double GetVal()
	{
		return m_val;
	}

	double* GetPtr()
	{
		return &m_val;
	}

	operator ViReal32()
	{
		return ToViReal32();
	}

	operator ViReal64()
	{
		return ToViReal64();
	}

	double* operator&()
	{
		return GetPtr();
	}

protected:
	double m_val;
};

//////////////////////////////////////////////////////////////////////////////

class CBSTR
{
public:
	CBSTR()
	{
		// Support for OUT only
	}

	CBSTR(ViConstString val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	CBSTR(ViChar* val)
	{
		// Support for IN / IN-OUT
		m_val = val;
	}

	ViStatus ToViDataType(ViChar* pVal, long nSize)
	{
		ViStatus status = VI_SUCCESS;

		if (m_val.GetBSTR() == NULL)
		{
			if (pVal != VI_NULL && (nSize > 0 || nSize < 0))
			{
				// A NULL BSTR translates to an empty string
				*pVal = 0;
			}
			else
			{
				// If the user passes 0 for the BufferSize parameter, the function 
				// allows the user to pass VI_NULL for the output buffer parameter 
				// and returns the buffer size that the user must pass to get the 
				// entire value including the NUL byte. (IVI 3.2, section 3.1.2.1)
				status = 1;
			}
		}
		else
		{
			USES_CONVERSION;
			CStringA strSource(OLE2A(m_val.GetBSTR()));
			long nSourceSize = strSource.GetLength();
			if (pVal != VI_NULL)
			{
				if (nSourceSize <= nSize || nSize < 0)
				{
					// If the user passes a negative number for the buffer size 
					// parameter, the function copies the value into the buffer 
					// regardless of the number of bytes in the value.
					// (IVI 3.2 section 3.1.2.1)
#pragma warning(disable: 4996)
					strcpy(pVal, strSource);
#pragma warning(default: 4996)
				}
				else
				{
					// If the string that the function attempts to copy contains 
					// more bytes (including the terminating NUL byte) than the user 
					// indicates in the buffer size parameter, the function does the following:
					//   - Copies (buffer size–1) bytes into the buffer
					//   - Places an ASCII NUL byte at the end of the buffer
					//   - Returns in the return value the buffer size that the user must pass to get the entire string
					// (IVI 3.2 section 3.1.2.1)
					strncpy_s(pVal, nSize, strSource, nSize - 1);
					pVal[nSize - 1] = 0;
					status = nSourceSize + 1;
				}
			}
			else
			{
				// If the user passes 0 for the BufferSize parameter, the function 
				// allows the user to pass VI_NULL for the output buffer parameter 
				// and returns the buffer size that the user must pass to get the 
				// entire value including the NUL byte. (IVI 3.2, section 3.1.2.1)
				status = nSourceSize + 1;
			}
		}

		return status;
	}

	BSTR GetVal()
	{
		return m_val.GetBSTR();
	}

	BSTR* GetPtr()
	{
		return m_val.GetAddress();
	}

	operator BSTR()
	{
		return GetVal();
	}

	BSTR* operator&()
	{
		return GetPtr();
	}

protected:
	_bstr_t m_val;
};

//////////////////////////////////////////////////////////////////////////////

template <typename ElementType>
class CSAFEARRAY
{
public:
	CSAFEARRAY()
	{
		// Support for OUT only
		m_val = NULL;
	}

	CSAFEARRAY(ViChar* val, long nSize)
	{
		// Support for IN / IN-OUT
		FromViDataTypeBuffer<ViChar>(val, nSize);
	}

	CSAFEARRAY(ViInt8* val, long nSize)
	{
		// Support for IN / IN-OUT
		FromViDataTypeBuffer<ViInt8>(val, nSize);
	}

	CSAFEARRAY(ViUInt8* val, long nSize)
	{
		// Support for IN / IN-OUT
		FromViDataTypeBuffer<ViUInt8>(val, nSize);
	}

	CSAFEARRAY(ViInt16* val, long nSize)
	{
		// Support for IN / IN-OUT
		FromViDataTypeBuffer<ViInt16>(val, nSize);
	}

	CSAFEARRAY(ViUInt16* val, long nSize)
	{
		// Support for IN / IN-OUT
		FromViDataTypeBuffer<ViUInt16>(val, nSize);
	}

	CSAFEARRAY(ViInt32* val, long nSize)
	{
		// Support for IN / IN-OUT
		FromViDataTypeBuffer<ViInt32>(val, nSize);
	}

	CSAFEARRAY(ViUInt32* val, long nSize)
	{
		// Support for IN / IN-OUT
		FromViDataTypeBuffer<ViUInt32>(val, nSize);
	}

	CSAFEARRAY(ViReal32* val, long nSize)
	{
		// Support for IN / IN-OUT
		FromViDataTypeBuffer<ViReal32>(val, nSize);
	}

	CSAFEARRAY(ViReal64* val, long nSize)
	{
		// Support for IN / IN-OUT
		FromViDataTypeBuffer<ViReal64>(val, nSize);
	}

	~CSAFEARRAY()
	{
		Destroy();
	}

	ViStatus ToViDataType(ViChar* pVal, long nSize)
	{
		return ToViDataTypeBuffer<ViChar>(pVal, nSize);
	}

	ViStatus ToViDataType(ViInt8* pVal, long nSize)
	{
		return ToViDataTypeBuffer<ViInt8>(pVal, nSize);
	}

	ViStatus ToViDataType(ViUInt8* pVal, long nSize)
	{
		return ToViDataTypeBuffer<ViUInt8>(pVal, nSize);
	}

	ViStatus ToViDataType(ViInt16* pVal, long nSize)
	{
		return ToViDataTypeBuffer<ViInt16>(pVal, nSize);
	}

	ViStatus ToViDataType(ViUInt16* pVal, long nSize)
	{
		return ToViDataTypeBuffer<ViUInt16>(pVal, nSize);
	}

	ViStatus ToViDataType(ViInt32* pVal, long nSize)
	{
		return ToViDataTypeBuffer<ViInt32>(pVal, nSize);
	}

	ViStatus ToViDataType(ViUInt32* pVal, long nSize)
	{
		return ToViDataTypeBuffer<ViUInt32>(pVal, nSize);
	}

	ViStatus ToViDataType(ViReal32* pVal, long nSize)
	{
		return ToViDataTypeBuffer<ViReal32>(pVal, nSize);
	}

	ViStatus ToViDataType(ViReal64* pVal, long nSize)
	{
		return ToViDataTypeBuffer<ViReal64>(pVal, nSize);
	}

	ViStatus LengthToViDataType(ViInt8* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = (ViInt8)Length();
		return VI_SUCCESS;
	}

	ViStatus LengthToViDataType(ViUInt8* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = (ViUInt8)Length();
		return VI_SUCCESS;
	}

	ViStatus LengthToViDataType(ViInt16* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = (ViInt16)Length();
		return VI_SUCCESS;
	}

	ViStatus LengthToViDataType(ViUInt16* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = (ViUInt16)Length();
		return VI_SUCCESS;
	}

	ViStatus LengthToViDataType(ViInt32* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = (ViInt32)Length();
		return VI_SUCCESS;
	}

	ViStatus LengthToViDataType(ViUInt32* pVal)
	{
		if (pVal == NULL)
			return VI_ERROR;

		*pVal = (ViUInt32)Length();
		return VI_SUCCESS;
	}

	SAFEARRAY** GetVal()
	{
		return &m_val;
	}

	SAFEARRAY** GetPtr()
	{
		return &m_val;
	}

	long Length()
	{
		long lLength = 0;
		if (m_val != NULL)
		{
			CComSafeArray<ElementType> csa;
			csa.Attach(m_val);
			lLength = csa.GetCount();
			csa.Detach();
		}
		return lLength;
	}

	void Destroy()
	{
		if (m_val != NULL)
		{
			::SafeArrayDestroy(m_val);
			m_val = NULL;
		}
	}

protected:
	template <typename ElementViDataType>
	void FromViDataTypeBuffer(ElementViDataType* val, long nSize)
	{
		CComSafeArray<ElementType> csa;
		csa.Create(nSize);
		for (long i = 0; i < nSize; i++)
		{
			csa[i] = val[i];
		}

		// This assumes that m_val has not been initialized yet
		// (only call this method from constructor)
		m_val = csa.Detach();
	}

	template <typename ElementViDataType>
	ViStatus ToViDataTypeBuffer(ElementViDataType* pVal, long nSize)
	{
		if (pVal == NULL)
			return VI_ERROR;

		if (m_val != NULL)
		{
			CComSafeArray<ElementType> csa;
			csa.Attach(m_val);

			// Make sure we don't overflow output buffer
			// (we copy at most nSize elements)
			long nSafeArrayLength = csa.GetCount();
			long nElementsToCopy = nSafeArrayLength < nSize ? nSafeArrayLength : nSize;
			for (long i = 0; i < nElementsToCopy; i++)
			{
				pVal[i] = csa[i];
			}

			csa.Detach();
		}

		return VI_SUCCESS;
	}

protected:
	SAFEARRAY* m_val;
};
