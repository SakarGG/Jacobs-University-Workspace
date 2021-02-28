/*
CH-230-A
a2 p2.1[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main (){

    double dnum1, dnum2, dsum, ddifference, dsquare;
    int inum1, inum2, isum, iproduct, charsum, charproduct;
    char char1, char2;
     
    //scanf to get input from the keyboard.
    scanf("%lf", &dnum1);
    getchar();
    scanf("%lf", &dnum2);
    getchar();
    scanf("%d", &inum1);
    getchar();
    scanf("%d", &inum2);
    getchar();
    scanf("%c", &char1);
    getchar();
    scanf("%c", &char2);

    dsum = dnum1 + dnum2;
    ddifference = dnum1 - dnum2;
    dsquare = dnum1 * dnum1;

    isum = inum1 + inum2;
    iproduct = inum1 * inum2;

    //Add and multiply ASCII values of chars
    charsum = char1 + char2;
    charproduct = char1 * char2; 

    printf("sum of doubles=%lf\n", dsum);
    printf("difference of doubles=%lf\n", ddifference);
    printf("square=%lf\n", dsquare);

    printf("sum of integers=%d\n", isum);
    printf("product of integers=%d\n", iproduct);

    printf("sum of chars=%d\n", charsum);
    printf("product of chars=%d\n", charproduct);

    printf("sum of chars=%c\n", charsum);
    printf("product of chars=%c\n", charproduct);
    
    return 0;
    
}
