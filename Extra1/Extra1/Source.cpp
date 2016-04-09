/*Pseudocode: 
	1. Ask user to decide toys item.
	2. Start loop with the menue with list of option, where user can decide what to do next:
		1st Add a new trick to the magic box.
		2nd Add a new toy to the toy box.
		3rd Exit the loop.
		4th see toys in the toy box and their colour.
		5th see magic tricks inside the magic box.
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
	
	
	
	ToyBox<string> tb;
	MagicBox<string> mb;
	string strm;
	string strt;
	char chs;
	bool mainMenu = 0;
	string colores[6] = { "Black", "Red", "Blue", "Green", "Yellow", "White" };
	
	while (!mainMenu)
	{
		cout << "Let's work with..." << endl <<
			"1: Magic!" << endl <<
			"2: Toys!" << endl <<
			"3: Exit!" << endl <<
			"4: see your toys and their colour" << endl <<
			"5: see your magic tricks" << endl;
		cin >> chs;


		switch (chs)
		{
		default:
					break;
		case '1':
			{
					string trick;
					cout << "Enter a magic trick in the form of a sentence. Use <tab> to enter ";
					getline(cin, trick, '	');
					strm.append(trick);
					mb.setItem(strm);
					break;
			}
		case '2':
			{
					string toy;					
					cout << "Enter a toy: ";
					cin.ignore();
					getline(cin, toy);
					strt.append(toy);
					tb.setItem(strt);
					cout << endl;
					break;
			}
		case'3':
			{
					break;
			}
		case '4':
			{
					cout << "Your toys colour is: " << /*______*/ ". Your toys are: " << tb.getItem() << endl;
			}
		case '5':
			{
					cout << "Your magic tricks are: " << mb.getItem() << endl;
			}
		}
	}
	
	system("pause");
	return 0;
}