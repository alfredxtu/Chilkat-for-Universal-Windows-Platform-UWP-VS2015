
// This header is generated for Chilkat v9.5.0

#pragma once

class CkAuthAzureStorageW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class AuthAzureStorage sealed
{
#include "friendDecls.h"
		
	private:
    CkAuthAzureStorageW *m_impl;

	public:
	virtual ~AuthAzureStorage(void);
	AuthAzureStorage(void);
	//AuthAzureStorage(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^AccessKey
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Account
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
	property Platform::String ^Scheme
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Service
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
	property Platform::String ^XMsVersion
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------


};





}


