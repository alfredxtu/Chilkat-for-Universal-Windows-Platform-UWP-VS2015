// Generated for Chilkat v9.5.0.76

// This source file is generated.

#include "pch.h"
#include "Jwe.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkJweW.h"
		
#include "include/CkBinDataW.h"
#include "include/CkStringBuilderW.h"
#include "include/CkPrivateKeyW.h"
#include "include/CkJsonObjectW.h"
#include "include/CkPublicKeyW.h"
#include "BinData.h"
#include "StringBuilder.h"
#include "PrivateKey.h"
#include "JsonObject.h"
#include "PublicKey.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Jwe::~Jwe(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Jwe::Jwe(void) 
{
    m_impl = new CkJweW();
}

//Chilkat::Jwe::Jwe(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkJweW *)x;
//    if (!m_impl) m_impl = new CkJweW();
//    }
//    
//Platform::IntPtr Chilkat::Jwe::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Jwe::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Jwe::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Jwe::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Jwe::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Jwe::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Jwe::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Jwe::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Jwe::NumRecipients::get()
    {
    return m_impl ? m_impl->get_NumRecipients() : 0;
    }
Boolean Chilkat::Jwe::PreferCompact::get()
    {
    return m_impl ? m_impl->get_PreferCompact() : false;
    }
void Chilkat::Jwe::PreferCompact::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferCompact(newVal);
    }
Boolean Chilkat::Jwe::PreferFlattened::get()
    {
    return m_impl ? m_impl->get_PreferFlattened() : false;
    }
void Chilkat::Jwe::PreferFlattened::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferFlattened(newVal);
    }
Boolean Chilkat::Jwe::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Jwe::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Jwe::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Platform::String ^Jwe::Decrypt(int index, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->decrypt(index,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Jwe::DecryptBd(int index, Chilkat::BinData ^bd)
    {
	if (m_impl == nullptr) { return false; }
	if (bd == nullptr) { return false; }
	CkBinDataW* pObj1 = bd->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->DecryptBd(index,*pObj1);
    }
Boolean Jwe::DecryptSb(int index, Platform::String ^charset, Chilkat::StringBuilder ^contentSb)
    {
	if (m_impl == nullptr) { return false; }
	if (contentSb == nullptr) { return false; }
	CkStringBuilderW* pObj2 = contentSb->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	return m_impl->DecryptSb(index,charset ? charset->Data() : L"",*pObj2);
    }
Platform::String ^Jwe::Encrypt(Platform::String ^content, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->encrypt(content ? content->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Jwe::EncryptBd(Chilkat::BinData ^contentBd, Chilkat::StringBuilder ^jweSb)
    {
	if (m_impl == nullptr) { return false; }
	if (contentBd == nullptr) { return false; }
	CkBinDataW* pObj0 = contentBd->m_impl;
	 if (!pObj0) { return false; }
	if (jweSb == nullptr) { return false; }
	CkStringBuilderW* pObj1 = jweSb->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->EncryptBd(*pObj0,*pObj1);
    }
Boolean Jwe::EncryptSb(Chilkat::StringBuilder ^contentSb, Platform::String ^charset, Chilkat::StringBuilder ^jweSb)
    {
	if (m_impl == nullptr) { return false; }
	if (contentSb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = contentSb->m_impl;
	 if (!pObj0) { return false; }
	if (jweSb == nullptr) { return false; }
	CkStringBuilderW* pObj2 = jweSb->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	return m_impl->EncryptSb(*pObj0,charset ? charset->Data() : L"",*pObj2);
    }
int Jwe::FindRecipient(Platform::String ^paramName, Platform::String ^paramValue, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->FindRecipient(paramName ? paramName->Data() : L"",paramValue ? paramValue->Data() : L"",caseSensitive);
    }
Boolean Jwe::LoadJwe(Platform::String ^jwe)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadJwe(jwe ? jwe->Data() : L"");
    }
Boolean Jwe::LoadJweSb(Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->LoadJweSb(*pObj0);
    }
Boolean Jwe::SetAad(Platform::String ^aad, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetAad(aad ? aad->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean Jwe::SetAadBd(Chilkat::BinData ^aad)
    {
	if (m_impl == nullptr) { return false; }
	if (aad == nullptr) { return false; }
	CkBinDataW* pObj0 = aad->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SetAadBd(*pObj0);
    }
Boolean Jwe::SetPassword(int index, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetPassword(index,password ? password->Data() : L"");
    }
Boolean Jwe::SetPrivateKey(int index, Chilkat::PrivateKey ^privKey)
    {
	if (m_impl == nullptr) { return false; }
	if (privKey == nullptr) { return false; }
	CkPrivateKeyW* pObj1 = privKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->SetPrivateKey(index,*pObj1);
    }
Boolean Jwe::SetProtectedHeader(Chilkat::JsonObject ^json)
    {
	if (m_impl == nullptr) { return false; }
	if (json == nullptr) { return false; }
	CkJsonObjectW* pObj0 = json->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SetProtectedHeader(*pObj0);
    }
Boolean Jwe::SetPublicKey(int index, Chilkat::PublicKey ^pubKey)
    {
	if (m_impl == nullptr) { return false; }
	if (pubKey == nullptr) { return false; }
	CkPublicKeyW* pObj1 = pubKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->SetPublicKey(index,*pObj1);
    }
Boolean Jwe::SetRecipientHeader(int index, Chilkat::JsonObject ^json)
    {
	if (m_impl == nullptr) { return false; }
	if (json == nullptr) { return false; }
	CkJsonObjectW* pObj1 = json->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->SetRecipientHeader(index,*pObj1);
    }
Boolean Jwe::SetUnprotectedHeader(Chilkat::JsonObject ^json)
    {
	if (m_impl == nullptr) { return false; }
	if (json == nullptr) { return false; }
	CkJsonObjectW* pObj0 = json->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SetUnprotectedHeader(*pObj0);
    }
Boolean Jwe::SetWrappingKey(int index, Platform::String ^encodedKey, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetWrappingKey(index,encodedKey ? encodedKey->Data() : L"",encoding ? encoding->Data() : L"");
    }




