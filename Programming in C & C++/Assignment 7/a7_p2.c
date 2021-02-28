/*
CH-230-A
a7 p7.2[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node *front = NULL, *rear = NULL;


struct node {

    char info;
    struct node *next;
    struct node *previous;

};

//Function to insert element into the DLL.
void insertInDLL(char putinDLL){
    
    //Walks the list and puts the value.
    struct node *walk;

    //DMA
    walk = (struct node *) malloc(sizeof(struct node));

    //Check if DMA failed
    if(walk == NULL){

        printf("Memory could not be allocated.\n");
        exit(0);

    }

    //Put in the beginning.
    walk -> info = putinDLL;

    if(front == NULL){

        front = rear = walk;

        walk -> previous = NULL;
        walk -> next = NULL;
        

    }

    else{

        walk -> next = front;
        front -> previous = walk;

        walk -> previous = NULL;
        front = walk;

    }

}


//Function to remove certain elements from the DLL.
void removeFromDLL(char putoutDLL){

    //To check if the element exists in the list or not.
    bool check = true;

    struct node *walk = front;

    while(walk){
        
        //If the char is not found, to the next else delete it
        //Go to next.
        if(walk -> info != putoutDLL){
            
             walk = walk -> next;

        }
        
        //Replaces the deleted node with the one next to it.
        else{

            struct node *follow = walk;
            walk = walk -> next;

            //If pointer is at the start, go through the list increasingly.
            if(follow == front){

                front = front -> next;

                if(front){

                    follow -> next -> previous = NULL;

                }

            }

            //If pointer is at the end, go through the list decreasingly.
            else if(follow == rear){

                rear = follow -> previous;
                follow -> previous -> next = NULL;

            }

            else{

                follow -> previous -> next = follow -> next;

                if(follow -> next){

                    follow -> next -> previous = follow -> previous;

                }

            }

        //Change condition if found.
        check = false;

        free(follow);

        }
        
    }

    //If char is not found in the DLL, throw an exception.
    if(check == true){

        printf("The element is not in the list!\n");

    }

}


//Function that prints the DLL in the normal order.
void printNormally(){

    //Goes from the front to the rear.
    struct node *printer = front;

    while(printer){

        printf("%c ", printer -> info);
        printer = printer -> next;

    }

    printf("\n");

}


//Function that prints the DLL in the reverse order.
void printReversely(){

    //Goes from the rear to the front.
    struct node *printer = rear;

    while(printer){

        printf("%c ", printer -> info);
        printer = printer -> previous;

    }

    printf("\n");

}


int main(){

    while(1){

        char actioninDLL;

        int decide;
        scanf("%d", &decide);
        getchar();

        switch(decide){

            //To insert something in DLL.
            case (1):{

                scanf("%c",&actioninDLL);
                insertInDLL(actioninDLL);

                break;

            }


            //To remove something in DLL.
            case (2):{

                scanf("%c",&actioninDLL);
                removeFromDLL(actioninDLL);

                break;

            }


            //To print the DLL in normally.
            case (3):{

                printNormally();
                break;

            }


            //To print the DLL in reverse.
            case (4):{

                printReversely();
                break;

            }


            //End the executable.
            case (5):{

                exit(0);   
                break;

            }


            //If outside of range.
            default:{

                printf("Please enter between 1 and 5.\n");
                break;

            }

        }

    }

    return 0;

}