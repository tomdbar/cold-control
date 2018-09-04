classdef Arbitrary < instrument.ivicom.Interface
    %ARBITRARY IWX218xArbitrary interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Arbitrary(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);

            %% Initialize properties
            try
                obj.Waveform = instrument.driver.WX218x.DeviceSpecific.Arbitrary.Waveform(obj.interface.Waveform);
            catch %#ok<CTCH>
            end

            try
                obj.Sequence = instrument.driver.WX218x.DeviceSpecific.Arbitrary.Sequence(obj.interface.Sequence);
            catch %#ok<CTCH>
            end

        end
        
        function delete(obj)
            obj.Waveform = [];
            obj.Sequence = [];
        end

    end
    
    %% Public Properties
    properties

        %SAMPLERATE Will set the sample clock frequency of the arbitrary and sequenced waveform in units of Sa/s.
        SampleRate

    end

    %% Public Read Only Properties
    properties (SetAccess = private)

        %WAVEFORM Pointer to the IWX218xArbitraryWaveform interface. Read Only.
        Waveform

        %SEQUENCE Pointer to the IWX218xArbitrarySequence interface. Read Only.
        Sequence

    end

    %% Property access methods
    methods

        %% SampleRate property access methods
        function value = get.SampleRate(obj)
            obj.checkValidObj();
            try
                value = obj.interface.SampleRate;
            catch e
                obj.interpretError(e);
            end
        end
		function set.SampleRate(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarDoubleArg(newValue,'SampleRate');
            try
                obj.interface.SampleRate = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% Waveform property access methods
        function value = get.Waveform(obj)
            obj.checkValidObj();
            if isempty(obj.Waveform)
                try
                    obj.Waveform = instrument.driver.WX218x.DeviceSpecific.Arbitrary.Waveform(obj.interface.Waveform);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Waveform;
        end

        %% Sequence property access methods
        function value = get.Sequence(obj)
            obj.checkValidObj();
            if isempty(obj.Sequence)
                try
                    obj.Sequence = instrument.driver.WX218x.DeviceSpecific.Arbitrary.Sequence(obj.interface.Sequence);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Sequence;
        end

    end

    %% Public Methods
    methods

        function ClearMemory(obj)
            %CLEARMEMORY This method will delete all predefined segments and will clear the entire waveform memory space for the active channel.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.ClearMemory();
            catch e
                obj.interpretError(e);
            end
        end

        function SetSampleRateMax(obj)
            %SETSAMPLERATEMAX Use this method to set the maximum sample clock frequency of the arbitrary waveform in units of samples per second (Sa/s).
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.SetSampleRateMax();
            catch e
                obj.interpretError(e);
            end
        end

        function SetSampleRateMin(obj)
            %SETSAMPLERATEMIN Use this method to set the minimum sample clock frequency of the arbitrary waveform in units of samples per second (Sa/s).
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.SetSampleRateMin();
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureClockDivider(obj,Channel,ClockDivider)
            %CONFIGURECLOCKDIVIDER Will set the external sample clock frequency divider (not for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            ClockDivider = obj.checkScalarInt32Arg(ClockDivider,'ClockDivider');
            try
                obj.interface.ConfigureClockDivider(char(Channel),int32(ClockDivider));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSampleRateSource(obj,Channel,SampleRateSource)
            %CONFIGURESAMPLERATESOURCE Selects the internal or external sample clock input.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureSampleRateSource(char(Channel),int32(SampleRateSource));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureArbSource(obj,Channel,Source)
            %CONFIGUREARBSOURCE Configures the source of the segment select command.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureArbSource(char(Channel),int32(Source));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureArbTiming(obj,Channel,Timing)
            %CONFIGUREARBTIMING Use this method to set the timing characteristics of the trace select command.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureArbTiming(char(Channel),int32(Timing));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureFreqRastDivider(obj,Channel,Divider)
            %CONFIGUREFREQRASTDIVIDER Use this method to configure Frequency Raster Divider (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureFreqRastDivider(char(Channel),int32(Divider));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureArbGain(obj,Channel,Gain)
            %CONFIGUREARBGAIN Specifies the factor by which the function generator scales the arbitrary waveforms.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Gain = obj.checkScalarDoubleArg(Gain,'Gain');
            try
                obj.interface.ConfigureArbGain(char(Channel),double(Gain));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureArbOffset(obj,Channel,Offset)
            %CONFIGUREARBOFFSET Specifies the value the function generator adds to the arbitrary waveforms.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Offset = obj.checkScalarDoubleArg(Offset,'Offset');
            try
                obj.interface.ConfigureArbOffset(char(Channel),double(Offset));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureArbSampleRate(obj,SampleRate)
            %CONFIGUREARBSAMPLERATE Will set the sample clock frequency of the arbitrary and sequenced waveform in units of Sa/s.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            SampleRate = obj.checkScalarDoubleArg(SampleRate,'SampleRate');
            try
                obj.interface.ConfigureArbSampleRate(double(SampleRate));
            catch e
                obj.interpretError(e);
            end
        end

        function val = ClockDivider(obj,Channel,newValue)
            %CLOCKDIVIDER Will set the external sample clock frequency divider.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.ClockDivider(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'ClockDivider');
                    obj.interface.ClockDivider(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Gain(obj,Channel,newValue)
            %GAIN Specifies the factor by which the function generator scales the arbitrary waveforms.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Gain(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Gain');
                    obj.interface.Gain(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Offset(obj,Channel,newValue)
            %OFFSET Specifies the value the function generator adds to the arbitrary waveforms.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Offset(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Offset');
                    obj.interface.Offset(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = SampleRateSource(obj,Channel,newValue)
            %SAMPLERATESOURCE Selects the internal or external sample clock input.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.SampleRateSource(char(Channel));
                else
                            obj.interface.SampleRateSource(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Source(obj,Channel,newValue)
            %SOURCE Use this property to set or query the source of the segment select command.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Source(char(Channel));
                else
                            obj.interface.Source(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Timing(obj,Channel,newValue)
            %TIMING Use this property to set or query the timing characteristics of the trace select command.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Timing(char(Channel));
                else
                            obj.interface.Timing(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = FreqRastDivider(obj,Channel,newValue)
            %FREQRASTDIVIDER No documentation available.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.FreqRastDivider(char(Channel));
                else
                            obj.interface.FreqRastDivider(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
