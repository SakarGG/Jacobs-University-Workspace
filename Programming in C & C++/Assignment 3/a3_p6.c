/*
CH-230-A
a3 p3.6[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

//Function below, creating local variables
float to_pounds(int kg, int g){

    float lb;

    lb = (kg * 2.2) + (g * 0.0022);

    return(lb);

}


int main(){
    
    int kilogram;
    int gram;
    float pounds;
    
    scanf("%d",&kilogram);
    scanf("%d",&gram);

    //The next line calls the value produced by the function
    pounds = to_pounds(kilogram, gram);
    printf("Result of conversion: %f\n", pounds);

    return(0);

}