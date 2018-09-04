classdef AM < instrument.ivicom.Interface
    %AM IWX218xAM interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = AM(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Properties
    properties

        %INTERNALDEPTH Programs the depth of the modulating waveform in units of percent.
        InternalDepth

        %INTERNALWAVEFORM Select one of the waveform shapes as the active modulating waveform.
        InternalWaveform

        %INTERNALFREQUENCY Programs the frequency of the modulating waveform in units of Hz.
        InternalFrequency

    end

    %% Property access methods
    methods

        %% InternalDepth property access methods
        function value = get.InternalDepth(obj)
            obj.checkValidObj();
            try
                value = obj.interface.InternalDepth;
            catch e
                obj.interpretError(e);
            end
        end
		function set.InternalDepth(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarDoubleArg(newValue,'InternalDepth');
            try
                obj.interface.InternalDepth = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% InternalWaveform property access methods
        function value = get.InternalWaveform(obj)
            obj.checkValidObj();
            try
                value = obj.interface.InternalWaveform;
            catch e
                obj.interpretError(e);
            end
        end
		function set.InternalWaveform(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.InternalWaveform = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% InternalFrequency property access methods
        function value = get.InternalFrequency(obj)
            obj.checkValidObj();
            try
                value = obj.interface.InternalFrequency;
            catch e
                obj.interpretError(e);
            end
        end
		function set.InternalFrequency(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarDoubleArg(newValue,'InternalFrequency');
            try
                obj.interface.InternalFrequency = newValue;
            catch e
                obj.interpretError(e);
            end
        end

    end

    %% Public Methods
    methods

        function ConfigureInternal(obj,Depth,Waveform,Frequency)
            %CONFIGUREINTERNAL Programs the AM parameters.
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Depth = obj.checkScalarDoubleArg(Depth,'Depth');
            Frequency = obj.checkScalarDoubleArg(Frequency,'Frequency');
            try
                obj.interface.ConfigureInternal(double(Depth),int32(Waveform),double(Frequency));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureAMEnabled(obj,Channel,Enabled)
            %CONFIGUREAMENABLED This method configures whether the function generator applies amplitude modulation to a channel.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Enabled = obj.checkScalarBoolArg(Enabled,'Enabled');
            try
                obj.interface.ConfigureAMEnabled(char(Channel),logical(Enabled));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Enabled(obj,Channel,newValue)
            %ENABLED This property configures whether the function generator applies amplitude modulation to a channel.
            
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
