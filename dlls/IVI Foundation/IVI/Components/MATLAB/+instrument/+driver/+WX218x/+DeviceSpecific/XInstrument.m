classdef XInstrument < instrument.ivicom.Interface
    %XINSTRUMENT IWX218xXInstrument interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = XInstrument(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Properties
    properties

        %ENABLED Sets or queries the state of the synchronized instruments.
        Enabled

        %MODE Use this property to define master and slave instruments. This command affects the system only when two instruments are hooked to a LAN network, synchronization cable is attached to the rear panel of both instruments and are intended to operate in synchronized mode.
        Mode

        %OFFSET When X-Instrument state is ON, this property sets or queries the offset between the start phase of the master instrument and the start phase of the slave instrument.
        Offset

        %MODEADV Use this property to define master,slave and MSlave instruments. This command affects the system only when two instruments are hooked to a LAN network, synchronization cable is attached to the rear panel of both instruments and are intended to operate in synchronized mode.
        ModeAdv

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

        %% Mode property access methods
        function value = get.Mode(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Mode;
            catch e
                obj.interpretError(e);
            end
        end
		function set.Mode(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.Mode = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% Offset property access methods
        function value = get.Offset(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Offset;
            catch e
                obj.interpretError(e);
            end
        end
		function set.Offset(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarInt32Arg(newValue,'Offset');
            try
                obj.interface.Offset = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% ModeAdv property access methods
        function value = get.ModeAdv(obj)
            obj.checkValidObj();
            try
                value = obj.interface.ModeAdv;
            catch e
                obj.interpretError(e);
            end
        end
		function set.ModeAdv(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.ModeAdv = newValue;
            catch e
                obj.interpretError(e);
            end
        end

    end

    %% Public Methods
    methods

        function ConfigureXInstrumentEnabled(obj,State)
            %CONFIGUREXINSTRUMENTENABLED Configure the state of the synchronized instruments.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            State = obj.checkScalarBoolArg(State,'State');
            try
                obj.interface.ConfigureXInstrumentEnabled(logical(State));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureXInstrumentMode(obj,Mode)
            %CONFIGUREXINSTRUMENTMODE Use this method to define master and slave instruments. This command affects the system only when two instruments are hooked to a LAN network, synchronization cable is attached to the rear panel of both instruments and are intended to operate in synchronized mode (not for 4Ch. models,WS835x).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            try
                obj.interface.ConfigureXInstrumentMode(int32(Mode));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureXInstrumentModeAdv(obj,ModeAdv)
            %CONFIGUREXINSTRUMENTMODEADV Use this method to define master,slave and MSlave instruments. This command affects the system only when two instruments are hooked to a LAN network, synchronization cable is attached to the rear panel of both instruments and are intended to operate in synchronized mode (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            try
                obj.interface.ConfigureXInstrumentModeAdv(int32(ModeAdv));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureXInstrumentOffset(obj,Offset)
            %CONFIGUREXINSTRUMENTOFFSET When X-Instrument state is ON, this property sets or queries the offset between the start phase of the master instrument and the start phase of the slave instrument (not for WS835x models).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Offset = obj.checkScalarInt32Arg(Offset,'Offset');
            try
                obj.interface.ConfigureXInstrumentOffset(int32(Offset));
            catch e
                obj.interpretError(e);
            end
        end

    end

end
