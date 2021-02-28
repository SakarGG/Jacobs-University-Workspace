/*
CH-230-A
a2 p2.8[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int num1;
    
    scanf("%d", &num1);

    //Using remainder division to find if it is perfectly divisible
    if (num1 % 2 == 0 && num1 % 7 == 0){
        printf("The number is divisible by 2 and 7\n");
    }
    
    else{
        printf("The number is NOT divisible by 2 and 7\n");
    }

    return 0;
 
}