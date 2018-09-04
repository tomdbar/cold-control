classdef ASK < instrument.ivicom.Interface
    %ASK IWX218xASK interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = ASK(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function CreateASKData(obj,Channel,Data)
            %CREATEASKDATA This method loads ASK data array in to the instrument (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateASKData(char(Channel),uint8(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function LoadASKDataFile(obj,Channel,FileName)
            %LOADASKDATAFILE This method loads the data from the specified ASK data file (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                obj.interface.LoadASKDataFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function CreateASKDataAdv(obj,Channel,Data)
            %CREATEASKDATAADV This method loads ASK data array in to the instrument (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Data = obj.checkVectorInt32Arg(Data,'Data');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateASKDataAdv(char(Channel),int32(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function ConfigureASKBaud(obj,Channel,Baud)
            %CONFIGUREASKBAUD Sets baud for ASK modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Baud = obj.checkScalarDoubleArg(Baud,'Baud');
            try
                obj.interface.ConfigureASKBaud(char(Channel),double(Baud));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureASKEnabled(obj,Channel,Enabled)
            %CONFIGUREASKENABLED This method configures whether the function generator applies ASK modulation to a channel (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Enabled = obj.checkScalarBoolArg(Enabled,'Enabled');
            try
                obj.interface.ConfigureASKEnabled(char(Channel),logical(Enabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureASKMarker(obj,Channel,Marker)
            %CONFIGUREASKMARKER Sets marker for ASK modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Marker = obj.checkScalarInt32Arg(Marker,'Marker');
            try
                obj.interface.ConfigureASKMarker(char(Channel),int32(Marker));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureASKShiftAmplitude(obj,Channel,ShiftAmpl)
            %CONFIGUREASKSHIFTAMPLITUDE Sets shift amplitude for ASK modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            ShiftAmpl = obj.checkScalarDoubleArg(ShiftAmpl,'ShiftAmpl');
            try
                obj.interface.ConfigureASKShiftAmplitude(char(Channel),double(ShiftAmpl));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureASKStartAmplitude(obj,Channel,StartAmpl)
            %CONFIGUREASKSTARTAMPLITUDE Sets start amplitude for ASK modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            StartAmpl = obj.checkScalarDoubleArg(StartAmpl,'StartAmpl');
            try
                obj.interface.ConfigureASKStartAmplitude(char(Channel),double(StartAmpl));
            catch e
                obj.interpretError(e);
            end
        end

        function val = StartAmplitude(obj,Channel,newValue)
            %STARTAMPLITUDE Sets start amplitude for ASK modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.StartAmplitude(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'StartAmplitude');
                    obj.interface.StartAmplitude(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = ShiftAmplitude(obj,Channel,newValue)
            %SHIFTAMPLITUDE Sets shift amplitude for ASK modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.ShiftAmplitude(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'ShiftAmplitude');
                    obj.interface.ShiftAmplitude(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Baud(obj,Channel,newValue)
            %BAUD Sets baud for ASK modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Baud(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Baud');
                    obj.interface.Baud(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Marker(obj,Channel,newValue)
            %MARKER Sets marker for ASK modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Marker(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'Marker');
                    obj.interface.Marker(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Enabled(obj,Channel,newValue)
            %ENABLED This property configures whether the function generator applies ASK modulation to a channel.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Enabled(char(Channel));
                else
                    newValue = obj.checkScalarBoolArg(newValue,'Enabled');
                    obj.interface.Enabled(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
