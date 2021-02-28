/*
CH-230-A
a13 p13.2[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <string> 
using namespace std;

class Complex{

    private:

        float real;  
	    float imaginary;  
        
    public:

        //Default Constructor.
        Complex();

        //Parametric Constructor
        Complex(float newreal, float newimaginary);

        //Copy Constructor
        Complex(const Complex &);
        
        //Setters, only needed for conjugate
        void setReal(float newreal);
        void setImaginary(float newimaginary);

        //Setters, only needed for conjugate
        int getReal();
        int getImaginary();

        //To overload << using friend function.
	    friend std::ostream& operator << (std::ostream&, Complex&);

	    //To overload >> using friend function.
	    friend std::istream& operator >> (std::istream&, Complex&);

	    //To overload * using class object.
	    Complex operator *(Complex p){

		    Complex product;

		    product.real = ((real * p.real) - (imaginary - p.imaginary));
		    product.imaginary = ((real * p.imaginary) + (imaginary * p.real));

		    return product;

	    }

	    //To overload + using class object.
	    Complex operator +(Complex a){

		    Complex sum;

            sum.real = real + a.real;
            sum.imaginary = imaginary + a.imaginary;

		    return sum;

	    }

	    //To overload - using class object.
	    Complex operator -(Complex d){

		    Complex difference;

            difference.real = real - d.real;
            difference.imaginary = imaginary - d.imaginary;

		    return difference;

	    }

	    //To overload = using class object.
	    Complex& operator =(const Complex& e){

		    real = e.real;
		    imaginary = e.imaginary;

		    //*this is an object. Returning an object i.e., *this returns a reference to the object.
		    return *this;

	    }

        //To compute the given task.
        //Complex sum(Complex &c2);
        //Complex difference(Complex &c2);
        //Complex product(Complex &c2);
        Complex conjugate(Complex &c1);

        //Printer.
        //void print();

        //Destructor.
        ~Complex();
        
};