// Generated for Chilkat v9.5.0.76

// This source file is generated.

#include "pch.h"
#include "JsonArray.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkJsonArrayW.h"
		
#include "include/CkDtObjW.h"
#include "include/CkStringBuilderW.h"
#include "include/CkJsonObjectW.h"
#include "CkDateTime.h"
#include "DtObj.h"
#include "StringBuilder.h"
#include "JsonObject.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::JsonArray::~JsonArray(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::JsonArray::JsonArray(void) 
{
    m_impl = new CkJsonArrayW();
}

//Chilkat::JsonArray::JsonArray(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkJsonArrayW *)x;
//    if (!m_impl) m_impl = new CkJsonArrayW();
//    }
//    
//Platform::IntPtr Chilkat::JsonArray::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::JsonArray::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::JsonArray::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::JsonArray::EmitCompact::get()
    {
    return m_impl ? m_impl->get_EmitCompact() : false;
    }
void Chilkat::JsonArray::EmitCompact::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmitCompact(newVal);
    }
Boolean Chilkat::JsonArray::EmitCrlf::get()
    {
    return m_impl ? m_impl->get_EmitCrlf() : false;
    }
void Chilkat::JsonArray::EmitCrlf::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmitCrlf(newVal);
    }
String ^Chilkat::JsonArray::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::JsonArray::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::JsonArray::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::JsonArray::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::JsonArray::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::JsonArray::Size::get()
    {
    return m_impl ? m_impl->get_Size() : 0;
    }
Boolean Chilkat::JsonArray::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::JsonArray::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::JsonArray::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean JsonArray::AddArrayAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddArrayAt(index);
    }
Boolean JsonArray::AddBoolAt(int index, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddBoolAt(index,value);
    }
Boolean JsonArray::AddIntAt(int index, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddIntAt(index,value);
    }
Boolean JsonArray::AddNullAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddNullAt(index);
    }
Boolean JsonArray::AddNumberAt(int index, Platform::String ^numericStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddNumberAt(index,numericStr ? numericStr->Data() : L"");
    }
Boolean JsonArray::AddObjectAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddObjectAt(index);
    }
Boolean JsonArray::AddStringAt(int index, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddStringAt(index,value ? value->Data() : L"");
    }
JsonArray ^JsonArray::ArrayAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonArrayW *pRetObj = m_impl->ArrayAt(index);
	if (!pRetObj) return nullptr;
	Chilkat::JsonArray ^pJsonArray = ref new Chilkat::JsonArray();
	pJsonArray->m_impl = pRetObj;
	return pJsonArray;
    }
Boolean JsonArray::BoolAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->BoolAt(index);
    }
void JsonArray::Clear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->Clear();
    }
Boolean JsonArray::DateAt(int index, Chilkat::CkDateTime ^dateTime)
    {
	if (m_impl == nullptr) { return false; }
	if (dateTime == nullptr) { return false; }
	CkDateTimeW* pObj1 = dateTime->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->DateAt(index,*pObj1);
    }
Boolean JsonArray::DeleteAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->DeleteAt(index);
    }
Boolean JsonArray::DtAt(int index, Boolean bLocal, Chilkat::DtObj ^dt)
    {
	if (m_impl == nullptr) { return false; }
	if (dt == nullptr) { return false; }
	CkDtObjW* pObj2 = dt->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	return m_impl->DtAt(index,bLocal,*pObj2);
    }
Platform::String ^JsonArray::Emit(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->emit();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean JsonArray::EmitSb(Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->EmitSb(*pObj0);
    }
int JsonArray::FindObject(Platform::String ^name, Platform::String ^value, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->FindObject(name ? name->Data() : L"",value ? value->Data() : L"",caseSensitive);
    }
int JsonArray::FindString(Platform::String ^value, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->FindString(value ? value->Data() : L"",caseSensitive);
    }
int JsonArray::IntAt(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->IntAt(index);
    }
Boolean JsonArray::IsNullAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->IsNullAt(index);
    }
Boolean JsonArray::Load(Platform::String ^jsonArray)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Load(jsonArray ? jsonArray->Data() : L"");
    }
Boolean JsonArray::LoadSb(Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->LoadSb(*pObj0);
    }
JsonObject ^JsonArray::ObjectAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonObjectW *pRetObj = m_impl->ObjectAt(index);
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
Boolean JsonArray::SetBoolAt(int index, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetBoolAt(index,value);
    }
Boolean JsonArray::SetIntAt(int index, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetIntAt(index,value);
    }
Boolean JsonArray::SetNullAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetNullAt(index);
    }
Boolean JsonArray::SetNumberAt(int index, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetNumberAt(index,value ? value->Data() : L"");
    }
Boolean JsonArray::SetStringAt(int index, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetStringAt(index,value ? value->Data() : L"");
    }
Platform::String ^JsonArray::StringAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->stringAt(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean JsonArray::Swap(int index1, int index2)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Swap(index1,index2);
    }
int JsonArray::TypeAt(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->TypeAt(index);
    }




