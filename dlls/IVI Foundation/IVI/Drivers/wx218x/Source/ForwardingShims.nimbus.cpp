/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/
#include "StdAfx.h"
#include "CoWX218x.h"


HRESULT ForwardingShimImpl::IWX218x_AbortGeneration(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("AbortGeneration"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("AbortGeneration"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_AbortGeneration();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_InitiateGeneration(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("InitiateGeneration"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("InitiateGeneration"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_InitiateGeneration();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_SetActiveChannel(WX218x* pT, BSTR ChName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("SetActiveChannel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("SetActiveChannel"), &hr, IN_PARAM(ChName), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_SetActiveChannel(ChName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_SendCmd(WX218x* pT, BSTR Command)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("SendCmd"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("SendCmd"), &hr, IN_PARAM(Command), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_SendCmd(Command);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_ReadQuery(WX218x* pT, BSTR SendBuff, BSTR* ReadBuff)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("ReadQuery"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (ReadBuff == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("ReadQuery"), _T("ReadBuff"));
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("ReadQuery"), &hr, IN_PARAM(SendBuff), OUT_PARAM(ReadBuff), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_ReadQuery(SendBuff, ReadBuff);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_Output(WX218x* pT, IWX218xChannel** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_Output"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Output"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_Output"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_Output(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_AM(WX218x* pT, IWX218xAM** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_AM"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AM"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_AM"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_AM(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_ActiveChannel(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_ActiveChannel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ActiveChannel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_ActiveChannel"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<BSTR>* pSimData = pT->GetOrCreateCacheEntry<BSTR>(_T("IWX218x.ActiveChannel"));
		if (!pSimData->GetValue(val))
		{
			*val = ::SysAllocString(L"Channel1");
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_ActiveChannel(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_put_ActiveChannel(WX218x* pT, BSTR val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("put_ActiveChannel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("put_ActiveChannel"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->ActiveChannel_RangeCheck(_T("put_ActiveChannel"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<BSTR>* pSimData = pT->GetOrCreateCacheEntry<BSTR>(_T("IWX218x.ActiveChannel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_put_ActiveChannel(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_StandardWaveform(WX218x* pT, IWX218xStandardWaveform** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_StandardWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_StandardWaveform"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_StandardWaveform"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_StandardWaveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_Arbitrary(WX218x* pT, IWX218xArbitrary** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_Arbitrary"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Arbitrary"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_Arbitrary"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_Arbitrary(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_CarrierModulation(WX218x* pT, IWX218xCarrierModulation** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_CarrierModulation"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_CarrierModulation"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_CarrierModulation"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_CarrierModulation(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_Couple(WX218x* pT, IWX218xCouple** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_Couple"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Couple"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_Couple"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_Couple(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_FM(WX218x* pT, IWX218xFM** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_FM"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FM"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_FM"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_FM(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_Markers(WX218x* pT, IWX218xMarkers** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_Markers"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Markers"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_Markers"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Markers"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Markers"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Markers"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_Markers(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_Trigger(WX218x* pT, IWX218xTrigger** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_Trigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Trigger"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_Trigger"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_Trigger(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_StateStorage(WX218x* pT, IWX218xStateStorage** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_StateStorage"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_StateStorage"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_StateStorage"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_StateStorage(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_XInstrument(WX218x* pT, IWX218xXInstrument** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_XInstrument"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_XInstrument"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_XInstrument"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_XInstrument"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_XInstrument(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_DigitalPulse(WX218x* pT, IWX218xDigitalPulse** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_DigitalPulse"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DigitalPulse"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_DigitalPulse"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_DigitalPulse(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_Sweep(WX218x* pT, IWX218xSweep** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_Sweep"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Sweep"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_Sweep"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_Sweep(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_DigitalPatternOutput(WX218x* pT, IWX218xDigitalPatternOutput** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_DigitalPatternOutput"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DigitalPatternOutput"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_DigitalPatternOutput"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigitalPatternOutput"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigitalPatternOutput"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigitalPatternOutput"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigitalPatternOutput"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigitalPatternOutput"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_DigitalPatternOutput(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_CHIRP(WX218x* pT, IWX218xCHIRP** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_CHIRP"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_CHIRP"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_CHIRP"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_CHIRP"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_CHIRP(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_FSK(WX218x* pT, IWX218xFSK** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_FSK"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FSK"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_FSK"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FSK"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_FSK(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_ASK(WX218x* pT, IWX218xASK** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_ASK"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ASK"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_ASK"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ASK"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_ASK(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_FHOP(WX218x* pT, IWX218xFHOP** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_FHOP"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FHOP"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_FHOP"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FHOP"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_FHOP(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_AHOP(WX218x* pT, IWX218xAHOP** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_AHOP"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AHOP"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_AHOP"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_AHOP"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_AHOP(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_Pattern(WX218x* pT, IWX218xPattern** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_Pattern"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Pattern"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_Pattern"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Pattern"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_Pattern(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_PSK(WX218x* pT, IWX218xPSK** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_PSK"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_PSK"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_PSK"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_PSK"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_PSK(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_QAM(WX218x* pT, IWX218xQAM** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_QAM"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_QAM"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_QAM"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX1281B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_QAM"));
		}
		else if (pT->InstrumentIsModel(_T("WS8351")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_QAM"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_QAM"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_QAM"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_QAM"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_QAM"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_QAM(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_get_Skew(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("get_Skew"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Skew"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("get_Skew"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Skew"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Skew"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Skew"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Skew"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Skew"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Skew"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218x.Skew"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_get_Skew(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218x_put_Skew(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218x), _T("IWX218x"), _T("put_Skew"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218x"), _T("put_Skew"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Skew"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Skew"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Skew"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Skew"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Skew"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Skew"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218x_Skew_RangeCheck(_T("put_Skew"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218x.Skew"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218x_put_Skew(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriver_Initialize(WX218x* pT, BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("Initialize"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("Initialize"), &hr, IN_PARAM(ResourceName), IN_PARAM(IdQuery), IN_PARAM(Reset), IN_PARAM(OptionString), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_Initialize(ResourceName, IdQuery, Reset, OptionString);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriver_Close(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("Close"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("Close"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_Close();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriver_get_DriverOperation(WX218x* pT, IIviDriverOperation** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("get_DriverOperation"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DriverOperation"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("get_DriverOperation"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_get_DriverOperation(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriver_get_Identity(WX218x* pT, IIviDriverIdentity** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("get_Identity"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Identity"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("get_Identity"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_get_Identity(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriver_get_Utility(WX218x* pT, IIviDriverUtility** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("get_Utility"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Utility"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("get_Utility"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_get_Utility(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriver_get_Initialized(WX218x* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriver), _T("IIviDriver"), _T("get_Initialized"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Initialized"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriver"), _T("get_Initialized"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriver_get_Initialized(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_InvalidateAllAttributes(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("InvalidateAllAttributes"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("InvalidateAllAttributes"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_InvalidateAllAttributes();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_ClearInterchangeWarnings(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("ClearInterchangeWarnings"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("ClearInterchangeWarnings"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_ClearInterchangeWarnings();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_GetNextInterchangeWarning(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("GetNextInterchangeWarning"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("GetNextInterchangeWarning"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("GetNextInterchangeWarning"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_GetNextInterchangeWarning(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_ResetInterchangeCheck(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("ResetInterchangeCheck"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("ResetInterchangeCheck"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_ResetInterchangeCheck();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_GetNextCoercionRecord(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("GetNextCoercionRecord"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("GetNextCoercionRecord"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("GetNextCoercionRecord"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_GetNextCoercionRecord(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_LogicalName(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_LogicalName"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LogicalName"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_LogicalName"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_LogicalName(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_IoResourceDescriptor(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_IoResourceDescriptor"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_IoResourceDescriptor"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_IoResourceDescriptor"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_IoResourceDescriptor(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_Cache(WX218x* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_Cache"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Cache"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_Cache"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_Cache(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_Cache(WX218x* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_Cache"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_Cache"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_Cache(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_InterchangeCheck(WX218x* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_InterchangeCheck"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InterchangeCheck"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_InterchangeCheck"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_InterchangeCheck(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_InterchangeCheck(WX218x* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_InterchangeCheck"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_InterchangeCheck"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_InterchangeCheck(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_QueryInstrumentStatus(WX218x* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_QueryInstrumentStatus"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_QueryInstrumentStatus"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_QueryInstrumentStatus"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_QueryInstrumentStatus(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_QueryInstrumentStatus(WX218x* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_QueryInstrumentStatus"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_QueryInstrumentStatus"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_QueryInstrumentStatus(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_RangeCheck(WX218x* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_RangeCheck"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RangeCheck"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_RangeCheck"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_RangeCheck(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_RangeCheck(WX218x* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_RangeCheck"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_RangeCheck"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_RangeCheck(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_RecordCoercions(WX218x* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_RecordCoercions"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RecordCoercions"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_RecordCoercions"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_RecordCoercions(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_RecordCoercions(WX218x* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_RecordCoercions"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_RecordCoercions"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_RecordCoercions(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_Simulate(WX218x* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_Simulate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Simulate"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_Simulate"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_Simulate(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_put_Simulate(WX218x* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("put_Simulate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("put_Simulate"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_put_Simulate(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverOperation_get_DriverSetup(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverOperation), _T("IIviDriverOperation"), _T("get_DriverSetup"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DriverSetup"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverOperation"), _T("get_DriverSetup"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverOperation_get_DriverSetup(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_InstrumentManufacturer(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_InstrumentManufacturer"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InstrumentManufacturer"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_InstrumentManufacturer"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_InstrumentManufacturer(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_InstrumentModel(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_InstrumentModel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InstrumentModel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_InstrumentModel"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_InstrumentModel(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_InstrumentFirmwareRevision(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_InstrumentFirmwareRevision"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InstrumentFirmwareRevision"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_InstrumentFirmwareRevision"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_InstrumentFirmwareRevision(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_Identifier(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_Identifier"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Identifier"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_Identifier"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_Identifier(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_SupportedInstrumentModels(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_SupportedInstrumentModels"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SupportedInstrumentModels"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_SupportedInstrumentModels"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_SupportedInstrumentModels(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_SpecificationMajorVersion(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_SpecificationMajorVersion"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SpecificationMajorVersion"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_SpecificationMajorVersion"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_SpecificationMajorVersion(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_SpecificationMinorVersion(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_SpecificationMinorVersion"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SpecificationMinorVersion"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_SpecificationMinorVersion"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_SpecificationMinorVersion(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverIdentity_get_GroupCapabilities(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverIdentity), _T("IIviDriverIdentity"), _T("get_GroupCapabilities"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_GroupCapabilities"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverIdentity"), _T("get_GroupCapabilities"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverIdentity_get_GroupCapabilities(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviComponentIdentity_get_Description(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviComponentIdentity), _T("IIviComponentIdentity"), _T("get_Description"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Description"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviComponentIdentity"), _T("get_Description"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviComponentIdentity_get_Description(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviComponentIdentity_get_Revision(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviComponentIdentity), _T("IIviComponentIdentity"), _T("get_Revision"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Revision"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviComponentIdentity"), _T("get_Revision"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviComponentIdentity_get_Revision(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviComponentIdentity_get_Vendor(WX218x* pT, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviComponentIdentity), _T("IIviComponentIdentity"), _T("get_Vendor"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Vendor"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviComponentIdentity"), _T("get_Vendor"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviComponentIdentity_get_Vendor(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_Reset(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("Reset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("Reset"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_Reset();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_ResetWithDefaults(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("ResetWithDefaults"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("ResetWithDefaults"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_ResetWithDefaults();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_Disable(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("Disable"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("Disable"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_Disable();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_SelfTest(WX218x* pT, long* TestResult, BSTR* TestMessage)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("SelfTest"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (TestResult == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("SelfTest"), _T("TestResult"));
	if (TestMessage == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("SelfTest"), _T("TestMessage"));
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("SelfTest"), &hr, OUT_PARAM(TestResult), OUT_PARAM(TestMessage), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_SelfTest(TestResult, TestMessage);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_ErrorQuery(WX218x* pT, long* ErrorCode, BSTR* ErrorMessage)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("ErrorQuery"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (ErrorCode == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("ErrorQuery"), _T("ErrorCode"));
	if (ErrorMessage == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("ErrorQuery"), _T("ErrorMessage"));
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("ErrorQuery"), &hr, OUT_PARAM(ErrorCode), OUT_PARAM(ErrorMessage), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_ErrorQuery(ErrorCode, ErrorMessage);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_LockObject(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("LockObject"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("LockObject"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_LockObject();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviDriverUtility_UnlockObject(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviDriverUtility), _T("IIviDriverUtility"), _T("UnlockObject"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviDriverUtility"), _T("UnlockObject"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviDriverUtility_UnlockObject();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_ConfigureRefExtFrequency(WX218x* pT, BSTR Channel, double ExtFreq)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("ConfigureRefExtFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("ConfigureRefExtFrequency"), &hr, IN_PARAM(Channel), IN_PARAM(ExtFreq), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_ConfigureRefExtFrequency(Channel, ExtFreq);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_ConfigureExtFrequency(WX218x* pT, BSTR Channel, WX218xExtFrequencyEnum ExtFrequency)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("ConfigureExtFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("ConfigureExtFrequency"), &hr, IN_PARAM(Channel), IN_PARAM(ExtFrequency), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureExtFrequency"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_ConfigureExtFrequency(Channel, ExtFrequency);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_ConfigureOutputStateAllCh(WX218x* pT, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("ConfigureOutputStateAllCh"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("ConfigureOutputStateAllCh"), &hr, IN_PARAM(State), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOutputStateAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOutputStateAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOutputStateAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOutputStateAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOutputStateAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOutputStateAllCh"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_ConfigureOutputStateAllCh(State);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_ConfigureCoupleAllCh(WX218x* pT, WX218xOutputCoupleEnum Couple)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("ConfigureCoupleAllCh"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("ConfigureCoupleAllCh"), &hr, IN_PARAM(Couple), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureCoupleAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureCoupleAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureCoupleAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureCoupleAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureCoupleAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureCoupleAllCh"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_ConfigureCoupleAllCh(Couple);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_get_Count(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("get_Count"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Count"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("get_Count"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		*val = 2;

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_get_Count(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_get_Name(WX218x* pT, long Index, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("get_Name"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Name"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("get_Name"), &hr, IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_get_Name(Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_get_Couple(WX218x* pT, BSTR Channel, WX218xOutputCoupleEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("get_Couple"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Couple"), _T("val"));
	*val = (WX218xOutputCoupleEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("get_Couple"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Couple"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xOutputCoupleEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xOutputCoupleEnum>(_T("IWX218xChannel.Couple"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xOutputCoupleDC;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_get_Couple(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_put_Couple(WX218x* pT, BSTR Channel, WX218xOutputCoupleEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("put_Couple"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("put_Couple"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Couple"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xOutput_Couple_RangeCheck(_T("put_Couple"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xOutputCoupleEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xOutputCoupleEnum>(_T("IWX218xChannel.Couple"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_put_Couple(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xChannel.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xChannel.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_get_OperationMode(WX218x* pT, BSTR Channel, WX218xOperationModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("get_OperationMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_OperationMode"), _T("val"));
	*val = (WX218xOperationModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("get_OperationMode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xOperationModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xOperationModeEnum>(_T("IWX218xChannel.OperationMode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xOperationModeContinuous;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_get_OperationMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_put_OperationMode(WX218x* pT, BSTR Channel, WX218xOperationModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("put_OperationMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("put_OperationMode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xOperationModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xOperationModeEnum>(_T("IWX218xChannel.OperationMode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_put_OperationMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_get_OutputMode(WX218x* pT, WX218xOutputModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("get_OutputMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_OutputMode"), _T("val"));
	*val = (WX218xOutputModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("get_OutputMode"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xOutputModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xOutputModeEnum>(_T("IWX218xChannel.OutputMode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xOutputModeFunction;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_get_OutputMode(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_put_OutputMode(WX218x* pT, WX218xOutputModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("put_OutputMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("put_OutputMode"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xChannel_OutputMode_RangeCheck(_T("put_OutputMode"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xOutputModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xOutputModeEnum>(_T("IWX218xChannel.OutputMode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_put_OutputMode(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_get_ReferenceClockSource(WX218x* pT, WX218xReferenceClockSourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("get_ReferenceClockSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ReferenceClockSource"), _T("val"));
	*val = (WX218xReferenceClockSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("get_ReferenceClockSource"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xReferenceClockSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xReferenceClockSourceEnum>(_T("IWX218xChannel.ReferenceClockSource"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xReferenceClockSourceInternal;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_get_ReferenceClockSource(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_put_ReferenceClockSource(WX218x* pT, WX218xReferenceClockSourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("put_ReferenceClockSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("put_ReferenceClockSource"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xReferenceClockSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xReferenceClockSourceEnum>(_T("IWX218xChannel.ReferenceClockSource"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_put_ReferenceClockSource(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_get_RefExtFrequency(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("get_RefExtFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RefExtFrequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("get_RefExtFrequency"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_RefExtFrequency"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xChannel.RefExtFrequency"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+007;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_get_RefExtFrequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_put_RefExtFrequency(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("put_RefExtFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("put_RefExtFrequency"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_RefExtFrequency"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xOutput_RefExtFrequency_RangeCheck(_T("put_RefExtFrequency"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xChannel.RefExtFrequency"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_put_RefExtFrequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_get_Sync(WX218x* pT, IWX218xChannelSync** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("get_Sync"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Sync"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("get_Sync"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_get_Sync(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_get_ExtFrequency(WX218x* pT, BSTR Channel, WX218xExtFrequencyEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("get_ExtFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ExtFrequency"), _T("val"));
	*val = (WX218xExtFrequencyEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("get_ExtFrequency"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ExtFrequency"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_get_ExtFrequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannel_put_ExtFrequency(WX218x* pT, BSTR Channel, WX218xExtFrequencyEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannel), _T("IWX218xChannel"), _T("put_ExtFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannel"), _T("put_ExtFrequency"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ExtFrequency"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ExtFrequency"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannel_put_ExtFrequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_get_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("get_Enabled"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_get_Enabled(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_put_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("put_Enabled"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_put_Enabled(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_get_Impedance(WX218x* pT, BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("get_Impedance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Impedance"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("get_Impedance"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_get_Impedance(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_put_Impedance(WX218x* pT, BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("put_Impedance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("put_Impedance"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_put_Impedance(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_get_OutputMode(WX218x* pT, IviFgenOutputModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("get_OutputMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_OutputMode"), _T("val"));
	*val = (IviFgenOutputModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("get_OutputMode"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_get_OutputMode(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_put_OutputMode(WX218x* pT, IviFgenOutputModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("put_OutputMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("put_OutputMode"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_put_OutputMode(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_get_OperationMode(WX218x* pT, BSTR ChannelName, IviFgenOperationModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("get_OperationMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_OperationMode"), _T("val"));
	*val = (IviFgenOperationModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("get_OperationMode"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_get_OperationMode(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_put_OperationMode(WX218x* pT, BSTR ChannelName, IviFgenOperationModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("put_OperationMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("put_OperationMode"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_put_OperationMode(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_get_ReferenceClockSource(WX218x* pT, IviFgenReferenceClockSourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("get_ReferenceClockSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ReferenceClockSource"), _T("val"));
	*val = (IviFgenReferenceClockSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("get_ReferenceClockSource"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_get_ReferenceClockSource(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_put_ReferenceClockSource(WX218x* pT, IviFgenReferenceClockSourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("put_ReferenceClockSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("put_ReferenceClockSource"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_put_ReferenceClockSource(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_get_Count(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("get_Count"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Count"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("get_Count"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_get_Count(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenOutput_get_Name(WX218x* pT, long Index, BSTR* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenOutput), _T("IIviFgenOutput"), _T("get_Name"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Name"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenOutput"), _T("get_Name"), &hr, IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenOutput_get_Name(Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenTrigger_SendSoftwareTrigger(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenTrigger), _T("IIviFgenTrigger"), _T("SendSoftwareTrigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenTrigger"), _T("SendSoftwareTrigger"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenTrigger_SendSoftwareTrigger();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenTrigger_get_BurstCount(WX218x* pT, BSTR ChannelName, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenTrigger), _T("IIviFgenTrigger"), _T("get_BurstCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_BurstCount"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenTrigger"), _T("get_BurstCount"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenTrigger_get_BurstCount(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenTrigger_put_BurstCount(WX218x* pT, BSTR ChannelName, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenTrigger), _T("IIviFgenTrigger"), _T("put_BurstCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenTrigger"), _T("put_BurstCount"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenTrigger_put_BurstCount(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenTrigger_get_InternalRate(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenTrigger), _T("IIviFgenTrigger"), _T("get_InternalRate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalRate"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenTrigger"), _T("get_InternalRate"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenTrigger_get_InternalRate(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenTrigger_put_InternalRate(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenTrigger), _T("IIviFgenTrigger"), _T("put_InternalRate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenTrigger"), _T("put_InternalRate"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenTrigger_put_InternalRate(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenTrigger_get_Source(WX218x* pT, BSTR ChannelName, IviFgenTriggerSourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenTrigger), _T("IIviFgenTrigger"), _T("get_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Source"), _T("val"));
	*val = (IviFgenTriggerSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenTrigger"), _T("get_Source"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenTrigger_get_Source(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenTrigger_put_Source(WX218x* pT, BSTR ChannelName, IviFgenTriggerSourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenTrigger), _T("IIviFgenTrigger"), _T("put_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenTrigger"), _T("put_Source"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenTrigger_put_Source(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_Configure(WX218x* pT, BSTR ChannelName, IviFgenWaveformEnum Waveform, double Amplitude, double DCOffset, double Frequency, double StartPhase)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("Configure"), &hr, IN_PARAM(ChannelName), IN_PARAM(Waveform), IN_PARAM(Amplitude), IN_PARAM(DCOffset), IN_PARAM(Frequency), IN_PARAM(StartPhase), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_Configure(ChannelName, Waveform, Amplitude, DCOffset, Frequency, StartPhase);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_get_DutyCycleHigh(WX218x* pT, BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("get_DutyCycleHigh"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DutyCycleHigh"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("get_DutyCycleHigh"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_get_DutyCycleHigh(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_put_DutyCycleHigh(WX218x* pT, BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("put_DutyCycleHigh"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("put_DutyCycleHigh"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_put_DutyCycleHigh(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_get_Amplitude(WX218x* pT, BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("get_Amplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Amplitude"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("get_Amplitude"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_get_Amplitude(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_put_Amplitude(WX218x* pT, BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("put_Amplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("put_Amplitude"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_put_Amplitude(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_get_DCOffset(WX218x* pT, BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("get_DCOffset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DCOffset"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("get_DCOffset"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_get_DCOffset(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_put_DCOffset(WX218x* pT, BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("put_DCOffset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("put_DCOffset"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_put_DCOffset(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_get_Frequency(WX218x* pT, BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("get_Frequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Frequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("get_Frequency"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_get_Frequency(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_put_Frequency(WX218x* pT, BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("put_Frequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("put_Frequency"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_put_Frequency(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_get_StartPhase(WX218x* pT, BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("get_StartPhase"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_StartPhase"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("get_StartPhase"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_get_StartPhase(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_put_StartPhase(WX218x* pT, BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("put_StartPhase"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("put_StartPhase"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_put_StartPhase(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_get_Waveform(WX218x* pT, BSTR ChannelName, IviFgenWaveformEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("get_Waveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Waveform"), _T("val"));
	*val = (IviFgenWaveformEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("get_Waveform"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_get_Waveform(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenStandardWaveform_put_Waveform(WX218x* pT, BSTR ChannelName, IviFgenWaveformEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenStandardWaveform), _T("IIviFgenStandardWaveform"), _T("put_Waveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenStandardWaveform"), _T("put_Waveform"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenStandardWaveform_put_Waveform(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrary_ClearMemory(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrary), _T("IIviFgenArbitrary"), _T("ClearMemory"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrary"), _T("ClearMemory"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrary_ClearMemory();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrary_get_Gain(WX218x* pT, BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrary), _T("IIviFgenArbitrary"), _T("get_Gain"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Gain"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrary"), _T("get_Gain"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrary_get_Gain(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrary_put_Gain(WX218x* pT, BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrary), _T("IIviFgenArbitrary"), _T("put_Gain"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrary"), _T("put_Gain"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrary_put_Gain(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrary_get_Offset(WX218x* pT, BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrary), _T("IIviFgenArbitrary"), _T("get_Offset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Offset"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrary"), _T("get_Offset"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrary_get_Offset(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrary_put_Offset(WX218x* pT, BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrary), _T("IIviFgenArbitrary"), _T("put_Offset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrary"), _T("put_Offset"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrary_put_Offset(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrary_get_SampleRate(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrary), _T("IIviFgenArbitrary"), _T("get_SampleRate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SampleRate"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrary"), _T("get_SampleRate"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrary_get_SampleRate(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrary_put_SampleRate(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrary), _T("IIviFgenArbitrary"), _T("put_SampleRate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrary"), _T("put_SampleRate"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrary_put_SampleRate(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrary_get_Sequence(WX218x* pT, IIviFgenArbitrarySequence** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrary), _T("IIviFgenArbitrary"), _T("get_Sequence"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Sequence"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrary"), _T("get_Sequence"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrary_get_Sequence(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrary_get_Waveform(WX218x* pT, IIviFgenArbitraryWaveform** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrary), _T("IIviFgenArbitrary"), _T("get_Waveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Waveform"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrary"), _T("get_Waveform"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrary_get_Waveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrarySequence_Configure(WX218x* pT, BSTR ChannelName, long Handle, double Gain, double Offset)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrarySequence), _T("IIviFgenArbitrarySequence"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrarySequence"), _T("Configure"), &hr, IN_PARAM(ChannelName), IN_PARAM(Handle), IN_PARAM(Gain), IN_PARAM(Offset), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrarySequence_Configure(ChannelName, Handle, Gain, Offset);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrarySequence_Clear(WX218x* pT, long Handle)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrarySequence), _T("IIviFgenArbitrarySequence"), _T("Clear"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrarySequence"), _T("Clear"), &hr, IN_PARAM(Handle), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrarySequence_Clear(Handle);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrarySequence_Create(WX218x* pT, SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrarySequence), _T("IIviFgenArbitrarySequence"), _T("Create"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("Create"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrarySequence"), _T("Create"), &hr, IN_PARAM(*WfmHandle), IN_PARAM(*LoopCount), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrarySequence_Create(WfmHandle, LoopCount, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrarySequence_get_LengthMax(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrarySequence), _T("IIviFgenArbitrarySequence"), _T("get_LengthMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LengthMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrarySequence"), _T("get_LengthMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrarySequence_get_LengthMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrarySequence_get_LengthMin(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrarySequence), _T("IIviFgenArbitrarySequence"), _T("get_LengthMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LengthMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrarySequence"), _T("get_LengthMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrarySequence_get_LengthMin(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrarySequence_get_LoopCountMax(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrarySequence), _T("IIviFgenArbitrarySequence"), _T("get_LoopCountMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LoopCountMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrarySequence"), _T("get_LoopCountMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrarySequence_get_LoopCountMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitrarySequence_get_NumberSequencesMax(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitrarySequence), _T("IIviFgenArbitrarySequence"), _T("get_NumberSequencesMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_NumberSequencesMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitrarySequence"), _T("get_NumberSequencesMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitrarySequence_get_NumberSequencesMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitraryWaveform_Configure(WX218x* pT, BSTR ChannelName, long Handle, double Gain, double Offset)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitraryWaveform), _T("IIviFgenArbitraryWaveform"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitraryWaveform"), _T("Configure"), &hr, IN_PARAM(ChannelName), IN_PARAM(Handle), IN_PARAM(Gain), IN_PARAM(Offset), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitraryWaveform_Configure(ChannelName, Handle, Gain, Offset);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitraryWaveform_Clear(WX218x* pT, long Handle)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitraryWaveform), _T("IIviFgenArbitraryWaveform"), _T("Clear"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitraryWaveform"), _T("Clear"), &hr, IN_PARAM(Handle), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitraryWaveform_Clear(Handle);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitraryWaveform_Create(WX218x* pT, SAFEARRAY** Data, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitraryWaveform), _T("IIviFgenArbitraryWaveform"), _T("Create"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("Create"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitraryWaveform"), _T("Create"), &hr, IN_PARAM(*Data), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitraryWaveform_Create(Data, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitraryWaveform_get_Frequency(WX218x* pT, BSTR ChannelName, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitraryWaveform), _T("IIviFgenArbitraryWaveform"), _T("get_Frequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Frequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitraryWaveform"), _T("get_Frequency"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitraryWaveform_get_Frequency(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitraryWaveform_put_Frequency(WX218x* pT, BSTR ChannelName, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitraryWaveform), _T("IIviFgenArbitraryWaveform"), _T("put_Frequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitraryWaveform"), _T("put_Frequency"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitraryWaveform_put_Frequency(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitraryWaveform_get_NumberWaveformsMax(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitraryWaveform), _T("IIviFgenArbitraryWaveform"), _T("get_NumberWaveformsMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_NumberWaveformsMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitraryWaveform"), _T("get_NumberWaveformsMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitraryWaveform_get_NumberWaveformsMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitraryWaveform_get_Quantum(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitraryWaveform), _T("IIviFgenArbitraryWaveform"), _T("get_Quantum"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Quantum"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitraryWaveform"), _T("get_Quantum"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitraryWaveform_get_Quantum(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitraryWaveform_get_SizeMax(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitraryWaveform), _T("IIviFgenArbitraryWaveform"), _T("get_SizeMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SizeMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitraryWaveform"), _T("get_SizeMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitraryWaveform_get_SizeMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenArbitraryWaveform_get_SizeMin(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenArbitraryWaveform), _T("IIviFgenArbitraryWaveform"), _T("get_SizeMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SizeMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenArbitraryWaveform"), _T("get_SizeMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenArbitraryWaveform_get_SizeMin(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenAM_ConfigureInternal(WX218x* pT, double Depth, IviFgenAMInternalWaveformEnum Waveform, double Frequency)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenAM), _T("IIviFgenAM"), _T("ConfigureInternal"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenAM"), _T("ConfigureInternal"), &hr, IN_PARAM(Depth), IN_PARAM(Waveform), IN_PARAM(Frequency), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenAM_ConfigureInternal(Depth, Waveform, Frequency);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenAM_get_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenAM), _T("IIviFgenAM"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenAM"), _T("get_Enabled"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenAM_get_Enabled(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenAM_put_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenAM), _T("IIviFgenAM"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenAM"), _T("put_Enabled"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenAM_put_Enabled(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenAM_get_Source(WX218x* pT, BSTR ChannelName, IviFgenAMSourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenAM), _T("IIviFgenAM"), _T("get_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Source"), _T("val"));
	*val = (IviFgenAMSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenAM"), _T("get_Source"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenAM_get_Source(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenAM_put_Source(WX218x* pT, BSTR ChannelName, IviFgenAMSourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenAM), _T("IIviFgenAM"), _T("put_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenAM"), _T("put_Source"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenAM_put_Source(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenAM_get_InternalDepth(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenAM), _T("IIviFgenAM"), _T("get_InternalDepth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalDepth"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenAM"), _T("get_InternalDepth"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenAM_get_InternalDepth(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenAM_put_InternalDepth(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenAM), _T("IIviFgenAM"), _T("put_InternalDepth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenAM"), _T("put_InternalDepth"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenAM_put_InternalDepth(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenAM_get_InternalFrequency(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenAM), _T("IIviFgenAM"), _T("get_InternalFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalFrequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenAM"), _T("get_InternalFrequency"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenAM_get_InternalFrequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenAM_put_InternalFrequency(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenAM), _T("IIviFgenAM"), _T("put_InternalFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenAM"), _T("put_InternalFrequency"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenAM_put_InternalFrequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenAM_get_InternalWaveform(WX218x* pT, IviFgenAMInternalWaveformEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenAM), _T("IIviFgenAM"), _T("get_InternalWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalWaveform"), _T("val"));
	*val = (IviFgenAMInternalWaveformEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenAM"), _T("get_InternalWaveform"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenAM_get_InternalWaveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenAM_put_InternalWaveform(WX218x* pT, IviFgenAMInternalWaveformEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenAM), _T("IIviFgenAM"), _T("put_InternalWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenAM"), _T("put_InternalWaveform"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenAM_put_InternalWaveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenFM_ConfigureInternal(WX218x* pT, double Deviation, IviFgenFMInternalWaveformEnum Waveform, double Frequency)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenFM), _T("IIviFgenFM"), _T("ConfigureInternal"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenFM"), _T("ConfigureInternal"), &hr, IN_PARAM(Deviation), IN_PARAM(Waveform), IN_PARAM(Frequency), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenFM_ConfigureInternal(Deviation, Waveform, Frequency);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenFM_get_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenFM), _T("IIviFgenFM"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenFM"), _T("get_Enabled"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenFM_get_Enabled(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenFM_put_Enabled(WX218x* pT, BSTR ChannelName, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenFM), _T("IIviFgenFM"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenFM"), _T("put_Enabled"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenFM_put_Enabled(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenFM_get_Source(WX218x* pT, BSTR ChannelName, IviFgenFMSourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenFM), _T("IIviFgenFM"), _T("get_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Source"), _T("val"));
	*val = (IviFgenFMSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenFM"), _T("get_Source"), &hr, IN_PARAM(ChannelName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenFM_get_Source(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenFM_put_Source(WX218x* pT, BSTR ChannelName, IviFgenFMSourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenFM), _T("IIviFgenFM"), _T("put_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenFM"), _T("put_Source"), &hr, IN_PARAM(ChannelName), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenFM_put_Source(ChannelName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenFM_get_InternalDeviation(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenFM), _T("IIviFgenFM"), _T("get_InternalDeviation"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalDeviation"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenFM"), _T("get_InternalDeviation"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenFM_get_InternalDeviation(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenFM_put_InternalDeviation(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenFM), _T("IIviFgenFM"), _T("put_InternalDeviation"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenFM"), _T("put_InternalDeviation"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenFM_put_InternalDeviation(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenFM_get_InternalFrequency(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenFM), _T("IIviFgenFM"), _T("get_InternalFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalFrequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenFM"), _T("get_InternalFrequency"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenFM_get_InternalFrequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenFM_put_InternalFrequency(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenFM), _T("IIviFgenFM"), _T("put_InternalFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenFM"), _T("put_InternalFrequency"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenFM_put_InternalFrequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenFM_get_InternalWaveform(WX218x* pT, IviFgenFMInternalWaveformEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenFM), _T("IIviFgenFM"), _T("get_InternalWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalWaveform"), _T("val"));
	*val = (IviFgenFMInternalWaveformEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenFM"), _T("get_InternalWaveform"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenFM_get_InternalWaveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgenFM_put_InternalWaveform(WX218x* pT, IviFgenFMInternalWaveformEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgenFM), _T("IIviFgenFM"), _T("put_InternalWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgenFM"), _T("put_InternalWaveform"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgenFM_put_InternalWaveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgen_InitiateGeneration(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgen), _T("IIviFgen"), _T("InitiateGeneration"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgen"), _T("InitiateGeneration"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgen_InitiateGeneration();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgen_AbortGeneration(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgen), _T("IIviFgen"), _T("AbortGeneration"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgen"), _T("AbortGeneration"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgen_AbortGeneration();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgen_get_Output(WX218x* pT, IIviFgenOutput** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgen), _T("IIviFgen"), _T("get_Output"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Output"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgen"), _T("get_Output"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgen_get_Output(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgen_get_Trigger(WX218x* pT, IIviFgenTrigger** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgen), _T("IIviFgen"), _T("get_Trigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Trigger"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgen"), _T("get_Trigger"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgen_get_Trigger(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgen_get_StandardWaveform(WX218x* pT, IIviFgenStandardWaveform** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgen), _T("IIviFgen"), _T("get_StandardWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_StandardWaveform"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgen"), _T("get_StandardWaveform"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgen_get_StandardWaveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgen_get_Arbitrary(WX218x* pT, IIviFgenArbitrary** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgen), _T("IIviFgen"), _T("get_Arbitrary"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Arbitrary"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgen"), _T("get_Arbitrary"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgen_get_Arbitrary(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgen_get_AM(WX218x* pT, IIviFgenAM** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgen), _T("IIviFgen"), _T("get_AM"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AM"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgen"), _T("get_AM"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgen_get_AM(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IIviFgen_get_FM(WX218x* pT, IIviFgenFM** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IIviFgen), _T("IIviFgen"), _T("get_FM"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FM"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IIviFgen"), _T("get_FM"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IIviFgen_get_FM(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAM_ConfigureInternal(WX218x* pT, double Depth, WX218xAMInternalWaveformEnum Waveform, double Frequency)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAM), _T("IWX218xAM"), _T("ConfigureInternal"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAM"), _T("ConfigureInternal"), &hr, IN_PARAM(Depth), IN_PARAM(Waveform), IN_PARAM(Frequency), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAM_ConfigureInternal(Depth, Waveform, Frequency);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAM_ConfigureAMEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAM), _T("IWX218xAM"), _T("ConfigureAMEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAM"), _T("ConfigureAMEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Enabled), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAM_ConfigureAMEnabled(Channel, Enabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAM_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAM), _T("IWX218xAM"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAM"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xAM.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAM_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAM_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAM), _T("IWX218xAM"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAM"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xAM.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAM_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAM_get_InternalDepth(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAM), _T("IWX218xAM"), _T("get_InternalDepth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalDepth"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAM"), _T("get_InternalDepth"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xAM.InternalDepth"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E+001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAM_get_InternalDepth(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAM_put_InternalDepth(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAM), _T("IWX218xAM"), _T("put_InternalDepth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAM"), _T("put_InternalDepth"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xAM_InternalDepth_RangeCheck(_T("put_InternalDepth"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xAM.InternalDepth"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAM_put_InternalDepth(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAM_get_InternalWaveform(WX218x* pT, WX218xAMInternalWaveformEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAM), _T("IWX218xAM"), _T("get_InternalWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalWaveform"), _T("val"));
	*val = (WX218xAMInternalWaveformEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAM"), _T("get_InternalWaveform"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xAMInternalWaveformEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xAMInternalWaveformEnum>(_T("IWX218xAM.InternalWaveform"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xAMInternalWaveformSine;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAM_get_InternalWaveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAM_put_InternalWaveform(WX218x* pT, WX218xAMInternalWaveformEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAM), _T("IWX218xAM"), _T("put_InternalWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAM"), _T("put_InternalWaveform"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xAMInternalWaveformEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xAMInternalWaveformEnum>(_T("IWX218xAM.InternalWaveform"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAM_put_InternalWaveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAM_get_InternalFrequency(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAM), _T("IWX218xAM"), _T("get_InternalFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalFrequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAM"), _T("get_InternalFrequency"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xAM.InternalFrequency"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+003;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAM_get_InternalFrequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAM_put_InternalFrequency(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAM), _T("IWX218xAM"), _T("put_InternalFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAM"), _T("put_InternalFrequency"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xAM_InternalFrequency_RangeCheck(_T("put_InternalFrequency"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xAM.InternalFrequency"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAM_put_InternalFrequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_ConfigureSyncEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("ConfigureSyncEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("ConfigureSyncEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Enabled), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_ConfigureSyncEnabled(Channel, Enabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_ConfigureSyncFunction(WX218x* pT, BSTR Channel, WX218xOutputSyncFunctionEnum Function)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("ConfigureSyncFunction"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("ConfigureSyncFunction"), &hr, IN_PARAM(Channel), IN_PARAM(Function), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_ConfigureSyncFunction(Channel, Function);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_ConfigureSyncPosition(WX218x* pT, BSTR Channel, long Position)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("ConfigureSyncPosition"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("ConfigureSyncPosition"), &hr, IN_PARAM(Channel), IN_PARAM(Position), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_ConfigureSyncPosition(Channel, Position);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_ConfigureSyncSource(WX218x* pT, WX218xOutputSyncSourceEnum Source)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("ConfigureSyncSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("ConfigureSyncSource"), &hr, IN_PARAM(Source), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_ConfigureSyncSource(Source);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_ConfigureSyncWidth(WX218x* pT, BSTR Channel, long Width)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("ConfigureSyncWidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("ConfigureSyncWidth"), &hr, IN_PARAM(Channel), IN_PARAM(Width), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureSyncWidth"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_ConfigureSyncWidth(Channel, Width);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xChannelSync.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xChannelSync.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_get_Function(WX218x* pT, BSTR Channel, WX218xOutputSyncFunctionEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("get_Function"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Function"), _T("val"));
	*val = (WX218xOutputSyncFunctionEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("get_Function"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xOutputSyncFunctionEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xOutputSyncFunctionEnum>(_T("IWX218xChannelSync.Function"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xOutputSyncFunctionPulse;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_get_Function(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_put_Function(WX218x* pT, BSTR Channel, WX218xOutputSyncFunctionEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("put_Function"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("put_Function"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xOutputSyncFunctionEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xOutputSyncFunctionEnum>(_T("IWX218xChannelSync.Function"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_put_Function(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_get_Position(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("get_Position"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Position"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("get_Position"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xChannelSync.Position"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_get_Position(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_put_Position(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("put_Position"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("put_Position"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xChannelSync_Position_RangeCheck(_T("put_Position"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xChannelSync.Position"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_put_Position(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_get_Source(WX218x* pT, WX218xOutputSyncSourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("get_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Source"), _T("val"));
	*val = (WX218xOutputSyncSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("get_Source"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xOutputSyncSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xOutputSyncSourceEnum>(_T("IWX218xChannelSync.Source"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xOutputSyncSourceCH1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_get_Source(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_put_Source(WX218x* pT, WX218xOutputSyncSourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("put_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("put_Source"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xOutputSyncSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xOutputSyncSourceEnum>(_T("IWX218xChannelSync.Source"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_put_Source(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_get_Width(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("get_Width"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Width"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("get_Width"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Width"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xChannelSync.Width"));
		if (!pSimData->GetValue(val))
		{
			*val = 32;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_get_Width(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xChannelSync_put_Width(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xChannelSync), _T("IWX218xChannelSync"), _T("put_Width"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xChannelSync"), _T("put_Width"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Width"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xChannelSync_Width_RangeCheck(_T("put_Width"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xChannelSync.Width"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xChannelSync_put_Width(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_ConfigureRampWaveform(WX218x* pT, BSTR Channel, double Delay, double RiseTime, double FallTime)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("ConfigureRampWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("ConfigureRampWaveform"), &hr, IN_PARAM(Channel), IN_PARAM(Delay), IN_PARAM(RiseTime), IN_PARAM(FallTime), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_ConfigureRampWaveform(Channel, Delay, RiseTime, FallTime);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_SetAmplitudeMax(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("SetAmplitudeMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("SetAmplitudeMax"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_SetAmplitudeMax(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_SetAmplitudeMin(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("SetAmplitudeMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("SetAmplitudeMin"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_SetAmplitudeMin(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_SetDCOffsetMax(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("SetDCOffsetMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("SetDCOffsetMax"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_SetDCOffsetMax(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_SetDCOffsetMin(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("SetDCOffsetMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("SetDCOffsetMin"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_SetDCOffsetMin(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_SetFrequencyMax(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("SetFrequencyMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("SetFrequencyMax"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_SetFrequencyMax(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_SetFrequencyMin(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("SetFrequencyMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("SetFrequencyMin"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_SetFrequencyMin(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_SetPowerMax(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("SetPowerMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("SetPowerMax"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetPowerMax"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetPowerMax"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_SetPowerMax(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_SetPowerMin(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("SetPowerMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("SetPowerMin"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetPowerMin"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetPowerMin"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_SetPowerMin(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_Configure(WX218x* pT, BSTR Channel, WX218xWaveformEnum Waveform, double Amplitude, double DCOffset, double Frequency, double StartPhase)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("Configure"), &hr, IN_PARAM(Channel), IN_PARAM(Waveform), IN_PARAM(Amplitude), IN_PARAM(DCOffset), IN_PARAM(Frequency), IN_PARAM(StartPhase), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_Configure(Channel, Waveform, Amplitude, DCOffset, Frequency, StartPhase);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_ConfigureDCLevel(WX218x* pT, BSTR Channel, double DcLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("ConfigureDCLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("ConfigureDCLevel"), &hr, IN_PARAM(Channel), IN_PARAM(DcLevel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_ConfigureDCLevel(Channel, DcLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_ConfigureDutyCycle(WX218x* pT, BSTR Channel, double DutyCycle)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("ConfigureDutyCycle"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("ConfigureDutyCycle"), &hr, IN_PARAM(Channel), IN_PARAM(DutyCycle), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_ConfigureDutyCycle(Channel, DutyCycle);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_ConfigureExponenent(WX218x* pT, BSTR Channel, long Exponent)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("ConfigureExponenent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("ConfigureExponenent"), &hr, IN_PARAM(Channel), IN_PARAM(Exponent), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_ConfigureExponenent(Channel, Exponent);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_ConfigureGauss(WX218x* pT, BSTR Channel, long Gauss)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("ConfigureGauss"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("ConfigureGauss"), &hr, IN_PARAM(Channel), IN_PARAM(Gauss), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_ConfigureGauss(Channel, Gauss);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_ConfigureHvAmplitude(WX218x* pT, BSTR Channel, double HvAmplitude)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("ConfigureHvAmplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("ConfigureHvAmplitude"), &hr, IN_PARAM(Channel), IN_PARAM(HvAmplitude), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_ConfigureHvAmplitude(Channel, HvAmplitude);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_ConfigurePower(WX218x* pT, BSTR Channel, double Power)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("ConfigurePower"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("ConfigurePower"), &hr, IN_PARAM(Channel), IN_PARAM(Power), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePower"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePower"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_ConfigurePower(Channel, Power);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_ConfigureSincNCycles(WX218x* pT, BSTR Channel, long Cycles)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("ConfigureSincNCycles"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("ConfigureSincNCycles"), &hr, IN_PARAM(Channel), IN_PARAM(Cycles), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_ConfigureSincNCycles(Channel, Cycles);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_ConfigureAmplitudeAllCh(WX218x* pT, double Amplitude)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("ConfigureAmplitudeAllCh"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("ConfigureAmplitudeAllCh"), &hr, IN_PARAM(Amplitude), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureAmplitudeAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureAmplitudeAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureAmplitudeAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureAmplitudeAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureAmplitudeAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureAmplitudeAllCh"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_ConfigureAmplitudeAllCh(Amplitude);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_ConfigureHVAmplAllCh(WX218x* pT, double HVAmplitude)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("ConfigureHVAmplAllCh"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("ConfigureHVAmplAllCh"), &hr, IN_PARAM(HVAmplitude), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureHVAmplAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureHVAmplAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureHVAmplAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureHVAmplAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureHVAmplAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureHVAmplAllCh"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_ConfigureHVAmplAllCh(HVAmplitude);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_ConfigureOffsetAllCh(WX218x* pT, double Offset)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("ConfigureOffsetAllCh"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("ConfigureOffsetAllCh"), &hr, IN_PARAM(Offset), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOffsetAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOffsetAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOffsetAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOffsetAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOffsetAllCh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOffsetAllCh"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_ConfigureOffsetAllCh(Offset);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_Amplitude(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_Amplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Amplitude"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_Amplitude"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.Amplitude"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E-001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_Amplitude(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_Amplitude(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_Amplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_Amplitude"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xStandardWaveform_Amplitude_RangeCheck(_T("put_Amplitude"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.Amplitude"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_Amplitude(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_DcLevel(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_DcLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DcLevel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_DcLevel"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.DcLevel"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_DcLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_DcLevel(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_DcLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_DcLevel"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->DcLevel_RangeCheck(_T("put_DcLevel"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.DcLevel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_DcLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_DCOffset(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_DCOffset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DCOffset"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_DCOffset"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.DCOffset"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_DCOffset(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_DCOffset(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_DCOffset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_DCOffset"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->DCOffset_RangeCheck(_T("put_DCOffset"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.DCOffset"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_DCOffset(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_DutyCycleHigh(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_DutyCycleHigh"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DutyCycleHigh"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_DutyCycleHigh"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.DutyCycleHigh"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E+001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_DutyCycleHigh(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_DutyCycleHigh(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_DutyCycleHigh"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_DutyCycleHigh"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->DutyCycleHigh_RangeCheck(_T("put_DutyCycleHigh"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.DutyCycleHigh"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_DutyCycleHigh(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_ExpExponent(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_ExpExponent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ExpExponent"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_ExpExponent"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xStandardWaveform.ExpExponent"));
		if (!pSimData->GetValue(val))
		{
			*val = -10;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_ExpExponent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_ExpExponent(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_ExpExponent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_ExpExponent"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->ExpExponent_RangeCheck(_T("put_ExpExponent"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xStandardWaveform.ExpExponent"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_ExpExponent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_Frequency(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_Frequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Frequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_Frequency"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.Frequency"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+007;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_Frequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_Frequency(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_Frequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_Frequency"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->Frequency_RangeCheck(_T("put_Frequency"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.Frequency"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_Frequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_GaussExponent(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_GaussExponent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_GaussExponent"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_GaussExponent"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xStandardWaveform.GaussExponent"));
		if (!pSimData->GetValue(val))
		{
			*val = 10;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_GaussExponent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_GaussExponent(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_GaussExponent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_GaussExponent"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->GaussExponent_RangeCheck(_T("put_GaussExponent"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xStandardWaveform.GaussExponent"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_GaussExponent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_Power(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_Power"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Power"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_Power"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Power"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Power"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.Power"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.000000E+000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_Power(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_Power(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_Power"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_Power"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Power"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Power"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xStandardWaveform_Power_RangeCheck(_T("put_Power"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.Power"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_Power(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_RampDelay(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_RampDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RampDelay"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_RampDelay"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.RampDelay"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_RampDelay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_RampDelay(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_RampDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_RampDelay"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->RampDelay_RangeCheck(_T("put_RampDelay"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.RampDelay"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_RampDelay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_RampFallTime(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_RampFallTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RampFallTime"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_RampFallTime"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.RampFallTime"));
		if (!pSimData->GetValue(val))
		{
			*val = 3.000000E+001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_RampFallTime(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_RampFallTime(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_RampFallTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_RampFallTime"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->RampDelay_RangeCheck(_T("put_RampFallTime"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.RampFallTime"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_RampFallTime(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_RampRiseTime(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_RampRiseTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RampRiseTime"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_RampRiseTime"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.RampRiseTime"));
		if (!pSimData->GetValue(val))
		{
			*val = 6.000000E+001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_RampRiseTime(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_RampRiseTime(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_RampRiseTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_RampRiseTime"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->RampDelay_RangeCheck(_T("put_RampRiseTime"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.RampRiseTime"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_RampRiseTime(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_SincNCycle(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_SincNCycle"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SincNCycle"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_SincNCycle"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xStandardWaveform.SincNCycle"));
		if (!pSimData->GetValue(val))
		{
			*val = 10;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_SincNCycle(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_SincNCycle(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_SincNCycle"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_SincNCycle"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->SincNCycle_RangeCheck(_T("put_SincNCycle"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xStandardWaveform.SincNCycle"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_SincNCycle(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_StartPhase(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_StartPhase"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_StartPhase"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_StartPhase"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.StartPhase"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_StartPhase(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_StartPhase(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_StartPhase"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_StartPhase"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->StartPhase_RangeCheck(_T("put_StartPhase"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.StartPhase"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_StartPhase(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_HvAmplitude(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_HvAmplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_HvAmplitude"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_HvAmplitude"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HvAmplitude"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HvAmplitude"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HvAmplitude"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.HvAmplitude"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E-001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_HvAmplitude(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_HvAmplitude(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_HvAmplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_HvAmplitude"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HvAmplitude"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HvAmplitude"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HvAmplitude"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xStandardWaveform_HvAmplitude_RangeCheck(_T("put_HvAmplitude"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xStandardWaveform.HvAmplitude"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_HvAmplitude(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_get_Waveform(WX218x* pT, BSTR Channel, WX218xWaveformEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("get_Waveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Waveform"), _T("val"));
	*val = (WX218xWaveformEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("get_Waveform"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xWaveformEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xWaveformEnum>(_T("IWX218xStandardWaveform.Waveform"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xWaveformSine;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_get_Waveform(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStandardWaveform_put_Waveform(WX218x* pT, BSTR Channel, WX218xWaveformEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStandardWaveform), _T("IWX218xStandardWaveform"), _T("put_Waveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStandardWaveform"), _T("put_Waveform"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xWaveformEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xWaveformEnum>(_T("IWX218xStandardWaveform.Waveform"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStandardWaveform_put_Waveform(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_ClearMemory(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("ClearMemory"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("ClearMemory"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_ClearMemory();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_SetSampleRateMax(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("SetSampleRateMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("SetSampleRateMax"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_SetSampleRateMax();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_SetSampleRateMin(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("SetSampleRateMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("SetSampleRateMin"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_SetSampleRateMin();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_ConfigureClockDivider(WX218x* pT, BSTR Channel, long ClockDivider)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("ConfigureClockDivider"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("ConfigureClockDivider"), &hr, IN_PARAM(Channel), IN_PARAM(ClockDivider), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureClockDivider"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_ConfigureClockDivider(Channel, ClockDivider);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_ConfigureSampleRateSource(WX218x* pT, BSTR Channel, WX218xSampleRateSourceEnum SampleRateSource)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("ConfigureSampleRateSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("ConfigureSampleRateSource"), &hr, IN_PARAM(Channel), IN_PARAM(SampleRateSource), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_ConfigureSampleRateSource(Channel, SampleRateSource);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_ConfigureArbSource(WX218x* pT, BSTR Channel, WX218xArbitrarySourceEnum Source)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("ConfigureArbSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("ConfigureArbSource"), &hr, IN_PARAM(Channel), IN_PARAM(Source), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_ConfigureArbSource(Channel, Source);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_ConfigureArbTiming(WX218x* pT, BSTR Channel, WX218xArbitraryTimingEnum Timing)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("ConfigureArbTiming"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("ConfigureArbTiming"), &hr, IN_PARAM(Channel), IN_PARAM(Timing), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_ConfigureArbTiming(Channel, Timing);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_ConfigureFreqRastDivider(WX218x* pT, BSTR Channel, WX218xFreqDividerEnum Divider)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("ConfigureFreqRastDivider"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("ConfigureFreqRastDivider"), &hr, IN_PARAM(Channel), IN_PARAM(Divider), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFreqRastDivider"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_ConfigureFreqRastDivider(Channel, Divider);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_ConfigureArbGain(WX218x* pT, BSTR Channel, double Gain)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("ConfigureArbGain"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("ConfigureArbGain"), &hr, IN_PARAM(Channel), IN_PARAM(Gain), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_ConfigureArbGain(Channel, Gain);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_ConfigureArbOffset(WX218x* pT, BSTR Channel, double Offset)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("ConfigureArbOffset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("ConfigureArbOffset"), &hr, IN_PARAM(Channel), IN_PARAM(Offset), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_ConfigureArbOffset(Channel, Offset);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_ConfigureArbSampleRate(WX218x* pT, double SampleRate)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("ConfigureArbSampleRate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("ConfigureArbSampleRate"), &hr, IN_PARAM(SampleRate), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_ConfigureArbSampleRate(SampleRate);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_get_ClockDivider(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("get_ClockDivider"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ClockDivider"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("get_ClockDivider"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ClockDivider"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitrary.ClockDivider"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_get_ClockDivider(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_put_ClockDivider(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("put_ClockDivider"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("put_ClockDivider"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ClockDivider"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xArbitrary_ClockDivider_RangeCheck(_T("put_ClockDivider"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitrary.ClockDivider"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_put_ClockDivider(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_get_Gain(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("get_Gain"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Gain"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("get_Gain"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xArbitrary.Gain"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E-001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_get_Gain(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_put_Gain(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("put_Gain"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("put_Gain"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xStandardWaveform_Amplitude_RangeCheck(_T("put_Gain"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xArbitrary.Gain"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_put_Gain(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_get_Offset(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("get_Offset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Offset"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("get_Offset"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xArbitrary.Offset"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_get_Offset(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_put_Offset(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("put_Offset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("put_Offset"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->DCOffset_RangeCheck(_T("put_Offset"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xArbitrary.Offset"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_put_Offset(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_get_SampleRate(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("get_SampleRate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SampleRate"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("get_SampleRate"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xArbitrary.SampleRate"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+009;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_get_SampleRate(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_put_SampleRate(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("put_SampleRate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("put_SampleRate"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xArbitrary_SampleRate_RangeCheck(_T("put_SampleRate"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xArbitrary.SampleRate"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_put_SampleRate(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_get_SampleRateSource(WX218x* pT, BSTR Channel, WX218xSampleRateSourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("get_SampleRateSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SampleRateSource"), _T("val"));
	*val = (WX218xSampleRateSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("get_SampleRateSource"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSampleRateSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSampleRateSourceEnum>(_T("IWX218xArbitrary.SampleRateSource"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xSampleRateSourceInternal;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_get_SampleRateSource(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_put_SampleRateSource(WX218x* pT, BSTR Channel, WX218xSampleRateSourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("put_SampleRateSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("put_SampleRateSource"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSampleRateSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSampleRateSourceEnum>(_T("IWX218xArbitrary.SampleRateSource"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_put_SampleRateSource(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_get_Source(WX218x* pT, BSTR Channel, WX218xArbitrarySourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("get_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Source"), _T("val"));
	*val = (WX218xArbitrarySourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("get_Source"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Source"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xArbitrarySourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xArbitrarySourceEnum>(_T("IWX218xArbitrary.Source"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xArbitrarySourceBus;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_get_Source(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_put_Source(WX218x* pT, BSTR Channel, WX218xArbitrarySourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("put_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("put_Source"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Source"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xArbitrarySourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xArbitrarySourceEnum>(_T("IWX218xArbitrary.Source"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_put_Source(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_get_Timing(WX218x* pT, BSTR Channel, WX218xArbitraryTimingEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("get_Timing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Timing"), _T("val"));
	*val = (WX218xArbitraryTimingEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("get_Timing"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xArbitraryTimingEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xArbitraryTimingEnum>(_T("IWX218xArbitrary.Timing"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xArbitraryTimingCoherent;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_get_Timing(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_put_Timing(WX218x* pT, BSTR Channel, WX218xArbitraryTimingEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("put_Timing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("put_Timing"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xArbitraryTimingEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xArbitraryTimingEnum>(_T("IWX218xArbitrary.Timing"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_put_Timing(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_get_Waveform(WX218x* pT, IWX218xArbitraryWaveform** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("get_Waveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Waveform"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("get_Waveform"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_get_Waveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_get_Sequence(WX218x* pT, IWX218xArbitrarySequence** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("get_Sequence"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Sequence"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("get_Sequence"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Sequence"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_get_Sequence(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_get_FreqRastDivider(WX218x* pT, BSTR Channel, WX218xFreqDividerEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("get_FreqRastDivider"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FreqRastDivider"), _T("val"));
	*val = (WX218xFreqDividerEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("get_FreqRastDivider"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FreqRastDivider"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_get_FreqRastDivider(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrary_put_FreqRastDivider(WX218x* pT, BSTR Channel, WX218xFreqDividerEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrary), _T("IWX218xArbitrary"), _T("put_FreqRastDivider"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrary"), _T("put_FreqRastDivider"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FreqRastDivider"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FreqRastDivider"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrary_put_FreqRastDivider(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_Clear(WX218x* pT, long Handle)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("Clear"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("Clear"), &hr, IN_PARAM(Handle), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_Clear(Handle);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_Configure(WX218x* pT, BSTR Channel, long Handle, double Gain, double Offset)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("Configure"), &hr, IN_PARAM(Channel), IN_PARAM(Handle), IN_PARAM(Gain), IN_PARAM(Offset), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_Configure(Channel, Handle, Gain, Offset);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_Create(WX218x* pT, SAFEARRAY** Data, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("Create"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("Create"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("Create"), &hr, IN_PARAM(*Data), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_Create(Data, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_LoadArbWfmFromFile(WX218x* pT, BSTR Channel, BSTR FileName, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("LoadArbWfmFromFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadArbWfmFromFile"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("LoadArbWfmFromFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_LoadArbWfmFromFile(Channel, FileName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_CreateCustom(WX218x* pT, SAFEARRAY** Data, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("CreateCustom"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("CreateCustom"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("CreateCustom"), &hr, IN_PARAM(*Data), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_CreateCustom(Data, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_LoadArbWfmFromFileAdv(WX218x* pT, BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("LoadArbWfmFromFileAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (Handle1 == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadArbWfmFromFileAdv"), _T("Handle1"));
	if (Handle2 == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadArbWfmFromFileAdv"), _T("Handle2"));
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("LoadArbWfmFromFileAdv"), &hr, IN_PARAM(Channel), IN_PARAM(FileName1), IN_PARAM(FileName2), OUT_PARAM(Handle1), OUT_PARAM(Handle2), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadArbWfmFromFileAdv"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_LoadArbWfmFromFileAdv(Channel, FileName1, FileName2, Handle1, Handle2);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_CreateCustomAdv(WX218x* pT, SAFEARRAY** Data1, SAFEARRAY** Data2, long* Handle1, long* Handle2)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("CreateCustomAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (Handle1 == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("CreateCustomAdv"), _T("Handle1"));
	if (Handle2 == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("CreateCustomAdv"), _T("Handle2"));
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("CreateCustomAdv"), &hr, IN_PARAM(*Data1), IN_PARAM(*Data2), OUT_PARAM(Handle1), OUT_PARAM(Handle2), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateCustomAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateCustomAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateCustomAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateCustomAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateCustomAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateCustomAdv"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_CreateCustomAdv(Data1, Data2, Handle1, Handle2);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_SetCoupleActiveSegment(WX218x* pT, long SegNum1, long SegNum2)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("SetCoupleActiveSegment"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("SetCoupleActiveSegment"), &hr, IN_PARAM(SegNum1), IN_PARAM(SegNum2), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSegment"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSegment"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSegment"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSegment"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSegment"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSegment"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_SetCoupleActiveSegment(SegNum1, SegNum2);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_SetActiveSegment(WX218x* pT, BSTR Channel, long SegNum)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("SetActiveSegment"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("SetActiveSegment"), &hr, IN_PARAM(Channel), IN_PARAM(SegNum), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_SetActiveSegment(Channel, SegNum);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_ConfigureArbWaveTraceMode(WX218x* pT, WX218xTraceModeEnum TraceMode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("ConfigureArbWaveTraceMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("ConfigureArbWaveTraceMode"), &hr, IN_PARAM(TraceMode), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureArbWaveTraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureArbWaveTraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureArbWaveTraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureArbWaveTraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureArbWaveTraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureArbWaveTraceMode"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_ConfigureArbWaveTraceMode(TraceMode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFile(WX218x* pT, BSTR Channel, BSTR FileName, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("LoadBinaryArbWfmFromFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadBinaryArbWfmFromFile"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("LoadBinaryArbWfmFromFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFile(Channel, FileName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFileAdv(WX218x* pT, BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("LoadBinaryArbWfmFromFileAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (Handle1 == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadBinaryArbWfmFromFileAdv"), _T("Handle1"));
	if (Handle2 == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadBinaryArbWfmFromFileAdv"), _T("Handle2"));
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("LoadBinaryArbWfmFromFileAdv"), &hr, IN_PARAM(Channel), IN_PARAM(FileName1), IN_PARAM(FileName2), OUT_PARAM(Handle1), OUT_PARAM(Handle2), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadBinaryArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadBinaryArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadBinaryArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadBinaryArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadBinaryArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadBinaryArbWfmFromFileAdv"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFileAdv(Channel, FileName1, FileName2, Handle1, Handle2);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFile(WX218x* pT, BSTR Channel, BSTR FileName, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("LoadAsciiArbWfmFromFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadAsciiArbWfmFromFile"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("LoadAsciiArbWfmFromFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFile(Channel, FileName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFileAdv(WX218x* pT, BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("LoadAsciiArbWfmFromFileAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (Handle1 == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadAsciiArbWfmFromFileAdv"), _T("Handle1"));
	if (Handle2 == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadAsciiArbWfmFromFileAdv"), _T("Handle2"));
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("LoadAsciiArbWfmFromFileAdv"), &hr, IN_PARAM(Channel), IN_PARAM(FileName1), IN_PARAM(FileName2), OUT_PARAM(Handle1), OUT_PARAM(Handle2), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadAsciiArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadAsciiArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadAsciiArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadAsciiArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadAsciiArbWfmFromFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadAsciiArbWfmFromFileAdv"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFileAdv(Channel, FileName1, FileName2, Handle1, Handle2);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_ConfigureDownloadRecord(WX218x* pT, WX218xArbDownloadRecordEnum DownloadRecord)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("ConfigureDownloadRecord"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("ConfigureDownloadRecord"), &hr, IN_PARAM(DownloadRecord), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDownloadRecord"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_ConfigureDownloadRecord(DownloadRecord);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_LoadCSVFile(WX218x* pT, BSTR Channel, BSTR FileName, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("LoadCSVFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadCSVFile"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("LoadCSVFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_LoadCSVFile(Channel, FileName, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_LoadCSVFileAdv(WX218x* pT, BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("LoadCSVFileAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (Handle1 == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadCSVFileAdv"), _T("Handle1"));
	if (Handle2 == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("LoadCSVFileAdv"), _T("Handle2"));
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("LoadCSVFileAdv"), &hr, IN_PARAM(Channel), IN_PARAM(FileName1), IN_PARAM(FileName2), OUT_PARAM(Handle1), OUT_PARAM(Handle2), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadCSVFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadCSVFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadCSVFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadCSVFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadCSVFileAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadCSVFileAdv"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_LoadCSVFileAdv(Channel, FileName1, FileName2, Handle1, Handle2);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_get_NumberWaveformsMax(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("get_NumberWaveformsMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_NumberWaveformsMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("get_NumberWaveformsMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_get_NumberWaveformsMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_get_Quantum(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("get_Quantum"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Quantum"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("get_Quantum"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_get_Quantum(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_get_SizeMax(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("get_SizeMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SizeMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("get_SizeMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_get_SizeMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_get_SizeMin(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("get_SizeMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SizeMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("get_SizeMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_get_SizeMin(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_get_TraceMode(WX218x* pT, WX218xTraceModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("get_TraceMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TraceMode"), _T("val"));
	*val = (WX218xTraceModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("get_TraceMode"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TraceMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTraceModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTraceModeEnum>(_T("IWX218xArbitraryWaveform.TraceMode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xTraceModeDuplicate;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_get_TraceMode(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_put_TraceMode(WX218x* pT, WX218xTraceModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("put_TraceMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("put_TraceMode"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TraceMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TraceMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTraceModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTraceModeEnum>(_T("IWX218xArbitraryWaveform.TraceMode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_put_TraceMode(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_get_FastDownload(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("get_FastDownload"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FastDownload"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("get_FastDownload"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitraryWaveform.FastDownload"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_get_FastDownload(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_put_FastDownload(WX218x* pT, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("put_FastDownload"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("put_FastDownload"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xArbitraryWaveform_FastDownload_RangeCheck(_T("put_FastDownload"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitraryWaveform.FastDownload"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_put_FastDownload(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_get_DownloadRecord(WX218x* pT, WX218xArbDownloadRecordEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("get_DownloadRecord"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DownloadRecord"), _T("val"));
	*val = (WX218xArbDownloadRecordEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("get_DownloadRecord"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DownloadRecord"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xArbDownloadRecordEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xArbDownloadRecordEnum>(_T("IWX218xArbitraryWaveform.DownloadRecord"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xArbDownloadRecordDisable;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_get_DownloadRecord(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitraryWaveform_put_DownloadRecord(WX218x* pT, WX218xArbDownloadRecordEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitraryWaveform), _T("IWX218xArbitraryWaveform"), _T("put_DownloadRecord"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitraryWaveform"), _T("put_DownloadRecord"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DownloadRecord"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DownloadRecord"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xArbDownloadRecordEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xArbDownloadRecordEnum>(_T("IWX218xArbitraryWaveform.DownloadRecord"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitraryWaveform_put_DownloadRecord(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_Clear(WX218x* pT, long Handle)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("Clear"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("Clear"), &hr, IN_PARAM(Handle), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("Clear"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_Clear(Handle);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_Configure(WX218x* pT, BSTR Channel, long Handle, double Gain, double Offset)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("Configure"), &hr, IN_PARAM(Channel), IN_PARAM(Handle), IN_PARAM(Gain), IN_PARAM(Offset), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("Configure"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_Configure(Channel, Handle, Gain, Offset);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_Create(WX218x* pT, SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("Create"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("Create"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("Create"), &hr, IN_PARAM(*WfmHandle), IN_PARAM(*LoopCount), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("Create"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_Create(WfmHandle, LoopCount, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_CreateSequenceAdv(WX218x* pT, SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("CreateSequenceAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("CreateSequenceAdv"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("CreateSequenceAdv"), &hr, IN_PARAM(*WfmHandle), IN_PARAM(*LoopCount), IN_PARAM(*JumpFlag), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateSequenceAdv"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_CreateSequenceAdv(WfmHandle, LoopCount, JumpFlag, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_SetCoupleActiveSequence(WX218x* pT, long SeqNum1, long SeqNum2)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("SetCoupleActiveSequence"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("SetCoupleActiveSequence"), &hr, IN_PARAM(SeqNum1), IN_PARAM(SeqNum2), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSequence"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSequence"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSequence"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSequence"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSequence"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetCoupleActiveSequence"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_SetCoupleActiveSequence(SeqNum1, SeqNum2);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_SetActiveSequence(WX218x* pT, BSTR Channel, long SeqNum)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("SetActiveSequence"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("SetActiveSequence"), &hr, IN_PARAM(Channel), IN_PARAM(SeqNum), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("SetActiveSequence"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_SetActiveSequence(Channel, SeqNum);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_CreateSequenceAdv1(WX218x* pT, SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("CreateSequenceAdv1"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("CreateSequenceAdv1"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("CreateSequenceAdv1"), &hr, IN_PARAM(*WfmHandle), IN_PARAM(*LoopCount), IN_PARAM(*JumpFlag), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateSequenceAdv1"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_CreateSequenceAdv1(WfmHandle, LoopCount, JumpFlag, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureAdvanceMode(WX218x* pT, BSTR Channel, WX218xSequenceAdvanceModeEnum AdvanceMode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("ConfigureAdvanceMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("ConfigureAdvanceMode"), &hr, IN_PARAM(Channel), IN_PARAM(AdvanceMode), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureAdvanceMode"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_ConfigureAdvanceMode(Channel, AdvanceMode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureSeqJumpEvent(WX218x* pT, BSTR Channel, WX218xSequenceJumpEventEnum JumpEvent)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("ConfigureSeqJumpEvent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("ConfigureSeqJumpEvent"), &hr, IN_PARAM(Channel), IN_PARAM(JumpEvent), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureSeqJumpEvent"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_ConfigureSeqJumpEvent(Channel, JumpEvent);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureSeqPrestep(WX218x* pT, BSTR Channel, WX218xSequencePrestepEnum Prestep)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("ConfigureSeqPrestep"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("ConfigureSeqPrestep"), &hr, IN_PARAM(Channel), IN_PARAM(Prestep), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureSeqPrestep"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_ConfigureSeqPrestep(Channel, Prestep);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureSeqSource(WX218x* pT, BSTR Channel, WX218xSequenceSourceEnum Source)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("ConfigureSeqSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("ConfigureSeqSource"), &hr, IN_PARAM(Channel), IN_PARAM(Source), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureSeqSource"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_ConfigureSeqSource(Channel, Source);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureSeqSyncLock(WX218x* pT, BSTR Channel, long SyncLock)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("ConfigureSeqSyncLock"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("ConfigureSeqSyncLock"), &hr, IN_PARAM(Channel), IN_PARAM(SyncLock), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureSeqSyncLock"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_ConfigureSeqSyncLock(Channel, SyncLock);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureSeqTiming(WX218x* pT, BSTR Channel, WX218xSequenceTimingEnum Timing)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("ConfigureSeqTiming"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("ConfigureSeqTiming"), &hr, IN_PARAM(Channel), IN_PARAM(Timing), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureSeqTiming"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_ConfigureSeqTiming(Channel, Timing);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_ConfigureOnceCount(WX218x* pT, BSTR Channel, long Count)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("ConfigureOnceCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("ConfigureOnceCount"), &hr, IN_PARAM(Channel), IN_PARAM(Count), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOnceCount"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_ConfigureOnceCount(Channel, Count);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_AdvanceMode(WX218x* pT, BSTR Channel, WX218xSequenceAdvanceModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_AdvanceMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AdvanceMode"), _T("val"));
	*val = (WX218xSequenceAdvanceModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_AdvanceMode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_AdvanceMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSequenceAdvanceModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSequenceAdvanceModeEnum>(_T("IWX218xArbitrarySequence.AdvanceMode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xSequenceAdvanceModeAuto;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_AdvanceMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_put_AdvanceMode(WX218x* pT, BSTR Channel, WX218xSequenceAdvanceModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("put_AdvanceMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("put_AdvanceMode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_AdvanceMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSequenceAdvanceModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSequenceAdvanceModeEnum>(_T("IWX218xArbitrarySequence.AdvanceMode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_put_AdvanceMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_JumpEvent(WX218x* pT, BSTR Channel, WX218xSequenceJumpEventEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_JumpEvent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_JumpEvent"), _T("val"));
	*val = (WX218xSequenceJumpEventEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_JumpEvent"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_JumpEvent"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSequenceJumpEventEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSequenceJumpEventEnum>(_T("IWX218xArbitrarySequence.JumpEvent"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xSequenceJumpEventBus;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_JumpEvent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_put_JumpEvent(WX218x* pT, BSTR Channel, WX218xSequenceJumpEventEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("put_JumpEvent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("put_JumpEvent"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_JumpEvent"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSequenceJumpEventEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSequenceJumpEventEnum>(_T("IWX218xArbitrarySequence.JumpEvent"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_put_JumpEvent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_LengthMax(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_LengthMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LengthMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_LengthMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LengthMax"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_LengthMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_LengthMin(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_LengthMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LengthMin"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_LengthMin"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LengthMin"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_LengthMin(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_LoopCountMax(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_LoopCountMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LoopCountMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_LoopCountMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LoopCountMax"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_LoopCountMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_NumberSequenceMax(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_NumberSequenceMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_NumberSequenceMax"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_NumberSequenceMax"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_NumberSequenceMax"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_NumberSequenceMax(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_Source(WX218x* pT, BSTR Channel, WX218xSequenceSourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Source"), _T("val"));
	*val = (WX218xSequenceSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_Source"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Source"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSequenceSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSequenceSourceEnum>(_T("IWX218xArbitrarySequence.Source"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xSequenceSourceBus;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_Source(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_put_Source(WX218x* pT, BSTR Channel, WX218xSequenceSourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("put_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("put_Source"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Source"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSequenceSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSequenceSourceEnum>(_T("IWX218xArbitrarySequence.Source"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_put_Source(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_SyncLock(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_SyncLock"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SyncLock"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_SyncLock"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_SyncLock"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_SyncLock"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitrarySequence.SyncLock"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_SyncLock(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_put_SyncLock(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("put_SyncLock"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("put_SyncLock"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_SyncLock"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_SyncLock"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xArbitrarySequence_SyncLock_RangeCheck(_T("put_SyncLock"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitrarySequence.SyncLock"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_put_SyncLock(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_Timing(WX218x* pT, BSTR Channel, WX218xSequenceTimingEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_Timing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Timing"), _T("val"));
	*val = (WX218xSequenceTimingEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_Timing"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Timing"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSequenceTimingEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSequenceTimingEnum>(_T("IWX218xArbitrarySequence.Timing"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xSequenceTimingCoherent;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_Timing(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_put_Timing(WX218x* pT, BSTR Channel, WX218xSequenceTimingEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("put_Timing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("put_Timing"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Timing"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSequenceTimingEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSequenceTimingEnum>(_T("IWX218xArbitrarySequence.Timing"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_put_Timing(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_AdvanceSequence(WX218x* pT, IWX218xArbitrarySequenceAdvanceSequence** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_AdvanceSequence"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AdvanceSequence"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_AdvanceSequence"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_AdvanceSequence"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_AdvanceSequence(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_QuickSequence(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_QuickSequence"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_QuickSequence"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_QuickSequence"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_QuickSequence"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_QuickSequence(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_put_QuickSequence(WX218x* pT, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("put_QuickSequence"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("put_QuickSequence"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_QuickSequence"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xArbitrarySequence_QuickSequence_RangeCheck(_T("put_QuickSequence"), val);
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_put_QuickSequence(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_Prestep(WX218x* pT, BSTR Channel, WX218xSequencePrestepEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_Prestep"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Prestep"), _T("val"));
	*val = (WX218xSequencePrestepEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_Prestep"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Prestep"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Prestep"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSequencePrestepEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSequencePrestepEnum>(_T("IWX218xArbitrarySequence.Prestep"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xSequencePrestepWave;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_Prestep(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_put_Prestep(WX218x* pT, BSTR Channel, WX218xSequencePrestepEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("put_Prestep"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("put_Prestep"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Prestep"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Prestep"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSequencePrestepEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSequencePrestepEnum>(_T("IWX218xArbitrarySequence.Prestep"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_put_Prestep(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_get_OnceCount(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("get_OnceCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_OnceCount"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("get_OnceCount"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_OnceCount"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitrarySequence.OnceCount"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_get_OnceCount(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequence_put_OnceCount(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequence), _T("IWX218xArbitrarySequence"), _T("put_OnceCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequence"), _T("put_OnceCount"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_OnceCount"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitrarySequence.OnceCount"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequence_put_OnceCount(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence(WX218x* pT, SAFEARRAY** SeqHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequenceAdvanceSequence), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("CreateAdvSequence"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("CreateAdvSequence"), &hr, IN_PARAM(*SeqHandle), IN_PARAM(*LoopCount), IN_PARAM(*JumpFlag), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateAdvSequence"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence(SeqHandle, LoopCount, JumpFlag);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_DeleteAdvSequence(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequenceAdvanceSequence), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("DeleteAdvSequence"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("DeleteAdvSequence"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("DeleteAdvSequence"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequenceAdvanceSequence_DeleteAdvSequence();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence1(WX218x* pT, SAFEARRAY** SeqHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequenceAdvanceSequence), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("CreateAdvSequence1"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("CreateAdvSequence1"), &hr, IN_PARAM(*SeqHandle), IN_PARAM(*LoopCount), IN_PARAM(*JumpFlag), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateAdvSequence1"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence1(SeqHandle, LoopCount, JumpFlag);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_ConfigureOnceCount(WX218x* pT, BSTR Channel, long Count)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequenceAdvanceSequence), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("ConfigureOnceCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("ConfigureOnceCount"), &hr, IN_PARAM(Channel), IN_PARAM(Count), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureOnceCount"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequenceAdvanceSequence_ConfigureOnceCount(Channel, Count);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_get_Mode(WX218x* pT, BSTR Channel, WX218xAdvanceSequenceModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequenceAdvanceSequence), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("get_Mode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Mode"), _T("val"));
	*val = (WX218xAdvanceSequenceModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("get_Mode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Mode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xAdvanceSequenceModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xAdvanceSequenceModeEnum>(_T("IWX218xArbitrarySequenceAdvanceSequence.Mode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xAdvanceSequenceModeAuto;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequenceAdvanceSequence_get_Mode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_put_Mode(WX218x* pT, BSTR Channel, WX218xAdvanceSequenceModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequenceAdvanceSequence), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("put_Mode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("put_Mode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Mode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xAdvanceSequenceModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xAdvanceSequenceModeEnum>(_T("IWX218xArbitrarySequenceAdvanceSequence.Mode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequenceAdvanceSequence_put_Mode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_get_SyncLock(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequenceAdvanceSequence), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("get_SyncLock"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SyncLock"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("get_SyncLock"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_SyncLock"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_SyncLock"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitrarySequenceAdvanceSequence.SyncLock"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequenceAdvanceSequence_get_SyncLock(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_put_SyncLock(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequenceAdvanceSequence), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("put_SyncLock"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("put_SyncLock"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_SyncLock"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_SyncLock"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xArbitrarySequenceAdvanceSequence_SyncLock_RangeCheck(_T("put_SyncLock"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitrarySequenceAdvanceSequence.SyncLock"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequenceAdvanceSequence_put_SyncLock(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_get_OnceCount(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequenceAdvanceSequence), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("get_OnceCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_OnceCount"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("get_OnceCount"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitrarySequenceAdvanceSequence.OnceCount"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequenceAdvanceSequence_get_OnceCount(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xArbitrarySequenceAdvanceSequence_put_OnceCount(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xArbitrarySequenceAdvanceSequence), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("put_OnceCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xArbitrarySequenceAdvanceSequence"), _T("put_OnceCount"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xArbitrarySequenceAdvanceSequence.OnceCount"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xArbitrarySequenceAdvanceSequence_put_OnceCount(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCarrierModulation_ConfigureCarrFreq(WX218x* pT, BSTR Channel, double Freq)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCarrierModulation), _T("IWX218xCarrierModulation"), _T("ConfigureCarrFreq"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCarrierModulation"), _T("ConfigureCarrFreq"), &hr, IN_PARAM(Channel), IN_PARAM(Freq), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCarrierModulation_ConfigureCarrFreq(Channel, Freq);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCarrierModulation_ConfigureCarrWaveform(WX218x* pT, BSTR Channel, WX218xCarrierModulationWaveformEnum Waveform)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCarrierModulation), _T("IWX218xCarrierModulation"), _T("ConfigureCarrWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCarrierModulation"), _T("ConfigureCarrWaveform"), &hr, IN_PARAM(Channel), IN_PARAM(Waveform), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCarrierModulation_ConfigureCarrWaveform(Channel, Waveform);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCarrierModulation_get_Frequency(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCarrierModulation), _T("IWX218xCarrierModulation"), _T("get_Frequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Frequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCarrierModulation"), _T("get_Frequency"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCarrierModulation.Frequency"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+006;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCarrierModulation_get_Frequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCarrierModulation_put_Frequency(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCarrierModulation), _T("IWX218xCarrierModulation"), _T("put_Frequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCarrierModulation"), _T("put_Frequency"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xCarrierModulation_Frequency_RangeCheck(_T("put_Frequency"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCarrierModulation.Frequency"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCarrierModulation_put_Frequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCarrierModulation_get_Waveform(WX218x* pT, BSTR Channel, WX218xCarrierModulationWaveformEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCarrierModulation), _T("IWX218xCarrierModulation"), _T("get_Waveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Waveform"), _T("val"));
	*val = (WX218xCarrierModulationWaveformEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCarrierModulation"), _T("get_Waveform"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xCarrierModulationWaveformEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xCarrierModulationWaveformEnum>(_T("IWX218xCarrierModulation.Waveform"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xCarrierModulationWaveformSine;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCarrierModulation_get_Waveform(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCarrierModulation_put_Waveform(WX218x* pT, BSTR Channel, WX218xCarrierModulationWaveformEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCarrierModulation), _T("IWX218xCarrierModulation"), _T("put_Waveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCarrierModulation"), _T("put_Waveform"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xCarrierModulationWaveformEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xCarrierModulationWaveformEnum>(_T("IWX218xCarrierModulation.Waveform"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCarrierModulation_put_Waveform(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCouple_ConfigureCoupleEnabled(WX218x* pT, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCouple), _T("IWX218xCouple"), _T("ConfigureCoupleEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCouple"), _T("ConfigureCoupleEnabled"), &hr, IN_PARAM(Enabled), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCouple_ConfigureCoupleEnabled(Enabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCouple_ConfigureCoupleOffset(WX218x* pT, BSTR Channel, long Offset)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCouple), _T("IWX218xCouple"), _T("ConfigureCoupleOffset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCouple"), _T("ConfigureCoupleOffset"), &hr, IN_PARAM(Channel), IN_PARAM(Offset), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCouple_ConfigureCoupleOffset(Channel, Offset);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCouple_ConfigureCoupleSkew(WX218x* pT, double Skew)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCouple), _T("IWX218xCouple"), _T("ConfigureCoupleSkew"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCouple"), _T("ConfigureCoupleSkew"), &hr, IN_PARAM(Skew), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCouple_ConfigureCoupleSkew(Skew);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCouple_get_Enabled(WX218x* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCouple), _T("IWX218xCouple"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCouple"), _T("get_Enabled"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xCouple.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCouple_get_Enabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCouple_put_Enabled(WX218x* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCouple), _T("IWX218xCouple"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCouple"), _T("put_Enabled"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xCouple.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCouple_put_Enabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCouple_get_Offset(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCouple), _T("IWX218xCouple"), _T("get_Offset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Offset"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCouple"), _T("get_Offset"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xCouple.Offset"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCouple_get_Offset(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCouple_put_Offset(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCouple), _T("IWX218xCouple"), _T("put_Offset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCouple"), _T("put_Offset"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xCouple.Offset"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCouple_put_Offset(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCouple_get_Skew(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCouple), _T("IWX218xCouple"), _T("get_Skew"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Skew"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCouple"), _T("get_Skew"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCouple.Skew"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCouple_get_Skew(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCouple_put_Skew(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCouple), _T("IWX218xCouple"), _T("put_Skew"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCouple"), _T("put_Skew"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xCouple_Skew_RangeCheck(_T("put_Skew"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCouple.Skew"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCouple_put_Skew(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_ConfigureInternal(WX218x* pT, double Deviation, WX218xFMInternalWaveformEnum Waveform, double Frequency)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("ConfigureInternal"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("ConfigureInternal"), &hr, IN_PARAM(Deviation), IN_PARAM(Waveform), IN_PARAM(Frequency), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_ConfigureInternal(Deviation, Waveform, Frequency);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_ConfigureFMEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("ConfigureFMEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("ConfigureFMEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Enabled), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_ConfigureFMEnabled(Channel, Enabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_ConfigureFMMarker(WX218x* pT, BSTR Channel, double Marker)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("ConfigureFMMarker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("ConfigureFMMarker"), &hr, IN_PARAM(Channel), IN_PARAM(Marker), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_ConfigureFMMarker(Channel, Marker);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xFM.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xFM.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_get_InternalDeviation(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("get_InternalDeviation"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalDeviation"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("get_InternalDeviation"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFM.InternalDeviation"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+005;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_get_InternalDeviation(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_put_InternalDeviation(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("put_InternalDeviation"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("put_InternalDeviation"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xFM_InternalDeviation_RangeCheck(_T("put_InternalDeviation"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFM.InternalDeviation"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_put_InternalDeviation(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_get_InternalFrequency(WX218x* pT, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("get_InternalFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalFrequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("get_InternalFrequency"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFM.InternalFrequency"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+004;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_get_InternalFrequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_put_InternalFrequency(WX218x* pT, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("put_InternalFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("put_InternalFrequency"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xFM_InternalFrequency_RangeCheck(_T("put_InternalFrequency"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFM.InternalFrequency"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_put_InternalFrequency(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_get_InternalWaveform(WX218x* pT, WX218xFMInternalWaveformEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("get_InternalWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_InternalWaveform"), _T("val"));
	*val = (WX218xFMInternalWaveformEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("get_InternalWaveform"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xFMInternalWaveformEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xFMInternalWaveformEnum>(_T("IWX218xFM.InternalWaveform"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xFMInternalWaveformSine;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_get_InternalWaveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_put_InternalWaveform(WX218x* pT, WX218xFMInternalWaveformEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("put_InternalWaveform"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("put_InternalWaveform"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xFMInternalWaveformEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xFMInternalWaveformEnum>(_T("IWX218xFM.InternalWaveform"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_put_InternalWaveform(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_get_Marker(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("get_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Marker"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("get_Marker"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFM.Marker"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.050000E+005;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_get_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFM_put_Marker(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFM), _T("IWX218xFM"), _T("put_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFM"), _T("put_Marker"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xFM_Marker_RangeCheck(_T("put_Marker"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFM.Marker"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFM_put_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_Refresh(WX218x* pT, BSTR Channel, long Index)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("Refresh"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("Refresh"), &hr, IN_PARAM(Channel), IN_PARAM(Index), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("Refresh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("Refresh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("Refresh"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("Refresh"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_Refresh(Channel, Index);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerControl(WX218x* pT, BSTR Channel, long Index, WX218xMarkerControlEnum Control)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("ConfigureMarkerControl"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("ConfigureMarkerControl"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(Control), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerControl"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerControl"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerControl"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerControl"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_ConfigureMarkerControl(Channel, Index, Control);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerDelay(WX218x* pT, BSTR Channel, long Index, double Delay)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("ConfigureMarkerDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("ConfigureMarkerDelay"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(Delay), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerDelay"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_ConfigureMarkerDelay(Channel, Index, Delay);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerEnabled(WX218x* pT, BSTR Channel, long Index, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("ConfigureMarkerEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("ConfigureMarkerEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(Enabled), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerEnabled"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_ConfigureMarkerEnabled(Channel, Index, Enabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerHighLevel(WX218x* pT, BSTR Channel, long Index, double HighLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("ConfigureMarkerHighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("ConfigureMarkerHighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(HighLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_ConfigureMarkerHighLevel(Channel, Index, HighLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerLowLevel(WX218x* pT, BSTR Channel, long Index, double LowLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("ConfigureMarkerLowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("ConfigureMarkerLowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(LowLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_ConfigureMarkerLowLevel(Channel, Index, LowLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerIndex(WX218x* pT, BSTR Channel, long Index)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("ConfigureMarkerIndex"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("ConfigureMarkerIndex"), &hr, IN_PARAM(Channel), IN_PARAM(Index), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerIndex"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_ConfigureMarkerIndex(Channel, Index);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerPosition(WX218x* pT, BSTR Channel, long Index, long Position)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("ConfigureMarkerPosition"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("ConfigureMarkerPosition"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(Position), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerPosition"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerPosition"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerPosition"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_ConfigureMarkerPosition(Channel, Index, Position);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerSource(WX218x* pT, BSTR Channel, WX218xMarkerSourceEnum Source)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("ConfigureMarkerSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("ConfigureMarkerSource"), &hr, IN_PARAM(Channel), IN_PARAM(Source), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerSource"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerSource"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerSource"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerSource"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerSource"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerSource"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_ConfigureMarkerSource(Channel, Source);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerWidth(WX218x* pT, BSTR Channel, long Index, long Width)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("ConfigureMarkerWidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("ConfigureMarkerWidth"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(Width), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerWidth"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerWidth"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerWidth"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_ConfigureMarkerWidth(Channel, Index, Width);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_MarkerRefresh(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("MarkerRefresh"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("MarkerRefresh"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("MarkerRefresh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("MarkerRefresh"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("MarkerRefresh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("MarkerRefresh"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("MarkerRefresh"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("MarkerRefresh"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_MarkerRefresh(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerHighLevel4Ch(WX218x* pT, BSTR Channel, double HighLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("ConfigureMarkerHighLevel4Ch"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("ConfigureMarkerHighLevel4Ch"), &hr, IN_PARAM(Channel), IN_PARAM(HighLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2184")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel4Ch"));
		}
		else if (pT->InstrumentIsModel(_T("WX1284")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerHighLevel4Ch"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_ConfigureMarkerHighLevel4Ch(Channel, HighLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_ConfigureMarkerLowLevel4Ch(WX218x* pT, BSTR Channel, double LowLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("ConfigureMarkerLowLevel4Ch"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("ConfigureMarkerLowLevel4Ch"), &hr, IN_PARAM(Channel), IN_PARAM(LowLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2184")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel4Ch"));
		}
		else if (pT->InstrumentIsModel(_T("WX1284")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureMarkerLowLevel4Ch"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_ConfigureMarkerLowLevel4Ch(Channel, LowLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_get_Delay(WX218x* pT, BSTR Channel, long Index, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("get_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Delay"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("get_Delay"), &hr, IN_PARAM(Channel), IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Delay"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Delay"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Delay"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xMarkers.Delay"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_get_Delay(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_put_Delay(WX218x* pT, BSTR Channel, long Index, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("put_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("put_Delay"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Delay"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Delay"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Delay"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xMarkers_Delay_RangeCheck(_T("put_Delay"), Channel, Index, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xMarkers.Delay"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_put_Delay(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_get_Enabled(WX218x* pT, BSTR Channel, long Index, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("get_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xMarkers.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_get_Enabled(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_put_Enabled(WX218x* pT, BSTR Channel, long Index, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xMarkers.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_put_Enabled(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_get_HighLevel(WX218x* pT, BSTR Channel, long Index, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("get_HighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_HighLevel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("get_HighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xMarkers.HighLevel"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E-001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_get_HighLevel(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_put_HighLevel(WX218x* pT, BSTR Channel, long Index, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("put_HighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("put_HighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xMarkers_HighLevel_RangeCheck(_T("put_HighLevel"), Channel, Index, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xMarkers.HighLevel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_put_HighLevel(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_get_LowLevel(WX218x* pT, BSTR Channel, long Index, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("get_LowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LowLevel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("get_LowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xMarkers.LowLevel"));
		if (!pSimData->GetValue(val))
		{
			*val = 0.000000E+000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_get_LowLevel(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_put_LowLevel(WX218x* pT, BSTR Channel, long Index, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("put_LowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("put_LowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xMarkers_LowLevel_RangeCheck(_T("put_LowLevel"), Channel, Index, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xMarkers.LowLevel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_put_LowLevel(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_get_Position(WX218x* pT, BSTR Channel, long Index, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("get_Position"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Position"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("get_Position"), &hr, IN_PARAM(Channel), IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Position"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Position"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Position"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xMarkers.Position"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_get_Position(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_put_Position(WX218x* pT, BSTR Channel, long Index, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("put_Position"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("put_Position"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Position"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Position"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Position"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xMarkers_Position_RangeCheck(_T("put_Position"), Channel, Index, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xMarkers.Position"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_put_Position(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_get_Width(WX218x* pT, BSTR Channel, long Index, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("get_Width"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Width"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("get_Width"), &hr, IN_PARAM(Channel), IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Width"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Width"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Width"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xMarkers.Width"));
		if (!pSimData->GetValue(val))
		{
			*val = 64;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_get_Width(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_put_Width(WX218x* pT, BSTR Channel, long Index, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("put_Width"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("put_Width"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Width"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Width"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Width"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xMarkers_Width_RangeCheck(_T("put_Width"), Channel, Index, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xMarkers.Width"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_put_Width(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_get_Control(WX218x* pT, BSTR Channel, long Index, WX218xMarkerControlEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("get_Control"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Control"), _T("val"));
	*val = (WX218xMarkerControlEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("get_Control"), &hr, IN_PARAM(Channel), IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Control"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Control"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Control"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Control"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xMarkerControlEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xMarkerControlEnum>(_T("IWX218xMarkers.Control"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xMarkerControlLocal;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_get_Control(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_put_Control(WX218x* pT, BSTR Channel, long Index, WX218xMarkerControlEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("put_Control"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("put_Control"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Control"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Control"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Control"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Control"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xMarkerControlEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xMarkerControlEnum>(_T("IWX218xMarkers.Control"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_put_Control(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_get_MarkerIndex(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("get_MarkerIndex"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_MarkerIndex"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("get_MarkerIndex"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_MarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_MarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_MarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_MarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_MarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_MarkerIndex"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xMarkers.MarkerIndex"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_get_MarkerIndex(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_put_MarkerIndex(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("put_MarkerIndex"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("put_MarkerIndex"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_MarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_MarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_MarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_MarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_MarkerIndex"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_MarkerIndex"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xMarkers_MarkerIndex_RangeCheck(_T("put_MarkerIndex"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xMarkers.MarkerIndex"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_put_MarkerIndex(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_get_Source(WX218x* pT, BSTR Channel, WX218xMarkerSourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("get_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Source"), _T("val"));
	*val = (WX218xMarkerSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("get_Source"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Source"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Source"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Source"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Source"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Source"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Source"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xMarkerSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xMarkerSourceEnum>(_T("IWX218xMarkers.Source"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xMarkerSourceWave;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_get_Source(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_put_Source(WX218x* pT, BSTR Channel, WX218xMarkerSourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("put_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("put_Source"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Source"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Source"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Source"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Source"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Source"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Source"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xMarkerSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xMarkerSourceEnum>(_T("IWX218xMarkers.Source"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_put_Source(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_get_HighLevel4Ch(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("get_HighLevel4Ch"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_HighLevel4Ch"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("get_HighLevel4Ch"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2184")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel4Ch"));
		}
		else if (pT->InstrumentIsModel(_T("WX1284")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel4Ch"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xMarkers.HighLevel4Ch"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_get_HighLevel4Ch(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_put_HighLevel4Ch(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("put_HighLevel4Ch"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("put_HighLevel4Ch"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2184")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel4Ch"));
		}
		else if (pT->InstrumentIsModel(_T("WX1284")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel4Ch"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xMarkers.HighLevel4Ch"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_put_HighLevel4Ch(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_get_LowLevel4Ch(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("get_LowLevel4Ch"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LowLevel4Ch"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("get_LowLevel4Ch"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2184")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel4Ch"));
		}
		else if (pT->InstrumentIsModel(_T("WX1284")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel4Ch"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xMarkers.LowLevel4Ch"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_get_LowLevel4Ch(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xMarkers_put_LowLevel4Ch(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xMarkers), _T("IWX218xMarkers"), _T("put_LowLevel4Ch"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xMarkers"), _T("put_LowLevel4Ch"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2184")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel4Ch"));
		}
		else if (pT->InstrumentIsModel(_T("WX1284")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel4Ch"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel4Ch"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xMarkers.LowLevel4Ch"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xMarkers_put_LowLevel4Ch(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_SendSoftwareTrigger(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("SendSoftwareTrigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("SendSoftwareTrigger"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_SendSoftwareTrigger();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_SetECLLevel(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("SetECLLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("SetECLLevel"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_SetECLLevel(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_SetTTLLevel(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("SetTTLLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("SetTTLLevel"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_SetTTLLevel(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureBurstCount(WX218x* pT, BSTR Channel, long Count)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureBurstCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureBurstCount"), &hr, IN_PARAM(Channel), IN_PARAM(Count), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureBurstCount(Channel, Count);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerDelay(WX218x* pT, BSTR Channel, long Delay)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureTriggerDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureTriggerDelay"), &hr, IN_PARAM(Channel), IN_PARAM(Delay), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureTriggerDelay(Channel, Delay);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerLevel(WX218x* pT, BSTR Channel, double Level)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureTriggerLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureTriggerLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Level), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureTriggerLevel(Channel, Level);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerTimerDelay(WX218x* pT, BSTR Channel, long TimerDelay)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureTriggerTimerDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureTriggerTimerDelay"), &hr, IN_PARAM(Channel), IN_PARAM(TimerDelay), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureTriggerTimerDelay(Channel, TimerDelay);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerTimerTime(WX218x* pT, BSTR Channel, double TimerTime)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureTriggerTimerTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureTriggerTimerTime"), &hr, IN_PARAM(Channel), IN_PARAM(TimerTime), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureTriggerTimerTime(Channel, TimerTime);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureTrigContMode(WX218x* pT, BSTR Channel, WX218xContinuousModeEnum ContMode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureTrigContMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureTrigContMode"), &hr, IN_PARAM(Channel), IN_PARAM(ContMode), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureTrigContMode(Channel, ContMode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureTrigContSource(WX218x* pT, BSTR Channel, WX218xContinuousSourceEnum Source)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureTrigContSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureTrigContSource"), &hr, IN_PARAM(Channel), IN_PARAM(Source), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureTrigContSource(Channel, Source);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureTrigSlope(WX218x* pT, BSTR Channel, WX218xTriggerSlopeEnum Slope)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureTrigSlope"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureTrigSlope"), &hr, IN_PARAM(Channel), IN_PARAM(Slope), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureTrigSlope(Channel, Slope);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureTrigSource(WX218x* pT, BSTR Channel, WX218xTriggerSourceEnum Source)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureTrigSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureTrigSource"), &hr, IN_PARAM(Channel), IN_PARAM(Source), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureTrigSource(Channel, Source);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureTrigTimerMode(WX218x* pT, BSTR Channel, WX218xTriggerTimerModeEnum TimerMode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureTrigTimerMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureTrigTimerMode"), &hr, IN_PARAM(Channel), IN_PARAM(TimerMode), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureTrigTimerMode(Channel, TimerMode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerMode(WX218x* pT, BSTR Channel, WX218xTriggerModeEnum Mode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureTriggerMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureTriggerMode"), &hr, IN_PARAM(Channel), IN_PARAM(Mode), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureTriggerMode(Channel, Mode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_ConfigureTriggerImpedance(WX218x* pT, WX218xTriggerImpedanceEnum TriggerImpedance)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("ConfigureTriggerImpedance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("ConfigureTriggerImpedance"), &hr, IN_PARAM(TriggerImpedance), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureTriggerImpedance"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureTriggerImpedance"));
		}
		else if (pT->InstrumentIsModel(_T("WX2184")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureTriggerImpedance"));
		}
		else if (pT->InstrumentIsModel(_T("WX1284")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureTriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureTriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureTriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureTriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureTriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureTriggerImpedance"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_ConfigureTriggerImpedance(TriggerImpedance);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_BurstCount(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_BurstCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_BurstCount"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_BurstCount"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xTrigger.BurstCount"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_BurstCount(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_BurstCount(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_BurstCount"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_BurstCount"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->BurstCount_RangeCheck(_T("put_BurstCount"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xTrigger.BurstCount"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_BurstCount(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_ContinuousMode(WX218x* pT, BSTR Channel, WX218xContinuousModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_ContinuousMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ContinuousMode"), _T("val"));
	*val = (WX218xContinuousModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_ContinuousMode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xContinuousModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xContinuousModeEnum>(_T("IWX218xTrigger.ContinuousMode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xContinuousModeSelf;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_ContinuousMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_ContinuousMode(WX218x* pT, BSTR Channel, WX218xContinuousModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_ContinuousMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_ContinuousMode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xContinuousModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xContinuousModeEnum>(_T("IWX218xTrigger.ContinuousMode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_ContinuousMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_ContinuousSource(WX218x* pT, BSTR Channel, WX218xContinuousSourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_ContinuousSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ContinuousSource"), _T("val"));
	*val = (WX218xContinuousSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_ContinuousSource"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xContinuousSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xContinuousSourceEnum>(_T("IWX218xTrigger.ContinuousSource"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xContinuousSourceBus;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_ContinuousSource(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_ContinuousSource(WX218x* pT, BSTR Channel, WX218xContinuousSourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_ContinuousSource"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_ContinuousSource"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xContinuousSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xContinuousSourceEnum>(_T("IWX218xTrigger.ContinuousSource"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_ContinuousSource(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_Delay(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Delay"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_Delay"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xTrigger.Delay"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_Delay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_Delay(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_Delay"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->Delay_RangeCheck(_T("put_Delay"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xTrigger.Delay"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_Delay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_Level(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_Level"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Level"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_Level"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTrigger.Level"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.600000E+000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_Level(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_Level(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_Level"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_Level"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xTrigger_Level_RangeCheck(_T("put_Level"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTrigger.Level"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_Level(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_Slope(WX218x* pT, BSTR Channel, WX218xTriggerSlopeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_Slope"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Slope"), _T("val"));
	*val = (WX218xTriggerSlopeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_Slope"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTriggerSlopeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTriggerSlopeEnum>(_T("IWX218xTrigger.Slope"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xTriggerSlopePositive;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_Slope(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_Slope(WX218x* pT, BSTR Channel, WX218xTriggerSlopeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_Slope"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_Slope"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTriggerSlopeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTriggerSlopeEnum>(_T("IWX218xTrigger.Slope"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_Slope(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_Source(WX218x* pT, BSTR Channel, WX218xTriggerSourceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Source"), _T("val"));
	*val = (WX218xTriggerSourceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_Source"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTriggerSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTriggerSourceEnum>(_T("IWX218xTrigger.Source"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xTriggerSourceExternal;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_Source(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_Source(WX218x* pT, BSTR Channel, WX218xTriggerSourceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_Source"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_Source"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTriggerSourceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTriggerSourceEnum>(_T("IWX218xTrigger.Source"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_Source(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_TimerDelay(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_TimerDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TimerDelay"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_TimerDelay"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xTrigger.TimerDelay"));
		if (!pSimData->GetValue(val))
		{
			*val = 32768;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_TimerDelay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_TimerDelay(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_TimerDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_TimerDelay"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xTrigger_TimerDelay_RangeCheck(_T("put_TimerDelay"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xTrigger.TimerDelay"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_TimerDelay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_TimerMode(WX218x* pT, BSTR Channel, WX218xTriggerTimerModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_TimerMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TimerMode"), _T("val"));
	*val = (WX218xTriggerTimerModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_TimerMode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTriggerTimerModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTriggerTimerModeEnum>(_T("IWX218xTrigger.TimerMode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xTriggerTimerModeTime;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_TimerMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_TimerMode(WX218x* pT, BSTR Channel, WX218xTriggerTimerModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_TimerMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_TimerMode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTriggerTimerModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTriggerTimerModeEnum>(_T("IWX218xTrigger.TimerMode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_TimerMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_TimerTime(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_TimerTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TimerTime"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_TimerTime"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTrigger.TimerTime"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.500000E-005;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_TimerTime(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_TimerTime(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_TimerTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_TimerTime"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xTrigger_Timer_RangeCheck(_T("put_TimerTime"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTrigger.TimerTime"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_TimerTime(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_TriggerMode(WX218x* pT, BSTR Channel, WX218xTriggerModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_TriggerMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TriggerMode"), _T("val"));
	*val = (WX218xTriggerModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_TriggerMode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTriggerModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTriggerModeEnum>(_T("IWX218xTrigger.TriggerMode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xTriggerModeNormal;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_TriggerMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_TriggerMode(WX218x* pT, BSTR Channel, WX218xTriggerModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_TriggerMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_TriggerMode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTriggerModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTriggerModeEnum>(_T("IWX218xTrigger.TriggerMode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_TriggerMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_ARM(WX218x* pT, IWX218xTriggerARM** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_ARM"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ARM"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_ARM"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_ARM(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_SmartTrigger(WX218x* pT, IWX218xTriggerSmartTrigger** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_SmartTrigger"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_SmartTrigger"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_SmartTrigger"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_SmartTrigger(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_get_TriggerImpedance(WX218x* pT, WX218xTriggerImpedanceEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("get_TriggerImpedance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TriggerImpedance"), _T("val"));
	*val = (WX218xTriggerImpedanceEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("get_TriggerImpedance"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TriggerImpedance"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TriggerImpedance"));
		}
		else if (pT->InstrumentIsModel(_T("WX2184")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TriggerImpedance"));
		}
		else if (pT->InstrumentIsModel(_T("WX1284")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TriggerImpedance"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTriggerImpedanceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTriggerImpedanceEnum>(_T("IWX218xTrigger.TriggerImpedance"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xTriggerImpedance50;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_get_TriggerImpedance(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTrigger_put_TriggerImpedance(WX218x* pT, WX218xTriggerImpedanceEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTrigger), _T("IWX218xTrigger"), _T("put_TriggerImpedance"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTrigger"), _T("put_TriggerImpedance"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TriggerImpedance"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TriggerImpedance"));
		}
		else if (pT->InstrumentIsModel(_T("WX2184")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TriggerImpedance"));
		}
		else if (pT->InstrumentIsModel(_T("WX1284")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TriggerImpedance"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TriggerImpedance"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xTriggerImpedanceEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xTriggerImpedanceEnum>(_T("IWX218xTrigger.TriggerImpedance"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTrigger_put_TriggerImpedance(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerARM_SetECLLevel(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerARM), _T("IWX218xTriggerARM"), _T("SetECLLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerARM"), _T("SetECLLevel"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerARM_SetECLLevel(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerARM_SetTtlLevel(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerARM), _T("IWX218xTriggerARM"), _T("SetTtlLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerARM"), _T("SetTtlLevel"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerARM_SetTtlLevel(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerARM_ConfigureTrigARMLevel(WX218x* pT, BSTR Channel, double Level)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerARM), _T("IWX218xTriggerARM"), _T("ConfigureTrigARMLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerARM"), _T("ConfigureTrigARMLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Level), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerARM_ConfigureTrigARMLevel(Channel, Level);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerARM_ConfigureTrigARMSlope(WX218x* pT, BSTR Channel, WX218xArmSlopeEnum Slope)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerARM), _T("IWX218xTriggerARM"), _T("ConfigureTrigARMSlope"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerARM"), _T("ConfigureTrigARMSlope"), &hr, IN_PARAM(Channel), IN_PARAM(Slope), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerARM_ConfigureTrigARMSlope(Channel, Slope);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerARM_get_Level(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerARM), _T("IWX218xTriggerARM"), _T("get_Level"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Level"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerARM"), _T("get_Level"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTriggerARM.Level"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.600000E+000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerARM_get_Level(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerARM_put_Level(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerARM), _T("IWX218xTriggerARM"), _T("put_Level"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerARM"), _T("put_Level"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xTriggerARM_Level_RangeCheck(_T("put_Level"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTriggerARM.Level"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerARM_put_Level(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerARM_get_Slope(WX218x* pT, BSTR Channel, WX218xArmSlopeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerARM), _T("IWX218xTriggerARM"), _T("get_Slope"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Slope"), _T("val"));
	*val = (WX218xArmSlopeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerARM"), _T("get_Slope"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xArmSlopeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xArmSlopeEnum>(_T("IWX218xTriggerARM.Slope"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xArmSlopePositive;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerARM_get_Slope(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerARM_put_Slope(WX218x* pT, BSTR Channel, WX218xArmSlopeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerARM), _T("IWX218xTriggerARM"), _T("put_Slope"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerARM"), _T("put_Slope"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xArmSlopeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xArmSlopeEnum>(_T("IWX218xTriggerARM.Slope"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerARM_put_Slope(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigHiPassEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigHiPassEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(State), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassEnabled(Channel, State);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassWidth(WX218x* pT, BSTR Channel, double Width)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigHiPassWidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigHiPassWidth"), &hr, IN_PARAM(Channel), IN_PARAM(Width), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassWidth(Channel, Width);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoff(WX218x* pT, BSTR Channel, double Holdoff)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigHoldoff"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigHoldoff"), &hr, IN_PARAM(Channel), IN_PARAM(Holdoff), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoff(Channel, Holdoff);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoffState(WX218x* pT, BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigHoldoffState"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigHoldoffState"), &hr, IN_PARAM(Channel), IN_PARAM(State), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoffState(Channel, State);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassState(WX218x* pT, BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigLowPassState"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigLowPassState"), &hr, IN_PARAM(Channel), IN_PARAM(State), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassState(Channel, State);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassWidth(WX218x* pT, BSTR Channel, double Width)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigLowPassWidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("ConfigureSmartTrigLowPassWidth"), &hr, IN_PARAM(Channel), IN_PARAM(Width), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassWidth(Channel, Width);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_HiPassEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("get_HiPassEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_HiPassEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("get_HiPassEnabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xTriggerSmartTrigger.HiPassEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_get_HiPassEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_HiPassEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("put_HiPassEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("put_HiPassEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xTriggerSmartTrigger.HiPassEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_put_HiPassEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_HiPassWidth(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("get_HiPassWidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_HiPassWidth"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("get_HiPassWidth"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTriggerSmartTrigger.HiPassWidth"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_get_HiPassWidth(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_HiPassWidth(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("put_HiPassWidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("put_HiPassWidth"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xTriggerSmartTrigger_HiPassWidth_RangeCheck(_T("put_HiPassWidth"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTriggerSmartTrigger.HiPassWidth"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_put_HiPassWidth(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_Holdoff(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("get_Holdoff"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Holdoff"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("get_Holdoff"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTriggerSmartTrigger.Holdoff"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_get_Holdoff(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_Holdoff(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("put_Holdoff"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("put_Holdoff"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xTriggerSmartTrigger_Holdoff_RangeCheck(_T("put_Holdoff"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTriggerSmartTrigger.Holdoff"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_put_Holdoff(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_HoldoffEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("get_HoldoffEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_HoldoffEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("get_HoldoffEnabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xTriggerSmartTrigger.HoldoffEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_get_HoldoffEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_HoldoffEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("put_HoldoffEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("put_HoldoffEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xTriggerSmartTrigger.HoldoffEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_put_HoldoffEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_LowPassEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("get_LowPassEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LowPassEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("get_LowPassEnabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xTriggerSmartTrigger.LowPassEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_get_LowPassEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_LowPassEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("put_LowPassEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("put_LowPassEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xTriggerSmartTrigger.LowPassEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_put_LowPassEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_get_LowPassWidth(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("get_LowPassWidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LowPassWidth"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("get_LowPassWidth"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTriggerSmartTrigger.LowPassWidth"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-003;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_get_LowPassWidth(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xTriggerSmartTrigger_put_LowPassWidth(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xTriggerSmartTrigger), _T("IWX218xTriggerSmartTrigger"), _T("put_LowPassWidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xTriggerSmartTrigger"), _T("put_LowPassWidth"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xTriggerSmartTrigger_HiPassWidth_RangeCheck(_T("put_LowPassWidth"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xTriggerSmartTrigger.LowPassWidth"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xTriggerSmartTrigger_put_LowPassWidth(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_Clear(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("Clear"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("Clear"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_Clear();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_Load(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("Load"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("Load"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_Load();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_Recall(WX218x* pT, long Cell, WX218xStateStorageTargetEnum Target)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("Recall"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("Recall"), &hr, IN_PARAM(Cell), IN_PARAM(Target), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_Recall(Cell, Target);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_Save(WX218x* pT)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("Save"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("Save"), &hr, NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_Save();
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_Store(WX218x* pT, long Cell, WX218xStateStorageConfigurationEnum Configuration, WX218xStateStorageTargetEnum Target)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("Store"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("Store"), &hr, IN_PARAM(Cell), IN_PARAM(Configuration), IN_PARAM(Target), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_Store(Cell, Configuration, Target);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_get_CellRecall(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("get_CellRecall"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_CellRecall"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("get_CellRecall"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xStateStorage.CellRecall"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_get_CellRecall(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_put_CellRecall(WX218x* pT, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("put_CellRecall"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("put_CellRecall"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xStateStorage_CellRecall_RangeCheck(_T("put_CellRecall"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xStateStorage.CellRecall"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_put_CellRecall(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_get_CellStore(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("get_CellStore"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_CellStore"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("get_CellStore"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xStateStorage.CellStore"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_get_CellStore(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_put_CellStore(WX218x* pT, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("put_CellStore"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("put_CellStore"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xStateStorage_CellRecall_RangeCheck(_T("put_CellStore"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xStateStorage.CellStore"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_put_CellStore(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_get_ConfigurationStore(WX218x* pT, WX218xStateStorageConfigurationEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("get_ConfigurationStore"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ConfigurationStore"), _T("val"));
	*val = (WX218xStateStorageConfigurationEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("get_ConfigurationStore"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xStateStorageConfigurationEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xStateStorageConfigurationEnum>(_T("IWX218xStateStorage.ConfigurationStore"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xStateStorageConfigurationSetup;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_get_ConfigurationStore(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_put_ConfigurationStore(WX218x* pT, WX218xStateStorageConfigurationEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("put_ConfigurationStore"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("put_ConfigurationStore"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xStateStorageConfigurationEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xStateStorageConfigurationEnum>(_T("IWX218xStateStorage.ConfigurationStore"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_put_ConfigurationStore(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_get_TargetRecall(WX218x* pT, WX218xStateStorageTargetEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("get_TargetRecall"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TargetRecall"), _T("val"));
	*val = (WX218xStateStorageTargetEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("get_TargetRecall"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xStateStorageTargetEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xStateStorageTargetEnum>(_T("IWX218xStateStorage.TargetRecall"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xStateStorageTargetINT;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_get_TargetRecall(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_put_TargetRecall(WX218x* pT, WX218xStateStorageTargetEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("put_TargetRecall"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("put_TargetRecall"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xStateStorageTargetEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xStateStorageTargetEnum>(_T("IWX218xStateStorage.TargetRecall"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_put_TargetRecall(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_get_TargetStore(WX218x* pT, WX218xStateStorageTargetEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("get_TargetStore"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TargetStore"), _T("val"));
	*val = (WX218xStateStorageTargetEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("get_TargetStore"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xStateStorageTargetEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xStateStorageTargetEnum>(_T("IWX218xStateStorage.TargetStore"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xStateStorageTargetINT;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_get_TargetStore(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_put_TargetStore(WX218x* pT, WX218xStateStorageTargetEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("put_TargetStore"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("put_TargetStore"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xStateStorageTargetEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xStateStorageTargetEnum>(_T("IWX218xStateStorage.TargetStore"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_put_TargetStore(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_get_ConfigurationRecall(WX218x* pT, WX218xStateStorageRecalConfigurationEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("get_ConfigurationRecall"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ConfigurationRecall"), _T("val"));
	*val = (WX218xStateStorageRecalConfigurationEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("get_ConfigurationRecall"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_get_ConfigurationRecall(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_get_StoreEnabled(WX218x* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("get_StoreEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_StoreEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("get_StoreEnabled"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xStateStorage.StoreEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_get_StoreEnabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_put_StoreEnabled(WX218x* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("put_StoreEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("put_StoreEnabled"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xStateStorage.StoreEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_put_StoreEnabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_get_RecallEnabled(WX218x* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("get_RecallEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RecallEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("get_RecallEnabled"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xStateStorage.RecallEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_get_RecallEnabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xStateStorage_put_RecallEnabled(WX218x* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xStateStorage), _T("IWX218xStateStorage"), _T("put_RecallEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xStateStorage"), _T("put_RecallEnabled"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xStateStorage.RecallEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xStateStorage_put_RecallEnabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_ConfigureXInstrumentEnabled(WX218x* pT, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("ConfigureXInstrumentEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("ConfigureXInstrumentEnabled"), &hr, IN_PARAM(State), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_ConfigureXInstrumentEnabled(State);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_ConfigureXInstrumentMode(WX218x* pT, WX218xXInstrumentModeEnum Mode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("ConfigureXInstrumentMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("ConfigureXInstrumentMode"), &hr, IN_PARAM(Mode), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureXInstrumentMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureXInstrumentMode"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_ConfigureXInstrumentMode(Mode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_ConfigureXInstrumentModeAdv(WX218x* pT, WX218xXInstrumentModeAdvEnum ModeAdv)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("ConfigureXInstrumentModeAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("ConfigureXInstrumentModeAdv"), &hr, IN_PARAM(ModeAdv), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureXInstrumentModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureXInstrumentModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureXInstrumentModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureXInstrumentModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureXInstrumentModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureXInstrumentModeAdv"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_ConfigureXInstrumentModeAdv(ModeAdv);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_ConfigureXInstrumentOffset(WX218x* pT, long Offset)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("ConfigureXInstrumentOffset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("ConfigureXInstrumentOffset"), &hr, IN_PARAM(Offset), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureXInstrumentOffset"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_ConfigureXInstrumentOffset(Offset);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_get_Enabled(WX218x* pT, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("get_Enabled"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xXInstrument.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_get_Enabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_put_Enabled(WX218x* pT, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("put_Enabled"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xXInstrument.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_put_Enabled(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_get_Mode(WX218x* pT, WX218xXInstrumentModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("get_Mode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Mode"), _T("val"));
	*val = (WX218xXInstrumentModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("get_Mode"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Mode"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Mode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xXInstrumentModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xXInstrumentModeEnum>(_T("IWX218xXInstrument.Mode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xXInstrumentModeMaster;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_get_Mode(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_put_Mode(WX218x* pT, WX218xXInstrumentModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("put_Mode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("put_Mode"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Mode"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Mode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xXInstrumentModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xXInstrumentModeEnum>(_T("IWX218xXInstrument.Mode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_put_Mode(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_get_Offset(WX218x* pT, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("get_Offset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Offset"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("get_Offset"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Offset"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xXInstrument.Offset"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_get_Offset(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_put_Offset(WX218x* pT, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("put_Offset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("put_Offset"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Offset"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xXInstrument_Offset_RangeCheck(_T("put_Offset"), val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xXInstrument.Offset"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_put_Offset(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_get_ModeAdv(WX218x* pT, WX218xXInstrumentModeAdvEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("get_ModeAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ModeAdv"), _T("val"));
	*val = (WX218xXInstrumentModeAdvEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("get_ModeAdv"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ModeAdv"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xXInstrumentModeAdvEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xXInstrumentModeAdvEnum>(_T("IWX218xXInstrument.ModeAdv"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xXInstrumentModeAdvMaster;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_get_ModeAdv(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xXInstrument_put_ModeAdv(WX218x* pT, WX218xXInstrumentModeAdvEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xXInstrument), _T("IWX218xXInstrument"), _T("put_ModeAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xXInstrument"), _T("put_ModeAdv"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ModeAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ModeAdv"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xXInstrumentModeAdvEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xXInstrumentModeAdvEnum>(_T("IWX218xXInstrument.ModeAdv"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xXInstrument_put_ModeAdv(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_SetAmplitudeMax(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("SetAmplitudeMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("SetAmplitudeMax"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_SetAmplitudeMax(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_SetAmplitudeMin(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("SetAmplitudeMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("SetAmplitudeMin"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_SetAmplitudeMin(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_SetOffsetMax(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("SetOffsetMax"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("SetOffsetMax"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_SetOffsetMax(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_SetOffsetMin(WX218x* pT, BSTR Channel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("SetOffsetMin"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("SetOffsetMin"), &hr, IN_PARAM(Channel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_SetOffsetMin(Channel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseAmplitude(WX218x* pT, BSTR Channel, double Amplitude)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseAmplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseAmplitude"), &hr, IN_PARAM(Channel), IN_PARAM(Amplitude), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseAmplitude(Channel, Amplitude);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseDelay(WX218x* pT, BSTR Channel, double Delay)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseDelay"), &hr, IN_PARAM(Channel), IN_PARAM(Delay), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseDelay(Channel, Delay);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseDelayPercent(WX218x* pT, BSTR Channel, double DelayPercent)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseDelayPercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseDelayPercent"), &hr, IN_PARAM(Channel), IN_PARAM(DelayPercent), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseDelayPercent(Channel, DelayPercent);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseDoubleDelay(WX218x* pT, BSTR Channel, double DoubleDelay)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseDoubleDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseDoubleDelay"), &hr, IN_PARAM(Channel), IN_PARAM(DoubleDelay), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseDoubleDelay(Channel, DoubleDelay);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseDoubleDelayPercent(WX218x* pT, BSTR Channel, double DoubleDelayPercent)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseDoubleDelayPercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseDoubleDelayPercent"), &hr, IN_PARAM(Channel), IN_PARAM(DoubleDelayPercent), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseDoubleDelayPercent(Channel, DoubleDelayPercent);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseFallTime(WX218x* pT, BSTR Channel, double FallTime)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseFallTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseFallTime"), &hr, IN_PARAM(Channel), IN_PARAM(FallTime), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseFallTime(Channel, FallTime);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseFallTimePercent(WX218x* pT, BSTR Channel, double FallTimePercent)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseFallTimePercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseFallTimePercent"), &hr, IN_PARAM(Channel), IN_PARAM(FallTimePercent), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseFallTimePercent(Channel, FallTimePercent);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseHighLevel(WX218x* pT, BSTR Channel, double HighLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseHighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseHighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(HighLevel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseHighLevel(Channel, HighLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseLevelControl(WX218x* pT, BSTR Channel, WX218xPulseLevelControlEnum LevelControl)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseLevelControl"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseLevelControl"), &hr, IN_PARAM(Channel), IN_PARAM(LevelControl), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseLevelControl(Channel, LevelControl);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseLowLevel(WX218x* pT, BSTR Channel, double LowLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseLowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseLowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(LowLevel), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseLowLevel(Channel, LowLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseMode(WX218x* pT, BSTR Channel, WX218xPulseModeEnum Mode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseMode"), &hr, IN_PARAM(Channel), IN_PARAM(Mode), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseMode(Channel, Mode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseOffset(WX218x* pT, BSTR Channel, double Offset)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseOffset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseOffset"), &hr, IN_PARAM(Channel), IN_PARAM(Offset), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseOffset(Channel, Offset);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulsePeriod(WX218x* pT, BSTR Channel, double Period)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulsePeriod"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulsePeriod"), &hr, IN_PARAM(Channel), IN_PARAM(Period), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulsePeriod(Channel, Period);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulsePolarity(WX218x* pT, BSTR Channel, WX218xPulsePolarityEnum Polarity)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulsePolarity"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulsePolarity"), &hr, IN_PARAM(Channel), IN_PARAM(Polarity), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulsePolarity(Channel, Polarity);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseRiseTime(WX218x* pT, BSTR Channel, double RiseTime)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseRiseTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseRiseTime"), &hr, IN_PARAM(Channel), IN_PARAM(RiseTime), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseRiseTime(Channel, RiseTime);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureRiseTimePercent(WX218x* pT, BSTR Channel, double RiseTimePercent)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureRiseTimePercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureRiseTimePercent"), &hr, IN_PARAM(Channel), IN_PARAM(RiseTimePercent), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureRiseTimePercent(Channel, RiseTimePercent);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseTransition(WX218x* pT, BSTR Channel, WX218xPulseTransitionEnum Transition)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseTransition"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseTransition"), &hr, IN_PARAM(Channel), IN_PARAM(Transition), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseTransition(Channel, Transition);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseWidth(WX218x* pT, BSTR Channel, double Width)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseWidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseWidth"), &hr, IN_PARAM(Channel), IN_PARAM(Width), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseWidth(Channel, Width);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_ConfigureDigPulseWidthPercent(WX218x* pT, BSTR Channel, double WidthPercent)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseWidthPercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("ConfigureDigPulseWidthPercent"), &hr, IN_PARAM(Channel), IN_PARAM(WidthPercent), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_ConfigureDigPulseWidthPercent(Channel, WidthPercent);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_Amplitude(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_Amplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Amplitude"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_Amplitude"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.Amplitude"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E-001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_Amplitude(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_Amplitude(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_Amplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_Amplitude"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_Amplitude_RangeCheck(_T("put_Amplitude"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.Amplitude"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_Amplitude(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_Configure(WX218x* pT, BSTR Channel, WX218xPulseConfigureEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Configure"), _T("val"));
	*val = (WX218xPulseConfigureEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_Configure"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPulseConfigureEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPulseConfigureEnum>(_T("IWX218xDigitalPulse.Configure"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xPulseConfigureTime;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_Configure(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_Configure(WX218x* pT, BSTR Channel, WX218xPulseConfigureEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_Configure"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_Configure"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPulseConfigureEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPulseConfigureEnum>(_T("IWX218xDigitalPulse.Configure"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_Configure(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_Delay(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Delay"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_Delay"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.Delay"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-003;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_Delay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_Delay(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_Delay"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_Delay_RangeCheck(_T("put_Delay"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.Delay"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_Delay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_DelayPercent(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_DelayPercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DelayPercent"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_DelayPercent"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.DelayPercent"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_DelayPercent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_DelayPercent(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_DelayPercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_DelayPercent"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_DelayPercent_RangeCheck(_T("put_DelayPercent"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.DelayPercent"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_DelayPercent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_DoubleDelay(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_DoubleDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DoubleDelay"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_DoubleDelay"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.DoubleDelay"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-003;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_DoubleDelay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_DoubleDelay(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_DoubleDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_DoubleDelay"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_Delay_RangeCheck(_T("put_DoubleDelay"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.DoubleDelay"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_DoubleDelay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_DoubleDelayPercent(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_DoubleDelayPercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DoubleDelayPercent"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_DoubleDelayPercent"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.DoubleDelayPercent"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_DoubleDelayPercent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_DoubleDelayPercent(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_DoubleDelayPercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_DoubleDelayPercent"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_DelayPercent_RangeCheck(_T("put_DoubleDelayPercent"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.DoubleDelayPercent"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_DoubleDelayPercent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_FallTime(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_FallTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FallTime"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_FallTime"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.FallTime"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-003;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_FallTime(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_FallTime(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_FallTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_FallTime"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_RiseTime_RangeCheck(_T("put_FallTime"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.FallTime"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_FallTime(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_FallTimePercent(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_FallTimePercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FallTimePercent"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_FallTimePercent"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.FallTimePercent"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_FallTimePercent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_FallTimePercent(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_FallTimePercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_FallTimePercent"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_DelayPercent_RangeCheck(_T("put_FallTimePercent"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.FallTimePercent"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_FallTimePercent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_HighLevel(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_HighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_HighLevel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_HighLevel"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.HighLevel"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_HighLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_HighLevel(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_HighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_HighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_HighLevel_RangeCheck(_T("put_HighLevel"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.HighLevel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_HighLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_LevelControl(WX218x* pT, BSTR Channel, WX218xPulseLevelControlEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_LevelControl"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LevelControl"), _T("val"));
	*val = (WX218xPulseLevelControlEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_LevelControl"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPulseLevelControlEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPulseLevelControlEnum>(_T("IWX218xDigitalPulse.LevelControl"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xPulseLevelControlHLOW;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_LevelControl(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_LevelControl(WX218x* pT, BSTR Channel, WX218xPulseLevelControlEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_LevelControl"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_LevelControl"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPulseLevelControlEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPulseLevelControlEnum>(_T("IWX218xDigitalPulse.LevelControl"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_LevelControl(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_LowLevel(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_LowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LowLevel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_LowLevel"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.LowLevel"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_LowLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_LowLevel(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_LowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_LowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_LowLevel_RangeCheck(_T("put_LowLevel"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.LowLevel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_LowLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_Mode(WX218x* pT, BSTR Channel, WX218xPulseModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_Mode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Mode"), _T("val"));
	*val = (WX218xPulseModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_Mode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPulseModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPulseModeEnum>(_T("IWX218xDigitalPulse.Mode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xPulseModeSingle;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_Mode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_Mode(WX218x* pT, BSTR Channel, WX218xPulseModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_Mode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_Mode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPulseModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPulseModeEnum>(_T("IWX218xDigitalPulse.Mode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_Mode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_Offset(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_Offset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Offset"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_Offset"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.Offset"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_Offset(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_Offset(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_Offset"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_Offset"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_Offset_RangeCheck(_T("put_Offset"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.Offset"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_Offset(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_Period(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_Period"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Period"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_Period"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.Period"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-002;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_Period(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_Period(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_Period"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_Period"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_Period_RangeCheck(_T("put_Period"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.Period"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_Period(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_Polarity(WX218x* pT, BSTR Channel, WX218xPulsePolarityEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_Polarity"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Polarity"), _T("val"));
	*val = (WX218xPulsePolarityEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_Polarity"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPulsePolarityEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPulsePolarityEnum>(_T("IWX218xDigitalPulse.Polarity"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xPulsePolarityNormal;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_Polarity(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_Polarity(WX218x* pT, BSTR Channel, WX218xPulsePolarityEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_Polarity"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_Polarity"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPulsePolarityEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPulsePolarityEnum>(_T("IWX218xDigitalPulse.Polarity"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_Polarity(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_RiseTime(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_RiseTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RiseTime"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_RiseTime"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.RiseTime"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-003;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_RiseTime(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_RiseTime(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_RiseTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_RiseTime"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_RiseTime_RangeCheck(_T("put_RiseTime"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.RiseTime"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_RiseTime(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_RiseTimePercent(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_RiseTimePercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_RiseTimePercent"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_RiseTimePercent"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.RiseTimePercent"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_RiseTimePercent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_RiseTimePercent(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_RiseTimePercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_RiseTimePercent"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_DelayPercent_RangeCheck(_T("put_RiseTimePercent"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.RiseTimePercent"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_RiseTimePercent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_Transition(WX218x* pT, BSTR Channel, WX218xPulseTransitionEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_Transition"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Transition"), _T("val"));
	*val = (WX218xPulseTransitionEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_Transition"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPulseTransitionEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPulseTransitionEnum>(_T("IWX218xDigitalPulse.Transition"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xPulseTransitionFast;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_Transition(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_Transition(WX218x* pT, BSTR Channel, WX218xPulseTransitionEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_Transition"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_Transition"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPulseTransitionEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPulseTransitionEnum>(_T("IWX218xDigitalPulse.Transition"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_Transition(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_Width(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_Width"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Width"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_Width"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.Width"));
		if (!pSimData->GetValue(val))
		{
			*val = 2.000000E-003;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_Width(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_Width(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_Width"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_Width"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_Width_RangeCheck(_T("put_Width"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.Width"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_Width(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_get_WidthPercent(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("get_WidthPercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_WidthPercent"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("get_WidthPercent"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.WidthPercent"));
		if (!pSimData->GetValue(val))
		{
			*val = 2.000000E+001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_get_WidthPercent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPulse_put_WidthPercent(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPulse), _T("IWX218xDigitalPulse"), _T("put_WidthPercent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPulse"), _T("put_WidthPercent"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPulse_DelayPercent_RangeCheck(_T("put_WidthPercent"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPulse.WidthPercent"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPulse_put_WidthPercent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_ConfigureSweepDirection(WX218x* pT, BSTR Channel, WX218xSweepDirectionEnum Direction)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("ConfigureSweepDirection"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("ConfigureSweepDirection"), &hr, IN_PARAM(Channel), IN_PARAM(Direction), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_ConfigureSweepDirection(Channel, Direction);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_ConfigureSweepState(WX218x* pT, BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("ConfigureSweepState"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("ConfigureSweepState"), &hr, IN_PARAM(Channel), IN_PARAM(State), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_ConfigureSweepState(Channel, State);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_ConfigureSweepFreqStart(WX218x* pT, BSTR Channel, double FreqStart)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("ConfigureSweepFreqStart"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("ConfigureSweepFreqStart"), &hr, IN_PARAM(Channel), IN_PARAM(FreqStart), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_ConfigureSweepFreqStart(Channel, FreqStart);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_ConfigureSweepFreqStop(WX218x* pT, BSTR Channel, double FreqStop)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("ConfigureSweepFreqStop"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("ConfigureSweepFreqStop"), &hr, IN_PARAM(Channel), IN_PARAM(FreqStop), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_ConfigureSweepFreqStop(Channel, FreqStop);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_ConfigureSweepMarker(WX218x* pT, BSTR Channel, double Marker)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("ConfigureSweepMarker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("ConfigureSweepMarker"), &hr, IN_PARAM(Channel), IN_PARAM(Marker), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_ConfigureSweepMarker(Channel, Marker);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_ConfigureSweepSpacing(WX218x* pT, BSTR Channel, WX218xSweepSpacingEnum Spacing)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("ConfigureSweepSpacing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("ConfigureSweepSpacing"), &hr, IN_PARAM(Channel), IN_PARAM(Spacing), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_ConfigureSweepSpacing(Channel, Spacing);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_ConfigureSweepTime(WX218x* pT, BSTR Channel, double Time)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("ConfigureSweepTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("ConfigureSweepTime"), &hr, IN_PARAM(Channel), IN_PARAM(Time), NULL);

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_ConfigureSweepTime(Channel, Time);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_get_Direction(WX218x* pT, BSTR Channel, WX218xSweepDirectionEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("get_Direction"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Direction"), _T("val"));
	*val = (WX218xSweepDirectionEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("get_Direction"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSweepDirectionEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSweepDirectionEnum>(_T("IWX218xSweep.Direction"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xSweepDirectionUp;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_get_Direction(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_put_Direction(WX218x* pT, BSTR Channel, WX218xSweepDirectionEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("put_Direction"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("put_Direction"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSweepDirectionEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSweepDirectionEnum>(_T("IWX218xSweep.Direction"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_put_Direction(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xSweep.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xSweep.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_get_FrequencyStart(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("get_FrequencyStart"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FrequencyStart"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("get_FrequencyStart"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xSweep.FrequencyStart"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+004;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_get_FrequencyStart(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_put_FrequencyStart(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("put_FrequencyStart"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("put_FrequencyStart"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xSweep_FrequencyStart_RangeCheck(_T("put_FrequencyStart"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xSweep.FrequencyStart"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_put_FrequencyStart(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_get_FrequencyStop(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("get_FrequencyStop"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FrequencyStop"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("get_FrequencyStop"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xSweep.FrequencyStop"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+006;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_get_FrequencyStop(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_put_FrequencyStop(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("put_FrequencyStop"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("put_FrequencyStop"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xSweep_FrequencyStart_RangeCheck(_T("put_FrequencyStop"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xSweep.FrequencyStop"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_put_FrequencyStop(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_get_Marker(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("get_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Marker"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("get_Marker"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xSweep.Marker"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.050000E+005;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_get_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_put_Marker(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("put_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("put_Marker"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xSweep_FrequencyStart_RangeCheck(_T("put_Marker"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xSweep.Marker"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_put_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_get_Spacing(WX218x* pT, BSTR Channel, WX218xSweepSpacingEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("get_Spacing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Spacing"), _T("val"));
	*val = (WX218xSweepSpacingEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("get_Spacing"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSweepSpacingEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSweepSpacingEnum>(_T("IWX218xSweep.Spacing"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xSweepSpacingLin;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_get_Spacing(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_put_Spacing(WX218x* pT, BSTR Channel, WX218xSweepSpacingEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("put_Spacing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("put_Spacing"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xSweepSpacingEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xSweepSpacingEnum>(_T("IWX218xSweep.Spacing"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_put_Spacing(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_get_Time(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("get_Time"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Time"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("get_Time"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xSweep.Time"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-003;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_get_Time(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xSweep_put_Time(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xSweep), _T("IWX218xSweep"), _T("put_Time"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xSweep"), _T("put_Time"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xSweep_Time_RangeCheck(_T("put_Time"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xSweep.Time"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xSweep_put_Time(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_CreateDigPatternData(WX218x* pT, BSTR Channel, SAFEARRAY** Data, long Segment)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("CreateDigPatternData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("CreateDigPatternData"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), IN_PARAM(Segment), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternData"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternData"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternData"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternData"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_CreateDigPatternData(Channel, Data, Segment);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_LoadDigitalPatternFromFile(WX218x* pT, BSTR Channel, BSTR FileName, long Segment)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("LoadDigitalPatternFromFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("LoadDigitalPatternFromFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), IN_PARAM(Segment), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalPatternFromFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalPatternFromFile"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalPatternFromFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalPatternFromFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalPatternFromFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_LoadDigitalPatternFromFile(Channel, FileName, Segment);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_CreateDigPatternParamData(WX218x* pT, BSTR Channel, SAFEARRAY** State, SAFEARRAY** Delay, SAFEARRAY** HighLevel, SAFEARRAY** LowLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("CreateDigPatternParamData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("CreateDigPatternParamData"), &hr, IN_PARAM(Channel), IN_PARAM(*State), IN_PARAM(*Delay), IN_PARAM(*HighLevel), IN_PARAM(*LowLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternParamData"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternParamData"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternParamData"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternParamData"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternParamData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_CreateDigPatternParamData(Channel, State, Delay, HighLevel, LowLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_CreateDigPatternParamData1(WX218x* pT, BSTR Channel, SAFEARRAY** State, SAFEARRAY** Delay, SAFEARRAY** HighLevel, SAFEARRAY** LowLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("CreateDigPatternParamData1"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("CreateDigPatternParamData1"), &hr, IN_PARAM(Channel), IN_PARAM(*State), IN_PARAM(*Delay), IN_PARAM(*HighLevel), IN_PARAM(*LowLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternParamData1"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternParamData1"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternParamData1"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternParamData1"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateDigPatternParamData1"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_CreateDigPatternParamData1(Channel, State, Delay, HighLevel, LowLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattArbResolution(WX218x* pT, BSTR Channel, WX218xArbitraryResolutionEnum ArbResolution)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattArbResolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattArbResolution"), &hr, IN_PARAM(Channel), IN_PARAM(ArbResolution), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattArbResolution"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattArbResolution"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattArbResolution"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattArbResolution"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattArbResolution"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattArbResolution(Channel, ArbResolution);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattBitDelay(WX218x* pT, BSTR Channel, long BitIndex, double BitDelay)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattBitDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattBitDelay"), &hr, IN_PARAM(Channel), IN_PARAM(BitIndex), IN_PARAM(BitDelay), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitDelay"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitDelay"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattBitDelay(Channel, BitIndex, BitDelay);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattBitEnabled(WX218x* pT, BSTR Channel, long BitIndex, VARIANT_BOOL BitEnabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattBitEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattBitEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(BitIndex), IN_PARAM(BitEnabled), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitEnabled"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitEnabled"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattBitEnabled(Channel, BitIndex, BitEnabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattBitHighLevel(WX218x* pT, BSTR Channel, long BitIndex, double BitHighLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattBitHighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattBitHighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(BitIndex), IN_PARAM(BitHighLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitHighLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitHighLevel"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattBitHighLevel(Channel, BitIndex, BitHighLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattBitLowLevel(WX218x* pT, BSTR Channel, long BitIndex, double BitLowLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattBitLowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattBitLowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(BitIndex), IN_PARAM(BitLowLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitLowLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattBitLowLevel"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattBitLowLevel(Channel, BitIndex, BitLowLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattDelay(WX218x* pT, BSTR Channel, double Delay)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattDelay"), &hr, IN_PARAM(Channel), IN_PARAM(Delay), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDelay"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDelay"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattDelay(Channel, Delay);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattDelayMode(WX218x* pT, BSTR Channel, WX218xDigPatternDelayModeEnum DelayMode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattDelayMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattDelayMode"), &hr, IN_PARAM(Channel), IN_PARAM(DelayMode), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDelayMode"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDelayMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDelayMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDelayMode"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDelayMode"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattDelayMode(Channel, DelayMode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattEmphasisEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL EmphasisEnabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattEmphasisEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattEmphasisEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(EmphasisEnabled), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattEmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattEmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattEmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattEmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattEmphasisEnabled"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattEmphasisEnabled(Channel, EmphasisEnabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Enabled), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattEnabled"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattEnabled(Channel, Enabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattFormatData(WX218x* pT, BSTR Channel, WX218xDigFormatDataEnum FormatData)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattFormatData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattFormatData"), &hr, IN_PARAM(Channel), IN_PARAM(FormatData), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattFormatData"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattFormatData"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattFormatData"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattFormatData"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattFormatData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattFormatData(Channel, FormatData);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattHighLevel(WX218x* pT, BSTR Channel, double HighLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattHighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattHighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(HighLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattHighLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattHighLevel"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattHighLevel(Channel, HighLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattLevelMode(WX218x* pT, BSTR Channel, WX218xDigPatternLevelModeEnum LevelMode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattLevelMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattLevelMode"), &hr, IN_PARAM(Channel), IN_PARAM(LevelMode), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattLevelMode"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattLevelMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattLevelMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattLevelMode"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattLevelMode"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattLevelMode(Channel, LevelMode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattLowLevel(WX218x* pT, BSTR Channel, double LowLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattLowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattLowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(LowLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattLowLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattLowLevel"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattLowLevel(Channel, LowLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_LoadDigitalDataBinaryFile(WX218x* pT, BSTR FileName, long Segment)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("LoadDigitalDataBinaryFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("LoadDigitalDataBinaryFile"), &hr, IN_PARAM(FileName), IN_PARAM(Segment), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataBinaryFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataBinaryFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataBinaryFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataBinaryFile"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataBinaryFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataBinaryFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataBinaryFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_LoadDigitalDataBinaryFile(FileName, Segment);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_LoadDigitalDataAsciiFile(WX218x* pT, BSTR FileName, long Segment)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("LoadDigitalDataAsciiFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("LoadDigitalDataAsciiFile"), &hr, IN_PARAM(FileName), IN_PARAM(Segment), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataAsciiFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataAsciiFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataAsciiFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataAsciiFile"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataAsciiFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataAsciiFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadDigitalDataAsciiFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_LoadDigitalDataAsciiFile(FileName, Segment);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigClock(WX218x* pT, WX218xDigitalClockEnum DigClock)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigClock"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigClock"), &hr, IN_PARAM(DigClock), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigClock"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigClock"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigClock(DigClock);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_ConfigureDigPattDigPort(WX218x* pT, WX218xDigPortEnum DigPort)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattDigPort"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("ConfigureDigPattDigPort"), &hr, IN_PARAM(DigPort), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDigPort"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureDigPattDigPort"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_ConfigureDigPattDigPort(DigPort);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_BitDelay(WX218x* pT, BSTR Channel, long Index, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_BitDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_BitDelay"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_BitDelay"), &hr, IN_PARAM(Channel), IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitDelay"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitDelay"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.BitDelay"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_BitDelay(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_BitDelay(WX218x* pT, BSTR Channel, long Index, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_BitDelay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_BitDelay"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitDelay"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitDelay"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitDelay"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPatternOutput_Delay_RangeCheck(_T("put_BitDelay"), Channel, Index, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.BitDelay"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_BitDelay(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_BitHighLevel(WX218x* pT, BSTR Channel, long Index, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_BitHighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_BitHighLevel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_BitHighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitHighLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitHighLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.BitHighLevel"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E-001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_BitHighLevel(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_BitHighLevel(WX218x* pT, BSTR Channel, long Index, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_BitHighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_BitHighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitHighLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitHighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitHighLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPatternOutput_HighLevel_RangeCheck(_T("put_BitHighLevel"), Channel, Index, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.BitHighLevel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_BitHighLevel(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_BitLowLevel(WX218x* pT, BSTR Channel, long Index, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_BitLowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_BitLowLevel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_BitLowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitLowLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitLowLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.BitLowLevel"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_BitLowLevel(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_BitLowLevel(WX218x* pT, BSTR Channel, long Index, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_BitLowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_BitLowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitLowLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitLowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitLowLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPatternOutput_LowLevel_RangeCheck(_T("put_BitLowLevel"), Channel, Index, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.BitLowLevel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_BitLowLevel(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_DelayMode(WX218x* pT, BSTR Channel, WX218xDigPatternDelayModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_DelayMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DelayMode"), _T("val"));
	*val = (WX218xDigPatternDelayModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_DelayMode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DelayMode"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DelayMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DelayMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DelayMode"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DelayMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xDigPatternDelayModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xDigPatternDelayModeEnum>(_T("IWX218xDigitalPatternOutput.DelayMode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xDigPatternDelayModeCommon;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_DelayMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_DelayMode(WX218x* pT, BSTR Channel, WX218xDigPatternDelayModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_DelayMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_DelayMode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DelayMode"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DelayMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DelayMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DelayMode"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DelayMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xDigPatternDelayModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xDigPatternDelayModeEnum>(_T("IWX218xDigitalPatternOutput.DelayMode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_DelayMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_LevelMode(WX218x* pT, BSTR Channel, WX218xDigPatternLevelModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_LevelMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LevelMode"), _T("val"));
	*val = (WX218xDigPatternLevelModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_LevelMode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LevelMode"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LevelMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LevelMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LevelMode"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LevelMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xDigPatternLevelModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xDigPatternLevelModeEnum>(_T("IWX218xDigitalPatternOutput.LevelMode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xDigPatternLevelModeCommon;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_LevelMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_LevelMode(WX218x* pT, BSTR Channel, WX218xDigPatternLevelModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_LevelMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_LevelMode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LevelMode"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LevelMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LevelMode"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LevelMode"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LevelMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xDigPatternLevelModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xDigPatternLevelModeEnum>(_T("IWX218xDigitalPatternOutput.LevelMode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_LevelMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_BitEnabled(WX218x* pT, BSTR Channel, long Index, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_BitEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_BitEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_BitEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Index), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitEnabled"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_BitEnabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xDigitalPatternOutput.BitEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_BitEnabled(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_BitEnabled(WX218x* pT, BSTR Channel, long Index, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_BitEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_BitEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Index), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitEnabled"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_BitEnabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xDigitalPatternOutput.BitEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_BitEnabled(Channel, Index, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_Delay(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Delay"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_Delay"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Delay"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Delay"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Delay"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Delay"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Delay"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.Delay"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_Delay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_Delay(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_Delay"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_Delay"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Delay"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Delay"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Delay"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Delay"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Delay"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPatternOutput_CommonDelay_RangeCheck(_T("put_Delay"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.Delay"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_Delay(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xDigitalPatternOutput.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xDigitalPatternOutput.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_HighLevel(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_HighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_HighLevel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_HighLevel"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.HighLevel"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E-001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_HighLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_HighLevel(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_HighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_HighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPatternOutput_HighLevel1_RangeCheck(_T("put_HighLevel"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.HighLevel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_HighLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_LowLevel(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_LowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LowLevel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_LowLevel"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.LowLevel"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_LowLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_LowLevel(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_LowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_LowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xDigitalPatternOutput_LowLevel1_RangeCheck(_T("put_LowLevel"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xDigitalPatternOutput.LowLevel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_LowLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_PodPresent(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_PodPresent"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_PodPresent"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_PodPresent"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_PodPresent"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_PodPresent"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_PodPresent"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_PodPresent"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_PodPresent"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		*val = 0;

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_PodPresent(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_EmphasisEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_EmphasisEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_EmphasisEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_EmphasisEnabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_EmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_EmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_EmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_EmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_EmphasisEnabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xDigitalPatternOutput.EmphasisEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_EmphasisEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_EmphasisEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_EmphasisEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_EmphasisEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_EmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_EmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_EmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_EmphasisEnabled"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_EmphasisEnabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xDigitalPatternOutput.EmphasisEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_EmphasisEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_FormatData(WX218x* pT, BSTR Channel, WX218xDigFormatDataEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_FormatData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FormatData"), _T("val"));
	*val = (WX218xDigFormatDataEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_FormatData"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FormatData"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FormatData"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FormatData"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FormatData"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FormatData"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xDigFormatDataEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xDigFormatDataEnum>(_T("IWX218xDigitalPatternOutput.FormatData"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xDigFormatDataCommon;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_FormatData(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_FormatData(WX218x* pT, BSTR Channel, WX218xDigFormatDataEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_FormatData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_FormatData"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FormatData"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FormatData"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FormatData"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FormatData"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FormatData"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xDigFormatDataEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xDigFormatDataEnum>(_T("IWX218xDigitalPatternOutput.FormatData"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_FormatData(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_ArbResolution(WX218x* pT, BSTR Channel, WX218xArbitraryResolutionEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_ArbResolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ArbResolution"), _T("val"));
	*val = (WX218xArbitraryResolutionEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_ArbResolution"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ArbResolution"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ArbResolution"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ArbResolution"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ArbResolution"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ArbResolution"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_ArbResolution(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_ArbResolution(WX218x* pT, BSTR Channel, WX218xArbitraryResolutionEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_ArbResolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_ArbResolution"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ArbResolution"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ArbResolution"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ArbResolution"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ArbResolution"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ArbResolution"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_ArbResolution(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_DigClock(WX218x* pT, WX218xDigitalClockEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_DigClock"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DigClock"), _T("val"));
	*val = (WX218xDigitalClockEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_DigClock"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigClock"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigClock"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_DigClock(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_DigClock(WX218x* pT, WX218xDigitalClockEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_DigClock"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_DigClock"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigClock"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigClock"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigClock"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_DigClock(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_get_DigPort(WX218x* pT, WX218xDigPortEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("get_DigPort"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DigPort"), _T("val"));
	*val = (WX218xDigPortEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("get_DigPort"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigPort"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DigPort"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xDigPortEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xDigPortEnum>(_T("IWX218xDigitalPatternOutput.DigPort"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xDigPortPortBoth;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_get_DigPort(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xDigitalPatternOutput_put_DigPort(WX218x* pT, WX218xDigPortEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xDigitalPatternOutput), _T("IWX218xDigitalPatternOutput"), _T("put_DigPort"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xDigitalPatternOutput"), _T("put_DigPort"), &hr, IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigPort"));
		}
		else if (pT->InstrumentIsModel(_T("WX2182B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WS835X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX218XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigPort"));
		}
		else if (pT->InstrumentInFamily(_T("WX128XB-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DigPort"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xDigPortEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xDigPortEnum>(_T("IWX218xDigitalPatternOutput.DigPort"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xDigitalPatternOutput_put_DigPort(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpAmplDepth(WX218x* pT, BSTR Channel, double AmplDepth)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("ConfigureChirpAmplDepth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("ConfigureChirpAmplDepth"), &hr, IN_PARAM(Channel), IN_PARAM(AmplDepth), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureChirpAmplDepth"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_ConfigureChirpAmplDepth(Channel, AmplDepth);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("ConfigureChirpEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("ConfigureChirpEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Enabled), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureChirpEnabled"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_ConfigureChirpEnabled(Channel, Enabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpFreqDirection(WX218x* pT, BSTR Channel, WX218xChirpFreqDirectionEnum FreqDirection)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("ConfigureChirpFreqDirection"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("ConfigureChirpFreqDirection"), &hr, IN_PARAM(Channel), IN_PARAM(FreqDirection), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureChirpFreqDirection"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_ConfigureChirpFreqDirection(Channel, FreqDirection);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpFreqSpacing(WX218x* pT, BSTR Channel, WX218xChirpFreqSpacingEnum FreqSpacing)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("ConfigureChirpFreqSpacing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("ConfigureChirpFreqSpacing"), &hr, IN_PARAM(Channel), IN_PARAM(FreqSpacing), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureChirpFreqSpacing"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_ConfigureChirpFreqSpacing(Channel, FreqSpacing);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpMarkerFreq(WX218x* pT, BSTR Channel, double MarkerFreq)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("ConfigureChirpMarkerFreq"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("ConfigureChirpMarkerFreq"), &hr, IN_PARAM(Channel), IN_PARAM(MarkerFreq), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureChirpMarkerFreq"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_ConfigureChirpMarkerFreq(Channel, MarkerFreq);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpRepetition(WX218x* pT, BSTR Channel, double Repetition)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("ConfigureChirpRepetition"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("ConfigureChirpRepetition"), &hr, IN_PARAM(Channel), IN_PARAM(Repetition), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureChirpRepetition"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_ConfigureChirpRepetition(Channel, Repetition);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpStartFreq(WX218x* pT, BSTR Channel, double StartFreq)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("ConfigureChirpStartFreq"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("ConfigureChirpStartFreq"), &hr, IN_PARAM(Channel), IN_PARAM(StartFreq), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureChirpStartFreq"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_ConfigureChirpStartFreq(Channel, StartFreq);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpStopFreq(WX218x* pT, BSTR Channel, double StopFreq)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("ConfigureChirpStopFreq"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("ConfigureChirpStopFreq"), &hr, IN_PARAM(Channel), IN_PARAM(StopFreq), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureChirpStopFreq"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_ConfigureChirpStopFreq(Channel, StopFreq);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpWidth(WX218x* pT, BSTR Channel, double Width)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("ConfigureChirpWidth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("ConfigureChirpWidth"), &hr, IN_PARAM(Channel), IN_PARAM(Width), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureChirpWidth"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_ConfigureChirpWidth(Channel, Width);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpAmplDirection(WX218x* pT, BSTR Channel, WX218xChirpAmplitudeDirectionEnum AmplDirection)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("ConfigureChirpAmplDirection"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("ConfigureChirpAmplDirection"), &hr, IN_PARAM(Channel), IN_PARAM(AmplDirection), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureChirpAmplDirection"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_ConfigureChirpAmplDirection(Channel, AmplDirection);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_ConfigureChirpAmplSpacing(WX218x* pT, BSTR Channel, WX218xChirpAmplSpacingEnum AmplSpacing)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("ConfigureChirpAmplSpacing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("ConfigureChirpAmplSpacing"), &hr, IN_PARAM(Channel), IN_PARAM(AmplSpacing), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureChirpAmplSpacing"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_ConfigureChirpAmplSpacing(Channel, AmplSpacing);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_get_Width(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("get_Width"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Width"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("get_Width"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Width"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.Width"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-005;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_get_Width(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_put_Width(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("put_Width"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("put_Width"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Width"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xCHIRP_Width_RangeCheck(_T("put_Width"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.Width"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_put_Width(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_get_Repetition(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("get_Repetition"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Repetition"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("get_Repetition"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Repetition"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.Repetition"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-004;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_get_Repetition(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_put_Repetition(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("put_Repetition"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("put_Repetition"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Repetition"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xCHIRP_Repetition_RangeCheck(_T("put_Repetition"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.Repetition"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_put_Repetition(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_get_StartFrequency(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("get_StartFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_StartFrequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("get_StartFrequency"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_StartFrequency"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.StartFrequency"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+007;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_get_StartFrequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_put_StartFrequency(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("put_StartFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("put_StartFrequency"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_StartFrequency"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xCHIRP_StartFrequency_RangeCheck(_T("put_StartFrequency"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.StartFrequency"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_put_StartFrequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_get_StopFrequency(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("get_StopFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_StopFrequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("get_StopFrequency"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_StopFrequency"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.StopFrequency"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E+007;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_get_StopFrequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_put_StopFrequency(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("put_StopFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("put_StopFrequency"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_StopFrequency"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xCHIRP_StopFrequency_RangeCheck(_T("put_StopFrequency"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.StopFrequency"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_put_StopFrequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_get_MarkerFrequency(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("get_MarkerFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_MarkerFrequency"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("get_MarkerFrequency"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_MarkerFrequency"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.MarkerFrequency"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+007;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_get_MarkerFrequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_put_MarkerFrequency(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("put_MarkerFrequency"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("put_MarkerFrequency"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_MarkerFrequency"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xCHIRP_MarkerFrequency_RangeCheck(_T("put_MarkerFrequency"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.MarkerFrequency"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_put_MarkerFrequency(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_get_AmplDepth(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("get_AmplDepth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AmplDepth"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("get_AmplDepth"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_AmplDepth"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.AmplDepth"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E+001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_get_AmplDepth(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_put_AmplDepth(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("put_AmplDepth"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("put_AmplDepth"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_AmplDepth"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xCHIRP_AmplDepth_RangeCheck(_T("put_AmplDepth"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xCHIRP.AmplDepth"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_put_AmplDepth(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_get_FreqDirection(WX218x* pT, BSTR Channel, WX218xChirpFreqDirectionEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("get_FreqDirection"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FreqDirection"), _T("val"));
	*val = (WX218xChirpFreqDirectionEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("get_FreqDirection"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FreqDirection"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xChirpFreqDirectionEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xChirpFreqDirectionEnum>(_T("IWX218xCHIRP.FreqDirection"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xChirpFreqDirectionUp;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_get_FreqDirection(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_put_FreqDirection(WX218x* pT, BSTR Channel, WX218xChirpFreqDirectionEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("put_FreqDirection"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("put_FreqDirection"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FreqDirection"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xChirpFreqDirectionEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xChirpFreqDirectionEnum>(_T("IWX218xCHIRP.FreqDirection"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_put_FreqDirection(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_get_FreqSpacing(WX218x* pT, BSTR Channel, WX218xChirpFreqSpacingEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("get_FreqSpacing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FreqSpacing"), _T("val"));
	*val = (WX218xChirpFreqSpacingEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("get_FreqSpacing"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FreqSpacing"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xChirpFreqSpacingEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xChirpFreqSpacingEnum>(_T("IWX218xCHIRP.FreqSpacing"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xChirpFreqSpacingLinear;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_get_FreqSpacing(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_put_FreqSpacing(WX218x* pT, BSTR Channel, WX218xChirpFreqSpacingEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("put_FreqSpacing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("put_FreqSpacing"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FreqSpacing"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xChirpFreqSpacingEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xChirpFreqSpacingEnum>(_T("IWX218xCHIRP.FreqSpacing"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_put_FreqSpacing(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_get_AmplDirection(WX218x* pT, BSTR Channel, WX218xChirpAmplitudeDirectionEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("get_AmplDirection"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AmplDirection"), _T("val"));
	*val = (WX218xChirpAmplitudeDirectionEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("get_AmplDirection"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_AmplDirection"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xChirpAmplitudeDirectionEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xChirpAmplitudeDirectionEnum>(_T("IWX218xCHIRP.AmplDirection"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xChirpAmplitudeDirectionUp;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_get_AmplDirection(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_put_AmplDirection(WX218x* pT, BSTR Channel, WX218xChirpAmplitudeDirectionEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("put_AmplDirection"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("put_AmplDirection"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_AmplDirection"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xChirpAmplitudeDirectionEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xChirpAmplitudeDirectionEnum>(_T("IWX218xCHIRP.AmplDirection"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_put_AmplDirection(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_get_AmplSpacing(WX218x* pT, BSTR Channel, WX218xChirpAmplSpacingEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("get_AmplSpacing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_AmplSpacing"), _T("val"));
	*val = (WX218xChirpAmplSpacingEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("get_AmplSpacing"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_AmplSpacing"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xChirpAmplSpacingEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xChirpAmplSpacingEnum>(_T("IWX218xCHIRP.AmplSpacing"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xChirpAmplSpacingLin;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_get_AmplSpacing(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_put_AmplSpacing(WX218x* pT, BSTR Channel, WX218xChirpAmplSpacingEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("put_AmplSpacing"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("put_AmplSpacing"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_AmplSpacing"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xChirpAmplSpacingEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xChirpAmplSpacingEnum>(_T("IWX218xCHIRP.AmplSpacing"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_put_AmplSpacing(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xCHIRP.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xCHIRP_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xCHIRP), _T("IWX218xCHIRP"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xCHIRP"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xCHIRP.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xCHIRP_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_CreateFSKData(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("CreateFSKData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("CreateFSKData"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateFSKData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_CreateFSKData(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_LoadFSKDataFile(WX218x* pT, BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("LoadFSKDataFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("LoadFSKDataFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadFSKDataFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_LoadFSKDataFile(Channel, FileName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_CreateFSKDataAdv(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("CreateFSKDataAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("CreateFSKDataAdv"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateFSKDataAdv"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_CreateFSKDataAdv(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_ConfigureFSKBaud(WX218x* pT, BSTR Channel, double Baud)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("ConfigureFSKBaud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("ConfigureFSKBaud"), &hr, IN_PARAM(Channel), IN_PARAM(Baud), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFSKBaud"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_ConfigureFSKBaud(Channel, Baud);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_ConfigureFSKEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("ConfigureFSKEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("ConfigureFSKEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Enabled), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFSKEnabled"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_ConfigureFSKEnabled(Channel, Enabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_ConfigureFSKMarker(WX218x* pT, BSTR Channel, long Marker)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("ConfigureFSKMarker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("ConfigureFSKMarker"), &hr, IN_PARAM(Channel), IN_PARAM(Marker), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFSKMarker"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_ConfigureFSKMarker(Channel, Marker);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_ConfigureFSKShiftFreq(WX218x* pT, BSTR Channel, double ShiftFreq)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("ConfigureFSKShiftFreq"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("ConfigureFSKShiftFreq"), &hr, IN_PARAM(Channel), IN_PARAM(ShiftFreq), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFSKShiftFreq"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_ConfigureFSKShiftFreq(Channel, ShiftFreq);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_get_ShiftFreq(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("get_ShiftFreq"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ShiftFreq"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("get_ShiftFreq"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ShiftFreq"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFSK.ShiftFreq"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+007;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_get_ShiftFreq(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_put_ShiftFreq(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("put_ShiftFreq"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("put_ShiftFreq"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ShiftFreq"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xFSK_ShiftFreq_RangeCheck(_T("put_ShiftFreq"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFSK.ShiftFreq"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_put_ShiftFreq(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_get_Baud(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("get_Baud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Baud"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("get_Baud"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Baud"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFSK.Baud"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+004;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_get_Baud(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_put_Baud(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("put_Baud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("put_Baud"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Baud"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xFSK_Baud_RangeCheck(_T("put_Baud"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFSK.Baud"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_put_Baud(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_get_Marker(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("get_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Marker"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("get_Marker"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xFSK.Marker"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_get_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_put_Marker(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("put_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("put_Marker"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xFSK_Marker_RangeCheck(_T("put_Marker"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xFSK.Marker"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_put_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xFSK.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFSK_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFSK), _T("IWX218xFSK"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFSK"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xFSK.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFSK_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_CreateASKData(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("CreateASKData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("CreateASKData"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateASKData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_CreateASKData(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_LoadASKDataFile(WX218x* pT, BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("LoadASKDataFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("LoadASKDataFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadASKDataFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_LoadASKDataFile(Channel, FileName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_CreateASKDataAdv(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("CreateASKDataAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("CreateASKDataAdv"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateASKDataAdv"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_CreateASKDataAdv(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_ConfigureASKBaud(WX218x* pT, BSTR Channel, double Baud)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("ConfigureASKBaud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("ConfigureASKBaud"), &hr, IN_PARAM(Channel), IN_PARAM(Baud), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureASKBaud"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_ConfigureASKBaud(Channel, Baud);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_ConfigureASKEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("ConfigureASKEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("ConfigureASKEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Enabled), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureASKEnabled"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_ConfigureASKEnabled(Channel, Enabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_ConfigureASKMarker(WX218x* pT, BSTR Channel, long Marker)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("ConfigureASKMarker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("ConfigureASKMarker"), &hr, IN_PARAM(Channel), IN_PARAM(Marker), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureASKMarker"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_ConfigureASKMarker(Channel, Marker);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_ConfigureASKShiftAmplitude(WX218x* pT, BSTR Channel, double ShiftAmpl)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("ConfigureASKShiftAmplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("ConfigureASKShiftAmplitude"), &hr, IN_PARAM(Channel), IN_PARAM(ShiftAmpl), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureASKShiftAmplitude"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_ConfigureASKShiftAmplitude(Channel, ShiftAmpl);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_ConfigureASKStartAmplitude(WX218x* pT, BSTR Channel, double StartAmpl)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("ConfigureASKStartAmplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("ConfigureASKStartAmplitude"), &hr, IN_PARAM(Channel), IN_PARAM(StartAmpl), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureASKStartAmplitude"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_ConfigureASKStartAmplitude(Channel, StartAmpl);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_get_StartAmplitude(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("get_StartAmplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_StartAmplitude"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("get_StartAmplitude"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_StartAmplitude"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xASK.StartAmplitude"));
		if (!pSimData->GetValue(val))
		{
			*val = 2.000000E+000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_get_StartAmplitude(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_put_StartAmplitude(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("put_StartAmplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("put_StartAmplitude"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_StartAmplitude"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xASK_StartAmplitude_RangeCheck(_T("put_StartAmplitude"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xASK.StartAmplitude"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_put_StartAmplitude(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_get_ShiftAmplitude(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("get_ShiftAmplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ShiftAmplitude"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("get_ShiftAmplitude"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ShiftAmplitude"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xASK.ShiftAmplitude"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_get_ShiftAmplitude(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_put_ShiftAmplitude(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("put_ShiftAmplitude"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("put_ShiftAmplitude"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ShiftAmplitude"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xASK_ShiftAmplitude_RangeCheck(_T("put_ShiftAmplitude"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xASK.ShiftAmplitude"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_put_ShiftAmplitude(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_get_Baud(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("get_Baud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Baud"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("get_Baud"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Baud"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xASK.Baud"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+004;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_get_Baud(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_put_Baud(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("put_Baud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("put_Baud"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Baud"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xASK_Baud_RangeCheck(_T("put_Baud"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xASK.Baud"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_put_Baud(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_get_Marker(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("get_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Marker"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("get_Marker"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xASK.Marker"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_get_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_put_Marker(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("put_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("put_Marker"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xASK_Marker_RangeCheck(_T("put_Marker"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xASK.Marker"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_put_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xASK.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xASK_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xASK), _T("IWX218xASK"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xASK"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xASK.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xASK_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_CreateFHOPFixedData(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("CreateFHOPFixedData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("CreateFHOPFixedData"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateFHOPFixedData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_CreateFHOPFixedData(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_CreateFHOPVariableData(WX218x* pT, BSTR Channel, SAFEARRAY** FreqData, SAFEARRAY** DwellTimeData)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("CreateFHOPVariableData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("CreateFHOPVariableData"), &hr, IN_PARAM(Channel), IN_PARAM(*FreqData), IN_PARAM(*DwellTimeData), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateFHOPVariableData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_CreateFHOPVariableData(Channel, FreqData, DwellTimeData);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_LoadFHOPFixDataFile(WX218x* pT, BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("LoadFHOPFixDataFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("LoadFHOPFixDataFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadFHOPFixDataFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_LoadFHOPFixDataFile(Channel, FileName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_LoadFHOPVarDataFile(WX218x* pT, BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("LoadFHOPVarDataFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("LoadFHOPVarDataFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadFHOPVarDataFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_LoadFHOPVarDataFile(Channel, FileName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_ConfigureFHOPDwellMode(WX218x* pT, BSTR Channel, WX218xFHOPDwellModeEnum DwellMode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("ConfigureFHOPDwellMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("ConfigureFHOPDwellMode"), &hr, IN_PARAM(Channel), IN_PARAM(DwellMode), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFHOPDwellMode"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_ConfigureFHOPDwellMode(Channel, DwellMode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_ConfigureFHOPEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("ConfigureFHOPEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("ConfigureFHOPEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Enabled), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFHOPEnabled"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_ConfigureFHOPEnabled(Channel, Enabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_ConfigureFHOPMarker(WX218x* pT, BSTR Channel, long Marker)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("ConfigureFHOPMarker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("ConfigureFHOPMarker"), &hr, IN_PARAM(Channel), IN_PARAM(Marker), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFHOPMarker"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_ConfigureFHOPMarker(Channel, Marker);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_ConfigureFHOPTime(WX218x* pT, BSTR Channel, double Time)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("ConfigureFHOPTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("ConfigureFHOPTime"), &hr, IN_PARAM(Channel), IN_PARAM(Time), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureFHOPTime"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_ConfigureFHOPTime(Channel, Time);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_get_Time(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("get_Time"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Time"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("get_Time"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Time"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFHOP.Time"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-005;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_get_Time(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_put_Time(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("put_Time"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("put_Time"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Time"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xFHOP_Time_RangeCheck(_T("put_Time"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xFHOP.Time"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_put_Time(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_get_Marker(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("get_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Marker"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("get_Marker"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xFHOP.Marker"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_get_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_put_Marker(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("put_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("put_Marker"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xFHOP_Marker_RangeCheck(_T("put_Marker"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xFHOP.Marker"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_put_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_get_DwellMode(WX218x* pT, BSTR Channel, WX218xFHOPDwellModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("get_DwellMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DwellMode"), _T("val"));
	*val = (WX218xFHOPDwellModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("get_DwellMode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DwellMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xFHOPDwellModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xFHOPDwellModeEnum>(_T("IWX218xFHOP.DwellMode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xFHOPDwellModeFixed;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_get_DwellMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_put_DwellMode(WX218x* pT, BSTR Channel, WX218xFHOPDwellModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("put_DwellMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("put_DwellMode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DwellMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xFHOPDwellModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xFHOPDwellModeEnum>(_T("IWX218xFHOP.DwellMode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_put_DwellMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xFHOP.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xFHOP_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xFHOP), _T("IWX218xFHOP"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xFHOP"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xFHOP.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xFHOP_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_CreateAHOPFixedData(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("CreateAHOPFixedData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("CreateAHOPFixedData"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateAHOPFixedData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_CreateAHOPFixedData(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_CreateAHOPVariableData(WX218x* pT, BSTR Channel, SAFEARRAY** AmplData, SAFEARRAY** DwellTimeData)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("CreateAHOPVariableData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("CreateAHOPVariableData"), &hr, IN_PARAM(Channel), IN_PARAM(*AmplData), IN_PARAM(*DwellTimeData), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateAHOPVariableData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_CreateAHOPVariableData(Channel, AmplData, DwellTimeData);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_LoadAHOPFixDataFile(WX218x* pT, BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("LoadAHOPFixDataFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("LoadAHOPFixDataFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadAHOPFixDataFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_LoadAHOPFixDataFile(Channel, FileName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_LoadAHOPVarDataFile(WX218x* pT, BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("LoadAHOPVarDataFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("LoadAHOPVarDataFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadAHOPVarDataFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_LoadAHOPVarDataFile(Channel, FileName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_ConfigureAHOPDwellMode(WX218x* pT, BSTR Channel, WX218xAHOPDwellModeEnum DwellMode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("ConfigureAHOPDwellMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("ConfigureAHOPDwellMode"), &hr, IN_PARAM(Channel), IN_PARAM(DwellMode), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureAHOPDwellMode"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_ConfigureAHOPDwellMode(Channel, DwellMode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_ConfigureAHOPEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL Enabled)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("ConfigureAHOPEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("ConfigureAHOPEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(Enabled), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureAHOPEnabled"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_ConfigureAHOPEnabled(Channel, Enabled);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_ConfigureAHOPMarker(WX218x* pT, BSTR Channel, long Marker)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("ConfigureAHOPMarker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("ConfigureAHOPMarker"), &hr, IN_PARAM(Channel), IN_PARAM(Marker), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureAHOPMarker"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_ConfigureAHOPMarker(Channel, Marker);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_ConfigureAHOPTime(WX218x* pT, BSTR Channel, double Time)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("ConfigureAHOPTime"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("ConfigureAHOPTime"), &hr, IN_PARAM(Channel), IN_PARAM(Time), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureAHOPTime"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_ConfigureAHOPTime(Channel, Time);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_get_Time(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("get_Time"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Time"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("get_Time"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Time"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xAHOP.Time"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-005;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_get_Time(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_put_Time(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("put_Time"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("put_Time"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Time"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xAHOP_Time_RangeCheck(_T("put_Time"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xAHOP.Time"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_put_Time(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_get_Marker(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("get_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Marker"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("get_Marker"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xAHOP.Marker"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_get_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_put_Marker(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("put_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("put_Marker"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xAHOP_Marker_RangeCheck(_T("put_Marker"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xAHOP.Marker"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_put_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_get_DwellMode(WX218x* pT, BSTR Channel, WX218xAHOPDwellModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("get_DwellMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_DwellMode"), _T("val"));
	*val = (WX218xAHOPDwellModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("get_DwellMode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_DwellMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xAHOPDwellModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xAHOPDwellModeEnum>(_T("IWX218xAHOP.DwellMode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xAHOPDwellModeFixed;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_get_DwellMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_put_DwellMode(WX218x* pT, BSTR Channel, WX218xAHOPDwellModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("put_DwellMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("put_DwellMode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_DwellMode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xAHOPDwellModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xAHOPDwellModeEnum>(_T("IWX218xAHOP.DwellMode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_put_DwellMode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xAHOP.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xAHOP_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xAHOP), _T("IWX218xAHOP"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xAHOP"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xAHOP.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xAHOP_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_CreatePatternData(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("CreatePatternData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("CreatePatternData"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreatePatternData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_CreatePatternData(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_ConfigurePatternBaud(WX218x* pT, BSTR Channel, double Baud)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("ConfigurePatternBaud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("ConfigurePatternBaud"), &hr, IN_PARAM(Channel), IN_PARAM(Baud), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternBaud"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_ConfigurePatternBaud(Channel, Baud);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_ConfigurePatternHighLevel(WX218x* pT, BSTR Channel, double HighLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("ConfigurePatternHighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("ConfigurePatternHighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(HighLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternHighLevel"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_ConfigurePatternHighLevel(Channel, HighLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_ConfigurePatternLength(WX218x* pT, BSTR Channel, long Length)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("ConfigurePatternLength"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("ConfigurePatternLength"), &hr, IN_PARAM(Channel), IN_PARAM(Length), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternLength"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_ConfigurePatternLength(Channel, Length);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_ConfigurePatternLevel(WX218x* pT, BSTR Channel, long Level)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("ConfigurePatternLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("ConfigurePatternLevel"), &hr, IN_PARAM(Channel), IN_PARAM(Level), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternLevel"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_ConfigurePatternLevel(Channel, Level);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_ConfigurePatternLoop(WX218x* pT, BSTR Channel, long Loop)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("ConfigurePatternLoop"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("ConfigurePatternLoop"), &hr, IN_PARAM(Channel), IN_PARAM(Loop), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternLoop"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_ConfigurePatternLoop(Channel, Loop);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_ConfigurePatternLowLevel(WX218x* pT, BSTR Channel, double LowLevel)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("ConfigurePatternLowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("ConfigurePatternLowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(LowLevel), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternLowLevel"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_ConfigurePatternLowLevel(Channel, LowLevel);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_ConfigurePatternMode(WX218x* pT, BSTR Channel, WX218xPatternModeEnum Mode)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("ConfigurePatternMode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("ConfigurePatternMode"), &hr, IN_PARAM(Channel), IN_PARAM(Mode), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternMode"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_ConfigurePatternMode(Channel, Mode);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_ConfigurePatternPreamble(WX218x* pT, BSTR Channel, long Preamble)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("ConfigurePatternPreamble"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("ConfigurePatternPreamble"), &hr, IN_PARAM(Channel), IN_PARAM(Preamble), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternPreamble"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_ConfigurePatternPreamble(Channel, Preamble);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_ConfigurePatternPredType(WX218x* pT, BSTR Channel, WX218xPatternPredefinedTypeEnum Type)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("ConfigurePatternPredType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("ConfigurePatternPredType"), &hr, IN_PARAM(Channel), IN_PARAM(Type), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternPredType"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_ConfigurePatternPredType(Channel, Type);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_get_Baud(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("get_Baud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Baud"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("get_Baud"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Baud"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPattern.Baud"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+007;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_get_Baud(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_put_Baud(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("put_Baud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("put_Baud"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Baud"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPattern_Baud_RangeCheck(_T("put_Baud"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPattern.Baud"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_put_Baud(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_get_Level(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("get_Level"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Level"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("get_Level"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Level"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xPattern.Level"));
		if (!pSimData->GetValue(val))
		{
			*val = 2;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_get_Level(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_put_Level(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("put_Level"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("put_Level"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Level"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPattern_Level_RangeCheck(_T("put_Level"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xPattern.Level"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_put_Level(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_get_Mode(WX218x* pT, BSTR Channel, WX218xPatternModeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("get_Mode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Mode"), _T("val"));
	*val = (WX218xPatternModeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("get_Mode"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Mode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPatternModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPatternModeEnum>(_T("IWX218xPattern.Mode"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xPatternModePredefined;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_get_Mode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_put_Mode(WX218x* pT, BSTR Channel, WX218xPatternModeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("put_Mode"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("put_Mode"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Mode"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPatternModeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPatternModeEnum>(_T("IWX218xPattern.Mode"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_put_Mode(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_get_PredefinedType(WX218x* pT, BSTR Channel, WX218xPatternPredefinedTypeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("get_PredefinedType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_PredefinedType"), _T("val"));
	*val = (WX218xPatternPredefinedTypeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("get_PredefinedType"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_PredefinedType"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPatternPredefinedTypeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPatternPredefinedTypeEnum>(_T("IWX218xPattern.PredefinedType"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xPatternPredefinedTypePRBS7;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_get_PredefinedType(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_put_PredefinedType(WX218x* pT, BSTR Channel, WX218xPatternPredefinedTypeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("put_PredefinedType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("put_PredefinedType"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_PredefinedType"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPatternPredefinedTypeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPatternPredefinedTypeEnum>(_T("IWX218xPattern.PredefinedType"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_put_PredefinedType(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_get_HighLevel(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("get_HighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_HighLevel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("get_HighLevel"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_HighLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPattern.HighLevel"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_get_HighLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_put_HighLevel(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("put_HighLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("put_HighLevel"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_HighLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPattern_HighLevel_RangeCheck(_T("put_HighLevel"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPattern.HighLevel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_put_HighLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_get_LowLevel(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("get_LowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LowLevel"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("get_LowLevel"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LowLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPattern.LowLevel"));
		if (!pSimData->GetValue(val))
		{
			*val = -1.000000E+000;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_get_LowLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_put_LowLevel(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("put_LowLevel"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("put_LowLevel"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LowLevel"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPattern_LowLevel_RangeCheck(_T("put_LowLevel"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPattern.LowLevel"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_put_LowLevel(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_get_Loop(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("get_Loop"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Loop"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("get_Loop"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Loop"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xPattern.Loop"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_get_Loop(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_put_Loop(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("put_Loop"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("put_Loop"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Loop"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPattern_Loop_RangeCheck(_T("put_Loop"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xPattern.Loop"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_put_Loop(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_get_Preamble(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("get_Preamble"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Preamble"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("get_Preamble"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Preamble"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xPattern.Preamble"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_get_Preamble(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_put_Preamble(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("put_Preamble"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("put_Preamble"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Preamble"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPattern_Preamble_RangeCheck(_T("put_Preamble"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xPattern.Preamble"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_put_Preamble(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_get_Length(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("get_Length"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Length"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("get_Length"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Length"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xPattern.Length"));
		if (!pSimData->GetValue(val))
		{
			*val = 32;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_get_Length(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_put_Length(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("put_Length"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("put_Length"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Length"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPattern_Length_RangeCheck(_T("put_Length"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xPattern.Length"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_put_Length(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPattern_get_Composer(WX218x* pT, IWX218xPatternComposer** val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPattern), _T("IWX218xPattern"), _T("get_Composer"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Composer"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPattern"), _T("get_Composer"), &hr, OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Composer"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPattern_get_Composer(val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_CreatePatternComposerFastData(WX218x* pT, BSTR Channel, SAFEARRAY** AmplLevel, SAFEARRAY** DwellTime)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("CreatePatternComposerFastData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("CreatePatternComposerFastData"), &hr, IN_PARAM(Channel), IN_PARAM(*AmplLevel), IN_PARAM(*DwellTime), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreatePatternComposerFastData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_CreatePatternComposerFastData(Channel, AmplLevel, DwellTime);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_LoadPatternFile(WX218x* pT, BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("LoadPatternFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("LoadPatternFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadPatternFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_LoadPatternFile(Channel, FileName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_CreatePatternComposerLinearData(WX218x* pT, BSTR Channel, SAFEARRAY** AmplLevel, SAFEARRAY** DwellTime)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("CreatePatternComposerLinearData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("CreatePatternComposerLinearData"), &hr, IN_PARAM(Channel), IN_PARAM(*AmplLevel), IN_PARAM(*DwellTime), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreatePatternComposerLinearData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_CreatePatternComposerLinearData(Channel, AmplLevel, DwellTime);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_ConfigurePatternCompFastStart(WX218x* pT, BSTR Channel, double FastStart)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("ConfigurePatternCompFastStart"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("ConfigurePatternCompFastStart"), &hr, IN_PARAM(Channel), IN_PARAM(FastStart), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternCompFastStart"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternCompFastStart"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_ConfigurePatternCompFastStart(Channel, FastStart);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_ConfigurePatternCompLinearStart(WX218x* pT, BSTR Channel, double LinearStart)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("ConfigurePatternCompLinearStart"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("ConfigurePatternCompLinearStart"), &hr, IN_PARAM(Channel), IN_PARAM(LinearStart), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternCompLinearStart"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternCompLinearStart"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_ConfigurePatternCompLinearStart(Channel, LinearStart);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_ConfigurePatternCompResolution(WX218x* pT, BSTR Channel, double Resolution)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("ConfigurePatternCompResolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("ConfigurePatternCompResolution"), &hr, IN_PARAM(Channel), IN_PARAM(Resolution), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternCompResolution"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_ConfigurePatternCompResolution(Channel, Resolution);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_ConfigurePatternCompResType(WX218x* pT, BSTR Channel, WX218xPatternResTypeEnum ResType)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("ConfigurePatternCompResType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("ConfigurePatternCompResType"), &hr, IN_PARAM(Channel), IN_PARAM(ResType), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternCompResType"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_ConfigurePatternCompResType(Channel, ResType);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_ConfigurePatternCompTransType(WX218x* pT, BSTR Channel, WX218xPatternComposerTransitionTypeEnum TransitionType)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("ConfigurePatternCompTransType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("ConfigurePatternCompTransType"), &hr, IN_PARAM(Channel), IN_PARAM(TransitionType), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePatternCompTransType"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_ConfigurePatternCompTransType(Channel, TransitionType);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_get_TransitionType(WX218x* pT, BSTR Channel, WX218xPatternComposerTransitionTypeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("get_TransitionType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_TransitionType"), _T("val"));
	*val = (WX218xPatternComposerTransitionTypeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("get_TransitionType"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_TransitionType"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPatternComposerTransitionTypeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPatternComposerTransitionTypeEnum>(_T("IWX218xPatternComposer.TransitionType"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xPatternComposerTransitionTypeFast;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_get_TransitionType(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_put_TransitionType(WX218x* pT, BSTR Channel, WX218xPatternComposerTransitionTypeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("put_TransitionType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("put_TransitionType"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_TransitionType"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPatternComposerTransitionTypeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPatternComposerTransitionTypeEnum>(_T("IWX218xPatternComposer.TransitionType"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_put_TransitionType(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_get_LinearStart(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("get_LinearStart"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_LinearStart"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("get_LinearStart"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_LinearStart"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPatternComposer.LinearStart"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E-001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_get_LinearStart(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_put_LinearStart(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("put_LinearStart"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("put_LinearStart"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_LinearStart"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPatternComposer_FastStart_RangeCheck(_T("put_LinearStart"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPatternComposer.LinearStart"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_put_LinearStart(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_get_Resolution(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("get_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Resolution"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("get_Resolution"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Resolution"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPatternComposer.Resolution"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E-009;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_get_Resolution(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_put_Resolution(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("put_Resolution"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("put_Resolution"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Resolution"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPatternComposer_Resolution_RangeCheck(_T("put_Resolution"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPatternComposer.Resolution"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_put_Resolution(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_get_ResolutionType(WX218x* pT, BSTR Channel, WX218xPatternResTypeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("get_ResolutionType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ResolutionType"), _T("val"));
	*val = (WX218xPatternResTypeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("get_ResolutionType"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ResolutionType"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPatternResTypeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPatternResTypeEnum>(_T("IWX218xPatternComposer.ResolutionType"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xPatternResTypeAuto;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_get_ResolutionType(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_put_ResolutionType(WX218x* pT, BSTR Channel, WX218xPatternResTypeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("put_ResolutionType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("put_ResolutionType"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ResolutionType"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPatternResTypeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPatternResTypeEnum>(_T("IWX218xPatternComposer.ResolutionType"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_put_ResolutionType(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_get_FastStart(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("get_FastStart"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_FastStart"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("get_FastStart"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_FastStart"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPatternComposer.FastStart"));
		if (!pSimData->GetValue(val))
		{
			*val = 5.000000E-001;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_get_FastStart(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPatternComposer_put_FastStart(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPatternComposer), _T("IWX218xPatternComposer"), _T("put_FastStart"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPatternComposer"), _T("put_FastStart"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_FastStart"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPatternComposer_FastStart_RangeCheck(_T("put_FastStart"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPatternComposer.FastStart"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPatternComposer_put_FastStart(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_CreatePSKData(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("CreatePSKData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("CreatePSKData"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreatePSKData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_CreatePSKData(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_CreatePSKUserData(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("CreatePSKUserData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("CreatePSKUserData"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreatePSKUserData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_CreatePSKUserData(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_LoadPSKDataFile(WX218x* pT, BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("LoadPSKDataFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("LoadPSKDataFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadPSKDataFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_LoadPSKDataFile(Channel, FileName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_LoadPSKUserDataFile(WX218x* pT, BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("LoadPSKUserDataFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("LoadPSKUserDataFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadPSKUserDataFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_LoadPSKUserDataFile(Channel, FileName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_CreatePSKDataAdv(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("CreatePSKDataAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("CreatePSKDataAdv"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreatePSKDataAdv"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_CreatePSKDataAdv(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_ConfigurePSKBaud(WX218x* pT, BSTR Channel, double Baud)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("ConfigurePSKBaud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("ConfigurePSKBaud"), &hr, IN_PARAM(Channel), IN_PARAM(Baud), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePSKBaud"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_ConfigurePSKBaud(Channel, Baud);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_ConfigurePSKCarrierState(WX218x* pT, BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("ConfigurePSKCarrierState"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("ConfigurePSKCarrierState"), &hr, IN_PARAM(Channel), IN_PARAM(State), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePSKCarrierState"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_ConfigurePSKCarrierState(Channel, State);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_ConfigurePSKState(WX218x* pT, BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("ConfigurePSKState"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("ConfigurePSKState"), &hr, IN_PARAM(Channel), IN_PARAM(State), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePSKState"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_ConfigurePSKState(Channel, State);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_ConfigurePSKMarker(WX218x* pT, BSTR Channel, long Marker)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("ConfigurePSKMarker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("ConfigurePSKMarker"), &hr, IN_PARAM(Channel), IN_PARAM(Marker), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePSKMarker"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_ConfigurePSKMarker(Channel, Marker);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_ConfigurePSKRate(WX218x* pT, BSTR Channel, double Rate)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("ConfigurePSKRate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("ConfigurePSKRate"), &hr, IN_PARAM(Channel), IN_PARAM(Rate), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePSKRate"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_ConfigurePSKRate(Channel, Rate);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_ConfigurePSKShiftPhase(WX218x* pT, BSTR Channel, double ShiftPhase)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("ConfigurePSKShiftPhase"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("ConfigurePSKShiftPhase"), &hr, IN_PARAM(Channel), IN_PARAM(ShiftPhase), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePSKShiftPhase"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_ConfigurePSKShiftPhase(Channel, ShiftPhase);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_ConfigurePSKStartPhase(WX218x* pT, BSTR Channel, double StartPhase)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("ConfigurePSKStartPhase"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("ConfigurePSKStartPhase"), &hr, IN_PARAM(Channel), IN_PARAM(StartPhase), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePSKStartPhase"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_ConfigurePSKStartPhase(Channel, StartPhase);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_ConfigurePSKType(WX218x* pT, BSTR Channel, WX218xPskTypeEnum Type)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("ConfigurePSKType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("ConfigurePSKType"), &hr, IN_PARAM(Channel), IN_PARAM(Type), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigurePSKType"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_ConfigurePSKType(Channel, Type);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_get_StartPhase(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("get_StartPhase"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_StartPhase"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("get_StartPhase"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_StartPhase"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPSK.StartPhase"));
		if (!pSimData->GetValue(val))
		{
			*val = 0;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_get_StartPhase(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_put_StartPhase(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("put_StartPhase"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("put_StartPhase"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_StartPhase"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPSK_StartPhase_RangeCheck(_T("put_StartPhase"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPSK.StartPhase"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_put_StartPhase(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_get_ShiftPhase(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("get_ShiftPhase"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_ShiftPhase"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("get_ShiftPhase"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_ShiftPhase"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPSK.ShiftPhase"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.800000E+002;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_get_ShiftPhase(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_put_ShiftPhase(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("put_ShiftPhase"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("put_ShiftPhase"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_ShiftPhase"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPSK_ShiftPhase_RangeCheck(_T("put_ShiftPhase"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPSK.ShiftPhase"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_put_ShiftPhase(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_get_Rate(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("get_Rate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Rate"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("get_Rate"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Rate"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Rate"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPSK.Rate"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+007;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_get_Rate(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_put_Rate(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("put_Rate"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("put_Rate"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Rate"));
		}
		else if (pT->InstrumentInFamily(_T("WX2184X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Rate"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPSK_Rate_RangeCheck(_T("put_Rate"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPSK.Rate"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_put_Rate(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_get_Type(WX218x* pT, BSTR Channel, WX218xPskTypeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("get_Type"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Type"), _T("val"));
	*val = (WX218xPskTypeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("get_Type"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Type"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPskTypeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPskTypeEnum>(_T("IWX218xPSK.Type"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xPskTypePSK;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_get_Type(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_put_Type(WX218x* pT, BSTR Channel, WX218xPskTypeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("put_Type"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("put_Type"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Type"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xPskTypeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xPskTypeEnum>(_T("IWX218xPSK.Type"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_put_Type(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_get_Marker(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("get_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Marker"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("get_Marker"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xPSK.Marker"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_get_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_put_Marker(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("put_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("put_Marker"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPSK_Marker_RangeCheck(_T("put_Marker"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xPSK.Marker"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_put_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_get_Baud(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("get_Baud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Baud"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("get_Baud"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Baud"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPSK.Baud"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+006;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_get_Baud(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_put_Baud(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("put_Baud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("put_Baud"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Baud"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xPSK_Baud_RangeCheck(_T("put_Baud"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xPSK.Baud"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_put_Baud(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_get_CarrierEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("get_CarrierEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_CarrierEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("get_CarrierEnabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_CarrierEnabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xPSK.CarrierEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_get_CarrierEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_put_CarrierEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("put_CarrierEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("put_CarrierEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_CarrierEnabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xPSK.CarrierEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_put_CarrierEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xPSK.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xPSK_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xPSK), _T("IWX218xPSK"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xPSK"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xPSK.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xPSK_put_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_CreateQAMData(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("CreateQAMData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("CreateQAMData"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX1281B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMData"));
		}
		else if (pT->InstrumentIsModel(_T("WS8351")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMData"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMData"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMData"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMData"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMData"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMData"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_CreateQAMData(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_CreateQAMUserData(WX218x* pT, BSTR Channel, SAFEARRAY** DataI, SAFEARRAY** DataQ)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("CreateQAMUserData"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("CreateQAMUserData"), &hr, IN_PARAM(Channel), IN_PARAM(*DataI), IN_PARAM(*DataQ), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX1281B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMUserData"));
		}
		else if (pT->InstrumentIsModel(_T("WS8351")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMUserData"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMUserData"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMUserData"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMUserData"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMUserData"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMUserData"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMUserData"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_CreateQAMUserData(Channel, DataI, DataQ);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_LoadQAMDataFile(WX218x* pT, BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("LoadQAMDataFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("LoadQAMDataFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX1281B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WS8351")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMDataFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMDataFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_LoadQAMDataFile(Channel, FileName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_LoadQAMUserDataFile(WX218x* pT, BSTR Channel, BSTR FileName)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("LoadQAMUserDataFile"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("LoadQAMUserDataFile"), &hr, IN_PARAM(Channel), IN_PARAM(FileName), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX1281B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMUserDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WS8351")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMUserDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMUserDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMUserDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMUserDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMUserDataFile"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMUserDataFile"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("LoadQAMUserDataFile"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_LoadQAMUserDataFile(Channel, FileName);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_CreateQAMDataAdv(WX218x* pT, BSTR Channel, SAFEARRAY** Data)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("CreateQAMDataAdv"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("CreateQAMDataAdv"), &hr, IN_PARAM(Channel), IN_PARAM(*Data), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX1281B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMDataAdv"));
		}
		else if (pT->InstrumentIsModel(_T("WS8351")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMDataAdv"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMDataAdv"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMDataAdv"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMDataAdv"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMDataAdv"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMDataAdv"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("CreateQAMDataAdv"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_CreateQAMDataAdv(Channel, Data);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_ConfigureQAMBaud(WX218x* pT, BSTR Channel, double Baud)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("ConfigureQAMBaud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("ConfigureQAMBaud"), &hr, IN_PARAM(Channel), IN_PARAM(Baud), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX1281B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMBaud"));
		}
		else if (pT->InstrumentIsModel(_T("WS8351")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMBaud"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMBaud"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMBaud"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMBaud"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMBaud"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMBaud"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_ConfigureQAMBaud(Channel, Baud);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_ConfigureQAMCarrierState(WX218x* pT, BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("ConfigureQAMCarrierState"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("ConfigureQAMCarrierState"), &hr, IN_PARAM(Channel), IN_PARAM(State), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX1281B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMCarrierState"));
		}
		else if (pT->InstrumentIsModel(_T("WS8351")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMCarrierState"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMCarrierState"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMCarrierState"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMCarrierState"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMCarrierState"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMCarrierState"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMCarrierState"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_ConfigureQAMCarrierState(Channel, State);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_ConfigureQAMState(WX218x* pT, BSTR Channel, VARIANT_BOOL State)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("ConfigureQAMState"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("ConfigureQAMState"), &hr, IN_PARAM(Channel), IN_PARAM(State), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX1281B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMState"));
		}
		else if (pT->InstrumentIsModel(_T("WS8351")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMState"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMState"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMState"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMState"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMState"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMState"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_ConfigureQAMState(Channel, State);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_ConfigureQAMMarker(WX218x* pT, BSTR Channel, long Marker)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("ConfigureQAMMarker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("ConfigureQAMMarker"), &hr, IN_PARAM(Channel), IN_PARAM(Marker), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX1281B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMMarker"));
		}
		else if (pT->InstrumentIsModel(_T("WS8351")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMMarker"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMMarker"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMMarker"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMMarker"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMMarker"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMMarker"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_ConfigureQAMMarker(Channel, Marker);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_ConfigureQAMType(WX218x* pT, BSTR Channel, WX218xQamTypeEnum Type)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("ConfigureQAMType"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("ConfigureQAMType"), &hr, IN_PARAM(Channel), IN_PARAM(Type), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentIsModel(_T("WX1281B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMType"));
		}
		else if (pT->InstrumentIsModel(_T("WS8351")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMType"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMType"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMType"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281C")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMType"));
		}
		else if (pT->InstrumentIsModel(_T("WX2181B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMType"));
		}
		else if (pT->InstrumentIsModel(_T("WX1281B-D")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMType"));
		}
		else if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("ConfigureQAMType"));
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_ConfigureQAMType(Channel, Type);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_get_Baud(WX218x* pT, BSTR Channel, double* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("get_Baud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Baud"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("get_Baud"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Baud"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xQAM.Baud"));
		if (!pSimData->GetValue(val))
		{
			*val = 1.000000E+006;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_get_Baud(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_put_Baud(WX218x* pT, BSTR Channel, double val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("put_Baud"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("put_Baud"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Baud"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xQAM_Baud_RangeCheck(_T("put_Baud"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<double>* pSimData = pT->GetOrCreateCacheEntry<double>(_T("IWX218xQAM.Baud"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_put_Baud(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_get_Type(WX218x* pT, BSTR Channel, WX218xQamTypeEnum* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("get_Type"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Type"), _T("val"));
	*val = (WX218xQamTypeEnum)NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("get_Type"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Type"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xQamTypeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xQamTypeEnum>(_T("IWX218xQAM.Type"));
		if (!pSimData->GetValue(val))
		{
			*val = WX218xQamType16QAM;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_get_Type(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_put_Type(WX218x* pT, BSTR Channel, WX218xQamTypeEnum val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("put_Type"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("put_Type"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Type"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<WX218xQamTypeEnum>* pSimData = pT->GetOrCreateCacheEntry<WX218xQamTypeEnum>(_T("IWX218xQAM.Type"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_put_Type(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_get_Marker(WX218x* pT, BSTR Channel, long* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("get_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Marker"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("get_Marker"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xQAM.Marker"));
		if (!pSimData->GetValue(val))
		{
			*val = 1;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_get_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_put_Marker(WX218x* pT, BSTR Channel, long val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("put_Marker"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("put_Marker"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Marker"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetRangeCheck())
	{
		hr = pT->IWX218xQAM_Marker_RangeCheck(_T("put_Marker"), Channel, val);
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<long>* pSimData = pT->GetOrCreateCacheEntry<long>(_T("IWX218xQAM.Marker"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_put_Marker(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_get_CarrierEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("get_CarrierEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_CarrierEnabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("get_CarrierEnabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_CarrierEnabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xQAM.CarrierEnabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_TRUE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_get_CarrierEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_put_CarrierEnabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("put_CarrierEnabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("put_CarrierEnabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_CarrierEnabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xQAM.CarrierEnabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_put_CarrierEnabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_get_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL* val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("get_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	if (val == NULL) return pT->ReportError(IDS_E_IVI_NULL_POINTER, _T("get_Enabled"), _T("val"));
	*val = NULL;
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("get_Enabled"), &hr, IN_PARAM(Channel), OUT_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("get_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xQAM.Enabled"));
		if (!pSimData->GetValue(val))
		{
			*val = VARIANT_FALSE;
		}

		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_get_Enabled(Channel, val);
	}
	return hr;
}
HRESULT ForwardingShimImpl::IWX218xQAM_put_Enabled(WX218x* pT, BSTR Channel, VARIANT_BOOL val)
{
	HRESULT hr = S_OK;

	WX218x::ObjectLock lock(pT);
	static CCallContext callContext(__uuidof(IWX218xQAM), _T("IWX218xQAM"), _T("put_Enabled"));
	CCallContextManager callContextManager(pT->GetDriver(), &callContext);
	if (!pT->GetInitialized()) return pT->ReportError(IDS_E_IVI_NOT_INITIALIZED);
	SetErrorInfo(0, NULL);
	CMethodTrace mt(pT->GetTracer(), _T("IWX218xQAM"), _T("put_Enabled"), &hr, IN_PARAM(Channel), IN_PARAM(val), NULL);

	if (SUCCEEDED(hr))
	{
		if (pT->InstrumentInFamily(_T("WX218X")))
		{
			hr = pT->ReportError(IDS_E_WX218X_MODEL_NOT_SUPPORTED, _T("put_Enabled"));
		}
	}

	if (SUCCEEDED(hr) && pT->GetSimulate())
	{
		CCacheEntry<VARIANT_BOOL>* pSimData = pT->GetOrCreateCacheEntry<VARIANT_BOOL>(_T("IWX218xQAM.Enabled"));
		pSimData->UpdateValue(val);
		
		return S_OK;
	}

	if (SUCCEEDED(hr))
	{
		hr = pT->IWX218xQAM_put_Enabled(Channel, val);
	}
	return hr;
}
