// Generated for Chilkat v9.5.0.77

// This header is generated for Chilkat v9.5.0

#pragma once

class CkHttpRequestW;

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
	ref class StringBuilder;


public ref class HttpRequest sealed
{
#include "friendDecls.h"
		
	private:
    CkHttpRequestW *m_impl;

	public:
	virtual ~HttpRequest(void);
	HttpRequest(void);
	//HttpRequest(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^Boundary
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Charset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ContentType
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^EntireHeader
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^HttpVerb
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^HttpVersion
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
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumHeaderFields
	{
		int32 get();
	}
	property int32 NumParams
	{
		int32 get();
	}
	property Platform::String ^Path
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean SendCharset
	{
		Boolean get();
		void set(Boolean);
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
	Boolean AddBdForUpload(Platform::String ^name, Platform::String ^remoteFilename, Chilkat::BinData ^byteData, Platform::String ^contentType);

	Boolean AddBytesForUpload(Platform::String ^name, Platform::String ^remoteFileName, Windows::Foundation::Collections::IVector<uint8>^byteData);

	Boolean AddBytesForUpload2(Platform::String ^name, Platform::String ^remoteFileName, Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^contentType);

	Boolean AddFileForUpload(Platform::String ^name, Platform::String ^filePath);

	Boolean AddFileForUpload2(Platform::String ^name, Platform::String ^filePath, Platform::String ^contentType);

	void AddHeader(Platform::String ^name, Platform::String ^value);

	Boolean AddMwsSignature(Platform::String ^domain, Platform::String ^mwsSecretKey);

	void AddParam(Platform::String ^name, Platform::String ^value);

	Boolean AddStringForUpload(Platform::String ^name, Platform::String ^filename, Platform::String ^strData, Platform::String ^charset);

	Boolean AddStringForUpload2(Platform::String ^name, Platform::String ^filename, Platform::String ^strData, Platform::String ^charset, Platform::String ^contentType);

	Boolean AddSubHeader(int index, Platform::String ^name, Platform::String ^value);

	Boolean GenerateRequestFile(Platform::String ^path);

	Platform::String ^GenerateRequestText(void);

	Platform::String ^GetHeaderField(Platform::String ^name);

	Platform::String ^GetHeaderName(int index);

	Platform::String ^GetHeaderValue(int index);

	Platform::String ^GetParam(Platform::String ^name);

	Platform::String ^GetParamName(int index);

	Platform::String ^GetParamValue(int index);

	Platform::String ^GetUrlEncodedParams(void);

	Boolean LoadBodyFromBd(Chilkat::BinData ^requestBody);

	Boolean LoadBodyFromBytes(Windows::Foundation::Collections::IVector<uint8>^byteData);

	Boolean LoadBodyFromFile(Platform::String ^filePath);

	Boolean LoadBodyFromSb(Chilkat::StringBuilder ^requestBody, Platform::String ^charset);

	Boolean LoadBodyFromString(Platform::String ^bodyStr, Platform::String ^charset);

	void RemoveAllParams(void);

	Boolean RemoveHeader(Platform::String ^name);

	void RemoveParam(Platform::String ^name);

	void SetFromUrl(Platform::String ^url);

	Boolean StreamBodyFromFile(Platform::String ^filePath);

	Boolean StreamChunkFromFile(Platform::String ^path, Platform::String ^offset, Platform::String ^numBytes);

	void UseGet(void);

	void UseHead(void);

	void UsePost(void);

	void UsePostMultipartForm(void);

	void UsePut(void);

	void UseUpload(void);

	void UseUploadPut(void);

	void UseXmlHttp(Platform::String ^xmlBody);



};





}


