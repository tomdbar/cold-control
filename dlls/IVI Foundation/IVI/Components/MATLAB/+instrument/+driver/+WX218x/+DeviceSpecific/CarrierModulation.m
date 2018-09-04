classdef CarrierModulation < instrument.ivicom.Interface
    %CARRIERMODULATION IWX218xCarrierModulation interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = CarrierModulation(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function ConfigureCarrFreq(obj,Channel,Freq)
            %CONFIGURECARRFREQ This method programs the CW frequency.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Freq = obj.checkScalarDoubleArg(Freq,'Freq');
            try
                obj.interface.ConfigureCarrFreq(char(Channel),double(Freq));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureCarrWaveform(obj,Channel,Waveform)
            %CONFIGURECARRWAVEFORM Specifies the carrier function. There are three functions that could be modulated: Sine, Triangle and Square.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureCarrWaveform(char(Channel),int32(Waveform));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Frequency(obj,Channel,newValue)
            %FREQUENCY This property programs the CW frequency.
            
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

        function val = Waveform(obj,Channel,newValue)
            %WAVEFORM Specifies the carrier function. There are three functions that could be modulated: Sine, Triangle and Square.
            
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
