// Generated for Chilkat v9.5.0.76

// This source file is generated.

#include "pch.h"
#include "Csr.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkCsrW.h"
		
#include "include/CkPrivateKeyW.h"
#include "include/CkBinDataW.h"
#include "include/CkPublicKeyW.h"
#include "PrivateKey.h"
#include "BinData.h"
#include "PublicKey.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Csr::~Csr(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Csr::Csr(void) 
{
    m_impl = new CkCsrW();
}

//Chilkat::Csr::Csr(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkCsrW *)x;
//    if (!m_impl) m_impl = new CkCsrW();
//    }
//    
//Platform::IntPtr Chilkat::Csr::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Csr::CommonName::get()
    {
    return ref new String(m_impl ? m_impl->commonName() : L"");
    }
void Chilkat::Csr::CommonName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CommonName(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Csr::Company::get()
    {
    return ref new String(m_impl ? m_impl->company() : L"");
    }
void Chilkat::Csr::Company::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Company(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Csr::CompanyDivision::get()
    {
    return ref new String(m_impl ? m_impl->companyDivision() : L"");
    }
void Chilkat::Csr::CompanyDivision::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CompanyDivision(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Csr::Country::get()
    {
    return ref new String(m_impl ? m_impl->country() : L"");
    }
void Chilkat::Csr::Country::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Country(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Csr::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Csr::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Csr::EmailAddress::get()
    {
    return ref new String(m_impl ? m_impl->emailAddress() : L"");
    }
void Chilkat::Csr::EmailAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_EmailAddress(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Csr::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Csr::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Csr::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Csr::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Csr::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Csr::Locality::get()
    {
    return ref new String(m_impl ? m_impl->locality() : L"");
    }
void Chilkat::Csr::Locality::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Locality(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Csr::State::get()
    {
    return ref new String(m_impl ? m_impl->state() : L"");
    }
void Chilkat::Csr::State::set(String ^newVal)
    {
        if (m_impl) m_impl->put_State(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Csr::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Csr::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Csr::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean Csr::GenCsrBd(Chilkat::PrivateKey ^privKey, Chilkat::BinData ^csrData)
    {
	if (m_impl == nullptr) { return false; }
	if (privKey == nullptr) { return false; }
	CkPrivateKeyW* pObj0 = privKey->m_impl;
	 if (!pObj0) { return false; }
	if (csrData == nullptr) { return false; }
	CkBinDataW* pObj1 = csrData->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->GenCsrBd(*pObj0,*pObj1);
    }
Platform::String ^Csr::GenCsrPem(Chilkat::PrivateKey ^privKey)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (privKey == nullptr) { return nullptr; }
	CkPrivateKeyW* pObj0 = privKey->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->genCsrPem(*pObj0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Csr::GetPublicKey(Chilkat::PublicKey ^pubkey)
    {
	if (m_impl == nullptr) { return false; }
	if (pubkey == nullptr) { return false; }
	CkPublicKeyW* pObj0 = pubkey->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->GetPublicKey(*pObj0);
    }
Platform::String ^Csr::GetSubjectField(Platform::String ^oid)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getSubjectField(oid ? oid->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Csr::LoadCsrPem(Platform::String ^csrPemStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadCsrPem(csrPemStr ? csrPemStr->Data() : L"");
    }
Boolean Csr::SetSubjectField(Platform::String ^oid, Platform::String ^value, Platform::String ^asnType)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetSubjectField(oid ? oid->Data() : L"",value ? value->Data() : L"",asnType ? asnType->Data() : L"");
    }




