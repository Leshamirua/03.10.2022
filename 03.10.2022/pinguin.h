#pragma once
#include "animal.h"
using namespace std;
class Pinguin:public Animal
{
	string type;
	int size;
public:
	Pinguin() = default;
	Pinguin(int v, double h, string n, string type, int size):Animal(v, h, n) {
		this->type = type;
		this->size = size;
	}
	void Print();
	void Input();
};

