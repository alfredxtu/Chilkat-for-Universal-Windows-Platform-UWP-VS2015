// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkFileAccessW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class BinData;
	ref class StringBuilder;
	ref class CkDateTime;


public ref class FileAccess sealed
{
#include "friendDecls.h"
		
	private:
    CkFileAccessW *m_impl;

	public:
	virtual ~FileAccess(void);
	FileAccess(void);
	//FileAccess(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^CurrentDir
	{
		Platform::String ^get();
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean EndOfFile
	{
		Boolean get();
	}
	property int32 FileOpenError
	{
		int32 get();
	}
	property Platform::String ^FileOpenErrorMsg
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorHtml
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorText
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorXml
	{
		Platform::String ^get();
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean VerboseLogging
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Version
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean AppendAnsi(Platform::String ^text);

	Boolean AppendBd(Chilkat::BinData ^bd);

	Boolean AppendSb(Chilkat::StringBuilder ^sb, Platform::String ^charset);

	Boolean AppendText(Platform::String ^str, Platform::String ^charset);

	Boolean AppendUnicodeBOM(void);

	Boolean AppendUtf8BOM(void);

	Boolean DirAutoCreate(Platform::String ^filePath);

	Boolean DirCreate(Platform::String ^dirPath);

	Boolean DirDelete(Platform::String ^dirPath);

	Boolean DirEnsureExists(Platform::String ^dirPath);

	void FileClose(void);

	Boolean FileContentsEqual(Platform::String ^filePath1, Platform::String ^filePath2);

	Boolean FileCopy(Platform::String ^existingFilepath, Platform::String ^newFilepath, Boolean failIfExists);

	Boolean FileDelete(Platform::String ^filePath);

	Boolean FileExists(Platform::String ^filePath);

	int FileExists3(Platform::String ^path);

	Boolean FileOpen(Platform::String ^filePath, uint32 accessMode, uint32 shareMode, uint32 createDisposition, uint32 attributes);

	Windows::Foundation::Collections::IVector<uint8>^FileRead(int maxNumBytes);

	Boolean FileReadBd(int maxNumBytes, Chilkat::BinData ^binData);

	Boolean FileRename(Platform::String ^existingFilepath, Platform::String ^newFilepath);

	Boolean FileSeek(int offset, int origin);

	int FileSize(Platform::String ^filePath);

	int FileType(Platform::String ^path);

	Boolean FileWrite(Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean FileWriteBd(Chilkat::BinData ^binData, int offset, int numBytes);

	Platform::String ^GenBlockId(int index, int length, Platform::String ^encoding);

	Platform::String ^GetDirectoryName(Platform::String ^path);

	Platform::String ^GetExtension(Platform::String ^path);

	Platform::String ^GetFileName(Platform::String ^path);

	Platform::String ^GetFileNameWithoutExtension(Platform::String ^path);

	CkDateTime ^GetFileTime(Platform::String ^path, int which);

	CkDateTime ^GetLastModified(Platform::String ^path);

	int GetNumBlocks(int blockSize);

	Platform::String ^GetTempFilename(Platform::String ^dirPath, Platform::String ^prefix);

	Boolean OpenForAppend(Platform::String ^filePath);

	Boolean OpenForRead(Platform::String ^filePath);

	Boolean OpenForReadWrite(Platform::String ^filePath);

	Boolean OpenForWrite(Platform::String ^filePath);

	Platform::String ^ReadBinaryToEncoded(Platform::String ^filePath, Platform::String ^encoding);

	Windows::Foundation::Collections::IVector<uint8>^ReadBlock(int blockIndex, int blockSize);

	Windows::Foundation::Collections::IVector<uint8>^ReadEntireFile(Platform::String ^filePath);

	Platform::String ^ReadEntireTextFile(Platform::String ^filePath, Platform::String ^charset);

	Boolean ReassembleFile(Platform::String ^partsDirPath, Platform::String ^partPrefix, Platform::String ^partExtension, Platform::String ^reassembledFilename);

	int ReplaceStrings(Platform::String ^filePath, Platform::String ^charset, Platform::String ^existingString, Platform::String ^replacementString);

	Boolean SetCurrentDir(Platform::String ^dirPath);

	Boolean SetFileTimes(Platform::String ^filePath, Chilkat::CkDateTime ^createTime, Chilkat::CkDateTime ^lastAccessTime, Chilkat::CkDateTime ^lastModTime);

	Boolean SetLastModified(Platform::String ^filePath, Chilkat::CkDateTime ^lastModified);

	Boolean SplitFile(Platform::String ^fileToSplit, Platform::String ^partPrefix, Platform::String ^partExtension, int partSize, Platform::String ^destDir);

	Boolean SymlinkCreate(Platform::String ^targetPath, Platform::String ^linkPath);

	Platform::String ^SymlinkTarget(Platform::String ^linkPath);

	Boolean TreeDelete(Platform::String ^path);

	Boolean WriteEntireFile(Platform::String ^filePath, Windows::Foundation::Collections::IVector<uint8>^fileData);

	Boolean WriteEntireTextFile(Platform::String ^filePath, Platform::String ^textData, Platform::String ^charset, Boolean includedPreamble);



};





}


