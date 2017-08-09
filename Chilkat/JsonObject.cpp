
// This source file is generated.

#include "pch.h"
#include "JsonObject.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkJsonObjectW.h"
		
#include "include/CkJsonArrayW.h"
#include "include/CkStringTableW.h"
#include "include/CkBinDataW.h"
#include "include/CkStringBuilderW.h"
#include "include/CkHashtableW.h"
#include "JsonArray.h"
#include "StringTable.h"
#include "BinData.h"
#include "StringBuilder.h"
#include "Hashtable.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::JsonObject::~JsonObject(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::JsonObject::JsonObject(void) 
{
    m_impl = new CkJsonObjectW();
}

//Chilkat::JsonObject::JsonObject(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkJsonObjectW *)x;
//    if (!m_impl) m_impl = new CkJsonObjectW();
//    }
//    
//Platform::IntPtr Chilkat::JsonObject::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::JsonObject::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::JsonObject::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::JsonObject::DelimiterChar::get()
    {
    return ref new String(m_impl ? m_impl->delimiterChar() : L"");
    }
void Chilkat::JsonObject::DelimiterChar::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DelimiterChar(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::JsonObject::EmitCompact::get()
    {
    return m_impl ? m_impl->get_EmitCompact() : false;
    }
void Chilkat::JsonObject::EmitCompact::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmitCompact(newVal);
    }
Boolean Chilkat::JsonObject::EmitCrLf::get()
    {
    return m_impl ? m_impl->get_EmitCrLf() : false;
    }
void Chilkat::JsonObject::EmitCrLf::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmitCrLf(newVal);
    }
int Chilkat::JsonObject::I::get()
    {
    return m_impl ? m_impl->get_I() : 0;
    }
void Chilkat::JsonObject::I::set(int newVal)
    {
        if (m_impl) m_impl->put_I(newVal);
    }
int Chilkat::JsonObject::J::get()
    {
    return m_impl ? m_impl->get_J() : 0;
    }
void Chilkat::JsonObject::J::set(int newVal)
    {
        if (m_impl) m_impl->put_J(newVal);
    }
int Chilkat::JsonObject::K::get()
    {
    return m_impl ? m_impl->get_K() : 0;
    }
void Chilkat::JsonObject::K::set(int newVal)
    {
        if (m_impl) m_impl->put_K(newVal);
    }
String ^Chilkat::JsonObject::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::JsonObject::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::JsonObject::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::JsonObject::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::JsonObject::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::JsonObject::Size::get()
    {
    return m_impl ? m_impl->get_Size() : 0;
    }
Boolean Chilkat::JsonObject::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::JsonObject::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::JsonObject::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean JsonObject::AddArrayAt(int index, Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddArrayAt(index,name ? name->Data() : L"");
    }
Boolean JsonObject::AddBoolAt(int index, Platform::String ^name, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddBoolAt(index,name ? name->Data() : L"",value);
    }
Boolean JsonObject::AddIntAt(int index, Platform::String ^name, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddIntAt(index,name ? name->Data() : L"",value);
    }
Boolean JsonObject::AddNullAt(int index, Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddNullAt(index,name ? name->Data() : L"");
    }
Boolean JsonObject::AddNumberAt(int index, Platform::String ^name, Platform::String ^numericStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddNumberAt(index,name ? name->Data() : L"",numericStr ? numericStr->Data() : L"");
    }
Boolean JsonObject::AddObjectAt(int index, Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddObjectAt(index,name ? name->Data() : L"");
    }
Boolean JsonObject::AddStringAt(int index, Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddStringAt(index,name ? name->Data() : L"",value ? value->Data() : L"");
    }
JsonArray ^JsonObject::AppendArray(Platform::String ^name)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonArrayW *pRetObj = m_impl->AppendArray(name ? name->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::JsonArray ^pJsonArray = ref new Chilkat::JsonArray();
	pJsonArray->m_impl = pRetObj;
	return pJsonArray;
    }
Boolean JsonObject::AppendBool(Platform::String ^name, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendBool(name ? name->Data() : L"",value);
    }
Boolean JsonObject::AppendInt(Platform::String ^name, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendInt(name ? name->Data() : L"",value);
    }
JsonObject ^JsonObject::AppendObject(Platform::String ^name)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonObjectW *pRetObj = m_impl->AppendObject(name ? name->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
Boolean JsonObject::AppendString(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AppendString(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean JsonObject::AppendStringArray(Platform::String ^name, Chilkat::StringTable ^values)
    {
	if (m_impl == nullptr) { return false; }
	if (values == nullptr) { return false; }
	CkStringTableW* pObj1 = values->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->AppendStringArray(name ? name->Data() : L"",*pObj1);
    }
JsonArray ^JsonObject::ArrayAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonArrayW *pRetObj = m_impl->ArrayAt(index);
	if (!pRetObj) return nullptr;
	Chilkat::JsonArray ^pJsonArray = ref new Chilkat::JsonArray();
	pJsonArray->m_impl = pRetObj;
	return pJsonArray;
    }
JsonArray ^JsonObject::ArrayOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonArrayW *pRetObj = m_impl->ArrayOf(jsonPath ? jsonPath->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::JsonArray ^pJsonArray = ref new Chilkat::JsonArray();
	pJsonArray->m_impl = pRetObj;
	return pJsonArray;
    }
Boolean JsonObject::BoolAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->BoolAt(index);
    }
Boolean JsonObject::BoolOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->BoolOf(jsonPath ? jsonPath->Data() : L"");
    }
Boolean JsonObject::BytesOf(Platform::String ^jsonPath, Platform::String ^encoding, Chilkat::BinData ^bd)
    {
	if (m_impl == nullptr) { return false; }
	if (bd == nullptr) { return false; }
	CkBinDataW* pObj2 = bd->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	return m_impl->BytesOf(jsonPath ? jsonPath->Data() : L"",encoding ? encoding->Data() : L"",*pObj2);
    }
JsonObject ^JsonObject::Clone(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonObjectW *pRetObj = m_impl->Clone();
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
Boolean JsonObject::Delete(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Delete(name ? name->Data() : L"");
    }
Boolean JsonObject::DeleteAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->DeleteAt(index);
    }
Platform::String ^JsonObject::Emit(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->emit();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean JsonObject::EmitSb(Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->EmitSb(*pObj0);
    }
Platform::String ^JsonObject::EmitWithSubs(Chilkat::Hashtable ^subs, Boolean omitEmpty)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (subs == nullptr) { return nullptr; }
	CkHashtableW* pObj0 = subs->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->emitWithSubs(*pObj0,omitEmpty);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
JsonObject ^JsonObject::FindObjectWithMember(Platform::String ^name)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonObjectW *pRetObj = m_impl->FindObjectWithMember(name ? name->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
JsonObject ^JsonObject::FindRecord(Platform::String ^arrayPath, Platform::String ^relPath, Platform::String ^value, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonObjectW *pRetObj = m_impl->FindRecord(arrayPath ? arrayPath->Data() : L"",relPath ? relPath->Data() : L"",value ? value->Data() : L"",caseSensitive);
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
Platform::String ^JsonObject::FindRecordString(Platform::String ^arrayPath, Platform::String ^relPath, Platform::String ^value, Boolean caseSensitive, Platform::String ^retRelPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->findRecordString(arrayPath ? arrayPath->Data() : L"",relPath ? relPath->Data() : L"",value ? value->Data() : L"",caseSensitive,retRelPath ? retRelPath->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean JsonObject::FirebaseApplyEvent(Platform::String ^name, Platform::String ^data)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FirebaseApplyEvent(name ? name->Data() : L"",data ? data->Data() : L"");
    }
Boolean JsonObject::FirebasePatch(Platform::String ^jsonPath, Platform::String ^jsonData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FirebasePatch(jsonPath ? jsonPath->Data() : L"",jsonData ? jsonData->Data() : L"");
    }
Boolean JsonObject::FirebasePut(Platform::String ^jsonPath, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->FirebasePut(jsonPath ? jsonPath->Data() : L"",value ? value->Data() : L"");
    }
JsonObject ^JsonObject::GetDocRoot(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonObjectW *pRetObj = m_impl->GetDocRoot();
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
Boolean JsonObject::HasMember(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->HasMember(jsonPath ? jsonPath->Data() : L"");
    }
int JsonObject::IndexOf(Platform::String ^name)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->IndexOf(name ? name->Data() : L"");
    }
int JsonObject::IntAt(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->IntAt(index);
    }
int JsonObject::IntOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->IntOf(jsonPath ? jsonPath->Data() : L"");
    }
Boolean JsonObject::IsNullAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->IsNullAt(index);
    }
Boolean JsonObject::IsNullOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->IsNullOf(jsonPath ? jsonPath->Data() : L"");
    }
int JsonObject::JsonTypeOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->JsonTypeOf(jsonPath ? jsonPath->Data() : L"");
    }
Boolean JsonObject::Load(Platform::String ^json)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Load(json ? json->Data() : L"");
    }
Boolean JsonObject::LoadFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadFile(path ? path->Data() : L"");
    }
Boolean JsonObject::LoadPredefined(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->LoadPredefined(name ? name->Data() : L"");
    }
Boolean JsonObject::LoadSb(Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj0 = sb->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->LoadSb(*pObj0);
    }
Platform::String ^JsonObject::NameAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->nameAt(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
JsonObject ^JsonObject::ObjectAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonObjectW *pRetObj = m_impl->ObjectAt(index);
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
JsonObject ^JsonObject::ObjectOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkJsonObjectW *pRetObj = m_impl->ObjectOf(jsonPath ? jsonPath->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
Boolean JsonObject::Predefine(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Predefine(name ? name->Data() : L"");
    }
Boolean JsonObject::Rename(Platform::String ^oldName, Platform::String ^newName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Rename(oldName ? oldName->Data() : L"",newName ? newName->Data() : L"");
    }
Boolean JsonObject::RenameAt(int index, Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->RenameAt(index,name ? name->Data() : L"");
    }
Boolean JsonObject::SetBoolAt(int index, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetBoolAt(index,value);
    }
Boolean JsonObject::SetBoolOf(Platform::String ^jsonPath, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetBoolOf(jsonPath ? jsonPath->Data() : L"",value);
    }
Boolean JsonObject::SetIntAt(int index, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetIntAt(index,value);
    }
Boolean JsonObject::SetIntOf(Platform::String ^jsonPath, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetIntOf(jsonPath ? jsonPath->Data() : L"",value);
    }
Boolean JsonObject::SetNullAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetNullAt(index);
    }
Boolean JsonObject::SetNullOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetNullOf(jsonPath ? jsonPath->Data() : L"");
    }
Boolean JsonObject::SetNumberAt(int index, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetNumberAt(index,value ? value->Data() : L"");
    }
Boolean JsonObject::SetNumberOf(Platform::String ^jsonPath, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetNumberOf(jsonPath ? jsonPath->Data() : L"",value ? value->Data() : L"");
    }
Boolean JsonObject::SetStringAt(int index, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetStringAt(index,value ? value->Data() : L"");
    }
Boolean JsonObject::SetStringOf(Platform::String ^jsonPath, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetStringOf(jsonPath ? jsonPath->Data() : L"",value ? value->Data() : L"");
    }
int JsonObject::SizeOfArray(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->SizeOfArray(jsonPath ? jsonPath->Data() : L"");
    }
Platform::String ^JsonObject::StringAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->stringAt(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^JsonObject::StringOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->stringOf(jsonPath ? jsonPath->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean JsonObject::StringOfSb(Platform::String ^jsonPath, Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj1 = sb->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->StringOfSb(jsonPath ? jsonPath->Data() : L"",*pObj1);
    }
int JsonObject::TypeAt(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->TypeAt(index);
    }
Boolean JsonObject::UpdateBd(Platform::String ^jsonPath, Platform::String ^encoding, Chilkat::BinData ^bd)
    {
	if (m_impl == nullptr) { return false; }
	if (bd == nullptr) { return false; }
	CkBinDataW* pObj2 = bd->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	return m_impl->UpdateBd(jsonPath ? jsonPath->Data() : L"",encoding ? encoding->Data() : L"",*pObj2);
    }
Boolean JsonObject::UpdateBool(Platform::String ^jsonPath, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UpdateBool(jsonPath ? jsonPath->Data() : L"",value);
    }
Boolean JsonObject::UpdateInt(Platform::String ^jsonPath, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UpdateInt(jsonPath ? jsonPath->Data() : L"",value);
    }
Boolean JsonObject::UpdateNull(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UpdateNull(jsonPath ? jsonPath->Data() : L"");
    }
Boolean JsonObject::UpdateNumber(Platform::String ^jsonPath, Platform::String ^numericStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UpdateNumber(jsonPath ? jsonPath->Data() : L"",numericStr ? numericStr->Data() : L"");
    }
Boolean JsonObject::UpdateSb(Platform::String ^jsonPath, Chilkat::StringBuilder ^sb)
    {
	if (m_impl == nullptr) { return false; }
	if (sb == nullptr) { return false; }
	CkStringBuilderW* pObj1 = sb->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->UpdateSb(jsonPath ? jsonPath->Data() : L"",*pObj1);
    }
Boolean JsonObject::UpdateString(Platform::String ^jsonPath, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->UpdateString(jsonPath ? jsonPath->Data() : L"",value ? value->Data() : L"");
    }




