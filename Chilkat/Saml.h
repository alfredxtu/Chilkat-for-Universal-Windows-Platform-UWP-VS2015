// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkSamlW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class StringBuilder;
	ref class Cert;


public ref class Saml sealed
{
#include "friendDecls.h"
		
	private:
    CkSamlW *m_impl;

	public:
	virtual ~Saml(void);
	Saml(void);
	//Saml(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean IgnoreTimingIssues
	{
		Boolean get();
		void set(Boolean);
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
	Boolean SignAuthNRequest(Chilkat::StringBuilder ^sbRequestXml, Platform::String ^relayState, Platform::String ^digestAlg, Chilkat::Cert ^cert, Platform::String ^binding, Chilkat::StringBuilder ^sbResult);



};





}


