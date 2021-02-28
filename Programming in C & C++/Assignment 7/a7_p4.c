/*
CH-230-A
a7 p7.4[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>

//Function to convert all chars to lowercase.
void allLow(char str1[]){

    //Going through the chars.
    for (int i = 0; str1[i]; i++){

        //Using tolower function inside ctype.h
        printf("%c", tolower(str1[i]));

    }

}


//Function to convert all chars to uppercase.
void allHigh(char str2[]){

    //Going through the chars.
    for (int j = 0; str2[j]; j++){

        //Using toupper function inside ctype.h
        printf("%c", toupper(str2[j]));

    }

}


/*Function to convert all lowercase to uppercase 
and vice versa.*/
void someLowsomeHigh(char str3[]){

    //Going through the chars.
    for (int k = 0; str3[k]; k++){

        if(islower(str3[k])){

            printf("%c", toupper(str3[k]));

        }

        //Using tolower and toupper again.

        else{

            printf("%c", tolower(str3[k]));

        }

    }

}


int main(){

    char decide;

    char strArr[200];
    fgets(strArr, 200, stdin);

    while(1){
        
        /*Space needed in front of %c because it shows bus error.
        Not have memory access violations.*/
        scanf(" %c", &decide);

        //End the program if 4 i.e. 52(ASCII) is inputted.
        if(decide == 52){

            break;

        }

        /*Using ASCII values of chars and have the facevalue
        of the char and int the same.*/
        int facevalue = (int)decide - 48;

        //Using function pointers during the call step.
        void(*ptr[])(char strArr[]) = {allHigh, allLow, someLowsomeHigh};
        //Going through the addresses.
        (*ptr[facevalue-1])(strArr);
    }

    return 0;

}