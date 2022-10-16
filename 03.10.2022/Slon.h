#pragma once
#include "animal.h"
using namespace std;
class Slon : public Animal
{
	string type;
	double width;
public:
	Slon() = default;
	Slon(int a, double h, string n, string t, double width) :Animal(a, h, n) {
		type = t;
		this->width = width;
	};
	void Print();
	void Input();
};


