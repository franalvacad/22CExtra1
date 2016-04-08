#include "MagicBox.h"
#include "MagicBox.cpp"
#include "ToyBox.h"
#include "ToyBox.cpp"
#include "PlainBox.h"
#include "PlainBox.cpp"
#include <iostream>
#include <iomanip>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
	
	BoxInterface<string> *pMb = new ToyBox<string>("bear",RED);
	//*pMb(RED, "bear");


	system("pause");
	return 0;
}