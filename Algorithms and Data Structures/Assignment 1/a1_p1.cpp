/*
CH-231-A
a1 p1.1[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;

//Complex class.
class Complex{

    private:
        int re, im;
    
    public:

        //Default Constructor
        Complex(){re = 0; im = 0;}

        //Parametric Constructor.
        Complex(int a, int b){

            re = a; im = b;

        }

        //Overloaded equals to operator.
        Complex &operator = (const Complex& e){

            this -> re = e.re;
            this -> im = e.im;

            return *this;
        }

        //Overloaded comparison operator.
        bool operator == (const Complex &o) const{
            
            return (re == o.re && im == o.im);

        }

};


//A function to search in an array using template. 
template <class T>
int array_search(T arr[], int size, T a){

    for(int i = 0; i <= size; i++){

        if(arr[i] == a){
            
            //Return the position of the element if found.
            return i;

        }

    }

    //Return -1 if element is not found.
    return -1;

}


//Main function to test the templated array search function
int main(){

    //Three different arrays, two basic data types, one Complex data type.
    double dArray[] = {0.0, 1.1, 2.2, 3.3, 4.4};
    char cArray[] = {'a', 'e', 'i', 'o', 'u'};

    //a, b, c, d and e are Complex objects.
    Complex a(1, 1), b(2, 2), c(3, 3), d(4, 4), e(5, 5);
    Complex coArray[] = {a, b, c, d, e};

    //Element to be found.
    Complex find(3,3);

    //Printing the position, if it exists of the searched elements.
    cout << "Double element found at index: " << array_search(dArray, 5, 1.1) << endl;
    cout << "Character element found at index: " << array_search(cArray, 5, 'h') << endl;
    cout << "Complex element found at index: " << array_search(coArray, 5, find) << endl;
    
    return 0;

}