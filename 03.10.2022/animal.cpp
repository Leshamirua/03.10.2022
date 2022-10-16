#include "animal.h"

Animal::Animal()
{
	veight = 0;
	hight = 0;
	name = nullptr;
}

Animal::Animal(int a, double h, string n)
{
	veight = a;
	hight = h;
	name = n;
}

void Animal::Print()
{
	cout << "Animal's name: " << name << "\nAnimal's hight: " << hight << "\nAnimal's veight: " << veight << endl;
}

void Animal::Input()
{
	cout << "Enter animal's name: ";
	cin >> name;
	cout << "Enter animal's hight: ";
	cin >> hight;
	cout << "Enter animal's veight: ";
	cin >> veight;
	cout << "\n\nThank you!" << endl;
	system("pause");
	system("cls");
}
