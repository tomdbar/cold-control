classdef ARM < instrument.ivicom.Interface
    %ARM IWX218xTriggerARM interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = ARM(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function SetECLLevel(obj,Channel)
            %SETECLLEVEL Use this method to set the event input to accept ecl (negative) signals.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetECLLevel(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function SetTtlLevel(obj,Channel)
            %SETTTLLEVEL Use this method to set the event input to accept ttl signals.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.SetTtlLevel(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTrigARMLevel(obj,Channel,Level)
            %CONFIGURETRIGARMLEVEL This method programs the threshold level for the event input signals.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Level = obj.checkScalarDoubleArg(Level,'Level');
            try
                obj.interface.ConfigureTrigARMLevel(char(Channel),double(Level));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureTrigARMSlope(obj,Channel,Slope)
            %CONFIGURETRIGARMSLOPE Use this method to define the edge that will affect the event input.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureTrigARMSlope(char(Channel),int32(Slope));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Level(obj,Channel,newValue)
            %LEVEL This property programs the threshold level for the event input signals.
            
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
            %SLOPE Use this property to define the edge that will affect the event input.
            
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

    end

end
