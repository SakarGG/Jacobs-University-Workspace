/*
CH-230-A
a8 p8.6[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //Filename variable.
    char fileOne[50], fileTwo[50];

    //All math stuff variables.
    double first = 0, second = 0, 
           add = 0, subtract = 0, 
           multiply = 1, divide = 1;

    //Read the filename and remove the \n.
    fgets(fileOne, 50, stdin);
    fgets(fileTwo, 50, stdin);
    fileOne[strcspn(fileOne, "\n")] = 0;
    fileTwo[strcspn(fileTwo, "\n")] = 0;

    //Open the files based on user's choice.
    //File exists is a given.
    FILE *firstFile = fopen(fileOne, "r");
    FILE *secondFile = fopen(fileTwo, "r");

    if(firstFile == NULL || secondFile == NULL){

        printf("The chosen file couldn't be opened!\n");
        exit(1);

    }

    else{

        //Transfer the double to the variable.
        fscanf(firstFile, "%lf", &first);
        fscanf(secondFile, "%lf", &second);

        fclose(firstFile);
        fclose(secondFile);

        //Math.
        add = first + second;
        subtract = first - second;
        multiply = first * second;
        divide = (double) first / second;

        //Creating a new file where the results would be stored in.
        FILE *mathWork = fopen("results.txt", "w");

        //Check if the creation failed.
        if(mathWork == NULL){

            printf("The chosen file couldn't be created!\n");
            exit(1);

        }

        else{

            //Write in the new file.
            fprintf(mathWork, "The addition is: %lf\n", add);
            fprintf(mathWork, "The subtraction is: %lf\n", subtract);
            fprintf(mathWork, "The multiplication is: %lf\n", multiply);
            fprintf(mathWork, "The division is: %lf\n", divide);

        }

        fclose(mathWork);

    }
    
    return 0;

}