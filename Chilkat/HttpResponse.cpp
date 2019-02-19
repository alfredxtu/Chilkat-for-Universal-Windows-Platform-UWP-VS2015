// Generated for Chilkat v9.5.0.76

// This source file is generated.

#include "pch.h"
#include "HttpResponse.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkHttpResponseW.h"
		
#include "include/CkBinDataW.h"
#include "include/CkStringBuilderW.h"
#include "BinData.h"
#include "StringBuilder.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::HttpResponse::~HttpResponse(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::HttpResponse::HttpResponse(void) 
{
    m_impl = new CkHttpResponseW();
}

//Chilkat::HttpResponse::HttpResponse(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkHttpResponseW *)x;
//    if (!m_impl) m_impl = new CkHttpResponseW();
//    }
//    
//Platform::IntPtr Chilkat::HttpResponse::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


Windows::Foundation::Collections::IVector<uint8> ^Chilkat::HttpResponse::Body::get()
    {
    CkByteData db;
    if (m_impl) m_impl->get_Body(db);
    const uint8 *pOut = db.getData();
    std::vector<uint8> vec(pOut, pOut+(size_t)db.getSize());
    return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
String ^Chilkat::HttpResponse::BodyQP::get()
    {
    return ref new String(m_impl ? m_impl->bodyQP() : L"");
    }
String ^Chilkat::HttpResponse::BodyStr::get()
    {
    return ref new String(m_impl ? m_impl->bodyStr() : L"");
    }
String ^Chilkat::HttpResponse::Charset::get()
    {
    return ref new String(m_impl ? m_impl->charset() : L"");
    }
uint32 Chilkat::HttpResponse::ContentLength::get()
    {
    return m_impl ? m_impl->get_ContentLength() : 0;
    }
int64 Chilkat::HttpResponse::ContentLength64::get()
    {
    return m_impl ? m_impl->get_ContentLength64() : 0;
    }
String ^Chilkat::HttpResponse::DateStr::get()
    {
    return ref new String(m_impl ? m_impl->dateStr() : L"");
    }
String ^Chilkat::HttpResponse::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::HttpResponse::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::HttpResponse::Domain::get()
    {
    return ref new String(m_impl ? m_impl->domain() : L"");
    }
String ^Chilkat::HttpResponse::FinalRedirectUrl::get()
    {
    return ref new String(m_impl ? m_impl->finalRedirectUrl() : L"");
    }
String ^Chilkat::HttpResponse::FullMime::get()
    {
    return ref new String(m_impl ? m_impl->fullMime() : L"");
    }
String ^Chilkat::HttpResponse::Header::get()
    {
    return ref new String(m_impl ? m_impl->header() : L"");
    }
String ^Chilkat::HttpResponse::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::HttpResponse::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::HttpResponse::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::HttpResponse::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::HttpResponse::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::HttpResponse::NumCookies::get()
    {
    return m_impl ? m_impl->get_NumCookies() : 0;
    }
int Chilkat::HttpResponse::NumHeaderFields::get()
    {
    return m_impl ? m_impl->get_NumHeaderFields() : 0;
    }
int Chilkat::HttpResponse::StatusCode::get()
    {
    return m_impl ? m_impl->get_StatusCode() : 0;
    }
String ^Chilkat::HttpResponse::StatusLine::get()
    {
    return ref new String(m_impl ? m_impl->statusLine() : L"");
    }
String ^Chilkat::HttpResponse::StatusText::get()
    {
    return ref new String(m_impl ? m_impl->statusText() : L"");
    }
Boolean Chilkat::HttpResponse::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::HttpResponse::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::HttpResponse::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean HttpResponse::GetBodyBd(Chilkat::BinData ^binData)
    {
	if (m_impl == nullptr) { return false; }
	if (binData == nullptr) { return false; }
	CkBinDataW* pObj0 = binData->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->GetBodyBd(*pObj0);
    }
Boolean HttpResponse::GetBodySb(Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->GetBodySb(*pObj0);
    }
Platform::String ^HttpResponse::GetCookieDomain(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getCookieDomain(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpResponse::GetCookieExpiresStr(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getCookieExpiresStr(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpResponse::GetCookieName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getCookieName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpResponse::GetCookiePath(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getCookiePath(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpResponse::GetCookieValue(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getCookieValue(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpResponse::GetHeaderField(Platform::String ^fieldName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getHeaderField(fieldName ? fieldName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpResponse::GetHeaderFieldAttr(Platform::String ^fieldName, Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getHeaderFieldAttr(fieldName ? fieldName->Data() : L"",attrName ? attrName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpResponse::GetHeaderName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getHeaderName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpResponse::GetHeaderValue(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getHeaderValue(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean HttpResponse::SaveBodyBinary(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveBodyBinary(path ? path->Data() : L"");
    }
Boolean HttpResponse::SaveBodyText(Boolean bCrlf, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveBodyText(bCrlf,path ? path->Data() : L"");
    }
Platform::String ^HttpResponse::UrlEncParamValue(Platform::String ^encodedParamString, Platform::String ^paramName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->urlEncParamValue(encodedParamString ? encodedParamString->Data() : L"",paramName ? paramName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




