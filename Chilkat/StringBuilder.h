// Generated for Chilkat v9.5.0.76

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

	ref class BinData;


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
	property int32 IntValue
	{
		int32 get();
		void set(int32);
	}
	property Boolean IsBase64
	{
		Boolean get();
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 Length
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean Append(Platform::String ^value);

	Boolean AppendBd(Chilkat::BinData ^binData, Platform::String ^charset, int offset, int numBytes);

	Boolean AppendEncoded(Windows::Foundation::Collections::IVector<uint8>^binaryData, Platform::String ^encoding);

	Boolean AppendInt(int value);

	Boolean AppendInt64(int64 value);

	Boolean AppendLine(Platform::String ^value, Boolean crlf);

	Boolean AppendSb(Chilkat::StringBuilder ^sb);

	void Clear(void);

	Boolean Contains(Platform::String ^str, Boolean caseSensitive);

	Boolean ContainsWord(Platform::String ^word, Boolean caseSensitive);

	Boolean ContentsEqual(Platform::String ^str, Boolean caseSensitive);

	Boolean ContentsEqualSb(Chilkat::StringBuilder ^sb, Boolean caseSensitive);

	Boolean Decode(Platform::String ^encoding, Platform::String ^charset);

	Boolean Encode(Platform::String ^encoding, Platform::String ^charset);

	Boolean EndsWith(Platform::String ^substr, Boolean caseSensitive);

	Boolean EntityDecode(void);

	Platform::String ^GetAfterBetween(Platform::String ^searchAfter, Platform::String ^beginMark, Platform::String ^endMark);

	Platform::String ^GetAfterFinal(Platform::String ^marker, Boolean removeFlag);

	Platform::String ^GetAsString(void);

	Platform::String ^GetBefore(Platform::String ^marker, Boolean removeFlag);

	Platform::String ^GetBetween(Platform::String ^beginMark, Platform::String ^endMark);

	Windows::Foundation::Collections::IVector<uint8>^GetDecoded(Platform::String ^encoding);

	Platform::String ^GetEncoded(Platform::String ^encoding, Platform::String ^charset);

	Platform::String ^GetNth(int index, Platform::String ^delimiterChar, Boolean exceptDoubleQuoted, Boolean exceptEscaped);

	Platform::String ^LastNLines(int numLines, Boolean bCrlf);

	Boolean LoadFile(Platform::String ^path, Platform::String ^charset);

	Boolean Prepend(Platform::String ^value);

	Boolean PunyDecode(void);

	Boolean PunyEncode(void);

	Boolean RemoveAfterFinal(Platform::String ^marker);

	Boolean RemoveBefore(Platform::String ^marker);

	int Replace(Platform::String ^value, Platform::String ^replacement);

	Boolean ReplaceAfterFinal(Platform::String ^marker, Platform::String ^replacement);

	Boolean ReplaceAllBetween(Platform::String ^beginMark, Platform::String ^endMark, Platform::String ^replacement, Boolean replaceMarks);

	int ReplaceBetween(Platform::String ^beginMark, Platform::String ^endMark, Platform::String ^value, Platform::String ^replacement);

	Boolean ReplaceFirst(Platform::String ^value, Platform::String ^replacement);

	int ReplaceI(Platform::String ^value, int replacement);

	int ReplaceWord(Platform::String ^value, Platform::String ^replacement);

	void SecureClear(void);

	Boolean SetNth(int index, Platform::String ^value, Platform::String ^delimiterChar, Boolean exceptDoubleQuoted, Boolean exceptEscaped);

	Boolean SetString(Platform::String ^value);

	Boolean StartsWith(Platform::String ^substr, Boolean caseSensitive);

	Boolean ToCRLF(void);

	Boolean ToLF(void);

	Boolean ToLowercase(void);

	Boolean ToUppercase(void);

	Boolean Trim(void);

	Boolean TrimInsideSpaces(void);

	Boolean WriteFile(Platform::String ^path, Platform::String ^charset, Boolean emitBom);

	Boolean WriteFileIfModified(Platform::String ^path, Platform::String ^charset, Boolean emitBom);



};





}


