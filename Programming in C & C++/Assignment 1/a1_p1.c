/*
CH-230-A
a1 p1.1[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main() {
    double result; 
    result = (3.0+1.0) / 5.0;

    /* The fix to this is to declare the numbers as a double form and not as an integer form. 
    Instead of doing an integer division, by adding .0 it enables the compiler to perform a real division. 
    The result of our calculation is 0.0000 because given operands are integers 
    and so the answer also results in the integer only part to be efficient, hence integer division.*/
    
    printf("The value of 4/5 is %.1lf\n", result);
    return 0;
}