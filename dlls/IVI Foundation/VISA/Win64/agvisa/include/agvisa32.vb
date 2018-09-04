Option Strict Off
Option Explicit On
Imports System.Text
Imports System.Runtime.InteropServices

Friend Module agvisa32
    ' --------------------------------------------------------------------------------
    '  Adapted from visa32.bas which was distributed by IVI Foundation
    '  Distributed By Agilent Technologies, Inc.
    ' --------------------------------------------------------------------------------
    '  Title   : agvisa32.vb
    '  Date    : 05-24-2012
    '  Purpose : VISA definitions for Visual Basic .NET - linking to agvisa32.dll
    ' --------------------------------------------------------------------------------

    Public Const VI_SPEC_VERSION As Integer = &H500100

#Region " - Resource Template Functions and Operations ----------------------------"
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#141", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viOpenDefaultRM(ByRef sesn As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#128", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viGetDefaultRM(ByRef sesn As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#129", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viFindRsrc(ByVal sesn As Integer, ByVal expr As String, ByRef vi As Integer, ByRef retCount As Integer, ByVal desc As System.Text.StringBuilder) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#130", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viFindNext(ByVal vi As Integer, ByVal desc As System.Text.StringBuilder) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#146", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viParseRsrc(ByVal sesn As Integer, ByVal desc As String, ByRef intfType As Short, ByRef intfNum As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#147", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viParseRsrcEx(ByVal sesn As Integer, ByVal desc As String, ByRef intfType As Short, ByRef intfNum As Short, ByVal rsrcClass As System.Text.StringBuilder, ByVal expandedUnaliasedName As System.Text.StringBuilder, ByVal aliasIfExists As System.Text.StringBuilder) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#131", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viOpen(ByVal sesn As Integer, ByVal viDesc As String, ByVal mode As Integer, ByVal timeout As Integer, ByRef vi As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#132", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viClose(ByVal vi As Integer) As Integer
    End Function

#Region "viGetAttribute Overloads"
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#133", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viGetAttribute(ByVal vi As Integer, ByVal attrName As Integer, ByRef attrValue As Byte) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#133", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viGetAttribute(ByVal vi As Integer, ByVal attrName As Integer, ByRef attrValue As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#133", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viGetAttribute(ByVal vi As Integer, ByVal attrName As Integer, ByRef attrValue As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#133", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viGetAttribute(ByVal vi As Integer, ByVal attrName As Integer, ByVal attrValue As System.Text.StringBuilder) As Integer
    End Function
#End Region

#Region "viSetAttribute Overloads"
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#134", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viSetAttribute(ByVal vi As Integer, ByVal attrName As Integer, ByVal attrValue As Byte) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#134", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viSetAttribute(ByVal vi As Integer, ByVal attrName As Integer, ByVal attrValue As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#134", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viSetAttribute(ByVal vi As Integer, ByVal attrName As Integer, ByVal attrValue As Integer) As Integer
    End Function
#End Region

    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#142", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viStatusDesc(ByVal vi As Integer, ByVal status As Integer, ByVal desc As System.Text.StringBuilder) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#143", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viTerminate(ByVal vi As Integer, ByVal degree As Short, ByVal jobId As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#144", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viLock(ByVal vi As Integer, ByVal lockType As Integer, ByVal timeout As Integer, ByVal requestedKey As String, ByVal accessKey As System.Text.StringBuilder) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#145", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viUnlock(ByVal vi As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#135", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viEnableEvent(ByVal vi As Integer, ByVal eventType As Integer, ByVal mechanism As Short, ByVal context As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#136", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viDisableEvent(ByVal vi As Integer, ByVal eventType As Integer, ByVal mechanism As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#137", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viDiscardEvents(ByVal vi As Integer, ByVal eventType As Integer, ByVal mechanism As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#138", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viWaitOnEvent(ByVal vi As Integer, ByVal inEventType As Integer, ByVal timeout As Integer, ByRef outEventType As Integer, ByRef outEventContext As Integer) As Integer
    End Function
    Public Delegate Function viEventHandler(ByVal vi As Integer, ByVal eventType As Integer, ByVal context As Integer, ByVal userHandle As Integer) As Integer
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#139", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viInstallHandler(ByVal vi As Integer, ByVal eventType As Integer, ByVal handler As viEventHandler, ByVal userHandle As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#140", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viUninstallHandler(ByVal vi As Integer, ByVal eventType As Integer, ByVal handler As viEventHandler, ByVal userHandle As Integer) As Integer
    End Function
#End Region

#Region " - Basic I/O Operations --------------------------------------------------"

    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#256", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viRead(ByVal vi As Integer, ByVal buffer As Byte(), ByVal count As Integer, ByRef retCount As Integer) As Integer
    End Function
    Public Function viRead(ByVal vi As Integer, ByRef asciiResults As String, ByVal maxCount As Integer) As Integer
        asciiResults = String.Empty
        Dim retCount As Integer = 0
        Dim byteResults(maxCount) As Byte
        Dim retVal As Integer
        retVal = viRead(vi, byteResults, maxCount, retCount)
        If (retVal >= agvisa32.VI_SUCCESS) Then
            Dim encoding As New ASCIIEncoding()
            asciiResults = encoding.GetString(byteResults, 0, retCount)
        End If
        Return retVal
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#277", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viReadAsync(ByVal vi As Integer, ByVal buffer As Byte(), ByVal count As Integer, ByRef jobId As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#219", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viReadToFile(ByVal vi As Integer, ByVal filename As String, ByVal count As Integer, ByRef retCount As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#257", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viWrite(ByVal vi As Integer, ByVal buffer As Byte(), ByVal count As Integer, ByRef retCount As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#278", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viWriteAsync(ByVal vi As Integer, ByVal buffer As Byte(), ByVal count As Integer, ByRef jobId As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#218", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viWriteFromFile(ByVal vi As Integer, ByVal filename As String, ByVal count As Integer, ByRef retCount As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#258", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viAssertTrigger(ByVal vi As Integer, ByVal protocol As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#259", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viReadSTB(ByVal vi As Integer, ByRef status As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#260", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viClear(ByVal vi As Integer) As Integer
    End Function
#End Region

#Region " - Formatted and Buffered I/O Operations ---------------------------------"

    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#267", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viSetBuf(ByVal vi As Integer, ByVal mask As Short, ByVal bufSize As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#268", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viFlush(ByVal vi As Integer, ByVal mask As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#202", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viBufWrite(ByVal vi As Integer, ByVal buffer As Byte(), ByVal count As Integer, ByRef retCount As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#203", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viBufRead(ByVal vi As Integer, ByVal buffer As Byte(), ByVal count As Integer, ByRef retCount As Integer) As Integer
    End Function

#Region "viPrintf Overloads"
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#269", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viPrintf(ByVal vi As Integer, ByVal writeFmt As String) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#269", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viPrintf(ByVal vi As Integer, ByVal writeFmt As String, ByVal arr() As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#269", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viPrintf(ByVal vi As Integer, ByVal writeFmt As String, ByVal arr() As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#269", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viPrintf(ByVal vi As Integer, ByVal writeFmt As String, ByVal arr() As Single) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#269", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viPrintf(ByVal vi As Integer, ByVal writeFmt As String, ByVal arr() As Double) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#269", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viPrintf(ByVal vi As Integer, ByVal writeFmt As String, ByVal arr() As Byte) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#269", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viPrintf(ByVal vi As Integer, ByVal writeFmt As String, ByVal arg As String) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#269", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viPrintf(ByVal vi As Integer, ByVal writeFmt As String, ByVal arg As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#269", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viPrintf(ByVal vi As Integer, ByVal writeFmt As String, ByVal arg As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#269", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viPrintf(ByVal vi As Integer, ByVal writeFmt As String, ByVal arg As Double) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#269", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viPrintf(ByVal vi As Integer, ByVal writeFmt As String, ByVal arg As Byte) As Integer
    End Function
#End Region

#Region "viSPrintf Overloads"
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#204", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSPrintf(ByVal vi As Integer, ByVal buffer As System.Text.StringBuilder, ByVal writeFmt As String) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#204", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSPrintf(ByVal vi As Integer, ByVal buffer As System.Text.StringBuilder, ByVal writeFmt As String, ByVal arr() As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#204", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSPrintf(ByVal vi As Integer, ByVal buffer As System.Text.StringBuilder, ByVal writeFmt As String, ByVal arr() As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#204", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSPrintf(ByVal vi As Integer, ByVal buffer As System.Text.StringBuilder, ByVal writeFmt As String, ByVal arr() As Single) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#204", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSPrintf(ByVal vi As Integer, ByVal buffer As System.Text.StringBuilder, ByVal writeFmt As String, ByVal arr() As Double) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#204", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSPrintf(ByVal vi As Integer, ByVal buffer As System.Text.StringBuilder, ByVal writeFmt As String, ByVal arr() As Byte) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#204", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSPrintf(ByVal vi As Integer, ByVal buffer As System.Text.StringBuilder, ByVal writeFmt As String, ByVal arg As String) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#204", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSPrintf(ByVal vi As Integer, ByVal buffer As System.Text.StringBuilder, ByVal writeFmt As String, ByVal arg As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#204", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSPrintf(ByVal vi As Integer, ByVal buffer As System.Text.StringBuilder, ByVal writeFmt As String, ByVal arg As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#204", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSPrintf(ByVal vi As Integer, ByVal buffer As System.Text.StringBuilder, ByVal writeFmt As String, ByVal arg As Double) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#204", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSPrintf(ByVal vi As Integer, ByVal buffer As System.Text.StringBuilder, ByVal writeFmt As String, ByVal arg As Byte) As Integer
    End Function
#End Region

#Region "viScanf Overloads"
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByVal arr() As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByVal arr() As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByVal arr() As Single) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByVal arr() As Double) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByVal arr() As Byte) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByRef count As Integer, ByVal arr() As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByRef count As Integer, ByVal arr() As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByRef count As Integer, ByVal arr() As Single) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByRef count As Integer, ByVal arr() As Double) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByRef count As Integer, ByVal arr() As Byte) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByVal arg As System.Text.StringBuilder) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByRef stringSize As Integer, ByVal arg As System.Text.StringBuilder) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByRef arg As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByRef arg As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByRef arg As Single) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByRef arg As Double) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#271", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viScanf(ByVal vi As Integer, ByVal readFmt As String, ByRef arg As Byte) As Integer
    End Function
#End Region

#Region "viSScanf Overloads"
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByVal arr() As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByVal arr() As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByVal arr() As Single) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByVal arr() As Double) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByVal arr() As Byte) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByRef count As Integer, ByVal arr() As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByRef count As Integer, ByVal arr() As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByRef count As Integer, ByVal arr() As Single) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByRef count As Integer, ByVal arr() As Double) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByRef count As Integer, ByVal arr() As Byte) As Integer
    End Function

    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByVal arg As System.Text.StringBuilder) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByRef stringSize As Integer, ByVal arg As System.Text.StringBuilder) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByRef arg As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByRef arg As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByRef arg As Single) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByRef arg As Double) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#206", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Cdecl)> _
    Public Function viSScanf(ByVal vi As Integer, ByVal buffer As String, ByVal readFmt As String, ByRef arg As Byte) As Integer
    End Function
#End Region

#End Region

#Region " - Memory I/O Operations -------------------------------------------------"

    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#273", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viIn8(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByRef val8 As Byte) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#274", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viOut8(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal val8 As Byte) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#261", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viIn16(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByRef val16 As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#262", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viOut16(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal val16 As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#281", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viIn32(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByRef val32 As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#282", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viOut32(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal val32 As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#283", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveIn8(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal length As Integer, ByVal buf8 As Byte()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#284", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveOut8(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal length As Integer, ByVal buf8 As Byte()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#285", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveIn16(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal length As Integer, ByVal buf16 As Short()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#286", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveOut16(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal length As Integer, ByVal buf16 As Short()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#287", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveIn32(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal length As Integer, ByVal buf32 As Integer()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#288", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveOut32(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal length As Integer, ByVal buf32 As Integer()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#200", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMove(ByVal vi As Integer, ByVal srcSpace As Short, ByVal srcOffset As Integer, ByVal srcWidth As Short, ByVal destSpace As Short, ByVal destOffset As Integer, ByVal destWidth As Short, ByVal srcLength As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#201", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveAsync(ByVal vi As Integer, ByVal srcSpace As Short, ByVal srcOffset As Integer, ByVal srcWidth As Short, ByVal destSpace As Short, ByVal destOffset As Integer, ByVal destWidth As Short, ByVal srcLength As Integer, ByRef jobId As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#263", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMapAddress(ByVal vi As Integer, ByVal mapSpace As Short, ByVal mapOffset As Integer, ByVal mapSize As Integer, ByVal accMode As Short, ByVal suggested As Integer, ByRef address As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#264", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viUnmapAddress(ByVal vi As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#275", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Sub viPeek8(ByVal vi As Integer, ByVal address As Integer, ByRef val8 As Byte)
    End Sub
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#276", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Sub viPoke8(ByVal vi As Integer, ByVal address As Integer, ByVal val8 As Byte)
    End Sub
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#265", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Sub viPeek16(ByVal vi As Integer, ByVal address As Integer, ByRef val16 As Short)
    End Sub
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#266", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Sub viPoke16(ByVal vi As Integer, ByVal address As Integer, ByVal val16 As Short)
    End Sub
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#289", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Sub viPeek32(ByVal vi As Integer, ByVal address As Integer, ByRef val32 As Integer)
    End Sub
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#290", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Sub viPoke32(ByVal vi As Integer, ByVal address As Integer, ByVal val32 As Integer)
    End Sub

#Region "64-bit Extension Functions"
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#220", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viIn64(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByRef val64 As Long) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#221", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viOut64(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal val64 As Long) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#222", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viIn8Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByRef val8 As Byte) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#223", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viOut8Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal val8 As Byte) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#224", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viIn16Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByRef val16 As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#225", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viOut16Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal val16 As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#226", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viIn32Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByRef val32 As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#227", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viOut32Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal val32 As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#228", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viIn64Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByRef val64 As Long) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#229", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viOut64Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal val64 As Long) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#230", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveIn64(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal length As Integer, ByVal buf64 As Long()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#231", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveOut64(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Integer, ByVal length As Integer, ByVal buf64 As Long()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#232", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveIn8Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal length As Integer, ByVal buf8 As Byte()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#233", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveOut8Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal length As Integer, ByVal buf8 As Byte()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#234", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveIn16Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal length As Integer, ByVal buf16 As Short()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#235", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveOut16Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal length As Integer, ByVal buf16 As Short()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#236", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveIn32Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal length As Integer, ByVal buf32 As Integer()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#237", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveOut32Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal length As Integer, ByVal buf32 As Integer()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#238", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveIn64Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal length As Integer, ByVal buf64 As Long()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#239", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveOut64Ex(ByVal vi As Integer, ByVal accSpace As Short, ByVal offset As Long, ByVal length As Integer, ByVal buf64 As Long()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#240", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveEx(ByVal vi As Integer, ByVal srcSpace As Short, ByVal srcOffset As Long, ByVal srcWidth As Short, ByVal destSpace As Short, ByVal destOffset As Long, ByVal destWidth As Short, ByVal srcLength As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#241", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMoveAsyncEx(ByVal vi As Integer, ByVal srcSpace As Short, ByVal srcOffset As Long, ByVal srcWidth As Short, ByVal destSpace As Short, ByVal destOffset As Long, ByVal destWidth As Short, ByVal srcLength As Integer, ByRef jobId As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#242", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMapAddressEx(ByVal vi As Integer, ByVal mapSpace As Short, ByVal mapOffset As Long, ByVal mapSize As Integer, ByVal accMode As Short, ByVal suggested As Integer, ByRef address As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#243", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMemAllocEx(ByVal vi As Integer, ByVal memSize As Integer, ByRef offset As Long) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#244", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMemFreeEx(ByVal vi As Integer, ByVal offset As Long) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#245", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Sub viPeek64(ByVal vi As Integer, ByVal address As Integer, ByRef val64 As Long)
    End Sub
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#246", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Sub viPoke64(ByVal vi As Integer, ByVal address As Integer, ByVal val64 As Long)
    End Sub
#End Region
#End Region

#Region " - Shared Memory Operations ----------------------------------------------"

    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#291", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMemAlloc(ByVal vi As Integer, ByVal memSize As Integer, ByRef offset As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#292", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMemFree(ByVal vi As Integer, ByVal offset As Integer) As Integer
    End Function
#End Region

#Region " - Interface Specific Operations -----------------------------------------"

    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#208", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viGpibControlREN(ByVal vi As Integer, ByVal mode As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#210", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viGpibControlATN(ByVal vi As Integer, ByVal mode As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#211", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viGpibSendIFC(ByVal vi As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#212", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viGpibCommand(ByVal vi As Integer, ByVal buffer As String, ByVal count As Integer, ByRef retCount As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#213", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viGpibPassControl(ByVal vi As Integer, ByVal primAddr As Short, ByVal secAddr As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#209", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viVxiCommandQuery(ByVal vi As Integer, ByVal mode As Short, ByVal devCmd As Integer, ByRef devResponse As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#214", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viAssertUtilSignal(ByVal vi As Integer, ByVal line As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#215", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viAssertIntrSignal(ByVal vi As Integer, ByVal mode As Short, ByVal statusID As Integer) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#216", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viMapTrigger(ByVal vi As Integer, ByVal trigSrc As Short, ByVal trigDest As Short, ByVal mode As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#217", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viUnmapTrigger(ByVal vi As Integer, ByVal trigSrc As Short, ByVal trigDest As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#293", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viUsbControlOut(ByVal vi As Integer, ByVal bmRequestType As Short, ByVal bRequest As Short, ByVal wValue As Short, ByVal wIndex As Short, ByVal wLength As Short, ByVal buf As Byte()) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#294", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viUsbControlIn(ByVal vi As Integer, ByVal bmRequestType As Short, ByVal bRequest As Short, ByVal wValue As Short, ByVal wIndex As Short, ByVal wLength As Short, ByVal buf As Byte(), ByRef retCnt As Short) As Integer
    End Function
    <DllImportAttribute("AGVISA32.DLL", EntryPoint:="#295", ExactSpelling:=True, CharSet:=CharSet.Ansi, SetLastError:=True, CallingConvention:=CallingConvention.Winapi)> _
    Public Function viPxiReserveTriggers(ByVal vi As Integer, ByVal cnt As Short, ByVal trigBusses As Short(), ByVal trigLines As Short(), ByRef failureIndex As Short) As Integer
    End Function
#End Region

#Region " - Constants -------------------------------------------------------------"

#Region " - Attributes ------------------------------------------------------------"
    Public Const VI_ATTR_RSRC_CLASS As Integer = &HBFFF0001
    Public Const VI_ATTR_RSRC_NAME As Integer = &HBFFF0002
    Public Const VI_ATTR_RSRC_IMPL_VERSION As Integer = &H3FFF0003
    Public Const VI_ATTR_RSRC_LOCK_STATE As Integer = &H3FFF0004
    Public Const VI_ATTR_MAX_QUEUE_LENGTH As Integer = &H3FFF0005
    Public Const VI_ATTR_USER_DATA_32 As Integer = &H3FFF0007
    Public Const VI_ATTR_FDC_CHNL As Integer = &H3FFF000D
    Public Const VI_ATTR_FDC_MODE As Integer = &H3FFF000F
    Public Const VI_ATTR_FDC_GEN_SIGNAL_EN As Integer = &H3FFF0011
    Public Const VI_ATTR_FDC_USE_PAIR As Integer = &H3FFF0013
    Public Const VI_ATTR_SEND_END_EN As Integer = &H3FFF0016
    Public Const VI_ATTR_TERMCHAR As Integer = &H3FFF0018
    Public Const VI_ATTR_TMO_VALUE As Integer = &H3FFF001A
    Public Const VI_ATTR_GPIB_READDR_EN As Integer = &H3FFF001B
    Public Const VI_ATTR_IO_PROT As Integer = &H3FFF001C
    Public Const VI_ATTR_DMA_ALLOW_EN As Integer = &H3FFF001E
    Public Const VI_ATTR_ASRL_BAUD As Integer = &H3FFF0021
    Public Const VI_ATTR_ASRL_DATA_BITS As Integer = &H3FFF0022
    Public Const VI_ATTR_ASRL_PARITY As Integer = &H3FFF0023
    Public Const VI_ATTR_ASRL_STOP_BITS As Integer = &H3FFF0024
    Public Const VI_ATTR_ASRL_FLOW_CNTRL As Integer = &H3FFF0025
    Public Const VI_ATTR_RD_BUF_OPER_MODE As Integer = &H3FFF002A
    Public Const VI_ATTR_RD_BUF_SIZE As Integer = &H3FFF002B
    Public Const VI_ATTR_WR_BUF_OPER_MODE As Integer = &H3FFF002D
    Public Const VI_ATTR_WR_BUF_SIZE As Integer = &H3FFF002E
    Public Const VI_ATTR_SUPPRESS_END_EN As Integer = &H3FFF0036
    Public Const VI_ATTR_TERMCHAR_EN As Integer = &H3FFF0038
    Public Const VI_ATTR_DEST_ACCESS_PRIV As Integer = &H3FFF0039
    Public Const VI_ATTR_DEST_BYTE_ORDER As Integer = &H3FFF003A
    Public Const VI_ATTR_SRC_ACCESS_PRIV As Integer = &H3FFF003C
    Public Const VI_ATTR_SRC_BYTE_ORDER As Integer = &H3FFF003D
    Public Const VI_ATTR_SRC_INCREMENT As Integer = &H3FFF0040
    Public Const VI_ATTR_DEST_INCREMENT As Integer = &H3FFF0041
    Public Const VI_ATTR_WIN_ACCESS_PRIV As Integer = &H3FFF0045
    Public Const VI_ATTR_WIN_BYTE_ORDER As Integer = &H3FFF0047
    Public Const VI_ATTR_GPIB_ATN_STATE As Integer = &H3FFF0057
    Public Const VI_ATTR_GPIB_ADDR_STATE As Integer = &H3FFF005C
    Public Const VI_ATTR_GPIB_CIC_STATE As Integer = &H3FFF005E
    Public Const VI_ATTR_GPIB_NDAC_STATE As Integer = &H3FFF0062
    Public Const VI_ATTR_GPIB_SRQ_STATE As Integer = &H3FFF0067
    Public Const VI_ATTR_GPIB_SYS_CNTRL_STATE As Integer = &H3FFF0068
    Public Const VI_ATTR_GPIB_HS488_CBL_LEN As Integer = &H3FFF0069
    Public Const VI_ATTR_CMDR_LA As Integer = &H3FFF006B
    Public Const VI_ATTR_VXI_DEV_CLASS As Integer = &H3FFF006C
    Public Const VI_ATTR_MAINFRAME_LA As Integer = &H3FFF0070
    Public Const VI_ATTR_MANF_NAME As Integer = &HBFFF0072
    Public Const VI_ATTR_MODEL_NAME As Integer = &HBFFF0077
    Public Const VI_ATTR_VXI_VME_INTR_STATUS As Integer = &H3FFF008B
    Public Const VI_ATTR_VXI_TRIG_STATUS As Integer = &H3FFF008D
    Public Const VI_ATTR_VXI_VME_SYSFAIL_STATE As Integer = &H3FFF0094
    Public Const VI_ATTR_WIN_BASE_ADDR_32 As Integer = &H3FFF0098
    Public Const VI_ATTR_WIN_SIZE_32 As Integer = &H3FFF009A
    Public Const VI_ATTR_ASRL_AVAIL_NUM As Integer = &H3FFF00AC
    Public Const VI_ATTR_MEM_BASE_32 As Integer = &H3FFF00AD
    Public Const VI_ATTR_ASRL_CTS_STATE As Integer = &H3FFF00AE
    Public Const VI_ATTR_ASRL_DCD_STATE As Integer = &H3FFF00AF
    Public Const VI_ATTR_ASRL_DSR_STATE As Integer = &H3FFF00B1
    Public Const VI_ATTR_ASRL_DTR_STATE As Integer = &H3FFF00B2
    Public Const VI_ATTR_ASRL_END_IN As Integer = &H3FFF00B3
    Public Const VI_ATTR_ASRL_END_OUT As Integer = &H3FFF00B4
    Public Const VI_ATTR_ASRL_REPLACE_CHAR As Integer = &H3FFF00BE
    Public Const VI_ATTR_ASRL_RI_STATE As Integer = &H3FFF00BF
    Public Const VI_ATTR_ASRL_RTS_STATE As Integer = &H3FFF00C0
    Public Const VI_ATTR_ASRL_XON_CHAR As Integer = &H3FFF00C1
    Public Const VI_ATTR_ASRL_XOFF_CHAR As Integer = &H3FFF00C2
    Public Const VI_ATTR_WIN_ACCESS As Integer = &H3FFF00C3
    Public Const VI_ATTR_RM_SESSION As Integer = &H3FFF00C4
    Public Const VI_ATTR_VXI_LA As Integer = &H3FFF00D5
    Public Const VI_ATTR_MANF_ID As Integer = &H3FFF00D9
    Public Const VI_ATTR_MEM_SIZE_32 As Integer = &H3FFF00DD
    Public Const VI_ATTR_MEM_SPACE As Integer = &H3FFF00DE
    Public Const VI_ATTR_MODEL_CODE As Integer = &H3FFF00DF
    Public Const VI_ATTR_SLOT As Integer = &H3FFF00E8
    Public Const VI_ATTR_INTF_INST_NAME As Integer = &HBFFF00E9
    Public Const VI_ATTR_IMMEDIATE_SERV As Integer = &H3FFF0100
    Public Const VI_ATTR_INTF_PARENT_NUM As Integer = &H3FFF0101
    Public Const VI_ATTR_RSRC_SPEC_VERSION As Integer = &H3FFF0170
    Public Const VI_ATTR_INTF_TYPE As Integer = &H3FFF0171
    Public Const VI_ATTR_GPIB_PRIMARY_ADDR As Integer = &H3FFF0172
    Public Const VI_ATTR_GPIB_SECONDARY_ADDR As Integer = &H3FFF0173
    Public Const VI_ATTR_RSRC_MANF_NAME As Integer = &HBFFF0174
    Public Const VI_ATTR_RSRC_MANF_ID As Integer = &H3FFF0175
    Public Const VI_ATTR_INTF_NUM As Integer = &H3FFF0176
    Public Const VI_ATTR_TRIG_ID As Integer = &H3FFF0177
    Public Const VI_ATTR_GPIB_REN_STATE As Integer = &H3FFF0181
    Public Const VI_ATTR_GPIB_UNADDR_EN As Integer = &H3FFF0184
    Public Const VI_ATTR_DEV_STATUS_BYTE As Integer = &H3FFF0189
    Public Const VI_ATTR_FILE_APPEND_EN As Integer = &H3FFF0192
    Public Const VI_ATTR_VXI_TRIG_SUPPORT As Integer = &H3FFF0194
    Public Const VI_ATTR_TCPIP_ADDR As Integer = &HBFFF0195
    Public Const VI_ATTR_TCPIP_HOSTNAME As Integer = &HBFFF0196
    Public Const VI_ATTR_TCPIP_PORT As Integer = &H3FFF0197
    Public Const VI_ATTR_TCPIP_DEVICE_NAME As Integer = &HBFFF0199
    Public Const VI_ATTR_TCPIP_NODELAY As Integer = &H3FFF019A
    Public Const VI_ATTR_TCPIP_KEEPALIVE As Integer = &H3FFF019B
    Public Const VI_ATTR_4882_COMPLIANT As Integer = &H3FFF019F
    Public Const VI_ATTR_USB_SERIAL_NUM As Integer = &HBFFF01A0
    Public Const VI_ATTR_USB_INTFC_NUM As Integer = &H3FFF01A1
    Public Const VI_ATTR_USB_PROTOCOL As Integer = &H3FFF01A7
    Public Const VI_ATTR_USB_MAX_INTR_SIZE As Integer = &H3FFF01AF
    Public Const VI_ATTR_PXI_DEV_NUM As Integer = &H3FFF0201
    Public Const VI_ATTR_PXI_FUNC_NUM As Integer = &H3FFF0202
    Public Const VI_ATTR_PXI_BUS_NUM As Integer = &H3FFF0205
    Public Const VI_ATTR_PXI_CHASSIS As Integer = &H3FFF0206
    Public Const VI_ATTR_PXI_SLOTPATH As Integer = &HBFFF0207
    Public Const VI_ATTR_PXI_SLOT_LBUS_LEFT As Integer = &H3FFF0208
    Public Const VI_ATTR_PXI_SLOT_LBUS_RIGHT As Integer = &H3FFF0209
    Public Const VI_ATTR_PXI_TRIG_BUS As Integer = &H3FFF020A
    Public Const VI_ATTR_PXI_STAR_TRIG_BUS As Integer = &H3FFF020B
    Public Const VI_ATTR_PXI_STAR_TRIG_LINE As Integer = &H3FFF020C
    Public Const VI_ATTR_PXI_SRC_TRIG_BUS As Integer = &H3FFF020D
    Public Const VI_ATTR_PXI_DEST_TRIG_BUS As Integer = &H3FFF020E
    Public Const VI_ATTR_PXI_MEM_TYPE_BAR0 As Integer = &H3FFF0211
    Public Const VI_ATTR_PXI_MEM_TYPE_BAR1 As Integer = &H3FFF0212
    Public Const VI_ATTR_PXI_MEM_TYPE_BAR2 As Integer = &H3FFF0213
    Public Const VI_ATTR_PXI_MEM_TYPE_BAR3 As Integer = &H3FFF0214
    Public Const VI_ATTR_PXI_MEM_TYPE_BAR4 As Integer = &H3FFF0215
    Public Const VI_ATTR_PXI_MEM_TYPE_BAR5 As Integer = &H3FFF0216
    Public Const VI_ATTR_PXI_MEM_BASE_BAR0_32 As Integer = &H3FFF0221
    Public Const VI_ATTR_PXI_MEM_BASE_BAR1_32 As Integer = &H3FFF0222
    Public Const VI_ATTR_PXI_MEM_BASE_BAR2_32 As Integer = &H3FFF0223
    Public Const VI_ATTR_PXI_MEM_BASE_BAR3_32 As Integer = &H3FFF0224
    Public Const VI_ATTR_PXI_MEM_BASE_BAR4_32 As Integer = &H3FFF0225
    Public Const VI_ATTR_PXI_MEM_BASE_BAR5_32 As Integer = &H3FFF0226
    Public Const VI_ATTR_PXI_MEM_BASE_BAR0_64 As Integer = &H3FFF0228
    Public Const VI_ATTR_PXI_MEM_BASE_BAR1_64 As Integer = &H3FFF0229
    Public Const VI_ATTR_PXI_MEM_BASE_BAR2_64 As Integer = &H3FFF022A
    Public Const VI_ATTR_PXI_MEM_BASE_BAR3_64 As Integer = &H3FFF022B
    Public Const VI_ATTR_PXI_MEM_BASE_BAR4_64 As Integer = &H3FFF022C
    Public Const VI_ATTR_PXI_MEM_BASE_BAR5_64 As Integer = &H3FFF022D
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR0_32 As Integer = &H3FFF0231
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR1_32 As Integer = &H3FFF0232
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR2_32 As Integer = &H3FFF0233
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR3_32 As Integer = &H3FFF0234
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR4_32 As Integer = &H3FFF0235
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR5_32 As Integer = &H3FFF0236
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR0_64 As Integer = &H3FFF0238
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR1_64 As Integer = &H3FFF0239
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR2_64 As Integer = &H3FFF023A
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR3_64 As Integer = &H3FFF023B
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR4_64 As Integer = &H3FFF023C
    Public Const VI_ATTR_PXI_MEM_SIZE_BAR5_64 As Integer = &H3FFF023D
    Public Const VI_ATTR_PXI_IS_EXPRESS As Integer = &H3FFF0240
    Public Const VI_ATTR_PXI_SLOT_LWIDTH As Integer = &H3FFF0241
    Public Const VI_ATTR_PXI_MAX_LWIDTH As Integer = &H3FFF0242
    Public Const VI_ATTR_PXI_ACTUAL_LWIDTH As Integer = &H3FFF0243
    Public Const VI_ATTR_PXI_DSTAR_BUS As Integer = &H3FFF0244
    Public Const VI_ATTR_PXI_DSTAR_SET As Integer = &H3FFF0245
    Public Const VI_ATTR_PXI_ALLOW_WRITE_COMBINE As Integer = &H3FFF0246
    Public Const VI_ATTR_TCPIP_HISLIP_OVERLAP_EN As Integer = &H3FFF0300
    Public Const VI_ATTR_TCPIP_HISLIP_VERSION As Integer = &H3FFF0301
    Public Const VI_ATTR_TCPIP_HISLIP_MAX_MESSAGE_KB As Integer = &H3FFF0302
    Public Const VI_ATTR_TCPIP_IS_HISLIP As Integer = &H3FFF0303
    Public Const VI_ATTR_JOB_ID As Integer = &H3FFF4006
    Public Const VI_ATTR_EVENT_TYPE As Integer = &H3FFF4010
    Public Const VI_ATTR_SIGP_STATUS_ID As Integer = &H3FFF4011
    Public Const VI_ATTR_RECV_TRIG_ID As Integer = &H3FFF4012
    Public Const VI_ATTR_INTR_STATUS_ID As Integer = &H3FFF4023
    Public Const VI_ATTR_STATUS As Integer = &H3FFF4025
    Public Const VI_ATTR_RET_COUNT_32 As Integer = &H3FFF4026
    Public Const VI_ATTR_BUFFER As Integer = &H3FFF4027
    Public Const VI_ATTR_RECV_INTR_LEVEL As Integer = &H3FFF4041
    Public Const VI_ATTR_OPER_NAME As Integer = &HBFFF4042
    Public Const VI_ATTR_GPIB_RECV_CIC_STATE As Integer = &H3FFF4193
    Public Const VI_ATTR_RECV_TCPIP_ADDR As Integer = &HBFFF4198
    Public Const VI_ATTR_USB_RECV_INTR_SIZE As Integer = &H3FFF41B0
    Public Const VI_ATTR_USB_RECV_INTR_DATA As Integer = &HBFFF41B1
    Public Const VI_ATTR_PXI_RECV_INTR_SEQ As Integer = &H3FFF4240
    Public Const VI_ATTR_PXI_RECV_INTR_DATA As Integer = &H3FFF4241

    Public Const VI_ATTR_WIN_BASE_ADDR_64 As Integer = &H3FFF009B
    Public Const VI_ATTR_WIN_SIZE_64 As Integer = &H3FFF009C
    Public Const VI_ATTR_MEM_BASE_64 As Integer = &H3FFF00D0
    Public Const VI_ATTR_MEM_SIZE_64 As Integer = &H3FFF00D1

    ' In VISA C, these are only defined in 64-bit applications
    Public Const VI_ATTR_USER_DATA_64 As Integer = &H3FFF000A
    Public Const VI_ATTR_RET_COUNT_64 As Integer = &H3FFF4028
#End Region

#Region "- Bitness dependent attributes -------------------------------------------"
    Private Function Is64bit() As Boolean
        Return (IntPtr.Size = 8)
    End Function
    Public ReadOnly Property VI_ATTR_USER_DATA As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_USER_DATA_64 Else Return VI_ATTR_USER_DATA_32
        End Get
    End Property

    Public ReadOnly Property VI_ATTR_RET_COUNT As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_RET_COUNT_64 Else Return VI_ATTR_RET_COUNT_32
        End Get
    End Property

    Public ReadOnly Property VI_ATTR_WIN_BASE_ADDR As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_WIN_BASE_ADDR_64 Else Return VI_ATTR_WIN_BASE_ADDR_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_WIN_SIZE As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_WIN_SIZE_64 Else Return VI_ATTR_WIN_SIZE_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_MEM_BASE As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_MEM_BASE_64 Else Return VI_ATTR_MEM_BASE_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_MEM_SIZE As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_MEM_SIZE_64 Else Return VI_ATTR_MEM_SIZE_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_BASE_BAR0 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_BASE_BAR0_64 Else Return VI_ATTR_PXI_MEM_BASE_BAR0_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_BASE_BAR1 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_BASE_BAR1_64 Else Return VI_ATTR_PXI_MEM_BASE_BAR1_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_BASE_BAR2 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_BASE_BAR2_64 Else Return VI_ATTR_PXI_MEM_BASE_BAR2_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_BASE_BAR3 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_BASE_BAR3_64 Else Return VI_ATTR_PXI_MEM_BASE_BAR3_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_BASE_BAR4 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_BASE_BAR4_64 Else Return VI_ATTR_PXI_MEM_BASE_BAR4_32

        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_BASE_BAR5 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_BASE_BAR5_64 Else Return VI_ATTR_PXI_MEM_BASE_BAR5_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_SIZE_BAR0 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_SIZE_BAR0_64 Else Return VI_ATTR_PXI_MEM_SIZE_BAR0_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_SIZE_BAR1 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_SIZE_BAR1_64 Else Return VI_ATTR_PXI_MEM_SIZE_BAR1_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_SIZE_BAR2 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_SIZE_BAR2_64 Else Return VI_ATTR_PXI_MEM_SIZE_BAR2_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_SIZE_BAR3 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_SIZE_BAR3_64 Else Return VI_ATTR_PXI_MEM_SIZE_BAR3_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_SIZE_BAR4 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_SIZE_BAR4_64 Else Return VI_ATTR_PXI_MEM_SIZE_BAR4_32
        End Get
    End Property
    Public ReadOnly Property VI_ATTR_PXI_MEM_SIZE_BAR5 As Integer
        Get
            If (Is64bit()) Then Return VI_ATTR_PXI_MEM_SIZE_BAR5_64 Else Return VI_ATTR_PXI_MEM_SIZE_BAR5_32
        End Get
    End Property
#End Region

#Region " - Event Types -----------------------------------------------------------"

    Public Const VI_EVENT_IO_COMPLETION As Integer = &H3FFF2009
    Public Const VI_EVENT_TRIG As Integer = &HBFFF200A
    Public Const VI_EVENT_SERVICE_REQ As Integer = &H3FFF200B
    Public Const VI_EVENT_CLEAR As Integer = &H3FFF200D
    Public Const VI_EVENT_EXCEPTION As Integer = &HBFFF200E
    Public Const VI_EVENT_GPIB_CIC As Integer = &H3FFF2012
    Public Const VI_EVENT_GPIB_TALK As Integer = &H3FFF2013
    Public Const VI_EVENT_GPIB_LISTEN As Integer = &H3FFF2014
    Public Const VI_EVENT_VXI_VME_SYSFAIL As Integer = &H3FFF201D
    Public Const VI_EVENT_VXI_VME_SYSRESET As Integer = &H3FFF201E
    Public Const VI_EVENT_VXI_SIGP As Integer = &H3FFF2020
    Public Const VI_EVENT_VXI_VME_INTR As Integer = &HBFFF2021
    Public Const VI_EVENT_PXI_INTR As Integer = &H3FFF2022
    Public Const VI_EVENT_TCPIP_CONNECT As Integer = &H3FFF2036
    Public Const VI_EVENT_USB_INTR As Integer = &H3FFF2037

    Public Const VI_ALL_ENABLED_EVENTS As Integer = &H3FFF7FFF
#End Region

#Region " - Completion and Error Codes --------------------------------------------"

    Public Const VI_SUCCESS As Integer = &H0
    Public Const VI_SUCCESS_EVENT_EN As Integer = &H3FFF0002
    Public Const VI_SUCCESS_EVENT_DIS As Integer = &H3FFF0003
    Public Const VI_SUCCESS_QUEUE_EMPTY As Integer = &H3FFF0004
    Public Const VI_SUCCESS_TERM_CHAR As Integer = &H3FFF0005
    Public Const VI_SUCCESS_MAX_CNT As Integer = &H3FFF0006
    Public Const VI_SUCCESS_DEV_NPRESENT As Integer = &H3FFF007D
    Public Const VI_SUCCESS_TRIG_MAPPED As Integer = &H3FFF007E
    Public Const VI_SUCCESS_QUEUE_NEMPTY As Integer = &H3FFF0080
    Public Const VI_SUCCESS_NCHAIN As Integer = &H3FFF0098
    Public Const VI_SUCCESS_NESTED_SHARED As Integer = &H3FFF0099
    Public Const VI_SUCCESS_NESTED_EXCLUSIVE As Integer = &H3FFF009A
    Public Const VI_SUCCESS_SYNC As Integer = &H3FFF009B

    Public Const VI_WARN_QUEUE_OVERFLOW As Integer = &H3FFF000C
    Public Const VI_WARN_CONFIG_NLOADED As Integer = &H3FFF0077
    Public Const VI_WARN_NULL_OBJECT As Integer = &H3FFF0082
    Public Const VI_WARN_NSUP_ATTR_STATE As Integer = &H3FFF0084
    Public Const VI_WARN_UNKNOWN_STATUS As Integer = &H3FFF0085
    Public Const VI_WARN_NSUP_BUF As Integer = &H3FFF0088
    Public Const VI_WARN_EXT_FUNC_NIMPL As Integer = &H3FFF00A9

    Public Const VI_ERROR_SYSTEM_ERROR As Integer = &HBFFF0000
    Public Const VI_ERROR_INV_OBJECT As Integer = &HBFFF000E
    Public Const VI_ERROR_RSRC_LOCKED As Integer = &HBFFF000F
    Public Const VI_ERROR_INV_EXPR As Integer = &HBFFF0010
    Public Const VI_ERROR_RSRC_NFOUND As Integer = &HBFFF0011
    Public Const VI_ERROR_INV_RSRC_NAME As Integer = &HBFFF0012
    Public Const VI_ERROR_INV_ACC_MODE As Integer = &HBFFF0013
    Public Const VI_ERROR_TMO As Integer = &HBFFF0015
    Public Const VI_ERROR_CLOSING_FAILED As Integer = &HBFFF0016
    Public Const VI_ERROR_INV_DEGREE As Integer = &HBFFF001B
    Public Const VI_ERROR_INV_JOB_ID As Integer = &HBFFF001C
    Public Const VI_ERROR_NSUP_ATTR As Integer = &HBFFF001D
    Public Const VI_ERROR_NSUP_ATTR_STATE As Integer = &HBFFF001E
    Public Const VI_ERROR_ATTR_READONLY As Integer = &HBFFF001F
    Public Const VI_ERROR_INV_LOCK_TYPE As Integer = &HBFFF0020
    Public Const VI_ERROR_INV_ACCESS_KEY As Integer = &HBFFF0021
    Public Const VI_ERROR_INV_EVENT As Integer = &HBFFF0026
    Public Const VI_ERROR_INV_MECH As Integer = &HBFFF0027
    Public Const VI_ERROR_HNDLR_NINSTALLED As Integer = &HBFFF0028
    Public Const VI_ERROR_INV_HNDLR_REF As Integer = &HBFFF0029
    Public Const VI_ERROR_INV_CONTEXT As Integer = &HBFFF002A
    Public Const VI_ERROR_QUEUE_OVERFLOW As Integer = &HBFFF00D
    Public Const VI_ERROR_NENABLED As Integer = &HBFFF002F
    Public Const VI_ERROR_ABORT As Integer = &HBFFF0030
    Public Const VI_ERROR_RAW_WR_PROT_VIOL As Integer = &HBFFF0034
    Public Const VI_ERROR_RAW_RD_PROT_VIOL As Integer = &HBFFF0035
    Public Const VI_ERROR_OUTP_PROT_VIOL As Integer = &HBFFF0036
    Public Const VI_ERROR_INP_PROT_VIOL As Integer = &HBFFF0037
    Public Const VI_ERROR_BERR As Integer = &HBFFF0038
    Public Const VI_ERROR_IN_PROGRESS As Integer = &HBFFF0039
    Public Const VI_ERROR_INV_SETUP As Integer = &HBFFF003A
    Public Const VI_ERROR_QUEUE_ERROR As Integer = &HBFFF003B
    Public Const VI_ERROR_ALLOC As Integer = &HBFFF003C
    Public Const VI_ERROR_INV_MASK As Integer = &HBFFF003D
    Public Const VI_ERROR_IO As Integer = &HBFFF003E
    Public Const VI_ERROR_INV_FMT As Integer = &HBFFF003F
    Public Const VI_ERROR_NSUP_FMT As Integer = &HBFFF0041
    Public Const VI_ERROR_LINE_IN_USE As Integer = &HBFFF0042
    Public Const VI_ERROR_NSUP_MODE As Integer = &HBFFF0046
    Public Const VI_ERROR_SRQ_NOCCURRED As Integer = &HBFFF004A
    Public Const VI_ERROR_INV_SPACE As Integer = &HBFFF004E
    Public Const VI_ERROR_INV_OFFSET As Integer = &HBFFF0051
    Public Const VI_ERROR_INV_WIDTH As Integer = &HBFFF0052
    Public Const VI_ERROR_NSUP_OFFSET As Integer = &HBFFF0054
    Public Const VI_ERROR_NSUP_VAR_WIDTH As Integer = &HBFFF0055
    Public Const VI_ERROR_WINDOW_NMAPPED As Integer = &HBFFF0057
    Public Const VI_ERROR_RESP_PENDING As Integer = &HBFFF0059
    Public Const VI_ERROR_NLISTENERS As Integer = &HBFFF005F
    Public Const VI_ERROR_NCIC As Integer = &HBFFF0060
    Public Const VI_ERROR_NSYS_CNTLR As Integer = &HBFFF0061
    Public Const VI_ERROR_NSUP_OPER As Integer = &HBFFF0067
    Public Const VI_ERROR_INTR_PENDING As Integer = &HBFFF0068
    Public Const VI_ERROR_ASRL_PARITY As Integer = &HBFFF006A
    Public Const VI_ERROR_ASRL_FRAMING As Integer = &HBFFF006B
    Public Const VI_ERROR_ASRL_OVERRUN As Integer = &HBFFF006C
    Public Const VI_ERROR_TRIG_NMAPPED As Integer = &HBFFF006E
    Public Const VI_ERROR_NSUP_ALIGN_OFFSET As Integer = &HBFFF0070
    Public Const VI_ERROR_USER_BUF As Integer = &HBFFF0071
    Public Const VI_ERROR_RSRC_BUSY As Integer = &HBFFF0072
    Public Const VI_ERROR_NSUP_WIDTH As Integer = &HBFFF0076
    Public Const VI_ERROR_INV_PARAMETER As Integer = &HBFFF0078
    Public Const VI_ERROR_INV_PROT As Integer = &HBFFF0079
    Public Const VI_ERROR_INV_SIZE As Integer = &HBFFF007B
    Public Const VI_ERROR_WINDOW_MAPPED As Integer = &HBFFF0080
    Public Const VI_ERROR_NIMPL_OPER As Integer = &HBFFF0081
    Public Const VI_ERROR_INV_LENGTH As Integer = &HBFFF0083
    Public Const VI_ERROR_INV_MODE As Integer = &HBFFF0091
    Public Const VI_ERROR_SESN_NLOCKED As Integer = &HBFFF009C
    Public Const VI_ERROR_MEM_NSHARED As Integer = &HBFFF009D
    Public Const VI_ERROR_LIBRARY_NFOUND As Integer = &HBFFF009E
    Public Const VI_ERROR_NSUP_INTR As Integer = &HBFFF009F
    Public Const VI_ERROR_INV_LINE As Integer = &HBFFF00A0
    Public Const VI_ERROR_FILE_ACCESS As Integer = &HBFFF00A1
    Public Const VI_ERROR_FILE_IO As Integer = &HBFFF00A2
    Public Const VI_ERROR_NSUP_LINE As Integer = &HBFFF00A3
    Public Const VI_ERROR_NSUP_MECH As Integer = &HBFFF00A4
    Public Const VI_ERROR_INTF_NUM_NCONFIG As Integer = &HBFFF00A5
    Public Const VI_ERROR_CONN_LOST As Integer = &HBFFF00A6
    Public Const VI_ERROR_MACHINE_NAVAIL As Integer = &HBFFF00A7
    Public Const VI_ERROR_NPERMISSION As Integer = &HBFFF00A8
#End Region

#Region " - Other VISA Definitions ------------------------------------------------"

    Public Const VI_FIND_BUFLEN As Short = 256

    Public Const VI_NULL As Short = 0
    Public Const VI_TRUE As Short = 1
    Public Const VI_FALSE As Short = 0

    Public Const VI_INTF_GPIB As Short = 1
    Public Const VI_INTF_VXI As Short = 2
    Public Const VI_INTF_GPIB_VXI As Short = 3
    Public Const VI_INTF_ASRL As Short = 4
    Public Const VI_INTF_PXI As Short = 5
    Public Const VI_INTF_TCPIP As Short = 6
    Public Const VI_INTF_USB As Short = 7

    Public Const VI_PROT_NORMAL As Short = 1
    Public Const VI_PROT_FDC As Short = 2
    Public Const VI_PROT_HS488 As Short = 3
    Public Const VI_PROT_4882_STRS As Short = 4
    Public Const VI_PROT_USBTMC_VENDOR As Short = 5

    Public Const VI_FDC_NORMAL As Short = 1
    Public Const VI_FDC_STREAM As Short = 2

    Public Const VI_LOCAL_SPACE As Short = 0
    Public Const VI_A16_SPACE As Short = 1
    Public Const VI_A24_SPACE As Short = 2
    Public Const VI_A32_SPACE As Short = 3
    Public Const VI_A64_SPACE As Short = 4
    Public Const VI_PXI_ALLOC_SPACE As Short = 9
    Public Const VI_PXI_CFG_SPACE As Short = 10
    Public Const VI_PXI_BAR0_SPACE As Short = 11
    Public Const VI_PXI_BAR1_SPACE As Short = 12
    Public Const VI_PXI_BAR2_SPACE As Short = 13
    Public Const I_PXI_BAR3_SPACE As Short = 14
    Public Const VI_PXI_BAR4_SPACE As Short = 15
    Public Const VI_PXI_BAR5_SPACE As Short = 16
    Public Const VI_OPAQUE_SPACE As Short = &HFFFFS

    Public Const VI_UNKNOWN_LA As Short = -1
    Public Const VI_UNKNOWN_SLOT As Short = -1
    Public Const VI_UNKNOWN_LEVEL As Short = -1
    Public Const VI_UNKNOWN_CHASSIS As Short = -1

    Public Const VI_QUEUE As Short = 1
    Public Const VI_HNDLR As Short = 2
    Public Const VI_SUSPEND_HNDLR As Short = 4
    Public Const VI_ALL_MECH As Short = &HFFFFS
    Public Const VI_ANY_HNDLR As Short = 0

    Public Const VI_TRIG_ALL As Short = -2
    Public Const VI_TRIG_SW As Short = -1
    Public Const VI_TRIG_TTL0 As Short = 0
    Public Const VI_TRIG_TTL1 As Short = 1
    Public Const VI_TRIG_TTL2 As Short = 2
    Public Const VI_TRIG_TTL3 As Short = 3
    Public Const VI_TRIG_TTL4 As Short = 4
    Public Const VI_TRIG_TTL5 As Short = 5
    Public Const VI_TRIG_TTL6 As Short = 6
    Public Const VI_TRIG_TTL7 As Short = 7
    Public Const VI_TRIG_ECL0 As Short = 8
    Public Const VI_TRIG_ECL1 As Short = 9
    Public Const VI_TRIG_PANEL_IN As Short = 27
    Public Const VI_TRIG_PANEL_OUT As Short = 28

    Public Const VI_TRIG_PROT_DEFAULT As Short = 0
    Public Const VI_TRIG_PROT_ON As Short = 1
    Public Const VI_TRIG_PROT_OFF As Short = 2
    Public Const VI_TRIG_PROT_SYNC As Short = 5
    Public Const VI_TRIG_PROT_RESERVE As Short = 6
    Public Const VI_TRIG_PROT_UNRESERVE As Short = 7

    Public Const VI_READ_BUF As Short = 1
    Public Const VI_WRITE_BUF As Short = 2
    Public Const VI_READ_BUF_DISCARD As Short = 4
    Public Const VI_WRITE_BUF_DISCARD As Short = 8
    Public Const VI_IO_IN_BUF As Short = 16
    Public Const VI_IO_OUT_BUF As Short = 32
    Public Const VI_IO_IN_BUF_DISCARD As Short = 64
    Public Const VI_IO_OUT_BUF_DISCARD As Short = 128

    Public Const VI_FLUSH_ON_ACCESS As Short = 1
    Public Const VI_FLUSH_WHEN_FULL As Short = 2
    Public Const VI_FLUSH_DISABLE As Short = 3

    Public Const VI_NMAPPED As Short = 1
    Public Const VI_USE_OPERS As Short = 2
    Public Const VI_DEREF_ADDR As Short = 3
    Public Const VI_DEREF_ADDR_BYTE_SWAP As Short = 4

    Public Const VI_TMO_IMMEDIATE As Integer = &H0
    Public Const VI_TMO_INFINITE As Integer = &HFFFFFFFF

    Public Const VI_NO_LOCK As Short = 0
    Public Const VI_EXCLUSIVE_LOCK As Short = 1
    Public Const VI_SHARED_LOCK As Short = 2
    Public Const VI_LOAD_CONFIG As Short = 4

    Public Const VI_NO_SEC_ADDR As Short = &HFFFFS

    Public Const VI_ASRL_PAR_NONE As Short = 0
    Public Const VI_ASRL_PAR_ODD As Short = 1
    Public Const VI_ASRL_PAR_EVEN As Short = 2
    Public Const VI_ASRL_PAR_MARK As Short = 3
    Public Const VI_ASRL_PAR_SPACE As Short = 4

    Public Const VI_ASRL_STOP_ONE As Short = 10
    Public Const VI_ASRL_STOP_ONE5 As Short = 15
    Public Const VI_ASRL_STOP_TWO As Short = 20

    Public Const VI_ASRL_FLOW_NONE As Short = 0
    Public Const VI_ASRL_FLOW_XON_XOFF As Short = 1
    Public Const VI_ASRL_FLOW_RTS_CTS As Short = 2
    Public Const VI_ASRL_FLOW_DTR_DSR As Short = 4

    Public Const VI_ASRL_END_NONE As Short = 0
    Public Const VI_ASRL_END_LAST_BIT As Short = 1
    Public Const VI_ASRL_END_TERMCHAR As Short = 2
    Public Const VI_ASRL_END_BREAK As Short = 3

    Public Const VI_STATE_ASSERTED As Short = 1
    Public Const VI_STATE_UNASSERTED As Short = 0
    Public Const VI_STATE_UNKNOWN As Short = -1

    Public Const VI_BIG_ENDIAN As Short = 0
    Public Const VI_LITTLE_ENDIAN As Short = 1

    Public Const VI_DATA_PRIV As Short = 0
    Public Const VI_DATA_NPRIV As Short = 1
    Public Const VI_PROG_PRIV As Short = 2
    Public Const VI_PROG_NPRIV As Short = 3
    Public Const VI_BLCK_PRIV As Short = 4
    Public Const VI_BLCK_NPRIV As Short = 5
    Public Const VI_D64_PRIV As Short = 6
    Public Const VI_D64_NPRIV As Short = 7

    Public Const VI_WIDTH_8 As Short = 1
    Public Const VI_WIDTH_16 As Short = 2
    Public Const VI_WIDTH_32 As Short = 4
    Public Const VI_WIDTH_64 As Short = 8

    Public Const VI_GPIB_REN_DEASSERT As Short = 0
    Public Const VI_GPIB_REN_ASSERT As Short = 1
    Public Const VI_GPIB_REN_DEASSERT_GTL As Short = 2
    Public Const VI_GPIB_REN_ASSERT_ADDRESS As Short = 3
    Public Const VI_GPIB_REN_ASSERT_LLO As Short = 4
    Public Const VI_GPIB_REN_ASSERT_ADDRESS_LLO As Short = 5
    Public Const VI_GPIB_REN_ADDRESS_GTL As Short = 6

    Public Const VI_GPIB_ATN_DEASSERT As Short = 0
    Public Const VI_GPIB_ATN_ASSERT As Short = 1
    Public Const VI_GPIB_ATN_DEASSERT_HANDSHAKE As Short = 2
    Public Const VI_GPIB_ATN_ASSERT_IMMEDIATE As Short = 3

    Public Const VI_GPIB_HS488_DISABLED As Short = 0
    Public Const VI_GPIB_HS488_NIMPL As Short = -1

    Public Const VI_GPIB_UNADDRESSED As Short = 0
    Public Const VI_GPIB_TALKER As Short = 1
    Public Const VI_GPIB_LISTENER As Short = 2

    Public Const VI_VXI_CMD16 As Short = &H200S
    Public Const VI_VXI_CMD16_RESP16 As Short = &H202S
    Public Const VI_VXI_RESP16 As Short = &H2S
    Public Const VI_VXI_CMD32 As Short = &H400S
    Public Const VI_VXI_CMD32_RESP16 As Short = &H402S
    Public Const VI_VXI_CMD32_RESP32 As Short = &H404S
    Public Const VI_VXI_RESP32 As Short = &H4S

    Public Const VI_ASSERT_SIGNAL As Short = -1
    Public Const VI_ASSERT_USE_ASSIGNED As Short = 0
    Public Const VI_ASSERT_IRQ1 As Short = 1
    Public Const VI_ASSERT_IRQ2 As Short = 2
    Public Const VI_ASSERT_IRQ3 As Short = 3
    Public Const VI_ASSERT_IRQ4 As Short = 4
    Public Const VI_ASSERT_IRQ5 As Short = 5
    Public Const VI_ASSERT_IRQ6 As Short = 6
    Public Const VI_ASSERT_IRQ7 As Short = 7

    Public Const VI_UTIL_ASSERT_SYSRESET As Short = 1
    Public Const VI_UTIL_ASSERT_SYSFAIL As Short = 2
    Public Const VI_UTIL_DEASSERT_SYSFAIL As Short = 3

    Public Const VI_VXI_CLASS_MEMORY As Short = 0
    Public Const VI_VXI_CLASS_EXTENDED As Short = 1
    Public Const VI_VXI_CLASS_MESSAGE As Short = 2
    Public Const VI_VXI_CLASS_REGISTER As Short = 3
    Public Const VI_VXI_CLASS_OTHER As Short = 4
    Public Const VI_PXI_ADDR_NONE As Short = 0
    Public Const VI_PXI_ADDR_MEM As Short = 1
    Public Const VI_PXI_ADDR_IO As Short = 2
    Public Const VI_PXI_ADDR_CFG As Short = 3

    Public Const VI_TRIG_UNKNOWN As Short = -1
    Public Const VI_PXI_LBUS_UNKNOWN As Short = -1
    Public Const VI_PXI_LBUS_NONE As Short = 0
    Public Const VI_PXI_LBUS_STAR_TRIG_BUS_0 As Short = 1000
    Public Const VI_PXI_LBUS_STAR_TRIG_BUS_1 As Short = 1001
    Public Const VI_PXI_LBUS_STAR_TRIG_BUS_2 As Short = 1002
    Public Const VI_PXI_LBUS_STAR_TRIG_BUS_3 As Short = 1003
    Public Const VI_PXI_LBUS_STAR_TRIG_BUS_4 As Short = 1004
    Public Const VI_PXI_LBUS_STAR_TRIG_BUS_5 As Short = 1005
    Public Const VI_PXI_LBUS_STAR_TRIG_BUS_6 As Short = 1006
    Public Const VI_PXI_LBUS_STAR_TRIG_BUS_7 As Short = 1007
    Public Const VI_PXI_LBUS_STAR_TRIG_BUS_8 As Short = 1008
    Public Const VI_PXI_LBUS_STAR_TRIG_BUS_9 As Short = 1009
    Public Const VI_PXI_STAR_TRIG_CONTROLLER As Short = 1413
#End Region

#Region " - Backward Compatibility Macros -----------------------------------------"

    Public Const VI_ERROR_INV_SESSION As Integer = &HBFFF000E
    Public Const VI_INFINITE As Integer = &HFFFFFFFF

    Public Const VI_NORMAL As Short = 1
    Public Const VI_FDC As Short = 2
    Public Const VI_HS488 As Short = 3
    Public Const VI_ASRL488 As Short = 4

    Public Const VI_ASRL_IN_BUF As Short = 16
    Public Const VI_ASRL_OUT_BUF As Short = 32
    Public Const VI_ASRL_IN_BUF_DISCARD As Short = 64
    Public Const VI_ASRL_OUT_BUF_DISCARD As Short = 128
#End Region

#Region "- Agilent specific attributes -------------------------------------------"

    'The following attributes can be used to control the exporting of Agilent VISA
    'resources to other VISAs.
    'VI_AGATTR_FIND_ONLY_EXPORTED_RSRCS is a resource manager attribute that defaults
    'to VI_FALSE.  Setting it to true will cause viFindRsrc and viParseRsrc to only
    'report resources which have the VI_AGATTR_EXPORT_ENABLED set to VI_TRUE.

    Public Const VI_AGATTR_EXPORT_ENABLED As Integer = &HFFF0020           ' ViBoolean (R/W resource attribute)
    Public Const VI_AGATTR_FIND_ONLY_EXPORTED_RSRCS As Integer = &HFFF0021 ' ViBoolean (R/W rsrcmgr attribute)

    'The following attribute allows setting and getting the T1 delay on a GPIB INTFC session.
    'The value is the time of t1 delay in nanoseconds, and should be:
    '   - no less than VI_AG_GPIB_T1DELAY_MIN or
    '   - no greater than VI_AG_GPIB_T1DELAY_MAX.
    'Most GPIB interfaces only support a small number of t1 delays, so the actual value used
    'by the interface could be different than that specified. You can find out the actual value
    'used by calling viGetAttribute().
    Public Const VI_AGATTR_GPIB_T1_DELAY As Integer = &HFFF0028 ' ViInt32 (R/W GPIB INTFC resource attribute)

    Public Const VI_AG_GPIB_T1DELAY_MIN As Integer = 350
    Public Const VI_AG_GPIB_T1DELAY_MAX As Integer = 2400

    'The VI_AGATTR_LOCKWAIT attribute modifies the behavior of exclusive locks.  
    'When a lock-abiding VISA call is made on a session to an exclusively locked resource:
    '   - If VI_AGATTR_LOCKWAIT  is VI_FALSE, the call will immediately return
    '     with VI_ERROR_RSRC_LOCKED. 
    '   - If VI_AGATTR_LOCKWAIT  is VI_TRUE, the call will wait the session timeout
    '     interval for the lock to be released and then return VI_ERROR_TMO rather
    '     than VI_ERROR_RSRC_LOCKED. 
    'The default value for VI_AGATTR_LOCKWAIT is normally VI_FALSE, but this default
    'can be changed from the IO Control (the Agilent VISA Options | Default VISA LockWait menu)
    'or from IO Config (the Options | Default VISA LockWait menu). 
    ' public const int VI_AGATTR_LOCKWAIT As Integer = &H0FFF002B; // ViBoolean (R/W local attribute)

    'Beginning in VISA 3.0, viMove's to VI_LOCAL_SPACE ignore VI_ATTR_DEST_INCREMENT and 
    'viMove's from VI_LOCAL_SPACE ignore VI_ATTR_SRC_INCREMENT and always use an increment
    'of 1 unless VI_AGATTR_ALLOW_LOCAL_SPACE_FIFO is set to VI_TRUE.

    Public Const VI_AGATTR_ALLOW_LOCAL_SPACE_FIFO As Integer = &HFFF0032 ' ViBoolean (R/W local attribute)

    'The following attributes return the directories where the IO Libraries and VISA are
    'installed and the registry path for the Agilent IO Libraries

    Public Const VI_AGATTR_VISA_FRAMEWORK_DIR As Integer = &HFFF003B     ' ViString  (R/O object attribute)
    Public Const VI_AGATTR_IOLIBRARIES_DIR As Integer = &HFFF003C        ' ViString  (R/O object attribute)
    Public Const VI_AGATTR_IOLIBRARIES_REG_PATH As Integer = &HFFF003D   ' ViString  (R/O object attribute)

    Public Const VI_AGATTR_INTFC_SERIALNUMBER As Integer = &HFFF0045     ' ViString  (R/O Intfc attribute)
    Public Const VI_AGATTR_PXI_OOOWRITE_ALLOW_EN As Integer = &HFFF0053  ' ViBoolean (R/W PxiSession attribute) 
    Public Const VI_AGATTR_DMA_READ_THRESHOLD As Integer = &HFFF0054     ' ViUInt32  (R/W PxiSession attribute)
    Public Const VI_AGATTR_DMA_WRITE_THRESHOLD As Integer = &HFFF0055    ' ViUInt32  (R/W PxiSession attribute)
    Public Const VI_AGATTR_DMA_CHANNEL As Integer = &HFFF0057            ' ViUInt32  (R/W PxiSession attribute)

    'These attributes are defined in the AGVISA_EXTENSIONS section of visa.h

    Public Const VI_AGATTR_REMOTE_INTF_TYPE As Integer = &HFFF001C
    Public Const VI_AGATTR_INTERFACE_PROTOCOL As Integer = &HFFF001F


    'This attribute is defined on the AGVISA_NONINTEROP_EXTENSIONS section of visa.h

    Public Const VI_AGATTR_MACRO_SUPP As Integer = &HFFF0016
#End Region

#End Region
End Module