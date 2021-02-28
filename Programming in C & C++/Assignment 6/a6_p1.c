/*
CH-230-A
a6 p6.1[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

//Defining macros with 3 paras: two variables and its data type.
//Using a temporary 3rd variable to do the normal swapping alg.
#define SWAP_1(a, b, int) int temp_1 = a; a = b; b = temp_1;
#define SWAP_2(c, d, double) double temp_2 = c; c = d; d = temp_2;


int main(){
    
    int num1, num2;
    double num3, num4;

    //Standard Input.
    scanf("%d", &num1);
    scanf("%d", &num2);

    scanf("%lf", &num3);
    scanf("%lf", &num4);

    //Calling the macros with respective arguments.
    SWAP_1(num1, num2, int);
    SWAP_2(num3, num4, double);

    //Standard Output.
    printf("After swapping:\n");

    printf("%d\n", num1);
    printf("%d\n", num2);

    printf("%lf\n", num3);
    printf("%lf\n", num4);
 
    return 0;

}