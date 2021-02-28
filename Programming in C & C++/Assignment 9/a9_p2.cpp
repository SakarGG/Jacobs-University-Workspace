/*
CH-230-A
a9 p9.2[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    double x;
    string s;
    char c = ':';

    //Input for variables.
    cin >> n;
    cin >> x;
    cin >> s;

    for(int i = 0; i < n; i++){

        /*Prints the string, then a colon, 
        then the double, then new line.*/
        cout << s << c << x << endl;

    }

    return 0;

}