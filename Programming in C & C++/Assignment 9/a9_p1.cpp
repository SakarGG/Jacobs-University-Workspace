/*
CH-230-A
a9 p9.1[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main(){

    string country;

    //New line.
    cout << "\n";

    //cout prints on the CMD. printf from C.
    cout << "Enter your country of origin: ";
    
    //cin gets input from the user from the keyboard for now.
    //scanf from C.
    cin >> country;
    cout << "You were born in " << country << '!' << endl;

    cout << "\n";

    return 0;

}