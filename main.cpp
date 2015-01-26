/// Includes

#include <iostream>

#include "SubElementA.h"
#include "SubElementB.h"
#include "Visitor.h"


/**
* Main function
*/
int main(int argc, char* argv[])
{
	// Creating two instances of sub-classes in pointers of the base class
	Element* e1 = new SubElementA();
	Element* e2 = new SubElementB();

	// Creating the visitor
	Visitor* v = new Visitor();
	
	// Call accept method to reach the wanted display function
	// If our instance real type is SubElementA we should call displayEin, for SubElementB, displayZwei
	e1->accept(v);
	e2->accept(v);

	// Free memory
	delete e1;
	delete e2;
	delete v;


	return 0; // End

}