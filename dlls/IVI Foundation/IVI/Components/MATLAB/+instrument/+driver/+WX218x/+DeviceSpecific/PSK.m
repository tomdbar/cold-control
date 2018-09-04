classdef PSK < instrument.ivicom.Interface
    %PSK IWX218xPSK interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = PSK(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function CreatePSKData(obj,Channel,Data)
            %CREATEPSKDATA This method loads PSK data array in to the instrument (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreatePSKData(char(Channel),uint8(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function CreatePSKUserData(obj,Channel,Data)
            %CREATEPSKUSERDATA This method loads PSK user data array in to the instrument (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Data = obj.checkVectorDoubleArg(Data,'Data');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreatePSKUserData(char(Channel),double(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function LoadPSKDataFile(obj,Channel,FileName)
            %LOADPSKDATAFILE This method loads the data from the specified PSK data file (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                obj.interface.LoadPSKDataFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function LoadPSKUserDataFile(obj,Channel,FileName)
            %LOADPSKUSERDATAFILE This method loads the data from the specified PSK User data file (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                obj.interface.LoadPSKUserDataFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function CreatePSKDataAdv(obj,Channel,Data)
            %CREATEPSKDATAADV This method loads PSK data array in to the instrument (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Data = obj.checkVectorInt32Arg(Data,'Data');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreatePSKDataAdv(char(Channel),int32(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function ConfigurePSKBaud(obj,Channel,Baud)
            %CONFIGUREPSKBAUD Programs the baud of which the symbols stream in the (n)PSK data table (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Baud = obj.checkScalarDoubleArg(Baud,'Baud');
            try
                obj.interface.ConfigurePSKBaud(char(Channel),double(Baud));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePSKCarrierState(obj,Channel,State)
            %CONFIGUREPSKCARRIERSTATE Sets the carrier output on and off (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            State = obj.checkScalarBoolArg(State,'State');
            try
                obj.interface.ConfigurePSKCarrierState(char(Channel),logical(State));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePSKState(obj,Channel,State)
            %CONFIGUREPSKSTATE This method configures whether the function generator applies PSK modulation to a channel (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            State = obj.checkScalarBoolArg(State,'State');
            try
                obj.interface.ConfigurePSKState(char(Channel),logical(State));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePSKMarker(obj,Channel,Marker)
            %CONFIGUREPSKMARKER Programs where on the data stream the instrument will generate a pulse, designated as PSK marker, or index point (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Marker = obj.checkScalarInt32Arg(Marker,'Marker');
            try
                obj.interface.ConfigurePSKMarker(char(Channel),int32(Marker));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePSKRate(obj,Channel,Rate)
            %CONFIGUREPSKRATE Sets Rate for PSK modulation (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Rate = obj.checkScalarDoubleArg(Rate,'Rate');
            try
                obj.interface.ConfigurePSKRate(char(Channel),double(Rate));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePSKShiftPhase(obj,Channel,ShiftPhase)
            %CONFIGUREPSKSHIFTPHASE Sets Shift Phase for PSK modulation (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            ShiftPhase = obj.checkScalarDoubleArg(ShiftPhase,'ShiftPhase');
            try
                obj.interface.ConfigurePSKShiftPhase(char(Channel),double(ShiftPhase));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePSKStartPhase(obj,Channel,StartPhase)
            %CONFIGUREPSKSTARTPHASE Sets Start Phase for PSK modulation (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            StartPhase = obj.checkScalarDoubleArg(StartPhase,'StartPhase');
            try
                obj.interface.ConfigurePSKStartPhase(char(Channel),double(StartPhase));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePSKType(obj,Channel,Type)
            %CONFIGUREPSKTYPE Selects type for PSK modulation (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigurePSKType(char(Channel),int32(Type));
            catch e
                obj.interpretError(e);
            end
        end

        function val = StartPhase(obj,Channel,newValue)
            %STARTPHASE Sets Start Phase for PSK modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.StartPhase(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'StartPhase');
                    obj.interface.StartPhase(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = ShiftPhase(obj,Channel,newValue)
            %SHIFTPHASE Sets Shift Phase for PSK modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.ShiftPhase(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'ShiftPhase');
                    obj.interface.ShiftPhase(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Rate(obj,Channel,newValue)
            %RATE Sets Rate for PSK modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Rate(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Rate');
                    obj.interface.Rate(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Type(obj,Channel,newValue)
            %TYPE Selects type for PSK modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Type(char(Channel));
                else
                            obj.interface.Type(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Marker(obj,Channel,newValue)
            %MARKER Programs where on the data stream the instrument will generate a pulse, designated as PSK marker, or index point.
            
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

        function val = Baud(obj,Channel,newValue)
            %BAUD Programs the baud of which the symbols stream in the (n)PSK data table.
            
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

        function val = CarrierEnabled(obj,Channel,newValue)
            %CARRIERENABLED Sets the carrier output on and off.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.CarrierEnabled(char(Channel));
                else
                    newValue = obj.checkScalarBoolArg(newValue,'CarrierEnabled');
                    obj.interface.CarrierEnabled(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Enabled(obj,Channel,newValue)
            %ENABLED This property configures whether the function generator applies PSK modulation to a channel.
            
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
