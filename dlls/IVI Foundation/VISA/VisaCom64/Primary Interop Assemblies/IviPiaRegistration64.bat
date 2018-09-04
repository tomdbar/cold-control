@Rem This batch file puts each Primary Interop Assembly in this directory
@Rem into the Global Assembly Cache using gacutil. It assumes every DLL
@Rem is a PIA.  This assumes that Visual Studio .NET is installed and
@Rem vsvars32.bat has already been run.
@Rem
@Rem If you do not have Visual Studio .NET installed, the tools 'gacutil'
@Rem and 'regasm' are not on your system.
@Rem
@Rem The first batch parameter can specify a directory different from
@Rem the current directory.
set IVIPIA_DIR=%~1
if "%~1"=="" set IVIPIA_DIR=.
set IVIPIA_SPEC=%IVIPIA_DIR%\*.Interop.dll

@Rem Add each DLL into the GAC.
for %%f in (%IVIPIA_SPEC%) do gacutil -nologo -i "%%f"
@if ERRORLEVEL 1 goto miscerror

@Rem Running regasm allows the development environment to properly add a 
@Rem reference to the assembly and to make IntelliSense work.
for %%f in (%IVIPIA_SPEC%) do regasm -nologo -codebase "%%f"
@if ERRORLEVEL 1 goto miscerror

@Rem If we get here, everything is successful.
@goto end

:miscerror
@echo.
@echo You must have Visual Studio .NET installed and you must have run
@echo vsvars32.bat.  Use this Start menu entry to auto-run vsvars32.bat:
@echo Visual Studio .NET Tools^>^>Visual Studio .NET Command Prompt
@echo.
@pause

:end
