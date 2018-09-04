classdef Output < instrument.ivicom.Interface
    %OUTPUT No documentation available.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Output(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);

            %% Initialize properties
            try
                obj.Sync = instrument.driver.WX218x.DeviceSpecific.Output.Sync(obj.interface.Sync);
            catch %#ok<CTCH>
            end

        end
        
        function delete(obj)
            obj.Sync = [];
        end

    end
    
    %% Public Properties
    properties

        %OUTPUTMODE Use this property to set or query the type of waveform that will be available at the output connector.
        OutputMode

        %REFERENCECLOCKSOURCE Use this property to set or query the source of the 10 MHz reference.
        ReferenceClockSource

    end

    %% Public Read Only Properties
    properties (SetAccess = private)

        %COUNT Returns the number of Channels. Read Only.
        Count

        %SYNC Pointer to the IWX218xChannelSync interface. Read Only.
        Sync

    end

    %% Property access methods
    methods

        %% Count property access methods
        function value = get.Count(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Count;
            catch e
                obj.interpretError(e);
            end
        end

        %% OutputMode property access methods
        function value = get.OutputMode(obj)
            obj.checkValidObj();
            try
                value = obj.interface.OutputMode;
            catch e
                obj.interpretError(e);
            end
        end
		function set.OutputMode(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.OutputMode = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% ReferenceClockSource property access methods
        function value = get.ReferenceClockSource(obj)
            obj.checkValidObj();
            try
                value = obj.interface.ReferenceClockSource;
            catch e
                obj.interpretError(e);
            end
        end
		function set.ReferenceClockSource(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.ReferenceClockSource = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% Sync property access methods
        function value = get.Sync(obj)
            obj.checkValidObj();
            if isempty(obj.Sync)
                try
                    obj.Sync = instrument.driver.WX218x.DeviceSpecific.Output.Sync(obj.interface.Sync);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Sync;
        end

    end

    %% Public Methods
    methods

        function ConfigureRefExtFrequency(obj,Channel,ExtFreq)
            %CONFIGUREREFEXTFREQUENCY Use this method to set the frequency range that will be applied to the reference oscillator input.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            ExtFreq = obj.checkScalarDoubleArg(ExtFreq,'ExtFreq');
            try
                obj.interface.ConfigureRefExtFrequency(char(Channel),double(ExtFreq));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureExtFrequency(obj,Channel,ExtFrequency)
            %CONFIGUREEXTFREQUENCY Use this method to set the external frequency (for 4 Ch. models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureExtFrequency(char(Channel),int32(ExtFrequency));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureOutputStateAllCh(obj,State)
            %CONFIGUREOUTPUTSTATEALLCH Sets the output on and off for all channels (for 4 Ch. models).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            State = obj.checkScalarBoolArg(State,'State');
            try
                obj.interface.ConfigureOutputStateAllCh(logical(State));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureCoupleAllCh(obj,Couple)
            %CONFIGURECOUPLEALLCH Use this method to set the type of the output amplifier that will be placed between the DAC and the output connectors for all channels (for 4 Ch. models).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            try
                obj.interface.ConfigureCoupleAllCh(int32(Couple));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Name(obj,Index)
            %NAME Returns channel name for selected index.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                [val] = obj.interface.Name(int32(Index));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Couple(obj,Channel,newValue)
            %COUPLE Use this property to set or query the type of the output amplifier that will be placed between the DAC and the output connectors. The instrument has three separate amplifiers for the output path: DC, AC and HV.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Couple(char(Channel));
                else
                            obj.interface.Couple(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Enabled(obj,Channel,newValue)
            %ENABLED Sets the output on and off.
            
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

        function val = OperationMode(obj,Channel,newValue)
            %OPERATIONMODE This property configures the operation mode of the function generator.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.OperationMode(char(Channel));
                else
                            obj.interface.OperationMode(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = RefExtFrequency(obj,Channel,newValue)
            %REFEXTFREQUENCY Use this property to set or query the frequency range that will be applied to the reference oscillator input.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.RefExtFrequency(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'RefExtFrequency');
                    obj.interface.RefExtFrequency(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = ExtFrequency(obj,Channel,newValue)
            %EXTFREQUENCY Use this property to set or query the external frequency.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.ExtFrequency(char(Channel));
                else
                            obj.interface.ExtFrequency(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
