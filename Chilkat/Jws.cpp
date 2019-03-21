// Generated for Chilkat v9.5.0.77

// This source file is generated.

#include "pch.h"
#include "Jws.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkJwsW.h"
		
#include "include/CkStringBuilderW.h"
#include "include/CkBinDataW.h"
#include "include/CkJsonObjectW.h"
#include "include/CkPrivateKeyW.h"
#include "include/CkPublicKeyW.h"
#include "StringBuilder.h"
#include "BinData.h"
#include "JsonObject.h"
#include "PrivateKey.h"
#include "PublicKey.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Jws::~Jws(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Jws::Jws(void) 
{
    m_impl = new CkJwsW();
}

//Chilkat::Jws::Jws(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkJwsW *)x;
//    if (!m_impl) m_impl = new CkJwsW();
//    }
//    
//Platform::IntPtr Chilkat::Jws::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Jws::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Jws::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Jws::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Jws::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Jws::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Jws::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Jws::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Jws::NumSignatures::get()
    {
    return m_impl ? m_impl->get_NumSignatures() : 0;
    }
Boolean Chilkat::Jws::PreferCompact::get()
    {
    return m_impl ? m_impl->get_PreferCompact() : false;
    }
void Chilkat::Jws::PreferCompact::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferCompact(newVal);
    }
Boolean Chilkat::Jws::PreferFlattened::get()
    {
    return m_impl ? m_impl->get_PreferFlattened() : false;
    }
void Chilkat::Jws::PreferFlattened::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferFlattened(newVal);
    }
Boolean Chilkat::Jws::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Jws::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Jws::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Platform::String ^Jws::CreateJws(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->createJws();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Jws::CreateJwsSb(Chilkat::StringBuilder ^sbJws)
    {
	if (m_impl == nullptr) { return false; }
	if (sbJws == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sbJws->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->CreateJwsSb(*pObj0);
    }
Platform::String ^Jws::GetPayload(Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getPayload(charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Jws::GetPayloadBd(Chilkat::BinData ^binData)
    {
	if (m_impl == nullptr) { return false; }
	if (binData == nullptr) { return false; }
	CkBinDataW* pObj0 = binData->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->GetPayloadBd(*pObj0);
    }
Boolean Jws::GetPayloadSb(Platform::String ^charset, Chilkat::StringBuilder ^sbPayload)
    {
	if (m_impl == nullptr) { return false; }
	if (sbPayload == nullptr) { return false; }
	CkStringBuilderW* pObj1 = sbPayload->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->GetPayloadSb(charset ? charset->Data() : L"",*pObj1);
    }
JsonObject ^Jws::GetProtectedHeader(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonObjectW *pRetObj = m_impl->GetProtectedHeader(index);
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
JsonObject ^Jws::GetUnprotectedHeader(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonObjectW *pRetObj = m_impl->GetUnprotectedHeader(index);
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
Boolean Jws::LoadJws(Platform::String ^jwsStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadJws(jwsStr ? jwsStr->Data() : L"");
    }
Boolean Jws::LoadJwsSb(Chilkat::StringBuilder ^sbJws)
    {
	if (m_impl == nullptr) { return false; }
	if (sbJws == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sbJws->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->LoadJwsSb(*pObj0);
    }
Boolean Jws::SetMacKey(int index, Platform::String ^key, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetMacKey(index,key ? key->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean Jws::SetMacKeyBd(int index, Chilkat::BinData ^key)
    {
	if (m_impl == nullptr) { return false; }
	if (key == nullptr) { return false; }
	CkBinDataW* pObj1 = key->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->SetMacKeyBd(index,*pObj1);
    }
Boolean Jws::SetPayload(Platform::String ^payload, Platform::String ^charset, Boolean includeBom)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetPayload(payload ? payload->Data() : L"",charset ? charset->Data() : L"",includeBom);
    }
Boolean Jws::SetPayloadBd(Chilkat::BinData ^binData)
    {
	if (m_impl == nullptr) { return false; }
	if (binData == nullptr) { return false; }
	CkBinDataW* pObj0 = binData->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SetPayloadBd(*pObj0);
    }
Boolean Jws::SetPayloadSb(Chilkat::StringBuilder ^sbPayload, Platform::String ^charset, Boolean includeBom)
    {
	if (m_impl == nullptr) { return false; }
	if (sbPayload == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sbPayload->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SetPayloadSb(*pObj0,charset ? charset->Data() : L"",includeBom);
    }
Boolean Jws::SetPrivateKey(int index, Chilkat::PrivateKey ^privKey)
    {
	if (m_impl == nullptr) { return false; }
	if (privKey == nullptr) { return false; }
	CkPrivateKeyW* pObj1 = privKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->SetPrivateKey(index,*pObj1);
    }
Boolean Jws::SetProtectedHeader(int index, Chilkat::JsonObject ^json)
    {
	if (m_impl == nullptr) { return false; }
	if (json == nullptr) { return false; }
	CkJsonObjectW* pObj1 = json->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->SetProtectedHeader(index,*pObj1);
    }
Boolean Jws::SetPublicKey(int index, Chilkat::PublicKey ^pubKey)
    {
	if (m_impl == nullptr) { return false; }
	if (pubKey == nullptr) { return false; }
	CkPublicKeyW* pObj1 = pubKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->SetPublicKey(index,*pObj1);
    }
Boolean Jws::SetUnprotectedHeader(int index, Chilkat::JsonObject ^json)
    {
	if (m_impl == nullptr) { return false; }
	if (json == nullptr) { return false; }
	CkJsonObjectW* pObj1 = json->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->SetUnprotectedHeader(index,*pObj1);
    }
int Jws::Validate(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->Validate(index);
    }




