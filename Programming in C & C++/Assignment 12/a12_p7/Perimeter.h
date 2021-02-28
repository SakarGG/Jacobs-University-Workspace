/*
CH-230-A
a12 p12.7[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#ifndef _PERIMETER_H
#define _PERIMETER_H

class Perimeter {
	public:
		Perimeter(const char *n);
		virtual ~Perimeter();
		void getColor2() const;
		virtual double calcPerimeter() const = 0;
	private:
		char color[11];
};
#endif
