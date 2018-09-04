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

///////////////////////////////////////////////////////////////////////////////
//
//	CInstrumentModel
//

class CInstrumentModel
{
public:
	CInstrumentModel(const CString& strModelName, const CString& strFamilyName = _T(""))
		: m_strModelName(strModelName), m_strFamilyName(strFamilyName)
	{}

	const CString& GetModelName() const { return m_strModelName; }
	const CString& GetFamilyName() const { return m_strFamilyName; }

	bool IsInFamily() const { return !m_strFamilyName.IsEmpty(); }

private:
	CString m_strModelName;
	CString m_strFamilyName;
};


///////////////////////////////////////////////////////////////////////////////
//
//	CInstrumentModelMap
//

typedef CAtlMap<CString, CString> InstrModelMap;			// key = model, value = family
typedef CAtlMap<CString, InstrModelMap*> InstrFamilyMap;	// key = family, value = model map

class CInstrumentModelMap
{
public:
	CInstrumentModelMap(const CInstrumentModel* pModel, ...);
	~CInstrumentModelMap();

	const InstrFamilyMap* GetFamilyMap() const { return &m_mapFamilies; }
	const InstrModelMap* GetModelMap() const { return &m_mapModels; }

public:
	InstrFamilyMap m_mapFamilies;		
	InstrModelMap m_mapModels;							
};

inline CInstrumentModelMap::CInstrumentModelMap(const CInstrumentModel* pFirstModel, ...)
{
	va_list argList;
	va_start(argList, pFirstModel);

	const CInstrumentModel* pModel = pFirstModel;
	while (pModel != NULL)
	{
		CString strModel = pModel->GetModelName();
		CString strFamily = pModel->GetFamilyName();
		if (!strFamily.IsEmpty())
		{ 
			// This model is a member of a family, so check if a model map for this family already exists
			InstrModelMap* pModelMap = NULL;
			if (!m_mapFamilies.Lookup(strFamily, pModelMap))
			{
				// Model map for this family doesn't exist, so create one
				pModelMap = new InstrModelMap;
				m_mapFamilies[strFamily] = pModelMap;
			}

			pModelMap->SetAt(strModel, strFamily);
		}

		m_mapModels[strModel] = strFamily;
		
		delete pModel;

		pModel = va_arg(argList, CInstrumentModel*);
	}

	va_end(argList);
}

inline CInstrumentModelMap::~CInstrumentModelMap()
{
	POSITION pos = m_mapFamilies.GetStartPosition();
	while (pos != NULL)
	{
		delete m_mapFamilies.GetNextValue(pos);
	}
}


///////////////////////////////////////////////////////////////////////////////
//
//	CInstrumentModelManager
//

class CInstrumentModelManager
{
public:
	static const InstrFamilyMap* GetFamilyMap();
	static const InstrModelMap* GetModelMap();

	static bool LookupFamily(const CString& strFamily);
	static bool LookupFamily(const CString& strFamily, InstrModelMap*& pModelMap);
	static bool LookupModel(const CString& strModel);
	static bool LookupModel(const CString& strModel, CString& strFamily);

private:
	static const CInstrumentModelMap* GetInstrumentModelMap();			// implemented in generated code
};

inline const InstrFamilyMap* CInstrumentModelManager::GetFamilyMap()
{
	return GetInstrumentModelMap()->GetFamilyMap();
}

inline const InstrModelMap* CInstrumentModelManager::GetModelMap()
{
	return GetInstrumentModelMap()->GetModelMap();
}

inline bool CInstrumentModelManager::LookupFamily(const CString& strFamily)
{
	InstrModelMap* pModelMap;
	return LookupFamily(strFamily, pModelMap);
}

inline bool CInstrumentModelManager::LookupFamily(const CString& strFamily, InstrModelMap*& pModelMap)
{
	return GetFamilyMap()->Lookup(strFamily, pModelMap);;
}

inline bool CInstrumentModelManager::LookupModel(const CString& strModel)
{
	CString strFamily;
	return LookupModel(strModel, strFamily);
}

inline bool CInstrumentModelManager::LookupModel(const CString& strModel, CString& strFamily)
{
	return GetModelMap()->Lookup(strModel, strFamily);
}


///////////////////////////////////////////////////////////////////////////////
//
//	CModelBasedType
//

class CModelBasedType
{
public:
	CModelBasedType(const CString& strModelOrFamily) 
		: m_strModelOrFamily(strModelOrFamily) 
	{}

	virtual ~CModelBasedType()
	{}

	const CString& GetModelOrFamily() const { return m_strModelOrFamily; }

	virtual bool ModelOverridesFamily(CModelBasedType* pFamilySpecificEntry) const
	{
		NTL_UNUSED(pFamilySpecificEntry);

		return true;
	}

protected:
	CString m_strModelOrFamily;
};

///////////////////////////////////////////////////////////////////////////////
//
//	CModelBasedMap
//

template <typename ValueType>
class CModelBasedMap
	: public CAtlMap<CString, ValueType*>
{
public:
	CModelBasedMap() {}
	CModelBasedMap(ValueType* pFirstValue, ...);
	CModelBasedMap(ValueType* pFirstValue, va_list argList);

	virtual ~CModelBasedMap();

	void BuildMap(ValueType* pFirstValue, va_list argList);

private:
	// We keep an array of the unique values in the map since multiple elements may point to the same
	// value in the case where a family is specified and multiple map entries for each model in the family are added to the map.
	CAtlArray<ValueType*>	m_mapUniqueValues;
};

template <typename ValueType>
CModelBasedMap<ValueType>::CModelBasedMap(ValueType* pFirstValue, ...)
{
	va_list argList;
	va_start(argList, pFirstValue);

	BuildMap(argList);

	va_end(argList);
}

template <typename ValueType>
CModelBasedMap<ValueType>::CModelBasedMap(ValueType* pFirstValue, va_list argList)
{
	BuildMap(pFirstValue, argList);
}

template <typename ValueType>
CModelBasedMap<ValueType>::~CModelBasedMap()
{
	for (int i = 0; i < (int)m_mapUniqueValues.GetCount(); i++)
	{
		delete m_mapUniqueValues[i];
	}
}

template <typename ValueType>
void CModelBasedMap<ValueType>::BuildMap(ValueType* pFirstValue, va_list argList)
{
	ValueType* pValue = pFirstValue;
	while (pValue != NULL)
	{
		CString strModelOrFamily = pValue->GetModelOrFamily();
		InstrModelMap* pModelMap = NULL;
		if (strModelOrFamily.IsEmpty() || CInstrumentModelManager::LookupModel(strModelOrFamily))
		{
			// This is a model, so simply add the value to the list
			SetAt(strModelOrFamily, pValue);
			m_mapUniqueValues.Add(pValue);
		}
		else if (CInstrumentModelManager::LookupFamily(strModelOrFamily, pModelMap))
		{
			// This is a family, so extract all of the models in the family
			POSITION pos = pModelMap->GetStartPosition();
			while (pos != NULL)
			{
				// We call GetNextKey here since the model map is aranged as (key=model, value=family)
				CString strModel = pModelMap->GetNextKey(pos);

				// We MAY want any model-specific entry to override the family entry, so check first if a model-specific entry exists
				ValueType* pModelBasedEntry = NULL;
				if (Lookup(strModel, pModelBasedEntry))
				{
					if (!pValue->ModelOverridesFamily(pModelBasedEntry))
					{
						SetAt(strModel, pValue);
					}
				}
				else
				{
					SetAt(strModel, pValue);
				}
			}

			// We only add the value once to the map of unique values so that it will only get deleted once
			m_mapUniqueValues.Add(pValue);
		}
		else
		{
			ATLASSERT(!"Unrecognized model.");
		}

		pValue = va_arg(argList, ValueType*);
	}
}

///////////////////////////////////////////////////////////////////////////////
//
//	CModelBasedMultiMap
//

template <typename ValueType>
class CModelBasedMultiMap
	: public CRBMultiMap<CString, ValueType*>
{
public:
	CModelBasedMultiMap() {}
	CModelBasedMultiMap(ValueType* pFirstValue, ...);
	CModelBasedMultiMap(ValueType* pFirstValue, va_list argList);

	~CModelBasedMultiMap();

	void BuildMap(ValueType* pFirstValue, va_list argList);
	
private:
	// We keep an array of the unique values in the map since multiple elements may point to the same
	// value in the case where a family is specified and multiple map entries for each model in the family are added to the map.
	CAtlArray<ValueType*>	m_mapUniqueValues;
};

template <typename ValueType>
CModelBasedMultiMap<ValueType>::CModelBasedMultiMap(ValueType* pFirstValue, ...)
{
	va_list argList;
	va_start(argList, pFirstValue);

	BuildMap(argList);

	va_end(argList);
}

template <typename ValueType>
CModelBasedMultiMap<ValueType>::CModelBasedMultiMap(ValueType* pFirstValue, va_list argList)
{
	BuildMap(pFirstValue, argList);
}

template <typename ValueType>
CModelBasedMultiMap<ValueType>::~CModelBasedMultiMap()
{
	for (int i = 0; i < (int)m_mapUniqueValues.GetCount(); i++)
	{
		delete m_mapUniqueValues[i];
	}
}

template <typename ValueType>
void CModelBasedMultiMap<ValueType>::BuildMap(ValueType* pFirstValue, va_list argList)
{
	CRBMultiMap<CString, ValueType*> mapModelSpecificEntries;	// key = model, value = entry
	CAtlArray<ValueType*> rgFamilySpecificEntries;
	ValueType* pValue = pFirstValue;
	while (pValue != NULL)
	{
		CString strModelOrFamily = pValue->GetModelOrFamily();
		InstrModelMap* pModelMap = NULL;
		if (strModelOrFamily.IsEmpty() || CInstrumentModelManager::LookupModel(strModelOrFamily))
		{
			// This is a model, so simply add the value to the list
			Insert(strModelOrFamily, pValue);
			m_mapUniqueValues.Add(pValue);

			// Note this model so that we won't overwrite the entries when we expand the family-specific entries
			mapModelSpecificEntries.Insert(strModelOrFamily, pValue);
		}
		else if (CInstrumentModelManager::LookupFamily(strModelOrFamily, pModelMap))
		{
			// This is a family, so save it to be processed after all of the model-specific entries
			rgFamilySpecificEntries.Add(pValue);
			m_mapUniqueValues.Add(pValue);
		}
		else
		{
			ATLASSERT(!"Unrecognized model.");
		}

		pValue = va_arg(argList, ValueType*);
	}

	for (int i = 0; i < (int)rgFamilySpecificEntries.GetCount(); i++)
	{
		ValueType* pFamilySpecificEntry = rgFamilySpecificEntries[i];
		CString strFamily = pFamilySpecificEntry->GetModelOrFamily();
		InstrModelMap* pModelMap = NULL;
		bool bFoundFamily = CInstrumentModelManager::LookupFamily(strFamily, pModelMap);
		ATLASSERT(bFoundFamily);
		if (bFoundFamily)
		{
			// Extract all of the models in the family
			POSITION posModels = pModelMap->GetStartPosition();
			while (posModels != NULL)
			{
				// We call GetNextKey here since the model map is aranged as (key=model, value=family)
				CString strModel = pModelMap->GetNextKey(posModels);

				// We MAY want any model-specific entries to override the family entries, so check first if any model-specific entry exists			
				bool bFoundConflictingModelSpecificEntry = false;
				POSITION posModelSpecificEntries = mapModelSpecificEntries.FindFirstWithKey(strModel);
				while ((posModelSpecificEntries != NULL) && !bFoundConflictingModelSpecificEntry)
				{
					ValueType* pModelSpecificEntry = mapModelSpecificEntries.GetNextValueWithKey(posModelSpecificEntries, strModel);
					bFoundConflictingModelSpecificEntry = pModelSpecificEntry->ModelOverridesFamily(pFamilySpecificEntry);
				}

				if (!bFoundConflictingModelSpecificEntry)
				{
					Insert(strModel, pFamilySpecificEntry);
				}
			}
		}
	}
}

///////////////////////////////////////////////////////////////////////////////
//
//	CSupportedModel
//

class CSupportedModel
	: public CModelBasedType
{
public:
	CSupportedModel(const CString& strModelOrFamily)
		: CModelBasedType(strModelOrFamily)
	{}

	virtual ~CSupportedModel()
	{}
};

///////////////////////////////////////////////////////////////////////////////
//
//	CSupportedModelValidator
//

class CSupportedModelValidator
{
public:
	CSupportedModelValidator(CSupportedModel* pSupportedModel, ...);
	virtual ~CSupportedModelValidator();

	bool Validate(const CString& strModel) const;

private:
	typedef CModelBasedMap<CSupportedModel> SupportedModelMap;
	SupportedModelMap m_mapSupportedModels;
};

inline CSupportedModelValidator::CSupportedModelValidator(CSupportedModel* pFirstSupportedModel, ...)
{
	va_list argList;
	va_start(argList, pFirstSupportedModel);

	m_mapSupportedModels.BuildMap(pFirstSupportedModel, argList);

	va_end(argList);
}

inline CSupportedModelValidator::~CSupportedModelValidator()
{
}

inline bool CSupportedModelValidator::Validate(const CString& strModel) const
{
	CSupportedModel* pSupportedModel = NULL;
	m_mapSupportedModels.Lookup(strModel, pSupportedModel);

	return (pSupportedModel != NULL);
}

///////////////////////////////////////////////////////////////////////////////
//
//	CEnumSupportedModel
//

class CEnumSupportedModel
	: public CModelBasedType
{
public:
	CEnumSupportedModel(int nEnumVal, const CString& strModelOrFamily)
		: m_nEnumVal(nEnumVal), CModelBasedType(strModelOrFamily)
	{}

	int GetEnumValue() const { return m_nEnumVal; }

private:
	int m_nEnumVal;
};

///////////////////////////////////////////////////////////////////////////////
//
//	CEnumSupportedModelMap
//

template <typename EnumType>
class CEnumSupportedModelMap
{
public:
	CEnumSupportedModelMap(const CEnumSupportedModel* pFirstModel, ...);

	bool IsValueSupportedForModel(const CString& strModel, EnumType enumVal) const;
	
private:
	typedef CRBMultiMap<int, CString> EnumSupportedModelMap;				// key = enum value, value = model
	EnumSupportedModelMap m_mapSupportedModels;
};

template <typename EnumType>
CEnumSupportedModelMap<EnumType>::CEnumSupportedModelMap(const CEnumSupportedModel* pFirstSupportedModel, ...)
{
	va_list argList;
	va_start(argList, pFirstSupportedModel);

	const CEnumSupportedModel* pSupportedModel = pFirstSupportedModel;
	while (pSupportedModel)
	{
		CString strModelOrFamily = pSupportedModel->GetModelOrFamily();
		InstrModelMap* pModelMap;
		if (CInstrumentModelManager::LookupFamily(strModelOrFamily, pModelMap))
		{
			// This is a family, so extract all of the models in the family
			POSITION pos = pModelMap->GetStartPosition();
			while (pos != NULL)
			{
				CString strModel = pModelMap->GetNextKey(pos);
				m_mapSupportedModels.Insert(pSupportedModel->GetEnumValue(), strModel);
			}
		}
		else if (CInstrumentModelManager::LookupModel(strModelOrFamily))
		{
			// This is a model, so simply add the value to the list
			m_mapSupportedModels.Insert(pSupportedModel->GetEnumValue(), strModelOrFamily);
		}
		else
		{
			ATLASSERT(!"Unrecognized model.");
		}

		delete pSupportedModel;
		pSupportedModel = va_arg(argList, CEnumSupportedModel*);
	}

	va_end(argList);
}

template <typename EnumType>
bool CEnumSupportedModelMap<EnumType>::IsValueSupportedForModel(const CString& strModel, EnumType enumVal) const
{
	// NOTE: We default bSupported to 'true' because if no entry is found for the enum value, then that means all models are supported
	POSITION pos = m_mapSupportedModels.FindFirstWithKey(enumVal);
	if (pos == NULL)
	{
		// No entries exist for this value, so this implies that all models are supported
		return true;
	}
	else
	{
		while (pos != NULL)
		{
			CString strCurrentModel = m_mapSupportedModels.GetNextValueWithKey(pos, enumVal);
			if (strCurrentModel == strModel)
				return true;
		}

		return false;
	}
}

///////////////////////////////////////////////////////////////////////////////
//
//	CEnumParameterValidator
//

template <typename EnumType>
const CEnumSupportedModelMap<EnumType>* GetEnumSupportedModelMap();			// implemented in generated code	

template <typename EnumType>
class CEnumParameterValidator
{
public:
	bool Validate(const CString& strModel, EnumType enumVal) const;
	bool Validate(const CString& strModel, SAFEARRAY** psaValues, int* peInvalidValue) const;
};

template <typename EnumType>
bool CEnumParameterValidator<EnumType>::Validate(const CString& strModel, EnumType enumVal) const
{
	bool bValid = GetEnumSupportedModelMap<EnumType>()->IsValueSupportedForModel(strModel, enumVal);

	return bValid;
}

template <typename EnumType>
bool CEnumParameterValidator<EnumType>::Validate(const CString& strModel, SAFEARRAY** psaValues, int* peInvalidValue) const
{
	CComSafeArray<int> saValues;
	saValues.Attach(*psaValues);

	bool bValid = true;

	for (int i = 0; i < (int)saValues.GetCount(); i++)
	{
		bValid = GetEnumSupportedModelMap<EnumType>()->IsValueSupportedForModel(strModel, (EnumType)saValues.GetAt(i));
		if (!bValid)
		{
			*peInvalidValue = saValues.GetAt(i);
			break;
		}
	}

	saValues.Detach();

	return bValid;
}
