/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <ivivisatype.h>
#include <atlstr.h>
#include <atlsafe.h>
#include <atlconv.h>

#ifndef VI_ERROR
#define VI_ERROR           (-2147483647L-1)  /* 0x80000000 */
#endif

///////////////////////////////////////////////////////////////////////////////
//
//	Data type conversion for implementing IVI-C wrapper on top of IVI-COM
//

template <typename IviCType>
class CParam;

template <typename IviComType, typename IviCType>
class CScalarParam
{
public:
	CScalarParam() {}
	CScalarParam(IviCType val) { m_val = val; }
	CScalarParam(IviCType* pval) { if (pval != NULL) m_val = *pval; }

	operator IviComType() const { return m_val; }

	IviComType* operator &() { return &m_val; }

	IviCType GetVal() { return m_val; }

protected:
	IviComType m_val;
};

template <typename IviComType, typename IviCType>
class CArrayParam
{
public:
	CArrayParam() { m_val = NULL;}

	CArrayParam(IviCType buf[], ViInt32 bufSize, VARTYPE vt)
	{
		Initialize(buf, bufSize, vt);
	}

	CArrayParam(IviCType buf[], ViInt64 bufSize, VARTYPE vt)
	{
		Initialize(buf, bufSize, vt);
	}

	~CArrayParam()
	{
		if (m_val != NULL)
		{
			HRESULT hr = ::SafeArrayDestroy(m_val);
			ATLASSERT(SUCCEEDED(hr));
		}
	}

	operator SAFEARRAY**() { return &m_val; }

	SAFEARRAY** operator &() { return &m_val; }

	ViStatus GetVal(ViInt32 bufSize, IviCType buf[], ViInt32* bufActualSize)
	{
		return GetValInternal(bufSize, buf, bufActualSize);
	}

	ViStatus GetVal(ViInt64 bufSize, IviCType buf[], ViInt64* bufActualSize)
	{
		return GetValInternal(bufSize, buf, bufActualSize);
	}

protected:
	void Initialize(IviCType* pBuf, ViInt32 bufSize, VARTYPE vt)
	{
		HRESULT hr = S_OK;

		if (pBuf != NULL)
		{
			m_val = ::SafeArrayCreateVectorEx(vt, 0, bufSize, NULL);
			ATLASSERT(m_val != NULL);
			if (m_val != NULL)
			{
				IviComType* pData = NULL;
				hr = ::SafeArrayAccessData(m_val, (void**)&pData);
				ATLASSERT(SUCCEEDED(hr));
				if (SUCCEEDED(hr))
				{
					errno_t err = ::memcpy_s(pData, bufSize * sizeof(IviCType), pBuf, bufSize * sizeof(IviCType));
					ATLASSERT(err == 0);

					hr = ::SafeArrayUnaccessData(m_val);
					ATLASSERT(SUCCEEDED(hr));
				}
			}
		}
		else
		{
			m_val = NULL;
		}
	}

	void Initialize(IviCType* pBuf, ViInt64 bufSize, VARTYPE vt)
	{
		// COM cannot have a SAFEARRAY size larger than 32-bit
		ViInt32 bufSizeTemp = (ViInt32)min(bufSize, LONG_MAX);
		Initialize(pBuf, bufSizeTemp, vt);
	}

	ViStatus GetValInternal(ViInt32 bufSize, IviCType* pBuf, ViInt32* bufActualSize)
	{
		if (pBuf == NULL)
			return VI_ERROR;

		HRESULT hr = S_OK;

		if (bufActualSize != NULL)
			*bufActualSize = 0;

		if (m_val != NULL)
		{
			long lUBound;
			hr = ::SafeArrayGetUBound(m_val, 1, &lUBound);
			ATLASSERT(SUCCEEDED(hr));
			if (SUCCEEDED(hr))
			{
				IviComType* pData = NULL;
				hr = ::SafeArrayAccessData(m_val, (void**)&pData);
				ATLASSERT(SUCCEEDED(hr));
				if (SUCCEEDED(hr))
				{
					size_t cbBuf = bufSize * sizeof(IviCType);
					size_t cbVal = (lUBound + 1) * sizeof(IviCType);
					size_t cbMax = min(cbBuf, cbVal);
					errno_t err = ::memcpy_s(pBuf, cbBuf, pData, cbMax);
					ATLASSERT(err == 0);
					hr = err == 0 ? S_OK : E_UNEXPECTED;
					if (SUCCEEDED(hr) && bufActualSize != NULL)
					{
						*bufActualSize = (ViInt32)(cbMax / sizeof(IviCType));
					}

					HRESULT hr2 = ::SafeArrayUnaccessData(m_val);
					ATLASSERT(SUCCEEDED(hr2));

					hr = FAILED(hr) ? hr : hr2;
					ATLASSERT(SUCCEEDED(hr));
				}
			}
		}

		return SUCCEEDED(hr) ? VI_SUCCESS : VI_ERROR;
	}
	
	ViStatus GetValInternal(ViInt64 bufSize, IviCType* pBuf, ViInt64* bufActualSize)
	{
		ViInt32 bufSize32 = (ViInt32)bufSize;
		ViInt32 bufActualSize32;

		ViStatus status = GetValInternal(bufSize32, pBuf, &bufActualSize32);
		if (status == VI_SUCCESS)
		{
			*bufActualSize = bufActualSize32;
		}

		return status;
	}

private:
	SAFEARRAY* m_val;
};


template <>
class CParam<ViInt64> : public CScalarParam<__int64, ViInt64>
{
public:
	CParam() {}
	CParam(ViInt64 val) : CScalarParam<__int64, ViInt64>(val) {}
	CParam(ViInt64* pval) : CScalarParam<__int64, ViInt64>(pval) {}
};

template <>
class CParam<ViInt32> : public CScalarParam<long, ViInt32>
{
public:
	CParam() {}
	CParam(ViInt32 val) : CScalarParam<long, ViInt32>(val) {}
	CParam(ViInt32* pval) : CScalarParam<long, ViInt32>(pval) {}
};

template <>
class CParam<ViInt16> : public CScalarParam<short, ViInt16>
{
public:
	CParam() {}
	CParam(ViInt16 val) : CScalarParam<short, ViInt16>(val) {}
	CParam(ViInt16* pval) : CScalarParam<short, ViInt16>(pval) {}

#ifdef NTL_DISABLE_IVIC_ATTRIBUTE_C4244
	// This ctor added to handle case where IVI-C is ViInt32 and IVI-COM is Int16
	// Add to your stdafx.h the following to suppress warning C4244 for this case:
	//    #define NTL_DISABLE_IVIC_ATTRIBUTE_C4244
	CParam(ViInt32 val) : CScalarParam<short, ViInt16>((ViInt16)val) {}
#endif
};

template <>
class CParam<ViByte> : public CScalarParam<BYTE, ViByte>
{
public:
	CParam() {}
	CParam(ViByte val) : CScalarParam<BYTE, ViByte>(val) {}
	CParam(ViByte* pval) : CScalarParam<BYTE, ViByte>(pval) {}

#ifdef NTL_DISABLE_IVIC_ATTRIBUTE_C4244
	// These ctors added to handle case where IVI-C is ViInt32 or ViInt16 and IVI-COM is Byte
	// Add to your stdafx.h the following to suppress warning C4244 for this case:
	//    #define NTL_DISABLE_IVIC_ATTRIBUTE_C4244
	CParam(ViChar val) : CScalarParam<BYTE, ViByte>((ViByte)val) {}
	CParam(ViInt16 val) : CScalarParam<BYTE, ViByte>((ViByte)val) {}
	CParam(ViInt32 val) : CScalarParam<BYTE, ViByte>((ViByte)val) {}
#endif
};

template <>
class CParam<ViReal64> : public CScalarParam<double, ViReal64>
{
public:
	CParam() {}
	CParam(ViReal64 val) : CScalarParam<double, ViReal64>(val) {}
	CParam(ViReal64* pval) : CScalarParam<double, ViReal64>(pval) {}
};

template <>
class CParam<ViReal32> : public CScalarParam<float, ViReal32>
{
public:
	CParam() {}
	CParam(ViReal32 val) : CScalarParam<float, ViReal32>(val) {}
	CParam(ViReal32* pval) : CScalarParam<float, ViReal32>(pval) {}

#ifdef NTL_DISABLE_IVIC_ATTRIBUTE_C4244
	// This ctor added to handle case where IVI-C is ViReal32 and IVI-COM is Double.
	// Add to your stdafx.h the following to suppress warning C4244 for this case:
	//    #define NTL_DISABLE_IVIC_ATTRIBUTE_C4244
	CParam(ViReal64 val) : CScalarParam<float, ViReal32>((ViReal32)val) {}
#endif
};

template <>
class CParam<ViBoolean>
{
public:
	CParam()
	{
	}

	CParam(ViBoolean* pval)
	{
		if (pval != NULL)
		{
			m_val = *pval != VI_FALSE ? VARIANT_TRUE : VARIANT_FALSE;
		}
	}

	CParam(ViBoolean val)
	{
		m_val = val != VI_FALSE ? VARIANT_TRUE : VARIANT_FALSE;
	}

	operator VARIANT_BOOL() const { return m_val; }

	VARIANT_BOOL* operator &() { return &m_val; }

	ViBoolean GetVal()
	{
		return m_val != VARIANT_FALSE ? VI_TRUE : VI_FALSE;
	}

	VARIANT_BOOL m_val;
};

template <>
class CParam<ViConstString>
{
public:
	CParam(ViConstString val)
	{
		if (val != VI_NULL)
		{
			m_val = ::SysAllocString(CT2OLE(CA2T(val)));
		}
		else
		{
			m_val = NULL;
		}
	}

	~CParam()
	{
		if (m_val != NULL)
		{
			::SysFreeString(m_val);
		}
	}

	operator BSTR() const { return m_val; }

	BSTR m_val;
};

template <>
class CParam<ViChar[]>
{
public:
	CParam() { m_val = NULL; }

	CParam(ViChar buf[])
	{
		if (buf != VI_NULL)
		{
			m_val = ::SysAllocString(CT2OLE(CA2T(buf)));
		}
		else
		{
			m_val = NULL;
		}
	}

	~CParam()
	{
		if (m_val != NULL)
		{
			::SysFreeString(m_val);
		}
	}

	operator BSTR() const { return m_val; }

	BSTR* operator &() { return &m_val; }

	ViStatus GetVal(ViChar* buf, ViInt32 bufSize)
	{
		ViStatus status = VI_SUCCESS;

		if (m_val == NULL)
		{
			if (buf != VI_NULL && bufSize != 0)
			{
				// A NULL BSTR translates to an empty string
				*buf = 0;
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
			CW2A szSource(m_val);
			CStringA strSource(szSource);
			long nSourceSize = strSource.GetLength();
			if (buf != VI_NULL)
			{
				if (nSourceSize <= bufSize || bufSize < 0)
				{
					// If the user passes a negative number for the buffer size 
					// parameter, the function copies the value into the buffer 
					// regardless of the number of bytes in the value.
					// (IVI 3.2 section 3.1.2.1)
#pragma warning(disable: 4996)
					strcpy(buf, strSource);
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
					strncpy_s(buf, bufSize, strSource, bufSize - 1);
					buf[bufSize - 1] = 0;
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

	BSTR m_val;
};

template <>
class CParam<ViInt64[]> : public CArrayParam<__int64, ViInt64>
{
public:
	CParam() {}
	CParam(ViInt64 buf[], ViInt32 bufSize) : CArrayParam<__int64, ViInt64>(buf, bufSize, VT_I8) {}
	CParam(ViInt64 buf[], ViInt64 bufSize) : CArrayParam<__int64, ViInt64>(buf, bufSize, VT_I8) {}
};

template <>
class CParam<ViInt32[]> : public CArrayParam<long, ViInt32>
{
public:
	CParam() {}
	CParam(ViInt32 buf[], ViInt32 bufSize) : CArrayParam<long, ViInt32>(buf, bufSize, VT_I4) {}
	CParam(ViInt32 buf[], ViInt64 bufSize) : CArrayParam<long, ViInt32>(buf, bufSize, VT_I4) {}
};

template <>
class CParam<ViInt16[]> : public CArrayParam<short, ViInt16>
{
public:
	CParam() {}
	CParam(ViInt16 buf[], ViInt32 bufSize) : CArrayParam<short, ViInt16>(buf, bufSize, VT_I2) {}
	CParam(ViInt16 buf[], ViInt64 bufSize) : CArrayParam<short, ViInt16>(buf, bufSize, VT_I2) {}
};

template <>
class CParam<ViByte[]> : public CArrayParam<BYTE, ViByte>
{
public:
	CParam() {}
	CParam(ViByte buf[], ViInt32 bufSize) : CArrayParam<BYTE, ViByte>(buf, bufSize, VT_UI1) {}
	CParam(ViByte buf[], ViInt64 bufSize) : CArrayParam<BYTE, ViByte>(buf, bufSize, VT_UI1) {}
	CParam(ViChar buf[], ViInt32 bufSize)
	{
		Initialize((ViByte*)buf, bufSize, VT_UI1);
	}

	CParam(ViChar buf[], ViInt64 bufSize)
	{
		Initialize((ViByte*)buf, bufSize, VT_UI1);
	}

	ViStatus GetVal(ViInt32 bufSize, ViByte buf[], ViInt32* bufActualSize)
	{
		return GetValInternal(bufSize, buf, bufActualSize);
	}

	ViStatus GetVal(ViInt64 bufSize, ViByte buf[], ViInt64* bufActualSize)
	{
		return GetValInternal(bufSize, buf, bufActualSize);
	}

	ViStatus GetVal(ViInt32 bufSize, ViChar buf[], ViInt32* bufActualSize)
	{
		return GetValInternal(bufSize, (ViByte*)buf, bufActualSize);
	}

	ViStatus GetVal(ViInt64 bufSize, ViChar buf[], ViInt64* bufActualSize)
	{
		return GetValInternal(bufSize, (ViByte*)buf, bufActualSize);
	}
};

template <>
class CParam<ViReal64[]> : public CArrayParam<double, ViReal64>
{
public:
	CParam() {}
	CParam(ViReal64 buf[], ViInt32 bufSize) : CArrayParam<double, ViReal64>(buf, bufSize, VT_R8) {}
	CParam(ViReal64 buf[], ViInt64 bufSize) : CArrayParam<double, ViReal64>(buf, bufSize, VT_R8) {}
};

template <>
class CParam<ViReal32[]> : public CArrayParam<float, ViReal32>
{
public:
	CParam() {}
	CParam(ViReal32 buf[], ViInt32 bufSize) : CArrayParam<float, ViReal32>(buf, bufSize, VT_R4) {}
	CParam(ViReal32 buf[], ViInt64 bufSize) : CArrayParam<float, ViReal32>(buf, bufSize, VT_R4) {}
};

template <>
class CParam<ViBoolean[]> 
{
public:
	CParam() { m_val = NULL;}

	CParam(ViBoolean buf[], ViInt32 bufSize)
	{
		Initialize(buf, bufSize);
	}

	CParam(ViBoolean buf[], ViInt64 bufSize)
	{
		Initialize(buf, bufSize);
	}

	~CParam()
	{
		if (m_val != NULL)
		{
			HRESULT hr = ::SafeArrayDestroy(m_val);
			ATLASSERT(SUCCEEDED(hr));
		}
	}

	operator SAFEARRAY**() { return &m_val; }

	SAFEARRAY** operator &() { return &m_val; }

	ViStatus GetVal(ViInt32 bufSize, ViBoolean buf[], ViInt32* bufActualSize)
	{
		if (buf == NULL)
			return VI_ERROR;

		HRESULT hr = S_OK;

		if (bufActualSize != NULL)
			*bufActualSize = 0;

		if (m_val != NULL)
		{
			long lUBound;
			hr = ::SafeArrayGetUBound(m_val, 1, &lUBound);
			ATLASSERT(SUCCEEDED(hr));
			if (SUCCEEDED(hr))
			{
				VARIANT_BOOL* pData = NULL;
				hr = ::SafeArrayAccessData(m_val, (void**)&pData);
				ATLASSERT(SUCCEEDED(hr));
				if (SUCCEEDED(hr))
				{
					int cElementsMax = min(bufSize, lUBound + 1);
					for (int i = 0; i < cElementsMax; i++)
					{
						buf[i] = pData[i] != VARIANT_FALSE ? VI_TRUE : VI_FALSE;
					}

					if (bufActualSize != NULL)
					{
						*bufActualSize = cElementsMax;
					}

					hr = ::SafeArrayUnaccessData(m_val);
					ATLASSERT(SUCCEEDED(hr));
				}
			}
		}

		return SUCCEEDED(hr) ? VI_SUCCESS : VI_ERROR;
	}
	
	ViStatus GetVal(ViInt64 bufSize, ViBoolean buf[], ViInt64* bufActualSize)
	{
		ViInt32 bufSize32 = (ViInt32)bufSize;
		ViInt32 bufActualSize32;

		ViStatus status = GetVal(bufSize32, buf, &bufActualSize32);
		if (status == VI_SUCCESS)
		{
			*bufActualSize = bufActualSize32;
		}

		return status;
	}

protected:
	void Initialize(ViBoolean buf[], ViInt32 bufSize)
	{
		HRESULT hr = S_OK;

		if (buf != VI_NULL)
		{
			m_val = ::SafeArrayCreateVectorEx(VT_BOOL, 0, bufSize, NULL);
			ATLASSERT(m_val != NULL);
			if (m_val != NULL)
			{
				VARIANT_BOOL* pData = NULL;
				hr = ::SafeArrayAccessData(m_val, (void**)&pData);
				ATLASSERT(SUCCEEDED(hr));
				if (SUCCEEDED(hr))
				{
					for (int i = 0; i < bufSize; i++)
					{
						pData[i] = buf[i] != VI_FALSE ? VARIANT_TRUE : VARIANT_FALSE;
					}

					hr = ::SafeArrayUnaccessData(m_val);
					ATLASSERT(SUCCEEDED(hr));
				}
			}
		}
		else
		{
			m_val = NULL;
		}
	}

	void Initialize(ViBoolean buf[], ViInt64 bufSize)
	{
		Initialize(buf, (ViInt32)bufSize);
	}

private:
	SAFEARRAY* m_val;
};
