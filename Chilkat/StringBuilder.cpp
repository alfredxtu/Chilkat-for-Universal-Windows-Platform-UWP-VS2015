
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


int Chilkat::StringBuilder::Length::get()
    {
    return m_impl ? m_impl->get_Length() : 0;
    }


Boolean StringBuilder::Append(Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Append(value ? value->Data() : L"");
    }
Boolean StringBuilder::AppendEncoded(Windows::Foundation::Collections::IVector<uint8>^binaryData, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (binaryData != nullptr) { v0 = to_vector(binaryData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	return m_impl->AppendEncoded(db0,encoding ? encoding->Data() : L"");
    }
Boolean StringBuilder::AppendInt(int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendInt(value);
    }
Boolean StringBuilder::AppendInt64(int64 value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendInt64(value);
    }
void StringBuilder::Clear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->Clear();
    }
Boolean StringBuilder::Contains(Platform::String ^str, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Contains(str ? str->Data() : L"",caseSensitive);
    }
Boolean StringBuilder::Equals(Platform::String ^str, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Equals(str ? str->Data() : L"",caseSensitive);
    }
Platform::String ^StringBuilder::GetAsString(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getAsString();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void StringBuilder::Replace(Platform::String ^value, Platform::String ^replacement)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->Replace(value ? value->Data() : L"",replacement ? replacement->Data() : L"");
    }




