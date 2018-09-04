/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

CLSID GetDriverCLSID()
{
	return __uuidof(WX218x);
}

HRESULT WX218x::FinalConstruct()
{
	HRESULT hr = S_OK;

	GetDriverInfo().m_strSoftwareModuleName = _T("WX218x");
	GetDriverInfo().m_strDriverIdentifier = _T("WX218x");
	GetDriverInfo().m_strDriverVendor = _T("Tabor Electronics");
	GetDriverInfo().m_strDriverDescription = _T("IVI Driver for WX218x");
	GetDriverInfo().m_strDriverRevision = _T("3.0.2.0");
	GetDriverInfo().m_strGroupCapabilities = _T("IviFgenBase,IviFgenStdFunc,IviFgenArbWfm,IviFgenArbFrequency,IviFgenArbSeq,IviFgenTrigger,IviFgenInternalTrigger,IviFgenSoftwareTrigger,IviFgenBurst,IviFgenModulateAM,IviFgenModulateFM");
	GetDriverInfo().m_strSupportedModels = _T("WX2181,WX2182,WX1281B,WX1282B,WS8351,WS8352,WX2181B,WX2182B,WX2182C,WX2181C,WX1281C,WX1282C,WX2181B-D,WX2182B-D,WX1281B-D,WX1282B-D,WX2184,WX1284,WX2184C,WX1284C");
	GetDriverInfo().m_strDefaultSimulatedModel = _T("WX2182");
	GetDriverInfo().m_lSpecificationMajorVersion = 3;
	GetDriverInfo().m_lSpecificationMinorVersion = 0;
	GetDriverInfo().m_bInterchangeCheckSupported = false;
	GetDriverInfo().m_bResetSupported = true;
	GetDriverInfo().m_bSelfTestSupported = true;
	GetDriverInfo().m_bRevisionQuerySupported = true;
	GetDriverInfo().m_bIdQuerySupported = true;
	GetDriverInfo().m_lSelfTestTimeout = 2000;
	GetDriverInfo().m_lDisableTimeout = 2000;
	GetDriverInfo().m_lResetTimeout = 2000;
	GetDriverInfo().m_lCoercionLogSize = 1000;

	m_pErrorReporter = new CWX218xErrorReporter(this);

	hr = InternalFinalConstruct();

	return hr;
}

void WX218x::FinalRelease()
{
	InternalFinalRelease();

	if (m_pErrorReporter != NULL)
	{
		delete m_pErrorReporter;
	}
}

const CString& WX218x::GetClassName() const
{
	return WX218x::ClassName();
}

const CString& WX218x::ClassName()
{
	static CString strClassName = _T("WX218x");

	return strClassName;
}

const CRepCapDescriptor** WX218x::GetRepCapDescriptors() const
{
	static CRepCapDescriptor* _descriptors[] = {
		NULL};

	return (const CRepCapDescriptor**)&_descriptors;
}

WX218x* WX218x::GetRoot() const
{
	return CNode::GetRoot<WX218x>();
}

WX218x* WX218x::GetParent() const
{
	return CNode::GetParent<WX218x>();
}

///////////////////////////////////////////////////////////////////////////////
//
//	Instrument models support
//

const CInstrumentModelMap* CInstrumentModelManager::GetInstrumentModelMap()
{
	static CInstrumentModelMap _instrModelMap(
		new CInstrumentModel(_T("WX2181"), _T("WX218X")),
		new CInstrumentModel(_T("WX2182"), _T("WX218X")),
		new CInstrumentModel(_T("WX1281B"), _T("WX128XB")),
		new CInstrumentModel(_T("WX1282B"), _T("WX128XB")),
		new CInstrumentModel(_T("WS8351"), _T("WS835X")),
		new CInstrumentModel(_T("WS8352"), _T("WS835X")),
		new CInstrumentModel(_T("WX2181B"), _T("WX218XB")),
		new CInstrumentModel(_T("WX2182B"), _T("WX218XB")),
		new CInstrumentModel(_T("WX2182C"), _T("WX218XB")),
		new CInstrumentModel(_T("WX2181C"), _T("WX218XB")),
		new CInstrumentModel(_T("WX1281C"), _T("WX218XB")),
		new CInstrumentModel(_T("WX1282C"), _T("WX218XB")),
		new CInstrumentModel(_T("WX2181B-D"), _T("WX218XB-D")),
		new CInstrumentModel(_T("WX2182B-D"), _T("WX218XB-D")),
		new CInstrumentModel(_T("WX1281B-D"), _T("WX128XB-D")),
		new CInstrumentModel(_T("WX1282B-D"), _T("WX128XB-D")),
		new CInstrumentModel(_T("WX2184"), _T("WX2184X")),
		new CInstrumentModel(_T("WX1284"), _T("WX2184X")),
		new CInstrumentModel(_T("WX2184C"), _T("WX2184X")),
		new CInstrumentModel(_T("WX1284C"), _T("WX2184X")),
		NULL);

	return &_instrModelMap;
}

///////////////////////////////////////////////////////////////////////////////
//
//	COM rich error support
//

STDMETHODIMP WX218x::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&__uuidof(IProvideClassInfo),
		&__uuidof(IProvideClassInfo2),
		&__uuidof(IWX218x),
		&__uuidof(IIviDriver),
		&__uuidof(IIviDriverOperation),
		&__uuidof(IIviDriverIdentity),
		&__uuidof(IIviComponentIdentity),
		&__uuidof(IIviDriverUtility),
		&__uuidof(IWX218xChannel),
		&__uuidof(IIviFgenOutput),
		&__uuidof(IIviFgenTrigger),
		&__uuidof(IIviFgenStandardWaveform),
		&__uuidof(IIviFgenArbitrary),
		&__uuidof(IIviFgenArbitrarySequence),
		&__uuidof(IIviFgenArbitraryWaveform),
		&__uuidof(IIviFgenAM),
		&__uuidof(IIviFgenFM),
		&__uuidof(IIviFgen),
		&__uuidof(IWX218xAM),
		&__uuidof(IWX218xChannelSync),
		&__uuidof(IWX218xStandardWaveform),
		&__uuidof(IWX218xArbitrary),
		&__uuidof(IWX218xArbitraryWaveform),
		&__uuidof(IWX218xArbitrarySequence),
		&__uuidof(IWX218xArbitrarySequenceAdvanceSequence),
		&__uuidof(IWX218xCarrierModulation),
		&__uuidof(IWX218xCouple),
		&__uuidof(IWX218xFM),
		&__uuidof(IWX218xMarkers),
		&__uuidof(IWX218xTrigger),
		&__uuidof(IWX218xTriggerARM),
		&__uuidof(IWX218xTriggerSmartTrigger),
		&__uuidof(IWX218xStateStorage),
		&__uuidof(IWX218xXInstrument),
		&__uuidof(IWX218xDigitalPulse),
		&__uuidof(IWX218xSweep),
		&__uuidof(IWX218xDigitalPatternOutput),
		&__uuidof(IWX218xCHIRP),
		&__uuidof(IWX218xFSK),
		&__uuidof(IWX218xASK),
		&__uuidof(IWX218xFHOP),
		&__uuidof(IWX218xAHOP),
		&__uuidof(IWX218xPattern),
		&__uuidof(IWX218xPatternComposer),
		&__uuidof(IWX218xPSK),
		&__uuidof(IWX218xQAM),
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
