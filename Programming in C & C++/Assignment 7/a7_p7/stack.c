/*
CH-230-A
a7 p7.7[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/


//function definitions in stack.c
 

/*Tells the preprocessor to find the user created header
files first before the predefined library files.*/
#include "stack.h"
#include <stdio.h>

//Function to push elements into the stack
void push(struct stack* stack, int value){ 

    /*Accessing the elements and pushing the value
    on top of an existing element.*/
    stack -> array[++stack -> count] = value; 
    printf("Pushing %d\n", value); 

    //Variable to check the fullness of the stack.
    //Increases as elements are pushed in.
    container++;

}


//Function to check if the stack is Empty
int isEmpty(struct stack* stack) { 

    //Accessing the elements results in a negative value.
    return stack -> count == -1; 

} 


//Function to pop/remove elements
int pop(struct stack* stack) {

    //Decreases as elements are popped out.
    container--;
    return stack -> array[stack -> count--]; 

}