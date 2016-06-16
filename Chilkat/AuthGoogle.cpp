
// This source file is generated.

#include "pch.h"
#include "AuthGoogle.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkAuthGoogleW.h"
		
#include "include/CkSocketW.h"
#include "include/CkPfxW.h"
#include "Socket.h"
#include "Pfx.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::AuthGoogle::~AuthGoogle(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::AuthGoogle::AuthGoogle(void) 
{
    m_impl = new CkAuthGoogleW();
}

//Chilkat::AuthGoogle::AuthGoogle(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkAuthGoogleW *)x;
//    if (!m_impl) m_impl = new CkAuthGoogleW();
//    }
//    
//Platform::IntPtr Chilkat::AuthGoogle::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::AuthGoogle::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::AuthGoogle::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::AuthGoogle::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::AuthGoogle::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::AuthGoogle::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::AuthGoogle::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::AuthGoogle::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::AuthGoogle::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::AuthGoogle::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::AuthGoogle::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::AuthGoogle::EmailAddress::get()
    {
    return ref new String(m_impl ? m_impl->emailAddress() : L"");
    }
void Chilkat::AuthGoogle::EmailAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_EmailAddress(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthGoogle::Scope::get()
    {
    return ref new String(m_impl ? m_impl->scope() : L"");
    }
void Chilkat::AuthGoogle::Scope::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Scope(newVal ? newVal->Data() : L"");
    }
int Chilkat::AuthGoogle::ExpireNumSeconds::get()
    {
    return m_impl ? m_impl->get_ExpireNumSeconds() : 0;
    }
void Chilkat::AuthGoogle::ExpireNumSeconds::set(int newVal)
    {
        if (m_impl) m_impl->put_ExpireNumSeconds(newVal);
    }
String ^Chilkat::AuthGoogle::SubEmailAddress::get()
    {
    return ref new String(m_impl ? m_impl->subEmailAddress() : L"");
    }
void Chilkat::AuthGoogle::SubEmailAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SubEmailAddress(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthGoogle::AccessToken::get()
    {
    return ref new String(m_impl ? m_impl->accessToken() : L"");
    }
void Chilkat::AuthGoogle::AccessToken::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AccessToken(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::AuthGoogle::Valid::get()
    {
    return m_impl ? m_impl->get_Valid() : false;
    }
int Chilkat::AuthGoogle::NumSecondsRemaining::get()
    {
    return m_impl ? m_impl->get_NumSecondsRemaining() : 0;
    }
String ^Chilkat::AuthGoogle::JsonKey::get()
    {
    return ref new String(m_impl ? m_impl->jsonKey() : L"");
    }
void Chilkat::AuthGoogle::JsonKey::set(String ^newVal)
    {
        if (m_impl) m_impl->put_JsonKey(newVal ? newVal->Data() : L"");
    }


Boolean AuthGoogle::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxAuthGoogleProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<Boolean>^ AuthGoogle::ObtainAccessTokenAsync(Socket ^connection)
    {
return create_async([this, connection]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (connection == nullptr) { return false; }
	CkSocketW* pObj0 = connection->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxAuthGoogleProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ObtainAccessToken(*pObj0);

});
    }
Boolean AuthGoogle::SetP12(Pfx ^key)
    {
	if (m_impl == nullptr) { return false; }
	if (key == nullptr) { return false; }
	CkPfxW* pObj0 = key->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxAuthGoogleProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetP12(*pObj0);
    }
Pfx ^AuthGoogle::GetP12(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxAuthGoogleProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Pfx
	// cppType = CkPfx *
	CkPfxW *pRetObj = m_impl->GetP12();
	if (!pRetObj) return nullptr;
	Chilkat::Pfx ^pPfx = ref new Chilkat::Pfx();
	pPfx->m_impl = pRetObj;
	return pPfx;
    }




