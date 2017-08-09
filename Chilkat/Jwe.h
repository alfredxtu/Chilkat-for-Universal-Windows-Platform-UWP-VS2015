
// This header is generated for Chilkat v9.5.0

#pragma once

class CkJweW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class BinData;
	ref class StringBuilder;
	ref class PrivateKey;
	ref class JsonObject;
	ref class PublicKey;


public ref class Jwe sealed
{
#include "friendDecls.h"
		
	private:
    CkJweW *m_impl;

	public:
	virtual ~Jwe(void);
	Jwe(void);
	//Jwe(Platform::IntPtr p);

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
	property int32 NumRecipients
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
	Platform::String ^Decrypt(int index, Platform::String ^charset);

	Boolean DecryptBd(int index, Chilkat::BinData ^bd);

	Boolean DecryptSb(int index, Platform::String ^charset, Chilkat::StringBuilder ^contentSb);

	Platform::String ^Encrypt(Platform::String ^content, Platform::String ^charset);

	Boolean EncryptBd(Chilkat::BinData ^contentBd, Chilkat::StringBuilder ^jweSb);

	Boolean EncryptSb(Chilkat::StringBuilder ^contentSb, Platform::String ^charset, Chilkat::StringBuilder ^jweSb);

	int FindRecipient(Platform::String ^paramName, Platform::String ^paramValue, Boolean caseSensitive);

	Boolean LoadJwe(Platform::String ^jwe);

	Boolean LoadJweSb(Chilkat::StringBuilder ^sb);

	Boolean SetAad(Platform::String ^aad, Platform::String ^charset);

	Boolean SetAadBd(Chilkat::BinData ^aad);

	Boolean SetPassword(int index, Platform::String ^password);

	Boolean SetPrivateKey(int index, Chilkat::PrivateKey ^privKey);

	Boolean SetProtectedHeader(Chilkat::JsonObject ^json);

	Boolean SetPublicKey(int index, Chilkat::PublicKey ^pubKey);

	Boolean SetRecipientHeader(int index, Chilkat::JsonObject ^json);

	Boolean SetUnprotectedHeader(Chilkat::JsonObject ^json);

	Boolean SetWrappingKey(int index, Platform::String ^encodedKey, Platform::String ^encoding);



};





}


