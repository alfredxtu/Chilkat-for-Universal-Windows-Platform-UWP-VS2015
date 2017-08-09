
// This source file is generated.

#include "pch.h"
#include "XmlDSigGen.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkXmlDSigGenW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::XmlDSigGen::~XmlDSigGen(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::XmlDSigGen::XmlDSigGen(void) 
{
    m_impl = new CkXmlDSigGenW();
}

//Chilkat::XmlDSigGen::XmlDSigGen(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkXmlDSigGenW *)x;
//    if (!m_impl) m_impl = new CkXmlDSigGenW();
//    }
//    
//Platform::IntPtr Chilkat::XmlDSigGen::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::XmlDSigGen::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::XmlDSigGen::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::XmlDSigGen::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::XmlDSigGen::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::XmlDSigGen::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::XmlDSigGen::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::XmlDSigGen::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::XmlDSigGen::Test::get()
    {
    return m_impl ? m_impl->get_Test() : false;
    }
void Chilkat::XmlDSigGen::Test::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Test(newVal);
    }
Boolean Chilkat::XmlDSigGen::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::XmlDSigGen::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::XmlDSigGen::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean XmlDSigGen::Test2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Test2();
    }




