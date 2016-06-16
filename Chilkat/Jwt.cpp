
// This source file is generated.

#include "pch.h"
#include "Jwt.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkJwtW.h"
		
#include "include/CkPrivateKeyW.h"
#include "include/CkPublicKeyW.h"
#include "PrivateKey.h"
#include "PublicKey.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Jwt::~Jwt(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Jwt::Jwt(void) 
{
    m_impl = new CkJwtW();
}

//Chilkat::Jwt::Jwt(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkJwtW *)x;
//    if (!m_impl) m_impl = new CkJwtW();
//    }
//    
//Platform::IntPtr Chilkat::Jwt::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Jwt::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Jwt::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Jwt::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Jwt::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Jwt::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Jwt::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Jwt::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Jwt::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Jwt::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Jwt::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::Jwt::AutoCompact::get()
    {
    return m_impl ? m_impl->get_AutoCompact() : false;
    }
void Chilkat::Jwt::AutoCompact::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoCompact(newVal);
    }


Boolean Jwt::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Platform::String ^Jwt::CreateJwt(Platform::String ^header, Platform::String ^payload, Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->createJwt(header ? header->Data() : L"",payload ? payload->Data() : L"",password ? password->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Jwt::CreateJwtPk(Platform::String ^header, Platform::String ^payload, PrivateKey ^key)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (key == nullptr) { return nullptr; }
	CkPrivateKeyW* pObj2 = key->m_impl;
	 if (!pObj2) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->createJwtPk(header ? header->Data() : L"",payload ? payload->Data() : L"",*pObj2);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Jwt::VerifyJwt(Platform::String ^token, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyJwt(token ? token->Data() : L"",password ? password->Data() : L"");
    }
Boolean Jwt::VerifyJwtPk(Platform::String ^token, PublicKey ^key)
    {
	if (m_impl == nullptr) { return false; }
	if (key == nullptr) { return false; }
	CkPublicKeyW* pObj1 = key->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyJwtPk(token ? token->Data() : L"",*pObj1);
    }
Platform::String ^Jwt::GetHeader(Platform::String ^token)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHeader(token ? token->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Jwt::GetPayload(Platform::String ^token)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPayload(token ? token->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Jwt::GenNumericDate(int numSecOffset)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->GenNumericDate(numSecOffset);
    }
Boolean Jwt::IsTimeValid(Platform::String ^jwt, int leeway)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsTimeValid(jwt ? jwt->Data() : L"",leeway);
    }




