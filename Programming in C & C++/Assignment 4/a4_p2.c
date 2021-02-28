/*
CH-230-A
a4 p4.2[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main(){
    
    char string1[50];
    int i = 0;
    
    fgets(string1, sizeof(string1), stdin);

    //fgets has \n in the end so loop until that position is reached
    while(string1[i] != '\n'){
        
        //Mod used to differentiate even and odd positions of the array
        if (i % 2){
            printf("%2c\n", string1[i]);
        }

        else{ 
            printf("%c\n", string1[i]);
        }

        i++;
        
    }
    
    return 0;

}