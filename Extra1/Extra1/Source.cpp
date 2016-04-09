/*Pseudocode: 
	1. Ask user to decide toy box color.
	2. Start loop with the menu list with options, where user can decide what to do next:
		1st Add a new trick to the magic box.
		2nd Add a new toy to the toy box.
		3rd Exit the loop, reporting all the data in the boxes.
	3. End the program.
	Made by Francisco Alvarez and Andrei Konovalov  
*/
#include "MagicBox.h"
#include "MagicBox.cpp"
#include "ToyBox.h"
#include "ToyBox.cpp"
#include "PlainBox.h"
#include "PlainBox.cpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
	
	string strm;
	string strt;
	string items = "nothing" , mItems = "nothing";
	char chs;
	bool mainMenu = 0;
	string colores[6] = { "Black", "Red", "Blue", "Green", "Yellow", "White" }; //array to denote colors in enum
	int color = 0;
	Color colour;
	
	do
	{
		cout << "Black(1), Red(2), Blue(3), Green(4), Yellow(5), White(6)" << endl;
		cout << "Pick a box color: ";
		cin >> color;
	} while (color > 6);

	color--; //shift it to match enum
	colour = (Color)(color);//force color into variable

	ToyBox<string> tb(colour); //use color constructor
	MagicBox<string> mb;

	system("cls");

	while (!mainMenu)
	{
		cout << "Let's work with..." << endl <<
			"1: Magic!" << endl <<
			"2: Toys!" << endl <<
			"3: Exit!" << endl;
		cin >> chs;


		switch (chs)
		{
		default:
					break;
		case '1':
			{
				string trick;
				cout << "Enter a magic trick in the form of a sentence. When finished, press <tab>, then <return>:\n "; //to add multiple lines if needed
				getline(cin, trick, '	');
				strm.append(trick);
				mb.setItem(strm);
				mItems = mb.getItem();
				break;
			}
		case '2':
			{
				string toy;
				cout << "Right now, these toys are in your box: " << tb.getItem() << endl;
				cout << "Enter a toy: ";
				cin.ignore();
				getline(cin, toy);
				strt.append(toy); //add to the toy string
				tb.setItem(strt);
				cout << endl;
				items = tb.getItem();
				break;
			}
		case'3':
			{
				cout << "Your " << colores[tb.getColor()] << " box of toys contains " << items << ";" << endl << endl << "Your box of magic contains the tricks : " << mItems;
				mainMenu = true;
				break;
			}

		}
	}
	
	cout << endl;
	system("pause>nul");
	return 0;
}