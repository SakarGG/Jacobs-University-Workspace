/*
CH-230-A
a12 p12.6[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"
#include "Perimeter.h"

class Circle : public Area, public Perimeter {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double radius;
};

#endif
