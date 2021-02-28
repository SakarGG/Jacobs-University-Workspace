/*
CH-230-A
a1 p1.4[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int x = 17;
    int y = 4; 

    int sum = x + y;
    int product = x * y;
    int difference = x - y;

    /*Changing integer division to real division by type casting 
    it to float*/
    float quotient = ((float)x) / ((float)y); 
    
    int remainder = x % y;

    printf("x=%d\n", x);

    printf("y=%d\n", y);

    printf("sum=%d\n", sum);

    printf("product=%d\n", product);

    printf("difference=%d\n", difference);

    printf("division=%f\n", quotient);

    printf("remainder of division=%d\n", remainder);

    return 0; 
    
}
