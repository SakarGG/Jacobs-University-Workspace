/*
CH-230-A
a5 p5.8[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

/*Global size variables as it used in every function.
Better than passing as an argument in each function.*/

/*m is column for mat1 and row for mat2 so is 
compatible for matrix multiplication.*/

int n, m ,p;

//matrix_1 and matrix_2 for input.
void matrix_1(int **matrix_1){
    
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < m; j++){
            
            scanf("%d", &matrix_1[i][j]);
            
        }

    }

}


void matrix_2(int **matrix_2){
    
    for(int i = 0; i < m; i++){
        
        for(int j = 0; j < p; j++){
            
            scanf("%d", &matrix_2[i][j]);
            
        }
        
    }

}


//multiplication to multiply the two matrices.
void multiplication(int **matrix_1, int **matrix_2, int **result){
    
    //Intial elements of result matrix to 0 or NULL.
    for(int i = 0; i < n; i++){
                            
        for(int j = 0; j < p; j++){
                                
            result[i][j] = 0;
                                
        }
                            
    }
                        
    //Now multiply and storing of elements.

    /*The first two for loops is the rows and columns for the
    result matrix,
    The third for loop is to make sure the matrix is multiplied
    in a correct manner: [n1*p1  n1*p2]
                         [n2*p1  n2*p2]*/
    for(int i = 0; i < n; i++){
                            
        for(int j = 0; j < p; j++){
                                
            for(int k = 0; k < m; ++k){
                                    
                result[i][j] += matrix_1[i][k] * matrix_2[k][j];
                                    
            }

        }

    }

}


//display function displays everything.
void display(int **matrix_1, int **matrix_2, int **result){
    
    printf("Matrix A:\n");
                
    for (int i = 0; i < n; i++){
                    
        for (int j = 0; j < m; j++){
                        
            printf("%d  ", matrix_1[i][j]);
                            
        }

        //Differentiate different rows.
        printf("\n");
                    
    }

    printf("Matrix B:\n");
                
    for (int i = 0; i < m; i++){
                    
        for (int j = 0; j < p; j++){
                        
            printf("%d  ", matrix_2[i][j]);
                                      
        }

        printf("\n");
                    
    }

    printf("The multiplication result AxB:\n");
                
    for (int i = 0; i < n; i++){
                    
        for (int j = 0; j < p; j++){
                        
            printf("%d  ", result[i][j]);
                            
        }

        printf("\n");
                    
    }

}


int main(){
    
    //Row for mat_1.
    scanf("%d", &n); 

    //Column for mat_1, Row for mat_2.
    scanf("%d", &m); 

    //Column for mat_2.
    scanf("%d", &p);
    
    /*Using double pointers to point to rows and columns
    separately.*/
    int **mat_1= (int **) malloc(sizeof(int *) * n);
    
    //Check for no allocation.
    if(mat_1 == NULL){
       
       printf("Memory could not be allocated.\n");
       exit(1);
       
    }

    //Pointing to columns for each row.
	for(int i = 0; i < n; i++){

		mat_1[i] = (int *) malloc(sizeof(int) * m);
        
        //Check for no allocation.
        if(mat_1[i] == NULL){
            
            printf("Memory could not be allocated.\n");
            exit(1);
            
        }

    }

    //Same allocation as above.
    int **mat_2= (int **) malloc(sizeof(int *) * m);
    
    if(mat_2 == NULL){
       
       printf("Memory could not be allocated.\n");
       exit(1);
       
    }

	for(int i = 0; i < m; i++){

		mat_2[i] = (int *) malloc(sizeof(int) * p);
        
        if(mat_2[i] == NULL){
            
            printf("Memory could not be allocated.\n");
            exit(1);
            
        }

    }

    //Same allocation as above.

    /*Multiplied matrix has the size of
    row of matrix 1 and column of matrix 2.*/
    int **result= (int **) malloc(sizeof(int *) * n);
    
    if(result == NULL){
       
       printf("Memory could not be allocated.\n");
       exit(1);
       
    }

	for(int i = 0; i < n; i++){

		result[i] = (int *) malloc(sizeof(int) * p);
        
        if(result[i] == NULL){
            
            printf("Memory could not be allocated.\n");
            exit(1);
            
        }

    }
    
    //Printing elements of Matrix 1.
    matrix_1(mat_1);

    //Printing elements of Matrix 2.
    matrix_2(mat_2);

    //Multiplication of Matrix 1 and Matrix 2.
    multiplication(mat_1, mat_2, result);

    //Display all 3 matrices.
    display(mat_1, mat_2, result);
    
    /*Freeing 2D dynamic array requires us to free
    the chunks first (second pointer) before 
    the main pointer.*/
    for(int i = 0; i < n; i++){
       
        free(mat_1[i]);
       
    }
    free(mat_1);
   

    for(int i = 0; i < m; i++){
        
        free(mat_2[i]);
       
    }
    free(mat_2);


    for(int i = 0; i < n; i++){
       
       free(result[i]);
       
    }
    free(result);

   return 0;

}