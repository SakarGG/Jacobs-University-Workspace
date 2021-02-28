/*
CH-230-A
a6 p6.2[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

//Macro for decimal representation.
#define DR(char) printf("%d", (char))

//Macro for Least significant bit.
#define LSB(char) printf("%d", (char & 1) ? 1 : 0)

int main(){

    //Initializing and scanning unsigned char.
    unsigned char c1;
    scanf("%c", &c1);

    //Printing the decimal representation.
    printf("The decimal representation is: ");
    DR(c1);
    printf("\n");

    //Printing the least significant bit.
    printf("The least significant bit is: ");
    LSB(c1);
    printf("\n");

    return 0;

}