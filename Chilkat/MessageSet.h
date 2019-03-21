// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkMessageSetW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class MessageSet sealed
{
#include "friendDecls.h"
		
	private:
    CkMessageSetW *m_impl;

	public:
	virtual ~MessageSet(void);
	MessageSet(void);
	//MessageSet(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property int32 Count
	{
		int32 get();
	}
	property Boolean HasUids
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean ContainsId(int msgId);

	Boolean FromCompactString(Platform::String ^str);

	int GetId(int index);

	void InsertId(int id);

	void RemoveId(int id);

	Platform::String ^ToCommaSeparatedStr(void);

	Platform::String ^ToCompactString(void);



};





}


