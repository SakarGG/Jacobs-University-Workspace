/*
CH-230-A
a4 p4.6[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//Global variable as used everywhere.
int n;

void two_greats(int int_array[], int *huge, int *big){

    //Assigning the first two elements of the array.
    *huge = int_array[0];
    *big = int_array[1];

    /*If the size of the array happened to be 2, the following 
    if statement assignes the highest to huge.*/ 
    if (huge < big){

        int temp = *huge;
        *huge = *big;
        *big = temp;

    }

    for (int i = 2; i < n; i++) {

        if (int_array[i] > *huge){

            /*If the next element is greater than huge, big takes the value
            of huge and huge takes the next big value.*/ 
            *big = *huge;
            *huge = int_array[i];            

        }

        else if (int_array[i] > *big && int_array[i] != *huge){

            /*If the next element is greater than big and huge had an even greater 
            value, big takes that value. This is to prevent any gaps between 
            huge and big.*/
            *big = int_array[i];

        }

    }

}

int main(){

    int colossal, massive;
    int *array_int;

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    //Two numbers cannot be generated out of less than 2 numbers.
    while (n < 2){

        printf("2 != (< 2), please enter at least two so that comparison is possible: ");
        scanf("%d", &n);

    }

    //Allocating dynamic memory.
    array_int = (int *) malloc(sizeof(int) * n);

    //In the case no memory could be allocated.
    if (array_int == NULL){

        printf("Memory could not be allocated\n");
        exit(1);

    }

    printf("Enter %d element(s) to your array\n", n);

    for(int i = 0; i < n; i++){

        scanf("%d", &array_int[i]);

    }

    //Calling the void function.
    two_greats(array_int, &colossal, &massive);

    printf("The two greatest numbers (in descending order) in the array = %d and %d\n", colossal, massive);

    //Deallocating the dynamic memory.
    free(array_int);

    return 0;

}