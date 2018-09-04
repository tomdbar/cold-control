classdef Trigger < instrument.ivicom.Interface
    %TRIGGER IWX218xTrigger interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Trigger(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);

            %% Initialize properties
            try
                obj.ARM = instrument.driver.WX218x.DeviceSpecific.Trigger.ARM(obj.interface.ARM);
            catch %#ok<CTCH>
            end

            try
                obj.SmartTrigger = instrument.driver.WX218x.DeviceSpecific.Trigger.SmartTrigger(obj.interface.SmartTrigger);
            catch %#ok<CTCH>
            end

        end
        
        function delete(obj)
            obj.ARM = [];
            obj.SmartTrigger = [];
        end

    end
    
    %% Public Properties
    properties

        %TRIGGERIMPEDANCE Use this property to define or query the trigger impedance.
        TriggerImpedance

    end

    %% Public Read Only Properties
    properties (SetAccess = private)

        %ARM Pointer to the IWX218xTriggerARM interface. Read Only.
        ARM

        %SMARTTRIGGER Pointer to the IWX218xTriggerSmartTrigger interface. Read Only.
        SmartTrigger

    end

    %% Property access methods
    methods

        %% ARM property access methods
        function value = get.ARM(obj)
            obj.checkValidObj();
            if isempty(obj.ARM)
                try
                    obj.ARM = instrument.driver.WX218x.DeviceSpecific.Trigger.ARM(obj.interface.ARM);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.ARM;
        end

        %% SmartTrigger property access methods
        function value = get.SmartTrigger(obj)
            obj.checkValidObj();
            if isempty(obj.SmartTrigger)
                try
                    obj.SmartTrigger = instrument.driver.WX218x.DeviceSpecific.Trigger.SmartTrigger(obj.interface.SmartTrigger);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.SmartTrigger;
        end

        %% TriggerImpedance property access methods
        function value = get.TriggerImpedance(obj)
            obj.checkValidObj();
            try
                value = obj.interface.TriggerImpedance;
            catch e
                obj.interpretError(e);
            end
        end
		function set.TriggerImpedance(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.TriggerImpedance = newValue;
            catch e
                obj.interpretError(e);
            end
        end

    end

    %% Public Methods
    methods

        function SendSoftwareTrigger(obj)
            %SENDSOFTWARETRIGGER This method sends a command to trigger the function generator.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.SendSoftwareTrigger();
            catch e
                obj.interpretError(e);
            end
        end

        function SetECLLevel(obj,Channel)
            %SETECLLEVEL Use this method to set the trigger input to accept ecl (negative) signals. The threshold level is automatically set to -1.3 V.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetECLLevel(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function SetTTLLevel(obj,Channel)
            %SETTTLLEVEL Use this method to set the trigegr input to accept ttl signals. The threshold level is automatically set to 1.6 V.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetTTLLevel(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureBurstCount(obj,Channel,Count)
            %CONFIGUREBURSTCOUNT Use this method to set the burst counter setting.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Count = obj.checkScalarInt32Arg(Count,'Count');
            try
                obj.interface.ConfigureBurstCount(char(Channel),int32(Count));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTriggerDelay(obj,Channel,Delay)
            %CONFIGURETRIGGERDELAY Use this method to set the trigger delay setting.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Delay = obj.checkScalarInt32Arg(Delay,'Delay');
            try
                obj.interface.ConfigureTriggerDelay(char(Channel),int32(Delay));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTriggerLevel(obj,Channel,Level)
            %CONFIGURETRIGGERLEVEL Use this method to program the threshold level for the trigger input signals.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Level = obj.checkScalarDoubleArg(Level,'Level');
            try
                obj.interface.ConfigureTriggerLevel(char(Channel),double(Level));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTriggerTimerDelay(obj,Channel,TimerDelay)
            %CONFIGURETRIGGERTIMERDELAY Programs the internal delayed trigger generator period in units of waveform points. Program the value using integers divisible by 8.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            TimerDelay = obj.checkScalarInt32Arg(TimerDelay,'TimerDelay');
            try
                obj.interface.ConfigureTriggerTimerDelay(char(Channel),int32(TimerDelay));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTriggerTimerTime(obj,Channel,TimerTime)
            %CONFIGURETRIGGERTIMERTIME Programs the internal timed trigger generator period in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            TimerTime = obj.checkScalarDoubleArg(TimerTime,'TimerTime');
            try
                obj.interface.ConfigureTriggerTimerTime(char(Channel),double(TimerTime));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTrigContMode(obj,Channel,ContMode)
            %CONFIGURETRIGCONTMODE Use this method to set the state of the enable mode.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureTrigContMode(char(Channel),int32(ContMode));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTrigContSource(obj,Channel,Source)
            %CONFIGURETRIGCONTSOURCE Use this method to set the source of the enable signal.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureTrigContSource(char(Channel),int32(Source));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTrigSlope(obj,Channel,Slope)
            %CONFIGURETRIGSLOPE Use this method to define the edge that will affect the trigger input.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureTrigSlope(char(Channel),int32(Slope));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTrigSource(obj,Channel,Source)
            %CONFIGURETRIGSOURCE Use this method to set the source of the trigger event that will stimulate the instrument to generate waveforms.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureTrigSource(char(Channel),int32(Source));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTrigTimerMode(obj,Channel,TimerMode)
            %CONFIGURETRIGTIMERMODE Use this method to define  the trigger mode.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureTrigTimerMode(char(Channel),int32(TimerMode));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTriggerMode(obj,Channel,Mode)
            %CONFIGURETRIGGERMODE Use this method to define the trigger mode.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureTriggerMode(char(Channel),int32(Mode));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTriggerImpedance(obj,TriggerImpedance)
            %CONFIGURETRIGGERIMPEDANCE Use this method to configure Trigger Impedance (only for WX218xC,WX128xC models).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            try
                obj.interface.ConfigureTriggerImpedance(int32(TriggerImpedance));
            catch e
                obj.interpretError(e);
            end
        end

        function val = BurstCount(obj,Channel,newValue)
            %BURSTCOUNT Use this property to set or query the burst counter setting.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.BurstCount(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'BurstCount');
                    obj.interface.BurstCount(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = ContinuousMode(obj,Channel,newValue)
            %CONTINUOUSMODE Use this property to set or query the state of the enable mode.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.ContinuousMode(char(Channel));
                else
                            obj.interface.ContinuousMode(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = ContinuousSource(obj,Channel,newValue)
            %CONTINUOUSSOURCE Use this property to set or query the source of the enable signal.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.ContinuousSource(char(Channel));
                else
                            obj.interface.ContinuousSource(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Delay(obj,Channel,newValue)
            %DELAY Use this property to set or query the trigger delay setting.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Delay(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'Delay');
                    obj.interface.Delay(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Level(obj,Channel,newValue)
            %LEVEL Use this property to program or query the threshold level for the trigger input signals.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Level(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Level');
                    obj.interface.Level(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Slope(obj,Channel,newValue)
            %SLOPE Use this property to define or query the edge that will affect the trigger input.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Slope(char(Channel));
                else
                            obj.interface.Slope(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Source(obj,Channel,newValue)
            %SOURCE Use this property to set or query the source of the trigger event that will stimulate the instrument to generate waveforms.
            
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

        function val = TimerDelay(obj,Channel,newValue)
            %TIMERDELAY Programs the internal delayed trigger generator period in units of waveform points. Program the value using integers divisible by 8.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.TimerDelay(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'TimerDelay');
                    obj.interface.TimerDelay(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = TimerMode(obj,Channel,newValue)
            %TIMERMODE Use this property to set or query the mode that the internal trigger generator will operate.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.TimerMode(char(Channel));
                else
                            obj.interface.TimerMode(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = TimerTime(obj,Channel,newValue)
            %TIMERTIME Programs the internal timed trigger generator period in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.TimerTime(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'TimerTime');
                    obj.interface.TimerTime(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = TriggerMode(obj,Channel,newValue)
            %TRIGGERMODE Use this property to define or query the trigger mode.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.TriggerMode(char(Channel));
                else
                            obj.interface.TriggerMode(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
