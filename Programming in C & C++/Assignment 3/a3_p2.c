/*
CH-230-A
a3 p3.2[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/


#include <stdio.h>

int main (){

    char ch; 
    int n;

    scanf("%c", &ch);
    scanf("%d", &n);

    printf("Characters on and before '%c' are: ", ch);

    for (int i = 0; i < n; i++){

        printf("%c, ", ch - i);

    }

    //The last character doesn't have a comma after it
    printf("%c", ch - n);

    printf("\n");

    return 0;

}