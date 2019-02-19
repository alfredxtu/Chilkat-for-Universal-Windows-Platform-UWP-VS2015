// Generated for Chilkat v9.5.0.76

// This header is generated for Chilkat v9.5.0

#pragma once

class CkXmlDSigGenW;

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
	ref class PrivateKey;
	ref class Cert;


public ref class XmlDSigGen sealed
{
#include "friendDecls.h"
		
	private:
    CkXmlDSigGenW *m_impl;

	public:
	virtual ~XmlDSigGen(void);
	XmlDSigGen(void);
	//XmlDSigGen(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^Behaviors
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^CustomKeyInfoXml
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^IncNamespacePrefix
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^IncNamespaceUri
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^KeyInfoId
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^KeyInfoKeyName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^KeyInfoType
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
	property Platform::String ^SigId
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SigLocation
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 SigLocationMod
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SigNamespacePrefix
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SigNamespaceUri
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SignedInfoCanonAlg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SignedInfoDigestMethod
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SignedInfoId
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SignedInfoPrefixList
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SigningAlg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SigValueId
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
	property Platform::String ^X509Type
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean AddEnvelopedRef(Platform::String ^id, Chilkat::StringBuilder ^content, Platform::String ^digestMethod, Platform::String ^canonMethod, Platform::String ^refType);

	Boolean AddExternalBinaryRef(Platform::String ^uri, Chilkat::BinData ^content, Platform::String ^digestMethod, Platform::String ^refType);

	Boolean AddExternalFileRef(Platform::String ^uri, Platform::String ^localFilePath, Platform::String ^digestMethod, Platform::String ^refType);

	Boolean AddExternalTextRef(Platform::String ^uri, Chilkat::StringBuilder ^content, Platform::String ^charset, Boolean includeBom, Platform::String ^digestMethod, Platform::String ^refType);

	Boolean AddExternalXmlRef(Platform::String ^uri, Chilkat::StringBuilder ^content, Platform::String ^digestMethod, Platform::String ^canonMethod, Platform::String ^refType);

	Boolean AddObject(Platform::String ^id, Platform::String ^content, Platform::String ^mimeType, Platform::String ^encoding);

	Boolean AddObjectRef(Platform::String ^id, Platform::String ^digestMethod, Platform::String ^canonMethod, Platform::String ^prefixList, Platform::String ^refType);

	Boolean AddSameDocRef(Platform::String ^id, Platform::String ^digestMethod, Platform::String ^canonMethod, Platform::String ^prefixList, Platform::String ^refType);

	Boolean AddSignatureNamespace(Platform::String ^nsPrefix, Platform::String ^nsUri);

	Platform::String ^ConstructSignedInfo(Chilkat::StringBuilder ^sbXml);

	Platform::String ^CreateXmlDSig(Platform::String ^inXml);

	Boolean CreateXmlDSigSb(Chilkat::StringBuilder ^sbXml);

	Boolean SetHmacKey(Platform::String ^key, Platform::String ^encoding);

	Boolean SetPrivateKey(Chilkat::PrivateKey ^privKey);

	Boolean SetRefIdAttr(Platform::String ^uri_or_id, Platform::String ^value);

	Boolean SetX509Cert(Chilkat::Cert ^cert, Boolean usePrivateKey);



};





}


