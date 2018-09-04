//=======================================================================
//                                         Revision History
//Rev. 1.0.6  [IT]
// In function IWX218xArbitraryWaveform_LoadArbWfmFromFile adding ability to 
// download waveforms already with markers that were created via ArbConnection 
// to the instrument memory.

//Rev. 1.0.7  [IT]
// In functions: CreateSequenceAdv, CreateAdvSequence, CreateDigPatternParamData,
//               CreatePSKData, CreateFSKData, CreateASKData adding ability to recieve
// values in string like "1001" from LabView wrapper
//
//Rev. 2.0.0  27/02/2014 [IT]
// Adding support for WX2184

//Rev. 2.0.1  15/05/2014 [IT]
// Adding support for download two waveforms with combine method 

//Rev. 2.0.2 23/07/2014  [IT]
// Adding support for WX2182C and WX1284

//Rev. 2.0.4 25/08/2014  [IT]
// Adding support for WX1281C,WX1282C,WX2181C

//Rev. 3.0.0 16/09/2014  [IT]
//Compiled driver dll in Nimbus Driver Studio 3.3
//Adding methods:
// WX218x::IWX218xArbitrarySequenceAdvanceSequence_ConfigureOnceCount,
// WX218x::IWX218xArbitrarySequence_ConfigureOnceCount
//WX218x::IWX218x_SendCmd, WX218x::IWX218x_ReadQuery,

//Rev. 3.0.1  11/11/2014  [IT]
//Adding functions for support download data from the Comma (CSV) data format:
//WX218x::IWX218xArbitraryWaveform_LoadCSVFile
//WX218x::IWX218xArbitraryWaveform_LoadCSVFileAdv

//Rev. 3.0.2  11/12/2014  [IT]
//Corrected LabView wrappers for 32bit and 64bit

#pragma once

#include "_WX218x.h"
#include "ForwardingShims.nimbus.h"
#include "ErrorReporter.nimbus.h"
#include "CoWX218x.nimbus.h"

#include "WX218xDef.h"
#include "IviFgenWaveformManager.h"
#include "IviFgenSequenceManager.h"
#include "IviFgenDigitalManager.h"

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

typedef struct 
{
   unsigned long int repNum;
   unsigned short segNum;
   unsigned char jumpFlag;
   unsigned char space;
}
DWL_SEQ_TBL_INF;

typedef struct 
{
   unsigned char state;
   double delay;
   float highLevel;
   float lowLevel;
}
DIG_PATTERN_PARAM_INF;

typedef struct 
{
   float amplLevel;
   double dwellTime;
}
PATTERN_COMPOSER_INF;

class ATL_NO_VTABLE WX218x :
	public _Driver<WX218x>,
	public _IWX218x,
	public _IIviDriver,
	public _IIviDriverOperation,
	public _IIviDriverIdentity,
	public _IIviComponentIdentity,
	public _IIviDriverUtility,
	public _IWX218xChannel,
	public _IIviFgenOutput,
	public _IIviFgenTrigger,
	public _IIviFgenStandardWaveform,
	public _IIviFgenArbitrary,
	public _IIviFgenArbitrarySequence,
	public _IIviFgenArbitraryWaveform,
	public _IIviFgenAM,
	public _IIviFgenFM,
	public _IIviFgen,
	public _IWX218xAM,
	public _IWX218xChannelSync,
	public _IWX218xStandardWaveform,
	public _IWX218xArbitrary,
	public _IWX218xArbitraryWaveform,
	public _IWX218xArbitrarySequence,
	public _IWX218xArbitrarySequenceAdvanceSequence,
	public _IWX218xCarrierModulation,
	public _IWX218xCouple,
	public _IWX218xFM,
	public _IWX218xMarkers,
	public _IWX218xTrigger,
	public _IWX218xTriggerARM,
	public _IWX218xTriggerSmartTrigger,
	public _IWX218xStateStorage,
	public _IWX218xXInstrument,
	public _IWX218xDigitalPulse,
	public _IWX218xSweep,
	public _IWX218xDigitalPatternOutput,
	public _IWX218xCHIRP,
	public _IWX218xFSK,
	public _IWX218xASK,
	public _IWX218xFHOP,
	public _IWX218xAHOP,
	public _IWX218xPattern,
	public _IWX218xPatternComposer,
	public _IWX218xPSK,
	public _IWX218xQAM
{
   DECLARE_NIMBUS_CLASS_WX218X()

	__declspec(property(get=GetIoSession)) IVisaComSession& io;
	__declspec(property(get=GetErrorReporter)) CWX218xErrorReporter& err;

	virtual HRESULT OnFinalConstruct();
	virtual void OnFinalRelease();

	virtual HRESULT OnFinalInitialize();
	virtual HRESULT OnFinalClose();

	virtual void ResetObjectState();

   private:
   int m_ChannelCount;    //count of channels
   int m_MemorySize;  //size of memory
   int m_MaxNumWaveforms;  //maximum number of waveforms 
   int m_OptionNum;   //number of option
   int m_WfmQuantum;   //32points or 16points  //New add 27.11.2011
   int m_Opt32ResPoint;  //NEW 27.11.2011  Ronen must add scipi command
   UINT16 interfaceType;
   long m_SizeAvailable[CHAN_COUNT_MAX]; //(array that containts available size for every channel)
   bool m_CoupleEnabled;    //variable for know there is instrument in couple state ON or OFF
   long m_FastDownload;  //only for WX2184, download waveforms via visa or dll
   int m_DigitalExist;   //only for WX2184 for know exist digital pod or not
   CString m_strCurrentChannel;   //variable for know active channel

   //For models WX2181B-D, WX2182B-D, WX1281B-D, WX1282B-D
   long m_SizeAvailableDigital[CHAN_COUNT_MAX]; //array that containts available size for every channel in digital memory

   inline CString MakeSCPIString(CString chan, CString scpi)
   {
      //Saving current channel
      if (!chan.CompareNoCase(_T("1")))
         m_strCurrentChannel = _T("Channel1");

      else if (!chan.CompareNoCase(_T("2")))
         m_strCurrentChannel = _T("Channel2");

      else if (!chan.CompareNoCase(_T("3")))
         m_strCurrentChannel = _T("Channel3");

      else
         m_strCurrentChannel = _T("Channel4");

      if (m_ChannelCount != 1)
      {
         CString vv;
         vv.Format(_T(":INST:SEL %s;%s"),  chan, scpi);
         return vv; 
      }
      

      return scpi ;
   };

   protected:
   CIviFgenWaveformManager m_waveformManager;
   CIviFgenSequenceManager m_sequenceManager;

   //For models WX2181BD, WX2182BD, WX1281BD, WX1282BD
   CIviFgenDigitalManager m_digitalManager;

public:
   int m_IsQuickSeq;    //variable for know how to download sequence table
   BYTE * strtobyte(BYTE * lhs, size_t n, CString &rhs);
   BYTE * makeHeader(const char * hdr, size_t n, BYTE * buf, size_t len);
   HRESULT writeBinaryBlock(BYTE * block, size_t n);

   //NEW 15.07.2012  by Ira
   HRESULT LoadGeneralData(ViInt32 bytes, unsigned char* data, ViInt32 type);

   //NEW 13.05.2014 by Ira
   void BuildCombinedWave(const unsigned short* pDat1, 
                          const unsigned short* pDat2, 
                          unsigned long length, 
                          unsigned short* outBuff);

   CString ReturnChannelSend(CString strChan);
   int ReturnChannelIndex(CString strChan);
   int ReturnChannelIndexOpposite(CString strChan);
   int FuncReturnModelNumber();
   void ConvertFromCStringTostring(CString strFrom, string& strTo);
   HRESULT GetFileSize(FILE *hFile, long *fileSize);
   HRESULT GetAsciiFileSize (CString strFileName, long &file_count);
   HRESULT GetCSVFileSize (CString strFileName, long &file_count);
   HRESULT GetHexAsciiFileSize (CString strFileName, long &file_count);
   HRESULT VerifyIsValidForModel (unsigned long mask);
   STDMETHOD(IWX218x_get_Output)(IWX218xChannel** val);
	STDMETHOD(IWX218x_get_AM)(IWX218xAM** val);
	STDMETHOD(IWX218x_get_ActiveChannel)(BSTR* val);
	STDMETHOD(IWX218x_put_ActiveChannel)(BSTR val);
	STDMETHOD(IWX218x_get_StandardWaveform)(IWX218xStandardWaveform** val);
	STDMETHOD(IWX218x_get_Arbitrary)(IWX218xArbitrary** val);
	STDMETHOD(IWX218x_get_CarrierModulation)(IWX218xCarrierModulation** val);
	STDMETHOD(IWX218x_get_Couple)(IWX218xCouple** val);
	STDMETHOD(IWX218x_get_FM)(IWX218xFM** val);
	STDMETHOD(IWX218x_get_Markers)(IWX218xMarkers** val);
	STDMETHOD(IWX218x_get_Trigger)(IWX218xTrigger** val);
	STDMETHOD(IWX218x_get_StateStorage)(IWX218xStateStorage** val);
	STDMETHOD(IWX218x_get_XInstrument)(IWX218xXInstrument** val);
	STDMETHOD(IWX218x_get_DigitalPulse)(IWX218xDigitalPulse** val);
	STDMETHOD(IWX218x_get_Sweep)(IWX218xSweep** val);
	STDMETHOD(IWX218x_get_DigitalPatternOutput)(IWX218xDigitalPatternOutput** val);
	STDMETHOD(IWX218x_get_CHIRP)(IWX218xCHIRP** val);
	STDMETHOD(IWX218x_get_FSK)(IWX218xFSK** val);
	STDMETHOD(IWX218x_get_ASK)(IWX218xASK** val);
	STDMETHOD(IWX218x_get_FHOP)(IWX218xFHOP** val);
	STDMETHOD(IWX218x_get_AHOP)(IWX218xAHOP** val);
	STDMETHOD(IWX218x_get_Pattern)(IWX218xPattern** val);
	STDMETHOD(IWX218x_get_PSK)(IWX218xPSK** val);
	STDMETHOD(IWX218x_get_QAM)(IWX218xQAM** val);
	STDMETHOD(IWX218x_get_Skew)(BSTR Channel, double* val);
	STDMETHOD(IWX218x_put_Skew)(BSTR Channel, double val);
	STDMETHOD(IWX218x_Skew_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218x_SetActiveChannel)(BSTR ChName);
	STDMETHOD(IWX218x_InitiateGeneration)();
	STDMETHOD(ActiveChannel_RangeCheck)(LPCTSTR pszPropertyName, BSTR val);
	STDMETHOD(IWX218x_AbortGeneration)();
	STDMETHOD(IWX218x_SendCmd)(BSTR Command);
	STDMETHOD(IWX218x_ReadQuery)(BSTR SendBuff, BSTR* ReadBuff);

	STDMETHOD(IIviDriver_Initialize)(BSTR ResourceName, VARIANT_BOOL IdQuery, VARIANT_BOOL Reset, BSTR OptionString);
	STDMETHOD(IIviDriver_Close)();
	STDMETHOD(IIviDriver_get_DriverOperation)(IIviDriverOperation** val);
	STDMETHOD(IIviDriver_get_Identity)(IIviDriverIdentity** val);
	STDMETHOD(IIviDriver_get_Utility)(IIviDriverUtility** val);
	STDMETHOD(IIviDriver_get_Initialized)(VARIANT_BOOL* val);

	STDMETHOD(IIviDriverOperation_InvalidateAllAttributes)();
	STDMETHOD(IIviDriverOperation_ClearInterchangeWarnings)();
	STDMETHOD(IIviDriverOperation_GetNextInterchangeWarning)(BSTR* val);
	STDMETHOD(IIviDriverOperation_ResetInterchangeCheck)();
	STDMETHOD(IIviDriverOperation_GetNextCoercionRecord)(BSTR* val);
	STDMETHOD(IIviDriverOperation_get_LogicalName)(BSTR* val);
	STDMETHOD(IIviDriverOperation_get_IoResourceDescriptor)(BSTR* val);
	STDMETHOD(IIviDriverOperation_get_Cache)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_Cache)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_InterchangeCheck)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_InterchangeCheck)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_QueryInstrumentStatus)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_QueryInstrumentStatus)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_RangeCheck)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_RangeCheck)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_RecordCoercions)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_RecordCoercions)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_Simulate)(VARIANT_BOOL* val);
	STDMETHOD(IIviDriverOperation_put_Simulate)(VARIANT_BOOL val);
	STDMETHOD(IIviDriverOperation_get_DriverSetup)(BSTR* val);

	STDMETHOD(IIviDriverIdentity_get_InstrumentManufacturer)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_InstrumentModel)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_InstrumentFirmwareRevision)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_Identifier)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_SupportedInstrumentModels)(BSTR* val);
	STDMETHOD(IIviDriverIdentity_get_SpecificationMajorVersion)(long* val);
	STDMETHOD(IIviDriverIdentity_get_SpecificationMinorVersion)(long* val);
	STDMETHOD(IIviDriverIdentity_get_GroupCapabilities)(BSTR* val);

	STDMETHOD(IIviComponentIdentity_get_Description)(BSTR* val);
	STDMETHOD(IIviComponentIdentity_get_Revision)(BSTR* val);
	STDMETHOD(IIviComponentIdentity_get_Vendor)(BSTR* val);

	STDMETHOD(IIviDriverUtility_Reset)();
	STDMETHOD(IIviDriverUtility_ResetWithDefaults)();
	STDMETHOD(IIviDriverUtility_Disable)();
	STDMETHOD(IIviDriverUtility_SelfTest)(long* TestResult, BSTR* TestMessage);
	STDMETHOD(IIviDriverUtility_ErrorQuery)(long* ErrorCode, BSTR* ErrorMessage);
	STDMETHOD(IIviDriverUtility_LockObject)();
	STDMETHOD(IIviDriverUtility_UnlockObject)();

	STDMETHOD(IWX218xChannel_get_Count)(long* val);
	STDMETHOD(IWX218xChannel_get_Name)(long Index, BSTR* val);
	STDMETHOD(IWX218xChannel_get_Couple)(BSTR Channel, WX218xOutputCoupleEnum* val);
	STDMETHOD(IWX218xChannel_put_Couple)(BSTR Channel, WX218xOutputCoupleEnum val);
	STDMETHOD(IWX218xOutput_Couple_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, WX218xOutputCoupleEnum val);
	STDMETHOD(IWX218xChannel_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xChannel_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xChannel_get_OperationMode)(BSTR Channel, WX218xOperationModeEnum* val);
	STDMETHOD(IWX218xChannel_put_OperationMode)(BSTR Channel, WX218xOperationModeEnum val);
	STDMETHOD(IWX218xChannel_get_OutputMode)(WX218xOutputModeEnum* val);
	STDMETHOD(IWX218xChannel_put_OutputMode)(WX218xOutputModeEnum val);
	STDMETHOD(IWX218xChannel_OutputMode_RangeCheck)(LPCTSTR pszPropertyName, WX218xOutputModeEnum val);
	STDMETHOD(IWX218xChannel_get_ReferenceClockSource)(WX218xReferenceClockSourceEnum* val);
	STDMETHOD(IWX218xChannel_put_ReferenceClockSource)(WX218xReferenceClockSourceEnum val);
	STDMETHOD(IWX218xChannel_get_RefExtFrequency)(BSTR Channel, double* val);
	STDMETHOD(IWX218xChannel_put_RefExtFrequency)(BSTR Channel, double val);
	STDMETHOD(IWX218xChannel_get_Sync)(IWX218xChannelSync** val);
	STDMETHOD(IWX218xChannel_get_ExtFrequency)(BSTR Channel, WX218xExtFrequencyEnum* val);
	STDMETHOD(IWX218xChannel_put_ExtFrequency)(BSTR Channel, WX218xExtFrequencyEnum val);
	STDMETHOD(IWX218xChannel_ConfigureCoupleAllCh)(WX218xOutputCoupleEnum Couple);
	STDMETHOD(IWX218xChannel_ConfigureOutputStateAllCh)(VARIANT_BOOL State);
	STDMETHOD(IWX218xChannel_ConfigureExtFrequency)(BSTR Channel, WX218xExtFrequencyEnum ExtFrequency);
	STDMETHOD(IWX218xChannel_ConfigureRefExtFrequency)(BSTR Channel, double ExtFreq);
	STDMETHOD(IWX218xOutput_RefExtFrequency_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IIviFgenOutput_get_Enabled)(BSTR ChannelName, VARIANT_BOOL* val);
	STDMETHOD(IIviFgenOutput_put_Enabled)(BSTR ChannelName, VARIANT_BOOL val);
	STDMETHOD(IIviFgenOutput_get_Impedance)(BSTR ChannelName, double* val);
	STDMETHOD(IIviFgenOutput_put_Impedance)(BSTR ChannelName, double val);
	STDMETHOD(IIviFgenOutput_get_OutputMode)(IviFgenOutputModeEnum* val);
	STDMETHOD(IIviFgenOutput_put_OutputMode)(IviFgenOutputModeEnum val);
	STDMETHOD(IIviFgenOutput_get_OperationMode)(BSTR ChannelName, IviFgenOperationModeEnum* val);
	STDMETHOD(IIviFgenOutput_put_OperationMode)(BSTR ChannelName, IviFgenOperationModeEnum val);
	STDMETHOD(IIviFgenOutput_get_ReferenceClockSource)(IviFgenReferenceClockSourceEnum* val);
	STDMETHOD(IIviFgenOutput_put_ReferenceClockSource)(IviFgenReferenceClockSourceEnum val);
	STDMETHOD(IIviFgenOutput_get_Count)(long* val);
	STDMETHOD(IIviFgenOutput_get_Name)(long Index, BSTR* val);

	STDMETHOD(IIviFgenTrigger_SendSoftwareTrigger)();
	STDMETHOD(IIviFgenTrigger_get_BurstCount)(BSTR ChannelName, long* val);
	STDMETHOD(IIviFgenTrigger_put_BurstCount)(BSTR ChannelName, long val);
	STDMETHOD(IIviFgenTrigger_get_InternalRate)(double* val);
	STDMETHOD(IIviFgenTrigger_put_InternalRate)(double val);
	STDMETHOD(IIviFgenTrigger_get_Source)(BSTR ChannelName, IviFgenTriggerSourceEnum* val);
	STDMETHOD(IIviFgenTrigger_put_Source)(BSTR ChannelName, IviFgenTriggerSourceEnum val);

	STDMETHOD(IIviFgenStandardWaveform_Configure)(BSTR ChannelName, IviFgenWaveformEnum Waveform, double Amplitude, double DCOffset, double Frequency, double StartPhase);
	STDMETHOD(IIviFgenStandardWaveform_get_DutyCycleHigh)(BSTR ChannelName, double* val);
	STDMETHOD(IIviFgenStandardWaveform_put_DutyCycleHigh)(BSTR ChannelName, double val);
	STDMETHOD(IIviFgenStandardWaveform_get_Amplitude)(BSTR ChannelName, double* val);
	STDMETHOD(IIviFgenStandardWaveform_put_Amplitude)(BSTR ChannelName, double val);
	STDMETHOD(IIviFgenStandardWaveform_get_DCOffset)(BSTR ChannelName, double* val);
	STDMETHOD(IIviFgenStandardWaveform_put_DCOffset)(BSTR ChannelName, double val);
	STDMETHOD(IIviFgenStandardWaveform_get_Frequency)(BSTR ChannelName, double* val);
	STDMETHOD(IIviFgenStandardWaveform_put_Frequency)(BSTR ChannelName, double val);
	STDMETHOD(IIviFgenStandardWaveform_get_StartPhase)(BSTR ChannelName, double* val);
	STDMETHOD(IIviFgenStandardWaveform_put_StartPhase)(BSTR ChannelName, double val);
	STDMETHOD(IIviFgenStandardWaveform_get_Waveform)(BSTR ChannelName, IviFgenWaveformEnum* val);
	STDMETHOD(IIviFgenStandardWaveform_put_Waveform)(BSTR ChannelName, IviFgenWaveformEnum val);

	STDMETHOD(IIviFgenArbitrary_ClearMemory)();
	STDMETHOD(IIviFgenArbitrary_get_Gain)(BSTR ChannelName, double* val);
	STDMETHOD(IIviFgenArbitrary_put_Gain)(BSTR ChannelName, double val);
	STDMETHOD(IIviFgenArbitrary_get_Offset)(BSTR ChannelName, double* val);
	STDMETHOD(IIviFgenArbitrary_put_Offset)(BSTR ChannelName, double val);
	STDMETHOD(IIviFgenArbitrary_get_SampleRate)(double* val);
	STDMETHOD(IIviFgenArbitrary_put_SampleRate)(double val);
	STDMETHOD(IIviFgenArbitrary_get_Sequence)(IIviFgenArbitrarySequence** val);
	STDMETHOD(IIviFgenArbitrary_get_Waveform)(IIviFgenArbitraryWaveform** val);

	STDMETHOD(IIviFgenArbitrarySequence_Configure)(BSTR ChannelName, long Handle, double Gain, double Offset);
	STDMETHOD(IIviFgenArbitrarySequence_Clear)(long Handle);
	STDMETHOD(IIviFgenArbitrarySequence_Create)(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, long* val);
	STDMETHOD(IIviFgenArbitrarySequence_get_LengthMax)(long* val);
	STDMETHOD(IIviFgenArbitrarySequence_get_LengthMin)(long* val);
	STDMETHOD(IIviFgenArbitrarySequence_get_LoopCountMax)(long* val);
	STDMETHOD(IIviFgenArbitrarySequence_get_NumberSequencesMax)(long* val);

	STDMETHOD(IIviFgenArbitraryWaveform_Configure)(BSTR ChannelName, long Handle, double Gain, double Offset);
	STDMETHOD(IIviFgenArbitraryWaveform_Clear)(long Handle);
	STDMETHOD(IIviFgenArbitraryWaveform_Create)(SAFEARRAY** Data, long* val);
	STDMETHOD(IIviFgenArbitraryWaveform_get_Frequency)(BSTR ChannelName, double* val);
	STDMETHOD(IIviFgenArbitraryWaveform_put_Frequency)(BSTR ChannelName, double val);
	STDMETHOD(IIviFgenArbitraryWaveform_get_NumberWaveformsMax)(long* val);
	STDMETHOD(IIviFgenArbitraryWaveform_get_Quantum)(long* val);
	STDMETHOD(IIviFgenArbitraryWaveform_get_SizeMax)(long* val);
	STDMETHOD(IIviFgenArbitraryWaveform_get_SizeMin)(long* val);

	STDMETHOD(IIviFgenAM_ConfigureInternal)(double Depth, IviFgenAMInternalWaveformEnum Waveform, double Frequency);
	STDMETHOD(IIviFgenAM_get_Enabled)(BSTR ChannelName, VARIANT_BOOL* val);
	STDMETHOD(IIviFgenAM_put_Enabled)(BSTR ChannelName, VARIANT_BOOL val);
	STDMETHOD(IIviFgenAM_get_Source)(BSTR ChannelName, IviFgenAMSourceEnum* val);
	STDMETHOD(IIviFgenAM_put_Source)(BSTR ChannelName, IviFgenAMSourceEnum val);
	STDMETHOD(IIviFgenAM_get_InternalDepth)(double* val);
	STDMETHOD(IIviFgenAM_put_InternalDepth)(double val);
	STDMETHOD(IIviFgenAM_get_InternalFrequency)(double* val);
	STDMETHOD(IIviFgenAM_put_InternalFrequency)(double val);
	STDMETHOD(IIviFgenAM_get_InternalWaveform)(IviFgenAMInternalWaveformEnum* val);
	STDMETHOD(IIviFgenAM_put_InternalWaveform)(IviFgenAMInternalWaveformEnum val);

	STDMETHOD(IIviFgenFM_ConfigureInternal)(double Deviation, IviFgenFMInternalWaveformEnum Waveform, double Frequency);
	STDMETHOD(IIviFgenFM_get_Enabled)(BSTR ChannelName, VARIANT_BOOL* val);
	STDMETHOD(IIviFgenFM_put_Enabled)(BSTR ChannelName, VARIANT_BOOL val);
	STDMETHOD(IIviFgenFM_get_Source)(BSTR ChannelName, IviFgenFMSourceEnum* val);
	STDMETHOD(IIviFgenFM_put_Source)(BSTR ChannelName, IviFgenFMSourceEnum val);
	STDMETHOD(IIviFgenFM_get_InternalDeviation)(double* val);
	STDMETHOD(IIviFgenFM_put_InternalDeviation)(double val);
	STDMETHOD(IIviFgenFM_get_InternalFrequency)(double* val);
	STDMETHOD(IIviFgenFM_put_InternalFrequency)(double val);
	STDMETHOD(IIviFgenFM_get_InternalWaveform)(IviFgenFMInternalWaveformEnum* val);
	STDMETHOD(IIviFgenFM_put_InternalWaveform)(IviFgenFMInternalWaveformEnum val);

	STDMETHOD(IIviFgen_InitiateGeneration)();
	STDMETHOD(IIviFgen_AbortGeneration)();
	STDMETHOD(IIviFgen_get_Output)(IIviFgenOutput** val);
	STDMETHOD(IIviFgen_get_Trigger)(IIviFgenTrigger** val);
	STDMETHOD(IIviFgen_get_StandardWaveform)(IIviFgenStandardWaveform** val);
	STDMETHOD(IIviFgen_get_Arbitrary)(IIviFgenArbitrary** val);
	STDMETHOD(IIviFgen_get_AM)(IIviFgenAM** val);
	STDMETHOD(IIviFgen_get_FM)(IIviFgenFM** val);

   STDMETHOD(WX218x_double_range)(LPCTSTR pszPropertyName, double min, double max, double val);
   STDMETHOD(WX218x_long_range)(LPCTSTR pszPropertyName, long min, long max, long val);

	STDMETHOD(IWX218xAM_ConfigureInternal)(double Depth, WX218xAMInternalWaveformEnum Waveform, double Frequency);
	STDMETHOD(IWX218xAM_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xAM_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xAM_get_InternalDepth)(double* val);
	STDMETHOD(IWX218xAM_put_InternalDepth)(double val);
	STDMETHOD(IWX218xAM_get_InternalWaveform)(WX218xAMInternalWaveformEnum* val);
	STDMETHOD(IWX218xAM_put_InternalWaveform)(WX218xAMInternalWaveformEnum val);
	STDMETHOD(IWX218xAM_get_InternalFrequency)(double* val);
	STDMETHOD(IWX218xAM_put_InternalFrequency)(double val);
	STDMETHOD(IWX218xAM_ConfigureAMEnabled)(BSTR Channel, VARIANT_BOOL Enabled);
	STDMETHOD(IWX218xAM_InternalFrequency_RangeCheck)(LPCTSTR pszPropertyName, double val);
	STDMETHOD(IWX218xAM_InternalDepth_RangeCheck)(LPCTSTR pszPropertyName, double val);

	STDMETHOD(IWX218xChannelSync_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xChannelSync_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xChannelSync_get_Function)(BSTR Channel, WX218xOutputSyncFunctionEnum* val);
	STDMETHOD(IWX218xChannelSync_put_Function)(BSTR Channel, WX218xOutputSyncFunctionEnum val);
	STDMETHOD(IWX218xChannelSync_get_Position)(BSTR Channel, long* val);
	STDMETHOD(IWX218xChannelSync_put_Position)(BSTR Channel, long val);
	STDMETHOD(IWX218xChannelSync_get_Source)(WX218xOutputSyncSourceEnum* val);
	STDMETHOD(IWX218xChannelSync_put_Source)(WX218xOutputSyncSourceEnum val);
	STDMETHOD(IWX218xChannelSync_get_Width)(BSTR Channel, long* val);
	STDMETHOD(IWX218xChannelSync_put_Width)(BSTR Channel, long val);
	STDMETHOD(IWX218xChannelSync_ConfigureSyncWidth)(BSTR Channel, long Width);
	STDMETHOD(IWX218xChannelSync_ConfigureSyncSource)(WX218xOutputSyncSourceEnum Source);
	STDMETHOD(IWX218xChannelSync_ConfigureSyncPosition)(BSTR Channel, long Position);
	STDMETHOD(IWX218xChannelSync_ConfigureSyncFunction)(BSTR Channel, WX218xOutputSyncFunctionEnum Function);
	STDMETHOD(IWX218xChannelSync_ConfigureSyncEnabled)(BSTR Channel, VARIANT_BOOL Enabled);
	STDMETHOD(IWX218xChannelSync_Width_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xChannelSync_Position_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);

	STDMETHOD(IWX218xStandardWaveform_get_Amplitude)(BSTR Channel, double* val);
	STDMETHOD(IWX218xStandardWaveform_put_Amplitude)(BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_get_DcLevel)(BSTR Channel, double* val);
	STDMETHOD(IWX218xStandardWaveform_put_DcLevel)(BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_get_DCOffset)(BSTR Channel, double* val);
	STDMETHOD(IWX218xStandardWaveform_put_DCOffset)(BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_get_DutyCycleHigh)(BSTR Channel, double* val);
	STDMETHOD(IWX218xStandardWaveform_put_DutyCycleHigh)(BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_get_ExpExponent)(BSTR Channel, long* val);
	STDMETHOD(IWX218xStandardWaveform_put_ExpExponent)(BSTR Channel, long val);
	STDMETHOD(IWX218xStandardWaveform_get_Frequency)(BSTR Channel, double* val);
	STDMETHOD(IWX218xStandardWaveform_put_Frequency)(BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_get_GaussExponent)(BSTR Channel, long* val);
	STDMETHOD(IWX218xStandardWaveform_put_GaussExponent)(BSTR Channel, long val);
	STDMETHOD(IWX218xStandardWaveform_get_Power)(BSTR Channel, double* val);
	STDMETHOD(IWX218xStandardWaveform_put_Power)(BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_get_RampDelay)(BSTR Channel, double* val);
	STDMETHOD(IWX218xStandardWaveform_put_RampDelay)(BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_get_RampFallTime)(BSTR Channel, double* val);
	STDMETHOD(IWX218xStandardWaveform_put_RampFallTime)(BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_get_RampRiseTime)(BSTR Channel, double* val);
	STDMETHOD(IWX218xStandardWaveform_put_RampRiseTime)(BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_get_SincNCycle)(BSTR Channel, long* val);
	STDMETHOD(IWX218xStandardWaveform_put_SincNCycle)(BSTR Channel, long val);
	STDMETHOD(IWX218xStandardWaveform_get_StartPhase)(BSTR Channel, double* val);
	STDMETHOD(IWX218xStandardWaveform_put_StartPhase)(BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_get_HvAmplitude)(BSTR Channel, double* val);
	STDMETHOD(IWX218xStandardWaveform_put_HvAmplitude)(BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_get_Waveform)(BSTR Channel, WX218xWaveformEnum* val);
	STDMETHOD(IWX218xStandardWaveform_put_Waveform)(BSTR Channel, WX218xWaveformEnum val);
	STDMETHOD(IWX218xStandardWaveform_ConfigureOffsetAllCh)(double Offset);
	STDMETHOD(IWX218xStandardWaveform_ConfigureHVAmplAllCh)(double HVAmplitude);
	STDMETHOD(IWX218xStandardWaveform_ConfigureAmplitudeAllCh)(double Amplitude);
	STDMETHOD(IWX218xStandardWaveform_ConfigureSincNCycles)(BSTR Channel, long Cycles);
	STDMETHOD(IWX218xStandardWaveform_ConfigurePower)(BSTR Channel, double Power);
	STDMETHOD(IWX218xStandardWaveform_ConfigureHvAmplitude)(BSTR Channel, double HvAmplitude);
	STDMETHOD(IWX218xStandardWaveform_ConfigureGauss)(BSTR Channel, long Gauss);
	STDMETHOD(IWX218xStandardWaveform_ConfigureExponenent)(BSTR Channel, long Exponent);
	STDMETHOD(IWX218xStandardWaveform_ConfigureDutyCycle)(BSTR Channel, double DutyCycle);
	STDMETHOD(IWX218xStandardWaveform_ConfigureDCLevel)(BSTR Channel, double DcLevel);
	STDMETHOD(IWX218xStandardWaveform_Configure)(BSTR Channel, WX218xWaveformEnum Waveform, double Amplitude, double DCOffset, double Frequency, double StartPhase);
   STDMETHOD(IWX218xStandardWaveform_HvAmplitude_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(StartPhase_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(SincNCycle_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xStandardWaveform_SetPowerMin)(BSTR Channel);
	STDMETHOD(IWX218xStandardWaveform_SetPowerMax)(BSTR Channel);
	STDMETHOD(IWX218xStandardWaveform_SetFrequencyMin)(BSTR Channel);
	STDMETHOD(IWX218xStandardWaveform_SetFrequencyMax)(BSTR Channel);
	STDMETHOD(IWX218xStandardWaveform_SetDCOffsetMin)(BSTR Channel);
	STDMETHOD(IWX218xStandardWaveform_SetDCOffsetMax)(BSTR Channel);
	STDMETHOD(IWX218xStandardWaveform_SetAmplitudeMin)(BSTR Channel);
	STDMETHOD(IWX218xStandardWaveform_SetAmplitudeMax)(BSTR Channel);
	STDMETHOD(RampDelay_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_Power_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(GaussExponent_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(Frequency_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(ExpExponent_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(DutyCycleHigh_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(DCOffset_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(DcLevel_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_DacAmplitude_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xStandardWaveform_ConfigureRampWaveform)(BSTR Channel, double Delay, double RiseTime, double FallTime);
	STDMETHOD(IWX218xStandardWaveform_Amplitude_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xArbitrary_ClearMemory)();
	STDMETHOD(IWX218xArbitrary_ConfigureFreqRastDivider)(BSTR Channel, WX218xFreqDividerEnum Divider);
	STDMETHOD(IWX218xArbitrary_ConfigureArbGain)(BSTR Channel, double Gain);
	STDMETHOD(IWX218xArbitrary_ConfigureArbOffset)(BSTR Channel, double Offset);
	STDMETHOD(IWX218xArbitrary_ConfigureArbSampleRate)(double SampleRate);
	STDMETHOD(IWX218xArbitrary_get_ClockDivider)(BSTR Channel, long* val);
	STDMETHOD(IWX218xArbitrary_put_ClockDivider)(BSTR Channel, long val);
	STDMETHOD(IWX218xArbitrary_get_Gain)(BSTR Channel, double* val);
	STDMETHOD(IWX218xArbitrary_put_Gain)(BSTR Channel, double val);
	STDMETHOD(IWX218xArbitrary_get_Offset)(BSTR Channel, double* val);
	STDMETHOD(IWX218xArbitrary_put_Offset)(BSTR Channel, double val);
	STDMETHOD(IWX218xArbitrary_get_SampleRate)(double* val);
	STDMETHOD(IWX218xArbitrary_put_SampleRate)(double val);
	STDMETHOD(IWX218xArbitrary_get_SampleRateSource)(BSTR Channel, WX218xSampleRateSourceEnum* val);
	STDMETHOD(IWX218xArbitrary_put_SampleRateSource)(BSTR Channel, WX218xSampleRateSourceEnum val);
	STDMETHOD(IWX218xArbitrary_get_Source)(BSTR Channel, WX218xArbitrarySourceEnum* val);
	STDMETHOD(IWX218xArbitrary_put_Source)(BSTR Channel, WX218xArbitrarySourceEnum val);
	STDMETHOD(IWX218xArbitrary_get_Timing)(BSTR Channel, WX218xArbitraryTimingEnum* val);
	STDMETHOD(IWX218xArbitrary_put_Timing)(BSTR Channel, WX218xArbitraryTimingEnum val);
	STDMETHOD(IWX218xArbitrary_get_Waveform)(IWX218xArbitraryWaveform** val);
	STDMETHOD(IWX218xArbitrary_get_Sequence)(IWX218xArbitrarySequence** val);
	STDMETHOD(IWX218xArbitrary_get_FreqRastDivider)(BSTR Channel, WX218xFreqDividerEnum* val);
	STDMETHOD(IWX218xArbitrary_put_FreqRastDivider)(BSTR Channel, WX218xFreqDividerEnum val);
	STDMETHOD(IWX218xArbitrary_ConfigureArbTiming)(BSTR Channel, WX218xArbitraryTimingEnum Timing);
	STDMETHOD(IWX218xArbitrary_ConfigureArbSource)(BSTR Channel, WX218xArbitrarySourceEnum Source);
	STDMETHOD(IWX218xArbitrary_ConfigureSampleRateSource)(BSTR Channel, WX218xSampleRateSourceEnum SampleRateSource);
	STDMETHOD(IWX218xArbitrary_ConfigureClockDivider)(BSTR Channel, long ClockDivider);
	STDMETHOD(IWX218xArbitrary_SetSampleRateMin)();
	STDMETHOD(IWX218xArbitrary_SetSampleRateMax)();
	STDMETHOD(IWX218xArbitrary_SampleRate_RangeCheck)(LPCTSTR pszPropertyName, double val);
	STDMETHOD(IWX218xArbitrary_ClockDivider_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);

	STDMETHOD(IWX218xArbitraryWaveform_Clear)(long Handle);
	STDMETHOD(IWX218xArbitraryWaveform_Configure)(BSTR Channel, long Handle, double Gain, double Offset);
	STDMETHOD(IWX218xArbitraryWaveform_Create)(SAFEARRAY** Data, long* val);
	STDMETHOD(IWX218xArbitraryWaveform_LoadArbWfmFromFile)(BSTR Channel, BSTR FileName, long* val);
	STDMETHOD(IWX218xArbitraryWaveform_LoadCSVFile)(BSTR Channel, BSTR FileName, long* val);
	STDMETHOD(IWX218xArbitraryWaveform_LoadCSVFileAdv)(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2);
	STDMETHOD(IWX218xArbitraryWaveform_get_NumberWaveformsMax)(long* val);
	STDMETHOD(IWX218xArbitraryWaveform_get_Quantum)(long* val);
	STDMETHOD(IWX218xArbitraryWaveform_get_SizeMax)(long* val);
	STDMETHOD(IWX218xArbitraryWaveform_get_SizeMin)(long* val);
	STDMETHOD(IWX218xArbitraryWaveform_get_TraceMode)(WX218xTraceModeEnum* val);
	STDMETHOD(IWX218xArbitraryWaveform_put_TraceMode)(WX218xTraceModeEnum val);
	STDMETHOD(IWX218xArbitraryWaveform_get_FastDownload)(long* val);
	STDMETHOD(IWX218xArbitraryWaveform_put_FastDownload)(long val);
	STDMETHOD(IWX218xArbitraryWaveform_get_DownloadRecord)(WX218xArbDownloadRecordEnum* val);
	STDMETHOD(IWX218xArbitraryWaveform_put_DownloadRecord)(WX218xArbDownloadRecordEnum val);
	STDMETHOD(IWX218xArbitraryWaveform_ConfigureDownloadRecord)(WX218xArbDownloadRecordEnum DownloadRecord);
	STDMETHOD(IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFileAdv)(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2);
	STDMETHOD(IWX218xArbitraryWaveform_LoadAsciiArbWfmFromFile)(BSTR Channel, BSTR FileName, long* val);
	STDMETHOD(IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFileAdv)(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2);
	STDMETHOD(IWX218xArbitraryWaveform_LoadBinaryArbWfmFromFile)(BSTR Channel, BSTR FileName, long* val);
	STDMETHOD(IWX218xArbitraryWaveform_FastDownload_RangeCheck)(LPCTSTR pszPropertyName, long val);
	STDMETHOD(IWX218xArbitraryWaveform_ConfigureArbWaveTraceMode)(WX218xTraceModeEnum TraceMode);
	STDMETHOD(IWX218xArbitraryWaveform_SetActiveSegment)(BSTR Channel, long SegNum);
	STDMETHOD(IWX218xArbitraryWaveform_SetCoupleActiveSegment)(long SegNum1, long SegNum2);
	STDMETHOD(IWX218xArbitraryWaveform_CreateCustomAdv)(SAFEARRAY** Data1, SAFEARRAY** Data2, long* Handle1, long* Handle2);
	STDMETHOD(IWX218xArbitraryWaveform_LoadArbWfmFromFileAdv)(BSTR Channel, BSTR FileName1, BSTR FileName2, long* Handle1, long* Handle2);
	STDMETHOD(IWX218xArbitraryWaveform_CreateCustom)(SAFEARRAY** Data, long* val);

   STDMETHOD(IWX218xArbitrarySequence_get_AdvanceMode)(BSTR Channel, WX218xSequenceAdvanceModeEnum* val);
	STDMETHOD(IWX218xArbitrarySequence_put_AdvanceMode)(BSTR Channel, WX218xSequenceAdvanceModeEnum val);
	STDMETHOD(IWX218xArbitrarySequence_get_JumpEvent)(BSTR Channel, WX218xSequenceJumpEventEnum* val);
	STDMETHOD(IWX218xArbitrarySequence_put_JumpEvent)(BSTR Channel, WX218xSequenceJumpEventEnum val);
	STDMETHOD(IWX218xArbitrarySequence_get_LengthMax)(long* val);
	STDMETHOD(IWX218xArbitrarySequence_get_LengthMin)(long* val);
	STDMETHOD(IWX218xArbitrarySequence_get_LoopCountMax)(long* val);
	STDMETHOD(IWX218xArbitrarySequence_get_NumberSequenceMax)(long* val);
	STDMETHOD(IWX218xArbitrarySequence_get_Source)(BSTR Channel, WX218xSequenceSourceEnum* val);
	STDMETHOD(IWX218xArbitrarySequence_put_Source)(BSTR Channel, WX218xSequenceSourceEnum val);
	STDMETHOD(IWX218xArbitrarySequence_get_SyncLock)(BSTR Channel, long* val);
	STDMETHOD(IWX218xArbitrarySequence_put_SyncLock)(BSTR Channel, long val);
	STDMETHOD(IWX218xArbitrarySequence_get_Timing)(BSTR Channel, WX218xSequenceTimingEnum* val);
	STDMETHOD(IWX218xArbitrarySequence_put_Timing)(BSTR Channel, WX218xSequenceTimingEnum val);
	STDMETHOD(IWX218xArbitrarySequence_get_AdvanceSequence)(IWX218xArbitrarySequenceAdvanceSequence** val);
	STDMETHOD(IWX218xArbitrarySequence_get_QuickSequence)(long* val);
	STDMETHOD(IWX218xArbitrarySequence_put_QuickSequence)(long val);
	STDMETHOD(IWX218xArbitrarySequence_get_Prestep)(BSTR Channel, WX218xSequencePrestepEnum* val);
	STDMETHOD(IWX218xArbitrarySequence_put_Prestep)(BSTR Channel, WX218xSequencePrestepEnum val);
	STDMETHOD(IWX218xArbitrarySequence_ConfigureSeqTiming)(BSTR Channel, WX218xSequenceTimingEnum Timing);
	STDMETHOD(IWX218xArbitrarySequence_ConfigureSeqSyncLock)(BSTR Channel, long SyncLock);
	STDMETHOD(IWX218xArbitrarySequence_ConfigureSeqSource)(BSTR Channel, WX218xSequenceSourceEnum Source);
	STDMETHOD(IWX218xArbitrarySequence_ConfigureSeqPrestep)(BSTR Channel, WX218xSequencePrestepEnum Prestep);
	STDMETHOD(IWX218xArbitrarySequence_ConfigureSeqJumpEvent)(BSTR Channel, WX218xSequenceJumpEventEnum JumpEvent);
	STDMETHOD(IWX218xArbitrarySequence_ConfigureAdvanceMode)(BSTR Channel, WX218xSequenceAdvanceModeEnum AdvanceMode);
	STDMETHOD(IWX218xArbitrarySequence_CreateSequenceAdv1)(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag, long* val);
	STDMETHOD(IWX218xArbitrarySequence_SetActiveSequence)(BSTR Channel, long SeqNum);
	STDMETHOD(IWX218xArbitrarySequence_SetCoupleActiveSequence)(long SeqNum1, long SeqNum2);
	STDMETHOD(IWX218xArbitrarySequence_QuickSequence_RangeCheck)(LPCTSTR pszPropertyName, long val);

	STDMETHOD(IWX218xArbitrarySequence_SyncLock_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);

   STDMETHOD(IWX218xArbitrarySequence_CreateSequenceAdv)(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag, long* val);
	STDMETHOD(IWX218xArbitrarySequence_get_OnceCount)(BSTR Channel, long* val);
	STDMETHOD(IWX218xArbitrarySequence_put_OnceCount)(BSTR Channel, long val);
	STDMETHOD(IWX218xArbitrarySequence_ConfigureOnceCount)(BSTR Channel, long Count);
	STDMETHOD(IWX218xArbitrarySequence_Create)(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, long* val);
	STDMETHOD(IWX218xArbitrarySequence_Configure)(BSTR Channel, long Handle, double Gain, double Offset);
	STDMETHOD(IWX218xArbitrarySequence_Clear)(long Handle);

	STDMETHOD(IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence)(SAFEARRAY** SeqHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag);
	STDMETHOD(IWX218xArbitrarySequenceAdvanceSequence_get_OnceCount)(BSTR Channel, long* val);
	STDMETHOD(IWX218xArbitrarySequenceAdvanceSequence_put_OnceCount)(BSTR Channel, long val);
	STDMETHOD(IWX218xArbitrarySequenceAdvanceSequence_ConfigureOnceCount)(BSTR Channel, long Count);
	STDMETHOD(IWX218xArbitrarySequenceAdvanceSequence_DeleteAdvSequence)();
	STDMETHOD(IWX218xArbitrarySequenceAdvanceSequence_get_Mode)(BSTR Channel, WX218xAdvanceSequenceModeEnum* val);
	STDMETHOD(IWX218xArbitrarySequenceAdvanceSequence_put_Mode)(BSTR Channel, WX218xAdvanceSequenceModeEnum val);
	STDMETHOD(IWX218xArbitrarySequenceAdvanceSequence_get_SyncLock)(BSTR Channel, long* val);
	STDMETHOD(IWX218xArbitrarySequenceAdvanceSequence_put_SyncLock)(BSTR Channel, long val);
	STDMETHOD(IWX218xArbitrarySequenceAdvanceSequence_CreateAdvSequence1)(SAFEARRAY** SeqHandle, SAFEARRAY** LoopCount, SAFEARRAY** JumpFlag);
	STDMETHOD(IWX218xArbitrarySequenceAdvanceSequence_SyncLock_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);

	STDMETHOD(IWX218xCarrierModulation_get_Frequency)(BSTR Channel, double* val);
	STDMETHOD(IWX218xCarrierModulation_put_Frequency)(BSTR Channel, double val);
	STDMETHOD(IWX218xCarrierModulation_get_Waveform)(BSTR Channel, WX218xCarrierModulationWaveformEnum* val);
	STDMETHOD(IWX218xCarrierModulation_put_Waveform)(BSTR Channel, WX218xCarrierModulationWaveformEnum val);
	STDMETHOD(IWX218xCarrierModulation_ConfigureCarrWaveform)(BSTR Channel, WX218xCarrierModulationWaveformEnum Waveform);
	STDMETHOD(IWX218xCarrierModulation_ConfigureCarrFreq)(BSTR Channel, double Freq);
	STDMETHOD(IWX218xCarrierModulation_Frequency_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xCouple_get_Enabled)(VARIANT_BOOL* val);
	STDMETHOD(IWX218xCouple_put_Enabled)(VARIANT_BOOL val);
	STDMETHOD(IWX218xCouple_get_Offset)(BSTR Channel, long* val);
	STDMETHOD(IWX218xCouple_put_Offset)(BSTR Channel, long val);
	STDMETHOD(IWX218xCouple_get_Skew)(double* val);
	STDMETHOD(IWX218xCouple_put_Skew)(double val);
	STDMETHOD(IWX218xCouple_ConfigureCoupleSkew)(double Skew);
	STDMETHOD(IWX218xCouple_ConfigureCoupleOffset)(BSTR Channel, long Offset);
	STDMETHOD(IWX218xCouple_ConfigureCoupleEnabled)(VARIANT_BOOL Enabled);
	STDMETHOD(IWX218xCouple_Skew_RangeCheck)(LPCTSTR pszPropertyName, double val);

	STDMETHOD(IWX218xFM_ConfigureInternal)(double Deviation, WX218xFMInternalWaveformEnum Waveform, double Frequency);
	STDMETHOD(IWX218xFM_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xFM_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xFM_get_InternalDeviation)(double* val);
	STDMETHOD(IWX218xFM_put_InternalDeviation)(double val);
	STDMETHOD(IWX218xFM_get_InternalFrequency)(double* val);
	STDMETHOD(IWX218xFM_put_InternalFrequency)(double val);
	STDMETHOD(IWX218xFM_get_InternalWaveform)(WX218xFMInternalWaveformEnum* val);
	STDMETHOD(IWX218xFM_put_InternalWaveform)(WX218xFMInternalWaveformEnum val);
	STDMETHOD(IWX218xFM_get_Marker)(BSTR Channel, double* val);
	STDMETHOD(IWX218xFM_put_Marker)(BSTR Channel, double val);
	STDMETHOD(IWX218xFM_ConfigureFMMarker)(BSTR Channel, double val);
	STDMETHOD(IWX218xFM_ConfigureFMEnabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xFM_Marker_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xFM_InternalFrequency_RangeCheck)(LPCTSTR pszPropertyName, double val);
	STDMETHOD(IWX218xFM_InternalDeviation_RangeCheck)(LPCTSTR pszPropertyName, double val);

	STDMETHOD(IWX218xMarkers_get_Delay)(BSTR Channel, long Index, double* val);
	STDMETHOD(IWX218xMarkers_put_Delay)(BSTR Channel, long Index, double val);
	STDMETHOD(IWX218xMarkers_get_Enabled)(BSTR Channel, long Index, VARIANT_BOOL* val);
	STDMETHOD(IWX218xMarkers_put_Enabled)(BSTR Channel, long Index, VARIANT_BOOL val);
	STDMETHOD(IWX218xMarkers_get_HighLevel)(BSTR Channel, long Index, double* val);
	STDMETHOD(IWX218xMarkers_put_HighLevel)(BSTR Channel, long Index, double val);
	STDMETHOD(IWX218xMarkers_get_LowLevel)(BSTR Channel, long Index, double* val);
	STDMETHOD(IWX218xMarkers_put_LowLevel)(BSTR Channel, long Index, double val);
	STDMETHOD(IWX218xMarkers_get_Position)(BSTR Channel, long Index, long* val);
	STDMETHOD(IWX218xMarkers_put_Position)(BSTR Channel, long Index, long val);
	STDMETHOD(IWX218xMarkers_get_Width)(BSTR Channel, long Index, long* val);
	STDMETHOD(IWX218xMarkers_put_Width)(BSTR Channel, long Index, long val);
	STDMETHOD(IWX218xMarkers_get_Control)(BSTR Channel, long Index, WX218xMarkerControlEnum* val);
	STDMETHOD(IWX218xMarkers_put_Control)(BSTR Channel, long Index, WX218xMarkerControlEnum val);
	STDMETHOD(IWX218xMarkers_get_MarkerIndex)(BSTR Channel, long* val);
	STDMETHOD(IWX218xMarkers_put_MarkerIndex)(BSTR Channel, long val);
	STDMETHOD(IWX218xMarkers_get_Source)(BSTR Channel, WX218xMarkerSourceEnum* val);
	STDMETHOD(IWX218xMarkers_put_Source)(BSTR Channel, WX218xMarkerSourceEnum val);
	STDMETHOD(IWX218xMarkers_MarkerRefresh)(BSTR Channel);
	STDMETHOD(IWX218xMarkers_ConfigureMarkerWidth)(BSTR Channel, long Index, long Width);
	STDMETHOD(IWX218xMarkers_ConfigureMarkerSource)(BSTR Channel, WX218xMarkerSourceEnum Source);
	STDMETHOD(IWX218xMarkers_ConfigureMarkerPosition)(BSTR Channel, long Index, long Position);
	STDMETHOD(IWX218xMarkers_ConfigureMarkerIndex)(BSTR Channel, long Index);
	STDMETHOD(IWX218xMarkers_ConfigureMarkerLowLevel)(BSTR Channel, long Index, double LowLevel);
	STDMETHOD(IWX218xMarkers_ConfigureMarkerHighLevel)(BSTR Channel, long Index, double HighLevel);
	STDMETHOD(IWX218xMarkers_ConfigureMarkerEnabled)(BSTR Channel, long Index, VARIANT_BOOL Enabled);
	STDMETHOD(IWX218xMarkers_ConfigureMarkerDelay)(BSTR Channel, long Index, double Delay);
	STDMETHOD(IWX218xMarkers_ConfigureMarkerControl)(BSTR Channel, long Index, WX218xMarkerControlEnum Control);
	STDMETHOD(IWX218xMarkers_Refresh)(BSTR Channel, long Index);
	STDMETHOD(IWX218xMarkers_get_HighLevel4Ch)(BSTR Channel, double* val);
	STDMETHOD(IWX218xMarkers_put_HighLevel4Ch)(BSTR Channel, double val);
	STDMETHOD(IWX218xMarkers_ConfigureMarkerHighLevel4Ch)(BSTR Channel, double HighLevel);
	STDMETHOD(IWX218xMarkers_get_LowLevel4Ch)(BSTR Channel, double* val);
	STDMETHOD(IWX218xMarkers_put_LowLevel4Ch)(BSTR Channel, double val);
	STDMETHOD(IWX218xMarkers_ConfigureMarkerLowLevel4Ch)(BSTR Channel, double LowLevel);
	STDMETHOD(IWX218xMarkers_Width_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long Index, long val);
	STDMETHOD(IWX218xMarkers_Position_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long Index, long val);
	STDMETHOD(IWX218xMarkers_LowLevel_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long Index, double val);
	STDMETHOD(IWX218xMarkers_HighLevel_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long Index, double val);
	STDMETHOD(IWX218xMarkers_Delay_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long Index, double val);

	STDMETHOD(IWX218xTrigger_get_BurstCount)(BSTR Channel, long* val);
	STDMETHOD(IWX218xTrigger_put_BurstCount)(BSTR Channel, long val);
	STDMETHOD(IWX218xTrigger_get_ContinuousMode)(BSTR Channel, WX218xContinuousModeEnum* val);
	STDMETHOD(IWX218xTrigger_put_ContinuousMode)(BSTR Channel, WX218xContinuousModeEnum val);
	STDMETHOD(IWX218xTrigger_get_ContinuousSource)(BSTR Channel, WX218xContinuousSourceEnum* val);
	STDMETHOD(IWX218xTrigger_put_ContinuousSource)(BSTR Channel, WX218xContinuousSourceEnum val);
	STDMETHOD(IWX218xTrigger_get_Delay)(BSTR Channel, long* val);
	STDMETHOD(IWX218xTrigger_put_Delay)(BSTR Channel, long val);
	STDMETHOD(IWX218xTrigger_get_Level)(BSTR Channel, double* val);
	STDMETHOD(IWX218xTrigger_put_Level)(BSTR Channel, double val);
	STDMETHOD(IWX218xTrigger_get_Slope)(BSTR Channel, WX218xTriggerSlopeEnum* val);
	STDMETHOD(IWX218xTrigger_put_Slope)(BSTR Channel, WX218xTriggerSlopeEnum val);
	STDMETHOD(IWX218xTrigger_get_Source)(BSTR Channel, WX218xTriggerSourceEnum* val);
	STDMETHOD(IWX218xTrigger_put_Source)(BSTR Channel, WX218xTriggerSourceEnum val);
	STDMETHOD(IWX218xTrigger_get_TimerDelay)(BSTR Channel, long* val);
	STDMETHOD(IWX218xTrigger_put_TimerDelay)(BSTR Channel, long val);
	STDMETHOD(IWX218xTrigger_get_TimerMode)(BSTR Channel, WX218xTriggerTimerModeEnum* val);
	STDMETHOD(IWX218xTrigger_put_TimerMode)(BSTR Channel, WX218xTriggerTimerModeEnum val);
	STDMETHOD(IWX218xTrigger_get_TimerTime)(BSTR Channel, double* val);
	STDMETHOD(IWX218xTrigger_put_TimerTime)(BSTR Channel, double val);
	STDMETHOD(IWX218xTrigger_get_TriggerMode)(BSTR Channel, WX218xTriggerModeEnum* val);
	STDMETHOD(IWX218xTrigger_put_TriggerMode)(BSTR Channel, WX218xTriggerModeEnum val);
	STDMETHOD(IWX218xTrigger_get_ARM)(IWX218xTriggerARM** val);
	STDMETHOD(IWX218xTrigger_get_SmartTrigger)(IWX218xTriggerSmartTrigger** val);
	STDMETHOD(IWX218xTrigger_get_TriggerImpedance)(WX218xTriggerImpedanceEnum* val);
	STDMETHOD(IWX218xTrigger_put_TriggerImpedance)(WX218xTriggerImpedanceEnum val);
	STDMETHOD(IWX218xTrigger_ConfigureTriggerImpedance)(WX218xTriggerImpedanceEnum TriggerImpedance);
	STDMETHOD(IWX218xTrigger_ConfigureTriggerMode)(BSTR Channel, WX218xTriggerModeEnum Mode);
	STDMETHOD(IWX218xTrigger_ConfigureTrigTimerMode)(BSTR Channel, WX218xTriggerTimerModeEnum TimerMode);
	STDMETHOD(IWX218xTrigger_ConfigureTrigSource)(BSTR Channel, WX218xTriggerSourceEnum Source);
	STDMETHOD(IWX218xTrigger_ConfigureTrigSlope)(BSTR Channel, WX218xTriggerSlopeEnum Slope);
	STDMETHOD(IWX218xTrigger_ConfigureTrigContSource)(BSTR Channel, WX218xContinuousSourceEnum Source);
	STDMETHOD(IWX218xTrigger_ConfigureTrigContMode)(BSTR Channel, WX218xContinuousModeEnum ContMode);
	STDMETHOD(IWX218xTrigger_ConfigureTriggerTimerTime)(BSTR Channel, double TimerTime);
	STDMETHOD(IWX218xTrigger_ConfigureTriggerTimerDelay)(BSTR Channel, long TimerDelay);
	STDMETHOD(IWX218xTrigger_ConfigureTriggerLevel)(BSTR Channel, double Level);
	STDMETHOD(IWX218xTrigger_ConfigureTriggerDelay)(BSTR Channel, long Delay);
	STDMETHOD(IWX218xTrigger_ConfigureBurstCount)(BSTR Channel, long Count);
	STDMETHOD(IWX218xTrigger_Timer_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xTrigger_TimerDelay_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xTrigger_SetTTLLevel)(BSTR Channel);
	STDMETHOD(IWX218xTrigger_SetECLLevel)(BSTR Channel);
	STDMETHOD(IWX218xTrigger_SendSoftwareTrigger)();
	STDMETHOD(IWX218xTrigger_Level_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(Delay_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(BurstCount_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);

	STDMETHOD(IWX218xTriggerARM_get_Level)(BSTR Channel, double* val);
	STDMETHOD(IWX218xTriggerARM_put_Level)(BSTR Channel, double val);
	STDMETHOD(IWX218xTriggerARM_get_Slope)(BSTR Channel, WX218xArmSlopeEnum* val);
	STDMETHOD(IWX218xTriggerARM_put_Slope)(BSTR Channel, WX218xArmSlopeEnum val);
	STDMETHOD(IWX218xTriggerARM_ConfigureTrigARMSlope)(BSTR Channel, WX218xArmSlopeEnum Slope);
	STDMETHOD(IWX218xTriggerARM_ConfigureTrigARMLevel)(BSTR Channel, double Level);
	STDMETHOD(IWX218xTriggerARM_SetTtlLevel)(BSTR Channel);
	STDMETHOD(IWX218xTriggerARM_SetECLLevel)(BSTR Channel);
	STDMETHOD(IWX218xTriggerARM_Level_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xTriggerSmartTrigger_get_HiPassEnabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xTriggerSmartTrigger_put_HiPassEnabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xTriggerSmartTrigger_get_HiPassWidth)(BSTR Channel, double* val);
	STDMETHOD(IWX218xTriggerSmartTrigger_put_HiPassWidth)(BSTR Channel, double val);
	STDMETHOD(IWX218xTriggerSmartTrigger_get_Holdoff)(BSTR Channel, double* val);
	STDMETHOD(IWX218xTriggerSmartTrigger_put_Holdoff)(BSTR Channel, double val);
	STDMETHOD(IWX218xTriggerSmartTrigger_get_HoldoffEnabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xTriggerSmartTrigger_put_HoldoffEnabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xTriggerSmartTrigger_get_LowPassEnabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xTriggerSmartTrigger_put_LowPassEnabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xTriggerSmartTrigger_get_LowPassWidth)(BSTR Channel, double* val);
	STDMETHOD(IWX218xTriggerSmartTrigger_put_LowPassWidth)(BSTR Channel, double val);
	STDMETHOD(IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassWidth)(BSTR Channel, double Width);
	STDMETHOD(IWX218xTriggerSmartTrigger_ConfigureSmartTrigLowPassState)(BSTR Channel, VARIANT_BOOL State);
	STDMETHOD(IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoffState)(BSTR Channel, VARIANT_BOOL State);
	STDMETHOD(IWX218xTriggerSmartTrigger_ConfigureSmartTrigHoldoff)(BSTR Channel, double Holdoff);
	STDMETHOD(IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassWidth)(BSTR Channel, double Width);
	STDMETHOD(IWX218xTriggerSmartTrigger_ConfigureSmartTrigHiPassEnabled)(BSTR Channel, VARIANT_BOOL State);
	STDMETHOD(IWX218xTriggerSmartTrigger_Holdoff_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xTriggerSmartTrigger_HiPassWidth_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xStateStorage_get_CellRecall)(long* val);
	STDMETHOD(IWX218xStateStorage_put_CellRecall)(long val);
	STDMETHOD(IWX218xStateStorage_get_CellStore)(long* val);
	STDMETHOD(IWX218xStateStorage_put_CellStore)(long val);
	STDMETHOD(IWX218xStateStorage_get_ConfigurationStore)(WX218xStateStorageConfigurationEnum* val);
	STDMETHOD(IWX218xStateStorage_put_ConfigurationStore)(WX218xStateStorageConfigurationEnum val);
	STDMETHOD(IWX218xStateStorage_get_TargetRecall)(WX218xStateStorageTargetEnum* val);
	STDMETHOD(IWX218xStateStorage_put_TargetRecall)(WX218xStateStorageTargetEnum val);
	STDMETHOD(IWX218xStateStorage_get_TargetStore)(WX218xStateStorageTargetEnum* val);
	STDMETHOD(IWX218xStateStorage_put_TargetStore)(WX218xStateStorageTargetEnum val);
	STDMETHOD(IWX218xStateStorage_get_ConfigurationRecall)(WX218xStateStorageRecalConfigurationEnum* val);
	STDMETHOD(IWX218xStateStorage_get_StoreEnabled)(VARIANT_BOOL* val);
	STDMETHOD(IWX218xStateStorage_put_StoreEnabled)(VARIANT_BOOL val);
	STDMETHOD(IWX218xStateStorage_get_RecallEnabled)(VARIANT_BOOL* val);
	STDMETHOD(IWX218xStateStorage_put_RecallEnabled)(VARIANT_BOOL val);
	STDMETHOD(IWX218xStateStorage_Store)(long Cell, WX218xStateStorageConfigurationEnum Configuration, WX218xStateStorageTargetEnum Target);
	STDMETHOD(IWX218xStateStorage_Save)();
	STDMETHOD(IWX218xStateStorage_Recall)(long Cell, WX218xStateStorageTargetEnum Target);
	STDMETHOD(IWX218xStateStorage_Load)();
	STDMETHOD(IWX218xStateStorage_Clear)();
	STDMETHOD(IWX218xStateStorage_CellRecall_RangeCheck)(LPCTSTR pszPropertyName, long val);

	STDMETHOD(IWX218xXInstrument_get_Enabled)(VARIANT_BOOL* val);
	STDMETHOD(IWX218xXInstrument_put_Enabled)(VARIANT_BOOL val);
	STDMETHOD(IWX218xXInstrument_get_Mode)(WX218xXInstrumentModeEnum* val);
	STDMETHOD(IWX218xXInstrument_put_Mode)(WX218xXInstrumentModeEnum val);
	STDMETHOD(IWX218xXInstrument_get_Offset)(long* val);
	STDMETHOD(IWX218xXInstrument_put_Offset)(long val);
	STDMETHOD(IWX218xXInstrument_get_ModeAdv)(WX218xXInstrumentModeAdvEnum* val);
	STDMETHOD(IWX218xXInstrument_put_ModeAdv)(WX218xXInstrumentModeAdvEnum val);
	STDMETHOD(IWX218xXInstrument_ConfigureXInstrumentOffset)(long Offset);
	STDMETHOD(IWX218xXInstrument_ConfigureXInstrumentModeAdv)(WX218xXInstrumentModeAdvEnum ModeAdv);
	STDMETHOD(IWX218xXInstrument_ConfigureXInstrumentMode)(WX218xXInstrumentModeEnum Mode);
	STDMETHOD(IWX218xXInstrument_ConfigureXInstrumentEnabled)(VARIANT_BOOL State);
	STDMETHOD(IWX218xXInstrument_Offset_RangeCheck)(LPCTSTR pszPropertyName, long val);

	STDMETHOD(IWX218xDigitalPulse_get_Amplitude)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_Amplitude)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_Amplitude_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_get_Configure)(BSTR Channel, WX218xPulseConfigureEnum* val);
	STDMETHOD(IWX218xDigitalPulse_put_Configure)(BSTR Channel, WX218xPulseConfigureEnum val);
	STDMETHOD(IWX218xDigitalPulse_get_Delay)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_Delay)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_get_DelayPercent)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_DelayPercent)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_DelayPercent_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_Delay_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xDigitalPulse_get_DoubleDelay)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_DoubleDelay)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_get_DoubleDelayPercent)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_DoubleDelayPercent)(BSTR Channel, double val);

	STDMETHOD(IWX218xDigitalPulse_get_FallTime)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_FallTime)(BSTR Channel, double val);

	STDMETHOD(IWX218xDigitalPulse_get_FallTimePercent)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_FallTimePercent)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_get_HighLevel)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_HighLevel)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_get_LevelControl)(BSTR Channel, WX218xPulseLevelControlEnum* val);
	STDMETHOD(IWX218xDigitalPulse_put_LevelControl)(BSTR Channel, WX218xPulseLevelControlEnum val);
	STDMETHOD(IWX218xDigitalPulse_get_LowLevel)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_LowLevel)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_get_Mode)(BSTR Channel, WX218xPulseModeEnum* val);
	STDMETHOD(IWX218xDigitalPulse_put_Mode)(BSTR Channel, WX218xPulseModeEnum val);
	STDMETHOD(IWX218xDigitalPulse_get_Offset)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_Offset)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_Offset_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_get_Period)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_Period)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_get_Polarity)(BSTR Channel, WX218xPulsePolarityEnum* val);
	STDMETHOD(IWX218xDigitalPulse_put_Polarity)(BSTR Channel, WX218xPulsePolarityEnum val);
	STDMETHOD(IWX218xDigitalPulse_get_RiseTime)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_RiseTime)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_get_RiseTimePercent)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_RiseTimePercent)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_RiseTime_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_Period_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_LowLevel_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
   STDMETHOD(IWX218xDigitalPulse_HighLevel_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
   STDMETHOD(IWX218xDigitalPulse_SetAmplitudeMax)(BSTR Channel);
   STDMETHOD(IWX218xDigitalPulse_SetAmplitudeMin)(BSTR Channel);
   STDMETHOD(IWX218xDigitalPulse_SetOffsetMax)(BSTR Channel);
   STDMETHOD(IWX218xDigitalPulse_SetOffsetMin)(BSTR Channel);
   STDMETHOD(IWX218xDigitalPulse_get_Transition)(BSTR Channel, WX218xPulseTransitionEnum* val);
	STDMETHOD(IWX218xDigitalPulse_put_Transition)(BSTR Channel, WX218xPulseTransitionEnum val);
   STDMETHOD(IWX218xDigitalPulse_get_Width)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_Width)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_Width_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_get_WidthPercent)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPulse_put_WidthPercent)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseWidthPercent)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseWidth)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseTransition)(BSTR Channel, WX218xPulseTransitionEnum val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureRiseTimePercent)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseRiseTime)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulsePolarity)(BSTR Channel, WX218xPulsePolarityEnum val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulsePeriod)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseOffset)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseMode)(BSTR Channel, WX218xPulseModeEnum val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseLowLevel)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseLevelControl)(BSTR Channel, WX218xPulseLevelControlEnum val);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseHighLevel)(BSTR Channel, double HighLevel);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseFallTimePercent)(BSTR Channel, double FallTimePercent);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseFallTime)(BSTR Channel, double FallTime);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseDoubleDelayPercent)(BSTR Channel, double DoubleDelayPercent);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseDoubleDelay)(BSTR Channel, double DoubleDelay);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseDelayPercent)(BSTR Channel, double DelayPercent);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseDelay)(BSTR Channel, double Delay);
	STDMETHOD(IWX218xDigitalPulse_ConfigureDigPulseAmplitude)(BSTR Channel, double Amplitude);

	STDMETHOD(IWX218xSweep_get_Direction)(BSTR Channel, WX218xSweepDirectionEnum* val);
	STDMETHOD(IWX218xSweep_put_Direction)(BSTR Channel, WX218xSweepDirectionEnum val);
	STDMETHOD(IWX218xSweep_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xSweep_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xSweep_get_FrequencyStart)(BSTR Channel, double* val);
	STDMETHOD(IWX218xSweep_put_FrequencyStart)(BSTR Channel, double val);
	STDMETHOD(IWX218xSweep_get_FrequencyStop)(BSTR Channel, double* val);
	STDMETHOD(IWX218xSweep_put_FrequencyStop)(BSTR Channel, double val);
	STDMETHOD(IWX218xSweep_get_Marker)(BSTR Channel, double* val);
	STDMETHOD(IWX218xSweep_put_Marker)(BSTR Channel, double val);
	STDMETHOD(IWX218xSweep_get_Spacing)(BSTR Channel, WX218xSweepSpacingEnum* val);
	STDMETHOD(IWX218xSweep_put_Spacing)(BSTR Channel, WX218xSweepSpacingEnum val);
	STDMETHOD(IWX218xSweep_get_Time)(BSTR Channel, double* val);
	STDMETHOD(IWX218xSweep_put_Time)(BSTR Channel, double val);
	STDMETHOD(IWX218xSweep_ConfigureSweepTime)(BSTR Channel, double Time);
	STDMETHOD(IWX218xSweep_ConfigureSweepSpacing)(BSTR Channel, WX218xSweepSpacingEnum Spacing);
	STDMETHOD(IWX218xSweep_ConfigureSweepMarker)(BSTR Channel, double Marker);
	STDMETHOD(IWX218xSweep_ConfigureSweepFreqStop)(BSTR Channel, double FreqStop);
	STDMETHOD(IWX218xSweep_ConfigureSweepFreqStart)(BSTR Channel, double FreqStart);
	STDMETHOD(IWX218xSweep_ConfigureSweepState)(BSTR Channel, VARIANT_BOOL State);
	STDMETHOD(IWX218xSweep_ConfigureSweepDirection)(BSTR Channel, WX218xSweepDirectionEnum Direction);
	STDMETHOD(IWX218xSweep_Time_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xSweep_FrequencyStart_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);


	STDMETHOD(IWX218xDigitalPatternOutput_get_BitDelay)(BSTR Channel, long Index, double* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_BitDelay)(BSTR Channel, long Index, double val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_BitHighLevel)(BSTR Channel, long Index, double* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_BitHighLevel)(BSTR Channel, long Index, double val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_BitLowLevel)(BSTR Channel, long Index, double* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_BitLowLevel)(BSTR Channel, long Index, double val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_DelayMode)(BSTR Channel, WX218xDigPatternDelayModeEnum* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_DelayMode)(BSTR Channel, WX218xDigPatternDelayModeEnum val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_LevelMode)(BSTR Channel, WX218xDigPatternLevelModeEnum* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_LevelMode)(BSTR Channel, WX218xDigPatternLevelModeEnum val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_BitEnabled)(BSTR Channel, long Index, VARIANT_BOOL* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_BitEnabled)(BSTR Channel, long Index, VARIANT_BOOL val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_Delay)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_Delay)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_Enabled)(BSTR Channel, VARIANT_BOOL *val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_HighLevel)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_HighLevel)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_LowLevel)(BSTR Channel, double* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_LowLevel)(BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_PodPresent)(BSTR Channel, long* val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_EmphasisEnabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_EmphasisEnabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_FormatData)(BSTR Channel, WX218xDigFormatDataEnum* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_FormatData)(BSTR Channel, WX218xDigFormatDataEnum val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_ArbResolution)(BSTR Channel, WX218xArbitraryResolutionEnum* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_ArbResolution)(BSTR Channel, WX218xArbitraryResolutionEnum val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_DigClock)(WX218xDigitalClockEnum* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_DigClock)(WX218xDigitalClockEnum val);
	STDMETHOD(IWX218xDigitalPatternOutput_get_DigPort)(WX218xDigPortEnum* val);
	STDMETHOD(IWX218xDigitalPatternOutput_put_DigPort)(WX218xDigPortEnum val);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigClock)(WX218xDigitalClockEnum DigClock);
	STDMETHOD(IWX218xDigitalPatternOutput_LoadDigitalDataAsciiFile)(BSTR FileName, long Segment);
	STDMETHOD(IWX218xDigitalPatternOutput_LoadDigitalDataBinaryFile)(BSTR FileName, long Segment);

	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattLowLevel)(BSTR Channel, double LowLevel);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattLevelMode)(BSTR Channel, WX218xDigPatternLevelModeEnum LevelMode);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattHighLevel)(BSTR Channel, double HighLevel);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattFormatData)(BSTR Channel, WX218xDigFormatDataEnum FormatData);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattEnabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattEmphasisEnabled)(BSTR Channel, VARIANT_BOOL EmphasisEnabled);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattDelayMode)(BSTR Channel, WX218xDigPatternDelayModeEnum DelayMode);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattDelay)(BSTR Channel, double Delay);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattBitLowLevel)(BSTR Channel, long BitIndex, double BitLowLevel);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattBitHighLevel)(BSTR Channel, long BitIndex, double BitHighLevel);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattBitEnabled)(BSTR Channel, long BitIndex, VARIANT_BOOL BitEnabled);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattBitDelay)(BSTR Channel, long BitIndex, double BitDelay);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattArbResolution)(BSTR Channel, WX218xArbitraryResolutionEnum ArbResolution);
	STDMETHOD(IWX218xDigitalPatternOutput_CreateDigPatternParamData1)(BSTR Channel, SAFEARRAY** State, SAFEARRAY** Delay, SAFEARRAY** HighLevel, SAFEARRAY** LowLevel);
	STDMETHOD(IWX218xDigitalPatternOutput_CreateDigPatternParamData)(BSTR Channel, SAFEARRAY** State, SAFEARRAY** Delay, SAFEARRAY** HighLevel, SAFEARRAY** LowLevel);
	STDMETHOD(IWX218xDigitalPatternOutput_LowLevel1_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPatternOutput_HighLevel1_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPatternOutput_CommonDelay_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xDigitalPatternOutput_LoadDigitalPatternFromFile)(BSTR Channel, BSTR FileName, long Segment);
	STDMETHOD(IWX218xDigitalPatternOutput_CreateDigPatternData)(BSTR Channel, SAFEARRAY** Data, long Segment);
	STDMETHOD(IWX218xDigitalPatternOutput_ConfigureDigPattDigPort)(WX218xDigPortEnum DigPort);
	STDMETHOD(IWX218xDigitalPatternOutput_ActiveBit_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xDigitalPatternOutput_LowLevel_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long index, double val);
	STDMETHOD(IWX218xDigitalPatternOutput_HighLevel_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long index, double val);
	STDMETHOD(IWX218xDigitalPatternOutput_Delay_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long index, double val);

	STDMETHOD(IWX218xCHIRP_get_Width)(BSTR Channel, double* val);
	STDMETHOD(IWX218xCHIRP_put_Width)(BSTR Channel, double val);
	STDMETHOD(IWX218xCHIRP_get_Repetition)(BSTR Channel, double* val);
	STDMETHOD(IWX218xCHIRP_put_Repetition)(BSTR Channel, double val);
	STDMETHOD(IWX218xCHIRP_get_StartFrequency)(BSTR Channel, double* val);
	STDMETHOD(IWX218xCHIRP_put_StartFrequency)(BSTR Channel, double val);
	STDMETHOD(IWX218xCHIRP_get_StopFrequency)(BSTR Channel, double* val);
	STDMETHOD(IWX218xCHIRP_put_StopFrequency)(BSTR Channel, double val);
	STDMETHOD(IWX218xCHIRP_get_MarkerFrequency)(BSTR Channel, double* val);
	STDMETHOD(IWX218xCHIRP_put_MarkerFrequency)(BSTR Channel, double val);
	STDMETHOD(IWX218xCHIRP_get_AmplDepth)(BSTR Channel, double* val);
	STDMETHOD(IWX218xCHIRP_put_AmplDepth)(BSTR Channel, double val);
	STDMETHOD(IWX218xCHIRP_get_FreqDirection)(BSTR Channel, WX218xChirpFreqDirectionEnum* val);
	STDMETHOD(IWX218xCHIRP_put_FreqDirection)(BSTR Channel, WX218xChirpFreqDirectionEnum val);
	STDMETHOD(IWX218xCHIRP_get_FreqSpacing)(BSTR Channel, WX218xChirpFreqSpacingEnum* val);
	STDMETHOD(IWX218xCHIRP_put_FreqSpacing)(BSTR Channel, WX218xChirpFreqSpacingEnum val);
	STDMETHOD(IWX218xCHIRP_get_AmplDirection)(BSTR Channel, WX218xChirpAmplitudeDirectionEnum* val);
	STDMETHOD(IWX218xCHIRP_put_AmplDirection)(BSTR Channel, WX218xChirpAmplitudeDirectionEnum val);
	STDMETHOD(IWX218xCHIRP_get_AmplSpacing)(BSTR Channel, WX218xChirpAmplSpacingEnum* val);
	STDMETHOD(IWX218xCHIRP_put_AmplSpacing)(BSTR Channel, WX218xChirpAmplSpacingEnum val);
	STDMETHOD(IWX218xCHIRP_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xCHIRP_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xCHIRP_ConfigureChirpAmplSpacing)(BSTR Channel, WX218xChirpAmplSpacingEnum AmplSpacing);
	STDMETHOD(IWX218xCHIRP_ConfigureChirpAmplDirection)(BSTR Channel, WX218xChirpAmplitudeDirectionEnum AmplDirection);
	STDMETHOD(IWX218xCHIRP_ConfigureChirpWidth)(BSTR Channel, double Width);
	STDMETHOD(IWX218xCHIRP_ConfigureChirpStopFreq)(BSTR Channel, double StopFreq);
	STDMETHOD(IWX218xCHIRP_ConfigureChirpStartFreq)(BSTR Channel, double StartFreq);
	STDMETHOD(IWX218xCHIRP_ConfigureChirpRepetition)(BSTR Channel, double Repetition);
	STDMETHOD(IWX218xCHIRP_ConfigureChirpMarkerFreq)(BSTR Channel, double MarkerFreq);
	STDMETHOD(IWX218xCHIRP_ConfigureChirpFreqSpacing)(BSTR Channel, WX218xChirpFreqSpacingEnum FreqSpacing);
	STDMETHOD(IWX218xCHIRP_ConfigureChirpFreqDirection)(BSTR Channel, WX218xChirpFreqDirectionEnum FreqDirection);
	STDMETHOD(IWX218xCHIRP_ConfigureChirpEnabled)(BSTR Channel, VARIANT_BOOL Enabled);
	STDMETHOD(IWX218xCHIRP_ConfigureChirpAmplDepth)(BSTR Channel, double AmplDepth);
	STDMETHOD(IWX218xCHIRP_AmplDepth_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xCHIRP_MarkerFrequency_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xCHIRP_StopFrequency_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xCHIRP_StartFrequency_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xCHIRP_Width_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xCHIRP_Repetition_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xFSK_get_ShiftFreq)(BSTR Channel, double* val);
	STDMETHOD(IWX218xFSK_put_ShiftFreq)(BSTR Channel, double val);
	STDMETHOD(IWX218xFSK_get_Baud)(BSTR Channel, double* val);
	STDMETHOD(IWX218xFSK_put_Baud)(BSTR Channel, double val);
	STDMETHOD(IWX218xFSK_get_Marker)(BSTR Channel, long* val);
	STDMETHOD(IWX218xFSK_put_Marker)(BSTR Channel, long val);
	STDMETHOD(IWX218xFSK_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xFSK_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xFSK_ConfigureFSKShiftFreq)(BSTR Channel, double val);
	STDMETHOD(IWX218xFSK_ConfigureFSKMarker)(BSTR Channel, long val);
	STDMETHOD(IWX218xFSK_ConfigureFSKEnabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xFSK_ConfigureFSKBaud)(BSTR Channel, double val);
	STDMETHOD(IWX218xFSK_CreateFSKDataAdv)(BSTR Channel, SAFEARRAY** Data);
	STDMETHOD(IWX218xFSK_LoadFSKDataFile)(BSTR Channel, BSTR FileName);
	STDMETHOD(IWX218xFSK_CreateFSKData)(BSTR Channel, SAFEARRAY** Data);
	STDMETHOD(IWX218xFSK_Marker_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xFSK_Baud_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xFSK_ShiftFreq_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xASK_get_StartAmplitude)(BSTR Channel, double* val);
	STDMETHOD(IWX218xASK_put_StartAmplitude)(BSTR Channel, double val);
	STDMETHOD(IWX218xASK_get_ShiftAmplitude)(BSTR Channel, double* val);
	STDMETHOD(IWX218xASK_put_ShiftAmplitude)(BSTR Channel, double val);
	STDMETHOD(IWX218xASK_get_Baud)(BSTR Channel, double* val);
	STDMETHOD(IWX218xASK_put_Baud)(BSTR Channel, double val);
	STDMETHOD(IWX218xASK_get_Marker)(BSTR Channel, long* val);
	STDMETHOD(IWX218xASK_put_Marker)(BSTR Channel, long val);
	STDMETHOD(IWX218xASK_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xASK_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xASK_ConfigureASKStartAmplitude)(BSTR Channel, double StartAmpl);
	STDMETHOD(IWX218xASK_ConfigureASKShiftAmplitude)(BSTR Channel, double ShiftAmpl);
	STDMETHOD(IWX218xASK_ConfigureASKMarker)(BSTR Channel, long Marker);
	STDMETHOD(IWX218xASK_ConfigureASKEnabled)(BSTR Channel, VARIANT_BOOL Enabled);
	STDMETHOD(IWX218xASK_ConfigureASKBaud)(BSTR Channel, double Baud);
	STDMETHOD(IWX218xASK_CreateASKDataAdv)(BSTR Channel, SAFEARRAY** Data);
	STDMETHOD(IWX218xASK_LoadASKDataFile)(BSTR Channel, BSTR FileName);
	STDMETHOD(IWX218xASK_CreateASKData)(BSTR Channel, SAFEARRAY** Data);
	STDMETHOD(IWX218xASK_Marker_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xASK_Baud_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xASK_ShiftAmplitude_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xASK_StartAmplitude_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xFHOP_get_Time)(BSTR Channel, double* val);
	STDMETHOD(IWX218xFHOP_put_Time)(BSTR Channel, double val);
   STDMETHOD(IWX218xFHOP_Time_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

   STDMETHOD(IWX218xFHOP_get_Marker)(BSTR Channel, long* val);
	STDMETHOD(IWX218xFHOP_put_Marker)(BSTR Channel, long val);
	STDMETHOD(IWX218xFHOP_Marker_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
   STDMETHOD(IWX218xFHOP_get_DwellMode)(BSTR Channel, WX218xFHOPDwellModeEnum* val);
	STDMETHOD(IWX218xFHOP_put_DwellMode)(BSTR Channel, WX218xFHOPDwellModeEnum val);
	STDMETHOD(IWX218xFHOP_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xFHOP_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xFHOP_ConfigureFHOPTime)(BSTR Channel, double val);
	STDMETHOD(IWX218xFHOP_ConfigureFHOPMarker)(BSTR Channel, long val);
	STDMETHOD(IWX218xFHOP_ConfigureFHOPEnabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xFHOP_ConfigureFHOPDwellMode)(BSTR Channel, WX218xFHOPDwellModeEnum val);
	STDMETHOD(IWX218xFHOP_LoadFHOPVarDataFile)(BSTR Channel, BSTR FileName);
	STDMETHOD(IWX218xFHOP_LoadFHOPFixDataFile)(BSTR Channel, BSTR FileName);
	STDMETHOD(IWX218xFHOP_CreateFHOPVariableData)(BSTR Channel, SAFEARRAY** FreqData, SAFEARRAY** DwellTimeData);
	STDMETHOD(IWX218xFHOP_CreateFHOPFixedData)(BSTR Channel, SAFEARRAY** Data);

	STDMETHOD(IWX218xAHOP_get_Time)(BSTR Channel, double* val);
	STDMETHOD(IWX218xAHOP_put_Time)(BSTR Channel, double val);
	STDMETHOD(IWX218xAHOP_get_Marker)(BSTR Channel, long* val);
	STDMETHOD(IWX218xAHOP_put_Marker)(BSTR Channel, long val);
	STDMETHOD(IWX218xAHOP_get_DwellMode)(BSTR Channel, WX218xAHOPDwellModeEnum* val);
	STDMETHOD(IWX218xAHOP_put_DwellMode)(BSTR Channel, WX218xAHOPDwellModeEnum val);
	STDMETHOD(IWX218xAHOP_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xAHOP_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xAHOP_ConfigureAHOPTime)(BSTR Channel, double Time);
	STDMETHOD(IWX218xAHOP_ConfigureAHOPMarker)(BSTR Channel, long Marker);
	STDMETHOD(IWX218xAHOP_ConfigureAHOPEnabled)(BSTR Channel, VARIANT_BOOL Enabled);
	STDMETHOD(IWX218xAHOP_ConfigureAHOPDwellMode)(BSTR Channel, WX218xAHOPDwellModeEnum val);
	STDMETHOD(IWX218xAHOP_LoadAHOPVarDataFile)(BSTR Channel, BSTR FileName);
	STDMETHOD(IWX218xAHOP_LoadAHOPFixDataFile)(BSTR Channel, BSTR FileName);
	STDMETHOD(IWX218xAHOP_CreateAHOPVariableData)(BSTR Channel, SAFEARRAY** AmplData, SAFEARRAY** DwellTimeData);
	STDMETHOD(IWX218xAHOP_CreateAHOPFixedData)(BSTR Channel, SAFEARRAY** Data);
	STDMETHOD(IWX218xAHOP_Marker_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xAHOP_Time_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xPattern_get_Baud)(BSTR Channel, double* val);
	STDMETHOD(IWX218xPattern_put_Baud)(BSTR Channel, double val);
	STDMETHOD(IWX218xPattern_get_Level)(BSTR Channel, long* val);
	STDMETHOD(IWX218xPattern_put_Level)(BSTR Channel, long val);
	STDMETHOD(IWX218xPattern_get_Mode)(BSTR Channel, WX218xPatternModeEnum* val);
	STDMETHOD(IWX218xPattern_put_Mode)(BSTR Channel, WX218xPatternModeEnum val);
	STDMETHOD(IWX218xPattern_get_PredefinedType)(BSTR Channel, WX218xPatternPredefinedTypeEnum* val);
	STDMETHOD(IWX218xPattern_put_PredefinedType)(BSTR Channel, WX218xPatternPredefinedTypeEnum val);
	STDMETHOD(IWX218xPattern_get_HighLevel)(BSTR Channel, double* val);
	STDMETHOD(IWX218xPattern_put_HighLevel)(BSTR Channel, double val);
	STDMETHOD(IWX218xPattern_get_LowLevel)(BSTR Channel, double* val);
	STDMETHOD(IWX218xPattern_put_LowLevel)(BSTR Channel, double val);
	STDMETHOD(IWX218xPattern_get_Loop)(BSTR Channel, long* val);
	STDMETHOD(IWX218xPattern_put_Loop)(BSTR Channel, long val);
	STDMETHOD(IWX218xPattern_get_Preamble)(BSTR Channel, long* val);
	STDMETHOD(IWX218xPattern_put_Preamble)(BSTR Channel, long val);
	STDMETHOD(IWX218xPattern_get_Length)(BSTR Channel, long* val);
	STDMETHOD(IWX218xPattern_put_Length)(BSTR Channel, long val);
	STDMETHOD(IWX218xPattern_get_Composer)(IWX218xPatternComposer** val);
	STDMETHOD(IWX218xPattern_ConfigurePatternPredType)(BSTR Channel, WX218xPatternPredefinedTypeEnum val);
	STDMETHOD(IWX218xPattern_ConfigurePatternPreamble)(BSTR Channel, long val);
	STDMETHOD(IWX218xPattern_ConfigurePatternMode)(BSTR Channel, WX218xPatternModeEnum val);
	STDMETHOD(IWX218xPattern_ConfigurePatternLowLevel)(BSTR Channel, double LowLevel);
	STDMETHOD(IWX218xPattern_ConfigurePatternLoop)(BSTR Channel, long Loop);
	STDMETHOD(IWX218xPattern_ConfigurePatternLevel)(BSTR Channel, long Level);
	STDMETHOD(IWX218xPattern_ConfigurePatternLength)(BSTR Channel, long Length);
	STDMETHOD(IWX218xPattern_ConfigurePatternHighLevel)(BSTR Channel, double HighLevel);
	STDMETHOD(IWX218xPattern_ConfigurePatternBaud)(BSTR Channel, double Baud);

	STDMETHOD(IWX218xPattern_CreatePatternData)(BSTR Channel, SAFEARRAY** Data);
	STDMETHOD(IWX218xPattern_Length_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xPattern_Preamble_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xPattern_Loop_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xPattern_LowLevel_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xPattern_HighLevel_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xPattern_Baud_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
   STDMETHOD(IWX218xPattern_Level_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);

	STDMETHOD(IWX218xPatternComposer_get_TransitionType)(BSTR Channel, WX218xPatternComposerTransitionTypeEnum* val);
	STDMETHOD(IWX218xPatternComposer_put_TransitionType)(BSTR Channel, WX218xPatternComposerTransitionTypeEnum val);
	STDMETHOD(IWX218xPatternComposer_get_LinearStart)(BSTR Channel, double* val);
	STDMETHOD(IWX218xPatternComposer_put_LinearStart)(BSTR Channel, double val);
	STDMETHOD(IWX218xPatternComposer_get_Resolution)(BSTR Channel, double* val);
	STDMETHOD(IWX218xPatternComposer_put_Resolution)(BSTR Channel, double val);
	STDMETHOD(IWX218xPatternComposer_get_ResolutionType)(BSTR Channel, WX218xPatternResTypeEnum* val);
	STDMETHOD(IWX218xPatternComposer_put_ResolutionType)(BSTR Channel, WX218xPatternResTypeEnum val);
	STDMETHOD(IWX218xPatternComposer_get_FastStart)(BSTR Channel, double* val);
	STDMETHOD(IWX218xPatternComposer_put_FastStart)(BSTR Channel, double val);
	STDMETHOD(IWX218xPatternComposer_ConfigurePatternCompTransType)(BSTR Channel, WX218xPatternComposerTransitionTypeEnum TransitionType);
	STDMETHOD(IWX218xPatternComposer_ConfigurePatternCompResType)(BSTR Channel, WX218xPatternResTypeEnum ResType);
	STDMETHOD(IWX218xPatternComposer_ConfigurePatternCompResolution)(BSTR Channel, double Resolution);
	STDMETHOD(IWX218xPatternComposer_ConfigurePatternCompLinearStart)(BSTR Channel, double LinearStart);
	STDMETHOD(IWX218xPatternComposer_ConfigurePatternCompFastStart)(BSTR Channel, double FastStart);
	STDMETHOD(IWX218xPatternComposer_CreatePatternComposerLinearData)(BSTR Channel, SAFEARRAY** AmplLevel, SAFEARRAY** DwellTime);
	STDMETHOD(IWX218xPatternComposer_LoadPatternFile)(BSTR Channel, BSTR FileName);
	STDMETHOD(IWX218xPatternComposer_CreatePatternComposerFastData)(BSTR Channel, SAFEARRAY** AmplLevel, SAFEARRAY** DwellTime);
	STDMETHOD(IWX218xPatternComposer_FastStart_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xPSK_get_StartPhase)(BSTR Channel, double* val);
	STDMETHOD(IWX218xPSK_put_StartPhase)(BSTR Channel, double val);
	STDMETHOD(IWX218xPSK_get_ShiftPhase)(BSTR Channel, double* val);
	STDMETHOD(IWX218xPSK_put_ShiftPhase)(BSTR Channel, double val);
	STDMETHOD(IWX218xPSK_get_Rate)(BSTR Channel, double* val);
	STDMETHOD(IWX218xPSK_put_Rate)(BSTR Channel, double val);
	STDMETHOD(IWX218xPSK_get_Type)(BSTR Channel, WX218xPskTypeEnum* val);
	STDMETHOD(IWX218xPSK_put_Type)(BSTR Channel, WX218xPskTypeEnum val);
	STDMETHOD(IWX218xPSK_get_Marker)(BSTR Channel, long* val);
	STDMETHOD(IWX218xPSK_put_Marker)(BSTR Channel, long val);
	STDMETHOD(IWX218xPSK_get_Baud)(BSTR Channel, double* val);
	STDMETHOD(IWX218xPSK_put_Baud)(BSTR Channel, double val);
	STDMETHOD(IWX218xPSK_get_CarrierEnabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xPSK_put_CarrierEnabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xPSK_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xPSK_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xPSK_ConfigurePSKType)(BSTR Channel, WX218xPskTypeEnum Type);
	STDMETHOD(IWX218xPSK_ConfigurePSKStartPhase)(BSTR Channel, double StartPhase);
	STDMETHOD(IWX218xPSK_ConfigurePSKShiftPhase)(BSTR Channel, double ShiftPhase);
	STDMETHOD(IWX218xPSK_ConfigurePSKRate)(BSTR Channel, double Rate);
	STDMETHOD(IWX218xPSK_ConfigurePSKMarker)(BSTR Channel, long Marker);
	STDMETHOD(IWX218xPSK_ConfigurePSKState)(BSTR Channel, VARIANT_BOOL State);
	STDMETHOD(IWX218xPSK_ConfigurePSKCarrierState)(BSTR Channel, VARIANT_BOOL State);
	STDMETHOD(IWX218xPSK_ConfigurePSKBaud)(BSTR Channel, double Baud);
	STDMETHOD(IWX218xPSK_CreatePSKDataAdv)(BSTR Channel, SAFEARRAY** Data);
	STDMETHOD(IWX218xPSK_LoadPSKUserDataFile)(BSTR Channel, BSTR FileName);
	STDMETHOD(IWX218xPSK_LoadPSKDataFile)(BSTR Channel, BSTR FileName);
	STDMETHOD(IWX218xPSK_CreatePSKUserData)(BSTR Channel, SAFEARRAY** Data);
	STDMETHOD(IWX218xPSK_CreatePSKData)(BSTR Channel, SAFEARRAY** Data);
	STDMETHOD(IWX218xPSK_Baud_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xPSK_Marker_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xPSK_Rate_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xPSK_ShiftPhase_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);
	STDMETHOD(IWX218xPSK_StartPhase_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xQAM_get_Baud)(BSTR Channel, double* val);
	STDMETHOD(IWX218xQAM_put_Baud)(BSTR Channel, double val);
	STDMETHOD(IWX218xQAM_get_Type)(BSTR Channel, WX218xQamTypeEnum* val);
	STDMETHOD(IWX218xQAM_put_Type)(BSTR Channel, WX218xQamTypeEnum val);
	STDMETHOD(IWX218xQAM_get_Marker)(BSTR Channel, long* val);
	STDMETHOD(IWX218xQAM_put_Marker)(BSTR Channel, long val);
	STDMETHOD(IWX218xQAM_get_CarrierEnabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xQAM_put_CarrierEnabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xQAM_get_Enabled)(BSTR Channel, VARIANT_BOOL* val);
	STDMETHOD(IWX218xQAM_put_Enabled)(BSTR Channel, VARIANT_BOOL val);
	STDMETHOD(IWX218xQAM_ConfigureQAMType)(BSTR Channel, WX218xQamTypeEnum Type);
	STDMETHOD(IWX218xQAM_ConfigureQAMMarker)(BSTR Channel, long Marker);
	STDMETHOD(IWX218xQAM_ConfigureQAMState)(BSTR Channel, VARIANT_BOOL State);
	STDMETHOD(IWX218xQAM_ConfigureQAMCarrierState)(BSTR Channel, VARIANT_BOOL State);
	STDMETHOD(IWX218xQAM_ConfigureQAMBaud)(BSTR Channel, double val);
	STDMETHOD(IWX218xQAM_CreateQAMDataAdv)(BSTR Channel, SAFEARRAY** Data);
	STDMETHOD(IWX218xQAM_LoadQAMUserDataFile)(BSTR Channel, BSTR FileName);
	STDMETHOD(IWX218xQAM_LoadQAMDataFile)(BSTR Channel, BSTR FileName);
	STDMETHOD(IWX218xQAM_CreateQAMUserData)(BSTR Channel, SAFEARRAY** DataI, SAFEARRAY** DataQ);
	STDMETHOD(IWX218xQAM_CreateQAMData)(BSTR Channel, SAFEARRAY** Data);
	STDMETHOD(IWX218xQAM_Marker_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
	STDMETHOD(IWX218xQAM_Baud_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xPatternComposer_Resolution_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, double val);

	STDMETHOD(IWX218xMarkers_MarkerIndex_RangeCheck)(LPCTSTR pszPropertyName, BSTR Channel, long val);
};

NIMBUS_OBJECT_ENTRY_AUTO(WX218x)
