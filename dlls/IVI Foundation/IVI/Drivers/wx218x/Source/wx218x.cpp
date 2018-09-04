#include "StdAfx.h"
#include "wx218x.h"
#include "wx218x.nimbus.h"

ViStatus TranslateUnknownHRESULT(ViSession session, HRESULT hr)
{
	ViStatus error = 0x80000000; // _VI_ERROR
	
	NTL_UNUSED(hr);

	return ReportErrorUsingComErrorInfoDescription(session, error);
}

ViStatus _VI_FUNC wx218x_QueryArbWfmCapabilities ( ViSession Vi, ViInt32* MaxNumWfms, ViInt32* WfmQuantum, ViInt32* MinWfmSize, ViInt32* MaxWfmSize )
{
	ViStatus status = VI_SUCCESS;

	// TODO: implement this function, see topic 'Implementing IVI-C-Only Functions and Attributes' in Nimbus documentation

	return status;
}

ViStatus _VI_FUNC wx218x_QueryArbSeqCapabilities ( ViSession Vi, ViInt32* MaxNumSeqs, ViInt32* MinSeqLength, ViInt32* MaxSeqLength, ViInt32* MaxLoopCount )
{
	ViStatus status = VI_SUCCESS;

	// TODO: implement this function, see topic 'Implementing IVI-C-Only Functions and Attributes' in Nimbus documentation

	return status;
}

ViStatus _VI_FUNC wx218x_get_ARB_WAVEFORM_HANDLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	ViStatus status = VI_SUCCESS;

	// TODO: implement this attribute getter, see topic 'Implementing IVI-C-Only Functions and Attributes' in Nimbus documentation

	return status;
}

ViStatus _VI_FUNC wx218x_set_ARB_WAVEFORM_HANDLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;

	// TODO: implement this attribute setter, see topic 'Implementing IVI-C-Only Functions and Attributes' in Nimbus documentation

	return status;
}

ViStatus _VI_FUNC wx218x_get_ARB_SEQUENCE_HANDLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32* AttributeValue )
{
	ViStatus status = VI_SUCCESS;

	// TODO: implement this attribute getter, see topic 'Implementing IVI-C-Only Functions and Attributes' in Nimbus documentation

	return status;
}

ViStatus _VI_FUNC wx218x_set_ARB_SEQUENCE_HANDLE ( ViSession Vi, ViConstString RepCapIdentifier, ViInt32 AttributeValue )
{
	ViStatus status = VI_SUCCESS;

	// TODO: implement this attribute setter, see topic 'Implementing IVI-C-Only Functions and Attributes' in Nimbus documentation

	return status;
}


