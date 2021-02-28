/*
CH-230-A
a8 p8.5[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char paragraph[1000];
    int sum = 0;

    //Create a file.
    FILE *File_With_Paragraph = fopen("chars.txt", "w");

    //Check if the creation failed.
    if(File_With_Paragraph == NULL){

        printf("The chosen file couldn't be created/ opened!\n");
        exit(1);

    }

    //Write texts in the file, to be used later.
    fgets(paragraph, 1000, stdin);
    fprintf(File_With_Paragraph, "%s", paragraph);
    fclose(File_With_Paragraph);

    //This reads the created file.
    FILE *File_With_Chars = fopen("chars.txt", "r");

    //Pick out the first two chars from the file.
    char charTwo[2];
    fscanf(File_With_Chars, "%2s", charTwo);
    fclose(File_With_Chars);

    //Add them both in terms of their ASCII code.
    for(int i = 0; i < 2; i++){

        sum += charTwo[i];

    }

    //Create a new file in which the sum would be stored in.
    FILE *File_With_SumASCII = fopen("codesum.txt", "w");

    //File creation error handler.
    if(File_With_SumASCII == NULL){

        printf("The chosen file couldn't be created/ opened!\n");
        exit(1);

    }

    //Write in the file.
    fprintf(File_With_SumASCII, "The sum of the first two chars: %d", sum);
    fclose(File_With_SumASCII);

    return 0;

}