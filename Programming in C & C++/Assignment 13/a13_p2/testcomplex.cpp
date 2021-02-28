/*
CH-230-A
a13 p13.2[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){

    //All the object files for different purposes
    Complex c1, c2, sum, difference, product, conjugate;

    //Two files as input files to read from.

    /*Input structure is line 1 has the real number 
    and line 2 has the imaginary number.*/
    ifstream myFile1("in1.txt"), myFile2("in2.txt");

    //In the case where one/two of them failed.
    if(!myFile1 || !myFile2){

        cout << "Error opening the file." << endl;
        myFile1.close();
        myFile2.close();
        getchar();
        exit(1);

    }

    //Output file.
    ofstream newFile("output.txt");

    if(!newFile){

        cout << "Error opening the file." << endl;
        newFile.close();
        getchar();
        exit(1);

    }

    //Overloaded so gets the real and imaginary parts accordingly.
    while(!myFile1.eof()){
      
      myFile1 >> c1;

    }

    while(!myFile2.eof()){

      myFile2 >> c2;

    }

    //Close when done.
    myFile1.close();
    myFile2.close();

    //Doing math.
    sum = c1 + c2;
    difference = c1 - c2;
    product = c1 * c2;
    conjugate = c1.conjugate(c1);  
    
    //Displaying the math through method call.
    //In CMD as well as print in the output file.
    cout << endl << "The First complex number is: " << c1;
    newFile << "The First complex number is: " << c1;

    cout << "The Second complex number is: " << c2;
    newFile << "The Second complex number is: " << c2;

    cout << "The Sum of the two is: " << sum;
    newFile << "The Sum of the two is: " << sum;

    cout << "The Difference of the two is: " << difference;
    newFile << "The Difference of the two is: " << difference;

    cout << "The Product of the two is: " << product;
    newFile << "The Product of the two is: " << product;

    cout << "The Conjugate of the first one is: " << conjugate << endl;
    newFile << "The Conjugate of the first one is: " << conjugate;

    cout << "Everything has been saved to output.txt" << endl << endl;

    newFile.close();
    
    return 0;
    
}