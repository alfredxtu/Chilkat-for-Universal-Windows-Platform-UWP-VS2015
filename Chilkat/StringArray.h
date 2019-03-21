// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkStringArrayW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class StringArray sealed
{
#include "friendDecls.h"
		
	private:
    CkStringArrayW *m_impl;

	public:
	virtual ~StringArray(void);
	StringArray(void);
	//StringArray(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property int32 Count
	{
		int32 get();
	}
	property Boolean Crlf
	{
		Boolean get();
		void set(Boolean);
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
	property int32 Length
	{
		int32 get();
	}
	property Boolean Trim
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean Unique
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
	Boolean Append(Platform::String ^str);

	Boolean AppendSerialized(Platform::String ^encodedStr);

	void Clear(void);

	Boolean Contains(Platform::String ^str);

	int Find(Platform::String ^findStr, int startIndex);

	int FindFirstMatch(Platform::String ^matchPattern, int startIndex);

	Platform::String ^GetString(int index);

	int GetStringLen(int index);

	void InsertAt(int index, Platform::String ^str);

	Platform::String ^LastString(void);

	Boolean LoadFromFile(Platform::String ^path);

	Boolean LoadFromFile2(Platform::String ^path, Platform::String ^charset);

	void LoadFromText(Platform::String ^str);

	Platform::String ^Pop(void);

	void Prepend(Platform::String ^str);

	void Remove(Platform::String ^str);

	Boolean RemoveAt(int index);

	void ReplaceAt(int index, Platform::String ^str);

	Boolean SaveNthToFile(int index, Platform::String ^saveToPath);

	Boolean SaveToFile(Platform::String ^path);

	Boolean SaveToFile2(Platform::String ^saveToPath, Platform::String ^charset);

	Platform::String ^SaveToText(void);

	Platform::String ^Serialize(void);

	void Sort(Boolean ascending);

	void SplitAndAppend(Platform::String ^str, Platform::String ^boundary);

	void Subtract(Chilkat::StringArray ^stringArrayObj);

	void Union(Chilkat::StringArray ^stringArrayObj);



};





}


