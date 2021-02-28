/*
CH-230-A
a3 p3.3[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

//Function below, creates local variables, takes value from main
float convert(float kmlength){

    float cmlength;

    cmlength = kmlength/100000;

    return(cmlength);

}


int main(){
    
    int km;
    float cm;
    
    scanf("%d",&km);

    //The next line takes the value produced by the function
    cm = convert(km);
    printf("Result of conversion: %f\n", cm);

    return(0);

}