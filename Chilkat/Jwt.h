// Generated for Chilkat v9.5.0.76

// This header is generated for Chilkat v9.5.0

#pragma once

class CkJwtW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class PrivateKey;
	ref class PublicKey;


public ref class Jwt sealed
{
#include "friendDecls.h"
		
	private:
    CkJwtW *m_impl;

	public:
	virtual ~Jwt(void);
	Jwt(void);
	//Jwt(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Boolean AutoCompact
	{
		Boolean get();
		void set(Boolean);
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
	Platform::String ^CreateJwt(Platform::String ^header, Platform::String ^payload, Platform::String ^password);

	Platform::String ^CreateJwtPk(Platform::String ^header, Platform::String ^payload, Chilkat::PrivateKey ^key);

	int GenNumericDate(int numSecOffset);

	Platform::String ^GetHeader(Platform::String ^token);

	Platform::String ^GetPayload(Platform::String ^token);

	Boolean IsTimeValid(Platform::String ^jwt, int leeway);

	Boolean VerifyJwt(Platform::String ^token, Platform::String ^password);

	Boolean VerifyJwtPk(Platform::String ^token, Chilkat::PublicKey ^key);



};





}


