classdef DriverOperation < instrument.ivicom.Interface
    %DRIVEROPERATION IVI Driver operation interface
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = DriverOperation(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Properties
    properties

        %CACHE Drivers may choose to always cache some instrument settings, never cache others, and optionally cache others, to avoid unecessary I/O to the instrument.  If True, the driver caches optionally cached instrument settings.
        Cache

        %INTERCHANGECHECK If True, the driver maintains a record of interchangeability warnings.  If the driver does not support interchangeability checking, attempts to set InterchangeCheck to True return an error.
        InterchangeCheck

        %QUERYINSTRUMENTSTATUS If True, the driver queries the instrument status at the end of each method or property that performs I/O to the instrument.  If an error is reported, use ErrorQuery to retrieve error messages one at a time from the instrument.
        QueryInstrumentStatus

        %RANGECHECK Drivers may choose to always validate some property/parameter values, never validate others, and optionally validate others, to avoid sending invalid commands to the instrument.  If True, the driver performs optional validations.
        RangeCheck

        %RECORDCOERCIONS If True, the driver keeps a list of the value coercions it makes for ViInt32 and ViReal64 attributes.  If the driver does not support coercion recording, attempts to set RecordCoercions to True will return an error.
        RecordCoercions

        %SIMULATE If True, the driver does not perform I/O to the instrument, and returns simulated values for output parameters.
        Simulate

    end

    %% Public Read Only Properties
    properties (SetAccess = private)

        %LOGICALNAME Logical Name identifies a driver session in the Configuration Store.  If Logical Name is not empty, the driver was initialized from information in the driver session.  If it is empty, the driver was initialized without using the Configuration Store. Read Only.
        LogicalName

        %IORESOURCEDESCRIPTOR The resource descriptor specifies the connection to a physical device.  It is either specified in the Configuration Store or passed in the ResourceName parameter of the Initialize function.  It is empty if the driver is not initialized. Read Only.
        IoResourceDescriptor

        %DRIVERSETUP The driver setup string.  It is either specified in the Configuration Store or passed in the OptionString parameter of the Initialize function.  Driver setup is empty if the driver is not initialized. Read Only.
        DriverSetup

    end

    %% Property access methods
    methods

        %% LogicalName property access methods
        function value = get.LogicalName(obj)
            obj.checkValidObj();
            try
                value = obj.interface.LogicalName;
            catch e
                obj.interpretError(e);
            end
        end

        %% IoResourceDescriptor property access methods
        function value = get.IoResourceDescriptor(obj)
            obj.checkValidObj();
            try
                value = obj.interface.IoResourceDescriptor;
            catch e
                obj.interpretError(e);
            end
        end

        %% Cache property access methods
        function value = get.Cache(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Cache;
            catch e
                obj.interpretError(e);
            end
        end
		function set.Cache(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarBoolArg(newValue,'Cache');
            try
                obj.interface.Cache = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% InterchangeCheck property access methods
        function value = get.InterchangeCheck(obj)
            obj.checkValidObj();
            try
                value = obj.interface.InterchangeCheck;
            catch e
                obj.interpretError(e);
            end
        end
		function set.InterchangeCheck(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarBoolArg(newValue,'InterchangeCheck');
            try
                obj.interface.InterchangeCheck = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% QueryInstrumentStatus property access methods
        function value = get.QueryInstrumentStatus(obj)
            obj.checkValidObj();
            try
                value = obj.interface.QueryInstrumentStatus;
            catch e
                obj.interpretError(e);
            end
        end
		function set.QueryInstrumentStatus(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarBoolArg(newValue,'QueryInstrumentStatus');
            try
                obj.interface.QueryInstrumentStatus = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% RangeCheck property access methods
        function value = get.RangeCheck(obj)
            obj.checkValidObj();
            try
                value = obj.interface.RangeCheck;
            catch e
                obj.interpretError(e);
            end
        end
		function set.RangeCheck(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarBoolArg(newValue,'RangeCheck');
            try
                obj.interface.RangeCheck = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% RecordCoercions property access methods
        function value = get.RecordCoercions(obj)
            obj.checkValidObj();
            try
                value = obj.interface.RecordCoercions;
            catch e
                obj.interpretError(e);
            end
        end
		function set.RecordCoercions(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarBoolArg(newValue,'RecordCoercions');
            try
                obj.interface.RecordCoercions = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% Simulate property access methods
        function value = get.Simulate(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Simulate;
            catch e
                obj.interpretError(e);
            end
        end
		function set.Simulate(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarBoolArg(newValue,'Simulate');
            try
                obj.interface.Simulate = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% DriverSetup property access methods
        function value = get.DriverSetup(obj)
            obj.checkValidObj();
            try
                value = obj.interface.DriverSetup;
            catch e
                obj.interpretError(e);
            end
        end

    end

    %% Public Methods
    methods

        function InvalidateAllAttributes(obj)
            %INVALIDATEALLATTRIBUTES Invalidates all of the driver's cached values.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.InvalidateAllAttributes();
            catch e
                obj.interpretError(e);
            end
        end

        function ClearInterchangeWarnings(obj)
            %CLEARINTERCHANGEWARNINGS Clears the list of interchangeability warnings that the IVI specific driver maintains.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.ClearInterchangeWarnings();
            catch e
                obj.interpretError(e);
            end
        end

        function val = GetNextInterchangeWarning(obj)
            %GETNEXTINTERCHANGEWARNING Returns the oldest warning from the interchange warning list.  Records are only added to the list if InterchangeCheck is True.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                [val] = obj.interface.GetNextInterchangeWarning();
            catch e
                obj.interpretError(e);
            end
        end

        function ResetInterchangeCheck(obj)
            %RESETINTERCHANGECHECK Resets the interchangeability checking algorithms of the driver so that methods and properties that executed prior to calling this function have no affect on whether future calls to the driver generate interchangeability warnings.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.ResetInterchangeCheck();
            catch e
                obj.interpretError(e);
            end
        end

        function val = GetNextCoercionRecord(obj)
            %GETNEXTCOERCIONRECORD Returns the oldest record from the coercion record list.  Records are only added to the list if RecordCoercions is True.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                [val] = obj.interface.GetNextCoercionRecord();
            catch e
                obj.interpretError(e);
            end
        end

    end

end
