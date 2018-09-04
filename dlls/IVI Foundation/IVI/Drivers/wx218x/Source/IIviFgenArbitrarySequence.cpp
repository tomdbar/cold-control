/******************************************************************************
 *                                                                         
 *               Copyright 2010 Tabor Electronics Ltd.
 *               All rights reserved.
 *
 *****************************************************************************/

#include "stdafx.h"
#include "CoWX218x.h"

                                /* Clear */
HRESULT WX218x::IIviFgenArbitrarySequence_Clear(long Handle)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::Clear(Handle);

	return hr;
}

                             /* Configure */
HRESULT WX218x::IIviFgenArbitrarySequence_Configure(BSTR ChannelName, long Handle, double Gain, double Offset)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::Configure(ChannelName, Handle, Gain, Offset);

	return hr;
}

                           /* Create */
HRESULT WX218x::IIviFgenArbitrarySequence_Create(SAFEARRAY** WfmHandle, SAFEARRAY** LoopCount, long* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::Create(WfmHandle, LoopCount, val);

	return hr;
}

                          /* LengthMax */
HRESULT WX218x::IIviFgenArbitrarySequence_get_LengthMax(long* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::get_LengthMax(val);

	return hr;
}

                          /* LengthMin */
HRESULT WX218x::IIviFgenArbitrarySequence_get_LengthMin(long* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::get_LengthMin(val);

	return hr;
}

                         /* LoopCountMax */
HRESULT WX218x::IIviFgenArbitrarySequence_get_LoopCountMax(long* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::get_LoopCountMax(val);

	return hr;
}

                         /* NumberSequenceMax */
HRESULT WX218x::IIviFgenArbitrarySequence_get_NumberSequencesMax(long* val)
{
	HRESULT hr = S_OK;

   hr = _IWX218xArbitrarySequence::get_NumberSequenceMax(val);

	return hr;
}