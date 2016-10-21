
// This header is generated for Chilkat v9.5.0

#pragma once

class CkStringTableW;

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


public ref class StringTable sealed
{
#include "friendDecls.h"
		
	private:
    CkStringTableW *m_impl;

	public:
	virtual ~StringTable(void);
	StringTable(void);
	//StringTable(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property int32 Count
	{
		int32 get();
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
	Boolean Append(Platform::String ^value);

	Boolean AppendFromFile(int maxLineLen, Platform::String ^charset, Platform::String ^path);

	Boolean AppendFromSb(Chilkat::StringBuilder ^sb);

	void Clear(void);

	Boolean SaveToFile(Platform::String ^charset, Boolean bCrlf, Platform::String ^path);

	Boolean SplitAndAppend(Platform::String ^inStr, Platform::String ^delimiterChar, Boolean exceptDoubleQuoted, Boolean exceptEscaped);

	Platform::String ^StringAt(int index);



};





}


