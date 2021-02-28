/*
CH-230-A
a7 p7.6[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {

    char name[30];
    int age;

};

typedef struct person Person;

void swap(Person *dat, int i){
    int temp1 = (dat+i)->age;
    (dat+i)->age = (dat+i-1)->age;
    (dat+i-1)->age = temp1;

    char temp2[30];
    strcpy(temp2, (dat+i)->name);
    strcpy((dat+i)->name, (dat+i-1)->name);
    strcpy((dat+i-1)->name, temp2);
}

void bubblesort(Person *dat, 
                int (*compare)(Person *a, Person *b),
                int (*compare2)(Person *a, Person *b),
                int n){
    /*compare with function `compare`,
    if equal, compare with function `compare2`*/
    int swapped,comparision;
    while(1){
        swapped = 0;
        for(int i = 1; i < n; i++){
            comparision = compare(dat+i-1,dat+i);
            if(comparision==1){
                swap(dat,i);
                swapped = 1;
            }
            else if(comparision==0){
                comparision = compare2(dat+i-1,dat+i);
                if(comparision==1){
                    swap(dat,i);
                    swapped = 1;
                }
            }
        }
        if(!swapped)break;
    }
}

int compareAge(Person *a, Person *b){
    if(a->age > b->age)return 1;
    else if(a->age == b->age)return 0;
    else return -1;
}

int compareName(Person *a, Person *b){
    int comparision = strcmp(a->name, b->name);
    if(comparision > 0)return 1;
    else if(comparision == 0)return 0;
    else return -1;
}

void printPersons(Person *a, int n){
    for(int i = 0; i < n; i++){
        printf("{%s, %i}; ",(a+i)->name,(a+i)->age);
    }
    printf("\n");
}

int main(){
    char z[30];
    int n;
    fgets(z, sizeof(z), stdin);
    sscanf(z, "%i", &n);

    Person *dat = (Person*)malloc(sizeof(Person)*n);
    if(dat==NULL){
        exit(1);
    }
    for(int i = 0; i < n; i++){
        fgets(dat[i].name, sizeof(dat[i].name), stdin);
        char *trailingnewline = strchr(dat[i].name, '\n');
        *trailingnewline = '\0';

        fgets(z, sizeof(z), stdin);
        sscanf(z, "%i", &(dat[i].age));
    }

    bubblesort(dat,compareName,compareAge,n);
    printPersons(dat,n);

    bubblesort(dat,compareAge,compareName,n);
    printPersons(dat,n);

    free(dat);

    return 0;
}
