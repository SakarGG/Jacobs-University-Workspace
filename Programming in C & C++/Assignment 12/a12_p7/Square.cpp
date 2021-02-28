/*
CH-230-A
a12 p12.7[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include "Square.h"

Square::Square(const char *n, double a) 
                : Rectangle(n, a, a) {
    length = a;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return length * length;
}

double Square::calcPerimeter() const {
    std::cout << "calcPerimeter of Square...";
    return 4 * length;
}
