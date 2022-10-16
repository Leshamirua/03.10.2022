#include "dog.h"
#include "animal.h"
#include <iostream>
using namespace std;
void dog::Print()
{
	Animal::Print();
	cout << "Dog's type: " << type << "\nDog's behavoir: " << behavoir << endl;
}
void dog::Input()
{
Animal::Input();
	int choise;
	cout << "Enter dog's type: ";
	cin >> type;
	cout << "If dog is frendly enter 1, if no enter 2";
	cin >> choise;
	system("cls");
	switch (choise)
	{
	case 1:
		behavoir = true;
		break;
	case 2:
		behavoir = false;
		break;
	default:
		cout << "wrong number!" << endl;
		break;
	}
}
