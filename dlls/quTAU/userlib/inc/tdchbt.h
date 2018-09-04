/******************************************************************************
 *
 *  Project:        TDC Control Library
 *
 *  Filename:       tdchbt.h
 *
 *  Purpose:        G(2) Functions and Fitting
 *
 *  Author:         NHands GmbH & Co KG
 */
/*****************************************************************************/
/** @file tdchbt.h
 *  @brief G(2) Functions and Fitting
 *
 *  The header provides functions to calculate 2nd order correlation functions
 *  and G(2) functions from TDC data. The G(2) functions may be fit to
 *  some model functions.
 *
 *  Use the functions of @ref tdcbase.h to control the device. Set HBT
 *  parameters with @ref TDC_setHbtParams, @ref TDC_setHbtInput, and others.
 *  Enable the collection of data with @ref TDC_enableHbt.
 *  When enabled, all incoming events on the selected channels contribute
 *  to the correlation functions. Use @ref TDC_calcHbtG2 to calculate a g(2)
 *  from the current correlations and @ref TDC_fitHbtG2 to fit it to a
 *  given model.
 */
/*****************************************************************************/
/* $Id: tdchbt.h,v 1.5 2015/12/10 18:25:06 trurl Exp $ */

#ifndef __TDCHBT_H
#define __TDCHBT_H

#include "tdcdecl.h"

/** Size of parameter array of model functions */
#define HBT_PARAM_SIZE  5

/** Type of a model function
 *
 *  A set of model functions is provided for fitting to the measured
 *  g(2) functions and for the generation of demo data.
 *  The type describes the kind of function to use.
 *  Function parameters are generally transported in an array of double
 *  that should have at least @ref HBT_PARAM_SIZE elements.
 */
typedef enum {
  FCTTYPE_NONE,          /**< No function, invalid.
                              No Parameters. */
  FCTTYPE_COHERENT,      /**< Coherent light.
                              No Parameters. */
  FCTTYPE_THERMAL,       /**< Thermal light source.
                              The function requires 3 parameters: A, c, B */
  FCTTYPE_SINGLE,        /**< Single photon light source.
                              The function requires 1 parameter:
                              t<sub>1</sub> */
  FCTTYPE_ANTIBUNCH,     /**< Three level system light source.
                              The function requires 4 parameters:
                              p<sub>f</sub><sup>2</sup>, c, t<sub>b</sub>, t<sub>a</sub> */
  FCTTYPE_THERM_JIT,     /**< Thermal with detector jitter considered.
                              The function requires 3 parameters: A, c, B */
  FCTTYPE_SINGLE_JIT,    /**< Single photon with detector jitter considered.
                              The function requires 1 parameter:
                              t<sub>1</sub> */
  FCTTYPE_ANTIB_JIT,     /**< Three level system with detector jitter.
                              The function requires 4 parameters:
                              p<sub>f</sub><sup>2</sup>, c, t<sub>b</sub>, t<sub>a</sub> */
  FCTTYPE_THERMAL_OFS,   /**< Thermal with addtitional fit of detector offset 
                              The function requires 4 parameters: A, c, B, dt */
  FCTTYPE_SINGLE_OFS,    /**< Single photon with addtitional fit of detector offset
                              The function requires 2 parameters:
                              t<sub>1</sub>, dt */
  FCTTYPE_ANTIB_OFS,     /**< Three level system with addtitional fit of detector offset
                              The function requires 5 parameters:
                              p<sub>f</sub><sup>2</sup>, c, t<sub>b</sub>, t<sub>a</sub>, dt */
  FCTTYPE_THERM_JIT_OFS, /**< Thermal with detector jitter considered and offset fit
                              The function requires 4 parameters: A, c, B, dt */
  FCTTYPE_SINGLE_JIT_OFS,/**< Single photon with detector jitter considered and offset fit
                              The function requires 2 parameters:
                              t<sub>1</sub>, dt */
  FCTTYPE_ANTIB_JIT_OFS  /**< Three level system with detector jitter considered and offset fit
                              The function requires 5 parameters:
                              p<sub>f</sub><sup>2</sup>, c, t<sub>b</sub>, t<sub>a</sub>, dt */
} HBT_FctType;


/** Correlation Function or g(2) Function
 *
 *  The struct transports the representation of a correlation function or
 *  g(2) function. Values is an array of capacity elements that contiains
 *  size function values, each representing a time diff range of binWidth
 *  TDC time units (see @ref TDC_setHbtParams).
 *
 *  In correlation functions, size equals binCount and the first value
 *  belongs to the argument 0. In the g(2) function, size is 2*binCount-1,
 *  and the first value belongs to -binWidth*binCount. The field indexOffset
 *  marks the position of the argument 0 in values.
 *
 *  When using the struct to retrieve a function, the capacity must always
 *  be sufficient for the expected size; ohterways error @ref TDC_OutOfRange
 *  will be returned. It is recommended to create the struct using
 *  @ref TDC_createHbtFunction after the last call of @ref TDC_setHbtParams.
 */
typedef struct {
  Int32   capacity;     /**< Array size of values */
  Int32   size;         /**< Number of valid items in values */
  Int32   binWidth;     /**< Size of a t step in TDC time units */
  Int32   indexOffset;  /**< Index for element of values that represents t=0 */
  double  values[];     /**< Array of function values */
} TDC_HbtFunction;


/** Enable HBT Calculations
 *
 *  Enables the calculation of 2nd order cross correlation functions as the base
 *  of a g(2) function. When enabled, all incoming events on the selected
 *  TDC channels 1 and 2 contribute to the correlation functions 1-2 and 2-1.
 *  When disabled, all HBT functions are unavailable.
 *  The function implicitly clears the correlation functions.
 *  Use @ref TDC_freezeBuffers to interrupt the accumulation of events without
 *  clearing the functions and  @ref TDC_resetHbtCorrelations to clear without
 *  interrupt.
 *  @param enable  Enable or disable 
 *  @return        Error code
 */
TDC_API int TDC_CC TDC_enableHbt( Bln32 enable );


/** Set Correlation Function Parameters
 *
 *  Sets parameters for the correlation functions and g(2) function.
 *  If the function is not called, default values are in place.
 *  When the function is called, all collected data are cleared.
 *  @param binWidth  Width of a bin in units of the TDC Time Base,
 *                   see @ref TDC_getTimebase . Range = 1 ... 8192, default = 1.
 *  @param binCount  Number of bins in the buffers.
 *                   Range = 16 ... 8192, default = 256.
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_setHbtParams( Int32 binWidth,
                                     Int32 binCount );


/** Get Correlation Function Parameters
 *
 *  Retrieves the parameters set by @ref TDC_setHbtParams.
 *  @param binWidth  Output: Width of a bin in units of the TDC Time Base.
 *  @param binCount  Output: Number of bins in the buffers.
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_getHbtParams( Int32 * binWidth,
                                     Int32 * binCount );


/** Set Detector Parameters
 *
 *  Sets the typical detector jitter. The jitter is used for fitting
 *  with some of the model functions, see @ref HBT_FctType.
 *  If this feature isn't used, the parameter hasn't to be set.
 *  @param jitter    Typical detector jitter [s], default = 0.
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_setHbtDetectorParams( double jitter );


/** Get Detector Parameters
 *
 *  Retrieves the parameters set by @ref TDC_setHbtDetectorParams.
 *  All output parameters may be NULL to ignore the value.
 *  @param jitter    Output: Typical detector jitter [s].
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_getHbtDetectorParams( double * jitter );


/** Set TDC Channels for Input
 *
 *  Sets the first and second input channel for correlation function calculation.
 *  If the function is not called, default values are in place.
 *  The function implicitly clears the correlation functions.
 *  For A3 devices, the call returns error; use @ref TDC_switchHbtInternalApds.
 *  @param channel1  First  channel number, Range = 0 ... 7, default = 0
 *  @param channel2  Second channel number, Range = 0 ... 7, default = 1
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_setHbtInput( Int32 channel1,
                                    Int32 channel2 );


/** Get TDC Channels for Input
 *
 *  Retrieves the parameters set by @ref TDC_setHbtInput.
 *  All output parameters may be NULL to ignore the value.
 *  @param channel1  Output: First  channel number
 *  @param channel2  Output: Second channel number
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_getHbtInput( Int32 * channel1,
                                    Int32 * channel2 );


/** Set Use Internal APDs
 *
 *  Switches between internal APDs and external signal input.
 *  Only useful for A3 devices, otherwise returns error.
 *  The function implicitly clears the correlation functions.
 *  @param internal  If internal APDs are to be used for calculations
 *  @return          Error code
 */
TDC_API int TDC_CC TDC_switchHbtInternalApds( Bln32 internal );


/** Reset Correlation Functions
 *
 *  Clears the accumulated correlation functions.
 *  @return  Error code
 */
TDC_API int TDC_CC TDC_resetHbtCorrelations();


/** Retrieve Event Count and Rate
 *
 *  Retreives the number and rate of events contributing to the correlation
 *  functions. The total count since the last reset is delivered as well as
 *  count and rate since the last call of the function.
 *  The time difference is derived from the TDC timestamps; therefore at
 *  least two events are necessary to calculate a valid rate.
 *  @param totalCount Output: Event count since last reset
 *  @param lastCount  Output: Event count since last call
 *  @param lastRate   Output: Event rate [Hz] since last call;
 *                    only valid if lastCount > 1
 *  @return           Error code
 */
TDC_API int TDC_CC TDC_getHbtEventCount( Int64  * totalCount,
                                         Int64  * lastCount,
                                         double * lastRate );


/** Retrieve Integration Time
 *
 *  Retreives the total integration time of the correlation functions.
 *  The time is derived from the TDC timestamps; therefore at least
 *  one event on both channels are necessary to calculate a valid time.
 *  @param intTime   Output: Integration Time [s], 0 if no events
 *  @return Error code
 */
TDC_API int TDC_CC TDC_getHbtIntegrationTime( double * intTime );


/** Retrieve Correlation Function
 *
 *  Retreives the current state of the correlation function.
 *  A function is represented by an array of data of size binCount
 *  (see @ref TDC_setHbtParams), containing unnormalized counter values
 *  for detected time diffs falling in the respective bin.
 *  @param forward  Selects the correlation function: 0=1-2 , 1=2-1
 *  @param fct      Output: Function description. If the capacity
 *                  of the buffer is not sufficient, TDC_OutOfRange
 *                  will be returned.
 *  @return         Error code
 */
TDC_API int TDC_CC TDC_getHbtCorrelations( Bln32             forward,
                                           TDC_HbtFunction * fct );


/** Calculate g(2) Function
 *
 *  Calculates the g(2) function based on the current state of the
 *  correlation functions.
 *  @param fct      Output: Function description. If the capacity
 *                  of the buffer is not sufficient, TDC_OutOfRange
 *                  will be returned.
 *  @return         Error code
 */
TDC_API int TDC_CC TDC_calcHbtG2( TDC_HbtFunction * fct );


/** Fit g(2) Function
 *
 *  Calculates a fit to the g(2) function to a given model function.
 *  @param fct          g(2) function to fit
 *  @param fitType      Type of function to fit to
 *  @param startParams  Intput: Start values of the function parameters to fit.
 *                      If the pointer is NULL, standard values will be used
 *                      (see @ref TDC_getHbtFitStartParams).
 *                      If not NULL, the array must be at least of size
 *                      @ref HBT_PARAM_SIZE.
 *  @param fitParams    Output: Values of the function parameters after fit
 *                      The array must be at least of size @ref HBT_PARAM_SIZE.
 *  @param iterations   Output: Number of iterations in the fit process.
 *                      Special Values: 0 = fit algorithm not called,
 *                      -1 = fit algorithm failed
 *  @return             Error code
 */
TDC_API int TDC_CC TDC_fitHbtG2( const TDC_HbtFunction * fct,
                                 HBT_FctType    fitType,
                                 const double * startParams,
                                 double       * fitParams,
                                 Int32        * iterations );


/** Get Recommended Fit Start Parameters
 *
 *  Returns a set of recommended fit start values for a specific fit funcion.
 *  @param fctType  Type of function
 *  @param params   Output: Array of @ref HBT_PARAM_SIZE parameter values;
 *                  If not NULL, the result will be copied here.
 *  @return         Array of @ref HBT_PARAM_SIZE parameter values;
 *                  NULL if fctType is invalid.
 */
TDC_API const double * TDC_CC TDC_getHbtFitStartParams( HBT_FctType fctType,
                                                        double *    params );


/** Calculate Model Function
 *
 *  Calculates the values of a model function with specified parameters.
 *  @param fctType  Type of function
 *  @param params   Intput: Function parameters
 *  @param fct      Output: Function description. If the capacity
 *                  of the buffer is not sufficient, TDC_OutOfRange
 *                  will be returned.
 *  @return         Error code
 */
TDC_API int TDC_CC TDC_calcHbtModelFct( HBT_FctType       fctType,
                                        const double    * params,
                                        TDC_HbtFunction * fct );


/** Generate Demo Data
 *
 *  Starts generation of data that lead to a g(2) function of given type
 *  with continously decreasing noise level. To disable data generation
 *  use function type "none".
 *  @ref TDC_getHbtCorrelations will not work with generated data.
 *  @param fctType      Type of g(2) function to simulate
 *  @param params       Input: Function parameters
 *                      The array must be at least of size @ref HBT_PARAM_SIZE.
 *  @param noiseLv      Noise level, arbitrary units
 *  @return             Error code
 */
TDC_API int TDC_CC TDC_generateHbtDemo( HBT_FctType    fctType,
                                        const double * params,
                                        double         noiseLv );


/** Create Function Description
 *
 *  Creates a function description buffer by allocating memory
 *  according to the current values of binWidth and binCount
 *  (see @ref TDC_setHbtParams). If those values are increased,
 *  new buffers have to be created.
 *  Release a buffer with @ref TDC_releaseHbtFunction.
 *  @return  Address of a newly created buffer; NULL on error
 */
TDC_API TDC_HbtFunction * TDC_CC TDC_createHbtFunction( void );


/** Release Function Description
 *
 *  Releases the memory allocated for a funcion description.
 *  @param fct      Function description to free.
 *                  After the call, the pointer is invalid!
 */
TDC_API void TDC_CC TDC_releaseHbtFunction( TDC_HbtFunction * fct );


/** Analyse Function Description
 *
 *  Disassembles a function description object to its components.
 *  The object itself stays valid. May be useful for non-C/C++ programmers.
 *  All output parameters may be NULL to ignore the component.
 *  @param fct      Function description to analyse.
 *  @param capacity Output: Array size of values
 *  @param size     Output: Number of valid items in values
 *  @param binWidth Output: Size of a t step in TDC time units
 *  @param iOffset  Output: Index for element of values that represents t=0
 *  @param values   Output: Array of function values. The caller has to
 *                          provide the array; the function copies the
 *                          original values (at most bufSize) to it.
 *  @param bufSize  Buffer size (number of elements) of the values array
 */
TDC_API void TDC_CC TDC_analyseHbtFunction( const TDC_HbtFunction * fct,
                                            Int32  * capacity,
                                            Int32  * size,
                                            Int32  * binWidth,
                                            Int32  * iOffset,
                                            double * values,
                                            Int32    bufSize );

#endif
