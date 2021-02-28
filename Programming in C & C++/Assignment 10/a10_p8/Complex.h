/*
CH-230-A
a10 p10.8[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <string> 

using namespace std;

class Complex{

    private:

        //Private, but is printed later.
        float real;  
	    float imaginary;  
        
    public:

        //Empty.
        Complex();
        Complex(float newreal, float newimaginary);
        Complex(const Complex &);
        
        //Setters.
        void setReal(float newreal);
        void setImaginary(float newimaginary);

        //Getters.
        int getReal();
        int getImaginary();

        //To compute the given task.
        Complex sum(Complex &c2);
        Complex difference(Complex &c2);
        Complex product(Complex &c2);
        Complex conjugate(Complex &c1);

        //Printer.
        void print();

        //Destructor.
        ~Complex();
        
};