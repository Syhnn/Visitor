#pragma once


/// Includes

#include <iostream>

#include "Element.h"


/// Forward declarations

class Visitor;


/**
* One of our sub-classes, here we'll store adifferent variable that we had in the first one
*/
class SubElementB : public Element
{

public:

	// Constructors
	SubElementB();

	// The function to reach, that just display the value of _zwei
	void displayZwei();

	// The accept method that make the link between our classes and the visitor
	void accept(Visitor* v);

private:

	// A random variable
	int _zwei;

};
