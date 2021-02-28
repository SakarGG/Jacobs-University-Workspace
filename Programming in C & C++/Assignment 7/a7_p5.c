/*
CH-230-A
a7 p7.5[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//Using function pointers to compare 
int ascend(const void *one, const void *two){

    //Typecasting voids to ints.
    const int *elem1 = one;
    const int *elem2 = two;

    /*Negative returns are pushed to the left
    so that the lowest number stays on the left
    followed by increasing numbers.*/
    return *elem1 - *elem2;

}


//Using function pointers to compare 
int descend(const void *one, const void *two){

    //Typecasting voids to ints.
    const int *elem1 = one;
    const int *elem2 = two;

    /*Positive returns are pushed to the left
    so that the greatest number stays on the left
    followed by decreasing numbers.*/
    return *elem2 - *elem1;

}


int main (){

    int sizeArr;
    char action;
    int *randomArr;

    scanf("%d", &sizeArr);

    //DMA
    randomArr = (int *) malloc(sizeof(int) * sizeArr);

    //Check if memory could not be allocated.
    if (randomArr == NULL){

        printf("Memory could not be allocated\n");
        exit(1);

    }

    //Input to the array.                                  
    for (int i = 0; i < sizeArr; i++){

        scanf("%d", &randomArr[i]);

    }

    //Infinite loop until exit.             
    while(1){

        scanf("%c", &action);

        //Using switch to go through all 3 cases.
        switch(action){

            case('a'):{

                //Using qsort with its 4 args to sort accordingly
                qsort(randomArr, sizeArr, sizeof(int), ascend);

                //Printing the ascending ordered array.
                for(int i = 0 ; i < sizeArr; i++){  

                   printf("%d ", randomArr[i]);

                }

                printf("\n");

                break;

            }

            case('d'):{
                
                //Using qsort with its 4 args to sort accordingly
                qsort(randomArr, sizeArr, sizeof(int), descend);

                //Printing the descending ordered array.
                for(int i = 0 ; i < sizeArr; i++){  

                   printf("%d ", randomArr[i]);

                }

                printf("\n");

                break;
                
            }

            //Exit the program.     
            case('e'):{

                return 0;
                break;
                
            }
            
        }

    }

    return 0;
    
}