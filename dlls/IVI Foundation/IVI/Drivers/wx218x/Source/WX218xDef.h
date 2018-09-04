/******************************************************************************
*                                                                         
*               Copyright 2010-2014 Tabor Electronics Ltd.
*               All rights reserved.
*
*****************************************************************************/
#define CHAN_A "1"
#define CHAN_B "2"
#define CHAN_C "3"
#define CHAN_D "4"

#define CHAN_INDEX_MIN                         1
#define CHAN_INDEX_MAX                         4

#define CHAN_COUNT_MAX                         4

//#define WX2184_ADD_32PT                        1

/***************************** - Models musk ********************************/
#define MNM_WX2181                             0x1
#define MNM_WX2182                             0x2
#define MNM_WX2181B                            0x4
#define MNM_WX2182B                            0x8
#define MNM_WX1281B                            0x10
#define MNM_WX1282B                            0x20
#define MNM_WS8351                             0x40
#define MNM_WS8352                             0x80
#define MNM_WX2181BD                           0x100
#define MNM_WX2182BD                           0x200
#define MNM_WX1281BD                           0x400
#define MNM_WX1282BD                           0x800
#define MNM_WX2184                             0x1000
#define MNM_WX2182C                            0x2000
#define MNM_WX1284                             0x4000
#define MNM_WX2181C                            0x8000
#define MNM_WX1281C                            0x10000
#define MNM_WX1282C                            0x20000
#define MNM_WX2184C                            0x40000
#define MNM_WX1284C                            0x80000


#define WX218X_FAM                             (MNM_WX2181  | MNM_WX2182)
#define WX218XB_FAM                            (MNM_WX2181B | MNM_WX2182B | MNM_WX2182C | MNM_WX2181C | MNM_WX1281C | MNM_WX1282C)
#define WX128XB_FAM                            (MNM_WX1281B | MNM_WX1282B)
#define WS835X_FAM                             (MNM_WS8351  | MNM_WS8352)
#define WX218XBD_FAM                           (MNM_WX2181BD | MNM_WX2182BD)
#define WX128XBD_FAM                           (MNM_WX1281BD | MNM_WX1282BD)
#define WX2184X_FAM                            (MNM_WX2184 | MNM_WX1284 | MNM_WX2184C | MNM_WX1284C)

/******************************** - Types for Load Data *********************/
#define TYPE_FSK                                1
#define TYPE_PSK                                2
#define TYPE_PSK_USER                           3
#define TYPE_FHOP_FIX                           4
#define TYPE_FHOP_VAR                           5
#define TYPE_ASK                                6
#define TYPE_AHOP_FIX                           7
#define TYPE_AHOP_VAR                           8
#define TYPE_QAM                                9
#define TYPE_QAM_USER                           10
#define TYPE_PATTERN_PREDEFINED                 11
#define TYPE_PATTERN_COMPOSER_FAST              12
#define TYPE_PATTERN_COMPOSER_LINEAR            13
#define TYPE_DIGITAL_PATTERN_PARAM              14

/******************************** Instrument Common *************************/
#define INSTR_SKEW_MIN                          -100.0E-12
#define INSTR_SKEW_MAX                          100.0E-12

/*************************** - Standard Waveforms- **************************/
#define SINC_NCYCLE_MIN                         4
#define SINC_NCYCLE_MAX                         100

#define RAMP_MIN                                0
#define RAMP_MAX                                99.99

#define AMPLITUDE_MIN                           50.0E-3
#define AMPLITUDE_MAX                           2
#define AMPLITUDE_MIN_WS835X                    50.0E-3
#define AMPLITUDE_MAX_WS835X                    4.0

#define PULSE_AMPLITUDE_MIN                     50.0E-3
#define PULSE_AMPLITUDE_MAX                     2
#define PULSE_AMPLITUDE_MIN_WS835X              100.0E-3
#define PULSE_AMPLITUDE_MAX_WS835X              4

#define HV_AMPLITUDE_MIN_WX218XB                50.0E-3
#define HV_AMPLITUDE_MAX_WX218XB                4.0
#define HV_AMPLITUDE_MIN_WX128XB                50.0E-3
#define HV_AMPLITUDE_MAX_WX128XB                4.0

#define OFFSET_MIN                              -1.5
#define OFFSET_MAX                              1.5
#define OFFSET_MIN_WX2184                       -1.0
#define OFFSET_MAX_WX2184                        1.0

#define POWER_MIN                               -25.0
#define POWER_MAX                               5.0
#define POWER_MIN_WX218XB                       -20.0
#define POWER_MAX_WX218XB                       10.0
#define POWER_MIN_WX128XB                       -20.0
#define POWER_MAX_WX128XB                       10.0

#define PHASE_MIN                               0
#define PHASE_MAX                               360.0

#define GAUS_EXP_MIN                            10
#define GAUS_EXP_MAX                            200
#define GAUS_EXP_MIN_WX2184                     1
#define GAUS_EXP_MAX_WX2184                     200

#define EXP_EXP_MIN                             -100
#define EXP_EXP_MAX                             100

#define DC_LEVEL_MIN                            -1.5
#define DC_LEVEL_MAX                            1.5
#define DC_LEVEL_MIN_WX2184                     -1.0
#define DC_LEVEL_MAX_WX2184                     1.0

#define FREQUENCY_MIN                           10.0E3
#define FREQUENCY_MAX                           1.0E9
#define FREQUENCY_MAX_WX218XB                   1.0E9
#define FREQUENCY_MAX_WX218XC                   1.0E9
#define FREQUENCY_MAX_WX128XB                   500.0E6
#define FREQUENCY_MAX_WX128XC                   500.0E6
#define FREQUENCY_MAX_WX1284                    500.0E6
#define FREQUENCY_MAX_WS835X                    350.0E6

#define GAUS_EXP_MIN                            10
#define GAUS_EXP_MAX                            200

#define EXP_EXP_MIN                             -100
#define EXP_EXP_MAX                             100

#define DAC_AMPLITUDE_MIN                       50E-3
#define DAC_AMPLITUDE_MAX                       500E-3

/********************************* - Output - ******************************/
#define ROSC_EXT_FREQ_MIN                       10E6
#define ROSC_EXT_FREQ_MAX                       100E6

/********************************* - Trigger -  ****************************/
#define TRIG_COUNT_MIN                          1
#define TRIG_COUNT_MAX                          1E6
#define TRIG_COUNT_MAX_WX218XB                  16777216
#define TRIG_COUNT_MAX_WS835X                   1E6

#define TRIG_DEL_MIN                            0
#define TRIG_DEL_MAX                            8E6
#define TRIG_DEL_MAX_WX2184                     4194304

#define TRIG_LEVEL_MIN                          -5.0
#define TRIG_LEVEL_MAX                          5.0

#define TRIG_TIMER_TIME_MIN                     100E-9
#define TRIG_TIMER_TIME_MIN_WX218XB             200E-9
#define TRIG_TIMER_TIME_MIN_WX128XB             200E-9
#define TRIG_TIMER_TIME_MIN_WS835X              100E-9
#define TRIG_TIMER_TIME_MAX                     20.0
#define TRIG_TIMER_TIME_MIN_WX2184              200E-9
#define TRIG_TIMER_TIME_MAX_WX2184              20.0

#define TRIG_TIMER_DELAY_MIN                    ((int)(152))
#define TRIG_TIMER_DELAY_MIN_OPT32M             ((int)(80))
#define TRIG_TIMER_DELAY_MAX                    ((int)(8E6))
#define TRIG_TIMER_DELAY_MIN_WS835X             ((int)(76))
#define TRIG_TIMER_DELAY_MAX_WS835X             ((int)(8E6))
#define TRIG_TIMER_DELAY_MAX_WX2184             ((int)(4194304))

#define TRIG_HOLDOFF_MIN                        100.0E-9
#define TRIG_HOLDOFF_MAX                        2.0

/******************************* - ARM ************************************/
#define ARM_LEVEL_MIN                            -5.0
#define ARM_LEVEL_MAX                            5.0

/******************************** -  Output Sync - ************************/
#define SYNC_POSITION_MIN                       0
//#define SYNC_POSITION_MAX                       15999999 // (16E6-1) 
//#define SYNC_POSITION_MAX_OPT                   63999968 // (64E6-32) 

#define SYNC_WIDTH_MIN                          32

/******************************** -  Arbitrary - **************************/
#define CLOCK_DIVIDER_MIN                       1
#define CLOCK_DIVIDER_MAX                       256 

#define SAMPLE_RATE_MIN                         ((double)(10E6))
#define SAMPLE_RATE_MAX                         ((double)(2.1E9))
#define SAMPLE_RATE_MAX_WX218XB                 ((double)(2.3E9))
#define SAMPLE_RATE_MAX_WX218XC                 ((double)(2.3E9))
#define SAMPLE_RATE_MAX_WX128XC                 ((double)(1.25E9))
#define SAMPLE_RATE_MAX_WX128XB                 ((double)(1.25E9))
#define SAMPLE_RATE_MAX_WS835X                  ((double)(2.0E9))
#define SAMPLE_RATE_MIN_WX2184                  ((double)(75E6))
#define SAMPLE_RATE_MAX_WX2184                  ((double)(2.3E9))
#define SAMPLE_RATE_MIN_WX1284                  ((double)(75E6))
#define SAMPLE_RATE_MAX_WX1284                  ((double)(1.25E9))

/******************************** - Arbitrary Waveform - ******************/
#define POINTS_PER_ADDR                        16
#define SEG_NUM_MIN                            1
#define SEG_NUM_MAX                            32000

#define MAX_NUM_SEGMENTS                       32000

#define VAL_FIRST_WAVEFORM_HANDLE_CHAN_A        1
#define VAL_FIRST_WAVEFORM_HANDLE_CHAN_B        32001   //MAX_NUM_SEGMENTS+1  //32001 
//#define VAL_LAST_WAVEFORM_HANDLE_CHAN_B         64001  //VAL_FIRST_WAVEFORM_HANDLE_CHAN_B+MAX_NUM_SEGMENTS  //64001  

#define VAL_FIRST_WAVEFORM_HANDLE_CHAN_C        64001
#define VAL_FIRST_WAVEFORM_HANDLE_CHAN_D        96001
#define VAL_LAST_WAVEFORM_HANDLE_CHAN_D         128001   //VAL_FIRST_WAVEFORM_HANDLE_CHAN_D + MAX_NUM_SEGMENTS

#define WAVEFORM_QUANTUM_32                     32
#define WAVEFORM_QUANTUM_16                     16 //32   //16  it's must be in the feature

#define WAVEFORM_SIZE_MIN                      320
#define WAVEFORM_SIZE_MIN_WX218XB              384
#define WAVEFORM_SIZE_MIN_WX218XB_OPT32M       192
#define WAVEFORM_SIZE_MIN_WX128XB              384 
#define WAVEFORM_SIZE_MIN_WS835X               384 
#define WAVEFORM_SIZE_MIN_WX2184               192 

#define MEMORY_SIZE_16M                        ((int)(16E6))
#define MEMORY_SIZE_32M                        ((int)(32E6))
#define MEMORY_SIZE_64M                        ((int)(64E6))
#define MEMORY_SIZE_512K                       ((int)(512E3))
#define MEMORY_SIZE_8M                         ((int)(8E6))

#define WFM_ALL                                 -1

#define CHUNK_SIZE_LAN                          256000 
#define CHUNK_SIZE_GPIB                         30000

#define GPIB_STB                                20000

#define POS_SCOPE_16BIT                         32768
#define NEG_SCOPE_16BIT                         32767
#define POS_SCOPE_12BIT                         2048
#define NEG_SCOPE_12BIT                         2047
#define POS_SCOPE_14BIT                         8192
#define NEG_SCOPE_14BIT                         8191

/********************************* - Sequence -****************************/
#define SEQ_NUMBER_MIN                          1
#define SEQ_NUMBER_MAX                          1000

#define SEQ_NUMBER_SEQUENCE_MAX                 1000

#define VAL_FIRST_SEQUENCE_HANDLE_CHAN_A        1
#define VAL_FIRST_SEQUENCE_HANDLE_CHAN_B        1001 //SEQ_NUMBER_SEQUENCE_MAX+1   //1001 
//#define VAL_LAST_SEQUENCE_HANDLE_CHAN_B         2001 //VAL_FIRST_SEQUENCE_HANDLE_CHAN_B+SEQ_NUMBER_SEQUENCE_MAX  //2001

#define VAL_FIRST_SEQUENCE_HANDLE_CHAN_C        2001
#define VAL_FIRST_SEQUENCE_HANDLE_CHAN_D        3001
#define VAL_LAST_SEQUENCE_HANDLE_CHAN_D         4001

#define SEQ_ALL                                 -1

#define COUNT_SEQ_STEP_MIN                      3

#define SEQ_STEP_MIN                            1
#define SEQ_STEP_MAX                            32768
#define SEQ_STEP_MAX_B                          49152

#define SEQ_LOOP_MIN                            1
#define SEQ_LOOP_MAX                            1048576
#define SEQ_LOOP_MAX_B                          16777216

#define SEQ_ONCE_COUNT_MIN                      1
#define SEQ_ONCE_COUNT_MAX                      16777216

#define SEQ_JUMP_FLAG_MIN                       0
#define SEQ_JUMP_FLAG_MAX                       1

/********************************* - Advance Sequence ********************/
#define COUNT_ASEQ_STEP_MIN                      3

#define ASEQ_STEP_MIN                            1
#define ASEQ_STEP_MAX                            1000

#define ASEQ_LOOP_MIN                            1
#define ASEQ_LOOP_MAX                           ((int)(1E6))
#define ASEQ_LOOP_MAX_B                         1048575

#define ASEQ_ONCE_COUNT_MIN                      1
#define ASEQ_ONCE_COUNT_MAX                      1048575

/******************************** -  AM - ********************************/
#define AM_DEPTH_MIN                            0
#define AM_DEPTH_MAX                            100 
#define AM_DEPTH_MAX_WX2184                     200 

#define AM_FREQ_MIN                             100.0
#define AM_FREQ_MAX                             1.0E6 
#define AM_FREQ_MIN_WS835X                      10.0E-3

/******************************** -  FM - *******************************/
#define FM_DEVIATION_MIN                        10.0E-3
#define FM_DEVIATION_MAX                        100.0E6
#define FM_DEVIATION_MIN_WX128XB                10.0E-3
#define FM_DEVIATION_MAX_WX128XB                100.0E6
#define FM_DEVIATION_MIN_WS835X                 10.0E-3
#define FM_DEVIATION_MAX_WS835X                 175.0E6
#define FM_DEVIATION_MIN_WX2184                 10.0E-3
#define FM_DEVIATION_MAX_WX2184                 500.0E6
#define FM_DEVIATION_MAX_WX1284                 250.0E6
#define FM_DEVIATION_MAX_WX218XC                500.0E6
#define FM_DEVIATION_MAX_WX128XC                250.0E6

#define FM_FREQ_MIN                             100.0
#define FM_FREQ_MAX                             100E6
#define FM_FREQ_MAX_WX128XB                     50E6
#define FM_FREQ_MAX_WS835X                      35E6
#define FM_FREQ_MAX_WX2184                      100E6
#define FM_FREQ_MAX_WX1284                      50E6
#define FM_FREQ_MAX_WX218XC                     100E6
#define FM_FREQ_MAX_WX128XC                     50E6

#define FM_MARKER_MIN                           10.0E3
#define FM_MARKER_MAX                           1.0E9
#define FM_MARKER_MAX_WX128XB                   500.0E6
#define FM_MARKER_MAX_WS835X                    350E6
#define FM_MARKER_MAX_WX2184                    100E6

/******************************* -  Sweep - ****************************/
#define SWEEP_FREQ_MIN                           10.0E3
#define SWEEP_FREQ_MAX                           1.0E9
#define SWEEP_FREQ_MAX_WX128X                    500.0E6
#define SWEEP_FREQ_MIN_WS835X                    10.0E3
#define SWEEP_FREQ_MAX_WS835X                    350E6
#define SWEEP_FREQ_MIN_WX2184                    10E3
#define SWEEP_FREQ_MAX_WX2184                    1E9

#define SWEEP_TIME_MIN                           1.4E-6
#define SWEEP_TIME_MAX                           40.0
#define SWEEP_TIME_MAX_WX                        0.01

/******************************** - Carrier Modulation - ****************/
#define CARR_FREQ_MIN                           10.0E3
#define CARR_FREQ_MAX                           250.0E6
#define CARR_FREQ_MAX_WX218XB                   1.0E9
#define CARR_FREQ_MAX_WX218XC                   1.0E9
#define CARR_FREQ_MAX_WX128XB                   500.0e6
#define CARR_FREQ_MAX_WX128XC                   500.0e6
#define CARR_FREQ_MAX_WS835X                    350.0E6

/******************************** - Smart Trigger - *********************/
#define SMART_TRIG_MIN                          10.0E-9
#define SMART_TRIG_MAX                          2.0
#define SMART_TRIG_MIN_WX2184                   10.0E-9
#define SMART_TRIG_MAX_WX2184                   1.0

/******************************** - Markers -**********************/
#define MARKER_INDEX_MIN                      1
#define MARKER_INDEX_MAX                      2

#define MARKER_DELAY_MIN                      0.0
#define MARKER_DELAY_MAX                      3.0E-9

#define MARKER_POSITION_MIN                    0

#define MARKER_WIDTH_MIN                       0

#define MARKER_HIGH_LEVEL_MIN                  0.5
#define MARKER_HIGH_LEVEL_MAX                  1.25

#define MARKER_LOW_LEVEL_MIN                   0
#define MARKER_LOW_LEVEL_MAX                   0.8

/********************************** - Digital Pulse -*********************/
#define PULSE_DEL_MIN                          1.0E-9
#define PULSE_DEL_MAX                          1.0
#define PULSE_DEL_MIN_WX128XB                  2.0E-9
#define PULSE_DEL_MAX_WX128XB                  1.6
#define PULSE_DEL_MIN_WS835X                   1.0E-9
#define PULSE_DEL_MAX_WS835X                   1.6

#define MIN_PULSE_WIDTH                        1.0E-9
#define MAX_PULSE_WIDTH                        1.0
#define MIN_PULSE_WIDTH_WX218XB                0.5E-9
#define MAX_PULSE_WIDTH_WX218XB                1.0
#define MIN_PULSE_WIDTH_WX128XB                1.0E-9
#define MAX_PULSE_WIDTH_WX128XB                1.0
#define MIN_PULSE_WIDTH_WS835X                 2.0E-9
#define MAX_PULSE_WIDTH_WS835X                 1.0
#define MIN_PULSE_WIDTH_WX2184                 2.0E-9
#define MAX_PULSE_WIDTH_WX2184                 5.0
#define MIN_PULSE_WIDTH_WX218XC                1.0E-9
#define MAX_PULSE_WIDTH_WX218XC                1.6
#define MIN_PULSE_WIDTH_WX128XC                2.0E-9
#define MAX_PULSE_WIDTH_WX128XC                1.6

#define PULSE_PERCENT_MIN                      0.01
#define PULSE_PERCENT_MAX                      99.99

#define PULSE_HIGH_LEVEL_MIN                   -2.25
#define PULSE_HIGH_LEVEL_MAX                   2.25
#define PULSE_HIGH_LEVEL_MIN_B                 -2.25
#define PULSE_HIGH_LEVEL_MAX_B                 2.25
#define PULSE_HIGH_LEVEL_MIN_WX2184            -2.45
#define PULSE_HIGH_LEVEL_MAX_WX2184            2.5

#define PULSE_LOW_LEVEL_MIN                   -2.25
#define PULSE_LOW_LEVEL_MAX                   2.25
#define PULSE_LOW_LEVEL_MIN_B                 -2.25
#define PULSE_LOW_LEVEL_MAX_B                 2.25
#define PULSE_LOW_LEVEL_MIN_WX2184            -2.5
#define PULSE_LOW_LEVEL_MAX_WX2184            2.45


#define PULSE_PERIOD_MIN                      80.0E-9
#define PULSE_PERIOD_MAX                      1.0E6
#define PULSE_PERIOD_MAX_OPT                  2.0E6
#define PULSE_PERIOD_MIN_WX218XB              1E-9
#define PULSE_PERIOD_MAX_WX218XB              1.6
#define PULSE_PERIOD_MIN_WX128XB              2E-9
#define PULSE_PERIOD_MAX_WX128XB              1.6
#define PULSE_PERIOD_MIN_WS835X               5.0E-9
#define PULSE_PERIOD_MAX_WS835X               1.0E6
#define PULSE_PERIOD_MIN_WX2184               5e-9
#define PULSE_PERIOD_MAX_WX2184               5
#define PULSE_PERIOD_MIN_WX1284               4e-9
#define PULSE_PERIOD_MAX_WX1284               5
#define PULSE_PERIOD_MIN_WX218XC              2E-9
#define PULSE_PERIOD_MAX_WX218XC              1.6
#define PULSE_PERIOD_MIN_WX128XC              4E-9
#define PULSE_PERIOD_MAX_WX128XC              1.6

#define PULSE_RISE_TIME_MIN                   1.0E-9
#define PULSE_RISE_TIME_MAX                   100.0E-3
#define PULSE_RISE_TIME_MIN_WS835X            1.0E-9
#define PULSE_RISE_TIME_MAX_WS835X            1.6
#define PULSE_RISE_TIME_MIN_WX218XC           1.0E-9
#define PULSE_RISE_TIME_MAX_WX218XC            1.6
#define PULSE_RISE_TIME_MIN_WX128XC           2.0E-9
#define PULSE_RISE_TIME_MAX_WX128XC            1.6

#define PULSE_LEVEL_OFFSET_MIN                -1.5
#define PULSE_LEVEL_OFFSET_MAX                1.5
#define PULSE_LEVEL_OFFSET_MIN_WX2184         -1.0
#define PULSE_LEVEL_OFFSET_MAX_WX2184         1.0

/********************************** - Couple -*****************************/
#define COUPLE_SKEW_MIN                       -3.0E-9
#define COUPLE_SKEW_MAX                        3.0E-9
#define COUPLE_SKEW_MIN_WX2184                 -5.0E-9
#define COUPLE_SKEW_MAX_WX2184                 5.0E-9
#define COUPLE_SKEW_MIN_WX218XC                 -3.0E-9
#define COUPLE_SKEW_MAX_WX218XC                 3.0E-9
#define COUPLE_SKEW_MIN_WX128XC                 -3.0E-9
#define COUPLE_SKEW_MAX_WX128XC                 3.0E-9

/********************************** - State Storage -**********************/
#define STATE_CELL_MIN                         1
#define STATE_CELL_MAX                         9

/*********************************** - XInstrument -***********************/
#define XINSTR_OFFSET_MIN                      0

/************************************* - Digital Pattern Output ***********/
#define DIGITAL_PATTERN_DEL_MIN                -2.0E-9
#define DIGITAL_PATTERN_DEL_MAX                2.0E-9
#define DIGITAL_PATTERN_DEL_MIN_WX2184         -2.0E-9
#define DIGITAL_PATTERN_DEL_MAX_WX2184         2.0E-9

#define DIGITAL_PATTERN_BIT_MIN                1
#define DIGITAL_PATTERN_BIT_MAX                14

#define DIGITAL_PATTERN_HIGH_LEVEL_MIN             -1.5
#define DIGITAL_PATTERN_HIGH_LEVEL_MAX             2.0
#define DIGITAL_PATTERN_HIGH_LEVEL_MIN_WX2184      0.5
#define DIGITAL_PATTERN_HIGH_LEVEL_MAX_WX2184      2.0

#define DIGITAL_PATTERN_LOW_LEVEL_MIN         -2.0
#define DIGITAL_PATTERN_LOW_LEVEL_MAX         1.5

#define DIGITAL_PATTERN_SIZE_MIN              384

#define DIGITAL_BIT_INDEX_MIN                 1
#define DIGITAL_BIT_INDEX_MAX                 14
#define DIGITAL_BIT_INDEX_MAX_WX2184          30
#define DIGITAL_BIT_INDEX_PARAM_MAX_WX2184    28

#define DIGITAL_OFFSET                        2147483648 

/************************************** - CHIRP Modulation *******************/
#define CHIRP_WIDTH_MIN                       1.4E-6
#define CHIRP_WIDTH_MAX                       0.01

#define CHIRP_REPETITION_MIN                  200.0E-9
#define CHIRP_REPETITION_MAX                  2
#define CHIRP_REPETITION_MAX_WX2184           20

#define CHIRP_FREQ_START_MIN                  10.0E3
#define CHIRP_FREQ_START_MAX                  1.0E9
#define CHIRP_FREQ_START_MAX_WX128XB          500E6
#define CHIRP_FREQ_START_MAX_WS835X           350E6
#define CHIRP_FREQ_START_MAX_WX218XC          1.0E9
#define CHIRP_FREQ_START_MAX_WX128XC          500.0E6

#define CHIRP_FREQ_STOP_MIN                   10.0E3
#define CHIRP_FREQ_STOP_MAX                   1.0E9
#define CHIRP_FREQ_STOP_MAX_WX128XB           500E6
#define CHIRP_FREQ_STOP_MAX_WS835X            350E6
#define CHIRP_FREQ_STOP_MAX_WX218XC           1.0E9
#define CHIRP_FREQ_STOP_MAX_WX128XC           500.0E6

#define CHIRP_MARKER_FREQ_MIN                 10.0E3
#define CHIRP_MARKER_FREQ_MAX                 1.0E9
#define CHIRP_MARKER_FREQ_MAX_WX2184          1.0E9
#define CHIRP_MARKER_FREQ_MAX_WX218XC         1.0E9
#define CHIRP_MARKER_FREQ_MAX_WX128XC         500.0E6

#define CHIRP_AMPL_DEPTH_MIN                  0
#define CHIRP_AMPL_DEPTH_MAX                  100

/*************************************** FSK Modulation *********************/
#define FSK_FREQ_SHIFT_MIN                    10.0E3
#define FSK_FREQ_SHIFT_MAX                    1.0E9
#define FSK_FREQ_SHIFT_MAX_WX128XB            500E6
#define FSK_FREQ_SHIFT_MAX_WS835X             350E6

#define FSK_BAUD_MIN                          0.1
#define FSK_BAUD_MAX                          500.0E6
#define FSK_BAUD_MAX_WX128XB                  250.0E6
#define FSK_BAUD_MAX_WS835X                   350.0E6
#define FSK_BAUD_MAX_WX2184                   500.0E6
#define FSK_BAUD_MAX_WX1284                   250.0E6
#define FSK_BAUD_MAX_WX218XC                  500.0E6
#define FSK_BAUD_MAX_WX128XC                  250.0E6

#define FSK_MARKER_MIN                        1
#define FSK_MARKER_MAX                        10000
#define FSK_MARKER_MAX_WX2184                 256

#define FSK_DATA_MIN                          0
#define FSK_DATA_MAX                          1

#define FSK_DATA_LENGTH_MIN                   2
#define FSK_DATA_LENGTH_MAX                   10000 //256  //10000
#define FSK_DATA_LENGTH_MAX_WX2184            256

/***************************************** ASK Modulation ******************/
#define ASK_START_AMPL_MIN                     0
#define ASK_START_AMPL_MAX                     2

#define ASK_SHIFT_AMPL_MIN                     0
#define ASK_SHIFT_AMPL_MAX                     2

#define ASK_BAUD_MIN                           0.1
#define ASK_BAUD_MAX                           500.0E6
#define ASK_BAUD_MAX_WX128XB                   250.0E6
#define ASK_BAUD_MAX_WS835X                    350.0E6
#define ASK_BAUD_MAX_WX2184                    500.0E6
#define ASK_BAUD_MAX_WX1284                    250.0E6
#define ASK_BAUD_MAX_WX2184C                   250.0E6
#define ASK_BAUD_MAX_WX1284C                   250.0E6

#define ASK_MARKER_MIN                         1
#define ASK_MARKER_MAX                         10000
#define ASK_MARKER_MAX_WX2184                  256

#define ASK_DATA_MIN                           0
#define ASK_DATA_MAX                           1

#define ASK_DATA_LENGTH_MIN                    2
#define ASK_DATA_LENGTH_MAX                    10000 //256 //10000
#define ASK_DATA_LENGTH_MAX_WX2184             256 

/**************************************** FHOP Modulation ******************/
#define FHOP_TIME_MIN                          2.0E-9
#define FHOP_TIME_MAX                          10.0

#define FHOP_MARKER_MIN                        1
#define FHOP_MARKER_MAX                        10000
#define FHOP_MARKER_MAX_WX2184                 256

#define FHOP_FREQ_DATA_MIN                     10E3
#define FHOP_FREQ_DATA_MAX                     1E9

#define FHOP_DATA_LENGTH_MIN                    2
#define FHOP_DATA_LENGTH_MAX                    10000 //256 //10000
#define FHOP_DATA_LENGTH_MAX_WX2184             256

/*************************************** AHOP Modulation ******************/
#define AHOP_TIME_MIN                          2.0E-9
#define AHOP_TIME_MAX                          10.0

#define AHOP_MARKER_MIN                        1
#define AHOP_MARKER_MAX                        10000
#define AHOP_MARKER_MAX_WX2184                 256

#define AHOP_AMPL_DATA_MIN                     50E-3
#define AHOP_AMPL_DATA_MAX                     2

#define AHOP_DATA_LENGTH_MIN                    2
#define AHOP_DATA_LENGTH_MAX                    10000 //256 //10000
#define AHOP_DATA_LENGTH_MAX_WX2184             256

/************************************** PSK Modulation ********************/
#define PSK_START_PHASE_MIN                     0
#define PSK_START_PHASE_MAX                     360

#define PSK_SHIFT_PHASE_MIN                     0
#define PSK_SHIFT_PHASE_MAX                     360

#define PSK_RATE_MIN                            100.0E3
#define PSK_RATE_MAX                            500.0E6
#define PSK_RATE_MAX_WX128XC                    250.0E6

#define PSK_MARKER_MIN                          1
#define PSK_MARKER_MAX                          10000
#define PSK_MARKER_MAX_WX2184                   256

#define PSK_BAUD_MIN                            0.1
#define PSK_BAUD_MAX                            500E6
#define PSK_BAUD_MAX_WX128XB                    250E6
#define PSK_BAUD_MAX_WS835X                     350E6
#define PSK_BAUD_MIN_WX2184                     0.1
#define PSK_BAUD_MAX_WX2184                     250E6

#define PSK_DATA_MIN                            0
#define PSK_DATA_MAX                            0xF //15

#define PSK_DATA_LENGTH_MIN                     2
#define PSK_DATA_LENGTH_MAX                     10000 //256 //10000
#define PSK_DATA_LENGTH_MAX_WX2184              256

#define PSK_USER_DATA_LENGTH_MIN                2
#define PSK_USER_DATA_LENGTH_MAX                256

/************************************** QAM Modulation *********************/
#define QAM_BAUD_MIN                            0.1
#define QAM_BAUD_MAX                            500E6
#define QAM_BAUD_MAX_WX128XB                    250E6
#define QAM_BAUD_MAX_WS835X                     350E6
#define QAM_BAUD_MAX_WX2184                     250E6

#define QAM_MARKER_MIN                          1
#define QAM_MARKER_MAX                          10000
#define QAM_MARKER_MAX_WX2184                   256

#define QAM_DATA_MIN                            0
#define QAM_DATA_MAX                            255

#define QAM_DATA_LENGTH_MIN                     2
#define QAM_DATA_LENGTH_MAX                     10000 //256 //10000
#define QAM_DATA_LENGTH_MAX_WX2184              256

#define QAM_USER_DATA_LENGTH_MIN                2
#define QAM_USER_DATA_LENGTH_MAX                256

#define QAM_USER_DATA_MIN                       -1
#define QAM_USER_DATA_MAX                        1

/****************************************** Pattern ************************/
#define PATTERN_PREDEFINED_BAUD_MIN                10.0E-3
#define PATTERN_PREDEFINED_BAUD_MAX                500E6
#define PATTERN_PREDEFINED_BAUD_MAX_WX128XB        250E6
#define PATTERN_PREDEFINED_BAUD_MAX_WS835X         350E6
#define PATTERN_PREDEFINED_BAUD_MIN_WX2184         1
#define PATTERN_PREDEFINED_BAUD_MAX_WX2184         250E6

#define PATTERN_PREDEFINED_LEVEL_MIN               2
#define PATTERN_PREDEFINED_LEVEL_MAX               5

#define PATTERN_PREDEFINED_HIGH_LEVEL_MIN          -2.5
#define PATTERN_PREDEFINED_HIGH_LEVEL_MAX          2.5

#define PATTERN_PREDEFINED_LOW_LEVEL_MIN          -2.5
#define PATTERN_PREDEFINED_LOW_LEVEL_MAX          2.5

#define PATTERN_PREDEFINED_LOOP_MIN               1
#define PATTERN_PREDEFINED_LOOP_MAX               1E6

#define PATTERN_PREDEFINED_PREAMBLE_MIN           1
#define PATTERN_PREDEFINED_PREAMBLE_MAX           16E6

#define PATTERN_PREDEFINED_LENGTH_MIN             1
#define PATTERN_PREDEFINED_LENGTH_MAX             16E6

#define PATTERN_PREDEFINED_DATA_LENGTH_MIN        1
#define PATTERN_PREDEFINED_DATA_LENGTH_MAX        1000

#define PATTERN_COMPOSER_FAST_START_MIN           -2
#define PATTERN_COMPOSER_FAST_START_MAX           2
#define PATTERN_COMPOSER_FAST_START_MIN_WX2184    -2.0
#define PATTERN_COMPOSER_FAST_START_MAX_WX2184     2.0

#define PATTERN_COMPOSER_RESOLUTION_MIN           250E-12
#define PATTERN_COMPOSER_RESOLUTION_MAX           100E-9
#define PATTERN_COMPOSER_RESOLUTION_MIN_WX2184    500E-12
#define PATTERN_COMPOSER_RESOLUTION_MAX_WX2184    12.5E-9

#define PATTERN_COMPOSER_AMPL_LEVEL_MIN           -1.5
#define PATTERN_COMPOSER_AMPL_LEVEL_MAX           1.5

#define PATTERN_COMPOSER_DWELL_TIME_MIN           2.0E-9
#define PATTERN_COMPOSER_DWELL_TIME_MAX           1

#define PATTERN_COMPOSER_START_DATA_LENGTH_MIN    2
#define PATTERN_COMPOSER_START_DATA_LENGTH_MAX    4000

#define PATTERN_COMPOSER_LIN_DATA_LENGTH_MIN      2
#define PATTERN_COMPOSER_LIN_DATA_LENGTH_MAX      4000













