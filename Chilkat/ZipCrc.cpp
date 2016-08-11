
// This source file is generated.

#include "pch.h"
#include "ZipCrc.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkZipCrcW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::ZipCrc::~ZipCrc(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::ZipCrc::ZipCrc(void) 
{
    m_impl = new CkZipCrcW();
}

//Chilkat::ZipCrc::ZipCrc(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkZipCrcW *)x;
//    if (!m_impl) m_impl = new CkZipCrcW();
//    }
//    
//Platform::IntPtr Chilkat::ZipCrc::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}




void ZipCrc::BeginStream(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	m_impl->BeginStream();
    }
uint32 ZipCrc::CalculateCrc(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return 0; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->CalculateCrc(db0);
    }
uint32 ZipCrc::EndStream(void)
    {
	if (m_impl == nullptr) { return 0; }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->EndStream();
    }
IAsyncOperation<uint32>^ ZipCrc::FileCrcAsync(Platform::String ^path)
    {
return create_async([this, path]() -> uint32
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return 0; }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	return m_impl->FileCrc(path ? path->Data() : L"");

});
    }
void ZipCrc::MoreData(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return ; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	m_impl->MoreData(db0);
    }
Platform::String ^ZipCrc::ToHex(int crc)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	const wchar_t *retStr = m_impl->toHex(crc);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




