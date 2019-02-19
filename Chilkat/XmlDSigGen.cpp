// Generated for Chilkat v9.5.0.76

// This source file is generated.

#include "pch.h"
#include "XmlDSigGen.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkXmlDSigGenW.h"
		
#include "include/CkStringBuilderW.h"
#include "include/CkBinDataW.h"
#include "include/CkPrivateKeyW.h"
#include "include/CkCertW.h"
#include "StringBuilder.h"
#include "BinData.h"
#include "PrivateKey.h"
#include "Cert.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::XmlDSigGen::~XmlDSigGen(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::XmlDSigGen::XmlDSigGen(void) 
{
    m_impl = new CkXmlDSigGenW();
}

//Chilkat::XmlDSigGen::XmlDSigGen(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkXmlDSigGenW *)x;
//    if (!m_impl) m_impl = new CkXmlDSigGenW();
//    }
//    
//Platform::IntPtr Chilkat::XmlDSigGen::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::XmlDSigGen::Behaviors::get()
    {
    return ref new String(m_impl ? m_impl->behaviors() : L"");
    }
void Chilkat::XmlDSigGen::Behaviors::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Behaviors(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::CustomKeyInfoXml::get()
    {
    return ref new String(m_impl ? m_impl->customKeyInfoXml() : L"");
    }
void Chilkat::XmlDSigGen::CustomKeyInfoXml::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CustomKeyInfoXml(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::XmlDSigGen::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::IncNamespacePrefix::get()
    {
    return ref new String(m_impl ? m_impl->incNamespacePrefix() : L"");
    }
void Chilkat::XmlDSigGen::IncNamespacePrefix::set(String ^newVal)
    {
        if (m_impl) m_impl->put_IncNamespacePrefix(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::IncNamespaceUri::get()
    {
    return ref new String(m_impl ? m_impl->incNamespaceUri() : L"");
    }
void Chilkat::XmlDSigGen::IncNamespaceUri::set(String ^newVal)
    {
        if (m_impl) m_impl->put_IncNamespaceUri(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::KeyInfoId::get()
    {
    return ref new String(m_impl ? m_impl->keyInfoId() : L"");
    }
void Chilkat::XmlDSigGen::KeyInfoId::set(String ^newVal)
    {
        if (m_impl) m_impl->put_KeyInfoId(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::KeyInfoKeyName::get()
    {
    return ref new String(m_impl ? m_impl->keyInfoKeyName() : L"");
    }
void Chilkat::XmlDSigGen::KeyInfoKeyName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_KeyInfoKeyName(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::KeyInfoType::get()
    {
    return ref new String(m_impl ? m_impl->keyInfoType() : L"");
    }
void Chilkat::XmlDSigGen::KeyInfoType::set(String ^newVal)
    {
        if (m_impl) m_impl->put_KeyInfoType(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::XmlDSigGen::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::XmlDSigGen::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::XmlDSigGen::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::XmlDSigGen::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::XmlDSigGen::SigId::get()
    {
    return ref new String(m_impl ? m_impl->sigId() : L"");
    }
void Chilkat::XmlDSigGen::SigId::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SigId(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::SigLocation::get()
    {
    return ref new String(m_impl ? m_impl->sigLocation() : L"");
    }
void Chilkat::XmlDSigGen::SigLocation::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SigLocation(newVal ? newVal->Data() : L"");
    }
int Chilkat::XmlDSigGen::SigLocationMod::get()
    {
    return m_impl ? m_impl->get_SigLocationMod() : 0;
    }
void Chilkat::XmlDSigGen::SigLocationMod::set(int newVal)
    {
        if (m_impl) m_impl->put_SigLocationMod(newVal);
    }
String ^Chilkat::XmlDSigGen::SigNamespacePrefix::get()
    {
    return ref new String(m_impl ? m_impl->sigNamespacePrefix() : L"");
    }
void Chilkat::XmlDSigGen::SigNamespacePrefix::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SigNamespacePrefix(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::SigNamespaceUri::get()
    {
    return ref new String(m_impl ? m_impl->sigNamespaceUri() : L"");
    }
void Chilkat::XmlDSigGen::SigNamespaceUri::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SigNamespaceUri(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::SignedInfoCanonAlg::get()
    {
    return ref new String(m_impl ? m_impl->signedInfoCanonAlg() : L"");
    }
void Chilkat::XmlDSigGen::SignedInfoCanonAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SignedInfoCanonAlg(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::SignedInfoDigestMethod::get()
    {
    return ref new String(m_impl ? m_impl->signedInfoDigestMethod() : L"");
    }
void Chilkat::XmlDSigGen::SignedInfoDigestMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SignedInfoDigestMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::SignedInfoId::get()
    {
    return ref new String(m_impl ? m_impl->signedInfoId() : L"");
    }
void Chilkat::XmlDSigGen::SignedInfoId::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SignedInfoId(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::SignedInfoPrefixList::get()
    {
    return ref new String(m_impl ? m_impl->signedInfoPrefixList() : L"");
    }
void Chilkat::XmlDSigGen::SignedInfoPrefixList::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SignedInfoPrefixList(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::SigningAlg::get()
    {
    return ref new String(m_impl ? m_impl->signingAlg() : L"");
    }
void Chilkat::XmlDSigGen::SigningAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SigningAlg(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::SigValueId::get()
    {
    return ref new String(m_impl ? m_impl->sigValueId() : L"");
    }
void Chilkat::XmlDSigGen::SigValueId::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SigValueId(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::XmlDSigGen::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::XmlDSigGen::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::XmlDSigGen::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::XmlDSigGen::X509Type::get()
    {
    return ref new String(m_impl ? m_impl->x509Type() : L"");
    }
void Chilkat::XmlDSigGen::X509Type::set(String ^newVal)
    {
        if (m_impl) m_impl->put_X509Type(newVal ? newVal->Data() : L"");
    }


Boolean XmlDSigGen::AddEnvelopedRef(Platform::String ^id, Chilkat::StringBuilder ^content, Platform::String ^digestMethod, Platform::String ^canonMethod, Platform::String ^refType)
    {
	if (m_impl == nullptr) { return false; }
	if (content == nullptr) { return false; }
	CkStringBuilderW* pObj1 = content->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->AddEnvelopedRef(id ? id->Data() : L"",*pObj1,digestMethod ? digestMethod->Data() : L"",canonMethod ? canonMethod->Data() : L"",refType ? refType->Data() : L"");
    }
Boolean XmlDSigGen::AddExternalBinaryRef(Platform::String ^uri, Chilkat::BinData ^content, Platform::String ^digestMethod, Platform::String ^refType)
    {
	if (m_impl == nullptr) { return false; }
	if (content == nullptr) { return false; }
	CkBinDataW* pObj1 = content->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->AddExternalBinaryRef(uri ? uri->Data() : L"",*pObj1,digestMethod ? digestMethod->Data() : L"",refType ? refType->Data() : L"");
    }
Boolean XmlDSigGen::AddExternalFileRef(Platform::String ^uri, Platform::String ^localFilePath, Platform::String ^digestMethod, Platform::String ^refType)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddExternalFileRef(uri ? uri->Data() : L"",localFilePath ? localFilePath->Data() : L"",digestMethod ? digestMethod->Data() : L"",refType ? refType->Data() : L"");
    }
Boolean XmlDSigGen::AddExternalTextRef(Platform::String ^uri, Chilkat::StringBuilder ^content, Platform::String ^charset, Boolean includeBom, Platform::String ^digestMethod, Platform::String ^refType)
    {
	if (m_impl == nullptr) { return false; }
	if (content == nullptr) { return false; }
	CkStringBuilderW* pObj1 = content->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->AddExternalTextRef(uri ? uri->Data() : L"",*pObj1,charset ? charset->Data() : L"",includeBom,digestMethod ? digestMethod->Data() : L"",refType ? refType->Data() : L"");
    }
Boolean XmlDSigGen::AddExternalXmlRef(Platform::String ^uri, Chilkat::StringBuilder ^content, Platform::String ^digestMethod, Platform::String ^canonMethod, Platform::String ^refType)
    {
	if (m_impl == nullptr) { return false; }
	if (content == nullptr) { return false; }
	CkStringBuilderW* pObj1 = content->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->AddExternalXmlRef(uri ? uri->Data() : L"",*pObj1,digestMethod ? digestMethod->Data() : L"",canonMethod ? canonMethod->Data() : L"",refType ? refType->Data() : L"");
    }
Boolean XmlDSigGen::AddObject(Platform::String ^id, Platform::String ^content, Platform::String ^mimeType, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddObject(id ? id->Data() : L"",content ? content->Data() : L"",mimeType ? mimeType->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean XmlDSigGen::AddObjectRef(Platform::String ^id, Platform::String ^digestMethod, Platform::String ^canonMethod, Platform::String ^prefixList, Platform::String ^refType)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddObjectRef(id ? id->Data() : L"",digestMethod ? digestMethod->Data() : L"",canonMethod ? canonMethod->Data() : L"",prefixList ? prefixList->Data() : L"",refType ? refType->Data() : L"");
    }
Boolean XmlDSigGen::AddSameDocRef(Platform::String ^id, Platform::String ^digestMethod, Platform::String ^canonMethod, Platform::String ^prefixList, Platform::String ^refType)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddSameDocRef(id ? id->Data() : L"",digestMethod ? digestMethod->Data() : L"",canonMethod ? canonMethod->Data() : L"",prefixList ? prefixList->Data() : L"",refType ? refType->Data() : L"");
    }
Boolean XmlDSigGen::AddSignatureNamespace(Platform::String ^nsPrefix, Platform::String ^nsUri)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddSignatureNamespace(nsPrefix ? nsPrefix->Data() : L"",nsUri ? nsUri->Data() : L"");
    }
Platform::String ^XmlDSigGen::ConstructSignedInfo(Chilkat::StringBuilder ^sbXml)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (sbXml == nullptr) { return nullptr; }
	CkStringBuilderW* pObj0 = sbXml->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->constructSignedInfo(*pObj0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^XmlDSigGen::CreateXmlDSig(Platform::String ^inXml)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->createXmlDSig(inXml ? inXml->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean XmlDSigGen::CreateXmlDSigSb(Chilkat::StringBuilder ^sbXml)
    {
	if (m_impl == nullptr) { return false; }
	if (sbXml == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sbXml->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->CreateXmlDSigSb(*pObj0);
    }
Boolean XmlDSigGen::SetHmacKey(Platform::String ^key, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetHmacKey(key ? key->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean XmlDSigGen::SetPrivateKey(Chilkat::PrivateKey ^privKey)
    {
	if (m_impl == nullptr) { return false; }
	if (privKey == nullptr) { return false; }
	CkPrivateKeyW* pObj0 = privKey->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SetPrivateKey(*pObj0);
    }
Boolean XmlDSigGen::SetRefIdAttr(Platform::String ^uri_or_id, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetRefIdAttr(uri_or_id ? uri_or_id->Data() : L"",value ? value->Data() : L"");
    }
Boolean XmlDSigGen::SetX509Cert(Chilkat::Cert ^cert, Boolean usePrivateKey)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SetX509Cert(*pObj0,usePrivateKey);
    }




