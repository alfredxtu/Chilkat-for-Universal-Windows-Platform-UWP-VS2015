
// This header is generated for Chilkat v9.5.0

#pragma once

class CkXmlW;

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


public ref class Xml sealed
{
#include "friendDecls.h"
		
	private:
    CkXmlW *m_impl;

	public:
	virtual ~Xml(void);
	Xml(void);
	//Xml(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Boolean Cdata
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Content
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ContentInt
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DocType
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean EmitBom
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean EmitCompact
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean EmitXmlDecl
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Encoding
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	property int32 NumAttributes
	{
		int32 get();
	}
	property int32 NumChildren
	{
		int32 get();
	}
	property Boolean SortCaseInsensitive
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean Standalone
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Tag
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 TreeId
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
	Platform::String ^AccumulateTagContent(Platform::String ^tag, Platform::String ^skipTags);

	Boolean AddAttribute(Platform::String ^name, Platform::String ^value);

	Boolean AddAttributeInt(Platform::String ^name, int value);

	Boolean AddChildTree(Chilkat::Xml ^tree);

	void AddOrUpdateAttribute(Platform::String ^name, Platform::String ^value);

	void AddOrUpdateAttributeI(Platform::String ^name, int value);

	void AddStyleSheet(Platform::String ^styleSheet);

	void AddToAttribute(Platform::String ^name, int amount);

	void AddToChildContent(Platform::String ^tag, int amount);

	void AddToContent(int amount);

	Boolean AppendToContent(Platform::String ^str);

	Boolean BEncodeContent(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean ChildContentMatches(Platform::String ^tagPath, Platform::String ^pattern, Boolean caseSensitive);

	Platform::String ^ChilkatPath(Platform::String ^pathCmd);

	void Clear(void);

	Boolean ContentMatches(Platform::String ^pattern, Boolean caseSensitive);

	void Copy(Chilkat::Xml ^node);

	void CopyRef(Chilkat::Xml ^copyFromNode);

	Windows::Foundation::Collections::IVector<uint8>^DecodeContent(void);

	Platform::String ^DecodeEntities(Platform::String ^str);

	Boolean DecryptContent(Platform::String ^password);

	Boolean EncryptContent(Platform::String ^password);

	Xml ^ExtractChildByIndex(int index);

	Xml ^ExtractChildByName(Platform::String ^tagPath, Platform::String ^attrName, Platform::String ^attrValue);

	Xml ^FindChild(Platform::String ^tagPath);

	Boolean FindChild2(Platform::String ^tagPath);

	Xml ^FindNextRecord(Platform::String ^tagPath, Platform::String ^contentPattern);

	Xml ^FindOrAddNewChild(Platform::String ^tagPath);

	Xml ^FirstChild(void);

	Boolean FirstChild2(void);

	Platform::String ^GetAttributeName(int index);

	Platform::String ^GetAttributeValue(int index);

	int GetAttributeValueInt(int index);

	Platform::String ^GetAttrValue(Platform::String ^name);

	int GetAttrValueInt(Platform::String ^name);

	Windows::Foundation::Collections::IVector<uint8>^GetBinaryContent(Boolean unzipFlag, Boolean decryptFlag, Platform::String ^password);

	Xml ^GetChild(int index);

	Boolean GetChild2(int index);

	Boolean GetChildBoolValue(Platform::String ^tagPath);

	Platform::String ^GetChildContent(Platform::String ^tagPath);

	Platform::String ^GetChildContentByIndex(int index);

	Xml ^GetChildExact(Platform::String ^tag, Platform::String ^content);

	int GetChildIntValue(Platform::String ^tagPath);

	Platform::String ^GetChildTag(int index);

	Platform::String ^GetChildTagByIndex(int index);

	Xml ^GetChildWithAttr(Platform::String ^tagPath, Platform::String ^attrName, Platform::String ^attrValue);

	Xml ^GetChildWithContent(Platform::String ^content);

	Xml ^GetChildWithTag(Platform::String ^tagPath);

	Xml ^GetNthChildWithTag(Platform::String ^tag, int n);

	Boolean GetNthChildWithTag2(Platform::String ^tag, int n);

	Xml ^GetParent(void);

	Boolean GetParent2(void);

	Xml ^GetRoot(void);

	void GetRoot2(void);

	Xml ^GetSelf(void);

	Platform::String ^GetXml(void);

	Boolean GetXmlSb(Chilkat::StringBuilder ^sb);

	Boolean HasAttribute(Platform::String ^name);

	Boolean HasAttrWithValue(Platform::String ^name, Platform::String ^value);

	Boolean HasChildWithContent(Platform::String ^content);

	Boolean HasChildWithTag(Platform::String ^tagPath);

	Boolean HasChildWithTagAndContent(Platform::String ^tagPath, Platform::String ^content);

	void InsertChildTreeAfter(int index, Chilkat::Xml ^tree);

	void InsertChildTreeBefore(int index, Chilkat::Xml ^tree);

	Xml ^LastChild(void);

	Boolean LastChild2(void);

	Boolean LoadSb(Chilkat::StringBuilder ^sb, Boolean autoTrim);

	Boolean LoadXml(Platform::String ^xmlData);

	Boolean LoadXml2(Platform::String ^xmlData, Boolean autoTrim);

	Boolean LoadXmlFile(Platform::String ^fileName);

	Boolean LoadXmlFile2(Platform::String ^fileName, Boolean autoTrim);

	Xml ^NewChild(Platform::String ^tagPath, Platform::String ^content);

	void NewChild2(Platform::String ^tagPath, Platform::String ^content);

	Xml ^NewChildAfter(int index, Platform::String ^tag, Platform::String ^content);

	Xml ^NewChildBefore(int index, Platform::String ^tag, Platform::String ^content);

	void NewChildInt2(Platform::String ^tagPath, int value);

	Xml ^NextSibling(void);

	Boolean NextSibling2(void);

	int NumChildrenAt(Platform::String ^tagPath);

	int NumChildrenHavingTag(Platform::String ^tag);

	Xml ^PreviousSibling(void);

	Boolean PreviousSibling2(void);

	Boolean QEncodeContent(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean RemoveAllAttributes(void);

	void RemoveAllChildren(void);

	Boolean RemoveAttribute(Platform::String ^name);

	void RemoveChild(Platform::String ^tagPath);

	void RemoveChildByIndex(int index);

	void RemoveChildWithContent(Platform::String ^content);

	void RemoveFromTree(void);

	Boolean SaveBinaryContent(Platform::String ^filename, Boolean unzipFlag, Boolean decryptFlag, Platform::String ^password);

	Boolean SaveXml(Platform::String ^fileName);

	Xml ^SearchAllForContent(Chilkat::Xml ^afterPtr, Platform::String ^contentPattern);

	Boolean SearchAllForContent2(Chilkat::Xml ^afterPtr, Platform::String ^contentPattern);

	Xml ^SearchForAttribute(Chilkat::Xml ^afterPtr, Platform::String ^tag, Platform::String ^attr, Platform::String ^valuePattern);

	Boolean SearchForAttribute2(Chilkat::Xml ^afterPtr, Platform::String ^tag, Platform::String ^attr, Platform::String ^valuePattern);

	Xml ^SearchForContent(Chilkat::Xml ^afterPtr, Platform::String ^tag, Platform::String ^contentPattern);

	Boolean SearchForContent2(Chilkat::Xml ^afterPtr, Platform::String ^tag, Platform::String ^contentPattern);

	Xml ^SearchForTag(Chilkat::Xml ^afterPtr, Platform::String ^tag);

	Boolean SearchForTag2(Chilkat::Xml ^afterPtr, Platform::String ^tag);

	Boolean SetBinaryContent(Windows::Foundation::Collections::IVector<uint8>^inData, Boolean zipFlag, Boolean encryptFlag, Platform::String ^password);

	Boolean SetBinaryContentFromFile(Platform::String ^filename, Boolean zipFlag, Boolean encryptFlag, Platform::String ^password);

	void SortByAttribute(Platform::String ^attrName, Boolean ascending);

	void SortByAttributeInt(Platform::String ^attrName, Boolean ascending);

	void SortByContent(Boolean ascending);

	void SortByTag(Boolean ascending);

	void SortRecordsByAttribute(Platform::String ^sortTag, Platform::String ^attrName, Boolean ascending);

	void SortRecordsByContent(Platform::String ^sortTag, Boolean ascending);

	void SortRecordsByContentInt(Platform::String ^sortTag, Boolean ascending);

	Boolean SwapNode(Chilkat::Xml ^node);

	Boolean SwapTree(Chilkat::Xml ^tree);

	Platform::String ^TagContent(Platform::String ^tagName);

	Boolean TagEquals(Platform::String ^tag);

	Boolean UnzipContent(void);

	Boolean UnzipTree(void);

	Boolean UpdateAt(Platform::String ^tagPath, Boolean autoCreate, Platform::String ^value);

	Boolean UpdateAttrAt(Platform::String ^tagPath, Boolean autoCreate, Platform::String ^attrName, Platform::String ^attrValue);

	Boolean UpdateAttribute(Platform::String ^attrName, Platform::String ^attrValue);

	Boolean UpdateAttributeInt(Platform::String ^attrName, int value);

	void UpdateChildContent(Platform::String ^tagPath, Platform::String ^value);

	void UpdateChildContentInt(Platform::String ^tagPath, int value);

	Boolean ZipContent(void);

	Boolean ZipTree(void);



};





}


