/*
CH-230-A
a4 p4.10[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb){

    //Using pointers to alter values of the variables.

    *prod = a * b;

    //The question is asking for a/b since it says b can't be 0.
    *div = a / b;

    //pow is a function inside math.h.
    //First parameter is base, second is exponent.
    *pwr = pow(a, b);

    //Typecasted to float to be precise.
    *invb = (float)1 / b;

}


int main(){

    float a, b, product, division, power, inverse;

    printf("Enter two floats\n");

    scanf("%f", &a);
    scanf("%f", &b);

    printf("\n");

    //Using parameter by reference to call multiple values from the void function.
    proddivpowinv(a, b, &product, &division, &power, &inverse);

    //Using relevant variables.
    printf("You entered: %f and %f\n", a, b);
    printf("Product: %f\n", product);
    printf("Division: %f\n", division);
    printf("Power: %f\n", power);
    printf("Inverse: %f\n", inverse);

    printf("\n");

    return 0;

}
