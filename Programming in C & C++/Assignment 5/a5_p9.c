/*
CH-230-A
a5 p5.9[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//GV as they are used everywhere unchanged.
int r, c, d;

//Insert into the 3D array
void fillup(int ***shape){
    
    //Cycle rows.
    for(int i = 0; i < r; i++){
        
        //Cycle column of a particular row.
        for(int j = 0; j < c; j++){
            
            /*Cycle depth of a particular column of
            a particular row.*/
            for (int k = 0; k < d; k++){
                
                scanf("%d", &shape[i][j][k]);
                
            }
            
        }
        
    }
    
}

//Only print 2D from 3D
void ThreeDto2D(int ***cube){
    
    //Output array is represented as the depth of the 3D array.
    for(int k = 0; k < d; k++){
        
        //After each iteration, go to another section.
        printf("Section %d:\n", k+1);
        
        for (int i = 0; i < r; i++){
            
            for(int j = 0; j < c; j++){
                
                printf("%d ", cube[i][j][k]);


            }
            
            //Differentiate different rows.
            printf("\n");
        
        }
        
    }

}


int main(){

    scanf("%d", &r);
    scanf("%d", &c);
    scanf("%d", &d);

    //Triple pointers
    /*The main pointer points to row chunks which points
    to column chunks which points to depth chunks*/ 
    int ***cuboid = (int ***) malloc(sizeof(int**) * r);
    
    if(cuboid == NULL){
       
       printf("Memory could not be allocated.\n");
       exit(1);
       
    }

    for (int i = 0; i < r; i++) {
        
        cuboid[i] = (int **) malloc(sizeof(int *) * c);
        
        if(cuboid[i] == NULL){
            
            printf("Memory could not be allocated.\n");
            exit(1);
       
        }
        
        for (int j = 0; j < c; j++) {
            
            cuboid[i][j] = (int *) malloc(sizeof(int) * d);

            if(cuboid[i][j] == NULL){
                
                printf("Memory could not be allocated.\n");
                exit(1);
                
            }

        }

    }

    /*Calls the input function, so that it can be
    printed using the next function call*/
    fillup(cuboid);
    ThreeDto2D(cuboid);

    /*Required to free from the little bits 
    going up to chunks and then the main pointer.*/
    for(int i = 0; i < r; i++){

        for(int j = 0; j < c; j++){

            free(cuboid[i][j]);

        }

        free(cuboid[i]);
    }
    free(cuboid);

    return 0;

}