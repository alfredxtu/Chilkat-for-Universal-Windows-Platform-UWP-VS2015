
// This source file is generated.

#include "pch.h"
#include "Hashtable.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkHashtableW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Hashtable::~Hashtable(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Hashtable::Hashtable(void) 
{
    m_impl = new CkHashtableW();
}

//Chilkat::Hashtable::Hashtable(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkHashtableW *)x;
//    if (!m_impl) m_impl = new CkHashtableW();
//    }
//    
//Platform::IntPtr Chilkat::Hashtable::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}




Boolean Hashtable::AddInt(Platform::String ^key, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddInt(key ? key->Data() : L"",value);
    }
Boolean Hashtable::AddStr(Platform::String ^key, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->AddStr(key ? key->Data() : L"",value ? value->Data() : L"");
    }
void Hashtable::Clear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->Clear();
    }
Boolean Hashtable::ClearWithNewCapacity(int capacity)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->ClearWithNewCapacity(capacity);
    }
Boolean Hashtable::Contains(Platform::String ^key)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Contains(key ? key->Data() : L"");
    }
int Hashtable::LookupInt(Platform::String ^key)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->LookupInt(key ? key->Data() : L"");
    }
Platform::String ^Hashtable::LookupStr(Platform::String ^key)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->lookupStr(key ? key->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Hashtable::Remove(Platform::String ^key)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Remove(key ? key->Data() : L"");
    }




