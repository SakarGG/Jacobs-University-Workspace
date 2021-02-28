/*
CH-230-A
a6 p6.6[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

//Macro for decimal representation.
#define DR(char) printf("%d", (char))

//Using function to print binary representation
//Using bitwise operators.   
void conversion(unsigned char c){

    //128 is 10000000 in binary, bits of an uchar.
    int size = 128;  
    
    //Loop until the max size of uchar.
    for (int i = 0; i < (sizeof(unsigned char) * 8); i++){

        /*Represent directly but make sure mask movement is done
        when the char has correct value.*/
        printf("%d", !!(c & (size >> i))); 

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

    //Printing the binary representation.
    printf("The binary representation is: ");
    conversion(c1);
    printf("\n");
 
    return 0;

}