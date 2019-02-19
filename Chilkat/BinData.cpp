// Generated for Chilkat v9.5.0.76

// This source file is generated.

#include "pch.h"
#include "BinData.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkBinDataW.h"
		
#include "include/CkStringBuilderW.h"
#include "StringBuilder.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::BinData::~BinData(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::BinData::BinData(void) 
{
    m_impl = new CkBinDataW();
}

//Chilkat::BinData::BinData(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkBinDataW *)x;
//    if (!m_impl) m_impl = new CkBinDataW();
//    }
//    
//Platform::IntPtr Chilkat::BinData::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


Boolean Chilkat::BinData::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::BinData::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::BinData::NumBytes::get()
    {
    return m_impl ? m_impl->get_NumBytes() : 0;
    }


Boolean BinData::AppendBd(Chilkat::BinData ^binData)
    {
	if (m_impl == nullptr) { return false; }
	if (binData == nullptr) { return false; }
	CkBinDataW* pObj0 = binData->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AppendBd(*pObj0);
    }
Boolean BinData::AppendBinary(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	return m_impl->AppendBinary(db0);
    }
Boolean BinData::AppendBom(Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendBom(charset ? charset->Data() : L"");
    }
Boolean BinData::AppendByte(int byteValue)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendByte(byteValue);
    }
Boolean BinData::AppendEncoded(Platform::String ^encData, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendEncoded(encData ? encData->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean BinData::AppendEncodedSb(Chilkat::StringBuilder ^sb, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AppendEncodedSb(*pObj0,encoding ? encoding->Data() : L"");
    }
Boolean BinData::AppendInt2(int value, Boolean littleEndian)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendInt2(value,littleEndian);
    }
Boolean BinData::AppendInt4(int value, Boolean littleEndian)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendInt4(value,littleEndian);
    }
Boolean BinData::AppendSb(Chilkat::StringBuilder ^sb, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AppendSb(*pObj0,charset ? charset->Data() : L"");
    }
Boolean BinData::AppendString(Platform::String ^str, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendString(str ? str->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean BinData::Clear(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Clear();
    }
Boolean BinData::ContentsEqual(Chilkat::BinData ^binData)
    {
	if (m_impl == nullptr) { return false; }
	if (binData == nullptr) { return false; }
	CkBinDataW* pObj0 = binData->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->ContentsEqual(*pObj0);
    }
Windows::Foundation::Collections::IVector<uint8>^BinData::GetBinary(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->GetBinary(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^BinData::GetBinaryChunk(int offset, int numBytes)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->GetBinaryChunk(offset,numBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^BinData::GetEncoded(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getEncoded(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^BinData::GetEncodedChunk(int offset, int numBytes, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getEncodedChunk(offset,numBytes,encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean BinData::GetEncodedSb(Platform::String ^encoding, Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj1 = sb->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->GetEncodedSb(encoding ? encoding->Data() : L"",*pObj1);
    }
Platform::String ^BinData::GetString(Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getString(charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean BinData::LoadBinary(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	return m_impl->LoadBinary(db0);
    }
Boolean BinData::LoadEncoded(Platform::String ^encData, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadEncoded(encData ? encData->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean BinData::LoadFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadFile(path ? path->Data() : L"");
    }
Boolean BinData::RemoveChunk(int offset, int numBytes)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->RemoveChunk(offset,numBytes);
    }
Boolean BinData::SecureClear(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SecureClear();
    }
Boolean BinData::WriteFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->WriteFile(path ? path->Data() : L"");
    }




