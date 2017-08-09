
// This source file is generated.

#include "pch.h"
#include "SFtpDir.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSFtpDirW.h"
		
#include "include/CkSFtpFileW.h"
#include "SFtpFile.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::SFtpDir::~SFtpDir(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::SFtpDir::SFtpDir(void) 
{
    m_impl = new CkSFtpDirW();
}

//Chilkat::SFtpDir::SFtpDir(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSFtpDirW *)x;
//    if (!m_impl) m_impl = new CkSFtpDirW();
//    }
//    
//Platform::IntPtr Chilkat::SFtpDir::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


Boolean Chilkat::SFtpDir::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::SFtpDir::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::SFtpDir::NumFilesAndDirs::get()
    {
    return m_impl ? m_impl->get_NumFilesAndDirs() : 0;
    }
String ^Chilkat::SFtpDir::OriginalPath::get()
    {
    return ref new String(m_impl ? m_impl->originalPath() : L"");
    }


Platform::String ^SFtpDir::GetFilename(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getFilename(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
SFtpFile ^SFtpDir::GetFileObject(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkSFtpFileW *pRetObj = m_impl->GetFileObject(index);
	if (!pRetObj) return nullptr;
	Chilkat::SFtpFile ^pSFtpFile = ref new Chilkat::SFtpFile();
	pSFtpFile->m_impl = pRetObj;
	return pSFtpFile;
    }




