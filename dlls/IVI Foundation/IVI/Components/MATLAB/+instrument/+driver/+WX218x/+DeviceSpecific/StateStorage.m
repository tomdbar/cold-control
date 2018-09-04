classdef StateStorage < instrument.ivicom.Interface
    %STATESTORAGE IWX218xStateStorage interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = StateStorage(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Properties
    properties

        %CELLRECALL Selects an active memory cell number. Consequent recall commands will affect this cell only.
        CellRecall

        %CELLSTORE Selects an active memory cell number. Consequent store commands will affect this cell only.
        CellStore

        %CONFIGURATIONSTORE Use this property to select what you intend to store in the active memory cell.
        ConfigurationStore

        %TARGETRECALL Use this property to select the source of your recall operation.
        TargetRecall

        %TARGETSTORE Use this property to select the source of your store operation.
        TargetStore

        %STOREENABLED Enables or Disables system store.
        StoreEnabled

        %RECALLENABLED Enables or Disables system recall.
        RecallEnabled

    end

    %% Public Read Only Properties
    properties (SetAccess = private)

        %CONFIGURATIONRECALL Use this property to query what you have store in the active memory cell. Read Only.
        ConfigurationRecall

    end

    %% Property access methods
    methods

        %% CellRecall property access methods
        function value = get.CellRecall(obj)
            obj.checkValidObj();
            try
                value = obj.interface.CellRecall;
            catch e
                obj.interpretError(e);
            end
        end
		function set.CellRecall(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarInt32Arg(newValue,'CellRecall');
            try
                obj.interface.CellRecall = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% CellStore property access methods
        function value = get.CellStore(obj)
            obj.checkValidObj();
            try
                value = obj.interface.CellStore;
            catch e
                obj.interpretError(e);
            end
        end
		function set.CellStore(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarInt32Arg(newValue,'CellStore');
            try
                obj.interface.CellStore = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% ConfigurationStore property access methods
        function value = get.ConfigurationStore(obj)
            obj.checkValidObj();
            try
                value = obj.interface.ConfigurationStore;
            catch e
                obj.interpretError(e);
            end
        end
		function set.ConfigurationStore(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.ConfigurationStore = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% TargetRecall property access methods
        function value = get.TargetRecall(obj)
            obj.checkValidObj();
            try
                value = obj.interface.TargetRecall;
            catch e
                obj.interpretError(e);
            end
        end
		function set.TargetRecall(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.TargetRecall = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% TargetStore property access methods
        function value = get.TargetStore(obj)
            obj.checkValidObj();
            try
                value = obj.interface.TargetStore;
            catch e
                obj.interpretError(e);
            end
        end
		function set.TargetStore(obj,newValue)
			obj.checkValidObj();
            try
                obj.interface.TargetStore = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% ConfigurationRecall property access methods
        function value = get.ConfigurationRecall(obj)
            obj.checkValidObj();
            try
                value = obj.interface.ConfigurationRecall;
            catch e
                obj.interpretError(e);
            end
        end

        %% StoreEnabled property access methods
        function value = get.StoreEnabled(obj)
            obj.checkValidObj();
            try
                value = obj.interface.StoreEnabled;
            catch e
                obj.interpretError(e);
            end
        end
		function set.StoreEnabled(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarBoolArg(newValue,'StoreEnabled');
            try
                obj.interface.StoreEnabled = newValue;
            catch e
                obj.interpretError(e);
            end
        end

        %% RecallEnabled property access methods
        function value = get.RecallEnabled(obj)
            obj.checkValidObj();
            try
                value = obj.interface.RecallEnabled;
            catch e
                obj.interpretError(e);
            end
        end
		function set.RecallEnabled(obj,newValue)
			obj.checkValidObj();
            newValue = obj.checkScalarBoolArg(newValue,'RecallEnabled');
            try
                obj.interface.RecallEnabled = newValue;
            catch e
                obj.interpretError(e);
            end
        end

    end

    %% Public Methods
    methods

        function Clear(obj)
            %CLEAR This method clear all cells.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.Clear();
            catch e
                obj.interpretError(e);
            end
        end

        function Load(obj)
            %LOAD Use this method to select update the front panel and arbitrary memory with the information stored in the active memory cell.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.Load();
            catch e
                obj.interpretError(e);
            end
        end

        function Recall(obj,Cell,Target)
            %RECALL This method configures parameters for recall operation.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Cell = obj.checkScalarInt32Arg(Cell,'Cell');
            try
                obj.interface.Recall(int32(Cell),int32(Target));
            catch e
                obj.interpretError(e);
            end
        end

        function Save(obj)
            %SAVE Use this method to select update the active memory cell with the front panel settings, waveform or both.
            
            obj.checkValidObj();
			error(nargchk(1,1,nargin,'struct'))
            try
                obj.interface.Save();
            catch e
                obj.interpretError(e);
            end
        end

        function Store(obj,Cell,Configuration,Target)
            %STORE This method configures parameters for store operation.
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Cell = obj.checkScalarInt32Arg(Cell,'Cell');
            try
                obj.interface.Store(int32(Cell),int32(Configuration),int32(Target));
            catch e
                obj.interpretError(e);
            end
        end

    end

end
