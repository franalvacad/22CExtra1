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
#include <vector>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
	
	vector <ToyBox<string>> Tb;
	vector <MagicBox<string>> Mb;
	
	char chs;
	cout << "Let's work with..." << endl <<
			"1: Magic!" << endl <<
			"2: Toys!" << endl;
	cin >> chs;
	if (islower(chs))
		chs = toupper(chs);

	switch (chs)
	{
	default:
		break;
	case '1':
		{
			string trick;
			cout << "Enter a magic trick in the form of a sentence. Use <tab> to enter";
			getline(cin, trick, '	');
			Mb.push_back(trick);
			break;
		}
	case '2':
		{
			string toy;
			int colour;
			Color chosen;
			bool loop = 0, fullLoop = 0;
			char reLoop;
	
			while (!fullLoop)
			{
				cout << "Enter a toy: "; 
				cin.ignore();
				getline(cin, toy);
				cin.ignore();
	
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
				//vector <ToyBox<string>> T1b(toy, chosen);
				Tb.push_back(chosen);

				//ToyBox<string> daBox(toy, chosen);
				Tb.back().setItem(toy);
				cout << "Stored in the toy box is a " << Tb.back().getItem() << " and the box is color " << Tb.back().getColor();
			}
			break;
		}
	}

	
	system("pause");
	return 0;
}