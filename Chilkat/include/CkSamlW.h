// CkSamlW.h: interface for the CkSamlW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.77

#ifndef _CkSamlW_H
#define _CkSamlW_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkWideCharBase.h"

class CkStringBuilderW;
class CkCertW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkSamlW
class CK_VISIBLE_PUBLIC CkSamlW  : public CkWideCharBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkSamlW(const CkSamlW &);
	CkSamlW &operator=(const CkSamlW &);

    public:
	CkSamlW(void);
	virtual ~CkSamlW(void);

	static CkSamlW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// If set to true, ignores timing issues when validating AuthN Requests.
	// Otherwise (if set to false) will validate the signing date/time against the
	// current system time. The default is false.
	bool get_IgnoreTimingIssues(void);
	// If set to true, ignores timing issues when validating AuthN Requests.
	// Otherwise (if set to false) will validate the signing date/time against the
	// current system time. The default is false.
	void put_IgnoreTimingIssues(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Signs a SAML AuthNRequest to create one of the following:
	//     An AuthnRequest with the Signature embedded in the XML (HTTP-POST binding)
	//     The Signature related to the AuthnRequest. (HTTP-Redirect binding)
	// 
	// The sbRequestXml contains the AuthNRequest XML to be signed. The relayState is the relay state
	// and must not exceed 80 bytes in length. The digestAlg must be one of the following
	// values (or a string containing one of the following values)
	// 
	//     sha1
	//     sha256
	//     sha384
	//     rsha512
	// 
	// Note: Chilkat supports DSA, RSA, and ECDSA based certificates. Chilkat will
	// automatically use the correct signature algorithm, such as
	// "http://www.w3.org/2001/04/xmldsig-more#rsa-sha384", based on the type of key
	// and the hash algorithm.
	// 
	// The cert must be a certificate with an implicitly associated private key. The
	// certificate will have an implicitly associated private key if it was obtained
	// from a .pfx/.p12, or from a JavaKeyStore, or from a PEM containing both the
	// private key and cert. It could also have been obtained (on Windows systems) from
	// the Windows certificate stores.
	// 
	// The binding can be one of the following values:
	// 
	//     HttpPost
	//     HttpRedirect
	// 
	// The signed AuthNRequest is written to sbResult. (If sbResult contained content, it will
	// be entirely replaced by the signed AuthNRequest.)
	// 
	bool SignAuthNRequest(CkStringBuilderW &sbRequestXml, const wchar_t *relayState, const wchar_t *digestAlg, CkCertW &cert, const wchar_t *binding, CkStringBuilderW &sbResult);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
