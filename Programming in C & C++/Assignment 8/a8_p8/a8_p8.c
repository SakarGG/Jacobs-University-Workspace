/*
CH-230-A
a8 p8.8[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int wordCounter = 0;

    //Checks for multiple non-word symbols.
    int checkForExtra = 0;
    char ch;

    //Let the user choose which file to read from.
    char whichFile[15];
    fgets(whichFile, 15, stdin);
    whichFile[strcspn(whichFile, "\n")] = 0;
    FILE *words = fopen(whichFile, "r");

    //Check if the opening of the file worked.
    if(words == NULL){

        printf("The chosen file couldn't be opened!\n");
        exit(1);

    }

    //If opened:
    else{

        //Until the end of file is reached.
        while ((ch = fgetc(words)) != EOF){
            
            //Check for following characters
            if(ch == ' ' || ch == ',' || ch == '?' 
                || ch == '!' || ch == '.' || ch == '\t'
                || ch == '\r'|| ch == '\n'){
                    
                    /*If they appear, then the
                    following variable remains 0.*/
                    checkForExtra = 0;
                     
            }

            /*If the above condition is not met
             and the variable still is 0 
             then only count it as a word.*/
            else if(checkForExtra == 0){

                wordCounter++;

                //A random different value.
                checkForExtra = 1;

            }

        }

    }

    fclose(words);

    printf("The file contains %d words.\n", wordCounter);

    return 0;

}