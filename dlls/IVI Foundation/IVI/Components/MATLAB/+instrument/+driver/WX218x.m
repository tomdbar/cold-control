classdef WX218x < instrument.ivicom.IviFgen
    %WX218X IVI Driver for WX218x
    
    %% Construction/Clean up
    methods

        function obj = WX218x()
            
            %% construct superclass
            obj@instrument.ivicom.IviFgen('WX218x.WX218x');
            
            try
                deviceSpecificInterface = obj.getCOMInterface('IWX218x');
            catch %#ok<CTCH>
                error('instrument:driver:driverInvalid','The interface ''IWX218x'' was not found.  The driver specified may not be an IVI-COM driver.');
            end
            try
                iviDriverInterface = obj.getCOMInterface('IIviDriver');
            catch %#ok<CTCH>
                error('instrument:driver:driverInvalid','The interface ''IIviDriver'' was not found.  The driver specified may not be an IviDriver IVI-COM driver.');
            end

            %% Initialize properties
            try
                obj.DeviceSpecific = instrument.driver.WX218x.DeviceSpecific(deviceSpecificInterface);
                obj.IviDriver = instrument.ivicom.IviDriver(iviDriverInterface);
            catch %#ok<CTCH>
            end

        end

    end
    
    %% Public Read Only Properties
    properties (SetAccess = private)

        %DEVICESPECIFIC Device Specific interface for the IVI-COM driver
        %Read Only.
        DeviceSpecific

        %IVIDRIVER IviDriver interface for the IVI-COM driver
        %Read Only.
        IviDriver

    end

end
