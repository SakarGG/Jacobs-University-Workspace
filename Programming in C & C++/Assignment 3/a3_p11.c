/*
CH-230-A
a3 p3.11[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){

    char one[1000], two[1000], three[1000], c, *position;
    int len1, len2, compare;
    
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    scanf("%s", &c);

    //Removes the trailing '\n' present in fgets
    one[strcspn(one, "\n")] = 0;
    two[strcspn(two, "\n")] = 0;

    len1 = strlen(one);
    len2 = strlen(two);

    compare = strcmp(one, two);
    position = strchr(two, c);

    printf("length1=%d\n", len1);
    printf("length2=%d\n", len2);

    printf("concatenation=%s\n", strcat(one, two));

    printf("copy=%s\n", strcpy(three, two));

    //strcmp compares characters based on their ASCII value
    if (compare > 0){

        printf("one is larger than two\n");

    }

    else if(compare < 0){

        printf("one is smaller than two\n");

    }

    else{

        printf("one is equal to two\n");

    }

    //Checks if position has a value or not
    if (position){

        printf("position=%ld\n", position - two);

    }

    else{

        printf("The character is not in the string\n");

    }
    
    
    return 0;

}

    
    

    

