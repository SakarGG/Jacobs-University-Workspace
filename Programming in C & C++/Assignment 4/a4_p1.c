/*
CH-230-A
a4 p4.1[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main(){

    float start, stop, step;

    scanf("%f", &start);
    scanf("%f", &stop);
    scanf("%f", &step);

    //for loop visiting all possible cases from given inputs
    for (float idx = start; idx <= stop; idx += step){

        //Doing all calculations in printf so that the precision matches
        printf("%f %f %f\n", idx, idx * idx * M_PI, 2 * M_PI * idx);

    }

    return 0;

}