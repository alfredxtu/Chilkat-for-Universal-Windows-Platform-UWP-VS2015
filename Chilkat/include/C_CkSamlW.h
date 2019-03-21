// This is a generated source file for Chilkat version 9.5.0.77
#ifndef _C_CkSamlWH
#define _C_CkSamlWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkSamlW CkSamlW_Create(void);
CK_VISIBLE_PUBLIC void CkSamlW_Dispose(HCkSamlW handle);
CK_VISIBLE_PUBLIC void CkSamlW_getDebugLogFilePath(HCkSamlW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkSamlW_putDebugLogFilePath(HCkSamlW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSamlW_debugLogFilePath(HCkSamlW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSamlW_getIgnoreTimingIssues(HCkSamlW cHandle);
CK_VISIBLE_PUBLIC void  CkSamlW_putIgnoreTimingIssues(HCkSamlW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSamlW_getLastErrorHtml(HCkSamlW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSamlW_lastErrorHtml(HCkSamlW cHandle);
CK_VISIBLE_PUBLIC void CkSamlW_getLastErrorText(HCkSamlW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSamlW_lastErrorText(HCkSamlW cHandle);
CK_VISIBLE_PUBLIC void CkSamlW_getLastErrorXml(HCkSamlW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSamlW_lastErrorXml(HCkSamlW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSamlW_getLastMethodSuccess(HCkSamlW cHandle);
CK_VISIBLE_PUBLIC void  CkSamlW_putLastMethodSuccess(HCkSamlW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSamlW_getVerboseLogging(HCkSamlW cHandle);
CK_VISIBLE_PUBLIC void  CkSamlW_putVerboseLogging(HCkSamlW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSamlW_getVersion(HCkSamlW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSamlW_version(HCkSamlW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSamlW_SaveLastError(HCkSamlW cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC BOOL CkSamlW_SignAuthNRequest(HCkSamlW cHandle, HCkStringBuilderW sbRequestXml, const wchar_t *relayState, const wchar_t *digestAlg, HCkCertW cert, const wchar_t *binding, HCkStringBuilderW sbResult);
#endif
