// Generated for Chilkat v9.5.0.77

// This source file is generated.

#include "pch.h"
#include "XmlDSig.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkXmlDSigW.h"
		
#include "include/CkStringArrayW.h"
#include "include/CkXmlW.h"
#include "include/CkPublicKeyW.h"
#include "include/CkBinDataW.h"
#include "include/CkStringBuilderW.h"
#include "include/CkXmlCertVaultW.h"
#include "StringArray.h"
#include "Xml.h"
#include "PublicKey.h"
#include "BinData.h"
#include "StringBuilder.h"
#include "XmlCertVault.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::XmlDSig::~XmlDSig(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::XmlDSig::XmlDSig(void) 
{
    m_impl = new CkXmlDSigW();
}

//Chilkat::XmlDSig::XmlDSig(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkXmlDSigW *)x;
//    if (!m_impl) m_impl = new CkXmlDSigW();
//    }
//    
//Platform::IntPtr Chilkat::XmlDSig::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::XmlDSig::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::XmlDSig::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSig::ExternalRefDirs::get()
    {
    return ref new String(m_impl ? m_impl->externalRefDirs() : L"");
    }
void Chilkat::XmlDSig::ExternalRefDirs::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ExternalRefDirs(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::XmlDSig::IgnoreExternalRefs::get()
    {
    return m_impl ? m_impl->get_IgnoreExternalRefs() : false;
    }
void Chilkat::XmlDSig::IgnoreExternalRefs::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_IgnoreExternalRefs(newVal);
    }
String ^Chilkat::XmlDSig::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::XmlDSig::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::XmlDSig::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::XmlDSig::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::XmlDSig::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::XmlDSig::NumReferences::get()
    {
    return m_impl ? m_impl->get_NumReferences() : 0;
    }
int Chilkat::XmlDSig::NumSignatures::get()
    {
    return m_impl ? m_impl->get_NumSignatures() : 0;
    }
int Chilkat::XmlDSig::RefFailReason::get()
    {
    return m_impl ? m_impl->get_RefFailReason() : 0;
    }
int Chilkat::XmlDSig::Selector::get()
    {
    return m_impl ? m_impl->get_Selector() : 0;
    }
void Chilkat::XmlDSig::Selector::set(int newVal)
    {
        if (m_impl) m_impl->put_Selector(newVal);
    }
Boolean Chilkat::XmlDSig::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::XmlDSig::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::XmlDSig::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
Boolean Chilkat::XmlDSig::WithComments::get()
    {
    return m_impl ? m_impl->get_WithComments() : false;
    }
void Chilkat::XmlDSig::WithComments::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_WithComments(newVal);
    }


Platform::String ^XmlDSig::CanonicalizeFragment(Platform::String ^xml, Platform::String ^fragmentId, Platform::String ^version, Platform::String ^prefixList, Boolean withComments)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->canonicalizeFragment(xml ? xml->Data() : L"",fragmentId ? fragmentId->Data() : L"",version ? version->Data() : L"",prefixList ? prefixList->Data() : L"",withComments);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^XmlDSig::CanonicalizeXml(Platform::String ^xml, Platform::String ^version, Boolean withComments)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->canonicalizeXml(xml ? xml->Data() : L"",version ? version->Data() : L"",withComments);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean XmlDSig::GetCerts(Chilkat::StringArray ^sa)
    {
	if (m_impl == nullptr) { return false; }
	if (sa == nullptr) { return false; }
	CkStringArrayW* pObj0 = sa->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->GetCerts(*pObj0);
    }
Xml ^XmlDSig::GetKeyInfo(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkXmlW *pRetObj = m_impl->GetKeyInfo();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
PublicKey ^XmlDSig::GetPublicKey(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkPublicKeyW *pRetObj = m_impl->GetPublicKey();
	if (!pRetObj) return nullptr;
	Chilkat::PublicKey ^pPublicKey = ref new Chilkat::PublicKey();
	pPublicKey->m_impl = pRetObj;
	return pPublicKey;
    }
Boolean XmlDSig::IsReferenceExternal(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->IsReferenceExternal(index);
    }
Boolean XmlDSig::LoadSignature(Platform::String ^xmlSig)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadSignature(xmlSig ? xmlSig->Data() : L"");
    }
Boolean XmlDSig::LoadSignatureBd(Chilkat::BinData ^binData)
    {
	if (m_impl == nullptr) { return false; }
	if (binData == nullptr) { return false; }
	CkBinDataW* pObj0 = binData->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->LoadSignatureBd(*pObj0);
    }
Boolean XmlDSig::LoadSignatureSb(Chilkat::StringBuilder ^sbXmlSig)
    {
	if (m_impl == nullptr) { return false; }
	if (sbXmlSig == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sbXmlSig->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->LoadSignatureSb(*pObj0);
    }
Platform::String ^XmlDSig::ReferenceUri(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->referenceUri(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean XmlDSig::SetHmacKey(Platform::String ^key, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetHmacKey(key ? key->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean XmlDSig::SetPublicKey(Chilkat::PublicKey ^pubKey)
    {
	if (m_impl == nullptr) { return false; }
	if (pubKey == nullptr) { return false; }
	CkPublicKeyW* pObj0 = pubKey->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SetPublicKey(*pObj0);
    }
Boolean XmlDSig::SetRefDataBd(int index, Chilkat::BinData ^binData)
    {
	if (m_impl == nullptr) { return false; }
	if (binData == nullptr) { return false; }
	CkBinDataW* pObj1 = binData->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->SetRefDataBd(index,*pObj1);
    }
Boolean XmlDSig::SetRefDataFile(int index, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetRefDataFile(index,path ? path->Data() : L"");
    }
Boolean XmlDSig::SetRefDataSb(int index, Chilkat::StringBuilder ^sb, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj1 = sb->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->SetRefDataSb(index,*pObj1,charset ? charset->Data() : L"");
    }
Boolean XmlDSig::UseCertVault(Chilkat::XmlCertVault ^certVault)
    {
	if (m_impl == nullptr) { return false; }
	if (certVault == nullptr) { return false; }
	CkXmlCertVaultW* pObj0 = certVault->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->UseCertVault(*pObj0);
    }
Boolean XmlDSig::VerifyReferenceDigest(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->VerifyReferenceDigest(index);
    }
Boolean XmlDSig::VerifySignature(Boolean verifyReferenceDigests)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->VerifySignature(verifyReferenceDigests);
    }




