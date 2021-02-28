/*
CH-230-A
a12 p12.5[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

//No change in method cpp file for p5.

#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

    for(int i = 1; i <= a && i <= b; i++){

        if(a % i == 0 && b % i == 0){

            tmp_gcd = i;

		}

    }

	return tmp_gcd;

}

int Fraction::lcm(int a, int b)
{
	return (a * b) / gcd(a, b);

}

/*
void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}
*/

//Overloaded operator << using friend = 2 parameters.
std::ostream& operator << (std::ostream &output, Fraction &fr)
{
    output << fr.num << "/" << fr.den;
	return output;

}

//Overloaded operator >> using friend = 2 parameters.
std::istream& operator >> (std::istream &input, Fraction &fr)
{
	
	input >> fr.num >> fr.den;

	for(;;){

		if((fr.den != 0) && (fr.num != 0)){

			break;

		}

		else{

			cin.clear();
			cin.ignore();
			cout << "Math Error! Entering 0 or other characters is illegal! "; 
			cout << "Please re-enter the whole fraction" << endl;
            input >> fr.num >> fr.den;
			
		}
	}

	return input;

}