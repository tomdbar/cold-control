Ivi Foundation Inc. Ivi Configuration Server Readme File
        Version 1.6.0.0

============================================================================
Version History

1.3.0.25
	- added reference counting between Session and HardwareAsset
	- added reference counting between logicalname and session/driversession
	- added reference counting between and apiReference
	- File Name: IviDataComponentCollection.cpp
		- added error checking for structure that does not contain at least 
			one child
	- File Name: IviDataComponentCollection.cpp
		- added error checking for structure that does not contain at least 
			one child
	- changed the defaults cache and range check to VARIANT_TRUE
	- modified reference counting for IviStructure datacomponents
	- went from "MinSize" to "MinDependency"
1.3.0.26
	- Modified serialization method to serialize to 
		"pretty-formatted" XML using SAXXMLReader and MXXMLWriter.
	- The type library is now unregistered in DLLUnregisterServer
1.3.1.0
	- Modified serialization to use the clsid's 
		__uuidof(SAXXMLReader40) and __uuidof(MXXMLWriter40) instead of the
		version-independent ones because the version-independent ones are 
		not installed with MSXML4.
	- Updated build system and some of the version resource values for
		autogeneration from the build system for better consistancy.
1.3.2.4
	- Fixed defect SFTWR00022584, "putref_session of IviLogicalName of same
		session causes reference problem"
	- Updated Configurable Initial Settings behavior to conform to new
		version of IVI 3.5 specification.
	- Added .PDB file to release build to aid future debugging on users'
		systems.
1.6.0.0
	- Fixed memory leak in Deserialize
	- Added ModulePath32 and ModulePath64 properties.
	- Added AssemblyQualifiedClassName property.
	- Added Ivi.ConfigServer.Interop.dll.policy for backwards compatibility
	    in .NET.
	- Changed the name of the schema file to IviConfigurationStore_1-6.xsd
	    to reflect the schema changes.
============================================================================
Copyright © 2007, Ivi Foundation Inc.  All Rights Reserved.
