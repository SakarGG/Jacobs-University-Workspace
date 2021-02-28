/*
CH-230-A
a13 p13.8[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <exception>
using namespace std;

class Motor{

    public:
        Motor(){}
        ~Motor(){}
        
        /*Function used by child classes when there is error 
        with instantiations and constructor.*/
        string what() throw(){
            
            string what1 = "This motor has problems";
            return what1;

        }

};


//Inheritance with basic constructors.
class Car : public Motor{

    public:
        Car(){}
        ~Car(){}

};


class Garage : public Car{

    public:
        //Parametric constructor for Garage.
        Garage(string ga){

            cout << ga << endl;

        }

        //Try if inheriting is possible for mismatched constructor.
        Garage()try : Car(){

            //Throw the exception.
            throw Garage("The car in this garage has problems with the motor");

        } 

        //Catch the exception by printing the error from the what() function.
        catch(Motor& mo){

            cerr << mo.what() << endl;

        }

};


int main(){

    //Try if default instantiation of Garage is possible
    try{

        Garage ga;

    } 

    //If failed then print the error from the function.
    catch(Garage& ga){

        cout << ga.what() << endl;

    }

    return 0;
    
}