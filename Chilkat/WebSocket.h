// Generated for Chilkat v9.5.0.76

// This header is generated for Chilkat v9.5.0

#pragma once

class CkWebSocketW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkWebSocketW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class BinData;
	ref class StringBuilder;
	ref class Rest;


public ref class WebSocket sealed
{
#include "friendDecls.h"
		
	private:
    CkWebSocketW *m_impl;

	public:
	virtual ~WebSocket(void);
	WebSocket(void);
	//WebSocket(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	


	event ProgressInfoEventHandler^ ProgressInfo;
	event AbortCheckEventHandler^ AbortCheck;
	event PercentDoneEventHandler^ PercentDone;

	void FireAbortCheck(bool *abort)
	    {
	    Chilkat::AbortCheckEventArgs ^args = ref new Chilkat::AbortCheckEventArgs;
	    args->Abort = false;
	    AbortCheck(this,args);
	    if (abort) *abort = args->Abort;
	    }
	void FirePercentDone(int percentDone, bool *abort)
	    {
	    Chilkat::PercentDoneEventArgs ^args = ref new Chilkat::PercentDoneEventArgs;
	    args->PercentDone = percentDone;
	    args->Abort = false;
	    PercentDone(this,args);
	    if (abort) *abort = args->Abort;
	    }
	void FireProgressInfo(Platform::String ^name, Platform::String ^value)
	    {
	    Chilkat::ProgressInfoEventArgs ^args = ref new Chilkat::ProgressInfoEventArgs;
	    args->Name = name;
	    args->Value = value;
	    ProgressInfo(this,args);
	    }



	// ----------------------
	// Properties
	// ----------------------
	property Boolean CloseAutoRespond
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^CloseReason
	{
		Platform::String ^get();
	}
	property Boolean CloseReceived
	{
		Boolean get();
	}
	property int32 CloseStatusCode
	{
		int32 get();
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean FinalFrame
	{
		Boolean get();
	}
	property int32 FrameDataLen
	{
		int32 get();
	}
	property Platform::String ^FrameOpcode
	{
		Platform::String ^get();
	}
	property int32 FrameOpcodeInt
	{
		int32 get();
	}
	property int32 IdleTimeoutMs
	{
		int32 get();
		void set(int32);
	}
	property Boolean IsConnected
	{
		Boolean get();
	}
	property Platform::String ^LastErrorHtml
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorText
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorXml
	{
		Platform::String ^get();
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean NeedSendPong
	{
		Boolean get();
	}
	property Boolean PingAutoRespond
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean PongAutoConsume
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean PongConsumed
	{
		Boolean get();
	}
	property int32 ReadFrameFailReason
	{
		int32 get();
	}
	property Boolean VerboseLogging
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Version
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean AddClientHeaders(void);

	Boolean CloseConnection(void);

	Platform::String ^GetFrameData(void);

	Boolean GetFrameDataBd(Chilkat::BinData ^binData);

	Boolean GetFrameDataSb(Chilkat::StringBuilder ^sb);

	Boolean PollDataAvailable(void);

	IAsyncOperation<Boolean>^ ReadFrameAsync(void);

	IAsyncOperation<Boolean>^ SendCloseAsync(Boolean includeStatus, int statusCode, Platform::String ^reason);

	IAsyncOperation<Boolean>^ SendFrameAsync(Platform::String ^stringToSend, Boolean finalFrame);

	IAsyncOperation<Boolean>^ SendFrameBdAsync(Chilkat::BinData ^bdToSend, Boolean finalFrame);

	IAsyncOperation<Boolean>^ SendFrameSbAsync(Chilkat::StringBuilder ^sbToSend, Boolean finalFrame);

	IAsyncOperation<Boolean>^ SendPingAsync(Platform::String ^pingData);

	IAsyncOperation<Boolean>^ SendPongAsync(void);

	Boolean UseConnection(Chilkat::Rest ^connection);

	Boolean ValidateServerHandshake(void);



};




private class CxWebSocketProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::WebSocket ^m_sender;
	CkWebSocketW *m_impl;
	
    private:
	 	CxWebSocketProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxWebSocketProgress(CkWebSocketW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxWebSocketProgress(void)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(0);
	    m_impl = 0;
	    }


	// overrides for CkBaseProgressW methods
	void AbortCheck(bool *abort) 
	    { 
	    // if (is_task_cancellation_requested()) { *abort = true; return; }

	    if (m_sender == nullptr) return;
	    m_sender->FireAbortCheck(abort);
	    }

	void PercentDone(int pctDone, bool *abort) 
	    { 
	    // if (is_task_cancellation_requested()) { *abort = true; return; }

	    if (m_sender == nullptr) return;
	    m_sender->FirePercentDone(pctDone,abort);
	    }

	void ProgressInfo(const wchar_t *name, const wchar_t *value) 
	    { 
	    if (m_sender == nullptr) return;
	    Platform::String ^s1 = ref new Platform::String(name);
	    Platform::String ^s2 = ref new Platform::String(value);
		m_sender->FireProgressInfo(s1,s2);
	    }






    };







}


