classdef Couple < instrument.ivicom.Interface
    %COUPLE IWX218xCouple interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Couple(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Properties
    properties

        %ENABLED Sets or queries the couple state of the synchronized channels. Use this property to cause all, or just listed channels to synchronize.
        Enabled

        %SKEW When couple state is ALL, this property sets or queries the skew between the start phase of the master channel and the start phase of the slave channel.
        Skew

    end

    %% Property access methods
    methods

        %% Enabled property access methods
        function value = get.Enabled(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Enabled;
            catch e
                obj.interpretError(e);
            end
        end
		function set.Enabled(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarBoolArg(newValue,'Enabled');
            try
                obj.interface.Enabled = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% Skew property access methods
        function value = get.Skew(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Skew;
            catch e
                obj.interpretError(e);
            end
        end
		function set.Skew(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarDoubleArg(newValue,'Skew');
            try
                obj.interface.Skew = newValue;
            catch e
                obj.interpretError(e);
            end
        end

    end

    %% Public Methods
    methods

        function ConfigureCoupleEnabled(obj,Enabled)
            %CONFIGURECOUPLEENABLED Sets  the couple state of the synchronized channels. Use this method to cause all, or just listed channels to synchronize.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Enabled = obj.checkScalarBoolArg(Enabled,'Enabled');
            try
                obj.interface.ConfigureCoupleEnabled(logical(Enabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureCoupleOffset(obj,Channel,Offset)
            %CONFIGURECOUPLEOFFSET When couple state is ON, this method sets  the offset between the start phase of the master channel and the start phase of the slave channel.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Offset = obj.checkScalarInt32Arg(Offset,'Offset');
            try
                obj.interface.ConfigureCoupleOffset(char(Channel),int32(Offset));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureCoupleSkew(obj,Skew)
            %CONFIGURECOUPLESKEW When couple state is ALL, this method sets the skew between the start phase of the master channel and the start phase of the slave channel.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Skew = obj.checkScalarDoubleArg(Skew,'Skew');
            try
                obj.interface.ConfigureCoupleSkew(double(Skew));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Offset(obj,Channel,newValue)
            %OFFSET When couple state is ON, this property sets or queries the offset between the start phase of the master channel and the start phase of the slave channel.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Offset(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'Offset');
                    obj.interface.Offset(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
