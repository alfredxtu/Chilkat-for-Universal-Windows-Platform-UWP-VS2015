// CkStringBuilder.h: interface for the CkStringBuilder class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkStringBuilder_H
#define _CkStringBuilder_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkStringBuilder
class CK_VISIBLE_PUBLIC CkStringBuilder  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkStringBuilder(const CkStringBuilder &);
	CkStringBuilder &operator=(const CkStringBuilder &);

    public:
	CkStringBuilder(void);
	virtual ~CkStringBuilder(void);

	static CkStringBuilder *createNew(void);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The number of characters of the string contained within this instance.
	int get_Length(void);



	// ----------------------
	// Methods
	// ----------------------
	// Appends a copy of the specified string to this instance.
	bool Append(const char *value);


	// Appends the string representation of a specified 32-bit signed integer to this
	// instance.
	bool AppendInt(int value);


	// Appends the string representation of a specified 64-bit signed integer to this
	// instance.
	bool AppendInt64(__int64 value);


	// Appends binary data using the encoding specified by ARG2, such as "base64",
	// "hex", etc.
	bool AppendEncoded(CkByteData &binaryData, const char *encoding);


	// Removes all characters from the current StringBuilder instance.
	void Clear(void);


	// Replaces all occurrences of a specified string in this instance with another
	// specified string.
	void Replace(const char *value, const char *replacement);


	// Returns the contents as a string.
	bool GetAsString(CkString &outStr);

	// Returns the contents as a string.
	const char *getAsString(void);
	// Returns the contents as a string.
	const char *asString(void);


	// Returns true if the contents of this object equals the ARG1. Returns false
	// if unequal. For case insensitive equality, set ARG2 equal to false.
	bool Equals(const char *str, bool caseSensitive);


	// Returns true if the ARG2 is contained within this object. The search begins at
	// ARG1. To search the entire contents, set ARG1 equal to 0. For case sensitive
	// matching, set ARG3 equal to true. For case-insensitive, set ARG3 equal to
	// false.
	bool Contains(const char *str, bool caseSensitive);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
