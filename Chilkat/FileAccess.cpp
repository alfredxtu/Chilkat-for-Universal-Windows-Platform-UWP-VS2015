// Generated for Chilkat v9.5.0.76

// This source file is generated.

#include "pch.h"
#include "FileAccess.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkFileAccessW.h"
		
#include "include/CkBinDataW.h"
#include "include/CkStringBuilderW.h"
#include "BinData.h"
#include "StringBuilder.h"
#include "CkDateTime.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::FileAccess::~FileAccess(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::FileAccess::FileAccess(void) 
{
    m_impl = new CkFileAccessW();
}

//Chilkat::FileAccess::FileAccess(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkFileAccessW *)x;
//    if (!m_impl) m_impl = new CkFileAccessW();
//    }
//    
//Platform::IntPtr Chilkat::FileAccess::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::FileAccess::CurrentDir::get()
    {
    return ref new String(m_impl ? m_impl->currentDir() : L"");
    }
String ^Chilkat::FileAccess::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::FileAccess::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::FileAccess::EndOfFile::get()
    {
    return m_impl ? m_impl->get_EndOfFile() : false;
    }
int Chilkat::FileAccess::FileOpenError::get()
    {
    return m_impl ? m_impl->get_FileOpenError() : 0;
    }
String ^Chilkat::FileAccess::FileOpenErrorMsg::get()
    {
    return ref new String(m_impl ? m_impl->fileOpenErrorMsg() : L"");
    }
String ^Chilkat::FileAccess::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::FileAccess::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::FileAccess::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::FileAccess::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::FileAccess::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::FileAccess::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::FileAccess::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::FileAccess::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean FileAccess::AppendAnsi(Platform::String ^text)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendAnsi(text ? text->Data() : L"");
    }
Boolean FileAccess::AppendBd(Chilkat::BinData ^bd)
    {
	if (m_impl == nullptr) { return false; }
	if (bd == nullptr) { return false; }
	CkBinDataW* pObj0 = bd->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AppendBd(*pObj0);
    }
Boolean FileAccess::AppendSb(Chilkat::StringBuilder ^sb, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AppendSb(*pObj0,charset ? charset->Data() : L"");
    }
Boolean FileAccess::AppendText(Platform::String ^str, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendText(str ? str->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean FileAccess::AppendUnicodeBOM(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendUnicodeBOM();
    }
Boolean FileAccess::AppendUtf8BOM(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendUtf8BOM();
    }
Boolean FileAccess::DirAutoCreate(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->DirAutoCreate(filePath ? filePath->Data() : L"");
    }
Boolean FileAccess::DirCreate(Platform::String ^dirPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->DirCreate(dirPath ? dirPath->Data() : L"");
    }
Boolean FileAccess::DirDelete(Platform::String ^dirPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->DirDelete(dirPath ? dirPath->Data() : L"");
    }
Boolean FileAccess::DirEnsureExists(Platform::String ^dirPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->DirEnsureExists(dirPath ? dirPath->Data() : L"");
    }
void FileAccess::FileClose(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->FileClose();
    }
Boolean FileAccess::FileContentsEqual(Platform::String ^filePath1, Platform::String ^filePath2)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FileContentsEqual(filePath1 ? filePath1->Data() : L"",filePath2 ? filePath2->Data() : L"");
    }
Boolean FileAccess::FileCopy(Platform::String ^existingFilepath, Platform::String ^newFilepath, Boolean failIfExists)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FileCopy(existingFilepath ? existingFilepath->Data() : L"",newFilepath ? newFilepath->Data() : L"",failIfExists);
    }
Boolean FileAccess::FileDelete(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FileDelete(filePath ? filePath->Data() : L"");
    }
Boolean FileAccess::FileExists(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FileExists(filePath ? filePath->Data() : L"");
    }
int FileAccess::FileExists3(Platform::String ^path)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->FileExists3(path ? path->Data() : L"");
    }
Boolean FileAccess::FileOpen(Platform::String ^filePath, uint32 accessMode, uint32 shareMode, uint32 createDisposition, uint32 attributes)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FileOpen(filePath ? filePath->Data() : L"",accessMode,shareMode,createDisposition,attributes);
    }
Windows::Foundation::Collections::IVector<uint8>^FileAccess::FileRead(int maxNumBytes)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->FileRead(maxNumBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean FileAccess::FileReadBd(int maxNumBytes, Chilkat::BinData ^binData)
    {
	if (m_impl == nullptr) { return false; }
	if (binData == nullptr) { return false; }
	CkBinDataW* pObj1 = binData->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->FileReadBd(maxNumBytes,*pObj1);
    }
Boolean FileAccess::FileRename(Platform::String ^existingFilepath, Platform::String ^newFilepath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FileRename(existingFilepath ? existingFilepath->Data() : L"",newFilepath ? newFilepath->Data() : L"");
    }
Boolean FileAccess::FileSeek(int offset, int origin)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FileSeek(offset,origin);
    }
int FileAccess::FileSize(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->FileSize(filePath ? filePath->Data() : L"");
    }
int FileAccess::FileType(Platform::String ^path)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->FileType(path ? path->Data() : L"");
    }
Boolean FileAccess::FileWrite(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	return m_impl->FileWrite(db0);
    }
Boolean FileAccess::FileWriteBd(Chilkat::BinData ^binData, int offset, int numBytes)
    {
	if (m_impl == nullptr) { return false; }
	if (binData == nullptr) { return false; }
	CkBinDataW* pObj0 = binData->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->FileWriteBd(*pObj0,offset,numBytes);
    }
Platform::String ^FileAccess::GenBlockId(int index, int length, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->genBlockId(index,length,encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^FileAccess::GetDirectoryName(Platform::String ^path)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getDirectoryName(path ? path->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^FileAccess::GetExtension(Platform::String ^path)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getExtension(path ? path->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^FileAccess::GetFileName(Platform::String ^path)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getFileName(path ? path->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^FileAccess::GetFileNameWithoutExtension(Platform::String ^path)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getFileNameWithoutExtension(path ? path->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Chilkat::CkDateTime ^FileAccess::GetFileTime(Platform::String ^path, int which)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkDateTimeW *pRetObj = m_impl->GetFileTime(path ? path->Data() : L"",which);
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }
Chilkat::CkDateTime ^FileAccess::GetLastModified(Platform::String ^path)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkDateTimeW *pRetObj = m_impl->GetLastModified(path ? path->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }
int FileAccess::GetNumBlocks(int blockSize)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->GetNumBlocks(blockSize);
    }
Platform::String ^FileAccess::GetTempFilename(Platform::String ^dirPath, Platform::String ^prefix)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getTempFilename(dirPath ? dirPath->Data() : L"",prefix ? prefix->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean FileAccess::OpenForAppend(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->OpenForAppend(filePath ? filePath->Data() : L"");
    }
Boolean FileAccess::OpenForRead(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->OpenForRead(filePath ? filePath->Data() : L"");
    }
Boolean FileAccess::OpenForReadWrite(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->OpenForReadWrite(filePath ? filePath->Data() : L"");
    }
Boolean FileAccess::OpenForWrite(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->OpenForWrite(filePath ? filePath->Data() : L"");
    }
Platform::String ^FileAccess::ReadBinaryToEncoded(Platform::String ^filePath, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->readBinaryToEncoded(filePath ? filePath->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^FileAccess::ReadBlock(int blockIndex, int blockSize)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->ReadBlock(blockIndex,blockSize,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^FileAccess::ReadEntireFile(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->ReadEntireFile(filePath ? filePath->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^FileAccess::ReadEntireTextFile(Platform::String ^filePath, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->readEntireTextFile(filePath ? filePath->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean FileAccess::ReassembleFile(Platform::String ^partsDirPath, Platform::String ^partPrefix, Platform::String ^partExtension, Platform::String ^reassembledFilename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ReassembleFile(partsDirPath ? partsDirPath->Data() : L"",partPrefix ? partPrefix->Data() : L"",partExtension ? partExtension->Data() : L"",reassembledFilename ? reassembledFilename->Data() : L"");
    }
int FileAccess::ReplaceStrings(Platform::String ^filePath, Platform::String ^charset, Platform::String ^existingString, Platform::String ^replacementString)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->ReplaceStrings(filePath ? filePath->Data() : L"",charset ? charset->Data() : L"",existingString ? existingString->Data() : L"",replacementString ? replacementString->Data() : L"");
    }
Boolean FileAccess::SetCurrentDir(Platform::String ^dirPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetCurrentDir(dirPath ? dirPath->Data() : L"");
    }
Boolean FileAccess::SetFileTimes(Platform::String ^filePath, Chilkat::CkDateTime ^createTime, Chilkat::CkDateTime ^lastAccessTime, Chilkat::CkDateTime ^lastModTime)
    {
	if (m_impl == nullptr) { return false; }
	if (createTime == nullptr) { return false; }
	CkDateTimeW* pObj1 = createTime->m_impl;
	 if (!pObj1) { return false; }
	if (lastAccessTime == nullptr) { return false; }
	CkDateTimeW* pObj2 = lastAccessTime->m_impl;
	 if (!pObj2) { return false; }
	if (lastModTime == nullptr) { return false; }
	CkDateTimeW* pObj3 = lastModTime->m_impl;
	 if (!pObj3) { return false; }
	// --- prep output arg ---
	return m_impl->SetFileTimes(filePath ? filePath->Data() : L"",*pObj1,*pObj2,*pObj3);
    }
Boolean FileAccess::SetLastModified(Platform::String ^filePath, Chilkat::CkDateTime ^lastModified)
    {
	if (m_impl == nullptr) { return false; }
	if (lastModified == nullptr) { return false; }
	CkDateTimeW* pObj1 = lastModified->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->SetLastModified(filePath ? filePath->Data() : L"",*pObj1);
    }
Boolean FileAccess::SplitFile(Platform::String ^fileToSplit, Platform::String ^partPrefix, Platform::String ^partExtension, int partSize, Platform::String ^destDir)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SplitFile(fileToSplit ? fileToSplit->Data() : L"",partPrefix ? partPrefix->Data() : L"",partExtension ? partExtension->Data() : L"",partSize,destDir ? destDir->Data() : L"");
    }
Boolean FileAccess::SymlinkCreate(Platform::String ^targetPath, Platform::String ^linkPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SymlinkCreate(targetPath ? targetPath->Data() : L"",linkPath ? linkPath->Data() : L"");
    }
Platform::String ^FileAccess::SymlinkTarget(Platform::String ^linkPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->symlinkTarget(linkPath ? linkPath->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean FileAccess::TreeDelete(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->TreeDelete(path ? path->Data() : L"");
    }
Boolean FileAccess::WriteEntireFile(Platform::String ^filePath, Windows::Foundation::Collections::IVector<uint8>^fileData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (fileData != nullptr) { v1 = to_vector(fileData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	return m_impl->WriteEntireFile(filePath ? filePath->Data() : L"",db1);
    }
Boolean FileAccess::WriteEntireTextFile(Platform::String ^filePath, Platform::String ^textData, Platform::String ^charset, Boolean includedPreamble)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->WriteEntireTextFile(filePath ? filePath->Data() : L"",textData ? textData->Data() : L"",charset ? charset->Data() : L"",includedPreamble);
    }




