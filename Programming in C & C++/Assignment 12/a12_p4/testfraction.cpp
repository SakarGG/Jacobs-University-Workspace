/*
CH-230-A
a12 p12.4[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	//Old input.
	/*
	Fraction a(4, 2);
	Fraction b(17, 11);
	Fraction c(5);
	*/

	Fraction a, b, product, quotient;

	/*Only when the numerator and the denominator of one object is both valid, 
	then only takes inputs for the following object.*/

	/*If the first input is 4 and the second is 'e', then 4 along with 'e' 
	is deleted and the user is required to input 2 numbers to fill one object*/
	for(;;){

		cout << "Enter the first fraction" << endl;
		//Using the overloaded >> operator.
		if (cin >> a){

        	break;

    	} 

		else{

        	cout << "Please enter a valid integer" << endl;
        	cin.clear();
			cin.ignore();

    	}

	}

	for(;;){

		cout << "Enter the second fraction" << endl;
		//Using the overloaded >> operator.
		if (cin >> b){

        	break;

    	} 

		else{

        	cout << "Please enter a valid integer" << endl;
        	cin.clear();
			cin.ignore();

    	}
		
	}

	//Old output.
	/*
	a.print(); 
	b.print(); 
	c.print(); 
	*/

	//Using the overloaded << operator.
	cout << endl << "The first fraction: " << a;
	cout << "The second fraction: " << b;

	//Using class objects and return type is class.
	product = a * b;
	quotient = a / b;

	//Printing the product and quotient of two fractions.
	cout << endl << "Product is: " <<  product;
	cout << "Quotient is: " <<  quotient << endl;

	return 0;

}