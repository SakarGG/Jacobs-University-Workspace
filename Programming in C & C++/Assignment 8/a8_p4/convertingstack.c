/*
CH-230-A
a8 p8.4[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/


//main function in convertingstack.c


/*Tells the preprocessor to find the user created header
files first before the predefined library files.*/
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>


/*Stripped out unnecessary processes in the main function
and only the required new one.*/
int main(){

    unsigned int value;
    struct stack stack;
    
    stack.count = 0;
    
    //Input for the value to be converted.
    scanf("%u", &value);
    
    //Function call to perform the action.
    DecToBin(&stack, value);
    
    return 0 ;
    
}