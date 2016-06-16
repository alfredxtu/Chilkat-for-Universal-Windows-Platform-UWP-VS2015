
// This source file is generated.

#include "pch.h"
#include "AuthAws.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkAuthAwsW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::AuthAws::~AuthAws(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::AuthAws::AuthAws(void) 
{
    m_impl = new CkAuthAwsW();
}

//Chilkat::AuthAws::AuthAws(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkAuthAwsW *)x;
//    if (!m_impl) m_impl = new CkAuthAwsW();
//    }
//    
//Platform::IntPtr Chilkat::AuthAws::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::AuthAws::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::AuthAws::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::AuthAws::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::AuthAws::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::AuthAws::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::AuthAws::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::AuthAws::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::AuthAws::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::AuthAws::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::AuthAws::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::AuthAws::AccessKey::get()
    {
    return ref new String(m_impl ? m_impl->accessKey() : L"");
    }
void Chilkat::AuthAws::AccessKey::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AccessKey(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAws::PrecomputedSha256::get()
    {
    return ref new String(m_impl ? m_impl->precomputedSha256() : L"");
    }
void Chilkat::AuthAws::PrecomputedSha256::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PrecomputedSha256(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAws::Region::get()
    {
    return ref new String(m_impl ? m_impl->region() : L"");
    }
void Chilkat::AuthAws::Region::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Region(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAws::SecretKey::get()
    {
    return ref new String(m_impl ? m_impl->secretKey() : L"");
    }
void Chilkat::AuthAws::SecretKey::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SecretKey(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAws::ServiceName::get()
    {
    return ref new String(m_impl ? m_impl->serviceName() : L"");
    }
void Chilkat::AuthAws::ServiceName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ServiceName(newVal ? newVal->Data() : L"");
    }
int Chilkat::AuthAws::SignatureVersion::get()
    {
    return m_impl ? m_impl->get_SignatureVersion() : 0;
    }
void Chilkat::AuthAws::SignatureVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_SignatureVersion(newVal);
    }
String ^Chilkat::AuthAws::PrecomputedMd5::get()
    {
    return ref new String(m_impl ? m_impl->precomputedMd5() : L"");
    }
void Chilkat::AuthAws::PrecomputedMd5::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PrecomputedMd5(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAws::CanonicalizedResourceV2::get()
    {
    return ref new String(m_impl ? m_impl->canonicalizedResourceV2() : L"");
    }
void Chilkat::AuthAws::CanonicalizedResourceV2::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CanonicalizedResourceV2(newVal ? newVal->Data() : L"");
    }


Boolean AuthAws::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }




