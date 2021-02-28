/*
CH-230-A
a12 p12.6[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
	public:
		Square(const char *n, double a);
		~Square();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double length;
};

#endif
