/** @file PlainBox.h */
#ifndef _PLAIN_BOX
#define _PLAIN_BOX
#include "BoxInterface.h"	// Include the implementation file
template < class ItemType >	// Indicates this is a template definition
// Declaration for the class PlainBox

class PlainBox :public BoxInterface <ItemType>
{
private:
	// Data field
	ItemType item;

public:
	// Default constructor
	PlainBox();

	// Parameterized constructor
	PlainBox(const ItemType & theItem);

	// Mutator method that can change the value of the data field
	void setItem(const ItemType & theItem);

	// Accessor method to get the value of the data field
	ItemType getItem() const;

};  // end PlainBox
#endif