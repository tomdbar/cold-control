'''
Module containing low-level DAQ objects.

Created on 2 Apr 2016

@author: tombarrett
'''

import numpy as np
from ctypes import *
import re
from mock.mock import MagicMock
import time

# Windows API data types
BOOLEAN = c_ubyte
HANDLE = c_void_p
ULONG_PTR = c_void_p

# Import DLL using the __stdcall convention
dll = WinDLL('D2K-Dask64')

# DAQ2000 Device
DAQ_2010 = 1
DAQ_2205 = 2
DAQ_2206 = 3
DAQ_2005 = 4
DAQ_2204 = 5
DAQ_2006 = 6
DAQ_2501 = 7
DAQ_2502 = 8
DAQ_2208 = 9
DAQ_2213 = 10
DAQ_2214 = 11
DAQ_2016 = 12
DAQ_2020 = 13
DAQ_2022 = 14

# DASK Data Types
I16 = c_short
I32 = c_long
F32 = c_float
F64 = c_double
U8  = c_ubyte
U16 = c_ushort
U32 = c_ulong

MAX_CARD = 32

# Error Number
warning_code = {
    0 : "NoError",
    -1 : "ErrorUnknownCardType",
    -2 : "ErrorInvalidCardNumber",
    -3 : "ErrorTooManyCardRegistered",
    -4 : "ErrorCardNotRegistered",
    -5 : "ErrorFuncNotSupport",
    -6 : "ErrorInvalidIoChannel",
    -7 : "ErrorInvalidAdRange",
    -8 : "ErrorContIoNotAllowed",
    -9 : "ErrorDiffRangeNotSupport",
    -10 : "ErrorLastChannelNotZero",
    -11 : "ErrorChannelNotDescending",
    -12 : "ErrorChannelNotAscending",
    -13 : "ErrorOpenDriverFailed",
    -14 : "ErrorOpenEventFailed",
    -15 : "ErrorTransferCountTooLarge",
    -16 : "ErrorNotDoubleBufferMode",
    -17 : "ErrorInvalidSampleRate",
    -18 : "ErrorInvalidCounterMode",
    -19 : "ErrorInvalidCounter",
    -20 : "ErrorInvalidCounterState",
    -21 : "ErrorInvalidBinBcdParam",
    -22 : "ErrorBadCardType",
    -23 : "ErrorInvalidDaRefVoltage",
    -24 : "ErrorAdTimeOut",
    -25 : "ErrorNoAsyncAI",
    -26 : "ErrorNoAsyncAO",
    -27 : "ErrorNoAsyncDI",
    -28 : "ErrorNoAsyncDO",
    -29 : "ErrorNotInputPort",
    -30 : "ErrorNotOutputPort",
    -31 : "ErrorInvalidDioPort",
    -32 : "ErrorInvalidDioLine",
    -33 : "ErrorContIoActive",
    -34 : "ErrorDblBufModeNotAllowed",
    -35 : "ErrorConfigFailed",
    -36 : "ErrorInvalidPortDirection",
    -37 : "ErrorBeginThreadError",
    -38 : "ErrorInvalidPortWidth",
    -39 : "ErrorInvalidCtrSource",
    -40 : "ErrorOpenFile",
    -41 : "ErrorAllocateMemory",
    -42 : "ErrorDaVoltageOutOfRange",
    -43 : "ErrorInvalidSyncMode",
    -44 : "ErrorInvalidBufferID",
    -45 : "ErrorInvalidCNTInterval",
    -46 : "ErrorReTrigModeNotAllowed",
    -47 : "ErrorResetBufferNotAllowed",
    -48 : "ErrorAnaTriggerLevel",
    -49 : "ErrorDAQEvent",
    -50 : "ErrorInvalidCounterValue",
    -51 : "ErrorOffsetCalibration",
    -52 : "ErrorGainCalibration",
    -53 : "ErrorCountOutofSDRAMSize",
    -54 : "ErrorNotStartTriggerModule",
    -55 : "ErrorInvalidRouteLine",
    -56 : "ErrorInvalidSignalCode",
    -57 : "ErrorInvalidSignalDirection",
    -58 : "ErrorTRGOSCalibration",
    -59 : "ErrorNoSDRAM",
    -60 : "ErrorIntegrationGain",
    -61 : "ErrorAcquisitionTiming",
    -62 : "ErrorIntegrationTiming",
    -70 : "ErrorInvalidTimeBase",
    -71 : "ErrorUndefinedParameter",
    -110 : "ErrorCalAddress",
    -111 : "ErrorInvalidCalBank",
    -201 : "ErrorConfigIoctl",
    -202 : "ErrorAsyncSetIoctl",
    -203 : "ErrorDBSetIoctl",
    -204 : "ErrorDBHalfReadyIoctl",
    -205 : "ErrorContOPIoctl",
    -206 : "ErrorContStatusIoctl",
    -207 : "ErrorPIOIoctl",
    -208 : "ErrorDIntSetIoctl",
    -209 : "ErrorWaitEvtIoctl",
    -210 : "ErrorOpenEvtIoctl",
    -211 : "ErrorCOSIntSetIoctl",
    -212 : "ErrorMemMapIoctl",
    -213 : "ErrorMemUMapSetIoctl",
    -214 : "ErrorCTRIoctl",
    -215 : "ErrorGetResIoctl",
    -216 : "ErrorCalIoctl",
    -217 : "ErrorPMIntSetIoctl",
    -301 : "ErrorNotSuportOldDriver"
}

#NoError = 0
#ErrorUnknownCardType = -1
#ErrorInvalidCardNumber = -2
#ErrorTooManyCardRegistered = -3
#ErrorCardNotRegistered = -4
#ErrorFuncNotSupport = -5
#ErrorInvalidIoChannel = -6
#ErrorInvalidAdRange = -7
#ErrorContIoNotAllowed = -8
#ErrorDiffRangeNotSupport = -9
#ErrorLastChannelNotZero = -10
#ErrorChannelNotDescending = -11
#ErrorChannelNotAscending = -12
#ErrorOpenDriverFailed = -13
#ErrorOpenEventFailed = -14
#ErrorTransferCountTooLarge = -15
#ErrorNotDoubleBufferMode = -16
#ErrorInvalidSampleRate = -17
#ErrorInvalidCounterMode = -18
#ErrorInvalidCounter = -19
#ErrorInvalidCounterState = -20
#ErrorInvalidBinBcdParam = -21
#ErrorBadCardType = -22
#ErrorInvalidDaRefVoltage = -23
#ErrorAdTimeOut = -24
#ErrorNoAsyncAI = -25
#ErrorNoAsyncAO = -26
#ErrorNoAsyncDI = -27
#ErrorNoAsyncDO = -28
#ErrorNotInputPort = -29
#ErrorNotOutputPort = -30
#ErrorInvalidDioPort = -31
#ErrorInvalidDioLine = -32
#ErrorContIoActive = -33
#ErrorDblBufModeNotAllowed = -34
#ErrorConfigFailed = -35
#ErrorInvalidPortDirection = -36
#ErrorBeginThreadError = -37
#ErrorInvalidPortWidth = -38
#ErrorInvalidCtrSource = -39
#ErrorOpenFile = -40
#ErrorAllocateMemory = -41
#ErrorDaVoltageOutOfRange = -42
#ErrorInvalidSyncMode = -43
#ErrorInvalidBufferID = -44
#ErrorInvalidCNTInterval  = -45
#ErrorReTrigModeNotAllowed = -46
#ErrorResetBufferNotAllowed = -47
#ErrorAnaTriggerLevel = -48
#ErrorDAQEvent = -49
#ErrorInvalidCounterValue = -50 
#ErrorOffsetCalibration = -51
#ErrorGainCalibration = -52
#ErrorCountOutofSDRAMSize = -53
#ErrorNotStartTriggerModule = -54
#ErrorInvalidRouteLine = -55
#ErrorInvalidSignalCode = -56
#ErrorInvalidSignalDirection = -57
#ErrorTRGOSCalibration = -58
#ErrorNoSDRAM = -59
#ErrorIntegrationGain = -60
#ErrorAcquisitionTiming = -61
#ErrorIntegrationTiming = -62
#ErrorInvalidTimeBase = -70
#ErrorUndefinedParameter = -71
#
## Error number for calibration API
#ErrorCalAddress = -110
#ErrorInvalidCalBank = -111
#
## Error number for driver API
#ErrorConfigIoctl = -201
#ErrorAsyncSetIoctl = -202
#ErrorDBSetIoctl = -203
#ErrorDBHalfReadyIoctl = -204
#ErrorContOPIoctl = -205
#ErrorContStatusIoctl = -206
#ErrorPIOIoctl = -207
#ErrorDIntSetIoctl = -208
#ErrorWaitEvtIoctl = -209
#ErrorOpenEvtIoctl = -210
#ErrorCOSIntSetIoctl = -211
#ErrorMemMapIoctl = -212
#ErrorMemUMapSetIoctl = -213
#ErrorCTRIoctl = -214
#ErrorGetResIoctl = -215
#ErrorCalIoctl = -216
#ErrorPMIntSetIoctl = -217
#ErrorNotSuportOldDriver = -301

TRUE = 1
FALSE = 0

# Synchronous Mode
SYNCH_OP = 1
ASYNCH_OP = 2

# AD Range
AD_B_10_V = 1
AD_B_5_V = 2
AD_B_2_5_V = 3
AD_B_1_25_V = 4
AD_B_0_625_V = 5
AD_B_0_3125_V = 6
AD_B_0_5_V = 7
AD_B_0_05_V = 8
AD_B_0_005_V = 9
AD_B_1_V = 10
AD_B_0_1_V = 11
AD_B_0_01_V = 12
AD_B_0_001_V = 13
AD_U_20_V = 14
AD_U_10_V = 15
AD_U_5_V = 16
AD_U_2_5_V = 17
AD_U_1_25_V = 18
AD_U_1_V = 19
AD_U_0_1_V = 20
AD_U_0_01_V = 21
AD_U_0_001_V = 22
AD_B_2_V  = 23
AD_B_0_25_V = 24
AD_B_0_2_V = 25
AD_U_4_V = 26
AD_U_2_V = 27
AD_U_0_5_V = 28
AD_U_0_4_V = 29

# DIO Port Direction
INPUT_PORT = 1
OUTPUT_PORT = 2

# DIO Line Direction
INPUT_LINE = 1
OUTPUT_LINE = 2

# Channel & Port
Channel_P1A = 0
Channel_P1B = 1
Channel_P1C = 2
Channel_P1CL = 3
Channel_P1CH = 4
Channel_P1AE = 10
Channel_P1BE = 11
Channel_P1CE = 12
Channel_P2A = 5
Channel_P2B = 6
Channel_P2C = 7
Channel_P2CL = 8
Channel_P2CH = 9
Channel_P2AE = 15
Channel_P2BE = 16
Channel_P2CE = 17
Channel_P3A = 10
Channel_P3B = 11
Channel_P3C = 12
Channel_P3CL = 13
Channel_P3CH = 14
Channel_P4A = 15
Channel_P4B = 16
Channel_P4C = 17
Channel_P4CL = 18
Channel_P4CH = 19
Channel_P5A = 20
Channel_P5B = 21
Channel_P5C = 22
Channel_P5CL = 23
Channel_P5CH = 24
Channel_P6A = 25
Channel_P6B = 26
Channel_P6C = 27
Channel_P6CL = 28
Channel_P6CH = 29

# -------- Constants for DAQ2000 --------------------
All_Channels = -1
BufferNotUsed = -1

# Constants for Analog trigger
# define analog trigger condition constants
Below_Low_level = 0x0000
Above_High_Level = 0x0100
Inside_Region = 0x0200
High_Hysteresis = 0x0300
Low_Hysteresis = 0x0400

# define analog trigger Dedicated Channel */
CH0ATRIG = 0x00
CH1ATRIG = 0x02
CH2ATRIG = 0x04
CH3ATRIG = 0x06
EXTATRIG = 0x01
ADCATRIG = 0x00 # used for DAQ_old-2205/2206

# Time Base
DAQ2K_IntTimeBase = 0x00
DAQ2K_ExtTimeBase = 0x01
DAQ2K_SSITimeBase = 0x02
DAQ2K_ExtTimeBase_AFI0 = 0x3
DAQ2K_ExtTimeBase_AFI1 = 0x4
DAQ2K_ExtTimeBase_AFI2 = 0x5
DAQ2K_ExtTimeBase_AFI3 = 0x6
DAQ2K_ExtTimeBase_AFI4 = 0x7
DAQ2K_ExtTimeBase_AFI5 = 0x8
DAQ2K_ExtTimeBase_AFI6 = 0x9
DAQ2K_ExtTimeBase_AFI7 = 0xa
DAQ2K_PXI_CLK = 0xc
DAQ2K_StarTimeBase = 0xd
DAQ2K_SMBTimeBase = 0xe

# Constants for AD
DAQ2K_AI_ADSTARTSRC_Int = 0x00
DAQ2K_AI_ADSTARTSRC_AFI0 = 0x10
DAQ2K_AI_ADSTARTSRC_SSI = 0x20
DAQ2K_AI_ADCONVSRC_Int = 0x00
DAQ2K_AI_ADCONVSRC_AFI0 = 0x04
DAQ2K_AI_ADCONVSRC_SSI = 0x08
DAQ2K_AI_ADCONVSRC_AFI1 = 0x0C
DAQ2K_AI_ADCONVSRC_AFI2 = 0x100
DAQ2K_AI_ADCONVSRC_AFI3 = DAQ2K_AI_ADCONVSRC_AFI2 + 0x100
DAQ2K_AI_ADCONVSRC_AFI4 = DAQ2K_AI_ADCONVSRC_AFI2 + 0x200
DAQ2K_AI_ADCONVSRC_AFI5 = DAQ2K_AI_ADCONVSRC_AFI2 + 0x300
DAQ2K_AI_ADCONVSRC_AFI6 = DAQ2K_AI_ADCONVSRC_AFI2 + 0x400
DAQ2K_AI_ADCONVSRC_AFI7 = DAQ2K_AI_ADCONVSRC_AFI2 + 0x500
DAQ2K_AI_ADCONVSRC_PFI0 = DAQ2K_AI_ADCONVSRC_AFI0

# AI Delay Counter SRC: only available for DAQ_old-250X
DAQ2K_AI_DTSRC_Int = 0x00
DAQ2K_AI_DTSRC_AFI1 = 0x10
DAQ2K_AI_DTSRC_GPTC0 = 0x20
DAQ2K_AI_DTSRC_GPTC1 = 0x30
DAQ2K_AI_TRGSRC_SOFT = 0x00
DAQ2K_AI_TRGSRC_ANA = 0x01
DAQ2K_AI_TRGSRC_ExtD = 0x02
DAQ2K_AI_TRSRC_SSI = 0x03
DAQ2K_AI_TRGMOD_POST = 0x00 # Post Trigger Mode
DAQ2K_AI_TRGMOD_DELAY = 0x08 # Delay Trigger Mode
DAQ2K_AI_TRGMOD_PRE = 0x10 # Pre-Trigger Mode
DAQ2K_AI_TRGMOD_MIDL = 0x18 # Middle Trigger Mode
DAQ2K_AI_ReTrigEn = 0x80
DAQ2K_AI_Dly1InSamples = 0x100
DAQ2K_AI_Dly1InTimebase = 0x000
DAQ2K_AI_MCounterEn = 0x400
DAQ2K_AI_TrgPositive = 0x0000
DAQ2K_AI_TrgNegative = 0x1000
DAQ2K_AI_TRGSRC_AFI0 = 0x10000
DAQ2K_AI_TRGSRC_AFI1 = DAQ2K_AI_TRGSRC_AFI0 + 0x10000
DAQ2K_AI_TRGSRC_AFI2 = DAQ2K_AI_TRGSRC_AFI0 + 0x20000
DAQ2K_AI_TRGSRC_AFI3 = DAQ2K_AI_TRGSRC_AFI0 + 0x30000
DAQ2K_AI_TRGSRC_AFI4 = DAQ2K_AI_TRGSRC_AFI0 + 0x40000
DAQ2K_AI_TRGSRC_AFI5 = DAQ2K_AI_TRGSRC_AFI0 + 0x50000
DAQ2K_AI_TRGSRC_AFI6 = DAQ2K_AI_TRGSRC_AFI0 + 0x60000
DAQ2K_AI_TRGSRC_AFI7 = DAQ2K_AI_TRGSRC_AFI0 + 0x70000
DAQ2K_AI_TRGSRC_PXIStar = DAQ2K_AI_TRGSRC_AFI0 + 0x90000
DAQ2K_AI_TRGSRC_SMB = DAQ2K_AI_TRGSRC_AFI0 + 0xa0000

# AI Reference ground
AI_RSE = 0x0000
AI_DIFF = 0x0100
AI_NRSE = 0x0200

# Constants for DA
# DA CH config constant
DAQ2K_DA_BiPolar = 0x1
DAQ2K_DA_UniPolar = 0x0
DAQ2K_DA_Int_REF = 0x0
DAQ2K_DA_Ext_REF = 0x1

# DA control constant
DAQ2K_DA_WRSRC_Int = 0x00
DAQ2K_DA_WRSRC_AFI1 = 0x01
DAQ2K_DA_WRSRC_SSI = 0x02
DAQ2K_DA_WRSRC_AFI0 = DAQ2K_DA_WRSRC_AFI1
DAQ2K_DA_WRSRC_PFI0 = DAQ2K_DA_WRSRC_AFI0

# DA group 
DA_Group_A = 0x00
DA_Group_B = 0x04
DA_Group_AB = 0x08

# DA TD Counter SRC: only available for DAQ_old-250X
DAQ2K_DA_TDSRC_Int = 0x00
DAQ2K_DA_TDSRC_AFI0 = 0x10
DAQ2K_DA_TDSRC_GPTC0 = 0x20
DAQ2K_DA_TDSRC_GPTC1 = 0x30

# DA BD Counter SRC: only available for DAQ_old-250X
DAQ2K_DA_BDSRC_Int = 0x00
DAQ2K_DA_BDSRC_AFI0 = 0x40
DAQ2K_DA_BDSRC_GPTC0 = 0x80
DAQ2K_DA_BDSRC_GPTC1 = 0xC0

# DA trigger constant
DAQ2K_DA_TRGSRC_SOFT = 0x00
DAQ2K_DA_TRGSRC_ANA = 0x01
DAQ2K_DA_TRGSRC_ExtD = 0x02
DAQ2K_DA_TRSRC_SSI = 0x03
DAQ2K_DA_TRGMOD_POST = 0x00
DAQ2K_DA_TRGMOD_DELAY = 0x04
DAQ2K_DA_ReTrigEn = 0x20
DAQ2K_DA_Dly1InUI = 0x40
DAQ2K_DA_Dly1InTimebase = 0x00
DAQ2K_DA_Dly2InUI = 0x80
DAQ2K_DA_Dly2InTimebase = 0x00
DAQ2K_DA_DLY2En = 0x100
DAQ2K_DA_TrgPositive = 0x000
DAQ2K_DA_TrgNegative = 0x200

# DA stop mode
DAQ2K_DA_TerminateImmediate = 0
DAQ2K_DA_TerminateUC = 1
DAQ2K_DA_TerminateIC = 2
DAQ2K_DA_TerminateFIFORC = DAQ2K_DA_TerminateIC

# DA stop source : only available for DAQ_old-250X
DAQ2K_DA_STOPSRC_SOFT = 0
DAQ2K_DA_STOPSRC_AFI0 = 1
DAQ2K_DA_STOPSRC_ATrig = 2
DAQ2K_DA_STOPSRC_AFI1 = 3

# -------- Timer/Counter -----------------------------
# Counter Mode (8254)
TOGGLE_OUTPUT = 0 # Toggle output from low to high on terminal count
PROG_ONE_SHOT = 1 # Programmable one-shot
RATE_GENERATOR = 2 # Rate generator
SQ_WAVE_RATE_GENERATOR = 3 # Square wave rate generator
SOFT_TRIG = 4 # Software-triggered strobe
HARD_TRIG = 5 # Hardware-triggered strobe

# 16-bit binary or 4-decade BCD counter
BIN = 0
BCD = 1

# General Purpose Timer/Counter
# Counter Mode
SimpleGatedEventCNT  = 0x01
SinglePeriodMSR = 0x02
SinglePulseWidthMSR = 0x03
SingleGatedPulseGen = 0x04
SingleTrigPulseGen = 0x05
RetrigSinglePulseGen = 0x06
SingleTrigContPulseGen = 0x07
ContGatedPulseGen = 0x08

# GPTC clock source
GPTC_GATESRC_EXT = 0x04
GPTC_GATESRC_INT = 0x00
GPTC_CLKSRC_EXT = 0x08
GPTC_CLKSRC_INT = 0x00
GPTC_UPDOWN_SEL_EXT = 0x10
GPTC_UPDOWN_SEL_INT = 0x00

# GPTC clock polarity
GPTC_CLKEN_LACTIVE = 0x01
GPTC_CLKEN_HACTIVE = 0x00
GPTC_GATE_LACTIVE = 0x02
GPTC_GATE_HACTIVE = 0x00
GPTC_UPDOWN_LACTIVE = 0x04
GPTC_UPDOWN_HACTIVE = 0x00
GPTC_OUTPUT_LACTIVE = 0x08
GPTC_OUTPUT_HACTIVE = 0x00
GPTC_INT_LACTIVE = 0x10
GPTC_INT_HACTIVE = 0x00

# GPTC paramID
GPTC_IntGATE = 0x00
GPTC_IntUpDnCTR = 0x01
GPTC_IntENABLE  = 0x02

# SSI signal code
SSI_TIME = 1
SSI_CONV = 2
SSI_WR = 4
SSI_ADSTART = 8
SSI_ADTRIG = 0x20 
SSI_DATRIG = 0x40

# signal code for GPTC
GPTC_CLK_0 = 0x100
GPTC_GATE_0 = 0x200 
GPTC_OUT_0 = 0x300
GPTC_CLK_1 = 0x400
GPTC_GATE_1 = 0x500
GPTC_OUT_1 = 0x600

# signal code for clockoutToSMB source
PXI_CLK_10_M = 0x1000
CLK_20_M  = 0x2000

# signal code for external SMB clk 
SMB_CLK_IN = 0x3000

# signal route lines
PXI_TRIG_0 = 0
PXI_TRIG_1 = 1
PXI_TRIG_2 = 2
PXI_TRIG_3 = 3
PXI_TRIG_4 = 4
PXI_TRIG_5 = 5
PXI_TRIG_6 = 6
PXI_TRIG_7 = 7
PXI_STAR_TRIG = 8
TRG_IO = 9
SMB_CLK_OUT  = 10
AFI0 = 0x10
AFI1  = 0x11
AFI2  = 0x12
AFI3 = 0x13
AFI4 = 0x14
AFI5 = 0x15
AFI6 = 0x16
AFI7 = 0x17
PXI_CLK = 0x18

# export signal plarity
Signal_ActiveHigh = 0x0
Signal_ActiveLow = 0x1

# DAQ_old Event type for the event message
DAQEnd = 0
DBEvent = 1
TrigEvent = 2
DAQEnd_A = 0
DAQEnd_B = 2
DAQEnd_AB = 3
DATrigEvent = 4
DATrigEvent_A = 4
DATrigEvent_B = 5
DATrigEvent_AB = 6

# Not_Reset_Code 
DIONotRest = 0x01

#
# PCIS-DASK Function prototype
#
dll.D2K_Register_Card.restype = I16
dll.D2K_Register_Card.argtypes = (U16,U16,)
dll.D2K_Release_Card.restype = I16
dll.D2K_Release_Card.argtypes = (U16,)
dll.D2K_AIO_Config.restype = I16
dll.D2K_AIO_Config.argtypes = (U16,U16,U16,U16,U16,)
dll.D2K_Register_Card_By_PXISlot_GA.restype = I16
dll.D2K_Register_Card_By_PXISlot_GA.argtypes = (U16,U16,)
dll.D2K_GetPXISlotGeographAddr.restype = I16
dll.D2K_GetPXISlotGeographAddr.argtypes = (U16,POINTER(U8),)
dll.D2K_SoftTrigGen.restype = I16
dll.D2K_SoftTrigGen.argtypes = (U16,U8,)
dll.D2K_GetFPGAVersion.restype = I16
dll.D2K_GetFPGAVersion.argtypes = (U16,POINTER(U32),)
dll.D2K_GetSerialNumber.restype = I16
dll.D2K_GetSerialNumber.argtypes = (U16,POINTER(U8),U8,POINTER(U8),)
dll.D2K_AI_Config.restype = I16
dll.D2K_AI_Config.argtypes = (U16,U16,U32,U32,U16,U16,BOOLEAN,)
dll.D2K_AI_ConfigEx.restype = I16
dll.D2K_AI_ConfigEx.argtypes = (U16,U16,U32,U32,U32,U32,BOOLEAN,)
dll.D2K_AI_PostTrig_Config.restype = I16
dll.D2K_AI_PostTrig_Config.argtypes = (U16,U16,U32,U16,U16,BOOLEAN,)
dll.D2K_AI_PostTrig_ConfigEx.restype = I16
dll.D2K_AI_PostTrig_ConfigEx.argtypes = (U16,U16,U32,U16,U32,BOOLEAN,)
dll.D2K_AI_DelayTrig_Config.restype = I16
dll.D2K_AI_DelayTrig_Config.argtypes = (U16,U16,U32,U32,U16,U16,BOOLEAN,)
dll.D2K_AI_DelayTrig_ConfigEx.restype = I16
dll.D2K_AI_DelayTrig_ConfigEx.argtypes = (U16,U16,U32,U32,U16,U32,BOOLEAN,)
dll.D2K_AI_PreTrig_Config.restype = I16
dll.D2K_AI_PreTrig_Config.argtypes = (U16,U16,U32,U16,U16,BOOLEAN,)
dll.D2K_AI_PreTrig_ConfigEx.restype = I16
dll.D2K_AI_PreTrig_ConfigEx.argtypes = (U16,U16,U32,U16,U32,BOOLEAN,)
dll.D2K_AI_MiddleTrig_Config.restype = I16
dll.D2K_AI_MiddleTrig_Config.argtypes = (U16,U16,U32,U32,U16,U16,BOOLEAN,)
dll.D2K_AI_MiddleTrig_ConfigEx.restype = I16
dll.D2K_AI_MiddleTrig_ConfigEx.argtypes = (U16,U16,U32,U32,U16,U32,BOOLEAN,)
dll.D2K_AI_CH_Config.restype = I16
dll.D2K_AI_CH_Config.argtypes = (U16,U16,U16,)
dll.D2K_AI_InitialMemoryAllocated.restype = I16
dll.D2K_AI_InitialMemoryAllocated.argtypes = (U16,POINTER(U32),)
dll.D2K_AI_ReadChannel.restype = I16
dll.D2K_AI_ReadChannel.argtypes = (U16,U16,POINTER(U16),)
dll.D2K_AI_VReadChannel.restype = I16
dll.D2K_AI_VReadChannel.argtypes = (U16,U16,POINTER(F64),)
dll.D2K_AI_SimuReadChannel.restype = I16
dll.D2K_AI_SimuReadChannel.argtypes = (U16,U16,POINTER(U16),POINTER(U16),)
dll.D2K_AI_ScanReadChannels.restype = I16
#dll.D2K_AI_ScanReadChannels.argtypes = (U16,U16,POINTER(U16),POINTER(U16),)
dll.D2K_AI_ScanReadChannels.argtypes = (U16,U16,POINTER(U16),POINTER(I16),)
dll.D2K_AI_VoltScale.restype = I16
dll.D2K_AI_VoltScale.argtypes = (U16,U16,I16,POINTER(F64),)
dll.D2K_AI_ContReadChannel.restype = I16
dll.D2K_AI_ContReadChannel.argtypes = (U16,U16,U16,U32,U32,U32,U16,)
dll.D2K_AI_ContReadMultiChannels.restype = I16
dll.D2K_AI_ContReadMultiChannels.argtypes = (U16,U16,POINTER(U16),U16,U32,U32,U32,U16,)
dll.D2K_AI_ContScanChannels.restype = I16
dll.D2K_AI_ContScanChannels.argtypes = (U16,U16,U16,U32,U32,U32,U16,)
dll.D2K_AI_ContReadChannelToFile.restype = I16
dll.D2K_AI_ContReadChannelToFile.argtypes = (U16,U16,U16,POINTER(U8),U32,U32,U32,U16,)
dll.D2K_AI_ContReadMultiChannelsToFile.restype = I16
dll.D2K_AI_ContReadMultiChannelsToFile.argtypes = (U16,U16,POINTER(U16),U16,POINTER(U8),U32,U32,U32,U16,)
dll.D2K_AI_ContScanChannelsToFile.restype = I16
dll.D2K_AI_ContScanChannelsToFile.argtypes = (U16,U16,U16,POINTER(U8),U32,U32,U32,U16,)
dll.D2K_AI_ContStatus.restype = I16
dll.D2K_AI_ContStatus.argtypes = (U16,POINTER(U16),)
dll.D2K_AI_ContVScale.restype = I16
dll.D2K_AI_ContVScale.argtypes = (U16,U16,c_void_p,POINTER(F64),I32,)
dll.D2K_AI_AsyncCheck.restype = I16
dll.D2K_AI_AsyncCheck.argtypes = (U16,POINTER(BOOLEAN),POINTER(U32),)
dll.D2K_AI_AsyncClear.restype = I16
dll.D2K_AI_AsyncClear.argtypes = (U16,POINTER(U32),POINTER(U32),)
dll.D2K_AI_AsyncClearEx.restype = I16
dll.D2K_AI_AsyncClearEx.argtypes = (U16,POINTER(U32),POINTER(U32),U32,)
dll.D2K_AI_AsyncDblBufferHalfReady.restype = I16
dll.D2K_AI_AsyncDblBufferHalfReady.argtypes = (U16,POINTER(BOOLEAN),POINTER(BOOLEAN),)
dll.D2K_AI_AsyncDblBufferMode.restype = I16
dll.D2K_AI_AsyncDblBufferMode.argtypes = (U16,BOOLEAN,)
dll.D2K_AI_AsyncDblBufferToFile.restype = I16
dll.D2K_AI_AsyncDblBufferToFile.argtypes = (U16,)
dll.D2K_AI_ContBufferSetup.restype = I16
dll.D2K_AI_ContBufferSetup.argtypes = (U16,c_void_p,U32,POINTER(U16),)
dll.D2K_AI_ContBufferReset.restype = I16
dll.D2K_AI_ContBufferReset.argtypes = (U16,)
dll.D2K_AI_MuxScanSetup.restype = I16
dll.D2K_AI_MuxScanSetup.argtypes = (U16,U16,POINTER(U16),POINTER(U16),)
dll.D2K_AI_ReadMuxScan.restype = I16
dll.D2K_AI_ReadMuxScan.argtypes = (U16,POINTER(U16),)
dll.D2K_AI_ContMuxScan.restype = I16
dll.D2K_AI_ContMuxScan.argtypes = (U16,U16,U32,U32,U32,U16,)
dll.D2K_AI_ContMuxScanToFile.restype = I16
dll.D2K_AI_ContMuxScanToFile.argtypes = (U16,U16,POINTER(U8),U32,U32,U32,U16,)
dll.D2K_AI_EventCallBack_x64.restype = I16
dll.D2K_AI_EventCallBack_x64.argtypes = (U16,I16,I16,ULONG_PTR,)
dll.D2K_AI_AsyncReTrigNextReady.restype = I16
dll.D2K_AI_AsyncReTrigNextReady.argtypes = (U16,POINTER(BOOLEAN),POINTER(BOOLEAN),POINTER(U16),)
dll.D2K_AI_AsyncReTrigNextReadyEx.restype = I16
dll.D2K_AI_AsyncReTrigNextReadyEx.argtypes = (U16,POINTER(BOOLEAN),POINTER(BOOLEAN),POINTER(U32),)
dll.D2K_AI_AsyncDblBufferHandled.restype = I16
dll.D2K_AI_AsyncDblBufferHandled.argtypes = (U16,)
dll.D2K_AI_AsyncDblBufferOverrun.restype = I16
dll.D2K_AI_AsyncDblBufferOverrun.argtypes = (U16,U16,POINTER(U16),)
dll.D2K_AI_SetTimeout.restype = I16
dll.D2K_AI_SetTimeout.argtypes = (U16,U32,)
dll.D2K_AO_CH_Config.restype = I16
dll.D2K_AO_CH_Config.argtypes = (U16,U16,U16,U16,F64,)
dll.D2K_AO_Config.restype = I16
dll.D2K_AO_Config.argtypes = (U16,U16,U16,U16,U16,U16,BOOLEAN,)
dll.D2K_AO_PostTrig_Config.restype = I16
dll.D2K_AO_PostTrig_Config.argtypes = (U16,U16,U16,U16,U16,U16,U16,BOOLEAN,)
dll.D2K_AO_DelayTrig_Config.restype = I16
dll.D2K_AO_DelayTrig_Config.argtypes = (U16,U16,U16,U16,U16,U16,U16,U16,BOOLEAN,)
dll.D2K_AO_InitialMemoryAllocated.restype = I16
dll.D2K_AO_InitialMemoryAllocated.argtypes = (U16,POINTER(U32),)
dll.D2K_AO_WriteChannel.restype = I16
dll.D2K_AO_WriteChannel.argtypes = (U16,U16,I16,)
dll.D2K_AO_VWriteChannel.restype = I16
dll.D2K_AO_VWriteChannel.argtypes = (U16,U16,F64,)
dll.D2K_AO_VoltScale.restype = I16
dll.D2K_AO_VoltScale.argtypes = (U16,U16,F64,POINTER(I16),)
dll.D2K_AO_ContWriteChannel.restype = I16
dll.D2K_AO_ContWriteChannel.argtypes = (U16,U16,U16,U32,U32,U32,U16,U16,)
dll.D2K_AO_ContWriteMultiChannels.restype = I16
dll.D2K_AO_ContWriteMultiChannels.argtypes = (U16,U16,POINTER(U16),U16,U32,U32,U32,U16,U16,)
dll.D2K_AO_AsyncCheck.restype = I16
dll.D2K_AO_AsyncCheck.argtypes = (U16,POINTER(BOOLEAN),POINTER(U32),)
dll.D2K_AO_AsyncClear.restype = I16
dll.D2K_AO_AsyncClear.argtypes = (U16,POINTER(U32),U16,)
dll.D2K_AO_AsyncClearEx.restype = I16
dll.D2K_AO_AsyncClearEx.argtypes = (U16,POINTER(U32),U16,U32,)
dll.D2K_AO_AsyncDblBufferHalfReady.restype = I16
dll.D2K_AO_AsyncDblBufferHalfReady.argtypes = (U16,POINTER(BOOLEAN),)
dll.D2K_AO_AsyncDblBufferMode.restype = I16
dll.D2K_AO_AsyncDblBufferMode.argtypes = (U16,BOOLEAN,)
dll.D2K_AO_SimuWriteChannel.restype = I16
dll.D2K_AO_SimuWriteChannel.argtypes = (U16,U16,POINTER(U16),)
dll.D2K_AO_ContBufferSetup.restype = I16
dll.D2K_AO_ContBufferSetup.argtypes = (U16,c_void_p,U32,POINTER(U16),)
dll.D2K_AO_ContBufferReset.restype = I16
dll.D2K_AO_ContBufferReset.argtypes = (U16,)
dll.D2K_AO_ContStatus.restype = I16
dll.D2K_AO_ContStatus.argtypes = (U16,POINTER(U16),)
dll.D2K_AO_ContBufferComposeAll.restype = I16
dll.D2K_AO_ContBufferComposeAll.argtypes = (U16,U16,U32,c_void_p,c_void_p,BOOLEAN,)
dll.D2K_AO_ContBufferCompose.restype = I16
dll.D2K_AO_ContBufferCompose.argtypes = (U16,U16,U16,U32,c_void_p,c_void_p,BOOLEAN,)
dll.D2K_AO_EventCallBack_x64.restype = I16
dll.D2K_AO_EventCallBack_x64.argtypes = (U16,I16,I16,ULONG_PTR,)
dll.D2K_AO_SetTimeout.restype = I16
dll.D2K_AO_SetTimeout.argtypes = (U16,U32,)
dll.D2K_AO_Group_Setup.restype = I16
dll.D2K_AO_Group_Setup.argtypes = (U16,U16,U16,POINTER(U16),)
dll.D2K_AO_Group_Update.restype = I16
dll.D2K_AO_Group_Update.argtypes = (U16,U16,POINTER(I16),)
dll.D2K_AO_Group_VUpdate.restype = I16
dll.D2K_AO_Group_VUpdate.argtypes = (U16,U16,POINTER(F64),)
dll.D2K_AO_Group_FIFOLoad.restype = I16
dll.D2K_AO_Group_FIFOLoad.argtypes = (U16,U16,U16,U32,)
dll.D2K_AO_Group_FIFOLoad_2.restype = I16
dll.D2K_AO_Group_FIFOLoad_2.argtypes = (U16,U16,U16,U32,)
dll.D2K_AO_Group_WFM_StopConfig.restype = I16
dll.D2K_AO_Group_WFM_StopConfig.argtypes = (U16,U16,U16,U16,)
dll.D2K_AO_Group_WFM_Start.restype = I16
dll.D2K_AO_Group_WFM_Start.argtypes = (U16,U16,U16,U16,U32,U32,U32,U16,)
dll.D2K_AO_Group_WFM_AsyncCheck.restype = I16
dll.D2K_AO_Group_WFM_AsyncCheck.argtypes = (U16,U16,POINTER(U8),POINTER(U32),)
dll.D2K_AO_Group_WFM_AsyncClear.restype = I16
dll.D2K_AO_Group_WFM_AsyncClear.argtypes = (U16,U16,POINTER(U32),U16,)
dll.D2K_DI_ReadLine.restype = I16
dll.D2K_DI_ReadLine.argtypes = (U16,U16,U16,POINTER(U16),)
dll.D2K_DI_ReadPort.restype = I16
dll.D2K_DI_ReadPort.argtypes = (U16,U16,POINTER(U32),)
dll.D2K_DO_WriteLine.restype = I16
dll.D2K_DO_WriteLine.argtypes = (U16,U16,U16,U16,)
dll.D2K_DO_WritePort.restype = I16
dll.D2K_DO_WritePort.argtypes = (U16,U16,U32,)
dll.D2K_DO_ReadLine.restype = I16
dll.D2K_DO_ReadLine.argtypes = (U16,U16,U16,POINTER(U16),)
dll.D2K_DO_ReadPort.restype = I16
dll.D2K_DO_ReadPort.argtypes = (U16,U16,POINTER(U32),)
dll.D2K_DIO_PortConfig.restype = I16
dll.D2K_DIO_PortConfig.argtypes = (U16,U16,U16,)
dll.D2K_DIO_LineConfig.restype = I16
dll.D2K_DIO_LineConfig.argtypes = (U16,U16,U32,U16,)
dll.D2K_DIO_LinesConfig.restype = I16
dll.D2K_DIO_LinesConfig.argtypes = (U16,U16,U32,)
dll.D2K_GCTR_Setup.restype = I16
dll.D2K_GCTR_Setup.argtypes = (U16,U16,U16,U8,U8,U16,U16,)
dll.D2K_GCTR_Control.restype = I16
dll.D2K_GCTR_Control.argtypes = (U16,U16,U16,U16,)
dll.D2K_GCTR_Reset.restype = I16
dll.D2K_GCTR_Reset.argtypes = (U16,U16,)
dll.D2K_GCTR_Read.restype = I16
dll.D2K_GCTR_Read.argtypes = (U16,U16,POINTER(U32),)
dll.D2K_GCTR_Status.restype = I16
dll.D2K_GCTR_Status.argtypes = (U16,U16,POINTER(U16),)
dll.D2K_GCTR_SetupEx.restype = I16
dll.D2K_GCTR_SetupEx.argtypes = (U16,U16,U16,U8,U8,U32,U32,)
dll.D2K_SSI_SourceConn.restype = I16
dll.D2K_SSI_SourceConn.argtypes = (U16,U16,)
dll.D2K_SSI_SourceDisConn.restype = I16
dll.D2K_SSI_SourceDisConn.argtypes = (U16,U16,)
dll.D2K_SSI_SourceClear.restype = I16
dll.D2K_SSI_SourceClear.argtypes = (U16,)
dll.D2K_Route_Signal.restype = I16
dll.D2K_Route_Signal.argtypes = (U16,U16,U16,U16,U16,)
dll.D2K_Signal_DisConn.restype = I16
dll.D2K_Signal_DisConn.argtypes = (U16,U16,U16,U16,)
dll.DAQ2205_Acquire_DA_Error.restype = I16
dll.DAQ2205_Acquire_DA_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2205_Acquire_AD_Error.restype = I16
dll.DAQ2205_Acquire_AD_Error.argtypes = (U16,POINTER(F32),POINTER(F32),POINTER(F32),POINTER(F32),)
dll.DAQ2206_Acquire_DA_Error.restype = I16
dll.DAQ2206_Acquire_DA_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2206_Acquire_AD_Error.restype = I16
dll.DAQ2206_Acquire_AD_Error.argtypes = (U16,POINTER(F32),POINTER(F32),POINTER(F32),POINTER(F32),)
dll.DAQ2213_Acquire_AD_Error.restype = I16
dll.DAQ2213_Acquire_AD_Error.argtypes = (U16,POINTER(F32),POINTER(F32),POINTER(F32),POINTER(F32),)
dll.DAQ2214_Acquire_DA_Error.restype = I16
dll.DAQ2214_Acquire_DA_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2214_Acquire_AD_Error.restype = I16
dll.DAQ2214_Acquire_AD_Error.argtypes = (U16,POINTER(F32),POINTER(F32),POINTER(F32),POINTER(F32),)
dll.DAQ2010_Acquire_AD_Error.restype = I16
dll.DAQ2010_Acquire_AD_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2010_Acquire_DA_Error.restype = I16
dll.DAQ2010_Acquire_DA_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2005_Acquire_AD_Error.restype = I16
dll.DAQ2005_Acquire_AD_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2005_Acquire_DA_Error.restype = I16
dll.DAQ2005_Acquire_DA_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2006_Acquire_AD_Error.restype = I16
dll.DAQ2006_Acquire_AD_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2006_Acquire_DA_Error.restype = I16
dll.DAQ2006_Acquire_DA_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2016_Acquire_AD_Error.restype = I16
dll.DAQ2016_Acquire_AD_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2016_Acquire_DA_Error.restype = I16
dll.DAQ2016_Acquire_DA_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2204_Acquire_DA_Error.restype = I16
dll.DAQ2204_Acquire_DA_Error.argtypes = (U16,U16,U16,POINTER(F32),POINTER(F32),)
dll.DAQ2204_Acquire_AD_Error.restype = I16
dll.DAQ2204_Acquire_AD_Error.argtypes = (U16,POINTER(F32),POINTER(F32),POINTER(F32),POINTER(F32),)
dll.DAQ2208_Acquire_AD_Error.restype = I16
dll.DAQ2208_Acquire_AD_Error.argtypes = (U16,POINTER(F32),POINTER(F32),POINTER(F32),POINTER(F32),)
dll.DAQ250X_Acquire_DA_Error.restype = I16
dll.DAQ250X_Acquire_DA_Error.argtypes = (I16,U16,U16,POINTER(c_float),POINTER(c_float),)
dll.DAQ250X_Acquire_AD_Error.restype = I16
dll.DAQ250X_Acquire_AD_Error.argtypes = (I16,U16,POINTER(c_float),POINTER(c_float),)
dll.D2K_DB_Auto_Calibration_ALL.restype = I16
dll.D2K_DB_Auto_Calibration_ALL.argtypes = (U16,)
dll.D2K_EEPROM_CAL_Constant_Update.restype = I16
dll.D2K_EEPROM_CAL_Constant_Update.argtypes = (U16,U16,)
dll.D2K_Load_CAL_Data.restype = I16
dll.D2K_Load_CAL_Data.argtypes = (U16,U16,)
dll.D2K_Set_Default_Load_Area.restype = I16
dll.D2K_Set_Default_Load_Area.argtypes = (U16,U16,)
dll.D2K_Get_Default_Load_Area.restype = I16
dll.D2K_Get_Default_Load_Area.argtypes = (U16,)
dll.D2K_AI_GetEvent.restype = I16
dll.D2K_AI_GetEvent.argtypes = (U16,POINTER(HANDLE),)
dll.D2K_AO_GetEvent.restype = I16
dll.D2K_AO_GetEvent.argtypes = (U16,POINTER(HANDLE),)
dll.D2K_DI_GetEvent.restype = I16
dll.D2K_DI_GetEvent.argtypes = (U16,POINTER(HANDLE),)
dll.D2K_DO_GetEvent.restype = I16
dll.D2K_DO_GetEvent.argtypes = (U16,POINTER(HANDLE),)

'''A low-level class for registering a DAQ_2502 card and performing basic read,
write functionality.'''
class DAQ2502(object):
    def __init__(self, card_number):
        
        self.card = dll.D2K_Register_Card(DAQ_2502, card_number)
        self.n_samples = {}
        
        da_ch = (U16*8)(0, 1, 2, 3, 4, 5, 6, 7)
        
        if self.card < 0:
            raise Exception(warning_code[self.card])
        else:
            print 'Registered card', card_number, 'as card number', self.card
        
        dll.D2K_AO_Group_Setup(self.card, DA_Group_AB, 8, da_ch)
        dll.D2K_AO_Config(self.card, DAQ2K_DA_WRSRC_Int, DAQ2K_DA_TRGSRC_SOFT | DAQ2K_DA_TRGMOD_POST, 0, 0, 0, 0)
    
    def release(self):
        dll.D2K_Release_Card(self.card)
        print 'Released card', self.card
    
    # Analog Output
    def write(self, digital_values):
        # AO channels are in order [0, 1, 2, 3, 4, 5, 6, 7]
        # Speed test: 512 samples in 13 ms = 40 ksps
        dll.D2K_AO_Group_Update(self.card, DA_Group_AB, digital_values.ctypes.data_as(POINTER(I16)))
    
    def load(self, digital_values):
        buffer_id = U16()
        
        self.digital_values = digital_values
        
        n_samples, n_channels = digital_values.shape
        if n_channels != self.numChs:
            print 'WARNING: Trying to load', n_channels, 'channels of data into a', self.numChs, 'channel DAQ.'
              
        dll.D2K_AO_ContBufferSetup(self.card, digital_values.ctypes.data_as(c_void_p), n_samples*n_channels, byref(buffer_id))
        
        self.n_samples[buffer_id.value] = n_samples
        self.last_buffer = buffer_id.value
        
        return self.last_buffer
        
    def play(self, update_interval=40, buffer_id=None):
        if not buffer_id: buffer_id = self.last_buffer
        dll.D2K_AO_Group_WFM_Start(self.card, DA_Group_AB,  buffer_id, 0, self.n_samples[buffer_id], 1, update_interval, 1)
        
    def wait(self):
        write_finished = BOOLEAN(0)
        write_count = U32(0)
#         print write_finished.value
        while write_finished.value == 0:
            dll.D2K_AO_Group_WFM_AsyncCheck(self.card, DA_Group_AB, write_finished, write_count)
#         print write_finished.value
            
    def stop(self):
        write_count = U32(0)
        dll.D2K_AO_Group_WFM_AsyncClear(self.card, DA_Group_AB, write_count, DAQ2K_DA_TerminateImmediate)
#         print write_count.value, "samples written in total on card", self.card
            
    def clear(self):
        dll.D2K_AO_ContBufferReset(self.card)
        self.n_samples = {}
    
    # Analog Input
    def read(self):
        # I16 D2K_AI_ScanReadChannels (U16 CardNumber, U16 NumChans, U16 *Chans, U16 *Buffer)
        ad_ch = (U16*4)(0, 1, 2, 3)
        digital_values = np.zeros([4], I16)
        dll.D2K_AI_ScanReadChannels (self.card, 4, ad_ch, digital_values.ctypes.data_as(POINTER(I16)))
        return digital_values
    
    # Digital channels

#     def configure_digital_line(self, port, line, direction):
#         err = dll.D2K_DIO_LineConfig(self.card, port, line, direction)
#         if err != 0:
#             print err
#             raise Daq2502Exception('Error configuring the digital line', err)
        
    def configure_digital_port(self, port, direction):
        err =  dll.D2K_DIO_PortConfig(self.card, port, direction)
        if err != 0:
            print err
            raise Daq2502Exception('Error configuring the digital line', err)
    
    # Digital output
    def write_digital_port(self, bit_values, port):
        dll.D2K_DO_WritePort(self.card, port, bit_values)
        
    def write_digital_line(self, port, line, state):
        dll.D2K_DO_WriteLine(self.card, port, line, state)
        
    def read_digital_line(self, port, line, direction):
        state = U16(2)

        if direction==OUTPUT_LINE:
            dll.D2K_DO_ReadLine(self.card, port, line, byref(state))
        elif direction==INPUT_LINE:
            dll.D2K_DI_ReadLine(self.card, port, line, byref(state))
        
        return state.value

    # Digital input
    # TODO
    
    def get_card(self):
        return self.__card

    def get_n_samples(self):
        return self.__n_samples
    
    def set_card(self, value):
        self.__card = value

    def set_n_samples(self, value):
        self.__n_samples = value

    def del_card(self):
        del self.__card

    def del_n_samples(self):
        del self.__n_samples

    card = property(get_card, set_card, del_card, "DAQ card ID for addressing it")
    n_samples = property(get_n_samples, set_n_samples, del_n_samples, "The (min, max) digital values the DAQ card can output on a channel")

class DAQ_channel(object):
    '''A simple class for the persistance of labels and settings of individual DAQ channels.'''
    
    def __init__(self, chNum, chName='', chLimits=(-10,10), defaultValue=0.0, isUIVisable = True,
                 calibrationFname = ''):
        
        self.chNum = chNum
        self.chName =  chName.strip() if chName.strip() else "Ch " + str(chNum) 
        self.chLimits = chLimits
        self.defaultValue = defaultValue
        self.isUIVisable = isUIVisable
        
        self.isCalibrated = False
        self.calibrationToVFunc, self.calibrationFromVFunc = None, None
        self.calibrationUnits = ''
        if calibrationFname.strip() != '':
            self.calibrate(calibrationFname)
        
    def calibrate(self, calibrationFname, reReadIn = r'([\+|\-]?[\d|\.]+)[ \t]*([\+|\-]?[\d|\.]+)'):
        vData, calData = [], []
        with open(calibrationFname) as f:
            self.calibrationUnits = re.split(r'[ \t]*', f.readline())[-1].strip()
            for line in f.readlines():
                match = re.match(reReadIn, line.strip())
                if match:
                    vData.append(float(match.group(1)))
                    calData.append(float(match.group(2)))
                    
        if calData[0] <= calData[-1]:
            self.calibrationToVFunc = lambda x: np.interp(x, calData, vData)
        else:
            print self.chName, ": calibration to Voltage being reversed..."
            self.calibrationToVFunc = lambda x: np.interp(x, [x for x in reversed(calData)], [x for x in reversed(vData)])
            
        if vData[0] <= vData[-1]:    
            self.calibrationFromVFunc = lambda x: np.interp(x, vData, calData)
        else:
            print self.chName, ": calibration from Voltage being reversed..."
            self.calibrationFromVFunc = lambda x: np.interp(x, [x for x in reversed(vData)], [x for x in reversed(calData)])
        
        self.isCalibrated = True
        self.calibrationFname = calibrationFname
        
    def removeCalibration(self):
        self.isCalibrated = False
        self.calibrationToVFunc, self.calibrationFromVFunc = None, None
        self.calibrationUnits = ''
        
    def getHelpText(self):
        formatArgs = [self.chNum, self.chLimits, self.defaultValue]
        if self.isCalibrated:
            formatArgs[2] = '{0}{1}'.format(self.calibrationFromVFunc(self.defaultValue), self.calibrationUnits)
        return ('DAQ channel: {0}\n' + \
                'Channel limits: {1}V\n' + \
                'Default value: {2}\n' + \
                self.getCalibrationText()).format(*formatArgs)
                
    def getCalibrationText(self):
        if not self.isCalibrated:
            return 'There is no calibration on this channel.'
        else:
            return (('Channel units: {0}\n' +\
                     'Calibration range: {1}V <-> {2}{3}').\
                        format(self.calibrationUnits,
                               self.calibrationToVFunc((-np.inf,np.inf)),
                               self.calibrationFromVFunc((-np.inf,np.inf)),
                               self.calibrationUnits))
 
class DAQ_dio:
     
    def __init__(self, dio_name, dio_num, port, line, direction, enabled_state):
        self.dio_name = dio_name
        self.dio_num = dio_num
        self.port = port
        self.line = line
        self.direction = direction
        self.enabled_state = enabled_state
        
        self.write_fn, self.read_fn = None, None
        
    def register_write_fn(self, write_fn):
        self.write_fn = write_fn
        
    def register_read_fn(self, read_fn):
        self.read_fn = read_fn
        
    def write(self, value):
        return self.write_fn(value)
        
    def read(self):
        return self.read_fn()
    
    def toggle_state(self, return_state=False):
        self.write(1 if self.read()==0 else 0)
        if return_state:
            return self.read()
    
    def get_help_text(self):
        direction = 'output' if self.direction==OUTPUT_LINE else \
                    'input' if self.direction==INPUT_LINE else \
                    'unknown'
                    
        return ('Digital {0} channel registered on digital channel {1}.\n' +\
                'Enabled state is {2}.\n' +\
                '(Technical details: port {3},  line {4}).').\
                    format(direction, self.dio_num, 'HIGH' if self.enabled_state==1 else 'LOW', self.port, self.line)
    
class DAQ_card(DAQ2502):
    '''A subclass of DAQ2502 to extend it's functionality to be more user friendly.  In particular the conversion of
    sequences from a user friendly format (arrays of voltages on channel in numeric order) to the form expected by the
    DAQ card is handled at this level.'''
    
    def __init__(self, card_number, channels=[], dios=[]):
        DAQ2502.__init__(self, card_number) 
        # Hard-coded limits - there are exactly 8 channels on the DAC card, each capable of outputting digital
        # values from 0 to 4095.<--> -/+10V.
        # When passing a full sequence to the DAQ card as an array the n-th channel sequence doesn't necessarily correspond
        # to the n-th DAQ channel - because fuck you - so we define the order expected here and will re-order our arrays before
        # sending them.
        '''IMPORTANT NOTES: 
        1. the expectedChOrderForSeq doesn not refer to the channel numbers, but the index of each channel in a
        list when they are sorted by channel number. e.g. if a DAQ card has channels 8,9,10,...15 - the expectedChOrderForSeq is still
        [0,4,1,5,2,6,3,7], which corresponds to [8,11,9,12,...].
        2. update_interval: From function reference pdf:
                When the device has an external time base, the range of valid value is 8 to 16777215. If the 
                time base is internal, the range of valid value is 40 to 16777215.'''
        self.numChs = 8
        self.expectedChOrderForSeq = [0,4,1,5,2,6,3,7]
        self.chDigitalLimits = (0, 4095)
        self.chVoltageLimits = (-10,10)
        # Clock speed in Hz
        self.clock_speed = 40*10**6
        self.useInternalTimeBasis = True
        self.updateIntervalLimits = (40, 16777215) if self.useInternalTimeBasis else (8, 16777215)
        
        # Perform some basic validation on the channels provided and sort them by channel number
        self.channels = self.validateAndSortChannels(channels)
        
        self.dios = self.validateAndRegisterDigitalIos(dios)
        
    def arrayToDigitalValues(self, sequenceArray, reqChOrder=None):
        '''Takes a numpy array denoting the desired voltages on each DAQ channel of the form:
            [[Ch0_t0,Ch0_t1,Ch0_t2, ...],
             [Ch1_t0,Ch1_t1,Ch1_t2, ...],
             [Ch2_t0,Ch2_t1,Ch2_t2, ...],
             ...                         ]
            and converts it to a numpy array of digital values of the data type and order expected
            by the DAQ card.'''
        numChs, numSamps = sequenceArray.shape
        if numChs != self.numChs:
            print 'WARNING: the sequence being loaded is for', numChs, 'but DAQ card', self.card, 'has', self.numChs, 'channels.'
        
        # The digital values representing the sequence that will be put to the card (note the data type is predetermined as uint16).
        digital_values = np.zeros((numChs, numSamps), dtype=np.uint16)
        
        # Populate the digital_values array. Three things are done here
        #   1. The sequence is clipped according to the user set limits on the DAC channel output.
        #   2. The channel values are scaled to be digital values within the limits of the DAQ card...
        #   3. The order the channels as listed in the array is changed to match that expected by the dll.D2K_AO_Group_WFM_Start function on the card.
        if reqChOrder == None:
            # Don't reorder the channels of no order was provided
            reqChOrder = range(0,numChs) 
        for i in range(0,numChs):
            digital_values[reqChOrder.index(i)] = \
                np.interp(np.clip(sequenceArray[i], self.channels[i].chLimits[0], self.channels[i].chLimits[1]),
                          self.chVoltageLimits, self.chDigitalLimits)
                
        # I think the DAQ card expects the matrix shape to be (numSamps, numChs) so let's correct for that -
        # however, .transpose only changes the representation of the data (i.e. for the user/validation)m
        # to change the order the card access the array data we set order='c'. (Thanks Dustin!)
        digital_values= digital_values.transpose()
        return digital_values.astype(np.uint16, order='c')
    
    def play(self, t_step=1, buffer_id=None):
        '''Note t_step is in microseconds'''
        update_interval = int(round(t_step*10**-6 * self.clock_speed))
        if self.updateIntervalLimits[0] > update_interval or self.updateIntervalLimits[1] < update_interval:
            raise DaqPlayException('Error on DAQ card {0}: update interval of {1} is not between card limits of {2} to {3}.'.\
                                   format(self.card, update_interval, *self.updateIntervalLimits))
        DAQ2502.play(self, update_interval=update_interval, buffer_id=buffer_id)
        
    def write(self, valueArray):
        return DAQ2502.write(self, self.arrayToDigitalValues(valueArray, [0,1,2,3,4,5,6,7]))
        
    def load(self, sequenceArray):
        return DAQ2502.load(self, self.arrayToDigitalValues(sequenceArray, self.expectedChOrderForSeq))
        
    def validateAndSortChannels(self, channels):
        ''' Check the right number of channels are registered and attempt to fix it if they are not.'''
        for ch in channels:
            if type(ch) is not DAQ_channel:
                raise TypeError("Only DAQ_channel objects can registered channels on a DAQ_card")
        
        # Check we have the right number of channels registered
        regChs = len(channels)
        if self.numChs < regChs:
            print("WARNING: more DAQ channels were registered than are available. Ignoring additional channel definitions.")
            channels = channels[:self.numChs]
        elif self.numChs > regChs:
            print("WARNING: fewer DAQ channels were registered than are available. Unassigned channels will use default labelling and values.")
            channels + [DAQ_channel(i) for i in range(regChs,self.numChs)]
        
        # Sort channels by number and check that we have the expected channel numbers (e.g. 0,1,2,...) registered.
        # Note that for slaves the first channel number might be, e.g., 8 which would correspond to ch 0 on the card
        channels = sorted(channels, key= lambda ch : ch.chNum)   
        if [ch.chNum for ch in channels] != range(channels[0].chNum , channels[0].chNum + self.numChs):
            raise Exception("Unexpected channels registered.\nRegistered channel numbers: ", [ch.chNum for ch in channels],
                            "\nExpected channel numbers: ", range(channels[0].chNum, self.numChs))
                            
        return channels

    def validateAndRegisterDigitalIos(self, dios):
        '''
        WARNING:  Currently the code allows for lines to override the config of the port when they are registered.
        e.g. a port must be input or output only, so if mupltiple lines on that port are input and output,
        things will go wrong...
        '''
        registered_lines = []
        for dio in dios:
            try:
                DAQ2502.configure_digital_port(self, dio.port, dio.direction)
                if dio.direction == OUTPUT_LINE:
                    dio.register_write_fn(lambda state,
                                                 card=self,
                                                 port=dio.port,
                                                 line=dio.line: 
                                                    DAQ2502.write_digital_line(card, port, line, state))
                # TODO: register read functions
                dio.register_read_fn(lambda card=self,
                                            port=dio.port,
                                            line=dio.line,
                                            direction=dio.direction:
                                                DAQ2502.read_digital_line(card, port, line, direction))
                
                registered_lines.append(dio)  
                
            except Daq2502Exception as err:
                print 'Error configuring digital line (\'{0}\') on card {0}, port {1}, line {2}.  Not registering line.'.format(
                        dio.dio_name, self.card, dio.port, dio.line)
            
        return registered_lines
            
class DAQ_controller(object):
    '''A class for controlling one or more DAQ_2502 cards.  For multiple cards, all timings synchronised to a chosen 'master' card.
    The aim is for this to be the lowest level for the user control the DAQ cards - i.e. the DAQ cards act like one giant card through
    this interface.'''
    
    def __init__(self, master, slaves=[], continuousOutput=False):
        '''Initialise the DAQ_controller with:
            master : a DAQ2502/DAQ_card instance
            slaves : one or more DAQ2502/DAQ_card instances, slaves = myDAQ or slaves=[myDAQ1, myDAQ2...]'''
        
#         check that master is one DAQ card, slave is list of DAQ cards
        if type(slaves) is not list:
            slaves = [slaves]
#         for card in slaves + [master]:
#             if not isinstance(card, DAQ2502):
#                 raise TypeError("Only DAQ2502 objects can be passed to the DAQ_controller")
            
        self.master = master
        self.slaves = slaves
        
#         Enslave all the slave cards to the master
        for slave in self.slaves:
            self.enslave(slave)

        self.continuousOutput = continuousOutput
            
        self.channelValues = {ch.chNum: ch.defaultValue for ch in self.getChannels()}
        if continuousOutput:
            self.writeChannelValues()
    
    def updateChannelValue(self, chNum, newValue):
        self.channelValues[chNum] = newValue
        if self.continuousOutput:
            #TODO : WHY DO I NEED THIS HACK???
            self.write( np.array([[v] for _,v in sorted(self.channelValues.items())]) )
            self.write( np.array([[v] for _,v in sorted(self.channelValues.items())]) )
    
    def writeChannelValues(self):
        #TODO : WHY DO I NEED THIS HACK???
            self.__writeChannelValues()
            self.__writeChannelValues()
            
    def __writeChannelValues(self):
        self.write( np.array([[v] for _,v in sorted(self.channelValues.items())]) )
        
    def getChannelValues(self):
        return np.array([[v] for _,v in sorted(self.channelValues.items())])
        
    def toggleContinuousOutput(self):
        self.continuousOutput = not self.continuousOutput
        if self.continuousOutput:
            self.write( np.array([[v] for _,v in sorted(self.channelValues.items())]) )
        else:
            self.write( np.zeros((len(self.getChannels()), 1 )) )
            
    def validateAndCorrectControlArray(self, controlArray):
        '''Ensure the control array has for the correct number of channels.'''
        seqChs, numSamps = controlArray.shape
        totChs = sum([card.numChs for card in [self.master] + self.slaves])
        if seqChs < totChs:
            print 'WARNING: Attempting to load an array for', seqChs, 'channels when there are', totChs, 'channels available. Extra channels will be set to zero.'
            controlArray = np.vstack([controlArray, np.zeros([totChs-seqChs, numSamps])])
        elif seqChs > totChs:
            print 'WARNING: Attempting to load an array for', seqChs, 'channels when there are', totChs, 'channels available. Extra channels will be ignored.'       
            controlArray = controlArray[:totChs]
            
        return controlArray
        
    def write(self, valueArray):      
        '''Write a value array into the DAQ cards. Note the expected ordering of the array is that the first n1 channels correspond
        to the n1 channels on the master card, the next n2 channels to the channels on the first listed slave card, the next n3 to the
        second listed slave card and so on.  The order of the slave cards is defined by there order in the list with which the controller
        was initialised.'''
        valueArray = self.validateAndCorrectControlArray(valueArray)
        # Now it is the right size, split the value array between the DAQ cards. (Note - write to the master last so the update
        # signal is sent to the salves after the values are updated).   
        for card in reversed([self.master] + self.slaves):
            vals = valueArray[-card.numChs:]
            valueArray = valueArray[:-card.numChs]
#             time.sleep(0.1)
            card.write(vals)  
                              
    def load(self, sequenceArray):
        '''Load a sequence into the DAQ cards. Note the expected ordering of the sequence is that the first n1 channels correspond
        to the n1 channels on the master card, the next n2 channels to the channels on the first listed slave card, the next n3 to the
        second liste slave card and so on.  The order of the slave cards is defined by there order in the list with which the controller
        was initialised.'''
        sequenceArray = self.validateAndCorrectControlArray(sequenceArray)
        # Now it is the right size, split the sequence between the DAQ cards.    
        nChsLoaded = 0
        for card in [self.master] + self.slaves:
            card.load(sequenceArray[nChsLoaded:nChsLoaded+card.numChs])
            nChsLoaded += card.numChs
            
    def play(self, t_step=1, clearCards=True, buffer_id=None):
        '''
        Note t_step is in microseconds
        
        Play the sequence last loaded onto the DAQ cards.  Talk to Dustin to confirm usage of buffer_id...
           The order of events is:
                1. Play all the slaves - they will not start until the master is started due to the timing synchronisation set up in the enslave function.
                2. Start the master card, triggering the sequence.
                3. Wait for the mater card to finish it's sequence.
                4. Stop the master card. (It's not yet clear if this step is essential.)
                5. Wait for the slaves to finish if they are still playing.
                6. Stop the slave cards.'''
        for slave in self.slaves:
            slave.play(t_step)
        self.master.play(t_step)
        self.master.wait()
        self.master.stop()
#         for slave in self.slaves:
#             print 'waiting for card: ', slave.card
#             slave.wait()
        for slave in self.slaves:
            slave.stop()
        if clearCards:
            self.clearCards()
                
    def clearCards(self):
        '''
        Clear all the cards redy for a new sequence to be loaded.
        '''
        for card in [self.master] + self.slaves:
            card.clear()       
        
    def enslave(self, slave):
        '''Enslave a card to the master'''
        print 'Enslaved card {0} to card {1}'.format(slave.card, self.master.card)
#         dll.D2K_AO_Config(slave.card, DAQ2K_DA_WRSRC_SSI, DAQ2K_DA_TRSRC_SSI | DAQ2K_DA_TRGMOD_POST, 0, 0, 0, 0) # OLD and depricated by Tom 1/9/16
        dll.D2K_AO_Config(slave.card, DAQ2K_DA_WRSRC_SSI | DA_Group_AB, DAQ2K_DA_TRSRC_SSI | DAQ2K_DA_TRGMOD_POST, 0, 0, 0, 0)
        dll.D2K_SSI_SourceConn(self.master.card, SSI_WR | SSI_DATRIG)
            
    def emancipate(self, slave):
        '''Free a card from the master'''
        print 'Freed card {0} from card {1}'.format(slave.card, self.master.card)
        # Should the second argument be DAQ2K_DA_WRSRC_Int | DA_Group_AB for consistancy with enslave()?
        dll.D2K_AO_Config(slave.card, DAQ2K_DA_WRSRC_Int, DAQ2K_DA_TRGSRC_SOFT | DAQ2K_DA_TRGMOD_POST, 0, 0, 0, 0)
        dll.D2K_SSI_SourceClear(self.master.card)
    
    def releaseAll(self):
        for card in self.slaves + [self.master]:
            card.release() 
                
    def getChannels(self, onlyVisable = False):
        '''Returns a list of all the DAQ_channel objects registered with the controller.'''
        channels = sum([card.channels for card in [self.master] + self.slaves],[])
        if onlyVisable: 
            channels = [ch for ch in channels if ch.isUIVisable]
        return channels        
    
    def getDIOs(self):
        '''Returns a list of all the DAQ_dio (digital in/out) objects registered with the controller.'''
        return sum([card.dios for card in [self.master] + self.slaves],[])
        
    def getChannelNumberNameDict(self, onlyVisable = False):      
        '''Returns a list of all the DAQ_channel in a dict. of the form {chNum: chName}.'''
        return dict([(ch.chNum,ch.chName) for ch in self.getChannels(onlyVisable)])
            
    def getChannelCalibrationDict(self):
        '''Returns a dictonary of all calibrated channels of the form
            {channel number:(calibrationUnits, calibrationToVFunc, calibrationFromVFunc)}.'''
        return dict([(ch.chNum, (ch.calibrationUnits, ch.calibrationToVFunc, ch.calibrationFromVFunc))
                     for ch in self.getChannels(onlyVisable=False) if ch.isCalibrated])
            
    def get_master(self):
        return self.__master

    def get_slaves(self):
        return self.__slaves

    def set_master(self, value):
        self.__master = value

    def set_slaves(self, value):
        self.__slaves = value

    def del_master(self):
        del self.__master

    def del_slaves(self):
        del self.__slaves
        
    master = property(get_master, set_master, del_master, "The master DAQ card")
    slaves = property(get_slaves, set_slaves, del_slaves, "The list of slaves that get there timings from the master DAQ card")

class DaqPlayException(Exception):
    def __init__(self, message, errors=[]):
        # Call the base class constructor with the parameters it needs
        super(DaqPlayException, self).__init__(message)
        self.errors = errors
        
class Daq2502Exception(Exception):
    def __init__(self, message, errors=[]):
        # Call the base class constructor with the parameters it needs
        super(Daq2502Exception, self).__init__(message)
        self.errors = errors