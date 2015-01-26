#pragma once


/// Includes

#include <iostream>

#include "Element.h"


/// Forward declarations

class Visitor;


/**
* The first sub-class. Here we'll just store a number to display so we can actually differentiate our objects
*/
class SubElementA : public Element
{

public:

	// Constructors
	SubElementA();

	// The function to reach, that just display the value of _zwei
	void displayEin();

	// The accept method that make the link between our classes and the visitor
	void accept(Visitor* v);

private:

	// A random variable
	int _ein;

};
