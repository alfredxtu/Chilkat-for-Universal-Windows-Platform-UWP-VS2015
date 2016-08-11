
// This source file is generated.

#include "pch.h"
#include "AuthAzureStorage.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkAuthAzureStorageW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::AuthAzureStorage::~AuthAzureStorage(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::AuthAzureStorage::AuthAzureStorage(void) 
{
    m_impl = new CkAuthAzureStorageW();
}

//Chilkat::AuthAzureStorage::AuthAzureStorage(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkAuthAzureStorageW *)x;
//    if (!m_impl) m_impl = new CkAuthAzureStorageW();
//    }
//    
//Platform::IntPtr Chilkat::AuthAzureStorage::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::AuthAzureStorage::AccessKey::get()
    {
    return ref new String(m_impl ? m_impl->accessKey() : L"");
    }
void Chilkat::AuthAzureStorage::AccessKey::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AccessKey(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAzureStorage::Account::get()
    {
    return ref new String(m_impl ? m_impl->account() : L"");
    }
void Chilkat::AuthAzureStorage::Account::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Account(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAzureStorage::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::AuthAzureStorage::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAzureStorage::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::AuthAzureStorage::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::AuthAzureStorage::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::AuthAzureStorage::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::AuthAzureStorage::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::AuthAzureStorage::Scheme::get()
    {
    return ref new String(m_impl ? m_impl->scheme() : L"");
    }
void Chilkat::AuthAzureStorage::Scheme::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Scheme(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::AuthAzureStorage::Service::get()
    {
    return ref new String(m_impl ? m_impl->service() : L"");
    }
void Chilkat::AuthAzureStorage::Service::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Service(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::AuthAzureStorage::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::AuthAzureStorage::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::AuthAzureStorage::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::AuthAzureStorage::XMsVersion::get()
    {
    return ref new String(m_impl ? m_impl->xMsVersion() : L"");
    }
void Chilkat::AuthAzureStorage::XMsVersion::set(String ^newVal)
    {
        if (m_impl) m_impl->put_XMsVersion(newVal ? newVal->Data() : L"");
    }






