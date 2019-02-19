// Generated for Chilkat v9.5.0.76

// This header is generated for Chilkat v9.5.0

#pragma once

class CkCacheW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class CkDateTime;


public ref class Cache sealed
{
#include "friendDecls.h"
		
	private:
    CkCacheW *m_impl;

	public:
	virtual ~Cache(void);
	Cache(void);
	//Cache(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	property Platform::String ^LastEtagFetched
	{
		Platform::String ^get();
	}
	property Platform::String ^LastExpirationFetchedStr
	{
		Platform::String ^get();
	}
	property Boolean LastHitExpired
	{
		Boolean get();
	}
	property Platform::String ^LastKeyFetched
	{
		Platform::String ^get();
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 Level
	{
		int32 get();
		void set(int32);
	}
	property int32 NumRoots
	{
		int32 get();
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
	void AddRoot(Platform::String ^path);

	int DeleteAll(void);

	int DeleteAllExpired(void);

	Boolean DeleteFromCache(Platform::String ^key);

	int DeleteOlderDt(Chilkat::CkDateTime ^dateTime);

	int DeleteOlderStr(Platform::String ^dateTimeStr);

	Windows::Foundation::Collections::IVector<uint8>^FetchFromCache(Platform::String ^key);

	Platform::String ^FetchText(Platform::String ^key);

	Platform::String ^GetEtag(Platform::String ^key);

	CkDateTime ^GetExpirationDt(Platform::String ^key);

	Platform::String ^GetExpirationStr(Platform::String ^url);

	Platform::String ^GetFilename(Platform::String ^key);

	Platform::String ^GetRoot(int index);

	Boolean IsCached(Platform::String ^key);

	Boolean SaveTextDt(Platform::String ^key, Chilkat::CkDateTime ^expireDateTime, Platform::String ^eTag, Platform::String ^itemTextData);

	Boolean SaveTextNoExpire(Platform::String ^key, Platform::String ^eTag, Platform::String ^itemTextData);

	Boolean SaveTextStr(Platform::String ^key, Platform::String ^expireDateTime, Platform::String ^eTag, Platform::String ^itemTextData);

	Boolean SaveToCacheDt(Platform::String ^key, Chilkat::CkDateTime ^expireDateTime, Platform::String ^eTag, Windows::Foundation::Collections::IVector<uint8>^itemData);

	Boolean SaveToCacheNoExpire(Platform::String ^key, Platform::String ^eTag, Windows::Foundation::Collections::IVector<uint8>^itemData);

	Boolean SaveToCacheStr(Platform::String ^key, Platform::String ^expireDateTime, Platform::String ^eTag, Windows::Foundation::Collections::IVector<uint8>^itemData);

	Boolean UpdateExpirationDt(Platform::String ^key, Chilkat::CkDateTime ^expireDateTime);

	Boolean UpdateExpirationStr(Platform::String ^key, Platform::String ^expireDateTime);



};





}


