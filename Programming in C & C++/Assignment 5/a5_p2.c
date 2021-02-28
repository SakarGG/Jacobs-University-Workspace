/*
CH-230-A
a5 p5.2[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/  

#include <stdio.h>

void divby5(float arr[], int size){

    //Dividing all elements by 5.
    for (int i = 0; i < size; i++){

        //Typecasted to float for precision.
        arr[i] = (float) arr[i]/5;

    }

}


int main(){

    //Implicitly declaring the array.
    float before_after[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};

    //Printing the before.
    printf("Before:\n");

    for (int j = 0; j < 6; j++){
        
        printf("%.3f ", before_after[j]);

    }

    printf("\n");

    //Printing the after.
    printf("After:\n");

    //Calling the values produced by the void function.
    divby5(before_after, 6);
    
    for (int k = 0; k < 6; k++){

        printf("%.3f ", before_after[k]);

    }

    printf("\n");
    
    return 0;

}