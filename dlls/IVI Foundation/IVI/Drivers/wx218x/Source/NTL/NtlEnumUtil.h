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
#include <atlrx.h>
#include <math.h>
#include <ntlutil.h>


///////////////////////////////////////////////////////////////////////////////
//
//	Forward declarations
//

template <typename T>
class CEnumCommandConverter;

template <typename T>
class CEnumNameConverter;

///////////////////////////////////////////////////////////////////////////////
//
//	CEnumMemberCommand
//

template <typename T>
class CEnumMemberCommand
{
public:
	CEnumMemberCommand(T eValue, LPCTSTR pszFirstCommand, ...);

	T GetValue() const;

	int GetCommandCount() const;
	const CString& GetPrimaryCommand() const;
	const CString& GetCommandAt(int nIndex) const;

private:
	T m_eValue;
	CAtlArray<CString> m_rgCommands;
};

template <typename T>
CEnumMemberCommand<T>::CEnumMemberCommand(T eValue, LPCTSTR pszFirstCommand, ...)
	: m_eValue(eValue)
{
	va_list argList;
	va_start(argList, pszFirstCommand);

	LPCTSTR pszCommand = pszFirstCommand;
	while (pszCommand != NULL)
	{
		m_rgCommands.Add(pszCommand);

		pszCommand = va_arg(argList, LPCTSTR);
	}

	va_end(argList);
}

template <typename T>
T CEnumMemberCommand<T>::GetValue() const
{
	return m_eValue;
}

template <typename T>
int CEnumMemberCommand<T>::GetCommandCount() const
{
	return (int)m_rgCommands.GetCount();
}

template <typename T>
const CString& CEnumMemberCommand<T>::GetPrimaryCommand() const
{
	static CString strEmpty = _T("");

	return m_rgCommands.GetCount() > 0 ? GetCommandAt(0) : strEmpty;
}

template <typename T>
const CString& CEnumMemberCommand<T>::GetCommandAt(int nIndex) const
{
	return m_rgCommands.GetAt(nIndex);
}

///////////////////////////////////////////////////////////////////////////////
//
//	CEnumCommand
//

template <typename T>
class CEnumCommand
	: public CModelBasedType
{
public:
	CEnumCommand(const CString& strModel, CEnumMemberCommand<T>* pFirstMemberCommand, ...);

	bool ValueToString(T enumVal, CString& strCommand) const;
	bool ValueFromString(const CString& strCommand, T& enumVal) const;
	long GetMaxCommandLength() const;

	void GetEnumValues(CAtlArray<T>& rgValues) const;

private:
	CAtlMap<T, CString> m_mapValueToCommand;			// key = member value, value = primary command
	CAtlMap<CString, T> m_mapCommandToValue;			// key = member command, value = member value
};

template <typename T>
CEnumCommand<T>::CEnumCommand(const CString& strModel, CEnumMemberCommand<T>* pFirstMemberCommand, ...)
	: CModelBasedType(strModel)
{
	va_list argList;
	va_start(argList, pFirstMemberCommand);

	CEnumMemberCommand<T>* pMemberCommand = pFirstMemberCommand;
	while (pMemberCommand != NULL)
	{
		T enumVal = pMemberCommand->GetValue();
		m_mapValueToCommand.SetAt(enumVal, pMemberCommand->GetPrimaryCommand());

		for (int i = 0; i < pMemberCommand->GetCommandCount(); i++)
		{
			m_mapCommandToValue.SetAt(pMemberCommand->GetCommandAt(i), enumVal);
		}

		delete pMemberCommand;		// Can delete now, since we're storing the strings themselves

		pMemberCommand = va_arg(argList, CEnumMemberCommand<T>*);
	}

	va_end(argList);
}

template <typename T>
bool CEnumCommand<T>::ValueToString(T enumVal, CString& strCommand) const
{
	return m_mapValueToCommand.Lookup(enumVal, strCommand);
}

template <typename T>
bool CEnumCommand<T>::ValueFromString(const CString& strCommand, T& enumVal) const
{
	return m_mapCommandToValue.Lookup(strCommand, enumVal);
}

template <typename T>
long CEnumCommand<T>::GetMaxCommandLength() const
{
	long lMaxLen = 0;
	POSITION pos = m_mapCommandToValue.GetStartPosition();
	while (pos != NULL)
	{
		CString strCommand = m_mapCommandToValue.GetNextKey(pos);
		lMaxLen = max(lMaxLen, strCommand.GetLength());
	}

	return lMaxLen;
}

template <typename T>
void CEnumCommand<T>::GetEnumValues(CAtlArray<T>& rgValues) const
{
	POSITION pos = m_mapValueToCommand.GetStartPosition();
	while (pos != NULL)
	{
		T val = m_mapValueToCommand.GetNextKey(pos);
		rgValues.Add(val);
	}
}

///////////////////////////////////////////////////////////////////////////////
//
//	CEnumCommandConverter
//

interface IEnumCommandConverter
{
	virtual bool ValueToString(const CString& strModel, long enumVal, CString& strCommand) const abstract;
	virtual bool ValueFromString(const CString& strModel, const CString& strCommand, long& enumVal) const abstract;
	virtual long GetMaxStringLength() const abstract;
}; 
 
const IEnumCommandConverter* GetEnumCommandConverter(const CString& strEnumName, const CString& strMethodIdentifier);	// Implemented in generated code

template <typename T>
const CEnumCommandConverter<T>* GetEnumCommandConverter(const CString& strMethodIdentifier);							// Implemented in generated code	

template <typename T>
class CEnumCommandConverter :
	public IEnumCommandConverter
{
public:
	CEnumCommandConverter(CEnumCommand<T>* pFirstEnumCommand, ...);

	void GetEnumValues(CAtlArray<T>& rgValues) const;

	bool ValueToString(const CString& strModel, T enumVal, CString& strCommand) const;
	bool ValueFromString(const CString& strModel, const CString& strCommand, T& enumVal) const;

	///////////////////////////////////////////////////////////////////////////////
	// IEnumCommandConverter
	//

	virtual bool ValueToString(const CString& strModel, long enumVal, CString& strCommand) const override;
	virtual bool ValueFromString(const CString& strModel, const CString& strCommand, long& enumVal) const override;
	virtual long GetMaxStringLength() const override;

private:
	long m_lMaxStringLength;

	const CEnumCommand<T>* LookupEnumCommand(const CString& strModel) const;
	
	typedef CModelBasedMap< CEnumCommand<T> > EnumCommandMap;
	EnumCommandMap m_mapEnumCommands;
};

template <typename T>
CEnumCommandConverter<T>::CEnumCommandConverter(CEnumCommand<T>* pFirstEnumCommand, ...)
{
	va_list argList;
	va_start(argList, pFirstEnumCommand);

	m_mapEnumCommands.BuildMap(pFirstEnumCommand, argList);

	va_end(argList);

	// Compute the longest enum member command
	va_start(argList, pFirstEnumCommand);

	m_lMaxStringLength = 0;
	CEnumCommand<T>* pCommand = pFirstEnumCommand;
	while (pCommand != NULL)
	{
		m_lMaxStringLength = max(m_lMaxStringLength, pCommand->GetMaxCommandLength());

		pCommand = va_arg(argList, CEnumCommand<T>*);
	}

	va_end(argList);
}

template <typename T>
void CEnumCommandConverter<T>::GetEnumValues(CAtlArray<T>& rgValues) const
{
	// Model doesn't matter for purposes of getting all of the enum values
	const CEnumCommand<T>* pCommand = LookupEnumCommand(_T(""));
	if (pCommand != NULL)
	{
		pCommand->GetEnumValues(rgValues);
	}
}

template <typename T>
bool CEnumCommandConverter<T>::ValueToString(const CString& strModel, T enumVal, CString& strCommand) const
{
	const CEnumCommand<T>* pEnumCommand = LookupEnumCommand(strModel);

	return pEnumCommand != NULL ? pEnumCommand->ValueToString(enumVal, strCommand) : false;
}

template <typename T>
bool CEnumCommandConverter<T>::ValueFromString(const CString& strModel, const CString& strCommandIn, T& enumVal) const
{
	CString strCommand = strCommandIn;
	strCommand.Trim();

	const CEnumCommand<T>* pEnumCommand = LookupEnumCommand(strModel);

	return pEnumCommand != NULL ? pEnumCommand->ValueFromString(strCommand, enumVal) : false;
}

template <typename T>
const CEnumCommand<T>* CEnumCommandConverter<T>::LookupEnumCommand(const CString& strModel) const
{
	CEnumCommand<T>* pEnumCommand = NULL;
	if (!m_mapEnumCommands.Lookup(strModel, pEnumCommand))
	{
		// No model-specific enum commands, so use the default enum commands
		m_mapEnumCommands.Lookup(_T(""), pEnumCommand);
	}

	return pEnumCommand;
}

template <typename T>
inline bool CEnumCommandConverter<T>::ValueToString(const CString& strModel, long enumVal, CString& strCommand) const
{
	return ValueToString(strModel, (T)enumVal, strCommand);
}

template <typename T>
inline bool CEnumCommandConverter<T>::ValueFromString(const CString& strModel, const CString& strCommand, long& enumVal) const
{
	T enumValTemp;
	bool bFound = ValueFromString(strModel, strCommand, enumValTemp);
	if (bFound)
	{
		enumVal = enumValTemp;
	}

	return bFound;
}

template <typename T>
inline long CEnumCommandConverter<T>::GetMaxStringLength() const
{
	return m_lMaxStringLength;
}

///////////////////////////////////////////////////////////////////////////////
//
//	CEnumNameConverter
//

interface IEnumNameConverter
{
	virtual bool ValueToName(long enumVal, CString& strCommand) const abstract;
	virtual bool ValueFromName(const CString& strCommand, long& enumVal) const abstract;
}; 
 
template <typename T>
const CEnumNameConverter<T>* GetEnumNameConverter();			// implemented in generated code	

template <typename T>
class CEnumNameConverter :
	public IEnumNameConverter
{
public:
	CEnumNameConverter(T enumVal, LPCTSTR pszName, ...);

	bool ValueToName(T enumVal, CString& strName) const;
	bool ValueFromName(const CString& strName, T& enumVal) const;

	///////////////////////////////////////////////////////////////////////////////
	// IEnumNameConverter
	//

	virtual bool ValueToName(long enumVal, CString& strCommand) const override;
	virtual bool ValueFromName(const CString& strCommand, long& enumVal) const override;

private:
	CAtlMap<T, CString> m_mapValueToName;			// key = member value, value = member name
	CAtlMap<CString, T> m_mapNameToValue;			// key = member name, value = member value
};

template <typename T>
CEnumNameConverter<T>::CEnumNameConverter(T enumVal, LPCTSTR pszName, ...)
{
	va_list argList;
	va_start(argList, pszName);

	T curVal = enumVal;
	LPCTSTR pszCurName = pszName;
	while (pszCurName != NULL)
	{
		m_mapValueToName[curVal] = pszCurName;
		m_mapNameToValue[pszCurName] = curVal;

		curVal = va_arg(argList, T);
		pszCurName = va_arg(argList, LPCTSTR);
	}

	va_end(argList);
}

template <typename T>
bool CEnumNameConverter<T>::ValueToName(T enumVal, CString& strName) const
{
	return m_mapValueToName.Lookup(enumVal, strName);
}

template <typename T>
bool CEnumNameConverter<T>::ValueFromName(const CString& strName, T& enumVal) const
{
	return m_mapNameToValue.Lookup(strName, enumVal);
}

template <typename T>
inline bool CEnumNameConverter<T>::ValueToName(long enumVal, CString& strCommand) const
{
	return ValueToName((T)enumVal, strCommand);
}

template <typename T>
inline bool CEnumNameConverter<T>::ValueFromName(const CString& strCommand, long& enumVal) const
{
	T enumValTemp;
	bool bFound = ValueFromName(strCommand, enumValTemp);
	if (bFound)
	{
		enumVal = enumValTemp;
	}

	return bFound;
}


