
// This header is generated for Chilkat v9.5.0

#pragma once

class CkTaskW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Task sealed
{
#include "friendDecls.h"
		
	private:
    CkTaskW *m_impl;

	public:
	virtual ~Task(void);
	Task(void);
	//Task(Platform::IntPtr p);

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
	property Boolean KeepProgressLog
	{
		Boolean get();
		void set(Boolean);
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
	property int32 PercentDone
	{
		int32 get();
	}
	property int32 ProgressLogSize
	{
		int32 get();
	}
	property Platform::String ^ResultErrorText
	{
		Platform::String ^get();
	}
	property Platform::String ^ResultType
	{
		Platform::String ^get();
	}
	property Platform::String ^Status
	{
		Platform::String ^get();
	}
	property int32 StatusInt
	{
		int32 get();
	}
	property int32 TaskId
	{
		int32 get();
	}
	property Boolean TaskSuccess
	{
		Boolean get();
	}
	property Platform::String ^UserData
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	Boolean Cancel(void);

	void ClearProgressLog(void);

	Windows::Foundation::Collections::IVector<uint8>^CopyResultBytes(void);

	Boolean GetResultBool(void);

	Windows::Foundation::Collections::IVector<uint8>^GetResultBytes(void);

	int GetResultInt(void);

	Platform::String ^GetResultString(void);

	Platform::String ^ProgressInfoName(int index);

	Platform::String ^ProgressInfoValue(int index);

	void RemoveProgressInfo(int index);

	Boolean Run(void);

	Boolean RunSynchronously(void);

	void SleepMs(int numMs);

	Boolean Wait(int maxWaitMs);



};





}


