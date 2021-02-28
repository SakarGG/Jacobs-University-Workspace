/*
CH-230-A
a2 p2.6[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){

    double x, y;
    
    printf("Enter two double values: \n");

    scanf("%lf", &x);
    getchar();
    scanf("%lf", &y);

    //Data type of the variable and pointer must be the same
    double *ptr_one = &x; 
    double *ptr_two = &x;
    double *ptr_three =&y;
    
    printf ("Address of the first pointer= %p\n", ptr_one);
    printf ("Address of the second pointer= %p\n", ptr_two);
    printf ("Address of the third pointer= %p\n", ptr_three);

    return 0;

}