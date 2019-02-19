// Generated for Chilkat v9.5.0.76

// This header is generated for Chilkat v9.5.0

#pragma once

class CkSecureStringW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class StringBuilder;


public ref class SecureString sealed
{
#include "friendDecls.h"
		
	private:
    CkSecureStringW *m_impl;

	public:
	virtual ~SecureString(void);
	SecureString(void);
	//SecureString(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^MaintainHash
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean ReadOnly
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Platform::String ^Access(void);

	Boolean Append(Platform::String ^str);

	Boolean AppendSb(Chilkat::StringBuilder ^sb);

	Boolean AppendSecure(Chilkat::SecureString ^secStr);

	Platform::String ^HashVal(Platform::String ^encoding);

	Boolean LoadFile(Platform::String ^path, Platform::String ^charset);

	Boolean SecStrEquals(Chilkat::SecureString ^secStr);

	Boolean VerifyHash(Platform::String ^hashVal, Platform::String ^encoding);



};





}


