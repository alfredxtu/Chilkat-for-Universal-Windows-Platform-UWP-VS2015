// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkJwsW;

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
	ref class BinData;
	ref class JsonObject;
	ref class PrivateKey;
	ref class PublicKey;


public ref class Jws sealed
{
#include "friendDecls.h"
		
	private:
    CkJwsW *m_impl;

	public:
	virtual ~Jws(void);
	Jws(void);
	//Jws(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
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
	property int32 NumSignatures
	{
		int32 get();
	}
	property Boolean PreferCompact
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean PreferFlattened
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
	Platform::String ^CreateJws(void);

	Boolean CreateJwsSb(Chilkat::StringBuilder ^sbJws);

	Platform::String ^GetPayload(Platform::String ^charset);

	Boolean GetPayloadBd(Chilkat::BinData ^binData);

	Boolean GetPayloadSb(Platform::String ^charset, Chilkat::StringBuilder ^sbPayload);

	JsonObject ^GetProtectedHeader(int index);

	JsonObject ^GetUnprotectedHeader(int index);

	Boolean LoadJws(Platform::String ^jwsStr);

	Boolean LoadJwsSb(Chilkat::StringBuilder ^sbJws);

	Boolean SetMacKey(int index, Platform::String ^key, Platform::String ^encoding);

	Boolean SetMacKeyBd(int index, Chilkat::BinData ^key);

	Boolean SetPayload(Platform::String ^payload, Platform::String ^charset, Boolean includeBom);

	Boolean SetPayloadBd(Chilkat::BinData ^binData);

	Boolean SetPayloadSb(Chilkat::StringBuilder ^sbPayload, Platform::String ^charset, Boolean includeBom);

	Boolean SetPrivateKey(int index, Chilkat::PrivateKey ^privKey);

	Boolean SetProtectedHeader(int index, Chilkat::JsonObject ^json);

	Boolean SetPublicKey(int index, Chilkat::PublicKey ^pubKey);

	Boolean SetUnprotectedHeader(int index, Chilkat::JsonObject ^json);

	int Validate(int index);



};





}


