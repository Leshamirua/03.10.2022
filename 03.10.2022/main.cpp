#include <iostream>
#include "animal.h";
#include "dog.h";
#include "Parrot.h";
#include "Slon.h";
#include "pinguin.h"
using namespace std;
int main() {
	cout <<"\n\n\n";
	dog dog1(1,3,"name","dog",1);
	dog1.Print();
	cout << "\n\n\n";
	Parrot par1(2, 4, "name", "parrot", "red");
	par1.Print();
	cout << "\n\n\n";
	Slon slon1(1, 3, "name", "slon", 2.3);
	slon1.Print();
	cout << "\n\n\n";
	Pinguin pin1(2, 1, "name", "pinguin", 4);
	pin1.Print();
}