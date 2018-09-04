############################################################
#
#  Project:        TDC User Library
#
#  Filename:       makefile
#
#  Purpose:        MSVC makefile for tdcbase examples
#
#  Author:         NHands GmbH & Co KG
#
############################################################
# $Id: makefile.win,v 1.5 2015/08/07 10:35:49 trurl Exp $

INCDIR=..\inc
LIBDIR=..\lib

.c.exe:
	cl -nologo -W3 -Zi -MD -wd4996 -I$(INCDIR) $(LIBDIR)\tdcbase.lib %s

all : example0.exe example1.exe example2.exe example3.exe \
      example4.exe example5.exe example6.exe tdcbase.dll

clean:
	del *.exe *.obj *.manifest *.dll

tdcbase.dll : $(LIBDIR)\tdcbase.dll
	copy $(LIBDIR)\tdcbase.dll .