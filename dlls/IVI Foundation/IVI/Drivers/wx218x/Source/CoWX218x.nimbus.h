/******************************************************************************
 *                                                                         
 *               Nimbus auto-generated file
 *               !!! WARNING !!! -- DO NOT DIRECTLY EDIT THE CONTENTS OF THIS FILE.
 *				 Changes will be OVERWRITTEN by NIMBUS.
 *
 *****************************************************************************/

#define DECLARE_NIMBUS_CLASS_WX218X()	\
public:	\
	DECLARE_REGISTRY_RESOURCEID(IDR_COWX218X)	\
	DECLARE_PROTECT_FINAL_CONSTRUCT()	\
	\
	BEGIN_COM_MAP(WX218x)	\
		COM_INTERFACE_ENTRY(ISupportErrorInfo)	\
		COM_INTERFACE_ENTRY(IProvideClassInfo)	\
		COM_INTERFACE_ENTRY(IProvideClassInfo2)	\
		COM_INTERFACE_ENTRY(IWX218x)	\
		COM_INTERFACE_ENTRY2(IIviDriver, IWX218x)	\
		COM_INTERFACE_ENTRY(IIviDriverOperation)	\
		COM_INTERFACE_ENTRY(IIviDriverIdentity)	\
		COM_INTERFACE_ENTRY2(IIviComponentIdentity, IIviDriverIdentity)	\
		COM_INTERFACE_ENTRY(IIviDriverUtility)	\
		COM_INTERFACE_ENTRY(IWX218xChannel)	\
		COM_INTERFACE_ENTRY(IIviFgenOutput)	\
		COM_INTERFACE_ENTRY(IIviFgenTrigger)	\
		COM_INTERFACE_ENTRY(IIviFgenStandardWaveform)	\
		COM_INTERFACE_ENTRY(IIviFgenArbitrary)	\
		COM_INTERFACE_ENTRY(IIviFgenArbitrarySequence)	\
		COM_INTERFACE_ENTRY(IIviFgenArbitraryWaveform)	\
		COM_INTERFACE_ENTRY(IIviFgenAM)	\
		COM_INTERFACE_ENTRY(IIviFgenFM)	\
		COM_INTERFACE_ENTRY(IIviFgen)	\
		COM_INTERFACE_ENTRY(IWX218xAM)	\
		COM_INTERFACE_ENTRY(IWX218xChannelSync)	\
		COM_INTERFACE_ENTRY(IWX218xStandardWaveform)	\
		COM_INTERFACE_ENTRY(IWX218xArbitrary)	\
		COM_INTERFACE_ENTRY(IWX218xArbitraryWaveform)	\
		COM_INTERFACE_ENTRY(IWX218xArbitrarySequence)	\
		COM_INTERFACE_ENTRY(IWX218xArbitrarySequenceAdvanceSequence)	\
		COM_INTERFACE_ENTRY(IWX218xCarrierModulation)	\
		COM_INTERFACE_ENTRY(IWX218xCouple)	\
		COM_INTERFACE_ENTRY(IWX218xFM)	\
		COM_INTERFACE_ENTRY(IWX218xMarkers)	\
		COM_INTERFACE_ENTRY(IWX218xTrigger)	\
		COM_INTERFACE_ENTRY(IWX218xTriggerARM)	\
		COM_INTERFACE_ENTRY(IWX218xTriggerSmartTrigger)	\
		COM_INTERFACE_ENTRY(IWX218xStateStorage)	\
		COM_INTERFACE_ENTRY(IWX218xXInstrument)	\
		COM_INTERFACE_ENTRY(IWX218xDigitalPulse)	\
		COM_INTERFACE_ENTRY(IWX218xSweep)	\
		COM_INTERFACE_ENTRY(IWX218xDigitalPatternOutput)	\
		COM_INTERFACE_ENTRY(IWX218xCHIRP)	\
		COM_INTERFACE_ENTRY(IWX218xFSK)	\
		COM_INTERFACE_ENTRY(IWX218xASK)	\
		COM_INTERFACE_ENTRY(IWX218xFHOP)	\
		COM_INTERFACE_ENTRY(IWX218xAHOP)	\
		COM_INTERFACE_ENTRY(IWX218xPattern)	\
		COM_INTERFACE_ENTRY(IWX218xPatternComposer)	\
		COM_INTERFACE_ENTRY(IWX218xPSK)	\
		COM_INTERFACE_ENTRY(IWX218xQAM)	\
	END_COM_MAP()	\
	\
	HRESULT FinalConstruct();	\
	void FinalRelease();	\
	\
	virtual const CString& GetClassName() const;	\
	static const CString& ClassName();	\
	\
	virtual const CRepCapDescriptor** GetRepCapDescriptors() const;	\
	\
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);	\
	\
	WX218x* GetRoot() const;	\
	WX218x* GetParent() const;	\
	\
public:	\
	virtual CWX218xErrorReporter& GetErrorReporter() { return *m_pErrorReporter; }	\
	virtual IVisaComSession& GetIoSession() { return m_ioSession; }	\
	virtual IIoSession& GetIo() { return m_ioSession; }	\
	\
protected:	\
	CVisaComSession m_ioSession;	\
	CWX218xErrorReporter* m_pErrorReporter;
