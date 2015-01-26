/// Includes

#include "SubElementA.h"
#include "SubElementB.h"
#include "Visitor.h"

/// Public methods

void Visitor::display(SubElementA* a)
{
	// Thanks to the visitor pattern, if our object type is A, we call displayEin
	a->displayEin();
}

void Visitor::display(SubElementB* b)
{
	// Otherwise if it's B, it will call displayZwei
	b->displayZwei();
}
