// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkDateTimeW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class DtObj;


public ref class CkDateTime sealed
{
#include "friendDecls.h"
		
	private:
    CkDateTimeW *m_impl;

	public:
	virtual ~CkDateTime(void);
	CkDateTime(void);
	//CkDateTime(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 IsDst
	{
		int32 get();
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
	property int32 UtcOffset
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
	Boolean AddDays(int numDays);

	Boolean AddSeconds(int numSeconds);

	void DeSerialize(Platform::String ^serializedDateTime);

	int DiffSeconds(Chilkat::CkDateTime ^dateTimeArg);

	Boolean ExpiresWithin(int n, Platform::String ^units);

	int64 GetAsDateTimeTicks(Boolean bLocal);

	uint32 GetAsDosDate(Boolean bLocal);

	Platform::String ^GetAsIso8601(Platform::String ^formatStr, Boolean bLocal);

	double GetAsOleDate(Boolean bLocal);

	Platform::String ^GetAsRfc822(Boolean bLocal);

	Platform::String ^GetAsTimestamp(Boolean bLocal);

	uint32 GetAsUnixTime(Boolean bLocal);

	int64 GetAsUnixTime64(Boolean bLocal);

	Platform::String ^GetAsUnixTimeStr(Boolean bLocal);

	DtObj ^GetDtObj(Boolean bLocal);

	Boolean OlderThan(int n, Platform::String ^units);

	Platform::String ^Serialize(void);

	Boolean SetFromCurrentSystemTime(void);

	Boolean SetFromDateTimeTicks(Boolean bLocal, int64 ticks);

	Boolean SetFromDosDate(Boolean bLocal, uint32 t);

	Boolean SetFromDtObj(Chilkat::DtObj ^dt);

	Boolean SetFromNtpTime(int ntpSeconds);

	Boolean SetFromOleDate(Boolean bLocal, double dt);

	Boolean SetFromRfc822(Platform::String ^rfc822Str);

	Boolean SetFromTimestamp(Platform::String ^timestamp);

	Boolean SetFromUnixTime(Boolean bLocal, uint32 t);

	Boolean SetFromUnixTime64(Boolean bLocal, int64 t);



};





}


