
// This source file is generated.

#include "pch.h"
#include "CkDateTime.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkDateTimeW.h"
		
#include "include/CkDtObjW.h"
#include "DtObj.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::CkDateTime::~CkDateTime(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::CkDateTime::CkDateTime(void) 
{
    m_impl = new CkDateTimeW();
}

//Chilkat::CkDateTime::CkDateTime(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkDateTimeW *)x;
//    if (!m_impl) m_impl = new CkDateTimeW();
//    }
//    
//Platform::IntPtr Chilkat::CkDateTime::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::CkDateTime::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::CkDateTime::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
int Chilkat::CkDateTime::IsDst::get()
    {
    return m_impl ? m_impl->get_IsDst() : 0;
    }
String ^Chilkat::CkDateTime::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::CkDateTime::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::CkDateTime::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::CkDateTime::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::CkDateTime::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::CkDateTime::UtcOffset::get()
    {
    return m_impl ? m_impl->get_UtcOffset() : 0;
    }
Boolean Chilkat::CkDateTime::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::CkDateTime::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::CkDateTime::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean Chilkat::CkDateTime::AddDays(int numDays)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddDays(numDays);
    }
Boolean Chilkat::CkDateTime::AddSeconds(int numSeconds)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddSeconds(numSeconds);
    }
void Chilkat::CkDateTime::DeSerialize(Platform::String ^serializedDateTime)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->DeSerialize(serializedDateTime ? serializedDateTime->Data() : L"");
    }
int Chilkat::CkDateTime::DiffSeconds(Chilkat::CkDateTime ^dateTimeArg)
    {
	if (m_impl == nullptr) { return -1; }
	if (dateTimeArg == nullptr) { return -1; }
	CkDateTimeW* pObj0 = dateTimeArg->m_impl;
	 if (!pObj0) { return -1; }
	// --- prep output arg ---
	return m_impl->DiffSeconds(*pObj0);
    }
Boolean Chilkat::CkDateTime::ExpiresWithin(int n, Platform::String ^units)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ExpiresWithin(n,units ? units->Data() : L"");
    }
int64 Chilkat::CkDateTime::GetAsDateTimeTicks(Boolean bLocal)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->GetAsDateTimeTicks(bLocal);
    }
uint32 Chilkat::CkDateTime::GetAsDosDate(Boolean bLocal)
    {
	if (m_impl == nullptr) { return 0; }
	// --- prep output arg ---
	return m_impl->GetAsDosDate(bLocal);
    }
Platform::String ^Chilkat::CkDateTime::GetAsIso8601(Platform::String ^formatStr, Boolean bLocal)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getAsIso8601(formatStr ? formatStr->Data() : L"",bLocal);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
double Chilkat::CkDateTime::GetAsOleDate(Boolean bLocal)
    {
	if (m_impl == nullptr) { return 0.0; }
	// --- prep output arg ---
	return m_impl->GetAsOleDate(bLocal);
    }
Platform::String ^Chilkat::CkDateTime::GetAsRfc822(Boolean bLocal)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getAsRfc822(bLocal);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Chilkat::CkDateTime::GetAsTimestamp(Boolean bLocal)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getAsTimestamp(bLocal);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
uint32 Chilkat::CkDateTime::GetAsUnixTime(Boolean bLocal)
    {
	if (m_impl == nullptr) { return 0; }
	// --- prep output arg ---
	return m_impl->GetAsUnixTime(bLocal);
    }
int64 Chilkat::CkDateTime::GetAsUnixTime64(Boolean bLocal)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->GetAsUnixTime64(bLocal);
    }
Platform::String ^Chilkat::CkDateTime::GetAsUnixTimeStr(Boolean bLocal)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getAsUnixTimeStr(bLocal);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
DtObj ^Chilkat::CkDateTime::GetDtObj(Boolean bLocal)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkDtObjW *pRetObj = m_impl->GetDtObj(bLocal);
	if (!pRetObj) return nullptr;
	Chilkat::DtObj ^pDtObj = ref new Chilkat::DtObj();
	pDtObj->m_impl = pRetObj;
	return pDtObj;
    }
Boolean Chilkat::CkDateTime::OlderThan(int n, Platform::String ^units)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->OlderThan(n,units ? units->Data() : L"");
    }
Platform::String ^Chilkat::CkDateTime::Serialize(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->serialize();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Chilkat::CkDateTime::SetFromCurrentSystemTime(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetFromCurrentSystemTime();
    }
Boolean Chilkat::CkDateTime::SetFromDateTimeTicks(Boolean bLocal, int64 ticks)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetFromDateTimeTicks(bLocal,ticks);
    }
Boolean Chilkat::CkDateTime::SetFromDosDate(Boolean bLocal, uint32 t)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetFromDosDate(bLocal,t);
    }
Boolean Chilkat::CkDateTime::SetFromDtObj(Chilkat::DtObj ^dt)
    {
	if (m_impl == nullptr) { return false; }
	if (dt == nullptr) { return false; }
	CkDtObjW* pObj0 = dt->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->SetFromDtObj(*pObj0);
    }
Boolean Chilkat::CkDateTime::SetFromNtpTime(int ntpSeconds)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetFromNtpTime(ntpSeconds);
    }
Boolean Chilkat::CkDateTime::SetFromOleDate(Boolean bLocal, double dt)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetFromOleDate(bLocal,dt);
    }
Boolean Chilkat::CkDateTime::SetFromRfc822(Platform::String ^rfc822Str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetFromRfc822(rfc822Str ? rfc822Str->Data() : L"");
    }
Boolean Chilkat::CkDateTime::SetFromTimestamp(Platform::String ^timestamp)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetFromTimestamp(timestamp ? timestamp->Data() : L"");
    }
Boolean Chilkat::CkDateTime::SetFromUnixTime(Boolean bLocal, uint32 t)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetFromUnixTime(bLocal,t);
    }
Boolean Chilkat::CkDateTime::SetFromUnixTime64(Boolean bLocal, int64 t)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->SetFromUnixTime64(bLocal,t);
    }




