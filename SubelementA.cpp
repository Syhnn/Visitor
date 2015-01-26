/// Includes

#include "SubElementA.h"

#include "Visitor.h"


/// Public methods

SubElementA::SubElementA() :
	_ein(10)
{}

void SubElementA::displayEin()
{
	// Stuff we want our function to do, here we just display a number different from the other class to see the difference

	std::cout << "Element " << _id << " displaying _ein : " << _ein << std::endl;
}

void SubElementA::accept(Visitor* v)
{
	// Here is the magic, send the object himself to the visitor,
	// the type of "this" for the visitor is actually SubelementA and not the type of the base class

	v->display(this);
}
