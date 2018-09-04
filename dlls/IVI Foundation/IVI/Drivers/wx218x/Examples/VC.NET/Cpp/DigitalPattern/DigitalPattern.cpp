// DigitalPattern.cpp : Defines the entry point for the console application.

//Creates a driver object, reads a few Identity interface properties, and checks the instrument error queue.
//Additional instrument specific functionality:
//Downloads pattern data. Runs in simulation mode without an instrument.

#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <cmath>

#import "IviDriverTypeLib.dll"  no_namespace
#import "IviFgenTypeLib.dll"  no_namespace
#import "wx218x_64.dll"  no_namespace

#pragma warning(disable : 4996)


SAFEARRAY * calculateSinusoidWaveform (long lPoints, double dCycles, double dStartPhase);
SAFEARRAY * CreateArrayState (long lPoints);
SAFEARRAY * CreateArrayDelay (long lPoints);
SAFEARRAY * CreateArrayHighLevel (long lPoints);
SAFEARRAY * CreateArrayLowLevel (long lPoints);

int _tmain(int argc, _TCHAR* argv[])
{
   ::CoInitialize(NULL);

   try
   {
      IWX218xPtr spDriver(__uuidof(WX218x));

      try
      {
         CString strModel;
         char strTmp[512] = "";
         int isSim = 1;  //variable for know user want to work in simulation mode or not

         // IIviDriverIdentity properties - Initialize not required
         _bstr_t bstrIdentifier = spDriver->Identity->Identifier;
         wprintf(L"Identifier: %s\n", bstrIdentifier.GetBSTR());

         _bstr_t bstrRevision = spDriver->Identity->Revision;
         wprintf(L"Revision: %s\n", bstrRevision.GetBSTR());

         _bstr_t bstrVendor = spDriver->Identity->Vendor;
         wprintf(L"Vendor: %s\n", bstrVendor.GetBSTR());

         _bstr_t bstrDescription = spDriver->Identity->Description;
         wprintf(L"Description: %s\n", bstrDescription.GetBSTR());

         // Setup VISA resource descriptor
         //CString strResourceDesc = "GPIB0::4::INSTR";
         CString strResourceDesc = "TCPIP::192.168.0.178::5025::SOCKET";
         //CString strResourceDesc = "USB0::0x168B::0x2184::2147516416::INSTR";

         // Setup IVI-defined initialization options
         CString strStandardInitOptions = 
            "Cache=true, InterchangeCheck=false, QueryInstrStatus=false, RangeCheck=true, RecordCoercions=false, Simulate=true";
           //"Cache=true, InterchangeCheck=false, QueryInstrStatus=false, RangeCheck=true, RecordCoercions=false, Simulate=true, DriverSetup = Model = WX2182B-D";

         //CString strStandardInitOptions = 
           //"Cache=true, InterchangeCheck=false, QueryInstrStatus=false, RangeCheck=true, RecordCoercions=false, Simulate=true,DriverSetup=Trace=True,TraceArray=true";

          //printf("Digital Example by Tabor Electronics Ltd.\n");

          //printf("To run example in simulation mode, press number <1>, to connect, press <2>.\n");
          //scanf("%d", &isSim);

          /*if (isSim != 1)  //user want to connect to the instrument
          {
            printf("Enter Resource Name [TCPIP::192.168.0.187::5025::SOCKET]:\n "); scanf("%s", &strTmp);

             strResourceDesc = strTmp;

             strStandardInitOptions = 
            "Cache=true, InterchangeCheck=false, QueryInstrStatus=false, RangeCheck=true, RecordCoercions=false, Simulate=false";
          }//end if, user want to connect to the instrument*/

         spDriver->Initialize(LPCTSTR(strResourceDesc), VARIANT_TRUE, VARIANT_TRUE, LPCTSTR(strStandardInitOptions));

         // IIviDriverIdentity properties - Initialize required
         _bstr_t bstrInstModel = spDriver->Identity->InstrumentModel;
         wprintf(L"InstrumentModel: %s\n", bstrInstModel.GetBSTR());

          //Saving Model in strModel
         strModel = bstrInstModel.GetBSTR();

         _bstr_t bstrInstFirmwareRevision = spDriver->Identity->InstrumentFirmwareRevision;
         wprintf(L"InstrumentFirmwareRevision: %s\n", bstrInstFirmwareRevision.GetBSTR());

         _bstr_t bstrInstManufacturer = spDriver->Identity->InstrumentManufacturer;
         wprintf(L"InstrumentManufacturer: %s\n\n", bstrInstManufacturer.GetBSTR());

         /* Create a arbitrary waveform and load it to the instrument */
         int sizeWave;
         long hr = 0, numBits = 14, segNum = 1;
         long podPresent;
         int countChan = 1;
         long Handle;
           _bstr_t strFileName;

         strFileName = _T("waves\\square_1024.wav");

         _bstr_t bstrChannel = _T("Channel1");

         //Insert size in array sizeWaves
         sizeWave = 1024;

         if (!strModel.CompareNoCase(_T("WX2184")) || !strModel.CompareNoCase(_T("WX1284")) || !strModel.CompareNoCase(_T("WX2181C")) || !strModel.CompareNoCase(_T("WX2182C")) || !strModel.CompareNoCase(_T("WX1281C")) || !strModel.CompareNoCase(_T("WX1282C")) || !strModel.CompareNoCase(_T("WX2184C")) || !strModel.CompareNoCase(_T("WX1284C"))) //it is WX2184
         {
          /* set a active select */
            spDriver->ActiveChannel = bstrChannel;

           /* set a Sample Clock */
            spDriver->Arbitrary->SampleRate = 75E6;
            
            /* assign the Arbitrary Mode */
            spDriver->Output->OutputMode = WX218xOutputModeArbitrary;

            /* turn on the outputs */
            spDriver->Output->Enabled[bstrChannel] = VARIANT_TRUE;

            spDriver->Output->Sync->Enabled[bstrChannel] = VARIANT_TRUE; 

			//Trace mode exist only in WX2184,WX1284
			 if (!strModel.CompareNoCase(_T("WX2184")) || !strModel.CompareNoCase(_T("WX1284")) || !strModel.CompareNoCase(_T("WX2184C")) || !strModel.CompareNoCase(_T("WX1284C")))
			 {
              //Setting trace mode to duplicate
              spDriver->Arbitrary->Waveform->put_TraceMode(WX218xTraceModeDuplicate);
			 }

            //Before download digital, download arbitrary from file
            Handle = spDriver->Arbitrary->Waveform->LoadArbWfmFromFile(bstrChannel, strFileName);

			if (!strModel.CompareNoCase(_T("WX2184")) || !strModel.CompareNoCase(_T("WX1284")) || !strModel.CompareNoCase(_T("WX2184C")) || !strModel.CompareNoCase(_T("WX1284C")))
			{
              //Setting digital state On
              spDriver->DigitalPatternOutput->Enabled[bstrChannel] = VARIANT_TRUE;
		    }

            //Now download digital data (every point 4 byte)

            //Sets digital port to BOTH, if you want to download data (4 byte every point)
            spDriver->DigitalPatternOutput->put_DigPort(WX218xDigPortPortBoth);
            strFileName = _T("waves\\dig512.dig");
            spDriver->DigitalPatternOutput->LoadDigitalDataBinaryFile(strFileName, segNum);

         }//end if, it is WX2184,WX1284,WX2181C,WX2182C,WX1281C,WX1282C

         else //it is not WX2184
         {

         for (int cc = 0; cc < countChan; cc++)  //Loop for channels
         {
            /* set a active select */
            spDriver->ActiveChannel = bstrChannel;

            //Doing this only if digital pod is present for current channel
            podPresent = spDriver->DigitalPatternOutput->GetPodPresent(bstrChannel);
            if (podPresent == 0)
               continue;

            /* turn on the outputs */
            spDriver->Output->Enabled[bstrChannel] = VARIANT_TRUE;

            spDriver->Output->Sync->Enabled[bstrChannel] = VARIANT_TRUE; 

            //Setting format data to Separate
            spDriver->DigitalPatternOutput->put_FormatData(bstrChannel, WX218xDigFormatDataCommon);

            SAFEARRAY *pData = calculateSinusoidWaveform (sizeWave, 1, 0);
            hr = spDriver->DigitalPatternOutput->CreateDigPatternData(bstrChannel, &pData, segNum);
            

            SafeArrayDestroy (pData);

            wprintf(L"Download Digital Pattern Data for %s\n\n", bstrChannel.GetBSTR());

            //Creating safearray for Bits state
            SAFEARRAY *pBit = CreateArrayState(numBits);

             //Creating safearray for Delay
            SAFEARRAY *pDelay = CreateArrayDelay(numBits);

            //Creating safearray for HighLevel
            SAFEARRAY *pHighLevel = CreateArrayHighLevel(numBits);

            //Creating safearray for LowLevel
            SAFEARRAY *pLowLevel = CreateArrayLowLevel(numBits);

            //Downloads these parameters 
            hr = spDriver->DigitalPatternOutput->CreateDigPatternParamData(bstrChannel, &pBit, &pDelay, &pHighLevel, &pLowLevel);
            
            //Togles digital on
            spDriver->DigitalPatternOutput->put_Enabled(bstrChannel, 1);

            /* assign the Arbitrary Mode */
            spDriver->Output->OutputMode = WX218xOutputModeArbitrary;

            wprintf(L"Download Digital Parameters for %s\n\n", bstrChannel.GetBSTR());

            SafeArrayDestroy (pBit);
            SafeArrayDestroy (pDelay);
            SafeArrayDestroy (pHighLevel);
            SafeArrayDestroy (pLowLevel);

            bstrChannel = _T("Channel2");

         }//end for, Loop for channels

        }//end else, it is not WX2184

         // Check instrument for errors
         long lErrorNum = -1;
         _bstr_t bstrErrorMsg;
         wprintf(L"\n");
         while (lErrorNum != 0)
         {
            spDriver->Utility->ErrorQuery(&lErrorNum, bstrErrorMsg.GetAddress());
            wprintf(L"ErrorQuery: %d, %s\n", lErrorNum, bstrErrorMsg.GetBSTR());
         }

      }  //end try

      catch (_com_error& e) 
      {
         //::MessageBox(NULL, e.Description(), e.ErrorMessage(), MB_ICONERROR);  //open this row if you want to display message box
         long hr = e.Error();
         _bstr_t msg = e.Description();

         wprintf(L"ErrorCode: %d, %s\n", hr, msg.GetBSTR());
      }

      if (spDriver != NULL && spDriver->Initialized)
      {
         // Close driver
         spDriver->Close();
      }
   }
   catch (_com_error& e)
   {
      ::MessageBox(NULL, e.Description(), e.ErrorMessage(), MB_ICONERROR);
   }

   ::CoUninitialize();

   printf("\n\nDone - Press Enter to Exit");
   fflush(stdin);

   getchar();

   return 0;
}


//==================================================================================================
//                       - calculateSinusoidWaveform - 
SAFEARRAY * calculateSinusoidWaveform (long lPoints, double dCycles, double dStartPhase)
{
   double omega, point, phase, cycle;

   cycle = (double)(lPoints) / dCycles;

   /* Calculate a start phase */
   phase = (double)((double)(dStartPhase) * M_PI / (double)180.0);

   /* Calculate a Omega */
   omega = (double)(1.0 / lPoints * M_PI * 2 * dCycles);

   SAFEARRAY *m_pData = SafeArrayCreateVector(VT_R8, 0, lPoints);

   for (long i = 0; i < lPoints; i++) {
      point = sin ((omega * (double)i) + phase);
      SafeArrayPutElement(m_pData, &i, (void*)&point);
   }

   return m_pData;
}

//=================================================================================================
//                   - CreateArrayState - 
SAFEARRAY * CreateArrayState (long lPoints)
{
  //Function that recieves number of points and create safearray for Bit State
 unsigned char value;
 long i;

   SAFEARRAY *m_pData = SafeArrayCreateVector(VT_UI1, 0, lPoints);

   for (i = 0; i < lPoints; i++)
   {
     if (i%2)
      value = 0;
     else
      value = 1;

    SafeArrayPutElement(m_pData, &i, (void*)&value);
   }

   return m_pData;
}

//==================================================================================================
//               - CreateArrayDelay - 
SAFEARRAY * CreateArrayDelay (long lPoints)
{
//Function that recieves number of points and create safearray for Delay
 double value;
 long i;

 SAFEARRAY *m_pData = SafeArrayCreateVector(VT_R8, 0, lPoints);

   for (i = 0; i < lPoints; i++)
   {
     if (i%2)
      value = -2.0e-9;
     else
      value = 1e-9;

    SafeArrayPutElement(m_pData, &i, (void*)&value);
   }

   return m_pData;
}

//===================================================================================================
//                                       - CreateArrayHighLevel -
SAFEARRAY * CreateArrayHighLevel (long lPoints)
{
//Function that recieves number of points and create safearray for HighLevel
 double value;
 long i;

 SAFEARRAY *m_pData = SafeArrayCreateVector(VT_R8, 0, lPoints);

   for (i = 0; i < lPoints; i++)
   {
     if (i%2)
      value = 0.6;
     else
      value = 0.7;

    SafeArrayPutElement(m_pData, &i, (void*)&value);
   }

   return m_pData;
}

//===================================================================================================
//                                       - CreateArrayLowLevel -
SAFEARRAY * CreateArrayLowLevel (long lPoints)
{
//Function that recieves number of points and create safearray for LowLevel
 double value;
 long i;

 SAFEARRAY *m_pData = SafeArrayCreateVector(VT_R8, 0, lPoints);

   for (i = 0; i < lPoints; i++)
   {
     if (i%2)
      value = 0.3;
     else
      value = 0.2;

    SafeArrayPutElement(m_pData, &i, (void*)&value);
   }

   return m_pData;
}




