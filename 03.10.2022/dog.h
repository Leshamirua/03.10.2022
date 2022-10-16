#pragma once
#include "animal.h"
using namespace std;
class dog : public Animal
{
	string type;
	bool behavoir;
public:
	dog() = default;
	dog(int a, double h, string n, string t, bool b) :Animal(a, h, n) {
		type = t;
		behavoir = b;
	};
	void Print();
	void Input();
};

