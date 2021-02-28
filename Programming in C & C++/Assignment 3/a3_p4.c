/*
CH-230-A
a3 p3.4[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/


#include <stdio.h>

int position(char str[], char c){

int idx;

/* Loop until end of string */

/*My comment: Added semicolon in the for loop*/
for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx);
/* do nothing */

return idx;

}

int main() {

char line[80];

while (1) {

printf("Enter string:\n");
fgets(line, sizeof(line), stdin);
printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));

}

}





