/*******************************************************************************
 *
 *  Project:        TDC User Library
 *
 *  Filename:       example2.c
 *
 *  Purpose:        Simple example for use of tdcbase lib
 *                  HBT Feature
 *
 *  Author:         NHands GmbH & Co KG
 *
 *******************************************************************************/
/* $Id: example2.c,v 1.3 2015/12/10 18:25:06 trurl Exp $ */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tdcbase.h"
#include "tdchbt.h"

#ifdef unix
#include <unistd.h>
#define SLEEP(x) usleep(x*1000)
#else
#include <windows.h>
#define SLEEP(x) Sleep(x)
#endif

#define BINWIDTH 1
#define BINCOUNT 128
#define NOISELV  0.1


static const char * printHwType( TDC_DevType type )
{
  switch ( type ) {
  case DEVTYPE_1A:  return "1A";
  case DEVTYPE_1B:  return "1B";
  case DEVTYPE_1C:  return "1C";
  default:          return "--";
  }
}


static void checkRc( const char * fctname, int rc )
{
  if ( rc ) {
    printf( ">>> %s: %s\n", fctname, TDC_perror( rc ) );
    TDC_deInit();
    exit( 1 );
  }
}


int run( int generate, int loops )
{
  int rc, i, iters, viewScale;
  Int64  totalCnt, lastCnt;
  TDC_DevType type;
  TDC_HbtFunction * fct;
  const double * paramIn;
  double rate, paramOut[4];
  double timeBase = TDC_getTimebase();


  rc = TDC_init( -1 );                  /* Accept all devices, even no one */
  if ( generate ) {
    rc = TDC_enableChannels( 0 );       /* Switch off real input */
    checkRc( "TDC_enableChannels", rc );
  }
  else { 
    checkRc( "TDC_init", rc );          /* Check for found dev only if no demo */
    rc = TDC_enableChannels( 0xff );    /* Use all channels */
    checkRc( "TDC_enableChannels", rc );
    /* Ch. 0 + 1, period 80ns, bursts of 3 Periods, distance 800ns */
    rc = TDC_configureSelftest( 3, 4, 3, 10 );
    checkRc( "TDC_configureSelftest", rc );
  }

  type = TDC_getDevType();
  printf( "Hardware found: %s\n", printHwType( type ) );
  rc = TDC_setHbtParams( BINWIDTH, BINCOUNT );
  checkRc( "TDC_setHbtParams", rc );
  rc = TDC_setHbtInput( 0, 1 );
  checkRc( "TDC_setInput", rc );
  rc = TDC_enableHbt( 1 );
  checkRc( "TDC_enableHbt", rc );
  paramIn = TDC_getHbtFitStartParams( FCTTYPE_THERMAL, NULL );

  if ( generate ) {
    rc = TDC_generateHbtDemo( FCTTYPE_THERMAL, paramIn, NOISELV );
    checkRc( "TDC_generateHbtDemo", rc );
  }

  printf( "  Total Evts    Last Evts        Evts/s\n" );
  for ( i = 0; i < loops; ++i ) {
    rc = TDC_getHbtEventCount( &totalCnt, &lastCnt, &rate );
    checkRc( "TDC_getHbtEventCount", rc );
    printf( "%12"LLDFORMAT" %12"LLDFORMAT" %13g\n", totalCnt, lastCnt, rate );
    SLEEP( 105 );
  }

  fct = TDC_createHbtFunction();
  checkRc( "TDC_createHbtFunction", fct == 0 ? 99 : TDC_Ok );
  rc = TDC_calcHbtG2( fct );
  checkRc( "TDC_calcHbtG2", rc );

  viewScale = generate ? 30 : 5;  /* Must look much closer at selftest data */ 

  printf( "dt[ns]:" );
  for ( i = 0; i < 7; ++i ) {
    int index = fct ->indexOffset + (i-3) * viewScale;
    double dt = (index - fct ->indexOffset) * BINWIDTH * timeBase * 1.e9;
    printf( " %9.1e", dt );
  }
  printf( "\n" );

  printf( "g(2):  " );
  for ( i = 0; i < 7; ++i ) {
    int index = fct ->indexOffset + (i-3) * viewScale;
    printf( " %9.1e", fct ->values[index] );
  }
  printf( "\n" );

  rc = TDC_fitHbtG2( fct, FCTTYPE_THERMAL, paramIn, paramOut, &iters );
  checkRc( "TDC_fitHbtG2", rc );
  rc = TDC_calcHbtModelFct( FCTTYPE_THERMAL, paramOut, fct );
  checkRc( "TDC_calcHbtModelFunction", rc );
  printf( "fit:   " );
  for ( i = 0; i < 7; ++i ) {
    int index = fct ->indexOffset + (i-3) * viewScale;
    printf( " %9.1e", fct ->values[index] );
  }

  printf( "\nParams In:  " );
  for ( i = 0; i < 4; ++i ) {
    printf( " %10.2e", paramIn[i] );
  }
  printf( "\nParams Out: " );
  for ( i = 0; i < 4; ++i ) {
    printf( " %10.2e", paramOut[i] );
  }
  printf( "\nIterations: %d\n", iters );

  TDC_releaseHbtFunction( fct );
  TDC_deInit();
  return 0;
}


int main( int argc, char ** argv )
{
  int generate = 1, loops = 30;
  printf( "Usage %s <gen. data (0/1)> <wait loops of 100ms>\n", argv[0] );
  if ( argc > 1 ) {
    generate = atoi( argv[1] );
  }
  if ( argc > 2 ) {
    int num = atoi( argv[2] );
    if ( num > 0 ) {
      loops = num;
    }
  }
  return run( generate, loops );
}
