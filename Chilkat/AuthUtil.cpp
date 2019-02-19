// Generated for Chilkat v9.5.0.76

// This source file is generated.

#include "pch.h"
#include "AuthUtil.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkAuthUtilW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::AuthUtil::~AuthUtil(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::AuthUtil::AuthUtil(void) 
{
    m_impl = new CkAuthUtilW();
}

//Chilkat::AuthUtil::AuthUtil(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkAuthUtilW *)x;
//    if (!m_impl) m_impl = new CkAuthUtilW();
//    }
//    
//Platform::IntPtr Chilkat::AuthUtil::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::AuthUtil::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::AuthUtil::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthUtil::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::AuthUtil::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::AuthUtil::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::AuthUtil::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::AuthUtil::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::AuthUtil::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::AuthUtil::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::AuthUtil::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Platform::String ^AuthUtil::WalmartSignature(Platform::String ^requestUrl, Platform::String ^consumerId, Platform::String ^privateKey, Platform::String ^requestMethod)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->walmartSignature(requestUrl ? requestUrl->Data() : L"",consumerId ? consumerId->Data() : L"",privateKey ? privateKey->Data() : L"",requestMethod ? requestMethod->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




