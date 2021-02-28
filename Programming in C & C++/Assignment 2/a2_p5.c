/*
CH-230-A
a2 p2.5[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int a;
    
    printf("Enter an integer value: ");
    scanf("%d", &a);

    printf ("The number you entered= %d\n", a);

    int *ptr_a = &a;
    
    //Printing address of the pointer
    printf ("Address of the pointer= %p\n", ptr_a);
    
    //Adds 5 to a through the pointer
    *ptr_a += 5; 

    printf("The modified value= %d\n", a);

    //Printing address of the variable
    printf("The address of a= %p\n", &a);

    return 0;

}

