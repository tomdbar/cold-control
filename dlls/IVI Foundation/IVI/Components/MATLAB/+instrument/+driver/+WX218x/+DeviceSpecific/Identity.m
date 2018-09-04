classdef Identity < instrument.ivicom.Interface
    %IDENTITY IVI Driver identity interface
    
    %% Construction/Clean up
    methods (Hidden=true)

        function obj = Identity(interface)
            
            %% construct superclass
            obj@instrument.ivicom.Interface(interface);
        end
        
        function delete(obj)
        end

    end
    
    %% Public Read Only Properties
    properties (SetAccess = private)

        %INSTRUMENTMANUFACTURER The name of the manufacturer reported by the physical instrument.  If Simulation is enabled or the instrument is not capable of reporting the name of the manufacturer, a string is returned that explains the condition. Manufacturer is limited to 256 bytes Read Only.
        InstrumentManufacturer

        %INSTRUMENTMODEL The model number or name reported by the physical instrument.  If Simulation is enabled or the instrument is not capable of reporting the model number or name, a string is returned that explains the condition.  Model is limited to 256 bytes Read Only.
        InstrumentModel

        %INSTRUMENTFIRMWAREREVISION The firmware revision reported by the physical instrument.  If Simulation is enabled or the instrument is not capable of reporting the firmware revision, a string is returned that explains the condition. Read Only.
        InstrumentFirmwareRevision

        %IDENTIFIER The case-sensitive unique identifier of the implementing IVI-COM instrument driver. Read Only.
        Identifier

        %SUPPORTEDINSTRUMENTMODELS A comma-separated list of instrument models that the IVI specific driver can control.  The string does not include an abbreviation for the manufacturer if it is the same for all models. Read Only.
        SupportedInstrumentModels

        %SPECIFICATIONMAJORVERSION For IVI class-compliant drivers, the major version number of the instrument class specification.  If the driver is not class compliant, the driver returns zero. Read Only.
        SpecificationMajorVersion

        %SPECIFICATIONMINORVERSION For IVI class-compliant drivers, the minor version number of the instrument class specification.  If the driver is not class compliant, the driver returns zero. Read Only.
        SpecificationMinorVersion

        %GROUPCAPABILITIES A comma-separated list of the class capability groups implemented by the driver.  Capability group names are documented in the IVI class specifications.  If the driver is not class compliant, the driver returns an empty string. Read Only.
        GroupCapabilities

        %DESCRIPTION A brief description of the implementing component.  Description is limted to 256 bytes. Read Only.
        Description

        %REVISION The revision of the implementing component.  Refer to IVI 3.1, Section 3.1.2.2, for a description of revision syntax and semantics.  Revision is limited to 256 bytes. Read Only.
        Revision

        %VENDOR The name of the vendor that supplies the implementing component.  Vendor is limited to 256 bytes. Read Only.
        Vendor

    end

    %% Property access methods
    methods

        %% InstrumentManufacturer property access methods
        function value = get.InstrumentManufacturer(obj)
            obj.checkValidObj();
            try
                value = obj.interface.InstrumentManufacturer;
            catch e
                obj.interpretError(e);
            end
        end

        %% InstrumentModel property access methods
        function value = get.InstrumentModel(obj)
            obj.checkValidObj();
            try
                value = obj.interface.InstrumentModel;
            catch e
                obj.interpretError(e);
            end
        end

        %% InstrumentFirmwareRevision property access methods
        function value = get.InstrumentFirmwareRevision(obj)
            obj.checkValidObj();
            try
                value = obj.interface.InstrumentFirmwareRevision;
            catch e
                obj.interpretError(e);
            end
        end

        %% Identifier property access methods
        function value = get.Identifier(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Identifier;
            catch e
                obj.interpretError(e);
            end
        end

        %% SupportedInstrumentModels property access methods
        function value = get.SupportedInstrumentModels(obj)
            obj.checkValidObj();
            try
                value = obj.interface.SupportedInstrumentModels;
            catch e
                obj.interpretError(e);
            end
        end

        %% SpecificationMajorVersion property access methods
        function value = get.SpecificationMajorVersion(obj)
            obj.checkValidObj();
            try
                value = obj.interface.SpecificationMajorVersion;
            catch e
                obj.interpretError(e);
            end
        end

        %% SpecificationMinorVersion property access methods
        function value = get.SpecificationMinorVersion(obj)
            obj.checkValidObj();
            try
                value = obj.interface.SpecificationMinorVersion;
            catch e
                obj.interpretError(e);
            end
        end

        %% GroupCapabilities property access methods
        function value = get.GroupCapabilities(obj)
            obj.checkValidObj();
            try
                value = obj.interface.GroupCapabilities;
            catch e
                obj.interpretError(e);
            end
        end

        %% Description property access methods
        function value = get.Description(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Description;
            catch e
                obj.interpretError(e);
            end
        end

        %% Revision property access methods
        function value = get.Revision(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Revision;
            catch e
                obj.interpretError(e);
            end
        end

        %% Vendor property access methods
        function value = get.Vendor(obj)
            obj.checkValidObj();
            try
                value = obj.interface.Vendor;
            catch e
                obj.interpretError(e);
            end
        end

    end

end
