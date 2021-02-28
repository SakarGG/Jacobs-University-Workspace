/*
CH-230-A
a9 p9.3[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;

float absOfFloat(float n){

    /*Find the distance between the given number 
      and 0 in the real number line.*/
    if(n < (float) 0){

        return n * -1;
    }

    else{

        return n * 1;

    }

}


int main(){

    float number;

    //cin for input, cout for output in CMD.
    cout << "Enter a number: ";
    cin >> number;

    cout << "The absolute value of " << number 
         << " is " << absOfFloat(number) << "!\n";

    return 0;

}
