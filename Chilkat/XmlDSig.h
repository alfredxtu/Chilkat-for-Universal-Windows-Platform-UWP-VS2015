// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkXmlDSigW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class StringArray;
	ref class Xml;
	ref class PublicKey;
	ref class BinData;
	ref class StringBuilder;
	ref class XmlCertVault;


public ref class XmlDSig sealed
{
#include "friendDecls.h"
		
	private:
    CkXmlDSigW *m_impl;

	public:
	virtual ~XmlDSig(void);
	XmlDSig(void);
	//XmlDSig(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ExternalRefDirs
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean IgnoreExternalRefs
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
	property int32 NumReferences
	{
		int32 get();
	}
	property int32 NumSignatures
	{
		int32 get();
	}
	property int32 RefFailReason
	{
		int32 get();
	}
	property int32 Selector
	{
		int32 get();
		void set(int32);
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
	property Boolean WithComments
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Platform::String ^CanonicalizeFragment(Platform::String ^xml, Platform::String ^fragmentId, Platform::String ^version, Platform::String ^prefixList, Boolean withComments);

	Platform::String ^CanonicalizeXml(Platform::String ^xml, Platform::String ^version, Boolean withComments);

	Boolean GetCerts(Chilkat::StringArray ^sa);

	Xml ^GetKeyInfo(void);

	PublicKey ^GetPublicKey(void);

	Boolean IsReferenceExternal(int index);

	Boolean LoadSignature(Platform::String ^xmlSig);

	Boolean LoadSignatureBd(Chilkat::BinData ^binData);

	Boolean LoadSignatureSb(Chilkat::StringBuilder ^sbXmlSig);

	Platform::String ^ReferenceUri(int index);

	Boolean SetHmacKey(Platform::String ^key, Platform::String ^encoding);

	Boolean SetPublicKey(Chilkat::PublicKey ^pubKey);

	Boolean SetRefDataBd(int index, Chilkat::BinData ^binData);

	Boolean SetRefDataFile(int index, Platform::String ^path);

	Boolean SetRefDataSb(int index, Chilkat::StringBuilder ^sb, Platform::String ^charset);

	Boolean UseCertVault(Chilkat::XmlCertVault ^certVault);

	Boolean VerifyReferenceDigest(int index);

	Boolean VerifySignature(Boolean verifyReferenceDigests);



};





}


