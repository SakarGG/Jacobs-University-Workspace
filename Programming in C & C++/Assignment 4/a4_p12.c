/*
CH-230-A
a4 p4.12[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void replaceAll(char *str, char c, char e){

    //Using pointer/address to walk the string.
    for(; *str!= '\0'; str++){

        /*If the character to be replaced is found, 
        the new character is put in its place.*/
        if(*str == c){

            *str = e;

        }

    }

}


int main (){

    char to_be_morphed[80], saved_copy[80], c, e, dets[8];

    //Prints 'a' for the first iteration.
    dets[0] = 'a'; dets[1] = 0; dets[2] = 0; dets[3] = 0;
    dets[4] = 0; dets[5] = 0; dets[6] = 0; dets[7] = '\0';
    
    while(1){

        printf("\n");
        
        printf("Enter %s string to be morphed: ", dets);
        fgets(to_be_morphed, 80, stdin);

        //Prints 'another' from the second iteration onwards.
        dets[1] = 'n'; dets[2] = 'o'; dets[3] = 't'; dets[4] = 'h';
        dets[5] = 'e'; dets[6] = 'r'; dets[7] = '\0'; 

        //Copying the string because the inputted one would be morphed later.
        strcpy(saved_copy, to_be_morphed);

        //The program stops if "stop" is entered.
        if(to_be_morphed[0] =='s' && to_be_morphed[1] =='t' && to_be_morphed[2] =='o'
           && to_be_morphed[3] =='p' && to_be_morphed[4] =='\n'){

            break;
        }

        //Removes the trailing '\n' present in fgets
        to_be_morphed[strcspn(to_be_morphed, "\n")] = 0;
        saved_copy[strcspn(saved_copy, "\n")] = 0;

        printf("Enter the character to be replaced: ");
        scanf("%c", &c);

        getchar();
        printf("Enter the replacing character: ");
        scanf("%c", &e);

        getchar();
        printf("\n");

        //Calling the new string produced by the function.
        replaceAll(to_be_morphed, c, e);

        //Presenting the before string.
        printf("You entered the string \"%s\" and wanted to replace '%c' with '%c'.\n", saved_copy, c, e);
        
        //Presenting the after string.
        printf("The morphed string is: \"%s\".\n", to_be_morphed);

    }

    return 0;

}