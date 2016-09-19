
// This header is generated for Chilkat v9.5.0

#pragma once

class CkRsaW;

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


public ref class Rsa sealed
{
#include "friendDecls.h"
		
	private:
    CkRsaW *m_impl;

	public:
	virtual ~Rsa(void);
	Rsa(void);
	//Rsa(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^Charset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^EncodingMode
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
	property Boolean LittleEndian
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean NoUnpad
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumBits
	{
		int32 get();
	}
	property Platform::String ^OaepHash
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean OaepPadding
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
	Windows::Foundation::Collections::IVector<uint8>^DecryptBytes(Windows::Foundation::Collections::IVector<uint8>^inData, Boolean usePrivateKey);

	Windows::Foundation::Collections::IVector<uint8>^DecryptBytesENC(Platform::String ^str, Boolean bUsePrivateKey);

	Platform::String ^DecryptString(Windows::Foundation::Collections::IVector<uint8>^binarySig, Boolean usePrivateKey);

	Platform::String ^DecryptStringENC(Platform::String ^encodedSig, Boolean usePrivateKey);

	Windows::Foundation::Collections::IVector<uint8>^EncryptBytes(Windows::Foundation::Collections::IVector<uint8>^binaryData, Boolean usePrivateKey);

	Platform::String ^EncryptBytesENC(Windows::Foundation::Collections::IVector<uint8>^data, Boolean bUsePrivateKey);

	Windows::Foundation::Collections::IVector<uint8>^EncryptString(Platform::String ^stringToEncrypt, Boolean usePrivateKey);

	Platform::String ^EncryptStringENC(Platform::String ^str, Boolean bUsePrivateKey);

	Platform::String ^ExportPrivateKey(void);

	PrivateKey ^ExportPrivateKeyObj(void);

	Platform::String ^ExportPublicKey(void);

	PublicKey ^ExportPublicKeyObj(void);

	Boolean GenerateKey(int numBits);

	Boolean ImportPrivateKey(Platform::String ^xmlKey);

	Boolean ImportPrivateKeyObj(Chilkat::PrivateKey ^key);

	Boolean ImportPublicKey(Platform::String ^xmlKey);

	Boolean ImportPublicKeyObj(Chilkat::PublicKey ^key);

	Windows::Foundation::Collections::IVector<uint8>^OpenSslSignBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^OpenSslSignBytesENC(Windows::Foundation::Collections::IVector<uint8>^data);

	Windows::Foundation::Collections::IVector<uint8>^OpenSslSignString(Platform::String ^str);

	Platform::String ^OpenSslSignStringENC(Platform::String ^str);

	Windows::Foundation::Collections::IVector<uint8>^OpenSslVerifyBytes(Windows::Foundation::Collections::IVector<uint8>^signature);

	Windows::Foundation::Collections::IVector<uint8>^OpenSslVerifyBytesENC(Platform::String ^str);

	Platform::String ^OpenSslVerifyString(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^OpenSslVerifyStringENC(Platform::String ^str);

	Windows::Foundation::Collections::IVector<uint8>^SignBytes(Windows::Foundation::Collections::IVector<uint8>^binaryData, Platform::String ^hashAlgorithm);

	Platform::String ^SignBytesENC(Windows::Foundation::Collections::IVector<uint8>^binaryData, Platform::String ^hashAlgorithm);

	Windows::Foundation::Collections::IVector<uint8>^SignHash(Windows::Foundation::Collections::IVector<uint8>^hashBytes, Platform::String ^hashAlg);

	Platform::String ^SignHashENC(Platform::String ^encodedHash, Platform::String ^hashAlg);

	Windows::Foundation::Collections::IVector<uint8>^SignString(Platform::String ^strToBeHashed, Platform::String ^hashAlgorithm);

	Platform::String ^SignStringENC(Platform::String ^strToBeHashed, Platform::String ^hashAlgorithm);

	Platform::String ^SnkToXml(Platform::String ^filename);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Boolean VerifyBytes(Windows::Foundation::Collections::IVector<uint8>^originalData, Platform::String ^hashAlgorithm, Windows::Foundation::Collections::IVector<uint8>^signatureBytes);

	Boolean VerifyBytesENC(Windows::Foundation::Collections::IVector<uint8>^originalData, Platform::String ^hashAlgorithm, Platform::String ^encodedSig);

	Boolean VerifyHash(Windows::Foundation::Collections::IVector<uint8>^hashBytes, Platform::String ^hashAlg, Windows::Foundation::Collections::IVector<uint8>^sigBytes);

	Boolean VerifyHashENC(Platform::String ^encodedHash, Platform::String ^hashAlg, Platform::String ^encodedSig);

	Boolean VerifyPrivateKey(Platform::String ^xml);

	Boolean VerifyString(Platform::String ^originalString, Platform::String ^hashAlgorithm, Windows::Foundation::Collections::IVector<uint8>^binarySig);

	Boolean VerifyStringENC(Platform::String ^originalString, Platform::String ^hashAlgorithm, Platform::String ^encodedSig);



};





}


