#pragma once


/// Forward declaration

class SubElementA;
class SubElementB;


/**
* the visitor class that will be used to know the real type of the object stored in our base class pointer
*/
class Visitor
{

public:

	// If the type is SubElementA, call the method  from A
	void display(SubElementA* a);
	// And same thing with B
	void display(SubElementB* b);

};
