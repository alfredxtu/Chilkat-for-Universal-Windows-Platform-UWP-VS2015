
// This source file is generated.

#include "pch.h"
#include "ServerSentEvent.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkServerSentEventW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::ServerSentEvent::~ServerSentEvent(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::ServerSentEvent::ServerSentEvent(void) 
{
    m_impl = new CkServerSentEventW();
}

//Chilkat::ServerSentEvent::ServerSentEvent(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkServerSentEventW *)x;
//    if (!m_impl) m_impl = new CkServerSentEventW();
//    }
//    
//Platform::IntPtr Chilkat::ServerSentEvent::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::ServerSentEvent::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::ServerSentEvent::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::ServerSentEvent::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::ServerSentEvent::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::ServerSentEvent::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::ServerSentEvent::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::ServerSentEvent::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::ServerSentEvent::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::ServerSentEvent::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::ServerSentEvent::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::ServerSentEvent::Data::get()
    {
    return ref new String(m_impl ? m_impl->data() : L"");
    }
String ^Chilkat::ServerSentEvent::EventName::get()
    {
    return ref new String(m_impl ? m_impl->eventName() : L"");
    }
String ^Chilkat::ServerSentEvent::LastEventId::get()
    {
    return ref new String(m_impl ? m_impl->lastEventId() : L"");
    }
int Chilkat::ServerSentEvent::Retry::get()
    {
    return m_impl ? m_impl->get_Retry() : 0;
    }


Boolean ServerSentEvent::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean ServerSentEvent::LoadEvent(Platform::String ^eventText)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadEvent(eventText ? eventText->Data() : L"");
    }




