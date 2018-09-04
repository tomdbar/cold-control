classdef Sync < instrument.ivicom.Interface
    %SYNC IWX218xChannelSync interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Sync(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Properties
    properties

        %SOURCE Use this property to set or query the source of the sync pulse.
        Source

    end

    %% Property access methods
    methods

        %% Source property access methods
        function value = get.Source(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Source;
            catch e
                obj.interpretError(e);
            end
        end
		function set.Source(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.Source = newValue;
            catch e
                obj.interpretError(e);
            end
        end

    end

    %% Public Methods
    methods

        function ConfigureSyncEnabled(obj,Channel,Enabled)
            %CONFIGURESYNCENABLED This method will set the state of the sync output.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Enabled = obj.checkScalarBoolArg(Enabled,'Enabled');
            try
                obj.interface.ConfigureSyncEnabled(char(Channel),logical(Enabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSyncFunction(obj,Channel,Function)
            %CONFIGURESYNCFUNCTION Use this method to set the shape of the sync pulse.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureSyncFunction(char(Channel),int32(Function));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSyncPosition(obj,Channel,Position)
            %CONFIGURESYNCPOSITION Sets the SYNC position in waveform points.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Position = obj.checkScalarInt32Arg(Position,'Position');
            try
                obj.interface.ConfigureSyncPosition(char(Channel),int32(Position));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSyncSource(obj,Source)
            %CONFIGURESYNCSOURCE Use this method to set the source of the sync pulse.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            try
                obj.interface.ConfigureSyncSource(int32(Source));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSyncWidth(obj,Channel,Width)
            %CONFIGURESYNCWIDTH Sets the SYNC width in waveform points.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Width = obj.checkScalarInt32Arg(Width,'Width');
            try
                obj.interface.ConfigureSyncWidth(char(Channel),int32(Width));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Enabled(obj,Channel,newValue)
            %ENABLED This property will set or query the state of the sync output.
            
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

        function val = Function(obj,Channel,newValue)
            %FUNCTION Use this property to set or query the shape of the sync pulse.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Function(char(Channel));
                else
                            obj.interface.Function(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Position(obj,Channel,newValue)
            %POSITION Sets the SYNC position in waveform points.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Position(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'Position');
                    obj.interface.Position(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Width(obj,Channel,newValue)
            %WIDTH Sets the SYNC width in waveform points.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Width(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'Width');
                    obj.interface.Width(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
