// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkCsrW;

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
	ref class BinData;
	ref class PublicKey;


public ref class Csr sealed
{
#include "friendDecls.h"
		
	private:
    CkCsrW *m_impl;

	public:
	virtual ~Csr(void);
	Csr(void);
	//Csr(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^CommonName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Company
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^CompanyDivision
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Country
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^EmailAddress
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
	property Platform::String ^Locality
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^State
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
	Boolean GenCsrBd(Chilkat::PrivateKey ^privKey, Chilkat::BinData ^csrData);

	Platform::String ^GenCsrPem(Chilkat::PrivateKey ^privKey);

	Boolean GetPublicKey(Chilkat::PublicKey ^pubkey);

	Platform::String ^GetSubjectField(Platform::String ^oid);

	Boolean LoadCsrPem(Platform::String ^csrPemStr);

	Boolean SetSubjectField(Platform::String ^oid, Platform::String ^value, Platform::String ^asnType);



};





}


