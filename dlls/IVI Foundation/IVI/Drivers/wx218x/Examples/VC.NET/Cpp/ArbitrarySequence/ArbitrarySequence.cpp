// ArbitrarySequence.cpp : Defines the entry point for the console application.

//Creates a driver object, reads a few Identity interface properties, and checks the instrument error queue.
//Additional instrument specific functionality:
//Defines waveforms and sequence tables. Runs in simulation mode without an instrument.

#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <cmath>

#import "IviDriverTypeLib.dll"  no_namespace
#import "IviFgenTypeLib.dll"  no_namespace
#import "wx218x_64.dll"  no_namespace

#pragma warning(disable : 4996)


SAFEARRAY * calculateSinusoidWaveform (long lPoints, double dCycles, double dStartPhase);

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
         CString strResourceDesc = "TCPIP::192.168.0.180::5025::SOCKET";
         //CString strResourceDesc = "USB0::0x168B::0x2184::2147516420::INSTR";

         // Setup IVI-defined initialization options
         CString strStandardInitOptions = 
            "Cache=true, InterchangeCheck=false, QueryInstrStatus=false, RangeCheck=true, RecordCoercions=false, Simulate=true";

        // CString strStandardInitOptions = 
           // "Cache=true, InterchangeCheck=false, QueryInstrStatus=false, RangeCheck=true, RecordCoercions=false, Simulate=true,DriverSetup=Trace=True,TraceArray=true";

          //printf("Arbitrary Sequence Waveform Example by Tabor Electronics Ltd.\n");

          //printf("To run example in simulation mode, press number <1>, to connect, press <2>.\n");
          //scanf("%d", &isSim);

         /* if (isSim != 1)  //user want to connect to the instrument
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

         _bstr_t bstrInstFirmwareRevision = spDriver->Identity->InstrumentFirmwareRevision;
         wprintf(L"InstrumentFirmwareRevision: %s\n", bstrInstFirmwareRevision.GetBSTR());

         _bstr_t bstrInstManufacturer = spDriver->Identity->InstrumentManufacturer;
         wprintf(L"InstrumentManufacturer: %s\n\n", bstrInstManufacturer.GetBSTR());

         /* Create a arbitrary waveform and load it to the instrument */
         int handles[8];  //array that containts handles for creating waveforms
         int WfmHandlesSeq[8]; //array that containts waveform handles for sequence
         int SeqHandles[3];  //array that containtsseq handles for sequence
         int ASeqHandles[3];  //array that containtsseq handles for advance sequence 
         int LoopCount[8];  //array that containts loop count for sequence
         unsigned char JumpFlag[8];
         int sizeWaves[8];  //array that containts size for creating waveforms
         int dataArray;
         long i, size;
         int ii, cc, countLoops;
         HRESULT ok;
         SAFEARRAYBOUND rgsabound[1]; 
         SAFEARRAY *pWfmHandlesSeq, *pLoopCount, *pJumpFlag, *pASeqHandles;

         //Saving Model in strModel
         strModel = bstrInstModel.GetBSTR();

         _bstr_t bstrChannel = _T("Channel1");

         if (!strModel.CompareNoCase(_T("WX2184")) || !strModel.CompareNoCase(_T("WX1284")) || !strModel.CompareNoCase(_T("WX2184C")) || !strModel.CompareNoCase(_T("WX1284C"))) //it is WX2184
            countLoops = 4;
         else
            countLoops = 2;

         //Temporary for check quick download or not
         spDriver->Arbitrary->Sequence->put_QuickSequence(0);


         for (cc = 0; cc < countLoops; )  //Loop for channels
         {
            /* set a active select */
            spDriver->ActiveChannel = bstrChannel;

            /* assign the Arbitrary Mode */
            spDriver->Output->OutputMode = WX218xOutputModeArbitrary;

            /* set a Sample Clock */
            //spDriver->Arbitrary->SampleRate = 10E6;
            spDriver->Arbitrary->SampleRate = 75E6;

            /* turn on the outputs */
            spDriver->Output->Enabled[bstrChannel] = VARIANT_TRUE;

            spDriver->Output->Sync->Enabled[bstrChannel] = VARIANT_TRUE;

            //Insert size in array sizeWaves
            sizeWaves[0] = 384;
            sizeWaves[1] = 4096;
            sizeWaves[2] = 81920;
            sizeWaves[3] = 10240;
            sizeWaves[4] = 384;
            sizeWaves[5] = 4096;
            sizeWaves[6] = 40960;
            sizeWaves[7] = 204800;

            //Doing this only for WX2184
             if (!strModel.CompareNoCase(_T("WX2184")) || !strModel.CompareNoCase(_T("WX1284")) || !strModel.CompareNoCase(_T("WX2184C")) || !strModel.CompareNoCase(_T("WX1284C"))) //it is WX2184
             {
               //Setting trace mode to duplicate
               spDriver->Arbitrary->Waveform->put_TraceMode(WX218xTraceModeDuplicate);
             }//end if, it is WX2184

            for (ii = 0; ii < sizeof(handles)/sizeof(handles[0]); ii++) 
            {
               SAFEARRAY *pData = calculateSinusoidWaveform (sizeWaves[ii], 1, 0);
               handles[ii] = spDriver->Arbitrary->Waveform->Create (&pData); 
               SafeArrayDestroy (pData);

               wprintf(L"Download Wave for %s, segment %d\n\n", bstrChannel.GetBSTR(), ii+1);
            }

            /* walk through the segments */
            for (ii = 0; ii < sizeof(handles)/sizeof(handles[0]); ii++) 
            {
               spDriver->Arbitrary->Waveform->Configure (bstrChannel, handles[ii], 0.5, 0.0);
            }

            //Preparing data for creating the first sequence
            //Creating sequence
            WfmHandlesSeq[0] = handles[4]; 
            WfmHandlesSeq[1] = handles[0]; 
            WfmHandlesSeq[2] = handles[7]; 

            LoopCount[0] = 2; 
            LoopCount[1] = 4; 
            LoopCount[2] = 6;

            JumpFlag[0] = 0; 
            JumpFlag[1] = 1; 
            JumpFlag[2] = 1; 

            size = 3;
            rgsabound[0].lLbound = 0;
            rgsabound[0].cElements = 3;

            //Creating SAFEARRAY for WfmHandlesSeq
            pWfmHandlesSeq = SafeArrayCreate(VT_R4, 1, rgsabound);

            //Insert data in SAFEARRAY WfmHandlesSeq
            for (i = 0; i < size; i++) 
            {
               dataArray = WfmHandlesSeq[i];
               SafeArrayPutElement(pWfmHandlesSeq, &i, (void*)&dataArray);
            }

            //Creating SAFEARRAY for LoopCount
            pLoopCount = SafeArrayCreate(VT_R4, 1, rgsabound);

            //Insert data in SAFEARRAY LoopCount
            for (i = 0; i < size; i++) 
            {
               dataArray = LoopCount[i];
               SafeArrayPutElement(pLoopCount, &i, (void*)&dataArray);
            }

            //Creating SAFEARRAY for JumpFlag
            pJumpFlag = SafeArrayCreate(VT_UI1, 1, rgsabound);

            //Insert data in SAFEARRAY JumpFlag  
            for (i = 0; i < size; i++) 
            {
               dataArray = JumpFlag[i];
               SafeArrayPutElement(pJumpFlag, &i, (void*)&dataArray);
            }

            //Creating the first sequence
            SeqHandles[0] = spDriver->Arbitrary->Sequence->CreateSequenceAdv(&pWfmHandlesSeq, &pLoopCount, &pJumpFlag);
            wprintf(L"Creating the first sequence table for %s\n\n", bstrChannel.GetBSTR());

            //Preparing data for creating the second sequence
            rgsabound[0].cElements = 5;

            //Redim SAFEARRAY for WfmHandlesSeq
            ok = SafeArrayRedim(pWfmHandlesSeq, rgsabound);

            WfmHandlesSeq[0] = handles[1]; 
            WfmHandlesSeq[1] = handles[2]; 
            WfmHandlesSeq[2] = handles[7]; 
            WfmHandlesSeq[3] = handles[6]; 
            WfmHandlesSeq[4] = handles[4];

            LoopCount[0] = 3; 
            LoopCount[1] = 4; 
            LoopCount[2] = 1;
            LoopCount[3] = 3;
            LoopCount[4] = 5;

            JumpFlag[0] = 0; 
            JumpFlag[1] = 1; 
            JumpFlag[2] = 1;
            JumpFlag[3] = 0; 
            JumpFlag[4] = 0;

            size = rgsabound[0].cElements; 

            //Insert data in SAFEARRAY WfmHandlesSeq
            for (i = 0; i < size; i++) 
            {
               dataArray = WfmHandlesSeq[i];
               SafeArrayPutElement(pWfmHandlesSeq, &i, (void*)&dataArray);
            }

            //Redim SAFEARRAY for LoopCount
            ok = SafeArrayRedim(pLoopCount, rgsabound);

            //Insert data in SAFEARRAY LoopCount
            for (i = 0; i < size; i++) 
            {
               dataArray = LoopCount[i];
               SafeArrayPutElement(pLoopCount, &i, (void*)&dataArray);
            }

            //Redim SAFEARRAY for JumpFlag
            ok = SafeArrayRedim(pJumpFlag, rgsabound);

            //Insert data in SAFEARRAY JumpFlag  
            for (i = 0; i < size; i++) 
            {
               dataArray = JumpFlag[i];
               SafeArrayPutElement(pJumpFlag, &i, (void*)&dataArray);
            }

            //Creating the second sequence
            SeqHandles[1] = spDriver->Arbitrary->Sequence->CreateSequenceAdv(&pWfmHandlesSeq, &pLoopCount, &pJumpFlag);
            wprintf(L"Creating the second sequence table for %s\n\n", bstrChannel.GetBSTR());

            //Preparing data for creating the 3 sequence
            rgsabound[0].cElements = 7;

            //Redim SAFEARRAY for WfmHandlesSeq
            ok = SafeArrayRedim(pWfmHandlesSeq, rgsabound);

            WfmHandlesSeq[0] = handles[2]; 
            WfmHandlesSeq[1] = handles[3]; 
            WfmHandlesSeq[2] = handles[1]; 
            WfmHandlesSeq[3] = handles[0]; 
            WfmHandlesSeq[4] = handles[4];
            WfmHandlesSeq[5] = handles[6]; 
            WfmHandlesSeq[6] = handles[5]; 

            LoopCount[0] = 8; 
            LoopCount[1] = 4; 
            LoopCount[2] = 6;
            LoopCount[3] = 3;
            LoopCount[4] = 2;
            LoopCount[5] = 2;
            LoopCount[6] = 5;

            JumpFlag[0] = 0; 
            JumpFlag[1] = 1; 
            JumpFlag[2] = 1;
            JumpFlag[3] = 1; 
            JumpFlag[4] = 0; 
            JumpFlag[5] = 1; 
            JumpFlag[6] = 1; 

            size = rgsabound[0].cElements; 

            //Insert data in SAFEARRAY WfmHandlesSeq
            for (i = 0; i < size; i++) 
            {
               dataArray = WfmHandlesSeq[i];
               SafeArrayPutElement(pWfmHandlesSeq, &i, (void*)&dataArray);
            }

            //Redim SAFEARRAY for LoopCount
            ok = SafeArrayRedim(pLoopCount, rgsabound);

            //Insert data in SAFEARRAY LoopCount
            for (i = 0; i < size; i++) 
            {
               dataArray = LoopCount[i];
               SafeArrayPutElement(pLoopCount, &i, (void*)&dataArray);
            }

            //Redim SAFEARRAY for JumpFlag
            ok = SafeArrayRedim(pJumpFlag, rgsabound);

            //Insert data in SAFEARRAY JumpFlag  
            for (i = 0; i < size; i++) 
            {
               dataArray = JumpFlag[i];
               SafeArrayPutElement(pJumpFlag, &i, (void*)&dataArray);
            }

            //Creating the 3 sequence
            SeqHandles[2] = spDriver->Arbitrary->Sequence->CreateSequenceAdv(&pWfmHandlesSeq, &pLoopCount, &pJumpFlag);
            wprintf(L"Creating the third sequence table for %s\n\n", bstrChannel.GetBSTR());

            //Set a sequence mode
            spDriver->Output->OutputMode = WX218xOutputModeSequence; 

            /* walk through the sequence */
            for (ii = 0; ii < sizeof(SeqHandles)/sizeof(SeqHandles[0]); ii++) 
            {
               spDriver->Arbitrary->Sequence->Configure(bstrChannel, SeqHandles[ii], 0.5, 0.0);
               Sleep(100);
            }

            //Preparing data for creating advance sequence
            ASeqHandles[0] = SeqHandles[0];
            ASeqHandles[1] = SeqHandles[1];
            ASeqHandles[2] = SeqHandles[2];

            size = 3;
            rgsabound[0].lLbound = 0;
            rgsabound[0].cElements = 3;

            //Creating SAFEARRAY for pASeqHandles
            pASeqHandles = SafeArrayCreate(VT_R4, 1, rgsabound);

            //Insert data in SAFEARRAY pASeqHandles
            for (i = 0; i < size; i++) 
            {
               dataArray = ASeqHandles[i];
               SafeArrayPutElement(pASeqHandles, &i, (void*)&dataArray);
            }

            LoopCount[0] = 2; 
            LoopCount[1] = 4; 
            LoopCount[2] = 3;

            JumpFlag[0] = 0; 
            JumpFlag[1] = 1; 
            JumpFlag[2] = 1;

            size = rgsabound[0].cElements; 

            //Redim SAFEARRAY for LoopCount
            ok = SafeArrayRedim(pLoopCount, rgsabound);

            //Insert data in SAFEARRAY LoopCount
            for (i = 0; i < size; i++) 
            {
               dataArray = LoopCount[i];
               SafeArrayPutElement(pLoopCount, &i, (void*)&dataArray);
            }

            //Redim SAFEARRAY for JumpFlag
            ok = SafeArrayRedim(pJumpFlag, rgsabound);

            //Insert data in SAFEARRAY JumpFlag  
            for (i = 0; i < size; i++) 
            {
               dataArray = JumpFlag[i];
               SafeArrayPutElement(pJumpFlag, &i, (void*)&dataArray);
            }

            //Creating advance sequence
            spDriver->Arbitrary->Sequence->AdvanceSequence->CreateAdvSequence(&pASeqHandles, &pLoopCount, &pJumpFlag);
            wprintf(L"Creating the advance sequence table for %s\n\n", bstrChannel.GetBSTR());

            //Set a advance sequence mode
            spDriver->Output->OutputMode = WX218xOutputModeASequence; 

            //Destroy Safearray
            SafeArrayDestroy (pASeqHandles);
            SafeArrayDestroy (pWfmHandlesSeq);
            SafeArrayDestroy (pLoopCount);
            SafeArrayDestroy (pJumpFlag);

            if (!strModel.CompareNoCase(_T("WX2184")) || !strModel.CompareNoCase(_T("WX1284")) || !strModel.CompareNoCase(_T("WX2184C")) || !strModel.CompareNoCase(_T("WX1284C"))) //it is WX2184
            {
              bstrChannel = _T("Channel3");
              cc +=2;
            }

            else
            {
             bstrChannel = _T("Channel2");
             cc++;
            }

            

         }//end for, Loop for channels

         // Check instrument for errors
         long lErrorNum = -1;
         _bstr_t bstrErrorMsg;
         wprintf(L"\n");
         while (lErrorNum != 0)
         {
            spDriver->Utility->ErrorQuery(&lErrorNum, bstrErrorMsg.GetAddress());
            wprintf(L"ErrorQuery: %d, %s\n", lErrorNum, bstrErrorMsg.GetBSTR());
         }
      }
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



