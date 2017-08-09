
// This source file is generated.

#include "pch.h"
#include "OAuth2.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkOAuth2W.h"
		
#include "include/CkSocketW.h"
#include "Socket.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::OAuth2::~OAuth2(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::OAuth2::OAuth2(void) 
{
    m_impl = new CkOAuth2W();
}

//Chilkat::OAuth2::OAuth2(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkOAuth2W *)x;
//    if (!m_impl) m_impl = new CkOAuth2W();
//    }
//    
//Platform::IntPtr Chilkat::OAuth2::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::OAuth2::AccessToken::get()
    {
    return ref new String(m_impl ? m_impl->accessToken() : L"");
    }
void Chilkat::OAuth2::AccessToken::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AccessToken(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::AccessTokenResponse::get()
    {
    return ref new String(m_impl ? m_impl->accessTokenResponse() : L"");
    }
int Chilkat::OAuth2::AuthFlowState::get()
    {
    return m_impl ? m_impl->get_AuthFlowState() : 0;
    }
String ^Chilkat::OAuth2::AuthorizationEndpoint::get()
    {
    return ref new String(m_impl ? m_impl->authorizationEndpoint() : L"");
    }
void Chilkat::OAuth2::AuthorizationEndpoint::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AuthorizationEndpoint(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::ClientId::get()
    {
    return ref new String(m_impl ? m_impl->clientId() : L"");
    }
void Chilkat::OAuth2::ClientId::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientId(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::ClientSecret::get()
    {
    return ref new String(m_impl ? m_impl->clientSecret() : L"");
    }
void Chilkat::OAuth2::ClientSecret::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientSecret(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::OAuth2::CodeChallenge::get()
    {
    return m_impl ? m_impl->get_CodeChallenge() : false;
    }
void Chilkat::OAuth2::CodeChallenge::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_CodeChallenge(newVal);
    }
String ^Chilkat::OAuth2::CodeChallengeMethod::get()
    {
    return ref new String(m_impl ? m_impl->codeChallengeMethod() : L"");
    }
void Chilkat::OAuth2::CodeChallengeMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CodeChallengeMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::OAuth2::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::FailureInfo::get()
    {
    return ref new String(m_impl ? m_impl->failureInfo() : L"");
    }
String ^Chilkat::OAuth2::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::OAuth2::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::OAuth2::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::OAuth2::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::OAuth2::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::OAuth2::ListenPort::get()
    {
    return m_impl ? m_impl->get_ListenPort() : 0;
    }
void Chilkat::OAuth2::ListenPort::set(int newVal)
    {
        if (m_impl) m_impl->put_ListenPort(newVal);
    }
String ^Chilkat::OAuth2::LocalHost::get()
    {
    return ref new String(m_impl ? m_impl->localHost() : L"");
    }
void Chilkat::OAuth2::LocalHost::set(String ^newVal)
    {
        if (m_impl) m_impl->put_LocalHost(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::RedirectAllowHtml::get()
    {
    return ref new String(m_impl ? m_impl->redirectAllowHtml() : L"");
    }
void Chilkat::OAuth2::RedirectAllowHtml::set(String ^newVal)
    {
        if (m_impl) m_impl->put_RedirectAllowHtml(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::RedirectDenyHtml::get()
    {
    return ref new String(m_impl ? m_impl->redirectDenyHtml() : L"");
    }
void Chilkat::OAuth2::RedirectDenyHtml::set(String ^newVal)
    {
        if (m_impl) m_impl->put_RedirectDenyHtml(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::RefreshToken::get()
    {
    return ref new String(m_impl ? m_impl->refreshToken() : L"");
    }
void Chilkat::OAuth2::RefreshToken::set(String ^newVal)
    {
        if (m_impl) m_impl->put_RefreshToken(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::Resource::get()
    {
    return ref new String(m_impl ? m_impl->resource() : L"");
    }
void Chilkat::OAuth2::Resource::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Resource(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::Scope::get()
    {
    return ref new String(m_impl ? m_impl->scope() : L"");
    }
void Chilkat::OAuth2::Scope::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Scope(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::TokenEndpoint::get()
    {
    return ref new String(m_impl ? m_impl->tokenEndpoint() : L"");
    }
void Chilkat::OAuth2::TokenEndpoint::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TokenEndpoint(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth2::TokenType::get()
    {
    return ref new String(m_impl ? m_impl->tokenType() : L"");
    }
void Chilkat::OAuth2::TokenType::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TokenType(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::OAuth2::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::OAuth2::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::OAuth2::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean OAuth2::Cancel(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxOAuth2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->Cancel();
    }
IAsyncOperation<Boolean>^ OAuth2::MonitorAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxOAuth2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->Monitor();

});
    }
IAsyncOperation<Boolean>^ OAuth2::RefreshAccessTokenAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxOAuth2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->RefreshAccessToken();

});
    }
void OAuth2::SleepMs(int millisec)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxOAuth2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	m_impl->SleepMs(millisec);
    }
Platform::String ^OAuth2::StartAuth(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxOAuth2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	const wchar_t *retStr = m_impl->startAuth();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean OAuth2::UseConnection(Chilkat::Socket ^sock)
    {
	if (m_impl == nullptr) { return false; }
	if (sock == nullptr) { return false; }
	CkSocketW* pObj0 = sock->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxOAuth2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->UseConnection(*pObj0);
    }




