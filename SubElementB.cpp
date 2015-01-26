/// Includes

#include "SubElementB.h"
#include "Visitor.h"


/// Public methods

SubElementB::SubElementB() :
	_zwei(42)
{}

void SubElementB::displayZwei()
{
	// Stuff we want our function to do, here we just display a number different from the other class to see the difference

	std::cout << "Element " << _id << " displaying _zwei : " << _zwei << std::endl;
}

void SubElementB::accept(Visitor* v)
{
	// Here is the magic, send the object himself to the visitor,
	// the type of "this" for the visitor is actually SubelementB and not the type of the base class

	v->display(this);
}
