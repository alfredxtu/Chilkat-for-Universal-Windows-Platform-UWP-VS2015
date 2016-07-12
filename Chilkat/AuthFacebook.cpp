
// This source file is generated.

#include "pch.h"
#include "AuthFacebook.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkAuthFacebookW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::AuthFacebook::~AuthFacebook(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::AuthFacebook::AuthFacebook(void) 
{
    m_impl = new CkAuthFacebookW();
}

//Chilkat::AuthFacebook::AuthFacebook(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkAuthFacebookW *)x;
//    if (!m_impl) m_impl = new CkAuthFacebookW();
//    }
//    
//Platform::IntPtr Chilkat::AuthFacebook::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::AuthFacebook::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::AuthFacebook::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::AuthFacebook::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::AuthFacebook::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::AuthFacebook::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::AuthFacebook::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::AuthFacebook::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::AuthFacebook::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::AuthFacebook::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::AuthFacebook::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::AuthFacebook::AppId::get()
    {
    return ref new String(m_impl ? m_impl->appId() : L"");
    }
void Chilkat::AuthFacebook::AppId::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AppId(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthFacebook::AppSecret::get()
    {
    return ref new String(m_impl ? m_impl->appSecret() : L"");
    }
void Chilkat::AuthFacebook::AppSecret::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AppSecret(newVal ? newVal->Data() : L"");
    }


Boolean AuthFacebook::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }




