/*
CH-230-A
a12 p12.4[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	//void print();				// prints it to the screen

	//To overload << using friend function.
	friend std::ostream& operator << (std::ostream&, Fraction&);

	//To overload >> using friend function.
	friend std::istream& operator >> (std::istream&, Fraction&);

	//To overload * using class object.
	Fraction operator *(Fraction p){

		Fraction product;

		product.num = num * p.num;
		product.den = den * p.den;

		return product;

	}

	//To overload / using class object.
	Fraction operator /(Fraction q){

		Fraction quotient;

		quotient.num = num * q.den;
		quotient.den = den * q.num;

		return quotient;

	}

};


#endif /* FRACTION_H_ */