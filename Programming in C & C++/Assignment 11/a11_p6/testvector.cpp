/*
CH-230-A
a11 p11.6[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv){

    int size;

    cout << "Enter the number of vector objects you want to create: ";
    cin >> size;

    //Vector objects to take vectors and values.
    Vector vd(size), vd2(size), sum, subtract, vd3(size);

    //Dynamically allocating array for vector objects.
    double *vector_1 = new double[size];
    double *vector_2 = new double[size];

    //Going through the array and inputting vectors.
    cout << "Input for your first vector: " << endl;
    for(int i = 0; i < size; i++){

        cin >> vector_1[i];

    } 

    //Using setter to assign vector values to the class object.
    vd.setPointer(vector_1);

    cout << "Input for your second vector: " << endl;
    for(int i = 0; i < size; i++){

        cin >> vector_2[i];

    }

    vd2.setPointer(vector_2);

    //Third instance is a copy of the second instance
    vd3 = vd2;
    cout << "The third instance (copy of the second one): " << endl;
    vd3.printVector();

    //Doing math from here on out.
    //Different way of doing depending on how they were defined in the header file.
    sum = vd.add(vd2);
    cout << "The sum of the vectors are: " << endl;
    sum.printVector();

    subtract = vd.subtract(vd2);
    cout << "The difference of the vectors are: " << endl;
    subtract.printVector();

    cout << "The normal of the vector is: " << vd2.norm() << endl;

    cout << "The scalar product of two vectors is: " << vd.scalarproduct(vd2) << endl;

    //Deallocation of memory.
    delete []vector_1;
    delete []vector_2;

    return 0;

}