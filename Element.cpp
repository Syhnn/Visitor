/// Includes

#include "Element.h"


// Initializing the wonderful static variable I created earlier and I completely forgot o/
// This have absolutely nothing to do with the visitor pattern but I probably had an idea putting this here so I'll just update my main file
int Element::_mem = 0;


/// Constructors and destructor

Element::Element() :
	_id(_mem++) // Id will auto-increment starting at 0 (++_mem will start at 1)
{}
