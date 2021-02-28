/*
CH-230-A
a1 p1.5[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include<stdio.h>

int main(){

    int x = 2138;
    float y = -52.358925; 
    char z = 'G';
    double u = 61.295339687;

    printf ("x=%9d\n", x);

    //Combining spacing and precision
    printf ("y=%11.5f\n", y); 
    
    printf ("z=%c\n", z);
    printf ("u=%.7lf\n", u);

    return 0;
}