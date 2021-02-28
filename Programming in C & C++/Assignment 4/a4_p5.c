/*
CH-230-A
a4 p4.5[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int n = 100;

int count_consonants(char str[]){
    
    int consonants = 0;
    char *ptr;

    //Pointing to the address of the first element of the array.
    ptr = &str[0];
    
    //Incrementing address after each iteration.
    for (; *ptr!='\n'; ptr++){

        //Using characters itself to determine number of consonants
        //Skip counts if vowels are encountered
        if(*ptr == 'a' || *ptr == 'e' ||  *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
          *ptr == 'A' || *ptr == 'E'|| *ptr == 'I' || *ptr == 'O' || *ptr == 'U'){
              
              continue;

        }

        else if((*ptr > 'a' && *ptr < 'z') || (*ptr > 'A' && *ptr < 'Z')){

            consonants++;
            
        }

    }
        
    return consonants;

}


int main() {
    
    char str[n];
    
    fgets(str, sizeof(str), stdin);
    
    /*fgets always generates a \n and if the user decides to input nothing,
    the 0th position will be the \n and the program stops if it's true*/
    while(str[0]!='\n') { 
        
        printf("Number of consonants=%d", count_consonants(str));
        printf("\n");
        fgets(str, sizeof(str), stdin); 
        
    }

    return 0;

}
