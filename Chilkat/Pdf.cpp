// Generated for Chilkat v9.5.0.76

// This source file is generated.

#include "pch.h"
#include "Pdf.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkPdfW.h"
		
#include "include/CkStringArrayW.h"
#include "include/CkCertW.h"
#include "include/CkBinDataW.h"
#include "StringArray.h"
#include "CkDateTime.h"
#include "Cert.h"
#include "BinData.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Pdf::~Pdf(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Pdf::Pdf(void) 
{
    m_impl = new CkPdfW();
}

//Chilkat::Pdf::Pdf(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkPdfW *)x;
//    if (!m_impl) m_impl = new CkPdfW();
//    }
//    
//Platform::IntPtr Chilkat::Pdf::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Pdf::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Pdf::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
int Chilkat::Pdf::I::get()
    {
    return m_impl ? m_impl->get_I() : 0;
    }
void Chilkat::Pdf::I::set(int newVal)
    {
        if (m_impl) m_impl->put_I(newVal);
    }
String ^Chilkat::Pdf::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Pdf::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Pdf::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Pdf::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Pdf::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Pdf::NumPages::get()
    {
    return m_impl ? m_impl->get_NumPages() : 0;
    }
int Chilkat::Pdf::NumSignatures::get()
    {
    return m_impl ? m_impl->get_NumSignatures() : 0;
    }
Boolean Chilkat::Pdf::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Pdf::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Pdf::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean Pdf::ExtractPageTextSa(int pageNum, Chilkat::StringArray ^sa)
    {
	if (m_impl == nullptr) { return false; }
	if (sa == nullptr) { return false; }
	CkStringArrayW* pObj1 = sa->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->ExtractPageTextSa(pageNum,*pObj1);
    }
Platform::String ^Pdf::GetObjectInfo(Platform::String ^pdfPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getObjectInfo(pdfPath ? pdfPath->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Pdf::GetPageContents(int pageNum)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getPageContents(pageNum);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Pdf::GetSignatureSigningTime(int index, Chilkat::CkDateTime ^dt)
    {
	if (m_impl == nullptr) { return false; }
	if (dt == nullptr) { return false; }
	CkDateTimeW* pObj1 = dt->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->GetSignatureSigningTime(index,*pObj1);
    }
Boolean Pdf::GetSignerCert(int index, Chilkat::Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj1 = cert->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	return m_impl->GetSignerCert(index,*pObj1);
    }
Platform::String ^Pdf::GetSignerName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getSignerName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Pdf::GetSigningReason(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getSigningReason(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Pdf::HasSignatureSigningTime(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->HasSignatureSigningTime(index);
    }
Boolean Pdf::Open(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Open(filePath ? filePath->Data() : L"");
    }
Boolean Pdf::OpenBd(Chilkat::BinData ^pdfData)
    {
	if (m_impl == nullptr) { return false; }
	if (pdfData == nullptr) { return false; }
	CkBinDataW* pObj0 = pdfData->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->OpenBd(*pObj0);
    }
Boolean Pdf::VerifySignatures(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->VerifySignatures();
    }




