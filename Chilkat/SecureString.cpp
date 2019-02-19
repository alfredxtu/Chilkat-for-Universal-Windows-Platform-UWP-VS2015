// Generated for Chilkat v9.5.0.76

// This source file is generated.

#include "pch.h"
#include "SecureString.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSecureStringW.h"
		
#include "include/CkStringBuilderW.h"
#include "StringBuilder.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::SecureString::~SecureString(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::SecureString::SecureString(void) 
{
    m_impl = new CkSecureStringW();
}

//Chilkat::SecureString::SecureString(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSecureStringW *)x;
//    if (!m_impl) m_impl = new CkSecureStringW();
//    }
//    
//Platform::IntPtr Chilkat::SecureString::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


Boolean Chilkat::SecureString::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::SecureString::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::SecureString::MaintainHash::get()
    {
    return ref new String(m_impl ? m_impl->maintainHash() : L"");
    }
void Chilkat::SecureString::MaintainHash::set(String ^newVal)
    {
        if (m_impl) m_impl->put_MaintainHash(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::SecureString::ReadOnly::get()
    {
    return m_impl ? m_impl->get_ReadOnly() : false;
    }
void Chilkat::SecureString::ReadOnly::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_ReadOnly(newVal);
    }


Platform::String ^SecureString::Access(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->access();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean SecureString::Append(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Append(str ? str->Data() : L"");
    }
Boolean SecureString::AppendSb(Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AppendSb(*pObj0);
    }
Boolean SecureString::AppendSecure(Chilkat::SecureString ^secStr)
    {
	if (m_impl == nullptr) { return false; }
	if (secStr == nullptr) { return false; }
	CkSecureStringW* pObj0 = secStr->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AppendSecure(*pObj0);
    }
Platform::String ^SecureString::HashVal(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->hashVal(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean SecureString::LoadFile(Platform::String ^path, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadFile(path ? path->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean SecureString::SecStrEquals(Chilkat::SecureString ^secStr)
    {
	if (m_impl == nullptr) { return false; }
	if (secStr == nullptr) { return false; }
	CkSecureStringW* pObj0 = secStr->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SecStrEquals(*pObj0);
    }
Boolean SecureString::VerifyHash(Platform::String ^hashVal, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->VerifyHash(hashVal ? hashVal->Data() : L"",encoding ? encoding->Data() : L"");
    }




