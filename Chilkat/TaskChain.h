
// This header is generated for Chilkat v9.5.0

#pragma once

class CkTaskChainW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Task;


public ref class TaskChain sealed
{
#include "friendDecls.h"
		
	private:
    CkTaskChainW *m_impl;

	public:
	virtual ~TaskChain(void);
	TaskChain(void);
	//TaskChain(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean Finished
	{
		Boolean get();
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Boolean Inert
	{
		Boolean get();
	}
	property Platform::String ^LastErrorHtml
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorText
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorXml
	{
		Platform::String ^get();
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean Live
	{
		Boolean get();
	}
	property int32 NumTasks
	{
		int32 get();
	}
	property Platform::String ^Status
	{
		Platform::String ^get();
	}
	property int32 StatusInt
	{
		int32 get();
	}
	property Boolean StopOnFailedTask
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean VerboseLogging
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Version
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean Append(Chilkat::Task ^task);

	Boolean Cancel(void);

	Task ^GetTask(int index);

	Boolean Run(void);

	Boolean RunSynchronously(void);

	void SleepMs(int numMs);

	Boolean Wait(int maxWaitMs);



};





}


