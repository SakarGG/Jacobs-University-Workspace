/*
CH-230-A
a8 p8.4[c]
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
    stack -> array[stack -> count ++] = value;

    //UNNECESSARY FOR THIS QUESTION.
    /*
    printf("Pushing %d\n", value); 
    */

    //Variable to check the fullness of the stack.
    //Increases as elements are pushed in.
    container++;

}


//UNNECESSARY FOR THIS QUESTION.
//Function to check if the stack is Empty
int isEmpty(struct stack* stack) { 

    //Accessing the elements results in a negative value.
    return stack -> count == -1; 

} 


//UNNECESSARY FOR THIS QUESTION.
//Function to pop/remove elements
int pop(struct stack* stack) {

    //Decreases as elements are popped out.
    container--;
    return stack -> array[stack -> count--]; 

}


void DecToBin(struct stack *stack, unsigned int value){

    int TrueOrFalse;
    unsigned int store = value;

    while(value > 0){

        //Convert to Binary Representation.
        TrueOrFalse = value % 2;

        //Calling push function to fill out the stack. 
        push(stack, TrueOrFalse);

        value = value / 2;

    }

    //The value of value changes so store used as a substitution.
    printf("The binary representation of %u is ", store);

    //Go through the stack in descending order as it is LIFO.
    for (int i = stack -> count - 1; i > -1; i--){

        /*Printing the pushed in value one by one 
        starting from the top and going to the bottom.*/
        printf("%d", stack -> array[i]);

    }
    
    printf(".\n");

}