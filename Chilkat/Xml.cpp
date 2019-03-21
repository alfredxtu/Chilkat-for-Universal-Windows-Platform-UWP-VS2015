// Generated for Chilkat v9.5.0.77

// This source file is generated.

#include "pch.h"
#include "Xml.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkXmlW.h"
		
#include "include/CkStringBuilderW.h"
#include "include/CkBinDataW.h"
#include "StringBuilder.h"
#include "BinData.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Xml::~Xml(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Xml::Xml(void) 
{
    m_impl = new CkXmlW();
}

//Chilkat::Xml::Xml(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkXmlW *)x;
//    if (!m_impl) m_impl = new CkXmlW();
//    }
//    
//Platform::IntPtr Chilkat::Xml::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


Boolean Chilkat::Xml::Cdata::get()
    {
    return m_impl ? m_impl->get_Cdata() : false;
    }
void Chilkat::Xml::Cdata::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Cdata(newVal);
    }
String ^Chilkat::Xml::Content::get()
    {
    return ref new String(m_impl ? m_impl->content() : L"");
    }
void Chilkat::Xml::Content::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Content(newVal ? newVal->Data() : L"");
    }
int Chilkat::Xml::ContentInt::get()
    {
    return m_impl ? m_impl->get_ContentInt() : 0;
    }
void Chilkat::Xml::ContentInt::set(int newVal)
    {
        if (m_impl) m_impl->put_ContentInt(newVal);
    }
String ^Chilkat::Xml::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Xml::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Xml::DocType::get()
    {
    return ref new String(m_impl ? m_impl->docType() : L"");
    }
void Chilkat::Xml::DocType::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DocType(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Xml::EmitBom::get()
    {
    return m_impl ? m_impl->get_EmitBom() : false;
    }
void Chilkat::Xml::EmitBom::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmitBom(newVal);
    }
Boolean Chilkat::Xml::EmitCompact::get()
    {
    return m_impl ? m_impl->get_EmitCompact() : false;
    }
void Chilkat::Xml::EmitCompact::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmitCompact(newVal);
    }
Boolean Chilkat::Xml::EmitXmlDecl::get()
    {
    return m_impl ? m_impl->get_EmitXmlDecl() : false;
    }
void Chilkat::Xml::EmitXmlDecl::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmitXmlDecl(newVal);
    }
String ^Chilkat::Xml::Encoding::get()
    {
    return ref new String(m_impl ? m_impl->encoding() : L"");
    }
void Chilkat::Xml::Encoding::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Encoding(newVal ? newVal->Data() : L"");
    }
int Chilkat::Xml::I::get()
    {
    return m_impl ? m_impl->get_I() : 0;
    }
void Chilkat::Xml::I::set(int newVal)
    {
        if (m_impl) m_impl->put_I(newVal);
    }
Boolean Chilkat::Xml::IsBase64::get()
    {
    return m_impl ? m_impl->get_IsBase64() : false;
    }
int Chilkat::Xml::J::get()
    {
    return m_impl ? m_impl->get_J() : 0;
    }
void Chilkat::Xml::J::set(int newVal)
    {
        if (m_impl) m_impl->put_J(newVal);
    }
int Chilkat::Xml::K::get()
    {
    return m_impl ? m_impl->get_K() : 0;
    }
void Chilkat::Xml::K::set(int newVal)
    {
        if (m_impl) m_impl->put_K(newVal);
    }
String ^Chilkat::Xml::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Xml::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Xml::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Xml::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Xml::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Xml::NumAttributes::get()
    {
    return m_impl ? m_impl->get_NumAttributes() : 0;
    }
int Chilkat::Xml::NumChildren::get()
    {
    return m_impl ? m_impl->get_NumChildren() : 0;
    }
Boolean Chilkat::Xml::SortCaseInsensitive::get()
    {
    return m_impl ? m_impl->get_SortCaseInsensitive() : false;
    }
void Chilkat::Xml::SortCaseInsensitive::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SortCaseInsensitive(newVal);
    }
Boolean Chilkat::Xml::Standalone::get()
    {
    return m_impl ? m_impl->get_Standalone() : false;
    }
void Chilkat::Xml::Standalone::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Standalone(newVal);
    }
String ^Chilkat::Xml::Tag::get()
    {
    return ref new String(m_impl ? m_impl->tag() : L"");
    }
void Chilkat::Xml::Tag::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Tag(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Xml::TagNsPrefix::get()
    {
    return ref new String(m_impl ? m_impl->tagNsPrefix() : L"");
    }
void Chilkat::Xml::TagNsPrefix::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TagNsPrefix(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Xml::TagPath::get()
    {
    return ref new String(m_impl ? m_impl->tagPath() : L"");
    }
String ^Chilkat::Xml::TagUnprefixed::get()
    {
    return ref new String(m_impl ? m_impl->tagUnprefixed() : L"");
    }
void Chilkat::Xml::TagUnprefixed::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TagUnprefixed(newVal ? newVal->Data() : L"");
    }
int Chilkat::Xml::TreeId::get()
    {
    return m_impl ? m_impl->get_TreeId() : 0;
    }
Boolean Chilkat::Xml::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Xml::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Xml::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Platform::String ^Xml::AccumulateTagContent(Platform::String ^tag, Platform::String ^skipTags)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->accumulateTagContent(tag ? tag->Data() : L"",skipTags ? skipTags->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Xml::AddAttribute(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddAttribute(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean Xml::AddAttributeInt(Platform::String ^name, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddAttributeInt(name ? name->Data() : L"",value);
    }
Boolean Xml::AddChildTree(Chilkat::Xml ^tree)
    {
	if (m_impl == nullptr) { return false; }
	if (tree == nullptr) { return false; }
	CkXmlW* pObj0 = tree->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AddChildTree(*pObj0);
    }
void Xml::AddOrUpdateAttribute(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->AddOrUpdateAttribute(name ? name->Data() : L"",value ? value->Data() : L"");
    }
void Xml::AddOrUpdateAttributeI(Platform::String ^name, int value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->AddOrUpdateAttributeI(name ? name->Data() : L"",value);
    }
void Xml::AddStyleSheet(Platform::String ^styleSheet)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->AddStyleSheet(styleSheet ? styleSheet->Data() : L"");
    }
void Xml::AddToAttribute(Platform::String ^name, int amount)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->AddToAttribute(name ? name->Data() : L"",amount);
    }
void Xml::AddToChildContent(Platform::String ^tag, int amount)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->AddToChildContent(tag ? tag->Data() : L"",amount);
    }
void Xml::AddToContent(int amount)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->AddToContent(amount);
    }
Boolean Xml::AppendToContent(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendToContent(str ? str->Data() : L"");
    }
Boolean Xml::BEncodeContent(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (inData != nullptr) { v1 = to_vector(inData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	return m_impl->BEncodeContent(charset ? charset->Data() : L"",db1);
    }
Boolean Xml::ChildContentMatches(Platform::String ^tagPath, Platform::String ^pattern, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ChildContentMatches(tagPath ? tagPath->Data() : L"",pattern ? pattern->Data() : L"",caseSensitive);
    }
Platform::String ^Xml::ChilkatPath(Platform::String ^pathCmd)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->chilkatPath(pathCmd ? pathCmd->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Xml::Clear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->Clear();
    }
Boolean Xml::ContentMatches(Platform::String ^pattern, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ContentMatches(pattern ? pattern->Data() : L"",caseSensitive);
    }
void Xml::Copy(Chilkat::Xml ^node)
    {
	if (m_impl == nullptr) { return ; }
	if (node == nullptr) { return ; }
	CkXmlW* pObj0 = node->m_impl;
	 if (!pObj0) { return ; }
	// --- prep output arg ---
	m_impl->Copy(*pObj0);
    }
void Xml::CopyRef(Chilkat::Xml ^copyFromNode)
    {
	if (m_impl == nullptr) { return ; }
	if (copyFromNode == nullptr) { return ; }
	CkXmlW* pObj0 = copyFromNode->m_impl;
	 if (!pObj0) { return ; }
	// --- prep output arg ---
	m_impl->CopyRef(*pObj0);
    }
Windows::Foundation::Collections::IVector<uint8>^Xml::DecodeContent(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->DecodeContent(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Xml::DecodeEntities(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->decodeEntities(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Xml::DecryptContent(Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->DecryptContent(password ? password->Data() : L"");
    }
Boolean Xml::EncryptContent(Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->EncryptContent(password ? password->Data() : L"");
    }
Xml ^Xml::ExtractChildByIndex(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->ExtractChildByIndex(index);
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::ExtractChildByName(Platform::String ^tagPath, Platform::String ^attrName, Platform::String ^attrValue)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->ExtractChildByName(tagPath ? tagPath->Data() : L"",attrName ? attrName->Data() : L"",attrValue ? attrValue->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::FindChild(Platform::String ^tagPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->FindChild(tagPath ? tagPath->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::FindChild2(Platform::String ^tagPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FindChild2(tagPath ? tagPath->Data() : L"");
    }
Xml ^Xml::FindNextRecord(Platform::String ^tagPath, Platform::String ^contentPattern)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->FindNextRecord(tagPath ? tagPath->Data() : L"",contentPattern ? contentPattern->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::FindOrAddNewChild(Platform::String ^tagPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->FindOrAddNewChild(tagPath ? tagPath->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::FirstChild(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->FirstChild();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::FirstChild2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FirstChild2();
    }
Platform::String ^Xml::GetAttributeName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getAttributeName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Xml::GetAttributeValue(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getAttributeValue(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Xml::GetAttributeValueInt(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->GetAttributeValueInt(index);
    }
Platform::String ^Xml::GetAttrValue(Platform::String ^name)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getAttrValue(name ? name->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Xml::GetAttrValueInt(Platform::String ^name)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->GetAttrValueInt(name ? name->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^Xml::GetBinaryContent(Boolean unzipFlag, Boolean decryptFlag, Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->GetBinaryContent(unzipFlag,decryptFlag,password ? password->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Xml ^Xml::GetChild(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetChild(index);
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::GetChild2(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->GetChild2(index);
    }
Platform::String ^Xml::GetChildAttrValue(Platform::String ^tagPath, Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getChildAttrValue(tagPath ? tagPath->Data() : L"",attrName ? attrName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Xml::GetChildBoolValue(Platform::String ^tagPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->GetChildBoolValue(tagPath ? tagPath->Data() : L"");
    }
Platform::String ^Xml::GetChildContent(Platform::String ^tagPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getChildContent(tagPath ? tagPath->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Xml::GetChildContentByIndex(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getChildContentByIndex(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Xml::GetChildContentSb(Platform::String ^tagPath, Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj1 = sb->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->GetChildContentSb(tagPath ? tagPath->Data() : L"",*pObj1);
    }
Xml ^Xml::GetChildExact(Platform::String ^tag, Platform::String ^content)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetChildExact(tag ? tag->Data() : L"",content ? content->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
int Xml::GetChildIntValue(Platform::String ^tagPath)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->GetChildIntValue(tagPath ? tagPath->Data() : L"");
    }
Platform::String ^Xml::GetChildTag(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getChildTag(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Xml::GetChildTagByIndex(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getChildTagByIndex(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Xml ^Xml::GetChildWithAttr(Platform::String ^tagPath, Platform::String ^attrName, Platform::String ^attrValue)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetChildWithAttr(tagPath ? tagPath->Data() : L"",attrName ? attrName->Data() : L"",attrValue ? attrValue->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::GetChildWithContent(Platform::String ^content)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetChildWithContent(content ? content->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::GetChildWithTag(Platform::String ^tagPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetChildWithTag(tagPath ? tagPath->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::GetNthChildWithTag(Platform::String ^tag, int n)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetNthChildWithTag(tag ? tag->Data() : L"",n);
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::GetNthChildWithTag2(Platform::String ^tag, int n)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->GetNthChildWithTag2(tag ? tag->Data() : L"",n);
    }
Xml ^Xml::GetParent(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetParent();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::GetParent2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->GetParent2();
    }
Xml ^Xml::GetRoot(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetRoot();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
void Xml::GetRoot2(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->GetRoot2();
    }
Xml ^Xml::GetSelf(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetSelf();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Platform::String ^Xml::GetXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Xml::GetXmlBd(Chilkat::BinData ^bd)
    {
	if (m_impl == nullptr) { return false; }
	if (bd == nullptr) { return false; }
	CkBinDataW* pObj0 = bd->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->GetXmlBd(*pObj0);
    }
Boolean Xml::GetXmlSb(Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->GetXmlSb(*pObj0);
    }
Boolean Xml::HasAttribute(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->HasAttribute(name ? name->Data() : L"");
    }
Boolean Xml::HasAttrWithValue(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->HasAttrWithValue(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean Xml::HasChildWithContent(Platform::String ^content)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->HasChildWithContent(content ? content->Data() : L"");
    }
Boolean Xml::HasChildWithTag(Platform::String ^tagPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->HasChildWithTag(tagPath ? tagPath->Data() : L"");
    }
Boolean Xml::HasChildWithTagAndContent(Platform::String ^tagPath, Platform::String ^content)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->HasChildWithTagAndContent(tagPath ? tagPath->Data() : L"",content ? content->Data() : L"");
    }
void Xml::InsertChildTreeAfter(int index, Chilkat::Xml ^tree)
    {
	if (m_impl == nullptr) { return ; }
	if (tree == nullptr) { return ; }
	CkXmlW* pObj1 = tree->m_impl;
	 if (!pObj1) { return ; }
	// --- prep output arg ---
	m_impl->InsertChildTreeAfter(index,*pObj1);
    }
void Xml::InsertChildTreeBefore(int index, Chilkat::Xml ^tree)
    {
	if (m_impl == nullptr) { return ; }
	if (tree == nullptr) { return ; }
	CkXmlW* pObj1 = tree->m_impl;
	 if (!pObj1) { return ; }
	// --- prep output arg ---
	m_impl->InsertChildTreeBefore(index,*pObj1);
    }
Xml ^Xml::LastChild(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->LastChild();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::LastChild2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LastChild2();
    }
Boolean Xml::LoadBd(Chilkat::BinData ^bd, Boolean autoTrim)
    {
	if (m_impl == nullptr) { return false; }
	if (bd == nullptr) { return false; }
	CkBinDataW* pObj0 = bd->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->LoadBd(*pObj0,autoTrim);
    }
Boolean Xml::LoadSb(Chilkat::StringBuilder ^sb, Boolean autoTrim)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->LoadSb(*pObj0,autoTrim);
    }
Boolean Xml::LoadXml(Platform::String ^xmlData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadXml(xmlData ? xmlData->Data() : L"");
    }
Boolean Xml::LoadXml2(Platform::String ^xmlData, Boolean autoTrim)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadXml2(xmlData ? xmlData->Data() : L"",autoTrim);
    }
Boolean Xml::LoadXmlFile(Platform::String ^fileName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadXmlFile(fileName ? fileName->Data() : L"");
    }
Boolean Xml::LoadXmlFile2(Platform::String ^fileName, Boolean autoTrim)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadXmlFile2(fileName ? fileName->Data() : L"",autoTrim);
    }
Xml ^Xml::NewChild(Platform::String ^tagPath, Platform::String ^content)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->NewChild(tagPath ? tagPath->Data() : L"",content ? content->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
void Xml::NewChild2(Platform::String ^tagPath, Platform::String ^content)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->NewChild2(tagPath ? tagPath->Data() : L"",content ? content->Data() : L"");
    }
Xml ^Xml::NewChildAfter(int index, Platform::String ^tag, Platform::String ^content)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->NewChildAfter(index,tag ? tag->Data() : L"",content ? content->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::NewChildBefore(int index, Platform::String ^tag, Platform::String ^content)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->NewChildBefore(index,tag ? tag->Data() : L"",content ? content->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
void Xml::NewChildInt2(Platform::String ^tagPath, int value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->NewChildInt2(tagPath ? tagPath->Data() : L"",value);
    }
Boolean Xml::NextInTraversal2(Chilkat::StringBuilder ^sbState)
    {
	if (m_impl == nullptr) { return false; }
	if (sbState == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sbState->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->NextInTraversal2(*pObj0);
    }
Xml ^Xml::NextSibling(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->NextSibling();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::NextSibling2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->NextSibling2();
    }
int Xml::NumChildrenAt(Platform::String ^tagPath)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->NumChildrenAt(tagPath ? tagPath->Data() : L"");
    }
int Xml::NumChildrenHavingTag(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->NumChildrenHavingTag(tag ? tag->Data() : L"");
    }
Xml ^Xml::PreviousSibling(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->PreviousSibling();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::PreviousSibling2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->PreviousSibling2();
    }
int Xml::PruneAttribute(Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->PruneAttribute(attrName ? attrName->Data() : L"");
    }
int Xml::PruneTag(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->PruneTag(tag ? tag->Data() : L"");
    }
Boolean Xml::QEncodeContent(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (inData != nullptr) { v1 = to_vector(inData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	return m_impl->QEncodeContent(charset ? charset->Data() : L"",db1);
    }
Boolean Xml::RemoveAllAttributes(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->RemoveAllAttributes();
    }
void Xml::RemoveAllChildren(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->RemoveAllChildren();
    }
Boolean Xml::RemoveAttribute(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->RemoveAttribute(name ? name->Data() : L"");
    }
void Xml::RemoveChild(Platform::String ^tagPath)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->RemoveChild(tagPath ? tagPath->Data() : L"");
    }
void Xml::RemoveChildByIndex(int index)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->RemoveChildByIndex(index);
    }
void Xml::RemoveChildWithContent(Platform::String ^content)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->RemoveChildWithContent(content ? content->Data() : L"");
    }
void Xml::RemoveFromTree(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->RemoveFromTree();
    }
int Xml::RemoveStyleSheet(Platform::String ^attrName, Platform::String ^attrValue)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->RemoveStyleSheet(attrName ? attrName->Data() : L"",attrValue ? attrValue->Data() : L"");
    }
Boolean Xml::SaveBinaryContent(Platform::String ^filename, Boolean unzipFlag, Boolean decryptFlag, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveBinaryContent(filename ? filename->Data() : L"",unzipFlag,decryptFlag,password ? password->Data() : L"");
    }
Boolean Xml::SaveXml(Platform::String ^fileName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveXml(fileName ? fileName->Data() : L"");
    }
void Xml::Scrub(Platform::String ^directives)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->Scrub(directives ? directives->Data() : L"");
    }
Xml ^Xml::SearchAllForContent(Chilkat::Xml ^afterPtr, Platform::String ^contentPattern)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (afterPtr == nullptr) { return nullptr; }
	CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->SearchAllForContent(pObj0,contentPattern ? contentPattern->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::SearchAllForContent2(Chilkat::Xml ^afterPtr, Platform::String ^contentPattern)
    {
	if (m_impl == nullptr) { return false; }
	if (afterPtr == nullptr) { return false; }
	CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	return m_impl->SearchAllForContent2(pObj0,contentPattern ? contentPattern->Data() : L"");
    }
Xml ^Xml::SearchForAttribute(Chilkat::Xml ^afterPtr, Platform::String ^tag, Platform::String ^attr, Platform::String ^valuePattern)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (afterPtr == nullptr) { return nullptr; }
	CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->SearchForAttribute(pObj0,tag ? tag->Data() : L"",attr ? attr->Data() : L"",valuePattern ? valuePattern->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::SearchForAttribute2(Chilkat::Xml ^afterPtr, Platform::String ^tag, Platform::String ^attr, Platform::String ^valuePattern)
    {
	if (m_impl == nullptr) { return false; }
	if (afterPtr == nullptr) { return false; }
	CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	return m_impl->SearchForAttribute2(pObj0,tag ? tag->Data() : L"",attr ? attr->Data() : L"",valuePattern ? valuePattern->Data() : L"");
    }
Xml ^Xml::SearchForContent(Chilkat::Xml ^afterPtr, Platform::String ^tag, Platform::String ^contentPattern)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (afterPtr == nullptr) { return nullptr; }
	CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->SearchForContent(pObj0,tag ? tag->Data() : L"",contentPattern ? contentPattern->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::SearchForContent2(Chilkat::Xml ^afterPtr, Platform::String ^tag, Platform::String ^contentPattern)
    {
	if (m_impl == nullptr) { return false; }
	if (afterPtr == nullptr) { return false; }
	CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	return m_impl->SearchForContent2(pObj0,tag ? tag->Data() : L"",contentPattern ? contentPattern->Data() : L"");
    }
Xml ^Xml::SearchForTag(Chilkat::Xml ^afterPtr, Platform::String ^tag)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (afterPtr == nullptr) { return nullptr; }
	CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->SearchForTag(pObj0,tag ? tag->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::SearchForTag2(Chilkat::Xml ^afterPtr, Platform::String ^tag)
    {
	if (m_impl == nullptr) { return false; }
	if (afterPtr == nullptr) { return false; }
	CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	return m_impl->SearchForTag2(pObj0,tag ? tag->Data() : L"");
    }
Boolean Xml::SetBinaryContent(Windows::Foundation::Collections::IVector<uint8>^inData, Boolean zipFlag, Boolean encryptFlag, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	return m_impl->SetBinaryContent(db0,zipFlag,encryptFlag,password ? password->Data() : L"");
    }
Boolean Xml::SetBinaryContentFromFile(Platform::String ^filename, Boolean zipFlag, Boolean encryptFlag, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetBinaryContentFromFile(filename ? filename->Data() : L"",zipFlag,encryptFlag,password ? password->Data() : L"");
    }
void Xml::SortByAttribute(Platform::String ^attrName, Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->SortByAttribute(attrName ? attrName->Data() : L"",ascending);
    }
void Xml::SortByAttributeInt(Platform::String ^attrName, Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->SortByAttributeInt(attrName ? attrName->Data() : L"",ascending);
    }
void Xml::SortByContent(Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->SortByContent(ascending);
    }
void Xml::SortByTag(Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->SortByTag(ascending);
    }
void Xml::SortRecordsByAttribute(Platform::String ^sortTag, Platform::String ^attrName, Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->SortRecordsByAttribute(sortTag ? sortTag->Data() : L"",attrName ? attrName->Data() : L"",ascending);
    }
void Xml::SortRecordsByContent(Platform::String ^sortTag, Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->SortRecordsByContent(sortTag ? sortTag->Data() : L"",ascending);
    }
void Xml::SortRecordsByContentInt(Platform::String ^sortTag, Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->SortRecordsByContentInt(sortTag ? sortTag->Data() : L"",ascending);
    }
Boolean Xml::SwapNode(Chilkat::Xml ^node)
    {
	if (m_impl == nullptr) { return false; }
	if (node == nullptr) { return false; }
	CkXmlW* pObj0 = node->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SwapNode(*pObj0);
    }
Boolean Xml::SwapTree(Chilkat::Xml ^tree)
    {
	if (m_impl == nullptr) { return false; }
	if (tree == nullptr) { return false; }
	CkXmlW* pObj0 = tree->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SwapTree(*pObj0);
    }
Platform::String ^Xml::TagContent(Platform::String ^tagName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->tagContent(tagName ? tagName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Xml::TagEquals(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->TagEquals(tag ? tag->Data() : L"");
    }
int Xml::TagIndex(Platform::String ^tagPath)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->TagIndex(tagPath ? tagPath->Data() : L"");
    }
Boolean Xml::TagNsEquals(Platform::String ^ns)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->TagNsEquals(ns ? ns->Data() : L"");
    }
Boolean Xml::TagUnpEquals(Platform::String ^unprefixedTag)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->TagUnpEquals(unprefixedTag ? unprefixedTag->Data() : L"");
    }
Boolean Xml::UnzipContent(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UnzipContent();
    }
Boolean Xml::UnzipTree(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UnzipTree();
    }
Boolean Xml::UpdateAt(Platform::String ^tagPath, Boolean autoCreate, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UpdateAt(tagPath ? tagPath->Data() : L"",autoCreate,value ? value->Data() : L"");
    }
Boolean Xml::UpdateAttrAt(Platform::String ^tagPath, Boolean autoCreate, Platform::String ^attrName, Platform::String ^attrValue)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UpdateAttrAt(tagPath ? tagPath->Data() : L"",autoCreate,attrName ? attrName->Data() : L"",attrValue ? attrValue->Data() : L"");
    }
Boolean Xml::UpdateAttribute(Platform::String ^attrName, Platform::String ^attrValue)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UpdateAttribute(attrName ? attrName->Data() : L"",attrValue ? attrValue->Data() : L"");
    }
Boolean Xml::UpdateAttributeInt(Platform::String ^attrName, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UpdateAttributeInt(attrName ? attrName->Data() : L"",value);
    }
void Xml::UpdateChildContent(Platform::String ^tagPath, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->UpdateChildContent(tagPath ? tagPath->Data() : L"",value ? value->Data() : L"");
    }
void Xml::UpdateChildContentInt(Platform::String ^tagPath, int value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->UpdateChildContentInt(tagPath ? tagPath->Data() : L"",value);
    }
Boolean Xml::ZipContent(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ZipContent();
    }
Boolean Xml::ZipTree(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ZipTree();
    }




