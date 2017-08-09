// This is a generated source file for Chilkat version 9.5.0.69
#ifndef _C_CkXmlDSigGen_H
#define _C_CkXmlDSigGen_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkXmlDSigGen CkXmlDSigGen_Create(void);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_Dispose(HCkXmlDSigGen handle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getDebugLogFilePath(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putDebugLogFilePath(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_debugLogFilePath(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getLastErrorHtml(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_lastErrorHtml(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getLastErrorText(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_lastErrorText(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getLastErrorXml(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_lastErrorXml(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_getLastMethodSuccess(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putLastMethodSuccess(HCkXmlDSigGen cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_getTest(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putTest(HCkXmlDSigGen cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_getUtf8(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putUtf8(HCkXmlDSigGen cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_getVerboseLogging(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putVerboseLogging(HCkXmlDSigGen cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getVersion(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_version(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_SaveLastError(HCkXmlDSigGen cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_Test2(HCkXmlDSigGen cHandle);
#endif
