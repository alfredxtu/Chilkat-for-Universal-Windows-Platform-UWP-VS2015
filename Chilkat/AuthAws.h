// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkAuthAwsW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class AuthAws sealed
{
#include "friendDecls.h"
		
	private:
    CkAuthAwsW *m_impl;

	public:
	virtual ~AuthAws(void);
	AuthAws(void);
	//AuthAws(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^AccessKey
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^CanonicalizedResourceV2
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	property Platform::String ^PrecomputedMd5
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^PrecomputedSha256
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Region
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SecretKey
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ServiceName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 SignatureVersion
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


	// ----------------------
	// Methods
	// ----------------------


};





}


