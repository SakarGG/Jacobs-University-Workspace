/*
CH-230-A
a11 p11.6[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>
#include <cmath>

using namespace std; 

//Parametric Constructor.
Vector::Vector(int nsize)
{
	size = nsize;
	ptr = new double[size];
	cout << "Parametric Constructor for Vector class" << endl;

}

//Default Constructor.
Vector::Vector(){

	size = 0;
	ptr = 0;
	cout << "Default Constructor for Vector class" << endl;

}

//Copy Constructor.
Vector::Vector(const Vector&v){

	size = v.size;
	ptr = new double[size];
	for(int i = 0; i < size; i++){

		ptr[i] = v.ptr[i];

	}

}

//Print method to print the math part.	
void Vector::printVector() const{

	for(int i = 0; i < size; i++){

		cout << ptr[i] << endl;

	}  

}

//Finding the absolute value of vectors.
double Vector::norm(){

	double normal = 0;

	for(int i = 0; i < size; i++){

		normal += (pow(ptr[i], 2));

	}

	return sqrt(normal);

}

//Finding the sum of vectors.
Vector Vector::add(const Vector va) const{

    Vector add(size);

	for(int i = 0; i < size; i++){

    	add.ptr[i] = ptr[i] + va.ptr[i];

	}

    return add;

}

//Finding the difference of vectors.
Vector Vector::subtract(const Vector vs) const{

    Vector subtract(size);

	for(int i = 0; i < size; i++){

    	subtract.ptr[i] = ptr[i] - vs.ptr[i];

	}

    return subtract;

}

//Finding the scalar product of the vectors.
double Vector::scalarproduct(const Vector vsp){

	double normal = 0;

	for(int i = 0; i < size; i++){

		normal += ptr[i] * vsp.ptr[i];

	}

	return normal;

}

//Setters.
void Vector::setSize(int nsize){

	size = nsize;
	ptr = new double[size];

}

void Vector::setPointer(double *nptr){

	ptr = nptr;

}

//Getter.
int Vector::getSize(){

    return size;

}

//Destructor.
Vector::~Vector(){

	delete ptr;
	cout << "Destructor for Vector class" << endl;

}