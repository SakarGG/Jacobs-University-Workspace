/*
CH-230-A
a12 p12.5[cpp]
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

	Fraction a, b;
	Fraction product, quotient;
	Fraction add, difference;
	Fraction temp;

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
	cout << endl << "The first fraction: " << a << endl;
	cout << "The second fraction: " << b << endl;

	//Using class objects and return type is class.
	//Since we overloaded these operators, we can use them with class objects.
	product = a * b;
	quotient = a / b;
	//Printing the product and quotient of two fractions.
	cout << endl << "Product is: " <<  product << endl;
	cout << "Quotient is: " <<  quotient << endl << endl;

	add = a + b;
	difference = a - b;
	//Printing the sum and difference of two fractions.
	cout << "Sum is: " <<  add << endl;
	cout << "Difference is: " <<  difference << endl;

	//Assignment operator in use.
	temp = a;
	cout << endl << "The first fraction: " << a << endl;
	cout << "The copy of first fraction: " << temp << endl;

	//Comparison operator to find the greater of the two fractions, or equal.
	if(a > b){

		cout << endl << "Your first fraction: " << a
		<< " is greater than the second fraction: " << b << "." << endl;

	}

	else if (a < b){

		cout << endl << "Your second fraction: " << b;
		cout << " is greater than the first fraction: " << a << "." << endl;

	}
	
	else{

		cout << endl << "Both your fractions are equal." << endl;

	}

	return 0;

}