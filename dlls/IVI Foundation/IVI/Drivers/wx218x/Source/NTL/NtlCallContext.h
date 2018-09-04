/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

#pragma once

#include <atlstr.h>

///////////////////////////////////////////////////////////////
//
//   CCallContext
//

class CCallContext
{
public:
	CCallContext(const IID& iid, const CString& strInterfaceName, const CString& strMethodName)
		: m_iid(iid), m_strInterfaceName(strInterfaceName), m_strMethodName(strMethodName)
	{
		CString strTemp;
		if (strMethodName.Left(4) == _T("put_") || strMethodName.Left(4) == _T("get_"))
		{
			strTemp = strMethodName.Mid(4);
		}
		else
		{
			strTemp = strMethodName;
		}

		m_strMethodIdentifier.Format(_T("%s.%s"), strInterfaceName, strTemp);
	}

	const IID& GetIID() const { return m_iid; }
	const CString& GetInterfaceName() const { return m_strInterfaceName; }
	const CString& GetMethodName() const { return m_strMethodName; }
	const CString& GetMethodIdentifier() const { return m_strMethodIdentifier; }

private:
	IID m_iid;
	CString m_strInterfaceName;
	CString m_strMethodName;
	CString m_strMethodIdentifier;
};

///////////////////////////////////////////////////////////////
//
//   ICallContextProvider
//

interface ICallContextProvider
{
	virtual const CCallContext* GetCurrentContext() const abstract;
};

