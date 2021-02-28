/*
CH-230-A
a6 p6.5[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

//Macro for decimal representation.
#define DR(char) printf("%d", (char))

//Using function to print binary representation
//Using bitwise operators.   
void conversion(unsigned char c){

    //Until it finds the last 1.
    for(int i = 0; c != 0; i++){

        //Print directly without putting in an array.
        printf("%d", (c & 1)); 

        //Mask movement.
        c = c >> 1; 

    }

}


int main(){

    //Initializing and scanning unsigned char.
    unsigned char c1;
    scanf("%c", &c1);

    //Printing the decimal representation.
    printf("The decimal representation is: ");
    DR(c1);
    printf("\n");

    //Printing the reverse binary representation.
    printf("The backwards binary representation is: ");
    conversion(c1);
    printf("\n");
 
    return 0;

}