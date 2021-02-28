/*
CH-230-A
a2 p2.9[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){

    char char1;
    
    scanf("%c", &char1);

    /*Since letters are arranged one after the other in the ASCII
    table, it is possible to do the following case. Same with the 
    digits.*/
    if ((char1 >= 'A' && char1 <= 'Z') || (char1 >= 'a' && char1 <= 'z')){
        printf ("%c is a letter\n", char1);
    }

    else if ((char1 >= '0' && char1 <= '9')){
        printf ("%c is a digit\n", char1);
    }

    else{
        printf ("%c is some other symbol\n", char1);
    }

    return 0;

}