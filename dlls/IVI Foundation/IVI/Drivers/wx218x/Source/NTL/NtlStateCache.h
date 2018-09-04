/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <atlstr.h>
#include <atlcoll.h>

///////////////////////////////////////////////////////////////////////////////
//
//	Comparison helper functions
//

#define COMPARE_PRECISION	14		// precision as per IVI-3.1

inline bool CompareDoubles(double val1, double val2)
{
	HRESULT hr = S_OK;
	double dRoundedVal1 = val1;
	double dRoundedVal2 = val2;
	hr = ::VarR8Round(val1, COMPARE_PRECISION, &dRoundedVal1);
	hr = ::VarR8Round(val2, COMPARE_PRECISION, &dRoundedVal2);
	ATLASSERT(SUCCEEDED(hr));

	return dRoundedVal1 == dRoundedVal2;
}

inline bool CompareBSTRs(BSTR val1, BSTR val2)
{
	return VarBstrCmp(val1, val2, LOCALE_USER_DEFAULT, 0) == VARCMP_EQ;
}

inline bool CompareVariants(VARIANT val1, VARIANT val2)
{
	bool bCompare = false;
	ATLASSERT(val1.vt == val2.vt);
	if (val1.vt == val2.vt)
	{
		switch (val1.vt)
		{
			case VT_BOOL:
				bCompare = val1.boolVal == val2.boolVal;
				break;
			case VT_BSTR:
				bCompare = CompareBSTRs(val1.bstrVal, val2.bstrVal);
				break;
			case VT_I8:
			case VT_I4:
			case VT_I2:
			case VT_UI1:
			case VT_R4:
				bCompare = CompareDoubles(val1.fltVal, val2.fltVal);
				break;
			case VT_R8:
				bCompare = CompareDoubles(val1.dblVal, val2.dblVal);
				break;
			default:
				ATLASSERT(!"Unexpected data type.");
				break;
		}

	}

	return bCompare;
}

///////////////////////////////////////////////////////////////////////////////
//
//	SimpleCacheEntryTraits
//

template <typename T>
class SimpleCacheEntryTraits
{
public:
	static bool Compare(T val1, T val2) { return val1 == val2; }
	static T Copy(T val) { return val; }
	static void Delete(T val)
	{
		NTL_UNUSED(val);
	}
};

///////////////////////////////////////////////////////////////////////////////
//
//	CacheEntryTraits
//

template <typename T>
class CacheEntryTraits
{
public:
	// Compare and Copy are only implemented in the default template to support enums
	static bool Compare(T val1, T val2) { return val1 == val2; }
	static T Copy(T val) { return val; }

	static void Delete(T val)
	{
		NTL_UNUSED(val);
	}
};

// Specializations for supported cache entry types
template <> class CacheEntryTraits<bool> 
	: public SimpleCacheEntryTraits<bool>
{
};

template <> class CacheEntryTraits<BYTE> 
	: public SimpleCacheEntryTraits<BYTE>
{
};

template <> class CacheEntryTraits<short> 
	: public SimpleCacheEntryTraits<short>
{
};

template <> class CacheEntryTraits<int> 
	: public SimpleCacheEntryTraits<int>
{
};

template <> class CacheEntryTraits<long> 
	: public SimpleCacheEntryTraits<long>
{
};

template <> class CacheEntryTraits<float> 
{
public:
	static bool Compare(float val1, float val2) { return CompareDoubles(val1, val2); }
	static float Copy(float val) { return val; }
	static void Delete(float val)
	{
		NTL_UNUSED(val);
	}
};

template <> class CacheEntryTraits<double> 
{
public:
	static bool Compare(double val1, double val2) { return CompareDoubles(val1, val2); }
	static double Copy(double val) { return val; }
	static void Delete(double val)
	{
		NTL_UNUSED(val);
	}
};

template <> class CacheEntryTraits<BSTR>
{
public:
	static bool Compare(BSTR val1, BSTR val2) { return CompareBSTRs(val1, val2); }
	static BSTR Copy(BSTR val) { return ::SysAllocString(val); }
	static void Delete(BSTR val) { ::SysFreeString(val); }
};

template <> class CacheEntryTraits<VARIANT>
{
public:
	static bool Compare(VARIANT val1, VARIANT val2) { return CompareVariants(val1, val2);  }
	static VARIANT Copy(VARIANT val)
	{
		VARIANT varResult;
		::VariantInit(&varResult);
		CComVariant varDest = val;
		varDest.Detach(&varResult);

		return varResult;
	}

	static void Delete(VARIANT val) { ::VariantClear(&val); }
};


///////////////////////////////////////////////////////////////////////////////
//
//	CCacheEntryBase
//

class CCacheEntryBase
{
public:
	CCacheEntryBase() { Invalidate(); }
	virtual void Invalidate() { m_bValid = false; }
	virtual void SetValid() { m_bValid = true; }
	virtual bool IsValid() const { return m_bValid; }

private:
	bool m_bValid;
};


///////////////////////////////////////////////////////////////////////////////
//
//	CCacheEntry
//

template <typename T>
class CCacheEntry : 
	public CCacheEntryBase,
	public CacheEntryTraits<T>
{
public:
	CCacheEntry() 
	{ 
		Invalidate(); 
	}

	virtual void Invalidate();

	bool GetValue(T* pValue) const;
	bool ContainsValue(T value, const CString& strModel);
	void UpdateValue(T value);

private:
	T m_value;
};

template <typename T>
void CCacheEntry<T>::Invalidate()
{
	if (IsValid())
	{
		Delete(m_value);
	}

	CCacheEntryBase::Invalidate();
}

template <typename T>
bool CCacheEntry<T>::GetValue(T* pValue) const
{
	bool bValid = false;
	if (IsValid())
	{
		bValid = true;
		*pValue = Copy(m_value);
	}

	return bValid;
}

template <typename T>
bool CCacheEntry<T>::ContainsValue(T value, const CString& strModel)
{
	bool bContainsValue = false;

	if (IsValid() && Compare(m_value, value))
	{
		bContainsValue = true;
	}

	return bContainsValue;
}

template <typename T>
void CCacheEntry<T>::UpdateValue(T value)
{
	if (IsValid())
	{
		Delete(m_value);
	}

	m_value = Copy(value);

	SetValid();
}