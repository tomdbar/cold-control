classdef Markers < instrument.ivicom.Interface
    %MARKERS IWX218xMarkers interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Markers(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function Refresh(obj,Channel,Index)
            %REFRESH Use this method to restore marker local operation (not for 4 Ch. models, WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                obj.interface.Refresh(char(Channel),int32(Index));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureMarkerControl(obj,Channel,Index,Control)
            %CONFIGUREMARKERCONTROL Use this method to set marker control source (not for 4Ch. models, WS835x, WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                obj.interface.ConfigureMarkerControl(char(Channel),int32(Index),int32(Control));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureMarkerDelay(obj,Channel,Index,Delay)
            %CONFIGUREMARKERDELAY Use this method to set the delay of the marker output (not for WS835x, WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            Delay = obj.checkScalarDoubleArg(Delay,'Delay');
            try
                obj.interface.ConfigureMarkerDelay(char(Channel),int32(Index),double(Delay));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureMarkerEnabled(obj,Channel,Index,Enabled)
            %CONFIGUREMARKERENABLED Sets the marker outputs on and off (not for WS835x, WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            Enabled = obj.checkScalarBoolArg(Enabled,'Enabled');
            try
                obj.interface.ConfigureMarkerEnabled(char(Channel),int32(Index),logical(Enabled));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureMarkerHighLevel(obj,Channel,Index,HighLevel)
            %CONFIGUREMARKERHIGHLEVEL Use this method to set the high level of the marker output (not for 4Ch. models,WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            HighLevel = obj.checkScalarDoubleArg(HighLevel,'HighLevel');
            try
                obj.interface.ConfigureMarkerHighLevel(char(Channel),int32(Index),double(HighLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureMarkerLowLevel(obj,Channel,Index,LowLevel)
            %CONFIGUREMARKERLOWLEVEL Use this method to set the low level of the marker output (not for 4Ch. models, WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            LowLevel = obj.checkScalarDoubleArg(LowLevel,'LowLevel');
            try
                obj.interface.ConfigureMarkerLowLevel(char(Channel),int32(Index),double(LowLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureMarkerIndex(obj,Channel,Index)
            %CONFIGUREMARKERINDEX Selects Marker Index(1 or 2) (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                obj.interface.ConfigureMarkerIndex(char(Channel),int32(Index));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureMarkerPosition(obj,Channel,Index,Position)
            %CONFIGUREMARKERPOSITION Sets marker position relative to the waveform start point in units of waveform points (not for WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            Position = obj.checkScalarInt32Arg(Position,'Position');
            try
                obj.interface.ConfigureMarkerPosition(char(Channel),int32(Index),int32(Position));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureMarkerSource(obj,Channel,Source)
            %CONFIGUREMARKERSOURCE Use this method to set marker source (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureMarkerSource(char(Channel),int32(Source));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureMarkerWidth(obj,Channel,Index,Width)
            %CONFIGUREMARKERWIDTH Sets marker width in units of waveform points (not for WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            Width = obj.checkScalarInt32Arg(Width,'Width');
            try
                obj.interface.ConfigureMarkerWidth(char(Channel),int32(Index),int32(Width));
            catch e
                obj.interpretError(e);
            end
        end

        function MarkerRefresh(obj,Channel)
            %MARKERREFRESH Use this method to restore marker local operation (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.MarkerRefresh(char(Channel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureMarkerHighLevel4Ch(obj,Channel,HighLevel)
            %CONFIGUREMARKERHIGHLEVEL4CH Use this method to set the high level of the marker output for WX2184C, WX1284C models.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            HighLevel = obj.checkScalarDoubleArg(HighLevel,'HighLevel');
            try
                obj.interface.ConfigureMarkerHighLevel4Ch(char(Channel),double(HighLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureMarkerLowLevel4Ch(obj,Channel,LowLevel)
            %CONFIGUREMARKERLOWLEVEL4CH Use this method to set the low level of the marker output for WX2184C,WX1284C models.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            LowLevel = obj.checkScalarDoubleArg(LowLevel,'LowLevel');
            try
                obj.interface.ConfigureMarkerLowLevel4Ch(char(Channel),double(LowLevel));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Delay(obj,Channel,Index,newValue)
            %DELAY Use this property to set or query the delay of the marker output (not for WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(3,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                if nargin == 3
                    [val] = obj.interface.Delay(char(Channel),int32(Index));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Delay');
                    obj.interface.Delay(char(Channel),int32(Index),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Enabled(obj,Channel,Index,newValue)
            %ENABLED Sets the marker outputs on and off (not for WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(3,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                if nargin == 3
                    [val] = obj.interface.Enabled(char(Channel),int32(Index));
                else
                    newValue = obj.checkScalarBoolArg(newValue,'Enabled');
                    obj.interface.Enabled(char(Channel),int32(Index),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = HighLevel(obj,Channel,Index,newValue)
            %HIGHLEVEL Use this property to set or query the high level of the marker output (not for 4 Ch. models,WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(3,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                if nargin == 3
                    [val] = obj.interface.HighLevel(char(Channel),int32(Index));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'HighLevel');
                    obj.interface.HighLevel(char(Channel),int32(Index),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = LowLevel(obj,Channel,Index,newValue)
            %LOWLEVEL Use this property to set or query the low level of the marker output (not for 4 Ch. models,WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(3,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                if nargin == 3
                    [val] = obj.interface.LowLevel(char(Channel),int32(Index));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'LowLevel');
                    obj.interface.LowLevel(char(Channel),int32(Index),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Position(obj,Channel,Index,newValue)
            %POSITION Sets marker position relative to the waveform start point in units of waveform points (not for WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(3,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                if nargin == 3
                    [val] = obj.interface.Position(char(Channel),int32(Index));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'Position');
                    obj.interface.Position(char(Channel),int32(Index),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Width(obj,Channel,Index,newValue)
            %WIDTH Sets marker width in units of waveform points (not for WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(3,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                if nargin == 3
                    [val] = obj.interface.Width(char(Channel),int32(Index));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'Width');
                    obj.interface.Width(char(Channel),int32(Index),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Control(obj,Channel,Index,newValue)
            %CONTROL Use this property to set or query marker control source (not for 4 Ch. models,WS835x,WX218xB-D,WX128xB-D).
            
            obj.checkValidObj();
			error(nargchk(3,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Index = obj.checkScalarInt32Arg(Index,'Index');
            try
                if nargin == 3
                    [val] = obj.interface.Control(char(Channel),int32(Index));
                else
                            obj.interface.Control(char(Channel),int32(Index),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = MarkerIndex(obj,Channel,newValue)
            %MARKERINDEX Selects Marker Index.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.MarkerIndex(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'MarkerIndex');
                    obj.interface.MarkerIndex(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Source(obj,Channel,newValue)
            %SOURCE Use this property to set or query marker source.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Source(char(Channel));
                else
                            obj.interface.Source(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = HighLevel4Ch(obj,Channel,newValue)
            %HIGHLEVEL4CH Use this property to set or query the high level of the marker output.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.HighLevel4Ch(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'HighLevel4Ch');
                    obj.interface.HighLevel4Ch(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = LowLevel4Ch(obj,Channel,newValue)
            %LOWLEVEL4CH Use this property to set or query the low level of the marker output.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.LowLevel4Ch(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'LowLevel4Ch');
                    obj.interface.LowLevel4Ch(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
