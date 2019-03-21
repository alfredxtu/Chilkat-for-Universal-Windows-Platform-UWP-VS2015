// Generated for Chilkat v9.5.0.77

// This source file is generated.

#include "pch.h"
#include "Csv.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkCsvW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Csv::~Csv(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Csv::Csv(void) 
{
    m_impl = new CkCsvW();
}

//Chilkat::Csv::Csv(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkCsvW *)x;
//    if (!m_impl) m_impl = new CkCsvW();
//    }
//    
//Platform::IntPtr Chilkat::Csv::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


Boolean Chilkat::Csv::AutoTrim::get()
    {
    return m_impl ? m_impl->get_AutoTrim() : false;
    }
void Chilkat::Csv::AutoTrim::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoTrim(newVal);
    }
Boolean Chilkat::Csv::Crlf::get()
    {
    return m_impl ? m_impl->get_Crlf() : false;
    }
void Chilkat::Csv::Crlf::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Crlf(newVal);
    }
String ^Chilkat::Csv::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Csv::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Csv::Delimiter::get()
    {
    return ref new String(m_impl ? m_impl->delimiter() : L"");
    }
void Chilkat::Csv::Delimiter::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Delimiter(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Csv::EnableQuotes::get()
    {
    return m_impl ? m_impl->get_EnableQuotes() : false;
    }
void Chilkat::Csv::EnableQuotes::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EnableQuotes(newVal);
    }
Boolean Chilkat::Csv::EscapeBackslash::get()
    {
    return m_impl ? m_impl->get_EscapeBackslash() : false;
    }
void Chilkat::Csv::EscapeBackslash::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EscapeBackslash(newVal);
    }
Boolean Chilkat::Csv::HasColumnNames::get()
    {
    return m_impl ? m_impl->get_HasColumnNames() : false;
    }
void Chilkat::Csv::HasColumnNames::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_HasColumnNames(newVal);
    }
String ^Chilkat::Csv::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Csv::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Csv::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Csv::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Csv::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Csv::NumColumns::get()
    {
    return m_impl ? m_impl->get_NumColumns() : 0;
    }
int Chilkat::Csv::NumRows::get()
    {
    return m_impl ? m_impl->get_NumRows() : 0;
    }
Boolean Chilkat::Csv::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Csv::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Csv::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean Csv::DeleteColumn(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->DeleteColumn(index);
    }
Boolean Csv::DeleteColumnByName(Platform::String ^columnName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->DeleteColumnByName(columnName ? columnName->Data() : L"");
    }
Boolean Csv::DeleteRow(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->DeleteRow(index);
    }
Platform::String ^Csv::GetCell(int row, int col)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getCell(row,col);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Csv::GetCellByName(int rowIndex, Platform::String ^columnName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getCellByName(rowIndex,columnName ? columnName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Csv::GetColumnName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getColumnName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Csv::GetIndex(Platform::String ^columnName)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->GetIndex(columnName ? columnName->Data() : L"");
    }
int Csv::GetNumCols(int row)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->GetNumCols(row);
    }
Boolean Csv::LoadFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadFile(path ? path->Data() : L"");
    }
Boolean Csv::LoadFile2(Platform::String ^filename, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadFile2(filename ? filename->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean Csv::LoadFromString(Platform::String ^csvData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadFromString(csvData ? csvData->Data() : L"");
    }
Boolean Csv::RowMatches(int rowIndex, Platform::String ^matchPattern, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->RowMatches(rowIndex,matchPattern ? matchPattern->Data() : L"",caseSensitive);
    }
Boolean Csv::SaveFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveFile(path ? path->Data() : L"");
    }
Boolean Csv::SaveFile2(Platform::String ^filename, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveFile2(filename ? filename->Data() : L"",charset ? charset->Data() : L"");
    }
Platform::String ^Csv::SaveToString(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->saveToString();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Csv::SetCell(int row, int col, Platform::String ^content)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetCell(row,col,content ? content->Data() : L"");
    }
Boolean Csv::SetCellByName(int rowIndex, Platform::String ^columnName, Platform::String ^contentStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetCellByName(rowIndex,columnName ? columnName->Data() : L"",contentStr ? contentStr->Data() : L"");
    }
Boolean Csv::SetColumnName(int index, Platform::String ^columnName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetColumnName(index,columnName ? columnName->Data() : L"");
    }
Boolean Csv::SortByColumn(Platform::String ^columnName, Boolean ascending, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SortByColumn(columnName ? columnName->Data() : L"",ascending,caseSensitive);
    }




