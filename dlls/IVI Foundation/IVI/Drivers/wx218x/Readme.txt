			***********************
			**** Read Me First ****
			***********************

Version 3.0.2
December 2014	


Introducing the Tabor Electronics IVI-COM/C Driver for WX2181/WX2182/WX2181B/WX2182B/WS8351/WS8352/WX218xB-D/WX128xB-D/WX2184/WX1284
                                                       WX2181C/WX2182C/WX1281C/WX1282C
-------------------------------------------------------
  The instrument driver provides access to the functionality of
  WX2181/WX2182 through a COM server or ANSI C API which also complies with
  the IVI specifications. This driver works in any development environment
  which supports COM or C programming including Microsoft Visual C++, 
  Microsoft .NET, National Instruments
  LabView, National Instruments LabWindows/CVI, and others.


Supported Instruments
---------------------
  WX2181
  WX2182
  WX2181B
  WX2182B
  WS8351
  WS8352
  WX2181B-D
  WX2182B-D
  WX1281B-D
  WX1282B-D
  WX2184
  WX1284
  WX2181C
  WX2182C
  WX1281C
  WX1282C


Installation
-------------
  System Requirements: The driver installation will check for the
  following requirements.  If not found, the installer will either
  abort, warn, or install the required component as appropriate.

  Supported Operating Systems:
    Windows 7
    Windows XP

  Shared Components:
    Before this driver can be installed, your computer must already
    have several components already installed. The easiest way to
    to install these other components is by running the IVI Shared
    Components installation package available from the IVI Foundation
    as noted below. It installs all the items mentioned below.

    IVI Shared Components version 1.5.0.0 or later.
      The driver installer requires these components. They must be
      installed before the driver installer can install the driver.  

      The IVI Shared Components installer is available from: 
      http://www.ivifoundation.org

      To install, open or run the file: IviSharedComponents.msi

      If the driver installer exhibits problems with installing the IVI
      Shared Components, find the program IviSharedComponents.msi and
      Run the program. It is able to install many of the required system
      components, including Windows Installer 2.0.

    Windows Installer
      Version 2.0 or later. The IVISharedComponents.exe program will
      install version 2.0 of the Windows installer.
      It is also available from:
       http://microsoft.com/downloads
      Enter "windows installer" as keywords.  Use the one appropriate for
      your Operating System.

    Microsoft XML 4.0
      The Configuration Server, an IVI Shared Component, uses Microsoft's
      XML 4.0 parser. The IVI Shared Components will install the XML 4.0
      parser. You can download the parser and its associated SDK from: 
       http://microsoft.com/downloads
      Enter "xml 4.0" as keywords.

    Microsoft HTML Help Viewer (Win98, WinNT) Version 1.32 or later
      The driver will install without the help viewer, but you will not
      be able to use the help file for the driver. You can download the
      help viewer from:
        http://microsoft.com/downloads
      Enter "html help workshop" as keywords

    MS Windows® Script
      Typically, wscript.exe is installed as part of the operating system
      or with Internet Explorer. If you see an error about wscript.exe,
      you need to install the Windows Script.
      Download from:
        http://msdn.microsoft.com/downloads
      Enter "windows script" as keywords. Use the one appropriate for
      your Operating System. 


  VISA-COM
    Any compliant implementation is acceptable. Typically, VISA-COM is
    installed with VISA and other I/O library modules.

  I/O Libraries
    If you are using National Instruments I/O libraries, use NI-VISA
    version 3.0.1 or later and NI-488.2 version 2.2 or later.

  Note: Driver may operate without any I/O software in simulation mode.

Additional Setup
----------------
  .NET Framework
    The .NET Framework itself is not required by this driver. If you
    plan to use the driver with .NET, Service Pack 2 is required.
    Download from:
 http://msdn.microsoft.com/netframework/downloads/updates/sp/default.asp

  The .NET Framework requires an interop assembly for a COM
  server. A Primary Interop Assembly, along with an XML file for
  IntelliSense is installed with the driver. The driver's PIA, along
  with IVI PIAs are installed, by default, in:
  <drive>:\Program Files\IVI Foundation\IVI\Bin\Primary Interop Assemblies


  The PIA is also installed into the Global Assembly Cache (GAC) if
  you have the .NET framework installed.

  If you install the .NET framework later, you can run the driver
  installer again to put the driver's PIA into the GAC and properly
  register it.


Start Menu Help File 
--------------------
  A shortcut to the driver help file is added to the Start Menu,
  Programs, Tabor Electronics, WX218x group.It contains 
  "Getting Started" information on using the driver in a variety of programming
  environments as well as documentation on IVI and instrument specific
  methods and properties.

  You will also see shortcuts to the Readme file and any programming
  examples for this driver.


MSI Installer
-------------
  The installation package for the driver is distributed as an MSI 2.0
  file. You can install the driver by double-clicking on the file.
  This operation actually runs:
      msiexec /i WX218x.msi

  You can run msiexec from a command prompt and utilize its many
  command line options. There are no public properties which can be
  set from the command line. You can also install this driver from
  another installation package.


Uninstall
---------
  This driver can be uninstalled like any other software from the
  Control Panel using "Add or Remove Programs". 

  The IVI Shared Components may also be uninstalled like any other
  software from the Control Panel using "Add or Remove Programs".

  Note: All IVI-COM/C drivers require the IVI Shared Components to
  function. To completely remove IVI components from your computer,
  uninstall all drivers and then uninstall the IVI Shared Components.


Source Code
-----------
  Driver source code is available by choosing "Custom" and selecting
  "Source Code" when installing the driver.  This code is provided as
  is for informational purposes only.  Modification of this code is
  not supported.


Using a New Version of the Driver
---------------------------------
  New versions of this Tabor Electronics IVI-COM/C driver may have a new
  ProgId.

  If you use the version dependent ProgId in CoCreateInstance,
  you will need to modify and recompile your code to use the
  new ProgID once you upgrade to the next version of the driver.
  Doing a side-by-side installation of the driver to use multiple
  versions of the driver is not supported.  If you need to go back
  to an older version of the driver, you need to uninstall the later
  version and install the older version.

  If you use the version independent ProgId in CoCreateInstance,
  you will not need to modify and recompile your code.  The new
  version of the driver has been tested to be backwards compatible
  with previous versions.

  To access the new functionality in a new version of the driver
  you will need to use the latest numbered IWX218x_[n]
  interface rather than the IWX218x interface.  The
  IWX218x_[n].<interface> property will return a pointer
  to the new IWX218x<interface>[n] interface.  The
  IWX218x<interface>[n] interface contains the methods and 
  properties for the new functionality.  The new interfaces were
  introduced rather than modifying the existing interfaces for
  backwards compatibility.  The interfaces that were previously
  shipped have not been changed.


Known Issues
------------
  This driver does not have any known defects.


Revision History
----------------
  Version      Date        Notes
  -------   ----------   ---------
 
  1.0.0   September 20010   Initial release

  1.0.1   December 2010     In IVI-COM Driver adding function -  CreateCustom in ArbitraryWaveform Interface,
                            that creates an arbitrary waveform from array of Data (short) values,that are already in range from 0 to 4095.

                            Improved examples in C# for downloading waves with large size:

                            Adding function : ConvertWaveformDoubleToDAC and 

                            changing function: calculateSinusoidWaveform

                            Adding free system memory in all examples for C#

  1.0.2   October 2011      Adding support for WX2181B, WX2182B

  1.0.3   December 2011     Adding support for WS8351/WS8352 

  1.0.4   May 2013          Adding support for WX218xB-D/WX128xB-D 

  1.0.5   July 2013         Adding functions: LoadPSKUserDataFile, LoadQAMUserDataFile, 
                            Changing function LoadFHOPDataFile to two functions:
                            LoadFHOPFixDataFile and LoadFHOPVarDataFile.

                            Adding modulations:ASK,PSK,FSK,FHOP,AHOP,QAM

  1.0.6   November 2013     In the function IWX218xArbitraryWaveform_LoadArbWfmFromFile 
                            adding ability to download waveforms already with markers that 
                            were created via ArbConnection to the instrument memory. 

  1.0.7   November 2013     In functions: CreateSequenceAdv, CreateAdvSequence, 
                                          CreateDigPatternParamData,
                                          CreatePSKData, CreateFSKData, CreateASKData 
                            adding ability to recieve values in string like "1001" 
                            from LabView wrapper.  

  2.0.0   May      2014     Adding support for WX2184 

  2.0.1   May      2014     Adding support for download two waveforms with combine method 

  2.0.2   July     2014     Adding support for WX1284 
  
  2.0.3   August   2014     Adding support for WX2182C

  2.0.4   August   2014     Adding support for WX2181C,WX1281C,WX1282C

  3.0.0   September 2014    Compiled driver dll in Nimbus Driver Studio 3.3
                            Adding methods:
                            WX218x::IWX218xArbitrarySequenceAdvanceSequence_ConfigureOnceCount,
                            WX218x::IWX218xArbitrarySequence_ConfigureOnceCount
                            WX218x::IWX218x_SendCmd, WX218x::IWX218x_ReadQuery,



  3.0.1   November 2014     Adding functions for support download data from the Comma (CSV) data format:
                            WX218x::IWX218xArbitraryWaveform_LoadCSVFile
                            WX218x::IWX218xArbitraryWaveform_LoadCSVFileAdv

  3.0.2   December 2014     Corrected help for LabView wrapper
    

  
IVI Compliance
--------------
  See the driver help file topic "IVI Compliance Information" for
  complete compliance information.

  This driver supports communicating with instruments using
  GPIB, USB, TCPIP (LAN), or ASRL (Serial) if supported by the instrument.

  Software: See the section on installation in this document for
  information on what other software is required by this driver. 

IVI Instrument Class: IviFgen
IviFgen: IVI-4.3_v3.1

IviFgenBase                     yes
IviFgenArbFrequency             yes
IviFgenArbWfm                   yes
IviFgenArbSeq                   no
IviFgenBurst                    yes
IviFgenInternalTrigger          yes
IviFgenModulateAM               yes
IviFgenModulateFM               yes
IviFgenSoftwareTrigger          yes
IviFgenStdFunc                  yes
IviFgenTrigger                  yes

Optional Features: 
Interchangeability Checking     no
State Caching                   no
Coercion Recording              no 


More Information
----------------
  For more information about this driver and other instrument drivers
  and software available from Tabor Electronics visit:
  http://www.taborelec.com


  A list of contact information is available from:
   http://www.taborelec.com/contact

  Microsoft, Windows, MS Windows, and Windows NT are U.S. 
  registered trademarks of Microsoft Corporation.

© Copyright Tabor Electronics Ltd. 2010-2014