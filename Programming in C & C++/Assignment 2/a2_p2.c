/*
CH-230-A
a2 p2.2[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){

    char char1;
    
    scanf("%c", &char1);

    /*Different format specifiers to print one variable
    in different ways*/
    printf("character=%c\n", char1);
    printf("decimal=%d\n", char1);
    printf("octal=%o\n", char1);
    printf("hexadecimal=%x\n", char1);
     
     return 0;

}