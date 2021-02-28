/*
CH-230-A
a4 p4.9[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//Global variable as it is used everywhere.
int n;

int prodminmax(int arr[], int n){

    //A starting point as well as produces an output for a 4 byte array.
    int max = arr[0];
    int min = arr[0];

    int product = 1;

    for (int i = 1; i < n; i++) {

        //If the current value is greater than max, max takes that value.
        if (arr[i] > max){

            max = arr[i];

        }

        //If the current value is smaller than min, min takes that value.
        if (arr[i] < min){

            min = arr[i];

        }

    }

    product = max * min;

    return product;

}


int main(){

    int *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    /*Array having less than 2 elements would also work and would
    produce a square.*/

    //DMA
    arr = (int *) malloc(sizeof(int *) * n);

    if (arr == NULL){

        printf("Memory could not be allocated\n");
        exit(1);

    }

    printf("Enter %d element(s) to your array\n", n);

    for(int i = 0; i < n; i++){

        scanf("%d", &arr[i]);

    }
    
    //Storing the value produced by the function.
    int product = prodminmax(arr, n);

    printf("The product of the greatest and the smallest number in the array = %d\n", product);

    //Deallocate.
    free(arr);

    return 0;

}
