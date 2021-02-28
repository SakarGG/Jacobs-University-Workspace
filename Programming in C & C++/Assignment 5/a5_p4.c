/*
CH-230-A
a5 p5.4[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/  

#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size){

    //Dividing all elements by 5.
    for (int i = 0; i < size; i++){

        //Typecasted to float for precision.
        arr[i] = (float) arr[i]/5;

    }

}


int main(){

    int n; 
    float *before_after;

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    //DMA.
    before_after= (float *) malloc(sizeof(float *) * n);

    //Check if memory could not be allocated.
    if (before_after == NULL){

        printf("Memory could not be allocated\n");
        exit(1);

    }

    //Entering values to the dynamic array.
    printf("Enter %d element(s) to your array\n", n);

    for(int i = 0; i < n; i++){

        scanf("%f", &before_after[i]);

    }

    printf("\n");

    //Printing the before.
    printf("Before:\n");

    for (int j = 0; j < n; j++){
        
        printf("%.3f ", before_after[j]);

    }

    printf("\n");

    //Printing the after.
    printf("After:\n");

    //Calling the values produced by the void function.
    divby5(before_after, n);
    
    for (int k = 0; k < n; k++){

        printf("%.3f ", before_after[k]);

    }

    printf("\n");
    printf("\n");

    //Deallocation.
    free(before_after);
    
    return 0;

}