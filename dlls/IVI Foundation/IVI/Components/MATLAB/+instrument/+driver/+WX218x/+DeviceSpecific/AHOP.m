classdef AHOP < instrument.ivicom.Interface
    %AHOP IWX218xAHOP interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = AHOP(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function CreateAHOPFixedData(obj,Channel,Data)
            %CREATEAHOPFIXEDDATA This method loads the data from the specified AHOP Fixed data array(not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Data = obj.checkVectorDoubleArg(Data,'Data');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateAHOPFixedData(char(Channel),double(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function CreateAHOPVariableData(obj,Channel,AmplData,DwellTimeData)
            %CREATEAHOPVARIABLEDATA This method loads the data from the specified Amplitude data array and Dwell time data array(not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            AmplData = obj.checkVectorDoubleArg(AmplData,'AmplData');
            DwellTimeData = obj.checkVectorDoubleArg(DwellTimeData,'DwellTimeData');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateAHOPVariableData(char(Channel),double(AmplData),double(DwellTimeData));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function LoadAHOPFixDataFile(obj,Channel,FileName)
            %LOADAHOPFIXDATAFILE This method loads the data from the specified AHOP fixed data file.Minimum file length:2,maximum file length:10000(not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                obj.interface.LoadAHOPFixDataFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function LoadAHOPVarDataFile(obj,Channel,FileName)
            %LOADAHOPVARDATAFILE This method loads the data from the specified AHOP fixed data file.Minimum file length:2*2,maximum file length:10000*2(not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                obj.interface.LoadAHOPVarDataFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureAHOPDwellMode(obj,Channel,DwellMode)
            %CONFIGUREAHOPDWELLMODE This method configures Dwell mode for AHOP modulation(not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureAHOPDwellMode(char(Channel),int32(DwellMode));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureAHOPEnabled(obj,Channel,Enabled)
            %CONFIGUREAHOPENABLED This method configures whether the function generator applies AHOP modulation to a channel(not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Enabled = obj.checkScalarBoolArg(Enabled,'Enabled');
            try
                obj.interface.ConfigureAHOPEnabled(char(Channel),logical(Enabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureAHOPMarker(obj,Channel,Marker)
            %CONFIGUREAHOPMARKER Sets marker for AHOP modulation(not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Marker = obj.checkScalarInt32Arg(Marker,'Marker');
            try
                obj.interface.ConfigureAHOPMarker(char(Channel),int32(Marker));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureAHOPTime(obj,Channel,Time)
            %CONFIGUREAHOPTIME Sets Time for AHOP modulation(not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Time = obj.checkScalarDoubleArg(Time,'Time');
            try
                obj.interface.ConfigureAHOPTime(char(Channel),double(Time));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Time(obj,Channel,newValue)
            %TIME Sets Time for AHOP modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Time(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Time');
                    obj.interface.Time(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Marker(obj,Channel,newValue)
            %MARKER Sets marker for AHOP modulation.
            
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

        function val = DwellMode(obj,Channel,newValue)
            %DWELLMODE This parameter selects one of the Dwell mode variables for AHOP modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.DwellMode(char(Channel));
                else
                            obj.interface.DwellMode(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Enabled(obj,Channel,newValue)
            %ENABLED This property configures whether the function generator applies AHOP modulation to a channel.
            
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
