/*
CH-230-A
a7 p7.1[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/


//function definitions in linked_list.c
 

/*Tells the preprocessor to find the user created header
files first before the predefined library files.*/
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

//Copying all the function actions from a6_p8.c

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