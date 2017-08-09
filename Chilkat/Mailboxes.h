
// This header is generated for Chilkat v9.5.0

#pragma once

class CkMailboxesW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Mailboxes sealed
{
#include "friendDecls.h"
		
	private:
    CkMailboxesW *m_impl;

	public:
	virtual ~Mailboxes(void);
	Mailboxes(void);
	//Mailboxes(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property int32 Count
	{
		int32 get();
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Platform::String ^GetFlags(int index);

	int GetMailboxIndex(Platform::String ^mbxName);

	Platform::String ^GetName(int index);

	Platform::String ^GetNthFlag(int index, int flagIndex);

	int GetNumFlags(int index);

	Boolean HasFlag(int index, Platform::String ^flagName);

	Boolean HasInferiors(int index);

	Boolean IsMarked(int index);

	Boolean IsSelectable(int index);



};





}


