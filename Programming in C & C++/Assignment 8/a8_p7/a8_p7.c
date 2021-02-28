/*
CH-230-A
a8 p8.7[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *txt1, *txt2, *merge12;

    //Reading from existing files.
    txt1 = fopen("text1.txt", "r");
    txt2 = fopen("text2.txt", "r");

    //Check if the opening of the files failed.
    if(txt1 == NULL || txt2 == NULL){

        printf("The chosen file couldn't be opened!\n");
        exit(1);

    }

    //If it opened, then the else statement.
    else{
        
        //Creating a new file to write in.
        merge12 = fopen("merge12.txt", "w");

        //Check if the creation failed. 
        if(merge12 == NULL){

                printf("The chosen file couldn't be created!\n");
                exit(1);

        }

        //If it was successfully created, then the else statement.
        else{
            
            //Pointer to that particular line. 
            char *linePtr = NULL;

            //Variable for the length of that line in the text.
	        size_t lenofLine = 0;

            //To read line by line.
	        ssize_t readLines;

            //Until the EOF is reached.
            while ((readLines = getline(&linePtr, &lenofLine, txt1)) != -1){

                    //Copy to the new file.
                    fprintf(merge12, "%s", linePtr);

            }

            fclose(txt1);

            //Separate different files.
            fprintf(merge12, "\n");

            //Until the EOF is reached.
            while ((readLines = getline(&linePtr, &lenofLine, txt2)) != -1){

                    //Copy to the new file.
                    fprintf(merge12, "%s", linePtr);

            }

            fclose(txt2);
            fclose(merge12);

        }


    }

    return 0;

}
