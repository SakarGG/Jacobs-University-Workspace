/*
CH-230-A
a6 p6.8[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list* head = NULL;

struct list{
    
    int info;
    struct list *next;
    
};
        

//Perform an insertion at the beginning of the list.
struct list* insertbeginning(struct list* list1, int value){
    
    struct list *insertBegin;

    //DMA the list.
    insertBegin = (struct list*) malloc(sizeof(struct list));
        
    if (insertBegin == NULL){
        
        printf("Memory could not be allocated");
        return list1;

    }

    //Value is pushed in the front of the list.
    insertBegin -> info = value;
    insertBegin -> next = list1;
       
    return insertBegin;

}


//Perform an insertion at the end of the list.
struct list* insertlast(struct list* list2, int value){
    
    struct list *cursor, *insertEnd;

    cursor = list2;

    insertEnd = (struct list*) malloc(sizeof(struct list));

    if(insertEnd == NULL){

        printf("Memory could not be allocated");
        return list2;

    }

    //Value is pushed in the back of the list.
    insertEnd -> info = value;
    insertEnd -> next = NULL;

    //Display itself if no list, or add at the end.
    if(list2 == NULL){

        return insertEnd;

    }
    
    while(cursor -> next != NULL){
        
        cursor = cursor -> next;
        
    }
    
    cursor -> next = insertEnd;

    return list2;

}


//Print the entire list.
void printall(struct list* list3){
    
    struct list *p;
    
    for(p = list3; p; p = p -> next){
        
        printf("%d ", p -> info);
        
    }

    printf("\n");

}


//Free the entire list.
void memoryfreed(struct list* list4){
    
    struct list* nextelem;
    
    while(list4 != NULL){
        
        nextelem = list4 -> next;
        free(list4);
        list4 = nextelem;

    }

}


//Perform a deletion of the first element of the list.
struct list* deletebeginning(struct list* head){
    
    struct list* removeBegin;
    
    /*Delete nothing or deleter only the first 
    by pointing to the first.*/
    if(head == NULL){
        
        return head;

    }

    else{
        
        removeBegin = head;
        head = head -> next;

        free(removeBegin);

        return head;

    }

}


int main(){
     
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