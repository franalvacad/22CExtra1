/** @file ToyBox.cpp */
#include "ToyBox.h"
template < class ItemType > 
ToyBox < ItemType >::ToyBox()
{
	PlainBox < ItemType >();
	boxColor = BLACK;
}   // end default constructor

template < class ItemType >
ToyBox < ItemType >::ToyBox(const Color & theColor)
{
	PlainBox < ItemType >();
	boxColor = theColor;
}   // end constructor

template < class ItemType > 
ToyBox < ItemType >::ToyBox(const ItemType & theItem, const Color & theColor)
{	
	PlainBox <ItemType >();
	PlainBox < ItemType >::setItem(theItem);
	PlainBox < ItemType >();
	boxColor = theColor;
}   // end constructor

template < class ItemType > Color ToyBox < ItemType >::getColor() constconst
{
	return boxColor;
}   // end getColor