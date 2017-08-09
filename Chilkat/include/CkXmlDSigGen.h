// CkXmlDSigGen.h: interface for the CkXmlDSigGen class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.69

#ifndef _CkXmlDSigGen_H
#define _CkXmlDSigGen_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkXmlDSigGen
class CK_VISIBLE_PUBLIC CkXmlDSigGen  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkXmlDSigGen(const CkXmlDSigGen &);
	CkXmlDSigGen &operator=(const CkXmlDSigGen &);

    public:
	CkXmlDSigGen(void);
	virtual ~CkXmlDSigGen(void);

	static CkXmlDSigGen *createNew(void);
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
