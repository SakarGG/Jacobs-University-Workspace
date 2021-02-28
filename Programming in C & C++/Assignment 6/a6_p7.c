/*
CH-230-A
a6 p6.7[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

//Macro for decimal representation.
#define DR(char) printf("%d", (char))

//128 is 10000000 in binary, bits of an uchar.
int size = 128;

//Using function to print binary representation
//Using bitwise operators. 
void conversion(unsigned char c){

    //Until the binary size of c.
    for (int i = 0; i < (sizeof(unsigned char) * 8); i++){

        printf("%d", !!(c & (size >> i))); 

    }

}


unsigned char set3bits(unsigned char a, int b, int c, int d){
    
    //Turning on the respective bits if they aren't,
    //Using a new char to store the updated bits.
    a = a | (1 << b) | (1 << c) | (1 << d);

    return a;

}


int main(){

    //Initializing and scanning unsigned char.
    unsigned char c1;
    int bit1, bit2, bit3;
    scanf("%c", &c1);

    scanf("%d", &bit1);
    scanf("%d", &bit2);
    scanf("%d", &bit3);

    //Printing the decimal representation.
    printf("The decimal representation is: ");
    DR(c1);
    printf("\n");

    //Printing the binary representation.
    printf("The binary representation is: ");
    conversion(c1);
    printf("\n");

    printf("After setting the bits: ");

    //Calling the function and updating the char bits.
    c1 = set3bits(c1, bit1, bit2, bit3);

    //Until the binary size of c.
    for (int i = 0; i < (sizeof(unsigned char) * 8); i++){

        printf("%d", !!(c1 & (size >> i))); 

    }
    printf("\n");

    return 0;

}