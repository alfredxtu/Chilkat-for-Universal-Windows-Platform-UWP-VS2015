
// This header is generated for Chilkat v9.5.0

#pragma once

class CkHashtableW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class StringTable;


public ref class Hashtable sealed
{
#include "friendDecls.h"
		
	private:
    CkHashtableW *m_impl;

	public:
	virtual ~Hashtable(void);
	Hashtable(void);
	//Hashtable(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------


	// ----------------------
	// Methods
	// ----------------------
	Boolean AddInt(Platform::String ^key, int value);

	Boolean AddQueryParams(Platform::String ^queryParams);

	Boolean AddStr(Platform::String ^key, Platform::String ^value);

	void Clear(void);

	Boolean ClearWithNewCapacity(int capacity);

	Boolean Contains(Platform::String ^key);

	Boolean GetKeys(Chilkat::StringTable ^strTable);

	int LookupInt(Platform::String ^key);

	Platform::String ^LookupStr(Platform::String ^key);

	Boolean Remove(Platform::String ^key);



};





}


