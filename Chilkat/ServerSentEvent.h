
// This header is generated for Chilkat v9.5.0

#pragma once

class CkServerSentEventW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class ServerSentEvent sealed
{
#include "friendDecls.h"
		
	private:
    CkServerSentEventW *m_impl;

	public:
	virtual ~ServerSentEvent(void);
	ServerSentEvent(void);
	//ServerSentEvent(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^Data
	{
		Platform::String ^get();
	}
	property Platform::String ^EventName
	{
		Platform::String ^get();
	}
	property Platform::String ^LastEventId
	{
		Platform::String ^get();
	}
	property int32 Retry
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean LoadEvent(Platform::String ^eventText);



};





}


