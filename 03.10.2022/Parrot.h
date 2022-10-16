#pragma once
#include "animal.h"
using namespace std;
class Parrot:public Animal
{
private:
	string type;
	string color;
public:
	Parrot() = default;
	Parrot(int v, double h, string nam, string type, string color) : Animal(v, h, nam) {
		this->type = type;
		this->color = color;
	}
	void Input();
	void Print();
};

