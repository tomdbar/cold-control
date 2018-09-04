classdef DigitalPatternOutput < instrument.ivicom.Interface
    %DIGITALPATTERNOUTPUT IWX218xDigitalPatternOutput interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = DigitalPatternOutput(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Properties
    properties

        %DIGCLOCK This property programs clock for digital pattern output.
        DigClock

        %DIGPORT This property programs digital port for digital pattern output.
        DigPort

    end

    %% Property access methods
    methods

        %% DigClock property access methods
        function value = get.DigClock(obj)
            obj.checkValidObj();
            try
                value = obj.interface.DigClock;
            catch e
                obj.interpretError(e);
            end
        end
		function set.DigClock(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.DigClock = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% DigPort property access methods
        function value = get.DigPort(obj)
            obj.checkValidObj();
            try
                value = obj.interface.DigPort;
            catch e
                obj.interpretError(e);
            end
        end
		function set.DigPort(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.DigPort = newValue;
            catch e
                obj.interpretError(e);
            end
        end

    end

    %% Public Methods
    methods

        function CreateDigPatternData(obj,Channel,Data,Segment)
            %CREATEDIGPATTERNDATA This method creates an digital pattern waveform from array of Data values (for WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Data = obj.checkVectorDoubleArg(Data,'Data');
            Segment = obj.checkScalarInt32Arg(Segment,'Segment');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateDigPatternData(char(Channel),double(Data),int32(Segment));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function LoadDigitalPatternFromFile(obj,Channel,FileName,Segment)
            %LOADDIGITALPATTERNFROMFILE This method loads from file and create digital pattern waveform (for WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            Segment = obj.checkScalarInt32Arg(Segment,'Segment');
            try
                obj.interface.LoadDigitalPatternFromFile(char(Channel),char(FileName),int32(Segment));
            catch e
                obj.interpretError(e);
            end
        end

        function CreateDigPatternParamData(obj,Channel,State,Delay,HighLevel,LowLevel)
            %CREATEDIGPATTERNPARAMDATA This method loads digital pattern parameters data in to the instrument (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(6,6,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Delay = obj.checkVectorDoubleArg(Delay,'Delay');
            HighLevel = obj.checkVectorDoubleArg(HighLevel,'HighLevel');
            LowLevel = obj.checkVectorDoubleArg(LowLevel,'LowLevel');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateDigPatternParamData(char(Channel),uint8(State),double(Delay),double(HighLevel),double(LowLevel));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function CreateDigPatternParamData1(obj,Channel,State,Delay,HighLevel,LowLevel)
            %CREATEDIGPATTERNPARAMDATA1 This method loads digital pattern parameters data in to the instrument (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(6,6,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            State = obj.checkVectorInt32Arg(State,'State');
            Delay = obj.checkVectorDoubleArg(Delay,'Delay');
            HighLevel = obj.checkVectorDoubleArg(HighLevel,'HighLevel');
            LowLevel = obj.checkVectorDoubleArg(LowLevel,'LowLevel');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateDigPatternParamData1(char(Channel),int32(State),double(Delay),double(HighLevel),double(LowLevel));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function ConfigureDigPattArbResolution(obj,Channel,ArbResolution)
            %CONFIGUREDIGPATTARBRESOLUTION This method duplicates or not duplicates any arbitrary wave for sync between Arb and Dig frequency (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureDigPattArbResolution(char(Channel),int32(ArbResolution));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattBitDelay(obj,Channel,BitIndex,BitDelay)
            %CONFIGUREDIGPATTBITDELAY This method programs the digital pattern delay for specified bit index (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            BitIndex = obj.checkScalarInt32Arg(BitIndex,'BitIndex');
            BitDelay = obj.checkScalarDoubleArg(BitDelay,'BitDelay');
            try
                obj.interface.ConfigureDigPattBitDelay(char(Channel),int32(BitIndex),double(BitDelay));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattBitEnabled(obj,Channel,BitIndex,BitEnabled)
            %CONFIGUREDIGPATTBITENABLED This merhod sets the digital pattern output on or off for specified bit index (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            BitIndex = obj.checkScalarInt32Arg(BitIndex,'BitIndex');
            BitEnabled = obj.checkScalarBoolArg(BitEnabled,'BitEnabled');
            try
                obj.interface.ConfigureDigPattBitEnabled(char(Channel),int32(BitIndex),logical(BitEnabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattBitHighLevel(obj,Channel,BitIndex,BitHighLevel)
            %CONFIGUREDIGPATTBITHIGHLEVEL This method programs the digital pattern high level for specified bit index (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            BitIndex = obj.checkScalarInt32Arg(BitIndex,'BitIndex');
            BitHighLevel = obj.checkScalarDoubleArg(BitHighLevel,'BitHighLevel');
            try
                obj.interface.ConfigureDigPattBitHighLevel(char(Channel),int32(BitIndex),double(BitHighLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattBitLowLevel(obj,Channel,BitIndex,BitLowLevel)
            %CONFIGUREDIGPATTBITLOWLEVEL This method programs the digital pattern low level for specified bit index (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            BitIndex = obj.checkScalarInt32Arg(BitIndex,'BitIndex');
            BitLowLevel = obj.checkScalarDoubleArg(BitLowLevel,'BitLowLevel');
            try
                obj.interface.ConfigureDigPattBitLowLevel(char(Channel),int32(BitIndex),double(BitLowLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattDelay(obj,Channel,Delay)
            %CONFIGUREDIGPATTDELAY This method programs the digital pattern delay (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Delay = obj.checkScalarDoubleArg(Delay,'Delay');
            try
                obj.interface.ConfigureDigPattDelay(char(Channel),double(Delay));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattDelayMode(obj,Channel,DelayMode)
            %CONFIGUREDIGPATTDELAYMODE This method programs delay mode for digital pattern output (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureDigPattDelayMode(char(Channel),int32(DelayMode));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattEmphasisEnabled(obj,Channel,EmphasisEnabled)
            %CONFIGUREDIGPATTEMPHASISENABLED This method toggles emphasis on/off (for WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            EmphasisEnabled = obj.checkScalarBoolArg(EmphasisEnabled,'EmphasisEnabled');
            try
                obj.interface.ConfigureDigPattEmphasisEnabled(char(Channel),logical(EmphasisEnabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattEnabled(obj,Channel,Enabled)
            %CONFIGUREDIGPATTENABLED This method sets the digital pattern output on or off (for 4Ch. models, WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Enabled = obj.checkScalarBoolArg(Enabled,'Enabled');
            try
                obj.interface.ConfigureDigPattEnabled(char(Channel),logical(Enabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattFormatData(obj,Channel,FormatData)
            %CONFIGUREDIGPATTFORMATDATA This method programs how the waveform will be download into the memories (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureDigPattFormatData(char(Channel),int32(FormatData));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattHighLevel(obj,Channel,HighLevel)
            %CONFIGUREDIGPATTHIGHLEVEL This method programs the digital pattern high level (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            HighLevel = obj.checkScalarDoubleArg(HighLevel,'HighLevel');
            try
                obj.interface.ConfigureDigPattHighLevel(char(Channel),double(HighLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattLevelMode(obj,Channel,LevelMode)
            %CONFIGUREDIGPATTLEVELMODE This method programs level mode for digital pattern output (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureDigPattLevelMode(char(Channel),int32(LevelMode));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattLowLevel(obj,Channel,LowLevel)
            %CONFIGUREDIGPATTLOWLEVEL This method programs the digital pattern low level (for 4Ch. models,WX218xB-D,WX128xB-D,WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            LowLevel = obj.checkScalarDoubleArg(LowLevel,'LowLevel');
            try
                obj.interface.ConfigureDigPattLowLevel(char(Channel),double(LowLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function LoadDigitalDataBinaryFile(obj,FileName,Segment)
            %LOADDIGITALDATABINARYFILE Load Binary Digital Data from file to the instrument.Every point is 4 byte or 2 byte (for 4Ch. models, WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            Segment = obj.checkScalarInt32Arg(Segment,'Segment');
            try
                obj.interface.LoadDigitalDataBinaryFile(char(FileName),int32(Segment));
            catch e
                obj.interpretError(e);
            end
        end

        function LoadDigitalDataAsciiFile(obj,FileName,Segment)
            %LOADDIGITALDATAASCIIFILE Load Ascii Digital Data from file to the instrument.Every point is of type unsigned int in format hexa (for 4Ch. models, WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            Segment = obj.checkScalarInt32Arg(Segment,'Segment');
            try
                obj.interface.LoadDigitalDataAsciiFile(char(FileName),int32(Segment));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigClock(obj,DigClock)
            %CONFIGUREDIGCLOCK This method programs clock for digital pattern output (for 4Ch. models, WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            try
                obj.interface.ConfigureDigClock(int32(DigClock));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPattDigPort(obj,DigPort)
            %CONFIGUREDIGPATTDIGPORT This method programs digital port for digital pattern output (for 4Ch. models, WX218xC,WX128xC).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            try
                obj.interface.ConfigureDigPattDigPort(int32(DigPort));
            catch e
                obj.interpretError(e);
            end
        end

        function val = BitDelay(obj,Channel,Index,newValue)
            %BITDELAY This property programs the digital pattern delay for specified bit index (not for WS835x,WX218xB,WX128xB,WX218x).
            
            obj.checkValidObj();
			error(nargchk(3,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                if nargin == 3
                    [val] = obj.interface.BitDelay(char(Channel),int32(Index));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'BitDelay');
                    obj.interface.BitDelay(char(Channel),int32(Index),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = BitHighLevel(obj,Channel,Index,newValue)
            %BITHIGHLEVEL This property programs the digital pattern high level for specified bit index (not for WS835x,WX218xB,WX128xB,WX218x).
            
            obj.checkValidObj();
			error(nargchk(3,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                if nargin == 3
                    [val] = obj.interface.BitHighLevel(char(Channel),int32(Index));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'BitHighLevel');
                    obj.interface.BitHighLevel(char(Channel),int32(Index),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = BitLowLevel(obj,Channel,Index,newValue)
            %BITLOWLEVEL This property programs the digital pattern low level for specified bit index (not for WS835x,WX218xB,WX128xB,WX218x).
            
            obj.checkValidObj();
			error(nargchk(3,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                if nargin == 3
                    [val] = obj.interface.BitLowLevel(char(Channel),int32(Index));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'BitLowLevel');
                    obj.interface.BitLowLevel(char(Channel),int32(Index),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = DelayMode(obj,Channel,newValue)
            %DELAYMODE This property programs delay mode for digital pattern output.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.DelayMode(char(Channel));
                else
                            obj.interface.DelayMode(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = LevelMode(obj,Channel,newValue)
            %LEVELMODE This property programs level mode for digital pattern output.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.LevelMode(char(Channel));
                else
                            obj.interface.LevelMode(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = BitEnabled(obj,Channel,Index,newValue)
            %BITENABLED This property sets the digital pattern output on or off for specified bit index (not for WS835x,WX218xB,WX128xB,WX218x).
            
            obj.checkValidObj();
			error(nargchk(3,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                if nargin == 3
                    [val] = obj.interface.BitEnabled(char(Channel),int32(Index));
                else
                    newValue = obj.checkScalarBoolArg(newValue,'BitEnabled');
                    obj.interface.BitEnabled(char(Channel),int32(Index),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Delay(obj,Channel,newValue)
            %DELAY This property programs the digital pattern delay.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Delay(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Delay');
                    obj.interface.Delay(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Enabled(obj,Channel,newValue)
            %ENABLED This property sets the digital pattern output on or off.
            
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

        function val = HighLevel(obj,Channel,newValue)
            %HIGHLEVEL This property programs the digital pattern high level.
            
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
            %LOWLEVEL This property programs the digital pattern low level.
            
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

        function val = PodPresent(obj,Channel)
            %PODPRESENT Checks whether a POD is present at the port.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                [val] = obj.interface.PodPresent(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function val = EmphasisEnabled(obj,Channel,newValue)
            %EMPHASISENABLED This property toggles emphasis on/off.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.EmphasisEnabled(char(Channel));
                else
                    newValue = obj.checkScalarBoolArg(newValue,'EmphasisEnabled');
                    obj.interface.EmphasisEnabled(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = FormatData(obj,Channel,newValue)
            %FORMATDATA This property programs how the waveform will be download into the memories.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.FormatData(char(Channel));
                else
                            obj.interface.FormatData(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = ArbResolution(obj,Channel,newValue)
            %ARBRESOLUTION This property duplicates or not duplicates any arbitrary wave for sync between Arb and Dig frequency.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.ArbResolution(char(Channel));
                else
                            obj.interface.ArbResolution(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
