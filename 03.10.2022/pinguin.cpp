#include "pinguin.h"
#include <iostream>
#include "animal.h"
#include <string>
using namespace std;
void Pinguin::Print()
{
	Animal::Print();
	cout << "Pinguin's type: " << type << "\nPinguin's size" << size << endl;
}

void Pinguin::Input()
{
	Animal::Input();
	cout << "Enter pinguin's type: ";
	getline(cin, type);
	cout << "Enter pinguin's size: ";
	cin >> size;
}
