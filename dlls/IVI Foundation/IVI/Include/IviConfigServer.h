/************************************************************************* 
    IviConfigServer.h

    This source file was developed by and is the property of National 
    Instruments.  Use and distribution of this file is governed by 
    US Copyright law and the IVI Foundation Shared Open-Source Component 
    Licensing agreement. 

    Copyright 2008, National Instruments
*************************************************************************/
#ifndef __IviConfigStore_H__
#define __IviConfigStore_H__

#ifdef __cplusplus
    extern "C" { 
#endif

#include "IviVisaType.h"

/*------------------------------------------------------------------------
    Handle datatypes
/------------------------------------------------------------------------*/
typedef void* IviConfigHandle;

typedef IviConfigHandle IviConfigStoreHandle;

typedef IviConfigHandle IviConfigComponentHandle;

typedef IviConfigHandle IviLogicalNameCollectionHandle;
typedef IviConfigHandle IviLogicalNameHandle;

typedef IviConfigHandle IviSessionCollectionHandle;
typedef IviConfigHandle IviSessionHandle;

typedef IviConfigHandle IviDriverSessionCollectionHandle;
typedef IviConfigHandle IviDriverSessionHandle;

typedef IviConfigHandle IviHardwareAssetCollectionHandle;
typedef IviConfigHandle IviHardwareAssetHandle;

typedef IviConfigHandle IviSoftwareModuleCollectionHandle;
typedef IviConfigHandle IviSoftwareModuleHandle;

typedef IviConfigHandle IviPublishedAPICollectionHandle;
typedef IviConfigHandle IviPublishedAPIHandle;

typedef IviConfigHandle IviVirtualNameCollectionHandle;
typedef IviConfigHandle IviVirtualNameHandle;

typedef IviConfigHandle IviVirtualRangeCollectionHandle;
typedef IviConfigHandle IviVirtualRangeHandle;

typedef IviConfigHandle IviPhysicalNameCollectionHandle;
typedef IviConfigHandle IviPhysicalNameHandle;

typedef IviConfigHandle IviPhysicalRangeCollectionHandle;
typedef IviConfigHandle IviPhysicalRangeHandle;

typedef IviConfigHandle IviDataComponentCollectionHandle;
typedef IviConfigHandle IviDataComponentHandle;

/*------------------------------------------------------------------------
    Defined values
/------------------------------------------------------------------------*/
/*  IviConfigStore PropertyID parameter defined values */
#define IVICONFIG_VAL_CONFIG_STORE_NAME                           1L
#define IVICONFIG_VAL_CONFIG_STORE_DESCRIPTION                    2L
#define IVICONFIG_VAL_CONFIG_STORE_MASTER_LOCATION                3L
#define IVICONFIG_VAL_CONFIG_STORE_ACTUAL_LOCATION                4L
#define IVICONFIG_VAL_CONFIG_STORE_PROC_DEFAULT_LOCATION          5L
#define IVICONFIG_VAL_CONFIG_STORE_REVISION                       6L
#define IVICONFIG_VAL_CONFIG_STORE_VENDOR                         7L
#define IVICONFIG_VAL_CONFIG_STORE_SPEC_MAJOR_VERSION             8L
#define IVICONFIG_VAL_CONFIG_STORE_SPEC_MINOR_VERSION             9L

/*  IviConfigComponent PropertyID parameter defined values */
#define IVICONFIG_VAL_CONFIG_COMPONENT_NAME                       1L
#define IVICONFIG_VAL_CONFIG_COMPONENT_DESCRIPTION                2L

/*  IviLogicalName PropertyID parameter defined values */
#define IVICONFIG_VAL_LOGICAL_NAME_NAME                           1L
#define IVICONFIG_VAL_LOGICAL_NAME_DESCRIPTION                    2L

/*  IviHardwareAsset PropertyID parameter defined values */
/* #define IVICONFIG_VAL_CONFIG_COMPONENT_NAME           DEFINED ABOVE */
/* #define IVICONFIG_VAL_CONFIG_COMPONENT_DESCRIPTION    DEFINED ABOVE */
#define IVICONFIG_VAL_HARDWARE_ASSET_IO_DESCRIPTOR                3L

/*  IviSession PropertyID parameter defined values */
/* #define IVICONFIG_VAL_CONFIG_COMPONENT_NAME           DEFINED ABOVE */
/* #define IVICONFIG_VAL_CONFIG_COMPONENT_DESCRIPTION    DEFINED ABOVE */
#define IVICONFIG_VAL_SESSION_SOFTWARE_MODULE_NAME    			   3L

/*  IviDriverSession PropertyID parameter defined values */
/* #define IVICONFIG_VAL_CONFIG_COMPONENT_NAME           DEFINED ABOVE */
/* #define IVICONFIG_VAL_CONFIG_COMPONENT_DESCRIPTION    DEFINED ABOVE */
/* #define IVICONFIG_VAL_SESSION_SOFTWARE_MODULE_NAME    DEFINED ABOVE */
#define IVICONFIG_VAL_DRIVER_SESSION_CACHE                        4L
#define IVICONFIG_VAL_DRIVER_SESSION_INTERCHANGE_CHECK            5L
#define IVICONFIG_VAL_DRIVER_SESSION_QUERY_INSTR_STATUS           6L
#define IVICONFIG_VAL_DRIVER_SESSION_RANGE_CHECK                  7L
#define IVICONFIG_VAL_DRIVER_SESSION_RECORD_COERCIONS             8L
#define IVICONFIG_VAL_DRIVER_SESSION_SIMULATE                     9L
#define IVICONFIG_VAL_DRIVER_SESSION_DRIVER_SETUP                 10L

/*  IviSoftwareModule PropertyID parameter defined values */
/* #define IVICONFIG_VAL_CONFIG_COMPONENT_NAME           DEFINED ABOVE */
/* #define IVICONFIG_VAL_CONFIG_COMPONENT_DESCRIPTION    DEFINED ABOVE */
#define IVICONFIG_VAL_SW_MODULE_PATH                              3L
#define IVICONFIG_VAL_SW_MODULE_PREFIX                            4L
#define IVICONFIG_VAL_SW_MODULE_PROGID                            5L
#define IVICONFIG_VAL_SW_MODULE_SUPPORTED_INSTR_MODELS            6L
#define IVICONFIG_VAL_SW_MODULE_PATH_32                           7L
#define IVICONFIG_VAL_SW_MODULE_PATH_64                           8L
#define IVICONFIG_VAL_SW_MODULE_ASMBLY_QLFD_CLASS_NAME            9L

/*  IviVirtualName PropertyID parameter defined values */
#define IVICONFIG_VAL_VIRTUAL_NAME_NAME                           1L
#define IVICONFIG_VAL_VIRTUAL_NAME_MAPTO                          2L

/*  IviVirtualRange PropertyID parameter defined values */
#define IVICONFIG_VAL_VIRTUAL_RANGE_NAME                          1L
#define IVICONFIG_VAL_VIRTUAL_RANGE_MIN                           2L
#define IVICONFIG_VAL_VIRTUAL_RANGE_MAX                           3L
#define IVICONFIG_VAL_VIRTUAL_RANGE_START_PHYSICAL_INDEX          4L

/*  IviPhysicalName PropertyID parameter defined values */
#define IVICONFIG_VAL_PHYSICAL_NAME_NAME                          1L
#define IVICONFIG_VAL_PHYSICAL_NAME_RCNAME                        2L

/*  IviPhysicalRange PropertyID parameter defined values */
#define IVICONFIG_VAL_PHYSICAL_RANGE_NAME                         1L
#define IVICONFIG_VAL_PHYSICAL_RANGE_MIN                          2L
#define IVICONFIG_VAL_PHYSICAL_RANGE_MAX                          3L

/*  IviPublishedAPI PropertyID parameter defined values */
#define IVICONFIG_VAL_PUBLISHED_API_NAME                          1L
#define IVICONFIG_VAL_PUBLISHED_API_TYPE                          2L
#define IVICONFIG_VAL_PUBLISHED_API_MAJOR_VERSION                 3L
#define IVICONFIG_VAL_PUBLISHED_API_MINOR_VERSION                 4L

/*  IviDataComponent PropertyID parameter defined values */
#define IVICONFIG_VAL_DATA_COMPONENT_NAME                         1L
#define IVICONFIG_VAL_DATA_COMPONENT_DESCRIPTION                  2L
#define IVICONFIG_VAL_DATA_COMPONENT_HELP_CONTEXT_ID              3L
#define IVICONFIG_VAL_DATA_COMPONENT_HELP_FILE_PATH               4L
#define IVICONFIG_VAL_DATA_COMPONENT_READ_ONLY                    5L
#define IVICONFIG_VAL_DATA_COMPONENT_SW_MODULE_KEY                6L
#define IVICONFIG_VAL_DATA_COMPONENT_TYPE                         7L
#define IVICONFIG_VAL_DATA_COMPONENT_USED_IN_SESSION              8L
#define IVICONFIG_VAL_DATA_COMPONENT_VALUE                        9L
#define IVICONFIG_VAL_DATA_COMPONENT_UNITS                        10L

/*  IviDataComponent DataComponentType parameter defined values */
#define IVICONFIG_VAL_TYPE_BOOLEAN                                1L
#define IVICONFIG_VAL_TYPE_INTEGER                                2L
#define IVICONFIG_VAL_TYPE_REAL                                   3L
#define IVICONFIG_VAL_TYPE_STRING                                 4L

/*------------------------------------------------------------------------
    Function prototypes
/------------------------------------------------------------------------*/
/*  C-Only functions */
ViStatus _VI_FUNC IviConfig_Initialize (IviConfigStoreHandle* ConfigStoreHandle);
ViStatus _VI_FUNC IviConfig_ClearError (void);

ViStatus _VI_FUNC IviConfig_GetError (ViInt32 BufferSize,
                                      ViChar ErrorDescription[]);

ViStatus _VI_FUNC IviConfig_DisposeHandle (IviConfigHandle handle);
ViStatus _VI_FUNC IviConfig_Close (IviConfigStoreHandle ConfigStoreHandle);

/*  IviConfigStore functions */
   /* functions */
ViStatus _VI_FUNC IviConfig_Deserialize (IviConfigStoreHandle ConfigStoreHandle,
                                         ViConstString Location);

ViStatus _VI_FUNC IviConfig_Serialize (IviConfigStoreHandle ConfigStoreHandle,
                                       ViConstString Location);

ViStatus _VI_FUNC IviConfig_GetSession (IviConfigStoreHandle ConfigStoreHandle,
                                        ViConstString Name,       // The logical name or the session name
                                        IviSessionHandle* SessionHandle);

ViStatus _VI_FUNC IviConfig_GetDriverSession (IviConfigStoreHandle ConfigStoreHandle,
                                              ViConstString Name, // The logical name or the session name
                                              IviDriverSessionHandle* DriverSessionHandle);

   /* Properties */
ViStatus _VI_FUNC IviConfig_GetConfigStorePropertyViString (IviConfigStoreHandle ConfigStoreHandle,
                                                            ViInt32 PropertyID,
                                                            ViInt32 BufferSize,
                                                            ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetConfigStorePropertyViString (IviConfigStoreHandle ConfigStoreHandle,
                                                            ViInt32 PropertyID,
                                                            ViConstString Value);

ViStatus _VI_FUNC IviConfig_GetConfigStorePropertyViInt32 (IviConfigStoreHandle ConfigStoreHandle,
                                                           ViInt32 PropertyID,
                                                           ViInt32* Value);

   /* Reference properties */
ViStatus _VI_FUNC IviConfig_GetConfigStoreLogicalNameCollection (IviConfigStoreHandle ConfigStoreHandle,
                                                                 IviLogicalNameCollectionHandle* LogicalNameCollectionHandle);

ViStatus _VI_FUNC IviConfig_GetConfigStoreSessionCollection (IviConfigStoreHandle ConfigStoreHandle,
                                                             IviSessionCollectionHandle* SessionCollectionHandle);

ViStatus _VI_FUNC IviConfig_GetConfigStoreDriverSessionCollection (IviConfigStoreHandle ConfigStoreHandle,
                                                                   IviDriverSessionCollectionHandle* DriverSessionCollectionHandle);

ViStatus _VI_FUNC IviConfig_GetConfigStoreHardwareAssetCollection (IviConfigStoreHandle ConfigStoreHandle,
                                                                   IviHardwareAssetCollectionHandle* HardwareAssetCollection);

ViStatus _VI_FUNC IviConfig_GetConfigStoreSoftwareModuleCollection (IviConfigStoreHandle ConfigStoreHandle,
                                                                    IviSoftwareModuleCollectionHandle* SoftwareModuleCollection);

ViStatus _VI_FUNC IviConfig_GetConfigStorePublishedAPICollection (IviConfigStoreHandle ConfigStoreHandle,
                                                                  IviPublishedAPICollectionHandle* PublishedAPICollection);

/*  IviConfigComponent functions */
      /* Reference properties */
ViStatus _VI_FUNC IviConfig_GetConfigComponentDataComponentCollection (IviConfigComponentHandle ConfigComponentHandle,
                                                                       IviDataComponentCollectionHandle* DataComponentCollectionHandle);

/*  IviLogicalName functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_GetLogicalNameCount (IviLogicalNameCollectionHandle LogicalNameCollectionHandle,
                                                 ViInt32* ItemCount);

ViStatus _VI_FUNC IviConfig_GetLogicalNameItemByIndex (IviLogicalNameCollectionHandle LogicalNameCollectionHandle,
                                                       ViInt32 ItemIndex,
                                                       IviLogicalNameHandle* LogicalNameHandle);

ViStatus _VI_FUNC IviConfig_GetLogicalNameItemByName (IviLogicalNameCollectionHandle LogicalNameCollectionHandle,
                                                      ViConstString ItemName,
                                                      IviLogicalNameHandle* LogicalNameHandle);

ViStatus _VI_FUNC IviConfig_CreateLogicalName (IviLogicalNameCollectionHandle LogicalNameCollectionHandle,
                                               ViConstString ItemName,
                                               IviLogicalNameHandle* LogicalNameHandle);

ViStatus _VI_FUNC IviConfig_DestroyLogicalName (IviLogicalNameCollectionHandle LogicalNameCollectionHandle,
                                                IviLogicalNameHandle LogicalNameHandle);

      /* Properties */
ViStatus _VI_FUNC IviConfig_GetLogicalNamePropertyViString (IviLogicalNameHandle LogicalNameHandle,
                                                            ViInt32 PropertyID,
                                                            ViInt32 BufferSize,
                                                            ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetLogicalNamePropertyViString (IviLogicalNameHandle LogicalNameHandle,
                                                            ViInt32 PropertyID,
                                                            ViConstString Value);

      /* Reference properties*/
ViStatus _VI_FUNC IviConfig_GetLogicalNameSessionReference (IviLogicalNameHandle LogicalNameHandle,
                                                            IviSessionHandle* SessionHandle);

ViStatus _VI_FUNC IviConfig_SetLogicalNameSessionReference (IviLogicalNameHandle LogicalNameHandle,
                                                            IviSessionHandle SessionHandle);

/*  IviSession functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_GetSessionCount (IviSessionCollectionHandle SessionCollectionHandle,
                                             ViInt32* ItemCount);

ViStatus _VI_FUNC IviConfig_GetSessionItemByIndex (IviSessionCollectionHandle SessionCollectionHandle,
                                                   ViInt32 ItemIndex,
                                                   IviSessionHandle* SessionHandle);

ViStatus _VI_FUNC IviConfig_GetSessionItemByName (IviSessionCollectionHandle SessionCollectionHandle,
                                                  ViConstString ItemName,
                                                  IviSessionHandle* SessionHandle);

ViStatus _VI_FUNC IviConfig_CreateSession (IviSessionCollectionHandle SessionCollectionHandle,
                                           ViConstString ItemName,
                                           IviSessionHandle* SessionHandle);

ViStatus _VI_FUNC IviConfig_DestroySession (IviSessionCollectionHandle SessionCollectionHandle,
                                            IviSessionHandle SessionHandle);

      /* Properties */
ViStatus _VI_FUNC IviConfig_GetSessionPropertyViString (IviSessionHandle SessionHandle,
                                                        ViInt32 PropertyID,
                                                        ViInt32 BufferSize,
                                                        ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetSessionPropertyViString (IviSessionHandle SessionHandle,
                                                        ViInt32 PropertyID,
                                                        ViConstString Value);
      /* Reference properties */
ViStatus _VI_FUNC IviConfig_GetSessionHardwareAssetReference (IviSessionHandle SessionHandle,
                                                              IviHardwareAssetHandle* HardwareAssetHandle);

ViStatus _VI_FUNC IviConfig_SetSessionHardwareAssetReference (IviSessionHandle SessionHandle,
                                                              IviHardwareAssetHandle HardwareAssetHandle);

ViStatus _VI_FUNC IviConfig_GetSessionSoftwareModuleReference (IviSessionHandle SessionHandle,
                                                               IviSoftwareModuleHandle* SoftwareModuleHandle);

ViStatus _VI_FUNC IviConfig_SetSessionSoftwareModuleReference  (IviSessionHandle SessionHandle,
                                                                IviSoftwareModuleHandle SoftwareModuleHandle);

ViStatus _VI_FUNC IviConfig_GetSessionVirtualNameCollection (IviSessionHandle SessionHandle,
                                                             IviVirtualNameCollectionHandle* VirtualNameCollectionHandle);

/*  IviDriverSession functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_GetDriverSessionCount (IviDriverSessionCollectionHandle DriverSessionCollectionHandle,
                                                   ViInt32* ItemCount);

ViStatus _VI_FUNC IviConfig_GetDriverSessionItemByIndex (IviDriverSessionCollectionHandle DriverSessionCollectionHandle,
                                                         ViInt32 ItemIndex,
                                                         IviDriverSessionHandle* DriverSessionHandle);

ViStatus _VI_FUNC IviConfig_GetDriverSessionItemByName (IviDriverSessionCollectionHandle DriverSessionCollectionHandle,
                                                        ViConstString ItemName,
                                                        IviDriverSessionHandle* DriverSessionHandle);

ViStatus _VI_FUNC IviConfig_CreateDriverSession (IviDriverSessionCollectionHandle DriverSessionCollectionHandle,
                                                 ViConstString ItemName,
                                                 IviDriverSessionHandle* DriverSessionHandle);

ViStatus _VI_FUNC IviConfig_DestroyDriverSession (IviDriverSessionCollectionHandle DriverSessionCollectionHandle,
                                                  IviDriverSessionHandle DriverSessionHandle);

      /* Properties */
ViStatus _VI_FUNC IviConfig_GetDriverSessionPropertyViBoolean (IviDriverSessionHandle DriverSessionHandle,
                                                               ViInt32 PropertyID,
                                                               ViBoolean* Value);

ViStatus _VI_FUNC IviConfig_SetDriverSessionPropertyViBoolean (IviDriverSessionHandle DriverSessionHandle,
                                                               ViInt32 PropertyID,
                                                               ViBoolean Value);

ViStatus _VI_FUNC IviConfig_GetDriverSessionPropertyViString (IviDriverSessionHandle DriverSessionHandle,
                                                              ViInt32 PropertyID,
                                                              ViInt32 BufferSize,
                                                              ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetDriverSessionPropertyViString (IviDriverSessionHandle DriverSessionHandle,
                                                              ViInt32 PropertyID,
                                                              ViConstString Value);

/*  IviHardwareAsset functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_GetHardwareAssetCount (IviHardwareAssetCollectionHandle HardwareAssetCollectionHandle,
                                                   ViInt32* ItemCount);

ViStatus _VI_FUNC IviConfig_GetHardwareAssetItemByIndex (IviHardwareAssetCollectionHandle HardwareAssetCollectionHandle,
                                                         ViInt32 ItemIndex,
                                                         IviHardwareAssetHandle* HardwareAssetHandle);

ViStatus _VI_FUNC IviConfig_GetHardwareAssetItemByName (IviHardwareAssetCollectionHandle HardwareAssetCollectionHandle,
                                                        ViConstString ItemName,
                                                        IviHardwareAssetHandle* HardwareAssetHandle);

ViStatus _VI_FUNC IviConfig_CreateHardwareAsset (IviHardwareAssetCollectionHandle HardwareAssetCollection,
                                                 ViConstString ItemName,
                                                 IviHardwareAssetHandle* HardwareAssetHandle);

ViStatus _VI_FUNC IviConfig_DestroyHardwareAsset (IviHardwareAssetCollectionHandle HardwareAssetCollection,
                                                  IviHardwareAssetHandle HardwareAssetHandle);

      /* Properties */
ViStatus _VI_FUNC IviConfig_GetHardwareAssetPropertyViString (IviHardwareAssetHandle HardwareAssetHandle,
                                                              ViInt32 PropertyID,
                                                              ViInt32 BufferSize,
                                                              ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetHardwareAssetPropertyViString (IviHardwareAssetHandle HardwareAssetHandle,
                                                              ViInt32 PropertyID,
                                                              ViConstString Value);

/*  IviSoftwareModule functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_GetSoftwareModuleCount (IviSoftwareModuleCollectionHandle SoftwareModuleCollectionHandle,
                                                    ViInt32* ItemCount);

ViStatus _VI_FUNC IviConfig_GetSoftwareModuleItemByIndex (IviSoftwareModuleCollectionHandle SoftwareModuleCollectionHandle,
                                                          ViInt32 ItemIndex,
                                                          IviSoftwareModuleHandle* SoftwareModuleHandle);

ViStatus _VI_FUNC IviConfig_GetSoftwareModuleItemByName (IviSoftwareModuleCollectionHandle SoftwareModuleCollectionHandle,
                                                         ViConstString ItemName,
                                                         IviSoftwareModuleHandle* SoftwareModuleHandle);

ViStatus _VI_FUNC IviConfig_CreateSoftwareModule (IviSoftwareModuleCollectionHandle SoftwareModuleCollectionHandle,
                                                  ViConstString ItemName,
                                                  IviSoftwareModuleHandle* SoftwareModuleHandle);

ViStatus _VI_FUNC IviConfig_DestroySoftwareModule (IviSoftwareModuleCollectionHandle SoftwareModuleCollectionHandle,
                                                   IviSoftwareModuleHandle SoftwareModuleHandle);

      /* Properties */
ViStatus _VI_FUNC IviConfig_GetSoftwareModulePropertyViString (IviSoftwareModuleHandle SoftwareModuleHandle,
                                                               ViInt32 PropertyID,
                                                               ViInt32 BufferSize,
                                                               ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetSoftwareModulePropertyViString (IviSoftwareModuleHandle SoftwareModuleHandle,
                                                               ViInt32 PropertyID,
                                                               ViConstString Value);

      /* Reference properties */
ViStatus _VI_FUNC IviConfig_GetSoftwareModulePhysicalNameCollection (IviSoftwareModuleHandle SoftwareModuleHandle,
                                                                     IviPhysicalNameCollectionHandle* PhysicalNameCollectionHandle);

ViStatus _VI_FUNC IviConfig_GetSoftwareModulePublishedAPICollection (IviSoftwareModuleHandle SoftwareModuleHandle,
                                                                     IviPublishedAPICollectionHandle* PublishedAPICollectionHandle);

/*  IviVirtualName functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_GetVirtualNameCount (IviVirtualNameCollectionHandle VirtualNameCollectionHandle,
                                                 ViInt32* ItemCount);

ViStatus _VI_FUNC IviConfig_GetVirtualNameItemByIndex (IviVirtualNameCollectionHandle VirtualNameCollectionHandle,
                                                       ViInt32 ItemIndex,
                                                       IviVirtualNameHandle* VirtualNameHandle);

ViStatus _VI_FUNC IviConfig_GetVirtualNameItemByName (IviVirtualNameCollectionHandle VirtualNameCollectionHandle,
                                                      ViConstString ItemName,
                                                      IviVirtualNameHandle* VirtualNameHandle);

ViStatus _VI_FUNC IviConfig_CreateVirtualName (IviVirtualNameCollectionHandle VirtualNameCollectionHandle,
                                               ViConstString ItemName,
                                               ViConstString MapToName,
                                               IviVirtualNameHandle* VirtualNameHandle);

ViStatus _VI_FUNC IviConfig_DestroyVirtualName (IviSoftwareModuleCollectionHandle SoftwareModuleCollectionHandle,
                                                IviVirtualNameHandle VirtualNameHandle);

      /* Properties */
ViStatus _VI_FUNC IviConfig_GetVirtualNamePropertyViString (IviVirtualNameHandle VirtualNameHandle,
                                                            ViInt32 PropertyID,
                                                            ViInt32 BufferSize,
                                                            ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetVirtualNamePropertyViString (IviVirtualNameHandle VirtualNameHandle,
                                                            ViInt32 PropertyID,
                                                            ViConstString Value);

      /* Reference properties */
ViStatus _VI_FUNC IviConfig_GetVirtualNameVirtualRangeCollection (IviVirtualNameHandle VirtualNameHandle,
                                                                  IviVirtualRangeCollectionHandle* VirtualRangeCollectionHandle);

/*  IviVirtualRange functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_GetVirtualRangeCount (IviVirtualRangeCollectionHandle VirtualRangeCollectionHandle,
                                                  ViInt32* ItemCount);

ViStatus _VI_FUNC IviConfig_GetVirtualRangeItemByIndex (IviVirtualRangeCollectionHandle VirtualRangeCollectionHandle,
                                                        ViInt32 ItemIndex,
                                                        IviVirtualRangeHandle* VirtualRangeHandle);
   
ViStatus _VI_FUNC IviConfig_CreateVirtualRange (IviVirtualRangeCollectionHandle VirtualRangeCollectionHandle,
                                                ViConstString ItemName,
                                                IviVirtualRangeHandle* VirtualRangeHandle);

ViStatus _VI_FUNC IviConfig_DestroyVirtualRange (IviVirtualRangeCollectionHandle VirtualRangeCollectionHandle,
                                                 IviVirtualRangeHandle VirtualRangeHandle);

      /* Properties */
ViStatus _VI_FUNC IviConfig_GetVirtualRangePropertyViInt32 (IviVirtualRangeHandle VirtualRangeHandle,
                                                            ViInt32 PropertyID,
                                                            ViInt32* Value);

ViStatus _VI_FUNC IviConfig_SetVirtualRangePropertyViInt32 (IviVirtualRangeHandle VirtualRangeHandle,
                                                            ViInt32 PropertyID,
                                                            ViInt32 Value);

ViStatus _VI_FUNC IviConfig_GetVirtualRangePropertyViString (IviVirtualRangeHandle VirtualRangeHandle,
                                                             ViInt32 PropertyID,
                                                             ViInt32 BufferSize,
                                                             ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetVirtualRangePropertyViString (IviVirtualRangeHandle VirtualRangeHandle,
                                                             ViInt32 PropertyID,
                                                             ViConstString Value);


/*  IviPhysicalName functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_GetPhysicalNameCount (IviPhysicalNameCollectionHandle PhysicalNameCollectionHandle,
                                                  ViInt32* ItemCount);

ViStatus _VI_FUNC IviConfig_GetPhysicalNameItemByIndex (IviPhysicalNameCollectionHandle PhysicalNameCollectionHandle,
                                                        ViInt32 ItemIndex,
                                                        IviPhysicalNameHandle* PhysicalNameHandle);

ViStatus _VI_FUNC IviConfig_GetPhysicalNameItemByName (IviPhysicalNameCollectionHandle PhysicalNameCollectionHandle,
                                                       ViConstString ItemName,
                                                       IviPhysicalNameHandle* PhysicalNameHandle);

ViStatus _VI_FUNC IviConfig_CreatePhysicalName (IviPhysicalNameCollectionHandle PhysicalNameCollectionHandle,
                                                ViConstString ItemName,
                                                ViConstString RCName,
                                                IviPhysicalNameHandle* PhysicalNameHandle);

ViStatus _VI_FUNC IviConfig_DestroyPhysicalName (IviSoftwareModuleCollectionHandle SoftwareModuleCollectionHandle,
                                                 IviPhysicalNameHandle PhysicalNameHandle);

      /* Properties */
ViStatus _VI_FUNC IviConfig_GetPhysicalNamePropertyViString (IviPhysicalNameHandle PhysicalNameHandle,
                                                             ViInt32 PropertyID,
                                                             ViInt32 BufferSize,
                                                             ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetPhysicalNamePropertyViString (IviPhysicalNameHandle PhysicalNameHandle,
                                                             ViInt32 PropertyID,
                                                             ViConstString Value);

      /* Reference properties */
ViStatus _VI_FUNC IviConfig_GetPhysicalNamePhysicalRangeCollection (IviPhysicalNameHandle PhysicalNameHandle,
                                                                    IviPhysicalRangeCollectionHandle* PhysicalRangeCollectionHandle);

ViStatus _VI_FUNC IviConfig_GetPhysicalNameChildPhysicalNameCollection (IviPhysicalNameHandle PhysicalNameHandle,
                                                                        IviPhysicalNameCollectionHandle* ChildPhysicalNameCollectionHandle);

/*  IviPhysicalRange functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_GetPhysicalRangeCount (IviPhysicalRangeCollectionHandle PhysicalRangeCollectionHandle,
                                                   ViInt32* ItemCount);

ViStatus _VI_FUNC IviConfig_GetPhysicalRangeItemByIndex (IviPhysicalRangeCollectionHandle PhysicalRangeCollectionHandle,
                                                         ViInt32 ItemIndex,
                                                         IviPhysicalRangeHandle* PhysicalRangeHandle);
   
ViStatus _VI_FUNC IviConfig_CreatePhysicalRange (IviPhysicalRangeCollectionHandle PhysicalRangeCollectionHandle,
                                                 ViConstString ItemName,
                                                 IviPhysicalRangeHandle* PhysicalRangeHandle);

ViStatus _VI_FUNC IviConfig_DestroyPhysicalRange (IviPhysicalRangeCollectionHandle PhysicalRangeCollectionHandle,
                                                  IviPhysicalRangeHandle PhysicalRangeHandle);

      /* Properties */
ViStatus _VI_FUNC IviConfig_GetPhysicalRangePropertyViInt32 (IviPhysicalRangeHandle PhysicalRangeHandle,
                                                             ViInt32 PropertyID,
                                                             ViInt32* Value);

ViStatus _VI_FUNC IviConfig_SetPhysicalRangePropertyViInt32 (IviPhysicalRangeHandle PhysicalRangeHandle,
                                                             ViInt32 PropertyID,
                                                             ViInt32 Value);

ViStatus _VI_FUNC IviConfig_GetPhysicalRangePropertyViString (IviPhysicalRangeHandle PhysicalRangeHandle,
                                                              ViInt32 PropertyID,
                                                              ViInt32 BufferSize,
                                                              ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetPhysicalRangePropertyViString (IviPhysicalRangeHandle PhysicalRangeHandle,
                                                              ViInt32 PropertyID,
                                                              ViConstString Value);

/*  IviPublishedAPI functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_GetPublishedAPICount (IviPublishedAPICollectionHandle PublishedAPICollectionHandle,
                                                  ViInt32* ItemCount);

ViStatus _VI_FUNC IviConfig_GetPublishedAPIItemByIndex (IviPublishedAPICollectionHandle PublishedAPICollectionHandle,
                                                        ViInt32 ItemIndex,
                                                        IviPublishedAPIHandle* PublishedAPIHandle);
   
ViStatus _VI_FUNC IviConfig_CreatePublishedAPI (IviPublishedAPICollectionHandle PublishedAPICollectionHandle,
                                                ViConstString ItemName,
                                                ViConstString PublishedAPIType,
                                                IviPublishedAPIHandle* PublishedAPIHandle);

ViStatus _VI_FUNC IviConfig_DestroyPublishedAPI (IviPublishedAPICollectionHandle PublishedAPICollectionHandle,
                                                 IviPublishedAPIHandle PublishedAPIHandle);

ViStatus _VI_FUNC IviConfig_AddPublishedAPIReference (IviPublishedAPICollectionHandle PublishedAPICollectionHandle,
                                                      IviPublishedAPIHandle PublishedAPIHandle);

ViStatus _VI_FUNC IviConfig_RemovePublishedAPIReference (IviPublishedAPICollectionHandle PublishedAPICollectionHandle,
                                                         IviPublishedAPIHandle PublishedAPIHandle);

      /* Properties */
ViStatus _VI_FUNC IviConfig_GetPublishedAPIPropertyViInt32 (IviPublishedAPIHandle PublishedAPIHandle,
                                                            ViInt32 PropertyID,
                                                            ViInt32* Value);

ViStatus _VI_FUNC IviConfig_SetPublishedAPIPropertyViInt32 (IviPublishedAPIHandle PublishedAPIHandle,
                                                            ViInt32 PropertyID,
                                                            ViInt32 Value);

ViStatus _VI_FUNC IviConfig_GetPublishedAPIPropertyViString (IviPublishedAPIHandle PublishedAPIHandle,
                                                             ViInt32 PropertyID,
                                                             ViInt32 BufferSize,
                                                             ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetPublishedAPIPropertyViString (IviPublishedAPIHandle PublishedAPIHandle,
                                                             ViInt32 PropertyID,
                                                             ViConstString Value);

/*  IviDataComponent functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_GetDataComponentCount (IviDataComponentCollectionHandle DataComponentCollectionHandle,
                                                   ViInt32* ItemCount);

ViStatus _VI_FUNC IviConfig_GetDataComponentItemByIndex (IviDataComponentCollectionHandle DataComponentCollectionHandle,
                                                         ViInt32 ItemIndex,
                                                         IviDataComponentHandle* DataComponentHandle);
   
ViStatus _VI_FUNC IviConfig_GetDataComponentItemByName (IviDataComponentCollectionHandle DataComponentCollectionHandle,
                                                        ViConstString ItemName,
                                                        IviDataComponentHandle* DataComponentHandle);

ViStatus _VI_FUNC IviConfig_CreateDataComponent (IviDataComponentCollectionHandle DataComponentCollectionHandle,
                                                 ViInt32 DataComponentType,
                                                 ViConstString ItemName,
                                                 IviDataComponentHandle* DataComponentHandle);

ViStatus _VI_FUNC IviConfig_DestroyDataComponent (IviDataComponentCollectionHandle DataComponentCollectionHandle,
                                                  IviDataComponentHandle DataComponentHandle);

      /* Properties */
ViStatus _VI_FUNC IviConfig_GetDataComponentPropertyViBoolean (IviDataComponentHandle DataComponentHandle,
                                                               ViInt32 PropertyID,
                                                               ViBoolean* Value);

ViStatus _VI_FUNC IviConfig_SetDataComponentPropertyViBoolean (IviDataComponentHandle DataComponentHandle,
                                                               ViInt32 PropertyID,
                                                               ViBoolean Value);

ViStatus _VI_FUNC IviConfig_GetDataComponentPropertyViInt32 (IviDataComponentHandle DataComponentHandle,
                                                             ViInt32 PropertyID,
                                                             ViInt32* Value);

ViStatus _VI_FUNC IviConfig_SetDataComponentPropertyViInt32 (IviDataComponentHandle DataComponentHandle,
                                                             ViInt32 PropertyID,
                                                             ViInt32 Value);

ViStatus _VI_FUNC IviConfig_GetDataComponentPropertyViReal64 (IviDataComponentHandle DataComponentHandle,
                                                              ViInt32 PropertyID,
                                                              ViReal64* Value);

ViStatus _VI_FUNC IviConfig_SetDataComponentPropertyViReal64 (IviDataComponentHandle DataComponentHandle,
                                                              ViInt32 PropertyID,
                                                              ViReal64 Value);

ViStatus _VI_FUNC IviConfig_GetDataComponentPropertyViString (IviDataComponentHandle DataComponentHandle,
                                                              ViInt32 PropertyID,
                                                              ViInt32 BufferSize,
                                                              ViChar Value[]);

ViStatus _VI_FUNC IviConfig_SetDataComponentPropertyViString (IviDataComponentHandle DataComponentHandle,
                                                              ViInt32 PropertyID,
                                                              ViConstString Value);


/*  IviStructure functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_CreateStructure (IviDataComponentCollectionHandle DataComponentCollectionHandle,
                                             ViConstString StructureName,
                                             ViInt32 NewDataComponentType,
                                             ViConstString NewDataComponentName,
                                             IviDataComponentHandle* StructureHandle);

      /* Reference properties */
ViStatus _VI_FUNC IviConfig_GetStructureDataComponentCollection (IviDataComponentHandle StructureHandle,
                                                                 IviDataComponentCollectionHandle* DataComponentCollectionHandle);


/*  IviReferenceAPI functions */
      /* Collection */
ViStatus _VI_FUNC IviConfig_CreateAPIReference (IviDataComponentCollectionHandle DataComponentCollectionHandle,
                                                ViConstString ItemName,
                                                IviPublishedAPIHandle PublishedAPIHandle,
                                                IviDataComponentHandle* APIReferenceHandle);

      /* Reference properties */
ViStatus _VI_FUNC IviConfig_GetAPIReferencePublishedAPIReference (IviDataComponentHandle APIReferenceHandle,
                                                                  IviPublishedAPIHandle* PublishedAPIHandle);

ViStatus _VI_FUNC IviConfig_SetAPIReferencePublishedAPIReference (IviDataComponentHandle APIReferenceHandle,
                                                                  IviPublishedAPIHandle PublishedAPIHandle);

/*------------------------------------------------------------------------
    Error and Completion Codes
/------------------------------------------------------------------------*/
#define IVI_SUCCESS                                     VI_SUCCESS
#define IVI_CONFIG_SERVER_ERROR_BASE                    0xBFFA1200
#define IVICONFIG_ERROR_DESERIALIZE_FAILED              (IVI_CONFIG_SERVER_ERROR_BASE)
#define IVICONFIG_ERROR_ALREADY_DESERIALIZED            (IVI_CONFIG_SERVER_ERROR_BASE + 1)
#define IVICONFIG_ERROR_SERIALIZE_FAILED                (IVI_CONFIG_SERVER_ERROR_BASE + 2)
#define IVICONFIG_ERROR_SESSION_NOT_FOUND               (IVI_CONFIG_SERVER_ERROR_BASE + 3)
#define IVICONFIG_ERROR_NOT_IN_GLOBAL                   (IVI_CONFIG_SERVER_ERROR_BASE + 4)
#define IVICONFIG_ERROR_ALREADY_EXIST                   (IVI_CONFIG_SERVER_ERROR_BASE + 5)
#define IVICONFIG_ERROR_MASTER_NOT_FOUND                (IVI_CONFIG_SERVER_ERROR_BASE + 6)
#define IVICONFIG_ERROR_NOT_EXIST                       (IVI_CONFIG_SERVER_ERROR_BASE + 7)
#define IVICONFIG_ERROR_INVALID_DATA_COMPONENT          (IVI_CONFIG_SERVER_ERROR_BASE + 8)
#define IVICONFIG_ERROR_LOCAL_REFERENCE_EXIST           (IVI_CONFIG_SERVER_ERROR_BASE + 9)
#define IVICONFIG_ERROR_INVALID_HANDLE                  (IVI_CONFIG_SERVER_ERROR_BASE + 32)
#define IVICONFIG_ERROR_INVALID_PROPERTY_ID             (IVI_CONFIG_SERVER_ERROR_BASE + 33)
#define IVICONFIG_ERROR_NOT_SUPPORTED                   (IVI_CONFIG_SERVER_ERROR_BASE + 34)
#define IVICONFIG_ERROR_MASTER_REGISTRY_CONFLICT        (IVI_CONFIG_SERVER_ERROR_BASE + 35)
#define IVICONFIG_ERROR_DATA_DIR_REGISTRY_CONFLICT      (IVI_CONFIG_SERVER_ERROR_BASE + 36)

#ifdef __cplusplus
}
#endif

#endif /* __IviConfigStore_H__ */
