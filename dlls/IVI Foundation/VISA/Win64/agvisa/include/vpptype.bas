'------------------------------------------------------
' Distributed by VXIplug&play Systems Alliance
'------------------------------------------------------
'
' Title   : VPPTYPE.BAS
' Purpose : VXIPlug&Play instrument driver header file
'
'------------------------------------------------------

'- Completion and Error Codes -------------------------

GLOBAL Const VI_WARN_NSUP_ID_QUERY      = &H3FFC0101&
GLOBAL Const VI_WARN_NSUP_RESET         = &H3FFC0102&
GLOBAL Const VI_WARN_NSUP_SELF_TEST     = &H3FFC0103&
GLOBAL Const VI_WARN_NSUP_ERROR_QUERY   = &H3FFC0104&
GLOBAL Const VI_WARN_NSUP_REV_QUERY     = &H3FFC0105&

GLOBAL Const VI_ERROR_PARAMETER1        = &HBFFC0001&
GLOBAL Const VI_ERROR_PARAMETER2        = &HBFFC0002&
GLOBAL Const VI_ERROR_PARAMETER3        = &HBFFC0003&
GLOBAL Const VI_ERROR_PARAMETER4        = &HBFFC0004&
GLOBAL Const VI_ERROR_PARAMETER5        = &HBFFC0005&
GLOBAL Const VI_ERROR_PARAMETER6        = &HBFFC0006&
GLOBAL Const VI_ERROR_PARAMETER7        = &HBFFC0007&
GLOBAL Const VI_ERROR_PARAMETER8        = &HBFFC0008&
GLOBAL Const VI_ERROR_FAIL_ID_QUERY     = &HBFFC0011&
GLOBAL Const VI_ERROR_INV_RESPONSE      = &HBFFC0012&

'- Additional Definitions -----------------------------

Global Const VI_ON                      = &H1&
Global Const VI_OFF                     = &H0&

