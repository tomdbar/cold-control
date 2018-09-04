/*******************************************************************************
 *
 *  Project:        TDC User Library
 *
 *  Filename:       example3.c
 *
 *  Purpose:        Simple example for use of tdcbase lib
 *                  Timestamp delay compensation
 *
 *  Author:         NHands GmbH & Co KG
 *
 *******************************************************************************/
/* $Id: example3.c,v 1.2 2015/07/31 11:57:32 trurl Exp $ */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tdcbase.h"
#include "tdcstartstop.h"

#ifdef unix
#include <unistd.h>
#define SLEEP(x) usleep(x*1000)
#else
#include <windows.h>
#define SLEEP(x) Sleep(x)
#endif


#define BINCOUNT      25  /* Histogram size */
#define BINWIDTH       4  /* Histogram bin width */


static void checkRc( const char * fctname, int rc )
{
  if ( rc ) {
    printf( ">>> %s: %s\n", fctname, TDC_perror( rc ) );
    TDC_deInit();
    exit( 1 );
  }
}


void collectEvents( int msecs, const char * header )
{
  int j;
  Int32 tooBig1, tooBig2, hist1[BINCOUNT], hist2[BINCOUNT];
  double tdc2ns = TDC_getTimebase() * 1.e9;
  printf( "\nTime Diff Histograms 1/3: %s\n", header );
  printf( " TDC units   time diff [ns]  Count 1-after-3  Count 3-after-1\n" );

  SLEEP( msecs );
  TDC_freezeBuffers( 1 );
  TDC_getHistogram( 0, 2, 1, hist1, 0, 0, &tooBig1, 0, 0, 0 );
  TDC_getHistogram( 2, 0, 1, hist2, 0, 0, &tooBig2, 0, 0, 0 );
  TDC_freezeBuffers( 0 );
  for ( j = 0; j < BINCOUNT; ++j ) {
    printf( "%10d %16f %16d %16d\n", j*BINWIDTH, j*BINWIDTH*tdc2ns, hist1[j], hist2[j] );
  }
  printf( "       ...                  %16d %16d\n", tooBig1, tooBig2 );
  printf( "\n" );
}
  


int run( double threshold, Int32 delay1, Int32 delay3 )
{
  int rc;
  Int32 delays[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

  rc = TDC_init( -1 );
  checkRc( "TDC_init", rc );
  rc = TDC_enableChannels( 0x05 );
  checkRc( "TDC_enableChannels", rc );
  rc = TDC_configureSyncDivider( 1, 0 );
  checkRc( "TDC_configureSyncDivider(4)", rc );
  rc = TDC_configureSignalConditioning( 0, SCOND_MISC, 1, 1, threshold );
  checkRc( "TDC_configureSignalConditioning(0,...)", rc );
  rc = TDC_configureSignalConditioning( 2, SCOND_MISC, 1, 1, threshold );
  checkRc( "TDC_configureSignalConditioning(2,...)", rc );
  rc = TDC_enableStartStop( 1 );                       /* Use start stop histograms */
  checkRc( "TDC_enableStartStop", rc );
  rc = TDC_setHistogramParams( BINWIDTH, BINCOUNT );
  checkRc( "TDC_setHistogramParams", rc );

  rc = TDC_setChannelDelays( delays );
  checkRc( "TDC_setChannelDelays", rc );
  collectEvents( 1000, "Without compensation" );

  delays[2] = delay3;
  delays[0] = delay1;
  rc = TDC_setChannelDelays( delays );
  checkRc( "TDC_setChannelDelays", rc );
  collectEvents( 1000, "Now with compensation" );

  TDC_deInit();
  return 0;
}


int main( int argc, char ** argv )
{
  double threshold = 1.;
  Int32  delay3 = 0, delay1 = 0;
  if ( argc <= 2 ) {
    printf( "\nTDC timestamp delay example.\n\n"
            "Connect a generated signal to channels 1 and 3\n"
            "with cables of different length and call the program\n"
            "with a threshold value below signal level and the\n"
            "expected delay time of ch.3 compared to 0\n"
            "(positive or negative).\n"
            "Usage %s <threshold[V]> <delay[TDC units]>.\n\n", argv[0] );
    return 1;
  }

  sscanf( argv[1], "%lg", &threshold );
  sscanf( argv[2], "%d",  &delay3 );
  if ( delay3 < 0 ) {
    delay1 = -delay3;
    delay3 = 0;
  }
  return run( threshold, delay1, delay3 );
}
