// Generated for Chilkat v9.5.0.77

// This source file is generated.

#include "pch.h"
#include "Gzip.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkGzipW.h"
		
#include "include/CkBinDataW.h"
#include "BinData.h"
#include "CkDateTime.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Gzip::~Gzip(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Gzip::Gzip(void) 
{
    m_impl = new CkGzipW();
}

//Chilkat::Gzip::Gzip(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkGzipW *)x;
//    if (!m_impl) m_impl = new CkGzipW();
//    }
//    
//Platform::IntPtr Chilkat::Gzip::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


Boolean Chilkat::Gzip::AbortCurrent::get()
    {
    return m_impl ? m_impl->get_AbortCurrent() : false;
    }
void Chilkat::Gzip::AbortCurrent::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AbortCurrent(newVal);
    }
String ^Chilkat::Gzip::Comment::get()
    {
    return ref new String(m_impl ? m_impl->comment() : L"");
    }
void Chilkat::Gzip::Comment::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Comment(newVal ? newVal->Data() : L"");
    }
int Chilkat::Gzip::CompressionLevel::get()
    {
    return m_impl ? m_impl->get_CompressionLevel() : 0;
    }
void Chilkat::Gzip::CompressionLevel::set(int newVal)
    {
        if (m_impl) m_impl->put_CompressionLevel(newVal);
    }
String ^Chilkat::Gzip::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Gzip::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8> ^Chilkat::Gzip::ExtraData::get()
    {
    CkByteData db;
    if (m_impl) m_impl->get_ExtraData(db);
    const uint8 *pOut = db.getData();
    std::vector<uint8> vec(pOut, pOut+(size_t)db.getSize());
    return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
void Chilkat::Gzip::ExtraData::set(Windows::Foundation::Collections::IVector<uint8> ^inData)
    {
        CkByteData db; std::vector<uint8> v;
        if (inData != nullptr) { v = to_vector(inData);
            db.borrowData(&v[0], (unsigned long)v.size()); }
        if (m_impl) m_impl->put_ExtraData(db);
    }
String ^Chilkat::Gzip::Filename::get()
    {
    return ref new String(m_impl ? m_impl->filename() : L"");
    }
void Chilkat::Gzip::Filename::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Filename(newVal ? newVal->Data() : L"");
    }
int Chilkat::Gzip::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Gzip::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
String ^Chilkat::Gzip::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Gzip::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Gzip::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Gzip::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Gzip::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Gzip::LastModStr::get()
    {
    return ref new String(m_impl ? m_impl->lastModStr() : L"");
    }
void Chilkat::Gzip::LastModStr::set(String ^newVal)
    {
        if (m_impl) m_impl->put_LastModStr(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Gzip::UseCurrentDate::get()
    {
    return m_impl ? m_impl->get_UseCurrentDate() : false;
    }
void Chilkat::Gzip::UseCurrentDate::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UseCurrentDate(newVal);
    }
Boolean Chilkat::Gzip::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Gzip::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Gzip::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


IAsyncOperation<Boolean>^ Gzip::CompressBdAsync(Chilkat::BinData ^binDat)
    {
return create_async([this, binDat]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (binDat == nullptr) { return false; }
	CkBinDataW* pObj0 = binDat->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->CompressBd(*pObj0);

});
    }
IAsyncOperation<Boolean>^ Gzip::CompressFileAsync(Platform::String ^inFilename, Platform::String ^destPath)
    {
return create_async([this, inFilename, destPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->CompressFile(inFilename ? inFilename->Data() : L"",destPath ? destPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Gzip::CompressFile2Async(Platform::String ^inFilename, Platform::String ^embeddedFilename, Platform::String ^destPath)
    {
return create_async([this, inFilename, embeddedFilename, destPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->CompressFile2(inFilename ? inFilename->Data() : L"",embeddedFilename ? embeddedFilename->Data() : L"",destPath ? destPath->Data() : L"");

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Gzip::CompressFileToMemAsync(Platform::String ^inFilename)
    {
return create_async([this, inFilename]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	bool success = m_impl->CompressFileToMem(inFilename ? inFilename->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Gzip::CompressMemoryAsync(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
return create_async([this, inData]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	bool success = m_impl->CompressMemory(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Boolean>^ Gzip::CompressMemToFileAsync(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^destPath)
    {
return create_async([this, inData, destPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->CompressMemToFile(db0,destPath ? destPath->Data() : L"");

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Gzip::CompressStringAsync(Platform::String ^inStr, Platform::String ^destCharset)
    {
return create_async([this, inStr, destCharset]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	bool success = m_impl->CompressString(inStr ? inStr->Data() : L"",destCharset ? destCharset->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
Platform::String ^Gzip::CompressStringENC(Platform::String ^inStr, Platform::String ^charset, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	const wchar_t *retStr = m_impl->compressStringENC(inStr ? inStr->Data() : L"",charset ? charset->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Boolean>^ Gzip::CompressStringToFileAsync(Platform::String ^inStr, Platform::String ^destCharset, Platform::String ^destPath)
    {
return create_async([this, inStr, destCharset, destPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->CompressStringToFile(inStr ? inStr->Data() : L"",destCharset ? destCharset->Data() : L"",destPath ? destPath->Data() : L"");

});
    }
Windows::Foundation::Collections::IVector<uint8>^Gzip::Decode(Platform::String ^encodedStr, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	bool success = m_impl->Decode(encodedStr ? encodedStr->Data() : L"",encoding ? encoding->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Gzip::DeflateStringENC(Platform::String ^inString, Platform::String ^charsetName, Platform::String ^outputEncoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	const wchar_t *retStr = m_impl->deflateStringENC(inString ? inString->Data() : L"",charsetName ? charsetName->Data() : L"",outputEncoding ? outputEncoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Gzip::Encode(Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (byteData != nullptr) { v0 = to_vector(byteData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	const wchar_t *retStr = m_impl->encode(db0,encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Gzip::ExamineFile(Platform::String ^inGzFilename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->ExamineFile(inGzFilename ? inGzFilename->Data() : L"");
    }
Boolean Gzip::ExamineMemory(Windows::Foundation::Collections::IVector<uint8>^inGzData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (inGzData != nullptr) { v0 = to_vector(inGzData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->ExamineMemory(db0);
    }
Chilkat::CkDateTime ^Gzip::GetDt(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	CkDateTimeW *pRetObj = m_impl->GetDt();
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }
Platform::String ^Gzip::InflateStringENC(Platform::String ^inString, Platform::String ^convertFromCharset, Platform::String ^inputEncoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	const wchar_t *retStr = m_impl->inflateStringENC(inString ? inString->Data() : L"",convertFromCharset ? convertFromCharset->Data() : L"",inputEncoding ? inputEncoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Gzip::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->IsUnlocked();
    }
Windows::Foundation::Collections::IVector<uint8>^Gzip::ReadFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	bool success = m_impl->ReadFile(path ? path->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Gzip::SetDt(Chilkat::CkDateTime ^dt)
    {
	if (m_impl == nullptr) { return false; }
	if (dt == nullptr) { return false; }
	CkDateTimeW* pObj0 = dt->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->SetDt(*pObj0);
    }
IAsyncOperation<Boolean>^ Gzip::UncompressBdAsync(Chilkat::BinData ^binDat)
    {
return create_async([this, binDat]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (binDat == nullptr) { return false; }
	CkBinDataW* pObj0 = binDat->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->UncompressBd(*pObj0);

});
    }
IAsyncOperation<Boolean>^ Gzip::UncompressFileAsync(Platform::String ^srcPath, Platform::String ^destPath)
    {
return create_async([this, srcPath, destPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->UncompressFile(srcPath ? srcPath->Data() : L"",destPath ? destPath->Data() : L"");

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Gzip::UncompressFileToMemAsync(Platform::String ^inFilename)
    {
return create_async([this, inFilename]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	bool success = m_impl->UncompressFileToMem(inFilename ? inFilename->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Platform::String ^>^ Gzip::UncompressFileToStringAsync(Platform::String ^gzFilename, Platform::String ^charset)
    {
return create_async([this, gzFilename, charset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	const wchar_t *retStr = m_impl->uncompressFileToString(gzFilename ? gzFilename->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Gzip::UncompressMemoryAsync(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
return create_async([this, inData]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	bool success = m_impl->UncompressMemory(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Boolean>^ Gzip::UncompressMemToFileAsync(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^destPath)
    {
return create_async([this, inData, destPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->UncompressMemToFile(db0,destPath ? destPath->Data() : L"");

});
    }
IAsyncOperation<Platform::String ^>^ Gzip::UncompressStringAsync(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^inCharset)
    {
return create_async([this, inData, inCharset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	const wchar_t *retStr = m_impl->uncompressString(db0,inCharset ? inCharset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Platform::String ^Gzip::UncompressStringENC(Platform::String ^inStr, Platform::String ^charset, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	const wchar_t *retStr = m_impl->uncompressStringENC(inStr ? inStr->Data() : L"",charset ? charset->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Gzip::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
IAsyncOperation<Boolean>^ Gzip::UnTarGzAsync(Platform::String ^tgzFilename, Platform::String ^destDir, Boolean bNoAbsolute)
    {
return create_async([this, tgzFilename, destDir, bNoAbsolute]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->UnTarGz(tgzFilename ? tgzFilename->Data() : L"",destDir ? destDir->Data() : L"",bNoAbsolute);

});
    }
Boolean Gzip::WriteFile(Platform::String ^path, Windows::Foundation::Collections::IVector<uint8>^binaryData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (binaryData != nullptr) { v1 = to_vector(binaryData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->WriteFile(path ? path->Data() : L"",db1);
    }
Platform::String ^Gzip::XfdlToXml(Platform::String ^xfldData)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxGzipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	const wchar_t *retStr = m_impl->xfdlToXml(xfldData ? xfldData->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




