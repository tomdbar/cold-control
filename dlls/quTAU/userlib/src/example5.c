/*******************************************************************************
 *
 *  Project:        TDC User Library
 *
 *  Filename:       example5.c
 *
 *  Purpose:        Simple example for use of tdcbase lib
 *                  Signal conditioning, Lifetime feature
 *
 *  Author:         NHands GmbH & Co KG
 *
 *******************************************************************************/
/* $Id: example5.c,v 1.5 2015/10/28 18:51:34 trurl Exp $ */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tdcbase.h"
#include "tdclifetm.h"

#ifdef unix
#include <unistd.h>
#define SLEEP(x) usleep(x*1000)
#else
#include <windows.h>
#define SLEEP(x) Sleep(x)
#endif

#define BINWIDTH    8192
#define BINCOUNT    8192

static void checkRc( const char * fctname, int rc )
{
  if ( rc ) {
    printf( ">>> %s: %s\n", fctname, TDC_perror( rc ) );
    TDC_deInit();
    exit( 1 );
  }
}


void collectEvents( int msecs, const char * header, TDC_LftFunction ** data )
{
  int   rc, tooBig, starts, stops;
  Int64 expTime;
  TDC_LftFunction * d;

  printf( "\nStatistics %s\n", header );
  SLEEP( 100 );
  rc = TDC_resetLftHistograms();
  checkRc( "TDC_resetLftHistogram", rc );
  SLEEP( msecs );

  d = TDC_createLftFunction();
  checkRc( "TDC_createLftFunction", d == 0 ? 99 : TDC_Ok );
  *data = d;
  
  rc = TDC_getLftHistogram( 0, 1, d, &tooBig, &starts, &stops, &expTime );
  checkRc( "TDC_getLftHistogram", rc );
  printf( "Starts: %d, Stops: %d, tooBig: %d, expTime: %"LLDFORMAT"\n",
          starts, stops, tooBig, expTime );
}
  


int run( double threshold )
{
  int i, rc, filledBins = 0;
  TDC_LftFunction * histo1, * histo2, * histo3;
  double bin2us = BINWIDTH * TDC_getTimebase() * 1.e6;

  rc = TDC_init( -1 );
  checkRc( "TDC_init", rc );
  rc = TDC_enableChannels( 0xff );
  checkRc( "TDC_enableChannels", rc );
  rc = TDC_enableLft( 1 );
  checkRc( "TDC_enableLft", rc );
  rc = TDC_setLftParams( BINWIDTH, BINCOUNT );
  checkRc( "TDC_setLftParams", rc );
  rc = TDC_configureSignalConditioning( 0, SCOND_MISC, 1, 1, threshold );
  checkRc( "TDC_configureSignalConditioning(0,...)", rc );
  rc = TDC_configureSignalConditioning( 6, SCOND_MISC, 1, 1, threshold );
  checkRc( "TDC_configureSignalConditioning(6,...)", rc );
  rc = TDC_setLftStartInput( 0 );
  checkRc( "TDC_setLftStartInput", rc );

  rc = TDC_configureSyncDivider( 1, 0 );
  checkRc( "TDC_configureSyncDivider(1)", rc );
  collectEvents( 1000, "without divider", &histo1 );

  rc = TDC_configureSyncDivider( 128, 0 );
  checkRc( "TDC_configureSyncDivider(128)", rc );
  collectEvents( 1000, "with divider 128", &histo2 );

  rc = TDC_configureSyncDivider( 128, 1 );
  checkRc( "TDC_configureSyncDivider(128)", rc );
  collectEvents( 1000, "with compensated divider", &histo3 );

  printf( "\nStart multistop histogram bins with nonvanishing contents:\n" );
  printf( " bin no   time diff [us]      divider=1  divider=128 div. compens\n" );
  for ( i = 0; i < BINCOUNT; i++ ) {
    if ( histo1 ->values[i] || histo2 ->values[i] || histo3 ->values[i] ) {
      printf( "%7d %16f %12.1f %12.1f %12.1f\n", i, i * bin2us,
              histo1 ->values[i], histo2 ->values[i], histo3 ->values[i] );
      filledBins++;
    }
  }
  printf( "\nFilled Bins: %d\n", filledBins );

  TDC_deInit();
  return 0;
}


int main( int argc, char ** argv )
{
  double threshold = 1.0;
  if ( argc <= 1 ) {
    printf( "\nTDC signal conditioning and lifetime feature example.\n\n"
            "Connect a generated signal to channels 1 and 7\n"
            "and call the program with a threshold value\n"
            "below the signal level.\n"
            "Usage %s <threshold[V]>.\n\n", argv[0] );
    return 1;
  }

  sscanf( argv[1], "%lg", &threshold );
  return run( threshold );
}
