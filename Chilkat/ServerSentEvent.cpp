
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


Boolean ServerSentEvent::LoadEvent(Platform::String ^eventText)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadEvent(eventText ? eventText->Data() : L"");
    }




