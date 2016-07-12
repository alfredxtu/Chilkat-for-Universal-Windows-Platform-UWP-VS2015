
// This source file is generated.

#include "pch.h"
#include "ServerSideEvent.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkServerSideEventW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::ServerSideEvent::~ServerSideEvent(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::ServerSideEvent::ServerSideEvent(void) 
{
    m_impl = new CkServerSideEventW();
}

//Chilkat::ServerSideEvent::ServerSideEvent(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkServerSideEventW *)x;
//    if (!m_impl) m_impl = new CkServerSideEventW();
//    }
//    
//Platform::IntPtr Chilkat::ServerSideEvent::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::ServerSideEvent::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::ServerSideEvent::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::ServerSideEvent::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::ServerSideEvent::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::ServerSideEvent::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::ServerSideEvent::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::ServerSideEvent::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::ServerSideEvent::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::ServerSideEvent::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::ServerSideEvent::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::ServerSideEvent::EventName::get()
    {
    return ref new String(m_impl ? m_impl->eventName() : L"");
    }
String ^Chilkat::ServerSideEvent::Data::get()
    {
    return ref new String(m_impl ? m_impl->data() : L"");
    }
String ^Chilkat::ServerSideEvent::LastEventId::get()
    {
    return ref new String(m_impl ? m_impl->lastEventId() : L"");
    }
int Chilkat::ServerSideEvent::Retry::get()
    {
    return m_impl ? m_impl->get_Retry() : 0;
    }


Boolean ServerSideEvent::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean ServerSideEvent::LoadEvent(Platform::String ^eventText)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadEvent(eventText ? eventText->Data() : L"");
    }




