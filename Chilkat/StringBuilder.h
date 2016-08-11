
// This header is generated for Chilkat v9.5.0

#pragma once

class CkStringBuilderW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class StringBuilder sealed
{
#include "friendDecls.h"
		
	private:
    CkStringBuilderW *m_impl;

	public:
	virtual ~StringBuilder(void);
	StringBuilder(void);
	//StringBuilder(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property int32 Length
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean Append(Platform::String ^value);

	Boolean AppendEncoded(Windows::Foundation::Collections::IVector<uint8>^binaryData, Platform::String ^encoding);

	Boolean AppendInt(int value);

	Boolean AppendInt64(int64 value);

	void Clear(void);

	Boolean Contains(Platform::String ^str, Boolean caseSensitive);

	Boolean Equals(Platform::String ^str, Boolean caseSensitive);

	Platform::String ^GetAsString(void);

	void Replace(Platform::String ^value, Platform::String ^replacement);



};





}


