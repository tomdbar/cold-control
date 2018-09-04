classdef FHOP < instrument.ivicom.Interface
    %FHOP IWX218xFHOP interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = FHOP(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function CreateFHOPFixedData(obj,Channel,Data)
            %CREATEFHOPFIXEDDATA This method loads the data from the specified Freq Hop Fixed data array (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Data = obj.checkVectorDoubleArg(Data,'Data');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateFHOPFixedData(char(Channel),double(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function CreateFHOPVariableData(obj,Channel,FreqData,DwellTimeData)
            %CREATEFHOPVARIABLEDATA This method loads the data from the specified Freq data array and Dwell time data array (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FreqData = obj.checkVectorDoubleArg(FreqData,'FreqData');
            DwellTimeData = obj.checkVectorDoubleArg(DwellTimeData,'DwellTimeData');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateFHOPVariableData(char(Channel),double(FreqData),double(DwellTimeData));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function LoadFHOPFixDataFile(obj,Channel,FileName)
            %LOADFHOPFIXDATAFILE This method loads the data from the specified FHOP fixed data file (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                obj.interface.LoadFHOPFixDataFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function LoadFHOPVarDataFile(obj,Channel,FileName)
            %LOADFHOPVARDATAFILE This method loads the data from the specified FHOP variable data file.Minimum file length:2*2,maximum file length:10000*2 (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                obj.interface.LoadFHOPVarDataFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureFHOPDwellMode(obj,Channel,DwellMode)
            %CONFIGUREFHOPDWELLMODE This method selects one of the Dwell mode variables for FHOP modulation (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureFHOPDwellMode(char(Channel),int32(DwellMode));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureFHOPEnabled(obj,Channel,Enabled)
            %CONFIGUREFHOPENABLED This method configures whether the function generator applies FHOP modulation to a channel (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Enabled = obj.checkScalarBoolArg(Enabled,'Enabled');
            try
                obj.interface.ConfigureFHOPEnabled(char(Channel),logical(Enabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureFHOPMarker(obj,Channel,Marker)
            %CONFIGUREFHOPMARKER Sets marker for FHOP modulation (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Marker = obj.checkScalarInt32Arg(Marker,'Marker');
            try
                obj.interface.ConfigureFHOPMarker(char(Channel),int32(Marker));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureFHOPTime(obj,Channel,Time)
            %CONFIGUREFHOPTIME Sets dwell time for FHOP modulation (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Time = obj.checkScalarDoubleArg(Time,'Time');
            try
                obj.interface.ConfigureFHOPTime(char(Channel),double(Time));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Time(obj,Channel,newValue)
            %TIME Sets dwell time for FHOP modulation.
            
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
            %MARKER Sets marker for FHOP modulation
            
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
            %DWELLMODE This parameter selects one of the Dwell mode variables for FHOP modulation.
            
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
            %ENABLED This property configures whether the function generator applies FHOP modulation to a channel.
            
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
