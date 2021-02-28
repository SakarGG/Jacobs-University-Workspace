/*
CH-231-A
a3 p3.2[cpp]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;

void selectionsort(int *array, int n){

    for (int i = 0; i < n - 1; i++){

        int minimum = i;

        //Change the minimum as you go along the array.
        for (int j = i + 1; j < n; j++){

            if (array[minimum] > array[j]){

                minimum = j;

            }

        }

        if (minimum != i){

            /*Once the final minimum is found, 
            swap it with the initial position*/
            int temp = array[minimum];
            array[minimum] = array[i];
            array[i] = temp;

        }

    }

}

void printarray(int array[], int n){  

    int i;  

    for (i = 0; i < n; i++){

        //Print function.
        cout << array[i] << " ";  

    }

    cout << endl;  

}  
  

int main(){ 

    int array[] = {9, 22, 13, 1, 10};  
    int n = sizeof(array)/sizeof(array[0]);  
    
    //Call function.
    selectionsort(array, n);  

    cout << endl;

    //Print.
    cout << "Sorted array using selection sorts: ";  
    printarray(array, n);  

    cout << endl;

    return 0;  

} 