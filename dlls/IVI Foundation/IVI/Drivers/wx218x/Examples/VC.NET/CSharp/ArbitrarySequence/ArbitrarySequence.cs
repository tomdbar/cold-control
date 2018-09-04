using System;
using System.Collections.Generic;
using System.Text;
using Ivi.Driver.Interop;
using Ivi.Fgen.Interop;
using TaborElectronics.WX218x.Interop;
using Ivi.SessionFactory.Interop;

namespace ArbitrarySequenceCs
{
    /// <summary>
    /// Tabor Electronics IVI-COM Driver Example Program
    /// 
    /// Creates a driver object, reads a few Identity interface
    /// properties, and checks the instrument error queue.
    /// Additional instrument specific functionality:
    /// 
    /// Defines waveforms and sequence tables.
    /// 
    /// Runs in simulation mode without an instrument.
    /// 
    /// Requires a COM reference to the driver's type library.
    /// 
    /// </summary>

    class ArbitrarySequence
    {
        private static double[] mBlock = null;
        private const int MAX_ARBITRARY_MEMORY_SIZE = 64000000;

        [STAThread]
        public static void Main(string[] args)
        {
            WX218x driver = null;

            try
            {
                mBlock = new double[MAX_ARBITRARY_MEMORY_SIZE];

                driver = new WX218x();

                // IIviDriverIdentity properties - Initialize not required
                string identifier = driver.Identity.Identifier;
                Console.WriteLine("Identifier: {0}", identifier);

                string revision = driver.Identity.Revision;
                Console.WriteLine("Revision: {0}", revision);

                string vendor = driver.Identity.Vendor;
                Console.WriteLine("Vendor: {0}", vendor);

                // Setup VISA resource descriptor
                //string resourceDesc = "GPIB0::4::INSTR";
                string resourceDesc = "TCPIP::192.168.0.180::5025::SOCKET";
                //string resourceDesc = "USB0::0x168B::0x2184::2147516420::INSTR";

                // Setup IVI-defined initialization options
                string standardInitOptions = "Cache=false, InterchangeCheck=false, QueryInstrStatus=false, RangeCheck=true, RecordCoercions=false, Simulate=true";

                // Setup driver-specific initialization options
                //string driverSetupOptions = "DriverSetup = Model=WS8352, Simulate = false";
                string driverSetupOptions = "Simulate = true";

                if (standardInitOptions.Length > 0)
                    driverSetupOptions = standardInitOptions + "," + driverSetupOptions;
                driver.Initialize(resourceDesc, true, true, driverSetupOptions);

                // IIviDriverIdentity properties - Initialize required
                string instModel = driver.Identity.InstrumentModel;
                Console.WriteLine("InstrumentModel: {0}", instModel);

                string instFirmwareRevision = driver.Identity.InstrumentFirmwareRevision;
                Console.WriteLine("InstrumentFirmwareRevision: {0}", instFirmwareRevision);

                string instManufacturer = driver.Identity.InstrumentManufacturer;
                Console.WriteLine("InstrumentManufacturer: {0}", instManufacturer);

                // Create a arbitrary waveform and load it to the instrument
                int[] handles = new int[8];
                int[] sizeWaves = new int[8];  //array that containts size for creating waveforms
                int[] SeqHandles = new int[3];  //array that containts handles for sequence
                int[] ASeqHandles = new int[3];  //array that containts handles for advance sequence
                int[] WfmHandlesSeq;      //array that containts waveform handles for sequence table
                int[] LoopCount;         //array that containts count of Loops for sequence table
                byte[] JumpFlag;   //array that containts Jump Flags for sequence table
                string Channel = "Channel1";
                string strCommand;
                int cc, countLoops;

                //Insert size in array sizeWaves
                sizeWaves[0] = 384;
                sizeWaves[1] = 4096;
                sizeWaves[2] = 81920;
                sizeWaves[3] = 10240;
                sizeWaves[4] = 384;
                sizeWaves[5] = 4096;
                sizeWaves[6] = 40960;
                sizeWaves[7] = 204800;

                if (instModel == "WX2184" || instModel == "WX1284" || instModel == "WX2184C" || instModel == "WX1284C")
                    countLoops = 4;
                else
                    countLoops = 2;

                for (cc = 0; cc < countLoops; )  //Loop for channels
                {
                    // Set a active select
                    driver.ActiveChannel = Channel;

                    // Set a arbitrary mode
                    driver.Output.OutputMode = WX218xOutputModeEnum.WX218xOutputModeArbitrary;

                    if (instModel == "WX2184" || instModel == "WX1284" || instModel == "WX2184C" || instModel == "WX1284C")
                    {
                        // Set a sample clock
                        driver.Arbitrary.SampleRate = 75E6;
                    }

                    else
                    {
                        driver.Arbitrary.SampleRate = 10E6;
                    }

                    // Turn on the outputs
                    driver.Output.set_Enabled(Channel, true);

                    //Turn on the sync
                    driver.Output.Sync.set_Enabled(Channel, true);

                    //Doing this only for WX2184
                    //Setting trace mode to duplicate
                    if (instModel == "WX2184" || instModel == "WX1284" || instModel == "WX2184C" || instModel == "WX1284C")
                    {
                        driver.Arbitrary.Waveform.TraceMode = WX218xTraceModeEnum.WX218xTraceModeDuplicate;
                    }

                    for (int i = 0; i < handles.Length; i++)
                    {
                        //Creating array of data values (short) in range 0 to 4095
                        short[] data = ConvertWaveformDoubleToDAC(calculateSinusoidWaveform(sizeWaves[i], 1, 0), sizeWaves[i], instModel);

                        //Download wave in to the instrument
                        handles[i] = driver.Arbitrary.Waveform.CreateCustom(ref data);

                        strCommand = String.Format("Download wave for {0}, segment {1}\n", Channel, i + 1);
                        Console.WriteLine(strCommand);

                        //free system memory
                        GC.Collect();
                        GC.WaitForPendingFinalizers();
                    }

                    //walk through the segments
                    for (int i = 0; i < handles.Length; i++)
                    {
                        driver.Arbitrary.Waveform.Configure(Channel, handles[i], 0.5, 0.0);
                    }

                    //Preparing data for creating the first sequence
                    //Creating sequence
                    WfmHandlesSeq = new int[3];
                    WfmHandlesSeq[0] = handles[4];
                    WfmHandlesSeq[1] = handles[0];
                    WfmHandlesSeq[2] = handles[7];

                    LoopCount = new int[3];
                    LoopCount[0] = 2;
                    LoopCount[1] = 4;
                    LoopCount[2] = 6;

                    JumpFlag = new byte[3];
                    JumpFlag[0] = 0;
                    JumpFlag[1] = 1;
                    JumpFlag[2] = 1;

                    //Creating the first sequence
                    SeqHandles[0] = driver.Arbitrary.Sequence.CreateSequenceAdv(ref WfmHandlesSeq, ref LoopCount, ref JumpFlag);

                    strCommand = String.Format("Creating the first sequence table for {0}\n", Channel);
                    Console.WriteLine(strCommand);

                    //Preparing data for creating the second sequence
                    //Creating sequence
                    WfmHandlesSeq = new int[5];
                    WfmHandlesSeq[0] = handles[1];
                    WfmHandlesSeq[1] = handles[2];
                    WfmHandlesSeq[2] = handles[7];
                    WfmHandlesSeq[3] = handles[6];
                    WfmHandlesSeq[4] = handles[4];

                    LoopCount = new int[5];
                    LoopCount[0] = 3;
                    LoopCount[1] = 4;
                    LoopCount[2] = 1;
                    LoopCount[3] = 3;
                    LoopCount[4] = 5;

                    JumpFlag = new byte[5];
                    JumpFlag[0] = 0;
                    JumpFlag[1] = 1;
                    JumpFlag[2] = 1;
                    JumpFlag[3] = 0;
                    JumpFlag[4] = 0;

                    //Creating the second sequence
                    SeqHandles[1] = driver.Arbitrary.Sequence.CreateSequenceAdv(ref WfmHandlesSeq, ref LoopCount, ref JumpFlag);

                    strCommand = String.Format("Creating the second sequence table for {0}\n", Channel);
                    Console.WriteLine(strCommand);

                    //Preparing data for creating the 3 sequence
                    //Creating sequence
                    WfmHandlesSeq = new int[7];
                    WfmHandlesSeq[0] = handles[2];
                    WfmHandlesSeq[1] = handles[3];
                    WfmHandlesSeq[2] = handles[1];
                    WfmHandlesSeq[3] = handles[0];
                    WfmHandlesSeq[4] = handles[4];
                    WfmHandlesSeq[5] = handles[6];
                    WfmHandlesSeq[6] = handles[5];

                    LoopCount = new int[7];
                    LoopCount[0] = 8;
                    LoopCount[1] = 4;
                    LoopCount[2] = 6;
                    LoopCount[3] = 3;
                    LoopCount[4] = 2;
                    LoopCount[5] = 2;
                    LoopCount[6] = 5;

                    JumpFlag = new byte[7];
                    JumpFlag[0] = 0;
                    JumpFlag[1] = 1;
                    JumpFlag[2] = 1;
                    JumpFlag[3] = 1;
                    JumpFlag[4] = 0;
                    JumpFlag[5] = 1;
                    JumpFlag[6] = 1;

                    //Creating the 3 sequence
                    SeqHandles[2] = driver.Arbitrary.Sequence.CreateSequenceAdv(ref WfmHandlesSeq, ref LoopCount, ref JumpFlag);

                    strCommand = String.Format("Creating the third sequence table for {0}\n", Channel);
                    Console.WriteLine(strCommand);

                    // Set a sequence mode
                    driver.Output.OutputMode = WX218xOutputModeEnum.WX218xOutputModeSequence;

                    //walk through the sequence
                    for (int i = 0; i < SeqHandles.Length; i++)
                    {
                        driver.Arbitrary.Sequence.Configure(Channel, SeqHandles[i], 0.5, 0.0);
                    }

                    //Preparing data for creating advance sequence
                    ASeqHandles[0] = SeqHandles[0];
                    ASeqHandles[1] = SeqHandles[1];
                    ASeqHandles[2] = SeqHandles[2];

                    LoopCount = new int[3];
                    LoopCount[0] = 2;
                    LoopCount[1] = 4;
                    LoopCount[2] = 3;

                    JumpFlag = new byte[3];
                    JumpFlag[0] = 0;
                    JumpFlag[1] = 1;
                    JumpFlag[2] = 1;

                    driver.Arbitrary.Sequence.AdvanceSequence.CreateAdvSequence(ref ASeqHandles, ref LoopCount, ref JumpFlag);

                    // Set a advance sequence mode
                    driver.Output.OutputMode = WX218xOutputModeEnum.WX218xOutputModeASequence;

                    strCommand = String.Format("Creating the advance sequence for {0}\n", Channel);
                    Console.WriteLine(strCommand);

                    if (instModel == "WX2184" || instModel == "WX1284" || instModel == "WX2184C" || instModel == "WX1284C")
                    {
                        Channel = "Channel3";
                        cc += 2;
                    }

                    else
                    {
                        Channel = "Channel2";
                        cc ++;
                    }


                }//end for, Loop for channels

                // Check instrument for errors
                int errorNum = -1;
                string errorMsg = null;
                Console.WriteLine("");
                while (errorNum != 0)
                {
                    driver.Utility.ErrorQuery(ref errorNum, ref errorMsg);
                    Console.WriteLine("ErrorQuery: {0}, {1}", errorNum, errorMsg);
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            finally
            {
                if (driver != null && driver.Initialized)
                {
                    // Close driver
                    driver.Close();
                }
            }

            Console.WriteLine("Done - Press Enter to Exit");
            Console.ReadLine();
        }

        /**
         * calculateSinusoidWaveform - 
         */
        static double[] calculateSinusoidWaveform(long lPoints, double dCycles, double dStartPhase)
        {
            double omega, phase, cycle;

            cycle = (double)(lPoints) / dCycles;

            /* Calculate a start phase */
            phase = (double)((double)(dStartPhase) * Math.PI / (double)180.0);

            /* Calculate a Omega */
            omega = (double)(1.0 / lPoints * Math.PI * 2 * dCycles);

            for (long i = 0; i < lPoints; i++)
                mBlock[i] = Math.Sin((omega * (double)i) + phase);

            return mBlock;
        }

        /*
         *  ConvertWaveformDoubleToDAC -
         */
        static short[] ConvertWaveformDoubleToDAC(double[] data, int size, string model)
        {
            //Function that recieve array of data between -1 and 1 and 
            //convert to DAC and load in to the memory and return waveform handle
            const double HALF_RANGE_12BIT = 2047.5;
            const short OFFSET_12BIT = 2048;
            const double HALF_RANGE_14BIT = 4094.5;
            const short OFFSET_14BIT = 4095;
            double half_range_current = 2047.5;
            short offset_current = 2048;

            if (model == "WX2181B" || model == "WX2182B" || model == "WX2181C" || model == "WX2182C" || model == "WX1281C" || model == "WX1282C" || model == "WX2184" || model == "WX1284" || model == "WX2184C" || model == "WX1284C") //it is 14bit
            {
                half_range_current = HALF_RANGE_14BIT;
                offset_current = OFFSET_14BIT;
            }//end if,it is 14bit

            else
            {
                half_range_current = HALF_RANGE_12BIT;
                offset_current = OFFSET_12BIT;
            }

            short[] block = new short[size];

            for (long i = 0; i < size; i++)
            {
                double point = data[i];

                //Checking that every element in array data must be between -1 to +1
                if (point < -1.0 || point > 1.0) //invalid value in waveform data
                {
                    return null;
                }//end if,invalid value in waveform data 

                block[i] = (short)((half_range_current * point) + offset_current);
            }

            return block;
        }
    }
}

