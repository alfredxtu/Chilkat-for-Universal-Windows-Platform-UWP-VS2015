// Generated for Chilkat v9.5.0.77

// This source file is generated.

#include "pch.h"
#include "Xmp.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkXmpW.h"
		
#include "include/CkXmlW.h"
#include "include/CkStringArrayW.h"
#include "Xml.h"
#include "StringArray.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Xmp::~Xmp(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Xmp::Xmp(void) 
{
    m_impl = new CkXmpW();
}

//Chilkat::Xmp::Xmp(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkXmpW *)x;
//    if (!m_impl) m_impl = new CkXmpW();
//    }
//    
//Platform::IntPtr Chilkat::Xmp::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Xmp::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Xmp::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Xmp::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Xmp::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Xmp::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Xmp::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Xmp::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Xmp::NumEmbedded::get()
    {
    return m_impl ? m_impl->get_NumEmbedded() : 0;
    }
Boolean Chilkat::Xmp::StructInnerDescrip::get()
    {
    return m_impl ? m_impl->get_StructInnerDescrip() : false;
    }
void Chilkat::Xmp::StructInnerDescrip::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_StructInnerDescrip(newVal);
    }
Boolean Chilkat::Xmp::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Xmp::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Xmp::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean Xmp::AddArray(Chilkat::Xml ^xml, Platform::String ^arrType, Platform::String ^propName, Chilkat::StringArray ^values)
    {
	if (m_impl == nullptr) { return false; }
	if (xml == nullptr) { return false; }
	CkXmlW* pObj0 = xml->m_impl;
	 if (!pObj0) { return false; }
	if (values == nullptr) { return false; }
	CkStringArrayW* pObj3 = values->m_impl;
	 if (!pObj3) { return false; }
	// --- prep output arg ---
	return m_impl->AddArray(*pObj0,arrType ? arrType->Data() : L"",propName ? propName->Data() : L"",*pObj3);
    }
void Xmp::AddNsMapping(Platform::String ^ns, Platform::String ^uri)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->AddNsMapping(ns ? ns->Data() : L"",uri ? uri->Data() : L"");
    }
Boolean Xmp::AddSimpleInt(Chilkat::Xml ^iXml, Platform::String ^propName, int propVal)
    {
	if (m_impl == nullptr) { return false; }
	if (iXml == nullptr) { return false; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AddSimpleInt(*pObj0,propName ? propName->Data() : L"",propVal);
    }
Boolean Xmp::AddSimpleStr(Chilkat::Xml ^iXml, Platform::String ^propName, Platform::String ^propVal)
    {
	if (m_impl == nullptr) { return false; }
	if (iXml == nullptr) { return false; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AddSimpleStr(*pObj0,propName ? propName->Data() : L"",propVal ? propVal->Data() : L"");
    }
Boolean Xmp::AddStructProp(Chilkat::Xml ^iChilkatXml, Platform::String ^structName, Platform::String ^propName, Platform::String ^propValue)
    {
	if (m_impl == nullptr) { return false; }
	if (iChilkatXml == nullptr) { return false; }
	CkXmlW* pObj0 = iChilkatXml->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AddStructProp(*pObj0,structName ? structName->Data() : L"",propName ? propName->Data() : L"",propValue ? propValue->Data() : L"");
    }
Boolean Xmp::Append(Chilkat::Xml ^iXml)
    {
	if (m_impl == nullptr) { return false; }
	if (iXml == nullptr) { return false; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->Append(*pObj0);
    }
StringArray ^Xmp::GetArray(Chilkat::Xml ^iXml, Platform::String ^propName)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (iXml == nullptr) { return nullptr; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CkStringArrayW *pRetObj = m_impl->GetArray(*pObj0,propName ? propName->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;
    }
Xml ^Xmp::GetEmbedded(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetEmbedded(index);
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xmp::GetProperty(Chilkat::Xml ^iXml, Platform::String ^propName)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (iXml == nullptr) { return nullptr; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetProperty(*pObj0,propName ? propName->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
int Xmp::GetSimpleInt(Chilkat::Xml ^iXml, Platform::String ^propName)
    {
	if (m_impl == nullptr) { return -1; }
	if (iXml == nullptr) { return -1; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return -1; }
	// --- prep output arg ---
	return m_impl->GetSimpleInt(*pObj0,propName ? propName->Data() : L"");
    }
Platform::String ^Xmp::GetSimpleStr(Chilkat::Xml ^iXml, Platform::String ^propName)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (iXml == nullptr) { return nullptr; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getSimpleStr(*pObj0,propName ? propName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
StringArray ^Xmp::GetStructPropNames(Chilkat::Xml ^iXml, Platform::String ^structName)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (iXml == nullptr) { return nullptr; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CkStringArrayW *pRetObj = m_impl->GetStructPropNames(*pObj0,structName ? structName->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;
    }
Platform::String ^Xmp::GetStructValue(Chilkat::Xml ^iXml, Platform::String ^structName, Platform::String ^propName)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (iXml == nullptr) { return nullptr; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getStructValue(*pObj0,structName ? structName->Data() : L"",propName ? propName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Xmp::LoadAppFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadAppFile(filename ? filename->Data() : L"");
    }
Boolean Xmp::LoadFromBuffer(Windows::Foundation::Collections::IVector<uint8>^fileData, Platform::String ^ext)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (fileData != nullptr) { v0 = to_vector(fileData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	return m_impl->LoadFromBuffer(db0,ext ? ext->Data() : L"");
    }
Xml ^Xmp::NewXmp(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->NewXmp();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xmp::RemoveAllEmbedded(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->RemoveAllEmbedded();
    }
Boolean Xmp::RemoveArray(Chilkat::Xml ^iXml, Platform::String ^propName)
    {
	if (m_impl == nullptr) { return false; }
	if (iXml == nullptr) { return false; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->RemoveArray(*pObj0,propName ? propName->Data() : L"");
    }
Boolean Xmp::RemoveEmbedded(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->RemoveEmbedded(index);
    }
void Xmp::RemoveNsMapping(Platform::String ^ns)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->RemoveNsMapping(ns ? ns->Data() : L"");
    }
Boolean Xmp::RemoveSimple(Chilkat::Xml ^iXml, Platform::String ^propName)
    {
	if (m_impl == nullptr) { return false; }
	if (iXml == nullptr) { return false; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->RemoveSimple(*pObj0,propName ? propName->Data() : L"");
    }
Boolean Xmp::RemoveStruct(Chilkat::Xml ^iXml, Platform::String ^structName)
    {
	if (m_impl == nullptr) { return false; }
	if (iXml == nullptr) { return false; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->RemoveStruct(*pObj0,structName ? structName->Data() : L"");
    }
Boolean Xmp::RemoveStructProp(Chilkat::Xml ^iXml, Platform::String ^structName, Platform::String ^propName)
    {
	if (m_impl == nullptr) { return false; }
	if (iXml == nullptr) { return false; }
	CkXmlW* pObj0 = iXml->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->RemoveStructProp(*pObj0,structName ? structName->Data() : L"",propName ? propName->Data() : L"");
    }
Boolean Xmp::SaveAppFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveAppFile(filename ? filename->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^Xmp::SaveToBuffer(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->SaveToBuffer(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Xmp::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }




