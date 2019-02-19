// Generated for Chilkat v9.5.0.76

// This header is generated for Chilkat v9.5.0

#pragma once

class CkXmpW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Xml;
	ref class StringArray;


public ref class Xmp sealed
{
#include "friendDecls.h"
		
	private:
    CkXmpW *m_impl;

	public:
	virtual ~Xmp(void);
	Xmp(void);
	//Xmp(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
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
	property int32 NumEmbedded
	{
		int32 get();
	}
	property Boolean StructInnerDescrip
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
	Boolean AddArray(Chilkat::Xml ^xml, Platform::String ^arrType, Platform::String ^propName, Chilkat::StringArray ^values);

	void AddNsMapping(Platform::String ^ns, Platform::String ^uri);

	Boolean AddSimpleInt(Chilkat::Xml ^iXml, Platform::String ^propName, int propVal);

	Boolean AddSimpleStr(Chilkat::Xml ^iXml, Platform::String ^propName, Platform::String ^propVal);

	Boolean AddStructProp(Chilkat::Xml ^iChilkatXml, Platform::String ^structName, Platform::String ^propName, Platform::String ^propValue);

	Boolean Append(Chilkat::Xml ^iXml);

	StringArray ^GetArray(Chilkat::Xml ^iXml, Platform::String ^propName);

	Xml ^GetEmbedded(int index);

	Xml ^GetProperty(Chilkat::Xml ^iXml, Platform::String ^propName);

	int GetSimpleInt(Chilkat::Xml ^iXml, Platform::String ^propName);

	Platform::String ^GetSimpleStr(Chilkat::Xml ^iXml, Platform::String ^propName);

	StringArray ^GetStructPropNames(Chilkat::Xml ^iXml, Platform::String ^structName);

	Platform::String ^GetStructValue(Chilkat::Xml ^iXml, Platform::String ^structName, Platform::String ^propName);

	Boolean LoadAppFile(Platform::String ^filename);

	Boolean LoadFromBuffer(Windows::Foundation::Collections::IVector<uint8>^fileData, Platform::String ^ext);

	Xml ^NewXmp(void);

	Boolean RemoveAllEmbedded(void);

	Boolean RemoveArray(Chilkat::Xml ^iXml, Platform::String ^propName);

	Boolean RemoveEmbedded(int index);

	void RemoveNsMapping(Platform::String ^ns);

	Boolean RemoveSimple(Chilkat::Xml ^iXml, Platform::String ^propName);

	Boolean RemoveStruct(Chilkat::Xml ^iXml, Platform::String ^structName);

	Boolean RemoveStructProp(Chilkat::Xml ^iXml, Platform::String ^structName, Platform::String ^propName);

	Boolean SaveAppFile(Platform::String ^filename);

	Windows::Foundation::Collections::IVector<uint8>^SaveToBuffer(void);

	Boolean UnlockComponent(Platform::String ^unlockCode);



};





}


