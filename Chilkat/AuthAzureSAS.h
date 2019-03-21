// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkAuthAzureSASW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class AuthAzureSAS sealed
{
#include "friendDecls.h"
		
	private:
    CkAuthAzureSASW *m_impl;

	public:
	virtual ~AuthAzureSAS(void);
	AuthAzureSAS(void);
	//AuthAzureSAS(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^AccessKey
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	property Platform::String ^StringToSign
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
	void Clear(void);

	Platform::String ^GenerateToken(void);

	Boolean SetNonTokenParam(Platform::String ^name, Platform::String ^value);

	Boolean SetTokenParam(Platform::String ^name, Platform::String ^authParamName, Platform::String ^value);



};





}


