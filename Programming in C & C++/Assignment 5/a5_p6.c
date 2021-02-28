/*
CH-230-A
a5 p5.6[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    float *ptr;

    //DMA according to size.
    scanf("%d", &n);
    ptr = (float *) malloc(sizeof(float) * n);

    //Check if no storage.
    if(ptr == NULL){
        
        printf("Memory could not be allocated");
        exit(1);

    }

    //Inputting to the float array.
    for(int i = 0; i < n; i++){
        
        scanf("%f", &ptr[i]);
         
    }

    //Using pointer to walk the array.
    float *count = ptr;

    for(; count < ptr + n; count++){
        
        /*When a -ve number is encountered, the current index
        is subtracted from initial pos.*/ 
        if(*count < 0){

        printf("Before the first negative value: %ld elements\n", count - ptr);

        //Then this for loop stops but still allows for remaining inputs.
        break;
        
        }
        
    }

    free(ptr);
    
    return 0;

}
