classdef FSK < instrument.ivicom.Interface
    %FSK IWX218xFSK interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = FSK(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function CreateFSKData(obj,Channel,Data)
            %CREATEFSKDATA This method loads FSK data array in to the instrument (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateFSKData(char(Channel),uint8(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function LoadFSKDataFile(obj,Channel,FileName)
            %LOADFSKDATAFILE This method loads the data from the specified FSK data file (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                obj.interface.LoadFSKDataFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function CreateFSKDataAdv(obj,Channel,Data)
            %CREATEFSKDATAADV This method loads FSK data array in to the instrument (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Data = obj.checkVectorInt32Arg(Data,'Data');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateFSKDataAdv(char(Channel),int32(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function ConfigureFSKBaud(obj,Channel,Baud)
            %CONFIGUREFSKBAUD Sets Baud for FSK modulation (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Baud = obj.checkScalarDoubleArg(Baud,'Baud');
            try
                obj.interface.ConfigureFSKBaud(char(Channel),double(Baud));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureFSKEnabled(obj,Channel,Enabled)
            %CONFIGUREFSKENABLED This method configures whether the function generator applies FSK modulation to a channel (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Enabled = obj.checkScalarBoolArg(Enabled,'Enabled');
            try
                obj.interface.ConfigureFSKEnabled(char(Channel),logical(Enabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureFSKMarker(obj,Channel,Marker)
            %CONFIGUREFSKMARKER Sets marker for FSK modulation (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Marker = obj.checkScalarInt32Arg(Marker,'Marker');
            try
                obj.interface.ConfigureFSKMarker(char(Channel),int32(Marker));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureFSKShiftFreq(obj,Channel,ShiftFreq)
            %CONFIGUREFSKSHIFTFREQ Sets Shift Frequency for FSK modulation (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            ShiftFreq = obj.checkScalarDoubleArg(ShiftFreq,'ShiftFreq');
            try
                obj.interface.ConfigureFSKShiftFreq(char(Channel),double(ShiftFreq));
            catch e
                obj.interpretError(e);
            end
        end

        function val = ShiftFreq(obj,Channel,newValue)
            %SHIFTFREQ Sets Shift Frequency for FSK modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.ShiftFreq(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'ShiftFreq');
                    obj.interface.ShiftFreq(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Baud(obj,Channel,newValue)
            %BAUD Sets Baud for FSK modulation.
            
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
            %MARKER Sets marker for FSK modulation.
            
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
            %ENABLED This property configures whether the function generator applies FSK modulation to a channel.
            
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
