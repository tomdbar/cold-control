classdef Waveform < instrument.ivicom.Interface
    %WAVEFORM IWX218xArbitraryWaveform interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Waveform(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Properties
    properties

        %TRACEMODE Use this property to set or query the trace mode.
        TraceMode

        %FASTDOWNLOAD No documentation available.
        FastDownload

        %DOWNLOADRECORD Enable or Disable record all downloaded waves on internal flash.
        DownloadRecord

    end

    %% Public Read Only Properties
    properties (SetAccess = private)

        %NUMBERWAVEFORMSMAX Returns the maximum number of arbitrary waveforms that the function generator allows. Read Only.
        NumberWaveformsMax

        %QUANTUM The size (i.e. number of points) of each waveform must be a multiple of a constant quantum value. Read Only.
        Quantum

        %SIZEMAX Returns the maximum number of points the function generator allows in a waveform. Read Only.
        SizeMax

        %SIZEMIN Returns the minimum number of points the function generator allows in a waveform. Read Only.
        SizeMin

    end

    %% Property access methods
    methods

        %% NumberWaveformsMax property access methods
        function value = get.NumberWaveformsMax(obj)
            obj.checkValidObj();
            try
                value = obj.interface.NumberWaveformsMax;
            catch e
                obj.interpretError(e);
            end
        end

        %% Quantum property access methods
        function value = get.Quantum(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Quantum;
            catch e
                obj.interpretError(e);
            end
        end

        %% SizeMax property access methods
        function value = get.SizeMax(obj)
            obj.checkValidObj();
            try
                value = obj.interface.SizeMax;
            catch e
                obj.interpretError(e);
            end
        end

        %% SizeMin property access methods
        function value = get.SizeMin(obj)
            obj.checkValidObj();
            try
                value = obj.interface.SizeMin;
            catch e
                obj.interpretError(e);
            end
        end

        %% TraceMode property access methods
        function value = get.TraceMode(obj)
            obj.checkValidObj();
            try
                value = obj.interface.TraceMode;
            catch e
                obj.interpretError(e);
            end
        end
		function set.TraceMode(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.TraceMode = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% FastDownload property access methods
        function value = get.FastDownload(obj)
            obj.checkValidObj();
            try
                value = obj.interface.FastDownload;
            catch e
                obj.interpretError(e);
            end
        end
		function set.FastDownload(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarInt32Arg(newValue,'FastDownload');
            try
                obj.interface.FastDownload = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% DownloadRecord property access methods
        function value = get.DownloadRecord(obj)
            obj.checkValidObj();
            try
                value = obj.interface.DownloadRecord;
            catch e
                obj.interpretError(e);
            end
        end
		function set.DownloadRecord(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.DownloadRecord = newValue;
            catch e
                obj.interpretError(e);
            end
        end

    end

    %% Public Methods
    methods

        function Clear(obj,Handle)
            %CLEAR This method will delete a predefined segment from the working memory or all predefined segments and will clear the entire waveform memory space.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Handle = obj.checkScalarInt32Arg(Handle,'Handle');
            try
                obj.interface.Clear(int32(Handle));
            catch e
                obj.interpretError(e);
            end
        end

        function Configure(obj,Channel,Handle,Gain,Offset)
            %CONFIGURE This method configures the parameters of the function generator that affect arbitrary waveform generation.
            
            obj.checkValidObj();
			error(nargchk(5,5,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Handle = obj.checkScalarInt32Arg(Handle,'Handle');
            Gain = obj.checkScalarDoubleArg(Gain,'Gain');
            Offset = obj.checkScalarDoubleArg(Offset,'Offset');
            try
                obj.interface.Configure(char(Channel),int32(Handle),double(Gain),double(Offset));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Create(obj,Data)
            %CREATE This method creates an arbitrary waveform from array of Data values.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Data = obj.checkVectorDoubleArg(Data,'Data');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                [val] = obj.interface.Create(double(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function val = LoadArbWfmFromFile(obj,Channel,FileName)
            %LOADARBWFMFROMFILE This method load waveform from file and create an arbitrary waveform.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                [val] = obj.interface.LoadArbWfmFromFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function val = CreateCustom(obj,Data)
            %CREATECUSTOM This method creates an arbitrary waveform from array of Data (short) values,that are already in range from 0 to 4095 (WX2181, WX2182) and from 0 to 16383 (WX2181B, WX2182B,WX2182C,WX1281B,WX1282B,WS8351,WS8352,WX2184,WX1284,WX2184C,WX1284C).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Data = obj.checkVectorInt16Arg(Data,'Data');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                [val] = obj.interface.CreateCustom(int16(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function [returnHandle1,returnHandle2] = LoadArbWfmFromFileAdv(obj,Channel,FileName1,FileName2)
            %LOADARBWFMFROMFILEADV This method creates two arbitrary waveforms from specified files and download them in to the memory when trace mode Combine (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName1 = obj.checkScalarStringArg(FileName1,'FileName1');
            FileName2 = obj.checkScalarStringArg(FileName2,'FileName2');
            try
                [returnHandle1,returnHandle2] = obj.interface.LoadArbWfmFromFileAdv(char(Channel),char(FileName1),char(FileName2),int32(0),int32(0));
            catch e
                obj.interpretError(e);
            end
        end

        function [returnHandle1,returnHandle2] = CreateCustomAdv(obj,Data1,Data2)
            %CREATECUSTOMADV This method download an arbitrary waveform from arrays of Data (short) values,that are already in range from  0 to 16383 in to the both channels(Channel1 and Channel2,Channel3 and Channel4) when trace mode is Double or Combine (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Data1 = obj.checkVectorInt16Arg(Data1,'Data1');
            Data2 = obj.checkVectorInt16Arg(Data2,'Data2');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                [returnHandle1,returnHandle2] = obj.interface.CreateCustomAdv(int16(Data1),int16(Data2),int32(0),int32(0));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function SetCoupleActiveSegment(obj,SegNum1,SegNum2)
            %SETCOUPLEACTIVESEGMENT This method sets the selected segments for the two part simultaneously (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            SegNum1 = obj.checkScalarInt32Arg(SegNum1,'SegNum1');
            SegNum2 = obj.checkScalarInt32Arg(SegNum2,'SegNum2');
            try
                obj.interface.SetCoupleActiveSegment(int32(SegNum1),int32(SegNum2));
            catch e
                obj.interpretError(e);
            end
        end

        function SetActiveSegment(obj,Channel,SegNum)
            %SETACTIVESEGMENT Sets active segment for selected Channel.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            SegNum = obj.checkScalarInt32Arg(SegNum,'SegNum');
            try
                obj.interface.SetActiveSegment(char(Channel),int32(SegNum));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureArbWaveTraceMode(obj,TraceMode)
            %CONFIGUREARBWAVETRACEMODE Use this method to configure the trace mode (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            try
                obj.interface.ConfigureArbWaveTraceMode(int32(TraceMode));
            catch e
                obj.interpretError(e);
            end
        end

        function val = LoadBinaryArbWfmFromFile(obj,Channel,FileName)
            %LOADBINARYARBWFMFROMFILE This method load from binary file and create an arbitrary waveform.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                [val] = obj.interface.LoadBinaryArbWfmFromFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function [returnHandle1,returnHandle2] = LoadBinaryArbWfmFromFileAdv(obj,Channel,FileName1,FileName2)
            %LOADBINARYARBWFMFROMFILEADV This method creates two binary arbitrary waveforms from specified files and download them in to the memory when trace mode is Combine (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName1 = obj.checkScalarStringArg(FileName1,'FileName1');
            FileName2 = obj.checkScalarStringArg(FileName2,'FileName2');
            try
                [returnHandle1,returnHandle2] = obj.interface.LoadBinaryArbWfmFromFileAdv(char(Channel),char(FileName1),char(FileName2),int32(0),int32(0));
            catch e
                obj.interpretError(e);
            end
        end

        function val = LoadAsciiArbWfmFromFile(obj,Channel,FileName)
            %LOADASCIIARBWFMFROMFILE This method load ascii waveform from file and create an arbitrary waveform.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                [val] = obj.interface.LoadAsciiArbWfmFromFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function [returnHandle1,returnHandle2] = LoadAsciiArbWfmFromFileAdv(obj,Channel,FileName1,FileName2)
            %LOADASCIIARBWFMFROMFILEADV This method creates two arbitrary waveforms from specified ascii files and download them in to the memory when trace mode is Combine (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName1 = obj.checkScalarStringArg(FileName1,'FileName1');
            FileName2 = obj.checkScalarStringArg(FileName2,'FileName2');
            try
                [returnHandle1,returnHandle2] = obj.interface.LoadAsciiArbWfmFromFileAdv(char(Channel),char(FileName1),char(FileName2),int32(0),int32(0));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDownloadRecord(obj,DownloadRecord)
            %CONFIGUREDOWNLOADRECORD Enable or Disable record all downloaded waves on internal flash (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            try
                obj.interface.ConfigureDownloadRecord(int32(DownloadRecord));
            catch e
                obj.interpretError(e);
            end
        end

        function val = LoadCSVFile(obj,Channel,FileName)
            %LOADCSVFILE This method load csv waveform from file and create an arbitrary waveform.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                [val] = obj.interface.LoadCSVFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function [returnHandle1,returnHandle2] = LoadCSVFileAdv(obj,Channel,FileName1,FileName2)
            %LOADCSVFILEADV This method creates two arbitrary waveforms from specified ascii files and download them in to the memory when trace mode is Combine (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName1 = obj.checkScalarStringArg(FileName1,'FileName1');
            FileName2 = obj.checkScalarStringArg(FileName2,'FileName2');
            try
                [returnHandle1,returnHandle2] = obj.interface.LoadCSVFileAdv(char(Channel),char(FileName1),char(FileName2),int32(0),int32(0));
            catch e
                obj.interpretError(e);
            end
        end

    end

end
