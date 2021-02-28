/*
CH-230-A
a9 p9.6[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;

/*One of three overloaded functions 
to find the first positive even number.*/
int myfirst(int arrayInt[]){

    for(int i = 0; i < 10; i++){
        
        /*As soon as the condition matches, 
        return it and stop the function.*/
        if((arrayInt[i] > 0) && (arrayInt[i] % 2 == 0)){

            return arrayInt[i];
            break;

        }

    }

    //If not found.
    return -1;

}


/*One of three overloaded functions 
to find the first negative whole number.*/
double myfirst(double arrayDouble[]){

    int typeCast;
    double isItInt;

    for(int i = 0; i < 10; i++){

        //The 2 lines below helps to find whole numbers.
        typeCast = (int)arrayDouble[i];
        isItInt = arrayDouble[i] - typeCast;
        
        /*As soon as the condition matches, 
        return it and stop the function.*/
        if((arrayDouble[i] < 0) && (isItInt == 0)){

            return arrayDouble[i];
            break;

        }

    }

    //If not found.
    return -1.1;

}


/*One of three overloaded functions 
to find the first consonant character.*/
char myfirst(char arrayChar[]){

    for(int i = 0; i < 10; i++){

        /*Two if statements so that 
        only consonants from alphabets are checked.*/
        if((arrayChar[i] >= 'A' && arrayChar[i] <= 'Z') ||
           (arrayChar[i] >= 'a' && arrayChar[i] <= 'z')){
               
               /*As soon as the condition matches, 
                return it and stop the function.*/
               if(arrayChar[i] != 'a' && arrayChar[i] != 'e' && 
                  arrayChar[i] != 'i' && arrayChar[i] != 'o' && 
                  arrayChar[i] != 'u' && arrayChar[i] != 'A' && 
                  arrayChar[i] != 'E' && arrayChar[i] != 'I' &&
                  arrayChar[i] != 'O' && arrayChar[i] != 'U'){
                    
                    return arrayChar[i];
                    break;

                }

        }
    }

    //If not found.
    return '0';

}
   

int main(){

    /*Writing array contents in the code itself,
    quick results during runtime.*/

    //Change the elements to find differing answers.
    int intArray[10] = {-9, 21, -432, 643, 8805, 
                        78, 0, -11, 1000, 3};

    double doubleArray[10] = {-9.12, 21, -432.34, 643.45, 8805.56, 
                              78.67, 0.78, -11.1, 1000.90, 3.10};

    char charArray[10] = {'a', 'p', 'q', 'u', 'd', 
                          'i', 'l', 'x', 'm', 'e'};

    int first;
    double second;
    char third;

    //Call the function and obtained the returned value.
    first = myfirst(intArray);
    second = myfirst(doubleArray);
    third = myfirst(charArray);

    //Different CMD stdout for different scenarios.
    if(first == -1){

        cout << endl << "Your array doesn't have positive and even numbers!" << endl;

    }

    else{

        cout << endl << "The first positive and even number is: " << first << endl;

    }

    if(second == -1.1){

        cout << "Your array doesn't have negative and whole numbers!" << endl;

    }

    else{

        cout << "The first negative and whole number is: " << second << endl;
        
    }

    if(third == '0'){

        cout << "Your array doesn't have consonant characters!" << endl << endl;

    }

    else{

        cout << "The first consonant is '" << third << "'" << endl << endl;
        
    }

    return 0;

}