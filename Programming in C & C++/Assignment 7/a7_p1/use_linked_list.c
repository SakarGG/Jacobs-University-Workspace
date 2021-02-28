/*
CH-230-A
a7 p7.1[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/


//main function in use_linked_list.c

/*Tells the preprocessor to find the user created header
files first before the predefined library files.*/
#include "linked_list.h"
#include <stdio.h>

//Copying the main function from a6_p8.c
int main(){

    //head declared here.
    struct list* head = NULL;
     
    char char1;

    //Repeat forever until break;.
    while(1){
        
        scanf("%c", &char1);
        switch(char1){

            case('a'):{
                
                //The number after the char is inserted at the end.
                int a;
                scanf("%d", &a);

                getchar();
                //Calling the function to perform that action.
                head = insertlast(head, a);

                break;

            }

            
            case('b'):{

                //The number after the char is inserted at the beginning.
                int b;
                scanf("%d", &b);

                getchar();
                //Calling the function to perform that action.
                head = insertbeginning(head, b);

                break;

            }


            case('p'):{

                //Calling the function to print until that point.
                printall(head);
   
                break;

            }


            case('q'):{

                //Calling the function to free and end the program.
                memoryfreed(head);

                return 0;

                break;

            }
            
            
            case('r'):{
                
                //Calling the function to delete first element.
                head = deletebeginning(head);
     
                break;

            }

        }

    }
    
    return 0;

}