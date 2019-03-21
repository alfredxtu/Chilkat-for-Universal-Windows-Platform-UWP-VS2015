// Generated for Chilkat v9.5.0.77

// This source file is generated.

#include "pch.h"
#include "Saml.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSamlW.h"
		
#include "include/CkStringBuilderW.h"
#include "include/CkCertW.h"
#include "StringBuilder.h"
#include "Cert.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Saml::~Saml(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Saml::Saml(void) 
{
    m_impl = new CkSamlW();
}

//Chilkat::Saml::Saml(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSamlW *)x;
//    if (!m_impl) m_impl = new CkSamlW();
//    }
//    
//Platform::IntPtr Chilkat::Saml::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Saml::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Saml::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Saml::IgnoreTimingIssues::get()
    {
    return m_impl ? m_impl->get_IgnoreTimingIssues() : false;
    }
void Chilkat::Saml::IgnoreTimingIssues::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_IgnoreTimingIssues(newVal);
    }
String ^Chilkat::Saml::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Saml::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Saml::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Saml::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Saml::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::Saml::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Saml::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Saml::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean Saml::SignAuthNRequest(Chilkat::StringBuilder ^sbRequestXml, Platform::String ^relayState, Platform::String ^digestAlg, Chilkat::Cert ^cert, Platform::String ^binding, Chilkat::StringBuilder ^sbResult)
    {
	if (m_impl == nullptr) { return false; }
	if (sbRequestXml == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sbRequestXml->m_impl;
	 if (!pObj0) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj3 = cert->m_impl;
	 if (!pObj3) { return false; }
	if (sbResult == nullptr) { return false; }
	CkStringBuilderW* pObj5 = sbResult->m_impl;
	 if (!pObj5) { return false; }
	// --- prep output arg ---
	return m_impl->SignAuthNRequest(*pObj0,relayState ? relayState->Data() : L"",digestAlg ? digestAlg->Data() : L"",*pObj3,binding ? binding->Data() : L"",*pObj5);
    }




