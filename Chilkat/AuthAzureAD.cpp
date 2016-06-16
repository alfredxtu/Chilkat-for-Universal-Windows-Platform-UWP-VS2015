
// This source file is generated.

#include "pch.h"
#include "AuthAzureAD.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkAuthAzureADW.h"
		
#include "include/CkSocketW.h"
#include "Socket.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::AuthAzureAD::~AuthAzureAD(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::AuthAzureAD::AuthAzureAD(void) 
{
    m_impl = new CkAuthAzureADW();
}

//Chilkat::AuthAzureAD::AuthAzureAD(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkAuthAzureADW *)x;
//    if (!m_impl) m_impl = new CkAuthAzureADW();
//    }
//    
//Platform::IntPtr Chilkat::AuthAzureAD::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::AuthAzureAD::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::AuthAzureAD::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::AuthAzureAD::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::AuthAzureAD::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::AuthAzureAD::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::AuthAzureAD::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::AuthAzureAD::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::AuthAzureAD::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::AuthAzureAD::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::AuthAzureAD::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::AuthAzureAD::TenantId::get()
    {
    return ref new String(m_impl ? m_impl->tenantId() : L"");
    }
void Chilkat::AuthAzureAD::TenantId::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TenantId(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAzureAD::ClientId::get()
    {
    return ref new String(m_impl ? m_impl->clientId() : L"");
    }
void Chilkat::AuthAzureAD::ClientId::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientId(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAzureAD::ClientSecret::get()
    {
    return ref new String(m_impl ? m_impl->clientSecret() : L"");
    }
void Chilkat::AuthAzureAD::ClientSecret::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientSecret(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAzureAD::Resource::get()
    {
    return ref new String(m_impl ? m_impl->resource() : L"");
    }
void Chilkat::AuthAzureAD::Resource::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Resource(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAzureAD::AccessToken::get()
    {
    return ref new String(m_impl ? m_impl->accessToken() : L"");
    }
void Chilkat::AuthAzureAD::AccessToken::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AccessToken(newVal ? newVal->Data() : L"");
    }
int Chilkat::AuthAzureAD::NumSecondsRemaining::get()
    {
    return m_impl ? m_impl->get_NumSecondsRemaining() : 0;
    }
Boolean Chilkat::AuthAzureAD::Valid::get()
    {
    return m_impl ? m_impl->get_Valid() : false;
    }


Boolean AuthAzureAD::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxAuthAzureADProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<Boolean>^ AuthAzureAD::ObtainAccessTokenAsync(Socket ^connection)
    {
return create_async([this, connection]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (connection == nullptr) { return false; }
	CkSocketW* pObj0 = connection->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxAuthAzureADProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ObtainAccessToken(*pObj0);

});
    }




