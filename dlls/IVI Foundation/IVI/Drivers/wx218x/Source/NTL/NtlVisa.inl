/******************************************************************************
 *                                                                         
 *               (C) COPYRIGHT Pacific MindWorks, Inc. 2001-2009
 *                          All rights reserved.
 *
 *****************************************************************************/

inline HRESULT CVisaSession::FinalInitialize()
{
	HRESULT hr = S_OK;

	VisaInterfaceType eIntfType;
	hr = GetInterfaceType(&eIntfType);
	if (SUCCEEDED(hr))
	{
		// Agilent VISA 15.0 (and earlier) mistakenly reports INSTR and SOCKET interface types 
		// as type INSTR, so we must check the resource descriptor string to identify a socket connection.
		CString strSessionType;
		hr = GetSessionType(strSessionType);
		if (FAILED(hr))
		{
			// In some cases, such as using VISA passports, the VI_ATTR_RSRC_CLASS attribute is not supported
			strSessionType = _T("OTHER");
			hr = S_OK;
		}

		CString strResourceDescriptorTemp;
		hr = GetResourceName(strResourceDescriptorTemp);
		if (FAILED(hr))
		{
			strResourceDescriptorTemp = _T("UNKNOWN");
			hr = S_OK;
		}
		strResourceDescriptorTemp.MakeUpper();

		if (eIntfType == VisaInterfaceTcpip && strResourceDescriptorTemp.Find(_T("::SOCKET")) != -1)
			strSessionType = _T("SOCKET");

		// Automatically enable a linefeed termchar for serial and raw socket connections
		if (eIntfType == VisaInterfaceSerial || (eIntfType == VisaInterfaceTcpip && strSessionType == _T("SOCKET")))
		{
			hr = SetTerminationCharacter(0x0a);
			if (SUCCEEDED(hr))
			{
				hr = static_cast<IIoSession*>(this)->SetTerminationCharacterEnabled(true);
				if (SUCCEEDED(hr))
				{
					hr = SetSendEndEnabled(true);
				}
			}
		}
	}

	if (SUCCEEDED(hr))
	{
		hr = __super::FinalInitialize();
	}

	return hr;
}

///////////////////////////////////////////////////////////////////////////////
// Resource string parsing

inline bool ParseVisaResource(const CString& strResource, VisaInterfaceType* peType, short* psIntfNum)
{
	CString strTemp;
	return ParseVisaResource(strResource, peType, psIntfNum);
}

inline bool ParseVisaResource(const CString& strResourceIn, VisaInterfaceType* peType, short* psIntfNum, CString& strResourceClass)
{
	static LPCSTR rgTokens[] = {

#define VXI_INSTR													0
		"VXI\\z?::\\z(::INSTR)?",

#define VXI_MEMACC													1
		"VXI\\z?::MEMACC",

#define VXI_BACKPLANE												2
		"VXI\\z?(::\\z)?::BACKPLANE",

#define VXI_SERVANT													3
		"VXI\\z?::SERVANT",

#define GPIB_VXI_INSTR												4
		"GPIB-VXI\\z?::\\z(::INSTR)?",

#define GPIB_VXI_MEMACC												5
		"GPIB-VXI\\z?::MEMACC",

#define GPIB_VXI_BACKPLANE											6
		"GPIB-VXI\\z?(::\\z)?::BACKPLANE",

#define GPIB_INSTR													7
		"GPIB\\z?::\\z(::\\z)?(::INSTR)?",

#define GPIB_INTFC													8
		"GPIB\\z?::INTFC",

#define GPIB_SERVANT												9
		"GPIB\\z?::SERVANT",
		
#define ASRL_INSTR													10
		"ASRL\\z?(::INSTR)?",	
		
#define TCPIP_SERVANT												11
		"TCPIP\\z?(::[^:]+)?::SERVANT",
		
#define TCPIP_INSTR													12
		"TCPIP\\z?::[^:]+(::[^:]+)?(::INSTR)?",
		
#define TCPIP_SOCKET												13
		"TCPIP\\z?::[^:]+::\\z::SOCKET",

#define USB_INSTR													14
		"USB\\z?::[^:]+::[^:]+::[^:]+(::\\z)?(::INSTR)?",
		
#define PXI_INSTR													15
		"PXI\\z?::\\z(::\\z)?(::INSTR)?",

#define PXI_INSTR_BUS												16
		"PXI\\z?::\\z-\\z(\\.\\z)?(::INSTR)?",

#define PXI_INSTR_CHASSIS											17
		"PXI\\z?::CHASSIS\\z::SLOT\\z(::FUNC\\z)?(::INSTR)?",

#define PXI_MEMACC													18
		"PXI\\z?::MEMACC",

		NULL	// <== REQUIRED: End of array marker
};

	// Concatenate the resource tokens into one big string for the parser
	CStringA strRegExp = "^(";	// Prefix expression with caret "^" to ensure the match starts from the
								// beginning of the current position in the format string.
	int nToken = 0;
	while (rgTokens[nToken] != NULL)
	{
		// Enclose each token in braces so that it becomes its own
		// match group with a corresponding group number that will
		// be the token identifier.
		strRegExp += "{" + CStringA(rgTokens[nToken]) + "}|";
		nToken++;
	}
	strRegExp = strRegExp.TrimRight('|');

	strRegExp += ")$";			// Add "$" to eexpression " to ensure the match has nothing after it

	if (nToken == 0)
	{
		ATLASSERT(!_T("Parser token map is empty."));
		return false;
	}

	// Initialize the parser, if necessary
	static CAtlRegExp<CAtlRECharTraitsA> parser;
	static bool bInitialized = false;
	if (!bInitialized)
	{
		REParseError pe = parser.Parse(strRegExp);
		ATLASSERT(pe == REPARSE_ERROR_OK);
		if (pe != REPARSE_ERROR_OK)
			return false;

		bInitialized = true;
	}

	CStringA strResource(strResourceIn);
	strResource.MakeUpper();
	strResource.Trim();

	LPCSTR pszNext = NULL;
	CAtlREMatchContext<CAtlRECharTraitsA> mc;
	if (parser.Match(strResource, &mc, &pszNext))
	{	
		for (UINT nGroup = 0; nGroup < mc.m_uNumGroups; nGroup++)
		{
			LPCSTR pszStart = NULL;
			LPCSTR pszEnd = NULL;
			mc.GetMatch(nGroup, &pszStart, &pszEnd);
			ptrdiff_t nLength = pszEnd - pszStart;
			if (nLength > 0)
			{
				CStringA strResource(pszStart, (int)nLength);
			
				switch (nGroup)
				{
					case VXI_INSTR:
					{
						*peType = VisaInterfaceVxi;
						strResourceClass = "INSTR";
						if (isdigit(strResource.GetAt(3)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(3));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case VXI_MEMACC:													
					{
						*peType = VisaInterfaceVxi;
						strResourceClass = "MEMACC";
						if (isdigit(strResource.GetAt(3)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(3));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case VXI_BACKPLANE:												
					{
						*peType = VisaInterfaceVxi;
						strResourceClass = "BACKPLANE";
						if (isdigit(strResource.GetAt(3)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(3));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case VXI_SERVANT:													
					{
						*peType = VisaInterfaceVxi;
						strResourceClass = "SERVANT";
						if (isdigit(strResource.GetAt(3)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(3));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case GPIB_VXI_INSTR:												
					{
						*peType = VisaInterfaceGpibVxi;
						strResourceClass = "INSTR";
						if (isdigit(strResource.GetAt(8)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(8));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case GPIB_VXI_MEMACC:												
					{
						*peType = VisaInterfaceGpibVxi;
						strResourceClass = "MEMACC";
						if (isdigit(strResource.GetAt(8)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(8));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case GPIB_VXI_BACKPLANE:											
					{
						*peType = VisaInterfaceGpibVxi;
						strResourceClass = "BACKPLANE";
						if (isdigit(strResource.GetAt(8)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(8));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case GPIB_INSTR:													
					{
						*peType = VisaInterfaceGpib;
						strResourceClass = "INSTR";
						if (isdigit(strResource.GetAt(4)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(4));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case GPIB_INTFC:													
					{
						*peType = VisaInterfaceGpib;
						strResourceClass = "INTFC";
						if (isdigit(strResource.GetAt(4)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(4));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case GPIB_SERVANT:												
					{
						*peType = VisaInterfaceGpib;
						strResourceClass = "SERVANT";
						if (isdigit(strResource.GetAt(4)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(4));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case ASRL_INSTR:														
					{
						*peType = VisaInterfaceSerial;
						strResourceClass = "INSTR";
						if (isdigit(strResource.GetAt(4)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(4));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case TCPIP_SERVANT:												
					{
						*peType = VisaInterfaceTcpip;
						strResourceClass = "SERVANT";
						if (isdigit(strResource.GetAt(5)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(5));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case TCPIP_INSTR:													
					{
						*peType = VisaInterfaceTcpip;
						strResourceClass = "INSTR";
						if (isdigit(strResource.GetAt(5)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(5));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case TCPIP_SOCKET:												
					{
						*peType = VisaInterfaceTcpip;
						strResourceClass = "SOCKET";
						if (isdigit(strResource.GetAt(5)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(5));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case USB_INSTR:													
					{
						*peType = VisaInterfaceUsb;
						strResourceClass = "INSTR";
						if (isdigit(strResource.GetAt(3)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(3));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case PXI_INSTR:													
					{
						*peType = VisaInterfacePxi;
						strResourceClass = "INSTR";
						if (isdigit(strResource.GetAt(3)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(3));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case PXI_INSTR_BUS:												
					{
						*peType = VisaInterfacePxi;
						strResourceClass = "INSTR";
						if (isdigit(strResource.GetAt(3)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(3));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case PXI_INSTR_CHASSIS:													
					{
						*peType = VisaInterfacePxi;
						strResourceClass = "INSTR";
						if (isdigit(strResource.GetAt(3)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(3));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					case PXI_MEMACC:													
					{
						*peType = VisaInterfacePxi;
						strResourceClass = "MEMACC";
						if (isdigit(strResource.GetAt(3)))
						{
							*psIntfNum = (short)atoi(strResource.Mid(3));
						}
						else
						{
							*psIntfNum = 0;
						}

						return true;
					}
					default:
					{
						ATLASSERT(!_T("Unexpected VISA resource string token."));
						return false;
					}
				}

				return true;
			}
		}
	}

	return false;
}
