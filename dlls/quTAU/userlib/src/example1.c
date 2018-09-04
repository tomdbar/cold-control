/*******************************************************************************
 *
 *  Project:        TDC User Library
 *
 *  Filename:       example1.c
 *
 *  Purpose:        Simple example for use of tdcbase lib
 *                  configuration of the signal conditioning
 *
 *  Author:         NHands GmbH & Co KG
 *
 *******************************************************************************/
/* $Id: example1.c,v 1.4 2015/07/31 11:57:32 trurl Exp $ */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tdcbase.h"

#ifdef unix
#include <unistd.h>
#define SLEEP(x) usleep(x*1000)
#else
#include <windows.h>
#define SLEEP(x) Sleep(x)
#endif

#define TIMESTAMP_COUNT 100000

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


void collectEvents( int loops, const char * header )
{
  int i, j, tsValid, evtCount[8];
  Int64 timestamps[TIMESTAMP_COUNT];
  Int8  channels[TIMESTAMP_COUNT];
  printf( "\nEvent counts: %s\n", header );
  printf( "   total    ch.1    ch.2    ch.3    ch.4    ch.5    ch.6    ch.7    ch.8\n" );

  for ( j = 0; j < 8; ++j ) {
    evtCount[j] = 0;
  }
  for ( i = 0; i < loops; ++i ) {
    TDC_getLastTimestamps( 1, timestamps, channels, &tsValid );
    printf( "%8d", tsValid );
    for ( j = 0; j < tsValid; ++j ) {
      evtCount[channels[j]]++;
    }
    for ( j = 0; j < 8; ++j ) {
      printf( "%8d", evtCount[j] );
      evtCount[j] = 0;
    }
    printf( "\n" );
    SLEEP( 100 );
  }
}
  


int run( double threshold1, double threshold2 )
{
  int rc;
  TDC_DevType type;

  rc = TDC_init( -1 );
  checkRc( "TDC_init", rc );
  type = TDC_getDevType();
  printf( "Hardware found: %s\n", printHwType( type ) );
  if ( type != DEVTYPE_1B ) {
    printf ( "\nThis test will only run correctly on an 1B device\n\n" );
  }
  rc = TDC_setTimestampBufferSize( TIMESTAMP_COUNT );
  checkRc( "TDC_setTimestampBufferSize", rc );
  rc = TDC_enableChannels( 0xff );
  checkRc( "TDC_enableChannels", rc );
  rc = TDC_configureSyncDivider( 1, 0 );
  checkRc( "TDC_configureSyncDivider(1)", rc );
  rc = TDC_configureSignalConditioning( 0, SCOND_MISC, 1, 1, threshold1 );
  checkRc( "TDC_configureSignalConditioning(0,...)", rc );
  rc = TDC_configureSignalConditioning( 6, SCOND_MISC, 1, 1, threshold2 );
  checkRc( "TDC_configureSignalConditioning(6,...)", rc );
  collectEvents( 10, "Different thresholds" );

  rc = TDC_configureSyncDivider( 32, 0 );
  checkRc( "TDC_configureSyncDivider(32)", rc );
  collectEvents( 10, "Now with sync divider = 32" );

  TDC_deInit();                           /* Stop it and exit */
  return 0;
}


int main( int argc, char ** argv )
{
  double threshold1 = 1.0, threshold2 = 1.5;
  if ( argc <= 2 ) {
    printf( "\nTDC signal conditioning example.\n\n"
            "Connect a generated signal to channels 1 and 7\n"
            "and call the program with two voltage values,\n"
            "one below and one above the signal level.\n"
            "This should result in different count rates\n"
            "of the two channels.\n\n" );
    return 1;
  }

  sscanf( argv[1], "%lg", &threshold1 );
  sscanf( argv[2], "%lg", &threshold2 );
  return run( threshold1, threshold2 );
}
