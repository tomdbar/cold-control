classdef Sequence < instrument.ivicom.Interface
    %SEQUENCE IWX218xArbitrarySequence interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Sequence(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);

            %% Initialize properties
            try
                obj.AdvanceSequence = instrument.driver.WX218x.DeviceSpecific.Arbitrary.Sequence.AdvanceSequence(obj.interface.AdvanceSequence);
            catch %#ok<CTCH>
            end

        end
        
        function delete(obj)
            obj.AdvanceSequence = [];
        end

    end
    
    %% Public Properties
    properties

        %QUICKSEQUENCE If user want to download sequence table in quick mode, he must set this proprty to 1, else to 0.
        QuickSequence

    end

    %% Public Read Only Properties
    properties (SetAccess = private)

        %LENGTHMAX Returns the maximum number of arbitrary waveforms the function generator allows in a sequence. Read Only.
        LengthMax

        %LENGTHMIN Returns the minimum number of arbitrary waveforms the function generator allows in a sequence. Read Only.
        LengthMin

        %LOOPCOUNTMAX Returns the maximum number of times the function generator can repeat an arbitrary waveform in a sequence. Read Only.
        LoopCountMax

        %NUMBERSEQUENCEMAX Returns the maximum number of loops that the advanced sequence can execute when its advance mode is programmed to ONCE. Read Only.
        NumberSequenceMax

        %ADVANCESEQUENCE Pointer to the IWX218xArbitrarySequenceAdvanceSequence interface. Read Only.
        AdvanceSequence

    end

    %% Property access methods
    methods

        %% LengthMax property access methods
        function value = get.LengthMax(obj)
            obj.checkValidObj();
            try
                value = obj.interface.LengthMax;
            catch e
                obj.interpretError(e);
            end
        end

        %% LengthMin property access methods
        function value = get.LengthMin(obj)
            obj.checkValidObj();
            try
                value = obj.interface.LengthMin;
            catch e
                obj.interpretError(e);
            end
        end

        %% LoopCountMax property access methods
        function value = get.LoopCountMax(obj)
            obj.checkValidObj();
            try
                value = obj.interface.LoopCountMax;
            catch e
                obj.interpretError(e);
            end
        end

        %% NumberSequenceMax property access methods
        function value = get.NumberSequenceMax(obj)
            obj.checkValidObj();
            try
                value = obj.interface.NumberSequenceMax;
            catch e
                obj.interpretError(e);
            end
        end

        %% AdvanceSequence property access methods
        function value = get.AdvanceSequence(obj)
            obj.checkValidObj();
            if isempty(obj.AdvanceSequence)
                try
                    obj.AdvanceSequence = instrument.driver.WX218x.DeviceSpecific.Arbitrary.Sequence.AdvanceSequence(obj.interface.AdvanceSequence);
                catch e
                    obj.interpretError(e);
                end
            end
            value = obj.AdvanceSequence;
        end

        %% QuickSequence property access methods
        function value = get.QuickSequence(obj)
            obj.checkValidObj();
            try
                value = obj.interface.QuickSequence;
            catch e
                obj.interpretError(e);
            end
        end
		function set.QuickSequence(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarInt32Arg(newValue,'QuickSequence');
            try
                obj.interface.QuickSequence = newValue;
            catch e
                obj.interpretError(e);
            end
        end

    end

    %% Public Methods
    methods

        function Clear(obj,Handle)
            %CLEAR Use this method to delete specified sequence or to delete all sequences and to free space for fresh sequence tables (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(2,2,nargin,'struct'))
            Handle = obj.checkScalarInt32Arg(Handle,'Handle');
            try
                obj.interface.Clear(int32(Handle));
            catch e
                obj.interpretError(e);
            end
        end

        function Configure(obj,Channel,Handle,Gain,Offset)
            %CONFIGURE This method configures the parameters of the function generator that affect arbitrary sequence generation (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(5,5,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Handle = obj.checkScalarInt32Arg(Handle,'Handle');
            Gain = obj.checkScalarDoubleArg(Gain,'Gain');
            Offset = obj.checkScalarDoubleArg(Offset,'Offset');
            try
                obj.interface.Configure(char(Channel),int32(Handle),double(Gain),double(Offset));
            catch e
                obj.interpretError(e);
            end
        end

        function val = Create(obj,WfmHandle,LoopCount)
            %CREATE This method creates an arbitrary sequence from an array of waveform handles and an array of corresponding loop counts (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            WfmHandle = obj.checkVectorInt32Arg(WfmHandle,'WfmHandle');
            LoopCount = obj.checkVectorInt32Arg(LoopCount,'LoopCount');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                [val] = obj.interface.Create(int32(WfmHandle),int32(LoopCount));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function val = CreateSequenceAdv(obj,WfmHandle,LoopCount,JumpFlag)
            %CREATESEQUENCEADV This method creates an arbitrary sequence from an array of waveform handles, array of corresponding loop counts and array of JumpFlag (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            WfmHandle = obj.checkVectorInt32Arg(WfmHandle,'WfmHandle');
            LoopCount = obj.checkVectorInt32Arg(LoopCount,'LoopCount');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                [val] = obj.interface.CreateSequenceAdv(int32(WfmHandle),int32(LoopCount),uint8(JumpFlag));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function SetCoupleActiveSequence(obj,SeqNum1,SeqNum2)
            %SETCOUPLEACTIVESEQUENCE This method sets the selected seq numbers for the two part simultaneously (only for 4Ch. models).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            SeqNum1 = obj.checkScalarInt32Arg(SeqNum1,'SeqNum1');
            SeqNum2 = obj.checkScalarInt32Arg(SeqNum2,'SeqNum2');
            try
                obj.interface.SetCoupleActiveSequence(int32(SeqNum1),int32(SeqNum2));
            catch e
                obj.interpretError(e);
            end
        end

        function SetActiveSequence(obj,Channel,SeqNum)
            %SETACTIVESEQUENCE Sets active sequence for selected Channel (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            SeqNum = obj.checkScalarInt32Arg(SeqNum,'SeqNum');
            try
                obj.interface.SetActiveSequence(char(Channel),int32(SeqNum));
            catch e
                obj.interpretError(e);
            end
        end

        function val = CreateSequenceAdv1(obj,WfmHandle,LoopCount,JumpFlag)
            %CREATESEQUENCEADV1 This method creates an arbitrary sequence from an array of waveform handles, array of corresponding loop counts and array of JumpFlag (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            WfmHandle = obj.checkVectorInt32Arg(WfmHandle,'WfmHandle');
            LoopCount = obj.checkVectorInt32Arg(LoopCount,'LoopCount');
            JumpFlag = obj.checkVectorInt32Arg(JumpFlag,'JumpFlag');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                [val] = obj.interface.CreateSequenceAdv1(int32(WfmHandle),int32(LoopCount),int32(JumpFlag));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function ConfigureAdvanceMode(obj,Channel,AdvanceMode)
            %CONFIGUREADVANCEMODE Selects the sequence advance mode (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureAdvanceMode(char(Channel),int32(AdvanceMode));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSeqJumpEvent(obj,Channel,JumpEvent)
            %CONFIGURESEQJUMPEVENT Use this method to configure  the source of the jump signal (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureSeqJumpEvent(char(Channel),int32(JumpEvent));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSeqPrestep(obj,Channel,Prestep)
            %CONFIGURESEQPRESTEP Sets Sequence Prestep as Wave or DC (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureSeqPrestep(char(Channel),int32(Prestep));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSeqSource(obj,Channel,Source)
            %CONFIGURESEQSOURCE Use this method to configure the source of the sequence (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureSeqSource(char(Channel),int32(Source));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSeqSyncLock(obj,Channel,SyncLock)
            %CONFIGURESEQSYNCLOCK Set sync position to sequence step number (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            SyncLock = obj.checkScalarInt32Arg(SyncLock,'SyncLock');
            try
                obj.interface.ConfigureSeqSyncLock(char(Channel),int32(SyncLock));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureSeqTiming(obj,Channel,Timing)
            %CONFIGURESEQTIMING Use this method to configure the timing characteristics of the sequence select command (not for WS8351,WS8352).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigureSeqTiming(char(Channel),int32(Timing));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigureOnceCount(obj,Channel,Count)
            %CONFIGUREONCECOUNT Sets sequence once count (not for WS8351,WS8352).
            
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

        function val = AdvanceMode(obj,Channel,newValue)
            %ADVANCEMODE Selects the sequence advance mode.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.AdvanceMode(char(Channel));
                else
                            obj.interface.AdvanceMode(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = JumpEvent(obj,Channel,newValue)
            %JUMPEVENT Use this property to set or query the source of the jump signal.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.JumpEvent(char(Channel));
                else
                            obj.interface.JumpEvent(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Source(obj,Channel,newValue)
            %SOURCE Use this property to set or query the source of the sequence.
            
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

        function val = SyncLock(obj,Channel,newValue)
            %SYNCLOCK Set sync position to sequence step number.
            
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

        function val = Timing(obj,Channel,newValue)
            %TIMING Use this property to set or query the timing characteristics of the sequence select command.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Timing(char(Channel));
                else
                            obj.interface.Timing(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Prestep(obj,Channel,newValue)
            %PRESTEP Sets Sequence Prestep as Wave or DC.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Prestep(char(Channel));
                else
                            obj.interface.Prestep(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = OnceCount(obj,Channel,newValue)
            %ONCECOUNT Sets or query sequence once count.
            
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
