
// This header is generated for Chilkat v9.5.0

#pragma once

class CkRestW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkRestW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Stream;
	ref class Url;
	ref class AuthAws;
	ref class AuthAzureAD;
	ref class AuthAzureStorage;
	ref class AuthGoogle;
	ref class OAuth1;
	ref class OAuth2;
	ref class Socket;


public ref class Rest sealed
{
#include "friendDecls.h"
		
	private:
    CkRestW *m_impl;

	public:
	virtual ~Rest(void);
	Rest(void);
	//Rest(Platform::IntPtr p);

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
	property Boolean AllowHeaderQB
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Authorization
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ConnectFailReason
	{
		int32 get();
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^Host
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 IdleTimeoutMs
	{
		int32 get();
		void set(int32);
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
	property Platform::String ^LastRequestHeader
	{
		Platform::String ^get();
	}
	property Platform::String ^LastRequestStartLine
	{
		Platform::String ^get();
	}
	property int32 NumResponseHeaders
	{
		int32 get();
	}
	property Platform::String ^PartSelector
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean PercentDoneOnSend
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^ResponseHeader
	{
		Platform::String ^get();
	}
	property int32 ResponseStatusCode
	{
		int32 get();
	}
	property Platform::String ^ResponseStatusText
	{
		Platform::String ^get();
	}
	property Boolean StreamNonChunked
	{
		Boolean get();
		void set(Boolean);
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
	Boolean AddHeader(Platform::String ^name, Platform::String ^value);

	Boolean AddQueryParam(Platform::String ^name, Platform::String ^value);

	Boolean AddQueryParams(Platform::String ^queryString);

	Boolean ClearAllHeaders(void);

	Boolean ClearAllQueryParams(void);

	void ClearResponseBodyStream(void);

	IAsyncOperation<Boolean>^ ConnectAsync(Platform::String ^hostname, int port, Boolean tls, Boolean autoReconnect);

	IAsyncOperation<Boolean>^ DisconnectAsync(int maxWaitMs);

	IAsyncOperation<Platform::String ^>^ FullRequestBinaryAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Windows::Foundation::Collections::IVector<uint8>^bodyBytes);

	IAsyncOperation<Platform::String ^>^ FullRequestFormUrlEncodedAsync(Platform::String ^httpVerb, Platform::String ^uriPath);

	IAsyncOperation<Platform::String ^>^ FullRequestMultipartAsync(Platform::String ^httpVerb, Platform::String ^uriPath);

	IAsyncOperation<Platform::String ^>^ FullRequestNoBodyAsync(Platform::String ^httpVerb, Platform::String ^uriPath);

	IAsyncOperation<Platform::String ^>^ FullRequestStreamAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Chilkat::Stream ^stream);

	IAsyncOperation<Platform::String ^>^ FullRequestStringAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Platform::String ^bodyText);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ ReadRespBodyBinaryAsync(void);

	IAsyncOperation<Boolean>^ ReadRespBodyStreamAsync(Chilkat::Stream ^stream, Boolean autoSetStreamCharset);

	IAsyncOperation<Platform::String ^>^ ReadRespBodyStringAsync(void);

	IAsyncOperation<int>^ ReadResponseHeaderAsync(void);

	Url ^RedirectUrl(void);

	Boolean RemoveHeader(Platform::String ^name);

	Boolean RemoveQueryParam(Platform::String ^name);

	Platform::String ^ResponseHdrByName(Platform::String ^name);

	Platform::String ^ResponseHdrName(int index);

	Platform::String ^ResponseHdrValue(int index);

	IAsyncOperation<Boolean>^ SendReqBinaryBodyAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Windows::Foundation::Collections::IVector<uint8>^body);

	IAsyncOperation<Boolean>^ SendReqFormUrlEncodedAsync(Platform::String ^httpVerb, Platform::String ^uriPath);

	IAsyncOperation<Boolean>^ SendReqMultipartAsync(Platform::String ^httpVerb, Platform::String ^uriPath);

	IAsyncOperation<Boolean>^ SendReqNoBodyAsync(Platform::String ^httpVerb, Platform::String ^uriPath);

	IAsyncOperation<Boolean>^ SendReqStreamBodyAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Chilkat::Stream ^stream);

	IAsyncOperation<Boolean>^ SendReqStringBodyAsync(Platform::String ^httpVerb, Platform::String ^uriPath, Platform::String ^bodyText);

	Boolean SetAuthAws(Chilkat::AuthAws ^authProvider);

	Boolean SetAuthAzureAD(Chilkat::AuthAzureAD ^authProvider);

	Boolean SetAuthAzureStorage(Chilkat::AuthAzureStorage ^authProvider);

	Boolean SetAuthBasic(Platform::String ^username, Platform::String ^password);

	Boolean SetAuthGoogle(Chilkat::AuthGoogle ^authProvider);

	Boolean SetAuthOAuth1(Chilkat::OAuth1 ^authProvider, Boolean useQueryParams);

	Boolean SetAuthOAuth2(Chilkat::OAuth2 ^authProvider);

	Boolean SetMultipartBodyBinary(Windows::Foundation::Collections::IVector<uint8>^bodyData);

	Boolean SetMultipartBodyStream(Chilkat::Stream ^stream);

	Boolean SetMultipartBodyString(Platform::String ^bodyText);

	Boolean SetResponseBodyStream(int expectedStatus, Boolean autoSetStreamCharset, Chilkat::Stream ^responseStream);

	Boolean UseConnection(Chilkat::Socket ^connection, Boolean autoReconnect);



};




private class CxRestProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Rest ^m_sender;
	CkRestW *m_impl;
	
    private:
	 	CxRestProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxRestProgress(CkRestW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxRestProgress(void)
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


