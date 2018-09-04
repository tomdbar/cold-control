/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#pragma once

#pragma warning( push )
#pragma warning( disable : 4481 )	// C4481: nonstandard extension used

#include "CoWX218x.h"

class CWX218xErrorReporter :
	public CErrorReporter
{
public:
	CWX218xErrorReporter(ICallContextProvider* pCallContextProvider)
		: CErrorReporter(__uuidof(WX218x), pCallContextProvider)
	{
	}

	// "I/O error."
	HRESULT IoError(const CString& strDetails) const
	{
		HRESULT hr = S_OK;

		IErrorInfo* pErrorInfo = NULL;
		hr = GetErrorInfo(NULL, &pErrorInfo);
		if (hr == S_OK)
		{
			CComBSTR bstrDescription;
			hr = pErrorInfo->GetDescription(&bstrDescription);
			if (SUCCEEDED(hr))
			{
				CString strDescription = COLE2T(bstrDescription);
				hr = ReportEx(IDS_E_WX218X_IO_GENERAL, LPCTSTR(strDetails), LPCTSTR(strDescription));
			}
			else
			{
				hr = ReportEx(IDS_E_WX218X_IO_GENERAL, LPCTSTR(strDetails), _T(""));
			}

			pErrorInfo->Release();
		}
		else
		{
			hr = ReportEx(IDS_E_WX218X_IO_GENERAL, LPCTSTR(strDetails), _T(""));
		}

		return hr;
	}

	// "I/O timeout error."
	HRESULT IoTimeoutError(const CString& strDetails) const
	{
		HRESULT hr = S_OK;

		IErrorInfo* pErrorInfo = NULL;
		hr = GetErrorInfo(NULL, &pErrorInfo);
		if (hr == S_OK)
		{
			CComBSTR bstrDescription;
			hr = pErrorInfo->GetDescription(&bstrDescription);
			if (SUCCEEDED(hr))
			{
				CString strDescription(bstrDescription);
				hr = ReportEx(IDS_E_WX218X_IO_TIMEOUT, LPCTSTR(strDetails), LPCTSTR(strDescription));
			}
			else
			{
				hr = ReportEx(IDS_E_WX218X_IO_TIMEOUT, LPCTSTR(strDetails), _T(""));
			}

			pErrorInfo->Release();
		}
		else
		{
			hr = ReportEx(IDS_E_WX218X_IO_TIMEOUT, LPCTSTR(strDetails), _T(""));
		}

		return hr;
	}

	// "Instrument model does not support this feature: <strModel>."
	virtual HRESULT ModelNotSupported(const CString& strModel = _T(""), const CString& strDetails = _T("")) const override
	{ return ReportEx(IDS_E_WX218X_MODEL_NOT_SUPPORTED, strDetails, strModel); }

	// "The driver is already initialized."
	virtual HRESULT AlreadyInitialized(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_ALREADY_INITIALIZED, strDetails); }

	// "The <pszOptionName> name in the option string is unknown."
	virtual HRESULT BadOptionName(LPCTSTR pszOptionName, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_BAD_OPTION_NAME, strDetails, pszOptionName); }

	// "The <pszOptionValue> value in the option string is unknown."
	virtual HRESULT BadOptionValue(LPCTSTR pszOptionValue, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_BAD_OPTION_VALUE, strDetails, pszOptionValue); }

	// "The repeated capability selector is badly-formed."
	virtual HRESULT BadlyFormedSelector(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_BADLY_FORMED_SELECTOR, strDetails); }

	// "The simulation state cannot be changed."
	virtual HRESULT CannotChangeSimulateState(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_CANNOT_CHANGE_SIMULATION_STATE, strDetails); }

	// "Cannot open file."
	virtual HRESULT CannotOpenFile(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_CANNOT_OPEN_FILE, strDetails); }

	// "Failure cannot recover."
	virtual HRESULT CannotRecover(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_CANNOT_RECOVER, strDetails); }

	// "A channel name is required."
	virtual HRESULT ChannelNameRequired(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_CHANNEL_NAME_REQUIRED, strDetails); }

	// "File not found."
	virtual HRESULT FileNotFound(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_FILE_NOT_FOUND, strDetails); }

	// "Instrument ID query failed."
	virtual HRESULT InstrumentIdQueryFailed(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_ID_QUERY_FAILED, strDetails); }

	// "Instrument error detected.  Use the ErrorQuery function to retrieve detailed error information."
	virtual HRESULT InstrumentStatus(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INSTRUMENT_STATUS, strDetails); }

	// "Invalid file format."
	virtual HRESULT InvalidFileFormat(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INVALID_FILE_FORMAT, strDetails); }

	// "The number of levels in the selector is not valid for the <pszRepCap> repeated capability."
	virtual HRESULT InvalidNumberOfLevelsInSelector(LPCTSTR pszRepCap, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR, strDetails, pszRepCap); }

	// "The pathname is invalid."
	virtual HRESULT InvalidPathName(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INVALID_PATHNAME, strDetails); }

	// "The range <pszRange> is not valid for the repeated capability <pszRepCap>."
	virtual HRESULT InvalidRangeInSelector(LPCTSTR pszRange	, LPCTSTR pszRepCap, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INVALID_RANGE_IN_SELECTOR, strDetails, pszRange, pszRepCap); }
	
	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, const CString& strVal, const CString& strDetails = _T("")) const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, strVal, strDetails); }

	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, BSTR bstrVal, const CString& strDetails = _T(""))  const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, bstrVal, strDetails); }

	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, LPCTSTR pszVal, const CString& strDetails = _T(""))  const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, pszVal, strDetails); }

	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, double dVal, const CString& strFormat = _T("%.15g"), const CString& strDetails = _T(""))  const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, dVal, strFormat, strDetails); }

	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, long lVal, const CString& strFormat = _T("%d"), const CString& strDetails = _T(""))  const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, lVal, strFormat, strDetails); }

	// "Invalid value (<strVal>) for method <calling method>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszParam, bool bVal, const CString& strDetails = _T(""))  const override 
	{ return InvalidValue(GetCurrentMethod(), pszParam, bVal, strDetails); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, const CString& strVal, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_INVALID_VALUE, strDetails, LPCTSTR(strVal), pszMethod, pszParam); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, BSTR bstrVal, const CString& strDetails = _T(""))  const override 
	{ return ReportEx(IDS_E_IVI_INVALID_VALUE, strDetails, LPCTSTR(COLE2T(bstrVal)), pszMethod, pszParam); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, LPCTSTR pszVal, const CString& strDetails = _T(""))  const override 
	{ return ReportEx(IDS_E_IVI_INVALID_VALUE, strDetails, pszVal, pszMethod, pszParam); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, double dVal, const CString& strFormat = _T("%d"), const CString& strDetails = _T(""))  const override 
	{ CString strVal; strVal.Format(strFormat, dVal); return InvalidValue(pszMethod, pszParam, LPCTSTR(strVal), strDetails); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, long lVal, const CString& strFormat = _T("%d"), const CString& strDetails = _T(""))  const override 
	{ CString strVal; strVal.Format(strFormat, lVal); return InvalidValue(pszMethod, pszParam, LPCTSTR(strVal), strDetails); }

	// "Invalid value (<strVal>) for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT InvalidValue(LPCTSTR pszMethod, LPCTSTR pszParam, bool bVal, const CString& strDetails = _T(""))  const override 
	{ CString strVal; strVal.Format(_T("%s"), bVal ? _T("True") : _T("False")); return InvalidValue(pszMethod, pszParam, LPCTSTR(strVal), strDetails); }

	// "Does not support this class-compliant feature: method <calling method>."
	virtual HRESULT MethodNotSupported(const CString& strDetails = _T("")) const override 
	{ return MethodNotSupported(GetCurrentMethod(), strDetails); }

	// "Does not support this class-compliant feature: method <pszMethod>."
	virtual HRESULT MethodNotSupported(LPCTSTR pszMethod, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_METHOD_NOT_SUPPORTED, strDetails, pszMethod); }

	// "The option string is missing an option name."
	virtual HRESULT MissingOptionName(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_MISSING_OPTION_NAME, strDetails); }

	// "The option string is missing an option value."
	virtual HRESULT MissingOptionValue(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_MISSING_OPTION_VALUE, strDetails); }

	// "Does not support this class-compliant feature: property <calling property>."
	virtual HRESULT PropertyNotSupported(const CString& strDetails = _T("")) const override 
	{ return PropertyNotSupported(GetCurrentMethod(), strDetails); }

	// "Does not support this class-compliant feature: property <pszProperty>."
	virtual HRESULT PropertyNotSupported(LPCTSTR pszProperty, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_PROPERTY_NOT_SUPPORTED, strDetails, pszProperty); }

	// "A connection to the instrument has not been established."
	virtual HRESULT NotInitialized(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_NOT_INITIALIZED, strDetails); }

	// "Null pointer passed for method <pszMethod>, parameter <pszParam>."
	virtual HRESULT NullPointer(LPCTSTR pszMethod, LPCTSTR pszParam, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_NULL_POINTER, strDetails, pszMethod, pszParam); }

	// "Null pointer passed for method <calling method>, parameter <pszParam>."
	virtual HRESULT NullPointer(LPCTSTR pszParam, const CString& strDetails = _T("")) const override 
	{ return NullPointer(GetCurrentMethod(), pszParam, strDetails); }

	// "Operation in progress."
	virtual HRESULT OperationPending(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_OPERATION_PENDING, strDetails); }

	// "Could not allocate necessary memory."
	virtual HRESULT OutOfMemory(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_OUT_OF_MEMORY, strDetails); }

	// "Error reading file."
	virtual HRESULT ReadingFile(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_READING_FILE, strDetails); }

	// "Instrument reset failed."
	virtual HRESULT InstrumentResetFailed(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_RESET_FAILED, strDetails); }

	// "Unknown resource."
	virtual HRESULT ResourceUnknown(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_RESOURCE_UNKNOWN, strDetails); }

	// "The instrument status is not available."
	virtual HRESULT StatusNotAvailable(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_STATUS_NOT_AVAILABLE, strDetails); }

	// "Too many files are open."
	virtual HRESULT TooManyOpenFiles(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_TOO_MANY_OPEN_FILES, strDetails); }

	// "Unexpected response from instrument."
	virtual HRESULT UnexpectedResponse(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_UNEXPECTED_RESPONSE, strDetails); }

	// "Unknown channel name."
	virtual HRESULT UnknownChannelName(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_UNKNOWN_CHANNEL_NAME, strDetails); }

	// "Unknown name in selector."
	virtual HRESULT UnknownNameInSelector(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_UNKNOWN_NAME_IN_SELECTOR, strDetails); }

	// "Unknown physical repeated capability selector."
	virtual HRESULT UnknownPhysicalIdentifier(const CString& strDetails = _T(""))  const override 
	{ return ReportEx(IDS_E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER, strDetails); }

	// "Does not support this class-compliant feature:  (enumeration) value <pszValue> passed as the value for parameter <pszParam> in method <pszMethod>."
	virtual HRESULT ValueNotSupported(LPCTSTR pszValue, LPCTSTR pszParam, LPCTSTR pszMethod, const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_VALUE_NOT_SUPPORTED, strDetails, pszValue, pszParam, pszMethod); }

	// "Does not support this class-compliant feature:  (enumeration) value <pszValue> passed as the value for parameter <pszParam> in method <calling method>."
	virtual HRESULT ValueNotSupported(LPCTSTR pszValue, LPCTSTR pszParam, const CString& strDetails = _T("")) const override 
	{ return ValueNotSupported(pszValue, pszParam, GetCurrentMethod(), strDetails); }

	// "Error writing file."
	virtual HRESULT WritingFile(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_E_IVI_WRITING_FILE, strDetails); }

	// "Error query is not supported by this instrument."
	virtual HRESULT ErrorQueryNotSupported(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_S_IVI_NSUP_ERROR_QUERY, strDetails); }

	// "ID Query is not supported by this instrument."
	virtual HRESULT IdQueryNotSupported(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_S_IVI_NSUP_ID_QUERY, strDetails); }

	// "Reset is not supported by this instrument."
	virtual HRESULT ResetNotSupported(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_S_IVI_NSUP_RESET, strDetails); }

	// "Firmware revision query is not supported by this instrument."
	virtual HRESULT RevisionQueryNotSupported(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_S_IVI_NSUP_REV_QUERY, strDetails); }

	// "Self test is not supported by this instrument."
	virtual HRESULT SelfTestNotSupported(const CString& strDetails = _T("")) const override 
	{ return ReportEx(IDS_S_IVI_NSUP_SELF_TEST, strDetails); }
	
	// "Personality is not active."
	virtual HRESULT PersonalityNotActive(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_PERSONALITY_NOT_ACTIVE, strDetails); }
	
	// "Personality is not licensed."
	virtual HRESULT PersonalityNotLicensed(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_PERSONALITY_NOT_LICENSED, strDetails); }
	
	// "Personality is not installed."
	virtual HRESULT PersonalityNotInstalled(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_PERSONALITY_NOT_INSTALLED, strDetails); }
	
	// "Invalid value %1 of element number %2 parameter %3"
	virtual HRESULT ElementArrayNotValid(LPCTSTR pszParam1, LPCTSTR pszParam2, LPCTSTR pszParam3, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_ELEMENT_ARRAY_NOT_VALID, strDetails, pszParam1, pszParam2, pszParam3); }
	
	// "Handle %1 not exist for selected Channel %2"
	virtual HRESULT HandleChannelNotExist(LPCTSTR pszParam1, LPCTSTR pszParam2, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_HANDLE_CHANNEL_NOT_EXIST, strDetails, pszParam1, pszParam2); }
	
	// "Size of Handle array must be equal to size of Loop Count array and JumpFlag array"
	virtual HRESULT HandleLoopJumpNotEqual(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_HANDLE_LOOP_JUMP_NOT_EQUAL, strDetails); }
	
	// "Size of Waveform Handle array must be equal to size of Loop Count array"
	virtual HRESULT HandleLoopNotEqual(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_HANDLE_LOOP_NOT_EQUAL, strDetails); }
	
	// "The configuration parameters for %1 waveform in method %2 sums up to a value more than 100%%,wich is invalid"
	virtual HRESULT InvalidConfiguration(LPCTSTR pszParam1, LPCTSTR pszParam2, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_INVALID_CONFIGURATION, strDetails, pszParam1, pszParam2); }
	
	// "Lower Bound of arrays:Wfm Handle,Loop Count and JumpFlag must be the same value"
	virtual HRESULT LboundArrayEqual(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_LBOUND_ARRAY_EQUAL, strDetails); }
	
	// "Lower bound of array  %1 must be zero"
	virtual HRESULT LboundArrayZero(LPCTSTR pszParam1, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_LBOUND_ARRAY_ZERO, strDetails, pszParam1); }
	
	// "Count of segments is already maximum value"
	virtual HRESULT MaxCountSegments(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_MAX_COUNT_SEGMENTS, strDetails); }
	
	// "There is no available memory "
	virtual HRESULT NoAvailableMemory(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_NO_AVAILABLE_MEMORY, strDetails); }
	
	// "Start Phase is available only for sine and triangle waveforms"
	virtual HRESULT StartPhase(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_START_PHASE, strDetails); }
	
	// "Upper Bound of arrays must be the same value"
	virtual HRESULT UboundArrayEqual(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_UBOUND_ARRAY_EQUAL, strDetails); }
	
	// "Upper Bound of array %1 can not be zero"
	virtual HRESULT UpperBoundZero(LPCTSTR pszParam1, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_UPPER_BOUND_ZERO, strDetails, pszParam1); }
	
	// "Feature: %1 is not supported by current instrument: %2"
	virtual HRESULT FeatureNotSupported(LPCTSTR pszParam1, LPCTSTR pszParam2, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_FEATURE_NOT_SUPPORTED, strDetails, pszParam1, pszParam2); }
	
	// "All arrays should have the same size."
	virtual HRESULT SizeArrayNotEqual(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_SIZE_ARRAY_NOT_EQUAL, strDetails); }
	
	// "Data Array empty"
	virtual HRESULT DataArrayEmpty(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_DATA_ARRAY_EMPTY, strDetails); }
	
	// "There is already digital data in segment %1 with size %2.If you want download arbitrary data in this segment, you should change size to %3"
	virtual HRESULT SegsizeArbdigNotequal(LPCTSTR pszParam1, LPCTSTR pszParam2, LPCTSTR pszParam3, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_SEGSIZE_ARBDIG_NOTEQUAL, strDetails, pszParam1, pszParam2, pszParam3); }
	
	// "There is already arbitrary data in segment %1 with size %2..If you want download digital data in this segment, you should change size to %3"
	virtual HRESULT SegsizeDigNotequal(LPCTSTR pszParam1, LPCTSTR pszParam2, LPCTSTR pszParam3, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_SEGSIZE_DIG_NOTEQUAL, strDetails, pszParam1, pszParam2, pszParam3); }
	
	// "There is already data with size %1 in the segment %2.You should select another segment."
	virtual HRESULT SegmentNotEmpty(LPCTSTR pszParam1, LPCTSTR pszParam2, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_SEGMENT_NOT_EMPTY, strDetails, pszParam1, pszParam2); }
	
	// "Invalid Data in File %1."
	virtual HRESULT InvalidFileData(LPCTSTR pszParam1, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_INVALID_FILE_DATA, strDetails, pszParam1); }
	
	// "Digital Pod not present for Channel %1"
	virtual HRESULT DigPodNotPresent(LPCTSTR pszParam1, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_DIG_POD_NOT_PRESENT, strDetails, pszParam1); }
	
	// "Invalid File Length  %1."
	virtual HRESULT InvalidFileLength(LPCTSTR pszParam1, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_INVALID_FILE_LENGTH, strDetails, pszParam1); }
	
	// "For Trace Mode %1 you should use function <CreateAdv>.If you want to use current function, change the trace mode."
	virtual HRESULT TraceModeNormal(LPCTSTR pszParam1, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_TRACE_MODE_NORMAL, strDetails, pszParam1); }
	
	// "For Trace Mode %1 you should use function <Create>.If you want to use current function, change the trace mode."
	virtual HRESULT TraceModeDuplicate(LPCTSTR pszParam1, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_TRACE_MODE_DUPLICATE, strDetails, pszParam1); }
	
	// "Files should be with the same size."
	virtual HRESULT FileSizeNotEqual(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_FILE_SIZE_NOT_EQUAL, strDetails); }
	
	// "For Trace Mode %1 you should use function <LoadArbWfmFromFile>.If you want to use current function, change the trace mode."
	virtual HRESULT TraceModeDuplicateFile(LPCTSTR pszParam1, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_TRACE_MODE_DUPLICATE_FILE, strDetails, pszParam1); }
	
	// "For Trace Mode %1 you should use function <LoadArbWfmFromFileAdv>.If you want to use current function, change the trace mode."
	virtual HRESULT TraceModeNormalFile(LPCTSTR pszParam1, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_TRACE_MODE_NORMAL_FILE, strDetails, pszParam1); }
	
	// "Function is not supported for current Trace Mode %1."
	virtual HRESULT NotSupportedTraceMode(LPCTSTR pszParam1, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_NOT_SUPPORTED_TRACE_MODE, strDetails, pszParam1); }
	
	// "Segment %1 not exist in arbitrary memory."
	virtual HRESULT SegNotExist(LPCTSTR pszParam1, const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_SEG_NOT_EXIST, strDetails, pszParam1); }
	
	// "Digital Pod not exist."
	virtual HRESULT DigPodNotExist(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_DIG_POD_NOT_EXIST, strDetails); }
	
	// "The count of segments on opposite channel is not equal.Delete all segments with function Clear."
	virtual HRESULT CountSegNotEqual(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_COUNT_SEG_NOT_EQUAL, strDetails); }
	
	// "Segment size on opposite channel is not equal to the current size."
	virtual HRESULT SizeNotEqual(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_SIZE_NOT_EQUAL, strDetails); }
	
	// "Function not supported for current trace mode."
	virtual HRESULT TraceModeNotSupp(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_TRACE_MODE_NOT_SUPP, strDetails); }
	
	// "For Dig.Port<BOTH>, range of bit index:1-30,not include 15,16.For Dig.Port<1> range:1-14,for Dig.Port<2> range:17-30."
	virtual HRESULT DigPortBitIndex(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_DIG_PORT_BIT_INDEX, strDetails); }
	
	// "Command is empty"
	virtual HRESULT CommandEmpty(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_WX218X_COMMAND_EMPTY, strDetails); }
	
	// "The trigger source is not set to software trigger."
	virtual HRESULT IviFgenTriggerNotSoftware(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_IVIFGEN_TRIGGER_NOT_SOFTWARE, strDetails); }
	
	// "No Waveforms Available"
	virtual HRESULT IviFgenNoWfmsAvailable(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_IVIFGEN_NO_WFMS_AVAILABLE, strDetails); }
	
	// "Waveform In Use"
	virtual HRESULT IviFgenWfmInUse(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_IVIFGEN_WFM_IN_USE, strDetails); }
	
	// "No Sequences Available"
	virtual HRESULT IviFgenNoSeqsAvailable(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_IVIFGEN_NO_SEQS_AVAILABLE, strDetails); }
	
	// "Sequence In Use"
	virtual HRESULT IviFgenSeqInUse(const CString& strDetails = _T(""))
	{ return ReportEx(IDS_E_IVIFGEN_SEQ_IN_USE, strDetails); }


protected:

	virtual HRESULT SetError(UINT uResid, const CString& strError) const override
	{
		HRESULT hrDriverError = E_FAIL;
		CComBSTR bstrHelpFileName = OLESTR("WX218x.chm");
		DWORD dwDriverHelpContextID = 0;
		switch (uResid)
		{
			case IDS_E_WX218X_IO_GENERAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_IO_GENERAL;
				break;
			case IDS_E_WX218X_IO_TIMEOUT:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_IO_TIMEOUT;
				break;
			case IDS_E_WX218X_MODEL_NOT_SUPPORTED:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_MODEL_NOT_SUPPORTED;
				break;
			case IDS_E_WX218X_PERSONALITY_NOT_ACTIVE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_PERSONALITY_NOT_ACTIVE;
				break;
			case IDS_E_WX218X_PERSONALITY_NOT_LICENSED:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_PERSONALITY_NOT_LICENSED;
				break;
			case IDS_E_WX218X_PERSONALITY_NOT_INSTALLED:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_PERSONALITY_NOT_INSTALLED;
				break;
			case IDS_E_WX218X_ELEMENT_ARRAY_NOT_VALID:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_ELEMENT_ARRAY_NOT_VALID;
				break;
			case IDS_E_WX218X_HANDLE_CHANNEL_NOT_EXIST:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_HANDLE_CHANNEL_NOT_EXIST;
				break;
			case IDS_E_WX218X_HANDLE_LOOP_JUMP_NOT_EQUAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_HANDLE_LOOP_JUMP_NOT_EQUAL;
				break;
			case IDS_E_WX218X_HANDLE_LOOP_NOT_EQUAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_HANDLE_LOOP_NOT_EQUAL;
				break;
			case IDS_E_WX218X_INVALID_CONFIGURATION:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_INVALID_CONFIGURATION;
				break;
			case IDS_E_WX218X_LBOUND_ARRAY_EQUAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_LBOUND_ARRAY_EQUAL;
				break;
			case IDS_E_WX218X_LBOUND_ARRAY_ZERO:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_LBOUND_ARRAY_ZERO;
				break;
			case IDS_E_WX218X_MAX_COUNT_SEGMENTS:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_MAX_COUNT_SEGMENTS;
				break;
			case IDS_E_WX218X_NO_AVAILABLE_MEMORY:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_NO_AVAILABLE_MEMORY;
				break;
			case IDS_E_WX218X_START_PHASE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_START_PHASE;
				break;
			case IDS_E_WX218X_UBOUND_ARRAY_EQUAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_UBOUND_ARRAY_EQUAL;
				break;
			case IDS_E_WX218X_UPPER_BOUND_ZERO:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_UPPER_BOUND_ZERO;
				break;
			case IDS_E_WX218X_FEATURE_NOT_SUPPORTED:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_FEATURE_NOT_SUPPORTED;
				break;
			case IDS_E_WX218X_SIZE_ARRAY_NOT_EQUAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_SIZE_ARRAY_NOT_EQUAL;
				break;
			case IDS_E_WX218X_DATA_ARRAY_EMPTY:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_DATA_ARRAY_EMPTY;
				break;
			case IDS_E_WX218X_SEGSIZE_ARBDIG_NOTEQUAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_SEGSIZE_ARBDIG_NOTEQUAL;
				break;
			case IDS_E_WX218X_SEGSIZE_DIG_NOTEQUAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_SEGSIZE_DIG_NOTEQUAL;
				break;
			case IDS_E_WX218X_SEGMENT_NOT_EMPTY:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_SEGMENT_NOT_EMPTY;
				break;
			case IDS_E_WX218X_INVALID_FILE_DATA:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_INVALID_FILE_DATA;
				break;
			case IDS_E_WX218X_DIG_POD_NOT_PRESENT:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_DIG_POD_NOT_PRESENT;
				break;
			case IDS_E_WX218X_INVALID_FILE_LENGTH:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_INVALID_FILE_LENGTH;
				break;
			case IDS_E_WX218X_TRACE_MODE_NORMAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_TRACE_MODE_NORMAL;
				break;
			case IDS_E_WX218X_TRACE_MODE_DUPLICATE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_TRACE_MODE_DUPLICATE;
				break;
			case IDS_E_WX218X_FILE_SIZE_NOT_EQUAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_FILE_SIZE_NOT_EQUAL;
				break;
			case IDS_E_WX218X_TRACE_MODE_DUPLICATE_FILE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_TRACE_MODE_DUPLICATE_FILE;
				break;
			case IDS_E_WX218X_TRACE_MODE_NORMAL_FILE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_TRACE_MODE_NORMAL_FILE;
				break;
			case IDS_E_WX218X_NOT_SUPPORTED_TRACE_MODE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_NOT_SUPPORTED_TRACE_MODE;
				break;
			case IDS_E_WX218X_SEG_NOT_EXIST:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_SEG_NOT_EXIST;
				break;
			case IDS_E_WX218X_DIG_POD_NOT_EXIST:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_DIG_POD_NOT_EXIST;
				break;
			case IDS_E_WX218X_COUNT_SEG_NOT_EQUAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_COUNT_SEG_NOT_EQUAL;
				break;
			case IDS_E_WX218X_SIZE_NOT_EQUAL:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_SIZE_NOT_EQUAL;
				break;
			case IDS_E_WX218X_TRACE_MODE_NOT_SUPP:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_TRACE_MODE_NOT_SUPP;
				break;
			case IDS_E_WX218X_DIG_PORT_BIT_INDEX:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_DIG_PORT_BIT_INDEX;
				break;
			case IDS_E_WX218X_COMMAND_EMPTY:
				dwDriverHelpContextID = 3;
				hrDriverError = E_WX218X_COMMAND_EMPTY;
				break;
			case IDS_E_IVIFGEN_TRIGGER_NOT_SOFTWARE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_IVIFGEN_TRIGGER_NOT_SOFTWARE;
				break;
			case IDS_E_IVIFGEN_NO_WFMS_AVAILABLE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_IVIFGEN_NO_WFMS_AVAILABLE;
				break;
			case IDS_E_IVIFGEN_WFM_IN_USE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_IVIFGEN_WFM_IN_USE;
				break;
			case IDS_E_IVIFGEN_NO_SEQS_AVAILABLE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_IVIFGEN_NO_SEQS_AVAILABLE;
				break;
			case IDS_E_IVIFGEN_SEQ_IN_USE:
				dwDriverHelpContextID = 3;
				hrDriverError = E_IVIFGEN_SEQ_IN_USE;
				break;
			case IDS_S_IVI_SUCCESS:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_SUCCESS;
				break;
			case IDS_E_IVI_CANNOT_RECOVER:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_CANNOT_RECOVER;
				break;
			case IDS_E_IVI_INSTRUMENT_STATUS:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INSTRUMENT_STATUS;
				break;
			case IDS_E_IVI_CANNOT_OPEN_FILE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_CANNOT_OPEN_FILE;
				break;
			case IDS_E_IVI_READING_FILE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_READING_FILE;
				break;
			case IDS_E_IVI_WRITING_FILE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_WRITING_FILE;
				break;
			case IDS_E_IVI_INVALID_PATHNAME:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INVALID_PATHNAME;
				break;
			case IDS_E_IVI_INVALID_VALUE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INVALID_VALUE;
				break;
			case IDS_E_IVI_METHOD_NOT_SUPPORTED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_METHOD_NOT_SUPPORTED;
				break;
			case IDS_E_IVI_PROPERTY_NOT_SUPPORTED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_PROPERTY_NOT_SUPPORTED;
				break;
			case IDS_E_IVI_VALUE_NOT_SUPPORTED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_VALUE_NOT_SUPPORTED;
				break;
			case IDS_E_IVI_NOT_INITIALIZED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_NOT_INITIALIZED;
				break;
			case IDS_E_IVI_UNKNOWN_CHANNEL_NAME:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_UNKNOWN_CHANNEL_NAME;
				break;
			case IDS_E_IVI_TOO_MANY_OPEN_FILES:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_TOO_MANY_OPEN_FILES;
				break;
			case IDS_E_IVI_CHANNEL_NAME_REQUIRED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_CHANNEL_NAME_REQUIRED;
				break;
			case IDS_E_IVI_MISSING_OPTION_NAME:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_MISSING_OPTION_NAME;
				break;
			case IDS_E_IVI_MISSING_OPTION_VALUE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_MISSING_OPTION_VALUE;
				break;
			case IDS_E_IVI_BAD_OPTION_NAME:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_BAD_OPTION_NAME;
				break;
			case IDS_E_IVI_BAD_OPTION_VALUE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_BAD_OPTION_VALUE;
				break;
			case IDS_E_IVI_OUT_OF_MEMORY:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_OUT_OF_MEMORY;
				break;
			case IDS_E_IVI_OPERATION_PENDING:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_OPERATION_PENDING;
				break;
			case IDS_E_IVI_NULL_POINTER:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_NULL_POINTER;
				break;
			case IDS_E_IVI_UNEXPECTED_RESPONSE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_UNEXPECTED_RESPONSE;
				break;
			case IDS_E_IVI_FILE_NOT_FOUND:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_FILE_NOT_FOUND;
				break;
			case IDS_E_IVI_INVALID_FILE_FORMAT:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INVALID_FILE_FORMAT;
				break;
			case IDS_E_IVI_STATUS_NOT_AVAILABLE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_STATUS_NOT_AVAILABLE;
				break;
			case IDS_E_IVI_ID_QUERY_FAILED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_ID_QUERY_FAILED;
				break;
			case IDS_E_IVI_RESET_FAILED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_RESET_FAILED;
				break;
			case IDS_E_IVI_RESOURCE_UNKNOWN:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_RESOURCE_UNKNOWN;
				break;
			case IDS_E_IVI_ALREADY_INITIALIZED:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_ALREADY_INITIALIZED;
				break;
			case IDS_E_IVI_CANNOT_CHANGE_SIMULATION_STATE:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_CANNOT_CHANGE_SIMULATION_STATE;
				break;
			case IDS_E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INVALID_NUMBER_OF_LEVELS_IN_SELECTOR;
				break;
			case IDS_E_IVI_INVALID_RANGE_IN_SELECTOR:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_INVALID_RANGE_IN_SELECTOR;
				break;
			case IDS_E_IVI_UNKNOWN_NAME_IN_SELECTOR:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_UNKNOWN_NAME_IN_SELECTOR;
				break;
			case IDS_E_IVI_BADLY_FORMED_SELECTOR:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_BADLY_FORMED_SELECTOR;
				break;
			case IDS_E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER:
				dwDriverHelpContextID = 0;
				hrDriverError = E_IVI_UNKNOWN_PHYSICAL_IDENTIFIER;
				break;
			case IDS_S_IVI_NSUP_ID_QUERY:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_NSUP_ID_QUERY;
				break;
			case IDS_S_IVI_NSUP_RESET:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_NSUP_RESET;
				break;
			case IDS_S_IVI_NSUP_SELF_TEST:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_NSUP_SELF_TEST;
				break;
			case IDS_S_IVI_NSUP_ERROR_QUERY:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_NSUP_ERROR_QUERY;
				break;
			case IDS_S_IVI_NSUP_REV_QUERY:
				dwDriverHelpContextID = 0;
				hrDriverError = S_IVI_NSUP_REV_QUERY;
				break;default:
				ATLASSERT(!_T("Unexpected error message resource ID."));
				hrDriverError = E_UNEXPECTED;
				break;
		}

		IID iid = m_pCallContextProvider->GetCurrentContext()->GetIID();

		return AtlReportError(GetDriverCLSID(), CT2OLE(strError), dwDriverHelpContextID, bstrHelpFileName, iid, hrDriverError);
	}
};

#pragma warning( pop )
