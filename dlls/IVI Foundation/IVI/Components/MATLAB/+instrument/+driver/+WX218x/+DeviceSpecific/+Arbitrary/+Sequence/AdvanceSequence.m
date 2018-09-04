classdef AdvanceSequence < instrument.ivicom.Interface
    %ADVANCESEQUENCE IWX218xArbitrarySequenceAdvanceSequence interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = AdvanceSequence(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function CreateAdvSequence(obj,SeqHandle,LoopCount,JumpFlag)
            %CREATEADVSEQUENCE Creates an advanced sequence table (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            SeqHandle = obj.checkVectorInt32Arg(SeqHandle,'SeqHandle');
            LoopCount = obj.checkVectorInt32Arg(LoopCount,'LoopCount');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateAdvSequence(int32(SeqHandle),int32(LoopCount),uint8(JumpFlag));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function DeleteAdvSequence(obj)
            %DELETEADVSEQUENCE Use this method to delete and reset the contents of the advanced sequencing table (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.DeleteAdvSequence();
            catch e
                obj.interpretError(e);
            end
        end

        function CreateAdvSequence1(obj,SeqHandle,LoopCount,JumpFlag)
            %CREATEADVSEQUENCE1 Creates an advanced sequence table (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            SeqHandle = obj.checkVectorInt32Arg(SeqHandle,'SeqHandle');
            LoopCount = obj.checkVectorInt32Arg(LoopCount,'LoopCount');
            JumpFlag = obj.checkVectorInt32Arg(JumpFlag,'JumpFlag');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreateAdvSequence1(int32(SeqHandle),int32(LoopCount),int32(JumpFlag));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function ConfigureOnceCount(obj,Channel,Count)
            %CONFIGUREONCECOUNT Sets advance sequence once count (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Count = obj.checkScalarInt32Arg(Count,'Count');
            try
                obj.interface.ConfigureOnceCount(char(Channel),int32(Count));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Mode(obj,Channel,newValue)
            %MODE This property will select the sequence advance mode, which defines how the output advances through the sequencer steps. There are three advance modes: automatic, once and stepped.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Mode(char(Channel));
                else
                            obj.interface.Mode(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = SyncLock(obj,Channel,newValue)
            %SYNCLOCK Set sync position to advance sequence step number
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.SyncLock(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'SyncLock');
                    obj.interface.SyncLock(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = OnceCount(obj,Channel,newValue)
            %ONCECOUNT Sets or query advance sequence once count.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.OnceCount(char(Channel));
                else
                    newValue = obj.checkScalarInt32Arg(newValue,'OnceCount');
                    obj.interface.OnceCount(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
