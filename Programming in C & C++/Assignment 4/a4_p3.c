/*
CH-230-A
a4 p4.3[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int num = 15;

float geometric_mean(float arr[], int num){

    float product = 1;
    float gmean = 1;

    for (int i = 0; i < num; i++){

        //Finding the product of all elements in the array.
        product *= arr[i];

    }

    //Using math.h to raise the product to 1/num th power.
    gmean = pow(product, (float)1 / num);

    return gmean;

}


float high_num(float arr2[], int num){

    int max = arr2[0];

    for (int i = 1; i < num; i++) {

        //If the current value is higher, the previous higher is replaced.
        if (arr2[i] > max){

            max = arr2[i];

        }

    }

    return max;

}


float low_num(float arr3[], int num){

    int min = arr3[0];

    for (int i = 1; i < num; i++) {
        
        //If the current value is smaller, the previous smaller is replaced.
        if (arr3[i] < min){

            min = arr3[i];

        }

    }

    return min;

}


float sum_num(float arr4[], int num){

    float sum = 0;

    for (int i = 0; i < num; i++){

        //Adding all the array elements.
        sum += arr4[i]; 

    } 
    
    return sum;

}


int main(){

    char c;
    float geomean[num];

    printf("Enter 15 floats in the array or enter a -ve number to stop the input\n");

    for(int idx = 0; idx < num; idx++){

        scanf("%f", &geomean[idx]);

        /*To stop the input, the user can enter -ve numbers and move onto the switch statment */
        if (geomean[idx] < 0){

            /*Removing the -ve number from the array and changing the value
            for num as num is used in the functions above*/
            geomean[idx] = '\0';
            num = idx;

            break; 

        }
 
    }

    getchar();
    printf("Enter either 'm' , 'h' , 'l' or 's': ");
    scanf("%c", &c);

    //Different scenarios and calling each functions for their respective tasks.
    switch(c){

        case 'm':

        printf("The geometric mean of the array = %f\n", geometric_mean(geomean, num));

        break;



        case 'h':

        printf("The highest number in the array = %f\n", high_num(geomean, num));

        break;



        case 'l':

        printf("The smallest number in the array = %f\n", low_num(geomean, num));

        break;



        case 's':

        printf("The sum of all numbers in the array = %f\n", sum_num(geomean, num));

        break;


    }

    return 0;

}