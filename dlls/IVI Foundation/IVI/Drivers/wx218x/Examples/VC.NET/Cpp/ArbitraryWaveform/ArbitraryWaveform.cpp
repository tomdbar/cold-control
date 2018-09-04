// ArbitraryWaveform.cpp : Defines the entry point for the console application.

//Creates a driver object, reads a few Identity interface properties, and checks the instrument error queue.
//Additional instrument specific functionality:
//Defines 8 waveforms. Runs in simulation mode without an instrument.
//For WX2184 show how to download waveforms in Combine mode

#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <cmath>

#import "IviDriverTypeLib.dll"  no_namespace
#import "IviFgenTypeLib.dll"  no_namespace
#import "wx218x_64.dll"  no_namespace


#pragma warning(disable : 4996)


SAFEARRAY * calculateSinusoidWaveform (long lPoints, double dCycles, double dStartPhase);

//Function that shows how to create buffer with combine waveform
unsigned long buildComposedWave(unsigned short* outBuff, unsigned long outBuffLen, unsigned long numCycles);

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
         long segSize = 1024;
         long segSizeCmb;
           _bstr_t strFileName1, strFileName2;

         long Handle1, Handle2;

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
         CString strResourceDesc = "TCPIP::192.168.0.180::5025::SOCKET";
         //CString strResourceDesc = "USB0::0x168B::0x2184::0000214901::INSTR";
         
         //CString strResourceDesc = "GPIB0::4::INSTR";

         // Setup IVI-defined initialization options
         CString strStandardInitOptions = 
            "Cache=true, InterchangeCheck=false, QueryInstrStatus=false, RangeCheck=true, RecordCoercions=false, Simulate=true";

         //CString strStandardInitOptions = 
           //"Cache=true, InterchangeCheck=false, QueryInstrStatus=false, RangeCheck=true, RecordCoercions=false, Simulate=true,DriverSetup=Trace=True,TraceArray=true";

          printf("Arbitrary Waveform Example by Tabor Electronics Ltd.\n");

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
         int handles[8]; //array that containts waveform handles
         int sizeWaves[8];  //array that containts size for creating waveforms
         long hr = 0;

         _bstr_t bstrChannel = _T("Channel1");

         //Insert size in array sizeWaves
         sizeWaves[0] = 384;
         sizeWaves[1] = 4096;
         sizeWaves[2] = 81920;
         sizeWaves[3] = 10240;
         sizeWaves[4] = 384;
         sizeWaves[5] = 4096;
         sizeWaves[6] = 40960;
         sizeWaves[7] =  204800; 

         if (!strModel.CompareNoCase(_T("WX2184")) || !strModel.CompareNoCase(_T("WX1284")) || !strModel.CompareNoCase(_T("WX2184C")) || !strModel.CompareNoCase(_T("WX1284C"))) //it is WX2184
         {
            for (int cc = 0; cc < 4;)  //Loop for channels 1 and 3, becouse default mode is Duplicate
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

            //Setting trace mode to duplicate
            spDriver->Arbitrary->Waveform->put_TraceMode(WX218xTraceModeDuplicate);

           for (int i = 0; i < sizeof(handles)/sizeof(handles[0]); i++) 
            {
               SAFEARRAY *pData = calculateSinusoidWaveform (sizeWaves[i], 1, 0);

               handles[i] = spDriver->Arbitrary->Waveform->Create (&pData); 
               SafeArrayDestroy (pData);

               wprintf(L"Download Wave for %s, segment %d\n\n", bstrChannel.GetBSTR(), i+1);
            }

            bstrChannel = _T("Channel3");

            cc += 2;

         }//end for, Loop for channels

         }//it is WX2184

         else //it is other models, not WX2184
         {

         for (int cc = 0; cc < 2; cc++)  //Loop for channels
         {
            /* set a active select */
            spDriver->ActiveChannel = bstrChannel;

            if (!strModel.CompareNoCase(_T("WX2184")) || !strModel.CompareNoCase(_T("WX2184C"))) //it is WX2184
            {
                spDriver->Arbitrary->SampleRate = 1E9;
            }

            else //it is not WX2184
            {
              /* set a Sample Clock */
              spDriver->Arbitrary->SampleRate = 10E6;
            }

            /* assign the Arbitrary Mode */
            spDriver->Output->OutputMode = WX218xOutputModeArbitrary;

            /* turn on the outputs */
            spDriver->Output->Enabled[bstrChannel] = VARIANT_TRUE;

            spDriver->Output->Sync->Enabled[bstrChannel] = VARIANT_TRUE; 

           

            for (int i = 0; i < sizeof(handles)/sizeof(handles[0]); i++) 
            {
               SAFEARRAY *pData = calculateSinusoidWaveform (sizeWaves[i], 1, 0);

               handles[i] = spDriver->Arbitrary->Waveform->Create (&pData); 
               SafeArrayDestroy (pData);

               wprintf(L"Download Wave for %s, segment %d\n\n", bstrChannel.GetBSTR(), i+1);
            }

            /* walk through the segments */
            for (int i = 0; i < sizeof(handles)/sizeof(handles[0]); i++) 
            {
               spDriver->Arbitrary->Waveform->Configure (bstrChannel, handles[i], 0.5, 0.0);
            }

            bstrChannel = _T("Channel2");

         }//end for, Loop for channels

         }//end else, it is not WX2184

         //Now checking if model is WX2184, show download combine waveform
          if (!strModel.CompareNoCase(_T("WX2184")) || !strModel.CompareNoCase(_T("WX1284")) || !strModel.CompareNoCase(_T("WX2184C")) || !strModel.CompareNoCase(_T("WX1284C"))) //it is WX2184
          {
            printf("Now creating combine waveform (Sine and Triangle) and download in to the instrument.\n");
            unsigned short pointCmb;
            long handle;

            bstrChannel = _T("Channel1");

            segSize = 1024;
            segSizeCmb = segSize*2 + 32;

            //Allocation buffer for combine waveform
            unsigned short * buffCombine = new unsigned short[segSizeCmb];

            int retLenCmb;   //size of waveform for one channel that returns from function: "buildComposedWave"

            retLenCmb = buildComposedWave(buffCombine, segSizeCmb, 3);

            //Now in buffer buffCombine exist data for combined wavefor
            //Creating Safearray for copy data
             SAFEARRAY *m_pCmbData = SafeArrayCreateVector(VT_I2, 0, segSizeCmb);

             for (long ii = 0; ii < segSizeCmb; ii++)
             {
              //Setting data from buffCombine in to the safearray
                pointCmb = buffCombine[ii]; 
                SafeArrayPutElement(m_pCmbData, &ii, (void*)&pointCmb);
             }//end for

            for (int cc = 0; cc < 4;)
            {
              /* set a active select */
             spDriver->ActiveChannel = bstrChannel;

              //Setting mode to Combine
             spDriver->Arbitrary->Waveform->TraceMode = WX218xTraceModeCombine;

             //Now download combined waveform in to the instrument
             handle = spDriver->Arbitrary->Waveform->CreateCustom(&m_pCmbData);
             wprintf(L"Download Wave for %s, Waveform Handle is %d\n\n", bstrChannel.GetBSTR(), handle);

             bstrChannel = _T("Channel3");
             cc += 2;

            }//end for

           delete [] buffCombine;

           SafeArrayDestroy (m_pCmbData);

           bstrChannel = _T("Channel1");
           spDriver->Output->Enabled[bstrChannel] = VARIANT_TRUE;
           bstrChannel = _T("Channel2");
           spDriver->Output->Enabled[bstrChannel] = VARIANT_TRUE;
           bstrChannel = _T("Channel3");
           spDriver->Output->Enabled[bstrChannel] = VARIANT_TRUE;
           bstrChannel = _T("Channel4");
           spDriver->Output->Enabled[bstrChannel] = VARIANT_TRUE;

           strFileName1 = _T("waves\\pulse_2048.wav");
           strFileName2 = _T("waves\\sinc_2048.wav");

           printf("Now download two waveforms from the binary files (Pulse and Sinc) in to the instrument.\n");
          
           bstrChannel = _T("Channel1");
           for (int cc = 0; cc < 4;)
           {
              /* set a active select */
             spDriver->ActiveChannel = bstrChannel;

              //Setting mode to Combine
             spDriver->Arbitrary->Waveform->TraceMode = WX218xTraceModeCombine;

             //Now download combined waveform in to the instrument
             hr = spDriver->Arbitrary->Waveform->LoadArbWfmFromFileAdv(bstrChannel, strFileName1, strFileName2, &Handle1, &Handle2);
             wprintf(L"Download two Waveforms, Waveform Handles are: %d,%d\n\n", Handle1, Handle2);

             bstrChannel = _T("Channel3");
             cc += 2;

           }//end for
           

         }//end if, it is WX2184


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


/*
*  calculateSinusoidWaveform -
*/
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

//=====================================================================================================
//                   - How to create buffer with combine waveform
unsigned long buildComposedWave(unsigned short* outBuff, unsigned long outBuffLen, unsigned long numCycles)
{
      //Function that creates sine and triangle (combine waveform).
      double omg, val1, val2;
      unsigned long i, j, n;
      unsigned short *ptr1, *ptr2;

      const unsigned short dacMaxAbsVal = (0x01 << 14) - 1;
      const double dacHalfVal = dacMaxAbsVal / 2.0;
      
      unsigned long segLen = (outBuffLen / 32) * 16;
      if (segLen <= 16 + 192) { return 0; }
      segLen -= 16;

      ptr2 = &outBuff[32];
      ptr1 = ptr2 + 16;
      omg = 2 * M_PI / (segLen / (double)numCycles);
      n = 0;
      for (i = 0; i < segLen / 16; ++i, ptr1 += 16, ptr2 += 16)
      {
            for (j = 0; j < 16; ++j, ++n, ++ptr1, ++ptr2)
            {
                  val1 = sin(n * omg);
                  val2 = fabs(asin(val1) / M_PI) * dacMaxAbsVal;
                  val1 = (1.0 + sin(n * omg)) * dacHalfVal;
                  if (val1 < 0) { val1 = 0; }
                  if (val1 > dacMaxAbsVal) { val1 = dacMaxAbsVal; }
                  *ptr1 = (unsigned short)val1;
                  *ptr2 = (unsigned short)val2;
            }
      }

      for (i = 0; i < 16; ++i)
      {
            outBuff[i] = outBuff[32];
            outBuff[i + 16] = outBuff[48];
      }

      return segLen;
}






