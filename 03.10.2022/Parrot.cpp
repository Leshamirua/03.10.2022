#include "Parrot.h"
#include "animal.h"
#include <iostream>
#include <string>
using namespace std;

void Parrot::Input()
{
	Animal::Input();
	cout << "Enter the type ";
	getline(cin, type);
	cout << "Enter the color ";
	getline(cin, color);
}

void Parrot::Print()
{
	Animal::Print();
	cout << "Parot's type: " << type << "\nParrot's color: " << color << endl;
}
