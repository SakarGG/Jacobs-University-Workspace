/*
CH-230-A
a6 p6.4[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE

int main (){

    int *AVector, *BVector, *IProduct;
    int size, SProduct = 0; 
    
    //Take the size value for the vectors below.
    scanf ("%d", &size);

    //DMA all the vectors involved.
    AVector = (int *) malloc(sizeof(int) * size);
        
    if (AVector == NULL){
        
        printf("Memory could not be allocated");
        exit(1);

    }

    BVector = (int *) malloc(sizeof(int) * size);
        
    if (BVector == NULL){
        
        printf("Memory could not be allocated");
        exit(1);

    }

    IProduct = (int *) malloc(sizeof(int) * size);
        
    if (IProduct == NULL){
        
        printf("Memory could not be allocated");
        exit(1);

    }

    //STDIN for the first vector.
    for (int i = 0; i < size; i++){

        scanf("%d", &AVector[i]); 

    }

    //STDIN for the second vector.
    for (int i = 0; i < size; i++){

        scanf("%d", &BVector[i]); 

    }

    int idx = 0;
    while (idx < size){

        /*Using the formulas provided to calculate
        intermediate values and dot product.*/
        IProduct[idx] = AVector[idx] * BVector[idx]; 
        SProduct = SProduct + IProduct[idx];

        idx++;

    }

    //Only if INTERMEDIATEis defined then print the value
    #ifdef INTERMEDIATE 
    printf ("The intermediate product values are:\n");

    for (int i = 0; i < size; i++){

        printf ("%d\n", IProduct[i]); 

    }

    //Else don't print it and only print dot product.
    #else
    printf("INTERMEDIATE not defined\n");

    #endif
    printf ("The scalar product is: %d\n", SProduct);

    return 0;

}