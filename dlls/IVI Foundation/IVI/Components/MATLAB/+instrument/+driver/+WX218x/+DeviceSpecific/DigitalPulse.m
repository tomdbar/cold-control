classdef DigitalPulse < instrument.ivicom.Interface
    %DIGITALPULSE IWX218xDigitalPulse interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = DigitalPulse(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function SetAmplitudeMax(obj,Channel)
            %SETAMPLITUDEMAX Sets the maximum amplitude value  of the pulse waveform in units of volts.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetAmplitudeMax(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function SetAmplitudeMin(obj,Channel)
            %SETAMPLITUDEMIN Sets the minimum amplitude value  of the pulse waveform in units of volts.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetAmplitudeMin(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function SetOffsetMax(obj,Channel)
            %SETOFFSETMAX Sets the maximum offset value of the pulse waveform in units of volts.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetOffsetMax(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function SetOffsetMin(obj,Channel)
            %SETOFFSETMIN Sets the minimum offset value of the pulse waveform in units of volts.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetOffsetMin(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseAmplitude(obj,Channel,Amplitude)
            %CONFIGUREDIGPULSEAMPLITUDE This method programs the peak to peak amplitude of the pulse waveform in units of volts.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Amplitude = obj.checkScalarDoubleArg(Amplitude,'Amplitude');
            try
                obj.interface.ConfigureDigPulseAmplitude(char(Channel),double(Amplitude));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseDelay(obj,Channel,Delay)
            %CONFIGUREDIGPULSEDELAY This method programs the delayed interval of which the output idles on the low level until the first transition to high level in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Delay = obj.checkScalarDoubleArg(Delay,'Delay');
            try
                obj.interface.ConfigureDigPulseDelay(char(Channel),double(Delay));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseDelayPercent(obj,Channel,DelayPercent)
            %CONFIGUREDIGPULSEDELAYPERCENT This method programs the delayed interval of which the output idles on the low level until the first transition to high level in units of percent.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            DelayPercent = obj.checkScalarDoubleArg(DelayPercent,'DelayPercent');
            try
                obj.interface.ConfigureDigPulseDelayPercent(char(Channel),double(DelayPercent));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseDoubleDelay(obj,Channel,DoubleDelay)
            %CONFIGUREDIGPULSEDOUBLEDELAY This method programs the delay between two adjacent pulses when the double mode is selected in unuts of seconds.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            DoubleDelay = obj.checkScalarDoubleArg(DoubleDelay,'DoubleDelay');
            try
                obj.interface.ConfigureDigPulseDoubleDelay(char(Channel),double(DoubleDelay));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseDoubleDelayPercent(obj,Channel,DoubleDelayPercent)
            %CONFIGUREDIGPULSEDOUBLEDELAYPERCENT This method programs the delay between two adjacent pulses when the double mode is selected in unuts of percent.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            DoubleDelayPercent = obj.checkScalarDoubleArg(DoubleDelayPercent,'DoubleDelayPercent');
            try
                obj.interface.ConfigureDigPulseDoubleDelayPercent(char(Channel),double(DoubleDelayPercent));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseFallTime(obj,Channel,FallTime)
            %CONFIGUREDIGPULSEFALLTIME This method programs the interval it will take the trailing edge of the pulse to transition from its high to low level settings in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FallTime = obj.checkScalarDoubleArg(FallTime,'FallTime');
            try
                obj.interface.ConfigureDigPulseFallTime(char(Channel),double(FallTime));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseFallTimePercent(obj,Channel,FallTimePercent)
            %CONFIGUREDIGPULSEFALLTIMEPERCENT This method programs the interval it will take the trailing edge of the pulse to transition from its high to low level settings in units of percent.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FallTimePercent = obj.checkScalarDoubleArg(FallTimePercent,'FallTimePercent');
            try
                obj.interface.ConfigureDigPulseFallTimePercent(char(Channel),double(FallTimePercent));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseHighLevel(obj,Channel,HighLevel)
            %CONFIGUREDIGPULSEHIGHLEVEL This method programs the high level amplitude of the pulse waveform in units of volts.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            HighLevel = obj.checkScalarDoubleArg(HighLevel,'HighLevel');
            try
                obj.interface.ConfigureDigPulseHighLevel(char(Channel),double(HighLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseLevelControl(obj,Channel,LevelControl)
            %CONFIGUREDIGPULSELEVELCONTROL This method will determine how the pulse levels are programed. Pulse level mode options are: High/Low, Amplitude/Offset, Positive and Negative.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureDigPulseLevelControl(char(Channel),int32(LevelControl));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseLowLevel(obj,Channel,LowLevel)
            %CONFIGUREDIGPULSELOWLEVEL This method programs the low level amplitude of the pulse waveform.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            LowLevel = obj.checkScalarDoubleArg(LowLevel,'LowLevel');
            try
                obj.interface.ConfigureDigPulseLowLevel(char(Channel),double(LowLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseMode(obj,Channel,Mode)
            %CONFIGUREDIGPULSEMODE This method programs the mode of the pulse. Pulse mode options are: Single pulse, Delayed pulse and  Double pulse.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureDigPulseMode(char(Channel),int32(Mode));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseOffset(obj,Channel,Offset)
            %CONFIGUREDIGPULSEOFFSET This method programs the offset amplitude of the pulse waveform in units of volts.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Offset = obj.checkScalarDoubleArg(Offset,'Offset');
            try
                obj.interface.ConfigureDigPulseOffset(char(Channel),double(Offset));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulsePeriod(obj,Channel,Period)
            %CONFIGUREDIGPULSEPERIOD This method programs the pulse repetition rate (period) in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Period = obj.checkScalarDoubleArg(Period,'Period');
            try
                obj.interface.ConfigureDigPulsePeriod(char(Channel),double(Period));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulsePolarity(obj,Channel,Polarity)
            %CONFIGUREDIGPULSEPOLARITY This method programs the polarity of the pulse in reference to the base line level. The polarity options are: Normal, Inverted and Complemented.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureDigPulsePolarity(char(Channel),int32(Polarity));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseRiseTime(obj,Channel,RiseTime)
            %CONFIGUREDIGPULSERISETIME This method programs the interval it will take the leading edge of the pulse to transition from its low to high level settings in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            RiseTime = obj.checkScalarDoubleArg(RiseTime,'RiseTime');
            try
                obj.interface.ConfigureDigPulseRiseTime(char(Channel),double(RiseTime));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureRiseTimePercent(obj,Channel,RiseTimePercent)
            %CONFIGURERISETIMEPERCENT This method programs the interval it will take the leading edge of the pulse to transition from its low to high level settings in units of percent.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            RiseTimePercent = obj.checkScalarDoubleArg(RiseTimePercent,'RiseTimePercent');
            try
                obj.interface.ConfigureRiseTimePercent(char(Channel),double(RiseTimePercent));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseTransition(obj,Channel,Transition)
            %CONFIGUREDIGPULSETRANSITION This method will place the pulse output in one of three transition options: Fast, Linear or Symmetrical.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureDigPulseTransition(char(Channel),int32(Transition));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseWidth(obj,Channel,Width)
            %CONFIGUREDIGPULSEWIDTH This method programs the pulse width value in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Width = obj.checkScalarDoubleArg(Width,'Width');
            try
                obj.interface.ConfigureDigPulseWidth(char(Channel),double(Width));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDigPulseWidthPercent(obj,Channel,WidthPercent)
            %CONFIGUREDIGPULSEWIDTHPERCENT This method programs the pulse width value in units of percent.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            WidthPercent = obj.checkScalarDoubleArg(WidthPercent,'WidthPercent');
            try
                obj.interface.ConfigureDigPulseWidthPercent(char(Channel),double(WidthPercent));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Amplitude(obj,Channel,newValue)
            %AMPLITUDE This property programs the peak to peak amplitude of the pulse waveform in units of volts.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Amplitude(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Amplitude');
                    obj.interface.Amplitude(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Configure(obj,Channel,newValue)
            %CONFIGURE Enables the programming of pulse parameters in units of time (seconds)or units of percent.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Configure(char(Channel));
                else
                            obj.interface.Configure(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Delay(obj,Channel,newValue)
            %DELAY This property programs the delayed interval of which the output idles on the low level until the first transition to high level in units of seconds.
            
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

        function val = DelayPercent(obj,Channel,newValue)
            %DELAYPERCENT This property programs the delayed interval of which the output idles on the low level until the first transition to high level in units of percent.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.DelayPercent(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'DelayPercent');
                    obj.interface.DelayPercent(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = DoubleDelay(obj,Channel,newValue)
            %DOUBLEDELAY This property programs the delay between two adjacent pulses when the double mode is selected in unuts of seconds.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.DoubleDelay(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'DoubleDelay');
                    obj.interface.DoubleDelay(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = DoubleDelayPercent(obj,Channel,newValue)
            %DOUBLEDELAYPERCENT This property programs the delay between two adjacent pulses when the double mode is selected in unuts of percent.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.DoubleDelayPercent(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'DoubleDelayPercent');
                    obj.interface.DoubleDelayPercent(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = FallTime(obj,Channel,newValue)
            %FALLTIME This property programs the interval it will take the trailing edge of the pulse to transition from its high to low level settings in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.FallTime(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'FallTime');
                    obj.interface.FallTime(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = FallTimePercent(obj,Channel,newValue)
            %FALLTIMEPERCENT This property programs the interval it will take the trailing edge of the pulse to transition from its high to low level settings in units of percent.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.FallTimePercent(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'FallTimePercent');
                    obj.interface.FallTimePercent(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = HighLevel(obj,Channel,newValue)
            %HIGHLEVEL This property programs the high level amplitude of the pulse waveform in units of volts.
            
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

        function val = LevelControl(obj,Channel,newValue)
            %LEVELCONTROL This property will determine how the pulse levels are programed. Pulse level mode options are: High/Low, Amplitude/Offset, Positive and Negative.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.LevelControl(char(Channel));
                else
                            obj.interface.LevelControl(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = LowLevel(obj,Channel,newValue)
            %LOWLEVEL This property programs the low level amplitude of the pulse waveform.
            
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

        function val = Mode(obj,Channel,newValue)
            %MODE This property programs the mode of the pulse. Pulse mode options are: Single pulse, Delayed pulse and  Double pulse.
            
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

        function val = Offset(obj,Channel,newValue)
            %OFFSET This property programs the offset amplitude of the pulse waveform in units of volts.
            
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

        function val = Period(obj,Channel,newValue)
            %PERIOD This property programs the pulse repetition rate (period) in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Period(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Period');
                    obj.interface.Period(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Polarity(obj,Channel,newValue)
            %POLARITY This property programs the polarity of the pulse in reference to the base line level. The polarity options are: Normal, Inverted and Complemented.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Polarity(char(Channel));
                else
                            obj.interface.Polarity(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = RiseTime(obj,Channel,newValue)
            %RISETIME This property programs the interval it will take the leading edge of the pulse to transition from its low to high level settings in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.RiseTime(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'RiseTime');
                    obj.interface.RiseTime(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = RiseTimePercent(obj,Channel,newValue)
            %RISETIMEPERCENT This property programs the interval it will take the leading edge of the pulse to transition from its low to high level settings in units of percent.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.RiseTimePercent(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'RiseTimePercent');
                    obj.interface.RiseTimePercent(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Transition(obj,Channel,newValue)
            %TRANSITION This method will place the pulse output in one of three transition options: Fast, Linear or Symmetrical.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Transition(char(Channel));
                else
                            obj.interface.Transition(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Width(obj,Channel,newValue)
            %WIDTH This property programs the pulse width value in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Width(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Width');
                    obj.interface.Width(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = WidthPercent(obj,Channel,newValue)
            %WIDTHPERCENT This property programs the pulse width value in units of percent.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.WidthPercent(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'WidthPercent');
                    obj.interface.WidthPercent(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
