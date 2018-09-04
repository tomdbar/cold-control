classdef Composer < instrument.ivicom.Interface
    %COMPOSER IWX218xPatternComposer interface.
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Composer(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Methods
    methods

        function CreatePatternComposerFastData(obj,Channel,AmplLevel,DwellTime)
            %CREATEPATTERNCOMPOSERFASTDATA This method loads pattern composer start data in binary format in to the instrument.
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            AmplLevel = obj.checkVectorDoubleArg(AmplLevel,'AmplLevel');
            DwellTime = obj.checkVectorDoubleArg(DwellTime,'DwellTime');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreatePatternComposerFastData(char(Channel),double(AmplLevel),double(DwellTime));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function LoadPatternFile(obj,Channel,FileName)
            %LOADPATTERNFILE This method loads pattern data file in to the instrument.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FileName = obj.checkScalarStringArg(FileName,'FileName');
            try
                obj.interface.LoadPatternFile(char(Channel),char(FileName));
            catch e
                obj.interpretError(e);
            end
        end

        function CreatePatternComposerLinearData(obj,Channel,AmplLevel,DwellTime)
            %CREATEPATTERNCOMPOSERLINEARDATA This method loads pattern composer linear data in binary format in to the instrument.
            
            obj.checkValidObj();
			error(nargchk(4,4,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            AmplLevel = obj.checkVectorDoubleArg(AmplLevel,'AmplLevel');
            DwellTime = obj.checkVectorDoubleArg(DwellTime,'DwellTime');
            singleDimFlag = feature('COM_SafeArraySingleDim');
            try
                feature('COM_SafeArraySingleDim',1);
                obj.interface.CreatePatternComposerLinearData(char(Channel),double(AmplLevel),double(DwellTime));
            catch e
                feature('COM_SafeArraySingleDim',singleDimFlag);
                obj.interpretError(e);
            end
            feature('COM_SafeArraySingleDim',singleDimFlag);
        end

        function ConfigurePatternCompFastStart(obj,Channel,FastStart)
            %CONFIGUREPATTERNCOMPFASTSTART Sets fast start for pattern composer (not for 4 Ch. models, WX218x).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            FastStart = obj.checkScalarDoubleArg(FastStart,'FastStart');
            try
                obj.interface.ConfigurePatternCompFastStart(char(Channel),double(FastStart));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternCompLinearStart(obj,Channel,LinearStart)
            %CONFIGUREPATTERNCOMPLINEARSTART Sets linear start for pattern composer (not for 4 Ch. models, WX218x).
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            LinearStart = obj.checkScalarDoubleArg(LinearStart,'LinearStart');
            try
                obj.interface.ConfigurePatternCompLinearStart(char(Channel),double(LinearStart));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternCompResolution(obj,Channel,Resolution)
            %CONFIGUREPATTERNCOMPRESOLUTION Sets resolution for pattern composer.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            Resolution = obj.checkScalarDoubleArg(Resolution,'Resolution');
            try
                obj.interface.ConfigurePatternCompResolution(char(Channel),double(Resolution));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternCompResType(obj,Channel,ResType)
            %CONFIGUREPATTERNCOMPRESTYPE Sets resolution type for pattern composer.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigurePatternCompResType(char(Channel),int32(ResType));
            catch e
                obj.interpretError(e);
            end
        end

        function ConfigurePatternCompTransType(obj,Channel,TransitionType)
            %CONFIGUREPATTERNCOMPTRANSTYPE Sets transition type for pattern composer.
            
            obj.checkValidObj();
			error(nargchk(3,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                obj.interface.ConfigurePatternCompTransType(char(Channel),int32(TransitionType));
            catch e
                obj.interpretError(e);
            end
        end

        function val = TransitionType(obj,Channel,newValue)
            %TRANSITIONTYPE Sets transition type for pattern composer.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.TransitionType(char(Channel));
                else
                            obj.interface.TransitionType(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = LinearStart(obj,Channel,newValue)
            %LINEARSTART Sets linear start for pattern composer.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.LinearStart(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'LinearStart');
                    obj.interface.LinearStart(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = Resolution(obj,Channel,newValue)
            %RESOLUTION Sets resolution for pattern composer.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.Resolution(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'Resolution');
                    obj.interface.Resolution(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = ResolutionType(obj,Channel,newValue)
            %RESOLUTIONTYPE Sets resolution type for pattern composer.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.ResolutionType(char(Channel));
                else
                            obj.interface.ResolutionType(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

        function val = FastStart(obj,Channel,newValue)
            %FASTSTART Sets fast start for pattern composer.
            
            obj.checkValidObj();
			error(nargchk(2,3,nargin,'struct'))
            Channel = obj.checkScalarStringArg(Channel,'Channel');
            try
                if nargin == 2
                    [val] = obj.interface.FastStart(char(Channel));
                else
                    newValue = obj.checkScalarDoubleArg(newValue,'FastStart');
                    obj.interface.FastStart(char(Channel),newValue);
                end
            catch e
                obj.interpretError(e);
            end
        end

    end

end
