/*
CH-230-A
a12 p12.7[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Perimeter.h"
using namespace std;

Perimeter::Perimeter(const char* n) {
	strncpy(color, n, 10);
	cout << "Perimeter constructor being called...\n";
}

Perimeter::~Perimeter() {
}

void Perimeter::getColor2() const {
	cout << "\n" << color << ": ";
}
