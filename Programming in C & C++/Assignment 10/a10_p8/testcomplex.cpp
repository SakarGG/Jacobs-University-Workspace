/*
CH-230-A
a10 p10.8[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){

    //All the object files fo different purposes/
    Complex c1, c2, sum, difference, product, conjugate;

    //To store the real and imaginary valeus of two numbers.
    float real_1, real_2, imag_1, imag_2;

    //User stdin.
    cout << "Enter the real part: " ;
    cin >> real_1;

    cout << "Enter the imaginary part: " ;
    cin >> imag_1;

    //Setting the values for the first number.
    c1.setReal(real_1);
    c1.setImaginary(imag_1);

    cout << "Enter the real part: " ;
    cin >> real_2;

    cout << "Enter the imaginary part: " ;
    cin >> imag_2;

    //Setting the values for the second number.
    c2.setReal(real_2);
    c2.setImaginary(imag_2);

    //Doing math.
    sum = c1.sum(c2);
    difference = c1.difference(c2);
    product = c1.product(c2);
    conjugate = c1.conjugate(c1);  
    
    //Displaying the math through method call.
    cout << "The First complex number is: "; 
    c1.print();
    
    cout << "The Second complex number is: "; 
    c2.print();
    
    cout << "The Sum of the two is: "; 
    sum.print();
    
    cout << "The Difference of the two is: "; 
    difference.print();

    cout << "The Product of the two is: "; 
    product.print();
    
    cout << "The Conjugate of the first one is: "; 
    conjugate.print();
    
    return 0;
    
}