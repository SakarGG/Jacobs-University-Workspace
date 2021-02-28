/*
CH-230-A
a2 p2.7c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int i = 8;

    /*Without curly brackets, it only executes the line below
    it and not i--;. i will forever be above 4 so it repeats 
    forever. Keeping inside curly brackers terminates the loop
    at some  point and hence program is fixed. That's it. */
    while (i >= 4){

    printf("i is %d\n", i);
    i--;

    }

    printf("That’s it.\n");
    
    return 0;

}