#pragma once
#include <iostream>
#include "string.h"
using namespace std;
class Animal
{
protected:
	int veight;
	double hight;
	string name;
public:
	Animal();
	Animal(int a, double h, string n);
	void Print();
	void Input();
};

