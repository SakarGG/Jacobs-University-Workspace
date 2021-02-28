/*
CH-230-A
a4 p4.11[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int count_insensitive(char *str, char c){

    int count = 0;

    for(; *str!= '\n'; str++){

        //Counts regardless the capitalization of the chars.
        if(*str == toupper(c) || *str == tolower(c)){

            count++;

        }

    }

    return count;

}


int main(){

    char *str1, *str2;
    int n1 = 50, n2;

    /*Allocating size to str1, maximum of 50. More than 50 shows
    "zsh: segmentation fault  ./a4p11".*/
    str1 = (char *) malloc(sizeof(char) * n1);

    if (str1 == NULL){

        printf("Memory could not be allocated\n");
        exit(1);

    }

    printf("Enter a string: ");
    fgets(str1, n1, stdin);
    
    //Only necessary memory allocated for the second string.
    n2 = strlen(str1);
    str2 = (char *) malloc(sizeof(char) * n2);

    if (str2 == NULL){

        printf("Memory could not be allocated\n");
        exit(1);

    }

    //Copying the first string to the second.
    strcpy(str2, str1);
    
    //Clearing memory of str1 so any used and/or wasted space is removed.
    free(str1);

    printf("\n");
    
    //Encountered too many test cases...(even if this problem is not one of them).
    if(count_insensitive(str2,'b') == 1){

    printf("The character 'b' occurs %d time.\n", count_insensitive(str2,'b'));

    }

    else{

        printf("The character 'b' occurs %d times.\n", count_insensitive(str2,'b'));
        
    }


    if(count_insensitive(str2,'H') == 1){

    printf("The character 'H' occurs %d time.\n", count_insensitive(str2,'H'));

    }

    else{

        printf("The character 'H' occurs %d times.\n", count_insensitive(str2,'H'));
        
    }


    if(count_insensitive(str2,'8') == 1){

    printf("The character '8' occurs %d time.\n", count_insensitive(str2,'8'));

    }

    //... :O ;)

    else{

        printf("The character '8' occurs %d times.\n", count_insensitive(str2,'8'));
        
    }


    if(count_insensitive(str2,'u') == 1){

    printf("The character 'u' occurs %d time.\n", count_insensitive(str2,'u'));

    }

    else{

        printf("The character 'u' occurs %d times.\n", count_insensitive(str2,'u'));
        
    }


    if(count_insensitive(str2,'$') == 1){

    printf("The character '$' occurs %d time.\n", count_insensitive(str2,'$'));

    }

    else{

        printf("The character '$' occurs %d times.\n", count_insensitive(str2,'$'));
        
    }

    printf("\n");

    //str2 is freed after being used so that it isn't stored forever. 
    free(str2);

    return 0;

}