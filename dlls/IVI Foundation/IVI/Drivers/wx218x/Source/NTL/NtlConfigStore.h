/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <atlstr.h>

#import "IviConfigServer.dll" no_namespace

///////////////////////////////////////////////////////////////////////////////
//	Forward declarations

HRESULT NtlLoadConfigStore(IIviConfigStorePtr& spConfigStore);
HRESULT NtlLoadDriverSession(BSTR bstrResourceDescriptor, IIviDriverSessionPtr& spDriverSession);
HRESULT NtlLoadDriverSession(IIviConfigStorePtr spConfigStore, BSTR bstrResourceDescriptor, IIviDriverSessionPtr& spDriverSession);
HRESULT NtlLookupVirtualName(IIviVirtualNameCollectionPtr spVirtualNames, BSTR bstrVirtualName, IIviVirtualNamePtr spVirtualName);
HRESULT NtlReverseLookupVirtualName(IIviVirtualNameCollectionPtr spVirtualNames, BSTR bstrPhysicalName, IIviVirtualNamePtr spVirtualName);
void NtlAddVirtualName(IIviDriverSessionPtr spDriverSession, _bstr_t bstrName, _bstr_t bstrPhysicalName);
void NtlAddVirtualName(IIviDriverSessionPtr spDriverSession, _bstr_t bstrName, _bstr_t bstrPhysicalName, long lMin, long lMax, long lStartIndex);
IIviSoftwareModulePtr NtlGetSoftwareModule(IIviConfigStorePtr spConfigStore, _bstr_t bstrSoftwareModuleName);
IIviHardwareAssetPtr NtlAddOverwriteHardwareAsset(IIviConfigStorePtr spConfigStore, _bstr_t bstrHardwareName, _bstr_t bstrHardwareResource);
IIviDriverSessionPtr NtlAddOverwriteDriverSession(IIviConfigStorePtr spConfigStore, _bstr_t bstrDriverSessionName, IIviSoftwareModulePtr spSoftware, IIviHardwareAssetPtr spHardware);
IIviLogicalNamePtr NtlAddOverwriteLogicalName(IIviConfigStorePtr spConfigStore, _bstr_t bstrLogicalName, IIviDriverSessionPtr spDriverSession);


////////////////////////////////////////////////////////////////////////
// Config Store registration support
//

inline HRESULT NtlLoadConfigStore(IIviConfigStorePtr& spConfigStore)
{
	HRESULT hr = S_OK;

	try
	{
		spConfigStore.CreateInstance(__uuidof(IviConfigStore));
		_bstr_t bstrLocation = spConfigStore->ProcessDefaultLocation;
		if (bstrLocation.GetBSTR() == NULL || bstrLocation.length() == 0)
		{
			bstrLocation = spConfigStore->MasterLocation;
		}
		spConfigStore->Deserialize(bstrLocation);
	}
	catch (_com_error& e)
	{
		hr = e.Error();
	}

	return hr;
}

inline HRESULT NtlLoadDriverSession(BSTR bstrResourceDescriptor, IIviDriverSessionPtr& spDriverSession)
{
	if (bstrResourceDescriptor == NULL)
		return E_INVALIDARG;

	HRESULT hr = S_OK;

	IIviConfigStorePtr spConfigStore;
	hr = NtlLoadConfigStore(spConfigStore);
	if (SUCCEEDED(hr))
	{
		hr = NtlLoadDriverSession(spConfigStore, bstrResourceDescriptor, spDriverSession);
	}

	return hr;
}

inline HRESULT NtlLoadDriverSession(IIviConfigStorePtr spConfigStore, BSTR bstrResourceDescriptor, IIviDriverSessionPtr& spDriverSession)
{
	if (spConfigStore == NULL)
		return E_INVALIDARG;

	if (bstrResourceDescriptor == NULL)
		return E_INVALIDARG;

	HRESULT hr = S_OK;

	// Lookup the provided resource descriptor to see if it's a logical name
	spDriverSession = NULL;
	try
	{
		spDriverSession = spConfigStore->GetDriverSession(bstrResourceDescriptor);
	}
	catch (_com_error&) 
	{
		// Not really an error => just means a logical name wasn't found
	}

	return hr;
}

inline HRESULT NtlLookupVirtualName(IIviVirtualNameCollectionPtr spVirtualNames, BSTR bstrVirtualName, IIviVirtualNamePtr& spVirtualName)
{
	if (spVirtualNames == NULL)
		return E_INVALIDARG;

	if (bstrVirtualName == NULL)
		return E_INVALIDARG;

	HRESULT hr = E_FAIL;

	try
	{
		spVirtualName = spVirtualNames->GetItem(bstrVirtualName);
		hr = (spVirtualName != NULL) ? S_OK : S_FALSE;
	}
	catch (_com_error& e)
	{
		hr = e.Error();
	}

	return hr;
}

inline HRESULT NtlReverseLookupVirtualName(IIviVirtualNameCollectionPtr spVirtualNames, BSTR bstrPhysicalName, IIviVirtualNamePtr& spVirtualName)
{
	if (spVirtualNames == NULL)
		return E_INVALIDARG;

	if (bstrPhysicalName == NULL)
		return E_INVALIDARG;

	HRESULT hr = S_OK;
	try
	{
		// Loop through the virtual names to see if we find a matching name
		bool bFound = false;
		for (long i = 0; i < spVirtualNames->Count; i++)
		{
			IIviVirtualNamePtr spVirtualNameTest = spVirtualNames->GetItem(i + 1);
			if (spVirtualNameTest->MapTo == _bstr_t(bstrPhysicalName))
			{
				spVirtualName = spVirtualNameTest;
				bFound = true;
				break;
			}
		}
		hr = bFound ? S_OK : S_FALSE;
	}
	catch (_com_error& e)
	{
		hr = e.Error();
	}

	return hr;
}

inline void NtlAddVirtualName(IIviDriverSessionPtr spDriverSession, _bstr_t bstrName, _bstr_t bstrPhysicalName)
{
	IIviVirtualNamePtr spVirtualName(__uuidof(IviVirtualName));
	spVirtualName->Name = bstrName;
	spVirtualName->MapTo = bstrPhysicalName;

	spDriverSession->VirtualNames->Add(spVirtualName);
}

inline void NtlAddVirtualName(IIviDriverSessionPtr spDriverSession, _bstr_t bstrName, _bstr_t bstrPhysicalName, long lMin, long lMax, long lStartIndex)
{
	IIviVirtualNamePtr spVirtualName(__uuidof(IviVirtualName));
	spVirtualName->Name = bstrName;
	spVirtualName->MapTo = bstrPhysicalName;

	spDriverSession->VirtualNames->Add(spVirtualName);

	IIviVirtualRangePtr spVirtualRange(__uuidof(IviVirtualRange));
	spVirtualRange->Name = bstrName + _bstr_t(_T("Range"));
	spVirtualRange->Min = lMin;
	spVirtualRange->Max = lMax;
	spVirtualRange->StartingPhysicalIndex = lStartIndex;

	spVirtualName->VirtualRanges->Add(spVirtualRange);
}

inline IIviSoftwareModulePtr NtlGetSoftwareModule(IIviConfigStorePtr spConfigStore, _bstr_t bstrSoftwareModuleName)
{
	IIviSoftwareModulePtr spSoftware;
	try
	{
		spSoftware = spConfigStore->SoftwareModules->Item[bstrSoftwareModuleName];
	}
	catch(_com_error)
	{
	}

	return spSoftware;
}

inline IIviHardwareAssetPtr NtlAddOverwriteHardwareAsset(IIviConfigStorePtr spConfigStore, _bstr_t bstrHardwareName, _bstr_t bstrHardwareResource)
{
	IIviHardwareAssetPtr spHardware;
	bool bShouldAddHardware = false;
	try
	{
		// Check if it's already there
		spHardware = spConfigStore->HardwareAssets->Item[bstrHardwareName];
	}
	catch(_com_error)
	{
		// It's not there
		spHardware.CreateInstance(__uuidof(IviHardwareAsset));
		bShouldAddHardware = true;
	}
	spHardware->IOResourceDescriptor = bstrHardwareResource;
	spHardware->Name = bstrHardwareName;
	if (bShouldAddHardware)
	{
		spConfigStore->HardwareAssets->Add(spHardware);
	}

	return spHardware;
}

inline IIviDriverSessionPtr NtlAddOverwriteDriverSession(IIviConfigStorePtr spConfigStore, _bstr_t bstrDriverSessionName, IIviSoftwareModulePtr spSoftware, IIviHardwareAssetPtr spHardware)
{
	IIviDriverSessionPtr spDriverSession;
	bool bShouldAddDriverSession = false;
	try
	{
		// Check if it's already there
		spDriverSession = spConfigStore->DriverSessions->Item[bstrDriverSessionName];
	}
	catch(_com_error)
	{
		// It's not there
		spDriverSession.CreateInstance(__uuidof(IviDriverSession));
		bShouldAddDriverSession = true;
	}
	spDriverSession->PutRefHardwareAsset(spHardware);
	spDriverSession->PutRefSoftwareModule(spSoftware);
	spDriverSession->Name = bstrDriverSessionName;
	while (spDriverSession->VirtualNames->Count > 0)
	{
		spDriverSession->VirtualNames->Remove(1);
	}
	if (bShouldAddDriverSession)
	{
		spConfigStore->DriverSessions->Add(spDriverSession);
	}

	return spDriverSession;
}

inline IIviLogicalNamePtr NtlAddOverwriteLogicalName(IIviConfigStorePtr spConfigStore, _bstr_t bstrLogicalName, IIviDriverSessionPtr spDriverSession)
{
	IIviLogicalNamePtr spLogicalName;
	bool bShouldAddLogicalName = false;
	try
	{
		spLogicalName = spConfigStore->LogicalNames->Item[bstrLogicalName];
	}
	catch(_com_error)
	{
		spLogicalName.CreateInstance(__uuidof(IviLogicalName));
		bShouldAddLogicalName = true;
	}
	spLogicalName->Name = bstrLogicalName;
	spLogicalName->PutRefSession(spDriverSession);
	if (bShouldAddLogicalName)
	{
		spConfigStore->LogicalNames->Add(spLogicalName);
	}

	return spLogicalName;
}
