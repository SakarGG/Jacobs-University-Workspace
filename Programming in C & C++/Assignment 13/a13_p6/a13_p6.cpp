/*
CH-230-A
a13 p13.6[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vector1;

    //Adding 8, 20 times to the vector.
    for(int i = 0; i < 20; i++){

        vector1.push_back(8);

    }

    //Attempt getting the value at the 21st position.
    try{

        vector1.at(21);

    }

    //Out of range so catch the error without crashing the program.
    catch(const out_of_range& oor21){

        cerr << "Out of Range error: " << oor21.what() << endl;

    }

    return 0;

}