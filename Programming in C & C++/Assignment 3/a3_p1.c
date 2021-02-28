/*
CH-230-A
a3 p3.1[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main (){

    float x; 
    int n;

    scanf("%f", &x);
    scanf("%d", &n);

    /*Makes sure n is a natural number so that the program
    can handle it*/
    while (n <= 0){

        printf ("Input is invalid, reenter value\n");
        scanf ("%d", &n);

    }

    for (int i = 0; i < n; i++){
        printf("%f\n", x);
    }

    return 0;

}