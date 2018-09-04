
#if defined(__cplusplus) 
extern "C"
{
#endif

	#undef AFX_DATA
	#define AFX_DATA AFX_EXT_DATA


// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the PXI2382DRV_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// PXI2382DRV_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.

	#ifdef PXI2382DRV_EXPORTS
		#define PXI2382DRV_API __declspec(dllexport)
	#else
		#define PXI2382DRV_API __declspec(dllimport)
	#endif


	PXI2382DRV_API  ViStatus /*WINAPI*/ sendCommand(ViSession vi,char *cmd_str,char *resp_str);	

	PXI2382DRV_API  ViStatus /*WINAPI*/ downloadData(ViSession vi,unsigned char *dwl_buff,unsigned long buff_len);
//this function is already realize!!

	#undef AFX_DATA
	#define AFX_DATA



#if defined(__cplusplus) 
}
#endif



