
// This header is generated for Chilkat v9.5.0

#pragma once

class CkStringBuilderW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class StringBuilder sealed
{
#include "friendDecls.h"
		
	private:
    CkStringBuilderW *m_impl;

	public:
	virtual ~StringBuilder(void);
	StringBuilder(void);
	//StringBuilder(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
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
	property Platform::String ^Version
	{
		Platform::String ^get();
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean VerboseLogging
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 Length
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean Append(Platform::String ^value);

	Boolean AppendInt(int value);

	Boolean AppendInt64(int64 value);

	Boolean AppendEncoded(Windows::Foundation::Collections::IVector<uint8>^binaryData, Platform::String ^encoding);

	void Clear(void);

	void Replace(Platform::String ^value, Platform::String ^replacement);

	Platform::String ^GetAsString(void);

	Boolean Equals(Platform::String ^str, Boolean caseSensitive);

	Boolean Contains(Platform::String ^str, Boolean caseSensitive);



};





}


