/*
CH-230-A
a9 p9.8[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;


//Array function real call by reference.
void subtract_max(int *&a, int n){

    int max = a[0];

    //Finding the max value in the array.
    for(int i = 0; i < n; i++){

        if(max < a[i]){

            max = a[i];

        }

    }

    cout << "The max value in the array is: " << max << endl;
    cout << "The max value minus everything else is:\n" << endl;

    //Subtracting the max value from all the elements.
    for(int i = 0; i < n; i++){

        a[i] -= max;
        cout << a[i] << endl;

    }

    cout << endl;

}


//Deallocating the dynamically created array.
void deallocate(int *&b){
    
    delete [] b;
    cout << "The dynamic array has been successfully deallocated!" << endl;

}


int main(){
    
    int n;
    cin >> n;

    //Dynamic allocation in C++.
    int *a = new int[n];

    for(int i = 0; i < n; i++){

        cin >> a[i];

    }

    cout << endl;
    //Function calls.
    subtract_max(a, n);
    deallocate(a);

    cout << endl;
    return 0;

}