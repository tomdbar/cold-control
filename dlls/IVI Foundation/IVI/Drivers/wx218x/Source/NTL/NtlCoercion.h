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
//	CCoercionLog
//

class CCoercionLog
{
public:
	CCoercionLog(long lMaxSize)
		: m_lMaxSize(lMaxSize)
	{
	}

	template <typename T>
	CString AddRecord(T desiredVal, T coercedVal, const CString& strRepCapIdentifier, const CString& strAttribute)
	{
		// From IVI 3.2:
		// A recommended format for the coercion record string is as follows:
		//		"Attribute " + <attribute name> +  [" on <repeated capability> " + <repeated capability identifier>] + " was coerced from " + <desiredVal> + " to " + <coercedVal>.
		// And example coercion record string is as follows:
		//		"Attribute Vertical Range on channel ch1 was coerced from 9.0 to 10.0."
		
		CString strDesiredValue = FormatRecordValue(desiredVal);
		CString strCoercedValue = FormatRecordValue(coercedVal);

		CString strRecord;
		if (strRepCapIdentifier.IsEmpty())
		{
			strRecord.Format(_T("Attribute %s coerced from %s to %s."), strAttribute, strDesiredValue, strCoercedValue);
		}
		else
		{
			strRecord.Format(_T("Attribute %s on %s coerced from %s to %s."), strAttribute, strRepCapIdentifier, strDesiredValue, strCoercedValue);
		}

		if ((long)m_rgRecords.GetCount() == m_lMaxSize)
		{
			m_rgRecords.RemoveAt(0, 1);
		}

		m_rgRecords.Add(strRecord);

		return strRecord;
	}

	CString GetNextRecordAndRemove()
	{
		// Get the oldest coercion record and remove it from the collection
		CString strRecord;
		if (m_rgRecords.GetCount() > 0)
		{
			strRecord = m_rgRecords[0];
			m_rgRecords.RemoveAt(0, 1);
		}

		return strRecord;
	}

	long GetMaxSize() const { return m_lMaxSize; }

private:
	static CString FormatRecordValue(double dVal)
	{
		CString strValue;
		strValue.Format(_T("%0.15g"), dVal);
		return strValue;
	}

	static CString FormatRecordValue(float fVal)
	{
		return FormatRecordValue((double)fVal);
	}

	static CString FormatRecordValue(long lVal)
	{
		CString strValue;
		strValue.Format(_T("%d"), lVal);
		return strValue;
	}

	static CString FormatRecordValue(int nVal)
	{
		return FormatRecordValue((long)nVal);
	}

	static CString FormatRecordValue(short sVal)
	{
		return FormatRecordValue((long)sVal);
	}

private:
	CAtlArray<CString> m_rgRecords;
	long m_lMaxSize;
};

///////////////////////////////////////////////////////////////////////////////
//
//	Coercion functions
//

class CCoercionUtility
{
public:
	template <typename T>
	static T CoerceUp(T val, int nAllowedValuesCount, T allowedValues[])
	{
		// IMPORTANT: allowed values must be in numerical order (min...max)
		for (int i = 0; i < nAllowedValuesCount; i++)
		{
			T allowedVal = allowedValues[i];

			if (val <= allowedVal)
			{
				val = allowedVal;
				break;
			}
		}

		return val;
	}

	template <typename T>
	static T CoerceDown(T val, int nAllowedValuesCount, T allowedValues[])
	{
		// IMPORTANT: allowed values must be in numerical order (min...max)
		for (int i = nAllowedValuesCount - 1; i >= 0; i--)
		{
			T allowedVal = allowedValues[i];

			if (val >= allowedVal)
			{
				val = allowedVal;
				break;
			}
		}

		return val;
	}

	template <typename T>
	static bool IsOneOf(T val, int nAllowedValuesCount, T allowedValues[])
	{
		bool bAllowed = false;

		for (int i = 0; i < nAllowedValuesCount; i++)
		{
			T allowedVal = allowedValues[i];

			if (val == allowedVal)
			{
				bAllowed = true;
				break;
			}
		}

		return bAllowed;
	}

	static bool IsOneOf(LPCTSTR val, int nAllowedValuesCount, LPCTSTR allowedValues[])
	{
		bool bAllowed = false;

		for (int i = 0; i < nAllowedValuesCount; i++)
		{
			LPCTSTR allowedVal = allowedValues[i];

			if (_tcscmp(val, allowedVal) == 0)
			{
				bAllowed = true;
				break;
			}
		}

		return bAllowed;
	}
};
