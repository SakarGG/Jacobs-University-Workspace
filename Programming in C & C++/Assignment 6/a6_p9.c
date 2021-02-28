/*
CH-230-A
a6 p6.9[c]
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


//Perform an insertion somewhere in the list.
struct list* insertsomewhere(struct list* list3, int position, int value){
    
    struct list *cursor, *cursor2, *insertInBet, *temp = head;
    
    /*Count the size so that it throws an error when 
    position is higher than it.*/
    int count = 0;
    
    while(temp!=NULL){

        temp = temp -> next;
        count += 1;

    }

    cursor = list3;

    //Less than 0 or more than size are corner cases.
    if((position < 0) || (position > count)){

        printf("Invalid position!\n");
        return list3;

    }

    /*If the user inputs 0, it would use 
    insert in the begin function.*/
    else if(position == 0){

        return insertbeginning(list3, value);

    }

    /*If the user inputs SIZE value, it would use 
    insert in the end function.*/
    else if(position == sizeof(list3)){

        return insertlast(list3, value);

    }

    //Everything else is handled here.
    else{

        //DMA the updated list.
        insertInBet = (struct list*) malloc(sizeof(struct list));

        //Error if can't be allocated.
        if(insertInBet == NULL){

            printf("Memory could not be allocated");
            return list3;

        }
        
        insertInBet -> info = value;
        insertInBet -> next = NULL;

        if(list3 == NULL){

            return insertInBet;

        }

        for (int i = 0; i < (position - 1); i++){

            cursor = cursor -> next;

        }

        //Insert at the correct position
        cursor2 = cursor -> next;
        cursor -> next = insertInBet;
        insertInBet -> next = cursor2;

        return list3;

    }

}


//Print the entire list.
void printall(struct list* list4){
    
    struct list *print;
    
    for(print = list4; print; print = print -> next){
        
        printf("%d ", print -> info);
        
    }

    printf("\n");

}


//Perform a reverse to the entire list.
struct list* reverseall(struct list* list5){
    
    struct list *reverse = NULL;
    struct list *temp = NULL;

    while(head != NULL){

        temp = head -> next;
        head -> next = reverse;
        reverse = head;
        head = temp;

   }
   
   head = reverse;
   
   return head;

}


//Free the entire list.
void memoryfreed(struct list* list6){
    
    struct list* nextelem;
    
    while(list6 != NULL){
        
        nextelem = list6 -> next;
        free(list6);
        list6 = nextelem;

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


            case('i'):{

                /*The first number is the position and the second 
                number is the number to be inserted in the linked list.*/
                int p, i;
                scanf("%d", &p);
                scanf("%d", &i);

                getchar();
                //Calling the function to perform that action.
                head = insertsomewhere(head, p, i);

                break;

            }


            case('R'):{
                
                getchar();
                head = reverseall(head);

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