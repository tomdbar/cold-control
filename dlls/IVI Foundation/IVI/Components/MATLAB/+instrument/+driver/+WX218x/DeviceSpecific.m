classdef DeviceSpecific < instrument.ivicom.Interface
    %DEVICESPECIFIC IWX218x interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = DeviceSpecific(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);

            %% Initialize properties
            try
                obj.Output = instrument.driver.WX218x.DeviceSpecific.Output(obj.interface.Output);
            catch %#ok<CTCH>
            end

            try
                obj.AM = instrument.driver.WX218x.DeviceSpecific.AM(obj.interface.AM);
            catch %#ok<CTCH>
            end

            try
                obj.StandardWaveform = instrument.driver.WX218x.DeviceSpecific.StandardWaveform(obj.interface.StandardWaveform);
            catch %#ok<CTCH>
            end

            try
                obj.Arbitrary = instrument.driver.WX218x.DeviceSpecific.Arbitrary(obj.interface.Arbitrary);
            catch %#ok<CTCH>
            end

            try
                obj.CarrierModulation = instrument.driver.WX218x.DeviceSpecific.CarrierModulation(obj.interface.CarrierModulation);
            catch %#ok<CTCH>
            end

            try
                obj.Couple = instrument.driver.WX218x.DeviceSpecific.Couple(obj.interface.Couple);
            catch %#ok<CTCH>
            end

            try
                obj.FM = instrument.driver.WX218x.DeviceSpecific.FM(obj.interface.FM);
            catch %#ok<CTCH>
            end

            try
                obj.Markers = instrument.driver.WX218x.DeviceSpecific.Markers(obj.interface.Markers);
            catch %#ok<CTCH>
            end

            try
                obj.Trigger = instrument.driver.WX218x.DeviceSpecific.Trigger(obj.interface.Trigger);
            catch %#ok<CTCH>
            end

            try
                obj.StateStorage = instrument.driver.WX218x.DeviceSpecific.StateStorage(obj.interface.StateStorage);
            catch %#ok<CTCH>
            end

            try
                obj.XInstrument = instrument.driver.WX218x.DeviceSpecific.XInstrument(obj.interface.XInstrument);
            catch %#ok<CTCH>
            end

            try
                obj.DigitalPulse = instrument.driver.WX218x.DeviceSpecific.DigitalPulse(obj.interface.DigitalPulse);
            catch %#ok<CTCH>
            end

            try
                obj.Sweep = instrument.driver.WX218x.DeviceSpecific.Sweep(obj.interface.Sweep);
            catch %#ok<CTCH>
            end

            try
                obj.DigitalPatternOutput = instrument.driver.WX218x.DeviceSpecific.DigitalPatternOutput(obj.interface.DigitalPatternOutput);
            catch %#ok<CTCH>
            end

            try
                obj.CHIRP = instrument.driver.WX218x.DeviceSpecific.CHIRP(obj.interface.CHIRP);
            catch %#ok<CTCH>
            end

            try
                obj.FSK = instrument.driver.WX218x.DeviceSpecific.FSK(obj.interface.FSK);
            catch %#ok<CTCH>
            end

            try
                obj.ASK = instrument.driver.WX218x.DeviceSpecific.ASK(obj.interface.ASK);
            catch %#ok<CTCH>
            end

            try
                obj.FHOP = instrument.driver.WX218x.DeviceSpecific.FHOP(obj.interface.FHOP);
            catch %#ok<CTCH>
            end

            try
                obj.AHOP = instrument.driver.WX218x.DeviceSpecific.AHOP(obj.interface.AHOP);
            catch %#ok<CTCH>
            end

            try
                obj.Pattern = instrument.driver.WX218x.DeviceSpecific.Pattern(obj.interface.Pattern);
            catch %#ok<CTCH>
            end

            try
                obj.PSK = instrument.driver.WX218x.DeviceSpecific.PSK(obj.interface.PSK);
            catch %#ok<CTCH>
            end

            try
                obj.QAM = instrument.driver.WX218x.DeviceSpecific.QAM(obj.interface.QAM);
            catch %#ok<CTCH>
            end

            try
                obj.DriverOperation = instrument.driver.WX218x.DeviceSpecific.DriverOperation(obj.interface.DriverOperation);
            catch %#ok<CTCH>
            end

            try
                obj.Identity = instrument.driver.WX218x.DeviceSpecific.Identity(obj.interface.Identity);
            catch %#ok<CTCH>
            end

            try
                obj.Utility = instrument.driver.WX218x.DeviceSpecific.Utility(obj.interface.Utility);
            catch %#ok<CTCH>
            end

        end
        
        function delete(obj)
            obj.Output = [];
            obj.AM = [];
            obj.StandardWaveform = [];
            obj.Arbitrary = [];
            obj.CarrierModulation = [];
            obj.Couple = [];
            obj.FM = [];
            obj.Markers = [];
            obj.Trigger = [];
            obj.StateStorage = [];
            obj.XInstrument = [];
            obj.DigitalPulse = [];
            obj.Sweep = [];
            obj.DigitalPatternOutput = [];
            obj.CHIRP = [];
            obj.FSK = [];
            obj.ASK = [];
            obj.FHOP = [];
            obj.AHOP = [];
            obj.Pattern = [];
            obj.PSK = [];
            obj.QAM = [];
            obj.DriverOperation = [];
            obj.Identity = [];
            obj.Utility = [];
        end

    end
    
    %% Public Properties
    properties

        %ACTIVECHANNEL Sets the active channel for programming.
        ActiveChannel

    end

    %% Public Read Only Properties
    properties (SetAccess = private)

        %OUTPUT Pointer to the IWX218xChannel interface. Read Only.
        Output

        %AM Pointer to the IWX218xAM interface. Read Only.
        AM

        %STANDARDWAVEFORM Pointer to the IWX218xStandardWaveform interface. Read Only.
        StandardWaveform

        %ARBITRARY Pointer to the IWX218xArbitrary interface. Read Only.
        Arbitrary

        %CARRIERMODULATION Pointer to the IWX218xCarrierModulation interface. Read Only.
        CarrierModulation

        %COUPLE Pointer to the IWX218xCouple interface. Read Only.
        Couple

        %FM Pointer to the IWX218xFM interface. Read Only.
        FM

        %MARKERS Pointer to the IWX218xMarkers interface. Read Only.
        Markers

        %TRIGGER Pointer to the IWX218xTrigger interface. Read Only.
        Trigger

        %STATESTORAGE Pointer to the IWX218xStateStorage interface. Read Only.
        StateStorage

        %XINSTRUMENT Pointer to the IWX218xXInstrument interface. Read Only.
        XInstrument

        %DIGITALPULSE Pointer to the IWX218xDigitalPulse interface. Read Only.
        DigitalPulse

        %SWEEP Pointer to the IWX218xSweep interface. Read Only.
        Sweep

        %DIGITALPATTERNOUTPUT Pointer to the IWX218xDigitalPatternOutput interface. Read Only.
        DigitalPatternOutput

        %CHIRP Pointer to the IWX218xCHIRP interface. Read Only.
        CHIRP

        %FSK Pointer to the IWX218xFSK interface. Read Only.
        FSK

        %ASK Pointer to the IWX218xASK interface. Read Only.
        ASK

        %FHOP Pointer to the IWX218xFHOP interface. Read Only.
        FHOP

        %AHOP Pointer to the IWX218xAHOP interface. Read Only.
        AHOP

        %PATTERN Pointer to the IWX218xPattern interface. Read Only.
        Pattern

        %PSK Pointer to the IWX218xPSK interface. Read Only.
        PSK

        %QAM Pointer to the IWX218xQAM interface. Read Only.
        QAM

        %DRIVEROPERATION Pointer to the IIviDriverOperation interface Read Only.
        DriverOperation

        %IDENTITY Pointer to the IIviDriverIdentity interface Read Only.
        Identity

        %UTILITY Pointer to the IIviDriverUtility interface Read Only.
        Utility

        %INITIALIZED Initialized is True between a successful call to the Initialize method and a successful call to the Close method, and False at all other times. Read Only.
        Initialized

    end

    %% Property access methods
    methods

        %% Output property access methods
        function value = get.Output(obj)
            obj.checkValidObj();
            if isempty(obj.Output)
                try
                    obj.Output = instrument.driver.WX218x.DeviceSpecific.Output(obj.interface.Output);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Output;
        end

        %% AM property access methods
        function value = get.AM(obj)
            obj.checkValidObj();
            if isempty(obj.AM)
                try
                    obj.AM = instrument.driver.WX218x.DeviceSpecific.AM(obj.interface.AM);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.AM;
        end

        %% ActiveChannel property access methods
        function value = get.ActiveChannel(obj)
            obj.checkValidObj();
            try
                value = obj.interface.ActiveChannel;
            catch e
                obj.interpretError(e);
            end
        end
		function set.ActiveChannel(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarStringArg(newValue,'ActiveChannel');
            try
                obj.interface.ActiveChannel = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% StandardWaveform property access methods
        function value = get.StandardWaveform(obj)
            obj.checkValidObj();
            if isempty(obj.StandardWaveform)
                try
                    obj.StandardWaveform = instrument.driver.WX218x.DeviceSpecific.StandardWaveform(obj.interface.StandardWaveform);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.StandardWaveform;
        end

        %% Arbitrary property access methods
        function value = get.Arbitrary(obj)
            obj.checkValidObj();
            if isempty(obj.Arbitrary)
                try
                    obj.Arbitrary = instrument.driver.WX218x.DeviceSpecific.Arbitrary(obj.interface.Arbitrary);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Arbitrary;
        end

        %% CarrierModulation property access methods
        function value = get.CarrierModulation(obj)
            obj.checkValidObj();
            if isempty(obj.CarrierModulation)
                try
                    obj.CarrierModulation = instrument.driver.WX218x.DeviceSpecific.CarrierModulation(obj.interface.CarrierModulation);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.CarrierModulation;
        end

        %% Couple property access methods
        function value = get.Couple(obj)
            obj.checkValidObj();
            if isempty(obj.Couple)
                try
                    obj.Couple = instrument.driver.WX218x.DeviceSpecific.Couple(obj.interface.Couple);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Couple;
        end

        %% FM property access methods
        function value = get.FM(obj)
            obj.checkValidObj();
            if isempty(obj.FM)
                try
                    obj.FM = instrument.driver.WX218x.DeviceSpecific.FM(obj.interface.FM);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.FM;
        end

        %% Markers property access methods
        function value = get.Markers(obj)
            obj.checkValidObj();
            if isempty(obj.Markers)
                try
                    obj.Markers = instrument.driver.WX218x.DeviceSpecific.Markers(obj.interface.Markers);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Markers;
        end

        %% Trigger property access methods
        function value = get.Trigger(obj)
            obj.checkValidObj();
            if isempty(obj.Trigger)
                try
                    obj.Trigger = instrument.driver.WX218x.DeviceSpecific.Trigger(obj.interface.Trigger);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Trigger;
        end

        %% StateStorage property access methods
        function value = get.StateStorage(obj)
            obj.checkValidObj();
            if isempty(obj.StateStorage)
                try
                    obj.StateStorage = instrument.driver.WX218x.DeviceSpecific.StateStorage(obj.interface.StateStorage);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.StateStorage;
        end

        %% XInstrument property access methods
        function value = get.XInstrument(obj)
            obj.checkValidObj();
            if isempty(obj.XInstrument)
                try
                    obj.XInstrument = instrument.driver.WX218x.DeviceSpecific.XInstrument(obj.interface.XInstrument);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.XInstrument;
        end

        %% DigitalPulse property access methods
        function value = get.DigitalPulse(obj)
            obj.checkValidObj();
            if isempty(obj.DigitalPulse)
                try
                    obj.DigitalPulse = instrument.driver.WX218x.DeviceSpecific.DigitalPulse(obj.interface.DigitalPulse);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.DigitalPulse;
        end

        %% Sweep property access methods
        function value = get.Sweep(obj)
            obj.checkValidObj();
            if isempty(obj.Sweep)
                try
                    obj.Sweep = instrument.driver.WX218x.DeviceSpecific.Sweep(obj.interface.Sweep);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Sweep;
        end

        %% DigitalPatternOutput property access methods
        function value = get.DigitalPatternOutput(obj)
            obj.checkValidObj();
            if isempty(obj.DigitalPatternOutput)
                try
                    obj.DigitalPatternOutput = instrument.driver.WX218x.DeviceSpecific.DigitalPatternOutput(obj.interface.DigitalPatternOutput);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.DigitalPatternOutput;
        end

        %% CHIRP property access methods
        function value = get.CHIRP(obj)
            obj.checkValidObj();
            if isempty(obj.CHIRP)
                try
                    obj.CHIRP = instrument.driver.WX218x.DeviceSpecific.CHIRP(obj.interface.CHIRP);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.CHIRP;
        end

        %% FSK property access methods
        function value = get.FSK(obj)
            obj.checkValidObj();
            if isempty(obj.FSK)
                try
                    obj.FSK = instrument.driver.WX218x.DeviceSpecific.FSK(obj.interface.FSK);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.FSK;
        end

        %% ASK property access methods
        function value = get.ASK(obj)
            obj.checkValidObj();
            if isempty(obj.ASK)
                try
                    obj.ASK = instrument.driver.WX218x.DeviceSpecific.ASK(obj.interface.ASK);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.ASK;
        end

        %% FHOP property access methods
        function value = get.FHOP(obj)
            obj.checkValidObj();
            if isempty(obj.FHOP)
                try
                    obj.FHOP = instrument.driver.WX218x.DeviceSpecific.FHOP(obj.interface.FHOP);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.FHOP;
        end

        %% AHOP property access methods
        function value = get.AHOP(obj)
            obj.checkValidObj();
            if isempty(obj.AHOP)
                try
                    obj.AHOP = instrument.driver.WX218x.DeviceSpecific.AHOP(obj.interface.AHOP);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.AHOP;
        end

        %% Pattern property access methods
        function value = get.Pattern(obj)
            obj.checkValidObj();
            if isempty(obj.Pattern)
                try
                    obj.Pattern = instrument.driver.WX218x.DeviceSpecific.Pattern(obj.interface.Pattern);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Pattern;
        end

        %% PSK property access methods
        function value = get.PSK(obj)
            obj.checkValidObj();
            if isempty(obj.PSK)
                try
                    obj.PSK = instrument.driver.WX218x.DeviceSpecific.PSK(obj.interface.PSK);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.PSK;
        end

        %% QAM property access methods
        function value = get.QAM(obj)
            obj.checkValidObj();
            if isempty(obj.QAM)
                try
                    obj.QAM = instrument.driver.WX218x.DeviceSpecific.QAM(obj.interface.QAM);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.QAM;
        end

        %% DriverOperation property access methods
        function value = get.DriverOperation(obj)
            obj.checkValidObj();
            if isempty(obj.DriverOperation)
                try
                    obj.DriverOperation = instrument.driver.WX218x.DeviceSpecific.DriverOperation(obj.interface.DriverOperation);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.DriverOperation;
        end

        %% Identity property access methods
        function value = get.Identity(obj)
            obj.checkValidObj();
            if isempty(obj.Identity)
                try
                    obj.Identity = instrument.driver.WX218x.DeviceSpecific.Identity(obj.interface.Identity);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Identity;
        end

        %% Utility property access methods
        function value = get.Utility(obj)
            obj.checkValidObj();
            if isempty(obj.Utility)
                try
                    obj.Utility = instrument.driver.WX218x.DeviceSpecific.Utility(obj.interface.Utility);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.Utility;
        end

        %% Initialized property access methods
        function value = get.Initialized(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Initialized;
            catch e
                obj.interpretError(e);
            end
        end

    end

    %% Public Methods
    methods

        function AbortGeneration(obj)
            %ABORTGENERATION Use this method for an immediate and unconditional termination of the output waveform.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.AbortGeneration();
            catch e
                obj.interpretError(e);
            end
        end

        function InitiateGeneration(obj)
            %INITIATEGENERATION Use this method for an immediate and unconditional generation of the selected output waveform.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.InitiateGeneration();
            catch e
                obj.interpretError(e);
            end
        end

        function SetActiveChannel(obj,ChName)
            %SETACTIVECHANNEL Sets the active channel for programming.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            ChName = obj.checkScalarStringArg(ChName,'ChName');
            try
                obj.interface.SetActiveChannel(char(ChName));
            catch e
                obj.interpretError(e);
            end
        end

        function SendCmd(obj,Command)
            %SENDCMD Sending scipi command to the instrument.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Command = obj.checkScalarStringArg(Command,'Command');
            try
                obj.interface.SendCmd(char(Command));
            catch e
                obj.interpretError(e);
            end
        end

        function returnReadBuff = ReadQuery(obj,SendBuff)
            %READQUERY Sending scipi command to the instrument and read the answer.
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            SendBuff = obj.checkScalarStringArg(SendBuff,'SendBuff');
            try
                [returnReadBuff] = obj.interface.ReadQuery(char(SendBuff),char(0));
            catch e
                obj.interpretError(e);
            end
        end

        function Initialize(obj,ResourceName,IdQuery,Reset,OptionString)
            %INITIALIZE Opens the I/O session to the instrument.  Driver methods and properties that access the instrument are only accessible after Initialize is called.  Initialize optionally performs a Reset and queries the instrument to validate the instrument model.
            
            obj.checkValidObj();
			error(nargchk(5,5,nargin,'struct'))
            ResourceName = obj.checkScalarStringArg(ResourceName,'ResourceName');
            IdQuery = obj.checkScalarBoolArg(IdQuery,'IdQuery');
            Reset = obj.checkScalarBoolArg(Reset,'Reset');
            OptionString = obj.checkScalarStringArg(OptionString,'OptionString');
            try
                obj.interface.Initialize(char(ResourceName),logical(IdQuery),logical(Reset),char(OptionString));
            catch e
                obj.interpretError(e);
            end
        end

        function Close(obj)
            %CLOSE Closes the I/O session to the instrument.  Driver methods and properties that access the instrument are not accessible after Close is called.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.Close();
            catch e
                obj.interpretError(e);
            end
        end

        function val = Skew(obj,Channel,newValue)
            %SKEW Fine skew adjustment.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Skew(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Skew');
                    obj.interface.Skew(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
