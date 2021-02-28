/*
CH-230-A
a13 p13.7[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <exception>
using namespace std;


class OwnException : public exception{

    public:

        //Normal parametric constructor and printing it.
        OwnException(string ownstring){

            cout << ownstring << endl;

        }

        //Overwritten what() function
        virtual const char* what() const throw(){
            
            return "OwnException\n";

        }

};


//Try and catch cases for all, using switch.
void exceptionHandle(int number){

    //Throwing depending on the case.
    switch (number) {

        case 1:

            throw 'a';
            break;

        case 2:

            throw 12;
            break;

        case 3:

            throw true;
            break;

        default:

            throw OwnException("Default case exception");

    }

}

//Trying all different scenarios and catching all of them.
int main(){

    try{

        exceptionHandle(1);

    } 
    
    //Character exception.
    catch (char aChar){

        cerr << "Caught in main: " << aChar << endl;

    }

    try{

        exceptionHandle(2);

    } 

    //Number exception.
    catch (int number){

        cerr << "Caught in main: " << number << endl;

    }

    try{

        exceptionHandle(3);

    } 

    //Boolean exception.
    catch (bool bTrue){

        //boolalpha prints true instead of 1.
        cerr << "Caught in main: " << boolalpha << (bool) bTrue << endl;

    }

    try{

        exceptionHandle(4);

    }

    //Default exception.
    catch(OwnException& def){

        cerr << "Caught in main: " << def.what() << endl;

    }

    return 0;

}