classdef SmartTrigger < instrument.ivicom.Interface
    %SMARTTRIGGER IWX218xTriggerSmartTrigger interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = SmartTrigger(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function ConfigureSmartTrigHiPassEnabled(obj,Channel,State)
            %CONFIGURESMARTTRIGHIPASSENABLED Use this method to set the status of the high pass filter.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            State = obj.checkScalarBoolArg(State,'State');
            try
                obj.interface.ConfigureSmartTrigHiPassEnabled(char(Channel),logical(State));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSmartTrigHiPassWidth(obj,Channel,Width)
            %CONFIGURESMARTTRIGHIPASSWIDTH Programs the high pass pulse width value in units of second.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Width = obj.checkScalarDoubleArg(Width,'Width');
            try
                obj.interface.ConfigureSmartTrigHiPassWidth(char(Channel),double(Width));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSmartTrigHoldoff(obj,Channel,Holdoff)
            %CONFIGURESMARTTRIGHOLDOFF Programs the trigger holdoff period in units of second.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Holdoff = obj.checkScalarDoubleArg(Holdoff,'Holdoff');
            try
                obj.interface.ConfigureSmartTrigHoldoff(char(Channel),double(Holdoff));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSmartTrigHoldoffState(obj,Channel,State)
            %CONFIGURESMARTTRIGHOLDOFFSTATE Use this method to set the status of the holdoff filter.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            State = obj.checkScalarBoolArg(State,'State');
            try
                obj.interface.ConfigureSmartTrigHoldoffState(char(Channel),logical(State));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSmartTrigLowPassState(obj,Channel,State)
            %CONFIGURESMARTTRIGLOWPASSSTATE Use this method to set the status of the low pass filter.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            State = obj.checkScalarBoolArg(State,'State');
            try
                obj.interface.ConfigureSmartTrigLowPassState(char(Channel),logical(State));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSmartTrigLowPassWidth(obj,Channel,Width)
            %CONFIGURESMARTTRIGLOWPASSWIDTH Programs the low pass pulse width value in units of second.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Width = obj.checkScalarDoubleArg(Width,'Width');
            try
                obj.interface.ConfigureSmartTrigLowPassWidth(char(Channel),double(Width));
            catch e
                obj.interpretError(e);
            end
        end

        function val = HiPassEnabled(obj,Channel,newValue)
            %HIPASSENABLED Use this property to set or query the status of the high pass filter.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.HiPassEnabled(char(Channel));
                else
                    newValue = obj.checkScalarBoolArg(newValue,'HiPassEnabled');
                    obj.interface.HiPassEnabled(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = HiPassWidth(obj,Channel,newValue)
            %HIPASSWIDTH Programs the high pass pulse width value in units of second.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.HiPassWidth(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'HiPassWidth');
                    obj.interface.HiPassWidth(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Holdoff(obj,Channel,newValue)
            %HOLDOFF Programs the trigger holdoff period in units of second.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Holdoff(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Holdoff');
                    obj.interface.Holdoff(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = HoldoffEnabled(obj,Channel,newValue)
            %HOLDOFFENABLED Use this property to set or query the status of the holdoff filter.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.HoldoffEnabled(char(Channel));
                else
                    newValue = obj.checkScalarBoolArg(newValue,'HoldoffEnabled');
                    obj.interface.HoldoffEnabled(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = LowPassEnabled(obj,Channel,newValue)
            %LOWPASSENABLED Use this property to set or query the status of the low pass filter.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.LowPassEnabled(char(Channel));
                else
                    newValue = obj.checkScalarBoolArg(newValue,'LowPassEnabled');
                    obj.interface.LowPassEnabled(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = LowPassWidth(obj,Channel,newValue)
            %LOWPASSWIDTH Programs the low pass pulse width value in units of second.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.LowPassWidth(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'LowPassWidth');
                    obj.interface.LowPassWidth(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
