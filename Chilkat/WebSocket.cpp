// Generated for Chilkat v9.5.0.77

// This source file is generated.

#include "pch.h"
#include "WebSocket.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkWebSocketW.h"
		
#include "include/CkBinDataW.h"
#include "include/CkStringBuilderW.h"
#include "include/CkRestW.h"
#include "BinData.h"
#include "StringBuilder.h"
#include "Rest.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::WebSocket::~WebSocket(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::WebSocket::WebSocket(void) 
{
    m_impl = new CkWebSocketW();
}

//Chilkat::WebSocket::WebSocket(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkWebSocketW *)x;
//    if (!m_impl) m_impl = new CkWebSocketW();
//    }
//    
//Platform::IntPtr Chilkat::WebSocket::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


Boolean Chilkat::WebSocket::CloseAutoRespond::get()
    {
    return m_impl ? m_impl->get_CloseAutoRespond() : false;
    }
void Chilkat::WebSocket::CloseAutoRespond::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_CloseAutoRespond(newVal);
    }
String ^Chilkat::WebSocket::CloseReason::get()
    {
    return ref new String(m_impl ? m_impl->closeReason() : L"");
    }
Boolean Chilkat::WebSocket::CloseReceived::get()
    {
    return m_impl ? m_impl->get_CloseReceived() : false;
    }
int Chilkat::WebSocket::CloseStatusCode::get()
    {
    return m_impl ? m_impl->get_CloseStatusCode() : 0;
    }
String ^Chilkat::WebSocket::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::WebSocket::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::WebSocket::FinalFrame::get()
    {
    return m_impl ? m_impl->get_FinalFrame() : false;
    }
int Chilkat::WebSocket::FrameDataLen::get()
    {
    return m_impl ? m_impl->get_FrameDataLen() : 0;
    }
String ^Chilkat::WebSocket::FrameOpcode::get()
    {
    return ref new String(m_impl ? m_impl->frameOpcode() : L"");
    }
int Chilkat::WebSocket::FrameOpcodeInt::get()
    {
    return m_impl ? m_impl->get_FrameOpcodeInt() : 0;
    }
int Chilkat::WebSocket::IdleTimeoutMs::get()
    {
    return m_impl ? m_impl->get_IdleTimeoutMs() : 0;
    }
void Chilkat::WebSocket::IdleTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_IdleTimeoutMs(newVal);
    }
Boolean Chilkat::WebSocket::IsConnected::get()
    {
    return m_impl ? m_impl->get_IsConnected() : false;
    }
String ^Chilkat::WebSocket::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::WebSocket::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::WebSocket::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::WebSocket::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::WebSocket::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::WebSocket::NeedSendPong::get()
    {
    return m_impl ? m_impl->get_NeedSendPong() : false;
    }
Boolean Chilkat::WebSocket::PingAutoRespond::get()
    {
    return m_impl ? m_impl->get_PingAutoRespond() : false;
    }
void Chilkat::WebSocket::PingAutoRespond::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PingAutoRespond(newVal);
    }
Boolean Chilkat::WebSocket::PongAutoConsume::get()
    {
    return m_impl ? m_impl->get_PongAutoConsume() : false;
    }
void Chilkat::WebSocket::PongAutoConsume::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PongAutoConsume(newVal);
    }
Boolean Chilkat::WebSocket::PongConsumed::get()
    {
    return m_impl ? m_impl->get_PongConsumed() : false;
    }
int Chilkat::WebSocket::ReadFrameFailReason::get()
    {
    return m_impl ? m_impl->get_ReadFrameFailReason() : 0;
    }
Boolean Chilkat::WebSocket::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::WebSocket::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::WebSocket::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean WebSocket::AddClientHeaders(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->AddClientHeaders();
    }
Boolean WebSocket::CloseConnection(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->CloseConnection();
    }
Platform::String ^WebSocket::GetFrameData(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	const wchar_t *retStr = m_impl->getFrameData();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean WebSocket::GetFrameDataBd(Chilkat::BinData ^binData)
    {
	if (m_impl == nullptr) { return false; }
	if (binData == nullptr) { return false; }
	CkBinDataW* pObj0 = binData->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->GetFrameDataBd(*pObj0);
    }
Boolean WebSocket::GetFrameDataSb(Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->GetFrameDataSb(*pObj0);
    }
Boolean WebSocket::PollDataAvailable(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->PollDataAvailable();
    }
IAsyncOperation<Boolean>^ WebSocket::ReadFrameAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->ReadFrame();

});
    }
IAsyncOperation<Boolean>^ WebSocket::SendCloseAsync(Boolean includeStatus, int statusCode, Platform::String ^reason)
    {
return create_async([this, includeStatus, statusCode, reason]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->SendClose(includeStatus,statusCode,reason ? reason->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ WebSocket::SendFrameAsync(Platform::String ^stringToSend, Boolean finalFrame)
    {
return create_async([this, stringToSend, finalFrame]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->SendFrame(stringToSend ? stringToSend->Data() : L"",finalFrame);

});
    }
IAsyncOperation<Boolean>^ WebSocket::SendFrameBdAsync(Chilkat::BinData ^bdToSend, Boolean finalFrame)
    {
return create_async([this, bdToSend, finalFrame]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (bdToSend == nullptr) { return false; }
	CkBinDataW* pObj0 = bdToSend->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->SendFrameBd(*pObj0,finalFrame);

});
    }
IAsyncOperation<Boolean>^ WebSocket::SendFrameSbAsync(Chilkat::StringBuilder ^sbToSend, Boolean finalFrame)
    {
return create_async([this, sbToSend, finalFrame]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (sbToSend == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sbToSend->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->SendFrameSb(*pObj0,finalFrame);

});
    }
IAsyncOperation<Boolean>^ WebSocket::SendPingAsync(Platform::String ^pingData)
    {
return create_async([this, pingData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->SendPing(pingData ? pingData->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ WebSocket::SendPongAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->SendPong();

});
    }
Boolean WebSocket::UseConnection(Chilkat::Rest ^connection)
    {
	if (m_impl == nullptr) { return false; }
	if (connection == nullptr) { return false; }
	CkRestW* pObj0 = connection->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->UseConnection(*pObj0);
    }
Boolean WebSocket::ValidateServerHandshake(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxWebSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->ValidateServerHandshake();
    }




