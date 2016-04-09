#include "MagicBox.h"
#include "MagicBox.cpp"
#include "ToyBox.h"
#include "ToyBox.cpp"
#include "PlainBox.h"
#include "PlainBox.cpp"
#include <iostream>
#include <string>
#include <iomanip>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
	
	BoxInterface<string> *pTb = new ToyBox<string>[1]();
	BoxInterface<string> *pMb = new MagicBox<string>[1]();
	
	
	if (pTb.length() < 2)
	
		//*pMb(RED, "bear");
	cout << "Let's work with..." << endl <<
		"1: Magic!" << endl <<
		"2: Toys!" << endl;
	

	string toy;
	int colour;
	Color chosen;
	bool loop = 0, fullLoop = 0;
	char reLoop;

	while (!fullLoop)
	{
		cout << "Enter a toy: ";
		getline(cin, toy);

		cout << endl;

		while (!loop)
		{
			cout << "Pick a color or -1 to exit: BLACK(1), RED(2), BLUE(3), GREEN(4), YELLOW(5), WHITE(6): ";
			cin >> colour;

			if (colour < 6)
				loop = 1;
		}

		colour--;
		chosen = (Color)(colour);

		ToyBox<string> daBox(toy, chosen);

		cout << "Stored in the toy box is a " << daBox.getItem() << " and the box is color " << daBox.getColor();

		cout << "Change the item (y/n)? ";
		cin >> reLoop;
		fullLoop = 1;
	}
	system("pause");
	return 0;
}