/*
CH-230-A
a1 p1.3[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

/*  #include imports the directive of source codes and there 
    exists a preprocessor which processes the lines having 
    '#' in the beginning. Without the '#', the source codes 
    cannot be copied into this program to then have no 
    Standard Input Output. */

int main(){

    float result; 
    
    int a = 5;
    float b = 13.5;

    /*int b is changed to float b as the value being stored 
    in b is a fractional number and int b can only store the 
    integer part and not the whole precision.*/
    
    result = a / b;
    printf("The result is %f\n", result);

    /*In the printf line, the %d needs to be changed to %f. 
    The format of the output has digits after the decimal 
    point and hence a format specifier which can print 
    them is required.*/

    return 0;

}

