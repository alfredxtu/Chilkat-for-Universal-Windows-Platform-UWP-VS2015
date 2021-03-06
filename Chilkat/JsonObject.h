// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkJsonObjectW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class JsonArray;
	ref class StringTable;
	ref class BinData;
	ref class CkDateTime;
	ref class DtObj;
	ref class StringBuilder;
	ref class Hashtable;


public ref class JsonObject sealed
{
#include "friendDecls.h"
		
	private:
    CkJsonObjectW *m_impl;

	public:
	virtual ~JsonObject(void);
	JsonObject(void);
	//JsonObject(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DelimiterChar
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean EmitCompact
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean EmitCrLf
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 I
	{
		int32 get();
		void set(int32);
	}
	property int32 J
	{
		int32 get();
		void set(int32);
	}
	property int32 K
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
	property Platform::String ^PathPrefix
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	Boolean AddArrayAt(int index, Platform::String ^name);

	Boolean AddBoolAt(int index, Platform::String ^name, Boolean value);

	Boolean AddIntAt(int index, Platform::String ^name, int value);

	Boolean AddNullAt(int index, Platform::String ^name);

	Boolean AddNumberAt(int index, Platform::String ^name, Platform::String ^numericStr);

	Boolean AddObjectAt(int index, Platform::String ^name);

	Boolean AddStringAt(int index, Platform::String ^name, Platform::String ^value);

	JsonArray ^AppendArray(Platform::String ^name);

	Boolean AppendBool(Platform::String ^name, Boolean value);

	Boolean AppendInt(Platform::String ^name, int value);

	JsonObject ^AppendObject(Platform::String ^name);

	Boolean AppendString(Platform::String ^name, Platform::String ^value);

	Boolean AppendStringArray(Platform::String ^name, Chilkat::StringTable ^values);

	JsonArray ^ArrayAt(int index);

	JsonArray ^ArrayOf(Platform::String ^jsonPath);

	Boolean BoolAt(int index);

	Boolean BoolOf(Platform::String ^jsonPath);

	Boolean BytesOf(Platform::String ^jsonPath, Platform::String ^encoding, Chilkat::BinData ^bd);

	void Clear(void);

	JsonObject ^Clone(void);

	Boolean DateOf(Platform::String ^jsonPath, Chilkat::CkDateTime ^dateTime);

	Boolean Delete(Platform::String ^name);

	Boolean DeleteAt(int index);

	Boolean DtOf(Platform::String ^jsonPath, Boolean bLocal, Chilkat::DtObj ^dt);

	Platform::String ^Emit(void);

	Boolean EmitBd(Chilkat::BinData ^bd);

	Boolean EmitSb(Chilkat::StringBuilder ^sb);

	Platform::String ^EmitWithSubs(Chilkat::Hashtable ^subs, Boolean omitEmpty);

	JsonObject ^FindObjectWithMember(Platform::String ^name);

	JsonObject ^FindRecord(Platform::String ^arrayPath, Platform::String ^relPath, Platform::String ^value, Boolean caseSensitive);

	Platform::String ^FindRecordString(Platform::String ^arrayPath, Platform::String ^relPath, Platform::String ^value, Boolean caseSensitive, Platform::String ^retRelPath);

	Boolean FirebaseApplyEvent(Platform::String ^name, Platform::String ^data);

	Boolean FirebasePatch(Platform::String ^jsonPath, Platform::String ^jsonData);

	Boolean FirebasePut(Platform::String ^jsonPath, Platform::String ^value);

	JsonObject ^GetDocRoot(void);

	Boolean HasMember(Platform::String ^jsonPath);

	int IndexOf(Platform::String ^name);

	int IntAt(int index);

	int IntOf(Platform::String ^jsonPath);

	Boolean IsNullAt(int index);

	Boolean IsNullOf(Platform::String ^jsonPath);

	int JsonTypeOf(Platform::String ^jsonPath);

	Boolean Load(Platform::String ^json);

	Boolean LoadBd(Chilkat::BinData ^bd);

	Boolean LoadFile(Platform::String ^path);

	Boolean LoadPredefined(Platform::String ^name);

	Boolean LoadSb(Chilkat::StringBuilder ^sb);

	Platform::String ^NameAt(int index);

	JsonObject ^ObjectAt(int index);

	JsonObject ^ObjectOf(Platform::String ^jsonPath);

	Boolean Predefine(Platform::String ^name);

	Boolean Rename(Platform::String ^oldName, Platform::String ^newName);

	Boolean RenameAt(int index, Platform::String ^name);

	Boolean SetBoolAt(int index, Boolean value);

	Boolean SetBoolOf(Platform::String ^jsonPath, Boolean value);

	Boolean SetIntAt(int index, int value);

	Boolean SetIntOf(Platform::String ^jsonPath, int value);

	Boolean SetNullAt(int index);

	Boolean SetNullOf(Platform::String ^jsonPath);

	Boolean SetNumberAt(int index, Platform::String ^value);

	Boolean SetNumberOf(Platform::String ^jsonPath, Platform::String ^value);

	Boolean SetStringAt(int index, Platform::String ^value);

	Boolean SetStringOf(Platform::String ^jsonPath, Platform::String ^value);

	int SizeOfArray(Platform::String ^jsonPath);

	Platform::String ^StringAt(int index);

	Platform::String ^StringOf(Platform::String ^jsonPath);

	Boolean StringOfSb(Platform::String ^jsonPath, Chilkat::StringBuilder ^sb);

	Boolean Swap(int index1, int index2);

	int TypeAt(int index);

	Boolean UpdateBd(Platform::String ^jsonPath, Platform::String ^encoding, Chilkat::BinData ^bd);

	Boolean UpdateBool(Platform::String ^jsonPath, Boolean value);

	Boolean UpdateInt(Platform::String ^jsonPath, int value);

	Boolean UpdateNewArray(Platform::String ^jsonPath);

	Boolean UpdateNewObject(Platform::String ^jsonPath);

	Boolean UpdateNull(Platform::String ^jsonPath);

	Boolean UpdateNumber(Platform::String ^jsonPath, Platform::String ^numericStr);

	Boolean UpdateSb(Platform::String ^jsonPath, Chilkat::StringBuilder ^sb);

	Boolean UpdateString(Platform::String ^jsonPath, Platform::String ^value);

	Boolean WriteFile(Platform::String ^path);



};





}


