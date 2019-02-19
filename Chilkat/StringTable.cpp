// Generated for Chilkat v9.5.0.76

// This source file is generated.

#include "pch.h"
#include "StringTable.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkStringTableW.h"
		
#include "include/CkStringBuilderW.h"
#include "StringBuilder.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::StringTable::~StringTable(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::StringTable::StringTable(void) 
{
    m_impl = new CkStringTableW();
}

//Chilkat::StringTable::StringTable(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkStringTableW *)x;
//    if (!m_impl) m_impl = new CkStringTableW();
//    }
//    
//Platform::IntPtr Chilkat::StringTable::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


int Chilkat::StringTable::Count::get()
    {
    return m_impl ? m_impl->get_Count() : 0;
    }
String ^Chilkat::StringTable::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::StringTable::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::StringTable::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::StringTable::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::StringTable::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::StringTable::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::StringTable::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::StringTable::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::StringTable::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::StringTable::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean StringTable::Append(Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Append(value ? value->Data() : L"");
    }
Boolean StringTable::AppendFromFile(int maxLineLen, Platform::String ^charset, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendFromFile(maxLineLen,charset ? charset->Data() : L"",path ? path->Data() : L"");
    }
Boolean StringTable::AppendFromSb(Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->AppendFromSb(*pObj0);
    }
void StringTable::Clear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->Clear();
    }
int StringTable::IntAt(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->IntAt(index);
    }
Boolean StringTable::SaveToFile(Platform::String ^charset, Boolean bCrlf, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SaveToFile(charset ? charset->Data() : L"",bCrlf,path ? path->Data() : L"");
    }
Boolean StringTable::SplitAndAppend(Platform::String ^inStr, Platform::String ^delimiterChar, Boolean exceptDoubleQuoted, Boolean exceptEscaped)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SplitAndAppend(inStr ? inStr->Data() : L"",delimiterChar ? delimiterChar->Data() : L"",exceptDoubleQuoted,exceptEscaped);
    }
Platform::String ^StringTable::StringAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->stringAt(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




