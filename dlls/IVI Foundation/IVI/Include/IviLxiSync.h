/******************************************************************************
 *                                                                         
 *               IVI Foundation
 *               All rights reserved.
 *
 *****************************************************************************/

#ifndef __IVILXISYNC_HEADER
#define __IVILXISYNC_HEADER

#include <IviVisaType.h>

#if defined(__cplusplus) || defined(__cplusplus__)
extern "C" {
#endif

/**************************************************************************** 
 *---------------------------- Attribute Defines ---------------------------* 
 ****************************************************************************/
#ifndef _IVILXISYNC_ATTR_BASE_DEFINES_
#define _IVILXISYNC_ATTR_BASE_DEFINES_
#define IVILXISYNC_ATTR_BASE				 950000
#endif


/*===== Instrument-Specific Attributes =====================================*/

    /*- Alarm */
#define	IVILXISYNC_ATTR_ARM_ALARM_COUNT		            (IVILXISYNC_ATTR_BASE + 1L)   /* ViInt32, read-only */
#define	IVILXISYNC_ATTR_ARM_ALARM_ENABLED               (IVILXISYNC_ATTR_BASE + 2L)   /* ViBoolean, read-write */
#define	IVILXISYNC_ATTR_ARM_ALARM_PERIOD                (IVILXISYNC_ATTR_BASE + 3L)   /* ViReal64, read-write */
#define	IVILXISYNC_ATTR_ARM_ALARM_REPEAT_COUNT          (IVILXISYNC_ATTR_BASE + 4L)   /* ViInt32, read-write */
#define	IVILXISYNC_ATTR_ARM_ALARM_TIME_FRACTION         (IVILXISYNC_ATTR_BASE + 5L)   /* ViReal64, read-write */
#define	IVILXISYNC_ATTR_ARM_ALARM_TIME_SECONDS          (IVILXISYNC_ATTR_BASE + 6L)   /* ViReal64, read-write */

    /*- Arm */
#define	IVILXISYNC_ATTR_ARM_COUNT                       (IVILXISYNC_ATTR_BASE + 7L)  /* ViInt32, read-write */
#define	IVILXISYNC_ATTR_ARM_DELAY                       (IVILXISYNC_ATTR_BASE + 8L)  /* ViReal64, read-write */

    /*- Source */
#define	IVILXISYNC_ATTR_ARM_SOURCE_COUNT	            (IVILXISYNC_ATTR_BASE + 9L)   /* ViInt32, read-only */
#define	IVILXISYNC_ATTR_ARM_SOURCE_DETECTION            (IVILXISYNC_ATTR_BASE + 10L)  /* ViInt32, read-write */
#define	IVILXISYNC_ATTR_ARM_SOURCE_ENABLED              (IVILXISYNC_ATTR_BASE + 11L)  /* ViBoolean, read-write */
#define	IVILXISYNC_ATTR_ARM_SOURCE_EVENTID				(IVILXISYNC_ATTR_BASE + 12L)  /* ViString, read-write */
#define	IVILXISYNC_ATTR_ARM_SOURCE_FILTER               (IVILXISYNC_ATTR_BASE + 13L)  /* ViString, read-write */
#define	IVILXISYNC_ATTR_ARM_SOURCE_OR_ENABLED           (IVILXISYNC_ATTR_BASE + 14L)  /* ViBoolean, read-write */

    /*- Alarm */
#define	IVILXISYNC_ATTR_TRIGGER_ALARM_COUNT		        (IVILXISYNC_ATTR_BASE + 15L)  /* ViInt32, read-only */
#define	IVILXISYNC_ATTR_TRIGGER_ALARM_ENABLED           (IVILXISYNC_ATTR_BASE + 16L)  /* ViBoolean, read-write */
#define	IVILXISYNC_ATTR_TRIGGER_ALARM_PERIOD            (IVILXISYNC_ATTR_BASE + 17L)  /* ViReal64, read-write */
#define	IVILXISYNC_ATTR_TRIGGER_ALARM_REPEAT_COUNT      (IVILXISYNC_ATTR_BASE + 18L)  /* ViInt32, read-write */
#define	IVILXISYNC_ATTR_TRIGGER_ALARM_TIME_FRACTION     (IVILXISYNC_ATTR_BASE + 19L)  /* ViReal64, read-write */
#define	IVILXISYNC_ATTR_TRIGGER_ALARM_TIME_SECONDS      (IVILXISYNC_ATTR_BASE + 20L)  /* ViReal64, read-write */

    /*- Trigger */
#define	IVILXISYNC_ATTR_TRIGGER_COUNT                   (IVILXISYNC_ATTR_BASE + 21L)  /* ViInt32, read-write */
#define	IVILXISYNC_ATTR_TRIGGER_SOURCE                  (IVILXISYNC_ATTR_BASE + 22L)  /* ViString, read-write */

    /*- Source */
#define	IVILXISYNC_ATTR_TRIGGER_SOURCE_COUNT            (IVILXISYNC_ATTR_BASE + 23L)  /* ViInt32, read-only */
#define	IVILXISYNC_ATTR_TRIGGER_SOURCE_DELAY            (IVILXISYNC_ATTR_BASE + 24L)  /* ViReal64, read-write */
#define	IVILXISYNC_ATTR_TRIGGER_SOURCE_DETECTION        (IVILXISYNC_ATTR_BASE + 25L)  /* ViInt32, read-write */
#define	IVILXISYNC_ATTR_TRIGGER_SOURCE_EVENTID          (IVILXISYNC_ATTR_BASE + 26L)  /* ViString, read-write */
#define	IVILXISYNC_ATTR_TRIGGER_SOURCE_FILTER           (IVILXISYNC_ATTR_BASE + 27L)  /* ViString, read-write */

    /*- Event */
#define	IVILXISYNC_ATTR_EVENT_COUNT                     (IVILXISYNC_ATTR_BASE + 28L)  /* ViInt32, read-write */
#define	IVILXISYNC_ATTR_EVENT_DESTINATION_PATH          (IVILXISYNC_ATTR_BASE + 29L)  /* ViString, read-write */
#define	IVILXISYNC_ATTR_EVENT_DRIVE_MODE                (IVILXISYNC_ATTR_BASE + 30L)  /* ViInt32, read-write */
#define	IVILXISYNC_ATTR_EVENT_SLOPE                     (IVILXISYNC_ATTR_BASE + 31L)  /* ViInt32, read-write */
#define	IVILXISYNC_ATTR_EVENT_SOURCE                    (IVILXISYNC_ATTR_BASE + 32L)  /* ViString, read-write */
#define	IVILXISYNC_ATTR_EVENT_WIRED_OR_BIAS_MODE        (IVILXISYNC_ATTR_BASE + 33L)  /* ViInt32, read-write */
		
    /*- Event Log */
#define	IVILXISYNC_ATTR_EVENT_LOG_ENABLED               (IVILXISYNC_ATTR_BASE + 34L)  /* ViBoolean, read-write */
#define	IVILXISYNC_ATTR_EVENT_LOG_ENTRY_COUNT           (IVILXISYNC_ATTR_BASE + 35L)  /* ViInt32, read-only */

    /*- Time */
#define	IVILXISYNC_ATTR_IS_TIME_MASTER                  (IVILXISYNC_ATTR_BASE + 36L)  /* ViBoolean, read-only */
#define	IVILXISYNC_ATTR_IS_TIME_SYNCHRONIZED            (IVILXISYNC_ATTR_BASE + 37L)  /* ViBoolean, read-only */


/**************************************************************************** 
 *------------------------ Attribute Value Defines -------------------------* 
 ****************************************************************************/

#define IVILXISYNC_VAL_REPEAT_CONTINUOUS			0

    /*- Defined values for attribute IVILXISYNC_ATTR_EVENT_DRIVE_MODE, parameter DriveMode in function IviLxiSync_ConfigureEvent */
#define	IVILXISYNC_VAL_IVILXISYNC_EVENT_DRIVEN      0
#define	IVILXISYNC_VAL_IVILXISYNC_EVENT_OFF         1
#define	IVILXISYNC_VAL_IVILXISYNC_EVENT_WIREDOR     2

    /*- Defined values for attribute IVILXISYNC_ATTR_ARM_SOURCE_DETECTION, 
        parameter Detection in function IviLxiSync_ConfigureArmSource */
#define	IVILXISYNC_VAL_IVILXISYNC_DETECTION_RISE    0
#define	IVILXISYNC_VAL_IVILXISYNC_DETECTION_FALL    1
#define	IVILXISYNC_VAL_IVILXISYNC_DETECTION_HIGH    2
#define	IVILXISYNC_VAL_IVILXISYNC_DETECTION_LOW     3

    /*- Defined values for attribute IVILXISYNC_ATTR_EVENT_SLOPE, parameter Slope in function IviLxiSync_ConfigureEvent */
#define	IVILXISYNC_VAL_IVILXISYNC_SLOPE_RISE        0
#define	IVILXISYNC_VAL_IVILXISYNC_SLOPE_FALL        1



/**************************************************************************** 
 *---------------- Instrument Driver Function Declarations -----------------* 
 ****************************************************************************/

    /*- Attribute Accessors */

ViStatus _VI_FUNC  IviLxiSync_GetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32* AttributeValue );

ViStatus _VI_FUNC  IviLxiSync_GetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64* AttributeValue );

ViStatus _VI_FUNC  IviLxiSync_GetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean* AttributeValue );

ViStatus _VI_FUNC  IviLxiSync_GetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession* AttributeValue );

ViStatus _VI_FUNC  IviLxiSync_GetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValueBufferSize, ViChar AttributeValue[] );

ViStatus _VI_FUNC  IviLxiSync_SetAttributeViInt32 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViInt32 AttributeValue );

ViStatus _VI_FUNC  IviLxiSync_SetAttributeViReal64 ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViReal64 AttributeValue );

ViStatus _VI_FUNC  IviLxiSync_SetAttributeViBoolean ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViBoolean AttributeValue );

ViStatus _VI_FUNC  IviLxiSync_SetAttributeViSession ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViSession AttributeValue );

ViStatus _VI_FUNC  IviLxiSync_SetAttributeViString ( ViSession Vi, ViConstString RepCapIdentifier, ViAttr AttributeID, ViConstString AttributeValue );

    /*- Alarm */

ViStatus _VI_FUNC  IviLxiSync_DisableAllArmAlarms ( ViSession Vi );

ViStatus _VI_FUNC  IviLxiSync_AddArmAlarm ( ViSession Vi, ViConstString AlarmName );

ViStatus _VI_FUNC  IviLxiSync_RemoveArmAlarm ( ViSession Vi, ViConstString AlarmName );

ViStatus _VI_FUNC  IviLxiSync_RemoveAllCustomArmAlarms ( ViSession Vi );

ViStatus _VI_FUNC  IviLxiSync_ConfigureArmAlarm ( ViSession Vi, ViConstString repCapIdentifier, ViBoolean Enabled, ViReal64 TimeSeconds, ViReal64 TimeFraction, ViReal64 Period, ViInt32 RepeatCount );

ViStatus _VI_FUNC  IviLxiSync_GetArmAlarmName (ViSession Vi, ViInt32 AlarmIndex, ViInt32 AlarmNameBufferSize, ViChar AlarmName[]);

    /*- Source */

ViStatus _VI_FUNC  IviLxiSync_AddArmSource ( ViSession Vi, ViConstString SourceName );

ViStatus _VI_FUNC  IviLxiSync_RemoveArmSource ( ViSession Vi, ViConstString SourceName );

ViStatus _VI_FUNC  IviLxiSync_DisableAllArmSources ( ViSession Vi );

ViStatus _VI_FUNC  IviLxiSync_RemoveAllCustomArmSources ( ViSession Vi );

ViStatus _VI_FUNC  IviLxiSync_ConfigureArmSource ( ViSession Vi, ViConstString repCapIdentifier, ViBoolean Enabled, ViInt32 Detection );

ViStatus _VI_FUNC  IviLxiSync_GetArmSourceName (ViSession Vi, ViInt32 SourceIndex, ViInt32 SourceNameBufferSize, ViChar SourceName[]);

    /*- Event */

ViStatus _VI_FUNC  IviLxiSync_ConfigureEvent ( ViSession Vi, ViConstString repCapIdentifier, ViInt32 DriveMode, ViConstString Source, ViConstString DestinationPath, ViInt32 Slope );

ViStatus _VI_FUNC  IviLxiSync_GetEventName (ViSession Vi, ViInt32 EventIndex, ViInt32 EventNameBufferSize, ViChar EventName[]);

    /*- Alarm */

ViStatus _VI_FUNC  IviLxiSync_AddTriggerAlarm ( ViSession Vi, ViConstString AlarmName );

ViStatus _VI_FUNC  IviLxiSync_DisableAllTriggerAlarms ( ViSession Vi );

ViStatus _VI_FUNC  IviLxiSync_RemoveTriggerAlarm ( ViSession Vi, ViConstString AlarmName );

ViStatus _VI_FUNC  IviLxiSync_RemoveAllTriggerAlarms ( ViSession Vi );

ViStatus _VI_FUNC  IviLxiSync_ConfigureTriggerAlarm ( ViSession Vi, ViConstString repCapIdentifier, ViReal64 TimeSeconds, ViReal64 TimeFraction, ViReal64 Period, ViInt32 RepeatCount );

ViStatus _VI_FUNC  IviLxiSync_GetTriggerAlarmName (ViSession Vi, ViInt32 AlarmIndex, ViInt32 AlarmNameBufferSize, ViChar AlarmName[]);

    /*- Source */

ViStatus _VI_FUNC  IviLxiSync_AddTriggerSource ( ViSession Vi, ViConstString SourceName );

ViStatus _VI_FUNC  IviLxiSync_RemoveTriggerSource ( ViSession Vi, ViConstString SourceName );

ViStatus _VI_FUNC  IviLxiSync_RemoveAllCustomTriggerSources ( ViSession Vi );

ViStatus _VI_FUNC  IviLxiSync_ConfigureTriggerSource ( ViSession Vi, ViConstString repCapIdentifier, ViReal64 Delay, ViInt32 Detection );

ViStatus _VI_FUNC  IviLxiSync_GetTriggerSourceName (ViSession Vi, ViInt32 SourceIndex, ViInt32 SourceNameBufferSize, ViChar SourceName[]);


    /*- Event Log */

ViStatus _VI_FUNC  IviLxiSync_ClearEventLog ( ViSession Vi );

ViStatus _VI_FUNC  IviLxiSync_GetNextEventLogEntry ( ViSession Vi, ViInt32 retValBufferSize, ViChar retVal[] );

    /*- Event */

ViStatus _VI_FUNC  IviLxiSync_DisableAllEvents ( ViSession Vi );

ViStatus _VI_FUNC  IviLxiSync_AddEvent ( ViSession Vi, ViConstString EventName );

ViStatus _VI_FUNC  IviLxiSync_RemoveEvent ( ViSession Vi, ViConstString EventName );

ViStatus _VI_FUNC  IviLxiSync_RemoveAllCustomEvents ( ViSession Vi );

    /*- Time */

ViStatus _VI_FUNC  IviLxiSync_GetSystemTime ( ViSession Vi, ViReal64* TimeSeconds, ViReal64* TimeFractional );


/**************************************************************************** 
 *----------------- Instrument Error And Completion Codes ------------------* 
 ****************************************************************************/
#ifndef _IVI_LXISYNC_ERROR_BASE_DEFINES_
#define _IVI_LXISYNC_ERROR_BASE_DEFINES_

#define IVI_LXISYNC_WARN_BASE                    (0x3FFA3000)
#define IVI_LXISYNC_ERROR_BASE                   (0xBFFA3000)

#endif

#define IVILXISYNC_ERROR_ALARM_TIME_INVALID               (IVI_LXISYNC_ERROR_BASE + 1L)
#define IVILXISYNC_ERROR_EVENT_SOURCE_EXISTS              (IVI_LXISYNC_ERROR_BASE + 2L)
#define IVILXISYNC_ERROR_OUT_OF_EVENT_RESOURCES           (IVI_LXISYNC_ERROR_BASE + 3L)
#define IVILXISYNC_ERROR_EVENT_SOURCE_DOES_NOT_EXIST      (IVI_LXISYNC_ERROR_BASE + 4L)
#define IVILXISYNC_ERROR_EVENT_SOURCE_NOT_SET             (IVI_LXISYNC_ERROR_BASE + 5L)
#define IVILXISYNC_ERROR_INVALID_EVENT_SOURCE             (IVI_LXISYNC_ERROR_BASE + 6L)
#define IVILXISYNC_ERROR_ALARM_EXISTS                     (IVI_LXISYNC_ERROR_BASE + 7L)
#define IVILXISYNC_ERROR_ALARM_DOES_NOT_EXIST             (IVI_LXISYNC_ERROR_BASE + 8L)
#define IVILXISYNC_ERROR_WIRED_OR_MODE_INVALID            (IVI_LXISYNC_ERROR_BASE + 9L)
#define IVILXISYNC_ERROR_CANT_REMOVE_RESERVED_REPEATED_CAPABILITY (IVI_LXISYNC_ERROR_BASE + 10L)




/**************************************************************************** 
 *---------------------------- End Include File ----------------------------* 
 ****************************************************************************/
#if defined(__cplusplus) || defined(__cplusplus__)
}
#endif
#endif // __IVILXISYNC_HEADER
