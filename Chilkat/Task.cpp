
// This source file is generated.

#include "pch.h"
#include "Task.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkTaskW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Task::~Task(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Task::Task(void) 
{
    m_impl = new CkTaskW();
}

//Chilkat::Task::Task(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkTaskW *)x;
//    if (!m_impl) m_impl = new CkTaskW();
//    }
//    
//Platform::IntPtr Chilkat::Task::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Task::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Task::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Task::Finished::get()
    {
    return m_impl ? m_impl->get_Finished() : false;
    }
int Chilkat::Task::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Task::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
Boolean Chilkat::Task::Inert::get()
    {
    return m_impl ? m_impl->get_Inert() : false;
    }
Boolean Chilkat::Task::KeepProgressLog::get()
    {
    return m_impl ? m_impl->get_KeepProgressLog() : false;
    }
void Chilkat::Task::KeepProgressLog::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_KeepProgressLog(newVal);
    }
String ^Chilkat::Task::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Task::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Task::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
Boolean Chilkat::Task::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Task::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::Task::Live::get()
    {
    return m_impl ? m_impl->get_Live() : false;
    }
int Chilkat::Task::PercentDone::get()
    {
    return m_impl ? m_impl->get_PercentDone() : 0;
    }
int Chilkat::Task::ProgressLogSize::get()
    {
    return m_impl ? m_impl->get_ProgressLogSize() : 0;
    }
String ^Chilkat::Task::ResultErrorText::get()
    {
    return ref new String(m_impl ? m_impl->resultErrorText() : L"");
    }
String ^Chilkat::Task::ResultType::get()
    {
    return ref new String(m_impl ? m_impl->resultType() : L"");
    }
String ^Chilkat::Task::Status::get()
    {
    return ref new String(m_impl ? m_impl->status() : L"");
    }
int Chilkat::Task::StatusInt::get()
    {
    return m_impl ? m_impl->get_StatusInt() : 0;
    }
int Chilkat::Task::TaskId::get()
    {
    return m_impl ? m_impl->get_TaskId() : 0;
    }
Boolean Chilkat::Task::TaskSuccess::get()
    {
    return m_impl ? m_impl->get_TaskSuccess() : false;
    }
String ^Chilkat::Task::UserData::get()
    {
    return ref new String(m_impl ? m_impl->userData() : L"");
    }
void Chilkat::Task::UserData::set(String ^newVal)
    {
        if (m_impl) m_impl->put_UserData(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Task::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Task::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
String ^Chilkat::Task::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }


Boolean Task::Cancel(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Cancel();
    }
void Task::ClearProgressLog(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->ClearProgressLog();
    }
Windows::Foundation::Collections::IVector<uint8>^Task::CopyResultBytes(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->CopyResultBytes(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Task::GetResultBool(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->GetResultBool();
    }
Windows::Foundation::Collections::IVector<uint8>^Task::GetResultBytes(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	bool success = m_impl->GetResultBytes(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
int Task::GetResultInt(void)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	return m_impl->GetResultInt();
    }
Platform::String ^Task::GetResultString(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->getResultString();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Task::ProgressInfoName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->progressInfoName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Task::ProgressInfoValue(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	const wchar_t *retStr = m_impl->progressInfoValue(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Task::RemoveProgressInfo(int index)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->RemoveProgressInfo(index);
    }
Boolean Task::Run(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Run();
    }
Boolean Task::RunSynchronously(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->RunSynchronously();
    }
void Task::SleepMs(int numMs)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	m_impl->SleepMs(numMs);
    }
Boolean Task::Wait(int maxWaitMs)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	return m_impl->Wait(maxWaitMs);
    }




