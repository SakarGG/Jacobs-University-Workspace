/*
CH-230-A
a2 p2.4[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){

    float a, b, h, squarea, rectarea, triarea, traparea;
    
    scanf("%f", &a);
    getchar();
    scanf("%f", &b);
    getchar();
    scanf("%f", &h);
    getchar();

    squarea = a * a;
    rectarea = a * b;

    //Performing arithmetic keeping in mind the priority
    triarea = (a * h)/2;
    traparea = (h*(a + b))/2;
    
    printf("square area=%.6f\n", squarea);
    printf("rectangle area=%.6f\n", rectarea);
    printf("triangle area=%.6f\n", triarea);
    printf("trapezoid area=%.6f\n", traparea);
    
    return 0;

}
