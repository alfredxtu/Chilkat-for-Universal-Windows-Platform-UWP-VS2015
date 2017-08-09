
// This header is generated for Chilkat v9.5.0

#pragma once

class CkSFtpDirW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class SFtpFile;


public ref class SFtpDir sealed
{
#include "friendDecls.h"
		
	private:
    CkSFtpDirW *m_impl;

	public:
	virtual ~SFtpDir(void);
	SFtpDir(void);
	//SFtpDir(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumFilesAndDirs
	{
		int32 get();
	}
	property Platform::String ^OriginalPath
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Platform::String ^GetFilename(int index);

	SFtpFile ^GetFileObject(int index);



};





}


