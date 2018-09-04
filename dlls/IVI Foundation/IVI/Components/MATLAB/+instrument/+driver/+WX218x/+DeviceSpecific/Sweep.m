classdef Sweep < instrument.ivicom.Interface
    %SWEEP IWX218xSweep interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Sweep(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function ConfigureSweepDirection(obj,Channel,Direction)
            %CONFIGURESWEEPDIRECTION This method specifies if the instrument output will sweep from start-to-stop (UP) or from stop-to-start (DOWN) frequencies.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureSweepDirection(char(Channel),int32(Direction));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSweepState(obj,Channel,State)
            %CONFIGURESWEEPSTATE This method configures the function generator to apply frequency sweep to the output signal.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            State = obj.checkScalarBoolArg(State,'State');
            try
                obj.interface.ConfigureSweepState(char(Channel),logical(State));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSweepFreqStart(obj,Channel,FreqStart)
            %CONFIGURESWEEPFREQSTART Programs the sweep start frequency in units of Hz.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FreqStart = obj.checkScalarDoubleArg(FreqStart,'FreqStart');
            try
                obj.interface.ConfigureSweepFreqStart(char(Channel),double(FreqStart));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSweepFreqStop(obj,Channel,FreqStop)
            %CONFIGURESWEEPFREQSTOP Programs the sweep stop frequency in units of Hz.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FreqStop = obj.checkScalarDoubleArg(FreqStop,'FreqStop');
            try
                obj.interface.ConfigureSweepFreqStop(char(Channel),double(FreqStop));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSweepMarker(obj,Channel,Marker)
            %CONFIGURESWEEPMARKER Programs the marker frequency position in units of Hz.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Marker = obj.checkScalarDoubleArg(Marker,'Marker');
            try
                obj.interface.ConfigureSweepMarker(char(Channel),double(Marker));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSweepSpacing(obj,Channel,Spacing)
            %CONFIGURESWEEPSPACING This method specifies the sweep step type. Two options are available: logarithmic or linear.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureSweepSpacing(char(Channel),int32(Spacing));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSweepTime(obj,Channel,Time)
            %CONFIGURESWEEPTIME Programs the sweep time in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Time = obj.checkScalarDoubleArg(Time,'Time');
            try
                obj.interface.ConfigureSweepTime(char(Channel),double(Time));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Direction(obj,Channel,newValue)
            %DIRECTION This property specifies if the instrument output will sweep from start-to-stop (UP) or from stop-to-start (DOWN) frequencies.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Direction(char(Channel));
                else
                            obj.interface.Direction(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Enabled(obj,Channel,newValue)
            %ENABLED This property configures the function generator to apply frequency sweep to the output signal.
            
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

        function val = FrequencyStart(obj,Channel,newValue)
            %FREQUENCYSTART Programs the sweep start frequency in units of Hz.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.FrequencyStart(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'FrequencyStart');
                    obj.interface.FrequencyStart(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = FrequencyStop(obj,Channel,newValue)
            %FREQUENCYSTOP Programs the sweep stop frequency in units of Hz.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.FrequencyStop(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'FrequencyStop');
                    obj.interface.FrequencyStop(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Marker(obj,Channel,newValue)
            %MARKER Programs the marker frequency position in units of Hz.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Marker(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Marker');
                    obj.interface.Marker(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Spacing(obj,Channel,newValue)
            %SPACING This property specifies the sweep step type. Two options are available: logarithmic or linear.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Spacing(char(Channel));
                else
                            obj.interface.Spacing(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Time(obj,Channel,newValue)
            %TIME Programs the sweep time in units of seconds.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Time(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Time');
                    obj.interface.Time(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
