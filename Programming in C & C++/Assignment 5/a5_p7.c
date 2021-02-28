/*
CH-230-A
a5 p5.7[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char str1[100], str2[100], *strmain; 
    int len;

    //Input strings.
    fgets(str1, 100, stdin); 
    fgets(str2, 100, stdin); 

    //Removing the trailing '\n' found in fgets.
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    //Concatenating both the strings.
    strcat(str1, str2); 
    
    /*Getting the length of the edited string as the
    new char array would be DMAed.*/
    len = sizeof(str1);

    //DMA.
    strmain = (char *) malloc(sizeof(char) * len); 

    //Check if array couldn't be allocated.
    if (strmain == NULL){ 

        printf("Memory could not be allocated.\n");
        exit(1);

    }

    //Copy function of string.h.
    strcpy(strmain, str1);
    printf ("Result of concatenation: %s\n", strmain); 

    //Deallocation.
    free(strmain);

    return 0;

}