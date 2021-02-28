/*
CH-230-A
a3 p3.10[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>


float product(float a, float b){

    float product = a * b;

    return product;

}


void productbyref(float a, float b, float *p){

    *p = a * b;
    return;

}


void modifybyref(float *a, float *b){

    *a += 3;
    *b += 11;
    return;

}


int main (){

    float flo1, flo2, res1, res2;
    
    printf("Enter the first float value: ");
    scanf("%f", &flo1);

    printf("Enter the second float value: ");
    scanf("%f", &flo2);

    /*The following three lines contain the values produced
    in the functions above*/
    
    res1 = product(flo1, flo2);
    productbyref(flo1, flo2, &res2);
    modifybyref(&flo1, &flo2); 

    printf("Answer from the first function: %f\n", res1);
    printf("Answer from the second function: %f\n", res2);

    /*res1 and res2 returns the same value, one uses parameter
    by value and the other uses parameter by reference since
    the second function cannot return values.*/

    printf("Answer from the third function: %f and %f\n", flo1, flo2);

    /*modifybyref function modifies the inputted values by parameter
    by reference. It uses a pointer to change the value so that it
    can be returned to the main function.*/

    return 0;

}
