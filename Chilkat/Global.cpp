
// This source file is generated.

#include "pch.h"
#include "Global.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkGlobalW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Global::~Global(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Global::Global(void) 
{
    m_impl = new CkGlobalW();
}

//Chilkat::Global::Global(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkGlobalW *)x;
//    if (!m_impl) m_impl = new CkGlobalW();
//    }
//    
//Platform::IntPtr Chilkat::Global::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


int Chilkat::Global::AnsiCodePage::get()
    {
    return m_impl ? m_impl->get_AnsiCodePage() : 0;
    }
void Chilkat::Global::AnsiCodePage::set(int newVal)
    {
        if (m_impl) m_impl->put_AnsiCodePage(newVal);
    }
String ^Chilkat::Global::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Global::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
int Chilkat::Global::DefaultNtlmVersion::get()
    {
    return m_impl ? m_impl->get_DefaultNtlmVersion() : 0;
    }
void Chilkat::Global::DefaultNtlmVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_DefaultNtlmVersion(newVal);
    }
int Chilkat::Global::DnsTimeToLive::get()
    {
    return m_impl ? m_impl->get_DnsTimeToLive() : 0;
    }
void Chilkat::Global::DnsTimeToLive::set(int newVal)
    {
        if (m_impl) m_impl->put_DnsTimeToLive(newVal);
    }
Boolean Chilkat::Global::EnableDnsCaching::get()
    {
    return m_impl ? m_impl->get_EnableDnsCaching() : false;
    }
void Chilkat::Global::EnableDnsCaching::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EnableDnsCaching(newVal);
    }
String ^Chilkat::Global::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Global::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Global::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Global::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Global::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Global::MaxThreads::get()
    {
    return m_impl ? m_impl->get_MaxThreads() : 0;
    }
void Chilkat::Global::MaxThreads::set(int newVal)
    {
        if (m_impl) m_impl->put_MaxThreads(newVal);
    }
String ^Chilkat::Global::ThreadPoolLogPath::get()
    {
    return ref new String(m_impl ? m_impl->threadPoolLogPath() : L"");
    }
void Chilkat::Global::ThreadPoolLogPath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ThreadPoolLogPath(newVal ? newVal->Data() : L"");
    }
int Chilkat::Global::UnlockStatus::get()
    {
    return m_impl ? m_impl->get_UnlockStatus() : 0;
    }
Boolean Chilkat::Global::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Global::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Global::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean Global::DnsClearCache(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->DnsClearCache();
    }
Boolean Global::FinalizeThreadPool(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FinalizeThreadPool();
    }
Boolean Global::UnlockBundle(Platform::String ^bundleUnlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UnlockBundle(bundleUnlockCode ? bundleUnlockCode->Data() : L"");
    }




