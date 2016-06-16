
// This source file is generated.

#include "pch.h"
#include "StringBuilder.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkStringBuilderW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::StringBuilder::~StringBuilder(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::StringBuilder::StringBuilder(void) 
{
    m_impl = new CkStringBuilderW();
}

//Chilkat::StringBuilder::StringBuilder(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkStringBuilderW *)x;
//    if (!m_impl) m_impl = new CkStringBuilderW();
//    }
//    
//Platform::IntPtr Chilkat::StringBuilder::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::StringBuilder::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::StringBuilder::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::StringBuilder::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::StringBuilder::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::StringBuilder::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::StringBuilder::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::StringBuilder::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::StringBuilder::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::StringBuilder::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::StringBuilder::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::StringBuilder::Length::get()
    {
    return m_impl ? m_impl->get_Length() : 0;
    }


Boolean StringBuilder::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean StringBuilder::Append(Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Append(value ? value->Data() : L"");
    }
Boolean StringBuilder::AppendInt(int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendInt(value);
    }
Boolean StringBuilder::AppendInt64(int64 value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendInt64(value);
    }
Boolean StringBuilder::AppendEncoded(Windows::Foundation::Collections::IVector<uint8>^binaryData, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (binaryData != nullptr) { v0 = to_vector(binaryData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendEncoded(db0,encoding ? encoding->Data() : L"");
    }
void StringBuilder::Clear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Clear();
    }
void StringBuilder::Replace(Platform::String ^value, Platform::String ^replacement)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Replace(value ? value->Data() : L"",replacement ? replacement->Data() : L"");
    }
Platform::String ^StringBuilder::GetAsString(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAsString();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean StringBuilder::Equals(Platform::String ^str, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Equals(str ? str->Data() : L"",caseSensitive);
    }
Boolean StringBuilder::Contains(Platform::String ^str, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Contains(str ? str->Data() : L"",caseSensitive);
    }




