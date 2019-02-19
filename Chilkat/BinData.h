// Generated for Chilkat v9.5.0.76

// This header is generated for Chilkat v9.5.0

#pragma once

class CkBinDataW;

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


public ref class BinData sealed
{
#include "friendDecls.h"
		
	private:
    CkBinDataW *m_impl;

	public:
	virtual ~BinData(void);
	BinData(void);
	//BinData(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumBytes
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean AppendBd(Chilkat::BinData ^binData);

	Boolean AppendBinary(Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean AppendBom(Platform::String ^charset);

	Boolean AppendByte(int byteValue);

	Boolean AppendEncoded(Platform::String ^encData, Platform::String ^encoding);

	Boolean AppendEncodedSb(Chilkat::StringBuilder ^sb, Platform::String ^encoding);

	Boolean AppendInt2(int value, Boolean littleEndian);

	Boolean AppendInt4(int value, Boolean littleEndian);

	Boolean AppendSb(Chilkat::StringBuilder ^sb, Platform::String ^charset);

	Boolean AppendString(Platform::String ^str, Platform::String ^charset);

	Boolean Clear(void);

	Boolean ContentsEqual(Chilkat::BinData ^binData);

	Windows::Foundation::Collections::IVector<uint8>^GetBinary(void);

	Windows::Foundation::Collections::IVector<uint8>^GetBinaryChunk(int offset, int numBytes);

	Platform::String ^GetEncoded(Platform::String ^encoding);

	Platform::String ^GetEncodedChunk(int offset, int numBytes, Platform::String ^encoding);

	Boolean GetEncodedSb(Platform::String ^encoding, Chilkat::StringBuilder ^sb);

	Platform::String ^GetString(Platform::String ^charset);

	Boolean LoadBinary(Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean LoadEncoded(Platform::String ^encData, Platform::String ^encoding);

	Boolean LoadFile(Platform::String ^path);

	Boolean RemoveChunk(int offset, int numBytes);

	Boolean SecureClear(void);

	Boolean WriteFile(Platform::String ^path);



};





}


