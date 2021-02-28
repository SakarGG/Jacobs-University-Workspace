/*
CH-230-A
a12 p12.5[h]
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

	//To overload + using class object.
	Fraction operator +(Fraction a){

		Fraction sum;

		int lowest;
		lowest = lcm(den, a.den);

		int multiplier1, multiplier2;

		multiplier1 = lowest/den;
		multiplier2 = lowest/a.den;	

		sum.num = (multiplier1 * num) + (multiplier2 * a.num);
		sum.den = lowest;

		return sum;

	}
	
	//To overload - using class object.
	Fraction operator -(Fraction d){

		Fraction difference;

		int lowest;
		lowest = lcm(den, d.den);

		int multiplier1, multiplier2;

		multiplier1 = lowest/den;
		multiplier2 = lowest/d.den;	

		difference.num = (multiplier1 * num) - (multiplier2 * d.num);
		difference.den = lowest;

		return difference;

	}
	
	//To overload = using class object.
	Fraction& operator =(const Fraction& e){

		num = e.num;
		den = e.den;

		//*this is an object. Returning an object i.e., *this returns a reference to the object.
		return *this;

	}

	//bool because comparison operation is 1 byte 
	bool operator >(Fraction gt){
		
		//Getting "determinant" and checking
		if(((num * gt.den) - (den * gt.num)) > 0){

			return true;

		}

		return false;

	}

	bool operator <(Fraction lt){

		if(((num * lt.den) - (den * lt.num)) < 0){

			return true;

		}

		return false;
		
	}

};

#endif /* FRACTION_H_ */