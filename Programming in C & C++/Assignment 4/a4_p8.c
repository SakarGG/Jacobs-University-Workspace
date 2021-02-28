/*
CH-230-A
a4 p4.8[c]
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

    for (int i = 1; i < sides; i++){

        for (int j = 1; j < sides; j++){
            
            /*Under the secondary diagonal always has the sum of the position of 
            row and column equal or more than the side length. Matrix under 4x4 have
            equal sum but from 4x4 and above, it'll be greater.*/
            if ((i + j) >= sides){

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

    printf("Under the secondary diagonal:\n");
    quadrat_underdiag(square);

    return 0;

}