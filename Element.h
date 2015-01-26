#pragma once


/// Forward declarations

class Visitor;


/**
* Our base class, it's not an obligation tu make a pure virtual class but I wanted to do so
*/
class Element
{

public:

	// Constructors
	Element();

	// The accept function for the visitor pattern
	virtual void accept(Visitor* v) = 0;

protected:

	// An id
	int _id;
	// And some stuff to auto-increment it
	static int _mem;

};
