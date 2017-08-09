
// This source file is generated.

#include "pch.h"
#include "TaskChain.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkTaskChainW.h"
		
#include "include/CkTaskW.h"
#include "Task.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::TaskChain::~TaskChain(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::TaskChain::TaskChain(void) 
{
    m_impl = new CkTaskChainW();
}

//Chilkat::TaskChain::TaskChain(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkTaskChainW *)x;
//    if (!m_impl) m_impl = new CkTaskChainW();
//    }
//    
//Platform::IntPtr Chilkat::TaskChain::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::TaskChain::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::TaskChain::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::TaskChain::Finished::get()
    {
    return m_impl ? m_impl->get_Finished() : false;
    }
int Chilkat::TaskChain::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::TaskChain::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
Boolean Chilkat::TaskChain::Inert::get()
    {
    return m_impl ? m_impl->get_Inert() : false;
    }
String ^Chilkat::TaskChain::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::TaskChain::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::TaskChain::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::TaskChain::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::TaskChain::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::TaskChain::Live::get()
    {
    return m_impl ? m_impl->get_Live() : false;
    }
int Chilkat::TaskChain::NumTasks::get()
    {
    return m_impl ? m_impl->get_NumTasks() : 0;
    }
String ^Chilkat::TaskChain::Status::get()
    {
    return ref new String(m_impl ? m_impl->status() : L"");
    }
int Chilkat::TaskChain::StatusInt::get()
    {
    return m_impl ? m_impl->get_StatusInt() : 0;
    }
Boolean Chilkat::TaskChain::StopOnFailedTask::get()
    {
    return m_impl ? m_impl->get_StopOnFailedTask() : false;
    }
void Chilkat::TaskChain::StopOnFailedTask::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_StopOnFailedTask(newVal);
    }
Boolean Chilkat::TaskChain::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::TaskChain::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::TaskChain::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean TaskChain::Append(Chilkat::Task ^task)
    {
	if (m_impl == nullptr) { return false; }
	if (task == nullptr) { return false; }
	CkTaskW* pObj0 = task->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	return m_impl->Append(*pObj0);
    }
Boolean TaskChain::Cancel(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Cancel();
    }
Task ^TaskChain::GetTask(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkTaskW *pRetObj = m_impl->GetTask(index);
	if (!pRetObj) return nullptr;
	Chilkat::Task ^pTask = ref new Chilkat::Task();
	pTask->m_impl = pRetObj;
	return pTask;
    }
Boolean TaskChain::Run(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Run();
    }
Boolean TaskChain::RunSynchronously(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->RunSynchronously();
    }
void TaskChain::SleepMs(int numMs)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->SleepMs(numMs);
    }
Boolean TaskChain::Wait(int maxWaitMs)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Wait(maxWaitMs);
    }




