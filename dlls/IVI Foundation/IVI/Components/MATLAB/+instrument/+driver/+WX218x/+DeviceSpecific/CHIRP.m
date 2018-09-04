classdef CHIRP < instrument.ivicom.Interface
    %CHIRP IWX218xCHIRP interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = CHIRP(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function ConfigureChirpAmplDepth(obj,Channel,AmplDepth)
            %CONFIGURECHIRPAMPLDEPTH Sets the amplitude depth for chirp modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            AmplDepth = obj.checkScalarDoubleArg(AmplDepth,'AmplDepth');
            try
                obj.interface.ConfigureChirpAmplDepth(char(Channel),double(AmplDepth));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureChirpEnabled(obj,Channel,Enabled)
            %CONFIGURECHIRPENABLED This method configures whether the function generator applies chirp modulation to a channel (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Enabled = obj.checkScalarBoolArg(Enabled,'Enabled');
            try
                obj.interface.ConfigureChirpEnabled(char(Channel),logical(Enabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureChirpFreqDirection(obj,Channel,FreqDirection)
            %CONFIGURECHIRPFREQDIRECTION This method configures frequency direction up or down for chirp modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureChirpFreqDirection(char(Channel),int32(FreqDirection));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureChirpFreqSpacing(obj,Channel,FreqSpacing)
            %CONFIGURECHIRPFREQSPACING Sets frequency spacing linear or logarithmic for chirp modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureChirpFreqSpacing(char(Channel),int32(FreqSpacing));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureChirpMarkerFreq(obj,Channel,MarkerFreq)
            %CONFIGURECHIRPMARKERFREQ Sets the marker frequency for chirp modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            MarkerFreq = obj.checkScalarDoubleArg(MarkerFreq,'MarkerFreq');
            try
                obj.interface.ConfigureChirpMarkerFreq(char(Channel),double(MarkerFreq));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureChirpRepetition(obj,Channel,Repetition)
            %CONFIGURECHIRPREPETITION Sets the repetition for chirp modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Repetition = obj.checkScalarDoubleArg(Repetition,'Repetition');
            try
                obj.interface.ConfigureChirpRepetition(char(Channel),double(Repetition));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureChirpStartFreq(obj,Channel,StartFreq)
            %CONFIGURECHIRPSTARTFREQ Sets the start frequency for chirp modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            StartFreq = obj.checkScalarDoubleArg(StartFreq,'StartFreq');
            try
                obj.interface.ConfigureChirpStartFreq(char(Channel),double(StartFreq));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureChirpStopFreq(obj,Channel,StopFreq)
            %CONFIGURECHIRPSTOPFREQ Sets the stop frequency for Chirp modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            StopFreq = obj.checkScalarDoubleArg(StopFreq,'StopFreq');
            try
                obj.interface.ConfigureChirpStopFreq(char(Channel),double(StopFreq));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureChirpWidth(obj,Channel,Width)
            %CONFIGURECHIRPWIDTH Sets the width for chirp modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Width = obj.checkScalarDoubleArg(Width,'Width');
            try
                obj.interface.ConfigureChirpWidth(char(Channel),double(Width));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureChirpAmplDirection(obj,Channel,AmplDirection)
            %CONFIGURECHIRPAMPLDIRECTION Sets amplitude direction up or down for chirp modulation (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureChirpAmplDirection(char(Channel),int32(AmplDirection));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureChirpAmplSpacing(obj,Channel,AmplSpacing)
            %CONFIGURECHIRPAMPLSPACING Sets chirp amplitude spacing linear or logarithmic (not for WX2181,WX2182).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureChirpAmplSpacing(char(Channel),int32(AmplSpacing));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Width(obj,Channel,newValue)
            %WIDTH Sets the width for chirp modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Width(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Width');
                    obj.interface.Width(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Repetition(obj,Channel,newValue)
            %REPETITION Sets the repetition for chirp modulation
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Repetition(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Repetition');
                    obj.interface.Repetition(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = StartFrequency(obj,Channel,newValue)
            %STARTFREQUENCY Sets the start frequency for chirp modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.StartFrequency(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'StartFrequency');
                    obj.interface.StartFrequency(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = StopFrequency(obj,Channel,newValue)
            %STOPFREQUENCY Sets the stop frequency for Chirp modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.StopFrequency(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'StopFrequency');
                    obj.interface.StopFrequency(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = MarkerFrequency(obj,Channel,newValue)
            %MARKERFREQUENCY Sets the marker frequency for chirp modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.MarkerFrequency(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'MarkerFrequency');
                    obj.interface.MarkerFrequency(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = AmplDepth(obj,Channel,newValue)
            %AMPLDEPTH Sets the amplitude depth for chirp modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.AmplDepth(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'AmplDepth');
                    obj.interface.AmplDepth(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = FreqDirection(obj,Channel,newValue)
            %FREQDIRECTION Sets frequency direction up or down for chirp modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.FreqDirection(char(Channel));
                else
                            obj.interface.FreqDirection(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = FreqSpacing(obj,Channel,newValue)
            %FREQSPACING Sets frequency spacing linear or logarithmic for chirp modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.FreqSpacing(char(Channel));
                else
                            obj.interface.FreqSpacing(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = AmplDirection(obj,Channel,newValue)
            %AMPLDIRECTION Sets amplitude direction up or down for chirp modulation.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.AmplDirection(char(Channel));
                else
                            obj.interface.AmplDirection(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = AmplSpacing(obj,Channel,newValue)
            %AMPLSPACING Sets chirp amplitude spacing linear or logarithmic.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.AmplSpacing(char(Channel));
                else
                            obj.interface.AmplSpacing(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Enabled(obj,Channel,newValue)
            %ENABLED This property configures whether the function generator applies chirp modulation to a channel.
            
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
