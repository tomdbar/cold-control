classdef Utility < instrument.ivicom.Interface
    %UTILITY IVI Driver utility interface
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Utility(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function Reset(obj)
            %RESET Places the instrument in a known state and configures instrument options on which the IVI specific driver depends (for example, enabling/disabling headers).  For an IEEE 488.2 instrument, Reset sends the command string *RST to the instrument.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.Reset();
            catch e
                obj.interpretError(e);
            end
        end

        function ResetWithDefaults(obj)
            %RESETWITHDEFAULTS Does the equivalent of Reset and then, (1) disables class extension capability groups, (2) sets attributes to initial values defined by class specs, and (3) configures the driver to option string settings used when Initialize was last executed.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.ResetWithDefaults();
            catch e
                obj.interpretError(e);
            end
        end

        function Disable(obj)
            %DISABLE Quickly places the instrument in a state where it has no, or minimal, effect on the external system to which it is connected.  This state is not necessarily a known state.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.Disable();
            catch e
                obj.interpretError(e);
            end
        end

        function [returnTestResult,returnTestMessage] = SelfTest(obj)
            %SELFTEST Performs an instrument self test, waits for the instrument to complete the test, and queries the instrument for the results.  If the instrument passes the test, TestResult is zero and TestMessage is 'Self test passed'.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                [returnTestResult,returnTestMessage] = obj.interface.SelfTest(int32(0),char(0));
            catch e
                obj.interpretError(e);
            end
        end

        function [returnErrorCode,returnErrorMessage] = ErrorQuery(obj)
            %ERRORQUERY Queries the instrument and returns instrument specific error information.  This function can be used when QueryInstrumentStatus is True to retrieve error details when the driver detects an instrument error.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                [returnErrorCode,returnErrorMessage] = obj.interface.ErrorQuery(int32(0),char(0));
            catch e
                obj.interpretError(e);
            end
        end

        function LockObject(obj)
            %LOCKOBJECT Obtains a multithread lock on the driver after waiting until all other execution threads have released their locks on the instrument session.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.LockObject();
            catch e
                obj.interpretError(e);
            end
        end

        function UnlockObject(obj)
            %UNLOCKOBJECT Releases a previously obtained mutlithread lock.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.UnlockObject();
            catch e
                obj.interpretError(e);
            end
        end

    end

end
