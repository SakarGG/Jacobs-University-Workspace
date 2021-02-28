/*
CH-230-A
a3 p3.7[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/


#include <stdio.h>

void printform(int n, int m, char c){

    for (int height = 1 ; height <= n ; height++){

        for(int base = 1 ; base <= m ; base++){

            printf("%c",c);

        }

        printf("\n");
        
        //m++ because every line has one more character
        m++; 

    }

}


int main(){

    int h, b;
    char c;

    printf("Enter the height for the shape: ");
    scanf("%d", &h);

    printf("Enter the base for the shape: ");
    scanf("%d", &b);

    getchar();

    printf("Enter any character to be shaped: ");
    scanf("%c", &c);

    //void function call to print it in the cmd
    printform(h, b, c);

    return 0;
 
}