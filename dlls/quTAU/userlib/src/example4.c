/*******************************************************************************
 *
 *  Project:        TDC User Library
 *
 *  Filename:       example4.c
 *
 *  Purpose:        Simple example for use of tdcbase lib
 *                  Simulation, demo, file I/O
 *
 *  Author:         NHands GmbH & Co KG
 *
 *******************************************************************************/
/* $Id: example4.c,v 1.2 2016/02/17 13:17:08 trurl Exp $ */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tdcbase.h"
#include "tdcstartstop.h"
#include "tdchbt.h"

#ifdef unix
#include <unistd.h>
#define SLEEP(x) usleep(x*1000)
#else
#include <windows.h>
#define SLEEP(x) Sleep(x)
#endif


static void checkRc( const char * fctname, int rc )
{
  if ( rc ) {
    printf( ">>> %s: %s\n", fctname, TDC_perror( rc ) );
    if ( rc != TDC_NotConnected ) {
      exit( 1 );
    }
  }
}


/*
 * Generate timestamps, write them to file, read back that file
 * and write contents to another one.
 */
static void run( TDC_FileFormat fmt, const char * fn1, const char * fn2, Int32 count )
{
  Int32 rc;
  double simPara[2] = { 1000., 1000. };    /* center,width = 81ns */

  rc = TDC_init( -1 );                     /* Accept every device */
  checkRc( "TDC_init", rc );
  rc = TDC_enableChannels( 0x15 );         /* Use 3 channels 0,2,4 */
  checkRc( "TDC_enableChannels", rc );
  rc = TDC_writeTimestamps( fn1, fmt );    /* Setup writing */
  checkRc( "TDC_writeTimestamps", rc );
  rc = TDC_generateTimestamps( SIM_FLAT, simPara, count ); /* create timestamps to write */
  checkRc( "TDC_generateTimestamps", rc );
  rc = TDC_writeTimestamps( NULL, fmt );                   /* Close file */
  checkRc( "TDC_writeTimestamps 2", rc );
  rc = TDC_writeTimestamps( fn2, FORMAT_ASCII );           /* Open secondary file */
  checkRc( "TDC_writeTimestamps 3", rc );
  rc = TDC_readTimestamps( fn1, fmt );     /* Open first file for reading - fails for txt format */
  checkRc( "TDC_readTimestamps", rc );
  rc = TDC_writeTimestamps( NULL, fmt );   /* Close output file again */
  checkRc( "TDC_writeTimestamps 4", rc );
  TDC_deInit();
}


int main( int argc, char ** argv )
{
  TDC_FileFormat fmt = FORMAT_BINARY;
  const char * fn1   = NULL;
  const char * fn2   = NULL;
  Int32 count        = 0;

  if ( argc > 2 ) {
    if ( !strcmp( argv[1], "ascii" ) ) {
      fmt = FORMAT_ASCII;
      fn1 = "primary.txt";
      fn2 = "secondary.txt";
    }
    if ( !strcmp( argv[1], "bin"   ) ) {
      fn1 = "primary.bin";
      fn2 = "secondary.txt";
    }
    if ( !strcmp( argv[1], "compr" ) ) {
      fmt = FORMAT_COMPRESSED;
      fn1 = "primary.bic";
      fn2 = "secondary.txt";
    }
    sscanf( argv[2], "%d", &count );
  }
  if ( !count || !fn1 || !fn2 ) {
    printf( "\nWill write a number of generated timestamps to an output file\n"
            "in ASCII, binary, or compressed format. Binary files will be\n"
            "reopened and translated into a secondary ASCII output file.\n" );
    printf( "Usage: %s [ascii | bin | compr] count\n", argv[0] );
    return 1;
  }
  printf( "Primary output: %s\nSecondary:      %s\n", fn1, fn2 );

  run( fmt, fn1, fn2, count );
  return 0;
}
