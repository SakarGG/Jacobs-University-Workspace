/*
CH-230-A
a6 p6.3[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

//Comparing all inputs one by one and choosing the min
//Parameters are input variables.
#define compareMIN(a, b) ((a) < (b)  ? (a) : (b))
#define MINIMUM(a, b, c) compareMIN(compareMIN(a,b),c)

//Comparing all inputs one by one and choosing the max
//Parameters are input variables.
#define compareMAX(a, b) ((a) > (b)  ? (a) : (b))
#define MAXIMUM(a, b, c) compareMAX(compareMAX(a,b),c)

//Finding the output from the following math expression
/*Parameters are output variables, received from the 
2 macros above.*/
#define MRange(MIN, MAX) ((MIN + MAX)/ (float) 2)

int main(){

    int a, b, c;

    //Standard input.
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    //Calling all the macros in order.
    int min = MINIMUM(a, b, c);
    int max = MAXIMUM(a, b, c);
    float midrange = MRange(min, max);

    //Standard output.
    printf("The mid-range is: %f", midrange);
    printf("\n");

    return 0;

}