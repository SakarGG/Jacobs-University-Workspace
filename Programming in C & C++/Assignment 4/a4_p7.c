/*
CH-230-A
a4 p4.7[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

//Making sides a global variable as it used everywhere
int sides;

void blocky_square(int blocky[sides][sides]){

    for (int i = 0; i < sides; i++){

        for (int j = 0; j < sides; j++){

            //i visits all the rows and j visits all the columns of that i.
            printf("%d ", blocky[i][j]);

        }

        //New line to differentiate different rows.
        printf("\n");

    }

}


void quadrat_underdiag(int quadrat[sides][sides]){

    for (int i = 0; i < sides; i++){

        for (int j = 0; j < sides; j++){
            
            /*Under the main diagonal always has the value of row
            higher than column.*/
            if (i > j){

                printf("%d ", quadrat[i][j]);

            }
            
        }

    }
    
    printf("\n");

}


int main(){

    scanf("%d", &sides);

    int square[sides][sides];

    for (int i = 0; i < sides; i++){

        for (int j = 0; j < sides; j++){

            //i visits all the rows and j visits all the columns of that i.
            scanf("%d", &square[i][j]);

        }

    }

    //Calling the void function to be printed in cmd.
    printf("The entered matrix is:\n");
    blocky_square(square);

    printf("Under the main diagonal:\n");
    quadrat_underdiag(square);

    return 0;

}