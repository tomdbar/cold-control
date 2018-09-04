classdef FM < instrument.ivicom.Interface
    %FM IWX218xFM interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = FM(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Properties
    properties

        %INTERNALDEVIATION Programs the deviation range around the carrier frequency in units of HZ.
        InternalDeviation

        %INTERNALFREQUENCY Programs the frequency of the modulating waveform in units of Hz.
        InternalFrequency

        %INTERNALWAVEFORM This parameter selects one of the waveform shapes as the active modulating waveform.
        InternalWaveform

    end

    %% Property access methods
    methods

        %% InternalDeviation property access methods
        function value = get.InternalDeviation(obj)
            obj.checkValidObj();
            try
                value = obj.interface.InternalDeviation;
            catch e
                obj.interpretError(e);
            end
        end
		function set.InternalDeviation(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarDoubleArg(newValue,'InternalDeviation');
            try
                obj.interface.InternalDeviation = newValue;
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

    end

    %% Public Methods
    methods

        function ConfigureInternal(obj,Deviation,Waveform,Frequency)
            %CONFIGUREINTERNAL This method configures the parameters that control the function generator's internal frequency modulation source.
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Deviation = obj.checkScalarDoubleArg(Deviation,'Deviation');
            Frequency = obj.checkScalarDoubleArg(Frequency,'Frequency');
            try
                obj.interface.ConfigureInternal(double(Deviation),int32(Waveform),double(Frequency));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureFMEnabled(obj,Channel,Enabled)
            %CONFIGUREFMENABLED This method enables or disables the frequency modulation.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Enabled = obj.checkScalarBoolArg(Enabled,'Enabled');
            try
                obj.interface.ConfigureFMEnabled(char(Channel),logical(Enabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureFMMarker(obj,Channel,Marker)
            %CONFIGUREFMMARKER This method programs marker frequency position in units of Hz.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Marker = obj.checkScalarDoubleArg(Marker,'Marker');
            try
                obj.interface.ConfigureFMMarker(char(Channel),double(Marker));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Enabled(obj,Channel,newValue)
            %ENABLED This property enables or disables the frequency modulation.
            
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

        function val = Marker(obj,Channel,newValue)
            %MARKER This property programs marker frequency position in units of Hz.
            
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

    end

end
