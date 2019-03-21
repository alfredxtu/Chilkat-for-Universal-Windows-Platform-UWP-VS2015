// This is a generated source file for Chilkat version 9.5.0.77
#ifndef _C_CkSaml_H
#define _C_CkSaml_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkSaml CkSaml_Create(void);
CK_VISIBLE_PUBLIC void CkSaml_Dispose(HCkSaml handle);
CK_VISIBLE_PUBLIC void CkSaml_getDebugLogFilePath(HCkSaml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSaml_putDebugLogFilePath(HCkSaml cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSaml_debugLogFilePath(HCkSaml cHandle);
CK_VISIBLE_PUBLIC BOOL CkSaml_getIgnoreTimingIssues(HCkSaml cHandle);
CK_VISIBLE_PUBLIC void CkSaml_putIgnoreTimingIssues(HCkSaml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSaml_getLastErrorHtml(HCkSaml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSaml_lastErrorHtml(HCkSaml cHandle);
CK_VISIBLE_PUBLIC void CkSaml_getLastErrorText(HCkSaml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSaml_lastErrorText(HCkSaml cHandle);
CK_VISIBLE_PUBLIC void CkSaml_getLastErrorXml(HCkSaml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSaml_lastErrorXml(HCkSaml cHandle);
CK_VISIBLE_PUBLIC BOOL CkSaml_getLastMethodSuccess(HCkSaml cHandle);
CK_VISIBLE_PUBLIC void CkSaml_putLastMethodSuccess(HCkSaml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSaml_getUtf8(HCkSaml cHandle);
CK_VISIBLE_PUBLIC void CkSaml_putUtf8(HCkSaml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSaml_getVerboseLogging(HCkSaml cHandle);
CK_VISIBLE_PUBLIC void CkSaml_putVerboseLogging(HCkSaml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSaml_getVersion(HCkSaml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSaml_version(HCkSaml cHandle);
CK_VISIBLE_PUBLIC BOOL CkSaml_SaveLastError(HCkSaml cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkSaml_SignAuthNRequest(HCkSaml cHandle, HCkStringBuilder sbRequestXml, const char *relayState, const char *digestAlg, HCkCert cert, const char *binding, HCkStringBuilder sbResult);
#endif
