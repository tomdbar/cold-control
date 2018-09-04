classdef Pattern < instrument.ivicom.Interface
    %PATTERN IWX218xPattern interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Pattern(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);

            %% Initialize properties
            try
                obj.Composer = instrument.driver.WX218x.DeviceSpecific.Pattern.Composer(obj.interface.Composer);
            catch %#ok<CTCH>
            end

        end
        
        function delete(obj)
            obj.Composer = [];
        end

    end
    
    %% Public Read Only Properties
    properties (SetAccess = private)

        %COMPOSER Pointer to the IWX218xPatternComposer interface. Read Only.
        Composer

    end

    %% Property access methods
    methods

        %% Composer property access methods
        function value = get.Composer(obj)
            obj.checkValidObj();
            if isempty(obj.Composer)
                try
                    obj.Composer = instrument.driver.WX218x.DeviceSpecific.Pattern.Composer(obj.interface.Composer);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Composer;
        end

    end

    %% Public Methods
    methods

        function CreatePatternData(obj,Channel,Data)
            %CREATEPATTERNDATA This method loads pattern data in to the instrument (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreatePatternData(char(Channel),uint8(Data));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function ConfigurePatternBaud(obj,Channel,Baud)
            %CONFIGUREPATTERNBAUD Sets baud for predefined pattern mode (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Baud = obj.checkScalarDoubleArg(Baud,'Baud');
            try
                obj.interface.ConfigurePatternBaud(char(Channel),double(Baud));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternHighLevel(obj,Channel,HighLevel)
            %CONFIGUREPATTERNHIGHLEVEL Sets High Level for predefined pattern mode (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            HighLevel = obj.checkScalarDoubleArg(HighLevel,'HighLevel');
            try
                obj.interface.ConfigurePatternHighLevel(char(Channel),double(HighLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternLength(obj,Channel,Length)
            %CONFIGUREPATTERNLENGTH Sets length for predefined pattern mode (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Length = obj.checkScalarInt32Arg(Length,'Length');
            try
                obj.interface.ConfigurePatternLength(char(Channel),int32(Length));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternLevel(obj,Channel,Level)
            %CONFIGUREPATTERNLEVEL Sets level for predefined pattern mode (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Level = obj.checkScalarInt32Arg(Level,'Level');
            try
                obj.interface.ConfigurePatternLevel(char(Channel),int32(Level));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternLoop(obj,Channel,Loop)
            %CONFIGUREPATTERNLOOP Sets number of loop for predefined pattern mode (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Loop = obj.checkScalarInt32Arg(Loop,'Loop');
            try
                obj.interface.ConfigurePatternLoop(char(Channel),int32(Loop));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternLowLevel(obj,Channel,LowLevel)
            %CONFIGUREPATTERNLOWLEVEL Sets Low Level for predefined pattern mode (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            LowLevel = obj.checkScalarDoubleArg(LowLevel,'LowLevel');
            try
                obj.interface.ConfigurePatternLowLevel(char(Channel),double(LowLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternMode(obj,Channel,Mode)
            %CONFIGUREPATTERNMODE Selects one of the two pattern modes:Composer or Predefined (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigurePatternMode(char(Channel),int32(Mode));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternPreamble(obj,Channel,Preamble)
            %CONFIGUREPATTERNPREAMBLE Sets preamble for predefined pattern mode (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Preamble = obj.checkScalarInt32Arg(Preamble,'Preamble');
            try
                obj.interface.ConfigurePatternPreamble(char(Channel),int32(Preamble));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternPredType(obj,Channel,Type)
            %CONFIGUREPATTERNPREDTYPE Selects type for predefined pattern mode (not for WX218x models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigurePatternPredType(char(Channel),int32(Type));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Baud(obj,Channel,newValue)
            %BAUD Sets baud for predefined pattern mode.
            
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

        function val = Level(obj,Channel,newValue)
            %LEVEL Sets level for predefined pattern mode.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Level(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'Level');
                    obj.interface.Level(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Mode(obj,Channel,newValue)
            %MODE Selects one of the two pattern modes:Composer or Predefined.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Mode(char(Channel));
                else
                            obj.interface.Mode(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = PredefinedType(obj,Channel,newValue)
            %PREDEFINEDTYPE Selects type for predefined pattern mode.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.PredefinedType(char(Channel));
                else
                            obj.interface.PredefinedType(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = HighLevel(obj,Channel,newValue)
            %HIGHLEVEL Sets High Level for predefined pattern mode.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.HighLevel(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'HighLevel');
                    obj.interface.HighLevel(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = LowLevel(obj,Channel,newValue)
            %LOWLEVEL Sets Low Level for predefined pattern mode.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.LowLevel(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'LowLevel');
                    obj.interface.LowLevel(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Loop(obj,Channel,newValue)
            %LOOP Sets number of loop for predefined pattern mode.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Loop(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'Loop');
                    obj.interface.Loop(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Preamble(obj,Channel,newValue)
            %PREAMBLE Sets preamble for predefined pattern mode.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Preamble(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'Preamble');
                    obj.interface.Preamble(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Length(obj,Channel,newValue)
            %LENGTH Sets length for predefined pattern mode.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Length(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'Length');
                    obj.interface.Length(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
