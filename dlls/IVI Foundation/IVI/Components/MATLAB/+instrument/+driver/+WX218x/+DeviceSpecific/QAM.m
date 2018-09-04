classdef QAM < instrument.ivicom.Interface
    %QAM IWX218xQAM interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = QAM(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function CreateQAMData(obj,Channel,Data)
            %CREATEQAMDATA This method loads QAM data array in to the instrument (not for WX218x models, only for 2 Ch,4Ch models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateQAMData(char(Channel),uint8(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function CreateQAMUserData(obj,Channel,DataI,DataQ)
            %CREATEQAMUSERDATA This method loads the pre-assigned symbols for USER QAM modulation type (not for WX218x models, only for 2 Ch,4Ch models).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            DataI = obj.checkVectorDoubleArg(DataI,'DataI');
            DataQ = obj.checkVectorDoubleArg(DataQ,'DataQ');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateQAMUserData(char(Channel),double(DataI),double(DataQ));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function LoadQAMDataFile(obj,Channel,FileName)
            %LOADQAMDATAFILE This method loads the data from the specified QAM data file (not for WX218x models, only for 2 Ch,4Ch models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                obj.interface.LoadQAMDataFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function LoadQAMUserDataFile(obj,Channel,FileName)
            %LOADQAMUSERDATAFILE This method loads the data from the specified QAM User data file (not for WX218x models, only for 2 Ch,4Ch models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                obj.interface.LoadQAMUserDataFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function CreateQAMDataAdv(obj,Channel,Data)
            %CREATEQAMDATAADV This method loads QAM data array in to the instrument (not for WX218x models, only for 2 Ch,4Ch models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Data = obj.checkVectorInt32Arg(Data,'Data');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateQAMDataAdv(char(Channel),int32(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function ConfigureQAMBaud(obj,Channel,Baud)
            %CONFIGUREQAMBAUD Programs the baud of which the symbols stream in the (n)QAM data table (not for WX218x models, only for 2 Ch,4Ch models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Baud = obj.checkScalarDoubleArg(Baud,'Baud');
            try
                obj.interface.ConfigureQAMBaud(char(Channel),double(Baud));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureQAMCarrierState(obj,Channel,State)
            %CONFIGUREQAMCARRIERSTATE Sets the carrier output on and off (not for WX218x models, only for 2 Ch,4Ch models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            State = obj.checkScalarBoolArg(State,'State');
            try
                obj.interface.ConfigureQAMCarrierState(char(Channel),logical(State));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureQAMState(obj,Channel,State)
            %CONFIGUREQAMSTATE This method configures whether the function generator applies QAM modulation to a channel (not for WX218x models, only for 2 Ch,4Ch models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            State = obj.checkScalarBoolArg(State,'State');
            try
                obj.interface.ConfigureQAMState(char(Channel),logical(State));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureQAMMarker(obj,Channel,Marker)
            %CONFIGUREQAMMARKER Programs where on the data stream the instrument will generate a pulse, designated as QAM marker, or index point (not for WX218x models, only for 2 Ch,4Ch models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Marker = obj.checkScalarInt32Arg(Marker,'Marker');
            try
                obj.interface.ConfigureQAMMarker(char(Channel),int32(Marker));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureQAMType(obj,Channel,Type)
            %CONFIGUREQAMTYPE Selects between the various (n)QAM modulation schemes (not for WX218x models, only for 2 Ch,4Ch models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureQAMType(char(Channel),int32(Type));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Baud(obj,Channel,newValue)
            %BAUD Programs the baud of which the symbols stream in the (n)QAM data table.
            
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

        function val = Type(obj,Channel,newValue)
            %TYPE Selects between the various (n)QAM modulation schemes.
            
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
            %MARKER Programs where on the data stream the instrument will generate a pulse, designated as QAM marker, or index point.
            
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
            %ENABLED This property configures whether the function generator applies QAM modulation to a channel.
            
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
