// Generated for Chilkat v9.5.0.76

// This header is generated for Chilkat v9.5.0

#pragma once

class CkPdfW;

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
	ref class CkDateTime;
	ref class Cert;
	ref class BinData;


public ref class Pdf sealed
{
#include "friendDecls.h"
		
	private:
    CkPdfW *m_impl;

	public:
	virtual ~Pdf(void);
	Pdf(void);
	//Pdf(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 I
	{
		int32 get();
		void set(int32);
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
	property int32 NumPages
	{
		int32 get();
	}
	property int32 NumSignatures
	{
		int32 get();
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
	Boolean ExtractPageTextSa(int pageNum, Chilkat::StringArray ^sa);

	Platform::String ^GetObjectInfo(Platform::String ^pdfPath);

	Platform::String ^GetPageContents(int pageNum);

	Boolean GetSignatureSigningTime(int index, Chilkat::CkDateTime ^dt);

	Boolean GetSignerCert(int index, Chilkat::Cert ^cert);

	Platform::String ^GetSignerName(int index);

	Platform::String ^GetSigningReason(int index);

	Boolean HasSignatureSigningTime(int index);

	Boolean Open(Platform::String ^filePath);

	Boolean OpenBd(Chilkat::BinData ^pdfData);

	Boolean VerifySignatures(void);



};





}


