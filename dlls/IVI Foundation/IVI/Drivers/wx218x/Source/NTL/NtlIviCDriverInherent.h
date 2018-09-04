/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <ivicshared.h>
#include <ivivisatype.h>
#include <atlcoll.h>
#include <atlstr.h>
#include <atlconv.h>
#include "ntlvisatypeconversion.h"


inline ViStatus ntl_InitWithOptions(ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViConstString OptionsString, ViSession* Vi)
{
	if (Vi == VI_NULL) return IVIC_ERROR_NULL_POINTER;

	ViStatus status = VI_SUCCESS;

	*(Vi) = 0;

	CComPtr<IUnknown> spDriver;
	HRESULT hr = CreateDriver(&spDriver);
	ATLASSERT(spDriver != NULL);
	ATLASSERT(SUCCEEDED(hr));
	if (SUCCEEDED(hr) && (spDriver != NULL))
	{
		CComQIPtr<IIviDriver> spIviDriver = spDriver;
		ATLASSERT(spIviDriver != NULL);
		if (spDriver != NULL)
		{
			CBSTR _resourceName(ResourceName);
			CVariantBool _idQuery(IdQuery);
			CVariantBool _reset(Reset);
			CBSTR _optionsString(OptionsString);
			
			hr = spIviDriver->Initialize(_resourceName, _idQuery, _reset, _optionsString);
			if (SUCCEEDED(hr))
			{
				status = AddDriver(spIviDriver, Vi);
				if (status == VI_SUCCESS)
				{
					// Need to do this so that the user gets the warnings (reset, idquery not supported)
					status = TranslateHRESULT(*Vi, hr);
				}
			}
			else
			{
				status = TranslateHRESULT(VI_NULL, hr);
			}
		}
	}
	else
	{
		// Internal error (Could not create COM instance, class not registered?)
		status = VI_ERROR;
	}

	return status;
}

inline ViStatus ntl_init(ViRsrc ResourceName, ViBoolean IdQuery, ViBoolean Reset, ViSession* Vi)
{
	if (Vi == VI_NULL) return IVIC_ERROR_NULL_POINTER;

	ViStatus status = VI_SUCCESS;

	status = ntl_InitWithOptions(ResourceName, IdQuery, Reset, "", Vi);

	return status;
}

inline ViStatus ntl_close(ViSession Vi)
{
	ViStatus status = VI_SUCCESS;

	CComPtr<IUnknown> spDriver;
	status = GetDriver(Vi, &spDriver);
	if (status == VI_SUCCESS)
	{
		CComQIPtr<IIviDriver> spIviDriver = spDriver; 
		ATLASSERT(spIviDriver != NULL);
		if (spIviDriver != NULL)
		{
			HRESULT hr = spIviDriver->Close();
			status = TranslateHRESULT(Vi, hr);

			// We always want to call RemoveDriver, even if Close fails. RemoveDriver should never fail, (because GetDriver succeeded above),
			// but we still look at the return value and return it (only if Close didn't fail, because the Close error code has precedence).
			ViStatus status2 = RemoveDriver(Vi);
			if (status == VI_SUCCESS)
			{
				status = status2;
			}
		}

		spIviDriver.Release();
		spDriver.Release();
	}
	
	return status;
}

inline ViStatus ntl_GetNativeIUnknownPtr(ViSession Vi, IUnknown** NativeIUnknownPtr)
{
	ViStatus status = VI_SUCCESS;

	*NativeIUnknownPtr = NULL;

	CComPtr<IUnknown> spDriver;
	status = GetDriver(Vi, &spDriver);
	if (status == VI_SUCCESS)
	{	
		*NativeIUnknownPtr = spDriver.Detach();
	}

	return status;
}

inline ViStatus ntl_AttachToExistingCOMSession(IUnknown* ExistingIUnknownPtr, ViSession* Vi)
{
	ViStatus status = VI_SUCCESS;

	status = AddDriver(ExistingIUnknownPtr, Vi);

	return status;
}

inline ViStatus ntl_revision_query(ViSession Vi, ViChar DriverRev[], ViChar InstrRev[])
{
	ViStatus status = VI_SUCCESS;

	// The user should pass a buffer with at least 256 bytes for the DriverRev parameter.
	// The user should pass a buffer with at least 256 bytes for the InstrRev parameter.
	// (IVI 3.2 section 6.20)

	CComQIPtr<IIviDriverIdentity> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity);
	if (status == VI_SUCCESS)
	{
		CBSTR _driverRev;
		HRESULT hr = spIIviDriverIdentity->get_Revision(&_driverRev);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_driverRev = _driverRev.ToViDataType(DriverRev, 256);
			if (status == VI_SUCCESS)
			{
				status = status_driverRev;
			}
		}

		if (SUCCEEDED(hr))
		{
			CBSTR _instrRev;
			hr = spIIviDriverIdentity->get_InstrumentFirmwareRevision(&_instrRev);
			status = TranslateHRESULT(Vi, hr);
			if (SUCCEEDED(hr))
			{
				ViStatus status_instrRev = _instrRev.ToViDataType(InstrRev, 256);
				if (status == VI_SUCCESS)
				{
					status = status_instrRev;
				}
			}
		}
	}

	return status;
}

inline ViStatus ntl_GetError(ViSession Vi, ViStatus* ErrorCode, ViInt32 ErrorDescriptionBufferSize, ViChar ErrorDescription[])
{
	ViStatus status = VI_SUCCESS;

	status = IviSession_GetError(Vi, ErrorDescriptionBufferSize, ErrorCode, ErrorDescription);

	return status;
}

inline ViStatus ntl_ClearError(ViSession Vi)
{
	ViStatus status = VI_SUCCESS;

	status = IviSession_ClearError(Vi);

	return status;
}

inline ViStatus ntl_UnlockSession(ViSession Vi, ViBoolean* CallerHasLock)
{
	ViStatus status = VI_SUCCESS;

	status = IviSession_Unlock(Vi, CallerHasLock);

	return status;
}

inline ViStatus ntl_LockSession(ViSession Vi, ViBoolean* CallerHasLock)
{
	ViStatus status = VI_SUCCESS;

	status = IviSession_Lock(Vi, CallerHasLock);
	
	return status;
}

inline ViStatus ntl_error_message(ViSession Vi, ViStatus ErrorCode, ViChar ErrorMessage[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(Vi);

	// The user should pass a buffer with at least 256 bytes for the ErrorMessage parameter.
	// (IVI 3.2 section 6.5)

	// Use CBSTR to convert from a CString to ViChar[] (for correct handling of null buffer, small buffer, etc.)
	CBSTR _val;
	*(&_val) = GetErrorMessage(ErrorCode).AllocSysString();
	status = _val.ToViDataType(ErrorMessage, 256);

	return status;
}

inline ViStatus ntl_GetNextCoercionRecord(ViSession Vi, ViInt32 CoercionRecordBufferSize, ViChar CoercionRecord[])
{
	ViStatus status = VI_SUCCESS;

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CBSTR _returnVal;
		HRESULT hr = spIIviDriverOperation->GetNextCoercionRecord(&_returnVal);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_returnVal = _returnVal.ToViDataType(CoercionRecord, CoercionRecordBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_returnVal;
			}
		}
	}

	return status;
}

inline ViStatus ntl_ResetInterchangeCheck(ViSession Vi)
{
	ViStatus status = VI_SUCCESS;

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spIIviDriverOperation->ResetInterchangeCheck();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

inline ViStatus ntl_GetNextInterchangeWarning(ViSession Vi, ViInt32 InterchangeWarningBufferSize, ViChar InterchangeWarning[])
{
	ViStatus status = VI_SUCCESS;

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CBSTR _returnVal;
		HRESULT hr = spIIviDriverOperation->GetNextInterchangeWarning(&_returnVal);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_returnVal = _returnVal.ToViDataType(InterchangeWarning, InterchangeWarningBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_returnVal;
			}
		}
	}

	return status;
}

inline ViStatus ntl_ClearInterchangeWarnings(ViSession Vi)
{
	ViStatus status = VI_SUCCESS;

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spIIviDriverOperation->ClearInterchangeWarnings();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

inline ViStatus ntl_InvalidateAllAttributes(ViSession Vi)
{
	ViStatus status = VI_SUCCESS;

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spIIviDriverOperation->InvalidateAllAttributes();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

inline ViStatus ntl_error_query(ViSession Vi, ViInt32* ErrorCode, ViChar ErrorMessage[])
{
	if (ErrorCode == VI_NULL) return ReportError(Vi, IVIC_ERROR_NULL_POINTER, _T("Parameter ErrorCode is VI_NULL."));

	ViStatus status = VI_SUCCESS;

	// The user should pass a buffer with at least 256 bytes for the ErrorMessage parameter.
	// (IVI 3.2 section 6.6)

	CComQIPtr<IIviDriverUtility> spIIviDriverUtility;
	status = GetDriverInterface(Vi, &spIIviDriverUtility);
	if (status == VI_SUCCESS)
	{
		CLong _ErrorCode(ErrorCode);
		CBSTR _ErrorMessage(ErrorMessage);
		HRESULT hr = spIIviDriverUtility->ErrorQuery(&_ErrorCode, &_ErrorMessage);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_ErrorCode = _ErrorCode.ToViDataType(ErrorCode);
			if (status == VI_SUCCESS)
			{
				status = status_ErrorCode;
			}
			ViStatus status_ErrorMessage = _ErrorMessage.ToViDataType(ErrorMessage, 256);
			if (status == VI_SUCCESS)
			{
				status = status_ErrorMessage;
			}
		}
	}

	return status;
}

inline ViStatus ntl_self_test(ViSession Vi, ViInt16* TestResult, ViChar TestMessage[])
{
	if (TestResult == VI_NULL) return ReportError(Vi, IVIC_ERROR_NULL_POINTER, _T("Parameter TestResult is VI_NULL."));

	ViStatus status = VI_SUCCESS;

	// The user should pass a buffer with at least 256 bytes for the TestMessage parameter.
	// (IVI 3.2 section 6.21)

	CComQIPtr<IIviDriverUtility> spIIviDriverUtility;
	status = GetDriverInterface(Vi, &spIIviDriverUtility);
	if (status == VI_SUCCESS)
	{
		CLong _TestResult(TestResult);
		CBSTR _TestMessage(TestMessage);
		HRESULT hr = spIIviDriverUtility->SelfTest(&_TestResult, &_TestMessage);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_TestResult = _TestResult.ToViDataType(TestResult);
			if (status == VI_SUCCESS)
			{
				status = status_TestResult;
			}
			ViStatus status_TestMessage = _TestMessage.ToViDataType(TestMessage, 256);
			if (status == VI_SUCCESS)
			{
				status = status_TestMessage;
			}
		}
	}

	return status;
}

inline ViStatus ntl_Disable(ViSession Vi)
{
	ViStatus status = VI_SUCCESS;

	CComQIPtr<IIviDriverUtility> spIIviDriverUtility;
	status = GetDriverInterface(Vi, &spIIviDriverUtility);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spIIviDriverUtility->Disable();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

inline ViStatus ntl_ResetWithDefaults(ViSession Vi)
{
	ViStatus status = VI_SUCCESS;

	CComQIPtr<IIviDriverUtility> spIIviDriverUtility;
	status = GetDriverInterface(Vi, &spIIviDriverUtility);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spIIviDriverUtility->ResetWithDefaults();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

inline ViStatus ntl_reset(ViSession Vi)
{
	ViStatus status = VI_SUCCESS;

	CComQIPtr<IIviDriverUtility> spIIviDriverUtility;
	status = GetDriverInterface(Vi, &spIIviDriverUtility);
	if (status == VI_SUCCESS)
	{
		HRESULT hr = spIIviDriverUtility->Reset();
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

inline ViStatus ntl_GetAttributeViInt32(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32* AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	IviCGetAttributeViInt32 getter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &getter);
	if (status == VI_SUCCESS)
	{
		status = getter(Vi, RepCapIdentifier, AttributeValue);
	}

	return status;
}

inline ViStatus ntl_GetAttributeViInt64(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt64* AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	IviCGetAttributeViInt64 getter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &getter);
	if (status == VI_SUCCESS)
	{
		status = getter(Vi, RepCapIdentifier, AttributeValue);
	}

	return status;
}

inline ViStatus ntl_GetAttributeViReal64(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64* AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	IviCGetAttributeViReal64 getter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &getter);
	if (status == VI_SUCCESS)
	{
		status = getter(Vi, RepCapIdentifier, AttributeValue);
	}
		
	return status;
}

inline ViStatus ntl_GetAttributeViBoolean(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean* AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	IviCGetAttributeViBoolean getter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &getter);
	if (status == VI_SUCCESS)
	{
		status = getter(Vi, RepCapIdentifier, AttributeValue);
	}
		
	return status;
}

inline ViStatus ntl_GetAttributeViSession(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession* AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	IviCGetAttributeViSession getter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &getter);
	if (status == VI_SUCCESS)
	{
		status = getter(Vi, RepCapIdentifier, AttributeValue);
	}
		
	return status;
}

inline ViStatus ntl_GetAttributeViString(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	IviCGetAttributeViString getter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &getter);
	if (status == VI_SUCCESS)
	{
		status = getter(Vi, RepCapIdentifier, AttributeValueBufferSize, AttributeValue);
	}
		
	return status;
}

inline ViStatus ntl_SetAttributeViInt32(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	IviCSetAttributeViInt32 setter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &setter);
	if (status == VI_SUCCESS)
	{
		status = setter(Vi, RepCapIdentifier, AttributeValue);
	}
		
	return status;
}

inline ViStatus ntl_SetAttributeViInt64(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt64 AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	IviCSetAttributeViInt64 setter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &setter);
	if (status == VI_SUCCESS)
	{
		status = setter(Vi, RepCapIdentifier, AttributeValue);
	}
		
	return status;
}

inline ViStatus ntl_SetAttributeViReal64(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64 AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	IviCSetAttributeViReal64 setter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &setter);
	if (status == VI_SUCCESS)
	{
		status = setter(Vi, RepCapIdentifier, AttributeValue);
	}
		
	return status;
}

inline ViStatus ntl_SetAttributeViBoolean(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	IviCSetAttributeViBoolean setter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &setter);
	if (status == VI_SUCCESS)
	{
		status = setter(Vi, RepCapIdentifier, AttributeValue);
	}
		
	return status;
}

inline ViStatus ntl_SetAttributeViSession(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	IviCSetAttributeViSession setter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &setter);
	if (status == VI_SUCCESS)
	{
		status = setter(Vi, RepCapIdentifier, AttributeValue);
	}
		
	return status;
}

inline ViStatus ntl_SetAttributeViString(ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViConstString AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	IviCSetAttributeViString setter;
	status = GetAttributeMap()->Lookup(Vi, AttributeID, &setter);
	if (status == VI_SUCCESS)
	{
		status = setter(Vi, RepCapIdentifier, AttributeValue);
	}
		
	return status;
}

inline ViStatus ntl_get_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION(ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue)
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, IVIC_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverIdentity> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity, false);
	if (status == VI_SUCCESS)
	{
		CLong _val;
		HRESULT hr = spIIviDriverIdentity->get_SpecificationMajorVersion(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION(ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue)
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, IVIC_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverIdentity> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity, false);
	if (status == VI_SUCCESS)
	{
		CLong _val;
		HRESULT hr = spIIviDriverIdentity->get_SpecificationMinorVersion(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_SPECIFIC_DRIVER_DESCRIPTION(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverIdentity> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity, false);
	if (status == VI_SUCCESS)
	{
		CBSTR _val;
		HRESULT hr = spIIviDriverIdentity->get_Description(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_SPECIFIC_DRIVER_PREFIX(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;
	
	NTL_UNUSED(Vi);
	NTL_UNUSED(RepCapIdentifier);

	// Use CBSTR to convert from a CString to ViChar[] (for correct handling of null buffer, small buffer, etc.)
	CBSTR _val;
	*(&_val) = GetPrefix().AllocSysString();
	status = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);

	return status;
}

inline ViStatus ntl_get_SPECIFIC_DRIVER_VENDOR(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverIdentity> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity, false);
	if (status == VI_SUCCESS)
	{
		CBSTR _val;
		HRESULT hr = spIIviDriverIdentity->get_Vendor(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_SPECIFIC_DRIVER_REVISION(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverIdentity> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity, false);
	if (status == VI_SUCCESS)
	{
		CBSTR _val;
		HRESULT hr = spIIviDriverIdentity->get_Revision(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_LOGICAL_NAME(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity);
	if (status == VI_SUCCESS)
	{
		CBSTR _val;
		HRESULT hr = spIIviDriverIdentity->get_LogicalName(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_IO_RESOURCE_DESCRIPTOR(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity);
	if (status == VI_SUCCESS)
	{
		CBSTR _val;
		HRESULT hr = spIIviDriverIdentity->get_IoResourceDescriptor(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_DRIVER_SETUP(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CBSTR _val;
		HRESULT hr = spIIviDriverOperation->get_DriverSetup(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_INSTRUMENT_MANUFACTURER(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverIdentity> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity);
	if (status == VI_SUCCESS)
	{
		CBSTR _val;
		HRESULT hr = spIIviDriverIdentity->get_InstrumentManufacturer(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_INSTRUMENT_MODEL(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverIdentity> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity);
	if (status == VI_SUCCESS)
	{
		CBSTR _val;
		HRESULT hr = spIIviDriverIdentity->get_InstrumentModel(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_INSTRUMENT_FIRMWARE_REVISION(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverIdentity> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity);
	if (status == VI_SUCCESS)
	{
		CBSTR _val;
		HRESULT hr = spIIviDriverIdentity->get_InstrumentFirmwareRevision(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_SUPPORTED_INSTRUMENT_MODELS(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverIdentity> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity, false);
	if (status == VI_SUCCESS)
	{
		CBSTR _val;
		HRESULT hr = spIIviDriverIdentity->get_SupportedInstrumentModels(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_GROUP_CAPABILITIES(ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[])
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverIdentity> spIIviDriverIdentity;
	status = GetDriverInterface(Vi, &spIIviDriverIdentity, false);
	if (status == VI_SUCCESS)
	{
		CBSTR _val;
		HRESULT hr = spIIviDriverIdentity->get_GroupCapabilities(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue, AttributeValueBufferSize);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_get_CACHE(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue)
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, IVIC_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val;
		HRESULT hr = spIIviDriverOperation->get_Cache(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_set_CACHE(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val(AttributeValue);
		HRESULT hr = spIIviDriverOperation->put_Cache(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

inline ViStatus ntl_get_INTERCHANGE_CHECK(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue)
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, IVIC_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val;
		HRESULT hr = spIIviDriverOperation->get_InterchangeCheck(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_set_INTERCHANGE_CHECK(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val(AttributeValue);
		HRESULT hr = spIIviDriverOperation->put_InterchangeCheck(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

inline ViStatus ntl_get_QUERY_INSTRUMENT_STATUS(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val;
		HRESULT hr = spIIviDriverOperation->get_QueryInstrumentStatus(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_set_QUERY_INSTRUMENT_STATUS(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val(AttributeValue);
		HRESULT hr = spIIviDriverOperation->put_QueryInstrumentStatus(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

inline ViStatus ntl_get_RANGE_CHECK(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue)
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, IVIC_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val;
		HRESULT hr = spIIviDriverOperation->get_RangeCheck(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_set_RANGE_CHECK(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val(AttributeValue);
		HRESULT hr = spIIviDriverOperation->put_RangeCheck(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

inline ViStatus ntl_get_RECORD_COERCIONS(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue)
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, IVIC_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val;
		HRESULT hr = spIIviDriverOperation->get_RecordCoercions(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_set_RECORD_COERCIONS(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val(AttributeValue);
		HRESULT hr = spIIviDriverOperation->put_RecordCoercions(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

inline ViStatus ntl_get_SIMULATE(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean* AttributeValue)
{
	if (AttributeValue == VI_NULL) return ReportError(Vi, IVIC_ERROR_NULL_POINTER, _T("Parameter AttributeValue is VI_NULL."));

	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val;
		HRESULT hr = spIIviDriverOperation->get_Simulate(&_val);
		status = TranslateHRESULT(Vi, hr);
		if (SUCCEEDED(hr))
		{
			ViStatus status_val = _val.ToViDataType(AttributeValue);
			if (status == VI_SUCCESS)
			{
				status = status_val;
			}
		}
	}

	return status;
}

inline ViStatus ntl_set_SIMULATE(ViSession Vi, ViConstString RepCapIdentifier, ViBoolean AttributeValue)
{
	ViStatus status = VI_SUCCESS;

	NTL_UNUSED(RepCapIdentifier);

	CComQIPtr<IIviDriverOperation> spIIviDriverOperation;
	status = GetDriverInterface(Vi, &spIIviDriverOperation);
	if (status == VI_SUCCESS)
	{
		CVariantBool _val(AttributeValue);
		HRESULT hr = spIIviDriverOperation->put_Simulate(_val);
		status = TranslateHRESULT(Vi, hr);
	}

	return status;
}

