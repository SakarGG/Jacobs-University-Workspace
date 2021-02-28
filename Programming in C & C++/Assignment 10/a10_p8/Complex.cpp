/*
CH-230-A
a10 p10.8[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

//Set them as 0 for empty constructor.
Complex::Complex(){

    real = 0;
    imaginary = 0;

}


//Parametric constructor.
Complex::Complex(float newreal, float newimaginary){

    real = newreal;
    imaginary = newimaginary;

}


//Proper format to print any given complex number.
void Complex::print(){   

	if (imaginary) {

		cout << (noshowpos) << real << (showpos) << imaginary << 'i' << endl;

	} 
    
    else{

		cout << (noshowpos) << real << (noshowpos) << endl;

    }

}


//Setting the real and imaginary based on user input.
void Complex::setReal(float newreal){

	real = newreal;

}


void Complex::setImaginary(float newimaginary){

	imaginary = newimaginary;

}


//Setting the real and imaginary based on user input as ints.
int Complex::getReal(){

    return real;

}


int Complex::getImaginary(){


    return imaginary;

}


//Destructor simulator.
Complex::~Complex(){

    cout << "Using Destructor now" << endl;

}


Complex::Complex(const Complex &c1){

    real = c1.real;
    imaginary = c1.imaginary;

}


//Add two complex numbers.
Complex Complex::sum(Complex &c2){

    Complex sum;

    sum.setReal(real + c2.getReal());
    sum.setImaginary(imaginary + c2.getImaginary());

    return sum;

}


//Subtract two complex numbers.
Complex Complex::difference(Complex &c2){

    Complex difference;

    difference.setReal(real - c2.getReal());
    difference.setImaginary(imaginary - c2.getImaginary());

    return difference;

}


Complex Complex::product(Complex &c2){

    Complex product;

    product.setReal(((real*c2.getReal()) - (imaginary*c2.getImaginary())));
    product.setImaginary((imaginary*c2.getReal())+(real*c2.getImaginary()));

    return product;

}


//Find the conjugate of the first number.
Complex Complex::conjugate(Complex &c1){

    Complex conjugate;

    conjugate.setReal(real);
    conjugate.setImaginary(c1.getImaginary() * - 1);

    return conjugate;

}