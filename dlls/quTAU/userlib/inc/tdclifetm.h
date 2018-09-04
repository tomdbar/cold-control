/******************************************************************************
 *
 *  Project:        TDC Control Library
 *
 *  Filename:       tdclifetm.h
 *
 *  Purpose:        Lifetime measurment
 *
 *  Author:         NHands GmbH & Co KG
 */
/*****************************************************************************/
/** @file tdclifetm.h
 *  @brief Lifetime measurement
 *
 *  The header provides functions to calculate start multistop histograms
 *  for lifetime measurement. A selceted channel provides start events
 *  while events from all other channels act as stop events.
 *  Every stop event causes a histogram entry at its time difference
 *  to the last start event.
 *
 *  A histogram is provided for every input channel with this channel as
 *  stop event source. The histogram corresponding to the start channel
 *  is channel integrating, i.e. events from all stop channels are
 *  accumulated there.
 *
 *  Use the functions of @ref tdcbase.h to control the device. Set
 *  parameters with @ref TDC_setLftParams and @ref TDC_setLftStartInput.
 *  Enable the collection of data with @ref TDC_enableLft;
 *  when enabled, all incoming events contribute to the histogram.
 *  Use @ref TDC_getLftHistogram to to retrieve the histogram.
 */
/*****************************************************************************/
/* $Id: tdclifetm.h,v 1.5 2015/10/28 18:51:34 trurl Exp $ */

#ifndef __TDCLIFETM_H
#define __TDCLIFETM_H

#include "tdcdecl.h"

/** Size of parameter array of model functions */
#define LFT_PARAM_SIZE  4

/** Type of a model function
 *
 *  A set of model functions is provided for fitting to the measured
 *  g(2) functions and for the generation of demo data.
 *  The type describes the kind of function to use.
 *  Function parameters are generally transported in an array of double
 *  that should have at least @ref HBT_PARAM_SIZE elements.
 */
typedef enum {
  LFTTYPE_NONE,          /**< No function, invalid. No Parameters. */
  LFTTYPE_EXP,           /**< Mono exponential decay.
                              The function requires two parameters:
                              I<sub>0</sub> , &tau;<sub>0</sub> */
  LFTTYPE_DBL_EXP,       /**< Double exponential decay.
                              The function requires 4 parameters:
                              I<sub>0</sub> , &alpha; , &tau;<sub>0</sub> ,
                              &tau;<sub>1</sub> */
  LFTTYPE_KOHLRAUSCH     /**< Kohlrausch decay. The function requires 3 parameters:
                              I<sub>0</sub> , &tau;<sub>0</sub> , &beta; */
} LFT_FctType;


/** Histogram Function
 *
 *  The struct transports the representation of a histogram.
 *  Values is an array of capacity elements that contiains size
 *  function values, each representing a time diff range of binWidth
 *  TDC time units (see @ref TDC_setLftParams).
 *  While real histogram counters only can have integer values, the
 *  data format is floating point to allow for smoothly fitted functions.
 *
 *  When using the struct to retrieve a function, the capacity must always
 *  be sufficient for the expected size; ohterways error @ref TDC_OutOfRange
 *  will be returned. It is recommended to create the struct using
 *  @ref TDC_createLftFunction after the last call of @ref TDC_setLftParams.
 */
typedef struct {
  Int32   capacity;     /**< Array size of values */
  Int32   size;         /**< Number of valid items in values */
  Int32   binWidth;     /**< Size of a t step in TDC time units */
  double  values[];     /**< Array of function values */
} TDC_LftFunction;


/** Enable Lifetime Calculations
 *
 *  Enables the calculation of the start multistop histograms.
 *  When enabled, all incoming events contribute to the histograms.
 *  When disabled, all Lft functions are unavailable.
 *  The function implicitly clears the histogram.
 *  Use @ref TDC_freezeBuffers to interrupt the accumulation
 *  of events without clearing the histogram and
 *  @ref TDC_resetLftHistograms to clear without interrupt.
 *  @param enable  Enable or disable 
 *  @return        Error code
 */
TDC_API int TDC_CC TDC_enableLft( Bln32 enable );


/** Set Histogram Parameters
 *
 *  Sets common parameters for the histograms.
 *  If the function is not called, default values are in place.
 *  When the function is called, all collected data are cleared.
 *  @param binWidth  Width of the bins in units of the TDC Time Base,
 *                   see @ref TDC_getTimebase . Range = 1 ... 8192, default = 1.
 *  @param binCount  Number of bins in the histograms.
 *                   Range = 16 ... 8192, default = 256.
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_setLftParams( Int32 binWidth,
                                     Int32 binCount );


/** Get Histogram Parameters
 *
 *  Retrieves the parameters set by @ref TDC_setLftParams.
 *  All output parameters may be NULL to ignore the value.
 *  @param binWidth  Output: Width of the bins in units of the TDC Time Base.
 *  @param binCount  Output: Number of bins in the histograms.
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_getLftParams( Int32 * binWidth,
                                     Int32 * binCount );


/** Set TDC Channel for Start Input
 *
 *  Selects the TDC channel that provides the start events.
 *  All events from other channels act as stop events.
 *  The function implicitly clears the histograms.
 *  @param startChan    Channel for start events, Range = 0 ... 7, default = 0
 *                      Ignored for 1C devices that always use the sync channel.
 *  @return             Error code
 */
TDC_API int TDC_CC TDC_setLftStartInput( Int32 startChan );


/** Get TDC Channel for Start Input
 *
 *  Retrieves the parameter set by @ref TDC_setLftStartInput.
 *  @param startChan    Output: Channel for start events
 *  @return             Error code
 */
TDC_API int TDC_CC TDC_getLftStartInput( Int32 * startChan );


/** Reset Histograms
 *
 *  Clears all accumulated start multistop histograms.
 *  @return  Error code
 */
TDC_API int TDC_CC TDC_resetLftHistograms( void );


/** Create Function Description
 *
 *  Creates a function description buffer by allocating memory
 *  according to the current values of binWidth and binCount
 *  (see @ref TDC_setLftParams). If those values are increased,
 *  new buffers have to be created.
 *  Release a buffer with @ref TDC_releaseLftFunction.
 *  @return  Address of a newly created buffer; NULL on error
 */
TDC_API TDC_LftFunction * TDC_CC TDC_createLftFunction( void );


/** Release Function Description
 *
 *  Releases the memory allocated for a funcion description.
 *  @param fct      Function description to free.
 *                  After the call, the pointer is invalid!
 */
TDC_API void TDC_CC TDC_releaseLftFunction( TDC_LftFunction * fct );


/** Analyse Function Description
 *
 *  Disassembles a function description object to its components.
 *  The object itself stays valid. May be useful for non-C/C++ programmers.
 *  All output parameters may be NULL to ignore the component.
 *  @param fct      Function description to analyse.
 *  @param capacity Output: Array size of values
 *  @param size     Output: Number of valid items in values
 *  @param binWidth Output: Size of a t step in TDC time units
 *  @param values   Output: Array of function values. The caller has to
 *                          provide the array; the function copies the
 *                          original values (at most bufSize) to it.
 *  @param bufSize  Buffer size (number of elements) of the values array
 */
TDC_API void TDC_CC TDC_analyseLftFunction( const TDC_LftFunction * fct,
                                            Int32  * capacity,
                                            Int32  * size,
                                            Int32  * binWidth,
                                            double * values,
                                            Int32    bufSize );


/** Retrieve Histogram
 *
 *  Retrieves one of the start multistop histograms accumulated internally.
 *  The histogram counters will be stored in the fct buffer in floating
 *  point format although they only can have integer values.
 *  NULL pointers can be used for every output parameter to ignore its value.
 *  @param channel   Selects the histogram whose stop events stem from this
 *                   channel. The histogram associated with the start channel
 *                   integrates over all stop channels, i.e. events from every
 *                   channel except start act as stop.
 *  @param reset     If the histogram should be cleared after retrieving.
 *  @param fct       Output: Function description. If the capacity
 *                   of the buffer is not sufficient, TDC_OutOfRange
 *                   will be returned.
 *  @param tooBig    Output: Number of time diffs that were bigger
 *                   than the biggest histogram bin.
 *  @param startEvts Output: Number of start events contributing to the histogram.
 *  @param stopEvts  Output: Number of stop events contributing to the histogram.
 *  @param expTime   Output: Total exposure time for the histogram: the time
 *                   difference between the first and the last event
 *                   that contribute to the histogram. In timebase units.
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_getLftHistogram( Int32             channel,
                                        Bln32             reset,
                                        TDC_LftFunction * fct,
                                        Int32           * tooBig,
                                        Int32           * startEvts,
                                        Int32           * stopEvts,
                                        Int64           * expTime );


/** Calculate Model Function
 *
 *  Calculates the values of a model function with specified parameters.
 *  @param fctType  Type of function
 *  @param params   Intput: Function parameters
 *  @param fct      Output: Function description. If the capacity
 *                  of the buffer is not sufficient, TDC_OutOfRange
 *                  will be returned.
 *  @return Error code
 */
TDC_API int TDC_CC TDC_calcLftModelFct( LFT_FctType       fctType,
                                        const double    * params,
                                        TDC_LftFunction * fct );


/** Generate Demo Data
 *
 *  Starts generation of data that lead to a histogram of given type
 *  with continously decreasing noise level. To disable data generation
 *  use function type "none".
 *  @param fctType      Type of histogram to simulate
 *  @param params       Input: Function parameters
 *                      The array must be at least of size @ref LFT_PARAM_SIZE.
 *  @param noiseLv      Noise level, arbitrary units
 *  @return             Error code
 */
TDC_API int TDC_CC TDC_generateLftDemo( LFT_FctType    fctType,
                                        const double * params,
                                        double         noiseLv );


/** Fit Histogram
 *
 *  Calculates a fit to the histogram to a given model function.
 *  @param fct          Histogram to fit
 *  @param fitType      Type of function to fit to
 *  @param startParams  Intput: Start values of the function parameters to fit.
 *                      The array must be at least of size @ref LFT_PARAM_SIZE.
 *  @param fitParams    Output: Values of the function parameters after fit
 *                      The array must be at least of size @ref LFT_PARAM_SIZE.
 *  @param iterations   Output: Number of iterations in the fit process.
 *                      Special Values: 0 = fit algorithm not called,
 *                      -1 = fit algorithm failed
 *  @return Error code
 */
TDC_API int TDC_CC TDC_fitLftHistogram( const TDC_LftFunction * fct,
                                        LFT_FctType    fitType,
                                        const double * startParams,
                                        double       * fitParams,
                                        Int32        * iterations );

#endif
