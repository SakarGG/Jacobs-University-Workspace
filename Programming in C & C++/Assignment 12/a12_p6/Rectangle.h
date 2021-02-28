/*
CH-230-A
a12 p12.6[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"
#include "Perimeter.h"

class Rectangle : public Area, public Perimeter {
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double length;
		double width;
};

#endif
