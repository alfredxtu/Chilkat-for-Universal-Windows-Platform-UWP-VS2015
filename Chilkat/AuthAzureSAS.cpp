// Generated for Chilkat v9.5.0.77

// This source file is generated.

#include "pch.h"
#include "AuthAzureSAS.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkAuthAzureSASW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::AuthAzureSAS::~AuthAzureSAS(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::AuthAzureSAS::AuthAzureSAS(void) 
{
    m_impl = new CkAuthAzureSASW();
}

//Chilkat::AuthAzureSAS::AuthAzureSAS(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkAuthAzureSASW *)x;
//    if (!m_impl) m_impl = new CkAuthAzureSASW();
//    }
//    
//Platform::IntPtr Chilkat::AuthAzureSAS::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::AuthAzureSAS::AccessKey::get()
    {
    return ref new String(m_impl ? m_impl->accessKey() : L"");
    }
void Chilkat::AuthAzureSAS::AccessKey::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AccessKey(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAzureSAS::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::AuthAzureSAS::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAzureSAS::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::AuthAzureSAS::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::AuthAzureSAS::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::AuthAzureSAS::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::AuthAzureSAS::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::AuthAzureSAS::StringToSign::get()
    {
    return ref new String(m_impl ? m_impl->stringToSign() : L"");
    }
void Chilkat::AuthAzureSAS::StringToSign::set(String ^newVal)
    {
        if (m_impl) m_impl->put_StringToSign(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::AuthAzureSAS::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::AuthAzureSAS::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::AuthAzureSAS::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


void AuthAzureSAS::Clear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->Clear();
    }
Platform::String ^AuthAzureSAS::GenerateToken(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->generateToken();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean AuthAzureSAS::SetNonTokenParam(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetNonTokenParam(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean AuthAzureSAS::SetTokenParam(Platform::String ^name, Platform::String ^authParamName, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetTokenParam(name ? name->Data() : L"",authParamName ? authParamName->Data() : L"",value ? value->Data() : L"");
    }




