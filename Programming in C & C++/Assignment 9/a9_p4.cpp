/*
CH-230-A
a9 p9.4[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;

int mycount(int a, int b){

    int subtract = b - a;
    return subtract;

}


int mycount(char c, string s){

    int count = 0;
    int size = s.size();
    //Go through the string char by char.
    for(int i = 0; i < size; i++){

        if(c == s[i]){

            count++;

        }

    }

    return count;

}


int main(){

    int num1, num2;
    char ch;
    string str;

    /*If num1 entered, the next input has to be 
    num2 or else the program stops.*/
    if(cin >> num1 && cin >> num2){

        //Function call based on input.
        cout << "Difference is: " << mycount(num1, num2) << endl;

    }

    cout << endl;

    /*If a char is entered and the following input 
    doesn't have that char in it, it returns a 0.*/

    /*Inputting string as the first input 
    also makes the program stop.*/
    if(cin >> ch){

        //Delete the enter.
        getchar();

        //Read string that can have spaces.
        getline(cin, str);

        //Function call based on input.
        cout << "Occurence is: " << mycount(ch, str) << endl;

    }

    return 0;

}