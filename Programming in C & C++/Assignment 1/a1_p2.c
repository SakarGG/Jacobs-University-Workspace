/*
CH-230-A
a1 p1.2[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int result = (2 + 7) * 9 / 3;

    /* The fix to the program is adding result variable in the printf line. 
    The reason it generates random number is the printf line expects a value to be printed 
    but since nothing was provided, the compiler autofills with a random number, +ve or -ve.*/

    printf("The result is %d\n", result);
return 0;
}