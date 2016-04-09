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
	char chs;
	bool mainMenu = 0;
	string colores[6] = { "Black", "Red", "Blue", "Green", "Yellow", "White" };
	int color = 0;
	Color colour;
	
	do
	{
		cout << "Black(1), Red(2), Blue(3), Green(4), Yellow(5), White(6)";
		cout << "Pick a box color: ";
		cin >> color;
	} while (color > 6);

	color--;//shift it to match enum
	colour = (Color)(color);//force color into variable

	ToyBox<string> tb(colour); //use color constructor
	MagicBox<string> mb;

	system("cls");

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
				strm.append("/n");
				mb.setItem(strm);
				break;
			}
		case '2':
			{
				string toy;
				cout << "Right now, these toys are in your box: " << tb.getItem() << endl;
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
				   cout << "Your " << colores[tb.getColor()] << " box of toys contains " << tb.getItem() << ";"<<endl <<  "Your box of magic contains the tricks : "<<endl << mb.getItem()<<".";
				break;
			}

		}
	}
	
	system("pause");
	return 0;
}