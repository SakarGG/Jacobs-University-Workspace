/*
CH-230-A
a2 p2.3[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int weeks, days, hours;
    
    printf("Please enter the number of weeks, days and hours in that order: \n");

    scanf("%d", &weeks);
    getchar();
    scanf("%d", &days);
    getchar();
    scanf("%d", &hours);
    getchar();

    //Weeks to days
    days = days + (weeks * 7);

    //Days to hours
    hours = hours + (days * 24);

    printf("The total number of hours are %d hours\n", hours);

    return 0;

}