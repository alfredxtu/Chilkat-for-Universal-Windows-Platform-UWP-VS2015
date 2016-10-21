
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


int Chilkat::StringBuilder::IntValue::get()
    {
    return m_impl ? m_impl->get_IntValue() : 0;
    }
void Chilkat::StringBuilder::IntValue::set(int newVal)
    {
        if (m_impl) m_impl->put_IntValue(newVal);
    }
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
Boolean StringBuilder::AppendSb(Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AppendSb(*pObj0);
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
Boolean StringBuilder::ContentsEqual(Platform::String ^str, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ContentsEqual(str ? str->Data() : L"",caseSensitive);
    }
Boolean StringBuilder::ContentsEqualSb(Chilkat::StringBuilder ^sb, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->ContentsEqualSb(*pObj0,caseSensitive);
    }
Boolean StringBuilder::Decode(Platform::String ^encoding, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Decode(encoding ? encoding->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean StringBuilder::Encode(Platform::String ^encoding, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Encode(encoding ? encoding->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean StringBuilder::EndsWith(Platform::String ^substr, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->EndsWith(substr ? substr->Data() : L"",caseSensitive);
    }
Boolean StringBuilder::EntityDecode(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->EntityDecode();
    }
Platform::String ^StringBuilder::GetAfterBetween(Platform::String ^searchAfter, Platform::String ^beginMark, Platform::String ^endMark)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getAfterBetween(searchAfter ? searchAfter->Data() : L"",beginMark ? beginMark->Data() : L"",endMark ? endMark->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^StringBuilder::GetAsString(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getAsString();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^StringBuilder::GetBetween(Platform::String ^beginMark, Platform::String ^endMark)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getBetween(beginMark ? beginMark->Data() : L"",endMark ? endMark->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^StringBuilder::GetDecoded(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->GetDecoded(encoding ? encoding->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^StringBuilder::GetEncoded(Platform::String ^encoding, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getEncoded(encoding ? encoding->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^StringBuilder::GetNth(int index, Platform::String ^delimiterChar, Boolean exceptDoubleQuoted, Boolean exceptEscaped)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getNth(index,delimiterChar ? delimiterChar->Data() : L"",exceptDoubleQuoted,exceptEscaped);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^StringBuilder::LastNLines(int numLines, Boolean bCrlf)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->lastNLines(numLines,bCrlf);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean StringBuilder::LoadFile(Platform::String ^path, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadFile(path ? path->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean StringBuilder::Prepend(Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Prepend(value ? value->Data() : L"");
    }
void StringBuilder::Replace(Platform::String ^value, Platform::String ^replacement)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->Replace(value ? value->Data() : L"",replacement ? replacement->Data() : L"");
    }
int StringBuilder::ReplaceBetween(Platform::String ^beginMark, Platform::String ^endMark, Platform::String ^value, Platform::String ^replacement)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->ReplaceBetween(beginMark ? beginMark->Data() : L"",endMark ? endMark->Data() : L"",value ? value->Data() : L"",replacement ? replacement->Data() : L"");
    }
int StringBuilder::ReplaceWord(Platform::String ^value, Platform::String ^replacement)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->ReplaceWord(value ? value->Data() : L"",replacement ? replacement->Data() : L"");
    }
Boolean StringBuilder::SetNth(int index, Platform::String ^value, Platform::String ^delimiterChar, Boolean exceptDoubleQuoted, Boolean exceptEscaped)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetNth(index,value ? value->Data() : L"",delimiterChar ? delimiterChar->Data() : L"",exceptDoubleQuoted,exceptEscaped);
    }
Boolean StringBuilder::SetString(Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetString(value ? value->Data() : L"");
    }
Boolean StringBuilder::StartsWith(Platform::String ^substr, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->StartsWith(substr ? substr->Data() : L"",caseSensitive);
    }
Boolean StringBuilder::ToCRLF(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ToCRLF();
    }
Boolean StringBuilder::ToLF(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ToLF();
    }
Boolean StringBuilder::ToLowercase(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ToLowercase();
    }
Boolean StringBuilder::ToUppercase(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ToUppercase();
    }
Boolean StringBuilder::Trim(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Trim();
    }
Boolean StringBuilder::TrimInsideSpaces(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->TrimInsideSpaces();
    }
Boolean StringBuilder::WriteFile(Platform::String ^path, Platform::String ^charset, Boolean emitBom)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->WriteFile(path ? path->Data() : L"",charset ? charset->Data() : L"",emitBom);
    }




