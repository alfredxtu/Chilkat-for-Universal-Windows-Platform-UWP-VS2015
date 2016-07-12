
// This source file is generated.

#include "pch.h"
#include "Rest.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkRestW.h"
		
#include "include/CkStreamW.h"
#include "include/CkUrlW.h"
#include "include/CkAuthAwsW.h"
#include "include/CkAuthAzureADW.h"
#include "include/CkAuthAzureStorageW.h"
#include "include/CkAuthGoogleW.h"
#include "include/CkOAuth1W.h"
#include "include/CkSocketW.h"
#include "Stream.h"
#include "Url.h"
#include "AuthAws.h"
#include "AuthAzureAD.h"
#include "AuthAzureStorage.h"
#include "AuthGoogle.h"
#include "OAuth1.h"
#include "Socket.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Rest::~Rest(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Rest::Rest(void) 
{
    m_impl = new CkRestW();
}

//Chilkat::Rest::Rest(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkRestW *)x;
//    if (!m_impl) m_impl = new CkRestW();
//    }
//    
//Platform::IntPtr Chilkat::Rest::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Rest::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Rest::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Rest::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Rest::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Rest::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Rest::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Rest::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Rest::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Rest::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Rest::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Rest::Authorization::get()
    {
    return ref new String(m_impl ? m_impl->authorization() : L"");
    }
void Chilkat::Rest::Authorization::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Authorization(newVal ? newVal->Data() : L"");
    }
int Chilkat::Rest::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Rest::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
String ^Chilkat::Rest::Host::get()
    {
    return ref new String(m_impl ? m_impl->host() : L"");
    }
void Chilkat::Rest::Host::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Host(newVal ? newVal->Data() : L"");
    }
int Chilkat::Rest::IdleTimeoutMs::get()
    {
    return m_impl ? m_impl->get_IdleTimeoutMs() : 0;
    }
void Chilkat::Rest::IdleTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_IdleTimeoutMs(newVal);
    }
String ^Chilkat::Rest::LastRequestHeader::get()
    {
    return ref new String(m_impl ? m_impl->lastRequestHeader() : L"");
    }
String ^Chilkat::Rest::LastRequestStartLine::get()
    {
    return ref new String(m_impl ? m_impl->lastRequestStartLine() : L"");
    }
int Chilkat::Rest::NumResponseHeaders::get()
    {
    return m_impl ? m_impl->get_NumResponseHeaders() : 0;
    }
String ^Chilkat::Rest::PartSelector::get()
    {
    return ref new String(m_impl ? m_impl->partSelector() : L"");
    }
void Chilkat::Rest::PartSelector::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PartSelector(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Rest::ResponseHeader::get()
    {
    return ref new String(m_impl ? m_impl->responseHeader() : L"");
    }
int Chilkat::Rest::ResponseStatusCode::get()
    {
    return m_impl ? m_impl->get_ResponseStatusCode() : 0;
    }
String ^Chilkat::Rest::ResponseStatusText::get()
    {
    return ref new String(m_impl ? m_impl->responseStatusText() : L"");
    }
Boolean Chilkat::Rest::StreamNonChunked::get()
    {
    return m_impl ? m_impl->get_StreamNonChunked() : false;
    }
void Chilkat::Rest::StreamNonChunked::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_StreamNonChunked(newVal);
    }
int Chilkat::Rest::ConnectFailReason::get()
    {
    return m_impl ? m_impl->get_ConnectFailReason() : 0;
    }
Boolean Chilkat::Rest::PercentDoneOnSend::get()
    {
    return m_impl ? m_impl->get_PercentDoneOnSend() : false;
    }
void Chilkat::Rest::PercentDoneOnSend::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PercentDoneOnSend(newVal);
    }
Boolean Chilkat::Rest::AllowHeaderQB::get()
    {
    return m_impl ? m_impl->get_AllowHeaderQB() : false;
    }
void Chilkat::Rest::AllowHeaderQB::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AllowHeaderQB(newVal);
    }


Boolean Rest::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Rest::AddHeader(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddHeader(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean Rest::AddQueryParam(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddQueryParam(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean Rest::AddQueryParams(Platform::String ^queryString)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddQueryParams(queryString ? queryString->Data() : L"");
    }
Boolean Rest::ClearAllHeaders(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ClearAllHeaders();
    }
Boolean Rest::ClearAllQueryParams(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ClearAllQueryParams();
    }
void Rest::ClearResponseBodyStream(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearResponseBodyStream();
    }
IAsyncOperation<Boolean>^ Rest::ConnectAsync(Platform::String ^hostname, int port, Boolean tls, Boolean autoReconnect)
    {
return create_async([this, hostname, port, tls, autoReconnect]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Connect(hostname ? hostname->Data() : L"",port,tls,autoReconnect);

});
    }
IAsyncOperation<Boolean>^ Rest::DisconnectAsync(int maxWaitMs)
    {
return create_async([this, maxWaitMs]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Disconnect(maxWaitMs);

});
    }
IAsyncOperation<Platform::String ^>^ Rest::FullRequestBinaryAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Windows::Foundation::Collections::IVector<uint8>^bodyBytes)
    {
return create_async([this, httpVerb, uriPath, bodyBytes]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	CkByteData db2; std::vector<uint8> v2;
        if (bodyBytes != nullptr) { v2 = to_vector(bodyBytes);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fullRequestBinary(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"",db2);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Rest::FullRequestFormUrlEncodedAsync(Platform::String ^httpVerb, Platform::String ^uriPath)
    {
return create_async([this, httpVerb, uriPath]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fullRequestFormUrlEncoded(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Rest::FullRequestMultipartAsync(Platform::String ^httpVerb, Platform::String ^uriPath)
    {
return create_async([this, httpVerb, uriPath]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fullRequestMultipart(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Rest::FullRequestNoBodyAsync(Platform::String ^httpVerb, Platform::String ^uriPath)
    {
return create_async([this, httpVerb, uriPath]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fullRequestNoBody(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Rest::FullRequestStreamAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Stream ^stream)
    {
return create_async([this, httpVerb, uriPath, stream]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (stream == nullptr) { return nullptr; }
	CkStreamW* pObj2 = stream->m_impl;
	 if (!pObj2) { return nullptr; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fullRequestStream(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"",*pObj2);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Rest::FullRequestStringAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Platform::String ^bodyText)
    {
return create_async([this, httpVerb, uriPath, bodyText]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fullRequestString(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"",bodyText ? bodyText->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Rest::ReadRespBodyBinaryAsync(void)
    {
return create_async([this]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReadRespBodyBinary(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Boolean>^ Rest::ReadRespBodyStreamAsync(Stream ^stream, Boolean autoSetStreamCharset)
    {
return create_async([this, stream, autoSetStreamCharset]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (stream == nullptr) { return false; }
	CkStreamW* pObj0 = stream->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ReadRespBodyStream(*pObj0,autoSetStreamCharset);

});
    }
IAsyncOperation<Platform::String ^>^ Rest::ReadRespBodyStringAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readRespBodyString();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<int>^ Rest::ReadResponseHeaderAsync(void)
    {
return create_async([this]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->ReadResponseHeader();

});
    }
Url ^Rest::RedirectUrl(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Url
	// cppType = CkUrl *
	CkUrlW *pRetObj = m_impl->RedirectUrl();
	if (!pRetObj) return nullptr;
	Chilkat::Url ^pUrl = ref new Chilkat::Url();
	pUrl->m_impl = pRetObj;
	return pUrl;
    }
Boolean Rest::RemoveHeader(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RemoveHeader(name ? name->Data() : L"");
    }
Boolean Rest::RemoveQueryParam(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RemoveQueryParam(name ? name->Data() : L"");
    }
Platform::String ^Rest::ResponseHdrByName(Platform::String ^name)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->responseHdrByName(name ? name->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Rest::ResponseHdrName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->responseHdrName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Rest::ResponseHdrValue(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->responseHdrValue(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Boolean>^ Rest::SendReqBinaryBodyAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Windows::Foundation::Collections::IVector<uint8>^body)
    {
return create_async([this, httpVerb, uriPath, body]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db2; std::vector<uint8> v2;
        if (body != nullptr) { v2 = to_vector(body);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqBinaryBody(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"",db2);

});
    }
IAsyncOperation<Boolean>^ Rest::SendReqFormUrlEncodedAsync(Platform::String ^httpVerb, Platform::String ^uriPath)
    {
return create_async([this, httpVerb, uriPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqFormUrlEncoded(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Rest::SendReqMultipartAsync(Platform::String ^httpVerb, Platform::String ^uriPath)
    {
return create_async([this, httpVerb, uriPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqMultipart(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Rest::SendReqNoBodyAsync(Platform::String ^httpVerb, Platform::String ^uriPath)
    {
return create_async([this, httpVerb, uriPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqNoBody(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Rest::SendReqStreamBodyAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Stream ^stream)
    {
return create_async([this, httpVerb, uriPath, stream]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (stream == nullptr) { return false; }
	CkStreamW* pObj2 = stream->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqStreamBody(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"",*pObj2);

});
    }
IAsyncOperation<Boolean>^ Rest::SendReqStringBodyAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Platform::String ^bodyText)
    {
return create_async([this, httpVerb, uriPath, bodyText]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqStringBody(httpVerb ? httpVerb->Data() : L"",uriPath ? uriPath->Data() : L"",bodyText ? bodyText->Data() : L"");

});
    }
Boolean Rest::SetAuthAws(AuthAws ^authProvider)
    {
	if (m_impl == nullptr) { return false; }
	if (authProvider == nullptr) { return false; }
	CkAuthAwsW* pObj0 = authProvider->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetAuthAws(*pObj0);
    }
Boolean Rest::SetAuthAzureAD(AuthAzureAD ^authProvider)
    {
	if (m_impl == nullptr) { return false; }
	if (authProvider == nullptr) { return false; }
	CkAuthAzureADW* pObj0 = authProvider->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetAuthAzureAD(*pObj0);
    }
Boolean Rest::SetAuthAzureStorage(AuthAzureStorage ^authProvider)
    {
	if (m_impl == nullptr) { return false; }
	if (authProvider == nullptr) { return false; }
	CkAuthAzureStorageW* pObj0 = authProvider->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetAuthAzureStorage(*pObj0);
    }
Boolean Rest::SetAuthBasic(Platform::String ^username, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetAuthBasic(username ? username->Data() : L"",password ? password->Data() : L"");
    }
Boolean Rest::SetAuthGoogle(AuthGoogle ^authProvider)
    {
	if (m_impl == nullptr) { return false; }
	if (authProvider == nullptr) { return false; }
	CkAuthGoogleW* pObj0 = authProvider->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetAuthGoogle(*pObj0);
    }
Boolean Rest::SetAuthOAuth1(OAuth1 ^authProvider, Boolean useQueryParams)
    {
	if (m_impl == nullptr) { return false; }
	if (authProvider == nullptr) { return false; }
	CkOAuth1W* pObj0 = authProvider->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetAuthOAuth1(*pObj0,useQueryParams);
    }
Boolean Rest::SetMultipartBodyBinary(Windows::Foundation::Collections::IVector<uint8>^bodyData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (bodyData != nullptr) { v0 = to_vector(bodyData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetMultipartBodyBinary(db0);
    }
Boolean Rest::SetMultipartBodyStream(Stream ^stream)
    {
	if (m_impl == nullptr) { return false; }
	if (stream == nullptr) { return false; }
	CkStreamW* pObj0 = stream->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetMultipartBodyStream(*pObj0);
    }
Boolean Rest::SetMultipartBodyString(Platform::String ^bodyText)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetMultipartBodyString(bodyText ? bodyText->Data() : L"");
    }
Boolean Rest::SetResponseBodyStream(int expectedStatus, Boolean autoSetStreamCharset, Stream ^responseStream)
    {
	if (m_impl == nullptr) { return false; }
	if (responseStream == nullptr) { return false; }
	CkStreamW* pObj2 = responseStream->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetResponseBodyStream(expectedStatus,autoSetStreamCharset,*pObj2);
    }
Boolean Rest::UseConnection(Socket ^connection, Boolean autoReconnect)
    {
	if (m_impl == nullptr) { return false; }
	if (connection == nullptr) { return false; }
	CkSocketW* pObj0 = connection->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxRestProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UseConnection(*pObj0,autoReconnect);
    }




