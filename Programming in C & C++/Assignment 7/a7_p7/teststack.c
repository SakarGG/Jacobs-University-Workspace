/*
CH-230-A
a7 p7.7[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/


//main function in teststack.c


/*Tells the preprocessor to find the user created header
files first before the predefined library files.*/
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    //Which element to push.
	int pushStack;
    //Which action to take.
	char decide;

    //DMA stack for size of 12 ints.
    struct stack* stack = malloc(sizeof(int) * 12);

    //Check if memory allocation failed.
    if (stack == NULL){
        
        printf("Memory could not be allocated");
        return -1;

    }

    //Infinite loop until 'q'.
    while(1){

        scanf("%c", &decide);
		decide = tolower(decide);

        switch(decide){

            case 's':{

                scanf("%d", &pushStack);

                //To tackle the case where the stack is full.
                if(container >= 12){
                
                    printf("Pushing Stack Overflow\n");

                }

                else{
                    
                    //Function call to perform push action.
                    push(stack, pushStack);

                }

            break;

			}


            case 'p':{

                //To tackle the case where the stack is empty.
                if(container == 0){

                    printf("Popping Stack Underflow\n");

                }

                else{

                    //Function call to perform pop action.
                    printf("Popping %d\n", pop(stack));

                }

            break;

			}


            case 'e':{

                printf("Emptying Stack ");

                //Decreasing for loop since it is LIFO
                for(int k = container; k > 0; k--){
                    
                    /*Calling the pop function again, but
                    this time clearing the whole stack using
                    a for loop and going through each element.*/
                    printf("%d ", pop(stack));

                }

                printf("\n");
                
            break;

			}


            case 'q':{

                //Case to quit.
                printf("Quit\n");
                exit(1); 

            break;

			}

        }

    }

    return 0;

}