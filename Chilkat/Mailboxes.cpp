
// This source file is generated.

#include "pch.h"
#include "Mailboxes.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkMailboxesW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Mailboxes::~Mailboxes(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Mailboxes::Mailboxes(void) 
{
    m_impl = new CkMailboxesW();
}

//Chilkat::Mailboxes::Mailboxes(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkMailboxesW *)x;
//    if (!m_impl) m_impl = new CkMailboxesW();
//    }
//    
//Platform::IntPtr Chilkat::Mailboxes::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


int Chilkat::Mailboxes::Count::get()
    {
    return m_impl ? m_impl->get_Count() : 0;
    }


Platform::String ^Mailboxes::GetFlags(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getFlags(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Mailboxes::GetMailboxIndex(Platform::String ^mbxName)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->GetMailboxIndex(mbxName ? mbxName->Data() : L"");
    }
Platform::String ^Mailboxes::GetName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Mailboxes::GetNthFlag(int index, int flagIndex)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getNthFlag(index,flagIndex);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Mailboxes::GetNumFlags(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->GetNumFlags(index);
    }
Boolean Mailboxes::HasFlag(int index, Platform::String ^flagName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->HasFlag(index,flagName ? flagName->Data() : L"");
    }
Boolean Mailboxes::HasInferiors(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->HasInferiors(index);
    }
Boolean Mailboxes::IsMarked(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->IsMarked(index);
    }
Boolean Mailboxes::IsSelectable(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->IsSelectable(index);
    }




