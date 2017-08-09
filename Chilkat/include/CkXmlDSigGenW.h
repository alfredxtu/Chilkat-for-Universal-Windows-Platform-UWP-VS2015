// CkXmlDSigGenW.h: interface for the CkXmlDSigGenW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.69

#ifndef _CkXmlDSigGenW_H
#define _CkXmlDSigGenW_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkWideCharBase.h"




#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkXmlDSigGenW
class CK_VISIBLE_PUBLIC CkXmlDSigGenW  : public CkWideCharBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkXmlDSigGenW(const CkXmlDSigGenW &);
	CkXmlDSigGenW &operator=(const CkXmlDSigGenW &);

    public:
	CkXmlDSigGenW(void);
	virtual ~CkXmlDSigGenW(void);

	static CkXmlDSigGenW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Test
	bool get_Test(void);
	// Test
	void put_Test(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Test2
	bool Test2(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
