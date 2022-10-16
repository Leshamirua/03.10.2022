#include "Slon.h"
#include "animal.h"
#include <iostream>
#include <string>
using namespace std;
void Slon::Print()
{
	Animal::Print();
	cout << "Slon type: " << type << "\nSlon width: " << width << endl;
}

void Slon::Input()
{
	Animal::Input();
	cout << "Enter Slon type: ";
	getline(cin, type);
	cout << "Enter Slon width: ";
	cin >> width;
}
