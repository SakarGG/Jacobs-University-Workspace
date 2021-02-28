/*
CH-230-A
a5 p5.1[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

void triangle_printer(int n, char ch){

    int m = n;

    //This for loop to go through all the rows.
    for (int i = 0; i < n; i++){

        /*This for loop to go through all the columns. In decreasing
        order as the last column is destroyed in each iteration.*/
        for (int j = m; j > 0; j--){
            
            printf("%c", ch);

        }

        printf("\n");
        //m-- since each row has one less character.
        m--;

    }

}


int main (){
    
    int num;
    char c; 

    //Input, call parameter and call function.
    scanf("%d", &num);
    getchar();
    scanf("%c", &c);

    triangle_printer(num, c);

    return 0;

}