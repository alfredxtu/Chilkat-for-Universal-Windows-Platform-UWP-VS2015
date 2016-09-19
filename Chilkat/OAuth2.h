
// This header is generated for Chilkat v9.5.0

#pragma once

class CkOAuth2W;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkOAuth2W.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Socket;


public ref class OAuth2 sealed
{
#include "friendDecls.h"
		
	private:
    CkOAuth2W *m_impl;

	public:
	virtual ~OAuth2(void);
	OAuth2(void);
	//OAuth2(Platform::IntPtr p);

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
	property Platform::String ^AccessToken
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^AccessTokenResponse
	{
		Platform::String ^get();
	}
	property int32 AuthFlowState
	{
		int32 get();
	}
	property Platform::String ^AuthorizationEndpoint
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ClientId
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ClientSecret
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean CodeChallenge
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^CodeChallengeMethod
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^FailureInfo
	{
		Platform::String ^get();
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
	property int32 ListenPort
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^LocalHost
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^RedirectAllowHtml
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^RedirectDenyHtml
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^RefreshToken
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Scope
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^TokenEndpoint
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^TokenType
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	Boolean Cancel(void);

	IAsyncOperation<Boolean>^ MonitorAsync(void);

	IAsyncOperation<Boolean>^ RefreshAccessTokenAsync(void);

	void SleepMs(int millisec);

	Platform::String ^StartAuth(void);

	Boolean UseConnection(Chilkat::Socket ^sock);



};




private class CxOAuth2Progress : public CkBaseProgressW
    {
	

    public:
	Chilkat::OAuth2 ^m_sender;
	CkOAuth2W *m_impl;
	
    private:
	 	CxOAuth2Progress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxOAuth2Progress(CkOAuth2W *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxOAuth2Progress(void)
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


