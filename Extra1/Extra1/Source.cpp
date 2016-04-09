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
	
	char chs;
	bool mainMenu = 0;
	string colores[6] = { "Black", "Red", "Blue", "Green", "Yellow", "White" };
	
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
					cout << "Enter a magic trick in the form of a sentence. Use <tab> to enter";
					getline(cin, trick, '	');
					break;
			}
		case '2':
			{
					string toy;
					int colour;
					Color chosen;
					bool loop = 0, fullLoop = 0;
					char reLoop;

					
						cout << "Enter a toy: ";
						cin.ignore();
						getline(cin, toy);

						while (!loop)
						{
							cout << "Pick a color: BLACK(1), RED(2), BLUE(3), GREEN(4), YELLOW(5), WHITE(6): ";
							cin >> colour;

							if (colour < 6)
								loop = 1;
						}

						colour--;
						chosen = (Color)(colour);


						cout << endl;

						cout << "Stored in the toy box is a ";

						cout << " and the box is color " << colores[Tb.back().getColor()] << endl;

					break;
			}
		}
	}
	
	system("pause");
	return 0;
}