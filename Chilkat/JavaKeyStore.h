// Generated for Chilkat v9.5.0.76

// This header is generated for Chilkat v9.5.0

#pragma once

class CkJavaKeyStoreW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Pfx;
	ref class Cert;
	ref class CertChain;
	ref class PrivateKey;
	ref class BinData;
	ref class JsonObject;
	ref class StringBuilder;
	ref class Pem;
	ref class XmlCertVault;


public ref class JavaKeyStore sealed
{
#include "friendDecls.h"
		
	private:
    CkJavaKeyStoreW *m_impl;

	public:
	virtual ~JavaKeyStore(void);
	JavaKeyStore(void);
	//JavaKeyStore(Platform::IntPtr p);

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
	property int32 NumPrivateKeys
	{
		int32 get();
	}
	property int32 NumSecretKeys
	{
		int32 get();
	}
	property int32 NumTrustedCerts
	{
		int32 get();
	}
	property Boolean RequireCompleteChain
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean VerboseLogging
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean VerifyKeyedDigest
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
	Boolean AddPfx(Chilkat::Pfx ^pfx, Platform::String ^alias, Platform::String ^password);

	Boolean AddPrivateKey(Chilkat::Cert ^cert, Platform::String ^alias, Platform::String ^password);

	Boolean AddSecretKey(Platform::String ^encodedKeyBytes, Platform::String ^encoding, Platform::String ^algorithm, Platform::String ^alias, Platform::String ^password);

	Boolean AddTrustedCert(Chilkat::Cert ^cert, Platform::String ^alias);

	Boolean ChangePassword(int index, Platform::String ^oldPassword, Platform::String ^newPassword);

	CertChain ^FindCertChain(Platform::String ^alias, Boolean caseSensitive);

	PrivateKey ^FindPrivateKey(Platform::String ^password, Platform::String ^alias, Boolean caseSensitive);

	Cert ^FindTrustedCert(Platform::String ^alias, Boolean caseSensitive);

	CertChain ^GetCertChain(int index);

	PrivateKey ^GetPrivateKey(Platform::String ^password, int index);

	Platform::String ^GetPrivateKeyAlias(int index);

	Platform::String ^GetSecretKey(Platform::String ^password, int index, Platform::String ^encoding);

	Platform::String ^GetSecretKeyAlias(int index);

	Cert ^GetTrustedCert(int index);

	Platform::String ^GetTrustedCertAlias(int index);

	Boolean LoadBd(Platform::String ^password, Chilkat::BinData ^bd);

	Boolean LoadBinary(Platform::String ^password, Windows::Foundation::Collections::IVector<uint8>^jksData);

	Boolean LoadEncoded(Platform::String ^password, Platform::String ^jksEncData, Platform::String ^encoding);

	Boolean LoadFile(Platform::String ^password, Platform::String ^path);

	Boolean LoadJwkSet(Platform::String ^password, Chilkat::JsonObject ^jwkSet);

	Boolean RemoveEntry(int entryType, int index);

	Boolean SetAlias(int entryType, int index, Platform::String ^alias);

	Windows::Foundation::Collections::IVector<uint8>^ToBinary(Platform::String ^password);

	Platform::String ^ToEncodedString(Platform::String ^password, Platform::String ^encoding);

	Boolean ToFile(Platform::String ^password, Platform::String ^path);

	Boolean ToJwkSet(Platform::String ^password, Chilkat::StringBuilder ^sbJwkSet);

	Pem ^ToPem(Platform::String ^password);

	Pfx ^ToPfx(Platform::String ^password);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Boolean UseCertVault(Chilkat::XmlCertVault ^vault);



};





}


