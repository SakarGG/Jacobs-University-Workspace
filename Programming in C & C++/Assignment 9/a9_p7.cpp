/*
CH-230-A
a9 p9.7[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;


//Real call by references.
void swapping(int &a, int &b){ 

    //Simple swapping algorithm.
    int temp = a;
    a = b;
    b = temp;

} // swap ints


void swapping(float &x, float &y){

    //Simple swapping algorithm.
    float temp = x;
    x = y;
    y = temp;

} // swap floats


void swapping(const char *&str1, const char *&str2){
    
    //Simple swapping algorithm.
    const char *temp = str1;
    str1 = str2;
    str2 = temp;

} // swap char pointers


int main(void){
    
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;

}