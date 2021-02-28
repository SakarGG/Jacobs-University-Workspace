/*
CH-230-A
a7 p7.3[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/


//struct definitions and function declarations in linked_list.h


#ifndef LINKED_LIST_H 
#define LINKED_LIST_H

//Defining the list in the header file.
struct list{
    
    int info;
    struct list *next;
    
};

//Declaring all the functions to be used later in the header file.
struct list* insertbeginning(struct list* list1, int value);
struct list* insertlast(struct list* list2, int value);
void printall(struct list* list3);
void memoryfreed(struct list* list4);
struct list* deletebeginning(struct list* head);

#endif