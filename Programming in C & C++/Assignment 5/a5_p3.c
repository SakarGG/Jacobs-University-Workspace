/*
CH-230-A
a5 p5.3[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int count_lower(char* str){

    int lowercounter = 0;
    
    //Incrementing address after each iteration.
    for (; *str!='\n'; str++){

        /*Using characters to determine if it falls between 
        a range of ASCII values that are lowercased.*/
        if((*str >= 'a' && *str <= 'z')){
              
            lowercounter++;

        }

    }
        
    return lowercounter;

}


int main(){
    
    char sentence[50];
    
    fgets(sentence, 50, stdin);
    
    /*fgets always generates a '\n' and if the user decides 
    to input nothing, the 0th position will be the '\n' and 
    the program stops if it's true*/
    while(sentence[0]!='\n') { 
        
        printf("Number of lowercase letters = %d", count_lower(sentence));
        printf("\n");
        fgets(sentence, 50, stdin); 
        
    }

    return 0;

}
