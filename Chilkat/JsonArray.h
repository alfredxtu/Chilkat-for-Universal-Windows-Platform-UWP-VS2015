// Generated for Chilkat v9.5.0.76

// This header is generated for Chilkat v9.5.0

#pragma once

class CkJsonArrayW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class CkDateTime;
	ref class DtObj;
	ref class StringBuilder;
	ref class JsonObject;


public ref class JsonArray sealed
{
#include "friendDecls.h"
		
	private:
    CkJsonArrayW *m_impl;

	public:
	virtual ~JsonArray(void);
	JsonArray(void);
	//JsonArray(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean EmitCompact
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean EmitCrlf
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
	property int32 Size
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
	Boolean AddArrayAt(int index);

	Boolean AddBoolAt(int index, Boolean value);

	Boolean AddIntAt(int index, int value);

	Boolean AddNullAt(int index);

	Boolean AddNumberAt(int index, Platform::String ^numericStr);

	Boolean AddObjectAt(int index);

	Boolean AddStringAt(int index, Platform::String ^value);

	JsonArray ^ArrayAt(int index);

	Boolean BoolAt(int index);

	void Clear(void);

	Boolean DateAt(int index, Chilkat::CkDateTime ^dateTime);

	Boolean DeleteAt(int index);

	Boolean DtAt(int index, Boolean bLocal, Chilkat::DtObj ^dt);

	Platform::String ^Emit(void);

	Boolean EmitSb(Chilkat::StringBuilder ^sb);

	int FindObject(Platform::String ^name, Platform::String ^value, Boolean caseSensitive);

	int FindString(Platform::String ^value, Boolean caseSensitive);

	int IntAt(int index);

	Boolean IsNullAt(int index);

	Boolean Load(Platform::String ^jsonArray);

	Boolean LoadSb(Chilkat::StringBuilder ^sb);

	JsonObject ^ObjectAt(int index);

	Boolean SetBoolAt(int index, Boolean value);

	Boolean SetIntAt(int index, int value);

	Boolean SetNullAt(int index);

	Boolean SetNumberAt(int index, Platform::String ^value);

	Boolean SetStringAt(int index, Platform::String ^value);

	Platform::String ^StringAt(int index);

	Boolean Swap(int index1, int index2);

	int TypeAt(int index);



};





}


