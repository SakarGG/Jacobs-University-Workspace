/*
CH-230-A
a2 p2.10[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int n, days = 1, hours = 24;

    printf ("Enter any natural number: ");
    scanf ("%d", &n);
    
    /*While loop to ensure that the inputted number can be 
    handled by the following program*/
    while (n <= 0){

        printf ("Invalid input. The input has to be a natural number: ");
        scanf ("%d", &n);

    }

        printf("Correct input! \n");

        /*The first day is separated from the while loop below
        because of a small text change while printing*/
        printf("%d day = %d hours \n", days, hours);

        while (n > 1){

        days++;
        hours = hours + 24;
        printf ("%d days = %d hours \n", days, hours);
        n--;

        }

    return 0;
    
}