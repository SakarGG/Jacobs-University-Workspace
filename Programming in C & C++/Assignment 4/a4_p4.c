/*
CH-230-A
a4 p4.4[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int count_consonants(char str[]){
    
    int idx, consonants = 0;
    
    for (idx = 0; str[idx] != '\0'; idx++){
        
        //Using ASCII values of characters to determine number of consonants
        //Skip counts if vowels are encountered
        if ((str[idx] == 97|| str[idx] == 101|| str[idx] == 105|| str[idx] == 111|| str[idx] == 117
           ||str[idx] == 65|| str[idx] == 69|| str[idx] == 73|| str[idx] == 79|| str[idx] == 85 )){

            continue;

        }

        /*The ranges cover the uppercase and lowercase letters but skips the ones with vowels
        as it is dealt with in the if statement. Everything else within the range is counted*/
        else if((str[idx] >= 97 && str[idx] <= 122) || (str[idx] >= 65 && str[idx] <= 90 )){

            consonants++;
            
        }

    }
        
    return consonants;

}


int main() {
    
    char str[100];
    
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

    
   
