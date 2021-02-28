/*
CH-230-A
a8 p8.4[h]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/


//struct definitions and function declarations in stack.h


#ifndef STACK_H
#define STACK_H

//Global variable.
//Value changes in functions to be used in main.
int container;

//Defining the stack in the header file.
struct stack{

    unsigned int count;
    int array[12]; // Container

};

//Declaring all the functions to be used later in the header file.
void push(struct stack* stack, int value);

//UNNECESSARY FOR THIS QUESTION.
int isEmpty(struct stack* stack);
int pop(struct stack* stack);

void DecToBin(struct stack *stack, unsigned int value);

#endif