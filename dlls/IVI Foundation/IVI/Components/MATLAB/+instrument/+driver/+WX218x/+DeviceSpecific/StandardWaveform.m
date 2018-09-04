classdef StandardWaveform < instrument.ivicom.Interface
    %STANDARDWAVEFORM IWX218xStandardWaveform interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = StandardWaveform(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function ConfigureRampWaveform(obj,Channel,Delay,RiseTime,FallTime)
            %CONFIGURERAMPWAVEFORM This method configures the parameters of the function generator for the  ramp waveform.
            
            obj.checkValidObj();
			error(nargchk(5,5,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Delay = obj.checkScalarDoubleArg(Delay,'Delay');
            RiseTime = obj.checkScalarDoubleArg(RiseTime,'RiseTime');
            FallTime = obj.checkScalarDoubleArg(FallTime,'FallTime');
            try
                obj.interface.ConfigureRampWaveform(char(Channel),double(Delay),double(RiseTime),double(FallTime));
            catch e
                obj.interpretError(e);
            end
        end

        function SetAmplitudeMax(obj,Channel)
            %SETAMPLITUDEMAX This method sets the maximum amplitude value.
            
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
            %SETAMPLITUDEMIN This method sets the minimum amplitude value.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetAmplitudeMin(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function SetDCOffsetMax(obj,Channel)
            %SETDCOFFSETMAX This method sets the maximum DC offset value.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetDCOffsetMax(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function SetDCOffsetMin(obj,Channel)
            %SETDCOFFSETMIN This method sets the minimum DC offset value.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetDCOffsetMin(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function SetFrequencyMax(obj,Channel)
            %SETFREQUENCYMAX This method sets the maximum frequency value.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetFrequencyMax(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function SetFrequencyMin(obj,Channel)
            %SETFREQUENCYMIN This method sets the minimum frequency value.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetFrequencyMin(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function SetPowerMax(obj,Channel)
            %SETPOWERMAX This method sets the maximum power value (not for 4Ch. models,WS835x).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetPowerMax(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function SetPowerMin(obj,Channel)
            %SETPOWERMIN This method sets the minimum power value (not for 4Ch. models,WS835x).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetPowerMin(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function Configure(obj,Channel,Waveform,Amplitude,DCOffset,Frequency,StartPhase)
            %CONFIGURE This method configures the parameters of the function generator that affect standard waveform generation.
            
            obj.checkValidObj();
			error(nargchk(7,7,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Amplitude = obj.checkScalarDoubleArg(Amplitude,'Amplitude');
            DCOffset = obj.checkScalarDoubleArg(DCOffset,'DCOffset');
            Frequency = obj.checkScalarDoubleArg(Frequency,'Frequency');
            StartPhase = obj.checkScalarDoubleArg(StartPhase,'StartPhase');
            try
                obj.interface.Configure(char(Channel),int32(Waveform),double(Amplitude),double(DCOffset),double(Frequency),double(StartPhase));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDCLevel(obj,Channel,DcLevel)
            %CONFIGUREDCLEVEL Programs the DC offset parameter in units of volts.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            DcLevel = obj.checkScalarDoubleArg(DcLevel,'DcLevel');
            try
                obj.interface.ConfigureDCLevel(char(Channel),double(DcLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureDutyCycle(obj,Channel,DutyCycle)
            %CONFIGUREDUTYCYCLE Programs the duty cycle of the standard square waveform in units of percent.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            DutyCycle = obj.checkScalarDoubleArg(DutyCycle,'DutyCycle');
            try
                obj.interface.ConfigureDutyCycle(char(Channel),double(DutyCycle));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureExponenent(obj,Channel,Exponent)
            %CONFIGUREEXPONENENT Programs the exponent parameter.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Exponent = obj.checkScalarInt32Arg(Exponent,'Exponent');
            try
                obj.interface.ConfigureExponenent(char(Channel),int32(Exponent));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureGauss(obj,Channel,Gauss)
            %CONFIGUREGAUSS Use this method to set the exponent for the standard Gaussian pulse waveform.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Gauss = obj.checkScalarInt32Arg(Gauss,'Gauss');
            try
                obj.interface.ConfigureGauss(char(Channel),int32(Gauss));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureHvAmplitude(obj,Channel,HvAmplitude)
            %CONFIGUREHVAMPLITUDE Sets the HV amplitude of the standard waveform.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            HvAmplitude = obj.checkScalarDoubleArg(HvAmplitude,'HvAmplitude');
            try
                obj.interface.ConfigureHvAmplitude(char(Channel),double(HvAmplitude));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePower(obj,Channel,Power)
            %CONFIGUREPOWER Use this method to the output power (not for 4Ch. models,WS835x).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Power = obj.checkScalarDoubleArg(Power,'Power');
            try
                obj.interface.ConfigurePower(char(Channel),double(Power));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSincNCycles(obj,Channel,Cycles)
            %CONFIGURESINCNCYCLES Use this method to set number of cycles of the standard SINC pulse waveform.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Cycles = obj.checkScalarInt32Arg(Cycles,'Cycles');
            try
                obj.interface.ConfigureSincNCycles(char(Channel),int32(Cycles));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureAmplitudeAllCh(obj,Amplitude)
            %CONFIGUREAMPLITUDEALLCH Sets the amplitude of the standard waveform for all channels (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Amplitude = obj.checkScalarDoubleArg(Amplitude,'Amplitude');
            try
                obj.interface.ConfigureAmplitudeAllCh(double(Amplitude));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureHVAmplAllCh(obj,HVAmplitude)
            %CONFIGUREHVAMPLALLCH Sets the HV amplitude of the standard waveform for all channels (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            HVAmplitude = obj.checkScalarDoubleArg(HVAmplitude,'HVAmplitude');
            try
                obj.interface.ConfigureHVAmplAllCh(double(HVAmplitude));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureOffsetAllCh(obj,Offset)
            %CONFIGUREOFFSETALLCH Use this method to set dc offset of the output waveform for all channels (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Offset = obj.checkScalarDoubleArg(Offset,'Offset');
            try
                obj.interface.ConfigureOffsetAllCh(double(Offset));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Amplitude(obj,Channel,newValue)
            %AMPLITUDE Sets the amplitude of the standard waveform.
            
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

        function val = DcLevel(obj,Channel,newValue)
            %DCLEVEL Programs the DC offset parameter in units of volts.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.DcLevel(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'DcLevel');
                    obj.interface.DcLevel(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = DCOffset(obj,Channel,newValue)
            %DCOFFSET Use this property to set or query the dc offset of the output waveform.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.DCOffset(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'DCOffset');
                    obj.interface.DCOffset(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = DutyCycleHigh(obj,Channel,newValue)
            %DUTYCYCLEHIGH Programs the duty cycle of the standard square waveform in units of percent.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.DutyCycleHigh(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'DutyCycleHigh');
                    obj.interface.DutyCycleHigh(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = ExpExponent(obj,Channel,newValue)
            %EXPEXPONENT Programs the exponent parameter.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.ExpExponent(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'ExpExponent');
                    obj.interface.ExpExponent(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Frequency(obj,Channel,newValue)
            %FREQUENCY Use this property to set or query the frequency of the standard waveforms in units of hertz (Hz).
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Frequency(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Frequency');
                    obj.interface.Frequency(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = GaussExponent(obj,Channel,newValue)
            %GAUSSEXPONENT Use this property to set or query the exponent for the standard Gaussian pulse waveform.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.GaussExponent(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'GaussExponent');
                    obj.interface.GaussExponent(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Power(obj,Channel,newValue)
            %POWER Use this property to set or query the output power.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Power(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Power');
                    obj.interface.Power(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = RampDelay(obj,Channel,newValue)
            %RAMPDELAY Programs the ramp delay parameter in units of percent.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.RampDelay(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'RampDelay');
                    obj.interface.RampDelay(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = RampFallTime(obj,Channel,newValue)
            %RAMPFALLTIME Programs the ramp fall time parameter in units of percent.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.RampFallTime(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'RampFallTime');
                    obj.interface.RampFallTime(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = RampRiseTime(obj,Channel,newValue)
            %RAMPRISETIME Programs the ramp rise time parameter in units of percent.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.RampRiseTime(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'RampRiseTime');
                    obj.interface.RampRiseTime(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = SincNCycle(obj,Channel,newValue)
            %SINCNCYCLE Use this property to set or query the number of cycles of the standard SINC pulse waveform.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.SincNCycle(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'SincNCycle');
                    obj.interface.SincNCycle(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = StartPhase(obj,Channel,newValue)
            %STARTPHASE Sets the horizontal offset of the standard waveform.
            
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

        function val = HvAmplitude(obj,Channel,newValue)
            %HVAMPLITUDE Sets the HV amplitude of the standard waveform.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.HvAmplitude(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'HvAmplitude');
                    obj.interface.HvAmplitude(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Waveform(obj,Channel,newValue)
            %WAVEFORM Selects the standard waveform that you want the function generator to produce.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Waveform(char(Channel));
                else
                            obj.interface.Waveform(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
